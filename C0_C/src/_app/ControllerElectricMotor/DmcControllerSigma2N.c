//==================================================================================================
//! @file DmcControllerSigma2N.c
//! @brief Management DMC Sigma2N Controller
//! @see Target for ...
//! @section app
//! @subsection IO
//! @author NEOTEC/FV
//! @created 14.03.2023 NEOTEC/FV
//! copyrights (c) all rights reserved by NEOTEC
//=================================================================================================

#include "DmcControllerSigma2N.h"

// GLOBAL VARIABLES DECLARATIONS ==================================================================

//-----------------------------------------------------------------------------------------------------
//! @brief DmcControllerSigma2N
//!
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 14.03.2023 NEOTEC/FV
//!
//! @change
//!
//! @care
//! @todo
//
//
//-----------------------------------------------------------------------------------------------------
TVoid vDmcControllerSigma2N(TVoid)
{

	/*boRelayEnableBatteryCmd*/
	gDb_tRamEcuOutputsC0.boRelayEnableBatteryCmd = TRUE; //VOIR SI POSSIBLE DE LE SUPPRIMER

	/*boThermicMotorRunning*/
	static TBoolean boThermicMotorRunning = FALSE;
	if(gDb_tRamEcuC0RcvFromC1.i32RegimeMotorAlternatorRpm >= 500)
		boThermicMotorRunning = TRUE;
	else
		boThermicMotorRunning = FALSE;

	/*i16MS_ActualSpeedRpmAverage*/
	static TFloat64	f64SAtualSpeedRpmSum = 0;
	static TInt16 i16MS_ActualSpeedRpmAverage =0;
	f64SAtualSpeedRpmSum = f64MovAverage(gDb_tRamDMC_C0.i16MS_ActualSpeedRpm, f64SAtualSpeedRpmSum, gDb_tNvParamGreenEffC0.u8NbrSamplesAverageRpm);
	i16MS_ActualSpeedRpmAverage = (TInt16)f64SAtualSpeedRpmSum;
	if (i16MS_ActualSpeedRpmAverage>0)
		i16MS_ActualSpeedRpmAverage = 0;

	/*boDC_InterlockByt6Bit3*/
	/*Mise à un*/
	if(((gDb_tRamSelectControlPost.eSelectedControlPost == GE_POST_NACELLE 	|| gDb_tRamSelectControlPost.eSelectedControlPost == GE_POST_TURRET)
	&& gDb_tRamEcuC0RcvFromC1.i16RpmMotorElectric == 0)
	|| 	boThermicMotorRunning == TRUE
	)
		gDb_tRamDMC_C0.boDC_InterlockByt6Bit3 = TRUE;
	/*Mise à zéro*/
	static TBoolean boDelayCutOffInterlock = FALSE;
	if(gDb_tRamSelectControlPost.eSelectedControlPost != GE_POST_NACELLE
	&& gDb_tRamSelectControlPost.eSelectedControlPost != GE_POST_TURRET
	&& gDb_tRamEcuC0RcvFromC1.i16RpmMotorElectric == 0
	&& boThermicMotorRunning == FALSE
	)
		boDelayCutOffInterlock = TRUE;
	else
		boDelayCutOffInterlock = FALSE;
	/*TON*/
	static TUint16 u16cptInterlock =0;
	TUint16 u16cptmaxInterlock =15; //15x20ms = 300ms
	if(boDelayCutOffInterlock == TRUE)
	{
		if (u16cptInterlock>=u16cptmaxInterlock)
			u16cptInterlock=u16cptmaxInterlock;
		else
			u16cptInterlock=u16cptInterlock+1;
	}
	else
		u16cptInterlock=0;
	if ( u16cptInterlock == u16cptmaxInterlock)
		gDb_tRamDMC_C0.boDC_InterlockByt6Bit3 = FALSE;

	/*boDelayAuthorizeReloadBattery*/
	static TBoolean boDelayAuthorizeReloadBattery = FALSE;
	/*TON*/
	static TUint16 u16cptReloadBatt =0;
	TUint16 u16cptmaxReloadBatt =250; //250x20ms = 5000ms
	if(boThermicMotorRunning == TRUE
	&& i16MS_ActualSpeedRpmAverage <=-250 //protection blocage moteur electrique attention rpm negatif
	&& gDb_tRamEcuC0RcvFromC1.boSocStopRegen == FALSE
	&& gDb_tRamEcuC0RcvFromC1.boEvDevMvtsCmd == FALSE
	)
	{
		if (u16cptReloadBatt>=u16cptmaxReloadBatt)
			u16cptReloadBatt=u16cptmaxReloadBatt;
		else
			u16cptReloadBatt=u16cptReloadBatt+1;
	}
	else
		u16cptReloadBatt=0;
	if ( u16cptReloadBatt == u16cptmaxReloadBatt)
		boDelayAuthorizeReloadBattery = TRUE;
	else
		boDelayAuthorizeReloadBattery = FALSE;

	/*boDC_RegenEnableByte6Bit6*/
	if(boDelayAuthorizeReloadBattery == TRUE
	&& bo_ARU_C0_Actived == FALSE
	)
		gDb_tRamDMC_C0.boDC_RegenEnableByte6Bit6 = TRUE;
	else
		gDb_tRamDMC_C0.boDC_RegenEnableByte6Bit6 = FALSE;


	/*boDelayAuthorizeSendRpm*/
	static TBoolean boDelayAuthorizeSendRpm = FALSE;
	/*TON*/
	static TUint16 u16cptSendRpm =0;
	TUint16 u16cptMaxSendRpm =15; //15x20ms = 300ms
	if(gDb_tRamDMC_C0.boDC_InterlockByt6Bit3 == TRUE)
	{
		if (u16cptSendRpm>=u16cptMaxSendRpm)
			u16cptSendRpm=u16cptMaxSendRpm;
		else
			u16cptSendRpm=u16cptSendRpm+1;
	}
	else
		u16cptSendRpm=0;
	if ( u16cptSendRpm == u16cptMaxSendRpm)
		boDelayAuthorizeSendRpm = TRUE;
	else
		boDelayAuthorizeSendRpm = FALSE;


/*MODE PUMP*/
	/*u16DC_RpmRequest*/
	if (boDelayAuthorizeSendRpm == TRUE
	&& gDb_tRamDMC_C0.boDC_RegenEnableByte6Bit6 == FALSE) //Mode Pompe
		gDb_tRamDMC_C0.u16DC_RpmRequest = gDb_tRamEcuC0RcvFromC1.i16RpmMotorElectric;
	else
		gDb_tRamDMC_C0.u16DC_RpmRequest = 0;

	if (gDb_tRamDMC_C0.u16DC_RpmRequest>4096)
		gDb_tRamDMC_C0.u16DC_RpmRequest = 4096;



/*MODE PUMP OR MODE REGEN*/
	/*u16DC_GeneratorRegenBattCurLimit*/
	if (gDb_tRamDMC_C0.boDC_RegenEnableByte6Bit6 == TRUE)
	{
		gDb_tRamDMC_C0.u16DC_GeneratorRegenBattCurLimit = 4096;
	}
	else
		gDb_tRamDMC_C0.u16DC_GeneratorRegenBattCurLimit = 0; //interdiction

	if (gDb_tRamDMC_C0.u16DC_GeneratorRegenBattCurLimit>4096)
		gDb_tRamDMC_C0.u16DC_GeneratorRegenBattCurLimit = 4096;


/*MODE REGEN*/
	/*boElectricPumpPressureFault*/
	static TBoolean boElectricPumpPressureFault = FALSE;
	if(gDb_tRamEcuInputsC0.i16ElectricPumpPressureValue >= 32000 // CAS DEFAUT
	/*|| gDb_tRamEcuC0RcvFromC1.boEvBypassCommand == TRUE*/) //CAS MVTS EN COURS
		boElectricPumpPressureFault = TRUE;
	else
		boElectricPumpPressureFault = FALSE;

	static TBoolean boRisingElectricPumpPressureFault = FALSE;
	static TBoolean boPreviousRisingElectricPumpPressureFault = FALSE;
	boRisingElectricPumpPressureFault = vRisingEdge(boElectricPumpPressureFault,boPreviousRisingElectricPumpPressureFault,&boPreviousRisingElectricPumpPressureFault);

	static TBoolean boFallingElectricPumpPressureFault = FALSE;
	static TBoolean boPreviousFallingElectricPumpPressureFault = FALSE;
	boFallingElectricPumpPressureFault = vFallingEdge(boElectricPumpPressureFault,boPreviousFallingElectricPumpPressureFault,&boPreviousFallingElectricPumpPressureFault);


	/*i16PressureRangeMin*/
	static TInt16  i16PressureRangeMin = 0;
	i16PressureRangeMin = gDb_tNvParamGreenEffC0.u16RegenPumpPressureMax - gDb_tNvParamGreenEffC0.i16RegenPumpPressureHyst; //gDb_tNvParametersC0.i16NvParametersC0_16;
	if (i16PressureRangeMin<=0)
		i16PressureRangeMin = 0;

	/*i16CorrectionRegenBrakeTorqueFromPressure*/
	static TInt16 i16CorrectionRegenBrakeTorqueFromPressure = 0;
	if (boElectricPumpPressureFault == FALSE
	&& gDb_tRamEcuInputsC0.i16ElectricPumpPressureValue >= i16PressureRangeMin)
		i16CorrectionRegenBrakeTorqueFromPressure = ((gDb_tNvParamGreenEffC0.u16RegenPumpPressureMax - gDb_tRamEcuInputsC0.i16ElectricPumpPressureValue) * gDb_tNvParamGreenEffC0.i16RegenBrakeTorqueFromPressurCoefK)/1000; //gDb_tNvParametersC0.i16NvParametersC0_15 k correcteur k*1000 0.15 = 150
	else
		i16CorrectionRegenBrakeTorqueFromPressure = 0; //No correction

	/*i16RegenBrakeTorqueFromPressure*/
	static TBoolean boInitOne = FALSE;
	static TInt16 i16RegenBrakeTorqueFromPressure = 0;
	static TInt16 i16RegenBrakeTorqueFromPressureOld = 0;
	if (boInitOne == FALSE)
	{
		i16RegenBrakeTorqueFromPressure = gDb_tNvParamGreenEffC0.i16REGEN_BRAKE_TORQUE_MODE_AUTO;
		i16RegenBrakeTorqueFromPressureOld = gDb_tNvParamGreenEffC0.i16REGEN_BRAKE_TORQUE_MODE_AUTO;
		boInitOne = TRUE;
	}

	i16RegenBrakeTorqueFromPressure = i16RegenBrakeTorqueFromPressureOld + i16CorrectionRegenBrakeTorqueFromPressure;
	if (i16RegenBrakeTorqueFromPressure <= -gDb_tNvParamGreenEffC0.i16RegenBrakeTorqueFromPressurRange) //gDb_tNvParametersC0.i16NvParametersC0_14
		i16RegenBrakeTorqueFromPressure = - gDb_tNvParamGreenEffC0.i16RegenBrakeTorqueFromPressurRange; //gDb_tNvParametersC0.i16NvParametersC0_14
	else if (i16RegenBrakeTorqueFromPressure >= gDb_tNvParamGreenEffC0.i16RegenBrakeTorqueFromPressurRange) //gDb_tNvParametersC0.i16NvParametersC0_14
		i16RegenBrakeTorqueFromPressure = gDb_tNvParamGreenEffC0.i16RegenBrakeTorqueFromPressurRange; //gDb_tNvParametersC0.i16NvParametersC0_14
	i16RegenBrakeTorqueFromPressureOld = i16RegenBrakeTorqueFromPressure;


	/*u16DC_AI2_StaticBrakeTorqueLimit*/
	static TInt16 i16RegenBrakeTorqueFromRpm = 0;
	static TInt16 i16DC_AI2_StaticBrakeTorqueLimitLocal = 0;
	if(gDb_tRamDMC_C0.boDC_RegenEnableByte6Bit6 == TRUE)
	{
		//Mode 1
		i16RegenBrakeTorqueFromRpm = i16CalcLinear2Dots( -i16MS_ActualSpeedRpmAverage,
														gDb_tNvParamGreenEffC0.i16REGEN_BRAKE_RPM_MODE_AUTO /*i16ValMin*/, //1300
														gDb_tNvParamGreenEffC0.i16REGEN_BRAKE_TORQUE_MODE_AUTO, //100
														gDb_tNvParamGreenEffC0.i16REGEN_BRAKE_RPM_MODE_HIGH /*i16ValMax*/, //3200
														gDb_tNvParamGreenEffC0.i16REGEN_BRAKE_TORQUE_MODE_HIGH /*i16CustMax*/ ); //1100

		i16DC_AI2_StaticBrakeTorqueLimitLocal = i16RegenBrakeTorqueFromRpm + i16RegenBrakeTorqueFromPressure;

		if (i16DC_AI2_StaticBrakeTorqueLimitLocal<0)
			gDb_tRamDMC_C0.u16DC_AI2_StaticBrakeTorqueLimit = 0;
		else
			gDb_tRamDMC_C0.u16DC_AI2_StaticBrakeTorqueLimit = i16DC_AI2_StaticBrakeTorqueLimitLocal;
	}
	else
		gDb_tRamDMC_C0.u16DC_AI2_StaticBrakeTorqueLimit = 0;

	gDb_tRamGeneralC0.i16RamGeneralNeotecC0_4_5 = i16RegenBrakeTorqueFromRpm;
	gDb_tRamGeneralC0.i16RamGeneralNeotecC0_4_6 = i16RegenBrakeTorqueFromPressure;
	gDb_tRamGeneralC0.i16RamGeneralNeotecC0_4_7 = i16DC_AI2_StaticBrakeTorqueLimitLocal;
	gDb_tRamGeneralC0.i16RamGeneralNeotecC0_4_8 = gDb_tRamDMC_C0.u16DC_AI2_StaticBrakeTorqueLimit; //DEBUG


	if (gDb_tRamDMC_C0.u16DC_AI2_StaticBrakeTorqueLimit>4095)
		gDb_tRamDMC_C0.u16DC_AI2_StaticBrakeTorqueLimit = 4095;

	/*u16BCL_HMI_BattSOC*/
	gDb_tRamDMC_C0.u16BCL_HMI_BattSOC = gDb_tRamFlashBatteryC0.u8Batt_Soc*10;


	/*u16BCL_HMI_DriveBattCurLimit*/
	gDb_tRamDMC_C0.u16BCL_HMI_DriveBattCurLimit = gDb_tNvParamGreenEffC0.u16CURRENT_DRIVE_LIMIT_ELECTRIC;


	/*boElectricPumpPressureResetRegen*/
	if(gDb_tRamEcuInputsC0.i16ElectricPumpPressureValue >= gDb_tNvParamGreenEffC0.u16RegenPumpPressureReset
	&& boElectricPumpPressureFault == FALSE)
		gDb_tRamGreenEffC0.boElectricPumpPressureResetRegen = TRUE;
	else
		gDb_tRamGreenEffC0.boElectricPumpPressureResetRegen = FALSE;

	/*boElectricPumpPressureMaxRegen*/
	if(gDb_tRamEcuInputsC0.i16ElectricPumpPressureValue >= gDb_tNvParamGreenEffC0.u16RegenPumpPressureMax
	&& boElectricPumpPressureFault == FALSE)
		gDb_tRamGreenEffC0.boElectricPumpPressureMaxRegen = TRUE;
	else
		gDb_tRamGreenEffC0.boElectricPumpPressureMaxRegen = FALSE;


	/*boInRampCurMaxRegenThermic*/
	static TBoolean boInRampCurMaxRegenThermic = FALSE;
	if(gDb_tRamEcuC0RcvFromC1.i16RpmMotorElectric <= 0
	&& gDb_tRamDMC_C0.boDC_RegenEnableByte6Bit6 == TRUE
	&& gDb_tRamGreenEffC0.boElectricPumpPressureResetRegen == FALSE
	&& boRisingElectricPumpPressureFault == FALSE
	)
		boInRampCurMaxRegenThermic = TRUE;
	else
		boInRampCurMaxRegenThermic = FALSE;

	/*u16BCL_HMI_RegenBattCurLimit*/
	static TInt16 i16ValInRampCurMaxRegenThermic = 0;
	static TInt16 i16SetpointAfterRamp = 0;
	static TUint16 u16ValMaxCurrentRegenThermic = 0;

	static TBoolean boRisingKeyRpmSelect = FALSE;
	static TBoolean boPreviousRisingKeyRpmSelect = FALSE;
	boRisingKeyRpmSelect = vRisingEdge(gDb_tRamEvision4C0.bogKeyRpmSelect,boPreviousRisingKeyRpmSelect,&boPreviousRisingKeyRpmSelect);

	static TBoolean boRisingKeyRpmOff = FALSE;
	static TBoolean boPreviousRisingKeyRpmOff = FALSE;
	boRisingKeyRpmOff = vRisingEdge(gDb_tRamEvision4C0.bogKeyRpmOff,boPreviousRisingKeyRpmOff,&boPreviousRisingKeyRpmOff);

	if (boFallingElectricPumpPressureFault ==TRUE
	|| boRisingKeyRpmSelect == TRUE
	|| boRisingKeyRpmOff == TRUE
	)
		i16ValInRampCurMaxRegenThermic = 0; //Reset Ramp sur disparition du defaut OU changement de regime avec l'ecran 4 pouces
	else if (boInRampCurMaxRegenThermic ==TRUE
	&& boElectricPumpPressureFault == TRUE
	&& u16ValMaxCurrentRegenThermic == gDb_tNvParamGreenEffC0.u16CURRENT_MIN_REGEN_THERMIC)
		i16ValInRampCurMaxRegenThermic = 10000; //Start Ramp avec defaut
	else if (boInRampCurMaxRegenThermic ==TRUE
	&& boElectricPumpPressureFault == FALSE
	&& gDb_tRamGreenEffC0.boElectricPumpPressureMaxRegen == FALSE)
		i16ValInRampCurMaxRegenThermic = 10000; //Start Ramp sans defaut
	else if (boInRampCurMaxRegenThermic ==TRUE
	&& boElectricPumpPressureFault == FALSE
	&& 	gDb_tRamGreenEffC0.boElectricPumpPressureMaxRegen == TRUE)
		i16ValInRampCurMaxRegenThermic = i16SetpointAfterRamp; //Stop Ramp sans defaut
	else
		i16ValInRampCurMaxRegenThermic = 0; //Reset Ramp

	/*Ramp*/
	if (boElectricPumpPressureFault == TRUE)
		u16ValMaxCurrentRegenThermic = gDb_tNvParamGreenEffC0.u16CURRENT_MIN_REGEN_THERMIC;
	else
		u16ValMaxCurrentRegenThermic = gDb_tNvParamGreenEffC0.u16CURRENT_MAX_REGEN_THERMIC;

	static TUint16 u16OutRampCurMaxRegenThermic = 0;
	i16SetpointAfterRamp = i16SigRampTS2(&tPourcRegenThermicRamp,i16ValInRampCurMaxRegenThermic,gDb_tNvParamGreenEffC0.u16RAMP_TIME_REGEN_THERMIC,0 );
	u16OutRampCurMaxRegenThermic =i16CalcLinear2Dots(i16SetpointAfterRamp,0,gDb_tNvParamGreenEffC0.u16CURRENT_RESET_REGEN_THERMIC,10000,u16ValMaxCurrentRegenThermic);

	gDb_tRamDMC_C0.u16BCL_HMI_RegenBattCurLimit = u16OutRampCurMaxRegenThermic;


	/*boBatteryLowLevel*/
	if (gDb_tRamFlashBatteryC0.u8Batt_Soc < gDb_tNvParamGreenEffC0.u8BATTERY_LOW_LEVEL_SOC )
		gDb_tRamGreenEffC0.boBatteryLowLevel = TRUE;
	if (gDb_tRamFlashBatteryC0.u8Batt_Soc >= gDb_tNvParamGreenEffC0.u8BATTERY_LOW_LEVEL_SOC + 1)
		gDb_tRamGreenEffC0.boBatteryLowLevel = FALSE;


	/*boReloadBatteryImpossible*/
	static TBoolean boReloadBatteryImpossible = FALSE;
	if(gDb_tRamFlashBatteryC0.boBatt_RegenAuthorized == FALSE
	&& gDb_tRamDMC_C0.boDC_RegenEnableByte6Bit6 == TRUE
	&& gDb_tRamEcuC0RcvFromC1.boSocStopRegen == FALSE)
//	&& gDb_tRamFlashBatteryC0.u8Batt_Soc < 90) //on considère cette interdiction de recharge comme un problème uniquement si le taux de charge de la batterie est inférieur à 90%
		boReloadBatteryImpossible = TRUE;
	else
		boReloadBatteryImpossible = FALSE;

	/*boPictoReloadbatteryImpossible*/
	if (boReloadBatteryImpossible == TRUE && gDb_tRamGeneralC0.boBlinkLow==TRUE)
		gDb_tRamGreenEffC0.boPictoReloadBatteryImpossible = TRUE;
	else
		gDb_tRamGreenEffC0.boPictoReloadBatteryImpossible = FALSE;


//******************************************************************************
//******************************************************************************
// Gestion HEARTBEAT, Commandes NMT, Sdo write Idx0x3840 subidx 0 Raz default
//******************************************************************************
//******************************************************************************

	/*boWaitingHeartbeat*/
	static TUint32 u32CounterDMC_Heartbeat_HB = 0;
	if (u32CounterDMC_Heartbeat_HB == gCRcv_tDMC_Heartbeat_HB.tOut.u32RcvCnt)
		gDb_tRamDMC_C0.boWaitingHeartbeat = TRUE;
	else
		gDb_tRamDMC_C0.boWaitingHeartbeat = FALSE;
	u32CounterDMC_Heartbeat_HB = gCRcv_tDMC_Heartbeat_HB.tOut.u32RcvCnt;

	/*boTimeOutDmcHeartbeat*/
	/*TON*/
	static TUint16 u16cptDmcHeartbeat =0;
	TUint16 u16cptMaxDmcHeartbeat =75; //75x20ms = 1500ms
	if(	gDb_tRamDMC_C0.boWaitingHeartbeat == TRUE)
	{
		if (u16cptDmcHeartbeat>=u16cptMaxDmcHeartbeat)
			u16cptDmcHeartbeat=u16cptMaxDmcHeartbeat;
		else
			u16cptDmcHeartbeat=u16cptDmcHeartbeat+1;
	}
	else
		u16cptDmcHeartbeat=0;
	if ( u16cptDmcHeartbeat == u16cptMaxDmcHeartbeat)
		gDb_tRamDMC_C0.boTimeOutDmcHeartbeat = TRUE;
	else
		gDb_tRamDMC_C0.boTimeOutDmcHeartbeat = FALSE;

	/*u8DmcHeartbeat*/
	if(gDb_tRamDMC_C0.boTimeOutDmcHeartbeat == FALSE)
		gDb_tRamDMC_C0.u8DmcHeartbeat = gCsr_tDMC_Heartbeat_HB.u8NodeState;
	else
		gDb_tRamDMC_C0.u8DmcHeartbeat = 0;

	/*boPowerOnOkDmc*/
	if(gDb_tRamDMC_C0.u8DmcHeartbeat != 0x00)
		gDb_tRamDMC_C0.boPowerOnOkDmc = TRUE;
	else
		gDb_tRamDMC_C0.boPowerOnOkDmc = FALSE;

	/*boOperationnalDmc*/
	if(gDb_tRamDMC_C0.u8DmcHeartbeat == 0x05)
		gDb_tRamDMC_C0.boOperationnalDmc = TRUE;
	else
		gDb_tRamDMC_C0.boOperationnalDmc = FALSE;

	/*boGoToOperationnal*/
	if(gDb_tRamDMC_C0.u8DmcHeartbeat == 0x7F)
		gDb_tRamDMC_C0.boGoToOperationnal = TRUE;
	else
		gDb_tRamDMC_C0.boGoToOperationnal = FALSE;


	/*boNewGoToOperationnal*/
	/*CLOCK*/
	static TUint16 u16cptNewGoToOperationnal =1;
	TUint16 u16cptMaxNewGoToOperationnal =100; //100x20ms = 2000ms
	if(	gDb_tRamDMC_C0.boGoToOperationnal == TRUE
	&& gDb_tRamDMC_C0.boNewGoToOperationnal == FALSE)
	{
		if (u16cptNewGoToOperationnal>=u16cptMaxNewGoToOperationnal)
			u16cptNewGoToOperationnal=u16cptMaxNewGoToOperationnal;
		else
			u16cptNewGoToOperationnal=u16cptNewGoToOperationnal+1;
	}
	else
		u16cptNewGoToOperationnal=1;
	if ( u16cptNewGoToOperationnal == u16cptMaxNewGoToOperationnal)
		gDb_tRamDMC_C0.boNewGoToOperationnal = TRUE;
	else
		gDb_tRamDMC_C0.boNewGoToOperationnal = FALSE;


	/*boDig4InputCommandSTO */
	//si presence defaut batterie il faut faire une coupure de la puissance du variateur avec la commande STO du DMC
	// Ouverture de l'entrée DIG4 du variateur
//	if (gDb_tRamFlashBatteryC0.u8Batt_ErrorCode1 != 0
//	|| gDb_tRamFlashBatteryC0.u8Batt_ErrorValue1 != 0)
//		gDb_tRamDMC_C0.boDig4InputCommandSTO = TRUE;
//	else
//		gDb_tRamDMC_C0.boDig4InputCommandSTO = FALSE;


	/*boAutorizeRazController*/
	if ((gDb_tRamDMC_C0.boDig4InputCommandSTO  == FALSE
	&& gDb_tRamDMC_C0.boDC_InterlockByt6Bit3 == FALSE
	&& gDb_tRamDMC_C0.i16MS_ActualSpeedRpm <=5
	&& gDb_tRamDMC_C0.boOperationnalDmc == TRUE
//	&& gDb_tRamDMC_C0.boCommandRazDmcOnGoing == FALSE
	&& gDb_tRamEvision7C0.bogKeyRazController == TRUE)
	||
	(gDb_tRamDMC_C0.i16MS_ActualSpeedRpm <=5
	&& gDb_tRamEcuInputsC0.eStarterMotorState == GE_DI_ON
	)
	)
		gDb_tRamGreenEffC0.boAutorizeRazController = TRUE;
	else
		gDb_tRamGreenEffC0.boAutorizeRazController = FALSE;

	/*boActiveFaultDmc*/
	if(gDb_tRamDMC_C0.u8MS_FaultCode !=0)
		gDb_tRamDMC_C0.boActiveFaultDmc = TRUE;
	else
		gDb_tRamDMC_C0.boActiveFaultDmc = FALSE;

	/*boActiveFaultRazDmc*/
	//cas des défauts nécessitant un redémarrage du variateur
	if(gDb_tRamDMC_C0.u8MS_FaultCode >15)
		gDb_tRamDMC_C0.boActiveFaultRazDmc = TRUE;
	else
		gDb_tRamDMC_C0.boActiveFaultRazDmc = FALSE;


	/*boPictoAskResartController*/
	if(gDb_tRamDMC_C0.boActiveFaultRazDmc == TRUE
	&& gDb_tRamGeneralC0.boBlinkLow==TRUE)
		gDb_tRamGreenEffC0.boPictoAskResartController = TRUE;
	else
		gDb_tRamGreenEffC0.boPictoAskResartController = FALSE;

// OLD CABLAGE
//	/*boSendCommandNMT*/
//	//Demande de redemarrage du variateur
//	static TUint32 u32CounterDMC_RxSdo = 0;
//	static TBoolean boActiveTimeOutSdo = FALSE;
//	static TBoolean boRisinGoToOperationnal = FALSE;
//	static TBoolean boPreviousRisingGoToOperationnal = FALSE;
//	boRisinGoToOperationnal = vRisingEdge(gDb_tRamDMC_C0.boGoToOperationnal,boPreviousRisingGoToOperationnal,&boPreviousRisingGoToOperationnal);
//	if(gDb_tRamGreenEffC0.boAutorizeRazController == TRUE
//	|| gDb_tRamDMC_C0.boCommandRazDmcOnGoing == TRUE)
//	{
//		switch(gDb_tRamDMC_C0.i16StepRazDmc)
//		{
//		case 0:/*Demande passage en mode peoperationel*/
//			gCsr_tNMT.u8Command = 0x80; //Command Go to Preoperationnal
//			gCsr_tNMT.u8TargetNode = 0x10;//Node ID
//			gDb_tRamDMC_C0.boCommandRazDmcOnGoing = TRUE;
//			gDb_tRamDMC_C0.boSendCommandNMT = TRUE;
//			gDb_tRamDMC_C0.i16StepRazDmc = 1;
//			break;
//
//		case 1:/*Attente passage en preoperationnel*/
//			gDb_tRamDMC_C0.boSendCommandNMT = FALSE;
//			if(gDb_tRamDMC_C0.u8DmcHeartbeat == 0x7F)/*Mode preoperationel*/
//				gDb_tRamDMC_C0.i16StepRazDmc = 2;
//			else if(gDb_tRamDMC_C0.u8DmcHeartbeat == 0x05)/*Mode operationel*/
//				gDb_tRamDMC_C0.i16StepRazDmc = 1; //On attend
//			else
//				gDb_tRamDMC_C0.i16StepRazDmc = 100; //Bootup or stopped
//			break;
//
//		case 2:/*Envoi commande SDO demande raz defaut*/
//			gCsr_tDMC_TxSdo.u8ControlField = 0x22;
//			gCsr_tDMC_TxSdo.u8TargetIndexLSB = 0x40;
//			gCsr_tDMC_TxSdo.u8TargetIndexMSB = 0x38;
//			gCsr_tDMC_TxSdo.u8TargetSubIndex = 0x00;
//			gCsr_tDMC_TxSdo.u8Data0 = 0x00;
//			gCsr_tDMC_TxSdo.u8Data1 = 0x00;
//			gCsr_tDMC_TxSdo.u8Data2 = 0x00;
//			gCsr_tDMC_TxSdo.u8Data3 = 0x00;
//			gDb_tRamDMC_C0.boSendCommandNMT = TRUE;
//			boActiveTimeOutSdo = TRUE; //Activation Time out
//			gDb_tRamDMC_C0.i16StepRazDmc = 3;
//
//			break;
//
//		case 3:/*attente reponse SDO*/
//			gDb_tRamDMC_C0.boSendCommandNMT = FALSE;
//			static TUint32 u32CounterDMC_RxSdo = 0;
//			if (u32CounterDMC_RxSdo != gCRcv_tDMC_RxSdo.tOut.u32RcvCnt
//			&& boBloCRcvGetErrStaBit(&gCRcv_tDMC_RxSdo,DM_CRCV_TIMEOUT) == FALSE) //Pas de time out
//			{//Reponse OK
//				boActiveTimeOutSdo = FALSE;
//				gDb_tRamDMC_C0.i16StepRazDmc = 4;
//			}
//			else if (boBloCRcvGetErrStaBit(&gCRcv_tDMC_RxSdo,DM_CRCV_TIMEOUT) == TRUE) //Pb Time out
//			{//pas de réponse
//				boActiveTimeOutSdo = FALSE;
//				gDb_tRamDMC_C0.i16StepRazDmc = 100; //Bootup or stopped
//			}
//			u32CounterDMC_RxSdo = gCRcv_tDMC_RxSdo.tOut.u32RcvCnt;
//			break;
//
//		case 4:/*Demande passage en mode operationel*/
//			gCsr_tNMT.u8Command = 0x01; //Command Go to operationnal
//			gCsr_tNMT.u8TargetNode = 0x10;//Node ID
//			gDb_tRamDMC_C0.boSendCommandNMT = TRUE;
//			gDb_tRamDMC_C0.i16StepRazDmc = 5;
//			break;
//
//		case 5:/*Attente passage en operationnel*/
//			gDb_tRamDMC_C0.boSendCommandNMT = FALSE;
//			if(gDb_tRamDMC_C0.u8DmcHeartbeat == 0x05)/*Mode operationel*/
//				gDb_tRamDMC_C0.i16StepRazDmc = 100;
//			else if(gDb_tRamDMC_C0.u8DmcHeartbeat == 0x7F)/*Mode preoperationel*/
//				gDb_tRamDMC_C0.i16StepRazDmc = 5; //On attend
//			else
//				gDb_tRamDMC_C0.i16StepRazDmc = 100; //Bootup or stopped
//			break;
//
//
//		case 100:/*Fin raz Dmc*/
//			if(gDb_tRamEvision7C0.bogKeyRazController == FALSE)
//			{
//				gDb_tRamDMC_C0.boCommandRazDmcOnGoing = FALSE;
//				gDb_tRamDMC_C0.i16StepRazDmc = 0;
//			}
//			break;
//		}
//	}
//	else if ((boRisinGoToOperationnal == TRUE || gDb_tRamDMC_C0.boNewGoToOperationnal == TRUE)
//	&& gDb_tRamDMC_C0.boCommandRazDmcOnGoing == FALSE)
//	{
//		gCsr_tNMT.u8Command = 0x01; //Command Go to operationnal
//		gCsr_tNMT.u8TargetNode = 0x10;//Node ID
//		gDb_tRamDMC_C0.boSendCommandNMT = TRUE;
//	}
//	else
//		gDb_tRamDMC_C0.boSendCommandNMT = FALSE;
//
//	vCoreSetErrSetCond(SC_DMC_ACTIVE_TIMEOUT_RX_SDO, boActiveTimeOutSdo);//Activation Time out Sdo

	/*boSendCommandNMT*/
	//Demande de redemarrage du variateur
	static TBoolean boRisinGoToOperationnal = FALSE;
	static TBoolean boPreviousRisingGoToOperationnal = FALSE;
	boRisinGoToOperationnal = vRisingEdge(gDb_tRamDMC_C0.boGoToOperationnal,boPreviousRisingGoToOperationnal,&boPreviousRisingGoToOperationnal);

	if ((boRisinGoToOperationnal == TRUE || gDb_tRamDMC_C0.boNewGoToOperationnal == TRUE)
	&& gDb_tRamDMC_C0.boCommandRazDmcOnGoing == FALSE)
	{
			gCsr_tNMT.u8Command = 0x01; //Command Go to operationnal
			gCsr_tNMT.u8TargetNode = 0x10;//Node ID
			gDb_tRamDMC_C0.boSendCommandNMT = TRUE;
	}
	else
		gDb_tRamDMC_C0.boSendCommandNMT = FALSE;

	vCoreSetErrSetCond(SC_DMC_ACTIVE_TIMEOUT_RX_SDO, FALSE);//Activation Time out Sdo ATTENTION MAINTENANT JAMAIS ACTIVE
	gCSnd_tNMT.tInp.boSndNow = gDb_tRamDMC_C0.boSendCommandNMT; //Reset Automatique pas besoin de l'ecrire

	/*boDC_ForwardByte6Bit0*/
	if(gDb_tRamDMC_C0.boDC_RegenEnableByte6Bit6 == FALSE
	&& gDb_tRamDMC_C0.u16DC_RpmRequest !=0)
		gDb_tRamDMC_C0.boDC_ForwardByte6Bit0 = TRUE;
	else
		gDb_tRamDMC_C0.boDC_ForwardByte6Bit0 = FALSE;

	/*boDC_BackwardByte6Bit1*/
	gDb_tRamDMC_C0.boDC_BackwardByte6Bit1 = FALSE;

	/*boDC_FootSwitchByte6Bit2*/
	if(gDb_tRamDMC_C0.boDC_RegenEnableByte6Bit6 == FALSE
	&& gDb_tRamDMC_C0.u16DC_RpmRequest !=0)
		gDb_tRamDMC_C0.boDC_FootSwitchByte6Bit2= TRUE;
	else
		gDb_tRamDMC_C0.boDC_FootSwitchByte6Bit2 = FALSE;

	/*boRelayCutOffVariatorElectricCmd*/
//	gDb_tRamEcuOutputsC0.boRelayCutOffVariatorElectricCmd = gDb_tRamDMC_C0.boDig4InputCommandSTO;
	gDb_tRamEcuOutputsC0.boRelayCutOffVariatorElectricCmd = gDb_tRamGreenEffC0.boAutorizeRazController;

//******************************************************************************
//******************************************************************************
// Préparation  Trames TxPDO1 et TxPDO2
//******************************************************************************
//******************************************************************************

	/*boNewSendTxPDO_DC_BCL*/
	static TBoolean boNewSendTxPDO_DC_BCL = FALSE;
	static TBoolean boRisingOperationnalDmc = FALSE;
	static TBoolean boPreviousRisingOperationnalDmc = FALSE;
	boRisingOperationnalDmc = vRisingEdge(gDb_tRamDMC_C0.boOperationnalDmc,boPreviousRisingOperationnalDmc,&boPreviousRisingOperationnalDmc);

	/*CLOCK*/
	static TUint16 u16cptNewSendTxPDO =1;
	TUint16 u16cptMaxNewSendTxPDO = 2; //2x20ms = 40ms
	if( gDb_tRamDMC_C0.boCommandRazDmcOnGoing == FALSE
	&& boRisingOperationnalDmc == FALSE
	&& gDb_tRamDMC_C0.boOperationnalDmc == TRUE
	&& boNewSendTxPDO_DC_BCL == FALSE)
	{
		if (u16cptNewSendTxPDO>=u16cptMaxNewSendTxPDO)
			u16cptNewSendTxPDO=u16cptMaxNewSendTxPDO;
		else
			u16cptNewSendTxPDO=u16cptNewSendTxPDO+1;
	}
	else
		u16cptNewSendTxPDO=1;
	if ( u16cptNewSendTxPDO == u16cptMaxNewSendTxPDO)
		boNewSendTxPDO_DC_BCL = TRUE;
	else
		boNewSendTxPDO_DC_BCL = FALSE;


	/*u8DC_RollOverCount  u8BCL_RollOverCount*/
	if(boRisingOperationnalDmc == TRUE
	|| boNewSendTxPDO_DC_BCL == TRUE)
	{
		if (boRisingOperationnalDmc == TRUE) //Premiere transmission doit toujours être avec des zéros
		{
			gDb_tRamDMC_C0.u8DC_RollOverCount = 0;
			gDb_tRamDMC_C0.u8BCL_RollOverCount = 0;
		}
		else //transmissions suivantes le compteur doit évoluer de +1
		{
			gDb_tRamDMC_C0.u8DC_RollOverCount = gDb_tRamDMC_C0.u8DC_RollOverCount + 1;
			gDb_tRamDMC_C0.u8BCL_RollOverCount = gDb_tRamDMC_C0.u8BCL_RollOverCount + 1;
		}
	}


	/*gCsr_tDMC_TxPdo1_DC.u8Byte0 to gCsr_tDMC_TxPdo1_DC.u8Byte7*/
	/*gCsr_tDMC_TxPdo1_BCL.u8Byte0 to gCsr_tDMC_TxPdo1_BCL.u8Byte7*/
	if( boRisingOperationnalDmc == TRUE) //Premiere transmission doit toujours être avec des zéros
	{
		gCsr_tDMC_TxPdo1_DC.u8Byte0 = 0;
		gCsr_tDMC_TxPdo1_DC.u8Byte1 = 0;
		gCsr_tDMC_TxPdo1_DC.u8Byte2 = 0;
		gCsr_tDMC_TxPdo1_DC.u8Byte3 = 0;
		gCsr_tDMC_TxPdo1_DC.u8Byte4 = 0;
		gCsr_tDMC_TxPdo1_DC.u8Byte5 = 0;
		gCsr_tDMC_TxPdo1_DC.u8Byte6 = 0;
		gCsr_tDMC_TxPdo1_DC.u8Byte7 = 0;

		gCsr_tDMC_TxPdo2_BCL.u8Byte0 = 0;
		gCsr_tDMC_TxPdo2_BCL.u8Byte1 = 0;
		gCsr_tDMC_TxPdo2_BCL.u8Byte2 = 0;
		gCsr_tDMC_TxPdo2_BCL.u8Byte3 = 0;
		gCsr_tDMC_TxPdo2_BCL.u8Byte4 = 0;
		gCsr_tDMC_TxPdo2_BCL.u8Byte5 = 0;
		gCsr_tDMC_TxPdo2_BCL.u8Byte6 = 0;
		gCsr_tDMC_TxPdo2_BCL.u8Byte7 = 0;
	}
	else if (boNewSendTxPDO_DC_BCL == TRUE)
	{
		/*TxPDO1_DC*/
		gCsr_tDMC_TxPdo1_DC.u8Byte0 = u8CastU16((gDb_tRamDMC_C0.u16DC_RpmRequest & 0x00FF));
		gCsr_tDMC_TxPdo1_DC.u8Byte1 = u8CastU16((gDb_tRamDMC_C0.u16DC_RpmRequest & 0xFF00)/256);

		gCsr_tDMC_TxPdo1_DC.u8Byte2 = u8CastU16((gDb_tRamDMC_C0.u16DC_AI2_StaticBrakeTorqueLimit & 0x00FF));
		gCsr_tDMC_TxPdo1_DC.u8Byte3 = u8CastU16((gDb_tRamDMC_C0.u16DC_AI2_StaticBrakeTorqueLimit & 0xFF00)/256);

		gCsr_tDMC_TxPdo1_DC.u8Byte4 = u8CastU16((gDb_tRamDMC_C0.u16DC_GeneratorRegenBattCurLimit & 0x00FF));
		gCsr_tDMC_TxPdo1_DC.u8Byte5 = u8CastU16((gDb_tRamDMC_C0.u16DC_GeneratorRegenBattCurLimit & 0xFF00)/256);

		vSet1BitU8( 0, gDb_tRamDMC_C0.boDC_ForwardByte6Bit0, &gCsr_tDMC_TxPdo1_DC.u8Byte6 );
		vSet1BitU8( 1, gDb_tRamDMC_C0.boDC_BackwardByte6Bit1, &gCsr_tDMC_TxPdo1_DC.u8Byte6 );
		vSet1BitU8( 2, gDb_tRamDMC_C0.boDC_FootSwitchByte6Bit2, &gCsr_tDMC_TxPdo1_DC.u8Byte6 );
		vSet1BitU8( 3, gDb_tRamDMC_C0.boDC_InterlockByt6Bit3, &gCsr_tDMC_TxPdo1_DC.u8Byte6 );
		vSet1BitU8( 4, FALSE, &gCsr_tDMC_TxPdo1_DC.u8Byte6 );
		vSet1BitU8( 5, FALSE, &gCsr_tDMC_TxPdo1_DC.u8Byte6 );
		vSet1BitU8( 6, gDb_tRamDMC_C0.boDC_RegenEnableByte6Bit6, &gCsr_tDMC_TxPdo1_DC.u8Byte6 );
		vSet1BitU8( 7, FALSE, &gCsr_tDMC_TxPdo1_DC.u8Byte6 );

		gCsr_tDMC_TxPdo1_DC.u8Byte7 = gDb_tRamDMC_C0.u8DC_RollOverCount;


		/*TxPDO2_BCL*/
		gCsr_tDMC_TxPdo2_BCL.u8Byte0 = u8CastU16((gDb_tRamDMC_C0.u16BCL_HMI_DriveBattCurLimit & 0x00FF));
		gCsr_tDMC_TxPdo2_BCL.u8Byte1 = u8CastU16((gDb_tRamDMC_C0.u16BCL_HMI_DriveBattCurLimit & 0xFF00)/256);

		gCsr_tDMC_TxPdo2_BCL.u8Byte2 = u8CastU16((gDb_tRamDMC_C0.u16BCL_HMI_RegenBattCurLimit & 0x00FF));
		gCsr_tDMC_TxPdo2_BCL.u8Byte3 = u8CastU16((gDb_tRamDMC_C0.u16BCL_HMI_RegenBattCurLimit & 0xFF00)/256);

		gCsr_tDMC_TxPdo2_BCL.u8Byte4 = u8CastU16((gDb_tRamDMC_C0.u16BCL_HMI_BattSOC & 0x00FF));
		gCsr_tDMC_TxPdo2_BCL.u8Byte5 = u8CastU16((gDb_tRamDMC_C0.u16BCL_HMI_BattSOC & 0xFF00)/256);

		gCsr_tDMC_TxPdo2_BCL.u8Byte6 = 0;

		gCsr_tDMC_TxPdo2_BCL.u8Byte7 = gDb_tRamDMC_C0.u8BCL_RollOverCount;
	}

	if(boRisingOperationnalDmc == TRUE
	|| boNewSendTxPDO_DC_BCL == TRUE)
	{
		gCSnd_tDMC_TxPdo1_DC.tInp.boSndNow = TRUE; //Reset Automatique pas besoin de l'ecrire
		gCSnd_tDMC_TxPdo2_BCL.tInp.boSndNow = TRUE; //Reset Automatique pas besoin de l'ecrire
	}

//******************************************************************************
//******************************************************************************
// reception  Trames RxPDO1  RxPDO2 RxPDO3
//******************************************************************************
//******************************************************************************

	/*boActiveTimeOutRecepRX_PDO*/
	static TBoolean boActiveTimeOutRecepRX_PDO = FALSE;
	if( gDb_tRamDMC_C0.boCommandRazDmcOnGoing == FALSE
	&& gDb_tRamDMC_C0.boOperationnalDmc == TRUE
	&& gDb_tRamEcuOutputsC0.boRelayCutOffVariatorElectricCmd == FALSE)
		boActiveTimeOutRecepRX_PDO = TRUE;
	else
		boActiveTimeOutRecepRX_PDO = FALSE;

	vCoreSetErrSetCond(SC_DMC_ACTIVE_TIMEOUT_RX_PDO, boActiveTimeOutRecepRX_PDO == TRUE);//Activation Time out PDO

	if(boActiveTimeOutRecepRX_PDO == FALSE
	|| boBloCRcvGetErrStaBit(&gCRcv_tDMC_RxPdo1_MS,DM_CRCV_TIMEOUT)
	|| boBloCRcvGetErrStaBit(&gCRcv_tDMC_RxPdo2_DS,DM_CRCV_TIMEOUT)
	|| boBloCRcvGetErrStaBit(&gCRcv_tDMC_RxPdo3_CS,DM_CRCV_TIMEOUT)
	)
	{
		gDb_tRamDMC_C0.i16MS_ActualSpeedRpm = 0;
		gDb_tRamDMC_C0.i16MS_BattCur = 0;
		gDb_tRamDMC_C0.u8MS_RollOverCount = 0;
		gDb_tRamDMC_C0.u8MS_FaultCode = 0;
		gDb_tRamDMC_C0.u16MS_FaultSubCode = 0;

		gDb_tRamDMC_C0.i16DS_MotorCur = 0;
		gDb_tRamDMC_C0.u8DS_DriveStatusIndicator = 0;
		gDb_tRamDMC_C0.u8DS_SpeedLimitIndicator = 0;
		gDb_tRamDMC_C0.i16DS_ActualTorque = 0;
		gDb_tRamDMC_C0.u8DS_TorqueLimitIndicator = 0;
		gDb_tRamDMC_C0.u8DS_RollOverCount = 0;

		gDb_tRamDMC_C0.i8CS_ControlerTemp = 0;
		gDb_tRamDMC_C0.i8CS_MotorTemp = 0;
		gDb_tRamDMC_C0.u8CS_MotorLimitIndicator = 0;
		gDb_tRamDMC_C0.u8CS_RollOverCount = 0;
		gDb_tRamDMC_C0.u16CS_BattVoltage = 0;
		gDb_tRamDMC_C0.u8CS_BattDischargeIndicatorValue = 0;
	}
	else
	{
	//RxPDO1
		/*i16MS_ActualSpeedRpm*/
		gDb_tRamDMC_C0.i16MS_ActualSpeedRpm = (TInt16)gCsr_tDMC_RxPdo1_MS.u8Byte1*256 + (TInt16)gCsr_tDMC_RxPdo1_MS.u8Byte0;
		/*i16MS_BattCur*/
		gDb_tRamDMC_C0.i16MS_BattCur = (TInt16)((TInt16)gCsr_tDMC_RxPdo1_MS.u8Byte3*256 + (TInt16)gCsr_tDMC_RxPdo1_MS.u8Byte2)/10;
		/*u8MS_RollOverCount*/
		gDb_tRamDMC_C0.u8MS_RollOverCount = gCsr_tDMC_RxPdo1_MS.u8Byte4;
		/*u8MS_FaultCode*/
		gDb_tRamDMC_C0.u8MS_FaultCode = gCsr_tDMC_RxPdo1_MS.u8Byte5;
		/*u16MS_FaultSubCode*/
		gDb_tRamDMC_C0.u16MS_FaultSubCode = (TUint16)gCsr_tDMC_RxPdo1_MS.u8Byte7*256 + (TUint16)gCsr_tDMC_RxPdo1_MS.u8Byte6;

	//RxPDO2
		/*i16DS_MotorCur*/
		gDb_tRamDMC_C0.i16DS_MotorCur = (TInt16)((TInt16)gCsr_tDMC_RxPdo2_DS.u8Byte1*256 + (TInt16)gCsr_tDMC_RxPdo2_DS.u8Byte0)/10;
		/*u8DS_DriveStatusIndicator*/
		gDb_tRamDMC_C0.u8DS_DriveStatusIndicator = gCsr_tDMC_RxPdo2_DS.u8Byte2;
		/*u8DS_SpeedLimitIndicator*/
		gDb_tRamDMC_C0.u8DS_SpeedLimitIndicator = gCsr_tDMC_RxPdo2_DS.u8Byte3;
		/*i16DS_ActualTorque*/
		gDb_tRamDMC_C0.i16DS_ActualTorque = (TInt16)gCsr_tDMC_RxPdo2_DS.u8Byte5*256 + (TInt16)gCsr_tDMC_RxPdo2_DS.u8Byte4;
		/*u8DS_TorqueLimitIndicator*/
		gDb_tRamDMC_C0.u8DS_TorqueLimitIndicator = gCsr_tDMC_RxPdo2_DS.u8Byte6;
		/*u8DC_RollOverCount*/
		gDb_tRamDMC_C0.u8DS_RollOverCount = gCsr_tDMC_RxPdo2_DS.u8Byte7;

	//RxPDO3
		/*u8CS_ControlerTemp*/
		gDb_tRamDMC_C0.i8CS_ControlerTemp = gCsr_tDMC_RxPdo3_CS.u8Byte0 - 51;
		/*u8CS_MotorTemp*/
		gDb_tRamDMC_C0.i8CS_MotorTemp = gCsr_tDMC_RxPdo3_CS.u8Byte1 - 51;
		/*u8CS_MotorLimitIndicator*/
		gDb_tRamDMC_C0.u8CS_MotorLimitIndicator = gCsr_tDMC_RxPdo3_CS.u8Byte2;
		/*u8CS_RollOverCount*/
		gDb_tRamDMC_C0.u8CS_RollOverCount = gCsr_tDMC_RxPdo3_CS.u8Byte3;
		/*u16CS_BattVoltage*/
		gDb_tRamDMC_C0.u16CS_BattVoltage = ((TUint16)gCsr_tDMC_RxPdo3_CS.u8Byte5*256 + (TUint16)gCsr_tDMC_RxPdo3_CS.u8Byte4)/10;
		/*u8CS_BattDischargeIndicatorValue*/
		gDb_tRamDMC_C0.u8CS_BattDischargeIndicatorValue = gCsr_tDMC_RxPdo3_CS.u8Byte7;
	}

}
