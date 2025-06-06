//**************************************************************************************************
//! @crc        3229952200
//! @file       Cfg_CSnd.c
//! @brief      Generate by: HYDAC Controller Project - Code Builder Tool Chain
//! @ecu        TTC580
//! @dll        1.2.7 (Build: 080)
//! @dll itf    1.7.0
//! @build      2023-04-03 16:35:10
//! @Pattern    0.0.7
//! @Subpattern 0.0.4
//! @Match      07-04-01-04
//! @PDT        2.11.72.172
//! @PdtProjVer 0.0.0
//! @created    2025-04-18 16:40:50   HYDAC/HCP-CC
//**************************************************************************************************

// INCLUDES ========================================================================================
#include <ItfBloCSnd.h>
#include <App_CanSigRec.h>
#include <Cfg_CBuf.h>

// GLOBAL VARIABLES ================================================================================
//Sofware Module Name: AppGlobal
PUBLIC_VAR const TCSndCfg gCSnd_ctCfg_SRDO4_48XS =
{
    // Common
    "SRDO4_48XS",                                           //achName                - [STR] Display-Information-String
    BLO_RELEASE,                                            //eBloProc               - [DEF] Block behavior  
    // Fixed settings
    (TUint8)CBUS1_HWBUF_SND0,                               //u8SwHwBufNo            - [DEF] CAN send buffer position connection link  
    SNDTYP_CYCLIC,                                          //u8Type                 - [DEF] Send type
    SNDSTART_ACTIVE,                                        //u8Start                - [DEF] Start transmission
    0,                                                      //u8MsgBufSize           - [DEF] Message buffer size
    FALSE,                                                  //boBufferCheck          - [DEF] Buffer overflow check 
    20,                                                     //u16CycTim              - [DEF] Cycle time [ms]   
    10,                                                     //u16MinCycTime          - [DEF] Minimum cycle time[ms]
    0,                                                      //u16OffTim              - [DEF]1st offset time [ms]
    FALSE,                                                  //boExtId                - [DEF] Can extended identifier (11/29 Bit)
    0x20A,                                                  //u32Id                  - [DEF] Can identifier   
    (TUint16)eCSR_SRDO4_48XS,                               //u16CanSigRecLink       - [DEF] Can Signal Record Position Link 
    //Fixed safety feature settings
    FALSE,                                                  //boSafeInvMsg           - [DEF] Add bit inverse message
    0,                                                      //u16SafeInvDelay        - [ms] Delay time inverse message
    FALSE,                                                  //boSafeCnt              - [DEF] Check safety counter
    //All Errors
    0,                                                      //u8ErrCnt               - [DEF] Error Count  
    // Error [0-0]  
    { // TErrCfgFea
        { //ErrTag[0] - Error bit 0 [DM_ERR_00]
            0,                                              //u32ErrNum              - [num] Error Number
            FMI_NONE,                                       //u8ErrMode              - [enu] Failure Mode Indicator
            FMIEX_NONE,                                     //u8ErrModeExt           - [def] Extended Failure Mode Indicator
            ACC_ALL_NO,                                     //u16ErrAccLevel         - [def] Failure Access Level
            ERR_TYPE_ERROR,                                 //u8ErrType              - [enu] Error Type
            ERR_CAT0_NOT,                                   //u8ErrCat               - [enu] Error Category ( Lamp Type )
            ERR_STORE_NOT,                                  //u8ErrStore             - [enu] Error Store Behavior
            EG_NONE,                                        //u8ExcludeGroup         - [def] Error Exclude Group
            SC_NONE,                                        //u8SetCond              - [def] Set Condition - allows to activate an error detection
            0,                                              //u32TimeDetect          - [ms]  Error Detection ( Debounce ) Time
            FALSE,                                          //boDetectDboAfterSc     - [boo] Start debounce timer after a valid set condition
            RC_NONE,                                        //u8ReleaCond            - [def] Release Condition - allows an error to be released ( removed )
            0,                                              //u32TimeReset           - [ms]  Error Release ( Debounce ) Time
            FALSE,                                          //boResetDboAfterRc      - [boo] Start debounce timer after a valid release condition 
            RM_NONE,                                        //u8RestrictMode         - [def] Restricted Mode
            INF_NONE,                                       //u8InfoVarIdx           - [num] Array Index of Error Information Page
            FALSE,                                          //boCustList             - [boo] Memorized in a Customer List
            DIS_NONE                                        //u8DisplayOutput        - [def] Display Output ( Error Output Interface )
        }
    }
};

//Sofware Module Name: AppGlobal
PUBLIC_VAR const TCSndCfg gCSnd_ctCfg_Start_48XS =
{
    // Common
    "Start_48XS",                                           //achName                - [STR] Display-Information-String
    BLO_RELEASE,                                            //eBloProc               - [DEF] Block behavior  
    // Fixed settings
    (TUint8)CBUS1_HWBUF_SND0,                               //u8SwHwBufNo            - [DEF] CAN send buffer position connection link  
    SNDTYP_EVENT,                                           //u8Type                 - [DEF] Send type
    SNDSTART_ACTIVE,                                        //u8Start                - [DEF] Start transmission
    0,                                                      //u8MsgBufSize           - [DEF] Message buffer size
    FALSE,                                                  //boBufferCheck          - [DEF] Buffer overflow check 
    10,                                                     //u16CycTim              - [DEF] Cycle time [ms]   
    10,                                                     //u16MinCycTime          - [DEF] Minimum cycle time[ms]
    0,                                                      //u16OffTim              - [DEF]1st offset time [ms]
    FALSE,                                                  //boExtId                - [DEF] Can extended identifier (11/29 Bit)
    0x0,                                                    //u32Id                  - [DEF] Can identifier   
    (TUint16)eCSR_Start_48XS,                               //u16CanSigRecLink       - [DEF] Can Signal Record Position Link 
    //Fixed safety feature settings
    FALSE,                                                  //boSafeInvMsg           - [DEF] Add bit inverse message
    0,                                                      //u16SafeInvDelay        - [ms] Delay time inverse message
    FALSE,                                                  //boSafeCnt              - [DEF] Check safety counter
    //All Errors
    0,                                                      //u8ErrCnt               - [DEF] Error Count  
    // Error [0-0]  
    { // TErrCfgFea
        { //ErrTag[0] - Error bit 0 [DM_ERR_00]
            0,                                              //u32ErrNum              - [num] Error Number
            FMI_NONE,                                       //u8ErrMode              - [enu] Failure Mode Indicator
            FMIEX_NONE,                                     //u8ErrModeExt           - [def] Extended Failure Mode Indicator
            ACC_ALL_NO,                                     //u16ErrAccLevel         - [def] Failure Access Level
            ERR_TYPE_ERROR,                                 //u8ErrType              - [enu] Error Type
            ERR_CAT0_NOT,                                   //u8ErrCat               - [enu] Error Category ( Lamp Type )
            ERR_STORE_NOT,                                  //u8ErrStore             - [enu] Error Store Behavior
            EG_NONE,                                        //u8ExcludeGroup         - [def] Error Exclude Group
            SC_NONE,                                        //u8SetCond              - [def] Set Condition - allows to activate an error detection
            0,                                              //u32TimeDetect          - [ms]  Error Detection ( Debounce ) Time
            FALSE,                                          //boDetectDboAfterSc     - [boo] Start debounce timer after a valid set condition
            RC_NONE,                                        //u8ReleaCond            - [def] Release Condition - allows an error to be released ( removed )
            0,                                              //u32TimeReset           - [ms]  Error Release ( Debounce ) Time
            FALSE,                                          //boResetDboAfterRc      - [boo] Start debounce timer after a valid release condition 
            RM_NONE,                                        //u8RestrictMode         - [def] Restricted Mode
            INF_NONE,                                       //u8InfoVarIdx           - [num] Array Index of Error Information Page
            FALSE,                                          //boCustList             - [boo] Memorized in a Customer List
            DIS_NONE                                        //u8DisplayOutput        - [def] Display Output ( Error Output Interface )
        }
    }
};

//Sofware Module Name: AppGlobal
PUBLIC_VAR const TCSndCfg gCSnd_ctCfg_Sync_48XS =
{
    // Common
    "Sync_48XS",                                            //achName                - [STR] Display-Information-String
    BLO_RELEASE,                                            //eBloProc               - [DEF] Block behavior  
    // Fixed settings
    (TUint8)CBUS1_HWBUF_SND0,                               //u8SwHwBufNo            - [DEF] CAN send buffer position connection link  
    SNDTYP_CYCLIC,                                          //u8Type                 - [DEF] Send type
    SNDSTART_ACTIVE,                                        //u8Start                - [DEF] Start transmission
    0,                                                      //u8MsgBufSize           - [DEF] Message buffer size
    FALSE,                                                  //boBufferCheck          - [DEF] Buffer overflow check 
    20,                                                     //u16CycTim              - [DEF] Cycle time [ms]   
    10,                                                     //u16MinCycTime          - [DEF] Minimum cycle time[ms]
    0,                                                      //u16OffTim              - [DEF]1st offset time [ms]
    FALSE,                                                  //boExtId                - [DEF] Can extended identifier (11/29 Bit)
    0x80,                                                   //u32Id                  - [DEF] Can identifier   
    (TUint16)eCSR_Sync_48XS,                                //u16CanSigRecLink       - [DEF] Can Signal Record Position Link 
    //Fixed safety feature settings
    FALSE,                                                  //boSafeInvMsg           - [DEF] Add bit inverse message
    0,                                                      //u16SafeInvDelay        - [ms] Delay time inverse message
    FALSE,                                                  //boSafeCnt              - [DEF] Check safety counter
    //All Errors
    0,                                                      //u8ErrCnt               - [DEF] Error Count  
    // Error [0-0]  
    { // TErrCfgFea
        { //ErrTag[0] - Error bit 0 [DM_ERR_00]
            0,                                              //u32ErrNum              - [num] Error Number
            FMI_NONE,                                       //u8ErrMode              - [enu] Failure Mode Indicator
            FMIEX_NONE,                                     //u8ErrModeExt           - [def] Extended Failure Mode Indicator
            ACC_ALL_NO,                                     //u16ErrAccLevel         - [def] Failure Access Level
            ERR_TYPE_ERROR,                                 //u8ErrType              - [enu] Error Type
            ERR_CAT0_NOT,                                   //u8ErrCat               - [enu] Error Category ( Lamp Type )
            ERR_STORE_NOT,                                  //u8ErrStore             - [enu] Error Store Behavior
            EG_NONE,                                        //u8ExcludeGroup         - [def] Error Exclude Group
            SC_NONE,                                        //u8SetCond              - [def] Set Condition - allows to activate an error detection
            0,                                              //u32TimeDetect          - [ms]  Error Detection ( Debounce ) Time
            FALSE,                                          //boDetectDboAfterSc     - [boo] Start debounce timer after a valid set condition
            RC_NONE,                                        //u8ReleaCond            - [def] Release Condition - allows an error to be released ( removed )
            0,                                              //u32TimeReset           - [ms]  Error Release ( Debounce ) Time
            FALSE,                                          //boResetDboAfterRc      - [boo] Start debounce timer after a valid release condition 
            RM_NONE,                                        //u8RestrictMode         - [def] Restricted Mode
            INF_NONE,                                       //u8InfoVarIdx           - [num] Array Index of Error Information Page
            FALSE,                                          //boCustList             - [boo] Memorized in a Customer List
            DIS_NONE                                        //u8DisplayOutput        - [def] Display Output ( Error Output Interface )
        }
    }
};

//Sofware Module Name: AppGlobal
PUBLIC_VAR const TCSndCfg gCSnd_ctCfg_DataRcvFromC1 =
{
    // Common
    "DataRcvFromC1",                                        //achName                - [STR] Display-Information-String
    BLO_RELEASE,                                            //eBloProc               - [DEF] Block behavior  
    // Fixed settings
    (TUint8)CBUS0_HWBUF_SND0,                               //u8SwHwBufNo            - [DEF] CAN send buffer position connection link  
    SNDTYP_CYCLIC,                                          //u8Type                 - [DEF] Send type
    SNDSTART_ACTIVE,                                        //u8Start                - [DEF] Start transmission
    0,                                                      //u8MsgBufSize           - [DEF] Message buffer size
    FALSE,                                                  //boBufferCheck          - [DEF] Buffer overflow check 
    40,                                                     //u16CycTim              - [DEF] Cycle time [ms]   
    10,                                                     //u16MinCycTime          - [DEF] Minimum cycle time[ms]
    60,                                                     //u16OffTim              - [DEF]1st offset time [ms]
    TRUE,                                                   //boExtId                - [DEF] Can extended identifier (11/29 Bit)
    0x18FF0003,                                             //u32Id                  - [DEF] Can identifier   
    (TUint16)eCSR_DataRcvFromC1,                            //u16CanSigRecLink       - [DEF] Can Signal Record Position Link 
    //Fixed safety feature settings
    TRUE,                                                   //boSafeInvMsg           - [DEF] Add bit inverse message
    0,                                                      //u16SafeInvDelay        - [ms] Delay time inverse message
    FALSE,                                                  //boSafeCnt              - [DEF] Check safety counter
    //All Errors
    0,                                                      //u8ErrCnt               - [DEF] Error Count  
    // Error [0-0]  
    { // TErrCfgFea
        { //ErrTag[0] - Error bit 0 [DM_ERR_00]
            0,                                              //u32ErrNum              - [num] Error Number
            FMI_NONE,                                       //u8ErrMode              - [enu] Failure Mode Indicator
            FMIEX_NONE,                                     //u8ErrModeExt           - [def] Extended Failure Mode Indicator
            ACC_ALL_NO,                                     //u16ErrAccLevel         - [def] Failure Access Level
            ERR_TYPE_ERROR,                                 //u8ErrType              - [enu] Error Type
            ERR_CAT0_NOT,                                   //u8ErrCat               - [enu] Error Category ( Lamp Type )
            ERR_STORE_NOT,                                  //u8ErrStore             - [enu] Error Store Behavior
            EG_NONE,                                        //u8ExcludeGroup         - [def] Error Exclude Group
            SC_NONE,                                        //u8SetCond              - [def] Set Condition - allows to activate an error detection
            0,                                              //u32TimeDetect          - [ms]  Error Detection ( Debounce ) Time
            FALSE,                                          //boDetectDboAfterSc     - [boo] Start debounce timer after a valid set condition
            RC_NONE,                                        //u8ReleaCond            - [def] Release Condition - allows an error to be released ( removed )
            0,                                              //u32TimeReset           - [ms]  Error Release ( Debounce ) Time
            FALSE,                                          //boResetDboAfterRc      - [boo] Start debounce timer after a valid release condition 
            RM_NONE,                                        //u8RestrictMode         - [def] Restricted Mode
            INF_NONE,                                       //u8InfoVarIdx           - [num] Array Index of Error Information Page
            FALSE,                                          //boCustList             - [boo] Memorized in a Customer List
            DIS_NONE                                        //u8DisplayOutput        - [def] Display Output ( Error Output Interface )
        }
    }
};

