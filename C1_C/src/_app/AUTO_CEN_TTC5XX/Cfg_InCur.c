//**************************************************************************************************
//! @crc        367683334
//! @file       Cfg_InCur.c
//! @brief      Generate by: HYDAC Controller Project - Code Builder Tool Chain
//! @ecu        TTC580
//! @dll        1.2.7 (Build: 080)
//! @dll itf    1.7.0
//! @build      2023-04-03 16:35:10
//! @Pattern    1.13.1.0
//! @Subpattern 0.0.4
//! @Match      07-04-01-04
//! @PDT        2.11.72.172
//! @PdtProjVer 0.0.0
//! @created    2025-04-18 16:40:50   HYDAC/HCP-CC
//**************************************************************************************************

// INCLUDES ========================================================================================
#include <ItfBloInCur.h> 

// GLOBAL VARIABLES ================================================================================
//Sofware Module Name: AppGlobal
PUBLIC_VAR const TInCurCfg gInCur_ctCfg_Transmission1PressureSensor =
{
    // Common
    "Transmission1PressureSensor",                          //achName                - [STR] Display-Information-String
    BLO_RELEASE,                                            //eBloProc               - [ENU] Block behavior
    // Fixed settings
    {
        FALSE                                               //boDummy                - [BOO] Dummy
    },
    // Properties
    {
        INPBEH_ERR_TO_OUT,                                  //eInpBeh                - [ENU] Input behavior at error on input
        PIN_103,                                            //ePin                   - [ENU] Pin (Cfg-Idx) channel
        {
            {21000, {DB_LINK_NA, DB_LINK_NA, DB_LINK_NA}},  //au16InLim[0]           - [uA]  Short to PWR detection limit for channel
            {1000, {DB_LINK_NA, DB_LINK_NA, DB_LINK_NA}}    //au16InLim[1]           - [uA]  Short to GND detection limit for channel
        },
        0, {DB_LINK_NA, DB_LINK_NA, DB_LINK_NA},            //u8DeadZone             - [%]   Dead zone
        {
            {VAR_NA, {5, 154, 0}},                          //ai16OutChar[0]         - [CUS] Output characteristic POS value
            {VAR_NA, {5, 155, 0}},                          //ai16OutChar[1]         - [CUS] Output characteristic NEU value
            {VAR_NA, {5, 156, 0}}                           //ai16OutChar[2]         - [CUS] Output characteristic NEG value
        }
    },
    // Parameter
    {
        {
            {VAR_NA, {5, 157, 0}},                          //ai16InChar[0]          - [uA]  Input characteristic POS value
            {VAR_NA, {5, 158, 0}},                          //ai16InChar[1]          - [uA]  Input characteristic NEU value
            {VAR_NA, {5, 159, 0}}                           //ai16InChar[2]          - [uA]  Input characteristic NEG value
        },
        4000, {DB_LINK_NA, DB_LINK_NA, DB_LINK_NA},         //u16InpValDefault       - [uA]  Default input value for channel (input behavior)
    },
    // All Errors
    4,                                                      //u8ErrCnt               - [DEF] Error Count
    // All Errors [0-3]
    { // TErrCfgFea
        { //ErrTag[0] - Master input signal short to power [DM_INCUR_SP]
            9008,                                           //u32ErrNum              - [num] Error Number
            FMI_03_VOLTAGE_HIGH_SHT_PWR,                    //u8ErrMode              - [enu] Failure Mode Indicator
            FMIEX_NONE,                                     //u8ErrModeExt           - [def] Extended Failure Mode Indicator
            0xAAAA,                                         //u16ErrAccLevel         - [def] Failure Access Level
            ERR_TYPE_ERROR,                                 //u8ErrType              - [enu] Error Type
            ERR_CAT5_MAL,                                   //u8ErrCat               - [enu] Error Category ( Lamp Type )
            ERR_STORE_NOT,                                  //u8ErrStore             - [enu] Error Store Behavior
            EG_NONE,                                        //u8ExcludeGroup         - [def] Error Exclude Group
            SC_NONE,                                        //u8SetCond              - [def] Set Condition - allows to activate an error detection
            500,                                            //u32TimeDetect          - [ms]  Error Detection ( Debounce ) Time
            FALSE,                                          //boDetectDboAfterSc     - [boo] Start debounce timer after a valid set condition
            RC_NONE,                                        //u8ReleaCond            - [def] Release Condition - allows an error to be released ( removed )
            0,                                              //u32TimeReset           - [ms]  Error Release ( Debounce ) Time
            FALSE,                                          //boResetDboAfterRc      - [boo] Start debounce timer after a valid release condition 
            RM_NONE,                                        //u8RestrictMode         - [def] Restricted Mode
            0,                                              //u8InfoVarIdx           - [num] Array Index of Error Information Page
            TRUE,                                           //boCustList             - [boo] Memorized in a Customer List
            DIS_NONE                                        //u8DisplayOutput        - [def] Display Output ( Error Output Interface )
        },
        { //ErrTag[1] - Master input signal short to ground [DM_INCUR_SG_OL]
            9009,                                           //u32ErrNum              - [num] Error Number
            FMI_04_VOLTAGE_LOW_SHT_GND,                     //u8ErrMode              - [enu] Failure Mode Indicator
            FMIEX_NONE,                                     //u8ErrModeExt           - [def] Extended Failure Mode Indicator
            0xAAAA,                                         //u16ErrAccLevel         - [def] Failure Access Level
            ERR_TYPE_ERROR,                                 //u8ErrType              - [enu] Error Type
            ERR_CAT5_MAL,                                   //u8ErrCat               - [enu] Error Category ( Lamp Type )
            ERR_STORE_NOT,                                  //u8ErrStore             - [enu] Error Store Behavior
            EG_NONE,                                        //u8ExcludeGroup         - [def] Error Exclude Group
            SC_NONE,                                        //u8SetCond              - [def] Set Condition - allows to activate an error detection
            500,                                            //u32TimeDetect          - [ms]  Error Detection ( Debounce ) Time
            FALSE,                                          //boDetectDboAfterSc     - [boo] Start debounce timer after a valid set condition
            RC_NONE,                                        //u8ReleaCond            - [def] Release Condition - allows an error to be released ( removed )
            0,                                              //u32TimeReset           - [ms]  Error Release ( Debounce ) Time
            FALSE,                                          //boResetDboAfterRc      - [boo] Start debounce timer after a valid release condition 
            RM_NONE,                                        //u8RestrictMode         - [def] Restricted Mode
            0,                                              //u8InfoVarIdx           - [num] Array Index of Error Information Page
            TRUE,                                           //boCustList             - [boo] Memorized in a Customer List
            DIS_NONE                                        //u8DisplayOutput        - [def] Display Output ( Error Output Interface )
        },
        { //ErrTag[2] - Parameter of input char NOT monoton [DM_INCUR_PARAM]
            9010,                                           //u32ErrNum              - [num] Error Number
            FMI_24_LOGICAL_ERROR,                           //u8ErrMode              - [enu] Failure Mode Indicator
            FMIEX_NONE,                                     //u8ErrModeExt           - [def] Extended Failure Mode Indicator
            0xAAAA,                                         //u16ErrAccLevel         - [def] Failure Access Level
            ERR_TYPE_ERROR,                                 //u8ErrType              - [enu] Error Type
            ERR_CAT5_MAL,                                   //u8ErrCat               - [enu] Error Category ( Lamp Type )
            ERR_STORE_NOT,                                  //u8ErrStore             - [enu] Error Store Behavior
            EG_NONE,                                        //u8ExcludeGroup         - [def] Error Exclude Group
            SC_NONE,                                        //u8SetCond              - [def] Set Condition - allows to activate an error detection
            500,                                            //u32TimeDetect          - [ms]  Error Detection ( Debounce ) Time
            FALSE,                                          //boDetectDboAfterSc     - [boo] Start debounce timer after a valid set condition
            RC_NONE,                                        //u8ReleaCond            - [def] Release Condition - allows an error to be released ( removed )
            0,                                              //u32TimeReset           - [ms]  Error Release ( Debounce ) Time
            FALSE,                                          //boResetDboAfterRc      - [boo] Start debounce timer after a valid release condition 
            RM_NONE,                                        //u8RestrictMode         - [def] Restricted Mode
            0,                                              //u8InfoVarIdx           - [num] Array Index of Error Information Page
            TRUE,                                           //boCustList             - [boo] Memorized in a Customer List
            DIS_NONE                                        //u8DisplayOutput        - [def] Display Output ( Error Output Interface )
        },
        { //ErrTag[3] - Unknown internal error [DM_INCUR_UNKNOWN]
            9011,                                           //u32ErrNum              - [num] Error Number
            FMI_12_BAD_DEVICE,                              //u8ErrMode              - [enu] Failure Mode Indicator
            FMIEX_NONE,                                     //u8ErrModeExt           - [def] Extended Failure Mode Indicator
            0xAAAA,                                         //u16ErrAccLevel         - [def] Failure Access Level
            ERR_TYPE_ERROR,                                 //u8ErrType              - [enu] Error Type
            ERR_CAT5_MAL,                                   //u8ErrCat               - [enu] Error Category ( Lamp Type )
            ERR_STORE_NOT,                                  //u8ErrStore             - [enu] Error Store Behavior
            EG_NONE,                                        //u8ExcludeGroup         - [def] Error Exclude Group
            SC_NONE,                                        //u8SetCond              - [def] Set Condition - allows to activate an error detection
            500,                                            //u32TimeDetect          - [ms]  Error Detection ( Debounce ) Time
            FALSE,                                          //boDetectDboAfterSc     - [boo] Start debounce timer after a valid set condition
            RC_NONE,                                        //u8ReleaCond            - [def] Release Condition - allows an error to be released ( removed )
            1000,                                           //u32TimeReset           - [ms]  Error Release ( Debounce ) Time
            FALSE,                                          //boResetDboAfterRc      - [boo] Start debounce timer after a valid release condition 
            RM_NONE,                                        //u8RestrictMode         - [def] Restricted Mode
            0,                                              //u8InfoVarIdx           - [num] Array Index of Error Information Page
            TRUE,                                           //boCustList             - [boo] Memorized in a Customer List
            DIS_NONE                                        //u8DisplayOutput        - [def] Display Output ( Error Output Interface )
        }
    }
};

