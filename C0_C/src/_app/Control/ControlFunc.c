//==================================================================================================
//! @file Control.c
//! @brief Control system
//! @see Target for ...
//! @section app
//! @subsection IO
//! @author Christian Klein (CK)
//! @created 23.07.2018 HYDAC/CK
//! @history: #- CK 23.07.2018 HYDAC/CK interface created
//! copyrights (c) all rights reserved by HYDAC International
//=================================================================================================

#include "ControlFunc.h"


// GLOBAL VARIABLES DECLARATIONS ==================================================================
TBoolean bo_ARU_C0_Actived;
TBoolean bo_ARU_RADIO_C0_Actived;


//-----------------------------------------------------------------------------------------------------
//! @brief Control system
//!
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 23.07.2018 HYDAC/CK
//!
//! @change  10.05.2019 NEOTEC/FV 	Delete reset Ev Forward transmission
//! @change  14.05.2019 HYDAC/CK	add sum of 2 Ev forward consign from rail and track function
//! @change  07.06.2019 NEOTEC/FV 	Delete vSafetySpeedMaxTranslationRail()
//! @care
//! @todo
//
//07.05.2021 NEOTEC/IG 			Nettoyage du code, suppression des lignes en commentaire
//
//-----------------------------------------------------------------------------------------------------
TVoid vControl(TVoid)
{

	/*boBlinkLow*/
	gDb_tRamGeneralC0.boBlinkLow = vBlinkLow(&tBlinkLowRamp);

	/*bo_ARU_C0_Actived*/
	if(gDb_tRamEcuInputsC0.eAru1ContactState != GE_DI_OFF || gDb_tRamEcuInputsC0.eAru2ContactState != GE_DI_OFF)
		bo_ARU_C0_Actived = TRUE;
	else
		bo_ARU_C0_Actived = FALSE;

	/*bo_ARU_RADIO_C0_Actived*/
	static TBoolean BoPostRadioStable =FALSE;
	static TUint16 u16cptRadioStable =0;
	TUint16 u16cptRadioStableMax = 25; //25x20ms = 500ms
	if(gDb_tRamSelectControlPost.eSelectedControlPost == GE_POST_RADIO)
	{
		if (u16cptRadioStable>=u16cptRadioStableMax)
			u16cptRadioStable=u16cptRadioStableMax;
		else
			u16cptRadioStable=u16cptRadioStable+1;
	}
	else if (gDb_tRamSelectControlPost.eSelectedControlPost != GE_POST_RADIO)
		u16cptRadioStable=0;

	if ( u16cptRadioStable == u16cptRadioStableMax)
		BoPostRadioStable = TRUE;
	else
		BoPostRadioStable = FALSE;

	if((gDb_tRamEcuInputsC0.eAruRadio1ContactState != GE_DI_OFF || gDb_tRamEcuInputsC0.eAruRadio2ContactState != GE_DI_OFF)
	&& gDb_tRamSelectControlPost.eSelectedControlPost == GE_POST_RADIO
	&& BoPostRadioStable == TRUE
	)
		bo_ARU_RADIO_C0_Actived = TRUE;
	else
		bo_ARU_RADIO_C0_Actived = FALSE;

	static TBoolean boTempAlarmCooler = FALSE;
	/*boTempAlarmCooler*/
	if ((gDb_tRamEcuInputsC0.i16TemperatureTransmissionValue >= gDb_tNvParametersC0.i16ThreshotothydraulicTemperature //50deg
	&& gDb_tRamGeneralC0.boTranslationMovementIsSolicited == TRUE
	&& gDb_tRamEcuC0RcvFromC1.i32RegimeMotorAlternatorRpm >=500
	)
	|| gDb_tRamEcuC0RcvFromC1.i16OilTankTemperatureValue >= gDb_tNvParametersC0.i16ThreshotothydraulicTemperature //50deg //GREEN
	)
		boTempAlarmCooler = TRUE;
	else
		boTempAlarmCooler = FALSE;

	/* Falling and Rising boTempAlarmCooler*/
	TBoolean FallingRisingboTempAlarmCooler = FALSE;
	static TBoolean PreviousboTempAlarmCooler = FALSE;
	FallingRisingboTempAlarmCooler = FALSE;
	if (boTempAlarmCooler != PreviousboTempAlarmCooler)
		FallingRisingboTempAlarmCooler = TRUE;
	/* Memorize the previous value*/
	PreviousboTempAlarmCooler = boTempAlarmCooler;

	/*i32CptCooler*/
	static TInt32 i32CptCooler = 0;
	static TInt32 i32MaxCptCooler = 0;
	static TBoolean boInitOne = FALSE;

	i32MaxCptCooler = 50*(TInt32)gDb_tNvParametersC0.i16TimeforCoolerOn;//10min = 600s = 600000ms = 600sx50x20ms
	if (boInitOne == FALSE
	|| gDb_tRamEcuC0RcvFromC1.i32RegimeMotorAlternatorRpm <500
	)
	{
		boInitOne = TRUE;
		i32CptCooler = i32MaxCptCooler;
	}


	if(FallingRisingboTempAlarmCooler == TRUE)
		i32CptCooler = 0;
	if (boTempAlarmCooler == FALSE
	&& 	i32CptCooler < i32MaxCptCooler
	)
		i32CptCooler = i32CptCooler +1;

	/*boCoolerOn*/
	static TBoolean boCoolerOn = FALSE;
	if(boTempAlarmCooler == TRUE
	|| (i32CptCooler < i32MaxCptCooler)
	)
		boCoolerOn = TRUE;
	else
		boCoolerOn = FALSE;

	gDb_tRamEcuOutputsC0.boCoolingRelayCommand = boCoolerOn;


	/* start sensor*/
	vStartSensor();

	vSelectControlPost();
	/* safety select control post*/

	vSafetySelectControlPost();


	vDefinedTransportPosition();

	/* rail work safety*/
	vRailWorkSafety();
	/* safety rail work safety*/
	vSafetyRailWorkSafety();
	/* define speed max limit*/
 	vSpeedMaxTranslationRail();
 	/* safety speed maw translation rail*/

	vBrakeTest();
	vBreakInBrake();

	/* control track translation*/
	vControlTrackTranslation();
	/* control Rail translation Electric function*/
	vControlRailTranslationElectric();
	/* control Rail translation function*/
	vControlRailTranslation();
	/* control brakes */
	vControlBrakes();
	/* Control low side output of Ev Forward and backward*/
	vControlLowSideEvForwardBackward();
	/* control motor*/
	vControlMotor();
	/* control light*/
	vControlLight();
	/* Authorization axle rail movement*/
	/* Control axle oscillant and fixe*/
	vAxleRailControl(gDb_tRamEcuC0RcvFromC1.boUpAxleOscillantCommand,gDb_tRamEcuC0RcvFromC1.boDownAxleOscillantCommand,
					gDb_tRamGeneralC0.boAutorizeUpAxleOscillant,gDb_tRamGeneralC0.boAutorizeDownAxleOscillant,
					gDb_tRamEcuC0RcvFromC1.boUpAxleFixeCommand,gDb_tRamEcuC0RcvFromC1.boDownAxleFixeCommand,
					gDb_tRamGeneralC0.boAutorizeUpAxlefixe,gDb_tRamGeneralC0.boAutorizeDownAxlefixe,
					&gDb_tRamEcuOutputsC0.boEvUpAxleOscillantCommandBool,&gDb_tRamEcuOutputsC0.boEvDownAxleOscillantCommandBool,
					&gDb_tRamEcuOutputsC0.boEvUpAxleFixeCommandBool,&gDb_tRamEcuOutputsC0.boEvDownAxleFixeCommandBool);
	/* control klaxon*/
	vControlKlaxon();
	/* control unblock oscilaltion axle*/
	vControlUnBlockOscillationAxle();

	/* Control display mat measure*/
	vControlMastDigitalDisplay();


	/* affect consign Ev forward Rail and Track function*/
	gDb_tRamEcuOutputsC0.u16ForwardPumpCommand = gDb_tRamGeneralC0.u16EvForwardRailConsigne + gDb_tRamGeneralC0.u16EvForwardTrackConsigne;

	/*vDmcControllerSigma2N*/
	vDmcControllerSigma2N();

	/*vSafetyCheckEmergencyStop*/
	vSafetyCheckEmergencyStop();
}


