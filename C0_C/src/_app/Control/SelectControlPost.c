
//==================================================================================================
//! @file SelectControlPost.c
//! @brief Select which post is used to control the vehicle
//! @see Target for ...
//! @section app
//! @subsection Control
//! @author Fabrice Cordary (FC)
//! @created 25.03.2019 HYDAC/FC
//! @history: #-
//! copyrights (c) all rights reserved by HYDAC International
//=================================================================================================

#include "SelectControlPost.h"

/* YYY A faire
 * - rechercher les YYY
 * - supprimer énumération MoveNacelleMode (remplacée par ControlPost)
 * - supprimer variable globale gDb_tRamGeneralC0.eMovementNacelleMode (remplacée par gDb_tRamSelectControlPost.eSelectedControlPost)
 * - supprimer ancienne fonction vDefinedMoveNacelleMode dans ControlFunc.c (remplacée par fonction vSelectControlPost dans SelectControlPost.c)
 * - déplacer écriture gDb_tRamEvision7C0.boAllowMovementNacelle vers write CAN
 * - sur l'écran nacelle il faut pouvoir désactiver le login (voir chapitre 11 de la spec)
 * - manque reset global prise de poste en cas de défaut sur les capteurs et com CAN (voir liste FMEA)
 * - manque reset prise de poste radio en cas de perte de com can avec la radio
 */

