//==================================================================================================
//! @file SafetyTelescopeLimitation.c
//! @brief safety function of the telescope limitation(authorization of the movement) in case of alarm detection
//! @see Target for ...
//! @section app
//! @subsection IO
//! @author Christian Klein (CK)
//! @created 15.04.2019 HYDAC/CK
//! @history: #- CK 15.04.2019 HYDAC/CK interface created
//! copyrights (c) all rights reserved by HYDAC International
//=================================================================================================

#include <SafetyTelescopeLimitation.h>

//-----------------------------------------------------------------------------------------------------
//! @brief safety function of the telescope limitation(authorization of the movement) in case of alarm detection
//!
//!
//! @globvar
//!		TDbRamLimitMoveC1 			gDb_tRamLimitMoveC1			structure Data variable list
//!		TBloErr						gErr_tSpecificErrorC1_2		structure error block
//! @staticvar
//!
//! @created 15.04.2019 HYDAC/CK
//!
//! @change  13/12/2019 HYDAC/CK : The two if instruction are combined into one
//!			 29.01.2019 HYDAC/CK - Filling of the part  @globar and @staticvar in the header of the function
//! @care
//! @todo
//
//11.05.2021 NEOTEC/IG 			Nettoyage du code, suppression des lignes en commentaire
//
//-----------------------------------------------------------------------------------------------------
TVoid vSafetyTelescopeLimitation(TVoid)
{
	/* check if failure of telescope concerning the difference between the two data strings, the limit values, the sensor status, the timeouts on the two CAN messages   OR chcek if failure inconsistency double switch of frame rotation*/
	if((boBloErrGetErrStaBit(&gErr_tSpecificErrorC1_2,DM_TELESCOPE_SENSOR_FAULT))
		|| (boBloErrGetErrStaBit(&gErr_tSpecificErrorC1_2,DM_SWI_DBL_INC_FRAME_ROT)))
	{
		/* not allow out telescope movement*/
		gDb_tRamLimitMoveC1.boAutorizeOutTelescopeArm = FALSE;
	}

}
