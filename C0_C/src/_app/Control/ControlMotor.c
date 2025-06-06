
//==================================================================================================
//! @file Control.c
//! @brief Control system
//! @see Target for ...
//! @section app
//! @subsection IO
//! @author Christian Klein (CK)
//! @created 11.12.2018 HYDAC/CK
//! @history: #- CK 11.12.2018 HYDAC/CK interface created
//! copyrights (c) all rights reserved by HYDAC International
//=================================================================================================

#include "ControlMotor.h"

//-----------------------------------------------------------------------------------------------------
//! @brief Control system
//!
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 11.12.2018 HYDAC/CK
//!
//! @change  06.06.2019 NEOTEC/FV Add UnlockOscillation
//!
//! @care
//! @todo
//
//07.05.2021 NEOTEC/IG 			Nettoyage du code, suppression des lignes en commentaire
//
//-----------------------------------------------------------------------------------------------------
TVoid vControlMotor(TVoid)
{
	/* =============================================================================================*/
	/* 											Motor  Control										*/
	/* =============================================================================================*/

	/* check  if a movement is solicited*/
	if(gDb_tRamEcuOutputsC0.u16ForwardPumpCommand > 0
	|| gDb_tRamEcuOutputsC0.u16BackwardPumpCommand > 0
	||(gDb_tRamEcuOutputsC0.boEvUnBlockOscillationAxleCmdBool == TRUE && gDb_tRamSelectControlPost.eSelectedControlPost == GE_POST_NACELLE)
	|| gDb_tRamGreenEffC0.boTransRailElectricRampOngoing == TRUE //GREEN
	)
	{
		/* flag send to C1 to pilot motor*/
		gDb_tRamGeneralC0.boTranslationMovementIsSolicited = TRUE;
	}
	else
	{
		/* No translation movement is solicited*/
		gDb_tRamGeneralC0.boTranslationMovementIsSolicited = FALSE;
	}
}