//Sofware Module Name: AppGlobal
PUBLIC_VAR const TCSndCfg gCSnd_ctCfg_Msg1C1SendToEvision7_1 =
{
    // Common
    "Msg1C1SendToEvision7_1",                               //achName                - [STR] Display-Information-String
    BLO_RELEASE,                                            //eBloProc               - [DEF] Block behavior  
    // Fixed settings
    (TUint8)CBUS0_HWBUF_SND0,                               //u8SwHwBufNo            - [DEF] CAN send buffer position connection link  
    SNDTYP_CYCLIC,                                          //u8Type                 - [DEF] Send type
    SNDSTART_ACTIVE,                                        //u8Start                - [DEF] Start transmission
    0,                                                      //u8MsgBufSize           - [DEF] Message buffer size
    FALSE,                                                  //boBufferCheck          - [DEF] Buffer overflow check 
    200,                                                    //u16CycTim              - [DEF] Cycle time [ms]   
    10,                                                     //u16MinCycTime          - [DEF] Minimum cycle time[ms]
    50,                                                     //u16OffTim              - [DEF]1st offset time [ms]
    TRUE,                                                   //boExtId                - [DEF] Can extended identifier (11/29 Bit)
    0xC1D701,                                               //u32Id                  - [DEF] Can identifier   
    (TUint16)eCSR_Msg1C1SendToEvision7,                     //u16CanSigRecLink       - [DEF] Can Signal Record Position Link 
    //Fixed safety feature settings
    FALSE,                                                  //boSafeInvMsg           - [DEF] Add bit inverse message
    0,                                                      //u16SafeInvDelay        - [ms] Delay time inverse message
    FALSE,                                                  //boSafeCnt              - [DEF] Check safety counter
    //All Errors
    0,                                                      //u8ErrCnt               - [DEF] Error Count  
    // Error [0-0]  
    { // TErrCfgFea
        { //ErrTag[0] - Error bit 0 [DM_ERR_00]
            0,                                              //u32ErrNum              - [num] Error Number
            FMI_NONE,                                       //u8ErrMode              - [enu] Failure Mode Indicator
            FMIEX_NONE,                                     //u8ErrModeExt           - [def] Extended Failure Mode Indicator
            ACC_ALL_NO,                                     //u16ErrAccLevel         - [def] Failure Access Level
            ERR_TYPE_ERROR,                                 //u8ErrType              - [enu] Error Type
            ERR_CAT0_NOT,                                   //u8ErrCat               - [enu] Error Category ( Lamp Type )
            ERR_STORE_NOT,                                  //u8ErrStore             - [enu] Error Store Behavior
            EG_NONE,                                        //u8ExcludeGroup         - [def] Error Exclude Group
            SC_NONE,                                        //u8SetCond              - [def] Set Condition - allows to activate an error detection
            0,                                              //u32TimeDetect          - [ms]  Error Detection ( Debounce ) Time
            FALSE,                                          //boDetectDboAfterSc     - [boo] Start debounce timer after a valid set condition
            RC_NONE,                                        //u8ReleaCond            - [def] Release Condition - allows an error to be released ( removed )
            0,                                              //u32TimeReset           - [ms]  Error Release ( Debounce ) Time
            FALSE,                                          //boResetDboAfterRc      - [boo] Start debounce timer after a valid release condition 
            RM_NONE,                                        //u8RestrictMode         - [def] Restricted Mode
            INF_NONE,                                       //u8InfoVarIdx           - [num] Array Index of Error Information Page
            FALSE,                                          //boCustList             - [boo] Memorized in a Customer List
            DIS_NONE                                        //u8DisplayOutput        - [def] Display Output ( Error Output Interface )
        }
    }
};

//Sofware Module Name: AppGlobal
PUBLIC_VAR const TCSndCfg gCSnd_ctCfg_Msg2C1SendToEvision7_1 =
{
    // Common
    "Msg2C1SendToEvision7_1",                               //achName                - [STR] Display-Information-String
    BLO_RELEASE,                                            //eBloProc               - [DEF] Block behavior  
    // Fixed settings
    (TUint8)CBUS0_HWBUF_SND0,                               //u8SwHwBufNo            - [DEF] CAN send buffer position connection link  
    SNDTYP_CYCLIC,                                          //u8Type                 - [DEF] Send type
    SNDSTART_ACTIVE,                                        //u8Start                - [DEF] Start transmission
    0,                                                      //u8MsgBufSize           - [DEF] Message buffer size
    FALSE,                                                  //boBufferCheck          - [DEF] Buffer overflow check 
    200,                                                    //u16CycTim              - [DEF] Cycle time [ms]   
    10,                                                     //u16MinCycTime          - [DEF] Minimum cycle time[ms]
    60,                                                     //u16OffTim              - [DEF]1st offset time [ms]
    TRUE,                                                   //boExtId                - [DEF] Can extended identifier (11/29 Bit)
    0xC1D702,                                               //u32Id                  - [DEF] Can identifier   
    (TUint16)eCSR_Msg2C1SendToEvision7,                     //u16CanSigRecLink       - [DEF] Can Signal Record Position Link 
    //Fixed safety feature settings
    FALSE,                                                  //boSafeInvMsg           - [DEF] Add bit inverse message
    0,                                                      //u16SafeInvDelay        - [ms] Delay time inverse message
    FALSE,                                                  //boSafeCnt              - [DEF] Check safety counter
    //All Errors
    0,                                                      //u8ErrCnt               - [DEF] Error Count  
    // Error [0-0]  
    { // TErrCfgFea
        { //ErrTag[0] - Error bit 0 [DM_ERR_00]
            0,                                              //u32ErrNum              - [num] Error Number
            FMI_NONE,                                       //u8ErrMode              - [enu] Failure Mode Indicator
            FMIEX_NONE,                                     //u8ErrModeExt           - [def] Extended Failure Mode Indicator
            ACC_ALL_NO,                                     //u16ErrAccLevel         - [def] Failure Access Level
            ERR_TYPE_ERROR,                                 //u8ErrType              - [enu] Error Type
            ERR_CAT0_NOT,                                   //u8ErrCat               - [enu] Error Category ( Lamp Type )
            ERR_STORE_NOT,                                  //u8ErrStore             - [enu] Error Store Behavior
            EG_NONE,                                        //u8ExcludeGroup         - [def] Error Exclude Group
            SC_NONE,                                        //u8SetCond              - [def] Set Condition - allows to activate an error detection
            0,                                              //u32TimeDetect          - [ms]  Error Detection ( Debounce ) Time
            FALSE,                                          //boDetectDboAfterSc     - [boo] Start debounce timer after a valid set condition
            RC_NONE,                                        //u8ReleaCond            - [def] Release Condition - allows an error to be released ( removed )
            0,                                              //u32TimeReset           - [ms]  Error Release ( Debounce ) Time
            FALSE,                                          //boResetDboAfterRc      - [boo] Start debounce timer after a valid release condition 
            RM_NONE,                                        //u8RestrictMode         - [def] Restricted Mode
            INF_NONE,                                       //u8InfoVarIdx           - [num] Array Index of Error Information Page
            FALSE,                                          //boCustList             - [boo] Memorized in a Customer List
            DIS_NONE                                        //u8DisplayOutput        - [def] Display Output ( Error Output Interface )
        }
    }
};

//Sofware Module Name: AppGlobal
PUBLIC_VAR const TCSndCfg gCSnd_ctCfg_Msg3C1SendToEvision7_1 =
{
    // Common
    "Msg3C1SendToEvision7_1",                               //achName                - [STR] Display-Information-String
    BLO_RELEASE,                                            //eBloProc               - [DEF] Block behavior  
    // Fixed settings
    (TUint8)CBUS0_HWBUF_SND0,                               //u8SwHwBufNo            - [DEF] CAN send buffer position connection link  
    SNDTYP_CYCLIC,                                          //u8Type                 - [DEF] Send type
    SNDSTART_ACTIVE,                                        //u8Start                - [DEF] Start transmission
    0,                                                      //u8MsgBufSize           - [DEF] Message buffer size
    FALSE,                                                  //boBufferCheck          - [DEF] Buffer overflow check 
    200,                                                    //u16CycTim              - [DEF] Cycle time [ms]   
    10,                                                     //u16MinCycTime          - [DEF] Minimum cycle time[ms]
    170,                                                    //u16OffTim              - [DEF]1st offset time [ms]
    TRUE,                                                   //boExtId                - [DEF] Can extended identifier (11/29 Bit)
    0xC1D712,                                               //u32Id                  - [DEF] Can identifier   
    (TUint16)eCSR_MsgDebugC1SendToEvision7,                 //u16CanSigRecLink       - [DEF] Can Signal Record Position Link 
    //Fixed safety feature settings
    FALSE,                                                  //boSafeInvMsg           - [DEF] Add bit inverse message
    0,                                                      //u16SafeInvDelay        - [ms] Delay time inverse message
    FALSE,                                                  //boSafeCnt              - [DEF] Check safety counter
    //All Errors
    0,                                                      //u8ErrCnt               - [DEF] Error Count  
    // Error [0-0]  
    { // TErrCfgFea
        { //ErrTag[0] - Error bit 0 [DM_ERR_00]
            0,                                              //u32ErrNum              - [num] Error Number
            FMI_NONE,                                       //u8ErrMode              - [enu] Failure Mode Indicator
            FMIEX_NONE,                                     //u8ErrModeExt           - [def] Extended Failure Mode Indicator
            ACC_ALL_NO,                                     //u16ErrAccLevel         - [def] Failure Access Level
            ERR_TYPE_ERROR,                                 //u8ErrType              - [enu] Error Type
            ERR_CAT0_NOT,                                   //u8ErrCat               - [enu] Error Category ( Lamp Type )
            ERR_STORE_NOT,                                  //u8ErrStore             - [enu] Error Store Behavior
            EG_NONE,                                        //u8ExcludeGroup         - [def] Error Exclude Group
            SC_NONE,                                        //u8SetCond              - [def] Set Condition - allows to activate an error detection
            0,                                              //u32TimeDetect          - [ms]  Error Detection ( Debounce ) Time
            FALSE,                                          //boDetectDboAfterSc     - [boo] Start debounce timer after a valid set condition
            RC_NONE,                                        //u8ReleaCond            - [def] Release Condition - allows an error to be released ( removed )
            0,                                              //u32TimeReset           - [ms]  Error Release ( Debounce ) Time
            FALSE,                                          //boResetDboAfterRc      - [boo] Start debounce timer after a valid release condition 
            RM_NONE,                                        //u8RestrictMode         - [def] Restricted Mode
            INF_NONE,                                       //u8InfoVarIdx           - [num] Array Index of Error Information Page
            FALSE,                                          //boCustList             - [boo] Memorized in a Customer List
            DIS_NONE                                        //u8DisplayOutput        - [def] Display Output ( Error Output Interface )
        }
    }
};

//Sofware Module Name: AppGlobal
PUBLIC_VAR const TCSndCfg gCSnd_ctCfg_Data2RdvFromC1 =
{
    // Common
    "Data2RdvFromC1",                                       //achName                - [STR] Display-Information-String
    BLO_RELEASE,                                            //eBloProc               - [DEF] Block behavior  
    // Fixed settings
    (TUint8)CBUS0_HWBUF_SND0,                               //u8SwHwBufNo            - [DEF] CAN send buffer position connection link  
    SNDTYP_CYCLIC,                                          //u8Type                 - [DEF] Send type
    SNDSTART_ACTIVE,                                        //u8Start                - [DEF] Start transmission
    0,                                                      //u8MsgBufSize           - [DEF] Message buffer size
    FALSE,                                                  //boBufferCheck          - [DEF] Buffer overflow check 
    40,                                                     //u16CycTim              - [DEF] Cycle time [ms]   
    10,                                                     //u16MinCycTime          - [DEF] Minimum cycle time[ms]
    90,                                                     //u16OffTim              - [DEF]1st offset time [ms]
    TRUE,                                                   //boExtId                - [DEF] Can extended identifier (11/29 Bit)
    0x18FF0009,                                             //u32Id                  - [DEF] Can identifier   
    (TUint16)eCSR_Data2RdvFromC1,                           //u16CanSigRecLink       - [DEF] Can Signal Record Position Link 
    //Fixed safety feature settings
    TRUE,                                                   //boSafeInvMsg           - [DEF] Add bit inverse message
    0,                                                      //u16SafeInvDelay        - [ms] Delay time inverse message
    FALSE,                                                  //boSafeCnt              - [DEF] Check safety counter
    //All Errors
    0,                                                      //u8ErrCnt               - [DEF] Error Count  
    // Error [0-0]  
    { // TErrCfgFea
        { //ErrTag[0] - Error bit 0 [DM_ERR_00]
            0,                                              //u32ErrNum              - [num] Error Number
            FMI_NONE,                                       //u8ErrMode              - [enu] Failure Mode Indicator
            FMIEX_NONE,                                     //u8ErrModeExt           - [def] Extended Failure Mode Indicator
            ACC_ALL_NO,                                     //u16ErrAccLevel         - [def] Failure Access Level
            ERR_TYPE_ERROR,                                 //u8ErrType              - [enu] Error Type
            ERR_CAT0_NOT,                                   //u8ErrCat               - [enu] Error Category ( Lamp Type )
            ERR_STORE_NOT,                                  //u8ErrStore             - [enu] Error Store Behavior
            EG_NONE,                                        //u8ExcludeGroup         - [def] Error Exclude Group
            SC_NONE,                                        //u8SetCond              - [def] Set Condition - allows to activate an error detection
            0,                                              //u32TimeDetect          - [ms]  Error Detection ( Debounce ) Time
            FALSE,                                          //boDetectDboAfterSc     - [boo] Start debounce timer after a valid set condition
            RC_NONE,                                        //u8ReleaCond            - [def] Release Condition - allows an error to be released ( removed )
            0,                                              //u32TimeReset           - [ms]  Error Release ( Debounce ) Time
            FALSE,                                          //boResetDboAfterRc      - [boo] Start debounce timer after a valid release condition 
            RM_NONE,                                        //u8RestrictMode         - [def] Restricted Mode
            INF_NONE,                                       //u8InfoVarIdx           - [num] Array Index of Error Information Page
            FALSE,                                          //boCustList             - [boo] Memorized in a Customer List
            DIS_NONE                                        //u8DisplayOutput        - [def] Display Output ( Error Output Interface )
        }
    }
};

//Sofware Module Name: AppGlobal
PUBLIC_VAR const TCSndCfg gCSnd_ctCfg_Msg3C1SendToEvision7 =
{
    // Common
    "Msg3C1SendToEvision7",                                 //achName                - [STR] Display-Information-String
    BLO_RELEASE,                                            //eBloProc               - [DEF] Block behavior  
    // Fixed settings
    (TUint8)CBUS0_HWBUF_SND0,                               //u8SwHwBufNo            - [DEF] CAN send buffer position connection link  
    SNDTYP_CYCLIC,                                          //u8Type                 - [DEF] Send type
    SNDSTART_ACTIVE,                                        //u8Start                - [DEF] Start transmission
    0,                                                      //u8MsgBufSize           - [DEF] Message buffer size
    FALSE,                                                  //boBufferCheck          - [DEF] Buffer overflow check 
    200,                                                    //u16CycTim              - [DEF] Cycle time [ms]   
    10,                                                     //u16MinCycTime          - [DEF] Minimum cycle time[ms]
    70,                                                     //u16OffTim              - [DEF]1st offset time [ms]
    TRUE,                                                   //boExtId                - [DEF] Can extended identifier (11/29 Bit)
    0xC1D703,                                               //u32Id                  - [DEF] Can identifier   
    (TUint16)eCSR_Msg3C1SendToEvision7,                     //u16CanSigRecLink       - [DEF] Can Signal Record Position Link 
    //Fixed safety feature settings
    FALSE,                                                  //boSafeInvMsg           - [DEF] Add bit inverse message
    0,                                                      //u16SafeInvDelay        - [ms] Delay time inverse message
    FALSE,                                                  //boSafeCnt              - [DEF] Check safety counter
    //All Errors
    0,                                                      //u8ErrCnt               - [DEF] Error Count  
    // Error [0-0]  
    { // TErrCfgFea
        { //ErrTag[0] - Error bit 0 [DM_ERR_00]
            0,                                              //u32ErrNum              - [num] Error Number
            FMI_NONE,                                       //u8ErrMode              - [enu] Failure Mode Indicator
            FMIEX_NONE,                                     //u8ErrModeExt           - [def] Extended Failure Mode Indicator
            ACC_ALL_NO,                                     //u16ErrAccLevel         - [def] Failure Access Level
            ERR_TYPE_ERROR,                                 //u8ErrType              - [enu] Error Type
            ERR_CAT0_NOT,                                   //u8ErrCat               - [enu] Error Category ( Lamp Type )
            ERR_STORE_NOT,                                  //u8ErrStore             - [enu] Error Store Behavior
            EG_NONE,                                        //u8ExcludeGroup         - [def] Error Exclude Group
            SC_NONE,                                        //u8SetCond              - [def] Set Condition - allows to activate an error detection
            0,                                              //u32TimeDetect          - [ms]  Error Detection ( Debounce ) Time
            FALSE,                                          //boDetectDboAfterSc     - [boo] Start debounce timer after a valid set condition
            RC_NONE,                                        //u8ReleaCond            - [def] Release Condition - allows an error to be released ( removed )
            0,                                              //u32TimeReset           - [ms]  Error Release ( Debounce ) Time
            FALSE,                                          //boResetDboAfterRc      - [boo] Start debounce timer after a valid release condition 
            RM_NONE,                                        //u8RestrictMode         - [def] Restricted Mode
            INF_NONE,                                       //u8InfoVarIdx           - [num] Array Index of Error Information Page
            FALSE,                                          //boCustList             - [boo] Memorized in a Customer List
            DIS_NONE                                        //u8DisplayOutput        - [def] Display Output ( Error Output Interface )
        }
    }
};

