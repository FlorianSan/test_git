//**************************************************************************************************
//! @file ControlBrakes.h
//! @brief Management of specific alarms
//! @author NEOTEC/FV
//! @created 15.11.2022 NEOTEC/FV
//! copyrights (c) all rights reserved by NEOTEC
//**************************************************************************************************

#ifndef SRC__APP_CONTROL_CONTROLBRAKES_H_
#define SRC__APP_CONTROL_CONTROLBRAKES_H_

// INCLUDES =======================================================================================
#include <App_LibTab.h>
#include <ItfCoreLib.h>
#include <ItfBasMath.h>
#include <App_CanSigRec.h>
#include <ItfBasOut.h>
#include <ItfTypes.h>
#include <ControlFunc.h>

//-----------------------------------------------------------------------------------------------------
//! @brief ControlBrakes
//!
//!
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 15.11.2022 NEOTEC/FV
//!
//! @change
//!
//! @care
//! @todo
//-----------------------------------------------------------------------------------------------------
extern TVoid vControlBrakes(TVoid);

//-----------------------------------------------------------------------------------------------------
//! @brief Control Service Axle Brake
//!
//! @param[in] 		 TInt32			- Speed Axle sensor
//! @param[out] 	 TBoolean	 		- Ev service Axle brake Av
//! @param[out]		 TBoolean	 		- Ev service Axle brake Ar
//!
//! @globvar
//! Joystick advance scaling
//! StateServiceBrakeRail
//! gDb_tNvParametersC0.u16TresholdMinimalSpeedServiceBrake
//! @staticvar
//!
//! @created 31.07.2018 HYDAC/CK
//!
//! @change	 11.01.2019 HYDAC/CK Brake after ramp of joystick
//!			 25.02.2019 HYDAC/CK add condition to define brake when gachette or pedal is released
//!			 05.03.2019 HYDAC/CK switch position condition if with else if in case GE_DEFINE_BRAKE for priority to detect dead man pedal
//! @care
//! @todo
//-----------------------------------------------------------------------------------------------------
TVoid vControlServiceAxleBrake(TInt32 i32SpeedAxleSensor, TBoolean *boEvServiceAxleAvBrake,TBoolean *boEvServiceAxleArBrake);
//-----------------------------------------------------------------------------------------------------
//! @brief Control park Axle Brake
//!
//! @param[in]		 TBoolean			-
//! @param[out] 	 TBoolean	 		-
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
TVoid vControlParkAxleBrake(TVoid);

//-----------------------------------------------------------------------------------------------------
//! @brief Control emergency brake
//!
//! @param[in]		 TBoolean			-
//! @param[out] 	 TBoolean	 		-
//!
//! @globvar
//!
//! @staticvar
//
//! @created 17.01.2019 HYDAC/CK
//!
//! @change
//!
//! @care
//! @todo
//-----------------------------------------------------------------------------------------------------
TVoid vControlEmergencyBrake(TVoid);


#endif /* SRC__APP_CONTROL_CONTROLBRAKES_H_ */
