//==================================================================================================
//! @file ControlBrakes.c
//! @brief Management of Brakes
//! @see Target for ...
//! @section app
//! @subsection IO
//! @author NEOTEC/FV
//! @created 15.11.2022 NEOTEC/FV
//! copyrights (c) all rights reserved by NEOTEC
//=================================================================================================

#include "ControlBrakes.h"

// GLOBAL VARIABLES DECLARATIONS ==================================================================
	TBoolean boTimeCrossingBrakesOn;/*Global variable*/

//-----------------------------------------------------------------------------------------------------
//! @brief ControlBrakes
//!
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 15.11.2022 NEOTEC/FV
//!
//! @change
//!
//! @care
//! @todo
//
//
//-----------------------------------------------------------------------------------------------------
TVoid vControlBrakes(TVoid)
{

	vControlEmergencyBrake();

	TInt32		i32Speed;
	if(gDb_tRamEcuInputsC0.i32FixeAxleFrequency>=gDb_tRamEcuInputsC0.i32OscillantAxleFrequency)
		i32Speed=gDb_tRamEcuInputsC0.i32FixeAxleFrequency;
	else
		i32Speed=gDb_tRamEcuInputsC0.i32OscillantAxleFrequency;

	vControlServiceAxleBrake(i32Speed,&gDb_tRamEcuOutputsC0.boEvServiceBrakeAxleOsciCmdBool,&gDb_tRamEcuOutputsC0.boEvServiceBrakeAxleFixeCmdBool);

	/* safety service brake*/
	vSafetyServiceBrake();

	vControlParkAxleBrake();
}