//Sofware Module Name: AppGlobal
PUBLIC_VAR const TCSndCfg gCSnd_ctCfg_Msg4C1SendToEvision7 =
{
    // Common
    "Msg4C1SendToEvision7",                                 //achName                - [STR] Display-Information-String
    BLO_RELEASE,                                            //eBloProc               - [DEF] Block behavior  
    // Fixed settings
    (TUint8)CBUS0_HWBUF_SND0,                               //u8SwHwBufNo            - [DEF] CAN send buffer position connection link  
    SNDTYP_CYCLIC,                                          //u8Type                 - [DEF] Send type
    SNDSTART_ACTIVE,                                        //u8Start                - [DEF] Start transmission
    0,                                                      //u8MsgBufSize           - [DEF] Message buffer size
    FALSE,                                                  //boBufferCheck          - [DEF] Buffer overflow check 
    200,                                                    //u16CycTim              - [DEF] Cycle time [ms]   
    10,                                                     //u16MinCycTime          - [DEF] Minimum cycle time[ms]
    80,                                                     //u16OffTim              - [DEF]1st offset time [ms]
    TRUE,                                                   //boExtId                - [DEF] Can extended identifier (11/29 Bit)
    0xC1D704,                                               //u32Id                  - [DEF] Can identifier   
    (TUint16)eCSR_Msg4C1SendToEvision7,                     //u16CanSigRecLink       - [DEF] Can Signal Record Position Link 
    //Fixed safety feature settings
    FALSE,                                                  //boSafeInvMsg           - [DEF] Add bit inverse message
    0,                                                      //u16SafeInvDelay        - [ms] Delay time inverse message
    FALSE,                                                  //boSafeCnt              - [DEF] Check safety counter
    //All Errors
    0,                                                      //u8ErrCnt               - [DEF] Error Count  
    // Error [0-0]  
    { // TErrCfgFea
        { //ErrTag[0] - Error bit 0 [DM_ERR_00]
            0,                                              //u32ErrNum              - [num] Error Number
            FMI_NONE,                                       //u8ErrMode              - [enu] Failure Mode Indicator
            FMIEX_NONE,                                     //u8ErrModeExt           - [def] Extended Failure Mode Indicator
            ACC_ALL_NO,                                     //u16ErrAccLevel         - [def] Failure Access Level
            ERR_TYPE_ERROR,                                 //u8ErrType              - [enu] Error Type
            ERR_CAT0_NOT,                                   //u8ErrCat               - [enu] Error Category ( Lamp Type )
            ERR_STORE_NOT,                                  //u8ErrStore             - [enu] Error Store Behavior
            EG_NONE,                                        //u8ExcludeGroup         - [def] Error Exclude Group
            SC_NONE,                                        //u8SetCond              - [def] Set Condition - allows to activate an error detection
            0,                                              //u32TimeDetect          - [ms]  Error Detection ( Debounce ) Time
            FALSE,                                          //boDetectDboAfterSc     - [boo] Start debounce timer after a valid set condition
            RC_NONE,                                        //u8ReleaCond            - [def] Release Condition - allows an error to be released ( removed )
            0,                                              //u32TimeReset           - [ms]  Error Release ( Debounce ) Time
            FALSE,                                          //boResetDboAfterRc      - [boo] Start debounce timer after a valid release condition 
            RM_NONE,                                        //u8RestrictMode         - [def] Restricted Mode
            INF_NONE,                                       //u8InfoVarIdx           - [num] Array Index of Error Information Page
            FALSE,                                          //boCustList             - [boo] Memorized in a Customer List
            DIS_NONE                                        //u8DisplayOutput        - [def] Display Output ( Error Output Interface )
        }
    }
};

//Sofware Module Name: AppGlobal
PUBLIC_VAR const TCSndCfg gCSnd_ctCfg_Data3RcvFromC1 =
{
    // Common
    "Data3RcvFromC1",                                       //achName                - [STR] Display-Information-String
    BLO_RELEASE,                                            //eBloProc               - [DEF] Block behavior  
    // Fixed settings
    (TUint8)CBUS0_HWBUF_SND0,                               //u8SwHwBufNo            - [DEF] CAN send buffer position connection link  
    SNDTYP_CYCLIC,                                          //u8Type                 - [DEF] Send type
    SNDSTART_ACTIVE,                                        //u8Start                - [DEF] Start transmission
    0,                                                      //u8MsgBufSize           - [DEF] Message buffer size
    FALSE,                                                  //boBufferCheck          - [DEF] Buffer overflow check 
    40,                                                     //u16CycTim              - [DEF] Cycle time [ms]   
    10,                                                     //u16MinCycTime          - [DEF] Minimum cycle time[ms]
    60,                                                     //u16OffTim              - [DEF]1st offset time [ms]
    TRUE,                                                   //boExtId                - [DEF] Can extended identifier (11/29 Bit)
    0x18FF000D,                                             //u32Id                  - [DEF] Can identifier   
    (TUint16)eCSR_Data3RcvFromC1,                           //u16CanSigRecLink       - [DEF] Can Signal Record Position Link 
    //Fixed safety feature settings
    TRUE,                                                   //boSafeInvMsg           - [DEF] Add bit inverse message
    0,                                                      //u16SafeInvDelay        - [ms] Delay time inverse message
    FALSE,                                                  //boSafeCnt              - [DEF] Check safety counter
    //All Errors
    0,                                                      //u8ErrCnt               - [DEF] Error Count  
    // Error [0-0]  
    { // TErrCfgFea
        { //ErrTag[0] - Error bit 0 [DM_ERR_00]
            0,                                              //u32ErrNum              - [num] Error Number
            FMI_NONE,                                       //u8ErrMode              - [enu] Failure Mode Indicator
            FMIEX_NONE,                                     //u8ErrModeExt           - [def] Extended Failure Mode Indicator
            ACC_ALL_NO,                                     //u16ErrAccLevel         - [def] Failure Access Level
            ERR_TYPE_ERROR,                                 //u8ErrType              - [enu] Error Type
            ERR_CAT0_NOT,                                   //u8ErrCat               - [enu] Error Category ( Lamp Type )
            ERR_STORE_NOT,                                  //u8ErrStore             - [enu] Error Store Behavior
            EG_NONE,                                        //u8ExcludeGroup         - [def] Error Exclude Group
            SC_NONE,                                        //u8SetCond              - [def] Set Condition - allows to activate an error detection
            0,                                              //u32TimeDetect          - [ms]  Error Detection ( Debounce ) Time
            FALSE,                                          //boDetectDboAfterSc     - [boo] Start debounce timer after a valid set condition
            RC_NONE,                                        //u8ReleaCond            - [def] Release Condition - allows an error to be released ( removed )
            0,                                              //u32TimeReset           - [ms]  Error Release ( Debounce ) Time
            FALSE,                                          //boResetDboAfterRc      - [boo] Start debounce timer after a valid release condition 
            RM_NONE,                                        //u8RestrictMode         - [def] Restricted Mode
            INF_NONE,                                       //u8InfoVarIdx           - [num] Array Index of Error Information Page
            FALSE,                                          //boCustList             - [boo] Memorized in a Customer List
            DIS_NONE                                        //u8DisplayOutput        - [def] Display Output ( Error Output Interface )
        }
    }
};

//Sofware Module Name: AppGlobal
PUBLIC_VAR const TCSndCfg gCSnd_ctCfg_FAiluresC1SendToC0 =
{
    // Common
    "FAiluresC1SendToC0",                                   //achName                - [STR] Display-Information-String
    BLO_RELEASE,                                            //eBloProc               - [DEF] Block behavior  
    // Fixed settings
    (TUint8)CBUS0_HWBUF_SND0,                               //u8SwHwBufNo            - [DEF] CAN send buffer position connection link  
    SNDTYP_CYCLIC,                                          //u8Type                 - [DEF] Send type
    SNDSTART_ACTIVE,                                        //u8Start                - [DEF] Start transmission
    0,                                                      //u8MsgBufSize           - [DEF] Message buffer size
    FALSE,                                                  //boBufferCheck          - [DEF] Buffer overflow check 
    40,                                                     //u16CycTim              - [DEF] Cycle time [ms]   
    10,                                                     //u16MinCycTime          - [DEF] Minimum cycle time[ms]
    70,                                                     //u16OffTim              - [DEF]1st offset time [ms]
    TRUE,                                                   //boExtId                - [DEF] Can extended identifier (11/29 Bit)
    0x18FF0011,                                             //u32Id                  - [DEF] Can identifier   
    (TUint16)eCSR_FailuresC1SendToC0,                       //u16CanSigRecLink       - [DEF] Can Signal Record Position Link 
    //Fixed safety feature settings
    TRUE,                                                   //boSafeInvMsg           - [DEF] Add bit inverse message
    0,                                                      //u16SafeInvDelay        - [ms] Delay time inverse message
    FALSE,                                                  //boSafeCnt              - [DEF] Check safety counter
    //All Errors
    0,                                                      //u8ErrCnt               - [DEF] Error Count  
    // Error [0-0]  
    { // TErrCfgFea
        { //ErrTag[0] - Error bit 0 [DM_ERR_00]
            0,                                              //u32ErrNum              - [num] Error Number
            FMI_NONE,                                       //u8ErrMode              - [enu] Failure Mode Indicator
            FMIEX_NONE,                                     //u8ErrModeExt           - [def] Extended Failure Mode Indicator
            ACC_ALL_NO,                                     //u16ErrAccLevel         - [def] Failure Access Level
            ERR_TYPE_ERROR,                                 //u8ErrType              - [enu] Error Type
            ERR_CAT0_NOT,                                   //u8ErrCat               - [enu] Error Category ( Lamp Type )
            ERR_STORE_NOT,                                  //u8ErrStore             - [enu] Error Store Behavior
            EG_NONE,                                        //u8ExcludeGroup         - [def] Error Exclude Group
            SC_NONE,                                        //u8SetCond              - [def] Set Condition - allows to activate an error detection
            0,                                              //u32TimeDetect          - [ms]  Error Detection ( Debounce ) Time
            FALSE,                                          //boDetectDboAfterSc     - [boo] Start debounce timer after a valid set condition
            RC_NONE,                                        //u8ReleaCond            - [def] Release Condition - allows an error to be released ( removed )
            0,                                              //u32TimeReset           - [ms]  Error Release ( Debounce ) Time
            FALSE,                                          //boResetDboAfterRc      - [boo] Start debounce timer after a valid release condition 
            RM_NONE,                                        //u8RestrictMode         - [def] Restricted Mode
            INF_NONE,                                       //u8InfoVarIdx           - [num] Array Index of Error Information Page
            FALSE,                                          //boCustList             - [boo] Memorized in a Customer List
            DIS_NONE                                        //u8DisplayOutput        - [def] Display Output ( Error Output Interface )
        }
    }
};

//Sofware Module Name: AppGlobal
PUBLIC_VAR const TCSndCfg gCSnd_ctCfg_Msg5C1SendToEvision7 =
{
    // Common
    "Msg5C1SendToEvision7",                                 //achName                - [STR] Display-Information-String
    BLO_RELEASE,                                            //eBloProc               - [DEF] Block behavior  
    // Fixed settings
    (TUint8)CBUS0_HWBUF_SND0,                               //u8SwHwBufNo            - [DEF] CAN send buffer position connection link  
    SNDTYP_CYCLIC,                                          //u8Type                 - [DEF] Send type
    SNDSTART_ACTIVE,                                        //u8Start                - [DEF] Start transmission
    0,                                                      //u8MsgBufSize           - [DEF] Message buffer size
    FALSE,                                                  //boBufferCheck          - [DEF] Buffer overflow check 
    200,                                                    //u16CycTim              - [DEF] Cycle time [ms]   
    10,                                                     //u16MinCycTime          - [DEF] Minimum cycle time[ms]
    90,                                                     //u16OffTim              - [DEF]1st offset time [ms]
    TRUE,                                                   //boExtId                - [DEF] Can extended identifier (11/29 Bit)
    0xC1D705,                                               //u32Id                  - [DEF] Can identifier   
    (TUint16)eCSR_Msg5C1SendToEvision7,                     //u16CanSigRecLink       - [DEF] Can Signal Record Position Link 
    //Fixed safety feature settings
    FALSE,                                                  //boSafeInvMsg           - [DEF] Add bit inverse message
    0,                                                      //u16SafeInvDelay        - [ms] Delay time inverse message
    FALSE,                                                  //boSafeCnt              - [DEF] Check safety counter
    //All Errors
    0,                                                      //u8ErrCnt               - [DEF] Error Count  
    // Error [0-0]  
    { // TErrCfgFea
        { //ErrTag[0] - Error bit 0 [DM_ERR_00]
            0,                                              //u32ErrNum              - [num] Error Number
            FMI_NONE,                                       //u8ErrMode              - [enu] Failure Mode Indicator
            FMIEX_NONE,                                     //u8ErrModeExt           - [def] Extended Failure Mode Indicator
            ACC_ALL_NO,                                     //u16ErrAccLevel         - [def] Failure Access Level
            ERR_TYPE_ERROR,                                 //u8ErrType              - [enu] Error Type
            ERR_CAT0_NOT,                                   //u8ErrCat               - [enu] Error Category ( Lamp Type )
            ERR_STORE_NOT,                                  //u8ErrStore             - [enu] Error Store Behavior
            EG_NONE,                                        //u8ExcludeGroup         - [def] Error Exclude Group
            SC_NONE,                                        //u8SetCond              - [def] Set Condition - allows to activate an error detection
            0,                                              //u32TimeDetect          - [ms]  Error Detection ( Debounce ) Time
            FALSE,                                          //boDetectDboAfterSc     - [boo] Start debounce timer after a valid set condition
            RC_NONE,                                        //u8ReleaCond            - [def] Release Condition - allows an error to be released ( removed )
            0,                                              //u32TimeReset           - [ms]  Error Release ( Debounce ) Time
            FALSE,                                          //boResetDboAfterRc      - [boo] Start debounce timer after a valid release condition 
            RM_NONE,                                        //u8RestrictMode         - [def] Restricted Mode
            INF_NONE,                                       //u8InfoVarIdx           - [num] Array Index of Error Information Page
            FALSE,                                          //boCustList             - [boo] Memorized in a Customer List
            DIS_NONE                                        //u8DisplayOutput        - [def] Display Output ( Error Output Interface )
        }
    }
};

