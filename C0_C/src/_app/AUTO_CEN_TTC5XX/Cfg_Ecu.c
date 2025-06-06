//**************************************************************************************************
//! @crc        3949869573
//! @file       Cfg_Ecu.c
//! @brief      Generate by: HYDAC Controller Project - Code Builder Tool Chain
//! @ecu        TTC580
//! @dll        1.2.7 (Build: 080)
//! @dll itf    1.7.0
//! @build      2023-04-03 16:35:10
//! @Pattern    1.3.3
//! @Subpattern ----
//! @Match      07-04-01-04
//! @PDT        2.11.72.172
//! @PdtProjVer 0.0.0
//! @created    2025-06-04 11:35:59   HYDAC/HCP-CC
//**************************************************************************************************

// INCLUDES ========================================================================================
#include <ItfCoreEcu.h>
#include <ItfBloCBuf.h>
#include <Cfg_CBuf.h>

// GLOBAL VARIABLES ================================================================================
// Software Module Name: AppPrivate
TEcuSys gEcu_tSys= 
{
   // ECU Indicator
    0,                                                      //u8EcuNo                - [NUM] Network controller number
   // ECU Setting
    14,                                                     //u8EcuVoltage           - [V] ECU operating voltage  
    3000,                                                   //u16DiagnosticTime      - [ms] ECU diagnostic time 
    50,                                                     //u16EcuPowerOffTime     - [ms] ECU power off detection time
    // Only TTC5XX - WakeUp
    30,                                                     //u16WaitAfterWakeUp     - [s] Wait wake uptime[sec,0xFFFF=WAKEUP_NO_EXIT]
    TRUE,                                                   //boShutDownAfterWakeUp  - [DEF] Shut down after WakeUp [Default=TRUE] 
    // Password Application setting 
    TRUE,                                                   //boAppPwCheck           - [DEF] Application password check   
    {// SIL Setting 
        1,                                                  //u8SilLevel             - [DEF] Safety Level - 0 = Without SIL errors, 1 = with SIL-Errors
        20,                                                 //u16EcuTaskTime         - [ms] Task time
        9000,                                               //u16EcuBatLow           - [mV] ECU battery supply voltage     - Lowest valid value
        19000,                                              //u16EcuBatHigh          - [mV] ECU battery supply voltage     - Highest valid value
        -40,                                                //i16EcuTempLow          - [°C] ECU temperature        - Lowest valid value
        80,                                                 //i16EcuTempHigh         - [°C] ECU temperature        - Highest valid value
        4900,                                               //u16SensorSsLow         - [mV] Sensor Supply 5V       - Lowest valid value
        5100,                                               //u16SensorSsHigh        - [mV] Sensor Supply 5V       - Highest valid value
        5000,                                               //u16SensorVsLow         - [mV] Variable Sensor Supply - Lowest valid value
        10500                                               //u16SensorVsHigh        - [mV] Variable Sensor Supply - Highest valid value
    },
    //TTC50/TTC60 (not TTC90 have an HW Watchdog)
    14,                                                     //u16WdTimeout           - [ms] Watchdog timeout
    {// Fault Stack 
        0,                                                  //u8FaultParmIdx         - [NUM] If a Parameter change -> format the Error-Stack
        FAULT_MODE_ECU,                                     //eFaultMode             - [DEF] Fault mode 
        TRUE,                                               //boFaultDoubleMode      - [DEF] Fault/Event store double mode 
        TRUE,                                               //boFaultEventStore      - [DEF] Change store event 
        1200,                                               //u16FaultStoreTime      - [s] Dealer time between two stores
        TRUE,                                               //boFaultRestartDeactive - [DEF] After ECU restart all faults deactive
        100,                                                //u16DelFaultDealer      - [h]   Dealer:   Delete fault stack (0 - No deletetion)      (Max. approx. 7 years)
        100                                                 //u16DelFaultEngineer    - [h]   Engineer: Delete Fault/Event-stack 0 - No deletetion)      (Max. approx. 7 years)
    }
};