//-----------------------------------------------------------------------------------------------------
//! @brief Control Service Axle Brake
//!
//! @param[in] 		 TInt32			- Speed Axle sensor
//! @param[out] 	 TBoolean	 		- Ev service Axle brake Av
//! @param[out]		 TBoolean	 		- Ev service Axle brake Ar
//!
//! @globvar
//! Joystick advance scaling
//! StateServiceBrakeRail
//! gDb_tNvParametersC0.u16TresholdMinimalSpeedServiceBrake
//! @staticvar
//!
//! @created 31.07.2018 HYDAC/CK
//!
//! @change	 11.01.2019 HYDAC/CK Brake after ramp of joystick
//!			 25.02.2019 HYDAC/CK add condition to define brake when gachette or pedal is released
//!			 05.03.2019 HYDAC/CK switch position condition if with else if in case GE_DEFINE_BRAKE for priority to detect dead man pedal
//! @change  18.04.2019 NEOTEC/FV - Change condition to active sequence emergency brake
//! @care
//! @todo
//-----------------------------------------------------------------------------------------------------
TVoid vControlServiceAxleBrake(TInt32 i32SpeedAxleSensor, TBoolean *boEvServiceAxleAvBrake,TBoolean *boEvServiceAxleArBrake)
{
	/* local variable*/
	TUint32		u32DtEmergencyBrake;
	TBoolean	boTimerEmergencyServiceBrakeRailStatus;
	TBoolean	boTimerEmergencyServiceBrakeRailEvent;

	/*=============================================================================================*/
	/* 									Service axle brake	(freinage principal)				*/
	/* =============================================================================================*/
	/* run block*/
	boEleTimerCalculate(&tTimerSecondServiceAxleBrakeRail);
	boTimerEmergencyServiceBrakeRailStatus = boEleTimerCalculate(&tTimerEmergencyServiceBrakeRail);
	/* get event of block*/
	boTimerEmergencyServiceBrakeRailEvent = boEleTimerGetEvent(&tTimerEmergencyServiceBrakeRail);


	static TBoolean	boApplyDirectServiceBrakeOscillant= FALSE;
	static TBoolean	boApplyDirectServiceBrakeFixe= FALSE;
	static TBoolean	boApplyNoSpeedServicesBrakes= FALSE;
	static TBoolean boTimeOutBrake = FALSE;

	/*boApplyDirectServiceBrakeOscillant*/
	if(gDb_tRamGeneralC0.boAuthorizeTransRailMovement ==FALSE
	&& ((gDb_tRamEcuOutputsC0.u16ForwardPumpCommand <= 0 && gDb_tRamEcuOutputsC0.u16BackwardPumpCommand <= 0)
		|| gDb_tRamEcuOutputsC0.u16ForwardPumpCommand > 0)
	&& gDb_tRamGreenEffC0.boAutorizeTransRailElectric == FALSE
	&& (gDb_tRamGreenEffC0.boTransRailElectricRampOngoing == FALSE //GREEN  Fin des rampes
	|| gDb_tRamGeneralC0.eRailTranslationDirection == GE_AV_RAIL_DIR) //GREEN Sens Av
	)
		boApplyDirectServiceBrakeOscillant =TRUE;
	else
		boApplyDirectServiceBrakeOscillant =FALSE;

	/*boApplyDirectServiceBrakeFixe*/
	if(gDb_tRamGeneralC0.boAuthorizeTransRailMovement ==FALSE
	&& ((gDb_tRamEcuOutputsC0.u16ForwardPumpCommand <= 0 && gDb_tRamEcuOutputsC0.u16BackwardPumpCommand <= 0)
		|| gDb_tRamEcuOutputsC0.u16BackwardPumpCommand > 0)
	&& gDb_tRamGreenEffC0.boAutorizeTransRailElectric == FALSE
	&& (gDb_tRamGreenEffC0.boTransRailElectricRampOngoing == FALSE //GREEN Fin des rampes
	|| gDb_tRamGeneralC0.eRailTranslationDirection == GE_AR_RAIL_DIR) // Sens Ar
	)
		boApplyDirectServiceBrakeFixe =TRUE;
	else
		boApplyDirectServiceBrakeFixe =FALSE;

	/*boApplyNoSpeedServicesBrakes*/
	if(gDb_tRamGeneralC0.boAuthorizeTransRailMovement ==FALSE
	&& gDb_tRamGreenEffC0.boAutorizeTransRailElectric == FALSE //GREEN
	&& i32SpeedAxleSensor <= gDb_tNvParametersC0.u16TresholdMinimalSpeedServiceBrake
	)
		boApplyNoSpeedServicesBrakes =TRUE;
	else
		boApplyNoSpeedServicesBrakes =FALSE;

	/*boStartTimeout*/
	static TBoolean boStartTimeout = FALSE;
	if (gDb_tRamGeneralC0.boAuthorizeTransRailMovement == FALSE
	&& gDb_tRamGreenEffC0.boAutorizeTransRailElectric == FALSE //GREEN
	)
		boStartTimeout = TRUE;
	else
		boStartTimeout = FALSE;

	/*i16CptTimeOut*/
	static TInt16 i16CptTimeOut = 0;
	static TInt16 i16CptTimeOutMax = 0;
	i16CptTimeOutMax = gDb_tNvParametersC0.u32ServiceAxleBrakeTimeBeforeBrake;//provisoire 500x10ms = 5s

	if(boStartTimeout == TRUE)
	{
		if (i16CptTimeOut>=i16CptTimeOutMax)
			i16CptTimeOut=i16CptTimeOutMax;
		else
			i16CptTimeOut=i16CptTimeOut+1;
	}
	else if (boStartTimeout == FALSE)
		i16CptTimeOut=0;

	/*boTimeOutBrake*/
	if ( i16CptTimeOut == i16CptTimeOutMax)
		boTimeOutBrake = TRUE;
	else
		boTimeOutBrake = FALSE;

	/*boRadioOscillantxAxleCommand*/
	TBoolean boRadioOscillantxAxleCommand =FALSE;
	if(gDb_tRamSelectControlPost.eSelectedControlPost == GE_POST_RADIO
	&&(	gDb_tRamEcuOutputsC0.boEvUpAxleOscillantCommandBool || gDb_tRamEcuOutputsC0.boEvDownAxleOscillantCommandBool))
		boRadioOscillantxAxleCommand = TRUE;
	else
		boRadioOscillantxAxleCommand = FALSE;

	/*boRadioFixexAxleCommand*/
	TBoolean boRadioFixexAxleCommand =FALSE;
	if(gDb_tRamSelectControlPost.eSelectedControlPost == GE_POST_RADIO
	&&(	gDb_tRamEcuOutputsC0.boEvUpAxleFixeCommandBool || gDb_tRamEcuOutputsC0.boEvDownAxleFixeCommandBool ))
		boRadioFixexAxleCommand = TRUE;
	else
		boRadioFixexAxleCommand = FALSE;

	/*boActiveCrossingBrakes*/
	static TBoolean boActiveCrossingBrakes = FALSE;
	if(gDb_tRamGeneralC0.boEmergencyBrake == TRUE
	|| gDb_tRamGeneralC0.boStabilizedStop  == TRUE
	)
		boActiveCrossingBrakes = TRUE;
	else
		boActiveCrossingBrakes = FALSE;

	/*boTimeCrossingBrakesOn*/
	if(boActiveCrossingBrakes  == TRUE && gDb_tRamGeneralC0.boEmergencyServiceBrakeTimerDone == FALSE)
	{
		/* active service brake*/
		boTimeCrossingBrakesOn = TRUE;
		/* check status and event of timer*/
		if(boTimerEmergencyServiceBrakeRailStatus == FALSE && boTimerEmergencyServiceBrakeRailEvent == FALSE)
		{
			/* start timer*/
			u32EleTimerStart(&tTimerEmergencyServiceBrakeRail);
		}
		/* check if timer is done*/
		if(boTimerEmergencyServiceBrakeRailEvent == TRUE)
		{
			gDb_tRamGeneralC0.boEmergencyServiceBrakeTimerDone = TRUE;
		}

		if(gDb_tRamGeneralC0.boEmergencyServiceBrakeTimerDone == TRUE)
		{
			/* desactive service brake*/
			boTimeCrossingBrakesOn = FALSE;
		}
	}
	else if (boActiveCrossingBrakes  == FALSE)
	{
		/* resset timer*/
		eEleTimerManStop(&tTimerEmergencyServiceBrakeRail, &u32DtEmergencyBrake);
		/* reset variable*/
		gDb_tRamGeneralC0.boEmergencyServiceBrakeTimerDone = FALSE;
		boTimeCrossingBrakesOn = FALSE;
	}

	/*A VOIR Code mort*/
	/* active service brake*/
	/*No Emergency cases*/
	if(
	((boApplyDirectServiceBrakeOscillant == TRUE
	|| boApplyNoSpeedServicesBrakes == TRUE
	|| boTimeOutBrake == TRUE
	|| (gDb_tRamBrakeTest.eBrakeTestSelected == GE_OSCI_SERVICE_BRAKE && gDb_tRamEvision7C0.bogOffTrackTestBrakeActivated == FALSE) //Clean Brake
	|| gDb_tRamBrakeTest.boForceOsciServiceBrake == TRUE ) // brake test fixe axle
	&& boActiveCrossingBrakes == FALSE
	&& boRadioOscillantxAxleCommand == FALSE
//GREEN 	&& gDb_tRamEcuOutputsC0.boEvDeflectorTransmissionCommand == FALSE //Transmission rail
	)
	/* Other cases*/
	||((boTimeCrossingBrakesOn == TRUE
	|| (gDb_tRamBreakInBrakeC0.boBreakInBrakeRunning == TRUE && gDb_tRamBreakInBrakeC0.eServiceBrakeSelected == GE_OSCI_SERVICE_BRAKE) // break in brake Oscillant axle
	|| (gDb_tRamBreakInBrakeC0.boBreakInBrakeRunning == TRUE && gDb_tRamBreakInBrakeC0.eServiceBrakeSelected == GE_SERVICE_BRAKES)) // break in brake two axles
	&& boRadioOscillantxAxleCommand == FALSE)
	)
		*boEvServiceAxleAvBrake = TRUE;
	else
		*boEvServiceAxleAvBrake = FALSE;
	/*A VOIR Code mort*/
	/*No Emergency cases*/
	if(
	((boApplyDirectServiceBrakeFixe == TRUE
	|| boApplyNoSpeedServicesBrakes == TRUE
	|| boTimeOutBrake == TRUE
	|| (gDb_tRamBrakeTest.eBrakeTestSelected == GE_FIXE_SERVICE_BRAKE && gDb_tRamEvision7C0.bogOffTrackTestBrakeActivated == FALSE) //Clean Brake
	|| gDb_tRamBrakeTest.boForceFixeServiceBrake == TRUE ) // brake test oscillant Axle
	&& boActiveCrossingBrakes == FALSE
	&& boRadioFixexAxleCommand == FALSE
//GREEN	&& gDb_tRamEcuOutputsC0.boEvDeflectorTransmissionCommand == FALSE //Transmission rail
	)
	/* Other cases*/
	||((boTimeCrossingBrakesOn == TRUE
	|| (gDb_tRamBreakInBrakeC0.boBreakInBrakeRunning == TRUE && gDb_tRamBreakInBrakeC0.eServiceBrakeSelected == GE_FIXE_SERVICE_BRAKE) // break in brake Fixe axle
	|| (gDb_tRamBreakInBrakeC0.boBreakInBrakeRunning == TRUE && gDb_tRamBreakInBrakeC0.eServiceBrakeSelected == GE_SERVICE_BRAKES)) // break in brake two axles
	&& boRadioFixexAxleCommand == FALSE)
	)
		*boEvServiceAxleArBrake = TRUE;
	else
		*boEvServiceAxleArBrake = FALSE;

}