//Sofware Module Name: AppGlobal
PUBLIC_VAR const TCSndCfg gCSnd_ctCfg_Msg6C1SendToEvision7 =
{
    // Common
    "Msg6C1SendToEvision7",                                 //achName                - [STR] Display-Information-String
    BLO_RELEASE,                                            //eBloProc               - [DEF] Block behavior  
    // Fixed settings
    (TUint8)CBUS0_HWBUF_SND0,                               //u8SwHwBufNo            - [DEF] CAN send buffer position connection link  
    SNDTYP_CYCLIC,                                          //u8Type                 - [DEF] Send type
    SNDSTART_ACTIVE,                                        //u8Start                - [DEF] Start transmission
    0,                                                      //u8MsgBufSize           - [DEF] Message buffer size
    FALSE,                                                  //boBufferCheck          - [DEF] Buffer overflow check 
    200,                                                    //u16CycTim              - [DEF] Cycle time [ms]   
    10,                                                     //u16MinCycTime          - [DEF] Minimum cycle time[ms]
    100,                                                    //u16OffTim              - [DEF]1st offset time [ms]
    TRUE,                                                   //boExtId                - [DEF] Can extended identifier (11/29 Bit)
    0xC1D706,                                               //u32Id                  - [DEF] Can identifier   
    (TUint16)eCSR_Msg6C1SendToEvision7,                     //u16CanSigRecLink       - [DEF] Can Signal Record Position Link 
    //Fixed safety feature settings
    FALSE,                                                  //boSafeInvMsg           - [DEF] Add bit inverse message
    0,                                                      //u16SafeInvDelay        - [ms] Delay time inverse message
    FALSE,                                                  //boSafeCnt              - [DEF] Check safety counter
    //All Errors
    0,                                                      //u8ErrCnt               - [DEF] Error Count  
    // Error [0-0]  
    { // TErrCfgFea
        { //ErrTag[0] - Error bit 0 [DM_ERR_00]
            0,                                              //u32ErrNum              - [num] Error Number
            FMI_NONE,                                       //u8ErrMode              - [enu] Failure Mode Indicator
            FMIEX_NONE,                                     //u8ErrModeExt           - [def] Extended Failure Mode Indicator
            ACC_ALL_NO,                                     //u16ErrAccLevel         - [def] Failure Access Level
            ERR_TYPE_ERROR,                                 //u8ErrType              - [enu] Error Type
            ERR_CAT0_NOT,                                   //u8ErrCat               - [enu] Error Category ( Lamp Type )
            ERR_STORE_NOT,                                  //u8ErrStore             - [enu] Error Store Behavior
            EG_NONE,                                        //u8ExcludeGroup         - [def] Error Exclude Group
            SC_NONE,                                        //u8SetCond              - [def] Set Condition - allows to activate an error detection
            0,                                              //u32TimeDetect          - [ms]  Error Detection ( Debounce ) Time
            FALSE,                                          //boDetectDboAfterSc     - [boo] Start debounce timer after a valid set condition
            RC_NONE,                                        //u8ReleaCond            - [def] Release Condition - allows an error to be released ( removed )
            0,                                              //u32TimeReset           - [ms]  Error Release ( Debounce ) Time
            FALSE,                                          //boResetDboAfterRc      - [boo] Start debounce timer after a valid release condition 
            RM_NONE,                                        //u8RestrictMode         - [def] Restricted Mode
            INF_NONE,                                       //u8InfoVarIdx           - [num] Array Index of Error Information Page
            FALSE,                                          //boCustList             - [boo] Memorized in a Customer List
            DIS_NONE                                        //u8DisplayOutput        - [def] Display Output ( Error Output Interface )
        }
    }
};

//Sofware Module Name: AppGlobal
PUBLIC_VAR const TCSndCfg gCSnd_ctCfg_Msg7C1SendToEvision7 =
{
    // Common
    "Msg7C1SendToEvision7",                                 //achName                - [STR] Display-Information-String
    BLO_RELEASE,                                            //eBloProc               - [DEF] Block behavior  
    // Fixed settings
    (TUint8)CBUS0_HWBUF_SND0,                               //u8SwHwBufNo            - [DEF] CAN send buffer position connection link  
    SNDTYP_CYCLIC,                                          //u8Type                 - [DEF] Send type
    SNDSTART_ACTIVE,                                        //u8Start                - [DEF] Start transmission
    0,                                                      //u8MsgBufSize           - [DEF] Message buffer size
    FALSE,                                                  //boBufferCheck          - [DEF] Buffer overflow check 
    200,                                                    //u16CycTim              - [DEF] Cycle time [ms]   
    10,                                                     //u16MinCycTime          - [DEF] Minimum cycle time[ms]
    110,                                                    //u16OffTim              - [DEF]1st offset time [ms]
    TRUE,                                                   //boExtId                - [DEF] Can extended identifier (11/29 Bit)
    0xC1D707,                                               //u32Id                  - [DEF] Can identifier   
    (TUint16)eCSR_Msg7C1SendToEvision7,                     //u16CanSigRecLink       - [DEF] Can Signal Record Position Link 
    //Fixed safety feature settings
    FALSE,                                                  //boSafeInvMsg           - [DEF] Add bit inverse message
    0,                                                      //u16SafeInvDelay        - [ms] Delay time inverse message
    FALSE,                                                  //boSafeCnt              - [DEF] Check safety counter
    //All Errors
    0,                                                      //u8ErrCnt               - [DEF] Error Count  
    // Error [0-0]  
    { // TErrCfgFea
        { //ErrTag[0] - Error bit 0 [DM_ERR_00]
            0,                                              //u32ErrNum              - [num] Error Number
            FMI_NONE,                                       //u8ErrMode              - [enu] Failure Mode Indicator
            FMIEX_NONE,                                     //u8ErrModeExt           - [def] Extended Failure Mode Indicator
            ACC_ALL_NO,                                     //u16ErrAccLevel         - [def] Failure Access Level
            ERR_TYPE_ERROR,                                 //u8ErrType              - [enu] Error Type
            ERR_CAT0_NOT,                                   //u8ErrCat               - [enu] Error Category ( Lamp Type )
            ERR_STORE_NOT,                                  //u8ErrStore             - [enu] Error Store Behavior
            EG_NONE,                                        //u8ExcludeGroup         - [def] Error Exclude Group
            SC_NONE,                                        //u8SetCond              - [def] Set Condition - allows to activate an error detection
            0,                                              //u32TimeDetect          - [ms]  Error Detection ( Debounce ) Time
            FALSE,                                          //boDetectDboAfterSc     - [boo] Start debounce timer after a valid set condition
            RC_NONE,                                        //u8ReleaCond            - [def] Release Condition - allows an error to be released ( removed )
            0,                                              //u32TimeReset           - [ms]  Error Release ( Debounce ) Time
            FALSE,                                          //boResetDboAfterRc      - [boo] Start debounce timer after a valid release condition 
            RM_NONE,                                        //u8RestrictMode         - [def] Restricted Mode
            INF_NONE,                                       //u8InfoVarIdx           - [num] Array Index of Error Information Page
            FALSE,                                          //boCustList             - [boo] Memorized in a Customer List
            DIS_NONE                                        //u8DisplayOutput        - [def] Display Output ( Error Output Interface )
        }
    }
};

//Sofware Module Name: AppGlobal
PUBLIC_VAR const TCSndCfg gCSnd_ctCfg_Msg8C1SendToEvision7 =
{
    // Common
    "Msg8C1SendToEvision7",                                 //achName                - [STR] Display-Information-String
    BLO_RELEASE,                                            //eBloProc               - [DEF] Block behavior  
    // Fixed settings
    (TUint8)CBUS0_HWBUF_SND0,                               //u8SwHwBufNo            - [DEF] CAN send buffer position connection link  
    SNDTYP_CYCLIC,                                          //u8Type                 - [DEF] Send type
    SNDSTART_ACTIVE,                                        //u8Start                - [DEF] Start transmission
    0,                                                      //u8MsgBufSize           - [DEF] Message buffer size
    FALSE,                                                  //boBufferCheck          - [DEF] Buffer overflow check 
    200,                                                    //u16CycTim              - [DEF] Cycle time [ms]   
    10,                                                     //u16MinCycTime          - [DEF] Minimum cycle time[ms]
    120,                                                    //u16OffTim              - [DEF]1st offset time [ms]
    TRUE,                                                   //boExtId                - [DEF] Can extended identifier (11/29 Bit)
    0xC1D708,                                               //u32Id                  - [DEF] Can identifier   
    (TUint16)eCSR_Msg8C1SendToEvision7,                     //u16CanSigRecLink       - [DEF] Can Signal Record Position Link 
    //Fixed safety feature settings
    FALSE,                                                  //boSafeInvMsg           - [DEF] Add bit inverse message
    0,                                                      //u16SafeInvDelay        - [ms] Delay time inverse message
    FALSE,                                                  //boSafeCnt              - [DEF] Check safety counter
    //All Errors
    0,                                                      //u8ErrCnt               - [DEF] Error Count  
    // Error [0-0]  
    { // TErrCfgFea
        { //ErrTag[0] - Error bit 0 [DM_ERR_00]
            0,                                              //u32ErrNum              - [num] Error Number
            FMI_NONE,                                       //u8ErrMode              - [enu] Failure Mode Indicator
            FMIEX_NONE,                                     //u8ErrModeExt           - [def] Extended Failure Mode Indicator
            ACC_ALL_NO,                                     //u16ErrAccLevel         - [def] Failure Access Level
            ERR_TYPE_ERROR,                                 //u8ErrType              - [enu] Error Type
            ERR_CAT0_NOT,                                   //u8ErrCat               - [enu] Error Category ( Lamp Type )
            ERR_STORE_NOT,                                  //u8ErrStore             - [enu] Error Store Behavior
            EG_NONE,                                        //u8ExcludeGroup         - [def] Error Exclude Group
            SC_NONE,                                        //u8SetCond              - [def] Set Condition - allows to activate an error detection
            0,                                              //u32TimeDetect          - [ms]  Error Detection ( Debounce ) Time
            FALSE,                                          //boDetectDboAfterSc     - [boo] Start debounce timer after a valid set condition
            RC_NONE,                                        //u8ReleaCond            - [def] Release Condition - allows an error to be released ( removed )
            0,                                              //u32TimeReset           - [ms]  Error Release ( Debounce ) Time
            FALSE,                                          //boResetDboAfterRc      - [boo] Start debounce timer after a valid release condition 
            RM_NONE,                                        //u8RestrictMode         - [def] Restricted Mode
            INF_NONE,                                       //u8InfoVarIdx           - [num] Array Index of Error Information Page
            FALSE,                                          //boCustList             - [boo] Memorized in a Customer List
            DIS_NONE                                        //u8DisplayOutput        - [def] Display Output ( Error Output Interface )
        }
    }
};

//Sofware Module Name: AppGlobal
PUBLIC_VAR const TCSndCfg gCSnd_ctCfg_Msg9C1SendToEvision7 =
{
    // Common
    "Msg9C1SendToEvision7",                                 //achName                - [STR] Display-Information-String
    BLO_RELEASE,                                            //eBloProc               - [DEF] Block behavior  
    // Fixed settings
    (TUint8)CBUS0_HWBUF_SND0,                               //u8SwHwBufNo            - [DEF] CAN send buffer position connection link  
    SNDTYP_CYCLIC,                                          //u8Type                 - [DEF] Send type
    SNDSTART_ACTIVE,                                        //u8Start                - [DEF] Start transmission
    0,                                                      //u8MsgBufSize           - [DEF] Message buffer size
    FALSE,                                                  //boBufferCheck          - [DEF] Buffer overflow check 
    200,                                                    //u16CycTim              - [DEF] Cycle time [ms]   
    10,                                                     //u16MinCycTime          - [DEF] Minimum cycle time[ms]
    130,                                                    //u16OffTim              - [DEF]1st offset time [ms]
    TRUE,                                                   //boExtId                - [DEF] Can extended identifier (11/29 Bit)
    0xC1D709,                                               //u32Id                  - [DEF] Can identifier   
    (TUint16)eCSR_Msg9C1SendToEvision7,                     //u16CanSigRecLink       - [DEF] Can Signal Record Position Link 
    //Fixed safety feature settings
    FALSE,                                                  //boSafeInvMsg           - [DEF] Add bit inverse message
    0,                                                      //u16SafeInvDelay        - [ms] Delay time inverse message
    FALSE,                                                  //boSafeCnt              - [DEF] Check safety counter
    //All Errors
    0,                                                      //u8ErrCnt               - [DEF] Error Count  
    // Error [0-0]  
    { // TErrCfgFea
        { //ErrTag[0] - Error bit 0 [DM_ERR_00]
            0,                                              //u32ErrNum              - [num] Error Number
            FMI_NONE,                                       //u8ErrMode              - [enu] Failure Mode Indicator
            FMIEX_NONE,                                     //u8ErrModeExt           - [def] Extended Failure Mode Indicator
            ACC_ALL_NO,                                     //u16ErrAccLevel         - [def] Failure Access Level
            ERR_TYPE_ERROR,                                 //u8ErrType              - [enu] Error Type
            ERR_CAT0_NOT,                                   //u8ErrCat               - [enu] Error Category ( Lamp Type )
            ERR_STORE_NOT,                                  //u8ErrStore             - [enu] Error Store Behavior
            EG_NONE,                                        //u8ExcludeGroup         - [def] Error Exclude Group
            SC_NONE,                                        //u8SetCond              - [def] Set Condition - allows to activate an error detection
            0,                                              //u32TimeDetect          - [ms]  Error Detection ( Debounce ) Time
            FALSE,                                          //boDetectDboAfterSc     - [boo] Start debounce timer after a valid set condition
            RC_NONE,                                        //u8ReleaCond            - [def] Release Condition - allows an error to be released ( removed )
            0,                                              //u32TimeReset           - [ms]  Error Release ( Debounce ) Time
            FALSE,                                          //boResetDboAfterRc      - [boo] Start debounce timer after a valid release condition 
            RM_NONE,                                        //u8RestrictMode         - [def] Restricted Mode
            INF_NONE,                                       //u8InfoVarIdx           - [num] Array Index of Error Information Page
            FALSE,                                          //boCustList             - [boo] Memorized in a Customer List
            DIS_NONE                                        //u8DisplayOutput        - [def] Display Output ( Error Output Interface )
        }
    }
};

//Sofware Module Name: AppGlobal
PUBLIC_VAR const TCSndCfg gCSnd_ctCfg_Msg10C1SendToEvision7 =
{
    // Common
    "Msg10C1SendToEvision7",                                //achName                - [STR] Display-Information-String
    BLO_RELEASE,                                            //eBloProc               - [DEF] Block behavior  
    // Fixed settings
    (TUint8)CBUS0_HWBUF_SND0,                               //u8SwHwBufNo            - [DEF] CAN send buffer position connection link  
    SNDTYP_CYCLIC,                                          //u8Type                 - [DEF] Send type
    SNDSTART_ACTIVE,                                        //u8Start                - [DEF] Start transmission
    0,                                                      //u8MsgBufSize           - [DEF] Message buffer size
    FALSE,                                                  //boBufferCheck          - [DEF] Buffer overflow check 
    200,                                                    //u16CycTim              - [DEF] Cycle time [ms]   
    10,                                                     //u16MinCycTime          - [DEF] Minimum cycle time[ms]
    140,                                                    //u16OffTim              - [DEF]1st offset time [ms]
    TRUE,                                                   //boExtId                - [DEF] Can extended identifier (11/29 Bit)
    0xC1D70A,                                               //u32Id                  - [DEF] Can identifier   
    (TUint16)eCSR_Msg10C1SendToEvision7,                    //u16CanSigRecLink       - [DEF] Can Signal Record Position Link 
    //Fixed safety feature settings
    FALSE,                                                  //boSafeInvMsg           - [DEF] Add bit inverse message
    0,                                                      //u16SafeInvDelay        - [ms] Delay time inverse message
    FALSE,                                                  //boSafeCnt              - [DEF] Check safety counter
    //All Errors
    0,                                                      //u8ErrCnt               - [DEF] Error Count  
    // Error [0-0]  
    { // TErrCfgFea
        { //ErrTag[0] - Error bit 0 [DM_ERR_00]
            0,                                              //u32ErrNum              - [num] Error Number
            FMI_NONE,                                       //u8ErrMode              - [enu] Failure Mode Indicator
            FMIEX_NONE,                                     //u8ErrModeExt           - [def] Extended Failure Mode Indicator
            ACC_ALL_NO,                                     //u16ErrAccLevel         - [def] Failure Access Level
            ERR_TYPE_ERROR,                                 //u8ErrType              - [enu] Error Type
            ERR_CAT0_NOT,                                   //u8ErrCat               - [enu] Error Category ( Lamp Type )
            ERR_STORE_NOT,                                  //u8ErrStore             - [enu] Error Store Behavior
            EG_NONE,                                        //u8ExcludeGroup         - [def] Error Exclude Group
            SC_NONE,                                        //u8SetCond              - [def] Set Condition - allows to activate an error detection
            0,                                              //u32TimeDetect          - [ms]  Error Detection ( Debounce ) Time
            FALSE,                                          //boDetectDboAfterSc     - [boo] Start debounce timer after a valid set condition
            RC_NONE,                                        //u8ReleaCond            - [def] Release Condition - allows an error to be released ( removed )
            0,                                              //u32TimeReset           - [ms]  Error Release ( Debounce ) Time
            FALSE,                                          //boResetDboAfterRc      - [boo] Start debounce timer after a valid release condition 
            RM_NONE,                                        //u8RestrictMode         - [def] Restricted Mode
            INF_NONE,                                       //u8InfoVarIdx           - [num] Array Index of Error Information Page
            FALSE,                                          //boCustList             - [boo] Memorized in a Customer List
            DIS_NONE                                        //u8DisplayOutput        - [def] Display Output ( Error Output Interface )
        }
    }
};

