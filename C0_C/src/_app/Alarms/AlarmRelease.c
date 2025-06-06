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
//07.05.2021 NEOTEC/IG 			Nettoyage du code, suppression des lignes en commentaire
//
//-----------------------------------------------------------------------------------------------------
TVoid vAlarmsRelease(TVoid)
{
	/* ============================================================================================= */
	/*									Release condition  Alarm 									 */
	/* ============================================================================================= */
//NEOTEC DEB
	static TBoolean boVehiculeStopped  = FALSE;
	if(gDb_tRamEcuInputsC0.i32OscillantAxleFrequency == 0
	&& gDb_tRamEcuInputsC0.i32FixeAxleFrequency == 0
	&& gDb_tRamSelectControlPost.boAllNacelleCommandsDisabled == TRUE
	&& gDb_tRamEcuOutputsC0.u16ForwardPumpCommand == 0
	&& gDb_tRamEcuOutputsC0.u16BackwardPumpCommand == 0
	&& gDb_tRamGreenEffC0.boTransRailElectricRampOngoing == FALSE //GREEN
	&& gDb_tRam48XsInputsC0.boDeadManPedal == FALSE
	&& gDb_tRam48XsInputsC0.boGachette == FALSE)
		boVehiculeStopped  = TRUE;
	else
		boVehiculeStopped  = FALSE;

	vCoreSetErrRelCond(RC00_VEHICLE_STOPPED,boVehiculeStopped == TRUE);

	vCoreSetErrRelCond(RC01_VEHICLE_STOPPED_ALL_DISABLED_CMD,boVehiculeStopped == TRUE
															&& gDb_tRamSelectControlPost.boAllRadioCommandsDisabled
															&& gDb_tRamSelectControlPost.boAllTurretCommandsDisabled);

	vCoreSetErrRelCond(RC02_ARU_VEHICLE_STOPPED_C0, (bo_ARU_C0_Actived == TRUE || bo_ARU_RADIO_C0_Actived == TRUE)
												  && boVehiculeStopped == TRUE);

//NEOTEC FIN
	vCoreSetErrRelCond(RC04_ALL_RADIO__CMDS_DISABLED,gDb_tRamEcuInputRadioControl.u8LeftManipulator == 0
												&& gDb_tRamEcuInputRadioControl.u8RightManipulator == 0
												&& gDb_tRamEcuInputRadioControl.eLeftManipulatorPosition == GE_NEUTRAL
												&& gDb_tRamEcuInputRadioControl.eRightManipulatorPosition == GE_NEUTRAL
												&& !gDb_tRamEcuInputRadioControl.boRotationFrameCtClkwise && !gDb_tRamEcuInputRadioControl.boRotationFrameClkwise
												&& !gDb_tRamEcuInputRadioControl.boUpAxleArFixe && !gDb_tRamEcuInputRadioControl.boDownAxleArFixe
												&& !gDb_tRamEcuInputRadioControl.boUpAxleAvOscillant && !gDb_tRamEcuInputRadioControl.boDownAxleAvOscillant
												&& !gDb_tRamEcuInputRadioControl.boSelectorPendular && !gDb_tRamEcuInputRadioControl.boSelectorRotTurret
												&& !gDb_tRamEcuInputRadioControl.boUpPendularOrRotCtClkTurret && !gDb_tRamEcuInputRadioControl.boDownPendularOrRotClkTurret
												&& !gDb_tRamEcuInputRadioControl.boForcingAdvanceTrack);

	/* ============================================================================================= */
	/*									Run block													 */
	/* ============================================================================================= */
	// run block
	eBloErr(&gErr_tSpecificErrorC0);
	eBloErr(&gErr_tSpecificErrorC0_2);
	eBloErr(&gErr_tSpecificErrorC0_3);
	eBloErr(&gErr_tSpecificErrorC0_4);
	eBloErr(&gErr_tSpecificErrorC0_5);
	eBloErr(&gErr_tSpecificErrorC0_6);
	eBloErr(&gErr_tSpecificErrorC0_7);
	eBloErr(&gErr_tSpecificErrorC0_8);
	eBloErr(&gErr_tSpecificErrorC0_9);

	/* ============================================================================================= */
	/*									Restricted Mode management									 */
	/* ============================================================================================= */
	// check , if we are on restricted mode aru active
	if (bo_ARU_C0_Actived == TRUE )
	{
		// Print Restricted mode
		vPrint("Restricted Mode ARU active");

		// stop movement
		gDb_tRamEcuOutputsC0.boEvUpMeasuringMastCommand = FALSE;
		gDb_tRamEcuOutputsC0.boEvServiceBrakeTrackCommand = FALSE;
		gDb_tRamEcuOutputsC0.boEvPowerReductionCommand = FALSE;
		gDb_tRamEcuOutputsC0.boSupplyRadioReceiverCommand = FALSE;
		gDb_tRamEcuOutputsC0.boSupllyPvgLeftTrackCommand = FALSE;
		gDb_tRamEcuOutputsC0.boSupllyPvgRightTrackCommand = FALSE;
		gDb_tRamEcuOutputsC0.boEvUnBlockOscillationAxleCmdBool = FALSE;
		gDb_tRamEcuOutputsC0.boEvUpAxleOscillantCommandBool = FALSE;
		gDb_tRamEcuOutputsC0.boEvUpAxleFixeCommandBool = FALSE;
		gDb_tRamEcuOutputsC0.boEvDownAxleOscillantCommandBool = FALSE;
		gDb_tRamEcuOutputsC0.boEvDownAxleFixeCommandBool = FALSE;
		gDb_tRamEcuOutputsC0.u16PvgLeftTrackCommand = 0;
		gDb_tRamEcuOutputsC0.u16PvgRightTrackCommand = 0;

	}

	// check , if we are on restricted mode aru radio
	if (bo_ARU_RADIO_C0_Actived == TRUE)
	{
		// Print Restricted mode
		vPrint("Restricted Mode ARU active");

		// stop movement
		gDb_tRamEcuOutputsC0.boEvUpMeasuringMastCommand = FALSE;
		gDb_tRamEcuOutputsC0.boEvServiceBrakeTrackCommand = FALSE;
		gDb_tRamEcuOutputsC0.boEvPowerReductionCommand = FALSE;
		gDb_tRamEcuOutputsC0.boSupplyRadioReceiverCommand = FALSE;
		gDb_tRamEcuOutputsC0.boSupllyPvgLeftTrackCommand = FALSE;
		gDb_tRamEcuOutputsC0.boSupllyPvgRightTrackCommand = FALSE;
		gDb_tRamEcuOutputsC0.boReturnLowSideEvForwardPumpCmd = FALSE;
		gDb_tRamEcuOutputsC0.boReturnLowSideEvBackwardPumpCmd = FALSE;
		gDb_tRamEcuOutputsC0.boEvUnBlockOscillationAxleCmdBool = FALSE;
		gDb_tRamEcuOutputsC0.boEvUpAxleOscillantCommandBool = FALSE;
		gDb_tRamEcuOutputsC0.boEvUpAxleFixeCommandBool = FALSE;
		gDb_tRamEcuOutputsC0.boEvDownAxleOscillantCommandBool = FALSE;
		gDb_tRamEcuOutputsC0.boEvDownAxleFixeCommandBool = FALSE;
		gDb_tRamEcuOutputsC0.u16ForwardPumpCommand = 0;
		gDb_tRamEcuOutputsC0.u16BackwardPumpCommand = 0;
		gDb_tRamEcuOutputsC0.u16PvgLeftTrackCommand = gDb_tRamGeneralC0.u16EcuVoltage/2;
		gDb_tRamEcuOutputsC0.u16PvgRightTrackCommand = gDb_tRamGeneralC0.u16EcuVoltage/2;

	}


	// check , if we are on restricted mode com can loss
	if (boCoreGetErrRestMode(RM_COM_CAN_C0_C1_LOSS)
		)
	{
		// set ECU in safe state
		eCoreEnterSafeState();

	}
}
