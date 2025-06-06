//==================================================================================================
	//! @file SafetyServiceBrake.c
//! @brief safety function of the  service brake in case of alarm detection
//! @see Target for ...
//! @section app
//! @subsection IO
//! @author Christian Klein (CK)
//! @created 15.04.2019 HYDAC/CK
//! @history: #- CK 15.04.2019 HYDAC/CK interface created
//! copyrights (c) all rights reserved by HYDAC International
//=================================================================================================

#include <SafetyServiceBrake.h>

//-----------------------------------------------------------------------------------------------------
//! @brief safety function of the  service brake in case of alarm detection
//!
//!
//! @globvar
//!		TDbRamEcuOutputsC0 			gDb_tRamEcuOutputsC0		structure Data variable list
//!		TBloErr						gErr_tSpecificErrorC0_4		structure error block
//! @staticvar
//!
//! @created 15.04.2019 HYDAC/CK
//!
//! @change  25.06.2019 HYDAC/CK - add EvParkBrakeAxleOscillant and EvParkBrakeAxleFixe failures , in comment why is depending control park brake
//!			 29.01.2019 HYDAC/CK - Filling of the part  @globar and @staticvar in the header of the function
//!
//! @care
//! @todo
//
//10.05.2021 NEOTEC/IG 			Nettoyage du code, suppression des lignes en commentaire
//
//-----------------------------------------------------------------------------------------------------
TVoid vSafetyServiceBrake(TVoid)
{
	/* check if active help*/
	if(boBloErrGetErrStaBit(&gErr_tSpecificErrorC0_4, DM_ACTIVE_HELP_FROM_C1))
	{
		/* set output command to OFF of Ev Service Brake Axle Osci And Fixe*/
		gDb_tRamEcuOutputsC0.boEvServiceBrakeAxleOsciCmdBool = FALSE;
		gDb_tRamEcuOutputsC0.boEvServiceBrakeAxleFixeCmdBool = FALSE;
	}

#ifdef DEBUG
#endif

}
