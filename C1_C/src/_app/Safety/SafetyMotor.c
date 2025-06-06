//==================================================================================================
//! @file vSafetyMotor.c
//! @brief safety motor
//! @see Target for ...
//! @section app
//! @subsection IO
//! @author Christian Klein (CK)
//! @created 26.06.2019 HYDAC/CK
//! @history: #- CK 26.06.2019 HYDAC/CK interface created
//! copyrights (c) all rights reserved by HYDAC International
//=================================================================================================

#include <SafetyMotor.h>

//-----------------------------------------------------------------------------------------------------
//! @brief safety motor
//!
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 25.06.2019 HYDAC/CK
//!
//! @change
//!
//! @care
//! @todo
//
//11.05.2021 NEOTEC/IG 			Nettoyage du code, suppression des lignes en commentaire
//
//-----------------------------------------------------------------------------------------------------
TVoid vSafetyMotor(TVoid)
{
	/* check if failure of Ev park brake axle oscillant or fixe , service brake osci or fixe or serviceva brake track*/
	if(boBloErrGetErrStaBit(&gErr_tSpecificErrorC1_3,DM_EV_PARK_BRAKE_AXLE_OSCILLANT)
		|| 	boBloErrGetErrStaBit(&gErr_tSpecificErrorC1_3,DM_EV_PARK_BRAKE_AXLE_FIXE)
		|| 	boBloErrGetErrStaBit(&gErr_tSpecificErrorC1_3,DM_EV_SERVICE_BRAKE_AXLE_OSCI)
		|| 	boBloErrGetErrStaBit(&gErr_tSpecificErrorC1_3,DM_EV_SERVICE_BRAKE_AXLE_FIXE)
	 )
	{
		gDb_tRamGeneralNeotecC1.u16MotorSpeedCmdJ1939 = 0;
	}
}
