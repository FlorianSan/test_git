//==================================================================================================
//! @file ControlUnBlockOscillationAxle.c
//! @brief Control UnBlockOscillationAxle
//! @see Target for ...
//! @section app
//! @subsection IO
//! @author Christian Klein (CK)
//! @created 18.01.2019 HYDAC/CK
//! @history: #- CK 18.01.2019 HYDAC/CK interface created
//! copyrights (c) all rights reserved by HYDAC International
//=================================================================================================

#include "ControlUnBlockOscillationAxle.h"

//-----------------------------------------------------------------------------------------------------
//! @brief Control UnBlockOscillationAxle
//!
//!
//!
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 18.01.2019 HYDAC/CK
//!
//! @change
//!
//! @care
//
//07.05.2021 NEOTEC/IG 			Nettoyage du code, suppression des lignes en commentaire
//
//! @todo
//-----------------------------------------------------------------------------------------------------
TVoid vControlUnBlockOscillationAxle(TVoid)
{
	/*boRadioOscillantxAxleCommand*/
	TBoolean boRadioOscillantxAxleCommand =FALSE;
	if(gDb_tRamSelectControlPost.eSelectedControlPost == GE_POST_RADIO
	&&(	gDb_tRamEcuOutputsC0.boEvUpAxleOscillantCommandBool || gDb_tRamEcuOutputsC0.boEvDownAxleOscillantCommandBool))
		boRadioOscillantxAxleCommand = TRUE;
	else
		boRadioOscillantxAxleCommand = FALSE;

	/* check if translation rail is solicited*/
	if ((gDb_tRamSelectControlPost.eSelectedControlPost == GE_POST_NACELLE
	&& (gDb_tRamEcuOutputsC0.u16ForwardPumpCommand > 0 || gDb_tRamEcuOutputsC0.u16BackwardPumpCommand > 0 || gDb_tRamGreenEffC0.boTransRailElectricRampOngoing == TRUE) //NEW GREEN
	&& boBloErrGetErrStaBit(&gErr_tSpecificErrorC0, DM_OSCILLANT_CIRCUIT_FAULT) == FALSE
	)
	/*check radio axle command*/
	|| boRadioOscillantxAxleCommand == TRUE
	)
	{
		gDb_tRamEcuOutputsC0.boEvUnBlockOscillationAxleCmdBool = TRUE;
	}
	else
	{
		gDb_tRamEcuOutputsC0.boEvUnBlockOscillationAxleCmdBool = FALSE;
	}
}
