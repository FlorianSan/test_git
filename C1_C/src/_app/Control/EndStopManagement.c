
//==================================================================================================
//! @file EndStopManagement.c
//! @brief Stops the movements at the end stop
//! @see Target for ...
//! @section app
//! @subsection IO
//! @author Fabrice Cordary (FC)
//! @created 20.02.2019 HYDAC/FC
//! @history: #-
//! copyrights (c) all rights reserved by HYDAC International
//=================================================================================================

#include "EndStopManagement.h"

//-----------------------------------------------------------------------------------------------------
//! @brief Stops the movements at the end stop
//!
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 20.02.2019 HYDAC/FC
//!
//! @change  17.12.2019 HYDAC/CK  	change provisional value of msg can gDb_tRamData4C1RcvFromC0.boSignal_7 to gDb_tRamData4C1RcvFromC0.boTestFrance
//! @change  18.12.2019 HYDAC/CK	change provisional gDb_tNvParametersC1.boNvParametersC1_1 to gDb_tNvOptionsC1.boAutoStopMeasuringMast
//!
//! @care
//! @todo
//
//10.05.2021 NEOTEC/IG 			Nettoyage du code, suppression des lignes en commentaire
//
//-----------------------------------------------------------------------------------------------------
TVoid vEndStopManagement(TVoid)
{
	/*-----------------------------------------------------------------------------------------------------*/
	/*Turret negative end stop*/
	/*-----------------------------------------------------------------------------------------------------*/

	TInt16 i16TurretNegEndStopThres;
	if((gDb_tNvOptionsC1.boMeasuringMat == TRUE && gDb_tNvOptionsC1.boAutoStopMeasuringMast == FALSE) /* option arret auto mat secteur 135deg*/
	|| gDb_tNvOptionsC1.boPresenceContactMast == TRUE//Avant gDb_tRamData4C1RcvFromC0.boTestFrance == TRUE MODIF FR
	)
		i16TurretNegEndStopThres = -1350;
	else
		i16TurretNegEndStopThres = gDb_tNvParamMvtEndStopC1.i16TurretNegEndStopThres;

	if (gDb_tRamEcuC1RcvFromC0.i16EncodeurTurret1Angle <= i16TurretNegEndStopThres + gDb_tNvParamMvtEndStopC1.i16TurretNegEndStopSlowThres)

		gDb_tRamMvtEndStopC1.boReduceSpeedRotTurretClockwise = TRUE;
	else
		gDb_tRamMvtEndStopC1.boReduceSpeedRotTurretClockwise = FALSE;

	/* If end stop threshold reached then set the stop bit*/
	if (gDb_tRamEcuC1RcvFromC0.i16EncodeurTurret1Angle <= i16TurretNegEndStopThres)
		gDb_tRamMvtEndStopC1.boStopRotTurretClockwise = TRUE;
	/* Else if hysteresis point reached then reset the stop bit*/
	else if (gDb_tRamEcuC1RcvFromC0.i16EncodeurTurret1Angle >= i16TurretNegEndStopThres + gDb_tNvParamMvtEndStopC1.i16TurretNegEndStopHyst)
		gDb_tRamMvtEndStopC1.boStopRotTurretClockwise = FALSE;


	/*-----------------------------------------------------------------------------------------------------*/
	/* Turret positive end stop*/
	/*-----------------------------------------------------------------------------------------------------*/

	TInt16 i16TurretPosEndStopThres;
	if((gDb_tNvOptionsC1.boMeasuringMat == TRUE && gDb_tNvOptionsC1.boAutoStopMeasuringMast == FALSE) /* option arret auto mat secteur 135deg*/
	|| gDb_tNvOptionsC1.boPresenceContactMast == TRUE//Avant gDb_tRamData4C1RcvFromC0.boTestFrance == TRUE MODIF FR
	)
		i16TurretPosEndStopThres = 1350;
	else
		i16TurretPosEndStopThres = gDb_tNvParamMvtEndStopC1.i16TurretPosEndStopThres;


	/* If slow down threshold reached then reduce the speed*/
	if (gDb_tRamEcuC1RcvFromC0.i16EncodeurTurret1Angle >= i16TurretPosEndStopThres + gDb_tNvParamMvtEndStopC1.i16TurretPosEndStopSlowThres)

		gDb_tRamMvtEndStopC1.boReduceSpeedRotTurretCounterClock = TRUE;
	else
		gDb_tRamMvtEndStopC1.boReduceSpeedRotTurretCounterClock = FALSE;

	/* If end stop threshold reached then set the stop bit*/
	if (gDb_tRamEcuC1RcvFromC0.i16EncodeurTurret1Angle >= i16TurretPosEndStopThres)
		gDb_tRamMvtEndStopC1.boStopRotTurretCounterClockwise = TRUE;

	/* Else if hysteresis point reached then reset the stop bit*/
	else if (gDb_tRamEcuC1RcvFromC0.i16EncodeurTurret1Angle <= i16TurretPosEndStopThres + gDb_tNvParamMvtEndStopC1.i16TurretPosEndStopHyst)
		gDb_tRamMvtEndStopC1.boStopRotTurretCounterClockwise = FALSE;

	/*-----------------------------------------------------------------------------------------------------*/
	/* Delta arm bottom end stop*/
	/*-----------------------------------------------------------------------------------------------------*/
	/*If slow down threshold reached then reduce the speed*/
	if (gDb_tRamEcuInputsC1.i16DeltaArmAngularSensorValue <= gDb_tNvParamMvtEndStopC1.i16FoldedDeltaArmThres + gDb_tNvParamMvtEndStopC1.i16DeltaArmBottomEndStopSlowThres)
		gDb_tRamMvtEndStopC1.boReduceSpeedDeltaArmDown = TRUE;
	else
		gDb_tRamMvtEndStopC1.boReduceSpeedDeltaArmDown = FALSE;

	/*-----------------------------------------------------------------------------------------------------*/
	/* Delta arm folded*/
	/*-----------------------------------------------------------------------------------------------------*/
	/* If folded threshold reached then set the folded flag*/
	if (gDb_tRamEcuInputsC1.i16DeltaArmAngularSensorValue <= gDb_tNvParamMvtEndStopC1.i16FoldedDeltaArmThres)
		gDb_tRamMvtEndStopC1.boFoldedDeltaArm = TRUE;
	/* Else if hysteresis point reached then reset the flag*/
	else if (gDb_tRamEcuInputsC1.i16DeltaArmAngularSensorValue >= gDb_tNvParamMvtEndStopC1.i16FoldedDeltaArmThres + gDb_tNvParamMvtEndStopC1.i16FoldedDeltaArmHyst)
		gDb_tRamMvtEndStopC1.boFoldedDeltaArm = FALSE;

	/*-----------------------------------------------------------------------------------------------------*/
	/* Delta arm top end stop*/
	/*-----------------------------------------------------------------------------------------------------*/
	/* If slow down threshold reached then reduce the speed*/
	if (gDb_tRamEcuInputsC1.i16DeltaArmAngularSensorValue >= gDb_tNvParamMvtEndStopC1.i16DeltaArmTopEndStopThres + gDb_tNvParamMvtEndStopC1.i16DeltaArmTopEndStopSlowThres)
		gDb_tRamMvtEndStopC1.boReduceSpeedDeltaArmUp = TRUE;
	else
		gDb_tRamMvtEndStopC1.boReduceSpeedDeltaArmUp = FALSE;

	/*-----------------------------------------------------------------------------------------------------*/
	/* Arrow arm bottom end stop*/
	/*-----------------------------------------------------------------------------------------------------*/
	/*If slow down threshold reached then reduce the speed*/
	if (gDb_tRamEcuInputsC1.i16ArrowArmAngularSensorValue <= gDb_tNvParamMvtEndStopC1.i16FoldedArrowArmThres + gDb_tNvParamMvtEndStopC1.i16ArrowArmBottomEndStopSlowThres)
		gDb_tRamMvtEndStopC1.boReduceSpeedArrowArmDown = TRUE;
	else
		gDb_tRamMvtEndStopC1.boReduceSpeedArrowArmDown = FALSE;

	/*-----------------------------------------------------------------------------------------------------*/
	/* Arrow arm folded*/
	/*-----------------------------------------------------------------------------------------------------*/
	/* If folded threshold reached then set the folded flag*/
	if (gDb_tRamEcuInputsC1.i16ArrowArmAngularSensorValue <= gDb_tNvParamMvtEndStopC1.i16FoldedArrowArmThres)
		gDb_tRamMvtEndStopC1.boFoldedArrowArm = TRUE;
	/* Else if hysteresis point reached then reset the flag*/
	else if (gDb_tRamEcuInputsC1.i16ArrowArmAngularSensorValue >= gDb_tNvParamMvtEndStopC1.i16FoldedArrowArmThres + gDb_tNvParamMvtEndStopC1.i16FoldedArrowArmHyst)
		gDb_tRamMvtEndStopC1.boFoldedArrowArm = FALSE;

	/*-----------------------------------------------------------------------------------------------------*/
	/* Arrow arm top end stop*/
	/*-----------------------------------------------------------------------------------------------------*/
	/* If slow down threshold reached then reduce the speed*/
	if (gDb_tRamEcuInputsC1.i16ArrowArmAngularSensorValue >= gDb_tNvParamMvtEndStopC1.i16ArrowArmTopEndStopThres + gDb_tNvParamMvtEndStopC1.i16ArrowArmTopEndStopSlowThres)
		gDb_tRamMvtEndStopC1.boReduceSpeedArrowArmUp = TRUE;
	else
		gDb_tRamMvtEndStopC1.boReduceSpeedArrowArmUp = FALSE;

	/*-----------------------------------------------------------------------------------------------------*/
	/* Telescop folder*/
	/*-----------------------------------------------------------------------------------------------------*/
	/* If slow down threshold reached then reduce the speed*/
	if (gDb_tRamEcuInputsC1.eEntryTelescopeFdcSensorState == GE_DI_ON)
		gDb_tRamMvtEndStopC1.boReduceSpeedTelescopFolded = TRUE;
	else
		gDb_tRamMvtEndStopC1.boReduceSpeedTelescopFolded = FALSE;
}
