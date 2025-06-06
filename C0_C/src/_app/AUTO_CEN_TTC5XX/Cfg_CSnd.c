//**************************************************************************************************
//! @crc        4261104949
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
PUBLIC_VAR const TCSndCfg gCSnd_ctCfg_Start =
{
    // Common
    "Start",                                                //achName                - [STR] Display-Information-String
    BLO_RELEASE,                                            //eBloProc               - [DEF] Block behavior  
    // Fixed settings
    (TUint8)CBUS2_HWBUF_SND0,                               //u8SwHwBufNo            - [DEF] CAN send buffer position connection link  
    SNDTYP_EVENT,                                           //u8Type                 - [DEF] Send type
    SNDSTART_ACTIVE,                                        //u8Start                - [DEF] Start transmission
    0,                                                      //u8MsgBufSize           - [DEF] Message buffer size
    FALSE,                                                  //boBufferCheck          - [DEF] Buffer overflow check 
    50,                                                     //u16CycTim              - [DEF] Cycle time [ms]   
    10,                                                     //u16MinCycTime          - [DEF] Minimum cycle time[ms]
    50,                                                     //u16OffTim              - [DEF]1st offset time [ms]
    FALSE,                                                  //boExtId                - [DEF] Can extended identifier (11/29 Bit)
    0x0,                                                    //u32Id                  - [DEF] Can identifier   
    (TUint16)eCSR_Start,                                    //u16CanSigRecLink       - [DEF] Can Signal Record Position Link 
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
PUBLIC_VAR const TCSndCfg gCSnd_ctCfg_WriteLed =
{
    // Common
    "WriteLed",                                             //achName                - [STR] Display-Information-String
    BLO_RELEASE,                                            //eBloProc               - [DEF] Block behavior  
    // Fixed settings
    (TUint8)CBUS2_HWBUF_SND0,                               //u8SwHwBufNo            - [DEF] CAN send buffer position connection link  
    SNDTYP_CYCLIC,                                          //u8Type                 - [DEF] Send type
    SNDSTART_ACTIVE,                                        //u8Start                - [DEF] Start transmission
    0,                                                      //u8MsgBufSize           - [DEF] Message buffer size
    FALSE,                                                  //boBufferCheck          - [DEF] Buffer overflow check 
    50,                                                     //u16CycTim              - [DEF] Cycle time [ms]   
    10,                                                     //u16MinCycTime          - [DEF] Minimum cycle time[ms]
    50,                                                     //u16OffTim              - [DEF]1st offset time [ms]
    FALSE,                                                  //boExtId                - [DEF] Can extended identifier (11/29 Bit)
    0x364,                                                  //u32Id                  - [DEF] Can identifier   
    (TUint16)eCSR_WriteLed,                                 //u16CanSigRecLink       - [DEF] Can Signal Record Position Link 
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
PUBLIC_VAR const TCSndCfg gCSnd_ctCfg_RadioCmd =
{
    // Common
    "RadioCmd",                                             //achName                - [STR] Display-Information-String
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
    0x18FF0001,                                             //u32Id                  - [DEF] Can identifier   
    (TUint16)eCSR_SendToC1RadioCmd,                         //u16CanSigRecLink       - [DEF] Can Signal Record Position Link 
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
PUBLIC_VAR const TCSndCfg gCSnd_ctCfg_StartSensor =
{
    // Common
    "StartSensor",                                          //achName                - [STR] Display-Information-String
    BLO_RELEASE,                                            //eBloProc               - [DEF] Block behavior  
    // Fixed settings
    (TUint8)CBUS3_HWBUF_SND0,                               //u8SwHwBufNo            - [DEF] CAN send buffer position connection link  
    SNDTYP_EVENT,                                           //u8Type                 - [DEF] Send type
    SNDSTART_ACTIVE,                                        //u8Start                - [DEF] Start transmission
    0,                                                      //u8MsgBufSize           - [DEF] Message buffer size
    FALSE,                                                  //boBufferCheck          - [DEF] Buffer overflow check 
    100,                                                    //u16CycTim              - [DEF] Cycle time [ms]   
    10,                                                     //u16MinCycTime          - [DEF] Minimum cycle time[ms]
    50,                                                     //u16OffTim              - [DEF]1st offset time [ms]
    FALSE,                                                  //boExtId                - [DEF] Can extended identifier (11/29 Bit)
    0x0,                                                    //u32Id                  - [DEF] Can identifier   
    (TUint16)eCSR_StartSensor,                              //u16CanSigRecLink       - [DEF] Can Signal Record Position Link 
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
PUBLIC_VAR const TCSndCfg gCSnd_ctCfg_SendToEvision7 =
{
    // Common
    "SendToEvision7",                                       //achName                - [STR] Display-Information-String
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
    0xC0D701,                                               //u32Id                  - [DEF] Can identifier   
    (TUint16)eCSR_Msg1C0SendToEvision7,                     //u16CanSigRecLink       - [DEF] Can Signal Record Position Link 
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
PUBLIC_VAR const TCSndCfg gCSnd_ctCfg_DataSendToC1 =
{
    // Common
    "DataSendToC1",                                         //achName                - [STR] Display-Information-String
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
    0x18FF0005,                                             //u32Id                  - [DEF] Can identifier   
    (TUint16)eCSR_DataSendToC1,                             //u16CanSigRecLink       - [DEF] Can Signal Record Position Link 
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
PUBLIC_VAR const TCSndCfg gCSnd_ctCfg_Msg2SendToEvision7 =
{
    // Common
    "Msg2SendToEvision7",                                   //achName                - [STR] Display-Information-String
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
    0xC0D702,                                               //u32Id                  - [DEF] Can identifier   
    (TUint16)eCSR_Msg2C0SendToEvision7,                     //u16CanSigRecLink       - [DEF] Can Signal Record Position Link 
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
PUBLIC_VAR const TCSndCfg gCSnd_ctCfg_Msg3SendToEvision7 =
{
    // Common
    "Msg3SendToEvision7",                                   //achName                - [STR] Display-Information-String
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
    0xC0D703,                                               //u32Id                  - [DEF] Can identifier   
    (TUint16)eCSR_Msg3C0SendToEvision7,                     //u16CanSigRecLink       - [DEF] Can Signal Record Position Link 
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
PUBLIC_VAR const TCSndCfg gCSnd_ctCfg_Message_02 =
{
    // Common
    "Message_02",                                           //achName                - [STR] Display-Information-String
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
    0xC0D711,                                               //u32Id                  - [DEF] Can identifier   
    (TUint16)eCSR_MsgDebugC0SendToEvision7,                 //u16CanSigRecLink       - [DEF] Can Signal Record Position Link 
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
PUBLIC_VAR const TCSndCfg gCSnd_ctCfg_Data2SendToC1 =
{
    // Common
    "Data2SendToC1",                                        //achName                - [STR] Display-Information-String
    BLO_RELEASE,                                            //eBloProc               - [DEF] Block behavior  
    // Fixed settings
    (TUint8)CBUS0_HWBUF_SND0,                               //u8SwHwBufNo            - [DEF] CAN send buffer position connection link  
    SNDTYP_CYCLIC,                                          //u8Type                 - [DEF] Send type
    SNDSTART_ACTIVE,                                        //u8Start                - [DEF] Start transmission
    0,                                                      //u8MsgBufSize           - [DEF] Message buffer size
    FALSE,                                                  //boBufferCheck          - [DEF] Buffer overflow check 
    40,                                                     //u16CycTim              - [DEF] Cycle time [ms]   
    10,                                                     //u16MinCycTime          - [DEF] Minimum cycle time[ms]
    80,                                                     //u16OffTim              - [DEF]1st offset time [ms]
    TRUE,                                                   //boExtId                - [DEF] Can extended identifier (11/29 Bit)
    0x18FF0007,                                             //u32Id                  - [DEF] Can identifier   
    (TUint16)eCSR_Data2SendToC1,                            //u16CanSigRecLink       - [DEF] Can Signal Record Position Link 
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
PUBLIC_VAR const TCSndCfg gCSnd_ctCfg_Data3SendToC1 =
{
    // Common
    "Data3SendToC1",                                        //achName                - [STR] Display-Information-String
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
    0x18FF000B,                                             //u32Id                  - [DEF] Can identifier   
    (TUint16)eCSR_Data3SendToC1,                            //u16CanSigRecLink       - [DEF] Can Signal Record Position Link 
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
PUBLIC_VAR const TCSndCfg gCSnd_ctCfg_Msg4C0SendToEvision7 =
{
    // Common
    "Msg4C0SendToEvision7",                                 //achName                - [STR] Display-Information-String
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
    0xC0D704,                                               //u32Id                  - [DEF] Can identifier   
    (TUint16)eCSR_Msg4C0SendToEvision7,                     //u16CanSigRecLink       - [DEF] Can Signal Record Position Link 
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
PUBLIC_VAR const TCSndCfg gCSnd_ctCfg_FailuresC0SendToC1 =
{
    // Common
    "FailuresC0SendToC1",                                   //achName                - [STR] Display-Information-String
    BLO_RELEASE,                                            //eBloProc               - [DEF] Block behavior  
    // Fixed settings
    (TUint8)CBUS0_HWBUF_SND0,                               //u8SwHwBufNo            - [DEF] CAN send buffer position connection link  
    SNDTYP_CYCLIC,                                          //u8Type                 - [DEF] Send type
    SNDSTART_ACTIVE,                                        //u8Start                - [DEF] Start transmission
    0,                                                      //u8MsgBufSize           - [DEF] Message buffer size
    FALSE,                                                  //boBufferCheck          - [DEF] Buffer overflow check 
    40,                                                     //u16CycTim              - [DEF] Cycle time [ms]   
    10,                                                     //u16MinCycTime          - [DEF] Minimum cycle time[ms]
    80,                                                     //u16OffTim              - [DEF]1st offset time [ms]
    TRUE,                                                   //boExtId                - [DEF] Can extended identifier (11/29 Bit)
    0x18FF0013,                                             //u32Id                  - [DEF] Can identifier   
    (TUint16)eCSR_FailuresC0SendToC1,                       //u16CanSigRecLink       - [DEF] Can Signal Record Position Link 
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
PUBLIC_VAR const TCSndCfg gCSnd_ctCfg_Msg5C0SendToEvision7 =
{
    // Common
    "Msg5C0SendToEvision7",                                 //achName                - [STR] Display-Information-String
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
    0xC0D705,                                               //u32Id                  - [DEF] Can identifier   
    (TUint16)eCSR_Msg5C0SendToEvision7,                     //u16CanSigRecLink       - [DEF] Can Signal Record Position Link 
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
PUBLIC_VAR const TCSndCfg gCSnd_ctCfg_Msg6C0SendToEvision7 =
{
    // Common
    "Msg6C0SendToEvision7",                                 //achName                - [STR] Display-Information-String
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
    0xC0D706,                                               //u32Id                  - [DEF] Can identifier   
    (TUint16)eCSR_Msg6C0SendToEvision7,                     //u16CanSigRecLink       - [DEF] Can Signal Record Position Link 
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
PUBLIC_VAR const TCSndCfg gCSnd_ctCfg_Msg7C0SendToEvision7 =
{
    // Common
    "Msg7C0SendToEvision7",                                 //achName                - [STR] Display-Information-String
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
    0xC0D707,                                               //u32Id                  - [DEF] Can identifier   
    (TUint16)eCSR_Msg7C0SendToEvision7,                     //u16CanSigRecLink       - [DEF] Can Signal Record Position Link 
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
PUBLIC_VAR const TCSndCfg gCSnd_ctCfg_Msg8C0SendToEvision7 =
{
    // Common
    "Msg8C0SendToEvision7",                                 //achName                - [STR] Display-Information-String
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
    0xC0D708,                                               //u32Id                  - [DEF] Can identifier   
    (TUint16)eCSR_Msg8C0SendToEvision7,                     //u16CanSigRecLink       - [DEF] Can Signal Record Position Link 
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
PUBLIC_VAR const TCSndCfg gCSnd_ctCfg_Msg9C0SendToEvision7 =
{
    // Common
    "Msg9C0SendToEvision7",                                 //achName                - [STR] Display-Information-String
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
    0xC0D709,                                               //u32Id                  - [DEF] Can identifier   
    (TUint16)eCSR_Msg9C0SendToEvision7,                     //u16CanSigRecLink       - [DEF] Can Signal Record Position Link 
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
PUBLIC_VAR const TCSndCfg gCSnd_ctCfg_Msg9C0SendToEvision7_1 =
{
    // Common
    "Msg9C0SendToEvision7_1",                               //achName                - [STR] Display-Information-String
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
    0xC0D70A,                                               //u32Id                  - [DEF] Can identifier   
    (TUint16)eCSR_Msg10C0SendToEvision7,                    //u16CanSigRecLink       - [DEF] Can Signal Record Position Link 
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
PUBLIC_VAR const TCSndCfg gCSnd_ctCfg_Msg2C0SendToOpus =
{
    // Common
    "Msg2C0SendToOpus",                                     //achName                - [STR] Display-Information-String
    BLO_RELEASE,                                            //eBloProc               - [DEF] Block behavior  
    // Fixed settings
    (TUint8)CBUS1_HWBUF_SND0,                               //u8SwHwBufNo            - [DEF] CAN send buffer position connection link  
    SNDTYP_CYCLIC,                                          //u8Type                 - [DEF] Send type
    SNDSTART_ACTIVE,                                        //u8Start                - [DEF] Start transmission
    0,                                                      //u8MsgBufSize           - [DEF] Message buffer size
    FALSE,                                                  //boBufferCheck          - [DEF] Buffer overflow check 
    200,                                                    //u16CycTim              - [DEF] Cycle time [ms]   
    10,                                                     //u16MinCycTime          - [DEF] Minimum cycle time[ms]
    510,                                                    //u16OffTim              - [DEF]1st offset time [ms]
    FALSE,                                                  //boExtId                - [DEF] Can extended identifier (11/29 Bit)
    0x303,                                                  //u32Id                  - [DEF] Can identifier   
    (TUint16)eCSR_Msg2C0SendToOpus,                         //u16CanSigRecLink       - [DEF] Can Signal Record Position Link 
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
PUBLIC_VAR const TCSndCfg gCSnd_ctCfg_Msg3C0SendToOpus =
{
    // Common
    "Msg3C0SendToOpus",                                     //achName                - [STR] Display-Information-String
    BLO_RELEASE,                                            //eBloProc               - [DEF] Block behavior  
    // Fixed settings
    (TUint8)CBUS1_HWBUF_SND0,                               //u8SwHwBufNo            - [DEF] CAN send buffer position connection link  
    SNDTYP_CYCLIC,                                          //u8Type                 - [DEF] Send type
    SNDSTART_ACTIVE,                                        //u8Start                - [DEF] Start transmission
    0,                                                      //u8MsgBufSize           - [DEF] Message buffer size
    FALSE,                                                  //boBufferCheck          - [DEF] Buffer overflow check 
    200,                                                    //u16CycTim              - [DEF] Cycle time [ms]   
    10,                                                     //u16MinCycTime          - [DEF] Minimum cycle time[ms]
    530,                                                    //u16OffTim              - [DEF]1st offset time [ms]
    FALSE,                                                  //boExtId                - [DEF] Can extended identifier (11/29 Bit)
    0x204,                                                  //u32Id                  - [DEF] Can identifier   
    (TUint16)eCSR_Msg3C0SendToOpus,                         //u16CanSigRecLink       - [DEF] Can Signal Record Position Link 
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
PUBLIC_VAR const TCSndCfg gCSnd_ctCfg_Msg4C0SendToOpus =
{
    // Common
    "Msg4C0SendToOpus",                                     //achName                - [STR] Display-Information-String
    BLO_RELEASE,                                            //eBloProc               - [DEF] Block behavior  
    // Fixed settings
    (TUint8)CBUS1_HWBUF_SND0,                               //u8SwHwBufNo            - [DEF] CAN send buffer position connection link  
    SNDTYP_CYCLIC,                                          //u8Type                 - [DEF] Send type
    SNDSTART_ACTIVE,                                        //u8Start                - [DEF] Start transmission
    0,                                                      //u8MsgBufSize           - [DEF] Message buffer size
    FALSE,                                                  //boBufferCheck          - [DEF] Buffer overflow check 
    200,                                                    //u16CycTim              - [DEF] Cycle time [ms]   
    10,                                                     //u16MinCycTime          - [DEF] Minimum cycle time[ms]
    550,                                                    //u16OffTim              - [DEF]1st offset time [ms]
    FALSE,                                                  //boExtId                - [DEF] Can extended identifier (11/29 Bit)
    0x304,                                                  //u32Id                  - [DEF] Can identifier   
    (TUint16)eCSR_Msg4C0SendToOpus,                         //u16CanSigRecLink       - [DEF] Can Signal Record Position Link 
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
PUBLIC_VAR const TCSndCfg gCSnd_ctCfg_Msg5C0SendToOpus =
{
    // Common
    "Msg5C0SendToOpus",                                     //achName                - [STR] Display-Information-String
    BLO_RELEASE,                                            //eBloProc               - [DEF] Block behavior  
    // Fixed settings
    (TUint8)CBUS1_HWBUF_SND0,                               //u8SwHwBufNo            - [DEF] CAN send buffer position connection link  
    SNDTYP_CYCLIC,                                          //u8Type                 - [DEF] Send type
    SNDSTART_ACTIVE,                                        //u8Start                - [DEF] Start transmission
    0,                                                      //u8MsgBufSize           - [DEF] Message buffer size
    FALSE,                                                  //boBufferCheck          - [DEF] Buffer overflow check 
    200,                                                    //u16CycTim              - [DEF] Cycle time [ms]   
    10,                                                     //u16MinCycTime          - [DEF] Minimum cycle time[ms]
    570,                                                    //u16OffTim              - [DEF]1st offset time [ms]
    FALSE,                                                  //boExtId                - [DEF] Can extended identifier (11/29 Bit)
    0x205,                                                  //u32Id                  - [DEF] Can identifier   
    (TUint16)eCSR_Msg5C0SendToOpus,                         //u16CanSigRecLink       - [DEF] Can Signal Record Position Link 
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
PUBLIC_VAR const TCSndCfg gCSnd_ctCfg_Msg6C0SendToOpus =
{
    // Common
    "Msg6C0SendToOpus",                                     //achName                - [STR] Display-Information-String
    BLO_RELEASE,                                            //eBloProc               - [DEF] Block behavior  
    // Fixed settings
    (TUint8)CBUS1_HWBUF_SND0,                               //u8SwHwBufNo            - [DEF] CAN send buffer position connection link  
    SNDTYP_CYCLIC,                                          //u8Type                 - [DEF] Send type
    SNDSTART_ACTIVE,                                        //u8Start                - [DEF] Start transmission
    0,                                                      //u8MsgBufSize           - [DEF] Message buffer size
    FALSE,                                                  //boBufferCheck          - [DEF] Buffer overflow check 
    200,                                                    //u16CycTim              - [DEF] Cycle time [ms]   
    10,                                                     //u16MinCycTime          - [DEF] Minimum cycle time[ms]
    590,                                                    //u16OffTim              - [DEF]1st offset time [ms]
    FALSE,                                                  //boExtId                - [DEF] Can extended identifier (11/29 Bit)
    0x305,                                                  //u32Id                  - [DEF] Can identifier   
    (TUint16)eCSR_Msg6C0SendToOpus,                         //u16CanSigRecLink       - [DEF] Can Signal Record Position Link 
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
PUBLIC_VAR const TCSndCfg gCSnd_ctCfg_Msg7C0SendToOpus =
{
    // Common
    "Msg7C0SendToOpus",                                     //achName                - [STR] Display-Information-String
    BLO_RELEASE,                                            //eBloProc               - [DEF] Block behavior  
    // Fixed settings
    (TUint8)CBUS1_HWBUF_SND0,                               //u8SwHwBufNo            - [DEF] CAN send buffer position connection link  
    SNDTYP_CYCLIC,                                          //u8Type                 - [DEF] Send type
    SNDSTART_ACTIVE,                                        //u8Start                - [DEF] Start transmission
    0,                                                      //u8MsgBufSize           - [DEF] Message buffer size
    FALSE,                                                  //boBufferCheck          - [DEF] Buffer overflow check 
    200,                                                    //u16CycTim              - [DEF] Cycle time [ms]   
    10,                                                     //u16MinCycTime          - [DEF] Minimum cycle time[ms]
    610,                                                    //u16OffTim              - [DEF]1st offset time [ms]
    FALSE,                                                  //boExtId                - [DEF] Can extended identifier (11/29 Bit)
    0x206,                                                  //u32Id                  - [DEF] Can identifier   
    (TUint16)eCSR_Msg7C0SendToOpus,                         //u16CanSigRecLink       - [DEF] Can Signal Record Position Link 
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
PUBLIC_VAR const TCSndCfg gCSnd_ctCfg_Msg8C0SendToOpus =
{
    // Common
    "Msg8C0SendToOpus",                                     //achName                - [STR] Display-Information-String
    BLO_RELEASE,                                            //eBloProc               - [DEF] Block behavior  
    // Fixed settings
    (TUint8)CBUS1_HWBUF_SND0,                               //u8SwHwBufNo            - [DEF] CAN send buffer position connection link  
    SNDTYP_CYCLIC,                                          //u8Type                 - [DEF] Send type
    SNDSTART_ACTIVE,                                        //u8Start                - [DEF] Start transmission
    0,                                                      //u8MsgBufSize           - [DEF] Message buffer size
    FALSE,                                                  //boBufferCheck          - [DEF] Buffer overflow check 
    200,                                                    //u16CycTim              - [DEF] Cycle time [ms]   
    10,                                                     //u16MinCycTime          - [DEF] Minimum cycle time[ms]
    630,                                                    //u16OffTim              - [DEF]1st offset time [ms]
    FALSE,                                                  //boExtId                - [DEF] Can extended identifier (11/29 Bit)
    0x306,                                                  //u32Id                  - [DEF] Can identifier   
    (TUint16)eCSR_Msg8C0SendToOpus,                         //u16CanSigRecLink       - [DEF] Can Signal Record Position Link 
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
PUBLIC_VAR const TCSndCfg gCSnd_ctCfg_Msg1C0SendToOpus =
{
    // Common
    "Msg1C0SendToOpus",                                     //achName                - [STR] Display-Information-String
    BLO_RELEASE,                                            //eBloProc               - [DEF] Block behavior  
    // Fixed settings
    (TUint8)CBUS1_HWBUF_SND0,                               //u8SwHwBufNo            - [DEF] CAN send buffer position connection link  
    SNDTYP_CYCLIC,                                          //u8Type                 - [DEF] Send type
    SNDSTART_ACTIVE,                                        //u8Start                - [DEF] Start transmission
    0,                                                      //u8MsgBufSize           - [DEF] Message buffer size
    FALSE,                                                  //boBufferCheck          - [DEF] Buffer overflow check 
    200,                                                    //u16CycTim              - [DEF] Cycle time [ms]   
    10,                                                     //u16MinCycTime          - [DEF] Minimum cycle time[ms]
    650,                                                    //u16OffTim              - [DEF]1st offset time [ms]
    FALSE,                                                  //boExtId                - [DEF] Can extended identifier (11/29 Bit)
    0x203,                                                  //u32Id                  - [DEF] Can identifier   
    (TUint16)eCSR_Msg1C0SendToOpus,                         //u16CanSigRecLink       - [DEF] Can Signal Record Position Link 
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
PUBLIC_VAR const TCSndCfg gCSnd_ctCfg_Data4C0SendToC1 =
{
    // Common
    "Data4C0SendToC1",                                      //achName                - [STR] Display-Information-String
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
    0x18FF0015,                                             //u32Id                  - [DEF] Can identifier   
    (TUint16)eCSR_Data4C0SendToC1,                          //u16CanSigRecLink       - [DEF] Can Signal Record Position Link 
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
PUBLIC_VAR const TCSndCfg gCSnd_ctCfg_Msg11C0SendToEvision7 =
{
    // Common
    "Msg11C0SendToEvision7",                                //achName                - [STR] Display-Information-String
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
    0xC0D70B,                                               //u32Id                  - [DEF] Can identifier   
    (TUint16)eCSR_Msg11C0SendToEvision7,                    //u16CanSigRecLink       - [DEF] Can Signal Record Position Link 
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
PUBLIC_VAR const TCSndCfg gCSnd_ctCfg_Msg9C0SendToOpus =
{
    // Common
    "Msg9C0SendToOpus",                                     //achName                - [STR] Display-Information-String
    BLO_RELEASE,                                            //eBloProc               - [DEF] Block behavior  
    // Fixed settings
    (TUint8)CBUS1_HWBUF_SND0,                               //u8SwHwBufNo            - [DEF] CAN send buffer position connection link  
    SNDTYP_CYCLIC,                                          //u8Type                 - [DEF] Send type
    SNDSTART_ACTIVE,                                        //u8Start                - [DEF] Start transmission
    0,                                                      //u8MsgBufSize           - [DEF] Message buffer size
    FALSE,                                                  //boBufferCheck          - [DEF] Buffer overflow check 
    200,                                                    //u16CycTim              - [DEF] Cycle time [ms]   
    10,                                                     //u16MinCycTime          - [DEF] Minimum cycle time[ms]
    660,                                                    //u16OffTim              - [DEF]1st offset time [ms]
    FALSE,                                                  //boExtId                - [DEF] Can extended identifier (11/29 Bit)
    0x307,                                                  //u32Id                  - [DEF] Can identifier   
    (TUint16)eCSR_Msg9C0SendToOpus,                         //u16CanSigRecLink       - [DEF] Can Signal Record Position Link 
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
PUBLIC_VAR const TCSndCfg gCSnd_ctCfg_Msg10C0SendToOpus =
{
    // Common
    "Msg10C0SendToOpus",                                    //achName                - [STR] Display-Information-String
    BLO_RELEASE,                                            //eBloProc               - [DEF] Block behavior  
    // Fixed settings
    (TUint8)CBUS1_HWBUF_SND0,                               //u8SwHwBufNo            - [DEF] CAN send buffer position connection link  
    SNDTYP_CYCLIC,                                          //u8Type                 - [DEF] Send type
    SNDSTART_ACTIVE,                                        //u8Start                - [DEF] Start transmission
    0,                                                      //u8MsgBufSize           - [DEF] Message buffer size
    FALSE,                                                  //boBufferCheck          - [DEF] Buffer overflow check 
    200,                                                    //u16CycTim              - [DEF] Cycle time [ms]   
    10,                                                     //u16MinCycTime          - [DEF] Minimum cycle time[ms]
    670,                                                    //u16OffTim              - [DEF]1st offset time [ms]
    FALSE,                                                  //boExtId                - [DEF] Can extended identifier (11/29 Bit)
    0x308,                                                  //u32Id                  - [DEF] Can identifier   
    (TUint16)eCSR_Msg10C0SendToOpus,                        //u16CanSigRecLink       - [DEF] Can Signal Record Position Link 
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
PUBLIC_VAR const TCSndCfg gCSnd_ctCfg_SyncFrame =
{
    // Common
    "SyncFrame",                                            //achName                - [STR] Display-Information-String
    BLO_RELEASE,                                            //eBloProc               - [DEF] Block behavior  
    // Fixed settings
    (TUint8)CBUS3_HWBUF_SND0,                               //u8SwHwBufNo            - [DEF] CAN send buffer position connection link  
    SNDTYP_CYCLIC,                                          //u8Type                 - [DEF] Send type
    SNDSTART_ACTIVE,                                        //u8Start                - [DEF] Start transmission
    0,                                                      //u8MsgBufSize           - [DEF] Message buffer size
    FALSE,                                                  //boBufferCheck          - [DEF] Buffer overflow check 
    40,                                                     //u16CycTim              - [DEF] Cycle time [ms]   
    10,                                                     //u16MinCycTime          - [DEF] Minimum cycle time[ms]
    50,                                                     //u16OffTim              - [DEF]1st offset time [ms]
    FALSE,                                                  //boExtId                - [DEF] Can extended identifier (11/29 Bit)
    0x80,                                                   //u32Id                  - [DEF] Can identifier   
    (TUint16)eCSR_SyncFrame,                                //u16CanSigRecLink       - [DEF] Can Signal Record Position Link 
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
PUBLIC_VAR const TCSndCfg gCSnd_ctCfg_Msg12C0SendToEvision7 =
{
    // Common
    "Msg12C0SendToEvision7",                                //achName                - [STR] Display-Information-String
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
    0xC0D70C,                                               //u32Id                  - [DEF] Can identifier   
    (TUint16)eCSR_Msg12C0SendToEvision7,                    //u16CanSigRecLink       - [DEF] Can Signal Record Position Link 
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
PUBLIC_VAR const TCSndCfg gCSnd_ctCfg_Msg13C0SendToEvision7 =
{
    // Common
    "Msg13C0SendToEvision7",                                //achName                - [STR] Display-Information-String
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
    0xC0D70D,                                               //u32Id                  - [DEF] Can identifier   
    (TUint16)eCSR_Msg13C0SendToEvision7,                    //u16CanSigRecLink       - [DEF] Can Signal Record Position Link 
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
PUBLIC_VAR const TCSndCfg gCSnd_ctCfg_Datalogger =
{
    // Common
    "Datalogger",                                           //achName                - [STR] Display-Information-String
    BLO_RELEASE,                                            //eBloProc               - [DEF] Block behavior  
    // Fixed settings
    (TUint8)CBUS4_HWBUF_SND0,                               //u8SwHwBufNo            - [DEF] CAN send buffer position connection link  
    SNDTYP_CYCEVE,                                          //u8Type                 - [DEF] Send type
    SNDSTART_ACTIVE_NO_FIRST,                               //u8Start                - [DEF] Start transmission
    0,                                                      //u8MsgBufSize           - [DEF] Message buffer size
    FALSE,                                                  //boBufferCheck          - [DEF] Buffer overflow check 
    1000,                                                   //u16CycTim              - [DEF] Cycle time [ms]   
    1000,                                                   //u16MinCycTime          - [DEF] Minimum cycle time[ms]
    50,                                                     //u16OffTim              - [DEF]1st offset time [ms]
    FALSE,                                                  //boExtId                - [DEF] Can extended identifier (11/29 Bit)
    0x51,                                                   //u32Id                  - [DEF] Can identifier   
    (TUint16)eCSR_Datalogger,                               //u16CanSigRecLink       - [DEF] Can Signal Record Position Link 
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
PUBLIC_VAR const TCSndCfg gCSnd_ctCfg_Sdo_Request_Encodeur_Turret =
{
    // Common
    "Sdo_Request_Encodeur_Turret",                          //achName                - [STR] Display-Information-String
    BLO_RELEASE,                                            //eBloProc               - [DEF] Block behavior  
    // Fixed settings
    (TUint8)CBUS3_HWBUF_SND0,                               //u8SwHwBufNo            - [DEF] CAN send buffer position connection link  
    SNDTYP_EVENT,                                           //u8Type                 - [DEF] Send type
    SNDSTART_ACTIVE,                                        //u8Start                - [DEF] Start transmission
    0,                                                      //u8MsgBufSize           - [DEF] Message buffer size
    FALSE,                                                  //boBufferCheck          - [DEF] Buffer overflow check 
    50,                                                     //u16CycTim              - [DEF] Cycle time [ms]   
    10,                                                     //u16MinCycTime          - [DEF] Minimum cycle time[ms]
    50,                                                     //u16OffTim              - [DEF]1st offset time [ms]
    FALSE,                                                  //boExtId                - [DEF] Can extended identifier (11/29 Bit)
    0x601,                                                  //u32Id                  - [DEF] Can identifier   
    (TUint16)eCSR_Sdo_Request_Encodeur_Turret1,             //u16CanSigRecLink       - [DEF] Can Signal Record Position Link 
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
PUBLIC_VAR const TCSndCfg gCSnd_ctCfg_Sdo_Request_Encodeur_Turret2 =
{
    // Common
    "Sdo_Request_Encodeur_Turret2",                         //achName                - [STR] Display-Information-String
    BLO_RELEASE,                                            //eBloProc               - [DEF] Block behavior  
    // Fixed settings
    (TUint8)CBUS3_HWBUF_SND0,                               //u8SwHwBufNo            - [DEF] CAN send buffer position connection link  
    SNDTYP_EVENT,                                           //u8Type                 - [DEF] Send type
    SNDSTART_ACTIVE,                                        //u8Start                - [DEF] Start transmission
    0,                                                      //u8MsgBufSize           - [DEF] Message buffer size
    FALSE,                                                  //boBufferCheck          - [DEF] Buffer overflow check 
    50,                                                     //u16CycTim              - [DEF] Cycle time [ms]   
    10,                                                     //u16MinCycTime          - [DEF] Minimum cycle time[ms]
    50,                                                     //u16OffTim              - [DEF]1st offset time [ms]
    FALSE,                                                  //boExtId                - [DEF] Can extended identifier (11/29 Bit)
    0x602,                                                  //u32Id                  - [DEF] Can identifier   
    (TUint16)eCSR_Sdo_Request_Encodeur_Turret2,             //u16CanSigRecLink       - [DEF] Can Signal Record Position Link 
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
PUBLIC_VAR const TCSndCfg gCSnd_ctCfg_Data5C0SendToC1 =
{
    // Common
    "Data5C0SendToC1",                                      //achName                - [STR] Display-Information-String
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
    0x18FF0019,                                             //u32Id                  - [DEF] Can identifier   
    (TUint16)eCSR_Data5C0SendToC1,                          //u16CanSigRecLink       - [DEF] Can Signal Record Position Link 
    //Fixed safety feature settings
    TRUE,                                                   //boSafeInvMsg           - [DEF] Add bit inverse message
    0,                                                      //u16SafeInvDelay        - [ms] Delay time inverse message
    FALSE,                                                  //boSafeCnt              - [DEF] Check safety counter
    //All Errors
    1,                                                      //u8ErrCnt               - [DEF] Error Count  
    // Error [0-0]  
    { // TErrCfgFea
        { //ErrTag[0] - Message buffer overflow [DM_CSND_BOVERF]
            1359,                                           //u32ErrNum              - [num] Error Number
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
PUBLIC_VAR const TCSndCfg gCSnd_ctCfg_Msg11C0SendToOpus =
{
    // Common
    "Msg11C0SendToOpus",                                    //achName                - [STR] Display-Information-String
    BLO_RELEASE,                                            //eBloProc               - [DEF] Block behavior  
    // Fixed settings
    (TUint8)CBUS1_HWBUF_SND0,                               //u8SwHwBufNo            - [DEF] CAN send buffer position connection link  
    SNDTYP_CYCLIC,                                          //u8Type                 - [DEF] Send type
    SNDSTART_ACTIVE,                                        //u8Start                - [DEF] Start transmission
    0,                                                      //u8MsgBufSize           - [DEF] Message buffer size
    FALSE,                                                  //boBufferCheck          - [DEF] Buffer overflow check 
    200,                                                    //u16CycTim              - [DEF] Cycle time [ms]   
    10,                                                     //u16MinCycTime          - [DEF] Minimum cycle time[ms]
    690,                                                    //u16OffTim              - [DEF]1st offset time [ms]
    FALSE,                                                  //boExtId                - [DEF] Can extended identifier (11/29 Bit)
    0x309,                                                  //u32Id                  - [DEF] Can identifier   
    (TUint16)eCSR_Msg11C0SendToOpus,                        //u16CanSigRecLink       - [DEF] Can Signal Record Position Link 
    //Fixed safety feature settings
    FALSE,                                                  //boSafeInvMsg           - [DEF] Add bit inverse message
    0,                                                      //u16SafeInvDelay        - [ms] Delay time inverse message
    FALSE,                                                  //boSafeCnt              - [DEF] Check safety counter
    //All Errors
    1,                                                      //u8ErrCnt               - [DEF] Error Count  
    // Error [0-0]  
    { // TErrCfgFea
        { //ErrTag[0] - Message buffer overflow [DM_CSND_BOVERF]
            1542,                                           //u32ErrNum              - [num] Error Number
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
PUBLIC_VAR const TCSndCfg gCSnd_ctCfg_Msg14C0SendToEvision7 =
{
    // Common
    "Msg14C0SendToEvision7",                                //achName                - [STR] Display-Information-String
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
    0xC0D70E,                                               //u32Id                  - [DEF] Can identifier   
    (TUint16)eCSR_Msg14C0SendToEvision7,                    //u16CanSigRecLink       - [DEF] Can Signal Record Position Link 
    //Fixed safety feature settings
    FALSE,                                                  //boSafeInvMsg           - [DEF] Add bit inverse message
    0,                                                      //u16SafeInvDelay        - [ms] Delay time inverse message
    FALSE,                                                  //boSafeCnt              - [DEF] Check safety counter
    //All Errors
    1,                                                      //u8ErrCnt               - [DEF] Error Count  
    // Error [0-0]  
    { // TErrCfgFea
        { //ErrTag[0] - Message buffer overflow [DM_CSND_BOVERF]
            1543,                                           //u32ErrNum              - [num] Error Number
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
PUBLIC_VAR const TCSndCfg gCSnd_ctCfg_Msg15C0SendToEvision7 =
{
    // Common
    "Msg15C0SendToEvision7",                                //achName                - [STR] Display-Information-String
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
    0xC0D70F,                                               //u32Id                  - [DEF] Can identifier   
    (TUint16)eCSR_Msg15C0SendToEvision7,                    //u16CanSigRecLink       - [DEF] Can Signal Record Position Link 
    //Fixed safety feature settings
    FALSE,                                                  //boSafeInvMsg           - [DEF] Add bit inverse message
    0,                                                      //u16SafeInvDelay        - [ms] Delay time inverse message
    FALSE,                                                  //boSafeCnt              - [DEF] Check safety counter
    //All Errors
    1,                                                      //u8ErrCnt               - [DEF] Error Count  
    // Error [0-0]  
    { // TErrCfgFea
        { //ErrTag[0] - Message buffer overflow [DM_CSND_BOVERF]
            1554,                                           //u32ErrNum              - [num] Error Number
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
PUBLIC_VAR const TCSndCfg gCSnd_ctCfg_HMG_1 =
{
    // Common
    "HMG_1",                                                //achName                - [STR] Display-Information-String
    BLO_RELEASE,                                            //eBloProc               - [DEF] Block behavior  
    // Fixed settings
    (TUint8)CBUS4_HWBUF_SND0,                               //u8SwHwBufNo            - [DEF] CAN send buffer position connection link  
    SNDTYP_CYCLIC,                                          //u8Type                 - [DEF] Send type
    SNDSTART_ACTIVE,                                        //u8Start                - [DEF] Start transmission
    0,                                                      //u8MsgBufSize           - [DEF] Message buffer size
    FALSE,                                                  //boBufferCheck          - [DEF] Buffer overflow check 
    40,                                                     //u16CycTim              - [DEF] Cycle time [ms]   
    10,                                                     //u16MinCycTime          - [DEF] Minimum cycle time[ms]
    50,                                                     //u16OffTim              - [DEF]1st offset time [ms]
    FALSE,                                                  //boExtId                - [DEF] Can extended identifier (11/29 Bit)
    0x11,                                                   //u32Id                  - [DEF] Can identifier   
    (TUint16)eCSR_HMG_1,                                    //u16CanSigRecLink       - [DEF] Can Signal Record Position Link 
    //Fixed safety feature settings
    FALSE,                                                  //boSafeInvMsg           - [DEF] Add bit inverse message
    0,                                                      //u16SafeInvDelay        - [ms] Delay time inverse message
    FALSE,                                                  //boSafeCnt              - [DEF] Check safety counter
    //All Errors
    1,                                                      //u8ErrCnt               - [DEF] Error Count  
    // Error [0-0]  
    { // TErrCfgFea
        { //ErrTag[0] - Message buffer overflow [DM_CSND_BOVERF]
            1567,                                           //u32ErrNum              - [num] Error Number
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
PUBLIC_VAR const TCSndCfg gCSnd_ctCfg_HMG_2 =
{
    // Common
    "HMG_2",                                                //achName                - [STR] Display-Information-String
    BLO_RELEASE,                                            //eBloProc               - [DEF] Block behavior  
    // Fixed settings
    (TUint8)CBUS4_HWBUF_SND0,                               //u8SwHwBufNo            - [DEF] CAN send buffer position connection link  
    SNDTYP_CYCLIC,                                          //u8Type                 - [DEF] Send type
    SNDSTART_ACTIVE,                                        //u8Start                - [DEF] Start transmission
    0,                                                      //u8MsgBufSize           - [DEF] Message buffer size
    FALSE,                                                  //boBufferCheck          - [DEF] Buffer overflow check 
    40,                                                     //u16CycTim              - [DEF] Cycle time [ms]   
    10,                                                     //u16MinCycTime          - [DEF] Minimum cycle time[ms]
    50,                                                     //u16OffTim              - [DEF]1st offset time [ms]
    FALSE,                                                  //boExtId                - [DEF] Can extended identifier (11/29 Bit)
    0x12,                                                   //u32Id                  - [DEF] Can identifier   
    (TUint16)eCSR_HMG_2,                                    //u16CanSigRecLink       - [DEF] Can Signal Record Position Link 
    //Fixed safety feature settings
    FALSE,                                                  //boSafeInvMsg           - [DEF] Add bit inverse message
    0,                                                      //u16SafeInvDelay        - [ms] Delay time inverse message
    FALSE,                                                  //boSafeCnt              - [DEF] Check safety counter
    //All Errors
    1,                                                      //u8ErrCnt               - [DEF] Error Count  
    // Error [0-0]  
    { // TErrCfgFea
        { //ErrTag[0] - Message buffer overflow [DM_CSND_BOVERF]
            1568,                                           //u32ErrNum              - [num] Error Number
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
PUBLIC_VAR const TCSndCfg gCSnd_ctCfg_HMG_3 =
{
    // Common
    "HMG_3",                                                //achName                - [STR] Display-Information-String
    BLO_RELEASE,                                            //eBloProc               - [DEF] Block behavior  
    // Fixed settings
    (TUint8)CBUS4_HWBUF_SND0,                               //u8SwHwBufNo            - [DEF] CAN send buffer position connection link  
    SNDTYP_CYCLIC,                                          //u8Type                 - [DEF] Send type
    SNDSTART_ACTIVE,                                        //u8Start                - [DEF] Start transmission
    0,                                                      //u8MsgBufSize           - [DEF] Message buffer size
    FALSE,                                                  //boBufferCheck          - [DEF] Buffer overflow check 
    40,                                                     //u16CycTim              - [DEF] Cycle time [ms]   
    10,                                                     //u16MinCycTime          - [DEF] Minimum cycle time[ms]
    50,                                                     //u16OffTim              - [DEF]1st offset time [ms]
    FALSE,                                                  //boExtId                - [DEF] Can extended identifier (11/29 Bit)
    0x13,                                                   //u32Id                  - [DEF] Can identifier   
    (TUint16)eCSR_HMG_3,                                    //u16CanSigRecLink       - [DEF] Can Signal Record Position Link 
    //Fixed safety feature settings
    FALSE,                                                  //boSafeInvMsg           - [DEF] Add bit inverse message
    0,                                                      //u16SafeInvDelay        - [ms] Delay time inverse message
    FALSE,                                                  //boSafeCnt              - [DEF] Check safety counter
    //All Errors
    1,                                                      //u8ErrCnt               - [DEF] Error Count  
    // Error [0-0]  
    { // TErrCfgFea
        { //ErrTag[0] - Message buffer overflow [DM_CSND_BOVERF]
            1569,                                           //u32ErrNum              - [num] Error Number
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
PUBLIC_VAR const TCSndCfg gCSnd_ctCfg_DMC_TxSdo =
{
    // Common
    "DMC_TxSdo",                                            //achName                - [STR] Display-Information-String
    BLO_RELEASE,                                            //eBloProc               - [DEF] Block behavior  
    // Fixed settings
    (TUint8)CBUS4_HWBUF_SND0,                               //u8SwHwBufNo            - [DEF] CAN send buffer position connection link  
    SNDTYP_EVENT,                                           //u8Type                 - [DEF] Send type
    SNDSTART_ACTIVE_NO_FIRST,                               //u8Start                - [DEF] Start transmission
    0,                                                      //u8MsgBufSize           - [DEF] Message buffer size
    FALSE,                                                  //boBufferCheck          - [DEF] Buffer overflow check 
    50,                                                     //u16CycTim              - [DEF] Cycle time [ms]   
    10,                                                     //u16MinCycTime          - [DEF] Minimum cycle time[ms]
    0,                                                      //u16OffTim              - [DEF]1st offset time [ms]
    FALSE,                                                  //boExtId                - [DEF] Can extended identifier (11/29 Bit)
    0x610,                                                  //u32Id                  - [DEF] Can identifier   
    (TUint16)eCSR_DMC_TxSdo,                                //u16CanSigRecLink       - [DEF] Can Signal Record Position Link 
    //Fixed safety feature settings
    FALSE,                                                  //boSafeInvMsg           - [DEF] Add bit inverse message
    0,                                                      //u16SafeInvDelay        - [ms] Delay time inverse message
    FALSE,                                                  //boSafeCnt              - [DEF] Check safety counter
    //All Errors
    1,                                                      //u8ErrCnt               - [DEF] Error Count  
    // Error [0-0]  
    { // TErrCfgFea
        { //ErrTag[0] - Message buffer overflow [DM_CSND_BOVERF]
            1575,                                           //u32ErrNum              - [num] Error Number
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
PUBLIC_VAR const TCSndCfg gCSnd_ctCfg_NMT =
{
    // Common
    "NMT",                                                  //achName                - [STR] Display-Information-String
    BLO_RELEASE,                                            //eBloProc               - [DEF] Block behavior  
    // Fixed settings
    (TUint8)CBUS4_HWBUF_SND0,                               //u8SwHwBufNo            - [DEF] CAN send buffer position connection link  
    SNDTYP_EVENT,                                           //u8Type                 - [DEF] Send type
    SNDSTART_ACTIVE_NO_FIRST,                               //u8Start                - [DEF] Start transmission
    0,                                                      //u8MsgBufSize           - [DEF] Message buffer size
    FALSE,                                                  //boBufferCheck          - [DEF] Buffer overflow check 
    50,                                                     //u16CycTim              - [DEF] Cycle time [ms]   
    10,                                                     //u16MinCycTime          - [DEF] Minimum cycle time[ms]
    50,                                                     //u16OffTim              - [DEF]1st offset time [ms]
    FALSE,                                                  //boExtId                - [DEF] Can extended identifier (11/29 Bit)
    0x0,                                                    //u32Id                  - [DEF] Can identifier   
    (TUint16)eCSR_NMT,                                      //u16CanSigRecLink       - [DEF] Can Signal Record Position Link 
    //Fixed safety feature settings
    FALSE,                                                  //boSafeInvMsg           - [DEF] Add bit inverse message
    0,                                                      //u16SafeInvDelay        - [ms] Delay time inverse message
    FALSE,                                                  //boSafeCnt              - [DEF] Check safety counter
    //All Errors
    1,                                                      //u8ErrCnt               - [DEF] Error Count  
    // Error [0-0]  
    { // TErrCfgFea
        { //ErrTag[0] - Message buffer overflow [DM_CSND_BOVERF]
            1581,                                           //u32ErrNum              - [num] Error Number
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
PUBLIC_VAR const TCSndCfg gCSnd_ctCfg_DMC_TxPdo1_DC =
{
    // Common
    "DMC_TxPdo1_DC",                                        //achName                - [STR] Display-Information-String
    BLO_RELEASE,                                            //eBloProc               - [DEF] Block behavior  
    // Fixed settings
    (TUint8)CBUS4_HWBUF_SND0,                               //u8SwHwBufNo            - [DEF] CAN send buffer position connection link  
    SNDTYP_EVENT,                                           //u8Type                 - [DEF] Send type
    SNDSTART_ACTIVE_NO_FIRST,                               //u8Start                - [DEF] Start transmission
    0,                                                      //u8MsgBufSize           - [DEF] Message buffer size
    FALSE,                                                  //boBufferCheck          - [DEF] Buffer overflow check 
    50,                                                     //u16CycTim              - [DEF] Cycle time [ms]   
    10,                                                     //u16MinCycTime          - [DEF] Minimum cycle time[ms]
    50,                                                     //u16OffTim              - [DEF]1st offset time [ms]
    FALSE,                                                  //boExtId                - [DEF] Can extended identifier (11/29 Bit)
    0x210,                                                  //u32Id                  - [DEF] Can identifier   
    (TUint16)eCSR_DMC_TxPdo1_DC,                            //u16CanSigRecLink       - [DEF] Can Signal Record Position Link 
    //Fixed safety feature settings
    FALSE,                                                  //boSafeInvMsg           - [DEF] Add bit inverse message
    0,                                                      //u16SafeInvDelay        - [ms] Delay time inverse message
    FALSE,                                                  //boSafeCnt              - [DEF] Check safety counter
    //All Errors
    1,                                                      //u8ErrCnt               - [DEF] Error Count  
    // Error [0-0]  
    { // TErrCfgFea
        { //ErrTag[0] - Message buffer overflow [DM_CSND_BOVERF]
            1597,                                           //u32ErrNum              - [num] Error Number
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
PUBLIC_VAR const TCSndCfg gCSnd_ctCfg_DMC_TxPdo2_BCL =
{
    // Common
    "DMC_TxPdo2_BCL",                                       //achName                - [STR] Display-Information-String
    BLO_RELEASE,                                            //eBloProc               - [DEF] Block behavior  
    // Fixed settings
    (TUint8)CBUS4_HWBUF_SND0,                               //u8SwHwBufNo            - [DEF] CAN send buffer position connection link  
    SNDTYP_EVENT,                                           //u8Type                 - [DEF] Send type
    SNDSTART_ACTIVE_NO_FIRST,                               //u8Start                - [DEF] Start transmission
    0,                                                      //u8MsgBufSize           - [DEF] Message buffer size
    FALSE,                                                  //boBufferCheck          - [DEF] Buffer overflow check 
    50,                                                     //u16CycTim              - [DEF] Cycle time [ms]   
    10,                                                     //u16MinCycTime          - [DEF] Minimum cycle time[ms]
    50,                                                     //u16OffTim              - [DEF]1st offset time [ms]
    FALSE,                                                  //boExtId                - [DEF] Can extended identifier (11/29 Bit)
    0x310,                                                  //u32Id                  - [DEF] Can identifier   
    (TUint16)eCSR_DMC_TxPdo2_BCL,                           //u16CanSigRecLink       - [DEF] Can Signal Record Position Link 
    //Fixed safety feature settings
    FALSE,                                                  //boSafeInvMsg           - [DEF] Add bit inverse message
    0,                                                      //u16SafeInvDelay        - [ms] Delay time inverse message
    FALSE,                                                  //boSafeCnt              - [DEF] Check safety counter
    //All Errors
    1,                                                      //u8ErrCnt               - [DEF] Error Count  
    // Error [0-0]  
    { // TErrCfgFea
        { //ErrTag[0] - Message buffer overflow [DM_CSND_BOVERF]
            1598,                                           //u32ErrNum              - [num] Error Number
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
