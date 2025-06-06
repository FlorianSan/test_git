//**************************************************************************************************
//! @crc        1636134249
//! @file       Cfg_InResist.c
//! @brief      Generate by: HYDAC Controller Project - Code Builder Tool Chain
//! @ecu        TTC580
//! @dll        1.2.7 (Build: 080)
//! @dll itf    1.7.0
//! @build      2023-04-03 16:35:10
//! @Pattern    0.11.0.0
//! @Subpattern 0.0.4
//! @Match      07-04-01-04
//! @PDT        2.11.72.172
//! @PdtProjVer 0.0.0
//! @created    2025-04-18 16:40:50   HYDAC/HCP-CC
//**************************************************************************************************

// INCLUDES ========================================================================================
#include <ItfBloInResist.h>

// GLOBAL VARIABLES ================================================================================
//Sofware Module Name: AppGlobal
PUBLIC_VAR const TInResistCfg gInResist_ctCfg_GasGauge =
{
    // Common
    "GasGauge",                                             //achName                - [STR] Display-Information-String
    BLO_RELEASE,                                            //eBloProc               - [ENU] Block behavior
    // Properties
    {
        INPBEH_PAR_TO_INP,                                  //eInpBeh                - [ENU] Input behavior at error on input
        PIN_106                                             //ePin                   - [ENU] Pin (Cfg-Idx) channel
    },
    // Parameter
    {
        {
            {5, {DB_LINK_NA, DB_LINK_NA, DB_LINK_NA}},      //au32InLim[0]           - [Ohm]  Detection limit for Short to GND
            {50000, {DB_LINK_NA, DB_LINK_NA, DB_LINK_NA}}   //au32InLim[1]           - [Ohm]  Detection limit for Short to PWR
        },
        2380, {DB_LINK_NA, DB_LINK_NA, DB_LINK_NA},         //u32InpValDefault       - [Ohm]  Default value and error input value (input behavior)
        TRUE, {DB_LINK_NA, DB_LINK_NA, DB_LINK_NA},         //boScalEna              - [BOon]  Scaling mode enable/disable
        8, {DB_LINK_NA, DB_LINK_NA, DB_LINK_NA},            //u8ScaPoiMax            - [Num]  Max-Count of scaling Points
        LUTMOD_LIMITATION,                                  //eFirRiseMode           - [Enum]  Behaviour before first scaling node
        LUTMOD_LIMITATION,                                  //eEndRiseMode           - [Enum]  Behaviour after last scaling node
        {// point Values
            {
                34, {DB_LINK_NA, DB_LINK_NA, DB_LINK_NA},   //au32X[0]               - [Ohm]  x-Value[0] of the point
                45, {DB_LINK_NA, DB_LINK_NA, DB_LINK_NA}    //ai16Y[0]               - [Cust]  y-Value[0] of the point
            },
            {
                55, {DB_LINK_NA, DB_LINK_NA, DB_LINK_NA},   //au32X[1]               - [Ohm]  x-Value[1] of the point
                40, {DB_LINK_NA, DB_LINK_NA, DB_LINK_NA}    //ai16Y[1]               - [Cust]  y-Value[1] of the point
            },
            {
                76, {DB_LINK_NA, DB_LINK_NA, DB_LINK_NA},   //au32X[2]               - [Ohm]  x-Value[2] of the point
                34, {DB_LINK_NA, DB_LINK_NA, DB_LINK_NA}    //ai16Y[2]               - [Cust]  y-Value[2] of the point
            },
            {
                84, {DB_LINK_NA, DB_LINK_NA, DB_LINK_NA},   //au32X[3]               - [Ohm]  x-Value[3] of the point
                31, {DB_LINK_NA, DB_LINK_NA, DB_LINK_NA}    //ai16Y[3]               - [Cust]  y-Value[3] of the point
            },
            {
                103, {DB_LINK_NA, DB_LINK_NA, DB_LINK_NA},  //au32X[4]               - [Ohm]  x-Value[4] of the point
                24, {DB_LINK_NA, DB_LINK_NA, DB_LINK_NA}    //ai16Y[4]               - [Cust]  y-Value[4] of the point
            },
            {
                120, {DB_LINK_NA, DB_LINK_NA, DB_LINK_NA},  //au32X[5]               - [Ohm]  x-Value[5] of the point
                20, {DB_LINK_NA, DB_LINK_NA, DB_LINK_NA}    //ai16Y[5]               - [Cust]  y-Value[5] of the point
            },
            {
                156, {DB_LINK_NA, DB_LINK_NA, DB_LINK_NA},  //au32X[6]               - [Ohm]  x-Value[6] of the point
                14, {DB_LINK_NA, DB_LINK_NA, DB_LINK_NA}    //ai16Y[6]               - [Cust]  y-Value[6] of the point
            },
            {
                238, {DB_LINK_NA, DB_LINK_NA, DB_LINK_NA},  //au32X[7]               - [Ohm]  x-Value[7] of the point
                0, {DB_LINK_NA, DB_LINK_NA, DB_LINK_NA}     //ai16Y[7]               - [Cust]  y-Value[7] of the point
            }
        }
    },
    // All Errors
    3,                                                      //u8ErrCnt               - [DEF] Error Count
    // All Errors [0-2]
    { // TErrCfgFea
        { //ErrTag[0] - Input signal short to power [DM_INRESIST_SP]
            9186,                                           //u32ErrNum              - [num] Error Number
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
        { //ErrTag[1] - Input signal short to ground [DM_INRESIST_SG]
            9187,                                           //u32ErrNum              - [num] Error Number
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
        { //ErrTag[2] - Internal Block error [DM_INRESIST_INTERNAL]
            9188,                                           //u32ErrNum              - [num] Error Number
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
