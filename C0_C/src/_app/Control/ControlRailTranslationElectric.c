
//==================================================================================================
//! @file ControlRailTranslationElectric.c
//! @brief Control rail translation function
//! @see Target for ...
//! @section app
//! @subsection IO
//! @author Vasseur françois
//! @created 11.02.2022 NEOTEC
//! copyrights (c) all rights reserved by NEOTEC
//=================================================================================================

#include "ControlRailTranslationElectric.h"

// GLOBAL VARIABLES DECLARATIONS ==================================================================

//-----------------------------------------------------------------------------------------------------
//! @brief ControlRailTranslationElectric
//!
//!
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 02.11.2022 NEOTEC/FV
//!
//! @care
//! @todo
//
//-----------------------------------------------------------------------------------------------------
TVoid vControlRailTranslationElectric(TVoid)
{
	/*=============================================================================================*/
	/*								Electric Pump Pressure 										   */
	/*=============================================================================================*/
	/*boElectricPumpPressureExceeded*/
	if(gDb_tRamEcuInputsC0.i16ElectricPumpPressureValue >= gDb_tNvParamGreenEffC0.u16ElectricPumpPressureMax)
		gDb_tRamGreenEffC0.boElectricPumpPressureExceeded = TRUE;
	if( gDb_tNvParamGreenEffC0.u16ElectricPumpPressureMax >= gDb_tNvParamGreenEffC0.u16ElectricPumpPressureHyst
	&& gDb_tRamEcuInputsC0.i16ElectricPumpPressureValue <= (gDb_tNvParamGreenEffC0.u16ElectricPumpPressureMax - gDb_tNvParamGreenEffC0.u16ElectricPumpPressureHyst ))
		gDb_tRamGreenEffC0.boElectricPumpPressureExceeded = FALSE;


	/*=============================================================================================*/
	/*								 Translation Rail Electric									   */
	/*=============================================================================================*/

	/*Attribution sens Forward / Backward*/
	TInt16 i16JoystickAdvanceScalingValueLocal;/*Position du joystick*/
	i16JoystickAdvanceScalingValueLocal = vCl_3_Pos_Analog_Input((TInt16)gDb_tRam48XsInputsC0.u16AdvanceAxisJoystick,(TInt16)gDb_tRam48XsInputsC0.u16BatterieVoltage48Xs*gDb_tNvParametersC0.u16InMinJoystickAdvance/1000,
										(TInt16)(gDb_tRam48XsInputsC0.u16BatterieVoltage48Xs/2),gDb_tRam48XsInputsC0.u16BatterieVoltage48Xs*gDb_tNvParametersC0.u16InMaxJoystickAdvance/1000,
										-10000,0,10000,gDb_tRam48XsInputsC0.u16BatterieVoltage48Xs*gDb_tNvParametersC0.u8DeadZoneJoystickRailAdvancement/100);


	/*boInterdictTestBrakesTranslation*/
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

	/*boAutorizeTransRailElectric*/
	if(gDb_tRamEcuC0RcvFromC1.i32RegimeMotorAlternatorRpm <= 0 //Moteur Thermique off
	&& gDb_tRam48XsInputsC0.boDeadManPedal == TRUE
	&& gDb_tRam48XsInputsC0.boGachette == TRUE
	&& gDb_tRamSelectControlPost.eSelectedControlPost == GE_POST_NACELLE
	&& boInterdictTestBrakesTranslation == FALSE
	&& bo_ARU_C0_Actived == FALSE/*Ajout 23.05.2019*/
	&& bo_ARU_RADIO_C0_Actived == FALSE/*Ajout 23.05.2019*/
	&& gDb_tRamSpeedMaxRail.boKinematicTrainAllow == TRUE //GREEN Configurations cinematique ou on peut se déplacer
	&& gDb_tRamData4C0RcvFromC1.boNoMovementRunning == FALSE /*Ajout provisoire 04.06.2019 aucun mouvement en cours reflet du bypass ou de la génératrice*/
	&& gDb_tRamGreenEffC0.boTransRailThermiqueRampOngoing == FALSE //GREEN
	&& gDb_tRamEcuC0RcvFailluresFromC1.boDm_Overload_Detected_By_C1 == FALSE // GREEN NEOTEC IG
	)
		gDb_tRamGreenEffC0.boAutorizeTransRailElectric = TRUE;
	else
		gDb_tRamGreenEffC0.boAutorizeTransRailElectric = FALSE;


	/* safety authorize translation rail*/
	vSafetyAuthorizeTransRail();


	if(gDb_tRamSelectControlPost.eSelectedControlPost == GE_POST_NACELLE
	|| 	gDb_tRamGreenEffC0.boAutorizeTransRailElectric == TRUE)
	{
		/* affect consigne by output scaling joystick*/
		gDb_tRamGreenEffC0.i16PvgTransRailElectricConsigne = i16JoystickAdvanceScalingValueLocal;
	}
	else
	{
		/*no movement*/
		gDb_tRamGreenEffC0.i16PvgTransRailElectricConsigne = 0;
	}

	/*boStopRampPvgTransRailElectric*/
	if(gDb_tRamGreenEffC0.boElectricPumpPressureExceeded == TRUE)
		gDb_tRamGreenEffC0.boStopRampPvgTransRailElectric = TRUE;
	else
		gDb_tRamGreenEffC0.boStopRampPvgTransRailElectric = FALSE;

	/*********************/
	/*Ramp Electric Trans*/
	/*********************/

	TInt16 aiVoltageRangeTransRailElectricPvg[5] = {0,0,0,0,0};
	aiVoltageRangeTransRailElectricPvg[0] = gDb_tRamGeneralC0.u16EcuVoltage / 2;	/* off voltage*/
	aiVoltageRangeTransRailElectricPvg[1] = gDb_tNvParamGreenEffC0.u8MaxPvgTransRailElectricAv * gDb_tRamGeneralC0.u16EcuVoltage / 100;	/* max Av*/
	aiVoltageRangeTransRailElectricPvg[2] = gDb_tNvParamGreenEffC0.u8MaxPvgTransRailElectricAr * gDb_tRamGeneralC0.u16EcuVoltage / 100;	/* max Ar*/
	aiVoltageRangeTransRailElectricPvg[3] = gDb_tNvParamGreenEffC0.u8MinPvgTransRailElectricAv * gDb_tRamGeneralC0.u16EcuVoltage / 100;	/* min Av*/
	aiVoltageRangeTransRailElectricPvg[4] = gDb_tNvParamGreenEffC0.u8MinPvgTransRailElectricAr * gDb_tRamGeneralC0.u16EcuVoltage / 100;	/* min Ar*/

	TInt16 i16ParamMaxTransRailElectricPvg = gDb_tNvParamGreenEffC0.u8MaxPvgTransRailElectricAv * gDb_tRamGeneralC0.u16EcuVoltage / 100;	/* max Av*/
	TInt16 i16ParamMinTransRailElectricPvg = gDb_tNvParamGreenEffC0.u8MaxPvgTransRailElectricAr * gDb_tRamGeneralC0.u16EcuVoltage / 100;	/* max Ar*/

	TUint16 auTransRailElectricRampTime[4]= {0,0,0,0};
	if (gDb_tRamGreenEffC0.boStopRampPvgTransRailElectric == TRUE)
	{
		auTransRailElectricRampTime[0] = gDb_tNvParamGreenEffC0.u16TransRailElectricRampTimeStop;
		auTransRailElectricRampTime[1] = gDb_tNvParamGreenEffC0.u16TransRailElectricRampTimeDec;
		auTransRailElectricRampTime[2] = gDb_tNvParamGreenEffC0.u16TransRailElectricRampTimeStop;
		auTransRailElectricRampTime[3] = gDb_tNvParamGreenEffC0.u16TransRailElectricRampTimeDec;
	}
	else
	{
		auTransRailElectricRampTime[0] = gDb_tNvParamGreenEffC0.u16TransRailElectricRampTimeAcc;
		auTransRailElectricRampTime[1] = gDb_tNvParamGreenEffC0.u16TransRailElectricRampTimeDec;
		auTransRailElectricRampTime[2] = gDb_tNvParamGreenEffC0.u16TransRailElectricRampTimeAcc;
		auTransRailElectricRampTime[3] = gDb_tNvParamGreenEffC0.u16TransRailElectricRampTimeDec;
	}

	static TInt16 i16TransRailElectricScalingAfterRamp = 0;
	TInt16 i16LocalOutputsPvgCommand = (TInt16)gDb_tRamEcuOutputsC0.u16PvgTransRailElectricCmd;

	vPropVoltPvgFunction(gDb_tRamGreenEffC0.i16PvgTransRailElectricConsigne,
						gDb_tRamGreenEffC0.boAutorizeTransRailElectric,gDb_tRamGreenEffC0.boAutorizeTransRailElectric,
						&tPvgTransRailElectricRamp,auTransRailElectricRampTime,
						aiVoltageRangeTransRailElectricPvg,
						i16ParamMaxTransRailElectricPvg,i16ParamMinTransRailElectricPvg,
						&i16LocalOutputsPvgCommand,
						&gDb_tRamEcuOutputsC0.boSupllyPvgTransRailElectricCmd,
						&i16TransRailElectricScalingAfterRamp);

	gDb_tRamEcuOutputsC0.u16PvgTransRailElectricCmd = (TUint16)i16LocalOutputsPvgCommand;

	/*boTransRailElectricRampOngoing*/
	if (i16TransRailElectricScalingAfterRamp !=0)
		gDb_tRamGreenEffC0.boTransRailElectricRampOngoing = TRUE;
	else
		gDb_tRamGreenEffC0.boTransRailElectricRampOngoing = FALSE;

	/*boEvDevRailElectricModeCmd*/
	gDb_tRamEcuOutputsC0.boEvDevRailElectricModeCmd = gDb_tRamGreenEffC0.boTransRailElectricRampOngoing; //gDb_tRamGeneralC0.boFirstTranslationReleaseParkBrake && gDb_tRamEcuC0RcvFromC1.i32RegimeMotorAlternatorRpm < 500;

	/*Debug pour connaitre la durée des rampes*/
	static TUint16 cpt = 0;
	if (gDb_tRamGreenEffC0.i16PvgTransRailElectricConsigne == i16TransRailElectricScalingAfterRamp)
		cpt = 0;
	else if (gDb_tRamGreenEffC0.i16PvgTransRailElectricConsigne != i16TransRailElectricScalingAfterRamp)
		cpt = cpt+1;


//--------------------------------------------------------------------
//Calcul du rpm en fonction de la translation rail pour le mode electrique
	TUint16 PVG_MAX_TRANS_HIGH_50 = aiVoltageRangeTransRailElectricPvg[1];	/*max Av*/
	TUint16 PVG_Q_TRANS_HIGH_50 = gDb_tNvParamGreenEffC0.u8MIN_PVG_TRANS_HIGH_50 * gDb_tRamGeneralC0.u16EcuVoltage / 100;	/*Seuil pour RPM MAX Av*/
	TUint16 PVG_MIN_TRANS_HIGH_50 = aiVoltageRangeTransRailElectricPvg[3];	/* min Av*/
	TUint16 PVG_MIN_TRANS_LOW_50 = aiVoltageRangeTransRailElectricPvg[4];	/* min Ar*/
	TUint16 PVG_Q_TRANS_LOW_50 = gDb_tNvParamGreenEffC0.u8MIN_PVG_TRANS_LOW_50 * gDb_tRamGeneralC0.u16EcuVoltage / 100;		/* Seuil pour RPM MAX Ar*/
	TUint16 PVG_MAX_TRANS_LOW_50 = aiVoltageRangeTransRailElectricPvg[2];	/*max Ar*/

	static TUint16 u16PvgCommand = 0;
	u16PvgCommand = gDb_tRamEcuOutputsC0.u16PvgTransRailElectricCmd;
	if(u16PvgCommand>=PVG_Q_TRANS_HIGH_50)
		gDb_tRamGreenEffC0.i16RpmPvgTransRail =i16CalcLinear2Dots(u16PvgCommand, PVG_Q_TRANS_HIGH_50, gDb_tNvParamGreenEffC0.u16ELECTRIC_MOTOR_RPM_TRANS_MIN,PVG_MAX_TRANS_HIGH_50, gDb_tNvParamGreenEffC0.u16ELECTRIC_MOTOR_RPM_TRANS_MAX);
	else if (u16PvgCommand>=PVG_MIN_TRANS_HIGH_50)
		gDb_tRamGreenEffC0.i16RpmPvgTransRail = gDb_tNvParamGreenEffC0.u16ELECTRIC_MOTOR_RPM_TRANS_MIN;
	else if(u16PvgCommand<=PVG_Q_TRANS_LOW_50)
		gDb_tRamGreenEffC0.i16RpmPvgTransRail =i16CalcLinear2Dots(u16PvgCommand, PVG_Q_TRANS_LOW_50, gDb_tNvParamGreenEffC0.u16ELECTRIC_MOTOR_RPM_TRANS_MIN,PVG_MAX_TRANS_LOW_50, gDb_tNvParamGreenEffC0.u16ELECTRIC_MOTOR_RPM_TRANS_MAX);
	else if (u16PvgCommand<=PVG_MIN_TRANS_LOW_50)
		gDb_tRamGreenEffC0.i16RpmPvgTransRail = gDb_tNvParamGreenEffC0.u16ELECTRIC_MOTOR_RPM_TRANS_MIN;
	else
		gDb_tRamGreenEffC0.i16RpmPvgTransRail =0;
}
