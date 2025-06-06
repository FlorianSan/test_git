
//==================================================================================================
//! @file RailWorkSafety.c
//! @brief Manage the safety of the vehicle during working on the rail road
//! @see Target for ...
//! @section app
//! @subsection IO
//! @author Fabrice Cordary (FC)
//! @created 04.02.2019 HYDAC/FC
//! @history: #- CK 24.01.2019 HYDAC/CK interface created
//! copyrights (c) all rights reserved by HYDAC International
//=================================================================================================

#include "RailWorkSafety.h"
#include <App_CanSigRec.h>
#include <SpeedMaxTranslationRail.h>


// GLOBAL VARIABLES DECLARATIONS ==================================================================

	TBoolean boModeWorkAuthorized;


//-----------------------------------------------------------------------------------------------------
//! @brief Manage the safety of the vehicle during working on the rail road
//!
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 05.02.2019 HYDAC/FC
//! @change  11.04.2019 NEOTEC/FV add boModeWorkAuthorized and stop with hook down
//! @change  03.05.2019 NEOTEC/FV check power supply 48X in gDb_tRamRailWorkSafetyC0.boWrongAbutments
//!
//! @care
//! @todo
//
//07.05.2021 NEOTEC/IG 			Nettoyage du code, suppression des lignes en commentaire
//
//-----------------------------------------------------------------------------------------------------
TVoid vRailWorkSafety(TVoid)
{
	if(gDb_tRam48XsInputsC0.boAuthorizationWorkKey == TRUE	&& gDb_tNvOptionsC0.boAutorisationWorkKeyPresent == TRUE)
		boModeWorkAuthorized = TRUE;
	else
		boModeWorkAuthorized = FALSE;

	//-----------------------------------------------------------------------------------------------------
	// Determine if the mewp kinematic is ok or not in access sitemode
	//-----------------------------------------------------------------------------------------------------
	static TBoolean boWrongAccesssitemodeonRail = FALSE;

	if(boModeWorkAuthorized == FALSE
	&& boAccesSiteSpeedCondition == FALSE)
		boWrongAccesssitemodeonRail = TRUE;
	else
		boWrongAccesssitemodeonRail = FALSE;


	//-----------------------------------------------------------------------------------------------------
	// Determine the selected rail work mode
	//-----------------------------------------------------------------------------------------------------
	/* If one key input in ON state AND the two others in OFF state then select the corresponding mode*/
	if (gDb_tRamEcuInputsC0.eWorkKeyBilateralState == GE_DI_ON && gDb_tRamEcuInputsC0.eWorkKeyCentredState == GE_DI_OFF && gDb_tRamEcuInputsC0.eWorkKeyTrackSideState == GE_DI_OFF)
		gDb_tRamRailWorkSafetyC0.eRailWorkMode = GE_BILATERAL_MODE;
	else if (gDb_tRamEcuInputsC0.eWorkKeyBilateralState == GE_DI_OFF && gDb_tRamEcuInputsC0.eWorkKeyCentredState == GE_DI_ON && gDb_tRamEcuInputsC0.eWorkKeyTrackSideState == GE_DI_OFF)
		gDb_tRamRailWorkSafetyC0.eRailWorkMode = GE_MULTILANE_MODE;
	else if (gDb_tRamEcuInputsC0.eWorkKeyBilateralState == GE_DI_OFF && gDb_tRamEcuInputsC0.eWorkKeyCentredState == GE_DI_OFF && gDb_tRamEcuInputsC0.eWorkKeyTrackSideState == GE_DI_ON)
		gDb_tRamRailWorkSafetyC0.eRailWorkMode = GE_ALO_MODE;
	/* If another key configuration is detected then force multilane mode (most restrictive mode)*/
	else
		gDb_tRamRailWorkSafetyC0.eRailWorkMode = GE_MULTILANE_MODE;

	//-----------------------------------------------------------------------------------------------------
	// Determine the selected rail work mode, regarding abutment sensors
	//-----------------------------------------------------------------------------------------------------
	/* Select the corresponding mode*/
	if (gDb_tRamEcuInputsC0.eAbutmentTurretCentredSideState == GE_DI_OFF && gDb_tRamEcuInputsC0.eAbutmentTurretTrackSideState == GE_DI_OFF)
		gDb_tRamRailWorkSafetyC0.eAbutmentWorkMode = GE_BILATERAL_MODE;
	else if (gDb_tRamEcuInputsC0.eAbutmentTurretCentredSideState == GE_DI_ON && gDb_tRamEcuInputsC0.eAbutmentTurretTrackSideState == GE_DI_OFF)
		gDb_tRamRailWorkSafetyC0.eAbutmentWorkMode = GE_MULTILANE_MODE;
	else if (gDb_tRamEcuInputsC0.eAbutmentTurretCentredSideState == GE_DI_OFF && gDb_tRamEcuInputsC0.eAbutmentTurretTrackSideState == GE_DI_ON)
		gDb_tRamRailWorkSafetyC0.eAbutmentWorkMode = GE_ALO_MODE;
	/* If another key configuration is detected then force multilane mode (most restrictive mode)*/
	else
		gDb_tRamRailWorkSafetyC0.eAbutmentWorkMode = GE_NO_RAIL_WORK_MODE;

	//-----------------------------------------------------------------------------------------------------
	// Consistency check of the abutments
	//-----------------------------------------------------------------------------------------------------
	/*------- Turret abutment -------*/
	/* In bilateral mode no abutment should be engaged*/
	gDb_tRamRailWorkSafetyC0.boWrongTurretAbutBilateralMode = (gDb_tRamRailWorkSafetyC0.eRailWorkMode == GE_BILATERAL_MODE)
																&& ((gDb_tRamEcuInputsC0.eAbutmentTurretTrackSideState != GE_DI_OFF)
																|| (gDb_tRamEcuInputsC0.eAbutmentTurretCentredSideState != GE_DI_OFF)
																|| (boModeWorkAuthorized == FALSE));

			gDb_tRamRailWorkSafetyC0.boWrongTurretAbutMultilaneMode = ((gDb_tRamRailWorkSafetyC0.eRailWorkMode == GE_MULTILANE_MODE || boModeWorkAuthorized == FALSE ))

			&& ((gDb_tRamEcuInputsC0.eAbutmentTurretTrackSideState != GE_DI_OFF) || (gDb_tRamEcuInputsC0.eAbutmentTurretCentredSideState != GE_DI_ON));
	/* In ALO mode only the track side abutment should be engaged*/
	gDb_tRamRailWorkSafetyC0.boWrongTurretAbutALOMode = (gDb_tRamRailWorkSafetyC0.eRailWorkMode == GE_ALO_MODE)
																&& ((gDb_tRamEcuInputsC0.eAbutmentTurretTrackSideState != GE_DI_ON)
																|| (gDb_tRamEcuInputsC0.eAbutmentTurretCentredSideState != GE_DI_OFF)
																|| (boModeWorkAuthorized == FALSE));


	/*------- Basket abutment -------*/
	/* The basket abutment are only used for France*/
	if (gDb_tNvOptionsC0.boBasketTurretLimitation == TRUE){//AVANT  gDb_tRamRailWorkSafetyC0.boTestFranceConfig MODIF FR
		/* In bilateral mode no abutment should be engaged*/
		gDb_tRamRailWorkSafetyC0.boWrongBasketAbutBilateralMode = (gDb_tRamRailWorkSafetyC0.eRailWorkMode == GE_BILATERAL_MODE)
				&& ((gDb_tRam48XsInputsC0.boAbutementNacelleTrackSide == TRUE) || (gDb_tRam48XsInputsC0.boAbutementNacelleCenteredSide == TRUE));
		/* In multilane mode only the centered side abutment should be engaged*/
		gDb_tRamRailWorkSafetyC0.boWrongBasketAbutMultilaneMode = (gDb_tRamRailWorkSafetyC0.eRailWorkMode == GE_MULTILANE_MODE)
				&& ((gDb_tRam48XsInputsC0.boAbutementNacelleTrackSide == TRUE) || (gDb_tRam48XsInputsC0.boAbutementNacelleCenteredSide == FALSE));
		/* In ALO mode only the track side abutment should be engaged*/
		gDb_tRamRailWorkSafetyC0.boWrongBasketAbutALOMode = (gDb_tRamRailWorkSafetyC0.eRailWorkMode == GE_ALO_MODE)
				&& ((gDb_tRam48XsInputsC0.boAbutementNacelleTrackSide == FALSE) || (gDb_tRam48XsInputsC0.boAbutementNacelleCenteredSide == TRUE));
	}
	else{
		gDb_tRamRailWorkSafetyC0.boWrongBasketAbutBilateralMode = FALSE;
		gDb_tRamRailWorkSafetyC0.boWrongBasketAbutMultilaneMode = FALSE;
		gDb_tRamRailWorkSafetyC0.boWrongBasketAbutALOMode = FALSE;
	}

	if (gDb_tRamGeneralC0.boRunningStable48XS == TRUE)
	{
		gDb_tRamRailWorkSafetyC0.boWrongAbutments = gDb_tRamRailWorkSafetyC0.boWrongTurretAbutBilateralMode || gDb_tRamRailWorkSafetyC0.boWrongTurretAbutMultilaneMode || gDb_tRamRailWorkSafetyC0.boWrongTurretAbutALOMode
			|| gDb_tRamRailWorkSafetyC0.boWrongBasketAbutBilateralMode || gDb_tRamRailWorkSafetyC0.boWrongBasketAbutMultilaneMode || gDb_tRamRailWorkSafetyC0.boWrongBasketAbutALOMode;
		if (gDb_tRamRailWorkSafetyC0.boWrongAbutments == TRUE)
			gDb_tRamGeneralC0.u16AruRadioAlarmCounter=gDb_tRamGeneralC0.u16AruRadioAlarmCounter+1;
	}
	else
		gDb_tRamRailWorkSafetyC0.boWrongAbutments = FALSE;


	//-----------------------------------------------------------------------------------------------------
	// Consistency check of the turret and basket positions
	//-----------------------------------------------------------------------------------------------------
	/* In multilane mode the turret should be centered (check the position sensor and the encoder)*/

	if 	(gDb_tRamRailWorkSafetyC0.eRailWorkMode == GE_MULTILANE_MODE && gDb_tRamEcuInputsC0.eCenteredTurretState != GE_DI_ON)
		gDb_tRamRailWorkSafetyC0.boWrongTurretPosMultilaneMode = TRUE;

	else
		gDb_tRamRailWorkSafetyC0.boWrongTurretPosMultilaneMode = FALSE;

	/* In multilane mode the basket should be centered*/
	gDb_tRamRailWorkSafetyC0.boWrongBasketPosMultilaneMode = (gDb_tRamRailWorkSafetyC0.eRailWorkMode == GE_MULTILANE_MODE)
			&& ((gDb_tRam48XsInputsC0.boNacelleBasketLeftSideSensor2 == TRUE) || (gDb_tRam48XsInputsC0.boNacelleBasketRightSideSensor2 == TRUE));

	/* In ALO mode the turret should be inside a defined zone*/
	gDb_tRamRailWorkSafetyC0.boWrongTurretPosALOMode = (gDb_tRamRailWorkSafetyC0.eRailWorkMode == GE_ALO_MODE) &&
			((gDb_tRamCanSensorC0.i16EncodeurTurret1Angle < gDb_tNvParamRailWorkSafetyC0.i16MinTurretAngleConsistALO)
			|| (gDb_tRamCanSensorC0.i16EncodeurTurret1Angle > gDb_tNvParamRailWorkSafetyC0.i16MaxTurretAngleConsistALO));

	/* Set position error flag if at least one position inconsistency detected*/
	gDb_tRamRailWorkSafetyC0.boWrongPosition = gDb_tRamRailWorkSafetyC0.boWrongTurretPosMultilaneMode || gDb_tRamRailWorkSafetyC0.boWrongBasketPosMultilaneMode || gDb_tRamRailWorkSafetyC0.boWrongTurretPosALOMode;

	//-----------------------------------------------------------------------------------------------------
	// Movements limitations
	//-----------------------------------------------------------------------------------------------------
	/* if there is a consistency issue, stop movements*/
	if (gDb_tRamRailWorkSafetyC0.boWrongAbutments || gDb_tRamRailWorkSafetyC0.boWrongPosition)
	{
		gDb_tRamRailWorkSafetyC0.boReduceSpeedRotTurretClockwise = FALSE;
		gDb_tRamRailWorkSafetyC0.boReduceSpeedRotTurretCounterClock = FALSE;
		gDb_tRamRailWorkSafetyC0.boReduceSpeedArrowArmDown = FALSE;
		gDb_tRamRailWorkSafetyC0.boStopRotTurretClockwise = TRUE;
		gDb_tRamRailWorkSafetyC0.boStopRotTurretCounterClockwise = TRUE;
		gDb_tRamRailWorkSafetyC0.boStopRotBasketClockwise = TRUE;
		gDb_tRamRailWorkSafetyC0.boStopRotBasketCounterClockwise = TRUE;
		gDb_tRamRailWorkSafetyC0.boStopArrowArmDown = FALSE;
		gDb_tRamRailWorkSafetyC0.boStopTelescopeOut = FALSE;
	}
	/* If bilateral mode selected then all movements are allowed*/
	else if (gDb_tRamRailWorkSafetyC0.eRailWorkMode == GE_BILATERAL_MODE){
		gDb_tRamRailWorkSafetyC0.boReduceSpeedRotTurretClockwise = FALSE;
		gDb_tRamRailWorkSafetyC0.boReduceSpeedRotTurretCounterClock = FALSE;
		gDb_tRamRailWorkSafetyC0.boReduceSpeedArrowArmDown = FALSE;
		gDb_tRamRailWorkSafetyC0.boStopRotTurretClockwise = FALSE;
		gDb_tRamRailWorkSafetyC0.boStopRotTurretCounterClockwise = FALSE;
		gDb_tRamRailWorkSafetyC0.boStopRotBasketClockwise = FALSE;
		gDb_tRamRailWorkSafetyC0.boStopRotBasketCounterClockwise = FALSE;
		gDb_tRamRailWorkSafetyC0.boStopArrowArmDown = FALSE;
		gDb_tRamRailWorkSafetyC0.boStopTelescopeOut = FALSE;
	}
	/* If ALO mode selected then movement limitation is managed by the ALO function*/
	else if (gDb_tRamRailWorkSafetyC0.eRailWorkMode == GE_ALO_MODE){
		vALOModeLimitation();
	}
	/* Else (if multilane or other value) then the rotation of the turret and basket are not allowed*/
	else {
		gDb_tRamRailWorkSafetyC0.boReduceSpeedRotTurretClockwise = FALSE;
		gDb_tRamRailWorkSafetyC0.boReduceSpeedRotTurretCounterClock = FALSE;
		gDb_tRamRailWorkSafetyC0.boReduceSpeedArrowArmDown = FALSE;
		gDb_tRamRailWorkSafetyC0.boStopRotTurretClockwise = TRUE;
		gDb_tRamRailWorkSafetyC0.boStopRotTurretCounterClockwise = TRUE;
		gDb_tRamRailWorkSafetyC0.boStopRotBasketClockwise = TRUE;
		gDb_tRamRailWorkSafetyC0.boStopRotBasketCounterClockwise = TRUE;
		gDb_tRamRailWorkSafetyC0.boStopArrowArmDown = FALSE;
		gDb_tRamRailWorkSafetyC0.boStopTelescopeOut = FALSE;
	}


	static TBoolean boHookDownStopRotTurretClockwise = FALSE;
	static TBoolean boHookDownStopRotTurretCounterClockwise = FALSE;

	if(gDb_tRamCanSensorC0.i16EncodeurTurret1Angle<(900-gDb_tNvParamTransportPosC0.i16TurretAngleThres)
	&& gDb_tRamEcuC0RcvFromC1.eC1RadioPostSelector == GE_DI_ON
	&& gDb_tRamEcuInputsC0.eRailHookSensorState == GE_DI_ON //hook down
	)
		boHookDownStopRotTurretClockwise = TRUE;
	else
		boHookDownStopRotTurretClockwise = FALSE;

	if(gDb_tRamCanSensorC0.i16EncodeurTurret1Angle>(900+gDb_tNvParamTransportPosC0.i16TurretAngleThres)
	&& gDb_tRamEcuC0RcvFromC1.eC1RadioPostSelector == GE_DI_ON
	&& gDb_tRamEcuInputsC0.eRailHookSensorState == GE_DI_ON //hook down
	)
		boHookDownStopRotTurretCounterClockwise = TRUE;
	else
		boHookDownStopRotTurretCounterClockwise = FALSE;

	if(boHookDownStopRotTurretClockwise==TRUE)
		gDb_tRamRailWorkSafetyC0.boStopRotTurretClockwise = TRUE;
	if(boHookDownStopRotTurretCounterClockwise==TRUE)
		gDb_tRamRailWorkSafetyC0.boStopRotTurretCounterClockwise = TRUE;

	if (boModeWorkAuthorized == FALSE)
		gDb_tRamRailWorkSafetyC0.boStopTelescopeOut = TRUE;


    gCsr_tData2SendToC1.boWrongAbutments = (gDb_tRamRailWorkSafetyC0.boWrongAbutments || gDb_tRamRailWorkSafetyC0.boWrongPosition || boWrongAccesssitemodeonRail == TRUE);
}

