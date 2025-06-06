//==================================================================================================
//! @file LimitWorkEnvelope.c
//! @brief limitation of the work envelope
//! @see Target for ...
//! @section app
//! @subsection
//! @author Fabrice Cordary (FC)
//! @created 18.01.2019 HYDAC/FC
//! @history: #- CK 18.01.2019 HYDAC/FC creation
//! copyrights (c) all rights reserved by HYDAC International
//=================================================================================================

#include "LimitWorkEnvelope.h"

//-----------------------------------------------------------------------------------------------------
//! @brief limitation of the work envelope (main function)
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 18.01.2019 HYDAC/FC
//!
//! @change
//!
//! @care
//! @todo
//
//10.05.2021 NEOTEC/IG 			Nettoyage du code, suppression des lignes en commentaire
//
//-----------------------------------------------------------------------------------------------------
TVoid vLimitWorkEnvelope(TVoid)
{

	/* If simulation mode is enabled then use the simulation variables instead of the real inputs*/
	if (gDb_tRamLimitWorkEnvelopeC1.boEnableSimuMode){
		vLimitWorkEnvelopeIntern(
						gDb_tRamLimitWorkEnvelopeC1.u16SimuTelescopePositionSensor,
						gDb_tRamLimitWorkEnvelopeC1.i16SimuDeltaArmAngularSensor,
						gDb_tRamLimitWorkEnvelopeC1.i16SimuArrowArmAngularSensor);
	}
	/* Else call the function with the real inputs*/
	else{
		vLimitWorkEnvelopeIntern(
						gDb_tRamTelescopeCanC1.u16LenghtTelescope1,
						gDb_tRamEcuInputsC1.i16DeltaArmAngularSensorValue,
						gDb_tRamEcuInputsC1.i16ArrowArmAngularSensorValue);
	}
}

