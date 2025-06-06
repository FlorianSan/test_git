//**************************************************************************************************
//! @file ControlRadioCommand.h
//! @brief Control system
//! @author Christian Klein (CK)
//! @created 07.08.2018 HYDAC/CK
//! copyrights (c) all rights reserved by HYDAC International
//**************************************************************************************************

#ifndef SRC__APP_CONTROL_CONTROLRADIOCOMMAND_H_
#define SRC__APP_CONTROL_CONTROLRADIOCOMMAND_H_


// INCLUDES =======================================================================================
#include <ItfTypes.h>
#include <App_LibTab.h>
#include <App_CanSigRec.h>

// GLOBAL DEFINES =================================================================================

// GLOBAL TYPE DEFINITON ==========================================================================

// GLOBAL VARIABLES DECLARATIONS ==================================================================
// declaration trigger
extern TSigTriggerAdr	tTriggerRadioCommandConnected;					// trigger to detect radio command is connected


// GLOBAL PROTOTYPES DECLARATIONS =================================================================


//-----------------------------------------------------------------------------------------------------
//! @brief Control Radio Command
//!
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 07.08.2018 HYDAC/CK
//!
//! @change
//!
//! @care
//! @todo
//-----------------------------------------------------------------------------------------------------
extern TVoid vControlRadioCommand(TVoid);

#endif /* SRC__APP_CONTROL_CONTROLRADIOCOMMAND_H_ */
