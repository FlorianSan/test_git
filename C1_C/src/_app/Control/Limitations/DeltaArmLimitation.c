//==================================================================================================
//! @file DeltaArmLimitation.c
//! @brief Control limitation of Delta arm
//! @see Target for ...
//! @section app
//! @subsection
//! @author Christian Klein (CK)
//! @created 11.10.2018 HYDAC/CK
//! @history: #- CK 11.10.2018 HYDAC/CK interface created
//! copyrights (c) all rights reserved by HYDAC International
//=================================================================================================

#include "DeltaArmLimitation.h"

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
//! @change  29.01.2019 HYDAC/CK	add authorize with turret mode
//! @change  10.04.2019 NEOTEC/FV	Change authorize with boStopAllMovementsNacellePost and not Ladder  portillon closed and boModeWorkAuthorized
//! @change  17.12.2019 HYDAC/CK	change provisional value of msg can gDb_tRamData4C1RcvFromC0.boSignal_0 to gDb_tRamData4C1RcvFromC0.boStopAggravantMovements
//!
//! @care
//! @todo
//
//10.05.2021 NEOTEC/IG 			Nettoyage du code, suppression des lignes en commentaire
//
//-----------------------------------------------------------------------------------------------------
TVoid vDeltaArmLimitationControl(TVoid)
{
	gDb_tRamLimitMoveC1.boAutorizeUpDeltaArm = TRUE;
	gDb_tRamLimitMoveC1.boAutorizeDownDeltaArm = TRUE;

	/* check if stop delta arm up is detect with limit work envelope function*/
	if(gDb_tRamLimitWorkEnvelopeC1.boStopDeltaArmUp == TRUE)
	{
		gDb_tRamLimitMoveC1.boAutorizeUpDeltaArm = FALSE;
	}

	if(gDb_tRamEcuC1RcvFromC0.boAuthorizeWork == FALSE
	|| gDb_tRamData4C1RcvFromC0.boStopAggravantMovements == TRUE
	|| gDb_tRamMastMeasureC1.boContactMastAutorisationOfMvts == FALSE//Mat SNCF
	)
	{
		gDb_tRamLimitMoveC1.boAutorizeUpDeltaArm = FALSE;
	}


	/* check , if we are on restricted mode stop all movement by limit envelop function or portilon or ladder not close or transaltion is during*/
	if (boCoreGetErrRestMode(RM_STOP_MOVE_LIMIT_ENVLP)
	|| gDb_tRamGeneralC1.boStopAllMovementsNacellePost == TRUE
	|| gDb_tRamEcuC1RcvFromC0.boTranslationMovementIsSolicited == TRUE
	|| boOverloadActive == TRUE
//	|| (gDb_tRamEcuOutputsC1.u16EvPropGeneratorCommand !=0 && gDb_tRamGreenEffC1.boReloadWithGeneratorOn == FALSE)//GREEN
	|| boBloErrGetErrStaBit(&gErr_tSpecificErrorC1_2,DM_EV_BYPASS_FAULT) == TRUE
	|| boBloErrGetErrStaBit(&gErr_tSpecificErrorC1_2,DM_PVG_DELTA_FAULT) == TRUE
	|| gDb_tRamMastMeasureC1.boStop_Movement_By_Mast == TRUE
	|| gDb_tRamEcuC1RcvFromC0.boStopMovementByBrakeTest
	|| gDb_tRamEcuC1RcvFromC0.boStopMovementByBreakInBrake)
	{
		gDb_tRamLimitMoveC1.boAutorizeUpDeltaArm = FALSE;
		gDb_tRamLimitMoveC1.boAutorizeDownDeltaArm = FALSE;
	}

}
