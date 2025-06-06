
//==================================================================================================
//! @file ControlKlaxon.c
//! @brief Control klaxon
//! @see Target for ...
//! @section app
//! @subsection IO
//! @author Christian Klein (CK)
//! @created 23.07.2018 HYDAC/CK
//! @history: #- CK 23.07.2018 HYDAC/CK interface created
//! copyrights (c) all rights reserved by HYDAC International
//=================================================================================================

#include "ControlKlaxon.h"

//-----------------------------------------------------------------------------------------------------
//! @brief Control klaxon
//!
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 18.12.2018 HYDAC/CK
//!
//! @change  19.022019 HYDAC/CK
//! @change  05.04.2019 NEOTEC/FV Klaxon in nacelle post
//!
//! @care
//! @todo
//
//
//07.05.2021 NEOTEC/IG 			Nettoyage du code, suppression des lignes en commentaire
//
//-----------------------------------------------------------------------------------------------------
TVoid vControlKlaxon(TVoid)
{

		gDb_tRamEcuOutputsC0.boKlaxonNeotecCmdBool = gDb_tRam48XsInputsC0.boKlaxon || gDb_tRamEcuInputRadioControl.boKlaxonCommand;

}
