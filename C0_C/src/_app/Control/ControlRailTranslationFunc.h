//**************************************************************************************************
//! @file ControlRailTranslationFunc.h
//! @brief Control rail translation
//! @author Christian Klein (CK)
//! @created 17.09.2018 HYDAC/CK
//! copyrights (c) all rights reserved by HYDAC International
//**************************************************************************************************

#ifndef SRC__APP_CONTROL_CONTROLRAILTRANSLATIONFUNC_H_
#define SRC__APP_CONTROL_CONTROLRAILTRANSLATIONFUNC_H_

// INCLUDES =======================================================================================
#include <ItfTypes.h>
#include <App_LibTab.h>
#include <CustomLibrary.h>
#include <ItfBasMath.h>
#include <ControlFunc.h>
#include <ItfGlobal.h>
#include <SafetyAuthorizeTransRail.h>

// GLOBAL DEFINES =================================================================================

// GLOBAL TYPE DEFINITON ==========================================================================

// GLOBAL VARIABLES DECLARATIONS ==================================================================

// GLOBAL PROTOTYPES DECLARATIONS =================================================================


//-----------------------------------------------------------------------------------------------------
//! @brief Control rail translation
//!
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 31.07.2018 HYDAC/CK
//!
//! @change
//!
//! @care
//! @todo
//-----------------------------------------------------------------------------------------------------
TVoid vControlRailTranslation(TVoid);
//-----------------------------------------------------------------------------------------------------
//! @brief Control rail advancement
//!
//! @param[in]	 	 EControlPost 	- Move of Nacelle mode ( Off rail, Nacelle , Turret)
//! @param[in]		 ERailSpeedMode 	- Move of rail mode ( GE_NO_RAIL_MODE, GE_ACCESS_SITE_MODE , GE_HIGH_SPEED,GE_GE_LOW_SPEED)
//! @param[in]	 	 TUint16			- Joystick advance
//! @param[in]		 TBoolean			- Dead Man Pedal
//! @param[in] 	 	 TBoolean			- gâchette
//! @param[in] 		 TUint16			- Speed Axle sensor
//! @param[out] 	 TUint16	 		- Forward Pump transmission
//! @param[out]  	 TUint16	 		- Backward Pump transmission
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 31.07.2018 HYDAC/CK
//!
//! @change	 17.12.2018 HYDAC/CK		- remove else condition to reset Ev foraward pump transmission because it reset at ControlFunc
//! 		 27.12.2018 HYDAC/CK		- Add authorize movement in func In1ProAxisPilotOut2PropEvFunction
//!
//! @care
//! @todo
//-----------------------------------------------------------------------------------------------------
TVoid vControlRailAdvancement(EControlPost eSelectedControlPost,/*//NEOTEC WARNING ERailSpeedMode eRailMode,*/ TUint16 u16JoystickAdvance, TBoolean boDeadManPedal,
							  TBoolean boGachette,/*//NEOTEC WARNING TUint16 u16SpeedAxleSensor,*/ TUint16 *u16ForwardPumpTransmission, TUint16 *u16BackwardPumpTransmission);


#endif /* SRC__APP_CONTROL_CONTROLRAILTRANSLATIONFUNC_H_ */
