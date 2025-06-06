
//==================================================================================================
//! @file SpeedMaxTranslationRail.c
//! @brief define speed max transalation rail
//! @see Target for ...
//! @section app
//! @subsection IO
//! @author Christian Klein (CK)
//! @created 24.01.2019 HYDAC/CK
//! @history: #- CK 24.01.2019 HYDAC/CK interface created
//! copyrights (c) all rights reserved by HYDAC International
//=================================================================================================

#include "SpeedMaxTranslationRail.h"

// GLOBAL VARIABLES DECLARATIONS ==================================================================

	TBoolean boAccesSiteSpeedCondition;
	TBoolean boModeConfiguration;


//-----------------------------------------------------------------------------------------------------
//! @brief Control system
//!
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 24.01.2019 HYDAC/CK
//!
//! @change	 27.03.2019 HYDAC/CK	- add low speed by brake test
//! 		 05.04.2019 HYDAc/CK	- add limit speed detection regarding speed mode
//! @change	 12.04.2019 NEOTEC/FV	- add conditions gDb_tRamGeneralC0.eRailSpeedMode
//! @change	 18.04.2019 NEOTEC/FV	- change conditions reset over speed
//! @change	 25.04.2019 HYDAC/CK	- add brake test speed
//! @change	 02.05.2019 NEOTEC/FV	- change conditions gDb_tRamGeneralC0.eRailSpeedMode = GE_BRAKE_TEST_SPEED_RUNNING
//! @change	 27.05.2019 NEOTEC/FV	- Write eRailSpeedMode
//! @change 18.12.2019 HYDAC/CK 		- change provisional value of msg can gCsr_tData4C1SendToC0.boSignal to gDb_tRamData4C0RcvFromC1.boNoMovementRunning
//!
//! @care
//! @todo
//
//07.05.2021 NEOTEC/IG 			Nettoyage du code, suppression des lignes en commentaire
//
//-----------------------------------------------------------------------------------------------------
TVoid vSpeedMaxTranslationRail(TVoid)
{
	static TBoolean	boPositionLowOrHighAxles = FALSE;
	static TBoolean	boGlobalAuthorizeTrans = FALSE;
	static TBoolean	boNoMovementsRunning = FALSE;

	/*boPositionLowOrHighAxles*/
	if ((gDb_tRamEcuInputsC0.eDownAxleOscillantState == GE_DI_ON && gDb_tRamEcuInputsC0.eDownAxleFixeState == GE_DI_ON)
	||
	(gDb_tRamEcuInputsC0.eUpAxleOscillantState == GE_DI_ON && gDb_tRamEcuInputsC0.eUpAxleFixeState == GE_DI_ON))
		boPositionLowOrHighAxles = TRUE;
	else
		boPositionLowOrHighAxles = FALSE;

	/*boFrameTransportRailPositionOk*/
	TBoolean boFrameTransportRailPositionOk;
	if( gDb_tRamEcuInputsC0.eRailHookSensorState != GE_DI_ON /*hook up*/
	&&	gDb_tRamEcuInputsC0.eFrameRotationSensor2State == GE_DI_ON) /*Capteur le plus proche de l'axe de rotation. Etat GE_DI_ON == Capteur en face vide // Etat GE_DI_OFF == Capteur en face acier*/
		boFrameTransportRailPositionOk = TRUE;
	else
		boFrameTransportRailPositionOk = FALSE;

	/*boBasketInclFault*/
	TInt16 i16ArmLowSectorBasketFaultThres = gDb_tNvParamSpeedMaxRail.i16ArmLowSectorBasketFaultThres ; /* 500= 5deg*/
	TInt16 i16ArmSectorBasketFaultHyst = gDb_tNvParamSpeedMaxRail.i16ArmSpeedRailHyst; /* 100 = 1deg*/
	static TBoolean	boArmLowSectorBasketIncl = FALSE;
	static TBoolean	boBasketInclFault = FALSE;

	if (gDb_tRamEcuC0RcvFromC1.i16ArrowArmAngularSensor <= (i16ArmLowSectorBasketFaultThres - i16ArmSectorBasketFaultHyst) )
		boArmLowSectorBasketIncl = TRUE;
	else if (gDb_tRamEcuC0RcvFromC1.i16ArrowArmAngularSensor >= i16ArmLowSectorBasketFaultThres)
		boArmLowSectorBasketIncl = FALSE;

	if(gDb_tNvOptionsC0.boPresenceSensorPlate == TRUE //AVANT gDb_tRamRailWorkSafetyC0.boTestFranceConfig MODIF FR
	&& boArmLowSectorBasketIncl == TRUE
	&& gDb_tRam48XsInputsC0.boHighSectorPlateSensor == FALSE)
		boBasketInclFault = TRUE;
	else
		boBasketInclFault = FALSE;

	/*boGlobalAuthorizeTrans*/
	if (boPositionLowOrHighAxles == TRUE
	&& gDb_tRamGeneralC0.boPortillonLadderClose == TRUE
	&& gDb_tRamEcuInputsC0.eFrameRotationSensor2State == GE_DI_ON
	&& boBasketInclFault == FALSE
	&& boFrameTransportRailPositionOk == TRUE
	)
		boGlobalAuthorizeTrans = TRUE;
	else
		boGlobalAuthorizeTrans = FALSE;

	/*boNoMovementsRunning*/
	if(gDb_tRamSelectControlPost.eSelectedControlPost == GE_POST_NACELLE
	&& gDb_tRamEcuC0RcvFromC1.boStopAllMovementsNacellePost == FALSE
	&& gDb_tRamData4C0RcvFromC1.boNoMovementRunning == FALSE /* aucun mouvement en cours reflet du bypass ou de la génératrice*/
	)
		boNoMovementsRunning = TRUE;
	else
		boNoMovementsRunning = FALSE;
	/*V3 boModeConfiguartion Reflet de la clé avec son option pour affichage*/
	if(gDb_tRam48XsInputsC0.boAuthorizationWorkKey == FALSE	&& gDb_tNvOptionsC0.boAutorisationWorkKeyPresent == TRUE)//NEOTEC IG EVO - A VOIR !!!
		boModeConfiguration = TRUE;
	else
		boModeConfiguration = FALSE;

	//-----------------------------------------------------------------------------------------------------
	// Determine angle arow for rail translation low speed
	//-----------------------------------------------------------------------------------------------------
	TInt16 i16ArmLowSpeedThres = gDb_tNvParamSpeedMaxRail.i16ArmLowZoneForLowSpeed ; /*Parametre provisoire a creer 4500 = 45deg*/
	TInt16 i16ArmLowSpeedThresHyst = gDb_tNvParamSpeedMaxRail.i16ArmSpeedRailHyst; /*parametre provisoire a creer 100 = 1deg*/
	static TBoolean boArmLowZoneForLowSpeed = TRUE;
	if (gDb_tRamEcuC0RcvFromC1.i16ArrowArmAngularSensor <= (i16ArmLowSpeedThres - i16ArmLowSpeedThresHyst) )
	{
		boArmLowZoneForLowSpeed = TRUE;
	}
	else if (gDb_tRamEcuC0RcvFromC1.i16ArrowArmAngularSensor >= i16ArmLowSpeedThres)
	{
		boArmLowZoneForLowSpeed = FALSE;
	}


	/* If simulation mode is enabled then use the simulation variables instead of the real inputs*/
	if(gDb_tRamSpeedMaxRail.boEnableSimuMode)
	{
		gDb_tRamCanSensorC0.u16SelectedSlopeAngle = gDb_tRamSpeedMaxRail.u16SimuDevers;
		gDb_tRamCanSensorC0.i16EncodeurTurret1Angle = gDb_tRamSpeedMaxRail.i16SimuTurretAngle;
		gDb_tRam48XsInputsC0.boAuthorizationWorkKey = gDb_tRamSpeedMaxRail.boSimuAuthorizationWorkKey;
		gDb_tRamEcuInputsC0.eAbutmentTurretCentredSideState = gDb_tRamSpeedMaxRail.eSimuAbutmentTurretCentred;
		gDb_tRamEcuInputsC0.eWorkKeyCentredState = gDb_tRamSpeedMaxRail.eSimuWorkKeyCentred;
		gDb_tRamEcuC0RcvFromC1.boEntryTelescopeFdcSensor = gDb_tRamSpeedMaxRail.boSimuTelescopeEntry;
		gDb_tRamEcuC0RcvFromC1.boDeltaArmFoldedSensor  = gDb_tRamSpeedMaxRail.boSimuDeltaArmFoldedSensor;
		gDb_tRamEcuC0RcvFromC1.boFoldedDeltaArmZone = gDb_tRamSpeedMaxRail.boSimuDeltaArmFoldedZone;
		gDb_tRamEcuC0RcvFromC1.boBoomArmFoldedSensor = gDb_tRamSpeedMaxRail.boSimuArrowArmFoldedSensor;
		gDb_tRamEcuC0RcvFromC1.boFoldedArrowArmZone = gDb_tRamSpeedMaxRail.boSimuArrowArmFoldedZone;
		gDb_tRam48XsInputsC0.boNacelleBasketLeftSideSensor1 = gDb_tRamSpeedMaxRail.boSimuNacelleBasketLeftSideSensor1;
		gDb_tRam48XsInputsC0.boNacelleBasketLeftSideSensor2 = gDb_tRamSpeedMaxRail.boSimuNacelleBasketLeftSideSensor2;
		gDb_tRam48XsInputsC0.boNacelleBasketRightSideSensor1 = gDb_tRamSpeedMaxRail.boSimuNacelleBasketRighSideSensor1;
		gDb_tRam48XsInputsC0.boNacelleBasketRightSideSensor2 = gDb_tRamSpeedMaxRail.boSimuNacelleBasketRighSideSensor2;
		gDb_tRam48XsInputsC0.boHighSectorPlateSensor = gDb_tRamSpeedMaxRail.boSimuHighSectorPlateSensor;
		gDb_tRamEcuC0RcvFromC1.boDeltaArmInLowerZone = gDb_tRamSpeedMaxRail.boSimuDeltaArmInLowerZone;
		gDb_tRamEcuC0RcvFromC1.boTurretInRearCenterPos = gDb_tRamSpeedMaxRail.boSimuTurretInRearCenterPos;
		gDb_tRamEcuC0RcvFromC1.boTurretInFrontCenterPos = gDb_tRamSpeedMaxRail.boSimuTurretInFrontCenterPos;
	}

	//-----------------------------------------------------------------------------------------------------
	// Determine low and high slope threshold
	//-----------------------------------------------------------------------------------------------------
	if(gDb_tRamCanSensorC0.u16SelectedSlopeAngle <= gDb_tNvParamSpeedMaxRail.i16LowSpeedSlopeTresholdAbs)
		gDb_tRamSpeedMaxRail.boSlopeLowerLowSpeedTresh = TRUE;
	else if(gDb_tRamCanSensorC0.u16SelectedSlopeAngle >= gDb_tNvParamSpeedMaxRail.i16LowSpeedSlopeTresholdAbs + gDb_tNvParamSpeedMaxRail.i16LowSpeedSlopeTresholdHystRel)
		gDb_tRamSpeedMaxRail.boSlopeLowerLowSpeedTresh = FALSE;

/* Determine le devers maximum (6.8°) admis pour la High Speed*/
	if(gDb_tRamCanSensorC0.u16SelectedSlopeAngle <= gDb_tNvParamSpeedMaxRail.i16HighSpeedSlopeTresholdAbs)
		gDb_tRamSpeedMaxRail.boSlopeOverHighSpeedTresh = TRUE;
	else if(gDb_tRamCanSensorC0.u16SelectedSlopeAngle >= gDb_tNvParamSpeedMaxRail.i16HighSpeedSlopeTresholdAbs + gDb_tNvParamSpeedMaxRail.i16HighSpeedSlopeTresholdHystRel)
		gDb_tRamSpeedMaxRail.boSlopeOverHighSpeedTresh = FALSE;
//NEOTEC IG

//NEOTEC IG STRUKTON DEBUT
	//-----------------------------------------------------------------------------------------------------
	// Determine slope threshold For High performance Function (Strukton).
	//-----------------------------------------------------------------------------------------------------

 	 //Cas inférieur ou égal à 2°
	if(gDb_tRamCanSensorC0.u16SelectedSlopeAngle <= gDb_tNvParamSpeedMaxRail.u16Performance2DegSlopeThres)
		gDb_tRamSpeedMaxRail.boSlopeCaseLess2Deg = TRUE;
	else if(gDb_tRamCanSensorC0.u16SelectedSlopeAngle >= gDb_tNvParamSpeedMaxRail.u16Performance2DegSlopeThres + gDb_tNvParamSpeedMaxRail.u16PerformanceDegSlopeHyst)
		gDb_tRamSpeedMaxRail.boSlopeCaseLess2Deg = FALSE;

	//Cas inférieur ou égal à 4°
	if(gDb_tRamCanSensorC0.u16SelectedSlopeAngle <= gDb_tNvParamSpeedMaxRail.u16Performance4DegSlopeThres)
		gDb_tRamSpeedMaxRail.boSlopeCaseLess4Deg = TRUE;
	else if(gDb_tRamCanSensorC0.u16SelectedSlopeAngle >= gDb_tNvParamSpeedMaxRail.u16Performance4DegSlopeThres + gDb_tNvParamSpeedMaxRail.u16PerformanceDegSlopeHyst)
		gDb_tRamSpeedMaxRail.boSlopeCaseLess4Deg = FALSE;

	//Cas inférieur à 6°
	if(gDb_tRamCanSensorC0.u16SelectedSlopeAngle <= gDb_tNvParamSpeedMaxRail.u16Performance6DegSlopeThres)
		gDb_tRamSpeedMaxRail.boSlopeCaseLess6Deg = TRUE;
	else if(gDb_tRamCanSensorC0.u16SelectedSlopeAngle >= gDb_tNvParamSpeedMaxRail.u16Performance6DegSlopeThres + gDb_tNvParamSpeedMaxRail.u16PerformanceDegSlopeHyst)
		gDb_tRamSpeedMaxRail.boSlopeCaseLess6Deg = FALSE;

	//Cas superieur à 6°
	if(gDb_tRamCanSensorC0.u16SelectedSlopeAngle > gDb_tNvParamSpeedMaxRail.u16Performance6DegSlopeThres)
		gDb_tRamSpeedMaxRail.boSlopeCaseHigher6Deg = TRUE;
	else if(gDb_tRamCanSensorC0.u16SelectedSlopeAngle <= gDb_tNvParamSpeedMaxRail.u16Performance6DegSlopeThres)
		gDb_tRamSpeedMaxRail.boSlopeCaseHigher6Deg = FALSE;

	//-----------------------------------------------------------------------------------------------------
	// Determine Turret case angle For High performance Function (Strukton).
	//-----------------------------------------------------------------------------------------------------
	//Cas <2°
	if (abs(gDb_tRamCanSensorC0.i16EncodeurTurret1Angle)<=(gDb_tNvParamSpeedMaxRail.i16TurretPerformLowSpeed2Deg - gDb_tNvParamSpeedMaxRail.i16TurretPerfLowSpeedHystHigh))
		gDb_tRamSpeedMaxRail.boTurretInSpeedZone2Deg = TRUE;

	else if (abs(gDb_tRamCanSensorC0.i16EncodeurTurret1Angle)> gDb_tNvParamSpeedMaxRail.i16TurretPerformLowSpeed2Deg )
		gDb_tRamSpeedMaxRail.boTurretInSpeedZone2Deg = FALSE;

	//Cas <4°
	if (abs(gDb_tRamCanSensorC0.i16EncodeurTurret1Angle)<=(gDb_tNvParamSpeedMaxRail. i16TurretPerformLowSpeed4Deg - gDb_tNvParamSpeedMaxRail.i16TurretPerfLowSpeedHystHigh))
		gDb_tRamSpeedMaxRail.boTurretInSpeedZone4Deg = TRUE;

	else if(abs(gDb_tRamCanSensorC0.i16EncodeurTurret1Angle)> gDb_tNvParamSpeedMaxRail.i16TurretPerformLowSpeed4Deg)
		gDb_tRamSpeedMaxRail.boTurretInSpeedZone4Deg = FALSE;

	//Cas <6°
	if (abs(gDb_tRamCanSensorC0.i16EncodeurTurret1Angle)<=(gDb_tNvParamSpeedMaxRail. i16TurretPerformLowSpeed6Deg - gDb_tNvParamSpeedMaxRail.i16TurretPerfLowSpeedHystHigh))
		gDb_tRamSpeedMaxRail.boTurretInSpeedZone6Deg = TRUE;

	else if(abs(gDb_tRamCanSensorC0.i16EncodeurTurret1Angle)> gDb_tNvParamSpeedMaxRail.i16TurretPerformLowSpeed6Deg)
		gDb_tRamSpeedMaxRail.boTurretInSpeedZone6Deg = FALSE;
	//-----------------------------------------------------------------------------------------------------
	// Determine Turret case angle For Basket limitation to High performance Function (Strukton).
	//-----------------------------------------------------------------------------------------------------

	// <2°
 	if(abs(gDb_tRamCanSensorC0.i16EncodeurTurret1Angle)<=(gDb_tNvParamSpeedMaxRail.i16TurretPerformLowSpeedBasketRot2 - gDb_tNvParamSpeedMaxRail.i16TurretPerfLowSpeedHystHigh)
	&&(abs(gDb_tRamCanSensorC0.i16EncodeurTurret1Angle)>= gDb_tNvParamSpeedMaxRail.i16TurretPerformLowSpeed2Deg + gDb_tNvParamSpeedMaxRail.i16TurretPerfLowSpeedHystHigh))
		gDb_tRamSpeedMaxRail.boTurretInSpeedZone2DegForBasket = TRUE;

	else if((abs(gDb_tRamCanSensorC0.i16EncodeurTurret1Angle)>= gDb_tNvParamSpeedMaxRail.i16TurretPerformLowSpeedBasketRot2)
	|| (abs(gDb_tRamCanSensorC0.i16EncodeurTurret1Angle)< gDb_tNvParamSpeedMaxRail.i16TurretPerformLowSpeed2Deg))
		gDb_tRamSpeedMaxRail.boTurretInSpeedZone2DegForBasket = FALSE;

	// <4°
	if(abs(gDb_tRamCanSensorC0.i16EncodeurTurret1Angle)<=(gDb_tNvParamSpeedMaxRail.i16TurretPerfLowSpeedBasketRot4Deg - gDb_tNvParamSpeedMaxRail.i16TurretPerfLowSpeedHystHigh)
	&&(abs(gDb_tRamCanSensorC0.i16EncodeurTurret1Angle)>= gDb_tNvParamSpeedMaxRail.i16TurretPerformLowSpeed4Deg + gDb_tNvParamSpeedMaxRail.i16TurretPerfLowSpeedHystHigh))
		gDb_tRamSpeedMaxRail.boTurretInSpeedZone4DegForBasket = TRUE;

	else if((abs(gDb_tRamCanSensorC0.i16EncodeurTurret1Angle)>= gDb_tNvParamSpeedMaxRail.i16TurretPerfLowSpeedBasketRot4Deg)
	|| (abs(gDb_tRamCanSensorC0.i16EncodeurTurret1Angle)< gDb_tNvParamSpeedMaxRail.i16TurretPerformLowSpeed4Deg))
		gDb_tRamSpeedMaxRail.boTurretInSpeedZone4DegForBasket = FALSE;
//NEOTEC IG NEW
	// <6°
	if(abs(gDb_tRamCanSensorC0.i16EncodeurTurret1Angle)<=(gDb_tNvParamSpeedMaxRail.i16TurretPerfLowSpeedBasketRot6Deg - gDb_tNvParamSpeedMaxRail.i16TurretPerfLowSpeedHystHigh)
	&&(abs(gDb_tRamCanSensorC0.i16EncodeurTurret1Angle)>= gDb_tNvParamSpeedMaxRail.i16TurretPerformLowSpeed6Deg + gDb_tNvParamSpeedMaxRail.i16TurretPerfLowSpeedHystHigh))
		gDb_tRamSpeedMaxRail.boTurretInSpeedZone6DegForBasket = TRUE;

	else if((abs(gDb_tRamCanSensorC0.i16EncodeurTurret1Angle)>= gDb_tNvParamSpeedMaxRail.i16TurretPerfLowSpeedBasketRot6Deg)
	|| (abs(gDb_tRamCanSensorC0.i16EncodeurTurret1Angle)< gDb_tNvParamSpeedMaxRail.i16TurretPerformLowSpeed6Deg))
		gDb_tRamSpeedMaxRail.boTurretInSpeedZone6DegForBasket = FALSE;
//NEOTEC IG NEW
//NEOTEC IG STRUKTON FIN

	//-----------------------------------------------------------------------------------------------------
	// Determine rear turret zone for low speed
	//-----------------------------------------------------------------------------------------------------
/*Assymétrie de la tourelle*/

	if( (abs(gDb_tRamCanSensorC0.i16EncodeurTurret1Angle) <= (gDb_tNvParamSpeedMaxRail.i16TurretRearPosLowSpeedTreshold - gDb_tNvParamSpeedMaxRail.i16TurretLowSpeedTresholdHyst)
	&& gDb_tRamCanSensorC0.i16EncodeurTurret1Angle>=0
	)
	|| (abs(gDb_tRamCanSensorC0.i16EncodeurTurret1Angle) <= (gDb_tNvParamSpeedMaxRail.i16TurretRearNegLowSpeedTreshold - gDb_tNvParamSpeedMaxRail.i16TurretLowSpeedTresholdHyst)
	&& gDb_tRamCanSensorC0.i16EncodeurTurret1Angle<0))
		gDb_tRamSpeedMaxRail.boTurretInLowSpeedRearZone = TRUE;
	else if( (abs(gDb_tRamCanSensorC0.i16EncodeurTurret1Angle) >= gDb_tNvParamSpeedMaxRail.i16TurretRearPosLowSpeedTreshold
	&& gDb_tRamCanSensorC0.i16EncodeurTurret1Angle>=0
	)
	|| (abs(gDb_tRamCanSensorC0.i16EncodeurTurret1Angle) >=  gDb_tNvParamSpeedMaxRail.i16TurretRearNegLowSpeedTreshold
	&& gDb_tRamCanSensorC0.i16EncodeurTurret1Angle<0))
		gDb_tRamSpeedMaxRail.boTurretInLowSpeedRearZone = FALSE;

	/*boTurretInLowSpeedRearExtZone*/
	static TBoolean boTurretInLowSpeedRearExtZone = FALSE;
	TInt16 	i16TurretRearPosExtLowSpeedTresh = gDb_tNvParametersC0.i16TurretRearPosExtLowSpeedTresh;
	TInt16 	i16TurretRearNegExtLowSpeedTresh = gDb_tNvParametersC0.i16TurretRearNegExtLowSpeedTresh;
	if( (abs(gDb_tRamCanSensorC0.i16EncodeurTurret1Angle) <= (i16TurretRearPosExtLowSpeedTresh - gDb_tNvParamSpeedMaxRail.i16TurretLowSpeedTresholdHyst)
	&& gDb_tRamSpeedMaxRail.boTurretInLowSpeedRearZone == FALSE
	&& gDb_tRamCanSensorC0.i16EncodeurTurret1Angle>=0
	)
	|| (abs(gDb_tRamCanSensorC0.i16EncodeurTurret1Angle) <= (i16TurretRearNegExtLowSpeedTresh - gDb_tNvParamSpeedMaxRail.i16TurretLowSpeedTresholdHyst)
	&& gDb_tRamSpeedMaxRail.boTurretInLowSpeedRearZone == FALSE
	&& gDb_tRamCanSensorC0.i16EncodeurTurret1Angle<0))
		boTurretInLowSpeedRearExtZone = TRUE;
	else if( (abs(gDb_tRamCanSensorC0.i16EncodeurTurret1Angle) >= i16TurretRearPosExtLowSpeedTresh
	&& gDb_tRamCanSensorC0.i16EncodeurTurret1Angle>=0
	)
	|| (abs(gDb_tRamCanSensorC0.i16EncodeurTurret1Angle) >=  i16TurretRearNegExtLowSpeedTresh
	&& gDb_tRamCanSensorC0.i16EncodeurTurret1Angle<0)
	|| gDb_tRamSpeedMaxRail.boTurretInLowSpeedRearZone == TRUE
	)
		boTurretInLowSpeedRearExtZone = FALSE;
//NEOTEC V2



	//-----------------------------------------------------------------------------------------------------
	// Determine front turret zone for high speed
	//-----------------------------------------------------------------------------------------------------

	gDb_tRamSpeedMaxRail.boTurretInLowSpeedZone = gDb_tRamSpeedMaxRail.boTurretInLowSpeedRearZone == TRUE || boTurretInLowSpeedRearExtZone == TRUE  || gDb_tRamEcuC0RcvFromC1.boTurretInFrontCenterPos == TRUE;


	static TBoolean boDefaultBasketSensors = FALSE;
	if(boBloErrGetErrStaBit(&gErr_tSpecificErrorC0_4,DM_INC_RIGHT_BASKET_SENSOR) == TRUE
	|| boBloErrGetErrStaBit(&gErr_tSpecificErrorC0_4,DM_INC_LEFT_BASKET_SENSOR) == TRUE
	|| boBloErrGetErrStaBit(&gErr_tSpecificErrorC0_4,DM_INC_RIGHT_LEFT_BASKET) == TRUE
	)
		boDefaultBasketSensors = TRUE;
	else
		boDefaultBasketSensors = FALSE;


/*boDefaultActived*/
	static TBoolean boDefaultActived = FALSE;

	if(boBloErrGetErrStaBit(&gErr_tSpecificErrorC0_2, DM_HIGH_HYDRAULIC_TEMP_RAIL) == TRUE
	|| boBloErrGetErrStaBit(&gErr_tSpecificErrorC0_2, DM_ONE_SPEED_SENSOR_FAULT) == TRUE
	|| boBloErrGetErrStaBit(&gErr_tSpecificErrorC0_2, DM_TWO_SPEED_SENSOR_FAULT) == TRUE
	|| boBloErrGetErrStaBit(&gErr_tSpecificErrorC0_3, DM_MAT_MEASURE_FAULT) == TRUE
	|| boBloErrGetErrStaBit(&gErr_tSpecificErrorC0_3, DM_INC_POS_DELTA_ARROW_FOLDED) == TRUE
	|| boPressureBrakeFault == TRUE
	|| gCsr_tFailuresC0SendToC1.boEvParkBrakeAxleOscillantFault == TRUE
	|| gCsr_tFailuresC0SendToC1.boEvParkBrakeAxleFixeFault == TRUE
	|| gCsr_tFailuresC0SendToC1.boEvServiceBrakeAxleOsciFault == TRUE
	|| gCsr_tFailuresC0SendToC1.boEvServiceBrakeAxleFixeFault == TRUE
 /*Double freins*/
	|| gCsr_tFailuresC0SendToC1.boEv2ndParkBrakeAxleOsciFault == TRUE
	|| gCsr_tFailuresC0SendToC1.boEv2ndParkBrakeAxleFixeFault == TRUE
/* V2*/
	|| boDefaultBasketSensors == TRUE

	)
		boDefaultActived = TRUE;
	else
		boDefaultActived = FALSE;

/*boBaskestRightSide*/
	static TBoolean boBaskestRightSide = FALSE;
	if(gDb_tRam48XsInputsC0.boNacelleBasketRightSideSensor1 == FALSE
	&& gDb_tRam48XsInputsC0.boNacelleBasketRightSideSensor2 == TRUE)
		boBaskestRightSide = TRUE;
	else
		boBaskestRightSide = FALSE;

/*boBaskestLeftSide*/
	static TBoolean boBaskestLeftSide = FALSE;
	if(gDb_tRam48XsInputsC0.boNacelleBasketLeftSideSensor1 == FALSE
	&& gDb_tRam48XsInputsC0.boNacelleBasketLeftSideSensor2 == TRUE)
		boBaskestLeftSide = TRUE;
	else
		boBaskestLeftSide = FALSE;
//MG AUS
/*Interdiction de rotation du panier en FR et MG*/
	/*Multi Gage*/
	/*boFranceOrMultigage*/
/*	NEOTEC IG - MG AUS
 * static TBoolean boFranceOrMultigage = FALSE;
	if(gDb_tRamRailWorkSafetyC0.boTestFranceConfig == TRUE || gDb_tRamGeneralC0.boSlopeModeFromC1 == FALSE)//Mode MG = FALSE
		boFranceOrMultigage = TRUE;
	else
		boFranceOrMultigage = FALSE;
*/
/*Multi Gage*/
	/*boFranceOrMultigagePositionBasketOk*/
/*  NEOTEC IG - MG AUS
	static TBoolean boFranceOrMultigagePositionBasketOk = FALSE;
	if(boFranceOrMultigage == TRUE
	&& gDb_tRamEcuC0RcvFromC1.boBasketInCentrerPos == TRUE)
		boFranceOrMultigagePositionBasketOk = TRUE;
	else
		boFranceOrMultigagePositionBasketOk = FALSE;
*/

	/*boFrancePositionBasketOk*/
	static TBoolean boFrancePositionBasketOk = FALSE;
	if(gDb_tNvOptionsC0.boBasketTurretLimitation == TRUE//AVANT gDb_tRamRailWorkSafetyC0.boTestFranceConfig MODIF FR
	&& gDb_tRamEcuC0RcvFromC1.boBasketInCentrerPos == TRUE)
		boFrancePositionBasketOk = TRUE;
	else
		boFrancePositionBasketOk = FALSE;
//MG AUS
/*Interdiction de rotation du panier en FR et MG*/
	/*boFrontPositionBasketOk*/
	static TBoolean boFrontPositionBasketOk = FALSE;
	if (//boFranceOrMultigage == FALSE// MG AUS
	gDb_tNvOptionsC0.boBasketTurretLimitation == FALSE//AVANT gDb_tRamRailWorkSafetyC0.boTestFranceConfig MODIF FR / MG AUS
	&&  gDb_tRamEcuC0RcvFromC1.boTurretInFrontCenterPos == TRUE
	&& ((gDb_tRamRailWorkSafetyC0.eRailWorkMode == GE_BILATERAL_MODE)
		||(gDb_tRamRailWorkSafetyC0.eRailWorkMode == GE_MULTILANE_MODE
			&& gDb_tRamEcuC0RcvFromC1.boBasketInCentrerPos == TRUE)
		||(gDb_tRamRailWorkSafetyC0.eRailWorkMode == GE_ALO_MODE
		    && (boBaskestLeftSide == TRUE || gDb_tRamEcuC0RcvFromC1.boBasketInCentrerPos == TRUE))
	))
		boFrontPositionBasketOk = TRUE;
	else
		boFrontPositionBasketOk = FALSE;

//NEOTEC IG STRUKTON DEBUT
/*boRearPositionBasketOk*/
	static TBoolean boRearPositionBasketOk = FALSE;
	if (//boFranceOrMultigage == FALSE//MG AUS	/*Interdiction de tourné le panier en mode MG*/
	gDb_tNvOptionsC0.boBasketTurretLimitation == FALSE//AVANT gDb_tRamRailWorkSafetyC0.boTestFranceConfig MODIF FR MG AUS
	&& 	gDb_tRamEcuC0RcvFromC1.boTurretInFrontCenterPos == FALSE
	&& (//Cas mode GE_BILATERAL_MODE sans l'option gDb_tNvOptionsC0.boAddPerformanceFunc
		(gDb_tRamRailWorkSafetyC0.eRailWorkMode == GE_BILATERAL_MODE
		&& (gDb_tRamSpeedMaxRail.boTurretInLowSpeedRearZone == TRUE
			|| boTurretInLowSpeedRearExtZone == TRUE)
		)
		|| //Cas mode GE_MULTILANE_MODE
		(gDb_tRamRailWorkSafetyC0.eRailWorkMode == GE_MULTILANE_MODE
		&& gDb_tRamEcuC0RcvFromC1.boBasketInCentrerPos == TRUE
		)
		|| //Cas mode GE_ALO_MODE
		(gDb_tRamRailWorkSafetyC0.eRailWorkMode == GE_ALO_MODE
		 && ((gDb_tRamSpeedMaxRail.boTurretInLowSpeedRearZone == TRUE && gDb_tRamCanSensorC0.i16EncodeurTurret1Angle>=0 && boBaskestRightSide == TRUE)
			||(gDb_tRamSpeedMaxRail.boTurretInLowSpeedRearZone == TRUE && gDb_tRamEcuC0RcvFromC1.boBasketInCentrerPos == TRUE)
			||(boTurretInLowSpeedRearExtZone == TRUE && (boBaskestRightSide == TRUE || boBaskestLeftSide == TRUE) && gDb_tRamCanSensorC0.i16EncodeurTurret1Angle>=0)
			||(boTurretInLowSpeedRearExtZone == TRUE && gDb_tRamEcuC0RcvFromC1.boBasketInCentrerPos == TRUE))
		)
	   )
	)
		boRearPositionBasketOk = TRUE;
	else
		boRearPositionBasketOk = FALSE;
//NEOTEC IG STRUKTON FIN

//AVEC WARNING
//	/*boRearPositionBasketOk*/
//	static TBoolean boRearPositionBasketOk = FALSE;
//	if (//boFranceOrMultigage == FALSE//MG AUS	/*Interdiction de tourné le panier en mode MG*/
//	gDb_tRamRailWorkSafetyC0.boTestFranceConfig == FALSE// MG AUS
//	&& 	gDb_tRamEcuC0RcvFromC1.boTurretInFrontCenterPos == FALSE
//	&& ( (gDb_tRamRailWorkSafetyC0.eRailWorkMode == GE_BILATERAL_MODE  && gDb_tNvOptionsC0.boAddPerformanceFunc == FALSE
//			&& (gDb_tRamSpeedMaxRail.boTurretInLowSpeedRearZone == TRUE
//			||(boTurretInLowSpeedRearExtZone == TRUE && gDb_tRamCanSensorC0.i16EncodeurTurret1Angle>=0 && boBaskestRightSide == TRUE)
//			||(boTurretInLowSpeedRearExtZone == TRUE && gDb_tRamCanSensorC0.i16EncodeurTurret1Angle<0 && boBaskestLeftSide == TRUE)
//			||(boTurretInLowSpeedRearExtZone == TRUE && gDb_tRamEcuC0RcvFromC1.boBasketInCentrerPos == TRUE))
//		|| (gDb_tRamRailWorkSafetyC0.eRailWorkMode == GE_BILATERAL_MODE /*&& gDb_tNvOptionsC0.boAddPerformanceFunc == FALSE*///MG AUS
//			&& (gDb_tRamSpeedMaxRail.boTurretInLowSpeedRearZone == TRUE
//			|| boTurretInLowSpeedRearExtZone == TRUE
//			||(boTurretInLowSpeedRearExtZone == TRUE && gDb_tRamEcuC0RcvFromC1.boBasketInCentrerPos == TRUE)))
//			)
//		||(gDb_tRamRailWorkSafetyC0.eRailWorkMode == GE_MULTILANE_MODE
//			&& gDb_tRamEcuC0RcvFromC1.boBasketInCentrerPos == TRUE )
//		||(gDb_tRamRailWorkSafetyC0.eRailWorkMode == GE_ALO_MODE
//			&& ((gDb_tRamSpeedMaxRail.boTurretInLowSpeedRearZone == TRUE && gDb_tRamCanSensorC0.i16EncodeurTurret1Angle>=0 && boBaskestRightSide == TRUE)
//			||(gDb_tRamSpeedMaxRail.boTurretInLowSpeedRearZone == TRUE && gDb_tRamEcuC0RcvFromC1.boBasketInCentrerPos == TRUE)
//			||(boTurretInLowSpeedRearExtZone == TRUE && (boBaskestRightSide == TRUE || boBaskestLeftSide == TRUE) && gDb_tRamCanSensorC0.i16EncodeurTurret1Angle>=0)
//			||(boTurretInLowSpeedRearExtZone == TRUE && gDb_tRamEcuC0RcvFromC1.boBasketInCentrerPos == TRUE)))
//	))
//		boRearPositionBasketOk = TRUE;
//	else
//		boRearPositionBasketOk = FALSE;
//NEOTEC IG STRUKTON FIN

/*boPositionBasketOk*/
	static TBoolean boPositionBasketOk = FALSE;
	if((boFrancePositionBasketOk == TRUE
	|| boFrontPositionBasketOk == TRUE
	|| boRearPositionBasketOk == TRUE)
	)
		boPositionBasketOk = TRUE;
	else
		boPositionBasketOk = FALSE;


	static TBoolean boTranslationWithDefaultBasket = FALSE;
/*Translation autorisé avec défaut capteur position panier en mode BILATERAL*/
	if((boDefaultBasketSensors == TRUE
		&& gDb_tRamRailWorkSafetyC0.eRailWorkMode == GE_BILATERAL_MODE
		&& gDb_tNvOptionsC0.boBasketTurretLimitation == FALSE)//AVANT gDb_tRamRailWorkSafetyC0.boTestFranceConfig MODIF FR
/*Translation autorisé avec défaut capteur position panier en mode FR et en MULTILANE*/
	|| (boDefaultBasketSensors == TRUE
		&& gDb_tRamRailWorkSafetyC0.eRailWorkMode == GE_MULTILANE_MODE
		&& gDb_tNvOptionsC0.boBasketTurretLimitation == TRUE//AVANT gDb_tRamRailWorkSafetyC0.boTestFranceConfig MODIF FR
		&& gDb_tRam48XsInputsC0.boAbutementNacelleCenteredSide == TRUE)
	  )
		boTranslationWithDefaultBasket = TRUE;
	else
		boTranslationWithDefaultBasket = FALSE;


//NEOTEC IG STRUKTON DEBUT
/*boPositionTurretOk*/
	static TBoolean boPositionTurretOk = FALSE;

	if((gDb_tRamRailWorkSafetyC0.eRailWorkMode == GE_BILATERAL_MODE
/*		&&((gDb_tRamSpeedMaxRail.boTurretInLowSpeedZone == TRUE && gDb_tRamRailWorkSafetyC0.boTestFranceConfig == FALSE)
			|| gDb_tRamEcuInputsC0.eCenteredTurretState == GE_DI_ON))*/
		&&(gDb_tNvOptionsC0.boBasketTurretLimitation == FALSE || (gDb_tNvOptionsC0.boAddPerformanceFunc == TRUE && gDb_tNvOptionsC0.boBasketTurretLimitation == TRUE)	|| gDb_tRamEcuInputsC0.eCenteredTurretState == GE_DI_ON))//AVANT gDb_tRamRailWorkSafetyC0.boTestFranceConfig a la place de gDb_tNvOptionsC0.boBasketTurretLimitation MODIF FR
	||(gDb_tRamRailWorkSafetyC0.eRailWorkMode == GE_MULTILANE_MODE
		&&(((gDb_tRamEcuC0RcvFromC1.boTurretInRearCenterPos == TRUE || gDb_tRamEcuC0RcvFromC1.boTurretInFrontCenterPos == TRUE) && (gDb_tNvOptionsC0.boBasketTurretLimitation == FALSE || (gDb_tNvOptionsC0.boAddPerformanceFunc == TRUE && gDb_tNvOptionsC0.boBasketTurretLimitation == TRUE)))//AVANT gDb_tRamRailWorkSafetyC0.boTestFranceConfig a la place de gDb_tNvOptionsC0.boBasketTurretLimitation MODIF FR
			|| gDb_tRamEcuInputsC0.eCenteredTurretState == GE_DI_ON))
	||(gDb_tRamRailWorkSafetyC0.eRailWorkMode == GE_ALO_MODE
		&&(((gDb_tRamEcuC0RcvFromC1.boTurretInRearCenterPos == TRUE || gDb_tRamEcuC0RcvFromC1.boTurretInFrontCenterPos == TRUE || gDb_tRamSpeedMaxRail.boTurretInLowSpeedZone == TRUE) && (gDb_tNvOptionsC0.boBasketTurretLimitation == FALSE || (gDb_tNvOptionsC0.boAddPerformanceFunc == TRUE && gDb_tNvOptionsC0.boBasketTurretLimitation == TRUE)))//AVANT gDb_tRamRailWorkSafetyC0.boTestFranceConfig a la place de gDb_tNvOptionsC0.boBasketTurretLimitation MODIF FR
			|| gDb_tRamEcuInputsC0.eCenteredTurretState == GE_DI_ON))
	)
		boPositionTurretOk = TRUE;
	else
		boPositionTurretOk = FALSE;
//NEOTEC IG STRUKTON FIN
//NEOTEC IG STRUKTON DEBUT
 	static TBoolean boAuthorise2DegTrans = FALSE;
	static TBoolean boAuthorise4DegTrans = FALSE;
	static TBoolean boAuthorise6DegTrans = FALSE;
	static TBoolean boAuthoriseHigher6DegTrans = FALSE;

//Cas <= 2°
	if (gDb_tRamSpeedMaxRail.boSlopeCaseLess2Deg == TRUE
	&& ( /*Cas tourelle dans la zone 1 donc panier libre*/
		(gDb_tRamSpeedMaxRail.boTurretInSpeedZone2Deg == TRUE
		&& (gDb_tRamEcuC0RcvFromC1.boEntryTelescopeFdcSensor == TRUE || gDb_tRamData4C0RcvFromC1.boValidTelescopeSectorSlope == TRUE || gDb_tRamData4C0RcvFromC1.boValidTelescopeFirstSectorSlope == TRUE))
		/*Cas tourelle dans la zone 2 donc panier et télescope surveillé*/
	|| (gDb_tRamSpeedMaxRail.boTurretInSpeedZone2DegForBasket == TRUE
		&& ((gDb_tRamEcuC0RcvFromC1.boEntryTelescopeFdcSensor == TRUE && gDb_tRamGeneralC0.boSlopeModeFromC1 == FALSE) || gDb_tRamData4C0RcvFromC1.boValidTelescopeSectorSlope == TRUE)
		/*Cas panier a droite ou a gauche en MG*/
		&& ((gDb_tRamCanSensorC0.i16EncodeurTurret1Angle>=0 && boBaskestLeftSide == FALSE) || (gDb_tRamCanSensorC0.i16EncodeurTurret1Angle<0 && boBaskestRightSide == FALSE))
		)))
	{
		boAuthorise2DegTrans = TRUE;
		boAuthorise4DegTrans = FALSE;
		boAuthorise6DegTrans = FALSE;
		boAuthoriseHigher6DegTrans = FALSE;
	}

//Cas [2° < x <= 4°]
	else if(gDb_tRamSpeedMaxRail.boSlopeCaseLess4Deg == TRUE
	&& (gDb_tRamEcuC0RcvFromC1.boEntryTelescopeFdcSensor == TRUE || gDb_tRamData4C0RcvFromC1.boValidTelescopeSectorSlope == TRUE || gDb_tRamData4C0RcvFromC1.boValidTelescopeFirstSectorSlope == TRUE)
	&& (/*Cas tourelle dans la zone 1 donc panier libre*/
		gDb_tRamSpeedMaxRail.boTurretInSpeedZone4Deg == TRUE
		/*Cas panier a droite ou centré*/
		||(gDb_tRamSpeedMaxRail.boTurretInSpeedZone4DegForBasket == TRUE && gDb_tRamCanSensorC0.i16EncodeurTurret1Angle>=0 && boBaskestLeftSide == FALSE)
		/*Cas panier a gauche ou centré*/
		||(gDb_tRamSpeedMaxRail.boTurretInSpeedZone4DegForBasket == TRUE && gDb_tRamCanSensorC0.i16EncodeurTurret1Angle<0 && boBaskestRightSide == FALSE)))
	{
		boAuthorise4DegTrans = TRUE;
		boAuthorise2DegTrans = FALSE;
		boAuthorise6DegTrans = FALSE;
		boAuthoriseHigher6DegTrans = FALSE;
	}

//Cas [4° < x <= 6°]
	else if(gDb_tRamSpeedMaxRail.boSlopeCaseLess6Deg == TRUE
	&& (gDb_tRamEcuC0RcvFromC1.boEntryTelescopeFdcSensor == TRUE || gDb_tRamData4C0RcvFromC1.boValidTelescopeSectorSlope == TRUE || gDb_tRamData4C0RcvFromC1.boValidTelescopeFirstSectorSlope == TRUE)
	&&	gDb_tRamEcuC0RcvFromC1.boBasketInCentrerPos == TRUE
//	&& (gDb_tRamEcuC0RcvFromC1.boTurretInRearCenterPos == TRUE || gDb_tRamEcuC0RcvFromC1.boTurretInFrontCenterPos == TRUE))
	&& (gDb_tRamSpeedMaxRail.boTurretInSpeedZone6Deg == TRUE || gDb_tRamSpeedMaxRail.boTurretInSpeedZone6DegForBasket == TRUE
		|| gDb_tRamEcuC0RcvFromC1.boTurretInRearCenterPos == TRUE || gDb_tRamEcuC0RcvFromC1.boTurretInFrontCenterPos == TRUE))
	{
		boAuthorise6DegTrans = TRUE;
		boAuthorise2DegTrans = FALSE;
		boAuthorise4DegTrans = FALSE;
		boAuthoriseHigher6DegTrans = FALSE;
	}
//Cas > 6°
	else if(gDb_tRamSpeedMaxRail.boSlopeCaseHigher6Deg == TRUE &&
	(gDb_tRamEcuC0RcvFromC1.boTurretInRearCenterPos == TRUE || gDb_tRamEcuC0RcvFromC1.boTurretInFrontCenterPos == TRUE) &&
	gDb_tRamEcuC0RcvFromC1.boBasketInCentrerPos == TRUE && gDb_tRamEcuC0RcvFromC1.boEntryTelescopeFdcSensor == TRUE && gDb_tRam48XsInputsC0.boLowSectorPendularSensor == TRUE)
	{
		boAuthorise6DegTrans = FALSE;
		boAuthorise2DegTrans = FALSE;
		boAuthorise4DegTrans = FALSE;
		boAuthoriseHigher6DegTrans = TRUE;
	}

	else
	{
		boAuthorise2DegTrans = FALSE;
		boAuthorise4DegTrans = FALSE;
		boAuthorise6DegTrans = FALSE;
		boAuthoriseHigher6DegTrans = FALSE;
	}

	if(boAuthorise2DegTrans == TRUE
	|| boAuthorise4DegTrans == TRUE
	|| boAuthorise6DegTrans == TRUE
	|| boAuthoriseHigher6DegTrans == TRUE)
		gDb_tRamSpeedMaxRail.boAuthoriseGlobalLowSpeed = TRUE;
	else
		gDb_tRamSpeedMaxRail.boAuthoriseGlobalLowSpeed = FALSE;

//NEOTEC IG STRUKTON FIN

/*boLowSpeedCondition*/
	static TBoolean	boLowSpeedCondition = FALSE;
	if(boModeWorkAuthorized == TRUE
	&& ((gDb_tRamSpeedMaxRail.boSlopeLowerLowSpeedTresh == TRUE && gDb_tRamEcuC0RcvFromC1.boEntryTelescopeFdcSensor == TRUE && gDb_tNvOptionsC0.boAddPerformanceFunc == FALSE)
		|| gDb_tRamSpeedMaxRail.boAuthoriseGlobalLowSpeed == TRUE)
	&& gDb_tRamEcuC0RcvFromC1.boDeltaArmInLowerZone == TRUE
	&& ((boArmLowZoneForLowSpeed == TRUE && gDb_tNvOptionsC0.boAddPerformanceFunc == FALSE) || gDb_tRamData4C0RcvFromC1.boPerformAutoriseTransArrow == TRUE)

	&& boPositionTurretOk == TRUE
	&& (boPositionBasketOk == TRUE || boFrancePositionBasketOk == TRUE)

	&& boGlobalAuthorizeTrans ==TRUE)
		boLowSpeedCondition = TRUE;
	else
		boLowSpeedCondition = FALSE;

/*boHightSpeedCondition*/
	static TBoolean	boHightSpeedCondition = FALSE;

	if(boModeWorkAuthorized == TRUE
	&& (gDb_tRamEcuC0RcvFromC1.boBoomArmFoldedSensor || gDb_tRamEcuC0RcvFromC1.boFoldedArrowArmZone)
	&& gDb_tRamEcuC0RcvFromC1.boEntryTelescopeFdcSensor
	&& (gDb_tRamEcuC0RcvFromC1.boTurretInRearCenterPos || gDb_tRamEcuC0RcvFromC1.boTurretInFrontCenterPos)
	/*V2*/
	&& gDb_tRamEcuC0RcvFromC1.boBasketInCentrerPos == TRUE
//NEOTEC IG Clé Grande vitesse CORRECTION
//	&& gDb_tRamEcuInputsC0.eAutorisationHighSpeedKeyState == TRUE
//NEOTEC IG Clé grande vitesse CORRECTION
	&& (gDb_tRamEcuC0RcvFromC1.boDeltaArmFoldedSensor || gDb_tRamEcuC0RcvFromC1.boFoldedDeltaArmZone)
	&& (gDb_tRam48XsInputsC0.boLowSectorPendularSensor == FALSE || gDb_tRamEcuC0RcvFromC1.boFoldedMastMeasure == FALSE) // add 05.07.2019
	&& gDb_tRamSpeedMaxRail.boSlopeOverHighSpeedTresh == TRUE // Devers <= 6.8°
	&& gDb_tRamEcuC0RcvFromC1.boGeneratorOn == FALSE //GREEN
	&& boGlobalAuthorizeTrans ==TRUE)
		boHightSpeedCondition = TRUE;
	else
		boHightSpeedCondition = FALSE;

/*boAccesSiteSpeedCondition*/
	if((boModeWorkAuthorized == TRUE || (gDb_tRamEcuInputsC0.eAbutmentTurretCentredSideState == GE_DI_ON && gDb_tRamEcuInputsC0.eWorkKeyCentredState == GE_DI_ON)) // add 05.07.2019
	&& (gDb_tRamEcuC0RcvFromC1.boBoomArmFoldedSensor || gDb_tRamEcuC0RcvFromC1.boFoldedArrowArmZone)
	&& gDb_tRamEcuC0RcvFromC1.boEntryTelescopeFdcSensor
	&& (gDb_tRamEcuC0RcvFromC1.boTurretInRearCenterPos || gDb_tRamEcuC0RcvFromC1.boTurretInFrontCenterPos)
	/*V2*/
	&& (gDb_tRamEcuC0RcvFromC1.boBasketInCentrerPos == TRUE || boTranslationWithDefaultBasket == TRUE)
//NEOTEC IG Clé Grande vitesse CORRECTION
//	&& gDb_tRamEcuInputsC0.eAutorisationHighSpeedKeyState == TRUE
//NEOTEC IG Clé grande vitesse CORRECTION
	&& gDb_tRamEcuC0RcvFromC1.boFoldedMastMeasure == TRUE
	&& gDb_tRamData4C0RcvFromC1.boMastPanthoFoldedSNCF == TRUE//MAT SNCF REPLIE OU OPTION A 0
	&& (gDb_tRamEcuC0RcvFromC1.boDeltaArmFoldedSensor || gDb_tRamEcuC0RcvFromC1.boFoldedDeltaArmZone)
    && gDb_tRam48XsInputsC0.boLowSectorPendularSensor == TRUE
	&& gDb_tRamEcuC0RcvFromC1.boGeneratorOn == FALSE //GREEN
	&& boGlobalAuthorizeTrans ==TRUE)
		boAccesSiteSpeedCondition = TRUE;
	else
		boAccesSiteSpeedCondition = FALSE;


/* check if test brake page is active on screen*/
	if(gDb_tRamEvision7C0.bogOffTrackTestBrakeActivated == TRUE
	&& boDefaultActived == FALSE
	&& boNoMovementsRunning == TRUE
	&&(boAccesSiteSpeedCondition == TRUE || boHightSpeedCondition == TRUE))
	{
		gDb_tRamGeneralC0.eRailSpeedMode = GE_BRAKE_TEST_SPEED_RUNNING;
	}
	else if(gDb_tRamEvision7C0.bogOffTrackRunInBrakeActivated == TRUE
	&& boDefaultActived == FALSE
	&& boNoMovementsRunning == TRUE
	&&(boAccesSiteSpeedCondition == TRUE || boHightSpeedCondition == TRUE))
	{
		gDb_tRamGeneralC0.eRailSpeedMode = GE_BREAK_IN_BRAKE_SPEED_RUNNING;
	}
/* check if critical cycle brake is exceeded*/
	else if((gDb_tRamBrakeTest.boCycleBrakeOverCriticalNumber == TRUE
	&& boDefaultActived == FALSE
	&& boNoMovementsRunning == TRUE
	&& (boAccesSiteSpeedCondition == TRUE || boHightSpeedCondition == TRUE || boLowSpeedCondition == TRUE )
	)
	||
	(
	(boDefaultActived == TRUE || boTranslationWithDefaultBasket == TRUE)
	&& boNoMovementsRunning == TRUE
	//&& boTranslationWithDefaultBasket == TRUE//NEOTEC IG EVO
	&& (boAccesSiteSpeedCondition == TRUE || boHightSpeedCondition == TRUE))
	)
	{
		gDb_tRamGeneralC0.eRailSpeedMode = GE_LOW_SPEED_BRAKE_TEST_NEEDED;
	}
/* check condition for access site mode*/
	else if(boAccesSiteSpeedCondition == TRUE

	&& boDefaultActived == FALSE
	&& boNoMovementsRunning == TRUE //20.08.2019
	&& gDb_tRamEcuInputsC0.eAutorisationHighSpeedKeyState == TRUE/*CORRECTION MEYKRATEC*/
	&& gDb_tRamBrakeTest.boCycleBrakeOverCriticalNumber == FALSE)
	{
		gDb_tRamGeneralC0.eRailSpeedMode = GE_ACCESS_SITE_MODE;
	}
/* check condition for high speed*/
	else if (boHightSpeedCondition == TRUE
	&& boDefaultActived == FALSE
	&& boNoMovementsRunning == TRUE //20.08.2019
	&& gDb_tRamEcuInputsC0.eAutorisationHighSpeedKeyState == TRUE/*CORRECTION MEYKRATEC*/
	&& gDb_tRamBrakeTest.boCycleBrakeOverCriticalNumber == FALSE)
	{
		gDb_tRamGeneralC0.eRailSpeedMode = GE_HIGH_SPEED;
	}
	// Check condition for low speed
	else if((boLowSpeedCondition == TRUE ||
		((boAccesSiteSpeedCondition == TRUE || boHightSpeedCondition == TRUE) && gDb_tRamEcuInputsC0.eAutorisationHighSpeedKeyState == FALSE))/*CORRECTION MEYKRATEC*/
	&& boDefaultActived == FALSE
	&& boNoMovementsRunning == TRUE
	&& gDb_tRamBrakeTest.boCycleBrakeOverCriticalNumber == FALSE)
	{
		gDb_tRamGeneralC0.eRailSpeedMode = GE_LOW_SPEED;
	}
/* else no speed condition are detected*/
	else
	{
		gDb_tRamGeneralC0.eRailSpeedMode = GE_NO_SPEED_MAX_RAIL_MODE;
	}

	gDb_tRamSpeedMaxRail.eRailSpeedMaxMode = gDb_tRamGeneralC0.eRailSpeedMode;


	if ((gDb_tRamGeneralC0.eRailSpeedMode == GE_BRAKE_TEST_SPEED_RUNNING
		|| gDb_tRamGeneralC0.eRailSpeedMode == GE_BREAK_IN_BRAKE_SPEED_RUNNING
	    || (gDb_tRamGeneralC0.eRailSpeedMode == GE_LOW_SPEED_BRAKE_TEST_NEEDED &&(boAccesSiteSpeedCondition == TRUE || boHightSpeedCondition == TRUE))
	    || gDb_tRamGeneralC0.eRailSpeedMode == GE_ACCESS_SITE_MODE
	    || gDb_tRamGeneralC0.eRailSpeedMode == GE_HIGH_SPEED
		)
	&&	boDefaultActived == FALSE
	)
		gCsr_tData4C0SendToC1.boMotorAccelerated = TRUE;
	else
		gCsr_tData4C0SendToC1.boMotorAccelerated = FALSE;


	gDb_tRamSpeedMaxRail.boKinematicTrainAllow = (boLowSpeedCondition == TRUE || boHightSpeedCondition == TRUE || boAccesSiteSpeedCondition == TRUE);

	//-----------------------------------------------------------------------------------------------------
	// Determine prevention for limit speed according to speed mode
	//-----------------------------------------------------------------------------------------------------
	/*check limit speed of GE_ACCESS_SITE_MODE*/
	if(gDb_tRamGeneralC0.eRailSpeedMode == GE_ACCESS_SITE_MODE &&
	((gDb_tRamEcuInputsC0.i32OscillantAxleFrequency > gDb_tNvParamSpeedMaxRail.u16PreventLimitSpeedAccesSiteSpeed) ||
	(gDb_tRamEcuInputsC0.i32FixeAxleFrequency > gDb_tNvParamSpeedMaxRail.u16PreventLimitSpeedAccesSiteSpeed))
	&& gDb_tRamSpeedMaxRail.boLimitSpeedAccesSiteSpeedExceeded == FALSE)
		gDb_tRamSpeedMaxRail.boPreventLimitSpeedAccesSiteSpeed = TRUE;
	else
		gDb_tRamSpeedMaxRail.boPreventLimitSpeedAccesSiteSpeed = FALSE;

	/*check limit speed of GE_HIGH_SPEED*/
	if(gDb_tRamGeneralC0.eRailSpeedMode == GE_HIGH_SPEED &&
	((gDb_tRamEcuInputsC0.i32OscillantAxleFrequency > gDb_tNvParamSpeedMaxRail.u16PreventLimitSpeedHighSpeed) ||
	(gDb_tRamEcuInputsC0.i32FixeAxleFrequency > gDb_tNvParamSpeedMaxRail.u16PreventLimitSpeedHighSpeed))
	&& gDb_tRamSpeedMaxRail.boLimitSpeedHighSpeedExceeded == FALSE)
		gDb_tRamSpeedMaxRail.boPreventLimitSpeedHighSpeed = TRUE;
	else
		gDb_tRamSpeedMaxRail.boPreventLimitSpeedHighSpeed = FALSE;

	/*check limit speed of GE_LOW_SPEED*/
	if(gDb_tRamGeneralC0.eRailSpeedMode == GE_LOW_SPEED &&
	((gDb_tRamEcuInputsC0.i32OscillantAxleFrequency > gDb_tNvParamSpeedMaxRail.u16PreventLimitSpeedLowSpeed) ||
	(gDb_tRamEcuInputsC0.i32FixeAxleFrequency > gDb_tNvParamSpeedMaxRail.u16PreventLimitSpeedLowSpeed))
	&& gDb_tRamSpeedMaxRail.boLimitSpeedLowSpeedExceeded == FALSE)
		gDb_tRamSpeedMaxRail.boPreventLimitSpeedLowSpeed = TRUE;
	else
		gDb_tRamSpeedMaxRail.boPreventLimitSpeedLowSpeed = FALSE;

	/*check limit speed of GE_LOW_SPEED_BRAKE_TEST*/
	if(gDb_tRamGeneralC0.eRailSpeedMode == GE_LOW_SPEED_BRAKE_TEST_NEEDED &&
	((gDb_tRamEcuInputsC0.i32OscillantAxleFrequency > gDb_tNvParamSpeedMaxRail.u16PreventSpeedLowSpeedBrakeTest) ||
	(gDb_tRamEcuInputsC0.i32FixeAxleFrequency > gDb_tNvParamSpeedMaxRail.u16PreventSpeedLowSpeedBrakeTest))
	&& gDb_tRamSpeedMaxRail.boLimitSpeedLowSpeedBrakeTestExced == FALSE)
		gDb_tRamSpeedMaxRail.boPreventLimitLowSpeedBrakeTest = TRUE;
	else
		gDb_tRamSpeedMaxRail.boPreventLimitLowSpeedBrakeTest = FALSE;

	/*check if a prevention limit of speed are exceeding*/
	if(gDb_tRamSpeedMaxRail.boPreventLimitSpeedAccesSiteSpeed == TRUE
	|| gDb_tRamSpeedMaxRail.boPreventLimitSpeedHighSpeed == TRUE
	|| gDb_tRamSpeedMaxRail.boPreventLimitSpeedLowSpeed == TRUE
	|| gDb_tRamSpeedMaxRail.boPreventLimitLowSpeedBrakeTest == TRUE)
		gDb_tRamSpeedMaxRail.boPreventLimitSpeedExceeding = TRUE;
	else
		gDb_tRamSpeedMaxRail.boPreventLimitSpeedExceeding = FALSE;

	//-----------------------------------------------------------------------------------------------------
	// Determine limit speed according to speed mode
	//-----------------------------------------------------------------------------------------------------
	/*check limit speed of GE_ACCESS_SITE_MODE*/
	if(gDb_tRamGeneralC0.eRailSpeedMode == GE_ACCESS_SITE_MODE &&
	((gDb_tRamEcuInputsC0.i32OscillantAxleFrequency > gDb_tNvParamSpeedMaxRail.u16LimitSpeedAccesSiteSpeed) ||
	(gDb_tRamEcuInputsC0.i32FixeAxleFrequency > gDb_tNvParamSpeedMaxRail.u16LimitSpeedAccesSiteSpeed)))
		gDb_tRamSpeedMaxRail.boLimitSpeedAccesSiteSpeedExceeded = TRUE;
	else
		gDb_tRamSpeedMaxRail.boLimitSpeedAccesSiteSpeedExceeded = FALSE;

	/*check limit speed of GE_HIGH_SPEED*/
	if(gDb_tRamGeneralC0.eRailSpeedMode == GE_HIGH_SPEED &&
	((gDb_tRamEcuInputsC0.i32OscillantAxleFrequency > gDb_tNvParamSpeedMaxRail.u16LimitSpeedHighSpeed) ||
	(gDb_tRamEcuInputsC0.i32FixeAxleFrequency > gDb_tNvParamSpeedMaxRail.u16LimitSpeedHighSpeed)))
		gDb_tRamSpeedMaxRail.boLimitSpeedHighSpeedExceeded = TRUE;
	else
		gDb_tRamSpeedMaxRail.boLimitSpeedHighSpeedExceeded = FALSE;

	/*check limit speed of GE_LOW_SPEED*/
	if(gDb_tRamGeneralC0.eRailSpeedMode == GE_LOW_SPEED &&
	((gDb_tRamEcuInputsC0.i32OscillantAxleFrequency > gDb_tNvParamSpeedMaxRail.u16LimitSpeedLowSpeed) ||
	(gDb_tRamEcuInputsC0.i32FixeAxleFrequency > gDb_tNvParamSpeedMaxRail.u16LimitSpeedLowSpeed)))
		gDb_tRamSpeedMaxRail.boLimitSpeedLowSpeedExceeded = TRUE;
	else
		gDb_tRamSpeedMaxRail.boLimitSpeedLowSpeedExceeded = FALSE;

	/*check limit speed of GE_LOW_SPEED_BRAKE_TEST*/
	if(gDb_tRamGeneralC0.eRailSpeedMode == GE_LOW_SPEED_BRAKE_TEST_NEEDED &&
	((gDb_tRamEcuInputsC0.i32OscillantAxleFrequency > gDb_tNvParamSpeedMaxRail.u16LimitSpeedLowSpeedBrakeTest) ||
	(gDb_tRamEcuInputsC0.i32FixeAxleFrequency > gDb_tNvParamSpeedMaxRail.u16LimitSpeedLowSpeedBrakeTest)))
		gDb_tRamSpeedMaxRail.boLimitSpeedLowSpeedBrakeTestExced = TRUE;
	else
		gDb_tRamSpeedMaxRail.boLimitSpeedLowSpeedBrakeTestExced = FALSE;

	if(boBloErrGetErrStaBit(&gErr_tSpecificErrorC0_2, DM_OVERSPEED_PV_FAULT) == TRUE
	|| boBloErrGetErrStaBit(&gErr_tSpecificErrorC0_3, DM_OVERSPEED_GV_FAULT) == TRUE
	)
		gDb_tRamSpeedMaxRail.boLitmitSpeedExceeded = TRUE;
	else
		gDb_tRamSpeedMaxRail.boLitmitSpeedExceeded = FALSE;
}
