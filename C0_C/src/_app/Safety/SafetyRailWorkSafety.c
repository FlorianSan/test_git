//==================================================================================================
//! @file SafetyRailWorkSafety.c
//! @brief safety function of the working mode on the rails when we detect an alarms
//! @see Target for ...
//! @section app
//! @subsection
//! @author Christian Klein (CK)
//! @created 09.05.2019 HYDAC/CK
//! @history: #- CK 06.06.2019 HYDAC/CK interface created
//! copyrights (c) all rights reserved by HYDAC International
//=================================================================================================

#include <SafetyRailWorkSafety.h>

//-----------------------------------------------------------------------------------------------------
//! @brief safety function of the working mode on the rails when we detect an alarms
//!
//!
//! @globvar
//!		TDbRamRailWorkSafetyC0 		gDb_tRamRailWorkSafetyC0		structure Data variable list
//!		TBloErr						gErr_tSpecificErrorC0_4			structure error block
//! @staticvar
//!
//! @created 06.06.2019 HYDAC/CK
//!
//! @change  12.12.2019 HYDAC/CK : add comment for the assignments gDb_tRamRailWorkSafetyC0.eRailWorkMode = GE_MULTILANE_MODE;
//!			 29.01.2019 HYDAC/CK - Filling of the part  @globar and @staticvar in the header of the function
//!
//! @care
//! @todo
//
//10.05.2021 NEOTEC/IG 			Nettoyage du code, suppression des lignes en commentaire
//
//-----------------------------------------------------------------------------------------------------
TVoid vSafetyRailWorkSafety(TVoid)
{
	/* check if failure left and right basket side*/
	if(boBloErrGetErrStaBit(&gErr_tSpecificErrorC0_4,DM_INC_RIGHT_LEFT_BASKET))
	{
		/*set the rail work mode to multilane, this is the mode with the most restriction*/
		gDb_tRamRailWorkSafetyC0.eRailWorkMode = GE_MULTILANE_MODE;
	}
}