//Sofware Module Name: AppGlobal
PUBLIC_VAR const TCSndCfg gCSnd_ctCfg_Msg11C1SendToEvision7 =
{
    // Common
    "Msg11C1SendToEvision7",                                //achName                - [STR] Display-Information-String
    BLO_RELEASE,                                            //eBloProc               - [DEF] Block behavior  
    // Fixed settings
    (TUint8)CBUS0_HWBUF_SND0,                               //u8SwHwBufNo            - [DEF] CAN send buffer position connection link  
    SNDTYP_CYCLIC,                                          //u8Type                 - [DEF] Send type
    SNDSTART_ACTIVE,                                        //u8Start                - [DEF] Start transmission
    0,                                                      //u8MsgBufSize           - [DEF] Message buffer size
    FALSE,                                                  //boBufferCheck          - [DEF] Buffer overflow check 
    200,                                                    //u16CycTim              - [DEF] Cycle time [ms]   
    10,                                                     //u16MinCycTime          - [DEF] Minimum cycle time[ms]
    150,                                                    //u16OffTim              - [DEF]1st offset time [ms]
    TRUE,                                                   //boExtId                - [DEF] Can extended identifier (11/29 Bit)
    0xC1D70B,                                               //u32Id                  - [DEF] Can identifier   
    (TUint16)eCSR_Msg11C1SendToEvision7,                    //u16CanSigRecLink       - [DEF] Can Signal Record Position Link 
    //Fixed safety feature settings
    FALSE,                                                  //boSafeInvMsg           - [DEF] Add bit inverse message
    0,                                                      //u16SafeInvDelay        - [ms] Delay time inverse message
    FALSE,                                                  //boSafeCnt              - [DEF] Check safety counter
    //All Errors
    0,                                                      //u8ErrCnt               - [DEF] Error Count  
    // Error [0-0]  
    { // TErrCfgFea
        { //ErrTag[0] - Error bit 0 [DM_ERR_00]
            0,                                              //u32ErrNum              - [num] Error Number
            FMI_NONE,                                       //u8ErrMode              - [enu] Failure Mode Indicator
            FMIEX_NONE,                                     //u8ErrModeExt           - [def] Extended Failure Mode Indicator
            ACC_ALL_NO,                                     //u16ErrAccLevel         - [def] Failure Access Level
            ERR_TYPE_ERROR,                                 //u8ErrType              - [enu] Error Type
            ERR_CAT0_NOT,                                   //u8ErrCat               - [enu] Error Category ( Lamp Type )
            ERR_STORE_NOT,                                  //u8ErrStore             - [enu] Error Store Behavior
            EG_NONE,                                        //u8ExcludeGroup         - [def] Error Exclude Group
            SC_NONE,                                        //u8SetCond              - [def] Set Condition - allows to activate an error detection
            0,                                              //u32TimeDetect          - [ms]  Error Detection ( Debounce ) Time
            FALSE,                                          //boDetectDboAfterSc     - [boo] Start debounce timer after a valid set condition
            RC_NONE,                                        //u8ReleaCond            - [def] Release Condition - allows an error to be released ( removed )
            0,                                              //u32TimeReset           - [ms]  Error Release ( Debounce ) Time
            FALSE,                                          //boResetDboAfterRc      - [boo] Start debounce timer after a valid release condition 
            RM_NONE,                                        //u8RestrictMode         - [def] Restricted Mode
            INF_NONE,                                       //u8InfoVarIdx           - [num] Array Index of Error Information Page
            FALSE,                                          //boCustList             - [boo] Memorized in a Customer List
            DIS_NONE                                        //u8DisplayOutput        - [def] Display Output ( Error Output Interface )
        }
    }
};

//Sofware Module Name: AppGlobal
PUBLIC_VAR const TCSndCfg gCSnd_ctCfg_Msg1C1SendToOpus =
{
    // Common
    "Msg1C1SendToOpus",                                     //achName                - [STR] Display-Information-String
    BLO_RELEASE,                                            //eBloProc               - [DEF] Block behavior  
    // Fixed settings
    (TUint8)CBUS1_HWBUF_SND0,                               //u8SwHwBufNo            - [DEF] CAN send buffer position connection link  
    SNDTYP_CYCLIC,                                          //u8Type                 - [DEF] Send type
    SNDSTART_ACTIVE,                                        //u8Start                - [DEF] Start transmission
    0,                                                      //u8MsgBufSize           - [DEF] Message buffer size
    FALSE,                                                  //boBufferCheck          - [DEF] Buffer overflow check 
    200,                                                    //u16CycTim              - [DEF] Cycle time [ms]   
    10,                                                     //u16MinCycTime          - [DEF] Minimum cycle time[ms]
    500,                                                    //u16OffTim              - [DEF]1st offset time [ms]
    FALSE,                                                  //boExtId                - [DEF] Can extended identifier (11/29 Bit)
    0x403,                                                  //u32Id                  - [DEF] Can identifier   
    (TUint16)eCSR_Msg1C1SendToOpus,                         //u16CanSigRecLink       - [DEF] Can Signal Record Position Link 
    //Fixed safety feature settings
    FALSE,                                                  //boSafeInvMsg           - [DEF] Add bit inverse message
    0,                                                      //u16SafeInvDelay        - [ms] Delay time inverse message
    FALSE,                                                  //boSafeCnt              - [DEF] Check safety counter
    //All Errors
    0,                                                      //u8ErrCnt               - [DEF] Error Count  
    // Error [0-0]  
    { // TErrCfgFea
        { //ErrTag[0] - Error bit 0 [DM_ERR_00]
            0,                                              //u32ErrNum              - [num] Error Number
            FMI_NONE,                                       //u8ErrMode              - [enu] Failure Mode Indicator
            FMIEX_NONE,                                     //u8ErrModeExt           - [def] Extended Failure Mode Indicator
            ACC_ALL_NO,                                     //u16ErrAccLevel         - [def] Failure Access Level
            ERR_TYPE_ERROR,                                 //u8ErrType              - [enu] Error Type
            ERR_CAT0_NOT,                                   //u8ErrCat               - [enu] Error Category ( Lamp Type )
            ERR_STORE_NOT,                                  //u8ErrStore             - [enu] Error Store Behavior
            EG_NONE,                                        //u8ExcludeGroup         - [def] Error Exclude Group
            SC_NONE,                                        //u8SetCond              - [def] Set Condition - allows to activate an error detection
            0,                                              //u32TimeDetect          - [ms]  Error Detection ( Debounce ) Time
            FALSE,                                          //boDetectDboAfterSc     - [boo] Start debounce timer after a valid set condition
            RC_NONE,                                        //u8ReleaCond            - [def] Release Condition - allows an error to be released ( removed )
            0,                                              //u32TimeReset           - [ms]  Error Release ( Debounce ) Time
            FALSE,                                          //boResetDboAfterRc      - [boo] Start debounce timer after a valid release condition 
            RM_NONE,                                        //u8RestrictMode         - [def] Restricted Mode
            INF_NONE,                                       //u8InfoVarIdx           - [num] Array Index of Error Information Page
            FALSE,                                          //boCustList             - [boo] Memorized in a Customer List
            DIS_NONE                                        //u8DisplayOutput        - [def] Display Output ( Error Output Interface )
        }
    }
};

//Sofware Module Name: AppGlobal
PUBLIC_VAR const TCSndCfg gCSnd_ctCfg_Msg2C1SendToOpus =
{
    // Common
    "Msg2C1SendToOpus",                                     //achName                - [STR] Display-Information-String
    BLO_RELEASE,                                            //eBloProc               - [DEF] Block behavior  
    // Fixed settings
    (TUint8)CBUS1_HWBUF_SND0,                               //u8SwHwBufNo            - [DEF] CAN send buffer position connection link  
    SNDTYP_CYCLIC,                                          //u8Type                 - [DEF] Send type
    SNDSTART_ACTIVE,                                        //u8Start                - [DEF] Start transmission
    0,                                                      //u8MsgBufSize           - [DEF] Message buffer size
    FALSE,                                                  //boBufferCheck          - [DEF] Buffer overflow check 
    200,                                                    //u16CycTim              - [DEF] Cycle time [ms]   
    10,                                                     //u16MinCycTime          - [DEF] Minimum cycle time[ms]
    520,                                                    //u16OffTim              - [DEF]1st offset time [ms]
    FALSE,                                                  //boExtId                - [DEF] Can extended identifier (11/29 Bit)
    0x503,                                                  //u32Id                  - [DEF] Can identifier   
    (TUint16)eCSR_Msg2C1SendToOpus,                         //u16CanSigRecLink       - [DEF] Can Signal Record Position Link 
    //Fixed safety feature settings
    FALSE,                                                  //boSafeInvMsg           - [DEF] Add bit inverse message
    0,                                                      //u16SafeInvDelay        - [ms] Delay time inverse message
    FALSE,                                                  //boSafeCnt              - [DEF] Check safety counter
    //All Errors
    0,                                                      //u8ErrCnt               - [DEF] Error Count  
    // Error [0-0]  
    { // TErrCfgFea
        { //ErrTag[0] - Error bit 0 [DM_ERR_00]
            0,                                              //u32ErrNum              - [num] Error Number
            FMI_NONE,                                       //u8ErrMode              - [enu] Failure Mode Indicator
            FMIEX_NONE,                                     //u8ErrModeExt           - [def] Extended Failure Mode Indicator
            ACC_ALL_NO,                                     //u16ErrAccLevel         - [def] Failure Access Level
            ERR_TYPE_ERROR,                                 //u8ErrType              - [enu] Error Type
            ERR_CAT0_NOT,                                   //u8ErrCat               - [enu] Error Category ( Lamp Type )
            ERR_STORE_NOT,                                  //u8ErrStore             - [enu] Error Store Behavior
            EG_NONE,                                        //u8ExcludeGroup         - [def] Error Exclude Group
            SC_NONE,                                        //u8SetCond              - [def] Set Condition - allows to activate an error detection
            0,                                              //u32TimeDetect          - [ms]  Error Detection ( Debounce ) Time
            FALSE,                                          //boDetectDboAfterSc     - [boo] Start debounce timer after a valid set condition
            RC_NONE,                                        //u8ReleaCond            - [def] Release Condition - allows an error to be released ( removed )
            0,                                              //u32TimeReset           - [ms]  Error Release ( Debounce ) Time
            FALSE,                                          //boResetDboAfterRc      - [boo] Start debounce timer after a valid release condition 
            RM_NONE,                                        //u8RestrictMode         - [def] Restricted Mode
            INF_NONE,                                       //u8InfoVarIdx           - [num] Array Index of Error Information Page
            FALSE,                                          //boCustList             - [boo] Memorized in a Customer List
            DIS_NONE                                        //u8DisplayOutput        - [def] Display Output ( Error Output Interface )
        }
    }
};

//Sofware Module Name: AppGlobal
PUBLIC_VAR const TCSndCfg gCSnd_ctCfg_Msg3C1SendToOpus =
{
    // Common
    "Msg3C1SendToOpus",                                     //achName                - [STR] Display-Information-String
    BLO_RELEASE,                                            //eBloProc               - [DEF] Block behavior  
    // Fixed settings
    (TUint8)CBUS1_HWBUF_SND0,                               //u8SwHwBufNo            - [DEF] CAN send buffer position connection link  
    SNDTYP_CYCLIC,                                          //u8Type                 - [DEF] Send type
    SNDSTART_ACTIVE,                                        //u8Start                - [DEF] Start transmission
    0,                                                      //u8MsgBufSize           - [DEF] Message buffer size
    FALSE,                                                  //boBufferCheck          - [DEF] Buffer overflow check 
    200,                                                    //u16CycTim              - [DEF] Cycle time [ms]   
    10,                                                     //u16MinCycTime          - [DEF] Minimum cycle time[ms]
    540,                                                    //u16OffTim              - [DEF]1st offset time [ms]
    FALSE,                                                  //boExtId                - [DEF] Can extended identifier (11/29 Bit)
    0x404,                                                  //u32Id                  - [DEF] Can identifier   
    (TUint16)eCSR_Msg3C1SendToOpus,                         //u16CanSigRecLink       - [DEF] Can Signal Record Position Link 
    //Fixed safety feature settings
    FALSE,                                                  //boSafeInvMsg           - [DEF] Add bit inverse message
    0,                                                      //u16SafeInvDelay        - [ms] Delay time inverse message
    FALSE,                                                  //boSafeCnt              - [DEF] Check safety counter
    //All Errors
    0,                                                      //u8ErrCnt               - [DEF] Error Count  
    // Error [0-0]  
    { // TErrCfgFea
        { //ErrTag[0] - Error bit 0 [DM_ERR_00]
            0,                                              //u32ErrNum              - [num] Error Number
            FMI_NONE,                                       //u8ErrMode              - [enu] Failure Mode Indicator
            FMIEX_NONE,                                     //u8ErrModeExt           - [def] Extended Failure Mode Indicator
            ACC_ALL_NO,                                     //u16ErrAccLevel         - [def] Failure Access Level
            ERR_TYPE_ERROR,                                 //u8ErrType              - [enu] Error Type
            ERR_CAT0_NOT,                                   //u8ErrCat               - [enu] Error Category ( Lamp Type )
            ERR_STORE_NOT,                                  //u8ErrStore             - [enu] Error Store Behavior
            EG_NONE,                                        //u8ExcludeGroup         - [def] Error Exclude Group
            SC_NONE,                                        //u8SetCond              - [def] Set Condition - allows to activate an error detection
            0,                                              //u32TimeDetect          - [ms]  Error Detection ( Debounce ) Time
            FALSE,                                          //boDetectDboAfterSc     - [boo] Start debounce timer after a valid set condition
            RC_NONE,                                        //u8ReleaCond            - [def] Release Condition - allows an error to be released ( removed )
            0,                                              //u32TimeReset           - [ms]  Error Release ( Debounce ) Time
            FALSE,                                          //boResetDboAfterRc      - [boo] Start debounce timer after a valid release condition 
            RM_NONE,                                        //u8RestrictMode         - [def] Restricted Mode
            INF_NONE,                                       //u8InfoVarIdx           - [num] Array Index of Error Information Page
            FALSE,                                          //boCustList             - [boo] Memorized in a Customer List
            DIS_NONE                                        //u8DisplayOutput        - [def] Display Output ( Error Output Interface )
        }
    }
};

