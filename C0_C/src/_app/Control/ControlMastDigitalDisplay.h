//**************************************************************************************************
//! @file ControlMastDigitalDisplay.h
//! @brief Control mast digital display
//! @author Christian Klein (CK)
//! @created 11.12.2018 HYDAC/CK
//! copyrights (c) all rights reserved by HYDAC International
//**************************************************************************************************

#ifndef SRC__APP_CONTROL_CONTROLMASTDIGITALDISPLAY_H_
#define SRC__APP_CONTROL_CONTROLMASTDIGITALDISPLAY_H_


// INCLUDES =======================================================================================
#include <ItfTypes.h>
#include <App_LibTab.h>
#include <CustomLibrary.h>
#include <ItfBasMath.h>
#include <ControlFunc.h>
#ifdef COMPILER_SWITCH_TAR_HW //C14 //SIMULATION POUR COMPILLER EN MODE PC
#include <IO_UART.h>
#endif  //C14 //SIMULATION POUR COMPILLER EN MODE PC
// GLOBAL DEFINES =================================================================================

// GLOBAL TYPE DEFINITON ==========================================================================

// GLOBAL VARIABLES DECLARATIONS ==================================================================

// GLOBAL PROTOTYPES DECLARATIONS =================================================================

//-----------------------------------------------------------------------------------------------------
//! @brief Control mast digital display
//!
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 07.05.2019 HYDAC/CK
//!
//! @change
//!
//! @care
//! @todo
//-----------------------------------------------------------------------------------------------------
extern TVoid vControlMastDigitalDisplay(TVoid);

//NEOTEC
////-----------------------------------------------------------------------------------------------------
////! @brief determine distance in meter translation with mast measure
////!
////!
////! @globvar
////!
////! @staticvar
////!
////! @created 15.03.2019 HYDAC/CK
////!
////! @change  02.07.2019 HYDAC/CK	- add input function forward and backward
////!									- change return value of function u32 to i32 because we can have negative value when we go back
////!									- change local variable u32DistanceTraveled to i32DistanceTraveled
////!									- remove global variable  gDb_tRamEvision7C1.boRazDistanceTraveledMastMeasure and gDb_tRamMastMeasureC1.boFolded_Position_Mast to input of function
////!
////! @care
////! @todo
////-----------------------------------------------------------------------------------------------------
//TInt32 i32DetermineDistanceWithMastMeasureMm(TInt32 i32SpeedKmhx100, TBoolean i16EvForwardCommand, TBoolean boRazButton, TBoolean boFoldedPosMat);
//NEOTEC

#endif  /*SRC__APP_CONTROL_CONTROLMASTDIGITALDISPLAY_H_*/

