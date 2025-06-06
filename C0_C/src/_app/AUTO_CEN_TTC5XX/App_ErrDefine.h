//**************************************************************************************************
//! @crc        2022125299
//! @file       App_ErrDefine.h
//! @brief      Generate by: HYDAC Controller Project - Code Builder Tool Chain
//! @ecu        TTC580
//! @dll        1.2.7 (Build: 080)
//! @dll itf    1.7.0
//! @build      2023-04-03 16:35:10
//! @Match      07-04-01-04
//! @PDT        2.11.72.172
//! @PdtProjVer 0.0.0
//! @created    2025-04-18 16:40:50   HYDAC/HCP-CC
//**************************************************************************************************

#ifndef __APP_ERRDEFINE_H__
#define __APP_ERRDEFINE_H__

#ifdef COMPILER_SWITCH_ACTIVE_2APP
#include <2App_ErrDefine.h>
#endif // COMPILER_SWITCH_ACTIVE_2APP

enum
{ //!< SetCondition - bit position
    SC_SET_ARU_RM_CO                 =    0,    //!< Condition to active RM Aru active to stop movement
    SC_SET_ARU_RADIO_CO              =    1,    //!< Condition to active RM Aru Radio to stop movement
    SC_SET_ARU_RM_C1                 =    2,    //!< Condition to active RM Aru active to stop movement
    SC_SET_ARU_RADIO_C1              =    3,    //!< Condition to active RM Aru Radio to stop movement
    SC_EV_FORWARD_OL                 =    4,    //!< Condition to active Ev forward open load when the low side output is pilot
    SC_EV_BACKWARD_OL                =    5,    //!< Condition to active Ev backward open load when the low side output is pilot
    SC_LOWSIDE_EV_FORWARD_OL         =    6,    //!< Condition to active low side Ev forward open load when Ev forward output is pilot
    SC_LOWSIDE_EV_BACKWARD_OL        =    7,    //!< Condition to active low side Ev forward open load when Ev backward output is pilot
    SC_DOWN_POSITION_OF_HOOK         =    8,    //!< Condition to active inconsistency NcNo of FrameRotationSensor2 when the position of hook is down
    SC_OPTION_MAT_MEASURE_ACTIVE     =    9,    //!< Set condition mat measure option is active
    SC_OPTION_GENERATOR_ACTIVE       =    10,    //!< Set condition generator option is active
    SC_SUPPLY_RADIO_ON               =    11,    //!< Set condition supply radio command is ON
    SC_ALARM_MANAGEMENT_BYPASS       =    12,    //!< Set condition bypass alarm management
    SC_ALARM_DISPLAY_BYPASS          =    13,    //!< Set condition bypass alarm management display
    SC_OPTION_WHITE_LIGHT_15746      =    14,    //!< Set condition white light 15746 option is active
    SC_2ND_PARK_BRAKE_ACTIVE         =    15,    //!< Set condition 2nd parking brake active
    SC_ACTIVE_FAULT_48XS             =    16,    //!< Set condition fault end Timeout from 48XS
    SC_DMC_ACTIVE_TIMEOUT_RX_SDO     =    17,    //!< Set condition to active timeout of DMC SDO RX
    SC_DMC_ACTIVE_TIMEOUT_RX_PDO     =    18    //!< Set condition to active timeout of DMC PDO RX
};

enum
{ //!< ReleaseCondition - bit position
    RC00_VEHICLE_STOPPED                      =    0,    //!< Release condition when vehicle is stopped
    RC01_VEHICLE_STOPPED_ALL_DISABLED_CMD     =    1,    //!< Release condition when vehicle is stopped and all command are disabled
    RC02_ARU_VEHICLE_STOPPED_C0               =    2,    //!< Release condition when aru is pressed and vehicle is stopped on C0
    RC03_TELESCOPE_IN_INDUCTIVE_ON            =    3,    //!< Release condition when telescope in position und detected inductive
    RC04_ALL_RADIO__CMDS_DISABLED             =    4,    //!< Release condition when all radio commands are disabled
    RC05_ARU_VEHICLE_STOPPED_C1               =    5,    //!< Release condition when aru is pressed and vehicle is stopped on C1
    RC06_RELEASE_BEHAVIOR                     =    6
};

enum
{ //!< RestrictedMode - bit position
    RM_ARU_ACTIVE_C0             =    0,    //!< if Aru contact is pushed , stop movement
    RM_ARU_ACTIVE_C1             =    1,    //!< if Aru contact is pushed , stop movement
    RM_ARU_RADIO_C0              =    2,    //!< if Aru contact of radio command is pushed , stop movement
    RM_STOP_MOVE_LIMIT_ENVLP     =    3,    //!< if stop all movement is detect by limit envelope function
    RM_COM_CAN_C0_C1_LOSS        =    4,    //!< if a communication can between C0 and C1 we trigged watchdog
    RM_COM_CAN_RADIO_LOSS        =    5,    //!< if a communication can between C0 and radio command we trigged watchdog
    RM_COM_CAN_48XS_LOSS         =    6    //!< if a communication can between C0 C1 and 48Xs we trigged watchdog
};

enum
{ //!< Fmi - bit position
    FMI_00_VALID_ABOVE_NORM_MOST_SEVERE      =    0,
    FMI_01_VALID_BELOW_NORM_MOST_SEVERE      =    1,
    FMI_02_DATA_INCORRECT                    =    2,
    FMI_03_VOLTAGE_HIGH_SHT_PWR              =    3,
    FMI_04_VOLTAGE_LOW_SHT_GND               =    4,
    FMI_05_CURRENT_LOW_OC                    =    5,
    FMI_06_CURRENT_HIGH_SHT_GND              =    6,
    FMI_07_MECH_SYS_NOT_RESP                 =    7,
    FMI_08_ABNORM_FREQ_PW_PER                =    8,
    FMI_09_ABNORM_UPDATE_RATE_TIMEOUT        =    9,
    FMI_10_ABNORM_RATE_OF_CHG                =    10,
    FMI_11_ROOT_CAUSE_UNKNOWN                =    11,
    FMI_12_BAD_DEVICE                        =    12,
    FMI_13_OUT_OF_CAL                        =    13,
    FMI_14_SPECIAL_INSTRUCTIONS              =    14,
    FMI_15_VALID_ABOVE_NORM_LEAST_SEVERE     =    15,
    FMI_16_VALID_ABOVE_NORM_MOD_SEVERE       =    16,
    FMI_17_VALID_BELOW_NORM_LEAST_SEVERE     =    17,
    FMI_18_VALID_BELOW_NORM_MOD_SEVERE       =    18,
    FMI_19_RCV_NETWORK_DATA_ERR              =    19,
    FMI_20_DATA_DRIFTED_HIGH                 =    20,
    FMI_21_DATA_DRIFTED_LOW                  =    21,
    FMI_22_NO_SIGNAL                         =    22,
    FMI_23_NOT_CALIBRATED                    =    23,
    FMI_24_LOGICAL_ERROR                     =    24,
    FMI_25_STUCK_OPEN                        =    25,
    FMI_26_OUT_OF_RANGE                      =    26,
    FMI_27_OC_SHT_GND                        =    27,
    FMI_28_OC_SHT_PWR                        =    28,
    FMI_29_RESERVE                           =    29,
    FMI_30_RESERVE                           =    30,
    FMI_31_CONDITION_EXISTS                  =    31
};

#endif // __APP_ERRDEFINE_H__

