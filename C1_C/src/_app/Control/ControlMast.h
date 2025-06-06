//**************************************************************************************************
//! @file ControlMast.h
//! @brief Control the measurement mast function
//! @author Matthieu Stark (MS)
//! @created 13.02.2019 HYDAC/MS
//! copyrights (c) all rights reserved by HYDAC International
//**************************************************************************************************

#ifndef SRC__APP_CONTROL_CONTROLMAST_H_
#define SRC__APP_CONTROL_CONTROLMAST_H_


// INCLUDES =======================================================================================
#include <ItfTypes.h>
#include <App_LibTab.h>
#include <CustomLibrary.h>
#include <ItfBasMath.h>

// GLOBAL DEFINES =================================================================================

// GLOBAL TYPE DEFINITON ==========================================================================

// GLOBAL VARIABLES DECLARATIONS ==================================================================

// GLOBAL PROTOTYPES DECLARATIONS =================================================================

//-----------------------------------------------------------------------------------------------------
//! @brief Control mast measurement function
//!
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 13.02.2019 HYDAC/MS
//!
//! @change
//!
//! @care
//! @todo
//-----------------------------------------------------------------------------------------------------
extern TVoid vControlMast(TVoid);

//-----------------------------------------------------------------------------------------------------
//! @brief Encodeur mast position with calibration value
//!
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 15.03.2019 HYDAC/CK
//!
//! @change
//!
//! @care
//! @todo
//-----------------------------------------------------------------------------------------------------
TUint16 u16CorrectEncodeurMast(TUint32 u32EncodeurMastMeasureRaw,TUint32 u32MinEncodeur,TUint32 u32MaxEncodeur,TUint16 u16MinEncodeurCentimeter,TUint16 u16MaxEncodeurCentimeter,TInt16 i16OffsetCentimeter);
//-----------------------------------------------------------------------------------------------------
//! @brief determine distance in meter translation with mast measure
//!
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 15.03.2019 HYDAC/CK
//!
//! @change  02.07.2019 HYDAC/CK	- add input function forward and backward
//!									- change return value of function u32 to i32 because we can have negative value when we go back
//!									- change local variable u32DistanceTraveled to i32DistanceTraveled
//!									- remove global variable  gDb_tRamEvision7C1.boRazDistanceTraveledMastMeasure and gDb_tRamMastMeasureC1.boFolded_Position_Mast to input of function
//!
//! @care
//! @todo
//-----------------------------------------------------------------------------------------------------
//Neotec
//TInt32 i32DetermineDistanceWithMastMeasureMm(TInt32 i32SpeedKmhx100, TInt16 i16EvForwardCommand, TInt16 i16EvBackwardCommand, TBoolean boRazButton, TBoolean boFoldedPosMat);
#endif  /*SRC__APP_CONTROL_CONTROLMAST_H_*/

