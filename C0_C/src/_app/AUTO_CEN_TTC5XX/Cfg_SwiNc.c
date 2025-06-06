//**************************************************************************************************
//! @crc        2321613973
//! @file       Cfg_SwiNc.c
//! @brief      Generate by: HYDAC Controller Project - Code Builder Tool Chain
//! @ecu        TTC580
//! @dll        1.2.7 (Build: 080)
//! @dll itf    1.7.0
//! @build      2023-04-03 16:35:10
//! @Pattern    1.11.0.0
//! @Subpattern 0.0.4
//! @Match      07-04-01-04
//! @PDT        2.11.72.172
//! @PdtProjVer 0.0.0
//! @created    2025-04-18 16:40:50   HYDAC/HCP-CC
//**************************************************************************************************

// INCLUDES ========================================================================================
#include <ItfBloSwiNc.h> 

// GLOBAL VARIABLES ================================================================================
// Software Module Name: AppGlobal
PUBLIC_VAR const TSwiNcCfg gSwiNc_ctCfg_UpOscillantAxle =
{
    // Common
    "UpOscillantAxle",                                      //achName                - [str] Block name
    BLO_RELEASE,                                            //eBloProc               - [def] Block initial state (process)
    // Properties
    {
        INPBEH_ERR_TO_OUT,                                  //eInpBeh                - [enu] Input behavior at fault input signal
        PIN_132,                                            //ePin                   - [enu] Pin index
        ADC_VIN_V,                                          //eAdcType               - [enu] Pin type
        DM_SWI_NC_LOW_SIDE,                                 //eSwiNcType             - [enu] Switch connection type
    },
    // Parameter
    {
        0,                                                  //bi2SwiDflt             - [def] Default input value
        100,                                                //u32DebTimeSwitches     - [ms]  Debounce time
        0,                                                  //u16VolLoMin            - [mV]  Low level signal :: Minimal limit
        2000,                                               //u16VolLoMax            - [mV]  Low level signal :: Maximal limit
        3000,                                               //u16VolHiMin            - [mV]  High level signal :: Minimal limit
        15000,                                              //u16VolHiMax            - [mV]  High level signal :: Maximal limit
    },
    // All Errors 
    5,                                                      //u8ErrCnt               - [def] Quantity of errors
    // All Errors [0-4]  
    { // TErrCfgFea
        { //ErrTag[0] - An input signal is too low / Short circuit to ground [DM_SWI_NC_PIN_LOW]
            9115,                                           //u32ErrNum              - [num] Error Number
            FMI_31_CONDITION_EXISTS,                        //u8ErrMode              - [enu] Failure Mode Indicator
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
        { //ErrTag[1] - An input signal is too high / Short circuit to power [DM_SWI_NC_PIN_HIGH]
            9116,                                           //u32ErrNum              - [num] Error Number
            FMI_31_CONDITION_EXISTS,                        //u8ErrMode              - [enu] Failure Mode Indicator
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
        { //ErrTag[2] - An input signal is out of valid range [DM_SWI_NC_PIN_RANGE]
            9117,                                           //u32ErrNum              - [num] Error Number
            FMI_31_CONDITION_EXISTS,                        //u8ErrMode              - [enu] Failure Mode Indicator
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
        { //ErrTag[3] - Warning: a block has limited parameters [DM_SWI_NC_LIMIT_PARAMETER]
            9118,                                           //u32ErrNum              - [num] Error Number
            FMI_31_CONDITION_EXISTS,                        //u8ErrMode              - [enu] Failure Mode Indicator
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
        { //ErrTag[4] - An initialization error [DM_SWI_NC_INIT_ERROR]
            9119,                                           //u32ErrNum              - [num] Error Number
            FMI_31_CONDITION_EXISTS,                        //u8ErrMode              - [enu] Failure Mode Indicator
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

// Software Module Name: AppGlobal
PUBLIC_VAR const TSwiNcCfg gSwiNc_ctCfg_UpFixeAxle =
{
    // Common
    "UpFixeAxle",                                           //achName                - [str] Block name
    BLO_RELEASE,                                            //eBloProc               - [def] Block initial state (process)
    // Properties
    {
        INPBEH_ERR_TO_OUT,                                  //eInpBeh                - [enu] Input behavior at fault input signal
        PIN_109,                                            //ePin                   - [enu] Pin index
        ADC_VIN_V,                                          //eAdcType               - [enu] Pin type
        DM_SWI_NC_LOW_SIDE,                                 //eSwiNcType             - [enu] Switch connection type
    },
    // Parameter
    {
        0,                                                  //bi2SwiDflt             - [def] Default input value
        100,                                                //u32DebTimeSwitches     - [ms]  Debounce time
        0,                                                  //u16VolLoMin            - [mV]  Low level signal :: Minimal limit
        2000,                                               //u16VolLoMax            - [mV]  Low level signal :: Maximal limit
        3000,                                               //u16VolHiMin            - [mV]  High level signal :: Minimal limit
        15000,                                              //u16VolHiMax            - [mV]  High level signal :: Maximal limit
    },
    // All Errors 
    5,                                                      //u8ErrCnt               - [def] Quantity of errors
    // All Errors [0-4]  
    { // TErrCfgFea
        { //ErrTag[0] - An input signal is too low / Short circuit to ground [DM_SWI_NC_PIN_LOW]
            9120,                                           //u32ErrNum              - [num] Error Number
            FMI_31_CONDITION_EXISTS,                        //u8ErrMode              - [enu] Failure Mode Indicator
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
        { //ErrTag[1] - An input signal is too high / Short circuit to power [DM_SWI_NC_PIN_HIGH]
            9121,                                           //u32ErrNum              - [num] Error Number
            FMI_31_CONDITION_EXISTS,                        //u8ErrMode              - [enu] Failure Mode Indicator
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
        { //ErrTag[2] - An input signal is out of valid range [DM_SWI_NC_PIN_RANGE]
            9122,                                           //u32ErrNum              - [num] Error Number
            FMI_31_CONDITION_EXISTS,                        //u8ErrMode              - [enu] Failure Mode Indicator
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
        { //ErrTag[3] - Warning: a block has limited parameters [DM_SWI_NC_LIMIT_PARAMETER]
            9123,                                           //u32ErrNum              - [num] Error Number
            FMI_31_CONDITION_EXISTS,                        //u8ErrMode              - [enu] Failure Mode Indicator
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
        { //ErrTag[4] - An initialization error [DM_SWI_NC_INIT_ERROR]
            9124,                                           //u32ErrNum              - [num] Error Number
            FMI_31_CONDITION_EXISTS,                        //u8ErrMode              - [enu] Failure Mode Indicator
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

// Software Module Name: AppGlobal
PUBLIC_VAR const TSwiNcCfg gSwiNc_ctCfg_UpMastSensorNC =
{
    // Common
    "UpMastSensorNC",                                       //achName                - [str] Block name
    BLO_RELEASE,                                            //eBloProc               - [def] Block initial state (process)
    // Properties
    {
        INPBEH_ERR_TO_OUT,                                  //eInpBeh                - [enu] Input behavior at fault input signal
        PIN_130,                                            //ePin                   - [enu] Pin index
        ADC_VIN_V,                                          //eAdcType               - [enu] Pin type
        DM_SWI_NC_HIGH_SIDE,                                //eSwiNcType             - [enu] Switch connection type
    },
    // Parameter
    {
        0,                                                  //bi2SwiDflt             - [def] Default input value
        100,                                                //u32DebTimeSwitches     - [ms]  Debounce time
        0,                                                  //u16VolLoMin            - [mV]  Low level signal :: Minimal limit
        2000,                                               //u16VolLoMax            - [mV]  Low level signal :: Maximal limit
        3000,                                               //u16VolHiMin            - [mV]  High level signal :: Minimal limit
        28000,                                              //u16VolHiMax            - [mV]  High level signal :: Maximal limit
    },
    // All Errors 
    5,                                                      //u8ErrCnt               - [def] Quantity of errors
    // All Errors [0-4]  
    { // TErrCfgFea
        { //ErrTag[0] - An input signal is too low / Short circuit to ground [DM_SWI_NC_PIN_LOW]
            9342,                                           //u32ErrNum              - [num] Error Number
            FMI_31_CONDITION_EXISTS,                        //u8ErrMode              - [enu] Failure Mode Indicator
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
        { //ErrTag[1] - An input signal is too high / Short circuit to power [DM_SWI_NC_PIN_HIGH]
            9343,                                           //u32ErrNum              - [num] Error Number
            FMI_31_CONDITION_EXISTS,                        //u8ErrMode              - [enu] Failure Mode Indicator
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
        { //ErrTag[2] - An input signal is out of valid range [DM_SWI_NC_PIN_RANGE]
            9344,                                           //u32ErrNum              - [num] Error Number
            FMI_31_CONDITION_EXISTS,                        //u8ErrMode              - [enu] Failure Mode Indicator
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
        { //ErrTag[3] - Warning: a block has limited parameters [DM_SWI_NC_LIMIT_PARAMETER]
            9345,                                           //u32ErrNum              - [num] Error Number
            FMI_31_CONDITION_EXISTS,                        //u8ErrMode              - [enu] Failure Mode Indicator
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
        { //ErrTag[4] - An initialization error [DM_SWI_NC_INIT_ERROR]
            9346,                                           //u32ErrNum              - [num] Error Number
            FMI_31_CONDITION_EXISTS,                        //u8ErrMode              - [enu] Failure Mode Indicator
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
