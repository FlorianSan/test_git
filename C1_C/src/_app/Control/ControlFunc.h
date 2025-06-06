//**************************************************************************************************
//! @file Control.h
//! @brief Control system
//! @author Christian Klein (CK)
//! @created 23.07.2018 HYDAC/CK
//! copyrights (c) all rights reserved by HYDAC International
//**************************************************************************************************

#ifndef SRC__APP_CONTROL_CONTROLFUNC_H_
#define SRC__APP_CONTROL_CONTROLFUNC_H_


// INCLUDES =======================================================================================
#include <ItfTypes.h>
#include <App_LibTab.h>
#include <CustomLibrary.h>
#include <ItfBasMath.h>
#include <RotationTurretFunc.h>
#include <RotationBasketFunc.h>
#include <InclinaisonBasketFunc.h>
#include <PendularFunc.h>
#include <PvgEvTorFunc.h>
#include <BypassFunc.h>
#include <DeltaArmFunc.h>
#include <ArrowArmFunc.h>
#include <TelescopeArmFunc.h>
#include <LimitationControl.h>
#include <MotorElectricRpm.h>
#include <MotorFunc.h>
#include <OverloadSecurity.h>
#include <OrangeFlashingLightFunc.h>
#include <AxleFunc.h>
#include <LimitWorkEnvelope.h>
#include <AutoStopFunc.h>
#include <EndStopManagement.h>
#include <ControlMast.h>
//NEOTEC
#include <BuzzerFunc.h>
//NEOTEC
//NEOTEC WARNING
#include <SafetyArrowArmLimitation.h>
#include <SafetyDeltaArmLimitation.h>
#include <SafetyRotationTurretLimitation.h>
#include <SafetyMotor.h>
//NEOTEC WARNING

// GLOBAL DEFINES =================================================================================

// GLOBAL TYPE DEFINITON ==========================================================================
extern TSigRampAdr		tDeltaArmRamp;								// ramp to control Arm delta
extern TSigRampAdr		tArrowArmRamp;								// ramp to control Arm arrow
extern TSigRampAdr		tTelescopeArmRamp;							// ramp to control Arm telescope
extern TSigRampAdr		tRotTurretRamp;								// ramp to control roration turret
extern TSigRampAdr		tPvgEvTorRamp;								// ramp to control output Pvg Ev Tor
extern TEleTimAdr		tTimerSartUpMotor;							// Timer to start up motor
extern TEleTimAdr		tTimerPreheating;							// Timer to control preheating motor
extern TEleTimAdr		tTimerAntiStartUp;						// Timer to control anti demarrage
//NEOTEC
extern TSigRampAdr		tPropEvGeneratorRamp;						// ramp to control output Pror Generator
extern TSigRampAdr		tBlinkLowRamp;									// ramp to control Blink Low Frequency
//NEOTEC

// GLOBAL VARIABLES DECLARATIONS ==================================================================
//NEOTEC
extern TBoolean bo_ARU_C1_Actived; //Global Variable
//NEOTEC

// GLOBAL PROTOTYPES DECLARATIONS =================================================================

//-----------------------------------------------------------------------------------------------------
//! @brief Control system
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
extern TVoid vControl(TVoid);

//-----------------------------------------------------------------------------------------------------
//! @brief defined digital command
//!
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 29.10.2018 HYDAC/CK
//!
//! @change
//!
//! @care
//! @todo
//-----------------------------------------------------------------------------------------------------
TVoid vDefinedDigitalCommand(TVoid);

#endif /* SRC__APP_CONTROL_CONTROLFUNC_H_ */


