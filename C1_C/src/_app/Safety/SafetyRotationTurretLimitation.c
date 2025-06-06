//==================================================================================================
//! @file vSafetyRotationTurretLimitation.c
//! @brief safety function of the rotation turret limitation(authorization of the movement) in case of alarm detection
//! @see Target for ...
//! @section app
//! @subsection IO
//! @author Christian Klein (CK)
//! @created 11.06.2019 HYDAC/CK
//! @history: #- CK 11.06.2019 HYDAC/CK interface created
//! copyrights (c) all rights reserved by HYDAC International
//=================================================================================================

#include <SafetyRotationTurretLimitation.h>

//-----------------------------------------------------------------------------------------------------
//! @brief safety function of the rotation turret limitation(authorization of the movement) in case of alarm detection
//!
//!
//! @globvar
//!		TDbRamLimitMoveC1 			gDb_tRamLimitMoveC1			structure Data variable list
//!		TDbRamEcuC1RcvFromC0		gDb_tRamEcuC1RcvFromC0		structure Data variable list
//!		TBloErr						gErr_tSpecificErrorC1		structure error block
//! @staticvar
//!
//! @created 11.06.2019 HYDAC/CK
//!			 29.01.2019 HYDAC/CK - Filling of the part  @globar and @staticvar in the header of the function
//! @change
//!
//! @care
//! @todo
//
//11.05.2021 NEOTEC/IG 			Nettoyage du code, suppression des lignes en commentaire
//
//-----------------------------------------------------------------------------------------------------
TVoid vSafetyRotationTurretLimitation(TVoid)
{
	/* check if failure of turret sensor and bilateral mode is active*/
	if(boBloErrGetErrStaBit(&gErr_tSpecificErrorC1, DM_TURRET_SENSOR_FAULT_C1)
		&& gDb_tRamEcuC1RcvFromC0.eRailWorkMode == GE_BILATERAL_MODE)
	{
		/* set the authorization to OFF, no turret movement is authorized*/
		gDb_tRamLimitMoveC1.boAutorizeRotTurretClkwise = FALSE;
		gDb_tRamLimitMoveC1.boAutorizeRotTurretCtClkwise = FALSE;
	}

}
