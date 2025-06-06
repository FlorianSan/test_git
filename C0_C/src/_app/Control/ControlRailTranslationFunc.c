
//==================================================================================================
//! @file ControlRailTranslationFunc.c
//! @brief Control rail translation function
//! @see Target for ...
//! @section app
//! @subsection IO
//! @author Christian Klein (CK)
//! @created 23.07.2018 HYDAC/CK
//! @history: #- CK 23.07.2018 HYDAC/CK interface created
//! copyrights (c) all rights reserved by HYDAC International
//=================================================================================================

#include "ControlRailTranslationFunc.h"

// GLOBAL VARIABLES DECLARATIONS ==================================================================

//-----------------------------------------------------------------------------------------------------
//! @brief Control rail translation
//!
//!
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 31.07.2018 HYDAC/CK
//! @change  18.04.2019 NEOTEC/FV 	Select the max speed betwween fixe or oscillant
//! @change	 14.05.2019 HYDAC/CK	Change gDb_tRamEcuOutputsC0.EvForwardCommand to gDb_tRamGeneralC0.u16EvForwardRailConsigne
//!
//! @care
//! @todo
//
//07.05.2021 NEOTEC/IG 			Nettoyage du code, suppression des lignes en commentaire
//
//-----------------------------------------------------------------------------------------------------
TVoid vControlRailTranslation(TVoid)
{
	vControlRailAdvancement(gDb_tRamSelectControlPost.eSelectedControlPost,gDb_tRam48XsInputsC0.u16AdvanceAxisJoystick,
							gDb_tRam48XsInputsC0.boDeadManPedal,gDb_tRam48XsInputsC0.boGachette,
							&gDb_tRamGeneralC0.u16EvForwardRailConsigne,&gDb_tRamEcuOutputsC0.u16BackwardPumpCommand);
}


