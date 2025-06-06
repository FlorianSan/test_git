//==================================================================================================
//! @file vSafetyArrowArmLimitation.c
//! @brief safety function of the arrow arm limitation(authorization of the movement) in case of alarm detection
//! @see Target for ...
//! @section app
//! @subsection IO
//! @author Christian Klein (CK)
//! @created 15.04.2019 HYDAC/CK
//! @history: #- CK 15.04.2019 HYDAC/CK interface created
//! copyrights (c) all rights reserved by HYDAC International
//=================================================================================================

#include <SafetyArrowArmLimitation.h>

//-----------------------------------------------------------------------------------------------------
//! @brief safety function of the arrow arm limitation(authorization of the movement) in case of alarm detection
//!
//!
//! @globvar
//!		TDbRamLimitMoveC1 			gDb_tRamLimitMoveC1			structure Data variable list
//!		TBloErr						gErr_tSpecificErrorC1_2		structure error block
//! @staticvar
//!
//! @created 09.05.2019 HYDAC/CK
//!			 29.01.2019 HYDAC/CK - Filling of the part  @globar and @staticvar in the header of the function
//! @change
//!
//! @care
//! @todo
//
//11.05.2021 NEOTEC/IG 			Nettoyage du code, suppression des lignes en commentaire
//
//-----------------------------------------------------------------------------------------------------
TVoid vSafetyArrowArmLimitation(TVoid)
{
	/* check if failure inconsistency double swith frame rotation*/
	if(boBloErrGetErrStaBit(&gErr_tSpecificErrorC1_2,DM_SWI_DBL_INC_FRAME_ROT))
	{
		/* set the authorization to OFF, no Arrow Arm movement is authorized*/
		gDb_tRamLimitMoveC1.boAutorizeUpArrowArm = FALSE;
	}

}
