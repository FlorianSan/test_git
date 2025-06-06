//**************************************************************************************************
//! @crc        2235123285
//! @file       App_DefEnu.h
//! @brief      Generate by: HYDAC Controller Project - Code Builder Tool Chain
//! @ecu        TTC580
//! @dll        1.2.7 (Build: 080)
//! @dll itf    1.7.0
//! @build      2023-04-03 16:35:10
//! @Match      07-04-01-04
//! @PDT        2.11.72.172
//! @PdtProjVer 0.0.0
//! @created    2025-06-04 11:35:59   HYDAC/HCP-CC
//**************************************************************************************************

#ifndef __APP_DEFENU_H__
#define __APP_DEFENU_H__

// INCLUDES ========================================================================================
#include <ItfTypes.h>



//!< ENUM-TYPES
typedef enum {
    GE_OSCI_SERVICE_BRAKE                                                           = 0,                            //!< oscillant service brake is selected
    GE_FIXE_SERVICE_BRAKE                                                           = 1,                            //!< fixe  service brake is selected
    GE_OSCI_PARKING_BRAKE                                                           = 2,                            //!< oscillant parkingbrake is selected
    GE_FIXE_PARKING_BRAKE                                                           = 3,                            //!< fixe parking brake is selected3
    GE_SERVICE_BRAKES                                                               = 4,                            //!< 2 service brakes are selected
    GE_PARKING_BRAKES                                                               = 5,                            //!< 2  parking brakes are selected
    GE_NO_BRAKE                                                                     = 6,                            //!< No brake is selected
    GE_FIXE_2ND_PARKING_BRAKE                                                       = 7,                            //!< fixe 2nd parking brake
    GE_OSCI_2ND_PARKING_BRAKE                                                       = 8,                            //!< Osci 2nd parking brake
    GE_EBRAKETESTSELECTED_16BIT                                                     = U16_MAX/2                     //!< 16-Bit-Define -> always use 16-bit (I16_MAX => 0x7FFF)
} EBrakeTestSelected; //!< current brake test selected on display screen 

typedef enum {
    GE_POST_NO_POST                                                                 = 0,                            //!< No post selected to control the vehicle
    GE_POST_RADIO                                                                   = 1,                            //!< Radio control post selected
    GE_POST_NACELLE                                                                 = 2,                            //!< Nacelle post selected
    GE_POST_TURRET                                                                  = 3,                            //!< Turret post selected
    GE_ECONTROLPOST_16BIT                                                           = U16_MAX/2                     //!< 16-Bit-Define -> always use 16-bit (I16_MAX => 0x7FFF)
} EControlPost; //!< control post enumartion 

typedef enum {
    GE_FRANCE                                                                       = 0,                            //!< France country configuration
    GE_SWITZERLAND                                                                  = 1,                            //!< Switzerland country configuration
    GE_UNITED_KINGDOM                                                               = 2,                            //!< United kingdom country configuration
    GE_AUSTRALIA                                                                    = 3,                            //!< Australia country configuration
    GE_ECOUNTRY_16BIT                                                               = U16_MAX/2                     //!< 16-Bit-Define -> always use 16-bit (I16_MAX => 0x7FFF)
} ECountry; //!< Country 

typedef enum {
    GE_DIG_OFF                                                                      = 0,                            //!< OFF
    GE_DIG_ON                                                                       = 1,                            //!< ON
    GE_DIG_ERROR                                                                    = 2,                            //!< Output is in error state, state is OFF
    GE_DIG_UNDEF                                                                    = 3,                            //!< Undefined
    GE_EDIGSTATUS_16BIT                                                             = U16_MAX/2                     //!< 16-Bit-Define -> always use 16-bit (I16_MAX => 0x7FFF)
} EDigStatus; //!< Cuurent status of a digital output 

typedef enum {
    GE_DI_OFF                                                                       = 0,                            //!< OFF
    GE_DI_ON                                                                        = 1,                            //!< ON
    GE_DI_ERROR                                                                     = 2,                            //!< DI state is error
    GE_DI_UNDEF                                                                     = 3,                            //!< Undefined
    GE_EDISTATE_16BIT                                                               = U16_MAX/2                     //!< 16-Bit-Define -> always use 16-bit (I16_MAX => 0x7FFF)
} EDiState; //!< Current status of digital input 

