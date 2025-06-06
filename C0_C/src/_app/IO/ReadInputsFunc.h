//**************************************************************************************************
//! @file ReadInputsFunc.h
//! @brief Read analog and digital inputs and convert values
//! @author Christian Klein (CK)
//! @created 23.07.2018 HYDAC/CK
//! copyrights (c) all rights reserved by HYDAC International
//**************************************************************************************************

#ifndef SRC__APP_IO_READINPUTSFUNC_H_
#define SRC__APP_IO_READINPUTSFUNC_H_

// INCLUDES =======================================================================================
#include <ItfTypes.h>
#include <App_LibTab.h>
#include <App_CanSigRec.h>
#include <ItfBasMath.h>
#include <math.h>
#include <stdlib.h>
#include <CustomLibrary.h>
#include <SafetyReadInputsFunc.h>
// GLOBAL DEFINES =================================================================================

// GLOBAL TYPE DEFINITON ==========================================================================

// GLOBAL VARIABLES DECLARATIONS ==================================================================
extern TSigDboAdr tDboUpInclinaisonBasketButton;					// debounce block to input 48xs Up Inclinaison Basket button
extern TSigDboAdr tDboDownInclinaisonBasketButton;					// debounce block to input 48xs Down  Inclinaison Basket button
extern TSigDboAdr tDboUpPendularButton;								// debounce block to input 48xs Up pendular button
extern TSigDboAdr tDboDownPendularButton;							// debounce block to input 48xs Up pendular button
extern TSigDboAdr tDboRotationCtClockwiseBasketButton;				// debounce block to input 48xs rotation counter clockwise basket button
extern TSigDboAdr tDboRotationClockwiseBasketButton;				// debounce block to input 48xs rotation clockwise basket button
extern TSigDboAdr tDboOverload1;									// debounce block to input 48xs Overload 1
extern TSigDboAdr tDboOverload2;									// debounce block to input 48xs Overload 2
extern TSigDboAdr tDboNacelleBasketRightSideSensor1;				// debounce block to input 48xs NacelleBasketRightSideSensor1
extern TSigDboAdr tDboNacelleBasketRightSideSensor2;				// debounce block to input 48xs NacelleBasketRightSideSensor2
extern TSigDboAdr tDboNacelleBasketLeftSideSensor1;					// debounce block to input 48xs NacelleBasketLeftSideSensor1
extern TSigDboAdr tDboNacelleBasketLeftSideSensor2;					// debounce block to input 48xs NacelleBasketLeftSideSensor2
extern TSigDboAdr tDboLowSectorPendularSensor;						// debounce block to input 48xs LowSectorPendularSensor
extern TSigDboAdr tDboHighSectorPlateSensor;						// debounce block to input 48xs HighSectorPlateSensor
extern TSigDboAdr tDboFoldedLadderSensor;							// debounce block to input 48xs FoldedLadderSensor
extern TSigDboAdr tDboRearmementSafetyManSystem;					// debounce block to input 48xs RearmementSafetyManSystem
extern TSigDboAdr tDboAbutementNacelleTrackSide;					// debounce block to input 48xs AbutementNacelleTrackSide
extern TSigDboAdr tDboAbutementNacelleCenteredSide;					// debounce block to input 48xs AbutementNacelleCenteredSide
extern TSigDboAdr tDboDeltaArmJystckCenteredTelescope;				// debounce block to input 48xs DeltaArmJystckCenteredTelescope
extern TSigDboAdr tDboArrowJoystickCenteredTurret;					// debounce block to input 48xs ArrowJoystickCenteredTurret
extern TSigDboAdr tDboCenteredAdvanceJoystick;						// debounce block to input 48xs CenteredAdvanceJoystick
extern TSigDboAdr tDboDeadManPedal;									// debounce block to input 48xs DeadManPedal
extern TSigDboAdr tDboPressenceInNacelleSensor1;					// debounce block to input 48xs PressenceInNacelleSensor1
extern TSigDboAdr tDboPressenceInNacelleSensor2;					// debounce block to input 48xs PressenceInNacelleSensor2
extern TSigDboAdr tDboGachette;										// debounce block to input 48xs Gachette
extern TSigDboAdr tDboKlaxon;										// debounce block to input 48xs Klaxon
extern TSigDboAdr tDboStopMotorButton;								// debounce block to input 48xs StopMotorButton
extern TSigDboAdr tDboAuthorizationWorkKey;							// debounce block to input 48xs AuthorizationWorkKey
extern TSigDboAdr tDboEtallonnageJoystickButton;					// debounce block to input 48xs EtallonnageJoystickButton
extern TSigDboAdr tDboClosePortillonSensor;							// debounce block to input 48xs ClosePortillonSensor
extern TSigDboAdr  tDboOsciServiceBrakeSelectButton;				// debounce block to button of evision 7 OsciServiceBrakeSelect
extern TSigDboAdr  tDboFixeServiceBrakeSelectButton;				// debounce block to button of evision 7 FixeServiceBrakeSelect
extern TSigDboAdr  tDboOsciParkingBrakeSelectButton;				// debounce block to button of evision 7 OsciParkingBrakeSelect
extern TSigDboAdr  tDboFixeParkingBrakeSelectButton;				// debounce block to button of evision 7 FixeParkingBrakeSelect
/* Double freins*/
extern TSigDboAdr  tDboOsci2ndParkingBrakeSelectButton;				// debounce block to button of evision 7 OsciParkingBrakeSelect
extern TSigDboAdr  tDboFixe2ndParkingBrakeSelectButton;				// debounce block to button of evision 7 FixeParkingBrakeSelect

// GLOBAL PROTOTYPES DECLARATIONS =================================================================

//-----------------------------------------------------------------------------------------------------
//! @brief read all physical inputs
//!
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 23.07.2018 HYDAC/CK
//!
//! @change
//!
//! @care
//! @todo
//-----------------------------------------------------------------------------------------------------
extern TVoid vReadInputs(TVoid);


//-----------------------------------------------------------------------------------------------------
//! @brief read input can message
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
extern TVoid vReadInputsCAN(TVoid);

//-----------------------------------------------------------------------------------------------------
//! @brief Encodeur position with calibration value
//!
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 24.01.2019 HYDAC/CK
//!
//! @change
//!
//! @care
//! @todo
//-----------------------------------------------------------------------------------------------------
extern TInt16 vCorrectEncodeurAngle(TInt16 i16AngleRaw,TInt16 i16Offset,TInt16 i16RefAngle);

#endif /* SRC__APP_IO_READINPUTSFUNC_H_ */