//-----------------------------------------------------------------------------------------------------
//! @brief Control rail advancement
//!
//! @param[in]	 	 EControlPost 		- Move of Nacelle mode ( Off rail, Nacelle , Turret)
//! @param[in]		 ERailSpeedMode 	- Move of rail mode ( GE_NO_RAIL_MODE, GE_ACCESS_SITE_MODE , GE_HIGH_SPEED,GE_GE_LOW_SPEED)
//! @param[in]	 	 TUint16			- Joystick advance
//! @param[in]		 TBoolean			- Dead Man Pedal
//! @param[in] 	 	 TBoolean			- gâchette
//! @param[in] 		 TUint16			- Speed Axle sensor
//! @param[out] 	 TUint16	 		- Forward Pump transmission
//! @param[out]  	 TUint16	 		- Backward Pump transmission
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 31.07.2018 HYDAC/CK
//!
//! @change	 17.12.2018 HYDAC/CK		- remove else condition to reset Ev foraward pump transmission because it reset at ControlFunc
//! 		 27.12.2018 HYDAC/CK		- Add authorize movement in func In1ProAxisPilotOut2PropEvFunction
//!			 27.03.2019 HYDAC/CK		- Add low speed brake test
//! @change  10.04.2019 NEOTEC/FV		- Change authorize with boStopAllMovementsNacellePost and not Ladder  portillon closed and axles down
//! @change  18.04.2019 NEOTEC/FV 		- Change condition  boAuthorizeMovement
//! @change  23.04.2019 NEOTEC/FV	 	- Move condition selection post mode to authorize movement
//! @change  25.04.2019 HYDAC/CK		- Add GE_BRAKE_TEST_SPEED_RUNNING
//! @change  02.05.2019 NEOTEC/FV	 	- Change condition  boAuthorizeMovement for brake test and ask inverse translation
//! @change  14.05.2019 HYDAC/CK	 	- add gDb_tRamGeneralC0.u16EvForwardTrackConsigne == 0 condition to authorize movement
//! @change  18.05.2019 NEOTEC/FV	 	- Change reference Voltage in i16JoystickAdvanceScalingValue
//! @change  17.12.2019 HYDAC/CK		- change gDb_tNvParametersC0.u8DeadZoneJoystickRotationTurret to gDb_tNvParametersC0.u8DeadZoneJoystickRailAdvancement in vCl_3_Pos_Analog_Input function to set gDb_tRamGeneralC0.i16JoystickAdvanceScalingValue variable
//! @change 18.12.2019 HYDAC/CK 		- change provisional value of msg can gCsr_tData4C1SendToC0.boSignal to gDb_tRamData4C0RcvFromC1.boNoMovementRunning
//! @care
//! @todo
//-----------------------------------------------------------------------------------------------------
TVoid vControlRailAdvancement(EControlPost eSelectedControlPost,/*//NEOTEC WARNING ERailSpeedMode eRailMode,*/ TUint16 u16JoystickAdvance, TBoolean boDeadManPedal,
							  TBoolean boGachette,/*//NEOTEC WARNING TUint16 u16SpeedAxleSensor,*/ TUint16 *u16ForwardPumpTransmission, TUint16 *u16BackwardPumpTransmission)
{

/* Var Globale test	TBoolean	*/
	TBoolean	boNoSpeedMaxRailMode = FALSE;
	TInt16		i16ForwardPumpTransmission;
	TInt16		i16BackwardPumpTransmission;
	TInt16 		aiCurrentRangeEvForward[3] = {0,0,0};
	TInt16 		aiCurrentRangeEvBackward[3] = {0,0,0};

	/* consigne min and no movement for forward and back*/
	aiCurrentRangeEvForward[0] = 0;   /* no movement*/
	aiCurrentRangeEvForward[1] = gDb_tNvParametersC0.i16MinConsigneEvForwardRail;	  /* min current consigne*/

	aiCurrentRangeEvBackward[0] = 0;   /* no movement*/
	aiCurrentRangeEvBackward[1] = gDb_tNvParametersC0.i16MinConsigneEvBackwardRail;	  /* min current consigne*/

	/* Define consigne max Forward and backward advancement rail*/
	if(gDb_tRamGeneralC0.eRailSpeedMode == GE_NO_SPEED_MAX_RAIL_MODE)
	{
		boNoSpeedMaxRailMode = TRUE;
	}
	else if(gDb_tRamGeneralC0.eRailSpeedMode == GE_ACCESS_SITE_MODE)
	{
		aiCurrentRangeEvForward[2] = gDb_tNvParamSpeedMaxRail.i16AccesSiteSpeedForward;	 	  /* max current consigne*/
		aiCurrentRangeEvBackward[2] = gDb_tNvParamSpeedMaxRail.i16AccesSiteSpeedBackward;	  /* max current consigne*/
		boNoSpeedMaxRailMode = FALSE;
	}
	else if(gDb_tRamGeneralC0.eRailSpeedMode == GE_HIGH_SPEED)
	{
		aiCurrentRangeEvForward[2] = gDb_tNvParamSpeedMaxRail.i16HighSpeedForward;	  	  /* max current consigne*/
		aiCurrentRangeEvBackward[2] = gDb_tNvParamSpeedMaxRail.i16HighSpeedBackward;	  /* max current consigne*/
		boNoSpeedMaxRailMode = FALSE;
	}
	else if(gDb_tRamGeneralC0.eRailSpeedMode == GE_LOW_SPEED)
	{
		aiCurrentRangeEvForward[2] = gDb_tNvParamSpeedMaxRail.i16LowSpeedForward;	  /* max current consigne*/
		aiCurrentRangeEvBackward[2] = gDb_tNvParamSpeedMaxRail.i16LowSpeedBackward;	  /* max current consigne*/
		boNoSpeedMaxRailMode = FALSE;
	}
	else if(gDb_tRamGeneralC0.eRailSpeedMode == GE_LOW_SPEED_BRAKE_TEST_NEEDED)
	{
		aiCurrentRangeEvForward[2] = gDb_tNvParamSpeedMaxRail.i16LowSpeedBrakeTestForward;	 	  /* max current consigne*/
		aiCurrentRangeEvBackward[2] = gDb_tNvParamSpeedMaxRail.i16LowSpeedBrakeTestBackward;	  /* max current consigne*/
		boNoSpeedMaxRailMode = FALSE;
	}
	else if(gDb_tRamGeneralC0.eRailSpeedMode == GE_BRAKE_TEST_SPEED_RUNNING)
	{
		aiCurrentRangeEvForward[2] = gDb_tNvParamSpeedMaxRail.i16TestBrakeSpeedForward;		  /* max current consigne*/
		aiCurrentRangeEvBackward[2] = gDb_tNvParamSpeedMaxRail.i16TestBrakeSpeedBackward;	  /* max current consigne*/
		boNoSpeedMaxRailMode = FALSE;
	}
	else if(gDb_tRamGeneralC0.eRailSpeedMode == GE_BREAK_IN_BRAKE_SPEED_RUNNING)
	{
		aiCurrentRangeEvForward[2] = gDb_tNvParamSpeedMaxRail.i16BreakeInBrakeSpeedForward;	  	  /* max current consigne*/
		aiCurrentRangeEvBackward[2] = gDb_tNvParamSpeedMaxRail.i16BreakeInBrakeSpeedBackward;	  /* max current consigne*/
		boNoSpeedMaxRailMode = FALSE;
	}
	else
	{
		boNoSpeedMaxRailMode = TRUE;
	}


	/*boAlarmHydTempRailActive*/
	TInt16 i16Thres;
	//set
	if(gDb_tRamSelectControlPost.eSelectedControlPost == GE_POST_NACELLE
	&& gDb_tRamEcuInputsC0.i16TemperatureTransmissionValue >= gDb_tNvParamAlarmC0.u16TempRailOverAlarmThres)
		gDb_tRamGeneralC0.boAlarmHydTempRailActive = TRUE;
	//reset
	i16Thres = 0;
	if(gDb_tNvParamAlarmC0.u16TempRailOverAlarmThres > gDb_tNvParamAlarmC0.u16HystTempTrans)
		i16Thres = gDb_tNvParamAlarmC0.u16TempRailOverAlarmThres - gDb_tNvParamAlarmC0.u16HystTempTrans;

	if(gDb_tRamEcuInputsC0.i16TemperatureTransmissionValue <= i16Thres
	|| gDb_tRamSelectControlPost.eSelectedControlPost != GE_POST_NACELLE)
		gDb_tRamGeneralC0.boAlarmHydTempRailActive = FALSE;

/*------------------------------------------------------Adaptation de la consigne de la pompe par rapport à la température-----------------------------------------------------------------------------------------------------*/
		TInt32 i32CoefRailForward;
		TInt16 i16OutputCoefResultRailForward; /*Nouvelle variable, résultat de y=ax + b*/
		TUint16 u16MinimumCoefValueForward; /* Nouvelle variable, pour le minimum de l'ordonné*/
		TFloat32 f32PrctCoefResultForward; /* Nouvelle variable, pour le résulat de la consigne en pourcentage décimal*/
		TInt32 i32CoefRailBackward;
		TInt16 i16OutputCoefResultRailBackward; /*Nouvelle variable, résultat de y=ax + b*/
		TUint16 u16MinimumCoefValueBackward; /* Nouvelle variable, pour le minimum de l'ordonné*/
		TFloat32 f32PrctCoefResultBackward; /* Nouvelle variable, pour le résulat de la consigne en pourcentage décimal*/


		/*Sens Forward*/
		/*Conversion Consigne de la pompe en mA => Consigne joystick*/
		u16MinimumCoefValueForward = (gDb_tNvParamSpeedMaxRail.i16LowSpeedForward * 10000) / gDb_tNvParamSpeedMaxRail.i16AccesSiteSpeedForward;
		/* y=ax + b // Réglage de la vitesse proportionnelle par rapport à la température de l'huile*/
		/* Résultat compris entre (10000 ; u16MinimumCoefValueForward)*/

		i32CoefRailForward = i32CalcLinear2Dots((gDb_tRamEcuInputsC0.i16TemperatureTransmissionValue),gDb_tNvParamAlarmC0.u16TempRailOverFaultThres , u16MinimumCoefValueForward,gDb_tNvParamAlarmC0.u16TempRailOverAlarmThres, 10000);
		i16OutputCoefResultRailForward =(TInt16)i32RangeMinMax (i32CoefRailForward,u16MinimumCoefValueForward,10000);

		/*Conversion en pourcentage décimal*/
		f32PrctCoefResultForward = (TFloat32)i16OutputCoefResultRailForward/10000;

		/*Sens Backward*/
		/*Conversion Consigne de la pompe en mA => Consigne joystick*/
		u16MinimumCoefValueBackward = (gDb_tNvParamSpeedMaxRail.i16LowSpeedBackward * 10000) / gDb_tNvParamSpeedMaxRail.i16AccesSiteSpeedBackward;
		/* y=ax + b // Réglage de la vitesse proportionnelle par rapport à la température de l'huile*/
		/* Résultat compris entre (10000 ; u16MinimumCoefValueBackward)*/

		i32CoefRailBackward = i32CalcLinear2Dots((gDb_tRamEcuInputsC0.i16TemperatureTransmissionValue),gDb_tNvParamAlarmC0.u16TempRailOverFaultThres , u16MinimumCoefValueBackward,gDb_tNvParamAlarmC0.u16TempRailOverAlarmThres, 10000);
		i16OutputCoefResultRailBackward =(TInt16)i32RangeMinMax (i32CoefRailBackward,u16MinimumCoefValueBackward,10000);

		/*Conversion en pourcentage décimal*/
		f32PrctCoefResultBackward = (TFloat32)i16OutputCoefResultRailBackward /10000;

		/*Attribution sens Forward / Backward*/
		TInt16 i16JoystickAdvanceScalingValueLocal;/*Position du joystick*/
		i16JoystickAdvanceScalingValueLocal = vCl_3_Pos_Analog_Input((TInt16)u16JoystickAdvance,(TInt16)gDb_tRam48XsInputsC0.u16BatterieVoltage48Xs*gDb_tNvParametersC0.u16InMinJoystickAdvance/1000,
												(TInt16)(gDb_tRam48XsInputsC0.u16BatterieVoltage48Xs/2),gDb_tRam48XsInputsC0.u16BatterieVoltage48Xs*gDb_tNvParametersC0.u16InMaxJoystickAdvance/1000,
												-10000,0,10000,gDb_tRam48XsInputsC0.u16BatterieVoltage48Xs*gDb_tNvParametersC0.u8DeadZoneJoystickRailAdvancement/100);

		if(i16JoystickAdvanceScalingValueLocal >= 0)/*Sens positif*/
		{
		 gDb_tRamGeneralC0.i16JoystickAdvanceScalingValue = i16JoystickAdvanceScalingValueLocal * f32PrctCoefResultForward;
		 gDb_tRamGeneralC0.u8ReductionPumpRail = (TUint8)(f32PrctCoefResultForward*100);
		}

		else if(i16JoystickAdvanceScalingValueLocal < 0)/*Sens negatif*/
		{
		  gDb_tRamGeneralC0.i16JoystickAdvanceScalingValue = i16JoystickAdvanceScalingValueLocal * f32PrctCoefResultBackward;
		  gDb_tRamGeneralC0.u8ReductionPumpRail = (TUint8)(f32PrctCoefResultBackward*100);
		}

		/*=============================================================================================*/
		/*								 Authorize movement											   */
		/*=============================================================================================*/

		static TBoolean boAskInvertedTranslation = FALSE;
		static TUint16 u16PreviousForwardPumpTransmission = 0;
		static TUint16 u16PreviousBackwardPumpTransmission = 0;


		if ((u16PreviousForwardPumpTransmission >0 &&  gDb_tRamGeneralC0.i16JoystickAdvanceScalingValue <0 )
		||
		(u16PreviousBackwardPumpTransmission >0 &&  gDb_tRamGeneralC0.i16JoystickAdvanceScalingValue >0))
		{
			boAskInvertedTranslation = TRUE;
		}
		else
			boAskInvertedTranslation = FALSE;

		static TBoolean boInterdictTestBrakesTranslation = FALSE;

		if (gDb_tRamEvision7C0.bogOffTrackTestBrakeActivated == TRUE
		&& gDb_tRamBrakeTest.boValidConditionEnableTestBrake == TRUE
		&& gDb_tRamEvision7C0.bogOsciServiceBrakeSelect == FALSE
		&& gDb_tRamEvision7C0.bogFixedServiceBrakeSelect == FALSE
		&& gDb_tRamEvision7C0.bogOsciParkBrakeSelect == FALSE
		&& gDb_tRamEvision7C0.bogFixedParkBrakeSelect == FALSE
		/*Double freins*/
		&& gDb_tRamEvision7C0.bogFixe2ndParkBrakeSelect == FALSE
		&& gDb_tRamEvision7C0.bogOsci2ndParkBrakeSelect == FALSE)
		/*Double freins*/
			boInterdictTestBrakesTranslation = TRUE;
		if((gDb_tRamBrakeTest.boValidConditionEnableTestBrake == FALSE
		&& gDb_tRamGeneralC0.i16JoystickAdvanceScalingValue == 0)
		|| gDb_tRamEvision7C0.bogOffTrackTestBrakeActivated == FALSE)
			boInterdictTestBrakesTranslation = FALSE;

		if(boDeadManPedal == TRUE
		&& boGachette == TRUE
		&& boNoSpeedMaxRailMode == FALSE
		&& eSelectedControlPost == GE_POST_NACELLE
		&& boAskInvertedTranslation == FALSE
		&& boInterdictTestBrakesTranslation == FALSE
		&& gDb_tRamGeneralC0.u16EvForwardTrackConsigne == 0
		&& bo_ARU_C0_Actived == FALSE/*Ajout 23.05.2019*/
		&& bo_ARU_RADIO_C0_Actived == FALSE/*Ajout 23.05.2019*/
		&& gDb_tRamSpeedMaxRail.boLitmitSpeedExceeded == FALSE /*Ajout 23.05.2019*/
		&& gDb_tRamData4C0RcvFromC1.boNoMovementRunning == FALSE /*Ajout provisoire 04.06.2019 aucun mouvement en cours reflet du bypass ou de la génératrice*/
		&& gDb_tRamGreenEffC0.boTransRailElectricRampOngoing == FALSE //GREEN
		&& gDb_tRamEcuC0RcvFromC1.i32RegimeMotorAlternatorRpm >= 500 //Moteur Thermique On //GREEN
		)

		{
			gDb_tRamGeneralC0.boAuthorizeTransRailMovement = TRUE;
		}
		else
		{
			gDb_tRamGeneralC0.boAuthorizeTransRailMovement = FALSE;
		}

		/* safety authorize translation rail*/
		vSafetyAuthorizeTransRail();

		/* =============================================================================================*/
		/* 									Control Rail translation command							*/
		/* =============================================================================================*/

		/* regarding joystick given as input, apply a ramp and convert value to get a current command for 2 Ev*/
		In1ProAxisPilotOut2PropEvFunction(gDb_tRamGeneralC0.i16JoystickAdvanceScalingValue,gDb_tRam48XsInputsC0.boCenteredAdvanceJoystick, gDb_tRamGeneralC0.boAuthorizeTransRailMovement,gDb_tRamGeneralC0.boAuthorizeTransRailMovement,
											&tJoystickRampRail,gDb_tNvParametersC0.au16TimeRampEvAdvancementRail,
											aiCurrentRangeEvForward,aiCurrentRangeEvBackward,
											gDb_tNvParamSpeedMaxRail.i16AccesSiteSpeedForward,
											gDb_tNvParamSpeedMaxRail.i16AccesSiteSpeedBackward,
											 &i16ForwardPumpTransmission,&i16BackwardPumpTransmission,
											&gDb_tRamGeneralC0.i16JoystickAdvanceSetpointAfterRamp);

		*u16ForwardPumpTransmission = u16CastI16(i16ForwardPumpTransmission);
		u16PreviousForwardPumpTransmission = u16CastI16(i16ForwardPumpTransmission);
		*u16BackwardPumpTransmission = u16CastI16(i16BackwardPumpTransmission);
		u16PreviousBackwardPumpTransmission = u16CastI16(i16BackwardPumpTransmission);

		if (*u16ForwardPumpTransmission > 0
		|| *u16BackwardPumpTransmission > 0)
			gDb_tRamGreenEffC0.boTransRailThermiqueRampOngoing = TRUE; //GREEN
		else
			gDb_tRamGreenEffC0.boTransRailThermiqueRampOngoing = FALSE; //GREEN

}

