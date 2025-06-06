//==================================================================================================
	//! @file SafetySelectControlPost.c
//! @brief safety select control post
//! @see Target for ...
//! @section app
//! @subsection IO
//! @author Christian Klein (CK)
//! @created 15.04.2019 HYDAC/CK
//! @history: #- CK 15.04.2019 HYDAC/CK interface created
//! copyrights (c) all rights reserved by HYDAC International
//=================================================================================================

#include <SafetySelectControlPost.h>

//-----------------------------------------------------------------------------------------------------
//! @brief safety select control post
//!
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 15.04.2019 HYDAC/CK
//! @change  13.05.2019 NEOTEC/FV
//! @change  26.06.2019 HYDAC/CK - change gDb_tRamEcuC0RcvFailluresFromC1.boDm_Ev_Bypass_Fault to  	boBloErrGetErrStaBit(&gErr_tSpecificErrorC0_5, DM_EV_BYPASS_FAULT_BY_C1
//!
//! @care
//! @todo
//
//10.05.2021 NEOTEC/IG 			Nettoyage du code, suppression des lignes en commentaire
//
//-----------------------------------------------------------------------------------------------------
TVoid vSafetySelectControlPost(TVoid)
{
	/* check if failure selector work mode*/
	if(boBloErrGetErrStaBit(&gErr_tSpecificErrorC0, DM_WORKMODE_SELETOR)
	|| boBloErrGetErrStaBit(&gErr_tSpecificErrorC0, DM_INC_ABUTMENT_TURRET)
	|| boBloErrGetErrStaBit(&gErr_tSpecificErrorC0, DM_INC_ABUTMENT_NACELLE)
	|| boBloErrGetErrStaBit(&gErr_tSpecificErrorC0_3, DM_INC_FOLDED_MAT_MEASURE)
	|| boBloErrGetErrStaBit(&gErr_tSpecificErrorC0_4, DM_ACTIVE_HELP_FROM_C1)
	|| boBloErrGetErrStaBit(&gErr_tSpecificErrorC0_5, DM_EV_BYPASS_FAULT_BY_C1)
	|| gDb_tRamEcuAlarmC0.boFaultThermicPumpOrElecticDmc == TRUE) //NEOTEC IG
	{
		/* set control post to no post*/
		gDb_tRamSelectControlPost.eSelectedControlPost = GE_POST_NO_POST;
	}
}
