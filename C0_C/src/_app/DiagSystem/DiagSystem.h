//**************************************************************************************************
//! @file DiagSystem.h
//! @brief Diagnostic system , wathdog state , life byte
//! @author Christian Klein (CK)
//! @created 23.07.2018 HYDAC/CK
//! copyrights (c) all rights reserved by HYDAC International
//**************************************************************************************************

#ifndef SRC__APP_DIAGSYSTEM_DIAGSYSTEM_H_
#define SRC__APP_DIAGSYSTEM_DIAGSYSTEM_H_

// INCLUDES =======================================================================================
#include <ItfTypes.h>
#include <App_LibTab.h>

// GLOBAL DEFINES =================================================================================

// GLOBAL TYPE DEFINITON ==========================================================================
extern TTimStatistic g_tStatistic; // cycle time

// GLOBAL VARIABLES DECLARATIONS ==================================================================

// GLOBAL PROTOTYPES DECLARATIONS =================================================================

//-----------------------------------------------------------------------------------------------------
//! @brief wathdog state , life byte , read batterie voltage
//!
//!
//! @globvar
//!		TDbRamGeneralC0 		gDb_tRamGeneralC0			structure Data variable list
//!		TTimStatistic			g_tStatistic				structure time statistic
//! @staticvar
//!
//! @created 23.07.2018 HYDAC/CK
//!
//! @change  20.11.2019 HYDAC/CK  : minor changes : Add more comments according to Review Code
//!			 28.01.2019 HYDAC/CK - Filling of the part  @globar and @staticvar in the header of the function
//! @care
//! @todo
//-----------------------------------------------------------------------------------------------------
extern TVoid vDiagSystem(TVoid);

#endif /* SRC__APP_DIAGSYSTEM_DIAGSYSTEM_H_ */
