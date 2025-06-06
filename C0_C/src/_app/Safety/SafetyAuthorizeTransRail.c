//==================================================================================================
	//! @file vSafetyAuthorizeTransRail.c
//! @brief safety authorization of translation rail
//! @see Target for ...
//! @section app
//! @subsection IO
//! @author Christian Klein (CK)
//! @created 15.04.2019 HYDAC/CK
//! @history: #- CK 15.04.2019 HYDAC/CK interface created
//! copyrights (c) all rights reserved by HYDAC International
//=================================================================================================

#include <SafetyAuthorizeTransRail.h>

//-----------------------------------------------------------------------------------------------------
//! @brief safety authorization of translation rail
//!
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 15.04.2019 HYDAC/CK
//! @change  06.06.2019 NEOTEC/FV - if DM_SERVICE_BRAKE_PRESSURE_FAULT used brake park
//! @change
//!
//! @change	 06.06.2019 HYDAC/CK - add failure DM_INCUR_SP/DM_INCUR_SG_OL/DM_INCUR_PARAM/DM_INCUR_UNKNOWN of PressureBrakeSensor input block
//! @change	 26.06.2019 HYDAC/CK - add failure DM_INCUR_SP/DM_INCUR_SG_OL/DM_INCUR_PARAM/DM_INCUR_UNKNOWN of PressureBrakeSensor input block
//! @change  06.06.2019 NEOTEC/FV - if DM_SERVICE_BRAKE_PRESSURE_FAULT used brake park
//! @care
//! @todo
//
//10.05.2021 NEOTEC/IG 			Nettoyage du code, suppression des lignes en commentaire
//
//-----------------------------------------------------------------------------------------------------
TVoid vSafetyAuthorizeTransRail(TVoid)
{
	/* check speed limit of PV*/
	if(boBloErrGetErrStaBit(&gErr_tSpecificErrorC0_2, DM_OVERSPEED_PV_FAULT))
	{
		gDb_tRamGeneralC0.boAuthorizeTransRailMovement = FALSE;
		gDb_tRamGreenEffC0.boAutorizeTransRailElectric = FALSE; //GREEN
	}

	/* check speed limit of GV*/
	if(boBloErrGetErrStaBit(&gErr_tSpecificErrorC0_3, DM_OVERSPEED_GV_FAULT))
	{
		gDb_tRamGeneralC0.boAuthorizeTransRailMovement = FALSE;
		gDb_tRamGreenEffC0.boAutorizeTransRailElectric = FALSE; //GREEN
	}

	/* check inconsistency of inductive and position coder turret*/
	if(boBloErrGetErrStaBit(&gErr_tSpecificErrorC0_3, DM_INC_INDUCTIVE_POS_TURRET))
	{
		gDb_tRamGeneralC0.boAuthorizeTransRailMovement = FALSE;
		gDb_tRamGreenEffC0.boAutorizeTransRailElectric = FALSE; //GREEN
	}

	/* check inconsistency of pressure and output*/
	if(boBloErrGetErrStaBit(&gErr_tSpecificErrorC0, DM_OSCILLANT_CIRCUIT_FAULT)
		|| boBloInCurGetErrStaBit(&gInCur_tPressureBlockOscillationSensor,DM_INCUR_SP)
		|| boBloInCurGetErrStaBit(&gInCur_tPressureBlockOscillationSensor,DM_INCUR_SG_OL)
		|| boBloInCurGetErrStaBit(&gInCur_tPressureBlockOscillationSensor,DM_INCUR_PARAM)
		|| boBloInCurGetErrStaBit(&gInCur_tPressureBlockOscillationSensor,DM_INCUR_UNKNOWN)
		)
	{
		gDb_tRamGeneralC0.boAuthorizeTransRailMovement = FALSE;
		gDb_tRamGreenEffC0.boAutorizeTransRailElectric = FALSE; //GREEN
	}

	/* check if failure two speed sensor fault is active*/
	if(boBloErrGetErrStaBit(&gErr_tSpecificErrorC0_2, DM_TWO_SPEED_SENSOR_FAULT))
	{
		gDb_tRamGeneralC0.boAuthorizeTransRailMovement = FALSE;
		gDb_tRamGreenEffC0.boAutorizeTransRailElectric = FALSE; //GREEN
	}
}