typedef enum {
    GE_IO_E_OK                                                                      = 0,                            //!< everything is fine, no error has occurred.
    GE_IO_E_BUSY                                                                    = 2,                            //!< Module or function is busy. This error is reported if a function or module has not yet finished its task.
    GE_IO_E_UNKNOWN                                                                 = 3,                            //!< General error. No further information can be provided.
    GE_IO_E_CHANNEL_BUSY                                                            = 32,                           //!< The IO channel (IO pin) is busy. This error is reported if a IO Pin has been initialized before
    GE_IO_E_CHANNEL_NOT_CONFIGURED                                                  = 33,                           //!< The IO channel (IO pin) has not been initialized. This error is reported if the channel has not been initialized.
    GE_IO_E_FET_PROTECTION                                                          = 35,                           //!< A internal switch (FET) protection has been detected.
    GE_IO_E_ADC_NOT_FINISH                                                          = 90,                           //!< A capture error occurred on a timer channel.
    GE_IO_E_PWD_CAPTURE_ERROR                                                       = 100,                          //!< A capture error occurred on a timer channel.
    GE_IO_E_PWD_NOT_FINISHED                                                        = 101,                          //!< The timer channel has not yet finished the measurement.
    GE_IO_E_PWD_OPEN_LOAD                                                           = 102,                          //!< An open load (or short to battery) condition has been detected.
    GE_IO_E_PWD_SHORT_CIRCUIT                                                       = 103,                          //!< A short circuit condition has been detected.
    GE_IO_E_PWD_TIMER_OVERFLOW                                                      = 104,                          //!< A timer overflow occurred.
    GE_IO_E_PWD_HIGH_LEVEL                                                          = 105,                          //!< A short circuit to UBAT or open connection has been detected.
    GE_IO_E_PWD_LOW_LEVEL                                                           = 106,                          //!< A short circuit to GND has been detected.
    GE_IO_E_PWD_CURRENT_THRESHOLD_HIGH                                              = 107,                          //!< A current out of range was detected (too high)
    GE_IO_E_PWD_CURRENT_THRESHOLD_LOW                                               = 108,                          //!< A current out of range was detected (too low)
    GE_IO_E_DO_OPEN_LOAD                                                            = 110,                          //!< An open load condition has been detected on a digital output.
    GE_IO_E_DO_SHORT_CIRCUIT                                                        = 111,                          //!< A short circuit condition to GND has been detected on a digital output.
    GE_IO_E_DO_DIAG_NOT_FINISHED                                                    = 112,                          //!< The diagnosis of the digital output could not be finished.
    GE_EERRORSTATUS48XS_16BIT                                                       = U16_MAX/2                     //!< 16-Bit-Define -> always use 16-bit (I16_MAX => 0x7FFF)
} EErrorStatus48XS; //!< Error code from I/O 48Xs 

typedef enum {
    GE_NEUTRAL                                                                      = 0,                            //!< Neutrale position of manipulator
    GE_AV                                                                           = 1,                            //!< AV position of manipulator
    GE_AR                                                                           = 2,                            //!< AR position of manipulator
    GE_ERROR                                                                        = 3,                            //!< Error position
    GE_EMANIPULATORPOSITION_16BIT                                                   = U16_MAX/2                     //!< 16-Bit-Define -> always use 16-bit (I16_MAX => 0x7FFF)
} EManipulatorPosition; //!< Position of manipulator on radio control 

typedef enum {
    GE_Stopped                                                                      = 0,                            //!< Stopped
    GE_PreStart                                                                     = 1,                            //!< PreStart
    GE_Starting                                                                     = 2,                            //!< Starting
    GE_WarmUp                                                                       = 3,                            //!< WarmUp
    GE_Running                                                                      = 4,                            //!< Running
    GE_CoolDown                                                                     = 5,                            //!< CoolDown
    GE_Stopping                                                                     = 6,                            //!< Stopping
    GE_PostRun                                                                      = 7,                            //!< PostRun
    GE_EMOTORSTATE_16BIT                                                            = U16_MAX/2                     //!< 16-Bit-Define -> always use 16-bit (I16_MAX => 0x7FFF)
} EMotorState; //!< Motor state 

