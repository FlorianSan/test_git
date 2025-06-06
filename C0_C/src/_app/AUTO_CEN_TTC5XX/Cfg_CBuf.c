//**************************************************************************************************
//! @crc        2390768782
//! @file       Cfg_CBuf.c
//! @brief      Generate by: HYDAC Controller Project - Code Builder Tool Chain
//! @ecu        TTC580
//! @dll        1.2.7 (Build: 080)
//! @dll itf    1.7.0
//! @build      2023-04-03 16:35:10
//! @Pattern    0.0.4
//! @Subpattern 0.0.4
//! @Match      07-04-01-04
//! @PDT        2.11.72.172
//! @PdtProjVer 0.0.0
//! @created    2025-04-18 16:40:50   HYDAC/HCP-CC
//**************************************************************************************************

// INCLUDES ========================================================================================
#include <ItfBloCBuf.h> 
#include <Cfg_CBuf.h>

// GLOBAL VARIABLES ================================================================================
//Sofware Module Name: AppGlobal
PUBLIC_VAR const TCBufCfg gCBuf_ctCfg_CBUS2_CBUF_SND_1 =
{
    // Common
    "CBUS2_CBUF_SND_1",                                     //achName                - [STR] Display-Information-String
    CBUS2_CBUF_SND_1,                                       //u8CBufPosIdx           - [DEF] Can buffer Position Index
    BLO_RELEASE,                                            //eBloProc               - [DEF] Block behavior
    // Fixed settings
    CBUS2_HWBUF_SND0,                                       //u8HwBufNo              - [DEF] Can Bus + Hw Buffer connection link
    16,                                                     //u8CallCountOfCycle     - [NUM] Cyclic can buffer call [count of cycles]
    128,                                                    //u8SwBufSize            - [NUM] CAN Software Msg-Buffer  
   //All Errors
    ERR_CNT_DFLT,                                           //u8ErrCnt               - [DEF] Error Count  
    // Error [0-0]  
    { // TErrCfgFea
        { //ErrTag[0] - Software Buffer SW-Overflow [DM_CBUF_SOVERF]
            1118,                                           //u32ErrNum              - [num] Error Number
            FMI_31_CONDITION_EXISTS,                        //u8ErrMode              - [enu] Failure Mode Indicator
            FMIEX_NONE,                                     //u8ErrModeExt           - [def] Extended Failure Mode Indicator
            0xAAAA,                                         //u16ErrAccLevel         - [def] Failure Access Level
            ERR_TYPE_ERROR,                                 //u8ErrType              - [enu] Error Type
            ERR_CAT0_NOT,                                   //u8ErrCat               - [enu] Error Category ( Lamp Type )
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
PUBLIC_VAR const TCBufCfg gCBuf_ctCfg_CBUS2_CBUF_RCV_1 =
{
    // Common
    "CBUS2_CBUF_RCV_1",                                     //achName                - [STR] Display-Information-String
    CBUS2_CBUF_RCV_1,                                       //u8CBufPosIdx           - [DEF] Can buffer Position Index
    BLO_RELEASE,                                            //eBloProc               - [DEF] Block behavior
    // Fixed settings
    CBUS2_HWBUF_RCV0,                                       //u8HwBufNo              - [DEF] Can Bus + Hw Buffer connection link
    16,                                                     //u8CallCountOfCycle     - [NUM] Cyclic can buffer call [count of cycles]
    128,                                                    //u8SwBufSize            - [NUM] CAN Software Msg-Buffer  
   //All Errors
    ERR_CNT_DFLT,                                           //u8ErrCnt               - [DEF] Error Count  
    // Error [0-0]  
    { // TErrCfgFea
        { //ErrTag[0] - Software Buffer SW-Overflow [DM_CBUF_SOVERF]
            1119,                                           //u32ErrNum              - [num] Error Number
            FMI_31_CONDITION_EXISTS,                        //u8ErrMode              - [enu] Failure Mode Indicator
            FMIEX_NONE,                                     //u8ErrModeExt           - [def] Extended Failure Mode Indicator
            0xAAAA,                                         //u16ErrAccLevel         - [def] Failure Access Level
            ERR_TYPE_ERROR,                                 //u8ErrType              - [enu] Error Type
            ERR_CAT0_NOT,                                   //u8ErrCat               - [enu] Error Category ( Lamp Type )
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
PUBLIC_VAR const TCBufCfg gCBuf_ctCfg_CBUS3_CBUF_SND_1 =
{
    // Common
    "CBUS3_CBUF_SND_1",                                     //achName                - [STR] Display-Information-String
    CBUS3_CBUF_SND_1,                                       //u8CBufPosIdx           - [DEF] Can buffer Position Index
    BLO_RELEASE,                                            //eBloProc               - [DEF] Block behavior
    // Fixed settings
    CBUS3_HWBUF_SND0,                                       //u8HwBufNo              - [DEF] Can Bus + Hw Buffer connection link
    4,                                                      //u8CallCountOfCycle     - [NUM] Cyclic can buffer call [count of cycles]
    20,                                                     //u8SwBufSize            - [NUM] CAN Software Msg-Buffer  
   //All Errors
    ERR_CNT_DFLT,                                           //u8ErrCnt               - [DEF] Error Count  
    // Error [0-0]  
    { // TErrCfgFea
        { //ErrTag[0] - Software Buffer SW-Overflow [DM_CBUF_SOVERF]
            1189,                                           //u32ErrNum              - [num] Error Number
            FMI_31_CONDITION_EXISTS,                        //u8ErrMode              - [enu] Failure Mode Indicator
            FMIEX_NONE,                                     //u8ErrModeExt           - [def] Extended Failure Mode Indicator
            0xAAAA,                                         //u16ErrAccLevel         - [def] Failure Access Level
            ERR_TYPE_ERROR,                                 //u8ErrType              - [enu] Error Type
            ERR_CAT0_NOT,                                   //u8ErrCat               - [enu] Error Category ( Lamp Type )
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
PUBLIC_VAR const TCBufCfg gCBuf_ctCfg_CBUS3_CBUF_RCV_1 =
{
    // Common
    "CBUS3_CBUF_RCV_1",                                     //achName                - [STR] Display-Information-String
    CBUS3_CBUF_RCV_1,                                       //u8CBufPosIdx           - [DEF] Can buffer Position Index
    BLO_RELEASE,                                            //eBloProc               - [DEF] Block behavior
    // Fixed settings
    CBUS3_HWBUF_RCV0,                                       //u8HwBufNo              - [DEF] Can Bus + Hw Buffer connection link
    23,                                                     //u8CallCountOfCycle     - [NUM] Cyclic can buffer call [count of cycles]
    23,                                                     //u8SwBufSize            - [NUM] CAN Software Msg-Buffer  
   //All Errors
    ERR_CNT_DFLT,                                           //u8ErrCnt               - [DEF] Error Count  
    // Error [0-0]  
    { // TErrCfgFea
        { //ErrTag[0] - Software Buffer SW-Overflow [DM_CBUF_SOVERF]
            1190,                                           //u32ErrNum              - [num] Error Number
            FMI_31_CONDITION_EXISTS,                        //u8ErrMode              - [enu] Failure Mode Indicator
            FMIEX_NONE,                                     //u8ErrModeExt           - [def] Extended Failure Mode Indicator
            0xAAAA,                                         //u16ErrAccLevel         - [def] Failure Access Level
            ERR_TYPE_ERROR,                                 //u8ErrType              - [enu] Error Type
            ERR_CAT0_NOT,                                   //u8ErrCat               - [enu] Error Category ( Lamp Type )
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