//-----------------------------------------------------------------------------------------------------
//! @brief Defined transport posititon
//!
//!
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 30.07.2018 HYDAC/CK
//!
//! @change  18.03.2019 HYDAC/CK refresh code
//! @change  04.04.2019 NEOTEC/FV Change lorries position in GE_OFFRAIL_TRANSPORT_POSITION
//! @change  10.04.2019 NEOTEC/FV Change frame and turret positions with hook sensor and add parameter (gDb_tNvParamTransportPosC0.i16TurretAngleThres CK : add 22.04.2019)
//! @change  07.05.2019 NEOTEC/FV add selector in gDb_tRamTransportPosC0.eTransportPosition and remove lorry position in GE_OFFRAIL_TRANSPORT_POSITION
//! @change  10.05.2019 NEOTEC/FV Modification provisoire des capteur frame car erreur dans le PDT (Chercher //DEBUG GE_DI_ON)
//! @change  22.05.2019 NEOTEC/FV Delete gDb_tRamTransportPosC0.eTransportPosition = GE_NO_TRANSPORT_POSITION
//! @care
//! @todo
//-----------------------------------------------------------------------------------------------------
TVoid vDefinedTransportPosition(TVoid)
{

	TBoolean boFrameTransportOffRailPositionOk;

	if( (gDb_tRamEcuInputsC0.eRailHookSensorState == GE_DI_ON //hook down
	&&	gDb_tRamEcuInputsC0.eFrameRotationSensor1State == GE_DI_ON //Capteur le plus loin de l'axe de rotation. Etat GE_DI_ON == Capteur en face vide // Etat GE_DI_OFF == Capteur en face acier
	&&  (gDb_tRamCanSensorC0.i16EncodeurTurret1Angle>=(900-gDb_tNvParamTransportPosC0.i16TurretAngleThres)
	&& gDb_tRamCanSensorC0.i16EncodeurTurret1Angle<=(900+gDb_tNvParamTransportPosC0.i16TurretAngleThres)))
	||
	gDb_tRamEcuInputsC0.eRailHookSensorState != GE_DI_ON //hook up
	)
		boFrameTransportOffRailPositionOk = TRUE;
	else
		boFrameTransportOffRailPositionOk = FALSE;


	/* determine position of delta arm*/
	if(gDb_tRamEcuC0RcvFromC1.i16DeltaArmAngularSensor <= gDb_tNvParamTransportPosC0.i16DeltaArmTres)
		gDb_tRamTransportPosC0.boDeltaOffRailTransportZone = TRUE;
	else if(gDb_tRamEcuC0RcvFromC1.i16DeltaArmAngularSensor >= gDb_tNvParamTransportPosC0.i16DeltaArmTres + gDb_tNvParamTransportPosC0.i16DeltaArmHyst)
		gDb_tRamTransportPosC0.boDeltaOffRailTransportZone = FALSE;

	/* determine position of arrow arm*/
	if(gDb_tRamEcuC0RcvFromC1.i16ArrowArmAngularSensor <= gDb_tNvParamTransportPosC0.i16ArrowArmThres)
		gDb_tRamTransportPosC0.boArrowOffRailTransportZone = TRUE;
	else if(gDb_tRamEcuC0RcvFromC1.i16ArrowArmAngularSensor >= gDb_tNvParamTransportPosC0.i16ArrowArmThres + gDb_tNvParamTransportPosC0.i16ArrowArmHyst)
		gDb_tRamTransportPosC0.boArrowOffRailTransportZone = FALSE;

//NEOTEC IG STRUKTON DEBUT
	// check condition for off rail transport position
	if(((gDb_tRam48XsInputsC0.boAuthorizationWorkKey == TRUE || gDb_tNvOptionsC0.boAutorisationWorkKeyPresent == FALSE) &&
   	   gDb_tRamTransportPosC0.boDeltaOffRailTransportZone &&
   	   gDb_tRamTransportPosC0.boArrowOffRailTransportZone &&
   	   gDb_tRamEcuC0RcvFromC1.boEntryTelescopeFdcSensor &&
	   ((gDb_tRamEcuC0RcvFromC1.boFoldedMastMeasure || boBloErrGetErrStaBit(&gErr_tSpecificErrorC0_3, DM_MAT_MEASURE_FAULT)
		|| gDb_tNvOptionsC0.boMeasuringMat == FALSE)|| gDb_tNvOptionsC0.boAddPerformanceFunc == TRUE) &&
	   gDb_tRamEcuC0RcvFromC1.eC1NacellePostSelector != GE_DI_ON &&
	   gDb_tRamEcuC0RcvFromC1.eC1TurretPostSelector != GE_DI_ON &&
	   gDb_tRamEcuC0RcvFromC1.eC1RadioPostSelector == GE_DI_ON &&
	   boFrameTransportOffRailPositionOk == TRUE)

	   || (gDb_tRam48XsInputsC0.boAuthorizationWorkKey == FALSE
		&& gDb_tNvOptionsC0.boAutorisationWorkKeyPresent == TRUE
		&& gDb_tRamEcuC0RcvFromC1.boBoomArmFoldedSensor == TRUE
		&& gDb_tRamEcuC0RcvFromC1.boEntryTelescopeFdcSensor == TRUE
		&& (gDb_tRamEcuC0RcvFromC1.boTurretInRearCenterPos == TRUE || gDb_tRamEcuC0RcvFromC1.boTurretInFrontCenterPos == TRUE)
		&& gDb_tRamEcuC0RcvFromC1.boBasketInCentrerPos == TRUE
		&& gDb_tRamEcuC0RcvFromC1.boFoldedMastMeasure == TRUE
		&& gDb_tRamData4C0RcvFromC1.boMastPanthoFoldedSNCF == TRUE
		&& gDb_tRamEcuC0RcvFromC1.boDeltaArmFoldedSensor == TRUE
	    && gDb_tRam48XsInputsC0.boLowSectorPendularSensor == TRUE )

	  )
	{
		gDb_tRamTransportPosC0.eTransportPosition = GE_OFFRAIL_TRANSPORT_POSITION;
	}
//NEOTEC IG STRUKTON FIN

	else
	{
		gDb_tRamTransportPosC0.eTransportPosition = GE_NO_TRANSPORT_POSITION;
	}
}




