//**************************************************************************************************
//! @crc        54411065
//! @file       Cfg_PtcDmx.c
//! @brief      Generate by: HYDAC Controller Project - Code Builder Tool Chain
//! @ecu        TTC580
//! @dll        1.2.7 (Build: 080)
//! @dll itf    1.7.0
//! @build      2023-04-03 16:35:10
//! @Pattern    1.1.5.0
//! @Subpattern 0.0.4
//! @Match      07-04-01-04
//! @PDT        2.11.72.172
//! @PdtProjVer 0.0.0
//! @created    2025-06-04 11:35:59   HYDAC/HCP-CC
//**************************************************************************************************

// INCLUDES ========================================================================================
#include <ItfPtcDmx.h>
#include <ItfBloCBuf.h>
#include <Cfg_CBuf.h>

// GLOBAL VARIABLES ================================================================================
//Software Module Name: AppGlobal
TPtcDmx gPtc_tDmxPtcDmxCfg = 
{
    "PtcDmx",                                               //achName                - DMx Display-Information-String
    TRUE,                                                   //boDmxActiv             - DMx Protocol active
    CBUS0_HWBUF_SND0,                                       //u8DmxSndHwBufNo        - DMx CAN send buffer position connection link
    CBUS0_HWBUF_RCV0,                                       //u8DmxRcvHwBufNo        - DMx CAN receive buffer position connection link [DEF: HW-BUF]
    0x18,                                                   //u8DmxPrioRevPage       - DMx priority & Rev & Pag  
    0x1C,                                                   //u8DmxPrioRevPageTp     - DMx priority & Rev & Pag  for CM(Transport Layer)
    0xFE,                                                   //u8DmxPf                - DMx PDU Format          
    0x20,                                                   //u8DmxSa                - DMx Source Address
    DM_DTC_VER1,                                            //u8DmxDtcVersion        - DMx DTC Mapping Version
    //All Errors
    // Error [0-0]  
    { // TErrCfgFea
        { //ErrTag[0] - DMx protocol error [DM_PTC_DMX_OVERFLOW]
            1350,                                           //u32ErrNum              - [num] Error Number
            FMI_31_CONDITION_EXISTS,                        //u8ErrMode              - [enu] Failure Mode Indicator
            FMIEX_NONE,                                     //u8ErrModeExt           - [def] Extended Failure Mode Indicator
            ACC_ALL_CL1,                                    //u16ErrAccLevel         - [def] Failure Access Level
            ERR_TYPE_ERROR,                                 //u8ErrType              - [enu] Error Type
            ERR_CAT0_NOT,                                   //u8ErrCat               - [enu] Error Category ( Lamp Type )
            ERR_STORE_ALL,                                  //u8ErrStore             - [enu] Error Store Behavior
            EG_NONE,                                        //u8ExcludeGroup         - [def] Error Exclude Group
            SC_NONE,                                        //u8SetCond              - [def] Set Condition - allows to activate an error detection
            0,                                              //u32TimeDetect          - [ms]  Error Detection ( Debounce ) Time
            FALSE,                                          //boDetectDboAfterSc     - [boo] Start debounce timer after a valid set condition
            RC_NONE,                                        //u8ReleaCond            - [def] Release Condition - allows an error to be released ( removed )
            0,                                              //u32TimeReset           - [ms]  Error Release ( Debounce ) Time
            FALSE,                                          //boResetDboAfterRc      - [boo] Start debounce timer after a valid release condition 
            RM_NONE,                                        //u8RestrictMode         - [def] Restricted Mode
            INF_NONE,                                       //u8InfoVarIdx           - [num] Array Index of Error Information Page
            TRUE,                                           //boCustList             - [boo] Memorized in a Customer List
            DIS_NONE                                        //u8DisplayOutput        - [def] Display Output ( Error Output Interface )
        }
    }
};
