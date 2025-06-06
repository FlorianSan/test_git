//==================================================================================================
//! @file vSafetyOverloadSecurity.c
//! @brief safety function of overload security in case of alarm detection
//! @see Target for ...
//! @section app
//! @subsection IO
//! @author Christian Klein (CK)
//! @created 24.06.2019 HYDAC/CK
//! @history: #- CK 24.06.2019 HYDAC/CK interface created
//! copyrights (c) all rights reserved by HYDAC International
//=================================================================================================

#include <SafetyOverloadSecurity.h>

//-----------------------------------------------------------------------------------------------------
//! @brief safety function of overload security in case of alarm detection
//!
//!
//! @globvar
//!		TDbRamEcuOutputsC1 			gDb_tRamEcuOutputsC1			structure Data variable list
//!		TBloErr						gErr_tSpecificErrorC1_3			structure error block
//! @staticvar
//!
//! @created 24.06.2019 HYDAC/CK
//!			 29.01.2019 HYDAC/CK - Filling of the part  @globar and @staticvar in the header of the function
//! @change
//!
//! @care
//! @todo
//
//11.05.2021 NEOTEC/IG 			Nettoyage du code, suppression des lignes en commentaire
//
//-----------------------------------------------------------------------------------------------------
TVoid vSafetyOverloadSecurity(TVoid)
{
	/* check if failure overload detected*/
	if(boBloErrGetErrStaBit(&gErr_tSpecificErrorC1_3,DM_OVERLOAD_DETECTED))
	{
		/* set to false overload security output command*/
		gDb_tRamEcuOutputsC1.boOverloadSecurityCommand = FALSE;
	}
}
