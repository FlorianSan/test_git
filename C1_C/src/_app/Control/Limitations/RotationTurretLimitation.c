//==================================================================================================
//! @file RotationTurretLimitation.c
//! @brief Control limitation of rotation basket
//! @see Target for ...
//! @section app
//! @subsection
//! @author Christian Klein (CK)
//! @created 11.10.2018 HYDAC/CK
//! @history: #- CK 11.10.2018 HYDAC/CK interface created
//! copyrights (c) all rights reserved by HYDAC International
//=================================================================================================

#include "RotationTurretLimitation.h"

//-----------------------------------------------------------------------------------------------------
//! @brief Control pendular function
//!
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 11.10.2018 HYDAC/CK
//!
//! @change  08.04.2019 NEOTEC/FV	Change authorize with boStopAllMovementsNacellePost and not Ladder  portillon closed
//! @change  17.12.2019 HYDAC/CK	change provisional value of msg can gDb_tRamData4C1RcvFromC0.boSignal_0 to gDb_tRamData4C1RcvFromC0.boStopAggravantMovements
//!
//! @care
//! @todo
//
//10.05.2021 NEOTEC/IG 			Nettoyage du code, suppression des lignes en commentaire
//
//-----------------------------------------------------------------------------------------------------
TVoid vRotationTurretLimitationControl(TVoid)
{
	/*-----------------------------------------------------------------------------------------------------*/
	/* Authorize rotation turret clockwise*/
	/*-----------------------------------------------------------------------------------------------------*/
	if(gDb_tRamEcuC1RcvFromC0.boStopRotTurretClockwise == FALSE && gDb_tRamMvtEndStopC1.boStopRotTurretClockwise == FALSE
	&& gDb_tRamGeneralC1.boStopAllMovementsNacellePost == FALSE
	&& gDb_tRamEcuC1RcvFromC0.boTranslationMovementIsSolicited == FALSE
	&& boOverloadActive == FALSE
//	&& (gDb_tRamEcuOutputsC1.u16EvPropGeneratorCommand == 0 || gDb_tRamGreenEffC1.boReloadWithGeneratorOn == TRUE)//GREEN
	&& boBloErrGetErrStaBit(&gErr_tSpecificErrorC1_2,DM_EV_BYPASS_FAULT) == FALSE
	&& boBloErrGetErrStaBit(&gErr_tSpecificErrorC1_2,DM_PVG_EV_TOR) == FALSE
	&& boCoreGetErrRestMode(RM_STOP_MOVE_LIMIT_ENVLP) == FALSE
	&& gDb_tRamData4C1RcvFromC0.boStopAggravantMovements == FALSE
	&& gDb_tRamAutoStopC1.boStopTurretRotation == FALSE
	&& gDb_tRamMastMeasureC1.boStop_Movement_By_Mast == FALSE
	&& gDb_tRamEcuC1RcvFromC0.boStopMovementByBrakeTest == FALSE
	&& gDb_tRamEcuC1RcvFromC0.boStopMovementByBreakInBrake == FALSE)
	{
		gDb_tRamLimitMoveC1.boAutorizeRotTurretClkwise = TRUE;
	}
	else
	{
		gDb_tRamLimitMoveC1.boAutorizeRotTurretClkwise = FALSE;
	}


	/*-----------------------------------------------------------------------------------------------------*/
	/* Authorize rotation turret counter clockwise*/
	/*-----------------------------------------------------------------------------------------------------*/
	if(gDb_tRamEcuC1RcvFromC0.boStopRotTurretCounterClockwise == FALSE && gDb_tRamMvtEndStopC1.boStopRotTurretCounterClockwise == FALSE
	&& gDb_tRamGeneralC1.boStopAllMovementsNacellePost == FALSE
	&& gDb_tRamMastMeasureC1.boStop_Movement_By_Mast == FALSE
	&& boOverloadActive == FALSE
//	&& (gDb_tRamEcuOutputsC1.u16EvPropGeneratorCommand == 0 || gDb_tRamGreenEffC1.boReloadWithGeneratorOn == TRUE)//GREEN
	&& boBloErrGetErrStaBit(&gErr_tSpecificErrorC1_2,DM_EV_BYPASS_FAULT) == FALSE
	&& boBloErrGetErrStaBit(&gErr_tSpecificErrorC1_2,DM_PVG_EV_TOR) == FALSE
	&& boCoreGetErrRestMode(RM_STOP_MOVE_LIMIT_ENVLP) == FALSE
	&& gDb_tRamData4C1RcvFromC0.boStopAggravantMovements == FALSE
	&& gDb_tRamEcuC1RcvFromC0.boTranslationMovementIsSolicited == FALSE
	&& gDb_tRamAutoStopC1.boStopTurretRotation == FALSE
	&& gDb_tRamEcuC1RcvFromC0.boStopMovementByBrakeTest == FALSE
	&& gDb_tRamEcuC1RcvFromC0.boStopMovementByBreakInBrake == FALSE)
	{
		gDb_tRamLimitMoveC1.boAutorizeRotTurretCtClkwise = TRUE;
	}
	else
	{
		gDb_tRamLimitMoveC1.boAutorizeRotTurretCtClkwise = FALSE;
	}

}
