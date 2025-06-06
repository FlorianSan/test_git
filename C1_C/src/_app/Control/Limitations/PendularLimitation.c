//==================================================================================================
//! @file PendularLimitation.c
//! @brief Control limitation of pendular
//! @see Target for ...
//! @section app
//! @subsection
//! @author Christian Klein (CK)
//! @created 11.10.2018 HYDAC/CK
//! @history: #- CK 11.10.2018 HYDAC/CK interface created
//! copyrights (c) all rights reserved by HYDAC International
//=================================================================================================

#include "PendularLimitation.h"

//-----------------------------------------------------------------------------------------------------
//! @brief Control pendular function
//!
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 11.10.2018 HYDAC/CK
//! @change  20.03.2019 NEOTEC/FV	- Move Pendular Authorized in Translation
//! @change  10.04.2019 NEOTEC/FV	Change authorize with boStopAllMovementsNacellePost and not Ladder  portillon closed and boModeWorkAuthorized
//! @change  17.12.2019 HYDAC/CK	change provisional value of msg can gDb_tRamData4C1RcvFromC0.boSignal_0 to gDb_tRamData4C1RcvFromC0.boStopAggravantMovements
//!
//! @care
//! @todo
//
//10.05.2021 NEOTEC/IG 			Nettoyage du code, suppression des lignes en commentaire
//
//-----------------------------------------------------------------------------------------------------
TVoid vPendularLimitationControl(TVoid)
{
	if(gDb_tRamGeneralC1.boStopAllMovementsNacellePost == FALSE
	&& (gDb_tRamEcuC1RcvFromC0.boTranslationMovementIsSolicited == FALSE || gDb_tRamEcuC1RcvFromC0.eSelectedControlPost == GE_POST_RADIO)
	&& boOverloadActive == FALSE
//	&& (gDb_tRamEcuOutputsC1.u16EvPropGeneratorCommand == 0 || gDb_tRamGreenEffC1.boReloadWithGeneratorOn == TRUE)//GREEN
	&& boBloErrGetErrStaBit(&gErr_tSpecificErrorC1_2,DM_EV_BYPASS_FAULT) == FALSE
	&& boBloErrGetErrStaBit(&gErr_tSpecificErrorC1_2,DM_PVG_EV_TOR) == FALSE
	&& boCoreGetErrRestMode(RM_STOP_MOVE_LIMIT_ENVLP) == FALSE
	&& gDb_tRamMastMeasureC1.boStop_Movement_By_Mast == FALSE
	&& gDb_tRamEcuC1RcvFromC0.boStopMovementByBrakeTest == FALSE
	&& gDb_tRamEcuC1RcvFromC0.boStopMovementByBreakInBrake == FALSE)
	{
		gDb_tRamLimitMoveC1.boAutorizeUpPendular = TRUE;
		gDb_tRamLimitMoveC1.boAutorizeDownPendular = TRUE;
	}
	else
	{
		gDb_tRamLimitMoveC1.boAutorizeUpPendular = FALSE;
		gDb_tRamLimitMoveC1.boAutorizeDownPendular = FALSE;
	}

	if((gDb_tRamEcuC1RcvFromC0.boAuthorizeWork == FALSE 	&& gDb_tRam48XsInputsC1.boLowSectorPendularSensor == FALSE)
	|| gDb_tRamData4C1RcvFromC0.boStopAggravantMovements == TRUE
	|| (gDb_tRamMastMeasureC1.boContactMastAutorisationOfMvts == FALSE && gDb_tRamEcuInputsC1.eRadioPostSelectorState == GE_DI_OFF)//Mat SNCF
	)
	{
		gDb_tRamLimitMoveC1.boAutorizeUpPendular = FALSE;
	}
}
