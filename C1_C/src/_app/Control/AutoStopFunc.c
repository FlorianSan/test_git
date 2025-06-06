//==================================================================================================
//! @file AutoStopFunc.c
//! @brief stop automatically the movements when reaching some determined key positions
//! @see Target for ...
//! @section app
//! @subsection
//! @author Fabrice Cordary (FC)
//! @created 27.02.2019 HYDAC/FC
//! @history: #- CK 27.02.2019 HYDAC/FC creation
//! copyrights (c) all rights reserved by HYDAC International
//=================================================================================================

#include "AutoStopFunc.h"

//-----------------------------------------------------------------------------------------------------
//! @brief stop automatically the movements when reaching some determined key positions
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 27.02.2019 HYDAC/FC
//!
//! @change
//!
//! @care
//! @todo
//
//10.05.2021 NEOTEC/IG 			Nettoyage du code, suppression des lignes en commentaire
//
//-----------------------------------------------------------------------------------------------------
TVoid vAutoStopFunc(TVoid)
{
	/* If simulation mode is enabled then use the simulation variables instead of the real inputs*/
	if (gDb_tRamAutoStopC1.boEnableSimuMode){

		/* Automatic stop of the basket rotation*/
		vAutoStopBasketRotation(
			gDb_tRamAutoStopC1.boTestBasketLeftSideSensor,
			gDb_tRamAutoStopC1.boTestBasketRightSideSensor,
			gDb_tRamAutoStopC1.boTestBasketRotCmdEnabled
		);

		/* Automatic stop of the turret rotation*/
		vAutoStopTurretRotation(
			gDb_tRamAutoStopC1.i16TestTurretAngularPosition,
			gDb_tRamAutoStopC1.boTestTurretRotCmdEnabled
		);

	}
	/* Else call the function with the real inputs*/
	else{

		/* Automatic stop of the basket rotation*/
		vAutoStopBasketRotation(
			gDb_tRam48XsInputsC1.boNacelleBasketLeftSideSensor2,
			gDb_tRam48XsInputsC1.boNacelleBasketRightSideSensor2,
			(gDb_tRamEvision4C1.bogBasket_Rotate_Counter_ClockWise || gDb_tRamEvision4C1.bogBasket_Rotate_ClockWise)
			|| (gDb_tRam48XsInputsC1.boRotationCtClockwiseBasketButton || gDb_tRam48XsInputsC1.boRotationClockwiseBasketButton)
		);

		gDb_tRamAutoStopC1.boTurretRotationCmdEnabled = ((gDb_tRamRcvRadioCmdC1.boUpPendularOrRotTurretCtClock == TRUE && gDb_tRamRcvRadioCmdC1.boSelectorRotTurret)
		|| (gDb_tRamRcvRadioCmdC1.boDownPendularOrRotTurretClock == TRUE && gDb_tRamRcvRadioCmdC1.boSelectorRotTurret)
		|| (gDb_tRamEvision4C1.bogTurret_Rotate_ClockWise || gDb_tRamEvision4C1.bogTurret_Rotate_Counter_ClockWise)
		|| (gDb_tRamGeneralC1.i16ScalingJoysTurret != 0 ));

		/* Automatic stop of the turret rotation*/
		vAutoStopTurretRotation(
			gDb_tRamEcuC1RcvFromC0.i16EncodeurTurret1Angle,
			gDb_tRamAutoStopC1.boTurretRotationCmdEnabled
		);

	}
}

//-----------------------------------------------------------------------------------------------------
//! @brief stop automatically the basket rotation when reaching the center position
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 27.02.2019 HYDAC/FC
//!
//! @change
//!
//! @care
//! @todo
//-----------------------------------------------------------------------------------------------------
TVoid vAutoStopBasketRotation(TBoolean iBasketLeftSideSensor, TBoolean iBasketRightSideSensor, TBoolean iBasketRotationCmdEnabled)
{
	/* Previous value of the center state*/
	static TBoolean PreviousBasketInCenterPos = FALSE;

	/* Basket is in center position if not oriented to the left side AND not oriented to the right side*/
	gDb_tRamAutoStopC1.boBasketInCentrerPos = (!iBasketLeftSideSensor && !iBasketRightSideSensor);

	/* If rising edge of the center position then stop the movement*/
	if (gDb_tRamAutoStopC1.boBasketInCentrerPos && !PreviousBasketInCenterPos)
		gDb_tRamAutoStopC1.boStopBasketRotation = TRUE;

	/* If basket rotation command is released then reset the stop bit*/
	if (!iBasketRotationCmdEnabled)
		gDb_tRamAutoStopC1.boStopBasketRotation = FALSE;

	/* Memorize the previous value of the center state*/
	PreviousBasketInCenterPos = gDb_tRamAutoStopC1.boBasketInCentrerPos;

}