//-----------------------------------------------------------------------------------------------------
//! @brief Control park Axle Brake
//!
//! @param[in]		 TBoolean			-
//! @param[out] 	 TBoolean	 		-
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 31.07.2018 HYDAC/CK
//!
//! @change  18.04.2019 NEOTEC/FV - Change condition to active sequence emergency brake and it is possible to move two axles in same time in Radio mode
//! @change  06.06.2019 NEOTEC/FV - if DM_SERVICE_BRAKE_PRESSURE_FAULT used brake park
//!
//! @care
//! @todo	Add condition with speed sensor to detect machine is stopped
//-----------------------------------------------------------------------------------------------------
TVoid vControlParkAxleBrake(TVoid)
{
	/* park brake , pilot = no brake*/

	/* Rising boTimeCrossingBrakesOn*/
	static TBoolean PreviousboTimeCrossingBrakesOn =FALSE;
	TBoolean RisingboTimeCrossingBrakesOn = FALSE;
	if (boTimeCrossingBrakesOn == TRUE && PreviousboTimeCrossingBrakesOn == FALSE)
		RisingboTimeCrossingBrakesOn = TRUE;
	/* Memorize the previous value*/
	PreviousboTimeCrossingBrakesOn = boTimeCrossingBrakesOn;


	/*modif provisoire pour joystick vraiment au neutre stable pour eviter valeur !=0 sur arret d'urgence*/
	static TBoolean BoJoyNeutral =FALSE;
	static TUint16 u16cptNeutral =0;
	TUint16 u16cptNeutralmax = gDb_tNvParametersC0.u16CptNeutralJoystickMax; /*parametre filtrage position neutre en 10ms/ Ancien parametre : gDb_tNvParametersC0.u16NvParametersC0_10*/
	if(gDb_tRamGeneralC0.i16JoystickAdvanceScalingValue ==0)
	{
		if (u16cptNeutral>=u16cptNeutralmax)
			u16cptNeutral=u16cptNeutralmax;
		else
			u16cptNeutral=u16cptNeutral+1;
	}
	else if (gDb_tRamGeneralC0.i16JoystickAdvanceScalingValue !=0)
		u16cptNeutral=0;

	if ( u16cptNeutral == u16cptNeutralmax
	&& gDb_tRamGeneralC0.i16JoystickAdvanceScalingValue ==0
	)
		BoJoyNeutral = TRUE;
	else
		BoJoyNeutral = FALSE;


	/* boAskAdvance*/
	static TBoolean boAskAdvance = FALSE; // MODIFICATION MG + GREEN
	if(gDb_tRamSelectControlPost.eSelectedControlPost == GE_POST_NACELLE
	&& (gDb_tRamGeneralC0.boAuthorizeTransRailMovement == TRUE || gDb_tRamGreenEffC0.boAutorizeTransRailElectric == TRUE) //GREEN
	&& BoJoyNeutral == FALSE
	)
		boAskAdvance = TRUE;
	else
		boAskAdvance = FALSE;

	/* Rising boAskAdvance*/
	static TBoolean PreviousboAskAdvance =FALSE;
	TBoolean RisingboAskAdvance = FALSE;
	if (boAskAdvance == TRUE && PreviousboAskAdvance == FALSE)
		RisingboAskAdvance = TRUE;
	/* Memorize the previous value*/
	PreviousboAskAdvance = boAskAdvance;

	/* Rising boStabilizedStop*/
	static TBoolean PreviousboStabilizedStop =FALSE;
	TBoolean RisingboStabilizedStop = FALSE;
	if (gDb_tRamGeneralC0.boStabilizedStop == TRUE && PreviousboStabilizedStop == FALSE)
		RisingboStabilizedStop = TRUE;
	/*Memorize the previous value*/
	PreviousboStabilizedStop = gDb_tRamGeneralC0.boStabilizedStop;

	/*Set*/
	if(RisingboAskAdvance == TRUE)
	{
		gDb_tRamGeneralC0.boFirstTranslationReleaseParkBrake = TRUE;
	}

	//DEBUG PB TRANS ELECTRIQUE
		if(gDb_tRamGeneralC0.boEmergencyBrake == TRUE
		&& gDb_tRamGeneralC0.boFirstTranslationReleaseParkBrake == TRUE
		)
			gDb_tRamGeneralC0.u16RamGeneralNeotecC0_3_2 = gDb_tRamGeneralC0.u16RamGeneralNeotecC0_3_2 +1;

		if(RisingboStabilizedStop == TRUE
		&& gDb_tRamGeneralC0.boFirstTranslationReleaseParkBrake == TRUE
		)
			gDb_tRamGeneralC0.u16RamGeneralNeotecC0_3_3 = gDb_tRamGeneralC0.u16RamGeneralNeotecC0_3_3 +1;

		if(RisingboTimeCrossingBrakesOn == TRUE
		&& gDb_tRamGeneralC0.boFirstTranslationReleaseParkBrake == TRUE
		)
			gDb_tRamGeneralC0.u16RamGeneralNeotecC0_3_4 = gDb_tRamGeneralC0.u16RamGeneralNeotecC0_3_4 +1;


	/*Reset*/
	if (gDb_tRamGeneralC0.boEmergencyBrake == TRUE
		|| RisingboStabilizedStop  == TRUE
		|| RisingboTimeCrossingBrakesOn == TRUE
		|| gDb_tRamEcuC0RcvFromC1.eC1RadioPostSelector == GE_DI_ON
		|| gDb_tRamEcuC0RcvFromC1.eC1TurretPostSelector == GE_DI_ON
	)
	{
		gDb_tRamGeneralC0.boFirstTranslationReleaseParkBrake = FALSE;
	}

	/*boFixeAxleCmdActive*/
	static TBoolean boFixeAxleCmdActive =FALSE;
	if((gDb_tRamEcuOutputsC0.boEvUpAxleFixeCommandBool || gDb_tRamEcuOutputsC0.boEvDownAxleFixeCommandBool)
	&& gDb_tRamSelectControlPost.eSelectedControlPost == GE_POST_RADIO)
		boFixeAxleCmdActive = TRUE;
	else
		boFixeAxleCmdActive = FALSE;

	/*boOscillantAxleCmdActive*/
	static TBoolean boOscillantAxleCmdActive =FALSE;
	if((gDb_tRamEcuOutputsC0.boEvUpAxleOscillantCommandBool || gDb_tRamEcuOutputsC0.boEvDownAxleOscillantCommandBool)
		&& gDb_tRamSelectControlPost.eSelectedControlPost == GE_POST_RADIO)
		boOscillantAxleCmdActive = TRUE;
	else
		boOscillantAxleCmdActive = FALSE;

	/* boFixeAxleCleanActive*/
	static TBoolean boFixeAxleCleanActive = FALSE;
	if(gDb_tRamBrakeTest.eBrakeTestSelected == GE_FIXE_PARKING_BRAKE
	&& gDb_tRamEvision7C0.bogOffTrackTestBrakeActivated == FALSE)
		boFixeAxleCleanActive = TRUE;
	else
		boFixeAxleCleanActive = FALSE;

	/* boOscillantAxleCleanActive*/
	static TBoolean boOscillantAxleCleanActive = FALSE;
	if(gDb_tRamBrakeTest.eBrakeTestSelected == GE_OSCI_PARKING_BRAKE
	&& gDb_tRamEvision7C0.bogOffTrackTestBrakeActivated == FALSE)
		boOscillantAxleCleanActive = TRUE;
	else
		boOscillantAxleCleanActive = FALSE;

	/*Fixe Park Brake*/
	if((gDb_tRamGeneralC0.boFirstTranslationReleaseParkBrake == TRUE
	&& 	gDb_tRamBrakeTest.boForceFixeParkBrake == FALSE // No Brake Test
	&&  boFixeAxleCleanActive == FALSE // No Clean Brake
	)
	|| boFixeAxleCmdActive == TRUE
	)
		gDb_tRamEcuOutputsC0.boEvParkBrakeAxleFixeCmdBool = TRUE;

	else
		gDb_tRamEcuOutputsC0.boEvParkBrakeAxleFixeCmdBool = FALSE;


	/*Oscillant Park Brake*/
	if((gDb_tRamGeneralC0.boFirstTranslationReleaseParkBrake == TRUE
	&& 	gDb_tRamBrakeTest.boForceOsciParkBrake == FALSE /* No Brake Test*/
	&&  boOscillantAxleCleanActive == FALSE /* No Clean Brake*/
	)
	|| boOscillantAxleCmdActive == TRUE
	)
		gDb_tRamEcuOutputsC0.boEvParkBrakeAxleOscillantCmdBool = TRUE;

	else
		gDb_tRamEcuOutputsC0.boEvParkBrakeAxleOscillantCmdBool = FALSE;

	/*Double freins*/
	/* boFixeAxleCleanActive*/
	static TBoolean boFixe2ndAxleCleanActive = FALSE;
	if(gDb_tRamBrakeTest.eBrakeTestSelected == GE_FIXE_2ND_PARKING_BRAKE
	&& gDb_tRamEvision7C0.bogOffTrackTestBrakeActivated == FALSE)
		boFixe2ndAxleCleanActive = TRUE;
	else
		boFixe2ndAxleCleanActive = FALSE;
	/*Double freins*/
	/* boOscillantAxleCleanActive*/
	static TBoolean boOscillant2ndAxleCleanActive = FALSE;
	if(gDb_tRamBrakeTest.eBrakeTestSelected == GE_OSCI_2ND_PARKING_BRAKE
	&& gDb_tRamEvision7C0.bogOffTrackTestBrakeActivated == FALSE)
		boOscillant2ndAxleCleanActive = TRUE;
	else
		boOscillant2ndAxleCleanActive = FALSE;
//NEOTEC IG / D14 MG + DF DEBUT
	/*Double freins*/
	/*Oscillant 2nd Park Brake*/
	if((gDb_tRamGeneralC0.boFirstTranslationReleaseParkBrake == TRUE
	&& gDb_tRamBrakeTest.boForce2ndParkBrakeOsci == FALSE // No Brake Test
	&& boOscillant2ndAxleCleanActive == FALSE // No Clean Brake
	)
	|| boOscillantAxleCmdActive == TRUE
	)
		gDb_tRamEcuOutputsC0.boEv2ndParkBrakeAxleOsci = TRUE;
	else
		gDb_tRamEcuOutputsC0.boEv2ndParkBrakeAxleOsci = FALSE;

	/*Double freins*/
	/*Fixe 2nd Park Brake*/
	if((gDb_tRamGeneralC0.boFirstTranslationReleaseParkBrake == TRUE
	&& gDb_tRamBrakeTest.boForce2ndParkBrakeFixe == FALSE // No Brake Test
	&& boFixe2ndAxleCleanActive == FALSE // No Clean Brake
	)
	|| boFixeAxleCmdActive == TRUE
	)
		gDb_tRamEcuOutputsC0.boEv2ndParkBrakeAxleFixe = TRUE;
	else
		gDb_tRamEcuOutputsC0.boEv2ndParkBrakeAxleFixe = FALSE;

	//NEOTEC IG / D14 MG + DF FIN
	/* check if failure of service brake pressure and use service equation*/
	if((boPressureBrakeFault == TRUE
	|| gCsr_tFailuresC0SendToC1.boEvParkBrakeAxleOscillantFault == TRUE /*add 12.07.2019*/
	|| gCsr_tFailuresC0SendToC1.boEvParkBrakeAxleFixeFault == TRUE 	  /*add 12.07.2019*/
	|| gCsr_tFailuresC0SendToC1.boEvServiceBrakeAxleOsciFault == TRUE /*add 12.07.2019*/
	|| gCsr_tFailuresC0SendToC1.boEvServiceBrakeAxleFixeFault == TRUE /*add 12.07.2019*/
	/*Double freins*/
	|| gCsr_tFailuresC0SendToC1.boEv2ndParkBrakeAxleOsciFault == TRUE
	|| gCsr_tFailuresC0SendToC1.boEv2ndParkBrakeAxleFixeFault == TRUE
	/*Double freins*/
	)
	&& gDb_tRamGeneralC0.boStabilizedStop == FALSE
//GREEN	&& gDb_tRamEcuOutputsC0.boEvDeflectorTransmissionCommand == FALSE /*Transmission rail 05.07.2019 a tester*/
	)
//NEOTEC IG / D14 MG + DF DEBUT
	{
		if(gDb_tRamEcuOutputsC0.boEvServiceBrakeAxleFixeCmdBool == TRUE)
		{
			gDb_tRamEcuOutputsC0.boEvParkBrakeAxleFixeCmdBool = FALSE;
			gDb_tRamEcuOutputsC0.boEv2ndParkBrakeAxleFixe = FALSE;
		}
		else
		{
			gDb_tRamEcuOutputsC0.boEvParkBrakeAxleFixeCmdBool = TRUE;
			gDb_tRamEcuOutputsC0.boEv2ndParkBrakeAxleFixe = TRUE;
		}
		if(gDb_tRamEcuOutputsC0.boEvServiceBrakeAxleOsciCmdBool == TRUE)
		{
			gDb_tRamEcuOutputsC0.boEvParkBrakeAxleOscillantCmdBool = FALSE;
			gDb_tRamEcuOutputsC0.boEv2ndParkBrakeAxleOsci = FALSE;
		}
		else
		{
			gDb_tRamEcuOutputsC0.boEvParkBrakeAxleOscillantCmdBool = TRUE;
			gDb_tRamEcuOutputsC0.boEv2ndParkBrakeAxleOsci = TRUE;
		}
	}
//NEOTEC IG / D14 MG + DF FIN
}



