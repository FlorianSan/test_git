//==================================================================================================
	//! @file SafetyWriteOutput.c
//! @brief Safety Write Output
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
//! @brief Safety Write Output
//!
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 15.04.2019 HYDAC/CK
//!
//! @change	24.05.2019 NEOTEC/FV deleted action fault PVG
//! @change	26.06.2019 HYDAC/CK add failure DM_INCUR_SP/DM_INCUR_SG_OL/DM_INCUR_PARAM/DM_INCUR_UNKNOWN of gInCur_tPressureBlockOscillationSensor input block
//! @change	02.07.2019 NEOTEC/FV deleted action DM_OVERLOAD_DETECTED_BY_C1
//! @care
//! @todo
//
//10.05.2021 NEOTEC/IG 			Nettoyage du code, suppression des lignes en commentaire
//
//-----------------------------------------------------------------------------------------------------
TVoid vSafetyWriteOutput(TVoid)
{
	/* check inconsistency of pressure and output*/
	if(boBloErrGetErrStaBit(&gErr_tSpecificErrorC0, DM_OSCILLANT_CIRCUIT_FAULT)
		|| boBloInCurGetErrStaBit(&gInCur_tPressureBlockOscillationSensor,DM_INCUR_SP)
		|| boBloInCurGetErrStaBit(&gInCur_tPressureBlockOscillationSensor,DM_INCUR_SG_OL)
		|| boBloInCurGetErrStaBit(&gInCur_tPressureBlockOscillationSensor,DM_INCUR_PARAM)
		|| boBloInCurGetErrStaBit(&gInCur_tPressureBlockOscillationSensor,DM_INCUR_UNKNOWN)
		)
	{
		/* set output unblock oscillant axle to false*/
		gDb_tRamEcuOutputsC0.boEvUnBlockOscillationAxleCmdBool = FALSE;
	}
}
