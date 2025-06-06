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
#include <App_Db.h>
#include <ItfBasMath.h>
#include <CustomLibrary.h>

// GLOBAL DEFINES =================================================================================

// GLOBAL TYPE DEFINITON ==========================================================================

// GLOBAL VARIABLES DECLARATIONS ==================================================================
extern TSigDboAdr tDboUpTiltBasketButton;							// debounce block to input 48xs Up tilt Basket button
extern TSigDboAdr tDboDownTiltBasketButton;							// debounce block to input 48xs Down  tilt Basket button
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
extern TSigDboAdr tDboJoystickTrigger;								// debounce block to input 48xs Joystick Trigger
extern TSigDboAdr tDboHorn;											// debounce block to input 48xs Horn
extern TSigDboAdr tDboStopMotorButton;								// debounce block to input 48xs StopMotorButton
extern TSigDboAdr tDboAuthorizationWorkKey;							// debounce block to input 48xs AuthorizationWorkKey
extern TSigDboAdr tDboJoystickButtonCalibration;					// debounce block to input 48xs JoystickButtonCalibration
extern TSigDboAdr tDboClosePortillonSensor;							// debounce block to input 48xs ClosePortillonSensor

// GLOBAL PROTOTYPES DECLARATIONS =================================================================

//-----------------------------------------------------------------------------------------------------
//! @brief read all physical inputs
//!
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 23.07.2018 HYDAC/KC
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
//! @created 10.10.2018 HYDAC/CK
//!
//! @change
//!
//! @care
//! @todo
//-----------------------------------------------------------------------------------------------------
extern TVoid vReadInputsCAN(TVoid);


#endif /* SRC__APP_IO_READINPUTSFUNC_H_ */
