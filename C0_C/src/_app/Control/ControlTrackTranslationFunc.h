//**************************************************************************************************
//! @file ControlTrackTranslationFunc.h
//! @brief Control Track translation on chenillard
//! @author Christian Klein (CK)
//! @created 17.09.2018 HYDAC/CK
//! copyrights (c) all rights reserved by HYDAC International
//**************************************************************************************************

#ifndef SRC__APP_CONTROL_CONTROLTRACKTRANSLATIONFUNC_H_
#define SRC__APP_CONTROL_CONTROLTRACKTRANSLATIONFUNC_H_


// INCLUDES =======================================================================================
#include <ItfTypes.h>
#include <App_LibTab.h>
#include <CustomLibrary.h>
#include <ItfBasMath.h>
#include <ControlFunc.h>
#include <ItfGlobal.h>
#include <SafetyAuthorizeTransTrack.h>
// GLOBAL DEFINES =================================================================================

// GLOBAL TYPE DEFINITON ==========================================================================

// GLOBAL VARIABLES DECLARATIONS ==================================================================

// GLOBAL PROTOTYPES DECLARATIONS =================================================================

//-----------------------------------------------------------------------------------------------------
//! @brief Control track translation
//!
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
TVoid vControlTrackTranslation(TVoid);

//-----------------------------------------------------------------------------------------------------
//! @brief Control crawler advancement
//!
//! @param[in]	 EMoveNacelleMode 		- Move of Nacelle mode ( Off rail, Nacelle , Turret)
//! @param[in]	 EOffRailMode 			- Move of off rail mode ( transport, work , workshop)
//! @param[in]	 TUint16				- Manipulator Left
//! @param[in]	 TUint16				- Manipulator Right
//! @param[in] 	 EManipulatorPosition	- Manipulator Left Position
//! @param[in] 	 EManipulatorPosition	- Manipulator Right Position
//! @param[out]  TUint16	 			- Output track left command
//! @param[out]  TUint16	 			- Output track right Command
//! @param[out]  TBoolean	 			- Output supply track left command
//! @param[out]  TBoolean	 			- Output supply track right command

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
TVoid vCrawlerAdvancement(EControlPost eControlPost, TUint16 u16LeftManipulator,TUint16 u16RightManipulator,
						  EManipulatorPosition eManipulatorLeftPosition, EManipulatorPosition eManipulatorRightPosition,TUint16 *u16LeftTrackPvgCommand,
						  TUint16 *u16RightTrackPvgCommand, TBoolean *boSupplyTrackLeft,TBoolean *boSupplyTrackRight);

//-----------------------------------------------------------------------------------------------------
//! @brief Control brack crawler advance
//!
//! @param[in] 	 EManipulatorPosition	- Manipulator Left Position
//! @param[in] 	 EManipulatorPosition	- Manipulator Right Position
//! @param[out]  TBoolean	 			- Output Ev Service Brake Command
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
TVoid vBrakeCrawler(TBoolean *boEvServiceBrakeCommand);


//-----------------------------------------------------------------------------------------------------
//! @brief Control pump
//!
//! @param[in]	 TUint16				- Manipulator Left
//! @param[in]	 TUint16				- Manipulator Right
//! @param[in]	 TBoolean				- Force Silent Motor
//! @param[out]  TUint16	 			- Output Forward Pump Transmission command
//!
//!
//! @globvar

//! @staticvar
//!
//! @created 23.07.2018 HYDAC/CK
//!
//! @change
//!
//! @care
//! @todo
//-----------------------------------------------------------------------------------------------------
TVoid vPumpControl(TUint16 *u16FordwardPumpTransmissonCommand);


//-----------------------------------------------------------------------------------------------------
//! @brief Control angular radiocontrol
//!
//! @param[in] 	 TUint16				- Angular sensor from radio receiver
//! @param[out]  TUint16	 			- Output track left command
//! @param[out]  TUint16	 			- Output track right Command
//! @param[out]  TBoolean	 			- Output supply track left command
//! @param[out]  TBoolean	 			- Output supply track right command
//! @param[out]  TBoolean	 			- Output Ev Service Brake Command
//! @param[out]  TUint16	 			- Output Speed motor command
//! @param[out]  TUint16	 			- Output Forward Pump Transmission command
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
TVoid vAngularRadioControl(TUint16 u16AngularSensor,TUint16 *u16LeftTrackPvgCommand, TUint16 *u16RightTrackPvgCommand, TBoolean *boSupplyTrackLeft,
						   TBoolean *boSupplyTrackRight, TBoolean *boEvServiceBrakeCommand, TUint16 *u16SpeedMotorCommand,
						   TUint16 *u16FordwardPumpTransmissonCommand);



#endif /* SRC__APP_CONTROL_CONTROLTRACKTRANSLATIONFUNC_H_ */
