//**************************************************************************************************
//! @file BrakeTest.h
//! @brief Brake Test
//! @author Christian Klein (CK)
//! @created 07.02.2019 HYDAC/CK
//! copyrights (c) all rights reserved by HYDAC International
//**************************************************************************************************

#ifndef SRC__APP_CONTROL_BRAKETEST_H_
#define SRC__APP_CONTROL_BRAKETEST_H_


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
//! @brief brake test
//!
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 07.02.2019 HYDAC/CK
//!
//! @change
//!
//! @care
//! @todo
//-----------------------------------------------------------------------------------------------------
TVoid vBrakeTest(TVoid);

//-----------------------------------------------------------------------------------------------------
//! @brief Valid brake test
//!
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 25.03.2019 HYDAC/CK
//!
//! @change
//!
//! @care
//! @todo
//-----------------------------------------------------------------------------------------------------
TBoolean boValidBrakeTest(TUint16 u16Pressure , TUint16 u16Threshold, TEleTimAdr* ptTimeSignal);

//-----------------------------------------------------------------------------------------------------
//! @brief calculate efficiency pressure rate
//!
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 27.03.2019 HYDAC/CK
//!
//! @change
//!
//! @care
//! @todo
//-----------------------------------------------------------------------------------------------------
TUint16 u16PressureEfficiencyRateCalc(TInt16 i16Pressure , TUint16 u16Param);

#endif  /*SRC__APP_CONTROL_BRAKETEST_H_*/