//Sofware Module Name: AppGlobal
PUBLIC_VAR const TCSndCfg gCSnd_ctCfg_Msg4C1SendToOpus =
{
    // Common
    "Msg4C1SendToOpus",                                     //achName                - [STR] Display-Information-String
    BLO_RELEASE,                                            //eBloProc               - [DEF] Block behavior  
    // Fixed settings
    (TUint8)CBUS1_HWBUF_SND0,                               //u8SwHwBufNo            - [DEF] CAN send buffer position connection link  
    SNDTYP_CYCLIC,                                          //u8Type                 - [DEF] Send type
    SNDSTART_ACTIVE,                                        //u8Start                - [DEF] Start transmission
    0,                                                      //u8MsgBufSize           - [DEF] Message buffer size
    FALSE,                                                  //boBufferCheck          - [DEF] Buffer overflow check 
    200,                                                    //u16CycTim              - [DEF] Cycle time [ms]   
    10,                                                     //u16MinCycTime          - [DEF] Minimum cycle time[ms]
    560,                                                    //u16OffTim              - [DEF]1st offset time [ms]
    FALSE,                                                  //boExtId                - [DEF] Can extended identifier (11/29 Bit)
    0x504,                                                  //u32Id                  - [DEF] Can identifier   
    (TUint16)eCSR_Msg4C1SendToOpus,                         //u16CanSigRecLink       - [DEF] Can Signal Record Position Link 
    //Fixed safety feature settings
    FALSE,                                                  //boSafeInvMsg           - [DEF] Add bit inverse message
    0,                                                      //u16SafeInvDelay        - [ms] Delay time inverse message
    FALSE,                                                  //boSafeCnt              - [DEF] Check safety counter
    //All Errors
    0,                                                      //u8ErrCnt               - [DEF] Error Count  
    // Error [0-0]  
    { // TErrCfgFea
        { //ErrTag[0] - Error bit 0 [DM_ERR_00]
            0,                                              //u32ErrNum              - [num] Error Number
            FMI_NONE,                                       //u8ErrMode              - [enu] Failure Mode Indicator
            FMIEX_NONE,                                     //u8ErrModeExt           - [def] Extended Failure Mode Indicator
            ACC_ALL_NO,                                     //u16ErrAccLevel         - [def] Failure Access Level
            ERR_TYPE_ERROR,                                 //u8ErrType              - [enu] Error Type
            ERR_CAT0_NOT,                                   //u8ErrCat               - [enu] Error Category ( Lamp Type )
            ERR_STORE_NOT,                                  //u8ErrStore             - [enu] Error Store Behavior
            EG_NONE,                                        //u8ExcludeGroup         - [def] Error Exclude Group
            SC_NONE,                                        //u8SetCond              - [def] Set Condition - allows to activate an error detection
            0,                                              //u32TimeDetect          - [ms]  Error Detection ( Debounce ) Time
            FALSE,                                          //boDetectDboAfterSc     - [boo] Start debounce timer after a valid set condition
            RC_NONE,                                        //u8ReleaCond            - [def] Release Condition - allows an error to be released ( removed )
            0,                                              //u32TimeReset           - [ms]  Error Release ( Debounce ) Time
            FALSE,                                          //boResetDboAfterRc      - [boo] Start debounce timer after a valid release condition 
            RM_NONE,                                        //u8RestrictMode         - [def] Restricted Mode
            INF_NONE,                                       //u8InfoVarIdx           - [num] Array Index of Error Information Page
            FALSE,                                          //boCustList             - [boo] Memorized in a Customer List
            DIS_NONE                                        //u8DisplayOutput        - [def] Display Output ( Error Output Interface )
        }
    }
};

//Sofware Module Name: AppGlobal
PUBLIC_VAR const TCSndCfg gCSnd_ctCfg_Msg5C1SendToOpus =
{
    // Common
    "Msg5C1SendToOpus",                                     //achName                - [STR] Display-Information-String
    BLO_RELEASE,                                            //eBloProc               - [DEF] Block behavior  
    // Fixed settings
    (TUint8)CBUS1_HWBUF_SND0,                               //u8SwHwBufNo            - [DEF] CAN send buffer position connection link  
    SNDTYP_CYCLIC,                                          //u8Type                 - [DEF] Send type
    SNDSTART_ACTIVE,                                        //u8Start                - [DEF] Start transmission
    0,                                                      //u8MsgBufSize           - [DEF] Message buffer size
    FALSE,                                                  //boBufferCheck          - [DEF] Buffer overflow check 
    200,                                                    //u16CycTim              - [DEF] Cycle time [ms]   
    10,                                                     //u16MinCycTime          - [DEF] Minimum cycle time[ms]
    580,                                                    //u16OffTim              - [DEF]1st offset time [ms]
    FALSE,                                                  //boExtId                - [DEF] Can extended identifier (11/29 Bit)
    0x405,                                                  //u32Id                  - [DEF] Can identifier   
    (TUint16)eCSR_Msg5C1SendToOpus,                         //u16CanSigRecLink       - [DEF] Can Signal Record Position Link 
    //Fixed safety feature settings
    FALSE,                                                  //boSafeInvMsg           - [DEF] Add bit inverse message
    0,                                                      //u16SafeInvDelay        - [ms] Delay time inverse message
    FALSE,                                                  //boSafeCnt              - [DEF] Check safety counter
    //All Errors
    0,                                                      //u8ErrCnt               - [DEF] Error Count  
    // Error [0-0]  
    { // TErrCfgFea
        { //ErrTag[0] - Error bit 0 [DM_ERR_00]
            0,                                              //u32ErrNum              - [num] Error Number
            FMI_NONE,                                       //u8ErrMode              - [enu] Failure Mode Indicator
            FMIEX_NONE,                                     //u8ErrModeExt           - [def] Extended Failure Mode Indicator
            ACC_ALL_NO,                                     //u16ErrAccLevel         - [def] Failure Access Level
            ERR_TYPE_ERROR,                                 //u8ErrType              - [enu] Error Type
            ERR_CAT0_NOT,                                   //u8ErrCat               - [enu] Error Category ( Lamp Type )
            ERR_STORE_NOT,                                  //u8ErrStore             - [enu] Error Store Behavior
            EG_NONE,                                        //u8ExcludeGroup         - [def] Error Exclude Group
            SC_NONE,                                        //u8SetCond              - [def] Set Condition - allows to activate an error detection
            0,                                              //u32TimeDetect          - [ms]  Error Detection ( Debounce ) Time
            FALSE,                                          //boDetectDboAfterSc     - [boo] Start debounce timer after a valid set condition
            RC_NONE,                                        //u8ReleaCond            - [def] Release Condition - allows an error to be released ( removed )
            0,                                              //u32TimeReset           - [ms]  Error Release ( Debounce ) Time
            FALSE,                                          //boResetDboAfterRc      - [boo] Start debounce timer after a valid release condition 
            RM_NONE,                                        //u8RestrictMode         - [def] Restricted Mode
            INF_NONE,                                       //u8InfoVarIdx           - [num] Array Index of Error Information Page
            FALSE,                                          //boCustList             - [boo] Memorized in a Customer List
            DIS_NONE                                        //u8DisplayOutput        - [def] Display Output ( Error Output Interface )
        }
    }
};

//Sofware Module Name: AppGlobal
PUBLIC_VAR const TCSndCfg gCSnd_ctCfg_Msg6C1SendToOpus =
{
    // Common
    "Msg6C1SendToOpus",                                     //achName                - [STR] Display-Information-String
    BLO_RELEASE,                                            //eBloProc               - [DEF] Block behavior  
    // Fixed settings
    (TUint8)CBUS1_HWBUF_SND0,                               //u8SwHwBufNo            - [DEF] CAN send buffer position connection link  
    SNDTYP_CYCLIC,                                          //u8Type                 - [DEF] Send type
    SNDSTART_ACTIVE,                                        //u8Start                - [DEF] Start transmission
    0,                                                      //u8MsgBufSize           - [DEF] Message buffer size
    FALSE,                                                  //boBufferCheck          - [DEF] Buffer overflow check 
    200,                                                    //u16CycTim              - [DEF] Cycle time [ms]   
    10,                                                     //u16MinCycTime          - [DEF] Minimum cycle time[ms]
    600,                                                    //u16OffTim              - [DEF]1st offset time [ms]
    FALSE,                                                  //boExtId                - [DEF] Can extended identifier (11/29 Bit)
    0x505,                                                  //u32Id                  - [DEF] Can identifier   
    (TUint16)eCSR_Msg6C1SendToOpus,                         //u16CanSigRecLink       - [DEF] Can Signal Record Position Link 
    //Fixed safety feature settings
    FALSE,                                                  //boSafeInvMsg           - [DEF] Add bit inverse message
    0,                                                      //u16SafeInvDelay        - [ms] Delay time inverse message
    FALSE,                                                  //boSafeCnt              - [DEF] Check safety counter
    //All Errors
    0,                                                      //u8ErrCnt               - [DEF] Error Count  
    // Error [0-0]  
    { // TErrCfgFea
        { //ErrTag[0] - Error bit 0 [DM_ERR_00]
            0,                                              //u32ErrNum              - [num] Error Number
            FMI_NONE,                                       //u8ErrMode              - [enu] Failure Mode Indicator
            FMIEX_NONE,                                     //u8ErrModeExt           - [def] Extended Failure Mode Indicator
            ACC_ALL_NO,                                     //u16ErrAccLevel         - [def] Failure Access Level
            ERR_TYPE_ERROR,                                 //u8ErrType              - [enu] Error Type
            ERR_CAT0_NOT,                                   //u8ErrCat               - [enu] Error Category ( Lamp Type )
            ERR_STORE_NOT,                                  //u8ErrStore             - [enu] Error Store Behavior
            EG_NONE,                                        //u8ExcludeGroup         - [def] Error Exclude Group
            SC_NONE,                                        //u8SetCond              - [def] Set Condition - allows to activate an error detection
            0,                                              //u32TimeDetect          - [ms]  Error Detection ( Debounce ) Time
            FALSE,                                          //boDetectDboAfterSc     - [boo] Start debounce timer after a valid set condition
            RC_NONE,                                        //u8ReleaCond            - [def] Release Condition - allows an error to be released ( removed )
            0,                                              //u32TimeReset           - [ms]  Error Release ( Debounce ) Time
            FALSE,                                          //boResetDboAfterRc      - [boo] Start debounce timer after a valid release condition 
            RM_NONE,                                        //u8RestrictMode         - [def] Restricted Mode
            INF_NONE,                                       //u8InfoVarIdx           - [num] Array Index of Error Information Page
            FALSE,                                          //boCustList             - [boo] Memorized in a Customer List
            DIS_NONE                                        //u8DisplayOutput        - [def] Display Output ( Error Output Interface )
        }
    }
};

//Sofware Module Name: AppGlobal
PUBLIC_VAR const TCSndCfg gCSnd_ctCfg_Msg7C1SendToOpus =
{
    // Common
    "Msg7C1SendToOpus",                                     //achName                - [STR] Display-Information-String
    BLO_RELEASE,                                            //eBloProc               - [DEF] Block behavior  
    // Fixed settings
    (TUint8)CBUS1_HWBUF_SND0,                               //u8SwHwBufNo            - [DEF] CAN send buffer position connection link  
    SNDTYP_CYCLIC,                                          //u8Type                 - [DEF] Send type
    SNDSTART_ACTIVE,                                        //u8Start                - [DEF] Start transmission
    0,                                                      //u8MsgBufSize           - [DEF] Message buffer size
    FALSE,                                                  //boBufferCheck          - [DEF] Buffer overflow check 
    200,                                                    //u16CycTim              - [DEF] Cycle time [ms]   
    10,                                                     //u16MinCycTime          - [DEF] Minimum cycle time[ms]
    620,                                                    //u16OffTim              - [DEF]1st offset time [ms]
    FALSE,                                                  //boExtId                - [DEF] Can extended identifier (11/29 Bit)
    0x406,                                                  //u32Id                  - [DEF] Can identifier   
    (TUint16)eCSR_Msg7C1SendToOpus,                         //u16CanSigRecLink       - [DEF] Can Signal Record Position Link 
    //Fixed safety feature settings
    FALSE,                                                  //boSafeInvMsg           - [DEF] Add bit inverse message
    0,                                                      //u16SafeInvDelay        - [ms] Delay time inverse message
    FALSE,                                                  //boSafeCnt              - [DEF] Check safety counter
    //All Errors
    0,                                                      //u8ErrCnt               - [DEF] Error Count  
    // Error [0-0]  
    { // TErrCfgFea
        { //ErrTag[0] - Error bit 0 [DM_ERR_00]
            0,                                              //u32ErrNum              - [num] Error Number
            FMI_NONE,                                       //u8ErrMode              - [enu] Failure Mode Indicator
            FMIEX_NONE,                                     //u8ErrModeExt           - [def] Extended Failure Mode Indicator
            ACC_ALL_NO,                                     //u16ErrAccLevel         - [def] Failure Access Level
            ERR_TYPE_ERROR,                                 //u8ErrType              - [enu] Error Type
            ERR_CAT0_NOT,                                   //u8ErrCat               - [enu] Error Category ( Lamp Type )
            ERR_STORE_NOT,                                  //u8ErrStore             - [enu] Error Store Behavior
            EG_NONE,                                        //u8ExcludeGroup         - [def] Error Exclude Group
            SC_NONE,                                        //u8SetCond              - [def] Set Condition - allows to activate an error detection
            0,                                              //u32TimeDetect          - [ms]  Error Detection ( Debounce ) Time
            FALSE,                                          //boDetectDboAfterSc     - [boo] Start debounce timer after a valid set condition
            RC_NONE,                                        //u8ReleaCond            - [def] Release Condition - allows an error to be released ( removed )
            0,                                              //u32TimeReset           - [ms]  Error Release ( Debounce ) Time
            FALSE,                                          //boResetDboAfterRc      - [boo] Start debounce timer after a valid release condition 
            RM_NONE,                                        //u8RestrictMode         - [def] Restricted Mode
            INF_NONE,                                       //u8InfoVarIdx           - [num] Array Index of Error Information Page
            FALSE,                                          //boCustList             - [boo] Memorized in a Customer List
            DIS_NONE                                        //u8DisplayOutput        - [def] Display Output ( Error Output Interface )
        }
    }
};

//Sofware Module Name: AppGlobal
PUBLIC_VAR const TCSndCfg gCSnd_ctCfg_Msg8C1SendToOpus =
{
    // Common
    "Msg8C1SendToOpus",                                     //achName                - [STR] Display-Information-String
    BLO_RELEASE,                                            //eBloProc               - [DEF] Block behavior  
    // Fixed settings
    (TUint8)CBUS1_HWBUF_SND0,                               //u8SwHwBufNo            - [DEF] CAN send buffer position connection link  
    SNDTYP_CYCLIC,                                          //u8Type                 - [DEF] Send type
    SNDSTART_ACTIVE,                                        //u8Start                - [DEF] Start transmission
    0,                                                      //u8MsgBufSize           - [DEF] Message buffer size
    FALSE,                                                  //boBufferCheck          - [DEF] Buffer overflow check 
    200,                                                    //u16CycTim              - [DEF] Cycle time [ms]   
    10,                                                     //u16MinCycTime          - [DEF] Minimum cycle time[ms]
    640,                                                    //u16OffTim              - [DEF]1st offset time [ms]
    FALSE,                                                  //boExtId                - [DEF] Can extended identifier (11/29 Bit)
    0x506,                                                  //u32Id                  - [DEF] Can identifier   
    (TUint16)eCSR_Msg8C1SendToOpus,                         //u16CanSigRecLink       - [DEF] Can Signal Record Position Link 
    //Fixed safety feature settings
    FALSE,                                                  //boSafeInvMsg           - [DEF] Add bit inverse message
    0,                                                      //u16SafeInvDelay        - [ms] Delay time inverse message
    FALSE,                                                  //boSafeCnt              - [DEF] Check safety counter
    //All Errors
    0,                                                      //u8ErrCnt               - [DEF] Error Count  
    // Error [0-0]  
    { // TErrCfgFea
        { //ErrTag[0] - Error bit 0 [DM_ERR_00]
            0,                                              //u32ErrNum              - [num] Error Number
            FMI_NONE,                                       //u8ErrMode              - [enu] Failure Mode Indicator
            FMIEX_NONE,                                     //u8ErrModeExt           - [def] Extended Failure Mode Indicator
            ACC_ALL_NO,                                     //u16ErrAccLevel         - [def] Failure Access Level
            ERR_TYPE_ERROR,                                 //u8ErrType              - [enu] Error Type
            ERR_CAT0_NOT,                                   //u8ErrCat               - [enu] Error Category ( Lamp Type )
            ERR_STORE_NOT,                                  //u8ErrStore             - [enu] Error Store Behavior
            EG_NONE,                                        //u8ExcludeGroup         - [def] Error Exclude Group
            SC_NONE,                                        //u8SetCond              - [def] Set Condition - allows to activate an error detection
            0,                                              //u32TimeDetect          - [ms]  Error Detection ( Debounce ) Time
            FALSE,                                          //boDetectDboAfterSc     - [boo] Start debounce timer after a valid set condition
            RC_NONE,                                        //u8ReleaCond            - [def] Release Condition - allows an error to be released ( removed )
            0,                                              //u32TimeReset           - [ms]  Error Release ( Debounce ) Time
            FALSE,                                          //boResetDboAfterRc      - [boo] Start debounce timer after a valid release condition 
            RM_NONE,                                        //u8RestrictMode         - [def] Restricted Mode
            INF_NONE,                                       //u8InfoVarIdx           - [num] Array Index of Error Information Page
            FALSE,                                          //boCustList             - [boo] Memorized in a Customer List
            DIS_NONE                                        //u8DisplayOutput        - [def] Display Output ( Error Output Interface )
        }
    }
};

