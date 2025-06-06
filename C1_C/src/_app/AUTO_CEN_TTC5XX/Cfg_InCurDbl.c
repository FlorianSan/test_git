//**************************************************************************************************
//! @crc        16838128
//! @file       Cfg_InCurDbl.c
//! @brief      Generate by: HYDAC Controller Project - Code Builder Tool Chain
//! @ecu        TTC580
//! @dll        1.2.7 (Build: 080)
//! @dll itf    1.7.0
//! @build      2023-04-03 16:35:10
//! @Pattern    1.12.0.0
//! @Subpattern 0.0.4
//! @Match      07-04-01-04
//! @PDT        2.11.72.172
//! @PdtProjVer 0.0.0
//! @created    2025-04-18 16:40:50   HYDAC/HCP-CC
//**************************************************************************************************

// INCLUDES ========================================================================================
#include <ItfBloInCurDbl.h>

// GLOBAL VARIABLES ================================================================================
//Sofware Module Name: AppGlobal
PUBLIC_VAR const TInCurDblCfg gInCurDbl_ctCfg_DeltaArmAngularSensor =
{
    // Common
    "DeltaArmAngularSensor",                                //achName                - [STR] Display-Information-String
    BLO_RELEASE,                                            //eBloProc               - [ENU] Block behavior
    // Fixed settings
    {
        FALSE                                               //boDummy                - [BOO] Dummy
    },
    // Properties
    {
        INPBEH_ERR_TO_OUT,                                  //eInpBeh                - [ENU] Input behavior at error on input
        PIN_104,                                            //ePinMas                - [ENU] Pin (Cfg-Idx) master channel
        PIN_128,                                            //ePinSla                - [ENU] Pin (Cfg-Idx) slave channel
        {
            {21000, {DB_LINK_NA, DB_LINK_NA, DB_LINK_NA}},  //ai16InLimMaster[0]     - [uA]  Short to PWR detection limit for master channel
            {1000, {DB_LINK_NA, DB_LINK_NA, DB_LINK_NA}}    //ai16InLimMaster[1]     - [uA]  Short to GND detection limit for master channel
        },
        {
            {21000, {DB_LINK_NA, DB_LINK_NA, DB_LINK_NA}},  //ai16InLimSlave[0]      - [uA]  Short to PWR detection limit for slave channel
            {1000, {DB_LINK_NA, DB_LINK_NA, DB_LINK_NA}}    //ai16InLimSlave[1]      - [uA]  Short to GND detection limit for slave channel
        },
        LIMP_DISABLE,                                       //eLimpMode              - [ENU] Limp mode enable/disable
        VAR_NA, {5, 42, 0},                                 //u8DevLim               - [%]   Deviation limit
        0, {DB_LINK_NA, DB_LINK_NA, DB_LINK_NA},            //u8DeadZone             - [%]   Dead zone
        {
            {VAR_NA, {6, 7, 0}},                            //ai16OutChar[0]         - [CUS] Output characteristic POS value
            {VAR_NA, {6, 5, 0}},                            //ai16OutChar[1]         - [CUS] Output characteristic NEU value
            {VAR_NA, {6, 5, 0}}                             //ai16OutChar[2]         - [CUS] Output characteristic NEG value
        }
    },
    // Parameter
    {
        {
            {VAR_NA, {6, 8, 0}},                            //ai16InCharMaster[0]    - [uA]  Input characteristic Master POS value [NvCalibrationC1.AngleCalibEndStopHighDeltaArm]
            {VAR_NA, {6, 6, 0}},                            //ai16InCharMaster[1]    - [uA]  Input characteristic Master NEU value [NvCalibrationC1.AngleCalibEndStopLowDeltaArm]
            {VAR_NA, {6, 6, 0}}                             //ai16InCharMaster[2]    - [uA]  Input characteristic Master NEG value [NvCalibrationC1.AngleCalibEndStopLowDeltaArm]
        },
        {
            {VAR_NA, {6, 8, 0}},                            //ai16InCharSlave[0]     - [uA]  Input characteristic Slave POS value [NvCalibrationC1.AngleCalibEndStopHighDeltaArm]
            {VAR_NA, {6, 6, 0}},                            //ai16InCharSlave[1]     - [uA]  Input characteristic Slave NEU value [NvCalibrationC1.AngleCalibEndStopLowDeltaArm] 
            {VAR_NA, {6, 6, 0}}                             //ai16InCharSlave[2]     - [uA]  Input characteristic Slave NEG value [NvCalibrationC1.AngleCalibEndStopLowDeltaArm]
        },
        2000, {DB_LINK_NA, DB_LINK_NA, DB_LINK_NA},         //i16InpValMasDefault    - [uA]  Default input value for master channel (input behavior) 
        2000, {DB_LINK_NA, DB_LINK_NA, DB_LINK_NA}          //i16InpValSlaDefault    - [uA]  Default input value for slave channel (input behavior) 
    },
    // All Errors 
    8,                                                      //u8ErrCnt               - [DEF] Error Count
    // All Errors [0-7]  
    { // TErrCfgFea
        { //ErrTag[0] - Master input signal short to power [DM_INCURDBL_SP_MAS]
            9756,                                           //u32ErrNum              - [num] Error Number
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
        { //ErrTag[1] - Master input signal short to ground [DM_INCURDBL_SG_OL_MAS]
            9757,                                           //u32ErrNum              - [num] Error Number
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
            1000,                                           //u32TimeReset           - [ms]  Error Release ( Debounce ) Time
            FALSE,                                          //boResetDboAfterRc      - [boo] Start debounce timer after a valid release condition 
            RM_NONE,                                        //u8RestrictMode         - [def] Restricted Mode
            0,                                              //u8InfoVarIdx           - [num] Array Index of Error Information Page
            TRUE,                                           //boCustList             - [boo] Memorized in a Customer List
            DIS_NONE                                        //u8DisplayOutput        - [def] Display Output ( Error Output Interface )
        },
        { //ErrTag[2] - Slave input signal short to power [DM_INCURDBL_SP_SLA]
            9758,                                           //u32ErrNum              - [num] Error Number
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
        { //ErrTag[3] - Slave input signal short to ground [DM_INCURDBL_SG_OL_SLA]
            9759,                                           //u32ErrNum              - [num] Error Number
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
            1000,                                           //u32TimeReset           - [ms]  Error Release ( Debounce ) Time
            FALSE,                                          //boResetDboAfterRc      - [boo] Start debounce timer after a valid release condition 
            RM_NONE,                                        //u8RestrictMode         - [def] Restricted Mode
            0,                                              //u8InfoVarIdx           - [num] Array Index of Error Information Page
            TRUE,                                           //boCustList             - [boo] Memorized in a Customer List
            DIS_NONE                                        //u8DisplayOutput        - [def] Display Output ( Error Output Interface )
        },
        { //ErrTag[4] - Deviation of signals out of limit [DM_INCURDBL_DEV]
            9760,                                           //u32ErrNum              - [num] Error Number
            FMI_26_OUT_OF_RANGE,                            //u8ErrMode              - [enu] Failure Mode Indicator
            FMIEX_NONE,                                     //u8ErrModeExt           - [def] Extended Failure Mode Indicator
            0xAAAA,                                         //u16ErrAccLevel         - [def] Failure Access Level
            ERR_TYPE_ERROR,                                 //u8ErrType              - [enu] Error Type
            ERR_CAT5_MAL,                                   //u8ErrCat               - [enu] Error Category ( Lamp Type )
            ERR_STORE_NOT,                                  //u8ErrStore             - [enu] Error Store Behavior
            EG_NONE,                                        //u8ExcludeGroup         - [def] Error Exclude Group
            SC_NONE,                                        //u8SetCond              - [def] Set Condition - allows to activate an error detection
            200,                                            //u32TimeDetect          - [ms]  Error Detection ( Debounce ) Time
            FALSE,                                          //boDetectDboAfterSc     - [boo] Start debounce timer after a valid set condition
            RC_NONE,                                        //u8ReleaCond            - [def] Release Condition - allows an error to be released ( removed )
            0,                                              //u32TimeReset           - [ms]  Error Release ( Debounce ) Time
            FALSE,                                          //boResetDboAfterRc      - [boo] Start debounce timer after a valid release condition 
            RM_NONE,                                        //u8RestrictMode         - [def] Restricted Mode
            0,                                              //u8InfoVarIdx           - [num] Array Index of Error Information Page
            TRUE,                                           //boCustList             - [boo] Memorized in a Customer List
            DIS_NONE                                        //u8DisplayOutput        - [def] Display Output ( Error Output Interface )
        },
        { //ErrTag[5] - Limp mode active  [DM_INCURDBL_LIMP]
            9761,                                           //u32ErrNum              - [num] Error Number
            FMI_14_SPECIAL_INSTRUCTIONS,                    //u8ErrMode              - [enu] Failure Mode Indicator
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
        { //ErrTag[6] - Parameter of input char NOT monoton [DM_INCURDBL_PARAM]
            9762,                                           //u32ErrNum              - [num] Error Number
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
        { //ErrTag[7] - Unknown internal error [DM_INCURDBL_UNKNOWN]
            9763,                                           //u32ErrNum              - [num] Error Number
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
PUBLIC_VAR const TInCurDblCfg gInCurDbl_ctCfg_ArrowArmAngularSensor =
{
    // Common
    "ArrowArmAngularSensor",                                //achName                - [STR] Display-Information-String
    BLO_RELEASE,                                            //eBloProc               - [ENU] Block behavior
    // Fixed settings
    {
        FALSE                                               //boDummy                - [BOO] Dummy
    },
    // Properties
    {
        INPBEH_ERR_TO_OUT,                                  //eInpBeh                - [ENU] Input behavior at error on input
        PIN_105,                                            //ePinMas                - [ENU] Pin (Cfg-Idx) master channel
        PIN_129,                                            //ePinSla                - [ENU] Pin (Cfg-Idx) slave channel
        {
            {21000, {DB_LINK_NA, DB_LINK_NA, DB_LINK_NA}},  //ai16InLimMaster[0]     - [uA]  Short to PWR detection limit for master channel
            {1000, {DB_LINK_NA, DB_LINK_NA, DB_LINK_NA}}    //ai16InLimMaster[1]     - [uA]  Short to GND detection limit for master channel
        },
        {
            {21000, {DB_LINK_NA, DB_LINK_NA, DB_LINK_NA}},  //ai16InLimSlave[0]      - [uA]  Short to PWR detection limit for slave channel
            {1000, {DB_LINK_NA, DB_LINK_NA, DB_LINK_NA}}    //ai16InLimSlave[1]      - [uA]  Short to GND detection limit for slave channel
        },
        LIMP_DISABLE,                                       //eLimpMode              - [ENU] Limp mode enable/disable
        VAR_NA, {5, 46, 0},                                 //u8DevLim               - [%]   Deviation limit
        0, {DB_LINK_NA, DB_LINK_NA, DB_LINK_NA},            //u8DeadZone             - [%]   Dead zone
        {
            {VAR_NA, {6, 11, 0}},                           //ai16OutChar[0]         - [CUS] Output characteristic POS value
            {VAR_NA, {6, 9, 0}},                            //ai16OutChar[1]         - [CUS] Output characteristic NEU value
            {VAR_NA, {6, 9, 0}}                             //ai16OutChar[2]         - [CUS] Output characteristic NEG value
        }
    },
    // Parameter
    {
        {
            {VAR_NA, {6, 12, 0}},                           //ai16InCharMaster[0]    - [uA]  Input characteristic Master POS value [NvCalibrationC1.AngleCalibEndStopHighArrowArm]
            {VAR_NA, {6, 10, 0}},                           //ai16InCharMaster[1]    - [uA]  Input characteristic Master NEU value [NvCalibrationC1.AngleCalibEndStopLowArrowArm]
            {VAR_NA, {6, 10, 0}}                            //ai16InCharMaster[2]    - [uA]  Input characteristic Master NEG value [NvCalibrationC1.AngleCalibEndStopLowArrowArm]
        },
        {
            {VAR_NA, {6, 12, 0}},                           //ai16InCharSlave[0]     - [uA]  Input characteristic Slave POS value [NvCalibrationC1.AngleCalibEndStopHighArrowArm]
            {VAR_NA, {6, 10, 0}},                           //ai16InCharSlave[1]     - [uA]  Input characteristic Slave NEU value [NvCalibrationC1.AngleCalibEndStopLowArrowArm] 
            {VAR_NA, {6, 10, 0}}                            //ai16InCharSlave[2]     - [uA]  Input characteristic Slave NEG value [NvCalibrationC1.AngleCalibEndStopLowArrowArm]
        },
        2000, {DB_LINK_NA, DB_LINK_NA, DB_LINK_NA},         //i16InpValMasDefault    - [uA]  Default input value for master channel (input behavior) 
        2000, {DB_LINK_NA, DB_LINK_NA, DB_LINK_NA}          //i16InpValSlaDefault    - [uA]  Default input value for slave channel (input behavior) 
    },
    // All Errors 
    8,                                                      //u8ErrCnt               - [DEF] Error Count
    // All Errors [0-7]  
    { // TErrCfgFea
        { //ErrTag[0] - Master input signal short to power [DM_INCURDBL_SP_MAS]
            9764,                                           //u32ErrNum              - [num] Error Number
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
        { //ErrTag[1] - Master input signal short to ground [DM_INCURDBL_SG_OL_MAS]
            9765,                                           //u32ErrNum              - [num] Error Number
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
            1000,                                           //u32TimeReset           - [ms]  Error Release ( Debounce ) Time
            FALSE,                                          //boResetDboAfterRc      - [boo] Start debounce timer after a valid release condition 
            RM_NONE,                                        //u8RestrictMode         - [def] Restricted Mode
            0,                                              //u8InfoVarIdx           - [num] Array Index of Error Information Page
            TRUE,                                           //boCustList             - [boo] Memorized in a Customer List
            DIS_NONE                                        //u8DisplayOutput        - [def] Display Output ( Error Output Interface )
        },
        { //ErrTag[2] - Slave input signal short to power [DM_INCURDBL_SP_SLA]
            9766,                                           //u32ErrNum              - [num] Error Number
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
        { //ErrTag[3] - Slave input signal short to ground [DM_INCURDBL_SG_OL_SLA]
            9767,                                           //u32ErrNum              - [num] Error Number
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
            1000,                                           //u32TimeReset           - [ms]  Error Release ( Debounce ) Time
            FALSE,                                          //boResetDboAfterRc      - [boo] Start debounce timer after a valid release condition 
            RM_NONE,                                        //u8RestrictMode         - [def] Restricted Mode
            0,                                              //u8InfoVarIdx           - [num] Array Index of Error Information Page
            TRUE,                                           //boCustList             - [boo] Memorized in a Customer List
            DIS_NONE                                        //u8DisplayOutput        - [def] Display Output ( Error Output Interface )
        },
        { //ErrTag[4] - Deviation of signals out of limit [DM_INCURDBL_DEV]
            9768,                                           //u32ErrNum              - [num] Error Number
            FMI_26_OUT_OF_RANGE,                            //u8ErrMode              - [enu] Failure Mode Indicator
            FMIEX_NONE,                                     //u8ErrModeExt           - [def] Extended Failure Mode Indicator
            0xAAAA,                                         //u16ErrAccLevel         - [def] Failure Access Level
            ERR_TYPE_ERROR,                                 //u8ErrType              - [enu] Error Type
            ERR_CAT5_MAL,                                   //u8ErrCat               - [enu] Error Category ( Lamp Type )
            ERR_STORE_NOT,                                  //u8ErrStore             - [enu] Error Store Behavior
            EG_NONE,                                        //u8ExcludeGroup         - [def] Error Exclude Group
            SC_NONE,                                        //u8SetCond              - [def] Set Condition - allows to activate an error detection
            200,                                            //u32TimeDetect          - [ms]  Error Detection ( Debounce ) Time
            FALSE,                                          //boDetectDboAfterSc     - [boo] Start debounce timer after a valid set condition
            RC_NONE,                                        //u8ReleaCond            - [def] Release Condition - allows an error to be released ( removed )
            0,                                              //u32TimeReset           - [ms]  Error Release ( Debounce ) Time
            FALSE,                                          //boResetDboAfterRc      - [boo] Start debounce timer after a valid release condition 
            RM_NONE,                                        //u8RestrictMode         - [def] Restricted Mode
            0,                                              //u8InfoVarIdx           - [num] Array Index of Error Information Page
            TRUE,                                           //boCustList             - [boo] Memorized in a Customer List
            DIS_NONE                                        //u8DisplayOutput        - [def] Display Output ( Error Output Interface )
        },
        { //ErrTag[5] - Limp mode active [DM_INCURDBL_LIMP]
            9769,                                           //u32ErrNum              - [num] Error Number
            FMI_14_SPECIAL_INSTRUCTIONS,                    //u8ErrMode              - [enu] Failure Mode Indicator
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
        { //ErrTag[6] - Parameter of input char NOT monoton [DM_INCURDBL_PARAM]
            9770,                                           //u32ErrNum              - [num] Error Number
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
        { //ErrTag[7] - Unknown internal error [DM_INCURDBL_UNKNOWN]
            9771,                                           //u32ErrNum              - [num] Error Number
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
