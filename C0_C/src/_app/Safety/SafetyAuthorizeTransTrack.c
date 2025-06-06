//==================================================================================================
//! @file SafetyAuthorizeTransTrack.c
//! @brief safety authorization of translation rail
//! @see Target for ...
//! @section app
//! @subsection IO
//! @author Christian Klein (CK)
//! @created 15.04.2019 HYDAC/CK
//! @history: #- CK 15.04.2019 HYDAC/CK interface created
//! copyrights (c) all rights reserved by HYDAC International
//=================================================================================================

#include <SafetyAuthorizeTransTrack.h>

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
//! @change 27.05.2019 NEOTEC/FV Cut only Forward
//! @change 26.06.2019 HYDAC/CK - add DM_SWI_DBL_NONC_INCONSISTENT of block FrameRotationSensor2 failure
//!
//! @care
//! @todo
//
//10.05.2021 NEOTEC/IG 			Nettoyage du code, suppression des lignes en commentaire
//
//-----------------------------------------------------------------------------------------------------
TVoid vSafetyAuthorizeTransTrack(TVoid)
{
	/* check pressure of translation crawler with hook*/
	if(boBloErrGetErrStaBit(&gErr_tSpecificErrorC0_3, DM_TRANS_CRAWLER_PRESSURE_HOOK))
	{
		gDb_tRamGeneralC0.boAuthorizeForwardCrawler = FALSE;
	}

	if(boBloSwiDblNoNcGetErrStaBit(&gSwiDblNoNc_tFrameRotationSensor1,DM_SWI_DBL_NONC_INCONSISTENT)
	&& gDb_tRamEcuInputsC0.eRailHookSensorState == GE_DI_ON /*hook down*/
	)
	{
		gDb_tRamGeneralC0.boAuthorizeForwardCrawler = FALSE;
		gDb_tRamGeneralC0.boAuthorizeBackwardCrawler = FALSE;
	}

	if(boBloSwiDblNoNcGetErrStaBit(&gSwiDblNoNc_tFrameRotationSensor2,DM_SWI_DBL_NONC_INCONSISTENT))
	{
		gDb_tRamGeneralC0.boAuthorizeForwardCrawler = FALSE;
		gDb_tRamGeneralC0.boAuthorizeBackwardCrawler = FALSE;
	}

}