//Sofware Module Name: AppGlobal
PUBLIC_VAR const TCSndCfg gCSnd_ctCfg_Data4C1SendToC0 =
{
    // Common
    "Data4C1SendToC0",                                      //achName                - [STR] Display-Information-String
    BLO_RELEASE,                                            //eBloProc               - [DEF] Block behavior  
    // Fixed settings
    (TUint8)CBUS0_HWBUF_SND0,                               //u8SwHwBufNo            - [DEF] CAN send buffer position connection link  
    SNDTYP_CYCLIC,                                          //u8Type                 - [DEF] Send type
    SNDSTART_ACTIVE,                                        //u8Start                - [DEF] Start transmission
    0,                                                      //u8MsgBufSize           - [DEF] Message buffer size
    FALSE,                                                  //boBufferCheck          - [DEF] Buffer overflow check 
    40,                                                     //u16CycTim              - [DEF] Cycle time [ms]   
    10,                                                     //u16MinCycTime          - [DEF] Minimum cycle time[ms]
    50,                                                     //u16OffTim              - [DEF]1st offset time [ms]
    TRUE,                                                   //boExtId                - [DEF] Can extended identifier (11/29 Bit)
    0x18FF0017,                                             //u32Id                  - [DEF] Can identifier   
    (TUint16)eCSR_Data4C1SendToC0,                          //u16CanSigRecLink       - [DEF] Can Signal Record Position Link 
    //Fixed safety feature settings
    TRUE,                                                   //boSafeInvMsg           - [DEF] Add bit inverse message
    0,                                                      //u16SafeInvDelay        - [ms] Delay time inverse message
    FALSE,                                                  //boSafeCnt              - [DEF] Check safety counter
    //All Errors
    0,                                                      //u8ErrCnt               - [DEF] Error Count  
    // Error [0-0]  
    { // TErrCfgFea
        { //ErrTag[0] - Error bit 0 [DM_ERR_00]
            0,                                              //u32ErrNum              - [num] Error Number
            FMI_NONE,                                       //u8ErrMode              - [enu] Failure Mode Indicator
            FMIEX_NONE,                                     //u8ErrModeExt           - [def] Extended Failure Mode Indicator
            ACC_ALL_NO,                                     //u16ErrAccLevel         - [def] Failure Access Level
            ERR_TYPE_ERROR,                                 //u8ErrType              - [enu] Error Type
            ERR_CAT0_NOT,                                   //u8ErrCat               - [enu] Error Category ( Lamp Type )
            ERR_STORE_NOT,                                  //u8ErrStore             - [enu] Error Store Behavior
            EG_NONE,                                        //u8ExcludeGroup         - [def] Error Exclude Group
            SC_NONE,                                        //u8SetCond              - [def] Set Condition - allows to activate an error detection
            0,                                              //u32TimeDetect          - [ms]  Error Detection ( Debounce ) Time
            FALSE,                                          //boDetectDboAfterSc     - [boo] Start debounce timer after a valid set condition
            RC_NONE,                                        //u8ReleaCond            - [def] Release Condition - allows an error to be released ( removed )
            0,                                              //u32TimeReset           - [ms]  Error Release ( Debounce ) Time
            FALSE,                                          //boResetDboAfterRc      - [boo] Start debounce timer after a valid release condition 
            RM_NONE,                                        //u8RestrictMode         - [def] Restricted Mode
            INF_NONE,                                       //u8InfoVarIdx           - [num] Array Index of Error Information Page
            FALSE,                                          //boCustList             - [boo] Memorized in a Customer List
            DIS_NONE                                        //u8DisplayOutput        - [def] Display Output ( Error Output Interface )
        }
    }
};

//Sofware Module Name: AppGlobal
PUBLIC_VAR const TCSndCfg gCSnd_ctCfg_Msg12C1SendToEvision7 =
{
    // Common
    "Msg12C1SendToEvision7",                                //achName                - [STR] Display-Information-String
    BLO_RELEASE,                                            //eBloProc               - [DEF] Block behavior  
    // Fixed settings
    (TUint8)CBUS0_HWBUF_SND0,                               //u8SwHwBufNo            - [DEF] CAN send buffer position connection link  
    SNDTYP_CYCLIC,                                          //u8Type                 - [DEF] Send type
    SNDSTART_ACTIVE,                                        //u8Start                - [DEF] Start transmission
    0,                                                      //u8MsgBufSize           - [DEF] Message buffer size
    FALSE,                                                  //boBufferCheck          - [DEF] Buffer overflow check 
    200,                                                    //u16CycTim              - [DEF] Cycle time [ms]   
    10,                                                     //u16MinCycTime          - [DEF] Minimum cycle time[ms]
    160,                                                    //u16OffTim              - [DEF]1st offset time [ms]
    TRUE,                                                   //boExtId                - [DEF] Can extended identifier (11/29 Bit)
    0xC1D70C,                                               //u32Id                  - [DEF] Can identifier   
    (TUint16)eCSR_Msg12C1SendToEvision7,                    //u16CanSigRecLink       - [DEF] Can Signal Record Position Link 
    //Fixed safety feature settings
    FALSE,                                                  //boSafeInvMsg           - [DEF] Add bit inverse message
    0,                                                      //u16SafeInvDelay        - [ms] Delay time inverse message
    FALSE,                                                  //boSafeCnt              - [DEF] Check safety counter
    //All Errors
    0,                                                      //u8ErrCnt               - [DEF] Error Count  
    // Error [0-0]  
    { // TErrCfgFea
        { //ErrTag[0] - Error bit 0 [DM_ERR_00]
            0,                                              //u32ErrNum              - [num] Error Number
            FMI_NONE,                                       //u8ErrMode              - [enu] Failure Mode Indicator
            FMIEX_NONE,                                     //u8ErrModeExt           - [def] Extended Failure Mode Indicator
            ACC_ALL_NO,                                     //u16ErrAccLevel         - [def] Failure Access Level
            ERR_TYPE_ERROR,                                 //u8ErrType              - [enu] Error Type
            ERR_CAT0_NOT,                                   //u8ErrCat               - [enu] Error Category ( Lamp Type )
            ERR_STORE_NOT,                                  //u8ErrStore             - [enu] Error Store Behavior
            EG_NONE,                                        //u8ExcludeGroup         - [def] Error Exclude Group
            SC_NONE,                                        //u8SetCond              - [def] Set Condition - allows to activate an error detection
            0,                                              //u32TimeDetect          - [ms]  Error Detection ( Debounce ) Time
            FALSE,                                          //boDetectDboAfterSc     - [boo] Start debounce timer after a valid set condition
            RC_NONE,                                        //u8ReleaCond            - [def] Release Condition - allows an error to be released ( removed )
            0,                                              //u32TimeReset           - [ms]  Error Release ( Debounce ) Time
            FALSE,                                          //boResetDboAfterRc      - [boo] Start debounce timer after a valid release condition 
            RM_NONE,                                        //u8RestrictMode         - [def] Restricted Mode
            INF_NONE,                                       //u8InfoVarIdx           - [num] Array Index of Error Information Page
            FALSE,                                          //boCustList             - [boo] Memorized in a Customer List
            DIS_NONE                                        //u8DisplayOutput        - [def] Display Output ( Error Output Interface )
        }
    }
};

//Sofware Module Name: AppGlobal
PUBLIC_VAR const TCSndCfg gCSnd_ctCfg_Heartbeat_C1 =
{
    // Common
    "Heartbeat_C1",                                         //achName                - [STR] Display-Information-String
    BLO_RELEASE,                                            //eBloProc               - [DEF] Block behavior  
    // Fixed settings
    (TUint8)CBUS1_HWBUF_SND0,                               //u8SwHwBufNo            - [DEF] CAN send buffer position connection link  
    SNDTYP_CYCLIC,                                          //u8Type                 - [DEF] Send type
    SNDSTART_ACTIVE,                                        //u8Start                - [DEF] Start transmission
    0,                                                      //u8MsgBufSize           - [DEF] Message buffer size
    FALSE,                                                  //boBufferCheck          - [DEF] Buffer overflow check 
    200,                                                    //u16CycTim              - [DEF] Cycle time [ms]   
    10,                                                     //u16MinCycTime          - [DEF] Minimum cycle time[ms]
    0,                                                      //u16OffTim              - [DEF]1st offset time [ms]
    FALSE,                                                  //boExtId                - [DEF] Can extended identifier (11/29 Bit)
    0x701,                                                  //u32Id                  - [DEF] Can identifier   
    (TUint16)eCSR_Heartbeat_C1,                             //u16CanSigRecLink       - [DEF] Can Signal Record Position Link 
    //Fixed safety feature settings
    FALSE,                                                  //boSafeInvMsg           - [DEF] Add bit inverse message
    0,                                                      //u16SafeInvDelay        - [ms] Delay time inverse message
    FALSE,                                                  //boSafeCnt              - [DEF] Check safety counter
    //All Errors
    0,                                                      //u8ErrCnt               - [DEF] Error Count  
    // Error [0-0]  
    { // TErrCfgFea
        { //ErrTag[0] - Error bit 0 [DM_ERR_00]
            0,                                              //u32ErrNum              - [num] Error Number
            FMI_NONE,                                       //u8ErrMode              - [enu] Failure Mode Indicator
            FMIEX_NONE,                                     //u8ErrModeExt           - [def] Extended Failure Mode Indicator
            ACC_ALL_NO,                                     //u16ErrAccLevel         - [def] Failure Access Level
            ERR_TYPE_ERROR,                                 //u8ErrType              - [enu] Error Type
            ERR_CAT0_NOT,                                   //u8ErrCat               - [enu] Error Category ( Lamp Type )
            ERR_STORE_NOT,                                  //u8ErrStore             - [enu] Error Store Behavior
            EG_NONE,                                        //u8ExcludeGroup         - [def] Error Exclude Group
            SC_NONE,                                        //u8SetCond              - [def] Set Condition - allows to activate an error detection
            0,                                              //u32TimeDetect          - [ms]  Error Detection ( Debounce ) Time
            FALSE,                                          //boDetectDboAfterSc     - [boo] Start debounce timer after a valid set condition
            RC_NONE,                                        //u8ReleaCond            - [def] Release Condition - allows an error to be released ( removed )
            0,                                              //u32TimeReset           - [ms]  Error Release ( Debounce ) Time
            FALSE,                                          //boResetDboAfterRc      - [boo] Start debounce timer after a valid release condition 
            RM_NONE,                                        //u8RestrictMode         - [def] Restricted Mode
            INF_NONE,                                       //u8InfoVarIdx           - [num] Array Index of Error Information Page
            FALSE,                                          //boCustList             - [boo] Memorized in a Customer List
            DIS_NONE                                        //u8DisplayOutput        - [def] Display Output ( Error Output Interface )
        }
    }
};

//Sofware Module Name: AppGlobal
PUBLIC_VAR const TCSndCfg gCSnd_ctCfg_Msg13C1SendToEvision7 =
{
    // Common
    "Msg13C1SendToEvision7",                                //achName                - [STR] Display-Information-String
    BLO_RELEASE,                                            //eBloProc               - [DEF] Block behavior  
    // Fixed settings
    (TUint8)CBUS0_HWBUF_SND0,                               //u8SwHwBufNo            - [DEF] CAN send buffer position connection link  
    SNDTYP_CYCLIC,                                          //u8Type                 - [DEF] Send type
    SNDSTART_ACTIVE,                                        //u8Start                - [DEF] Start transmission
    0,                                                      //u8MsgBufSize           - [DEF] Message buffer size
    FALSE,                                                  //boBufferCheck          - [DEF] Buffer overflow check 
    200,                                                    //u16CycTim              - [DEF] Cycle time [ms]   
    10,                                                     //u16MinCycTime          - [DEF] Minimum cycle time[ms]
    170,                                                    //u16OffTim              - [DEF]1st offset time [ms]
    TRUE,                                                   //boExtId                - [DEF] Can extended identifier (11/29 Bit)
    0xC1D70D,                                               //u32Id                  - [DEF] Can identifier   
    (TUint16)eCSR_Msg13C1SendToEvision7,                    //u16CanSigRecLink       - [DEF] Can Signal Record Position Link 
    //Fixed safety feature settings
    FALSE,                                                  //boSafeInvMsg           - [DEF] Add bit inverse message
    0,                                                      //u16SafeInvDelay        - [ms] Delay time inverse message
    FALSE,                                                  //boSafeCnt              - [DEF] Check safety counter
    //All Errors
    0,                                                      //u8ErrCnt               - [DEF] Error Count  
    // Error [0-0]  
    { // TErrCfgFea
        { //ErrTag[0] - Error bit 0 [DM_ERR_00]
            0,                                              //u32ErrNum              - [num] Error Number
            FMI_NONE,                                       //u8ErrMode              - [enu] Failure Mode Indicator
            FMIEX_NONE,                                     //u8ErrModeExt           - [def] Extended Failure Mode Indicator
            ACC_ALL_NO,                                     //u16ErrAccLevel         - [def] Failure Access Level
            ERR_TYPE_ERROR,                                 //u8ErrType              - [enu] Error Type
            ERR_CAT0_NOT,                                   //u8ErrCat               - [enu] Error Category ( Lamp Type )
            ERR_STORE_NOT,                                  //u8ErrStore             - [enu] Error Store Behavior
            EG_NONE,                                        //u8ExcludeGroup         - [def] Error Exclude Group
            SC_NONE,                                        //u8SetCond              - [def] Set Condition - allows to activate an error detection
            0,                                              //u32TimeDetect          - [ms]  Error Detection ( Debounce ) Time
            FALSE,                                          //boDetectDboAfterSc     - [boo] Start debounce timer after a valid set condition
            RC_NONE,                                        //u8ReleaCond            - [def] Release Condition - allows an error to be released ( removed )
            0,                                              //u32TimeReset           - [ms]  Error Release ( Debounce ) Time
            FALSE,                                          //boResetDboAfterRc      - [boo] Start debounce timer after a valid release condition 
            RM_NONE,                                        //u8RestrictMode         - [def] Restricted Mode
            INF_NONE,                                       //u8InfoVarIdx           - [num] Array Index of Error Information Page
            FALSE,                                          //boCustList             - [boo] Memorized in a Customer List
            DIS_NONE                                        //u8DisplayOutput        - [def] Display Output ( Error Output Interface )
        }
    }
};