typedef enum {
    GE_NO_MODE                                                                      = 0,                            //!< No mde defined
    GE_OFFRAIL_RADIOCONTOL_MODE                                                     = 1,                            //!< Off rail mode by radio control
    GE_RAIL_NACELLE_MODE                                                            = 2,                            //!< Rail mode by Nacelle station
    GE_TURRET_MODE                                                                  = 3,                            //!< Turret Mode control by display on turret
    GE_EMOVENACELLEMODE_16BIT                                                       = U16_MAX/2                     //!< 16-Bit-Define -> always use 16-bit (I16_MAX => 0x7FFF)
} EMoveNacelleMode; //!< Current mode for nacelle movement  

typedef enum {
    GE_NO_OFFRAIL_MODE                                                              = 0,                            //!< No Off rail mode id defined
    GE_TRANSPORT_OFFRAIL_MODE                                                       = 1,                            //!< Transport Off Rail mode
    GE_WORK_OFFRAIL_MODE                                                            = 2,                            //!< Work Off Rail Mode
    GE_WORSHOP_OFFRAIL_MODE                                                         = 3,                            //!< Worshop Off Rail Mode
    GE_EOFFRAILMODE_16BIT                                                           = U16_MAX/2                     //!< 16-Bit-Define -> always use 16-bit (I16_MAX => 0x7FFF)
} EOffRailMode; //!< Current mode of Off rail 

typedef enum {
    GE_AV_JOY                                                                       = 0,                            //!< Av position
    GE_NEU_JOY                                                                      = 1,                            //!< neutral position
    GE_AR_JOY                                                                       = 2,                            //!< Ar position
    GE_EPOSJOY_16BIT                                                                = U16_MAX/2                     //!< 16-Bit-Define -> always use 16-bit (I16_MAX => 0x7FFF)
} EPosJoy; //!< Position of joystick advancement 

typedef enum {
    GE_PRO_OFF                                                                      = 0,                            //!< OFF
    GE_PRO_ON                                                                       = 1,                            //!< ON
    GE_PRO_ERROR                                                                    = 2,                            //!< Output is in error state, state is OFF
    GE_PRO_NOT_INSTALLED                                                            = 3,                            //!< Output is not installed, i.e. not init or not on hardware
    GE_PRO_NO_DUTY_CYCLE                                                            = 4,                            //!< No loop control only no duty cycle
    GE_PRO_MIN_DUTY_CYCLE                                                           = 5,                            //!< No loop control only minimum duty cycle (5%)
    GE_EPROSTATUS_16BIT                                                             = U16_MAX/2                     //!< 16-Bit-Define -> always use 16-bit (I16_MAX => 0x7FFF)
} EProStatus; //!< Current status of a proportional output 

typedef enum {
    GE_NO_SPEED_MAX_RAIL_MODE                                                       = 0,                            //!< No rail speed max mode is defined
    GE_ACCESS_SITE_MODE                                                             = 1,                            //!< Acces site mode
    GE_HIGH_SPEED                                                                   = 2,                            //!< high speed
    GE_LOW_SPEED                                                                    = 3,                            //!< low speed
    GE_LOW_SPEED_BRAKE_TEST_NEEDED                                                  = 4,                            //!< low speed when test brake is needed
    GE_BRAKE_TEST_SPEED_RUNNING                                                     = 5,                            //!< speed apply when test brake is running
    GE_BREAK_IN_BRAKE_SPEED_RUNNING                                                 = 6,                            //!< speed apply when break in brake is running
    GE_ERAILSPEEDMODE_16BIT                                                         = U16_MAX/2                     //!< 16-Bit-Define -> always use 16-bit (I16_MAX => 0x7FFF)
} ERailSpeedMode; //!< Current mode of Rail speed 

typedef enum {
    GE_AV_RAIL_DIR                                                                  = 0,                            //!< Av direction of rail translation
    GE_AR_RAIL_DIR                                                                  = 1,                            //!< Ar direction of rail translation
    GE_STOP_RAIL_DIR                                                                = 2,                            //!< Stop direction of rail translation
    GE_ERAILTRANSLATIONDIRECTION_16BIT                                              = U16_MAX/2                     //!< 16-Bit-Define -> always use 16-bit (I16_MAX => 0x7FFF)
} ERailTranslationDirection; //!< Direction of rail translation to pilot light 

typedef enum {
    GE_NO_RAIL_WORK_MODE                                                            = 0,                            //!< No rail work mode selected
    GE_BILATERAL_MODE                                                               = 1,                            //!< Bilateral mode selected
    GE_ALO_MODE                                                                     = 2,                            //!< ALO mode selected
    GE_MULTILANE_MODE                                                               = 3,                            //!< Multi lane mode selected
    GE_ERAILWORKMODE_16BIT                                                          = U16_MAX/2                     //!< 16-Bit-Define -> always use 16-bit (I16_MAX => 0x7FFF)
} ERailWorkMode; //!< Currently selected rail work mode 

