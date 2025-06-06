//==================================================================================================
//! @file SafetySpeedMaxTranslationRail.c
//! @brief safety authorization of translation rail
//! @see Target for ...
//! @section app
//! @subsection IO
//! @author Christian Klein (CK)
//! @created 15.04.2019 HYDAC/CK
//! @history: #- CK 15.04.2019 HYDAC/CK interface created
//! copyrights (c) all rights reserved by HYDAC International
//=================================================================================================

#include <SafetySpeedMaxTranslationRail.h>

//-----------------------------------------------------------------------------------------------------
//! @brief safety authorization of translation track
//!
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 15.04.2019 HYDAC/CK
//!
//! @change  04.06.2019 NEOTEC/FV deleted DM_HIGH_HYDRAULIC_TEMP_CRAWLER
//! @change  26.06.2019 HYDAC/CK - remvoe reaction of failure DM_INC_POS_DELTA_ARROW_FOLDED
//!
//! @care
//! @todo
//
//10.05.2021 NEOTEC/IG 			Nettoyage du code, suppression des lignes en commentaire
//
//-----------------------------------------------------------------------------------------------------
TVoid vSafetySpeedMaxTranslationRail(TVoid)
{
	/* check if failure temp to high hydraulic rail*/
	if(boBloErrGetErrStaBit(&gErr_tSpecificErrorC0_2, DM_HIGH_HYDRAULIC_TEMP_RAIL))
	{
		gDb_tRamGeneralC0.eRailSpeedMode = GE_LOW_SPEED;
	}

	/* check default of one speed sensor*/
	if(boBloErrGetErrStaBit(&gErr_tSpecificErrorC0_2, DM_ONE_SPEED_SENSOR_FAULT))
	{
		gDb_tRamGeneralC0.eRailSpeedMode = GE_LOW_SPEED;
	}

	/* check default of two speed sensor*/
	if(boBloErrGetErrStaBit(&gErr_tSpecificErrorC0_2, DM_TWO_SPEED_SENSOR_FAULT))
	{
		gDb_tRamGeneralC0.eRailSpeedMode = GE_LOW_SPEED;
	}
}