//-----------------------------------------------------------------------------------------------------
//! @brief Control authorization axle movement
//!
//! @param[in]	 	 EDiState						- Up Axle fixe sensor
//! @param[in]		 EDiState 						- Down Axle fixe sensor
//! @param[in]	 	 EDiState 						- Up Axle Oscillant sensor
//! @param[in]		 EDiState 						- Down Axle Oscillant sensor
//! @param[out] 	 boAutorizeUpAxlefixe 			- autorize to use up Axlefixe function
//! @param[out] 	 boAutorizeDownAxlefixe 		- autorize to use down Axlefixe function
//! @param[out] 	 boAutorizeUpAxleOscillant 		- autorize to use up AxleOscillant function
//! @param[out] 	 boAutorizeDownAxleOscillant 	- autorize to use down AxleOscillant function
//!
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 30.07.2018 HYDAC/CK
//!
//! @change
//!
//! @care
//! @todo
//-----------------------------------------------------------------------------------------------------

//-----------------------------------------------------------------------------------------------------
//! @brief Control Up/Down axle rail
//!
//! @param[in]	 TBoolean 				- Up Axle oscillant
//! @param[in]	 TBoolean 				- Down Axle oscillant
//! @param[in] 	 TBoolean 				- autorize to use up axle oscillant
//! @param[in] 	 TBoolean 				- autorize to use down axle oscillant
//! @param[in]	 TBoolean 				- Up Axle fixe
//! @param[in]	 TBoolean 				- Down Axle fixe
//! @param[in] 	 TBoolean 				- autorize to use up axle fixe
//! @param[in] 	 TBoolean 				- autorize to use down axle fixe
//! @param[out]  TBoolean			 	- Output Up Axle oscillant
//! @param[out]  TBoolean			 	- Output Down Axle oscillant
//! @param[out]  TBoolean			 	- Output Up Axle fixe
//! @param[out]  TBoolean			 	- Output Down Axle fixe
//!
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 30.07.2018 HYDAC/CK
//!
//! @change	 09.01.2019 HYDAC/CK Regroup movement up/down for axle fixe and oscillant
//! @change	 16.04.2019 NEOTEC/FV down fixe and Oscillant axle  same time with Mast Measure command
//! @care
//! @todo
//-----------------------------------------------------------------------------------------------------
TVoid vAxleRailControl(TBoolean boUpAxleOscillant, TBoolean boDownAxleOscillant ,TBoolean boAutorizeUpAxleOscillant,TBoolean boAutorizeDownAxleOscillant,
					   TBoolean boUpAxleFixe, TBoolean boDownAxleFixe ,TBoolean boAutorizeUpAxleFixe,TBoolean boAutorizeDownAxleFixe,
					   TBoolean  *boUpAxleOscillantCmd, TBoolean *boDownAxleOscillantCmd,
					   TBoolean  *boUpAxleFixeCmd, TBoolean *boDownAxleFixeCmd)
{
	/* reset command*/
	*boUpAxleOscillantCmd = FALSE;
	*boDownAxleOscillantCmd = FALSE;
	*boUpAxleFixeCmd = FALSE;
	*boDownAxleFixeCmd = FALSE;


	if (gDb_tRamSelectControlPost.eSelectedControlPost == GE_POST_RADIO)
	{
		/* check, if the Up axle oscillant is solicited*/
		if(boUpAxleOscillant == TRUE && boDownAxleOscillant == FALSE && boUpAxleFixe == FALSE && boDownAxleFixe == FALSE && boAutorizeUpAxleOscillant == TRUE)
		{
			/* pilot Up Axle*/
			*boUpAxleOscillantCmd = TRUE;
		}
		/* check, if the Down axle oscillant is solicited*/
		else if(boUpAxleOscillant == FALSE && boDownAxleOscillant == TRUE && boUpAxleFixe == FALSE && boDownAxleFixe == FALSE && boAutorizeDownAxleOscillant == TRUE)
		{
			/* pilot down axle*/
			*boDownAxleOscillantCmd = TRUE;
		}
		/* check, if the Up axle fixe is solicited*/
		else if(boUpAxleOscillant == FALSE && boDownAxleOscillant == FALSE && boUpAxleFixe == TRUE && boDownAxleFixe == FALSE && boAutorizeUpAxleFixe == TRUE)
		{
			/* pilot Up Axle*/
			*boUpAxleFixeCmd = TRUE;
		}
		/* check, if the Down axle fixe is solicited*/
		else if(boUpAxleOscillant == FALSE && boDownAxleOscillant == FALSE && boUpAxleFixe == FALSE && boDownAxleFixe == TRUE && boAutorizeDownAxleFixe == TRUE)
		{
			/* pilot down axle*/
			*boDownAxleFixeCmd = TRUE;
		}
	}
	else if (gDb_tRamSelectControlPost.eSelectedControlPost == GE_POST_NACELLE)
	{
		if(boDownAxleOscillant == TRUE && boDownAxleFixe == TRUE && boAutorizeDownAxleOscillant == TRUE && boAutorizeDownAxleFixe == TRUE)
				{
					/* pilot down axle*/
					*boDownAxleOscillantCmd = TRUE;
					*boDownAxleFixeCmd = TRUE;
				}
	}

}


//-----------------------------------------------------------------------------------------------------
//! @brief Control low side output for Ev Forward and backward
//!
//! @param[in]	  				-
//! @param[out]  			 	-
//!
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 13.12.2018 HYDAC/CK
//!
//! @change
//!
//! @care
//! @todo
//-----------------------------------------------------------------------------------------------------
TVoid vControlLowSideEvForwardBackward(TVoid)
{
	/* pilot low side forward when high is pilot*/
	gDb_tRamEcuOutputsC0.boReturnLowSideEvForwardPumpCmd = gDb_tRamEcuOutputsC0.u16ForwardPumpCommand > 0;
	/* pilot low side when high is pilot*/
	gDb_tRamEcuOutputsC0.boReturnLowSideEvBackwardPumpCmd = gDb_tRamEcuOutputsC0.u16BackwardPumpCommand > 0;

	/* pilot low side pvg left track*/
	gDb_tRamEcuOutputsC0.boPvgLeftTrackLowsideCommand = TRUE;
	/* pilot low side pvg right track*/
	gDb_tRamEcuOutputsC0.boPvgRightTrackLowsideCommand= TRUE;
}