//-----------------------------------------------------------------------------------------------------
//! @brief limitation of the work envelope (internal function used to swtich between simulation and real inputs)
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 18.01.2019 HYDAC/FC
//!
//! @change  04.02.2020 HYDAC/CK	- change name parameter au16TelescopeLimitCurveSlopeAngles to au16SlopeTelescModeCurveSlopeAngles
//!									- change name parameter au16TelescopeLimitCurveStrokeValues to au16SlopeTelescModeCurveTelescLenghtï¿½
//!
//! @care
//! @todo
//-----------------------------------------------------------------------------------------------------
TVoid vLimitWorkEnvelopeIntern(TUint16 iTelescopePositionSensor, TInt16 iDeltaArmAngularSensor, TInt16 iArrowArmAngularSensor)
{

	/* Reset the stop all movement variable*/
	gDb_tRamLimitWorkEnvelopeC1.boStopAllMovements = FALSE;

/*-----------------------------------------------------------------------------------------------------*/
/* Telescope limitation*/
/*-----------------------------------------------------------------------------------------------------*/

/*Multi Gage*/
/*Modification du téléscope par rapport au déver*/
	TUint16 SlopeAngleLimited = gDb_tRamEcuC1RcvFromC0.u16SlopeAngle;
	if (SlopeAngleLimited < gDb_tNvParamLimitWorkEnvelopeC1.au16SlopeTelescModeCurveSlopeAngles[0])
		SlopeAngleLimited = gDb_tNvParamLimitWorkEnvelopeC1.au16SlopeTelescModeCurveSlopeAngles[0];
	TUint8 LastIndex = (sizeof(gDb_tNvParamLimitWorkEnvelopeC1.au16SlopeTelescModeCurveSlopeAngles) / sizeof(gDb_tNvParamLimitWorkEnvelopeC1.au16SlopeTelescModeCurveSlopeAngles[0])) - 1;
	if (SlopeAngleLimited > gDb_tNvParamLimitWorkEnvelopeC1.au16SlopeTelescModeCurveSlopeAngles[LastIndex])
		SlopeAngleLimited = gDb_tNvParamLimitWorkEnvelopeC1.au16SlopeTelescModeCurveSlopeAngles[LastIndex];
	/*Limitation du téléscope par rapport à la flèche*/
	TUint16 ArrowArmLimited = (gDb_tRamEcuInputsC1.i16ArrowArmAngularSensorValue/10);
	gDb_tNvMemoryC1.u16VarMemory4 = ArrowArmLimited;
	if (ArrowArmLimited < gDb_tNvParamLimitWorkEnvelopeC1.au16ArmTelescModeCurveArmAngles[0])
		ArrowArmLimited = gDb_tNvParamLimitWorkEnvelopeC1.au16ArmTelescModeCurveArmAngles[0];
	TUint8 LastIndexArrow = (sizeof(gDb_tNvParamLimitWorkEnvelopeC1.au16ArmTelescModeCurveArmAngles) / sizeof(gDb_tNvParamLimitWorkEnvelopeC1.au16ArmTelescModeCurveArmAngles[0])) - 1;
	if (ArrowArmLimited > gDb_tNvParamLimitWorkEnvelopeC1.au16ArmTelescModeCurveArmAngles[LastIndexArrow])
		ArrowArmLimited = gDb_tNvParamLimitWorkEnvelopeC1.au16ArmTelescModeCurveArmAngles[LastIndexArrow];

	if(gDb_tNvParamLimitWorkEnvelopeC1.boSlopeTelescopeMode == TRUE)
	{
		/* Determine the telescope stroke threshold from the look up table*/
		gDb_tRamLimitWorkEnvelopeC1.u16TelescopeLimitStrokeThres = (TUint16)i16GetCurveY(
				(TInt16)SlopeAngleLimited,
				9,
				gDb_tNvParamLimitWorkEnvelopeC1.au16SlopeTelescModeCurveSlopeAngles,
				gDb_tNvParamLimitWorkEnvelopeC1.au16SlopeTelescModeCurveTelescLenght
				);
	}
	else
	{
		/* Determine the telescope stroke threshold from the look up table*/
		gDb_tRamLimitWorkEnvelopeC1.u16TelescopeLimitStrokeThres = (TUint16)i16GetCurveY(
				(TInt16)ArrowArmLimited,
				9,
				gDb_tNvParamLimitWorkEnvelopeC1.au16ArmTelescModeCurveArmAngles,
				gDb_tNvParamLimitWorkEnvelopeC1.au16ArmTelescModeCurveTelescLenght
				);
	}

	/* If the telescope position reach the stroke threshold then stop the out movement*/
	if (iTelescopePositionSensor >= gDb_tRamLimitWorkEnvelopeC1.u16TelescopeLimitStrokeThres)
		gDb_tRamLimitWorkEnvelopeC1.boStopTelescopeOut = TRUE;
	else
		gDb_tRamLimitWorkEnvelopeC1.boStopTelescopeOut = FALSE;

	/* Check if the telescope is in the critical zone (threshold with hysteresis)*/
	if (iTelescopePositionSensor >= gDb_tRamLimitWorkEnvelopeC1.u16TelescopeLimitStrokeThres + gDb_tNvParamLimitWorkEnvelopeC1.u16TelescopeLimitCriticZoneThresRel)
		gDb_tRamLimitWorkEnvelopeC1.boTelescopeInCriticalZone = TRUE;
	else if (iTelescopePositionSensor <= gDb_tRamLimitWorkEnvelopeC1.u16TelescopeLimitStrokeThres
	+ gDb_tNvParamLimitWorkEnvelopeC1.u16TelescopeLimitCriticZoneThresRel + gDb_tNvParamLimitWorkEnvelopeC1.i16TelescopeLimitCriticZoneHystRel)
		gDb_tRamLimitWorkEnvelopeC1.boTelescopeInCriticalZone = FALSE;

	/* If the telescope reaches the critical zone then stop all movements*/
	if (gDb_tRamLimitWorkEnvelopeC1.boTelescopeInCriticalZone == TRUE)
		gDb_tRamLimitWorkEnvelopeC1.boStopAllMovements = TRUE;

	if(gDb_tRamLimitWorkEnvelopeC1.u16TelescopeLimitStrokeThres>0)
	{
		gCsr_tMsg12C1SendToEvision7.u16gTelescopeLengthPercentile = ((TUint16)iTelescopePositionSensor * 100) / gDb_tRamLimitWorkEnvelopeC1.u16TelescopeLimitStrokeThres;
		if (gCsr_tMsg12C1SendToEvision7.u16gTelescopeLengthPercentile >=100)
			gCsr_tMsg12C1SendToEvision7.u16gTelescopeLengthPercentile = 100;
	}
	else
		gCsr_tMsg12C1SendToEvision7.u16gTelescopeLengthPercentile = 100;


/*-----------------------------------------------------------------------------------------------------*/
/* Determine the delta and arrow arm positions*/
/*-----------------------------------------------------------------------------------------------------*/
	/* Check if the delta arm is in the upper zone (threshold with hysteresis)*/
	if (iDeltaArmAngularSensor >= gDb_tNvParamLimitWorkEnvelopeC1.i16DeltaArmLimitUpperZoneThresAbs)
		gDb_tRamLimitWorkEnvelopeC1.boDeltaArmInUpperZone = TRUE;
	else if (iDeltaArmAngularSensor <= gDb_tNvParamLimitWorkEnvelopeC1.i16DeltaArmLimitUpperZoneThresAbs + gDb_tNvParamLimitWorkEnvelopeC1.i16DeltaArmLimitUpperZoneHystRel)
		gDb_tRamLimitWorkEnvelopeC1.boDeltaArmInUpperZone = FALSE;

	/* Check if the delta arm is in the critical zone (threshold with hysteresis)*/
	if (iDeltaArmAngularSensor >= gDb_tNvParamLimitWorkEnvelopeC1.i16DeltaArmLimitUpperZoneThresAbs + gDb_tNvParamLimitWorkEnvelopeC1.i16DeltaArmLimitCriticZoneThresRel)
		gDb_tRamLimitWorkEnvelopeC1.boDeltaArmInCriticalZone = TRUE;
	else if (iDeltaArmAngularSensor <= gDb_tNvParamLimitWorkEnvelopeC1.i16DeltaArmLimitUpperZoneThresAbs
	+ gDb_tNvParamLimitWorkEnvelopeC1.i16DeltaArmLimitCriticZoneThresRel + gDb_tNvParamLimitWorkEnvelopeC1.i16DeltaArmLimitCriticZoneHystRel)
		gDb_tRamLimitWorkEnvelopeC1.boDeltaArmInCriticalZone = FALSE;

	/* Check if the arrow arm is in the lower zone (threshold with hysteresis)*/
	if (iArrowArmAngularSensor <= gDb_tNvParamLimitWorkEnvelopeC1.i16ArrowArmLimitLowerZoneThresAbs)
		gDb_tRamLimitWorkEnvelopeC1.boArrowArmInLowerZone = TRUE;
	else if (iArrowArmAngularSensor >= gDb_tNvParamLimitWorkEnvelopeC1.i16ArrowArmLimitLowerZoneThresAbs + gDb_tNvParamLimitWorkEnvelopeC1.i16ArrowArmLimitLowerZoneHystRel)
		gDb_tRamLimitWorkEnvelopeC1.boArrowArmInLowerZone = FALSE;

	/* Check if the arrow arm is in the critical zone (threshold with hysteresis)*/
	if (iArrowArmAngularSensor <= gDb_tNvParamLimitWorkEnvelopeC1.i16ArrowArmLimitLowerZoneThresAbs + gDb_tNvParamLimitWorkEnvelopeC1.i16ArrowArmLimitCriticZoneThresRel)
		gDb_tRamLimitWorkEnvelopeC1.boArrowArmInCriticalZone = TRUE;
	else if (iArrowArmAngularSensor >= gDb_tNvParamLimitWorkEnvelopeC1.i16ArrowArmLimitLowerZoneThresAbs
	+ gDb_tNvParamLimitWorkEnvelopeC1.i16ArrowArmLimitCriticZoneThresRel + gDb_tNvParamLimitWorkEnvelopeC1.i16ArrowArmLimitCriticZoneHystRel)
		gDb_tRamLimitWorkEnvelopeC1.boArrowArmInCriticalZone = FALSE;

//NEOTEC IG STRUKTON DEBUT
	//-----------------------------------------------------------------------------------------------------
	// Determine arrow arm positions for High perform function
	//-----------------------------------------------------------------------------------------------------

	if(((gDb_tRamData4C1RcvFromC0.boSlopeCaseLess2Deg == TRUE || gDb_tRamData4C1RcvFromC0.boSlopeCaseLess4Deg == TRUE)
		&& (iArrowArmAngularSensor <= gDb_tNvParamLimitWorkEnvelopeC1.u16ArrowArmPerformLowUpperSector - gDb_tNvParamLimitWorkEnvelopeC1.u16ArrowArmPerformSectorHyst))
	||
	(gDb_tRamData4C1RcvFromC0.boSlopeCaseLess6Deg == TRUE
		&& (iArrowArmAngularSensor <= gDb_tNvParamLimitWorkEnvelopeC1.u16ArrowArmPerformSectorUpperCritic - gDb_tNvParamLimitWorkEnvelopeC1.u16ArrowArmPerformSectorHyst))
	||
	(gDb_tRamData4C1RcvFromC0.boSlopeCaseHigher6Deg == TRUE && gCsr_tData2RdvFromC1.boFoldedArrowArmZone == TRUE))
			gDb_tRamMvtEndStopC1.boPerformAutoriseTransSlopeArrow = TRUE;

	if(((gDb_tRamData4C1RcvFromC0.boSlopeCaseLess2Deg == TRUE || gDb_tRamData4C1RcvFromC0.boSlopeCaseLess4Deg == TRUE)
		&& (iArrowArmAngularSensor > gDb_tNvParamLimitWorkEnvelopeC1.u16ArrowArmPerformLowUpperSector))
	||
	(gDb_tRamData4C1RcvFromC0.boSlopeCaseLess6Deg == TRUE && gDb_tRamData4C1RcvFromC0.boSlopeCaseLess4Deg == FALSE && (iArrowArmAngularSensor > gDb_tNvParamLimitWorkEnvelopeC1.u16ArrowArmPerformSectorUpperCritic))
	||
	(gDb_tRamData4C1RcvFromC0.boSlopeCaseHigher6Deg == TRUE && gCsr_tData2RdvFromC1.boFoldedArrowArmZone == FALSE))
			gDb_tRamMvtEndStopC1.boPerformAutoriseTransSlopeArrow = FALSE;

//NEOTEC IG STRUKTON FIN

	//-----------------------------------------------------------------------------------------------------
	// Delta arm limitation
	//-----------------------------------------------------------------------------------------------------
	// Check if the slope is high (threshold with hysteresis)
	if (gDb_tRamEcuC1RcvFromC0.u16SlopeAngle >= gDb_tNvParamLimitWorkEnvelopeC1.u16DeltaArmLimitSlopeHighThresAbs)
		gDb_tRamLimitWorkEnvelopeC1.boSlopeIsHigh = TRUE;
	else if (gDb_tRamEcuC1RcvFromC0.u16SlopeAngle <= gDb_tNvParamLimitWorkEnvelopeC1.u16DeltaArmLimitSlopeHighThresAbs + gDb_tNvParamLimitWorkEnvelopeC1.i16DeltaArmLimitSlopeHighHystRel)
		gDb_tRamLimitWorkEnvelopeC1.boSlopeIsHigh = FALSE;

	/* If slope is high OR arrow arm is in lower zone !!!! modif lower zone => critical zone*/
	if (gDb_tRamLimitWorkEnvelopeC1.boSlopeIsHigh || gDb_tRamLimitWorkEnvelopeC1.boArrowArmInCriticalZone){

		/* If delta arm reaches the slow down zone then reduce the speed of the delta arm up movement*/
		if (iDeltaArmAngularSensor >= gDb_tNvParamLimitWorkEnvelopeC1.i16DeltaArmLimitUpperZoneThresAbs + gDb_tNvParamLimitWorkEnvelopeC1.i16DeltaArmLimitSlowZoneThresRel)
			gDb_tRamLimitWorkEnvelopeC1.boReduceSpeedDeltaArmUp = TRUE;
		else
			gDb_tRamLimitWorkEnvelopeC1.boReduceSpeedDeltaArmUp = FALSE;

		/* If delta arm reaches the upper zone then stop the delta arm up movement*/
		if (gDb_tRamLimitWorkEnvelopeC1.boDeltaArmInUpperZone == TRUE)
			gDb_tRamLimitWorkEnvelopeC1.boStopDeltaArmUp = TRUE;
		else
			gDb_tRamLimitWorkEnvelopeC1.boStopDeltaArmUp = FALSE;

		/* If delta arm reaches the critical zone the stop the all movements*/
		if (gDb_tRamLimitWorkEnvelopeC1.boDeltaArmInCriticalZone == TRUE)
			gDb_tRamLimitWorkEnvelopeC1.boStopAllMovements = TRUE;
	}
	/* Else there is no limitation for the delta arm*/
	else {
		gDb_tRamLimitWorkEnvelopeC1.boStopDeltaArmUp = FALSE;
		gDb_tRamLimitWorkEnvelopeC1.boReduceSpeedDeltaArmUp = FALSE;
		 }

/*-----------------------------------------------------------------------------------------------------*/
/* Arrow arm limitation*/
/*-----------------------------------------------------------------------------------------------------*/
	/* If delta arm is in the upper zone  !!!!! Modif upper zone => critical zone*/
	if (gDb_tRamLimitWorkEnvelopeC1.boDeltaArmInCriticalZone)
	{
		/* If arrow arm reaches the slow down zone then reduce the speed of the arrow arm down movement*/
		if (iArrowArmAngularSensor <= gDb_tNvParamLimitWorkEnvelopeC1.i16ArrowArmLimitLowerZoneThresAbs + gDb_tNvParamLimitWorkEnvelopeC1.i16ArrowArmLimitSlowZoneThresRel)
			gDb_tRamLimitWorkEnvelopeC1.boReduceSpeedArrowArmDown = TRUE;
		else
			gDb_tRamLimitWorkEnvelopeC1.boReduceSpeedArrowArmDown = FALSE;

		/* If arrow arm reaches the lower zone then stop the arrow arm down movement*/
		if (gDb_tRamLimitWorkEnvelopeC1.boArrowArmInLowerZone == TRUE)
			gDb_tRamLimitWorkEnvelopeC1.boStopArrowArmDown = TRUE;
		else
			gDb_tRamLimitWorkEnvelopeC1.boStopArrowArmDown = FALSE;

		/* If arrow arm reaches the critical zone the stop the all movements*/
		if (gDb_tRamLimitWorkEnvelopeC1.boArrowArmInCriticalZone == TRUE)
			gDb_tRamLimitWorkEnvelopeC1.boStopAllMovements = TRUE;
	}
	/* Else there is no limitation for the arrow arm*/
	else {
		gDb_tRamLimitWorkEnvelopeC1.boStopArrowArmDown = FALSE;
		gDb_tRamLimitWorkEnvelopeC1.boReduceSpeedArrowArmDown = FALSE;
		 }

}
