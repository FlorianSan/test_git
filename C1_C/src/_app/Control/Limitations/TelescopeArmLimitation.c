//==================================================================================================
//! @file TelescopeArmLimitation.c
//! @brief safety function of the telescope limitation(authorization of the movement) in case of alarm detection
//! @see Target for ...
//! @section app
//! @subsection
//! @author Christian Klein (CK)
//! @created 11.10.2018 HYDAC/CK
//! @history: #- CK 11.10.2018 HYDAC/CK interface created
//! copyrights (c) all rights reserved by HYDAC International
//=================================================================================================

#include "TelescopeArmLimitation.h"

//-----------------------------------------------------------------------------------------------------
//! @brief Control telescope arm limitation
//!
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 11.10.2018 HYDAC/CK
//!
//! @change  29.01.2019 HYDAC/CK	add authorize with turret mode
//!			 08.03.2019 HYDAC/CK	change && to || on condition who check restricted mode , portlion ladder , translation movement is solicited
//! @change  08.04.2019 NEOTEC/FV	Change authorize with boStopAllMovementsNacellePost and not Ladder  portillon closed
//! @change  17.12.2019 HYDAC/CK	change provisional value of msg can gDb_tRamData4C1RcvFromC0.boSignal_0 to gDb_tRamData4C1RcvFromC0.boStopAggravantMovements
//! @care
//! @todo
//
//10.05.2021 NEOTEC/IG 			Nettoyage du code, suppression des lignes en commentaire
//
//-----------------------------------------------------------------------------------------------------
TVoid vTelescopeArmLimitationControl(TVoid)
{
	gDb_tRamLimitMoveC1.boAutorizeOutTelescopeArm = TRUE;
	gDb_tRamLimitMoveC1.boAutorizeInTelescopeArm = TRUE;

	if(gDb_tRamLimitWorkEnvelopeC1.boStopTelescopeOut == TRUE
	|| gDb_tRamEcuC1RcvFromC0.boStopTelescopeOut == TRUE
	|| boBloErrGetErrStaBit(&gErr_tSpecificErrorC1_3,DM_TELESCOPE_SENSOR_FAULT) == TRUE
	|| gDb_tRamData4C1RcvFromC0.boStopAggravantMovements == TRUE
	|| gDb_tRamMastMeasureC1.boContactMastAutorisationOfMvts == FALSE//Mat SNCF
	)
	{
		gDb_tRamLimitMoveC1.boAutorizeOutTelescopeArm = FALSE;
	}

	/* check , if we are on restricted mode stop all movement by limit envelop function*/
	if (boCoreGetErrRestMode(RM_STOP_MOVE_LIMIT_ENVLP) == TRUE
	|| gDb_tRamGeneralC1.boStopAllMovementsNacellePost == TRUE
	|| gDb_tRamEcuC1RcvFromC0.boTranslationMovementIsSolicited == TRUE
	|| boOverloadActive == TRUE
//	|| (gDb_tRamEcuOutputsC1.u16EvPropGeneratorCommand !=0 && gDb_tRamGreenEffC1.boReloadWithGeneratorOn == FALSE)//GREEN
	|| boBloErrGetErrStaBit(&gErr_tSpecificErrorC1_2,DM_EV_BYPASS_FAULT) == TRUE
	|| boBloErrGetErrStaBit(&gErr_tSpecificErrorC1_2,DM_PVG_TELESCOPE) == TRUE
	|| gDb_tRamMastMeasureC1.boStop_Movement_By_Mast == TRUE
	|| gDb_tRamEcuC1RcvFromC0.boStopMovementByBrakeTest
	|| gDb_tRamEcuC1RcvFromC0.boStopMovementByBreakInBrake)
	{
		gDb_tRamLimitMoveC1.boAutorizeOutTelescopeArm = FALSE;
		gDb_tRamLimitMoveC1.boAutorizeInTelescopeArm = FALSE;
	}
}