typedef enum {
    GE_OFF                                                                          = 0,                            //!< OFF = 0
    GE_ON                                                                           = 1,                            //!< ON = 1
    GE_ERR                                                                          = 2,                            //!< ERROR = 2
    GE_NA                                                                           = 3,                            //!< NOT AVAILABLE = 3
    GE_ESTATEBOOL2BITS_16BIT                                                        = U16_MAX/2                     //!< 16-Bit-Define -> always use 16-bit (I16_MAX => 0x7FFF)
} EStateBool2bits; //!< State bool 2 bits 

typedef enum {
    GE_BOOT_UP                                                                      = 0,                            //!< Boot up (Initialising)
    GE_STOPPED                                                                      = 4,                            //!< Stopped 
    GE_OPERATIONAL                                                                  = 5,                            //!< Operational  
    GE_PRE_OPERATIONAL                                                              = 127,                          //!< Pre-operational 
    GE_ESTATEHEARTBEAT_16BIT                                                        = U16_MAX/2                     //!< 16-Bit-Define -> always use 16-bit (I16_MAX => 0x7FFF)
} EStateHeartBeat; //!< State of heart beat CanOpen 

typedef enum {
    GE_DEFINE_BRAKE                                                                 = 0,                            //!< State to define the serive brake
    GE_AV_SERVICE_BRAKE                                                             = 1,                            //!< Service Brake since Av translation
    GE_AR_SERVICE_BRAKE                                                             = 2,                            //!< Service Brake since Ar translation
    GE_ESTATESERVICEBRAKERAIL_16BIT                                                 = U16_MAX/2                     //!< 16-Bit-Define -> always use 16-bit (I16_MAX => 0x7FFF)
} EStateServiceBrakeRail; //!< State of service brake rail translation 

typedef enum {
    GE_NO_TRANSPORT_POSITION                                                        = 0,                            //!< no transport position is detected
    GE_OFFRAIL_TRANSPORT_POSITION                                                   = 1,                            //!< off rail transport is detected
    GE_RAIL_TRANSPORT_POSITION                                                      = 2,                            //!< rail transport is detected
    GE_ETRANSPORTPOSITION_16BIT                                                     = U16_MAX/2                     //!< 16-Bit-Define -> always use 16-bit (I16_MAX => 0x7FFF)
} ETransportPosition; //!< current transport position of machine 

typedef enum {
    GE_RUNNING                                                                      = 6,                            //!< Watchdog is running and has not been triggered
    GE_TRIGGERED                                                                    = 9,                            //!< Watchdog has been triggered, all outputs are shutoff
    GE_EWDSTATE_16BIT                                                               = U16_MAX/2                     //!< 16-Bit-Define -> always use 16-bit (I16_MAX => 0x7FFF)
} EWdState; //!< State of Watchdog 

//!< DB-ENUM-TYPES
#define EBRAKETESTSELECTED_TYPE TUINT16
#define ECONTROLPOST_TYPE TUINT16
#define ECOUNTRY_TYPE TUINT16
#define EDIGSTATUS_TYPE TUINT16
#define EDISTATE_TYPE TUINT16
#define EERRORSTATUS48XS_TYPE TUINT16
#define EMANIPULATORPOSITION_TYPE TUINT16
#define EMOTORSTATE_TYPE TUINT16
#define EMOVENACELLEMODE_TYPE TUINT16
#define EOFFRAILMODE_TYPE TUINT16
#define EPOSJOY_TYPE TUINT16
#define EPROSTATUS_TYPE TUINT16
#define ERAILSPEEDMODE_TYPE TUINT16
#define ERAILTRANSLATIONDIRECTION_TYPE TUINT16
#define ERAILWORKMODE_TYPE TUINT16
#define ESTATEBOOL2BITS_TYPE TUINT16
#define ESTATEHEARTBEAT_TYPE TUINT16
#define ESTATESERVICEBRAKERAIL_TYPE TUINT16
#define ETRANSPORTPOSITION_TYPE TUINT16
#define EWDSTATE_TYPE TUINT16

#endif // __APP_DEFENU_H__
