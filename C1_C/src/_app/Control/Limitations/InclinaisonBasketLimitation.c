//==================================================================================================
//! @file InclinaisonBasketLimitation.c
//! @brief Control limitation of inclinaison basket
//! @see Target for ...
//! @section app
//! @subsection
//! @author Christian Klein (CK)
//! @created 11.10.2018 HYDAC/CK
//! @history: #- CK 11.10.2018 HYDAC/CK interface created
//! copyrights (c) all rights reserved by HYDAC International
//=================================================================================================

#include "InclinaisonBasketLimitation.h"

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
//! @change  10.05.2019 NEOTEC/FV	Inclisnaison only if delta boom and Telescope folder
//!
//! @care
//! @todo
//
//10.05.2021 NEOTEC/IG 			Nettoyage du code, suppression des lignes en commentaire
//
//-----------------------------------------------------------------------------------------------------
TVoid vInclinaisonBasketLimitationControl(TVoid)
{
	if(gDb_tRamGeneralC1.boStopAllMovementsNacellePost == FALSE
	&& gDb_tRamEcuC1RcvFromC0.boTranslationMovementIsSolicited == FALSE
	&& (gDb_tRamEcuInputsC1.eFoldedDeltaArmSensorState == GE_DI_ON || gDb_tRamEcuInputsC1.eTurretPostSelectorState == GE_DI_ON)
	&& (gDb_tRamEcuInputsC1.eFoldedBoomArmSensorState == GE_DI_ON || gDb_tRamEcuInputsC1.eTurretPostSelectorState == GE_DI_ON)
	&& boOverloadActive == FALSE
//	&& (gDb_tRamEcuOutputsC1.u16EvPropGeneratorCommand == 0 || gDb_tRamGreenEffC1.boReloadWithGeneratorOn == TRUE)//GREEN
	&& boBloErrGetErrStaBit(&gErr_tSpecificErrorC1_2,DM_EV_BYPASS_FAULT) == FALSE
	&& boBloErrGetErrStaBit(&gErr_tSpecificErrorC1_2,DM_PVG_EV_TOR) == FALSE
	&& boCoreGetErrRestMode(RM_STOP_MOVE_LIMIT_ENVLP) == FALSE
	&& gDb_tRamMastMeasureC1.boStop_Movement_By_Mast == FALSE
	&& gDb_tRamEcuC1RcvFromC0.boStopMovementByBrakeTest == FALSE
	&& gDb_tRamEcuC1RcvFromC0.boStopMovementByBreakInBrake == FALSE
	&& gDb_tRamMastMeasureC1.boContactMastAutorisationOfMvts == TRUE)//Mat SNCF)
	{
		gDb_tRamLimitMoveC1.boAutorizeUpInclinaisonBasket = TRUE;
		gDb_tRamLimitMoveC1.boAutorizeDownInclinaisonBasket = TRUE;
	}
	else
	{
		gDb_tRamLimitMoveC1.boAutorizeUpInclinaisonBasket = FALSE;
		gDb_tRamLimitMoveC1.boAutorizeDownInclinaisonBasket = FALSE;
	}
}
