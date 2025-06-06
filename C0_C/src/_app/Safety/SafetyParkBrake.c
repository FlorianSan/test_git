//==================================================================================================
	//! @file vSafetyParkBrake.c
//! @brief safety function of the parking brake in case of alarm detection
//! @see Target for ...
//! @section app
//! @subsection IO
//! @author Christian Klein (CK)
//! @created 09.05.2019 HYDAC/CK
//! @history: #- CK 09.05.2019 HYDAC/CK interface created
//! copyrights (c) all rights reserved by HYDAC International
//=================================================================================================

#include <SafetyParkBrake.h>



//-----------------------------------------------------------------------------------------------------
//! @brief safety function of the parking brake in case of alarm detection
//!
//!
//! @globvar
//!		TDbRamEcuOutputsC0 		gDb_tRamEcuOutputsC0		structure Data variable list
//!
//! @staticvar
//!
//! @created 09.05.2019 HYDAC/CK
//!
//! @change	 06.06.2019 HYDAC/CK - add failure DM_INCUR_SP/DM_INCUR_SG_OL/DM_INCUR_PARAM/DM_INCUR_UNKNOWN of PressureBrakeSensor block
//! @change  25.06.2019 HYDAC/CK - add EvServiceBrakeAxleOscillant and EvServiceBrakeAxleFixe failures , in comment why is depending control park brake
//!			 12.12.2019 HYDAC/CK - add instruction ifdef DEBUG
//!			 28.01.2019 HYDAC/CK - Filling of the part  @globar and @staticvar in the header of the function
//! @care
//! @todo
//
//10.05.2021 NEOTEC/IG 			Nettoyage du code, suppression des lignes en commentaire
//
//-----------------------------------------------------------------------------------------------------
TVoid vSafetyParkBrake(TVoid)
{
	if((boPressureBrakeFault == TRUE
			|| boBloInCurGetErrStaBit(&gInCur_tPressureBrakeSensor,DM_INCUR_SP)
			|| boBloInCurGetErrStaBit(&gInCur_tPressureBrakeSensor,DM_INCUR_SG_OL)
			|| boBloInCurGetErrStaBit(&gInCur_tPressureBrakeSensor,DM_INCUR_PARAM)
			|| boBloInCurGetErrStaBit(&gInCur_tPressureBrakeSensor,DM_INCUR_UNKNOWN))
		&& ((gDb_tRamEcuOutputsC0.u16ForwardPumpCommand > 0) || (gDb_tRamEcuOutputsC0.u16BackwardPumpCommand > 0))
	   )
	{
		/* park brake active*/
		gDb_tRamEcuOutputsC0.boEvParkBrakeAxleFixeCmdBool = FALSE;
		gDb_tRamEcuOutputsC0.boEvParkBrakeAxleOscillantCmdBool = FALSE;
	}

#ifdef DEBUG
#endif

}
