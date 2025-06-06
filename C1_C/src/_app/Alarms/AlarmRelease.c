//==================================================================================================
//! @file AlarmRelease.c
//! @brief Management of specific alarms
//! @see Target for ...
//! @section app
//! @subsection IO
//! @author NEOTEC/FV
//! @created 24.09.2019 NEOTEC/FV
//! @history: #- 24.09.2019 NEOTEC/FV interface created
//! copyrights (c) all rights reserved by NEOTEC
//=================================================================================================

#include "AlarmRelease.h"

// GLOBAL VARIABLES DECLARATIONS ==================================================================

//-----------------------------------------------------------------------------------------------------
//! @brief Alarms Release
//!
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 24.09.2019 NEOTEC/FV
//!
//! @change
//!
//! @care
//! @todo
//
//10.05.2021 NEOTEC/IG 			Nettoyage du code, suppression des lignes en commentaire
//
//-----------------------------------------------------------------------------------------------------
TVoid vAlarmsRelease(TVoid)
{
	/*boMovementsStopped*/
	static TBoolean boMovementsStopped  = FALSE;
	if(gDb_tRamEcuOutputsC1.boEvBypassCommand == FALSE
	&& gDb_tRamEcuOutputsC1.boSupplyPvgDeltaArmCommand == FALSE
	&& gDb_tRamEcuOutputsC1.boSupplyPvgArrowArmCommand == FALSE
	&& gDb_tRamEcuOutputsC1.boSupplyPvgTelescopeArmCommand == FALSE
	&& gDb_tRamEcuOutputsC1.boSupplyPvgPropEvTorCommand == FALSE
	&& gDb_tRam48XsInputsC1.boDeadManPedal == FALSE
	&& gDb_tRamEcuC1RcvFromC0.eSelectedControlPost != GE_POST_TURRET /*Cas poste tourelle*/
	&& gDb_tRamEcuC1RcvFromC0.eSelectedControlPost != GE_POST_RADIO /*Cas poste radio*/
	&& gDb_tRamEcuC1RcvFromC0.i32SpeedVehicleKmhx100 == 0
	)
		boMovementsStopped  = TRUE;
	else
		boMovementsStopped  = FALSE;

	/* ============================================================================================= */
	/*									Release condition  Alarm 									 */
    /* ============================================================================================= */

	vCoreSetErrRelCond(RC05_ARU_VEHICLE_STOPPED_C1, (bo_ARU_C1_Actived == TRUE && boMovementsStopped == TRUE));

	/* ============================================================================================= */
	/*									Run block													 */
	/* ============================================================================================= */
	/* run block*/
	eBloErr(&gErr_tSpecificErrorC1);
	eBloErr(&gErr_tSpecificErrorC1_2);
	eBloErr(&gErr_tSpecificErrorC1_3);
	eBloErr(&gErr_tSpecificErrorC1_4);
	eBloErr(&gErr_tSpecificErrorC1_5);
	eBloErr(&gErr_tSpecificErrorC1_6);
	eBloErr(&gErr_tSpecificErrorC1_7);


	/* ============================================================================================= */
	/*									Restricted Mode management									 */
	/* ============================================================================================= */
	/* check , if we are on restricted mode aru active*/
	if (bo_ARU_C1_Actived == TRUE) /*if (boCoreGetErrRestMode(RM_ARU_ACTIVE_C1))*/
	{
		/* Print Restricted mode*/
		vPrint("Restricted Mode ARU active");
		/*Phase2*/
		gDb_tRamGeneralNeotecC1.eStopMotorJ1939 = GE_OFF;
		gDb_tRamEcuOutputsC1.boEvBypassCommand = FALSE;
		gDb_tRamEcuOutputsC1.boSupplyPvgDeltaArmCommand = FALSE;
		gDb_tRamEcuOutputsC1.boSupplyPvgArrowArmCommand = FALSE;
		gDb_tRamEcuOutputsC1.boSupplyPvgTelescopeArmCommand = FALSE;
		gDb_tRamEcuOutputsC1.boSupplyPvgPropEvTorCommand = FALSE;
		gDb_tRamEcuOutputsC1.boOverloadSecurityCommand = FALSE;
		gDb_tRamEcuOutputsC1.boEvSyncRotationCommand = FALSE;
		gDb_tRamEcuOutputsC1.boEvSelectorRotTurretCmd = FALSE;
		gDb_tRamEcuOutputsC1.boEvRotTurretCtClockwiseCmdBool = FALSE;
		gDb_tRamEcuOutputsC1.boEvRotTurretClockwiseCmdBool = FALSE;
		gDb_tRamEcuOutputsC1.boEvRotationBasketCtClkWiseCmdBool = FALSE;
		gDb_tRamEcuOutputsC1.boEvRotationBasketClkWiseCmdBool = FALSE;
		gDb_tRamEcuOutputsC1.boEvUpPendularCommandBool = FALSE;
		gDb_tRamEcuOutputsC1.boEvDownPendularCommandBool = FALSE;
		gDb_tRamEcuOutputsC1.boEvUpInclinaisonBasketCmdBool = FALSE;
		gDb_tRamEcuOutputsC1.boEvDownInclinaisonBasketCmdBool = FALSE;
		gDb_tRamEcuOutputsC1.boNoisemakerCommand = FALSE;
		/*Phase2*/
		gDb_tRamGeneralNeotecC1.u16MotorSpeedCmdJ1939 = 0;
		gDb_tRamEcuOutputsC1.u16EvPropGeneratorCommand = 0;
		gDb_tRamEcuOutputsC1.u16PvgEvTorCommand = 0;
		gDb_tRamEcuOutputsC1.u16PvgDeltaArmCommand = 0;
		gDb_tRamEcuOutputsC1.u16PvgArrowArmCommand = 0;
		gDb_tRamEcuOutputsC1.u16PvgTelescopeArmCommand = 0;
	}

/*test Intergré dans les autorisations pour mettre à jour les pictogrammes sur les afficheurs simon coupure avec flèches vertes*/
	/* check , if we are on restricted mode stop all movement by limit envelop function*/
	if (boCoreGetErrRestMode(RM_STOP_MOVE_LIMIT_ENVLP))
	{
		/* Print Restricted mode*/
		vPrint("Restricted Mode Stop all movement limit envelope");

		/* stop elevation movement*/
		gDb_tRamEcuOutputsC1.boEvBypassCommand = FALSE;
		gDb_tRamEcuOutputsC1.boSupplyPvgDeltaArmCommand = FALSE;
		gDb_tRamEcuOutputsC1.boSupplyPvgArrowArmCommand = FALSE;
		gDb_tRamEcuOutputsC1.boSupplyPvgTelescopeArmCommand = FALSE;
		gDb_tRamEcuOutputsC1.boSupplyPvgPropEvTorCommand = FALSE;
		gDb_tRamEcuOutputsC1.u16PvgDeltaArmCommand = gDb_tRamGeneralC1.u16EcuVoltage / 2;
		gDb_tRamEcuOutputsC1.u16PvgArrowArmCommand = gDb_tRamGeneralC1.u16EcuVoltage /2;
		gDb_tRamEcuOutputsC1.u16PvgTelescopeArmCommand = gDb_tRamGeneralC1.u16EcuVoltage / 2;
		gDb_tRamEcuOutputsC1.u16PvgEvTorCommand = gDb_tRamGeneralC1.u16EcuVoltage / 2 ;

	}

	/* check , if we are on restricted mode com can loss*/
	if (boCoreGetErrRestMode(RM_COM_CAN_C0_C1_LOSS)
	)
	{
		/* set ECU in safe state*/
		eCoreEnterSafeState();

	}
}