//Sofware Module Name: AppGlobal
PUBLIC_VAR const TInCurCfg gInCur_ctCfg_Transmission2PressureSensor =
{
    // Common
    "Transmission2PressureSensor",                          //achName                - [STR] Display-Information-String
    BLO_RELEASE,                                            //eBloProc               - [ENU] Block behavior
    // Fixed settings
    {
        FALSE                                               //boDummy                - [BOO] Dummy
    },
    // Properties
    {
        INPBEH_ERR_TO_OUT,                                  //eInpBeh                - [ENU] Input behavior at error on input
        PIN_127,                                            //ePin                   - [ENU] Pin (Cfg-Idx) channel
        {
            {21000, {DB_LINK_NA, DB_LINK_NA, DB_LINK_NA}},  //au16InLim[0]           - [uA]  Short to PWR detection limit for channel
            {1000, {DB_LINK_NA, DB_LINK_NA, DB_LINK_NA}}    //au16InLim[1]           - [uA]  Short to GND detection limit for channel
        },
        0, {DB_LINK_NA, DB_LINK_NA, DB_LINK_NA},            //u8DeadZone             - [%]   Dead zone
        {
            {VAR_NA, {5, 160, 0}},                          //ai16OutChar[0]         - [CUS] Output characteristic POS value
            {VAR_NA, {5, 161, 0}},                          //ai16OutChar[1]         - [CUS] Output characteristic NEU value
            {VAR_NA, {5, 162, 0}}                           //ai16OutChar[2]         - [CUS] Output characteristic NEG value
        }
    },
    // Parameter
    {
        {
            {VAR_NA, {5, 163, 0}},                          //ai16InChar[0]          - [uA]  Input characteristic POS value
            {VAR_NA, {5, 164, 0}},                          //ai16InChar[1]          - [uA]  Input characteristic NEU value
            {VAR_NA, {5, 165, 0}}                           //ai16InChar[2]          - [uA]  Input characteristic NEG value
        },
        4000, {DB_LINK_NA, DB_LINK_NA, DB_LINK_NA},         //u16InpValDefault       - [uA]  Default input value for channel (input behavior)
    },
    // All Errors
    4,                                                      //u8ErrCnt               - [DEF] Error Count
    // All Errors [0-3]
    { // TErrCfgFea
        { //ErrTag[0] - Master input signal short to power [DM_INCUR_SP]
            9048,                                           //u32ErrNum              - [num] Error Number
            FMI_03_VOLTAGE_HIGH_SHT_PWR,                    //u8ErrMode              - [enu] Failure Mode Indicator
            FMIEX_NONE,                                     //u8ErrModeExt           - [def] Extended Failure Mode Indicator
            0xAAAA,                                         //u16ErrAccLevel         - [def] Failure Access Level
            ERR_TYPE_ERROR,                                 //u8ErrType              - [enu] Error Type
            ERR_CAT5_MAL,                                   //u8ErrCat               - [enu] Error Category ( Lamp Type )
            ERR_STORE_NOT,                                  //u8ErrStore             - [enu] Error Store Behavior
            EG_NONE,                                        //u8ExcludeGroup         - [def] Error Exclude Group
            SC_NONE,                                        //u8SetCond              - [def] Set Condition - allows to activate an error detection
            500,                                            //u32TimeDetect          - [ms]  Error Detection ( Debounce ) Time
            FALSE,                                          //boDetectDboAfterSc     - [boo] Start debounce timer after a valid set condition
            RC_NONE,                                        //u8ReleaCond            - [def] Release Condition - allows an error to be released ( removed )
            0,                                              //u32TimeReset           - [ms]  Error Release ( Debounce ) Time
            FALSE,                                          //boResetDboAfterRc      - [boo] Start debounce timer after a valid release condition 
            RM_NONE,                                        //u8RestrictMode         - [def] Restricted Mode
            0,                                              //u8InfoVarIdx           - [num] Array Index of Error Information Page
            TRUE,                                           //boCustList             - [boo] Memorized in a Customer List
            DIS_NONE                                        //u8DisplayOutput        - [def] Display Output ( Error Output Interface )
        },
        { //ErrTag[1] - Master input signal short to ground [DM_INCUR_SG_OL]
            9049,                                           //u32ErrNum              - [num] Error Number
            FMI_04_VOLTAGE_LOW_SHT_GND,                     //u8ErrMode              - [enu] Failure Mode Indicator
            FMIEX_NONE,                                     //u8ErrModeExt           - [def] Extended Failure Mode Indicator
            0xAAAA,                                         //u16ErrAccLevel         - [def] Failure Access Level
            ERR_TYPE_ERROR,                                 //u8ErrType              - [enu] Error Type
            ERR_CAT5_MAL,                                   //u8ErrCat               - [enu] Error Category ( Lamp Type )
            ERR_STORE_NOT,                                  //u8ErrStore             - [enu] Error Store Behavior
            EG_NONE,                                        //u8ExcludeGroup         - [def] Error Exclude Group
            SC_NONE,                                        //u8SetCond              - [def] Set Condition - allows to activate an error detection
            500,                                            //u32TimeDetect          - [ms]  Error Detection ( Debounce ) Time
            FALSE,                                          //boDetectDboAfterSc     - [boo] Start debounce timer after a valid set condition
            RC_NONE,                                        //u8ReleaCond            - [def] Release Condition - allows an error to be released ( removed )
            0,                                              //u32TimeReset           - [ms]  Error Release ( Debounce ) Time
            FALSE,                                          //boResetDboAfterRc      - [boo] Start debounce timer after a valid release condition 
            RM_NONE,                                        //u8RestrictMode         - [def] Restricted Mode
            0,                                              //u8InfoVarIdx           - [num] Array Index of Error Information Page
            TRUE,                                           //boCustList             - [boo] Memorized in a Customer List
            DIS_NONE                                        //u8DisplayOutput        - [def] Display Output ( Error Output Interface )
        },
        { //ErrTag[2] - Parameter of input char NOT monoton [DM_INCUR_PARAM]
            9050,                                           //u32ErrNum              - [num] Error Number
            FMI_24_LOGICAL_ERROR,                           //u8ErrMode              - [enu] Failure Mode Indicator
            FMIEX_NONE,                                     //u8ErrModeExt           - [def] Extended Failure Mode Indicator
            0xAAAA,                                         //u16ErrAccLevel         - [def] Failure Access Level
            ERR_TYPE_ERROR,                                 //u8ErrType              - [enu] Error Type
            ERR_CAT5_MAL,                                   //u8ErrCat               - [enu] Error Category ( Lamp Type )
            ERR_STORE_NOT,                                  //u8ErrStore             - [enu] Error Store Behavior
            EG_NONE,                                        //u8ExcludeGroup         - [def] Error Exclude Group
            SC_NONE,                                        //u8SetCond              - [def] Set Condition - allows to activate an error detection
            500,                                            //u32TimeDetect          - [ms]  Error Detection ( Debounce ) Time
            FALSE,                                          //boDetectDboAfterSc     - [boo] Start debounce timer after a valid set condition
            RC_NONE,                                        //u8ReleaCond            - [def] Release Condition - allows an error to be released ( removed )
            0,                                              //u32TimeReset           - [ms]  Error Release ( Debounce ) Time
            FALSE,                                          //boResetDboAfterRc      - [boo] Start debounce timer after a valid release condition 
            RM_NONE,                                        //u8RestrictMode         - [def] Restricted Mode
            0,                                              //u8InfoVarIdx           - [num] Array Index of Error Information Page
            TRUE,                                           //boCustList             - [boo] Memorized in a Customer List
            DIS_NONE                                        //u8DisplayOutput        - [def] Display Output ( Error Output Interface )
        },
        { //ErrTag[3] - Unknown internal error [DM_INCUR_UNKNOWN]
            9051,                                           //u32ErrNum              - [num] Error Number
            FMI_12_BAD_DEVICE,                              //u8ErrMode              - [enu] Failure Mode Indicator
            FMIEX_NONE,                                     //u8ErrModeExt           - [def] Extended Failure Mode Indicator
            0xAAAA,                                         //u16ErrAccLevel         - [def] Failure Access Level
            ERR_TYPE_ERROR,                                 //u8ErrType              - [enu] Error Type
            ERR_CAT5_MAL,                                   //u8ErrCat               - [enu] Error Category ( Lamp Type )
            ERR_STORE_NOT,                                  //u8ErrStore             - [enu] Error Store Behavior
            EG_NONE,                                        //u8ExcludeGroup         - [def] Error Exclude Group
            SC_NONE,                                        //u8SetCond              - [def] Set Condition - allows to activate an error detection
            500,                                            //u32TimeDetect          - [ms]  Error Detection ( Debounce ) Time
            FALSE,                                          //boDetectDboAfterSc     - [boo] Start debounce timer after a valid set condition
            RC_NONE,                                        //u8ReleaCond            - [def] Release Condition - allows an error to be released ( removed )
            1000,                                           //u32TimeReset           - [ms]  Error Release ( Debounce ) Time
            FALSE,                                          //boResetDboAfterRc      - [boo] Start debounce timer after a valid release condition 
            RM_NONE,                                        //u8RestrictMode         - [def] Restricted Mode
            0,                                              //u8InfoVarIdx           - [num] Array Index of Error Information Page
            TRUE,                                           //boCustList             - [boo] Memorized in a Customer List
            DIS_NONE                                        //u8DisplayOutput        - [def] Display Output ( Error Output Interface )
        }
    }
};