//-----------------------------------------------------------------------------------------------------
//! @brief Select which post is used to control the vehicle
//!
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 25.03.2019 HYDAC/FC
//!
//! @change 03.04.2019 HYDAC/FC - only check the down axle sensors (not the up axle sensors) to determine the vehicle on or off rail configuration
//! 							- use the off rail configuration as default if we cannot determine the vehicle configuration
//!								- exit nacelle post if portillon is opened OR ladder is not folded
//! @change 04.04.2019 NEOTEC/FV - Remove GE_OFFRAIL_TRANSPORT_POSITION of set radio post and create local variable boAuthorizedRadioElementsPosition
//! @change 05.04.2019 NEOTEC/FV - Add ladder closed in boAuthorizedRadioElementsPosition
//! @change 16.04.2019 NEOTEC/FV - Change power supply radio and selectpost
//! @change 23.04.2019 HYDAC/CK - add condition all consigne translation is disabled to set a post
//! @change 11.05.2019 HYDAC/CK - add condition reset nacelle post if DM_OSCILLANT_CIRCUIT_FAULT
//! @change 16.12.2019 HYDAC/CK	- change gDb_tNvParamAlarmC0.u16HystTempTrans to gDb_tNvParamSelectControlPost.u16SlopeCrawlerMaxTres
//! @change 17.12.2019 HYDAC/CK - change provisional value of msg can gDb_tRamData4C1RcvFromC0.boSignal_1 to gDb_tRamData4C1RcvFromC0.boStopMoveLimitEnvelop
//! @change 18.12.2019 HYDAC/CK - change provisional value of msg can gDb_tRamData4C1RcvFromC0.boSignal_3 to gDb_tRamData4C1RcvFromC0.boLynxOnAllMvts
//! @care
//! @todo
//
//07.05.2021 NEOTEC/IG 			Nettoyage du code, suppression des lignes en commentaire
//
//-----------------------------------------------------------------------------------------------------
TVoid vSelectControlPost()
{
	TBoolean boLoginStatus = gDb_tRamEvision7C0.boLoginStatus;
	TBoolean boVadidationNacellePost = gDb_tRamEvision7C0.bogBPBasketValidate;
	TBoolean RisingVadidationNacellePost = FALSE;
	static TBoolean PreviousVadidationNacellePost = FALSE;
	static TBoolean boAuthorizedRadioElementsPosition = FALSE;

	//-----------------------------------------------------------------------------------------------------
	// Check all consigns of translation rail are disabled
	//-----------------------------------------------------------------------------------------------------
	if(gDb_tRamEcuOutputsC0.boSupllyPvgLeftTrackCommand == FALSE
		&& gDb_tRamEcuOutputsC0.boSupllyPvgRightTrackCommand == FALSE
		&& gDb_tRamEcuOutputsC0.u16ForwardPumpCommand == 0
		&& gDb_tRamEcuOutputsC0.u16BackwardPumpCommand == 0
		)
		gDb_tRamSelectControlPost.boAllConsigneAdvancementDisabled = TRUE;
	else
		gDb_tRamSelectControlPost.boAllConsigneAdvancementDisabled = FALSE;

	//-----------------------------------------------------------------------------------------------------
	// Check the slope angle
	//-----------------------------------------------------------------------------------------------------
	/* Check if the slope is low (threshold with hysteresis)*/
	if (gDb_tRamCanSensorC0.u16SelectedSlopeAngle <= gDb_tNvParamSelectControlPost.i16SlopeLowThresAbs)
		gDb_tRamSelectControlPost.boSlopeIsLow = TRUE;
	else if (gDb_tRamCanSensorC0.u16SelectedSlopeAngle >= gDb_tNvParamSelectControlPost.i16SlopeLowThresAbs + gDb_tNvParamSelectControlPost.i16SlopeLowHystRel)
		gDb_tRamSelectControlPost.boSlopeIsLow = FALSE;

	/* Check if the slope is high (threshold with hysteresis)*/
	if (gDb_tRamCanSensorC0.u16SelectedSlopeAngle >= gDb_tNvParamSelectControlPost.i16SlopeHighThresAbs)
		gDb_tRamSelectControlPost.boSlopeIsHigh = TRUE;
	else if (gDb_tRamCanSensorC0.u16SelectedSlopeAngle <= gDb_tNvParamSelectControlPost.i16SlopeHighThresAbs + gDb_tNvParamSelectControlPost.i16SlopeHighHystRel)
		gDb_tRamSelectControlPost.boSlopeIsHigh = FALSE;

	//-----------------------------------------------------------------------------------------------------
	// Nacelle post selection
	//-----------------------------------------------------------------------------------------------------
	/* Check if all commands of the nacelle post are disabled*/
	gDb_tRamSelectControlPost.boAllNacelleCommandsDisabled = gDb_tRam48XsInputsC0.boDeltaArmJystckCenteredTelescope && gDb_tRam48XsInputsC0.boArrowJoystickCenteredTurret
			&& gDb_tRam48XsInputsC0.boCenteredAdvanceJoystick && !gDb_tRam48XsInputsC0.boUpInclinaisonBasketButton && !gDb_tRam48XsInputsC0.boDownInclinaisonBasketButton
			&& !gDb_tRam48XsInputsC0.boUpPendularButton && !gDb_tRam48XsInputsC0.boDownPendularButton && !gDb_tRam48XsInputsC0.boRotationCtClockwiseBasketButton
			&& !gDb_tRam48XsInputsC0.boRotationClockwiseBasketButton;

	/*------- Nacelle post set -------*/

	/* Rising VadidationNacellePost*/
	RisingVadidationNacellePost = FALSE;
	if (boVadidationNacellePost == TRUE && PreviousVadidationNacellePost == FALSE)
		RisingVadidationNacellePost = TRUE;
	/* Memorize the previous value*/
	PreviousVadidationNacellePost = boVadidationNacellePost;


	/* If the down axle sensors are both in the on rail position*/
	if (gDb_tRamEcuInputsC0.eDownAxleFixeState == GE_DI_ON && gDb_tRamEcuInputsC0.eDownAxleOscillantState == GE_DI_ON)
	{
		if (gDb_tRamSelectControlPost.eSelectedControlPost == GE_POST_NO_POST && gDb_tRamEcuC0RcvFromC1.eC1NacellePostSelector == GE_DI_ON && boLoginStatus == TRUE && RisingVadidationNacellePost == TRUE
		/* AND dead man pedal disabled AND gachette disabled AND all nacelle commands disabled*/
		&& !gDb_tRam48XsInputsC0.boDeadManPedal && !gDb_tRam48XsInputsC0.boGachette && gDb_tRamSelectControlPost.boAllNacelleCommandsDisabled
		&& gDb_tRamSelectControlPost.boAllConsigneAdvancementDisabled)
		{
			/*Select nacelle post*/
			gDb_tRamSelectControlPost.eSelectedControlPost = GE_POST_NACELLE;
		}
	}
	/* Else (we consider that the vehicle is in the off rail configuration as default)*/
	else
	{
		if (gDb_tRamSelectControlPost.eSelectedControlPost == GE_POST_NO_POST && gDb_tRamEcuC0RcvFromC1.eC1NacellePostSelector == GE_DI_ON && boLoginStatus == TRUE && RisingVadidationNacellePost == TRUE
		/* AND dead man pedal disabled AND gachette disabled AND all nacelle commands disabled*/
		&& !gDb_tRam48XsInputsC0.boDeadManPedal && !gDb_tRam48XsInputsC0.boGachette && gDb_tRamSelectControlPost.boAllNacelleCommandsDisabled
		/* AND slope is low*/
		&& gDb_tRamSelectControlPost.boAllConsigneAdvancementDisabled)
		{
			/* Select nacelle post*/
			gDb_tRamSelectControlPost.eSelectedControlPost = GE_POST_NACELLE;
		}
	}

	/*------- Nacelle post reset -------*/
	/* If nacelle post selected*/
	if (gDb_tRamSelectControlPost.eSelectedControlPost == GE_POST_NACELLE)
	{
		/* If the down axle sensors are both in the on rail position*/
		if (gDb_tRamEcuInputsC0.eDownAxleFixeState == GE_DI_ON && gDb_tRamEcuInputsC0.eDownAxleOscillantState == GE_DI_ON)
		{
			/* If selector not in nacelle position*/
			if (gDb_tRamEcuC0RcvFromC1.eC1NacellePostSelector != GE_DI_ON
			|| gDb_tRamData4C0RcvFromC1.boInterdictOfNacelTurretPost == TRUE//NEOTEC IG SNCF
			|| gDb_tRamEvision4C0.bogKeyRpmSelect == TRUE //GREEN
			|| gDb_tRamEvision4C0.bogKeyRpmOff == TRUE) //GREEN
			{
				/* Reset the post selection*/
				gDb_tRamSelectControlPost.eSelectedControlPost = GE_POST_NO_POST;
			}
		}
		/* Else (we consider that the vehicle is in the off rail configuration as default)*/
		else {

			if (gDb_tRamEcuC0RcvFromC1.eC1NacellePostSelector != GE_DI_ON 
			|| gDb_tRamData4C0RcvFromC1.boInterdictOfNacelTurretPost == TRUE//NEOTEC IG SNCF
			|| gDb_tRamEvision4C0.bogKeyRpmSelect == TRUE //GREEN
			|| gDb_tRamEvision4C0.bogKeyRpmOff == TRUE) //GREEN
			{
				/* Reset the post selection*/
				gDb_tRamSelectControlPost.eSelectedControlPost = GE_POST_NO_POST;
			}
		}
	}

	//-----------------------------------------------------------------------------------------------------
	// Turret post selection
	//-----------------------------------------------------------------------------------------------------
	/* Check if all commands of the turret post are disabled*/
	gDb_tRamSelectControlPost.boAllTurretCommandsDisabled = !gDb_tRamEvision4C0.bogArrow_Move_Down && !gDb_tRamEvision4C0.bogArrow_Move_Up && !gDb_tRamEvision4C0.bogBasket_Inclinaison_Move_Down
			 && !gDb_tRamEvision4C0.bogBasket_Inclinaison_Move_Up && !gDb_tRamEvision4C0.bogBasket_Rotate_ClockWise && !gDb_tRamEvision4C0.bogBasket_Rotate_Counter_ClockWise
			 && !gDb_tRamEvision4C0.bogDelta_Arm_Move_Down && !gDb_tRamEvision4C0.bogDelta_Arm_Move_Up && !gDb_tRamEvision4C0.bogPendular_Move_Down && !gDb_tRamEvision4C0.bogPendular_Move_Up
			 && !gDb_tRamEvision4C0.bogTelescope_Move_In && !gDb_tRamEvision4C0.bogTelescope_Move_Out && !gDb_tRamEvision4C0.bogTurret_Rotate_ClockWise && !gDb_tRamEvision4C0.bogTurret_Rotate_Counter_ClockWise;

	//------- Turret post set -------
	/* If the down axle sensors are both in the on rail position*/
	if (gDb_tRamEcuInputsC0.eDownAxleFixeState == GE_DI_ON && gDb_tRamEcuInputsC0.eDownAxleOscillantState == GE_DI_ON)
	{
		if (gDb_tRamSelectControlPost.eSelectedControlPost == GE_POST_NO_POST
		&& gDb_tRamEcuC0RcvFromC1.eC1TurretPostSelector == GE_DI_ON
		&& gDb_tRamSelectControlPost.boAllTurretCommandsDisabled
		&& gDb_tRamSelectControlPost.boAllConsigneAdvancementDisabled)
		{
			/* Select turret post*/
			gDb_tRamSelectControlPost.eSelectedControlPost = GE_POST_TURRET;
		}
	}
	/* Else (we consider that the vehicle is in the off rail configuration as default)*/
	else {
		if (gDb_tRamSelectControlPost.eSelectedControlPost == GE_POST_NO_POST
		&& gDb_tRamEcuC0RcvFromC1.eC1TurretPostSelector == GE_DI_ON
		&& gDb_tRamSelectControlPost.boAllTurretCommandsDisabled
		&& gDb_tRamSelectControlPost.boAllConsigneAdvancementDisabled)
		{
			/* Select turret post*/
			gDb_tRamSelectControlPost.eSelectedControlPost = GE_POST_TURRET;
		}
	}

	/*------- Turret post reset -------*/
	/* If turret post selected*/
	if (gDb_tRamSelectControlPost.eSelectedControlPost == GE_POST_TURRET)
	{
		/* If the down axle sensors are both in the on rail position*/
		if (gDb_tRamEcuInputsC0.eDownAxleFixeState == GE_DI_ON && gDb_tRamEcuInputsC0.eDownAxleOscillantState == GE_DI_ON)
		{
			/* If turret selector is released*/
			if (gDb_tRamEcuC0RcvFromC1.eC1TurretPostSelector != GE_DI_ON || gDb_tRamData4C0RcvFromC1.boInterdictOfNacelTurretPost == TRUE)//NEOTEC IG SNCF
			{
				/* Reset the post selection*/
				gDb_tRamSelectControlPost.eSelectedControlPost = GE_POST_NO_POST;
			}
		}
		/* Else (we consider that the vehicle is in the off rail configuration as default)*/
		else {
		/* If turret selector is released OR slope is high*/

			if (gDb_tRamEcuC0RcvFromC1.eC1TurretPostSelector != GE_DI_ON || gDb_tRamData4C0RcvFromC1.boInterdictOfNacelTurretPost == TRUE)//NEOTEC IG SNCF

			{
				/* Reset the post selection*/
				gDb_tRamSelectControlPost.eSelectedControlPost = GE_POST_NO_POST;
			}
		}
	}

	static TBoolean boStopAggravantMovements = FALSE;
	if(gDb_tRamEcuC0RcvFromC1.eC1RadioPostSelector != GE_DI_ON
	&&
	((gDb_tRamSelectControlPost.boSlopeIsLow == FALSE && (gDb_tRamEcuInputsC0.eDownAxleFixeState != GE_DI_ON || gDb_tRamEcuInputsC0.eDownAxleOscillantState != GE_DI_ON))
	|| boBloErrGetErrStaBit(&gErr_tSpecificErrorC0, DM_OSCILLANT_CIRCUIT_FAULT) == TRUE
	|| boBloErrGetErrStaBit(&gErr_tSpecificErrorC0_3, DM_INC_POS_DELTA_ARROW_FOLDED) == TRUE)
	)
		boStopAggravantMovements = TRUE;
	else
		boStopAggravantMovements = FALSE;

	gCsr_tData4C0SendToC1.boStopAggravantMovements = boStopAggravantMovements;


	//-----------------------------------------------------------------------------------------------------
	// Radio post selection
	//-----------------------------------------------------------------------------------------------------
	/* Check if all commands of the radio post are disabled*/
	gDb_tRamSelectControlPost.boAllRadioCommandsDisabled = (gDb_tRamEcuInputRadioControl.u8LeftManipulator == 0
							&& gDb_tRamEcuInputRadioControl.u8RightManipulator == 0
							&& gDb_tRamEcuInputRadioControl.eLeftManipulatorPosition == GE_NEUTRAL
							&& gDb_tRamEcuInputRadioControl.eRightManipulatorPosition == GE_NEUTRAL
							&& !gDb_tRamEcuInputRadioControl.boRotationFrameCtClkwise && !gDb_tRamEcuInputRadioControl.boRotationFrameClkwise
							&& !gDb_tRamEcuInputRadioControl.boUpAxleArFixe && !gDb_tRamEcuInputRadioControl.boDownAxleArFixe
							&& !gDb_tRamEcuInputRadioControl.boUpAxleAvOscillant && !gDb_tRamEcuInputRadioControl.boDownAxleAvOscillant
							&& !gDb_tRamEcuInputRadioControl.boSelectorPendular && !gDb_tRamEcuInputRadioControl.boSelectorRotTurret
							&& !gDb_tRamEcuInputRadioControl.boUpPendularOrRotCtClkTurret && !gDb_tRamEcuInputRadioControl.boDownPendularOrRotClkTurret
							&& !gDb_tRamEcuInputRadioControl.boForcingAdvanceTrack);

	/* Detect rising edge of the radio connect command*/
	static TBoolean boPreviousRadioCommandConnect = TRUE;
	TBoolean boRisingEdgeRadioCommandConnect = (gDb_tRamEcuInputRadioControl.boRadioCommandConnect == TRUE) && (boPreviousRadioCommandConnect == FALSE);
	boPreviousRadioCommandConnect = gDb_tRamEcuInputRadioControl.boRadioCommandConnect;

	/*------- Radio post set -------*/
	/* If no post selected AND selector in radio position*/
	if (gDb_tRamSelectControlPost.eSelectedControlPost == GE_POST_NO_POST && gDb_tRamEcuC0RcvFromC1.eC1RadioPostSelector == GE_DI_ON
	&& boRisingEdgeRadioCommandConnect && gDb_tRamSelectControlPost.boAllRadioCommandsDisabled && gDb_tRamSelectControlPost.boAllConsigneAdvancementDisabled)
	{
		/* Select radio post*/
		gDb_tRamSelectControlPost.eSelectedControlPost = GE_POST_RADIO;
	}

	/*------- Radio post reset -------*/
	/*boAuthorizedRadioElementsPosition*/
	if (gDb_tRamTransportPosC0.boDeltaOffRailTransportZone == TRUE
	&& gDb_tRamTransportPosC0.boArrowOffRailTransportZone == TRUE
	&& gDb_tRamEcuC0RcvFromC1.boEntryTelescopeFdcSensor == TRUE
	&& (gDb_tRam48XsInputsC0.boFoldedLadderSensor == TRUE || gDb_tNvOptionsC0.boLadder == FALSE))
		boAuthorizedRadioElementsPosition = TRUE;
	else
		boAuthorizedRadioElementsPosition = FALSE;


	/* If radio post selected*/
	if (gDb_tRamSelectControlPost.eSelectedControlPost == GE_POST_RADIO)
	{
		/* If selector not in radio position*/
		/* YYY manque éventuellement la perte de com CAN avec la radiocommande (à clarifier avec Neotec) (sera traiter avec les FMEA)*/
		if (gDb_tRamEcuC0RcvFromC1.eC1RadioPostSelector != GE_DI_ON
		|| boAuthorizedRadioElementsPosition == FALSE)
		{
			/* Reset the post selection*/
			gDb_tRamSelectControlPost.eSelectedControlPost = GE_POST_NO_POST;
		}
	}

	//-----------------------------------------------------------------------------------------------------
	// Global control post shut off
	//-----------------------------------------------------------------------------------------------------
	/* If an emergency stop restricted mode is enabled OR inconsistent abutment position*/
	if( bo_ARU_C0_Actived == TRUE || bo_ARU_RADIO_C0_Actived == TRUE
	|| gDb_tRamRailWorkSafetyC0.boWrongAbutments || gDb_tRamEcuC0RcvFromC1.eActiveHelpState != GE_DI_OFF
	|| gDb_tRamData4C0RcvFromC1.boPostInterdictionMastSNCF == TRUE)
	{
		/* No movements are allowed, reset the control post selection*/
		gDb_tRamSelectControlPost.eSelectedControlPost = GE_POST_NO_POST;
	}

	//-----------------------------------------------------------------------------------------------------
	// Auxiliary outputs
	//-----------------------------------------------------------------------------------------------------

	static TBoolean boNoRadioSuply = FALSE;
	if( bo_ARU_C0_Actived == TRUE || bo_ARU_RADIO_C0_Actived == TRUE
		|| gDb_tRamRailWorkSafetyC0.boWrongAbutments || gDb_tRamEcuC0RcvFromC1.eActiveHelpState != GE_DI_OFF
		|| gDb_tRamData4C0RcvFromC1.boPostInterdictionMastSNCF == TRUE)//MAT SNCF
		boNoRadioSuply = TRUE;
	else
		boNoRadioSuply = FALSE;

	gDb_tRamEcuOutputsC0.boSupplyRadioReceiverCommand = (gDb_tRamEcuC0RcvFromC1.eC1RadioPostSelector == GE_DI_ON) && (boAuthorizedRadioElementsPosition == TRUE && boNoRadioSuply == FALSE);

	static TBoolean boSlopeHightTrack = FALSE;
	if (gDb_tRamEcuC0RcvFromC1.eC1RadioPostSelector == GE_DI_ON
	&& gDb_tRamCanSensorC0.u16SelectedSlopeAngle >= gDb_tNvParamSelectControlPost.u16SlopeCrawlerMaxTres)
		boSlopeHightTrack = TRUE;
	else
		boSlopeHightTrack = FALSE;

//NEOTEC IG STRUKTON DEBUT
	if(
	((gDb_tRamEcuC0RcvFromC1.eC1RadioPostSelector == GE_DI_ON && gDb_tRamTransportPosC0.eTransportPosition != GE_OFFRAIL_TRANSPORT_POSITION)
	||(gDb_tNvOptionsC0.boAddPerformanceFunc == TRUE && gDb_tRamTransportPosC0.eTransportPosition == GE_OFFRAIL_TRANSPORT_POSITION
		&& (gDb_tRamEcuC0RcvFromC1.boFoldedMastMeasure == FALSE || boBloErrGetErrStaBit(&gErr_tSpecificErrorC0_3, DM_MAT_MEASURE_FAULT))))//MERGE A voir pour les parenthèses.
	|| boSlopeHightTrack == TRUE
	// HYDAC 17.12.2019 change provisional value of msg can gDb_tRamData4C1RcvFromC0.boSignal_1 to gDb_tRamData4C1RcvFromC0.boStopMoveLimitEnvelop
	|| gDb_tRamData4C0RcvFromC1.boStopMoveLimitEnvelop == TRUE // DM_STOP_MOVE_LIMIT_ENVLP_FROM C1
	// HYDAC
	// HYDAC 18.12.2019 change provisional value of msg can gDb_tRamData4C1RcvFromC0.boSignal_3 to gDb_tRamData4C1RcvFromC0.boLynxOnAllMvts
	|| gDb_tRamData4C0RcvFromC1.boLynxOnAllMvts == TRUE
	)
		gDb_tRamEcuOutputsC0.boBuzzerLynxMovingMachineCommand = TRUE;
	else
		gDb_tRamEcuOutputsC0.boBuzzerLynxMovingMachineCommand = FALSE;
//NEOTEC IG STRUKTON FIN


	gDb_tRamEvision7C0.boAllowMovementNacelle = (gDb_tRamSelectControlPost.eSelectedControlPost == GE_POST_NACELLE);

}
