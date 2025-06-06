//**************************************************************************************************
//! @file BrakeTest.h
//! @brief Brake Test
//! @author Christian Klein (CK)
//! @created 07.02.2019 HYDAC/CK
//! copyrights (c) all rights reserved by HYDAC International
//**************************************************************************************************

#ifndef SRC__APP_CONTROL_BREAKINTEST_H_
#define SRC__APP_CONTROL_BREAKINTEST_H_


// INCLUDES =======================================================================================
#include <ItfTypes.h>
#include <App_LibTab.h>
#include <CustomLibrary.h>
#include <ItfBasMath.h>
#include <ControlFunc.h>
// GLOBAL DEFINES =================================================================================

// GLOBAL TYPE DEFINITON ==========================================================================

// GLOBAL VARIABLES DECLARATIONS ==================================================================

// GLOBAL PROTOTYPES DECLARATIONS =================================================================

//-----------------------------------------------------------------------------------------------------
//! @brief brake break function, this function allows you to force a brake while driving
//!
//!
//! @globvar
//!		TDbRamBrealInBrakeC0 		gDb_tRamBreakInBrakeC0		structure Data variable list
//!		TDbRamGeneralC0				gDb_tRamGeneralC0			structure Data variable list
//!		TDbRamEvision7C0	 		gDb_tRamEvision7C0			structure Data variable list
//!		TDbRamEcuInputsC0			gDb_tRamEcuInputsC0			structure Data variable list
//!		TDbRamBrealInBrakeC0 		gDb_tRamBreakInBrakeC0		structure Data variable list
//!		TDbRamGeneralC0				gDb_tRamGeneralC0			structure Data variable list
//!		TSigTriggerAdr				tTriggerJoyOutOfNeuPos		structure of trigger signal
//! @staticvar
//!
//! @created 27.03.2019 HYDAC/CK
//!
//! @change  10.12.2019 HYDAC/CK : add {} in the if condition into if(bi2SigTrigger(&tTriggerJoyOutOfNeuPos,gDb_tRamGeneralC0.i16JoystickAdvanceSetpointAfterRamp != 0 ) == 1) and 		if(gDb_tRamEcuInputsC0.i32FixeAxleFrequency > 0 && gDb_tRamEcuInputsC0.i32OscillantAxleFrequency > 0)
//! @change  17.12.2019 HYDAC/CK : replaces static variable boOsciServiceBrakinBrakeOn to gDb_tRamBreakInBrakeC0.boOsciServiceBrakinBrakeOn
//!								   replaces static variable boFixeServiceBrakinBrakeOn to gDb_tRamBreakInBrakeC0.boFixeServiceBrakinBrakeOn
//!								   replaces static variable boBothServiceBrakinBrakeOn to gDb_tRamBreakInBrakeC0.boBothServiceBrakinBrakeOn
//!			 28.01.2019 HYDAC/CK - Filling of the part  @globar and @staticvar in the header of the function
//! @care
//! @todo // add position transport
//-----------------------------------------------------------------------------------------------------
TVoid vBreakInBrake(TVoid);

#endif  /*SRC__APP_CONTROL_BREAKINTEST_H_*/
