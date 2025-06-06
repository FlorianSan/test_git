//==================================================================================================
//! @file SafetyCheckEmergencyStop.c
//! @brief Management of control emergency
//! @author NEOTEC/FV
//! @created 20.01.2025 NEOTEC/FV
//! copyrights (c) all rights reserved by NEOTEC
//=================================================================================================

#include "SafetyCheckEmergencyStop.h"

// GLOBAL VARIABLES DECLARATIONS ==================================================================

//-----------------------------------------------------------------------------------------------------
//! @brief safety Control Cut Off Emergency stop
//!
//!
//! @globvar
//!
//! @staticvar
//!
//! @created  06.06.2019 NEOTEC/FV
//! @change

//! @care
//! @todo
//
//-----------------------------------------------------------------------------------------------------
TVoid vSafetyCheckEmergencyStop(TVoid)
{
	/*boModeThermicOn*/
	static TBoolean boModeThermicOn = FALSE;
//	static TBoolean boModeElectricOn = FALSE;

	if(gDb_tRamDMC_C0.i16MS_ActualSpeedRpm <0
	&& gDb_tRamDMC_C0.i16MS_ActualSpeedRpm <-10) /*Arbitraire*/
	{
		boModeThermicOn = TRUE;
//		boModeElectricOn = FALSE;
	}
	else if(gDb_tRamDMC_C0.i16MS_ActualSpeedRpm >0
	&& gDb_tRamDMC_C0.i16MS_ActualSpeedRpm >10) /*Arbitraire*/
	{
		boModeThermicOn = FALSE;
//		boModeElectricOn = TRUE;
	}
	else
	{
		boModeThermicOn = FALSE;
//		boModeElectricOn = FALSE;
	}

/************************************************************/
/*					EVs POMPE MODE THERMIQUE				*/
/************************************************************/
	/*boFaultPumpTrans*/
	if ((gDb_tRamEcuC0RcvFromC1.i16Transmission1Pressure >= gDb_tNvParamAlarmC0.i16AU_THER_PRESSION_DEF_TRANS
	|| gDb_tRamEcuC0RcvFromC1.i16Transmission2Pressure >= gDb_tNvParamAlarmC0.i16AU_THER_PRESSION_DEF_TRANS)
	&& gDb_tRamEcuOutputsC0.u16ForwardPumpCommand <= 0 // Cas chenille ou rail
	&& gDb_tRamEcuOutputsC0.u16BackwardPumpCommand <= 0 // Cas rail
	&& boModeThermicOn == TRUE
	)
		gDb_tRamEcuAlarmC0.boFaultPumpTrans = TRUE;
	else
		gDb_tRamEcuAlarmC0.boFaultPumpTrans = FALSE;

	/*boTimeDetectPumpTrans*/
	static TUint16 u16cptTimeDetectPumpTrans =0;
	if(gDb_tRamEcuAlarmC0.boFaultPumpTrans == TRUE)
	{
		if (u16cptTimeDetectPumpTrans>=gDb_tNvParamAlarmC0.u16cptTimeDetectPumpTransMax)
			u16cptTimeDetectPumpTrans=gDb_tNvParamAlarmC0.u16cptTimeDetectPumpTransMax;
		else
			u16cptTimeDetectPumpTrans=u16cptTimeDetectPumpTrans+1;
	}
	else if (gDb_tRamEcuAlarmC0.boFaultPumpTrans == FALSE)
		u16cptTimeDetectPumpTrans=0;

	if ( u16cptTimeDetectPumpTrans == gDb_tNvParamAlarmC0.u16cptTimeDetectPumpTransMax)
		gDb_tRamEcuAlarmC0.boTimeDetectPumpTrans = TRUE;
	else
		gDb_tRamEcuAlarmC0.boTimeDetectPumpTrans = FALSE;

	/*boMemFaultThermicPumpTrans*/
	/*Mise à un*/
	if (gDb_tRamEcuAlarmC0.boTimeDetectPumpTrans == TRUE
	|| gDb_tRamData4C0RcvFromC1.boTransmissionPressureFault == TRUE)
		gDb_tRamEcuAlarmC0.boMemFaultThermicPumpTrans = TRUE;
	/*Mise à zéro*/
	if (gDb_tRamEcuAlarmC0.boTimeDetectPumpTrans == FALSE
	&& gDb_tRamData4C0RcvFromC1.boTransmissionPressureFault == FALSE)
		gDb_tRamEcuAlarmC0.boMemFaultThermicPumpTrans = FALSE;


/************************************************************/
/*					EVs POMPE MODE ELECTRIQUE				*/
/************************************************************/
//DEPLACER DANS AppCode.c
//	//modif provisoire pour vérifier si le moteur est démarrer pour que les pressions soient stables
//	static TBoolean BoEngineRunningStable =FALSE;
//	static TUint16 u16cpt =0;
//	TUint16 u16cptmax =125; //125x20ms = 2500ms
//	if(gDb_tRamEcuC0RcvFromC1.i32RegimeMotorAlternatorRpm >= 500)
//	{
//		if (u16cpt>=u16cptmax)
//			u16cpt=u16cptmax;
//		else
//			u16cpt=u16cpt+1;
//	}
//	else if (gDb_tRamEcuC0RcvFromC1.i32RegimeMotorAlternatorRpm < 500)
//		u16cpt=0;
//
//	if ( u16cpt == u16cptmax)
//		BoEngineRunningStable = TRUE;
//	else
//		BoEngineRunningStable = FALSE;


	/*boFaultPvgTransElectric*/
	if (gDb_tRamEcuInputsC0.i16ElectricPumpPressureValue  >= gDb_tNvParamAlarmC0.i16AU_ELEC_PRESSION_DEF_DMC
	&& gDb_tRamGreenEffC0.boTransRailElectricRampOngoing == FALSE
	&& gDb_tRamEcuC0RcvFromC1.boEvBypassCommand == FALSE
	&& boModeThermicOn == FALSE
	&& gDb_tRamGeneralC0.boEngineRunningStable == FALSE //pour être sur que lemode electrique ne renvoi pas de pression
	)
		gDb_tRamEcuAlarmC0.boFaultPvgTransElectric = TRUE;
	else
		gDb_tRamEcuAlarmC0.boFaultPvgTransElectric = FALSE;

	/*boTimeDetectPvgtrans*/
	static TUint16 u16cptTimeDetectPvgTrans =0;
	if(gDb_tRamEcuAlarmC0.boFaultPvgTransElectric == TRUE)
	{
		if (u16cptTimeDetectPvgTrans>=gDb_tNvParamAlarmC0.u16cptTimeDetectPvgTransMax)
			u16cptTimeDetectPvgTrans=gDb_tNvParamAlarmC0.u16cptTimeDetectPvgTransMax;
		else
			u16cptTimeDetectPvgTrans=u16cptTimeDetectPvgTrans+1;
	}
	else if (gDb_tRamEcuAlarmC0.boFaultPvgTransElectric == FALSE)
		u16cptTimeDetectPvgTrans=0;

	if ( u16cptTimeDetectPvgTrans == gDb_tNvParamAlarmC0.u16cptTimeDetectPvgTransMax)
		gDb_tRamEcuAlarmC0.boTimeDetectPvgTrans = TRUE;
	else
		gDb_tRamEcuAlarmC0.boTimeDetectPvgTrans = FALSE;

	/*boMemFaultDMCTransElectric*/
	/*Mise à un*/
	if (gDb_tRamEcuAlarmC0.boTimeDetectPvgTrans == TRUE)
		gDb_tRamEcuAlarmC0.boMemFaultDMCTransElectric = TRUE;
	/*Mise à zéro*/
	if (gDb_tRamEcuAlarmC0.boTimeDetectPvgTrans == FALSE
	&& gDb_tRamEcuInputsC0.i16ElectricPumpPressureValue < 32000) //CAS SANS DEFAUT
		gDb_tRamEcuAlarmC0.boMemFaultDMCTransElectric = FALSE;


/************************************************************/
/*					DEFAUT PUMP THER OR DMC ELEC			*/
/************************************************************/
	/*boFaultThermicPumpOrElecticControlerDmc*/
	if (gDb_tRamEcuAlarmC0.boMemFaultThermicPumpTrans == TRUE
	|| gDb_tRamEcuAlarmC0.boMemFaultDMCTransElectric == TRUE)
		gDb_tRamEcuAlarmC0.boFaultThermicPumpOrElecticDmc =TRUE;
	else
		gDb_tRamEcuAlarmC0.boFaultThermicPumpOrElecticDmc =FALSE;


}

