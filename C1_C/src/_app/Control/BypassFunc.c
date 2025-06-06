//==================================================================================================
//! @file BypassFunc.c
//! @brief Control output bypass
//! @see Target for ...
//! @section app
//! @subsection
//! @author Christian Klein (CK)
//! @created 11.10.2018 HYDAC/CK
//! @history: #- CK 11.10.2018 HYDAC/CK interface created
//! copyrights (c) all rights reserved by HYDAC International
//=================================================================================================

#include "BypassFunc.h"

/*==========================================GLOBAL VARIABLES DECLARATIONS ==================================================================*/

	TBoolean boMemFaultBypass;

//-----------------------------------------------------------------------------------------------------
//! @brief Control output bypass
//!
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 11.10.2018 HYDAC/CK
//!
//! @change  04.03 2019 HYDAC/CK	- add condition to set bypass , portillon lader close
//! @change  05.04 2019 NEOTEC/FV	- remove condition to set bypass , portillon lader close
//!
//! @care
//! @todo
//
//10.05.2021 NEOTEC/IG 			Nettoyage du code, suppression des lignes en commentaire
//
//-----------------------------------------------------------------------------------------------------
TVoid vBypassControl(TVoid)
{
	/*modif pour vérifier si le moteur est démarre*/
//	static TBoolean BoEngineRunningStable =FALSE;
//	static TUint16 u16cpt =0;
//	TUint16 u16cptmax = 200; //200x20ms = 4000ms
//	if(gDb_tRamGeneralNeotecC1.u16MotorSpeedJ1939 >= 500)/*entrée non J1939 gDb_tRamEcuInputsC1.i32RegimeMotorAlternatorRpm*/
//	{
//		if (u16cpt>=u16cptmax)
//			u16cpt=u16cptmax;
//		else
//			u16cpt=u16cpt+1;
//	}
//	else if (gDb_tRamGeneralNeotecC1.u16MotorSpeedJ1939 < 500)/*entrée non J1939 gDb_tRamEcuInputsC1.i32RegimeMotorAlternatorRpm*/
//		u16cpt=0;
//
//	if ( u16cpt == u16cptmax)
//		BoEngineRunningStable = TRUE;
//	else
//		BoEngineRunningStable = FALSE;


	/*boMovementsStopped*/
	static TBoolean boMovementsStopped  = FALSE;
	if(gDb_tRamEcuOutputsC1.boSupplyPvgDeltaArmCommand == FALSE
	&& gDb_tRamEcuOutputsC1.boSupplyPvgArrowArmCommand == FALSE
	&& gDb_tRamEcuOutputsC1.boSupplyPvgTelescopeArmCommand == FALSE
	&& gDb_tRamEcuOutputsC1.boSupplyPvgPropEvTorCommand == FALSE
	&& gDb_tRamGeneralC1.boEngineRunningStable == TRUE //UNIQUEMENT SI MOTEUR THERMIQUE PRINCIPAL EST DEMARRE SINON LE MOTEUR THERMIQUE DU SECOURS CALE
//	&& gDb_tRam48XsInputsC1.boGachette == FALSE
//	&& gDb_tRamEcuC1RcvFromC0.u16EvForwardCommand == 0
//	&& gDb_tRamEcuC1RcvFromC0.u16EvBackwardCommand == 0
//	&& gDb_tRamEcuC1RcvFromC0.boTranslationMovementIsSolicited == FALSE
//	&& gDb_tRamEcuC1RcvFromC0.i32SpeedVehicleKmhx100 == 0
	)
		boMovementsStopped = TRUE;
	else
		boMovementsStopped = FALSE;

	/*boBypassTestCommand*/
	/*Permet de piloter le pvg tor dans PvgEvTorFunc.c pour faire le test*/
	if ( boBloErrGetErrStaBit(&gErr_tSpecificErrorC1_2,DM_EV_BYPASS_FAULT) == FALSE
	&& boMovementsStopped == TRUE)
		gDb_tRamGeneralC1.boBypassTestCommand  = TRUE;
	else
		gDb_tRamGeneralC1.boBypassTestCommand  = FALSE;

	/*boBypassSensorFault*/
	TBoolean boBypassSensorFault;
	if(u16BloInCurGetErrStaAll(&gInCur_tBypassPressureSensor) ==0)
		boBypassSensorFault = FALSE;
	else
		boBypassSensorFault = TRUE;
	/*Checking the value of Bypass sensor fault in MST*/
	gDb_tNvMemoryC1.boVarMemory10 = boBypassSensorFault;

	/*boStartTestBypass*/
	static TBoolean boStartTestBypass = FALSE;
	/*Mise à un*/
	if (gDb_tRamEcuInputsC1.i16BypassPressureSensorValue >= gDb_tNvParamAlarmC1.i16BypassPressureThres
	&& boMovementsStopped == TRUE)
		boStartTestBypass = TRUE;
	else
		boStartTestBypass = FALSE;

	/*boTimeDetectTestBypass*/
	static TBoolean boTimeDetectTestBypass =FALSE;
	static TUint16 u16cptTimeTestBypass =0;
	TUint16 u16cptTimeTestBypassMax = gDb_tNvParamAlarmC1.u16cptTimeTestBypassMax; //50x20ms = 1000ms //PARAMETRE A CREER
//	TUint16 u16cptTimeTestBypassMax = gDb_tNvMemoryC1.u16VarMemory5;
	if(boStartTestBypass == TRUE)
	{
		if (u16cptTimeTestBypass>=u16cptTimeTestBypassMax)
			u16cptTimeTestBypass=u16cptTimeTestBypassMax;
		else
			u16cptTimeTestBypass=u16cptTimeTestBypass+1;
	}
	else if (boStartTestBypass == FALSE)
		u16cptTimeTestBypass=0;

	if ( u16cptTimeTestBypass == u16cptTimeTestBypassMax)
		boTimeDetectTestBypass = TRUE;
	else
		boTimeDetectTestBypass = FALSE;

	/*boMemFaultBypass*/
	//Mise à un
	if (boTimeDetectTestBypass == TRUE
	|| boBypassSensorFault == TRUE)
		boMemFaultBypass = TRUE;
	//Mise à zéro
	if (boTimeDetectTestBypass == FALSE
	&& boBypassSensorFault == FALSE)
		boMemFaultBypass = FALSE;



//NEOTEC IG Bypass Fault
//	/*Stop Bypass if Bypass sensor fault*/
//	if(u16BloInCurGetErrStaAll(&gInCur_tBypassPressureSensor) ==0)
//		boBypassSensorFault = FALSE;
//	else
//		boBypassSensorFault = TRUE;
//	/*Checking the value of Bypass sensor fault in MST*/
//	gDb_tNvMemoryC1.boVarMemory10 = boBypassSensorFault;

	/* check if a movement is solicited then pilot bypass*/
	if((gDb_tRamGeneralC1.boBypassArmTelescope == TRUE
	|| gDb_tRamGeneralC1.boBypassArmDelta == TRUE
	|| gDb_tRamGeneralC1.boBypassArmArrow == TRUE
	|| gDb_tRamEcuOutputsC1.boSupplyPvgPropEvTorCommand == TRUE)
	&& boBypassSensorFault == FALSE)
		gDb_tRamEcuOutputsC1.boEvBypassCommand = TRUE;
	else
		gDb_tRamEcuOutputsC1.boEvBypassCommand = FALSE;
//NEOTEC IG Bypass Fault
}