//Sofware Module Name: AppGlobal
PUBLIC_VAR const TInCurCfg gInCur_ctCfg_BypassPressureSensor =
{
    // Common
    "BypassPressureSensor",                                 //achName                - [STR] Display-Information-String
    BLO_RELEASE,                                            //eBloProc               - [ENU] Block behavior
    // Fixed settings
    {
        FALSE                                               //boDummy                - [BOO] Dummy
    },
    // Properties
    {
        INPBEH_ERR_TO_OUT,                                  //eInpBeh                - [ENU] Input behavior at error on input
        PIN_130,                                            //ePin                   - [ENU] Pin (Cfg-Idx) channel
        {
            {21000, {DB_LINK_NA, DB_LINK_NA, DB_LINK_NA}},  //au16InLim[0]           - [uA]  Short to PWR detection limit for channel
            {1000, {DB_LINK_NA, DB_LINK_NA, DB_LINK_NA}}    //au16InLim[1]           - [uA]  Short to GND detection limit for channel
        },
        0, {DB_LINK_NA, DB_LINK_NA, DB_LINK_NA},            //u8DeadZone             - [%]   Dead zone
        {
            {2500, {DB_LINK_NA, DB_LINK_NA, DB_LINK_NA}},   //ai16OutChar[0]         - [CUS] Output characteristic POS value
            { 0, {DB_LINK_NA, DB_LINK_NA, DB_LINK_NA}},     //ai16OutChar[1]         - [CUS] Output characteristic NEU value
            { 0, {DB_LINK_NA, DB_LINK_NA, DB_LINK_NA}}      //ai16OutChar[2]         - [CUS] Output characteristic NEG value
        }
    },
    // Parameter
    {
        {
            {20000, {DB_LINK_NA, DB_LINK_NA, DB_LINK_NA}},  //ai16InChar[0]          - [uA]  Input characteristic POS value
            {4000, {DB_LINK_NA, DB_LINK_NA, DB_LINK_NA}},   //ai16InChar[1]          - [uA]  Input characteristic NEU value
            {4000, {DB_LINK_NA, DB_LINK_NA, DB_LINK_NA}}    //ai16InChar[2]          - [uA]  Input characteristic NEG value
        },
        4000, {DB_LINK_NA, DB_LINK_NA, DB_LINK_NA},         //u16InpValDefault       - [uA]  Default input value for channel (input behavior)
    },
    // All Errors
    4,                                                      //u8ErrCnt               - [DEF] Error Count
    // All Errors [0-3]
    { // TErrCfgFea
        { //ErrTag[0] - Master input signal short to power [DM_INCUR_SP]
            9173,                                           //u32ErrNum              - [num] Error Number
            FMI_03_VOLTAGE_HIGH_SHT_PWR,                    //u8ErrMode              - [enu] Failure Mode Indicator
            FMIEX_NONE,                                     //u8ErrModeExt           - [def] Extended Failure Mode Indicator
            0xAAAA,                                         //u16ErrAccLevel         - [def] Failure Access Level
            ERR_TYPE_ERROR,                                 //u8ErrType              - [enu] Error Type
            ERR_CAT5_MAL,                                   //u8ErrCat               - [enu] Error Category ( Lamp Type )
            ERR_STORE_NOT,                                  //u8ErrStore             - [enu] Error Store Behavior
            EG_NONE,                                        //u8ExcludeGroup         - [def] Error Exclude Group
            SC_NONE,                                        //u8SetCond              - [def] Set Condition - allows to activate an error detection
            500,                                            //u32TimeDetect          - [ms]  Error Detection ( Debounce ) Time
            FALSE,                                          //boDetectDboAfterSc     - [boo] Start debounce timer after a valid set condition
            RC_NONE,                                        //u8ReleaCond            - [def] Release Condition - allows an error to be released ( removed )
            1000,                                           //u32TimeReset           - [ms]  Error Release ( Debounce ) Time
            FALSE,                                          //boResetDboAfterRc      - [boo] Start debounce timer after a valid release condition 
            RM_NONE,                                        //u8RestrictMode         - [def] Restricted Mode
            0,                                              //u8InfoVarIdx           - [num] Array Index of Error Information Page
            TRUE,                                           //boCustList             - [boo] Memorized in a Customer List
            DIS_NONE                                        //u8DisplayOutput        - [def] Display Output ( Error Output Interface )
        },
        { //ErrTag[1] - Master input signal short to ground [DM_INCUR_SG_OL]
            9174,                                           //u32ErrNum              - [num] Error Number
            FMI_04_VOLTAGE_LOW_SHT_GND,                     //u8ErrMode              - [enu] Failure Mode Indicator
            FMIEX_NONE,                                     //u8ErrModeExt           - [def] Extended Failure Mode Indicator
            0xAAAA,                                         //u16ErrAccLevel         - [def] Failure Access Level
            ERR_TYPE_ERROR,                                 //u8ErrType              - [enu] Error Type
            ERR_CAT5_MAL,                                   //u8ErrCat               - [enu] Error Category ( Lamp Type )
            ERR_STORE_NOT,                                  //u8ErrStore             - [enu] Error Store Behavior
            EG_NONE,                                        //u8ExcludeGroup         - [def] Error Exclude Group
            SC_ALARM_MANAGEMENT_BYPASS,                     //u8SetCond              - [def] Set Condition - allows to activate an error detection
            500,                                            //u32TimeDetect          - [ms]  Error Detection ( Debounce ) Time
            FALSE,                                          //boDetectDboAfterSc     - [boo] Start debounce timer after a valid set condition
            RC_NONE,                                        //u8ReleaCond            - [def] Release Condition - allows an error to be released ( removed )
            1000,                                           //u32TimeReset           - [ms]  Error Release ( Debounce ) Time
            FALSE,                                          //boResetDboAfterRc      - [boo] Start debounce timer after a valid release condition 
            RM_NONE,                                        //u8RestrictMode         - [def] Restricted Mode
            0,                                              //u8InfoVarIdx           - [num] Array Index of Error Information Page
            TRUE,                                           //boCustList             - [boo] Memorized in a Customer List
            DIS_NONE                                        //u8DisplayOutput        - [def] Display Output ( Error Output Interface )
        },
        { //ErrTag[2] - Parameter of input char NOT monoton [DM_INCUR_PARAM]
            9175,                                           //u32ErrNum              - [num] Error Number
            FMI_24_LOGICAL_ERROR,                           //u8ErrMode              - [enu] Failure Mode Indicator
            FMIEX_NONE,                                     //u8ErrModeExt           - [def] Extended Failure Mode Indicator
            0xAAAA,                                         //u16ErrAccLevel         - [def] Failure Access Level
            ERR_TYPE_ERROR,                                 //u8ErrType              - [enu] Error Type
            ERR_CAT5_MAL,                                   //u8ErrCat               - [enu] Error Category ( Lamp Type )
            ERR_STORE_NOT,                                  //u8ErrStore             - [enu] Error Store Behavior
            EG_NONE,                                        //u8ExcludeGroup         - [def] Error Exclude Group
            SC_NONE,                                        //u8SetCond              - [def] Set Condition - allows to activate an error detection
            500,                                            //u32TimeDetect          - [ms]  Error Detection ( Debounce ) Time
            FALSE,                                          //boDetectDboAfterSc     - [boo] Start debounce timer after a valid set condition
            RC_NONE,                                        //u8ReleaCond            - [def] Release Condition - allows an error to be released ( removed )
            1000,                                           //u32TimeReset           - [ms]  Error Release ( Debounce ) Time
            FALSE,                                          //boResetDboAfterRc      - [boo] Start debounce timer after a valid release condition 
            RM_NONE,                                        //u8RestrictMode         - [def] Restricted Mode
            0,                                              //u8InfoVarIdx           - [num] Array Index of Error Information Page
            TRUE,                                           //boCustList             - [boo] Memorized in a Customer List
            DIS_NONE                                        //u8DisplayOutput        - [def] Display Output ( Error Output Interface )
        },
        { //ErrTag[3] - Unknown internal error [DM_INCUR_UNKNOWN]
            9176,                                           //u32ErrNum              - [num] Error Number
            FMI_12_BAD_DEVICE,                              //u8ErrMode              - [enu] Failure Mode Indicator
            FMIEX_NONE,                                     //u8ErrModeExt           - [def] Extended Failure Mode Indicator
            0xAAAA,                                         //u16ErrAccLevel         - [def] Failure Access Level
            ERR_TYPE_ERROR,                                 //u8ErrType              - [enu] Error Type
            ERR_CAT5_MAL,                                   //u8ErrCat               - [enu] Error Category ( Lamp Type )
            ERR_STORE_NOT,                                  //u8ErrStore             - [enu] Error Store Behavior
            EG_NONE,                                        //u8ExcludeGroup         - [def] Error Exclude Group
            SC_NONE,                                        //u8SetCond              - [def] Set Condition - allows to activate an error detection
            500,                                            //u32TimeDetect          - [ms]  Error Detection ( Debounce ) Time
            FALSE,                                          //boDetectDboAfterSc     - [boo] Start debounce timer after a valid set condition
            RC_NONE,                                        //u8ReleaCond            - [def] Release Condition - allows an error to be released ( removed )
            1000,                                           //u32TimeReset           - [ms]  Error Release ( Debounce ) Time
            FALSE,                                          //boResetDboAfterRc      - [boo] Start debounce timer after a valid release condition 
            RM_NONE,                                        //u8RestrictMode         - [def] Restricted Mode
            0,                                              //u8InfoVarIdx           - [num] Array Index of Error Information Page
            TRUE,                                           //boCustList             - [boo] Memorized in a Customer List
            DIS_NONE                                        //u8DisplayOutput        - [def] Display Output ( Error Output Interface )
        }
    }
};