//-----------------------------------------------------------------------------------------------------
//! @brief Manage the movements limitations in ALO mode
//!
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 05.02.2019 HYDAC/FC
//!
//! @change
//!
//! @care
//! @todo
//-----------------------------------------------------------------------------------------------------
TVoid vALOModeLimitation(TVoid)
{

	//-----------------------------------------------------------------------------------------------------
	// Determine the position of the turret and arrow arm
	//-----------------------------------------------------------------------------------------------------
	/* Check if the turret is in the rear zone (threshold with hysteresis)*/
	if (gDb_tRamCanSensorC0.i16EncodeurTurret1Angle <= gDb_tNvParamRailWorkSafetyC0.i16ALOTurretRearZoneThres)
		gDb_tRamRailWorkSafetyC0.boTurretInRearZone = TRUE;
	else if (gDb_tRamCanSensorC0.i16EncodeurTurret1Angle >= gDb_tNvParamRailWorkSafetyC0.i16ALOTurretRearZoneThres + gDb_tNvParamRailWorkSafetyC0.i16ALOTurretRearZoneHyst)
		gDb_tRamRailWorkSafetyC0.boTurretInRearZone = FALSE;

	/* Check if the turret is in the front zone (threshold with hysteresis)*/
	if (gDb_tRamCanSensorC0.i16EncodeurTurret1Angle >= gDb_tNvParamRailWorkSafetyC0.i16ALOTurretFrontZoneThres)
		gDb_tRamRailWorkSafetyC0.boTurretInFrontZone = TRUE;
	else if (gDb_tRamCanSensorC0.i16EncodeurTurret1Angle <= gDb_tNvParamRailWorkSafetyC0.i16ALOTurretFrontZoneThres + gDb_tNvParamRailWorkSafetyC0.i16ALOTurretFrontZoneHyst)
		gDb_tRamRailWorkSafetyC0.boTurretInFrontZone = FALSE;

	/* Check if the arrow arm is in the lower zone (threshold with hysteresis)*/
	if (gDb_tRamEcuC0RcvFromC1.i16ArrowArmAngularSensor <= gDb_tNvParamRailWorkSafetyC0.i16ALOArrowLowerZoneThres)
		gDb_tRamRailWorkSafetyC0.boArrowArmInLowerZone = TRUE;
	else if (gDb_tRamEcuC0RcvFromC1.i16ArrowArmAngularSensor >= gDb_tNvParamRailWorkSafetyC0.i16ALOArrowLowerZoneThres + gDb_tNvParamRailWorkSafetyC0.i16ALOArrowLowerZoneHyst)
		gDb_tRamRailWorkSafetyC0.boArrowArmInLowerZone = FALSE;

	//-----------------------------------------------------------------------------------------------------
	// Limitation of the turret clockwise movement
	//-----------------------------------------------------------------------------------------------------
	/* If basket turned to the right OR (arrow arm in lower zone AND telescope not in)*/

	if (gDb_tRam48XsInputsC0.boNacelleBasketLeftSideSensor2){

		/* If turret reaches the rear slow down zone then reduce the speed of the movement*/
		if (gDb_tRamCanSensorC0.i16EncodeurTurret1Angle <= gDb_tNvParamRailWorkSafetyC0.i16ALOTurretRearZoneThres + gDb_tNvParamRailWorkSafetyC0.i16ALOTurretRearZoneSlowThres)
			gDb_tRamRailWorkSafetyC0.boReduceSpeedRotTurretClockwise = TRUE;
		else
			gDb_tRamRailWorkSafetyC0.boReduceSpeedRotTurretClockwise = FALSE;

		/* If turret reaches the rear zone stop threshold then set the stop variable*/
		if (gDb_tRamCanSensorC0.i16EncodeurTurret1Angle <= gDb_tNvParamRailWorkSafetyC0.i16ALOTurretRearZoneStopThres + gDb_tNvParamRailWorkSafetyC0.i16ALOTurretRearZoneThres)
			gDb_tRamRailWorkSafetyC0.boStopRotTurretClockwise = TRUE;
		/* If turret reaches the hysteresis point then reset the stop variable*/
		else if (gDb_tRamCanSensorC0.i16EncodeurTurret1Angle >= gDb_tNvParamRailWorkSafetyC0.i16ALOTurretRearZoneStopThres + gDb_tNvParamRailWorkSafetyC0.i16ALOTurretRearZoneStopHyst + gDb_tNvParamRailWorkSafetyC0.i16ALOTurretRearZoneThres)
			gDb_tRamRailWorkSafetyC0.boStopRotTurretClockwise = FALSE;

	}
	/*Else limit rotation to the rear end stop*/
	else {

		/* If turret reaches the slow down threshold of the rear end stop then reduce the speed*/
		if (gDb_tRamCanSensorC0.i16EncodeurTurret1Angle <= gDb_tNvParamRailWorkSafetyC0.i16ALOTurretRearEndStopThres + gDb_tNvParamRailWorkSafetyC0.i16ALOTurretRearEndStopSlowThres)
			gDb_tRamRailWorkSafetyC0.boReduceSpeedRotTurretClockwise = TRUE;
		else
			gDb_tRamRailWorkSafetyC0.boReduceSpeedRotTurretClockwise = FALSE;

		/* If turret reaches the rear end stop threshold then set the stop variable*/
		if (gDb_tRamCanSensorC0.i16EncodeurTurret1Angle <= gDb_tNvParamRailWorkSafetyC0.i16ALOTurretRearEndStopThres)
			gDb_tRamRailWorkSafetyC0.boStopRotTurretClockwise = TRUE;
		/* If turret reaches the hysteresis point then reset the stop variable*/
		else if (gDb_tRamCanSensorC0.i16EncodeurTurret1Angle >= gDb_tNvParamRailWorkSafetyC0.i16ALOTurretRearEndStopThres + gDb_tNvParamRailWorkSafetyC0.i16ALOTurretRearEndStopHyst)
			gDb_tRamRailWorkSafetyC0.boStopRotTurretClockwise = FALSE;

	}

	//-----------------------------------------------------------------------------------------------------
	// Limitation of the turret counter clockwise movement
	//-----------------------------------------------------------------------------------------------------

	if (gDb_tRam48XsInputsC0.boNacelleBasketRightSideSensor2){

		/* If turret reaches the front slow down zone then reduce the speed of the movement*/
		if (gDb_tRamCanSensorC0.i16EncodeurTurret1Angle >= gDb_tNvParamRailWorkSafetyC0.i16ALOTurretFrontZoneThres + gDb_tNvParamRailWorkSafetyC0.i16ALOTurretFrontZoneSlowThres)
			gDb_tRamRailWorkSafetyC0.boReduceSpeedRotTurretCounterClock = TRUE;
		else
			gDb_tRamRailWorkSafetyC0.boReduceSpeedRotTurretCounterClock = FALSE;

		/* If turret reaches the front zone stop threshold then set the stop variable*/
		if (gDb_tRamCanSensorC0.i16EncodeurTurret1Angle >= gDb_tNvParamRailWorkSafetyC0.i16ALOTurretFrontZoneStopThres + gDb_tNvParamRailWorkSafetyC0.i16ALOTurretFrontZoneThres)
			gDb_tRamRailWorkSafetyC0.boStopRotTurretCounterClockwise = TRUE;
		/* If turret reaches the hysteresis point then reset the stop variable*/
		else if (gDb_tRamCanSensorC0.i16EncodeurTurret1Angle <= gDb_tNvParamRailWorkSafetyC0.i16ALOTurretFrontZoneStopThres + gDb_tNvParamRailWorkSafetyC0.i16ALOTurretFrontZoneStopHyst + gDb_tNvParamRailWorkSafetyC0.i16ALOTurretFrontZoneThres)
			gDb_tRamRailWorkSafetyC0.boStopRotTurretCounterClockwise = FALSE;

	}
	/* Else limit rotation to the front end stop*/
	else {

		/* If turret reaches the slow down threshold of the front end stop then reduce the speed*/
		if (gDb_tRamCanSensorC0.i16EncodeurTurret1Angle >= gDb_tNvParamRailWorkSafetyC0.i16ALOTurretFrontEndStopThres + gDb_tNvParamRailWorkSafetyC0.i16ALOTurretFrontEndStopSlowThres)
			gDb_tRamRailWorkSafetyC0.boReduceSpeedRotTurretCounterClock = TRUE;
		else
			gDb_tRamRailWorkSafetyC0.boReduceSpeedRotTurretCounterClock = FALSE;

		/* If turret reaches the front end stop threshold then set the stop variable*/
		if (gDb_tRamCanSensorC0.i16EncodeurTurret1Angle >= gDb_tNvParamRailWorkSafetyC0.i16ALOTurretFrontEndStopThres)
			gDb_tRamRailWorkSafetyC0.boStopRotTurretCounterClockwise = TRUE;
		/* If turret reaches the hysteresis point then reset the stop variable*/
		else if (gDb_tRamCanSensorC0.i16EncodeurTurret1Angle <= gDb_tNvParamRailWorkSafetyC0.i16ALOTurretFrontEndStopThres + gDb_tNvParamRailWorkSafetyC0.i16ALOTurretFrontEndStopHyst)
			gDb_tRamRailWorkSafetyC0.boStopRotTurretCounterClockwise = FALSE;

	}

	//-----------------------------------------------------------------------------------------------------
	// Limitation of the arrow arm down movement
	//-----------------------------------------------------------------------------------------------------

			gDb_tRamRailWorkSafetyC0.boStopArrowArmDown = FALSE;
			gDb_tRamRailWorkSafetyC0.boReduceSpeedArrowArmDown = FALSE;

	//-----------------------------------------------------------------------------------------------------
	// Limitation of the telescope out movement
	//-----------------------------------------------------------------------------------------------------

			gDb_tRamRailWorkSafetyC0.boStopTelescopeOut = FALSE;

	//-----------------------------------------------------------------------------------------------------
	// Limitation of the basket clockwise movement
	//-----------------------------------------------------------------------------------------------------

	if((gDb_tRamRailWorkSafetyC0.boTurretInRearZone ==TRUE || gDb_tNvOptionsC0.boBasketTurretLimitation == TRUE)//AVANT gDb_tRamRailWorkSafetyC0.boTestFranceConfig MODIF FR
	&& (gDb_tRam48XsInputsC0.boNacelleBasketLeftSideSensor2 == TRUE
	|| (gDb_tRam48XsInputsC0.boNacelleBasketLeftSideSensor1 == TRUE && gDb_tRam48XsInputsC0.boNacelleBasketRightSideSensor1 == TRUE))
	)
	{
		gDb_tRamRailWorkSafetyC0.boStopRotBasketClockwise = TRUE;
	}
	else{
		gDb_tRamRailWorkSafetyC0.boStopRotBasketClockwise = FALSE;
	}

	//-----------------------------------------------------------------------------------------------------
	// Limitation of the basket counter clockwise movement
	//-----------------------------------------------------------------------------------------------------

	if(gDb_tRamRailWorkSafetyC0.boTurretInFrontZone ==TRUE
	&& (gDb_tRam48XsInputsC0.boNacelleBasketRightSideSensor2 == TRUE
	|| (gDb_tRam48XsInputsC0.boNacelleBasketLeftSideSensor1 == TRUE && gDb_tRam48XsInputsC0.boNacelleBasketRightSideSensor1 == TRUE))
	)
	{
		gDb_tRamRailWorkSafetyC0.boStopRotBasketCounterClockwise = TRUE;
	}
	else{
		gDb_tRamRailWorkSafetyC0.boStopRotBasketCounterClockwise = FALSE;
	}
}