//-----------------------------------------------------------------------------------------------------
//! @brief Control emergency brake
//!
//! @param[in]		 TBoolean			-
//! @param[out] 	 TBoolean	 		-
//!
//! @globvar
//!
//! @staticvar
//
//! @created 17.01.2019 HYDAC/CK
//!
//! @change  05.04.2019 HYDAC/CK - add gDb_tRamSpeedMaxRail.boLitmitSpeedExceeded condition to active emergency brake
//! @change  18.04.2019 NEOTEC/FV - Change condition to active emergency brake
//! @care
//! @todo
//-----------------------------------------------------------------------------------------------------
TVoid vControlEmergencyBrake(TVoid)
{

	static TBoolean	boPositionLowOrHighAxles = FALSE;

	/*boPositionLowOrHighAxles*/
	if ((gDb_tRamEcuInputsC0.eDownAxleOscillantState == GE_DI_ON && gDb_tRamEcuInputsC0.eDownAxleFixeState == GE_DI_ON)
	||
	(gDb_tRamEcuInputsC0.eUpAxleOscillantState == GE_DI_ON && gDb_tRamEcuInputsC0.eUpAxleFixeState == GE_DI_ON))
		boPositionLowOrHighAxles = TRUE;
	else
		boPositionLowOrHighAxles = FALSE;

	static TBoolean boStabilized =FALSE;
	if(gDb_tRamEcuInputsC0.i32OscillantAxleFrequency <= gDb_tNvParametersC0.i32TresholdLowSpeedStabilizedStop
	&& gDb_tRamEcuInputsC0.i32FixeAxleFrequency <= gDb_tNvParametersC0.i32TresholdLowSpeedStabilizedStop
	&& gDb_tRamEcuOutputsC0.u16ForwardPumpCommand <= 0
	&& gDb_tRamEcuOutputsC0.u16BackwardPumpCommand <= 0
	&& gDb_tRamGreenEffC0.boTransRailElectricRampOngoing == FALSE //GREEN
//GREEN  //gDb_tRamEcuOutputsC0.boEvDeflectorTransmissionCommand == FALSE
	)
		boStabilized = TRUE;
	else
		boStabilized = FALSE;

	static TUint16 u16cpt =0;
	TUint16 u16cptmax =1000; //1000x20ms = 20000ms
	/*NEOTEC IG V2, si modification sur la temporisation, modifié les erreurs :9307/9308/9309/9320/9720/9721/9722/9723*/
	static TBoolean BoInitOne = FALSE;
	if (BoInitOne == FALSE)
	{
		u16cpt = u16cptmax;
		BoInitOne = TRUE;
	}

	if(boStabilized == TRUE)
	{
		if (u16cpt>=u16cptmax)
			u16cpt=u16cptmax;
		else
			u16cpt=u16cpt+1;
	}
	else if (boStabilized == FALSE
	|| gDb_tRamGeneralC0.boAuthorizeTransRailMovement == TRUE //GREEN
	|| gDb_tRamGreenEffC0.boAutorizeTransRailElectric == TRUE //GREEN
	)
			u16cpt=0;

	if ( u16cpt == u16cptmax)
		gDb_tRamGeneralC0.boStabilizedStop = TRUE;
	else
		gDb_tRamGeneralC0.boStabilizedStop = FALSE;

	static TBoolean MemobogARUActive = FALSE;
	/*Memorize bo_ARU_C0_Actived*/
	if (bo_ARU_C0_Actived == TRUE)
	{
		MemobogARUActive = TRUE;
	}
	else if(gDb_tRamSelectControlPost.eSelectedControlPost == GE_POST_NACELLE)
	{
		MemobogARUActive = FALSE;

	}
	/*Multi Gage*/
 	static TBoolean boStopMotorMG = FALSE;
	if (MemobogARUActive == TRUE
	&& ((gDb_tRamEcuOutputsC0.u16ForwardPumpCommand == 0 && gDb_tRamEcuOutputsC0.u16BackwardPumpCommand == 0)
			|| gDb_tRamEcuC0RcvFromC1.i32RegimeMotorAlternatorRpm < gDb_tNvParametersC0.u16TresholdRegimeMotorParkBrake)//TEST G JCA
	&& gDb_tRamGreenEffC0.boTransRailElectricRampOngoing == FALSE //GREEN
	&& (gDb_tRamGeneralC0.boSlopeModeFromC1 == FALSE || gDb_tNvOptionsC0.boSecondParkBrakeActive == TRUE))//MODIF FREINS JCA

	{
		boStopMotorMG = TRUE;
	}

	else if (gDb_tRamSelectControlPost.eSelectedControlPost == GE_POST_NACELLE /* && gDb_tRamGeneralC0.boStabilizedStop == TRUE*/)//TEST IG - AMELIORATION MG
	{
		boStopMotorMG = FALSE;
	}
	/*Multi Gage*/
/*Deplacer au dessus de bostabilized*/
/*Temporisation pour l'activation des freins d'urgences*/
	static TUint16 u16cptStopMotorMG =0;
	static TBoolean boStopMotorTempo = FALSE;
	TUint16 u16cptStopMotorMGmax = gDb_tNvParametersC0.u16StopMotorMGmax;/*100x10ms =1s*/

	if(boStopMotorMG == TRUE)
	{
		if (u16cptStopMotorMG>=u16cptStopMotorMGmax)
			u16cptStopMotorMG=u16cptStopMotorMGmax;
		else
			u16cptStopMotorMG = u16cptStopMotorMG+1;
		}
	else if (boStopMotorMG == FALSE)
		u16cptStopMotorMG=0;

	if ( u16cptStopMotorMG == u16cptStopMotorMGmax)
		boStopMotorTempo = TRUE;
	else
		boStopMotorTempo = FALSE;


	/*Multi Gage*/
	if((boStopMotorTempo == TRUE && (gDb_tRamGeneralC0.boSlopeModeFromC1 == FALSE || gDb_tNvOptionsC0.boSecondParkBrakeActive == TRUE))//MODIF FREINS JCA
	|| (gDb_tRamEcuC0RcvFromC1.i32RegimeMotorAlternatorRpm < gDb_tNvParametersC0.u16TresholdRegimeMotorParkBrake
		&& MemobogARUActive == TRUE
		&& (gDb_tRamGeneralC0.boSlopeModeFromC1 == TRUE && gDb_tNvOptionsC0.boSecondParkBrakeActive == FALSE))/*boSLopeModeFromC1 à True et boSecondParkBrakeActive à False== Mode Standard*///Avant
	|| boBloErrGetErrStaBit(&gErr_tSpecificErrorC0_4, DM_ACTIVE_HELP_FROM_C1) == TRUE
	|| (boPositionLowOrHighAxles == FALSE
		&& gDb_tRamEcuInputRadioControl.boUpAxleArFixe == FALSE
		&& gDb_tRamEcuInputRadioControl.boDownAxleArFixe == FALSE
		&& gDb_tRamEcuInputRadioControl.boUpAxleAvOscillant == FALSE
		&& gDb_tRamEcuInputRadioControl.boDownAxleAvOscillant == FALSE)
	)
	{
		gDb_tRamGeneralC0.boEmergencyBrake = TRUE;
	}
	else
	{
		gDb_tRamGeneralC0.boEmergencyBrake = FALSE;
	}
}