//-----------------------------------------------------------------------------------------------------
//! @brief stop automatically the turret rotation when reaching a center position
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 27.02.2019 HYDAC/FC
//! @change	 04.01.2019 NEOTEC/FV	- Used Inductive to stop rotations
//!	@change	 05.04.2019 HYDAC/CK	- add variable to replace provisional reading of inductive centered turret to set local variable SensorTurretCentredInductive
//! @change  18.12.2019 HYDAC/CK	- change provisional gDb_tNvParametersC1.boNvParametersC1_1 to gDb_tNvOptionsC1.boAutoStopMeasuringMast
//! @change
//!
//! @care
//! @todo
//-----------------------------------------------------------------------------------------------------
TVoid vAutoStopTurretRotation(TInt16 iTurretAngularSensor, TBoolean boTurretRotationCmdEnabled)
{
	static TBoolean boTurretSectorFrontPositiveMast= FALSE;
	/* Check if the turret is in the front positive Mast zone*/
	if (iTurretAngularSensor >= 1350
	&& gDb_tNvOptionsC1.boAutoStopMeasuringMast == TRUE/*Option arret auto mat secteur 135deg*/
	)
		boTurretSectorFrontPositiveMast = TRUE;
	else
		boTurretSectorFrontPositiveMast = FALSE;

	static TBoolean boTurretSlowFrontPosMast= FALSE;
	/* Check if the turret is in the front positive Mast zone*/
	if (iTurretAngularSensor >= (1350 + gDb_tNvParamMvtEndStopC1.i16TurretPosEndStopSlowThres)
	&& gDb_tNvOptionsC1.boAutoStopMeasuringMast == TRUE/*Option arret auto mat secteur 135deg*/
	)
		boTurretSlowFrontPosMast = TRUE;
	else
		boTurretSlowFrontPosMast = FALSE;

	static TBoolean boTurretSectorFrontNegativeMast= FALSE;
	/* Check if the turret is in the front negative Mast zone*/
	if (iTurretAngularSensor <= -1350
	&& gDb_tNvOptionsC1.boAutoStopMeasuringMast == TRUE/*Option arret auto mat secteur 135deg*/
	)
		boTurretSectorFrontNegativeMast = TRUE;
	else
		boTurretSectorFrontNegativeMast = FALSE;

	static TBoolean boTurretSlowFrontNegMast= FALSE;
	/* Check if the turret is in the front positive Mast zone*/
	if (iTurretAngularSensor <= (-1350 + gDb_tNvParamMvtEndStopC1.i16TurretNegEndStopSlowThres)
	&& gDb_tNvOptionsC1.boAutoStopMeasuringMast == TRUE/*Option arret auto mat secteur 135deg*/
	)
		boTurretSlowFrontNegMast = TRUE;
	else
		boTurretSlowFrontNegMast = FALSE;

	/*Demande de rotation de la tourelle sens horaire*/
	static TBoolean boCmdRotTurretClockWise= FALSE;
	if((gDb_tRamRcvRadioCmdC1.boDownPendularOrRotTurretClock == TRUE && gDb_tRamRcvRadioCmdC1.boSelectorRotTurret)
	|| gDb_tRamEvision4C1.bogTurret_Rotate_ClockWise == TRUE
	|| gDb_tRamGeneralC1.i16ScalingJoysTurret > 0
	)
		boCmdRotTurretClockWise = TRUE;
	else
		boCmdRotTurretClockWise = FALSE;

	/*Demande de rotation de la tourelle sens anti horaire*/
	static TBoolean boCmdRotTurretCounterClockWise= FALSE;
	if((gDb_tRamRcvRadioCmdC1.boUpPendularOrRotTurretCtClock == TRUE && gDb_tRamRcvRadioCmdC1.boSelectorRotTurret)
	|| gDb_tRamEvision4C1.bogTurret_Rotate_Counter_ClockWise == TRUE
	|| gDb_tRamGeneralC1.i16ScalingJoysTurret < 0
	)
		boCmdRotTurretCounterClockWise = TRUE;
	else
		boCmdRotTurretCounterClockWise = FALSE;

	/* Rising boTurretSectorFrontPositiveMast*/
	TBoolean RisingboTurretSectorFrontPositiveMast = FALSE;
	static TBoolean PreviousboTurretSectorFrontPositiveMast = FALSE;
	if (boTurretSectorFrontPositiveMast == TRUE && PreviousboTurretSectorFrontPositiveMast == FALSE)
		RisingboTurretSectorFrontPositiveMast = TRUE;
	/* Memorize the previous value of the center state*/
	PreviousboTurretSectorFrontPositiveMast = boTurretSectorFrontPositiveMast;

	/* Rising boTurretSectorFrontNegativeMast*/
	TBoolean RisingboTurretSectorFrontNegativeMast = FALSE;
	static TBoolean PreviousboTurretSectorFrontNegativeMast = FALSE;
	if (boTurretSectorFrontNegativeMast == TRUE && PreviousboTurretSectorFrontNegativeMast == FALSE)
		RisingboTurretSectorFrontNegativeMast = TRUE;
	/* Memorize the previous value of the center state*/
	PreviousboTurretSectorFrontNegativeMast = boTurretSectorFrontNegativeMast;


	/* boAutoStopTurretFrontMastSector*/
	/*set*/
	static TBoolean boAutoStopTurretFrontMastSector = FALSE;
	if((boCmdRotTurretCounterClockWise == TRUE && RisingboTurretSectorFrontPositiveMast == TRUE)
	|| (boCmdRotTurretClockWise == TRUE && RisingboTurretSectorFrontNegativeMast == TRUE)
	)
		boAutoStopTurretFrontMastSector =TRUE;

	/*reset*/
	if (boTurretRotationCmdEnabled == FALSE && gDb_tRamEcuOutputsC1.boSupplyPvgPropEvTorCommand == FALSE)
		boAutoStopTurretFrontMastSector =FALSE;

/*-------------------------------------------------------------------------------------------------------------------------------------------*/

	/* Previous value of the center state*/
	static TBoolean PreviousTurretInCenterPos = FALSE;
	static TBoolean SensorTurretCentredInductive = FALSE;
	static TBoolean TranslationMovementIsSolicited = FALSE;
	static TBoolean TurretSectorRearCentredInductive = FALSE;
	static TBoolean TurretSectorFrontPositiveCentredInductive = FALSE;
	static TBoolean TurretSectorFrontNegativeCentredInductive = FALSE;
	static TBoolean TurretCentredPositions =FALSE;
	static TBoolean TurretSectorTurretLowSpeed = FALSE;
	static TBoolean AuthoriseHightSpeedTurret = FALSE;

	static TBoolean boPreviousTelescopeSector = FALSE;
	TBoolean boRisingSectorTelescope = FALSE;
	TBoolean RisingTranslationMovementIsSolicited = FALSE;
	static TBoolean PreviousTranslationMovementIsSolicited = FALSE;
	TBoolean RisingTurretRotationCmdEnabled = FALSE;
	static TBoolean PreviousTurretRotationCmdEnabled = FALSE;

	TranslationMovementIsSolicited = gDb_tRamEcuC1RcvFromC0.boTranslationMovementIsSolicited;

	/*SensorTurretCentredInductive*/
	TInt16 i16cptmax = gDb_tNvParamAutoStopC1.i16TurretCenterZoneWindowLeft;
	static TInt16 i16cpt = 0;
	if(i16cptmax <= 0)
		i16cptmax = 1;
	if(gDb_tRamEcuC1RcvFromC0.boCenteredTurretState == TRUE)
	{
		if (i16cpt>=i16cptmax)
			i16cpt=i16cptmax;
		else
			i16cpt=i16cpt+1;
	}
	else if (gDb_tRamEcuC1RcvFromC0.boCenteredTurretState == FALSE)
		i16cpt=0;

	if ( i16cpt == i16cptmax)
		SensorTurretCentredInductive = TRUE;
	else
		SensorTurretCentredInductive = FALSE;


	/* Rising Translation Movement Solicited*/
	RisingTranslationMovementIsSolicited = FALSE;
	if (TranslationMovementIsSolicited == TRUE && PreviousTranslationMovementIsSolicited == FALSE)
		RisingTranslationMovementIsSolicited = TRUE;
	/* Memorize the previous value of the center state*/
	PreviousTranslationMovementIsSolicited = TranslationMovementIsSolicited;

	/* Rising TurretRotationCmdEnabled*/
	RisingTurretRotationCmdEnabled = FALSE;
	if (boTurretRotationCmdEnabled == TRUE && PreviousTurretRotationCmdEnabled == FALSE)
		RisingTurretRotationCmdEnabled = TRUE;
	/* Memorize the previous value of the center state*/
	PreviousTurretRotationCmdEnabled = boTurretRotationCmdEnabled;

	/* Check if the turret is in the rear center zone (window with hysteresis)*/
	if (iTurretAngularSensor <= (gDb_tNvParamAutoStopC1.i16TurretRearCenterPos + gDb_tNvParamAutoStopC1.i16TurretCenterZoneWindow)
	&& iTurretAngularSensor >= (gDb_tNvParamAutoStopC1.i16TurretRearCenterPos - gDb_tNvParamAutoStopC1.i16TurretCenterZoneWindow))
		TurretSectorRearCentredInductive = TRUE;
	else if (iTurretAngularSensor > (gDb_tNvParamAutoStopC1.i16TurretRearCenterPos + gDb_tNvParamAutoStopC1.i16TurretCenterZoneWindow + gDb_tNvParamAutoStopC1.i16TurretCenterZoneWindowHyst)
	|| iTurretAngularSensor < (gDb_tNvParamAutoStopC1.i16TurretRearCenterPos - gDb_tNvParamAutoStopC1.i16TurretCenterZoneWindow - gDb_tNvParamAutoStopC1.i16TurretCenterZoneWindowHyst))
		TurretSectorRearCentredInductive = FALSE;

	/* Check if the turret is in the front positive center zone (window with hysteresis)*/
	if (iTurretAngularSensor <= (gDb_tNvParamAutoStopC1.i16TurretFrontPositiveCenterPos + gDb_tNvParamAutoStopC1.i16TurretCenterZoneWindow)
	&& iTurretAngularSensor >= (gDb_tNvParamAutoStopC1.i16TurretFrontPositiveCenterPos - gDb_tNvParamAutoStopC1.i16TurretCenterZoneWindow))
		TurretSectorFrontPositiveCentredInductive = TRUE;
	else if (iTurretAngularSensor > (gDb_tNvParamAutoStopC1.i16TurretFrontPositiveCenterPos + gDb_tNvParamAutoStopC1.i16TurretCenterZoneWindow + gDb_tNvParamAutoStopC1.i16TurretCenterZoneWindowHyst)
	|| iTurretAngularSensor < (gDb_tNvParamAutoStopC1.i16TurretFrontPositiveCenterPos - gDb_tNvParamAutoStopC1.i16TurretCenterZoneWindow - gDb_tNvParamAutoStopC1.i16TurretCenterZoneWindowHyst))
		TurretSectorFrontPositiveCentredInductive = FALSE;

	/* Check if the turret is in the front negative center zone (window with hysteresis)*/
	if (iTurretAngularSensor <= (gDb_tNvParamAutoStopC1.i16TurretFrontNegativeCenterPos + gDb_tNvParamAutoStopC1.i16TurretCenterZoneWindow)
	&& iTurretAngularSensor >= (gDb_tNvParamAutoStopC1.i16TurretFrontNegativeCenterPos - gDb_tNvParamAutoStopC1.i16TurretCenterZoneWindow))
		TurretSectorFrontNegativeCentredInductive = TRUE;
	else if (iTurretAngularSensor > (gDb_tNvParamAutoStopC1.i16TurretFrontNegativeCenterPos + gDb_tNvParamAutoStopC1.i16TurretCenterZoneWindow + gDb_tNvParamAutoStopC1.i16TurretCenterZoneWindowHyst)
	|| iTurretAngularSensor < (gDb_tNvParamAutoStopC1.i16TurretFrontNegativeCenterPos - gDb_tNvParamAutoStopC1.i16TurretCenterZoneWindow - gDb_tNvParamAutoStopC1.i16TurretCenterZoneWindowHyst))
		TurretSectorFrontNegativeCentredInductive = FALSE;

	/*Check if the turret is TurretCentredPositions*/
	if (((TurretSectorRearCentredInductive == TRUE || TurretSectorFrontPositiveCentredInductive == TRUE || TurretSectorFrontNegativeCentredInductive == TRUE)
	&& SensorTurretCentredInductive == TRUE
	&& TranslationMovementIsSolicited == FALSE)
	||
	((TurretSectorRearCentredInductive == TRUE || TurretSectorFrontPositiveCentredInductive == TRUE || TurretSectorFrontNegativeCentredInductive == TRUE)
	&& SensorTurretCentredInductive == TRUE
	&& RisingTranslationMovementIsSolicited == TRUE))
		TurretCentredPositions = TRUE;
	else if (((TurretSectorRearCentredInductive == TRUE || TurretSectorFrontPositiveCentredInductive == TRUE || TurretSectorFrontNegativeCentredInductive == TRUE)
	&& SensorTurretCentredInductive == FALSE
	&& TranslationMovementIsSolicited == FALSE)
	||
	((TurretSectorRearCentredInductive == TRUE || TurretSectorFrontPositiveCentredInductive == TRUE || TurretSectorFrontNegativeCentredInductive == TRUE)
	&& SensorTurretCentredInductive == FALSE
	&& RisingTranslationMovementIsSolicited == TRUE )
	||
	(TurretSectorRearCentredInductive == FALSE && TurretSectorFrontPositiveCentredInductive == FALSE && TurretSectorFrontNegativeCentredInductive == FALSE))
		TurretCentredPositions = FALSE;


	/* Determine if the turret is in a center position*/
	if (TurretCentredPositions ==TRUE && TurretSectorRearCentredInductive == TRUE)
		gDb_tRamAutoStopC1.boTurretInRearCenterPos = TRUE;
	else
		gDb_tRamAutoStopC1.boTurretInRearCenterPos = FALSE;
	if (TurretCentredPositions ==TRUE && TurretSectorFrontPositiveCentredInductive == TRUE)
		gDb_tRamAutoStopC1.boTurretInFrontPositiveCenterPos = TRUE;
	else
		gDb_tRamAutoStopC1.boTurretInFrontPositiveCenterPos = FALSE;
	if (TurretCentredPositions ==TRUE && TurretSectorFrontNegativeCentredInductive == TRUE)
		gDb_tRamAutoStopC1.boTurretInFrontNegativeCenterPos = TRUE;
	else
		gDb_tRamAutoStopC1.boTurretInFrontNegativeCenterPos = FALSE;
	gDb_tRamAutoStopC1.boTurrentInCenterPos = gDb_tRamAutoStopC1.boTurretInRearCenterPos || gDb_tRamAutoStopC1.boTurretInFrontPositiveCenterPos || gDb_tRamAutoStopC1.boTurretInFrontNegativeCenterPos;

	/* boAutoStopTurretCenter*/
	/*set*/
	static TBoolean boAutoStopTurretCenter = FALSE;
	if(gDb_tRamAutoStopC1.boTurrentInCenterPos == TRUE && PreviousTurretInCenterPos == FALSE)
		boAutoStopTurretCenter =TRUE;
	/*reset*/
	if (!boTurretRotationCmdEnabled && gDb_tRamEcuOutputsC1.boEvBypassCommand == FALSE )
		boAutoStopTurretCenter =FALSE;

	/* Memorize the previous value of the center state*/
	PreviousTurretInCenterPos = gDb_tRamAutoStopC1.boTurrentInCenterPos;
/*-------------------------------------------------------------------------------------------------------------------------------------------*/

	if((boAutoStopTurretCenter == TRUE || boAutoStopTurretFrontMastSector == TRUE)
	/*Rotation du track seul*/
	&& gDb_tRamEcuOutputsC1.boEvCrawlerOnlyCommand == FALSE)

		gDb_tRamAutoStopC1.boStopTurretRotation = TRUE;
	else
		gDb_tRamAutoStopC1.boStopTurretRotation = FALSE;


	/* TurretSectorTurretLowSpeed*/
	if ((iTurretAngularSensor <= (gDb_tNvParamAutoStopC1.i16TurretRearCenterPos + gDb_tNvParamAutoStopC1.i16TurretCenterZoneSlowThres)
	&& iTurretAngularSensor >= (gDb_tNvParamAutoStopC1.i16TurretRearCenterPos - gDb_tNvParamAutoStopC1.i16TurretCenterZoneSlowThres))
	||
	(iTurretAngularSensor >= (gDb_tNvParamAutoStopC1.i16TurretFrontPositiveCenterPos - gDb_tNvParamAutoStopC1.i16TurretCenterZoneSlowThres))
	||
	(iTurretAngularSensor <= (gDb_tNvParamAutoStopC1.i16TurretFrontNegativeCenterPos + gDb_tNvParamAutoStopC1.i16TurretCenterZoneSlowThres))
	)
		TurretSectorTurretLowSpeed = TRUE;
	else
		TurretSectorTurretLowSpeed = FALSE;

	/* AuthoriseHightSpeedTurret*/
	if (TurretSectorTurretLowSpeed == TRUE
	&& TurretCentredPositions == TRUE
	&& RisingTurretRotationCmdEnabled == TRUE)
		AuthoriseHightSpeedTurret =TRUE;
	if ((TurretSectorTurretLowSpeed == TRUE
	&& TurretCentredPositions == FALSE
	&& RisingTurretRotationCmdEnabled == TRUE)
	||
	TurretSectorTurretLowSpeed == FALSE)
		AuthoriseHightSpeedTurret =FALSE;

	/*-----------------------------------------------------------------------------------------------------*/
	/* Clowkwise speed reduction*/
	/*-----------------------------------------------------------------------------------------------------*/
	gDb_tRamAutoStopC1.boReduceSpeedRotTurretClockwise = FALSE;

	/* if turret is in the speed reduction zone then reduce speed*/
	if ((TurretSectorTurretLowSpeed == TRUE && 	AuthoriseHightSpeedTurret == FALSE)
	|| boTurretSlowFrontPosMast == TRUE
	|| boTurretSlowFrontNegMast == TRUE
	)
		gDb_tRamAutoStopC1.boReduceSpeedRotTurretClockwise = TRUE;

	/*-----------------------------------------------------------------------------------------------------*/
	/* Counter clowkwise speed reduction*/
	/*-----------------------------------------------------------------------------------------------------*/
	gDb_tRamAutoStopC1.boReduceSpeedRotTurretCounterClock = FALSE;

	/* if turret is in the speed reduction zone then reduce speed*/
	if ( (TurretSectorTurretLowSpeed == TRUE 	&& 	AuthoriseHightSpeedTurret == FALSE)
	|| boTurretSlowFrontPosMast == TRUE
	|| boTurretSlowFrontNegMast == TRUE
	)
		gDb_tRamAutoStopC1.boReduceSpeedRotTurretCounterClock = TRUE;

//NEOTEC FIN
//NEOTEC IG STRUKTON DEBUT
		//-----------------------------------------------------------------------------------------------------
		// Telescope slow speed for end stop
		//-----------------------------------------------------------------------------------------------------
		//Ralentissement pour la rentrée du télescope.
		if((gDb_tRamTelescopeCanC1.u16LenghtTelescope1 <= gDb_tNvParamMvtEndStopC1.u16TelescopePerfOutLimit + gDb_tNvParamMvtEndStopC1.u16TelescopePerfOutLimitSlowThres)
		&& (gDb_tRamTelescopeCanC1.u16LenghtTelescope1 > gDb_tNvParamMvtEndStopC1.u16TelescopePerfOutLimit))
			gDb_tRamMvtEndStopC1. boReduceSpeedTelescopeUp = TRUE;
		else
			gDb_tRamMvtEndStopC1. boReduceSpeedTelescopeUp = FALSE;

		//Ralentissement pour la sortie du télescope.
		if((gDb_tRamTelescopeCanC1.u16LenghtTelescope1 >= gDb_tNvParamMvtEndStopC1.u16TelescopePerfOutLimit - gDb_tNvParamMvtEndStopC1.u16TelescopePerfOutLimitSlowThres)
		&& (gDb_tRamTelescopeCanC1.u16LenghtTelescope1 < gDb_tNvParamMvtEndStopC1.u16TelescopePerfOutLimit))
			gDb_tRamMvtEndStopC1. boReduceSpeedTelescopeDown = TRUE;
		else
			gDb_tRamMvtEndStopC1. boReduceSpeedTelescopeDown = FALSE;

		//-----------------------------------------------------------------------------------------------------
		// Determine first sector for Telescope
		//-----------------------------------------------------------------------------------------------------
		//Validation du secteur 600mm pour le teléscope
		if(gDb_tRamTelescopeCanC1.u16LenghtTelescope1 <= gDb_tNvParamMvtEndStopC1.u16TelescopePerfOutLimit)
			gDb_tRamMvtEndStopC1.boValidFirstSectorTelescope = TRUE;
		else
			gDb_tRamMvtEndStopC1.boValidFirstSectorTelescope = FALSE;

		//-----------------------------------------------------------------------------------------------------
		// Telescope end stop
		//-----------------------------------------------------------------------------------------------------
		//Arrêt du telescope en position sortie.
		if ((gDb_tRamTelescopeCanC1.u16LenghtTelescope1 >= gDb_tNvParamMvtEndStopC1.u16TelescopePerfOutLimit - gDb_tNvParamMvtEndStopC1.u16TelescopePerfOutLimitHyst
			&& (gDb_tRamTelescopeCanC1.u16LenghtTelescope1 <= gDb_tNvParamMvtEndStopC1.u16TelescopePerfOutLimit))
		||  (gDb_tRamTelescopeCanC1.u16LenghtTelescope1 <= gDb_tNvParamMvtEndStopC1.u16TelescopePerfOutLimit + gDb_tNvParamMvtEndStopC1.u16TelescopePerfOutLimitHyst
			&& (gDb_tRamTelescopeCanC1.u16LenghtTelescope1 >= gDb_tNvParamMvtEndStopC1.u16TelescopePerfOutLimit)))
		{
			gDb_tRamMvtEndStopC1.boValidSectorTelescope = TRUE;
		}
		else
		{
			gDb_tRamMvtEndStopC1.boValidSectorTelescope = FALSE;
		}

		boRisingSectorTelescope = FALSE;
	// Rising boTurretSectorFrontNegativeMast
		if (gDb_tRamMvtEndStopC1.boValidSectorTelescope == TRUE && boPreviousTelescopeSector == FALSE)
			boRisingSectorTelescope = TRUE;
		// Memorize the previous value of the center state
		boPreviousTelescopeSector = gDb_tRamMvtEndStopC1.boValidSectorTelescope;

		if(gDb_tRamEcuOutputsC1.boSupplyPvgTelescopeArmCommand == TRUE && boRisingSectorTelescope == TRUE)
			gDb_tRamMvtEndStopC1.boPerformFoldedTelescopeStop = TRUE;
		else if(gDb_tRamEcuOutputsC1.boSupplyPvgTelescopeArmCommand == FALSE && gDb_tRamEvision4C1.bogTelescope_Move_In == FALSE && gDb_tRamEvision4C1.bogTelescope_Move_Out == FALSE && gDb_tRam48XsInputsC1.boDeltaArmJystckCenteredTelescope == TRUE)
			gDb_tRamMvtEndStopC1.boPerformFoldedTelescopeStop = FALSE;
//NEOTEC IG STRUKTON FIN

}