//Sofware Module Name: AppGlobal
PUBLIC_VAR const TCSndCfg gCSnd_ctCfg_Sdo_Request_48XS =
{
    // Common
    "Sdo_Request_48XS",                                     //achName                - [STR] Display-Information-String
    BLO_RELEASE,                                            //eBloProc               - [DEF] Block behavior  
    // Fixed settings
    (TUint8)CBUS1_HWBUF_SND0,                               //u8SwHwBufNo            - [DEF] CAN send buffer position connection link  
    SNDTYP_EVENT,                                           //u8Type                 - [DEF] Send type
    SNDSTART_ACTIVE,                                        //u8Start                - [DEF] Start transmission
    0,                                                      //u8MsgBufSize           - [DEF] Message buffer size
    FALSE,                                                  //boBufferCheck          - [DEF] Buffer overflow check 
    10,                                                     //u16CycTim              - [DEF] Cycle time [ms]   
    10,                                                     //u16MinCycTime          - [DEF] Minimum cycle time[ms]
    10,                                                     //u16OffTim              - [DEF]1st offset time [ms]
    FALSE,                                                  //boExtId                - [DEF] Can extended identifier (11/29 Bit)
    0x60A,                                                  //u32Id                  - [DEF] Can identifier   
    (TUint16)eCSR_Sdo_Request_48XS,                         //u16CanSigRecLink       - [DEF] Can Signal Record Position Link 
    //Fixed safety feature settings
    FALSE,                                                  //boSafeInvMsg           - [DEF] Add bit inverse message
    0,                                                      //u16SafeInvDelay        - [ms] Delay time inverse message
    FALSE,                                                  //boSafeCnt              - [DEF] Check safety counter
    //All Errors
    0,                                                      //u8ErrCnt               - [DEF] Error Count  
    // Error [0-0]  
    { // TErrCfgFea
        { //ErrTag[0] - Error bit 0 [DM_ERR_00]
            0,                                              //u32ErrNum              - [num] Error Number
            FMI_NONE,                                       //u8ErrMode              - [enu] Failure Mode Indicator
            FMIEX_NONE,                                     //u8ErrModeExt           - [def] Extended Failure Mode Indicator
            ACC_ALL_NO,                                     //u16ErrAccLevel         - [def] Failure Access Level
            ERR_TYPE_ERROR,                                 //u8ErrType              - [enu] Error Type
            ERR_CAT0_NOT,                                   //u8ErrCat               - [enu] Error Category ( Lamp Type )
            ERR_STORE_NOT,                                  //u8ErrStore             - [enu] Error Store Behavior
            EG_NONE,                                        //u8ExcludeGroup         - [def] Error Exclude Group
            SC_NONE,                                        //u8SetCond              - [def] Set Condition - allows to activate an error detection
            0,                                              //u32TimeDetect          - [ms]  Error Detection ( Debounce ) Time
            FALSE,                                          //boDetectDboAfterSc     - [boo] Start debounce timer after a valid set condition
            RC_NONE,                                        //u8ReleaCond            - [def] Release Condition - allows an error to be released ( removed )
            0,                                              //u32TimeReset           - [ms]  Error Release ( Debounce ) Time
            FALSE,                                          //boResetDboAfterRc      - [boo] Start debounce timer after a valid release condition 
            RM_NONE,                                        //u8RestrictMode         - [def] Restricted Mode
            INF_NONE,                                       //u8InfoVarIdx           - [num] Array Index of Error Information Page
            FALSE,                                          //boCustList             - [boo] Memorized in a Customer List
            DIS_NONE                                        //u8DisplayOutput        - [def] Display Output ( Error Output Interface )
        }
    }
};

//Sofware Module Name: AppGlobal
PUBLIC_VAR const TCSndCfg gCSnd_ctCfg_TSC1 =
{
    // Common
    "TSC1",                                                 //achName                - [STR] Display-Information-String
    BLO_RELEASE,                                            //eBloProc               - [DEF] Block behavior  
    // Fixed settings
    (TUint8)CBUS2_HWBUF_SND1,                               //u8SwHwBufNo            - [DEF] CAN send buffer position connection link  
    SNDTYP_CYCLIC,                                          //u8Type                 - [DEF] Send type
    SNDSTART_ACTIVE,                                        //u8Start                - [DEF] Start transmission
    0,                                                      //u8MsgBufSize           - [DEF] Message buffer size
    FALSE,                                                  //boBufferCheck          - [DEF] Buffer overflow check 
    20,                                                     //u16CycTim              - [DEF] Cycle time [ms]   
    20,                                                     //u16MinCycTime          - [DEF] Minimum cycle time[ms]
    50,                                                     //u16OffTim              - [DEF]1st offset time [ms]
    TRUE,                                                   //boExtId                - [DEF] Can extended identifier (11/29 Bit)
    0xC000003,                                              //u32Id                  - [DEF] Can identifier   
    (TUint16)eCSR_TSC1,                                     //u16CanSigRecLink       - [DEF] Can Signal Record Position Link 
    //Fixed safety feature settings
    FALSE,                                                  //boSafeInvMsg           - [DEF] Add bit inverse message
    0,                                                      //u16SafeInvDelay        - [ms] Delay time inverse message
    FALSE,                                                  //boSafeCnt              - [DEF] Check safety counter
    //All Errors
    1,                                                      //u8ErrCnt               - [DEF] Error Count  
    // Error [0-0]  
    { // TErrCfgFea
        { //ErrTag[0] - Message Buffer Overflow [DM_CSND_BOVERF]
            1205,                                           //u32ErrNum              - [num] Error Number
            FMI_31_CONDITION_EXISTS,                        //u8ErrMode              - [enu] Failure Mode Indicator
            FMIEX_NONE,                                     //u8ErrModeExt           - [def] Extended Failure Mode Indicator
            0xAAAA,                                         //u16ErrAccLevel         - [def] Failure Access Level
            ERR_TYPE_ERROR,                                 //u8ErrType              - [enu] Error Type
            ERR_CAT0_NOT,                                   //u8ErrCat               - [enu] Error Category ( Lamp Type )
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

//Sofware Module Name: AppGlobal
PUBLIC_VAR const TCSndCfg gCSnd_ctCfg_EBC1 =
{
    // Common
    "EBC1",                                                 //achName                - [STR] Display-Information-String
    BLO_RELEASE,                                            //eBloProc               - [DEF] Block behavior  
    // Fixed settings
    (TUint8)CBUS2_HWBUF_SND1,                               //u8SwHwBufNo            - [DEF] CAN send buffer position connection link  
    SNDTYP_CYCLIC,                                          //u8Type                 - [DEF] Send type
    SNDSTART_ACTIVE,                                        //u8Start                - [DEF] Start transmission
    0,                                                      //u8MsgBufSize           - [DEF] Message buffer size
    FALSE,                                                  //boBufferCheck          - [DEF] Buffer overflow check 
    100,                                                    //u16CycTim              - [DEF] Cycle time [ms]   
    10,                                                     //u16MinCycTime          - [DEF] Minimum cycle time[ms]
    0,                                                      //u16OffTim              - [DEF]1st offset time [ms]
    TRUE,                                                   //boExtId                - [DEF] Can extended identifier (11/29 Bit)
    0x18F00103,                                             //u32Id                  - [DEF] Can identifier   
    (TUint16)eCSR_EBC1,                                     //u16CanSigRecLink       - [DEF] Can Signal Record Position Link 
    //Fixed safety feature settings
    FALSE,                                                  //boSafeInvMsg           - [DEF] Add bit inverse message
    0,                                                      //u16SafeInvDelay        - [ms] Delay time inverse message
    FALSE,                                                  //boSafeCnt              - [DEF] Check safety counter
    //All Errors
    0,                                                      //u8ErrCnt               - [DEF] Error Count  
    // Error [0-0]  
    { // TErrCfgFea
        { //ErrTag[0] - Error bit 0 [DM_ERR_00]
            0,                                              //u32ErrNum              - [num] Error Number
            FMI_NONE,                                       //u8ErrMode              - [enu] Failure Mode Indicator
            FMIEX_NONE,                                     //u8ErrModeExt           - [def] Extended Failure Mode Indicator
            ACC_ALL_NO,                                     //u16ErrAccLevel         - [def] Failure Access Level
            ERR_TYPE_ERROR,                                 //u8ErrType              - [enu] Error Type
            ERR_CAT0_NOT,                                   //u8ErrCat               - [enu] Error Category ( Lamp Type )
            ERR_STORE_NOT,                                  //u8ErrStore             - [enu] Error Store Behavior
            EG_NONE,                                        //u8ExcludeGroup         - [def] Error Exclude Group
            SC_NONE,                                        //u8SetCond              - [def] Set Condition - allows to activate an error detection
            0,                                              //u32TimeDetect          - [ms]  Error Detection ( Debounce ) Time
            FALSE,                                          //boDetectDboAfterSc     - [boo] Start debounce timer after a valid set condition
            RC_NONE,                                        //u8ReleaCond            - [def] Release Condition - allows an error to be released ( removed )
            0,                                              //u32TimeReset           - [ms]  Error Release ( Debounce ) Time
            FALSE,                                          //boResetDboAfterRc      - [boo] Start debounce timer after a valid release condition 
            RM_NONE,                                        //u8RestrictMode         - [def] Restricted Mode
            INF_NONE,                                       //u8InfoVarIdx           - [num] Array Index of Error Information Page
            FALSE,                                          //boCustList             - [boo] Memorized in a Customer List
            DIS_NONE                                        //u8DisplayOutput        - [def] Display Output ( Error Output Interface )
        }
    }
};

//Sofware Module Name: AppGlobal
PUBLIC_VAR const TCSndCfg gCSnd_ctCfg_Data5C1SendToC0 =
{
    // Common
    "Data5C1SendToC0",                                      //achName                - [STR] Display-Information-String
    BLO_RELEASE,                                            //eBloProc               - [DEF] Block behavior  
    // Fixed settings
    (TUint8)CBUS0_HWBUF_SND0,                               //u8SwHwBufNo            - [DEF] CAN send buffer position connection link  
    SNDTYP_CYCLIC,                                          //u8Type                 - [DEF] Send type
    SNDSTART_ACTIVE,                                        //u8Start                - [DEF] Start transmission
    0,                                                      //u8MsgBufSize           - [DEF] Message buffer size
    FALSE,                                                  //boBufferCheck          - [DEF] Buffer overflow check 
    40,                                                     //u16CycTim              - [DEF] Cycle time [ms]   
    10,                                                     //u16MinCycTime          - [DEF] Minimum cycle time[ms]
    90,                                                     //u16OffTim              - [DEF]1st offset time [ms]
    TRUE,                                                   //boExtId                - [DEF] Can extended identifier (11/29 Bit)
    0x18FF001B,                                             //u32Id                  - [DEF] Can identifier   
    (TUint16)eCSR_Data5C1SendToC0,                          //u16CanSigRecLink       - [DEF] Can Signal Record Position Link 
    //Fixed safety feature settings
    TRUE,                                                   //boSafeInvMsg           - [DEF] Add bit inverse message
    0,                                                      //u16SafeInvDelay        - [ms] Delay time inverse message
    FALSE,                                                  //boSafeCnt              - [DEF] Check safety counter
    //All Errors
    1,                                                      //u8ErrCnt               - [DEF] Error Count  
    // Error [0-0]  
    { // TErrCfgFea
        { //ErrTag[0] - Message buffer overflow [DM_CSND_BOVERF]
            1370,                                           //u32ErrNum              - [num] Error Number
            FMI_31_CONDITION_EXISTS,                        //u8ErrMode              - [enu] Failure Mode Indicator
            FMIEX_NONE,                                     //u8ErrModeExt           - [def] Extended Failure Mode Indicator
            0xAAAA,                                         //u16ErrAccLevel         - [def] Failure Access Level
            ERR_TYPE_ERROR,                                 //u8ErrType              - [enu] Error Type
            ERR_CAT0_NOT,                                   //u8ErrCat               - [enu] Error Category ( Lamp Type )
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

//Sofware Module Name: AppGlobal
PUBLIC_VAR const TCSndCfg gCSnd_ctCfg_Msg9C1SendToOpus =
{
    // Common
    "Msg9C1SendToOpus",                                     //achName                - [STR] Display-Information-String
    BLO_RELEASE,                                            //eBloProc               - [DEF] Block behavior  
    // Fixed settings
    (TUint8)CBUS1_HWBUF_SND0,                               //u8SwHwBufNo            - [DEF] CAN send buffer position connection link  
    SNDTYP_CYCLIC,                                          //u8Type                 - [DEF] Send type
    SNDSTART_ACTIVE,                                        //u8Start                - [DEF] Start transmission
    0,                                                      //u8MsgBufSize           - [DEF] Message buffer size
    FALSE,                                                  //boBufferCheck          - [DEF] Buffer overflow check 
    200,                                                    //u16CycTim              - [DEF] Cycle time [ms]   
    10,                                                     //u16MinCycTime          - [DEF] Minimum cycle time[ms]
    680,                                                    //u16OffTim              - [DEF]1st offset time [ms]
    FALSE,                                                  //boExtId                - [DEF] Can extended identifier (11/29 Bit)
    0x606,                                                  //u32Id                  - [DEF] Can identifier   
    (TUint16)eCSR_Msg9C1SendToOpus,                         //u16CanSigRecLink       - [DEF] Can Signal Record Position Link 
    //Fixed safety feature settings
    FALSE,                                                  //boSafeInvMsg           - [DEF] Add bit inverse message
    0,                                                      //u16SafeInvDelay        - [ms] Delay time inverse message
    FALSE,                                                  //boSafeCnt              - [DEF] Check safety counter
    //All Errors
    1,                                                      //u8ErrCnt               - [DEF] Error Count  
    // Error [0-0]  
    { // TErrCfgFea
        { //ErrTag[0] - Message buffer overflow [DM_CSND_BOVERF]
            1536,                                           //u32ErrNum              - [num] Error Number
            FMI_31_CONDITION_EXISTS,                        //u8ErrMode              - [enu] Failure Mode Indicator
            FMIEX_NONE,                                     //u8ErrModeExt           - [def] Extended Failure Mode Indicator
            0xAAAA,                                         //u16ErrAccLevel         - [def] Failure Access Level
            ERR_TYPE_ERROR,                                 //u8ErrType              - [enu] Error Type
            ERR_CAT0_NOT,                                   //u8ErrCat               - [enu] Error Category ( Lamp Type )
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

//Sofware Module Name: AppGlobal
PUBLIC_VAR const TCSndCfg gCSnd_ctCfg_Msg14C1SendToEvision7 =
{
    // Common
    "Msg14C1SendToEvision7",                                //achName                - [STR] Display-Information-String
    BLO_RELEASE,                                            //eBloProc               - [DEF] Block behavior  
    // Fixed settings
    (TUint8)CBUS0_HWBUF_SND0,                               //u8SwHwBufNo            - [DEF] CAN send buffer position connection link  
    SNDTYP_CYCLIC,                                          //u8Type                 - [DEF] Send type
    SNDSTART_ACTIVE,                                        //u8Start                - [DEF] Start transmission
    0,                                                      //u8MsgBufSize           - [DEF] Message buffer size
    FALSE,                                                  //boBufferCheck          - [DEF] Buffer overflow check 
    200,                                                    //u16CycTim              - [DEF] Cycle time [ms]   
    10,                                                     //u16MinCycTime          - [DEF] Minimum cycle time[ms]
    170,                                                    //u16OffTim              - [DEF]1st offset time [ms]
    TRUE,                                                   //boExtId                - [DEF] Can extended identifier (11/29 Bit)
    0xC1D70E,                                               //u32Id                  - [DEF] Can identifier   
    (TUint16)eCSR_Msg14C1SendToEvision7,                    //u16CanSigRecLink       - [DEF] Can Signal Record Position Link 
    //Fixed safety feature settings
    FALSE,                                                  //boSafeInvMsg           - [DEF] Add bit inverse message
    0,                                                      //u16SafeInvDelay        - [ms] Delay time inverse message
    FALSE,                                                  //boSafeCnt              - [DEF] Check safety counter
    //All Errors
    1,                                                      //u8ErrCnt               - [DEF] Error Count  
    // Error [0-0]  
    { // TErrCfgFea
        { //ErrTag[0] - Message buffer overflow [DM_CSND_BOVERF]
            1566,                                           //u32ErrNum              - [num] Error Number
            FMI_31_CONDITION_EXISTS,                        //u8ErrMode              - [enu] Failure Mode Indicator
            FMIEX_NONE,                                     //u8ErrModeExt           - [def] Extended Failure Mode Indicator
            0xAAAA,                                         //u16ErrAccLevel         - [def] Failure Access Level
            ERR_TYPE_ERROR,                                 //u8ErrType              - [enu] Error Type
            ERR_CAT0_NOT,                                   //u8ErrCat               - [enu] Error Category ( Lamp Type )
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
