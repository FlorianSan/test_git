//==================================================================================================
//! @file RotationTurret.c
//! @brief Control rotation turret
//! @see Target for ...
//! @section app
//! @subsection IO
//! @author Christian Klein (CK)
//! @created 23.07.2018 HYDAC/CK
//! @history: #- CK 23.07.2018 HYDAC/CK interface created
//! copyrights (c) all rights reserved by HYDAC International
//=================================================================================================

#include "RotationTurretFunc.h"

//-----------------------------------------------------------------------------------------------------
//! @brief Control Rotation Turret
//!
//!
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 03.09.2018 HYDAC/CK
//!
//! @change  08.01.2018 HYDAC/CK
//! @change  05.02.2019 HYDAC/CK  pilot selector rotation turret when a movement is solicited in mode Turret and Nacelle
//! @change  17.04.2019 NEOTEC/FV  Stop frame if end stop turret
//! @change  17.12.2019 HYDAC/CK  change provisional value of msg can gDb_tRamData4C1RcvFromC0.boSignal_6 to gDb_tRamData4C1RcvFromC0.boRailWorkMultiLaneMode

//
//! @care
//! @todo
//
//10.05.2021 NEOTEC/IG 			Nettoyage du code, suppression des lignes en commentaire
//
//-----------------------------------------------------------------------------------------------------
TVoid vRotationTurretControl(TVoid)
{
	static TBoolean boFrameRotationRunning = FALSE;
	static TBoolean boTurretRotationRunning = FALSE;
	static TBoolean boTrackRotationRunning = FALSE;

	/* set boFrameRotationRunning*/
	if ((gDb_tRamRcvRadioCmdC1.boRotFrameClkwiseButton == TRUE || gDb_tRamRcvRadioCmdC1.boRotFrameCtClkwiseButton == TRUE))
		boFrameRotationRunning = TRUE;

	/* reset boFrameRotationRunning*/
	if (gDb_tRamRcvRadioCmdC1.boRotFrameClkwiseButton == FALSE
	&& gDb_tRamRcvRadioCmdC1.boRotFrameCtClkwiseButton == FALSE
	&& gDb_tRamEcuOutputsC1.boSupplyPvgPropEvTorCommand == FALSE
	)
		boFrameRotationRunning = FALSE;


	/* set boTrackRotationRunning*/
	if ((gDb_tRamRcvRadioCmdC1.boUpPendularOrRotTurretCtClock == TRUE || gDb_tRamRcvRadioCmdC1.boDownPendularOrRotTurretClock == TRUE)
	&& gDb_tRamRcvRadioCmdC1.boSelectorRotTurret == FALSE
	&& gDb_tRamRcvRadioCmdC1.boSelectorPendular == FALSE
	&& gDb_tRamRcvRadioCmdC1.boForcingAdvanceTrack == TRUE
	)
		boTrackRotationRunning = TRUE;

	/* reset boTurretRotationRunning*/
	if (gDb_tRamRcvRadioCmdC1.boUpPendularOrRotTurretCtClock == FALSE
	&& gDb_tRamRcvRadioCmdC1.boDownPendularOrRotTurretClock == FALSE
	&& gDb_tRamRcvRadioCmdC1.boForcingAdvanceTrack == FALSE
	&& gDb_tRamEcuOutputsC1.boSupplyPvgPropEvTorCommand == FALSE
	)
		boTrackRotationRunning = FALSE;


	/* set boTurretRotationRunning*/
	if ((gDb_tRamRcvRadioCmdC1.boUpPendularOrRotTurretCtClock == TRUE || gDb_tRamRcvRadioCmdC1.boDownPendularOrRotTurretClock == TRUE)
	&& gDb_tRamRcvRadioCmdC1.boSelectorRotTurret == TRUE
	&& gDb_tRamRcvRadioCmdC1.boForcingAdvanceTrack == FALSE
	)
		boTurretRotationRunning = TRUE;
	/* reset boTurretRotationRunning*/
	if (gDb_tRamRcvRadioCmdC1.boUpPendularOrRotTurretCtClock == FALSE
	&& gDb_tRamRcvRadioCmdC1.boDownPendularOrRotTurretClock == FALSE
	&& gDb_tRamEcuOutputsC1.boSupplyPvgPropEvTorCommand == FALSE
	)
		boTurretRotationRunning = FALSE;

	gDb_tRamGeneralC1.i16ScalingJoysTurret = vCl_3_Pos_Analog_Input((TInt16)gDb_tRam48XsInputsC1.u16RotationTurretAxisJoystick,(TInt16)gDb_tRam48XsInputsC1.u16BatterieVoltage48Xs/4,
												(TInt16)(gDb_tRam48XsInputsC1.u16BatterieVoltage48Xs/2),(TInt16)gDb_tRam48XsInputsC1.u16BatterieVoltage48Xs*3/4,
												-10000,0,10000,gDb_tRam48XsInputsC1.u16BatterieVoltage48Xs*gDb_tNvParametersC1.u8DeadZoneJoystickRotationTurret/100);

	/* check nacelle mode*/
	if(gDb_tRamEcuC1RcvFromC0.eSelectedControlPost == GE_POST_RADIO)
	{
		/* check if rotation frame clock wise button is pushed, Counter Frame button apply clowkise rotation turret because hydraulic assembly*/
		if(gDb_tRamRcvRadioCmdC1.boRotFrameCtClkwiseButton == TRUE && gDb_tRamMvtEndStopC1.boStopRotTurretClockwise == FALSE  /* add authorization rotation turret*/
		&& gDb_tRamData4C1RcvFromC0.boRailWorkMultiLaneMode == FALSE
		&& boTrackRotationRunning == FALSE
		&& boTurretRotationRunning == FALSE
		)
		{
			gDb_tRamEcuOutputsC1.boEvRotTurretClockwiseActivation = TRUE;
			gDb_tRamEcuOutputsC1.boEvSyncRotationCommand = TRUE;
			gDb_tRamEcuOutputsC1.boEvSelectorRotTurretCmd = FALSE;
			gDb_tRamEcuOutputsC1.boEvCrawlerOnlyCommand = FALSE;
		}
		/* check if rotation frame counter clock wise button is pushed,  Frame button apply counter clowkise rotation turret because hydraulic assembly*/
		else if(gDb_tRamRcvRadioCmdC1.boRotFrameClkwiseButton == TRUE && gDb_tRamMvtEndStopC1.boStopRotTurretCounterClockwise == FALSE  /* add authorization rotation turret*/
		&& gDb_tRamData4C1RcvFromC0.boRailWorkMultiLaneMode == FALSE
		&& boTrackRotationRunning == FALSE
		&& boTurretRotationRunning == FALSE
		)
		{
			gDb_tRamEcuOutputsC1.boEvRotTurretCtClockwiseActivation = TRUE;
			gDb_tRamEcuOutputsC1.boEvSyncRotationCommand = TRUE;
			gDb_tRamEcuOutputsC1.boEvSelectorRotTurretCmd = FALSE;
			gDb_tRamEcuOutputsC1.boEvCrawlerOnlyCommand = FALSE;
		}
		/* check if rotation Unclock wise turret is pushed*/
		else if(gDb_tRamRcvRadioCmdC1.boUpPendularOrRotTurretCtClock == TRUE
		&& gDb_tRamRcvRadioCmdC1.boSelectorRotTurret == TRUE
		&& gDb_tRamLimitMoveC1.boAutorizeRotTurretCtClkwise == TRUE
		&& boFrameRotationRunning == FALSE
		&& boTrackRotationRunning == FALSE
		)
		{
			gDb_tRamEcuOutputsC1.boEvRotTurretCtClockwiseActivation = TRUE;
			gDb_tRamEcuOutputsC1.boEvSelectorRotTurretCmd = TRUE;
			gDb_tRamEcuOutputsC1.boEvSyncRotationCommand = FALSE;
			gDb_tRamEcuOutputsC1.boEvCrawlerOnlyCommand = FALSE;
		}
		/* check if rotation clock wise turret is pushed*/
		else if(gDb_tRamRcvRadioCmdC1.boDownPendularOrRotTurretClock == TRUE
		&& gDb_tRamRcvRadioCmdC1.boSelectorRotTurret == TRUE
		&& gDb_tRamLimitMoveC1.boAutorizeRotTurretClkwise == TRUE
		&& boFrameRotationRunning == FALSE
		&& boTrackRotationRunning == FALSE
		)

		{
			gDb_tRamEcuOutputsC1.boEvRotTurretClockwiseActivation = TRUE;
			gDb_tRamEcuOutputsC1.boEvSelectorRotTurretCmd = TRUE;
			gDb_tRamEcuOutputsC1.boEvSyncRotationCommand = FALSE;
			gDb_tRamEcuOutputsC1.boEvCrawlerOnlyCommand = FALSE;
		}
		/*Crawler Only*/
		else if(gDb_tRamRcvRadioCmdC1.boDownPendularOrRotTurretClock == TRUE
		&& gDb_tRamRcvRadioCmdC1.boForcingAdvanceTrack == TRUE
		&& boFrameRotationRunning == FALSE
		&& boTurretRotationRunning == FALSE
		)
		{
			gDb_tRamEcuOutputsC1.boEvRotTurretCtClockwiseActivation = TRUE;
			gDb_tRamEcuOutputsC1.boEvSelectorRotTurretCmd = FALSE;
			gDb_tRamEcuOutputsC1.boEvSyncRotationCommand = FALSE;
			gDb_tRamEcuOutputsC1.boEvCrawlerOnlyCommand = TRUE;
		}
		else if(gDb_tRamRcvRadioCmdC1.boUpPendularOrRotTurretCtClock == TRUE
		&& gDb_tRamRcvRadioCmdC1.boForcingAdvanceTrack == TRUE
		&& boFrameRotationRunning == FALSE
		&& boTurretRotationRunning == FALSE
		)
		{
			gDb_tRamEcuOutputsC1.boEvRotTurretClockwiseActivation = TRUE;
			gDb_tRamEcuOutputsC1.boEvSelectorRotTurretCmd = FALSE;
			gDb_tRamEcuOutputsC1.boEvSyncRotationCommand = FALSE;
			gDb_tRamEcuOutputsC1.boEvCrawlerOnlyCommand = TRUE;
		}

		else
		{
			gDb_tRamEcuOutputsC1.boEvRotTurretClockwiseActivation = FALSE;
			gDb_tRamEcuOutputsC1.boEvRotTurretCtClockwiseActivation = FALSE;
			gDb_tRamEcuOutputsC1.boEvSyncRotationCommand = FALSE;
			gDb_tRamEcuOutputsC1.boEvSelectorRotTurretCmd = FALSE;
			gDb_tRamEcuOutputsC1.boEvCrawlerOnlyCommand = FALSE;
		}
	}

	else if(gDb_tRamEcuC1RcvFromC0.eSelectedControlPost == GE_POST_TURRET)
	{
		/* control output regarding button of eVision4 and authorization movement*/
		v2ButtonsControl2EvTOR(gDb_tRamEvision4C1.bogTurret_Rotate_ClockWise,gDb_tRamEvision4C1.bogTurret_Rotate_Counter_ClockWise,gDb_tRamLimitMoveC1.boAutorizeRotTurretClkwise,gDb_tRamLimitMoveC1.boAutorizeRotTurretCtClkwise,
								&gDb_tRamEcuOutputsC1.boEvRotTurretClockwiseActivation,&gDb_tRamEcuOutputsC1.boEvRotTurretCtClockwiseActivation);

		/* pilot selector turret when a movement is solicited*/
		if(gDb_tRamEcuOutputsC1.boEvRotTurretClockwiseActivation || gDb_tRamEcuOutputsC1.boEvRotTurretCtClockwiseActivation)
		{
			gDb_tRamEcuOutputsC1.boEvSelectorRotTurretCmd = TRUE;
		}
		else
		{
			gDb_tRamEcuOutputsC1.boEvSelectorRotTurretCmd = FALSE;
		}
		/* Sync is pilot only for frame rotation with radio command*/
		gDb_tRamEcuOutputsC1.boEvSyncRotationCommand = FALSE;
	}
	else if(gDb_tRamEcuC1RcvFromC0.eSelectedControlPost == GE_POST_NACELLE)
	{
		/* check is joystick is outside neutral position*/
		if(gDb_tRamGeneralC1.i16ScalingJoysTurret > 0 && gDb_tRamLimitMoveC1.boAutorizeRotTurretClkwise == TRUE && gDb_tRam48XsInputsC1.boDeadManPedal == TRUE)
		{
			/* set selector turret rotation*/
			gDb_tRamEcuOutputsC1.boEvSelectorRotTurretCmd = TRUE;
			gDb_tRamEcuOutputsC1.boEvRotTurretClockwiseActivation = TRUE;
			gDb_tRamEcuOutputsC1.boEvRotTurretCtClockwiseActivation = FALSE;
		}
		else if (gDb_tRamGeneralC1.i16ScalingJoysTurret < 0 && gDb_tRamLimitMoveC1.boAutorizeRotTurretCtClkwise == TRUE && gDb_tRam48XsInputsC1.boDeadManPedal == TRUE)
		{
			/* set selector turret rotation*/
			gDb_tRamEcuOutputsC1.boEvSelectorRotTurretCmd = TRUE;
			gDb_tRamEcuOutputsC1.boEvRotTurretCtClockwiseActivation = TRUE;
			gDb_tRamEcuOutputsC1.boEvRotTurretClockwiseActivation = FALSE;
		}
		else
		{
			/* set selector turret rotation*/
			gDb_tRamEcuOutputsC1.boEvSelectorRotTurretCmd = FALSE;
			gDb_tRamEcuOutputsC1.boEvRotTurretClockwiseActivation = FALSE;
			gDb_tRamEcuOutputsC1.boEvRotTurretCtClockwiseActivation = FALSE;
		}

		/* Sync is pilot only for frame rotation with radio command*/
		gDb_tRamEcuOutputsC1.boEvSyncRotationCommand = FALSE;
	}
	else
	{
		/* no movement*/
		gDb_tRamEcuOutputsC1.boEvRotTurretClockwiseActivation = FALSE;
		gDb_tRamEcuOutputsC1.boEvRotTurretCtClockwiseActivation = FALSE;
		gDb_tRamEcuOutputsC1.boEvSyncRotationCommand = FALSE;
		gDb_tRamEcuOutputsC1.boEvSelectorRotTurretCmd = FALSE;
	}


	/* check if no other movement is solicited*/
	gDb_tRamEcuOutputsC1.boEvRotTurretClockwiseActivation = gDb_tRamEcuOutputsC1.boEvRotTurretClockwiseActivation &&
																(gDb_tRamAutoStopC1.boStopTurretRotation == FALSE) &&
																(gDb_tRamEcuOutputsC1.boEvRotationBasketCtClkWiseCmdBool == FALSE) &&
																(gDb_tRamEcuOutputsC1.boEvRotationBasketClkWiseCmdBool == FALSE) &&
																(gDb_tRamEcuOutputsC1.boEvUpInclinaisonBasketCmdBool == FALSE) &&
																(gDb_tRamEcuOutputsC1.boEvDownInclinaisonBasketCmdBool == FALSE) &&
																(gDb_tRamEcuOutputsC1.boEvUpPendularCommandBool == FALSE) &&
																(gDb_tRamEcuOutputsC1.boEvDownPendularCommandBool == FALSE) &&
																(gDb_tRamEcuOutputsC1.boEvRotTurretCtClockwiseCmdBool == FALSE) &&
																(gDb_tRamEcuOutputsC1.boEvUpAxleOscillantCmd == FALSE) &&
																(gDb_tRamEcuOutputsC1.boEvDownAxleOscillantCmd == FALSE) &&
																(gDb_tRamEcuOutputsC1.boEvUpAxleFixeCmd == FALSE) &&
																(gDb_tRamEcuOutputsC1.boEvDownAxleFixeCmd == FALSE) &&
																(gDb_tRamEcuOutputsC1.boEvUpMastMeasureCmd == FALSE) &&
																(gDb_tRamEcuOutputsC1.boEvDownMastMeasureCmd == FALSE)
																;

	/* check if no other movement is solicited*/
	gDb_tRamEcuOutputsC1.boEvRotTurretCtClockwiseActivation = gDb_tRamEcuOutputsC1.boEvRotTurretCtClockwiseActivation &&
																(gDb_tRamAutoStopC1.boStopTurretRotation == FALSE) &&
																(gDb_tRamEcuOutputsC1.boEvRotationBasketCtClkWiseCmdBool == FALSE) &&
																(gDb_tRamEcuOutputsC1.boEvRotationBasketClkWiseCmdBool == FALSE) &&
																(gDb_tRamEcuOutputsC1.boEvUpInclinaisonBasketCmdBool == FALSE) &&
																(gDb_tRamEcuOutputsC1.boEvDownInclinaisonBasketCmdBool == FALSE) &&
																(gDb_tRamEcuOutputsC1.boEvUpPendularCommandBool == FALSE) &&
																(gDb_tRamEcuOutputsC1.boEvDownPendularCommandBool == FALSE) &&
																(gDb_tRamEcuOutputsC1.boEvRotTurretClockwiseCmdBool == FALSE) &&
																(gDb_tRamEcuOutputsC1.boEvUpAxleOscillantCmd == FALSE) &&
																(gDb_tRamEcuOutputsC1.boEvDownAxleOscillantCmd == FALSE) &&
																(gDb_tRamEcuOutputsC1.boEvUpAxleFixeCmd == FALSE) &&
																(gDb_tRamEcuOutputsC1.boEvDownAxleFixeCmd == FALSE) &&
																(gDb_tRamEcuOutputsC1.boEvUpMastMeasureCmd == FALSE) &&
																(gDb_tRamEcuOutputsC1.boEvDownMastMeasureCmd == FALSE)
																;
}
