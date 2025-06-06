//==================================================================================================
//! @file SafetyWriteOutput.c
//! @brief safety write outputs command in case of alarm detection before the write output of the controller
//! @see Target for ...
//! @section app
//! @subsection IO
//! @author Christian Klein (CK)
//! @created 15.04.2019 HYDAC/CK
//! @history: #- CK 15.04.2019 HYDAC/CK interface created
//! copyrights (c) all rights reserved by HYDAC International
//=================================================================================================

#include <SafetyWriteOutput.h>

//-----------------------------------------------------------------------------------------------------
//! @brief safety write outputs command in case of alarm detection before the write output of the controller
//!
//!
//! @globvar
//!		TDbRamEcuOutputsC1			gDb_tRamEcuOutputsC1		structure Data variable list
//!		TBloErr						gErr_tSpecificErrorC1_2		structure error block
//! @staticvar
//!
//! @created 15.04.2019 HYDAC/CK
//!
//! @change  13.12.2019 HYDAC/CK : Change in if instruction of failure of solenoid valve pvg for all digital outputs variable gDb_tRamEcuOutputsC1.boSupplyPvgTelescopeArmCommand to gDb_tRamEcuOutputsC1.boSupplyPvgPropEvTorCommand
//!			 29.01.2019 HYDAC/CK - Filling of the part  @globar and @staticvar in the header of the function
//! @care
//! @todo
//
//11.05.2021 NEOTEC/IG 			Nettoyage du code, suppression des lignes en commentaire
//
//-----------------------------------------------------------------------------------------------------
TVoid vSafetyWriteOutput(TVoid)
{
	/* check if failure of pvg delta arm*/
	if(boBloErrGetErrStaBit(&gErr_tSpecificErrorC1_2,DM_PVG_DELTA_FAULT))
	{
		/* set supply and bypass to false*/
		gDb_tRamEcuOutputsC1.boSupplyPvgDeltaArmCommand = FALSE;
		gDb_tRamEcuOutputsC1.boEvBypassCommand = FALSE;
	}

	/* check if failure of pvg arrow arm*/
	if(boBloErrGetErrStaBit(&gErr_tSpecificErrorC1_2,DM_PVG_ARROW_FAULT))
	{
		/* set supply and bypass to false*/
		gDb_tRamEcuOutputsC1.boSupplyPvgArrowArmCommand = FALSE;
		gDb_tRamEcuOutputsC1.boEvBypassCommand = FALSE;
	}

	/* check if failure of pvg telescope arm*/
	if(boBloErrGetErrStaBit(&gErr_tSpecificErrorC1_2,DM_PVG_TELESCOPE))
	{
		/* set supply and bypass to false*/
		gDb_tRamEcuOutputsC1.boSupplyPvgTelescopeArmCommand = FALSE;
		gDb_tRamEcuOutputsC1.boEvBypassCommand = FALSE;
	}

	/* check if failure of solenoid valve pvg for all digital outputs*/
	if(boBloErrGetErrStaBit(&gErr_tSpecificErrorC1_2,DM_PVG_EV_TOR))
	{
		/* set supply and bypass to false*/
		gDb_tRamEcuOutputsC1.boSupplyPvgPropEvTorCommand = FALSE;
		gDb_tRamEcuOutputsC1.boEvBypassCommand = FALSE;
	}
}