//Sofware Module Name: AppGlobal
PUBLIC_VAR const TInCurCfg gInCur_ctCfg_OilTankTemperature =
{
    // Common
    "OilTankTemperature",                                   //achName                - [STR] Display-Information-String
    BLO_RELEASE,                                            //eBloProc               - [ENU] Block behavior
    // Fixed settings
    {
        FALSE                                               //boDummy                - [BOO] Dummy
    },
    // Properties
    {
        INPBEH_ERR_TO_OUT,                                  //eInpBeh                - [ENU] Input behavior at error on input
        PIN_110,                                            //ePin                   - [ENU] Pin (Cfg-Idx) channel
        {
            {21000, {DB_LINK_NA, DB_LINK_NA, DB_LINK_NA}},  //au16InLim[0]           - [uA]  Short to PWR detection limit for channel
            {1000, {DB_LINK_NA, DB_LINK_NA, DB_LINK_NA}}    //au16InLim[1]           - [uA]  Short to GND detection limit for channel
        },
        0, {DB_LINK_NA, DB_LINK_NA, DB_LINK_NA},            //u8DeadZone             - [%]   Dead zone
        {
            {VAR_NA, {5, 207, 0}},                          //ai16OutChar[0]         - [CUS] Output characteristic POS value
            {VAR_NA, {5, 208, 0}},                          //ai16OutChar[1]         - [CUS] Output characteristic NEU value
            {VAR_NA, {5, 209, 0}}                           //ai16OutChar[2]         - [CUS] Output characteristic NEG value
        }
    },
    // Parameter
    {
        {
            {20000, {DB_LINK_NA, DB_LINK_NA, DB_LINK_NA}},  //ai16InChar[0]          - [uA]  Input characteristic POS value
            {4000, {DB_LINK_NA, DB_LINK_NA, DB_LINK_NA}},   //ai16InChar[1]          - [uA]  Input characteristic NEU value
            {4000, {DB_LINK_NA, DB_LINK_NA, DB_LINK_NA}}    //ai16InChar[2]          - [uA]  Input characteristic NEG value
        },
        4000, {DB_LINK_NA, DB_LINK_NA, DB_LINK_NA},         //u16InpValDefault       - [uA]  Default input value for channel (input behavior)
    },
    // All Errors
    4,                                                      //u8ErrCnt               - [DEF] Error Count
    // All Errors [0-3]
    { // TErrCfgFea
        { //ErrTag[0] - Master input signal short to power [DM_INCUR_SP]
            9246,                                           //u32ErrNum              - [num] Error Number
            FMI_03_VOLTAGE_HIGH_SHT_PWR,                    //u8ErrMode              - [enu] Failure Mode Indicator
            FMIEX_NONE,                                     //u8ErrModeExt           - [def] Extended Failure Mode Indicator
            0xAAAA,                                         //u16ErrAccLevel         - [def] Failure Access Level
            ERR_TYPE_ERROR,                                 //u8ErrType              - [enu] Error Type
            ERR_CAT5_MAL,                                   //u8ErrCat               - [enu] Error Category ( Lamp Type )
            ERR_STORE_ALL,                                  //u8ErrStore             - [enu] Error Store Behavior
            EG_NONE,                                        //u8ExcludeGroup         - [def] Error Exclude Group
            SC_NONE,                                        //u8SetCond              - [def] Set Condition - allows to activate an error detection
            500,                                            //u32TimeDetect          - [ms]  Error Detection ( Debounce ) Time
            FALSE,                                          //boDetectDboAfterSc     - [boo] Start debounce timer after a valid set condition
            RC_NONE,                                        //u8ReleaCond            - [def] Release Condition - allows an error to be released ( removed )
            1000,                                           //u32TimeReset           - [ms]  Error Release ( Debounce ) Time
            FALSE,                                          //boResetDboAfterRc      - [boo] Start debounce timer after a valid release condition 
            RM_NONE,                                        //u8RestrictMode         - [def] Restricted Mode
            0,                                              //u8InfoVarIdx           - [num] Array Index of Error Information Page
            TRUE,                                           //boCustList             - [boo] Memorized in a Customer List
            DIS_NONE                                        //u8DisplayOutput        - [def] Display Output ( Error Output Interface )
        },
        { //ErrTag[1] - Master input signal short to ground [DM_INCUR_SG_OL]
            9247,                                           //u32ErrNum              - [num] Error Number
            FMI_04_VOLTAGE_LOW_SHT_GND,                     //u8ErrMode              - [enu] Failure Mode Indicator
            FMIEX_NONE,                                     //u8ErrModeExt           - [def] Extended Failure Mode Indicator
            0xAAAA,                                         //u16ErrAccLevel         - [def] Failure Access Level
            ERR_TYPE_ERROR,                                 //u8ErrType              - [enu] Error Type
            ERR_CAT5_MAL,                                   //u8ErrCat               - [enu] Error Category ( Lamp Type )
            ERR_STORE_ALL,                                  //u8ErrStore             - [enu] Error Store Behavior
            EG_NONE,                                        //u8ExcludeGroup         - [def] Error Exclude Group
            SC_NONE,                                        //u8SetCond              - [def] Set Condition - allows to activate an error detection
            500,                                            //u32TimeDetect          - [ms]  Error Detection ( Debounce ) Time
            FALSE,                                          //boDetectDboAfterSc     - [boo] Start debounce timer after a valid set condition
            RC_NONE,                                        //u8ReleaCond            - [def] Release Condition - allows an error to be released ( removed )
            1000,                                           //u32TimeReset           - [ms]  Error Release ( Debounce ) Time
            FALSE,                                          //boResetDboAfterRc      - [boo] Start debounce timer after a valid release condition 
            RM_NONE,                                        //u8RestrictMode         - [def] Restricted Mode
            0,                                              //u8InfoVarIdx           - [num] Array Index of Error Information Page
            TRUE,                                           //boCustList             - [boo] Memorized in a Customer List
            DIS_NONE                                        //u8DisplayOutput        - [def] Display Output ( Error Output Interface )
        },
        { //ErrTag[2] - Parameter of input char NOT monoton [DM_INCUR_PARAM]
            9248,                                           //u32ErrNum              - [num] Error Number
            FMI_24_LOGICAL_ERROR,                           //u8ErrMode              - [enu] Failure Mode Indicator
            FMIEX_NONE,                                     //u8ErrModeExt           - [def] Extended Failure Mode Indicator
            0xAAAA,                                         //u16ErrAccLevel         - [def] Failure Access Level
            ERR_TYPE_ERROR,                                 //u8ErrType              - [enu] Error Type
            ERR_CAT5_MAL,                                   //u8ErrCat               - [enu] Error Category ( Lamp Type )
            ERR_STORE_ALL,                                  //u8ErrStore             - [enu] Error Store Behavior
            EG_NONE,                                        //u8ExcludeGroup         - [def] Error Exclude Group
            SC_NONE,                                        //u8SetCond              - [def] Set Condition - allows to activate an error detection
            500,                                            //u32TimeDetect          - [ms]  Error Detection ( Debounce ) Time
            FALSE,                                          //boDetectDboAfterSc     - [boo] Start debounce timer after a valid set condition
            RC_NONE,                                        //u8ReleaCond            - [def] Release Condition - allows an error to be released ( removed )
            1000,                                           //u32TimeReset           - [ms]  Error Release ( Debounce ) Time
            FALSE,                                          //boResetDboAfterRc      - [boo] Start debounce timer after a valid release condition 
            RM_NONE,                                        //u8RestrictMode         - [def] Restricted Mode
            0,                                              //u8InfoVarIdx           - [num] Array Index of Error Information Page
            TRUE,                                           //boCustList             - [boo] Memorized in a Customer List
            DIS_NONE                                        //u8DisplayOutput        - [def] Display Output ( Error Output Interface )
        },
        { //ErrTag[3] - Unknown internal error [DM_INCUR_UNKNOWN]
            9249,                                           //u32ErrNum              - [num] Error Number
            FMI_12_BAD_DEVICE,                              //u8ErrMode              - [enu] Failure Mode Indicator
            FMIEX_NONE,                                     //u8ErrModeExt           - [def] Extended Failure Mode Indicator
            0xAAAA,                                         //u16ErrAccLevel         - [def] Failure Access Level
            ERR_TYPE_ERROR,                                 //u8ErrType              - [enu] Error Type
            ERR_CAT5_MAL,                                   //u8ErrCat               - [enu] Error Category ( Lamp Type )
            ERR_STORE_ALL,                                  //u8ErrStore             - [enu] Error Store Behavior
            EG_NONE,                                        //u8ExcludeGroup         - [def] Error Exclude Group
            SC_NONE,                                        //u8SetCond              - [def] Set Condition - allows to activate an error detection
            500,                                            //u32TimeDetect          - [ms]  Error Detection ( Debounce ) Time
            FALSE,                                          //boDetectDboAfterSc     - [boo] Start debounce timer after a valid set condition
            RC_NONE,                                        //u8ReleaCond            - [def] Release Condition - allows an error to be released ( removed )
            1000,                                           //u32TimeReset           - [ms]  Error Release ( Debounce ) Time
            FALSE,                                          //boResetDboAfterRc      - [boo] Start debounce timer after a valid release condition 
            RM_NONE,                                        //u8RestrictMode         - [def] Restricted Mode
            0,                                              //u8InfoVarIdx           - [num] Array Index of Error Information Page
            TRUE,                                           //boCustList             - [boo] Memorized in a Customer List
            DIS_NONE                                        //u8DisplayOutput        - [def] Display Output ( Error Output Interface )
        }
    }
};
