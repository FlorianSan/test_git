//**************************************************************************************************
//! @crc        4091940115
//! @file       App_CanSigRec.c
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

#include <App_CanSigRec.h>

#ifndef LINT_SWITCH_IGNORE

const TCanSigRecVal_Start_48XS gCsr_ctRecDat_Start_48XS =
{
    //!< Command
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TUINT8, TUINT8, 0, 8, 0, 0, 1, 1 }, 
     { U8_MIN, U8_MAX, 0, 0 },
    //!< NodeId
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TUINT8, TUINT8, 8, 8, 0, 0, 1, 1 }, 
     { U8_MIN, U8_MAX, 0, 0 }
};

static ESigSta mCsr_aeRecErr_tStart_48XS[2] =
{
    SIG_OKAY,
    SIG_OKAY
};

static TCanSigRecOldValStart_48XS mCsr_tOldDat_tStart_48XS =
{
    0,                                                      //!< u8Command [[-]] new signal
    0                                                       //!< u8NodeId [[-]] new signal
};

extern TCanSigRecStart_48XS gCsr_tStart_48XS;
static const TRecDat mCsr_actRecDat_tStart_48XS[2] =
{
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Start_48XS.tCsrInfo_u8Command, (TVoid*)&gCsr_ctRecDat_Start_48XS.tCsrRng_u8Command,
        (TVoid*)&gCsr_tStart_48XS.u8Command, (TVoid*)&mCsr_tOldDat_tStart_48XS.u8Command, &mCsr_aeRecErr_tStart_48XS[0],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Start_48XS.tCsrInfo_u8NodeId, (TVoid*)&gCsr_ctRecDat_Start_48XS.tCsrRng_u8NodeId,
        (TVoid*)&gCsr_tStart_48XS.u8NodeId, (TVoid*)&mCsr_tOldDat_tStart_48XS.u8NodeId, &mCsr_aeRecErr_tStart_48XS[1],
        NULL, NULL
    }
};

static const TCanSigRecRoot mCsr_ctRoot_Start_48XS =
{
    "Start_48XS",                                           //!< achName - [STR] Name Start_48XS
    2,                                                      //!< u8Dlc - [NUM] DLC of Can Message
    0xff,                                                   //!< u8CanByteDflt - [NUM] CAN Message default
    DATA_INTEL,                                             //!< eCanFormat - [NUM] CAN Format
    0xFF,                                                   //!< u8MasterReceiveId - [NUM] Receive Id
    2,                                                      //!< u8RecCnt - [NUM] Count of Recorde
    &mCsr_actRecDat_tStart_48XS[0],                         //!< ptRec - [NUM] Pointer to Record Values
    0,                                                      //!< u16RecNo - [NUM] Record Number
    CSR_STAMP                                               //!< u16Stamp - [NUM] Safety stamp
};

TCanSigRecStart_48XS gCsr_tStart_48XS =
{
    &mCsr_ctRoot_Start_48XS,                                //!< *cptRoot [POI] Root connection
    (((0 * 1)/1)+0),                                        //!< u8Command [[-]] new signal
    (((0 * 1)/1)+0)                                         //!< u8NodeId [[-]] new signal
};

const TCanSigRecVal_Sync_48XS gCsr_ctRecDat_Sync_48XS =
{
    //!< Signal
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 0, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE }
};

static ESigSta mCsr_aeRecErr_tSync_48XS[1] =
{
    SIG_OKAY
};

static TCanSigRecOldValSync_48XS mCsr_tOldDat_tSync_48XS =
{
    FALSE                                                   //!< boSignal [[-]] new signal
};

extern TCanSigRecSync_48XS gCsr_tSync_48XS;
static const TRecDat mCsr_actRecDat_tSync_48XS[1] =
{
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Sync_48XS.tCsrInfo_boSignal, (TVoid*)&gCsr_ctRecDat_Sync_48XS.tCsrRng_boSignal,
        (TVoid*)&gCsr_tSync_48XS.boSignal, (TVoid*)&mCsr_tOldDat_tSync_48XS.boSignal, &mCsr_aeRecErr_tSync_48XS[0],
        NULL, NULL
    }
};

static const TCanSigRecRoot mCsr_ctRoot_Sync_48XS =
{
    "Sync_48XS",                                            //!< achName - [STR] Name Sync_48XS
    1,                                                      //!< u8Dlc - [NUM] DLC of Can Message
    0xff,                                                   //!< u8CanByteDflt - [NUM] CAN Message default
    DATA_INTEL,                                             //!< eCanFormat - [NUM] CAN Format
    0xFF,                                                   //!< u8MasterReceiveId - [NUM] Receive Id
    1,                                                      //!< u8RecCnt - [NUM] Count of Recorde
    &mCsr_actRecDat_tSync_48XS[0],                          //!< ptRec - [NUM] Pointer to Record Values
    1,                                                      //!< u16RecNo - [NUM] Record Number
    CSR_STAMP                                               //!< u16Stamp - [NUM] Safety stamp
};

TCanSigRecSync_48XS gCsr_tSync_48XS =
{
    &mCsr_ctRoot_Sync_48XS,                                 //!< *cptRoot [POI] Root connection
    FALSE                                                   //!< boSignal [[-]] new signal
};

const TCanSigRecVal_SRDO2_48XS gCsr_ctRecDat_SRDO2_48XS =
{
    //!< NacelleBasketLeftSideSensor1
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TUINT16, TUINT16, 0, 16, 0, 0, 1, 1 }, 
     { U16_MIN, U16_MAX, 0, 0 },
    //!< NacelleBasketLeftSideSensor2
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TUINT16, TUINT16, 16, 16, 0, 0, 1, 1 }, 
     { U16_MIN, U16_MAX, 0, 0 },
    //!< LowSectorPendularSensor
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TUINT16, TUINT16, 32, 16, 0, 0, 1, 1 }, 
     { U16_MIN, U16_MAX, 0, 0 },
    //!< AdvanceAxisJoystick
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TUINT16, TUINT16, 48, 16, 0, 0, 1, 1 }, 
     { U16_MIN, U16_MAX, 0, 0 }
};

static ESigSta mCsr_aeRecErr_tSRDO2_48XS[4] =
{
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY
};

static TCanSigRecOldValSRDO2_48XS mCsr_tOldDat_tSRDO2_48XS =
{
    0,                                                      //!< u16NacelleBasketLeftSideSensor1 [[-]] new signal
    0,                                                      //!< u16NacelleBasketLeftSideSensor2 [[-]] new signal
    0,                                                      //!< u16LowSectorPendularSensor [[-]] new signal
    0                                                       //!< u16AdvanceAxisJoystick [[-]] new signal
};

extern TCanSigRecSRDO2_48XS gCsr_tSRDO2_48XS;
static const TRecDat mCsr_actRecDat_tSRDO2_48XS[4] =
{
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_SRDO2_48XS.tCsrInfo_u16NacelleBasketLeftSideSensor1, (TVoid*)&gCsr_ctRecDat_SRDO2_48XS.tCsrRng_u16NacelleBasketLeftSideSensor1,
        (TVoid*)&gCsr_tSRDO2_48XS.u16NacelleBasketLeftSideSensor1, (TVoid*)&mCsr_tOldDat_tSRDO2_48XS.u16NacelleBasketLeftSideSensor1, &mCsr_aeRecErr_tSRDO2_48XS[0],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_SRDO2_48XS.tCsrInfo_u16NacelleBasketLeftSideSensor2, (TVoid*)&gCsr_ctRecDat_SRDO2_48XS.tCsrRng_u16NacelleBasketLeftSideSensor2,
        (TVoid*)&gCsr_tSRDO2_48XS.u16NacelleBasketLeftSideSensor2, (TVoid*)&mCsr_tOldDat_tSRDO2_48XS.u16NacelleBasketLeftSideSensor2, &mCsr_aeRecErr_tSRDO2_48XS[1],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_SRDO2_48XS.tCsrInfo_u16LowSectorPendularSensor, (TVoid*)&gCsr_ctRecDat_SRDO2_48XS.tCsrRng_u16LowSectorPendularSensor,
        (TVoid*)&gCsr_tSRDO2_48XS.u16LowSectorPendularSensor, (TVoid*)&mCsr_tOldDat_tSRDO2_48XS.u16LowSectorPendularSensor, &mCsr_aeRecErr_tSRDO2_48XS[2],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_SRDO2_48XS.tCsrInfo_u16AdvanceAxisJoystick, (TVoid*)&gCsr_ctRecDat_SRDO2_48XS.tCsrRng_u16AdvanceAxisJoystick,
        (TVoid*)&gCsr_tSRDO2_48XS.u16AdvanceAxisJoystick, (TVoid*)&mCsr_tOldDat_tSRDO2_48XS.u16AdvanceAxisJoystick, &mCsr_aeRecErr_tSRDO2_48XS[3],
        NULL, NULL
    }
};

static const TCanSigRecRoot mCsr_ctRoot_SRDO2_48XS =
{
    "SRDO2_48XS",                                           //!< achName - [STR] Name SRDO2_48XS
    8,                                                      //!< u8Dlc - [NUM] DLC of Can Message
    0xff,                                                   //!< u8CanByteDflt - [NUM] CAN Message default
    DATA_INTEL,                                             //!< eCanFormat - [NUM] CAN Format
    0xFF,                                                   //!< u8MasterReceiveId - [NUM] Receive Id
    4,                                                      //!< u8RecCnt - [NUM] Count of Recorde
    &mCsr_actRecDat_tSRDO2_48XS[0],                         //!< ptRec - [NUM] Pointer to Record Values
    2,                                                      //!< u16RecNo - [NUM] Record Number
    CSR_STAMP                                               //!< u16Stamp - [NUM] Safety stamp
};

TCanSigRecSRDO2_48XS gCsr_tSRDO2_48XS =
{
    &mCsr_ctRoot_SRDO2_48XS,                                //!< *cptRoot [POI] Root connection
    (((0 * 1)/1)+0),                                        //!< u16NacelleBasketLeftSideSensor1 [[-]] new signal
    (((0 * 1)/1)+0),                                        //!< u16NacelleBasketLeftSideSensor2 [[-]] new signal
    (((0 * 1)/1)+0),                                        //!< u16LowSectorPendularSensor [[-]] new signal
    (((0 * 1)/1)+0)                                         //!< u16AdvanceAxisJoystick [[-]] new signal
};

const TCanSigRecVal_SRDO3_48XS gCsr_ctRecDat_SRDO3_48XS =
{
    //!< DeltaArmJystckCenteredTelesc
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 0, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< ArrowJoystickCenteredTurret
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 1, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< CenteredAdvanceJoystick
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 2, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< DeadManPedal
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 3, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< PressenceInNacelleSensor1
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 4, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< PressenceInNacelleSensor2
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 5, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Gachette
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 6, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Klaxon
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 7, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< StopMotorButton
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 8, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< AuthorizationWorkKey
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 9, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< EtallonnageJoystickButton
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 10, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< ClosePortillon
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 11, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< BatterieVoltage48Xs
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TUINT16, TUINT16, 16, 16, 0, 0, 1, 1 }, 
     { U16_MIN, U16_MAX, 0, 0 }
};

static ESigSta mCsr_aeRecErr_tSRDO3_48XS[13] =
{
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY
};

static TCanSigRecOldValSRDO3_48XS mCsr_tOldDat_tSRDO3_48XS =
{
    FALSE,                                                  //!< boDeltaArmJystckCenteredTelesc [[-]] new signal
    FALSE,                                                  //!< boArrowJoystickCenteredTurret [[-]] new signal
    FALSE,                                                  //!< boCenteredAdvanceJoystick [[-]] new signal
    FALSE,                                                  //!< boDeadManPedal [[-]] new signal
    FALSE,                                                  //!< boPressenceInNacelleSensor1 [[-]] new signal
    FALSE,                                                  //!< boPressenceInNacelleSensor2 [[-]] new signal
    FALSE,                                                  //!< boGachette [[-]] new signal
    FALSE,                                                  //!< boKlaxon [[-]] new signal
    FALSE,                                                  //!< boStopMotorButton [[-]] new signal
    FALSE,                                                  //!< boAuthorizationWorkKey [[-]] new signal
    FALSE,                                                  //!< boEtallonnageJoystickButton [[-]] new signal
    FALSE,                                                  //!< boClosePortillon [[-]] new signal
    0                                                       //!< u16BatterieVoltage48Xs [[-]] new signal
};

extern TCanSigRecSRDO3_48XS gCsr_tSRDO3_48XS;
static const TRecDat mCsr_actRecDat_tSRDO3_48XS[13] =
{
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_SRDO3_48XS.tCsrInfo_boDeltaArmJystckCenteredTelesc, (TVoid*)&gCsr_ctRecDat_SRDO3_48XS.tCsrRng_boDeltaArmJystckCenteredTelesc,
        (TVoid*)&gCsr_tSRDO3_48XS.boDeltaArmJystckCenteredTelesc, (TVoid*)&mCsr_tOldDat_tSRDO3_48XS.boDeltaArmJystckCenteredTelesc, &mCsr_aeRecErr_tSRDO3_48XS[0],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_SRDO3_48XS.tCsrInfo_boArrowJoystickCenteredTurret, (TVoid*)&gCsr_ctRecDat_SRDO3_48XS.tCsrRng_boArrowJoystickCenteredTurret,
        (TVoid*)&gCsr_tSRDO3_48XS.boArrowJoystickCenteredTurret, (TVoid*)&mCsr_tOldDat_tSRDO3_48XS.boArrowJoystickCenteredTurret, &mCsr_aeRecErr_tSRDO3_48XS[1],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_SRDO3_48XS.tCsrInfo_boCenteredAdvanceJoystick, (TVoid*)&gCsr_ctRecDat_SRDO3_48XS.tCsrRng_boCenteredAdvanceJoystick,
        (TVoid*)&gCsr_tSRDO3_48XS.boCenteredAdvanceJoystick, (TVoid*)&mCsr_tOldDat_tSRDO3_48XS.boCenteredAdvanceJoystick, &mCsr_aeRecErr_tSRDO3_48XS[2],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_SRDO3_48XS.tCsrInfo_boDeadManPedal, (TVoid*)&gCsr_ctRecDat_SRDO3_48XS.tCsrRng_boDeadManPedal,
        (TVoid*)&gCsr_tSRDO3_48XS.boDeadManPedal, (TVoid*)&mCsr_tOldDat_tSRDO3_48XS.boDeadManPedal, &mCsr_aeRecErr_tSRDO3_48XS[3],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_SRDO3_48XS.tCsrInfo_boPressenceInNacelleSensor1, (TVoid*)&gCsr_ctRecDat_SRDO3_48XS.tCsrRng_boPressenceInNacelleSensor1,
        (TVoid*)&gCsr_tSRDO3_48XS.boPressenceInNacelleSensor1, (TVoid*)&mCsr_tOldDat_tSRDO3_48XS.boPressenceInNacelleSensor1, &mCsr_aeRecErr_tSRDO3_48XS[4],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_SRDO3_48XS.tCsrInfo_boPressenceInNacelleSensor2, (TVoid*)&gCsr_ctRecDat_SRDO3_48XS.tCsrRng_boPressenceInNacelleSensor2,
        (TVoid*)&gCsr_tSRDO3_48XS.boPressenceInNacelleSensor2, (TVoid*)&mCsr_tOldDat_tSRDO3_48XS.boPressenceInNacelleSensor2, &mCsr_aeRecErr_tSRDO3_48XS[5],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_SRDO3_48XS.tCsrInfo_boGachette, (TVoid*)&gCsr_ctRecDat_SRDO3_48XS.tCsrRng_boGachette,
        (TVoid*)&gCsr_tSRDO3_48XS.boGachette, (TVoid*)&mCsr_tOldDat_tSRDO3_48XS.boGachette, &mCsr_aeRecErr_tSRDO3_48XS[6],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_SRDO3_48XS.tCsrInfo_boKlaxon, (TVoid*)&gCsr_ctRecDat_SRDO3_48XS.tCsrRng_boKlaxon,
        (TVoid*)&gCsr_tSRDO3_48XS.boKlaxon, (TVoid*)&mCsr_tOldDat_tSRDO3_48XS.boKlaxon, &mCsr_aeRecErr_tSRDO3_48XS[7],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_SRDO3_48XS.tCsrInfo_boStopMotorButton, (TVoid*)&gCsr_ctRecDat_SRDO3_48XS.tCsrRng_boStopMotorButton,
        (TVoid*)&gCsr_tSRDO3_48XS.boStopMotorButton, (TVoid*)&mCsr_tOldDat_tSRDO3_48XS.boStopMotorButton, &mCsr_aeRecErr_tSRDO3_48XS[8],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_SRDO3_48XS.tCsrInfo_boAuthorizationWorkKey, (TVoid*)&gCsr_ctRecDat_SRDO3_48XS.tCsrRng_boAuthorizationWorkKey,
        (TVoid*)&gCsr_tSRDO3_48XS.boAuthorizationWorkKey, (TVoid*)&mCsr_tOldDat_tSRDO3_48XS.boAuthorizationWorkKey, &mCsr_aeRecErr_tSRDO3_48XS[9],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_SRDO3_48XS.tCsrInfo_boEtallonnageJoystickButton, (TVoid*)&gCsr_ctRecDat_SRDO3_48XS.tCsrRng_boEtallonnageJoystickButton,
        (TVoid*)&gCsr_tSRDO3_48XS.boEtallonnageJoystickButton, (TVoid*)&mCsr_tOldDat_tSRDO3_48XS.boEtallonnageJoystickButton, &mCsr_aeRecErr_tSRDO3_48XS[10],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_SRDO3_48XS.tCsrInfo_boClosePortillon, (TVoid*)&gCsr_ctRecDat_SRDO3_48XS.tCsrRng_boClosePortillon,
        (TVoid*)&gCsr_tSRDO3_48XS.boClosePortillon, (TVoid*)&mCsr_tOldDat_tSRDO3_48XS.boClosePortillon, &mCsr_aeRecErr_tSRDO3_48XS[11],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_SRDO3_48XS.tCsrInfo_u16BatterieVoltage48Xs, (TVoid*)&gCsr_ctRecDat_SRDO3_48XS.tCsrRng_u16BatterieVoltage48Xs,
        (TVoid*)&gCsr_tSRDO3_48XS.u16BatterieVoltage48Xs, (TVoid*)&mCsr_tOldDat_tSRDO3_48XS.u16BatterieVoltage48Xs, &mCsr_aeRecErr_tSRDO3_48XS[12],
        NULL, NULL
    }
};

static const TCanSigRecRoot mCsr_ctRoot_SRDO3_48XS =
{
    "SRDO3_48XS",                                           //!< achName - [STR] Name SRDO3_48XS
    8,                                                      //!< u8Dlc - [NUM] DLC of Can Message
    0xff,                                                   //!< u8CanByteDflt - [NUM] CAN Message default
    DATA_INTEL,                                             //!< eCanFormat - [NUM] CAN Format
    0xFF,                                                   //!< u8MasterReceiveId - [NUM] Receive Id
    13,                                                     //!< u8RecCnt - [NUM] Count of Recorde
    &mCsr_actRecDat_tSRDO3_48XS[0],                         //!< ptRec - [NUM] Pointer to Record Values
    3,                                                      //!< u16RecNo - [NUM] Record Number
    CSR_STAMP                                               //!< u16Stamp - [NUM] Safety stamp
};

TCanSigRecSRDO3_48XS gCsr_tSRDO3_48XS =
{
    &mCsr_ctRoot_SRDO3_48XS,                                //!< *cptRoot [POI] Root connection
    FALSE,                                                  //!< boDeltaArmJystckCenteredTelesc [[-]] new signal
    FALSE,                                                  //!< boArrowJoystickCenteredTurret [[-]] new signal
    FALSE,                                                  //!< boCenteredAdvanceJoystick [[-]] new signal
    FALSE,                                                  //!< boDeadManPedal [[-]] new signal
    FALSE,                                                  //!< boPressenceInNacelleSensor1 [[-]] new signal
    FALSE,                                                  //!< boPressenceInNacelleSensor2 [[-]] new signal
    FALSE,                                                  //!< boGachette [[-]] new signal
    FALSE,                                                  //!< boKlaxon [[-]] new signal
    FALSE,                                                  //!< boStopMotorButton [[-]] new signal
    FALSE,                                                  //!< boAuthorizationWorkKey [[-]] new signal
    FALSE,                                                  //!< boEtallonnageJoystickButton [[-]] new signal
    FALSE,                                                  //!< boClosePortillon [[-]] new signal
    (((0 * 1)/1)+0)                                         //!< u16BatterieVoltage48Xs [[-]] new signal
};

const TCanSigRecVal_SRDO1_48XS gCsr_ctRecDat_SRDO1_48XS =
{
    //!< Overload1
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TUINT16, TUINT16, 0, 16, 0, 0, 1, 1 }, 
     { U16_MIN, U16_MAX, 0, 0 },
    //!< Overload2
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TUINT16, TUINT16, 16, 16, 0, 0, 1, 1 }, 
     { U16_MIN, U16_MAX, 0, 0 },
    //!< NacelleBasketRightSideSensor1
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TUINT16, TUINT16, 32, 16, 0, 0, 1, 1 }, 
     { U16_MIN, U16_MAX, 0, 0 },
    //!< NacelleBasketRightSideSensor2
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TUINT16, TUINT16, 48, 16, 0, 0, 1, 1 }, 
     { U16_MIN, U16_MAX, 0, 0 }
};

static ESigSta mCsr_aeRecErr_tSRDO1_48XS[4] =
{
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY
};

static TCanSigRecOldValSRDO1_48XS mCsr_tOldDat_tSRDO1_48XS =
{
    0,                                                      //!< u16Overload1 [[-]] new signal
    0,                                                      //!< u16Overload2 [[-]] new signal
    0,                                                      //!< u16NacelleBasketRightSideSensor1 [[-]] new signal
    0                                                       //!< u16NacelleBasketRightSideSensor2 [[-]] new signal
};

extern TCanSigRecSRDO1_48XS gCsr_tSRDO1_48XS;
static const TRecDat mCsr_actRecDat_tSRDO1_48XS[4] =
{
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_SRDO1_48XS.tCsrInfo_u16Overload1, (TVoid*)&gCsr_ctRecDat_SRDO1_48XS.tCsrRng_u16Overload1,
        (TVoid*)&gCsr_tSRDO1_48XS.u16Overload1, (TVoid*)&mCsr_tOldDat_tSRDO1_48XS.u16Overload1, &mCsr_aeRecErr_tSRDO1_48XS[0],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_SRDO1_48XS.tCsrInfo_u16Overload2, (TVoid*)&gCsr_ctRecDat_SRDO1_48XS.tCsrRng_u16Overload2,
        (TVoid*)&gCsr_tSRDO1_48XS.u16Overload2, (TVoid*)&mCsr_tOldDat_tSRDO1_48XS.u16Overload2, &mCsr_aeRecErr_tSRDO1_48XS[1],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_SRDO1_48XS.tCsrInfo_u16NacelleBasketRightSideSensor1, (TVoid*)&gCsr_ctRecDat_SRDO1_48XS.tCsrRng_u16NacelleBasketRightSideSensor1,
        (TVoid*)&gCsr_tSRDO1_48XS.u16NacelleBasketRightSideSensor1, (TVoid*)&mCsr_tOldDat_tSRDO1_48XS.u16NacelleBasketRightSideSensor1, &mCsr_aeRecErr_tSRDO1_48XS[2],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_SRDO1_48XS.tCsrInfo_u16NacelleBasketRightSideSensor2, (TVoid*)&gCsr_ctRecDat_SRDO1_48XS.tCsrRng_u16NacelleBasketRightSideSensor2,
        (TVoid*)&gCsr_tSRDO1_48XS.u16NacelleBasketRightSideSensor2, (TVoid*)&mCsr_tOldDat_tSRDO1_48XS.u16NacelleBasketRightSideSensor2, &mCsr_aeRecErr_tSRDO1_48XS[3],
        NULL, NULL
    }
};

static const TCanSigRecRoot mCsr_ctRoot_SRDO1_48XS =
{
    "SRDO1_48XS",                                           //!< achName - [STR] Name SRDO1_48XS
    8,                                                      //!< u8Dlc - [NUM] DLC of Can Message
    0xff,                                                   //!< u8CanByteDflt - [NUM] CAN Message default
    DATA_INTEL,                                             //!< eCanFormat - [NUM] CAN Format
    0xFF,                                                   //!< u8MasterReceiveId - [NUM] Receive Id
    4,                                                      //!< u8RecCnt - [NUM] Count of Recorde
    &mCsr_actRecDat_tSRDO1_48XS[0],                         //!< ptRec - [NUM] Pointer to Record Values
    4,                                                      //!< u16RecNo - [NUM] Record Number
    CSR_STAMP                                               //!< u16Stamp - [NUM] Safety stamp
};

TCanSigRecSRDO1_48XS gCsr_tSRDO1_48XS =
{
    &mCsr_ctRoot_SRDO1_48XS,                                //!< *cptRoot [POI] Root connection
    (((0 * 1)/1)+0),                                        //!< u16Overload1 [[-]] new signal
    (((0 * 1)/1)+0),                                        //!< u16Overload2 [[-]] new signal
    (((0 * 1)/1)+0),                                        //!< u16NacelleBasketRightSideSensor1 [[-]] new signal
    (((0 * 1)/1)+0)                                         //!< u16NacelleBasketRightSideSensor2 [[-]] new signal
};

const TCanSigRecVal_Msg1RcvFromOpus gCsr_ctRecDat_Msg1RcvFromOpus =
{
    //!< gLifeByte
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TUINT8, TUINT8, 0, 8, 0, 0, 1, 1 }, 
     { 0, 255, 0, 0 },
    //!< gDelta_Arm_Move_Up
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 8, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gDelta_Arm_Move_Down
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 9, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gArrow_Arm_Move_Up
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 10, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gArrow_Arm_Move_Down
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 11, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gPendular_Arm_Move_Up
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 12, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gPendular_Arm_Move_Down
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 13, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gTelescope_Move_Out
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 14, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gTelescope_Move_In
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 15, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gBasket_Inclinaison_Move_Up
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 16, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gBasket_Inclinaison_Move_Down
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 17, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gTurret_Rotate_ClockWise
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 18, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gTurret_Rotate_Cntr_ClockWise
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 19, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gBasket_Rotation_Move_Up
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 20, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gBasket_Rotation_Move_Down
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 21, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gKeyRpmSelect
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 22, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gKeyRpmOff
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 23, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gForcingWhiteRaillight
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 24, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gForcingNeons
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 25, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gKeyCalibMin
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 26, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gKeyCalibMax
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 27, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gKeyCalibValid
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 28, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gKeyCalibMax2
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 29, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gKeySlopeLgReset
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 30, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gKeySlopeTrReset
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 31, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< KeyYesReloadWithGenerator
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 32, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< KeyNoReloadWithGenerator
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 33, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gActivePageOpus
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TUINT8, TUINT8, 48, 8, 0, 0, 1, 1 }, 
     { U8_MIN, U8_MAX, 0, 0 },
    //!< gElementChoice
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TUINT8, TUINT8, 56, 8, 0, 0, 1, 1 }, 
     { U8_MIN, U8_MAX, 0, 0 }
};

static ESigSta mCsr_aeRecErr_tMsg1RcvFromOpus[29] =
{
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY
};

static TCanSigRecOldValMsg1RcvFromOpus mCsr_tOldDat_tMsg1RcvFromOpus =
{
    0,                                                      //!< u8gLifeByte [[-]] Life byte sent to the controllers
    FALSE,                                                  //!< bogDelta_Arm_Move_Up [[-]] Delta arm move up button is pressed
    FALSE,                                                  //!< bogDelta_Arm_Move_Down [[-]] Delta arm move down button is pressed
    FALSE,                                                  //!< bogArrow_Arm_Move_Up [[-]] Arrow arm move up button is pressed
    FALSE,                                                  //!< bogArrow_Arm_Move_Down [[-]] Arrow arm move down button is pressed
    FALSE,                                                  //!< bogPendular_Arm_Move_Up [[-]] Pendular move up button is pressed
    FALSE,                                                  //!< bogPendular_Arm_Move_Down [[-]] Pendular move down button is pressed
    FALSE,                                                  //!< bogTelescope_Move_Out [[-]] Telescope move out button is pressed
    FALSE,                                                  //!< bogTelescope_Move_In [[-]] Telescope move in button is pressed
    FALSE,                                                  //!< bogBasket_Inclinaison_Move_Up [[-]] Basket inclinaison move up button is pressed
    FALSE,                                                  //!< bogBasket_Inclinaison_Move_Down [[-]] Basket inclinaison move down button is pressed
    FALSE,                                                  //!< bogTurret_Rotate_ClockWise [[-]] Rotate turret clockwise button is pressed
    FALSE,                                                  //!< bogTurret_Rotate_Cntr_ClockWise [[-]] Rotate turret counter clockwise button is pressed
    FALSE,                                                  //!< bogBasket_Rotation_Move_Up [[-]] Basket rotation move up button is pressed
    FALSE,                                                  //!< bogBasket_Rotation_Move_Down [[-]] Basket rotation move down button is pressed
    FALSE,                                                  //!< bogKeyRpmSelect [[-]] Activation silent motor mode
    FALSE,                                                  //!< bogKeyRpmOff [[-]] Activation forcing motor mode
    FALSE,                                                  //!< bogForcingWhiteRaillight [[-]] Activation forcing White Rail lights Front and Rear
    FALSE,                                                  //!< bogForcingNeons [[-]] Activation neons
    FALSE,                                                  //!< bogKeyCalibMin [[-]] Key Calibration Min
    FALSE,                                                  //!< bogKeyCalibMax [[-]] Key Calibration Max
    FALSE,                                                  //!< bogKeyCalibValid [[-]] Key Calibration Validation
    FALSE,                                                  //!< bogKeyCalibMax2 [[-]] Key Calibration Max (-180°)
    FALSE,                                                  //!< bogKeySlopeLgReset [[-]] Key Slope Longitudinal reset
    FALSE,                                                  //!< bogKeySlopeTrReset [[-]] Key Slope Transversal reset
    FALSE,                                                  //!< boKeyYesReloadWithGenerator [[-]] new signal
    FALSE,                                                  //!< boKeyNoReloadWithGenerator [[-]] new signal
    0,                                                      //!< u8gActivePageOpus [[-]] Page active Ecran Opus
    0                                                       //!< u8gElementChoice [[-]] Element choice 1=Telescope; 2=Arrow arm; 3=Delta arm; 4=Turret; 
};

extern TCanSigRecMsg1RcvFromOpus gCsr_tMsg1RcvFromOpus;
static const TRecDat mCsr_actRecDat_tMsg1RcvFromOpus[29] =
{
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1RcvFromOpus.tCsrInfo_u8gLifeByte, (TVoid*)&gCsr_ctRecDat_Msg1RcvFromOpus.tCsrRng_u8gLifeByte,
        (TVoid*)&gCsr_tMsg1RcvFromOpus.u8gLifeByte, (TVoid*)&mCsr_tOldDat_tMsg1RcvFromOpus.u8gLifeByte, &mCsr_aeRecErr_tMsg1RcvFromOpus[0],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1RcvFromOpus.tCsrInfo_bogDelta_Arm_Move_Up, (TVoid*)&gCsr_ctRecDat_Msg1RcvFromOpus.tCsrRng_bogDelta_Arm_Move_Up,
        (TVoid*)&gCsr_tMsg1RcvFromOpus.bogDelta_Arm_Move_Up, (TVoid*)&mCsr_tOldDat_tMsg1RcvFromOpus.bogDelta_Arm_Move_Up, &mCsr_aeRecErr_tMsg1RcvFromOpus[1],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1RcvFromOpus.tCsrInfo_bogDelta_Arm_Move_Down, (TVoid*)&gCsr_ctRecDat_Msg1RcvFromOpus.tCsrRng_bogDelta_Arm_Move_Down,
        (TVoid*)&gCsr_tMsg1RcvFromOpus.bogDelta_Arm_Move_Down, (TVoid*)&mCsr_tOldDat_tMsg1RcvFromOpus.bogDelta_Arm_Move_Down, &mCsr_aeRecErr_tMsg1RcvFromOpus[2],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1RcvFromOpus.tCsrInfo_bogArrow_Arm_Move_Up, (TVoid*)&gCsr_ctRecDat_Msg1RcvFromOpus.tCsrRng_bogArrow_Arm_Move_Up,
        (TVoid*)&gCsr_tMsg1RcvFromOpus.bogArrow_Arm_Move_Up, (TVoid*)&mCsr_tOldDat_tMsg1RcvFromOpus.bogArrow_Arm_Move_Up, &mCsr_aeRecErr_tMsg1RcvFromOpus[3],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1RcvFromOpus.tCsrInfo_bogArrow_Arm_Move_Down, (TVoid*)&gCsr_ctRecDat_Msg1RcvFromOpus.tCsrRng_bogArrow_Arm_Move_Down,
        (TVoid*)&gCsr_tMsg1RcvFromOpus.bogArrow_Arm_Move_Down, (TVoid*)&mCsr_tOldDat_tMsg1RcvFromOpus.bogArrow_Arm_Move_Down, &mCsr_aeRecErr_tMsg1RcvFromOpus[4],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1RcvFromOpus.tCsrInfo_bogPendular_Arm_Move_Up, (TVoid*)&gCsr_ctRecDat_Msg1RcvFromOpus.tCsrRng_bogPendular_Arm_Move_Up,
        (TVoid*)&gCsr_tMsg1RcvFromOpus.bogPendular_Arm_Move_Up, (TVoid*)&mCsr_tOldDat_tMsg1RcvFromOpus.bogPendular_Arm_Move_Up, &mCsr_aeRecErr_tMsg1RcvFromOpus[5],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1RcvFromOpus.tCsrInfo_bogPendular_Arm_Move_Down, (TVoid*)&gCsr_ctRecDat_Msg1RcvFromOpus.tCsrRng_bogPendular_Arm_Move_Down,
        (TVoid*)&gCsr_tMsg1RcvFromOpus.bogPendular_Arm_Move_Down, (TVoid*)&mCsr_tOldDat_tMsg1RcvFromOpus.bogPendular_Arm_Move_Down, &mCsr_aeRecErr_tMsg1RcvFromOpus[6],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1RcvFromOpus.tCsrInfo_bogTelescope_Move_Out, (TVoid*)&gCsr_ctRecDat_Msg1RcvFromOpus.tCsrRng_bogTelescope_Move_Out,
        (TVoid*)&gCsr_tMsg1RcvFromOpus.bogTelescope_Move_Out, (TVoid*)&mCsr_tOldDat_tMsg1RcvFromOpus.bogTelescope_Move_Out, &mCsr_aeRecErr_tMsg1RcvFromOpus[7],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1RcvFromOpus.tCsrInfo_bogTelescope_Move_In, (TVoid*)&gCsr_ctRecDat_Msg1RcvFromOpus.tCsrRng_bogTelescope_Move_In,
        (TVoid*)&gCsr_tMsg1RcvFromOpus.bogTelescope_Move_In, (TVoid*)&mCsr_tOldDat_tMsg1RcvFromOpus.bogTelescope_Move_In, &mCsr_aeRecErr_tMsg1RcvFromOpus[8],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1RcvFromOpus.tCsrInfo_bogBasket_Inclinaison_Move_Up, (TVoid*)&gCsr_ctRecDat_Msg1RcvFromOpus.tCsrRng_bogBasket_Inclinaison_Move_Up,
        (TVoid*)&gCsr_tMsg1RcvFromOpus.bogBasket_Inclinaison_Move_Up, (TVoid*)&mCsr_tOldDat_tMsg1RcvFromOpus.bogBasket_Inclinaison_Move_Up, &mCsr_aeRecErr_tMsg1RcvFromOpus[9],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1RcvFromOpus.tCsrInfo_bogBasket_Inclinaison_Move_Down, (TVoid*)&gCsr_ctRecDat_Msg1RcvFromOpus.tCsrRng_bogBasket_Inclinaison_Move_Down,
        (TVoid*)&gCsr_tMsg1RcvFromOpus.bogBasket_Inclinaison_Move_Down, (TVoid*)&mCsr_tOldDat_tMsg1RcvFromOpus.bogBasket_Inclinaison_Move_Down, &mCsr_aeRecErr_tMsg1RcvFromOpus[10],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1RcvFromOpus.tCsrInfo_bogTurret_Rotate_ClockWise, (TVoid*)&gCsr_ctRecDat_Msg1RcvFromOpus.tCsrRng_bogTurret_Rotate_ClockWise,
        (TVoid*)&gCsr_tMsg1RcvFromOpus.bogTurret_Rotate_ClockWise, (TVoid*)&mCsr_tOldDat_tMsg1RcvFromOpus.bogTurret_Rotate_ClockWise, &mCsr_aeRecErr_tMsg1RcvFromOpus[11],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1RcvFromOpus.tCsrInfo_bogTurret_Rotate_Cntr_ClockWise, (TVoid*)&gCsr_ctRecDat_Msg1RcvFromOpus.tCsrRng_bogTurret_Rotate_Cntr_ClockWise,
        (TVoid*)&gCsr_tMsg1RcvFromOpus.bogTurret_Rotate_Cntr_ClockWise, (TVoid*)&mCsr_tOldDat_tMsg1RcvFromOpus.bogTurret_Rotate_Cntr_ClockWise, &mCsr_aeRecErr_tMsg1RcvFromOpus[12],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1RcvFromOpus.tCsrInfo_bogBasket_Rotation_Move_Up, (TVoid*)&gCsr_ctRecDat_Msg1RcvFromOpus.tCsrRng_bogBasket_Rotation_Move_Up,
        (TVoid*)&gCsr_tMsg1RcvFromOpus.bogBasket_Rotation_Move_Up, (TVoid*)&mCsr_tOldDat_tMsg1RcvFromOpus.bogBasket_Rotation_Move_Up, &mCsr_aeRecErr_tMsg1RcvFromOpus[13],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1RcvFromOpus.tCsrInfo_bogBasket_Rotation_Move_Down, (TVoid*)&gCsr_ctRecDat_Msg1RcvFromOpus.tCsrRng_bogBasket_Rotation_Move_Down,
        (TVoid*)&gCsr_tMsg1RcvFromOpus.bogBasket_Rotation_Move_Down, (TVoid*)&mCsr_tOldDat_tMsg1RcvFromOpus.bogBasket_Rotation_Move_Down, &mCsr_aeRecErr_tMsg1RcvFromOpus[14],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1RcvFromOpus.tCsrInfo_bogKeyRpmSelect, (TVoid*)&gCsr_ctRecDat_Msg1RcvFromOpus.tCsrRng_bogKeyRpmSelect,
        (TVoid*)&gCsr_tMsg1RcvFromOpus.bogKeyRpmSelect, (TVoid*)&mCsr_tOldDat_tMsg1RcvFromOpus.bogKeyRpmSelect, &mCsr_aeRecErr_tMsg1RcvFromOpus[15],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1RcvFromOpus.tCsrInfo_bogKeyRpmOff, (TVoid*)&gCsr_ctRecDat_Msg1RcvFromOpus.tCsrRng_bogKeyRpmOff,
        (TVoid*)&gCsr_tMsg1RcvFromOpus.bogKeyRpmOff, (TVoid*)&mCsr_tOldDat_tMsg1RcvFromOpus.bogKeyRpmOff, &mCsr_aeRecErr_tMsg1RcvFromOpus[16],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1RcvFromOpus.tCsrInfo_bogForcingWhiteRaillight, (TVoid*)&gCsr_ctRecDat_Msg1RcvFromOpus.tCsrRng_bogForcingWhiteRaillight,
        (TVoid*)&gCsr_tMsg1RcvFromOpus.bogForcingWhiteRaillight, (TVoid*)&mCsr_tOldDat_tMsg1RcvFromOpus.bogForcingWhiteRaillight, &mCsr_aeRecErr_tMsg1RcvFromOpus[17],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1RcvFromOpus.tCsrInfo_bogForcingNeons, (TVoid*)&gCsr_ctRecDat_Msg1RcvFromOpus.tCsrRng_bogForcingNeons,
        (TVoid*)&gCsr_tMsg1RcvFromOpus.bogForcingNeons, (TVoid*)&mCsr_tOldDat_tMsg1RcvFromOpus.bogForcingNeons, &mCsr_aeRecErr_tMsg1RcvFromOpus[18],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1RcvFromOpus.tCsrInfo_bogKeyCalibMin, (TVoid*)&gCsr_ctRecDat_Msg1RcvFromOpus.tCsrRng_bogKeyCalibMin,
        (TVoid*)&gCsr_tMsg1RcvFromOpus.bogKeyCalibMin, (TVoid*)&mCsr_tOldDat_tMsg1RcvFromOpus.bogKeyCalibMin, &mCsr_aeRecErr_tMsg1RcvFromOpus[19],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1RcvFromOpus.tCsrInfo_bogKeyCalibMax, (TVoid*)&gCsr_ctRecDat_Msg1RcvFromOpus.tCsrRng_bogKeyCalibMax,
        (TVoid*)&gCsr_tMsg1RcvFromOpus.bogKeyCalibMax, (TVoid*)&mCsr_tOldDat_tMsg1RcvFromOpus.bogKeyCalibMax, &mCsr_aeRecErr_tMsg1RcvFromOpus[20],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1RcvFromOpus.tCsrInfo_bogKeyCalibValid, (TVoid*)&gCsr_ctRecDat_Msg1RcvFromOpus.tCsrRng_bogKeyCalibValid,
        (TVoid*)&gCsr_tMsg1RcvFromOpus.bogKeyCalibValid, (TVoid*)&mCsr_tOldDat_tMsg1RcvFromOpus.bogKeyCalibValid, &mCsr_aeRecErr_tMsg1RcvFromOpus[21],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1RcvFromOpus.tCsrInfo_bogKeyCalibMax2, (TVoid*)&gCsr_ctRecDat_Msg1RcvFromOpus.tCsrRng_bogKeyCalibMax2,
        (TVoid*)&gCsr_tMsg1RcvFromOpus.bogKeyCalibMax2, (TVoid*)&mCsr_tOldDat_tMsg1RcvFromOpus.bogKeyCalibMax2, &mCsr_aeRecErr_tMsg1RcvFromOpus[22],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1RcvFromOpus.tCsrInfo_bogKeySlopeLgReset, (TVoid*)&gCsr_ctRecDat_Msg1RcvFromOpus.tCsrRng_bogKeySlopeLgReset,
        (TVoid*)&gCsr_tMsg1RcvFromOpus.bogKeySlopeLgReset, (TVoid*)&mCsr_tOldDat_tMsg1RcvFromOpus.bogKeySlopeLgReset, &mCsr_aeRecErr_tMsg1RcvFromOpus[23],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1RcvFromOpus.tCsrInfo_bogKeySlopeTrReset, (TVoid*)&gCsr_ctRecDat_Msg1RcvFromOpus.tCsrRng_bogKeySlopeTrReset,
        (TVoid*)&gCsr_tMsg1RcvFromOpus.bogKeySlopeTrReset, (TVoid*)&mCsr_tOldDat_tMsg1RcvFromOpus.bogKeySlopeTrReset, &mCsr_aeRecErr_tMsg1RcvFromOpus[24],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1RcvFromOpus.tCsrInfo_boKeyYesReloadWithGenerator, (TVoid*)&gCsr_ctRecDat_Msg1RcvFromOpus.tCsrRng_boKeyYesReloadWithGenerator,
        (TVoid*)&gCsr_tMsg1RcvFromOpus.boKeyYesReloadWithGenerator, (TVoid*)&mCsr_tOldDat_tMsg1RcvFromOpus.boKeyYesReloadWithGenerator, &mCsr_aeRecErr_tMsg1RcvFromOpus[25],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1RcvFromOpus.tCsrInfo_boKeyNoReloadWithGenerator, (TVoid*)&gCsr_ctRecDat_Msg1RcvFromOpus.tCsrRng_boKeyNoReloadWithGenerator,
        (TVoid*)&gCsr_tMsg1RcvFromOpus.boKeyNoReloadWithGenerator, (TVoid*)&mCsr_tOldDat_tMsg1RcvFromOpus.boKeyNoReloadWithGenerator, &mCsr_aeRecErr_tMsg1RcvFromOpus[26],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1RcvFromOpus.tCsrInfo_u8gActivePageOpus, (TVoid*)&gCsr_ctRecDat_Msg1RcvFromOpus.tCsrRng_u8gActivePageOpus,
        (TVoid*)&gCsr_tMsg1RcvFromOpus.u8gActivePageOpus, (TVoid*)&mCsr_tOldDat_tMsg1RcvFromOpus.u8gActivePageOpus, &mCsr_aeRecErr_tMsg1RcvFromOpus[27],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1RcvFromOpus.tCsrInfo_u8gElementChoice, (TVoid*)&gCsr_ctRecDat_Msg1RcvFromOpus.tCsrRng_u8gElementChoice,
        (TVoid*)&gCsr_tMsg1RcvFromOpus.u8gElementChoice, (TVoid*)&mCsr_tOldDat_tMsg1RcvFromOpus.u8gElementChoice, &mCsr_aeRecErr_tMsg1RcvFromOpus[28],
        NULL, NULL
    }
};

static const TCanSigRecRoot mCsr_ctRoot_Msg1RcvFromOpus =
{
    "Msg1RcvFromOpus",                                      //!< achName - [STR] Name Msg1RcvFromOpus
    8,                                                      //!< u8Dlc - [NUM] DLC of Can Message
    0x00,                                                   //!< u8CanByteDflt - [NUM] CAN Message default
    DATA_INTEL,                                             //!< eCanFormat - [NUM] CAN Format
    0xFF,                                                   //!< u8MasterReceiveId - [NUM] Receive Id
    29,                                                     //!< u8RecCnt - [NUM] Count of Recorde
    &mCsr_actRecDat_tMsg1RcvFromOpus[0],                    //!< ptRec - [NUM] Pointer to Record Values
    5,                                                      //!< u16RecNo - [NUM] Record Number
    CSR_STAMP                                               //!< u16Stamp - [NUM] Safety stamp
};

TCanSigRecMsg1RcvFromOpus gCsr_tMsg1RcvFromOpus =
{
    &mCsr_ctRoot_Msg1RcvFromOpus,                           //!< *cptRoot [POI] Root connection
    (((0 * 1)/1)+0),                                        //!< u8gLifeByte [[-]] Life byte sent to the controllers
    FALSE,                                                  //!< bogDelta_Arm_Move_Up [[-]] Delta arm move up button is pressed
    FALSE,                                                  //!< bogDelta_Arm_Move_Down [[-]] Delta arm move down button is pressed
    FALSE,                                                  //!< bogArrow_Arm_Move_Up [[-]] Arrow arm move up button is pressed
    FALSE,                                                  //!< bogArrow_Arm_Move_Down [[-]] Arrow arm move down button is pressed
    FALSE,                                                  //!< bogPendular_Arm_Move_Up [[-]] Pendular move up button is pressed
    FALSE,                                                  //!< bogPendular_Arm_Move_Down [[-]] Pendular move down button is pressed
    FALSE,                                                  //!< bogTelescope_Move_Out [[-]] Telescope move out button is pressed
    FALSE,                                                  //!< bogTelescope_Move_In [[-]] Telescope move in button is pressed
    FALSE,                                                  //!< bogBasket_Inclinaison_Move_Up [[-]] Basket inclinaison move up button is pressed
    FALSE,                                                  //!< bogBasket_Inclinaison_Move_Down [[-]] Basket inclinaison move down button is pressed
    FALSE,                                                  //!< bogTurret_Rotate_ClockWise [[-]] Rotate turret clockwise button is pressed
    FALSE,                                                  //!< bogTurret_Rotate_Cntr_ClockWise [[-]] Rotate turret counter clockwise button is pressed
    FALSE,                                                  //!< bogBasket_Rotation_Move_Up [[-]] Basket rotation move up button is pressed
    FALSE,                                                  //!< bogBasket_Rotation_Move_Down [[-]] Basket rotation move down button is pressed
    FALSE,                                                  //!< bogKeyRpmSelect [[-]] Activation silent motor mode
    FALSE,                                                  //!< bogKeyRpmOff [[-]] Activation forcing motor mode
    FALSE,                                                  //!< bogForcingWhiteRaillight [[-]] Activation forcing White Rail lights Front and Rear
    FALSE,                                                  //!< bogForcingNeons [[-]] Activation neons
    FALSE,                                                  //!< bogKeyCalibMin [[-]] Key Calibration Min
    FALSE,                                                  //!< bogKeyCalibMax [[-]] Key Calibration Max
    FALSE,                                                  //!< bogKeyCalibValid [[-]] Key Calibration Validation
    FALSE,                                                  //!< bogKeyCalibMax2 [[-]] Key Calibration Max (-180°)
    FALSE,                                                  //!< bogKeySlopeLgReset [[-]] Key Slope Longitudinal reset
    FALSE,                                                  //!< bogKeySlopeTrReset [[-]] Key Slope Transversal reset
    FALSE,                                                  //!< boKeyYesReloadWithGenerator [[-]] new signal
    FALSE,                                                  //!< boKeyNoReloadWithGenerator [[-]] new signal
    (((0 * 1)/1)+0),                                        //!< u8gActivePageOpus [[-]] Page active Ecran Opus
    (((0 * 1)/1)+0)                                         //!< u8gElementChoice [[-]] Element choice 1=Telescope; 2=Arrow arm; 3=Delta arm; 4=Turret; 
};

const TCanSigRecVal_PDO1_48XS gCsr_ctRecDat_PDO1_48XS =
{
    //!< UpInclinaisonBasket
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TUINT16, TUINT16, 0, 16, 0, 0, 1, 1 }, 
     { U16_MIN, U16_MAX, 0, 0 },
    //!< DownInclinaisonBasket
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TUINT16, TUINT16, 16, 16, 0, 0, 1, 1 }, 
     { U16_MIN, U16_MAX, 0, 0 },
    //!< UpPendular
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TUINT16, TUINT16, 32, 16, 0, 0, 1, 1 }, 
     { U16_MIN, U16_MAX, 0, 0 },
    //!< DownPendular
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TUINT16, TUINT16, 48, 16, 0, 0, 1, 1 }, 
     { U16_MIN, U16_MAX, 0, 0 }
};

static ESigSta mCsr_aeRecErr_tPDO1_48XS[4] =
{
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY
};

static TCanSigRecOldValPDO1_48XS mCsr_tOldDat_tPDO1_48XS =
{
    0,                                                      //!< u16UpInclinaisonBasket [[-]] new signal
    0,                                                      //!< u16DownInclinaisonBasket [[-]] new signal
    0,                                                      //!< u16UpPendular [[-]] new signal
    0                                                       //!< u16DownPendular [[-]] new signal
};

extern TCanSigRecPDO1_48XS gCsr_tPDO1_48XS;
static const TRecDat mCsr_actRecDat_tPDO1_48XS[4] =
{
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_PDO1_48XS.tCsrInfo_u16UpInclinaisonBasket, (TVoid*)&gCsr_ctRecDat_PDO1_48XS.tCsrRng_u16UpInclinaisonBasket,
        (TVoid*)&gCsr_tPDO1_48XS.u16UpInclinaisonBasket, (TVoid*)&mCsr_tOldDat_tPDO1_48XS.u16UpInclinaisonBasket, &mCsr_aeRecErr_tPDO1_48XS[0],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_PDO1_48XS.tCsrInfo_u16DownInclinaisonBasket, (TVoid*)&gCsr_ctRecDat_PDO1_48XS.tCsrRng_u16DownInclinaisonBasket,
        (TVoid*)&gCsr_tPDO1_48XS.u16DownInclinaisonBasket, (TVoid*)&mCsr_tOldDat_tPDO1_48XS.u16DownInclinaisonBasket, &mCsr_aeRecErr_tPDO1_48XS[1],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_PDO1_48XS.tCsrInfo_u16UpPendular, (TVoid*)&gCsr_ctRecDat_PDO1_48XS.tCsrRng_u16UpPendular,
        (TVoid*)&gCsr_tPDO1_48XS.u16UpPendular, (TVoid*)&mCsr_tOldDat_tPDO1_48XS.u16UpPendular, &mCsr_aeRecErr_tPDO1_48XS[2],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_PDO1_48XS.tCsrInfo_u16DownPendular, (TVoid*)&gCsr_ctRecDat_PDO1_48XS.tCsrRng_u16DownPendular,
        (TVoid*)&gCsr_tPDO1_48XS.u16DownPendular, (TVoid*)&mCsr_tOldDat_tPDO1_48XS.u16DownPendular, &mCsr_aeRecErr_tPDO1_48XS[3],
        NULL, NULL
    }
};

static const TCanSigRecRoot mCsr_ctRoot_PDO1_48XS =
{
    "PDO1_48XS",                                            //!< achName - [STR] Name PDO1_48XS
    8,                                                      //!< u8Dlc - [NUM] DLC of Can Message
    0xff,                                                   //!< u8CanByteDflt - [NUM] CAN Message default
    DATA_INTEL,                                             //!< eCanFormat - [NUM] CAN Format
    0xFF,                                                   //!< u8MasterReceiveId - [NUM] Receive Id
    4,                                                      //!< u8RecCnt - [NUM] Count of Recorde
    &mCsr_actRecDat_tPDO1_48XS[0],                          //!< ptRec - [NUM] Pointer to Record Values
    6,                                                      //!< u16RecNo - [NUM] Record Number
    CSR_STAMP                                               //!< u16Stamp - [NUM] Safety stamp
};

TCanSigRecPDO1_48XS gCsr_tPDO1_48XS =
{
    &mCsr_ctRoot_PDO1_48XS,                                 //!< *cptRoot [POI] Root connection
    (((0 * 1)/1)+0),                                        //!< u16UpInclinaisonBasket [[-]] new signal
    (((0 * 1)/1)+0),                                        //!< u16DownInclinaisonBasket [[-]] new signal
    (((0 * 1)/1)+0),                                        //!< u16UpPendular [[-]] new signal
    (((0 * 1)/1)+0)                                         //!< u16DownPendular [[-]] new signal
};

const TCanSigRecVal_TelescopeFrame1 gCsr_ctRecDat_TelescopeFrame1 =
{
    //!< AngleTelescope1
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TUINT16, TUINT16, 0, 16, 0, 0, 1, 1 }, 
     { U16_MIN, U16_MAX, 0, 0 },
    //!< ErrorTelescope1
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TUINT8, TUINT8, 16, 8, 0, 0, 1, 1 }, 
     { U8_MIN, U8_MAX, 0, 0 },
    //!< LenghtTelescope1
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TUINT16, TUINT16, 32, 16, 0, 0, 1, 1 }, 
     { U16_MIN, U16_MAX, 0, 0 }
};

static ESigSta mCsr_aeRecErr_tTelescopeFrame1[3] =
{
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY
};

static TCanSigRecOldValTelescopeFrame1 mCsr_tOldDat_tTelescopeFrame1 =
{
    0,                                                      //!< u16AngleTelescope1 [[-]] new signal
    0,                                                      //!< u8ErrorTelescope1 [[-]] new signal
    0                                                       //!< u16LenghtTelescope1 [[-]] new signal
};

extern TCanSigRecTelescopeFrame1 gCsr_tTelescopeFrame1;
static const TRecDat mCsr_actRecDat_tTelescopeFrame1[3] =
{
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_TelescopeFrame1.tCsrInfo_u16AngleTelescope1, (TVoid*)&gCsr_ctRecDat_TelescopeFrame1.tCsrRng_u16AngleTelescope1,
        (TVoid*)&gCsr_tTelescopeFrame1.u16AngleTelescope1, (TVoid*)&mCsr_tOldDat_tTelescopeFrame1.u16AngleTelescope1, &mCsr_aeRecErr_tTelescopeFrame1[0],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_TelescopeFrame1.tCsrInfo_u8ErrorTelescope1, (TVoid*)&gCsr_ctRecDat_TelescopeFrame1.tCsrRng_u8ErrorTelescope1,
        (TVoid*)&gCsr_tTelescopeFrame1.u8ErrorTelescope1, (TVoid*)&mCsr_tOldDat_tTelescopeFrame1.u8ErrorTelescope1, &mCsr_aeRecErr_tTelescopeFrame1[1],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_TelescopeFrame1.tCsrInfo_u16LenghtTelescope1, (TVoid*)&gCsr_ctRecDat_TelescopeFrame1.tCsrRng_u16LenghtTelescope1,
        (TVoid*)&gCsr_tTelescopeFrame1.u16LenghtTelescope1, (TVoid*)&mCsr_tOldDat_tTelescopeFrame1.u16LenghtTelescope1, &mCsr_aeRecErr_tTelescopeFrame1[2],
        NULL, NULL
    }
};

static const TCanSigRecRoot mCsr_ctRoot_TelescopeFrame1 =
{
    "TelescopeFrame1",                                      //!< achName - [STR] Name TelescopeFrame1
    8,                                                      //!< u8Dlc - [NUM] DLC of Can Message
    0xff,                                                   //!< u8CanByteDflt - [NUM] CAN Message default
    DATA_INTEL,                                             //!< eCanFormat - [NUM] CAN Format
    0xFF,                                                   //!< u8MasterReceiveId - [NUM] Receive Id
    3,                                                      //!< u8RecCnt - [NUM] Count of Recorde
    &mCsr_actRecDat_tTelescopeFrame1[0],                    //!< ptRec - [NUM] Pointer to Record Values
    7,                                                      //!< u16RecNo - [NUM] Record Number
    CSR_STAMP                                               //!< u16Stamp - [NUM] Safety stamp
};

TCanSigRecTelescopeFrame1 gCsr_tTelescopeFrame1 =
{
    &mCsr_ctRoot_TelescopeFrame1,                           //!< *cptRoot [POI] Root connection
    (((0 * 1)/1)+0),                                        //!< u16AngleTelescope1 [[-]] new signal
    (((0 * 1)/1)+0),                                        //!< u8ErrorTelescope1 [[-]] new signal
    (((0 * 1)/1)+0)                                         //!< u16LenghtTelescope1 [[-]] new signal
};

const TCanSigRecVal_TelescopeFrame2 gCsr_ctRecDat_TelescopeFrame2 =
{
    //!< AngleTelescope2
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TUINT16, TUINT16, 0, 16, 0, 0, 1, 1 }, 
     { U16_MIN, U16_MAX, 0, 0 },
    //!< ErrorTelescope2
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TUINT8, TUINT8, 16, 8, 0, 0, 1, 1 }, 
     { U8_MIN, U8_MAX, 0, 0 },
    //!< LenghtTelescope2
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TUINT16, TUINT16, 32, 16, 0, 0, 1, 1 }, 
     { U16_MIN, U16_MAX, 0, 0 }
};

static ESigSta mCsr_aeRecErr_tTelescopeFrame2[3] =
{
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY
};

static TCanSigRecOldValTelescopeFrame2 mCsr_tOldDat_tTelescopeFrame2 =
{
    0,                                                      //!< u16AngleTelescope2 [[-]] new signal
    0,                                                      //!< u8ErrorTelescope2 [[-]] new signal
    0                                                       //!< u16LenghtTelescope2 [[-]] new signal
};

extern TCanSigRecTelescopeFrame2 gCsr_tTelescopeFrame2;
static const TRecDat mCsr_actRecDat_tTelescopeFrame2[3] =
{
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_TelescopeFrame2.tCsrInfo_u16AngleTelescope2, (TVoid*)&gCsr_ctRecDat_TelescopeFrame2.tCsrRng_u16AngleTelescope2,
        (TVoid*)&gCsr_tTelescopeFrame2.u16AngleTelescope2, (TVoid*)&mCsr_tOldDat_tTelescopeFrame2.u16AngleTelescope2, &mCsr_aeRecErr_tTelescopeFrame2[0],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_TelescopeFrame2.tCsrInfo_u8ErrorTelescope2, (TVoid*)&gCsr_ctRecDat_TelescopeFrame2.tCsrRng_u8ErrorTelescope2,
        (TVoid*)&gCsr_tTelescopeFrame2.u8ErrorTelescope2, (TVoid*)&mCsr_tOldDat_tTelescopeFrame2.u8ErrorTelescope2, &mCsr_aeRecErr_tTelescopeFrame2[1],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_TelescopeFrame2.tCsrInfo_u16LenghtTelescope2, (TVoid*)&gCsr_ctRecDat_TelescopeFrame2.tCsrRng_u16LenghtTelescope2,
        (TVoid*)&gCsr_tTelescopeFrame2.u16LenghtTelescope2, (TVoid*)&mCsr_tOldDat_tTelescopeFrame2.u16LenghtTelescope2, &mCsr_aeRecErr_tTelescopeFrame2[2],
        NULL, NULL
    }
};

static const TCanSigRecRoot mCsr_ctRoot_TelescopeFrame2 =
{
    "TelescopeFrame2",                                      //!< achName - [STR] Name TelescopeFrame2
    8,                                                      //!< u8Dlc - [NUM] DLC of Can Message
    0xff,                                                   //!< u8CanByteDflt - [NUM] CAN Message default
    DATA_INTEL,                                             //!< eCanFormat - [NUM] CAN Format
    0xFF,                                                   //!< u8MasterReceiveId - [NUM] Receive Id
    3,                                                      //!< u8RecCnt - [NUM] Count of Recorde
    &mCsr_actRecDat_tTelescopeFrame2[0],                    //!< ptRec - [NUM] Pointer to Record Values
    8,                                                      //!< u16RecNo - [NUM] Record Number
    CSR_STAMP                                               //!< u16Stamp - [NUM] Safety stamp
};

TCanSigRecTelescopeFrame2 gCsr_tTelescopeFrame2 =
{
    &mCsr_ctRoot_TelescopeFrame2,                           //!< *cptRoot [POI] Root connection
    (((0 * 1)/1)+0),                                        //!< u16AngleTelescope2 [[-]] new signal
    (((0 * 1)/1)+0),                                        //!< u8ErrorTelescope2 [[-]] new signal
    (((0 * 1)/1)+0)                                         //!< u16LenghtTelescope2 [[-]] new signal
};

const TCanSigRecVal_SRDO4_48XS gCsr_ctRecDat_SRDO4_48XS =
{
    //!< MotorDefaultLight
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 0, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< OverloadLight
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 1, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< WhiteLightAr15746
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 2, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Buzzer
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 3, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< SupplyDeadManPedalAndJoysticks
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 4, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< WarmingLight
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 5, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< DeversDefaultLight
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 6, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< GasOilLight
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 7, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< WhiteLightARG
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 8, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< RedLightARG
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 9, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< WhiteLightARD
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 10, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< RedLightARD
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 11, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE }
};

static ESigSta mCsr_aeRecErr_tSRDO4_48XS[12] =
{
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY
};

static TCanSigRecOldValSRDO4_48XS mCsr_tOldDat_tSRDO4_48XS =
{
    FALSE,                                                  //!< boMotorDefaultLight [[-]] new signal
    FALSE,                                                  //!< boOverloadLight [[-]] new signal
    FALSE,                                                  //!< boWhiteLightAr15746 [[-]] new signal
    FALSE,                                                  //!< boBuzzer [[-]] new signal
    FALSE,                                                  //!< boSupplyDeadManPedalAndJoysticks [[-]] new signal
    FALSE,                                                  //!< boWarmingLight [[-]] new signal
    FALSE,                                                  //!< boDeversDefaultLight [[-]] new signal
    FALSE,                                                  //!< boGasOilLight [[-]] new signal
    FALSE,                                                  //!< boWhiteLightARG [[-]] new signal
    FALSE,                                                  //!< boRedLightARG [[-]] new signal
    FALSE,                                                  //!< boWhiteLightARD [[-]] new signal
    FALSE                                                   //!< boRedLightARD [[-]] new signal
};

extern TCanSigRecSRDO4_48XS gCsr_tSRDO4_48XS;
static const TRecDat mCsr_actRecDat_tSRDO4_48XS[12] =
{
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_SRDO4_48XS.tCsrInfo_boMotorDefaultLight, (TVoid*)&gCsr_ctRecDat_SRDO4_48XS.tCsrRng_boMotorDefaultLight,
        (TVoid*)&gCsr_tSRDO4_48XS.boMotorDefaultLight, (TVoid*)&mCsr_tOldDat_tSRDO4_48XS.boMotorDefaultLight, &mCsr_aeRecErr_tSRDO4_48XS[0],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_SRDO4_48XS.tCsrInfo_boOverloadLight, (TVoid*)&gCsr_ctRecDat_SRDO4_48XS.tCsrRng_boOverloadLight,
        (TVoid*)&gCsr_tSRDO4_48XS.boOverloadLight, (TVoid*)&mCsr_tOldDat_tSRDO4_48XS.boOverloadLight, &mCsr_aeRecErr_tSRDO4_48XS[1],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_SRDO4_48XS.tCsrInfo_boWhiteLightAr15746, (TVoid*)&gCsr_ctRecDat_SRDO4_48XS.tCsrRng_boWhiteLightAr15746,
        (TVoid*)&gCsr_tSRDO4_48XS.boWhiteLightAr15746, (TVoid*)&mCsr_tOldDat_tSRDO4_48XS.boWhiteLightAr15746, &mCsr_aeRecErr_tSRDO4_48XS[2],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_SRDO4_48XS.tCsrInfo_boBuzzer, (TVoid*)&gCsr_ctRecDat_SRDO4_48XS.tCsrRng_boBuzzer,
        (TVoid*)&gCsr_tSRDO4_48XS.boBuzzer, (TVoid*)&mCsr_tOldDat_tSRDO4_48XS.boBuzzer, &mCsr_aeRecErr_tSRDO4_48XS[3],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_SRDO4_48XS.tCsrInfo_boSupplyDeadManPedalAndJoysticks, (TVoid*)&gCsr_ctRecDat_SRDO4_48XS.tCsrRng_boSupplyDeadManPedalAndJoysticks,
        (TVoid*)&gCsr_tSRDO4_48XS.boSupplyDeadManPedalAndJoysticks, (TVoid*)&mCsr_tOldDat_tSRDO4_48XS.boSupplyDeadManPedalAndJoysticks, &mCsr_aeRecErr_tSRDO4_48XS[4],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_SRDO4_48XS.tCsrInfo_boWarmingLight, (TVoid*)&gCsr_ctRecDat_SRDO4_48XS.tCsrRng_boWarmingLight,
        (TVoid*)&gCsr_tSRDO4_48XS.boWarmingLight, (TVoid*)&mCsr_tOldDat_tSRDO4_48XS.boWarmingLight, &mCsr_aeRecErr_tSRDO4_48XS[5],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_SRDO4_48XS.tCsrInfo_boDeversDefaultLight, (TVoid*)&gCsr_ctRecDat_SRDO4_48XS.tCsrRng_boDeversDefaultLight,
        (TVoid*)&gCsr_tSRDO4_48XS.boDeversDefaultLight, (TVoid*)&mCsr_tOldDat_tSRDO4_48XS.boDeversDefaultLight, &mCsr_aeRecErr_tSRDO4_48XS[6],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_SRDO4_48XS.tCsrInfo_boGasOilLight, (TVoid*)&gCsr_ctRecDat_SRDO4_48XS.tCsrRng_boGasOilLight,
        (TVoid*)&gCsr_tSRDO4_48XS.boGasOilLight, (TVoid*)&mCsr_tOldDat_tSRDO4_48XS.boGasOilLight, &mCsr_aeRecErr_tSRDO4_48XS[7],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_SRDO4_48XS.tCsrInfo_boWhiteLightARG, (TVoid*)&gCsr_ctRecDat_SRDO4_48XS.tCsrRng_boWhiteLightARG,
        (TVoid*)&gCsr_tSRDO4_48XS.boWhiteLightARG, (TVoid*)&mCsr_tOldDat_tSRDO4_48XS.boWhiteLightARG, &mCsr_aeRecErr_tSRDO4_48XS[8],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_SRDO4_48XS.tCsrInfo_boRedLightARG, (TVoid*)&gCsr_ctRecDat_SRDO4_48XS.tCsrRng_boRedLightARG,
        (TVoid*)&gCsr_tSRDO4_48XS.boRedLightARG, (TVoid*)&mCsr_tOldDat_tSRDO4_48XS.boRedLightARG, &mCsr_aeRecErr_tSRDO4_48XS[9],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_SRDO4_48XS.tCsrInfo_boWhiteLightARD, (TVoid*)&gCsr_ctRecDat_SRDO4_48XS.tCsrRng_boWhiteLightARD,
        (TVoid*)&gCsr_tSRDO4_48XS.boWhiteLightARD, (TVoid*)&mCsr_tOldDat_tSRDO4_48XS.boWhiteLightARD, &mCsr_aeRecErr_tSRDO4_48XS[10],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_SRDO4_48XS.tCsrInfo_boRedLightARD, (TVoid*)&gCsr_ctRecDat_SRDO4_48XS.tCsrRng_boRedLightARD,
        (TVoid*)&gCsr_tSRDO4_48XS.boRedLightARD, (TVoid*)&mCsr_tOldDat_tSRDO4_48XS.boRedLightARD, &mCsr_aeRecErr_tSRDO4_48XS[11],
        NULL, NULL
    }
};

static const TCanSigRecRoot mCsr_ctRoot_SRDO4_48XS =
{
    "SRDO4_48XS",                                           //!< achName - [STR] Name SRDO4_48XS
    2,                                                      //!< u8Dlc - [NUM] DLC of Can Message
    0xff,                                                   //!< u8CanByteDflt - [NUM] CAN Message default
    DATA_INTEL,                                             //!< eCanFormat - [NUM] CAN Format
    0xFF,                                                   //!< u8MasterReceiveId - [NUM] Receive Id
    12,                                                     //!< u8RecCnt - [NUM] Count of Recorde
    &mCsr_actRecDat_tSRDO4_48XS[0],                         //!< ptRec - [NUM] Pointer to Record Values
    9,                                                      //!< u16RecNo - [NUM] Record Number
    CSR_STAMP                                               //!< u16Stamp - [NUM] Safety stamp
};

TCanSigRecSRDO4_48XS gCsr_tSRDO4_48XS =
{
    &mCsr_ctRoot_SRDO4_48XS,                                //!< *cptRoot [POI] Root connection
    FALSE,                                                  //!< boMotorDefaultLight [[-]] new signal
    FALSE,                                                  //!< boOverloadLight [[-]] new signal
    FALSE,                                                  //!< boWhiteLightAr15746 [[-]] new signal
    FALSE,                                                  //!< boBuzzer [[-]] new signal
    FALSE,                                                  //!< boSupplyDeadManPedalAndJoysticks [[-]] new signal
    FALSE,                                                  //!< boWarmingLight [[-]] new signal
    FALSE,                                                  //!< boDeversDefaultLight [[-]] new signal
    FALSE,                                                  //!< boGasOilLight [[-]] new signal
    FALSE,                                                  //!< boWhiteLightARG [[-]] new signal
    FALSE,                                                  //!< boRedLightARG [[-]] new signal
    FALSE,                                                  //!< boWhiteLightARD [[-]] new signal
    FALSE                                                   //!< boRedLightARD [[-]] new signal
};

const TCanSigRecVal_PDO2_48XS gCsr_ctRecDat_PDO2_48XS =
{
    //!< RotationClockwiseBasket
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TUINT16, TUINT16, 0, 16, 0, 0, 1, 1 }, 
     { U16_MIN, U16_MAX, 0, 0 },
    //!< RotationCtClockwiseBasket
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TUINT16, TUINT16, 16, 16, 0, 0, 1, 1 }, 
     { U16_MIN, U16_MAX, 0, 0 },
    //!< HighSectorPlateSensor
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TUINT16, TUINT16, 32, 16, 0, 0, 1, 1 }, 
     { U16_MIN, U16_MAX, 0, 0 },
    //!< FoldedLadderSensor
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TUINT16, TUINT16, 48, 16, 0, 0, 1, 1 }, 
     { U16_MIN, U16_MAX, 0, 0 }
};

static ESigSta mCsr_aeRecErr_tPDO2_48XS[4] =
{
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY
};

static TCanSigRecOldValPDO2_48XS mCsr_tOldDat_tPDO2_48XS =
{
    0,                                                      //!< u16RotationClockwiseBasket [[-]] new signal
    0,                                                      //!< u16RotationCtClockwiseBasket [[-]] new signal
    0,                                                      //!< u16HighSectorPlateSensor [[-]] new signal
    0                                                       //!< u16FoldedLadderSensor [[-]] new signal
};

extern TCanSigRecPDO2_48XS gCsr_tPDO2_48XS;
static const TRecDat mCsr_actRecDat_tPDO2_48XS[4] =
{
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_PDO2_48XS.tCsrInfo_u16RotationClockwiseBasket, (TVoid*)&gCsr_ctRecDat_PDO2_48XS.tCsrRng_u16RotationClockwiseBasket,
        (TVoid*)&gCsr_tPDO2_48XS.u16RotationClockwiseBasket, (TVoid*)&mCsr_tOldDat_tPDO2_48XS.u16RotationClockwiseBasket, &mCsr_aeRecErr_tPDO2_48XS[0],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_PDO2_48XS.tCsrInfo_u16RotationCtClockwiseBasket, (TVoid*)&gCsr_ctRecDat_PDO2_48XS.tCsrRng_u16RotationCtClockwiseBasket,
        (TVoid*)&gCsr_tPDO2_48XS.u16RotationCtClockwiseBasket, (TVoid*)&mCsr_tOldDat_tPDO2_48XS.u16RotationCtClockwiseBasket, &mCsr_aeRecErr_tPDO2_48XS[1],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_PDO2_48XS.tCsrInfo_u16HighSectorPlateSensor, (TVoid*)&gCsr_ctRecDat_PDO2_48XS.tCsrRng_u16HighSectorPlateSensor,
        (TVoid*)&gCsr_tPDO2_48XS.u16HighSectorPlateSensor, (TVoid*)&mCsr_tOldDat_tPDO2_48XS.u16HighSectorPlateSensor, &mCsr_aeRecErr_tPDO2_48XS[2],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_PDO2_48XS.tCsrInfo_u16FoldedLadderSensor, (TVoid*)&gCsr_ctRecDat_PDO2_48XS.tCsrRng_u16FoldedLadderSensor,
        (TVoid*)&gCsr_tPDO2_48XS.u16FoldedLadderSensor, (TVoid*)&mCsr_tOldDat_tPDO2_48XS.u16FoldedLadderSensor, &mCsr_aeRecErr_tPDO2_48XS[3],
        NULL, NULL
    }
};

static const TCanSigRecRoot mCsr_ctRoot_PDO2_48XS =
{
    "PDO2_48XS",                                            //!< achName - [STR] Name PDO2_48XS
    8,                                                      //!< u8Dlc - [NUM] DLC of Can Message
    0xff,                                                   //!< u8CanByteDflt - [NUM] CAN Message default
    DATA_INTEL,                                             //!< eCanFormat - [NUM] CAN Format
    0xFF,                                                   //!< u8MasterReceiveId - [NUM] Receive Id
    4,                                                      //!< u8RecCnt - [NUM] Count of Recorde
    &mCsr_actRecDat_tPDO2_48XS[0],                          //!< ptRec - [NUM] Pointer to Record Values
    10,                                                     //!< u16RecNo - [NUM] Record Number
    CSR_STAMP                                               //!< u16Stamp - [NUM] Safety stamp
};

TCanSigRecPDO2_48XS gCsr_tPDO2_48XS =
{
    &mCsr_ctRoot_PDO2_48XS,                                 //!< *cptRoot [POI] Root connection
    (((0 * 1)/1)+0),                                        //!< u16RotationClockwiseBasket [[-]] new signal
    (((0 * 1)/1)+0),                                        //!< u16RotationCtClockwiseBasket [[-]] new signal
    (((0 * 1)/1)+0),                                        //!< u16HighSectorPlateSensor [[-]] new signal
    (((0 * 1)/1)+0)                                         //!< u16FoldedLadderSensor [[-]] new signal
};

const TCanSigRecVal_PDO3_48XS gCsr_ctRecDat_PDO3_48XS =
{
    //!< SafetyManSystem
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TUINT16, TUINT16, 0, 16, 0, 0, 1, 1 }, 
     { U16_MIN, U16_MAX, 0, 0 },
    //!< DeltaArmAxisJoystick
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TUINT16, TUINT16, 16, 16, 0, 0, 1, 1 }, 
     { U16_MIN, U16_MAX, 0, 0 },
    //!< ArrowArmAxisJoystick
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TUINT16, TUINT16, 32, 16, 0, 0, 1, 1 }, 
     { U16_MIN, U16_MAX, 0, 0 },
    //!< TelescopeArmAxisJoysitck
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TUINT16, TUINT16, 48, 16, 0, 0, 1, 1 }, 
     { U16_MIN, U16_MAX, 0, 0 }
};

static ESigSta mCsr_aeRecErr_tPDO3_48XS[4] =
{
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY
};

static TCanSigRecOldValPDO3_48XS mCsr_tOldDat_tPDO3_48XS =
{
    0,                                                      //!< u16SafetyManSystem [[-]] new signal
    0,                                                      //!< u16DeltaArmAxisJoystick [[-]] new signal
    0,                                                      //!< u16ArrowArmAxisJoystick [[-]] new signal
    0                                                       //!< u16TelescopeArmAxisJoysitck [[-]] new signal
};

extern TCanSigRecPDO3_48XS gCsr_tPDO3_48XS;
static const TRecDat mCsr_actRecDat_tPDO3_48XS[4] =
{
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_PDO3_48XS.tCsrInfo_u16SafetyManSystem, (TVoid*)&gCsr_ctRecDat_PDO3_48XS.tCsrRng_u16SafetyManSystem,
        (TVoid*)&gCsr_tPDO3_48XS.u16SafetyManSystem, (TVoid*)&mCsr_tOldDat_tPDO3_48XS.u16SafetyManSystem, &mCsr_aeRecErr_tPDO3_48XS[0],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_PDO3_48XS.tCsrInfo_u16DeltaArmAxisJoystick, (TVoid*)&gCsr_ctRecDat_PDO3_48XS.tCsrRng_u16DeltaArmAxisJoystick,
        (TVoid*)&gCsr_tPDO3_48XS.u16DeltaArmAxisJoystick, (TVoid*)&mCsr_tOldDat_tPDO3_48XS.u16DeltaArmAxisJoystick, &mCsr_aeRecErr_tPDO3_48XS[1],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_PDO3_48XS.tCsrInfo_u16ArrowArmAxisJoystick, (TVoid*)&gCsr_ctRecDat_PDO3_48XS.tCsrRng_u16ArrowArmAxisJoystick,
        (TVoid*)&gCsr_tPDO3_48XS.u16ArrowArmAxisJoystick, (TVoid*)&mCsr_tOldDat_tPDO3_48XS.u16ArrowArmAxisJoystick, &mCsr_aeRecErr_tPDO3_48XS[2],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_PDO3_48XS.tCsrInfo_u16TelescopeArmAxisJoysitck, (TVoid*)&gCsr_ctRecDat_PDO3_48XS.tCsrRng_u16TelescopeArmAxisJoysitck,
        (TVoid*)&gCsr_tPDO3_48XS.u16TelescopeArmAxisJoysitck, (TVoid*)&mCsr_tOldDat_tPDO3_48XS.u16TelescopeArmAxisJoysitck, &mCsr_aeRecErr_tPDO3_48XS[3],
        NULL, NULL
    }
};

static const TCanSigRecRoot mCsr_ctRoot_PDO3_48XS =
{
    "PDO3_48XS",                                            //!< achName - [STR] Name PDO3_48XS
    8,                                                      //!< u8Dlc - [NUM] DLC of Can Message
    0xff,                                                   //!< u8CanByteDflt - [NUM] CAN Message default
    DATA_INTEL,                                             //!< eCanFormat - [NUM] CAN Format
    0xFF,                                                   //!< u8MasterReceiveId - [NUM] Receive Id
    4,                                                      //!< u8RecCnt - [NUM] Count of Recorde
    &mCsr_actRecDat_tPDO3_48XS[0],                          //!< ptRec - [NUM] Pointer to Record Values
    11,                                                     //!< u16RecNo - [NUM] Record Number
    CSR_STAMP                                               //!< u16Stamp - [NUM] Safety stamp
};

TCanSigRecPDO3_48XS gCsr_tPDO3_48XS =
{
    &mCsr_ctRoot_PDO3_48XS,                                 //!< *cptRoot [POI] Root connection
    (((0 * 1)/1)+0),                                        //!< u16SafetyManSystem [[-]] new signal
    (((0 * 1)/1)+0),                                        //!< u16DeltaArmAxisJoystick [[-]] new signal
    (((0 * 1)/1)+0),                                        //!< u16ArrowArmAxisJoystick [[-]] new signal
    (((0 * 1)/1)+0)                                         //!< u16TelescopeArmAxisJoysitck [[-]] new signal
};

const TCanSigRecVal_Msg1C1SendToOpus gCsr_ctRecDat_Msg1C1SendToOpus =
{
    //!< gBattery_On_Off
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 0, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gPreheat_On_Off
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 1, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gSTOP_On_Off
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 2, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gEngine_Faillure_On_Off
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 3, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gMaintenance_On_Off
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 4, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gOil_On_OFF
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 5, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gDeltaSectorDown
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 6, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gArrowSectorDown
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 7, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gPendularSectorDown
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 8, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gDeltaArmInCenter
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 9, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gArrowArmInCenter
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 10, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gPendularInCenter
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 11, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gBasketRotationInCenter
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 12, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gTelescopeInCenter
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 13, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gBasketInclinaisonInCenter
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 14, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gDeltaArmMoveUpAllow
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 15, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gDeltaArmMoveDownAllow
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 16, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gArrowArmMoveUpAllow
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 17, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gArrowArmMoveDownAllow
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 18, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gPendularMoveUpAllow
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 19, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gPendularMoveDownAllow
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 20, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gTelescopeMoveOutAllow
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 21, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gTelescopeMoveInAllow
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 22, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gTurretCntrClockWiseMoveAllow
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 23, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gTurretClockWiseMoveAllow
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 24, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gBasketRotCtClockWiseMoveAllow
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 25, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gBasketRotClockWiseMoveAllow
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 26, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gBasketInclinaisonMoveUpAllow
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 27, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gBasketIncliMoveDownAllow
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 28, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gOverloadSecurity
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 29, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gBasketStepClosed
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 30, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gSystemFault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 31, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gBasketAccessLocked
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 32, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gMeasuringMastFault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 33, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gMeasuringMatOption
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 34, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gSafeManSystem
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 35, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gEngineForcingMode
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 36, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gEngineSilentMode
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 37, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gTurretEncoderFault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 38, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gSlopeSensorFault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 39, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gFuel
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TUINT8, TUINT8, 40, 8, 0, 0, 1, 1 }, 
     { U8_MIN, U8_MAX, 0, 0 },
    //!< gelescopePositionValue
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TINT16, TINT16, 48, 16, 0, 0, 1, 1 }, 
     { I16_MIN, I16_MAX, 0, 0 }
};

static ESigSta mCsr_aeRecErr_tMsg1C1SendToOpus[42] =
{
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY
};

static TCanSigRecOldValMsg1C1SendToOpus mCsr_tOldDat_tMsg1C1SendToOpus =
{
    FALSE,                                                  //!< bogBattery_On_Off [[-]] Battery Status
    FALSE,                                                  //!< bogPreheat_On_Off [[-]] Preheat Status
    FALSE,                                                  //!< bogSTOP_On_Off [[-]] STOP Status
    FALSE,                                                  //!< bogEngine_Faillure_On_Off [[-]] Engine Faillure Status
    FALSE,                                                  //!< bogMaintenance_On_Off [[-]] Maintenance Status
    FALSE,                                                  //!< bogOil_On_OFF [[-]] Oil Status
    FALSE,                                                  //!< bogDeltaSectorDown [[-]] Delta Arm Sector Down
    FALSE,                                                  //!< bogArrowSectorDown [[-]] Arrow Sector Down
    FALSE,                                                  //!< bogPendularSectorDown [[-]] Pendular Sector Down
    FALSE,                                                  //!< bogDeltaArmInCenter [[-]] Delta Arm in Center
    FALSE,                                                  //!< bogArrowArmInCenter [[-]] Arrow Arm in Center
    FALSE,                                                  //!< bogPendularInCenter [[-]] gPendularInCenter
    FALSE,                                                  //!< bogBasketRotationInCenter [[-]] Basket Rotation in Center
    FALSE,                                                  //!< bogTelescopeInCenter [[-]] Telescope in Center
    FALSE,                                                  //!< bogBasketInclinaisonInCenter [[-]] Basket Inclinaison in Center
    FALSE,                                                  //!< bogDeltaArmMoveUpAllow [[-]] Delta Arm Move Up Allowed
    FALSE,                                                  //!< bogDeltaArmMoveDownAllow [[-]] Delta Arm Move Down Allowed
    FALSE,                                                  //!< bogArrowArmMoveUpAllow [[-]] Arrow Arm Move Up Allowed
    FALSE,                                                  //!< bogArrowArmMoveDownAllow [[-]] Arrow Arm Move Down Allowed
    FALSE,                                                  //!< bogPendularMoveUpAllow [[-]] Pendular Move Up Allowed
    FALSE,                                                  //!< bogPendularMoveDownAllow [[-]] Pendular Move Down Allowed
    FALSE,                                                  //!< bogTelescopeMoveOutAllow [[-]] Telescope Move Out Allowed
    FALSE,                                                  //!< bogTelescopeMoveInAllow [[-]] Telescope Move In Allowed
    FALSE,                                                  //!< bogTurretCntrClockWiseMoveAllow [[-]] Turret Counter Clockwise Move Allowed
    FALSE,                                                  //!< bogTurretClockWiseMoveAllow [[-]] Turret Clockwise Move Allowed
    FALSE,                                                  //!< bogBasketRotCtClockWiseMoveAllow [[-]] Basket Rotation Counter Clockwise Move Allow
    FALSE,                                                  //!< bogBasketRotClockWiseMoveAllow [[-]] Basket Rotation Clockwise Move Allow
    FALSE,                                                  //!< bogBasketInclinaisonMoveUpAllow [[-]] Basket Inclinaison Move Up Allow
    FALSE,                                                  //!< bogBasketIncliMoveDownAllow [[-]] Basket Inclinaison Move Down Allow
    FALSE,                                                  //!< bogOverloadSecurity [[-]] Basket Overload
    FALSE,                                                  //!< bogBasketStepClosed [[-]] Basket step closed
    FALSE,                                                  //!< bogSystemFault [[-]] System Fault
    FALSE,                                                  //!< bogBasketAccessLocked [[-]] Basket access locked
    FALSE,                                                  //!< bogMeasuringMastFault [[-]] Measuring Mast in Fault
    FALSE,                                                  //!< bogMeasuringMatOption [[-]] Measuring Mast Option
    FALSE,                                                  //!< bogSafeManSystem [[-]] Safe Man System
    FALSE,                                                  //!< bogEngineForcingMode [[-]] Engine in forcing mode
    FALSE,                                                  //!< bogEngineSilentMode [[-]] Engine in Silent mode
    FALSE,                                                  //!< bogTurretEncoderFault [[-]] Turret Encoder Fault
    FALSE,                                                  //!< bogSlopeSensorFault [[-]] Slope sensor fault
    0,                                                      //!< u8gFuel [[-]] new signal
    0                                                       //!< i16gelescopePositionValue [[-]] new signal
};

extern TCanSigRecMsg1C1SendToOpus gCsr_tMsg1C1SendToOpus;
static const TRecDat mCsr_actRecDat_tMsg1C1SendToOpus[42] =
{
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1C1SendToOpus.tCsrInfo_bogBattery_On_Off, (TVoid*)&gCsr_ctRecDat_Msg1C1SendToOpus.tCsrRng_bogBattery_On_Off,
        (TVoid*)&gCsr_tMsg1C1SendToOpus.bogBattery_On_Off, (TVoid*)&mCsr_tOldDat_tMsg1C1SendToOpus.bogBattery_On_Off, &mCsr_aeRecErr_tMsg1C1SendToOpus[0],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1C1SendToOpus.tCsrInfo_bogPreheat_On_Off, (TVoid*)&gCsr_ctRecDat_Msg1C1SendToOpus.tCsrRng_bogPreheat_On_Off,
        (TVoid*)&gCsr_tMsg1C1SendToOpus.bogPreheat_On_Off, (TVoid*)&mCsr_tOldDat_tMsg1C1SendToOpus.bogPreheat_On_Off, &mCsr_aeRecErr_tMsg1C1SendToOpus[1],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1C1SendToOpus.tCsrInfo_bogSTOP_On_Off, (TVoid*)&gCsr_ctRecDat_Msg1C1SendToOpus.tCsrRng_bogSTOP_On_Off,
        (TVoid*)&gCsr_tMsg1C1SendToOpus.bogSTOP_On_Off, (TVoid*)&mCsr_tOldDat_tMsg1C1SendToOpus.bogSTOP_On_Off, &mCsr_aeRecErr_tMsg1C1SendToOpus[2],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1C1SendToOpus.tCsrInfo_bogEngine_Faillure_On_Off, (TVoid*)&gCsr_ctRecDat_Msg1C1SendToOpus.tCsrRng_bogEngine_Faillure_On_Off,
        (TVoid*)&gCsr_tMsg1C1SendToOpus.bogEngine_Faillure_On_Off, (TVoid*)&mCsr_tOldDat_tMsg1C1SendToOpus.bogEngine_Faillure_On_Off, &mCsr_aeRecErr_tMsg1C1SendToOpus[3],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1C1SendToOpus.tCsrInfo_bogMaintenance_On_Off, (TVoid*)&gCsr_ctRecDat_Msg1C1SendToOpus.tCsrRng_bogMaintenance_On_Off,
        (TVoid*)&gCsr_tMsg1C1SendToOpus.bogMaintenance_On_Off, (TVoid*)&mCsr_tOldDat_tMsg1C1SendToOpus.bogMaintenance_On_Off, &mCsr_aeRecErr_tMsg1C1SendToOpus[4],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1C1SendToOpus.tCsrInfo_bogOil_On_OFF, (TVoid*)&gCsr_ctRecDat_Msg1C1SendToOpus.tCsrRng_bogOil_On_OFF,
        (TVoid*)&gCsr_tMsg1C1SendToOpus.bogOil_On_OFF, (TVoid*)&mCsr_tOldDat_tMsg1C1SendToOpus.bogOil_On_OFF, &mCsr_aeRecErr_tMsg1C1SendToOpus[5],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1C1SendToOpus.tCsrInfo_bogDeltaSectorDown, (TVoid*)&gCsr_ctRecDat_Msg1C1SendToOpus.tCsrRng_bogDeltaSectorDown,
        (TVoid*)&gCsr_tMsg1C1SendToOpus.bogDeltaSectorDown, (TVoid*)&mCsr_tOldDat_tMsg1C1SendToOpus.bogDeltaSectorDown, &mCsr_aeRecErr_tMsg1C1SendToOpus[6],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1C1SendToOpus.tCsrInfo_bogArrowSectorDown, (TVoid*)&gCsr_ctRecDat_Msg1C1SendToOpus.tCsrRng_bogArrowSectorDown,
        (TVoid*)&gCsr_tMsg1C1SendToOpus.bogArrowSectorDown, (TVoid*)&mCsr_tOldDat_tMsg1C1SendToOpus.bogArrowSectorDown, &mCsr_aeRecErr_tMsg1C1SendToOpus[7],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1C1SendToOpus.tCsrInfo_bogPendularSectorDown, (TVoid*)&gCsr_ctRecDat_Msg1C1SendToOpus.tCsrRng_bogPendularSectorDown,
        (TVoid*)&gCsr_tMsg1C1SendToOpus.bogPendularSectorDown, (TVoid*)&mCsr_tOldDat_tMsg1C1SendToOpus.bogPendularSectorDown, &mCsr_aeRecErr_tMsg1C1SendToOpus[8],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1C1SendToOpus.tCsrInfo_bogDeltaArmInCenter, (TVoid*)&gCsr_ctRecDat_Msg1C1SendToOpus.tCsrRng_bogDeltaArmInCenter,
        (TVoid*)&gCsr_tMsg1C1SendToOpus.bogDeltaArmInCenter, (TVoid*)&mCsr_tOldDat_tMsg1C1SendToOpus.bogDeltaArmInCenter, &mCsr_aeRecErr_tMsg1C1SendToOpus[9],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1C1SendToOpus.tCsrInfo_bogArrowArmInCenter, (TVoid*)&gCsr_ctRecDat_Msg1C1SendToOpus.tCsrRng_bogArrowArmInCenter,
        (TVoid*)&gCsr_tMsg1C1SendToOpus.bogArrowArmInCenter, (TVoid*)&mCsr_tOldDat_tMsg1C1SendToOpus.bogArrowArmInCenter, &mCsr_aeRecErr_tMsg1C1SendToOpus[10],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1C1SendToOpus.tCsrInfo_bogPendularInCenter, (TVoid*)&gCsr_ctRecDat_Msg1C1SendToOpus.tCsrRng_bogPendularInCenter,
        (TVoid*)&gCsr_tMsg1C1SendToOpus.bogPendularInCenter, (TVoid*)&mCsr_tOldDat_tMsg1C1SendToOpus.bogPendularInCenter, &mCsr_aeRecErr_tMsg1C1SendToOpus[11],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1C1SendToOpus.tCsrInfo_bogBasketRotationInCenter, (TVoid*)&gCsr_ctRecDat_Msg1C1SendToOpus.tCsrRng_bogBasketRotationInCenter,
        (TVoid*)&gCsr_tMsg1C1SendToOpus.bogBasketRotationInCenter, (TVoid*)&mCsr_tOldDat_tMsg1C1SendToOpus.bogBasketRotationInCenter, &mCsr_aeRecErr_tMsg1C1SendToOpus[12],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1C1SendToOpus.tCsrInfo_bogTelescopeInCenter, (TVoid*)&gCsr_ctRecDat_Msg1C1SendToOpus.tCsrRng_bogTelescopeInCenter,
        (TVoid*)&gCsr_tMsg1C1SendToOpus.bogTelescopeInCenter, (TVoid*)&mCsr_tOldDat_tMsg1C1SendToOpus.bogTelescopeInCenter, &mCsr_aeRecErr_tMsg1C1SendToOpus[13],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1C1SendToOpus.tCsrInfo_bogBasketInclinaisonInCenter, (TVoid*)&gCsr_ctRecDat_Msg1C1SendToOpus.tCsrRng_bogBasketInclinaisonInCenter,
        (TVoid*)&gCsr_tMsg1C1SendToOpus.bogBasketInclinaisonInCenter, (TVoid*)&mCsr_tOldDat_tMsg1C1SendToOpus.bogBasketInclinaisonInCenter, &mCsr_aeRecErr_tMsg1C1SendToOpus[14],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1C1SendToOpus.tCsrInfo_bogDeltaArmMoveUpAllow, (TVoid*)&gCsr_ctRecDat_Msg1C1SendToOpus.tCsrRng_bogDeltaArmMoveUpAllow,
        (TVoid*)&gCsr_tMsg1C1SendToOpus.bogDeltaArmMoveUpAllow, (TVoid*)&mCsr_tOldDat_tMsg1C1SendToOpus.bogDeltaArmMoveUpAllow, &mCsr_aeRecErr_tMsg1C1SendToOpus[15],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1C1SendToOpus.tCsrInfo_bogDeltaArmMoveDownAllow, (TVoid*)&gCsr_ctRecDat_Msg1C1SendToOpus.tCsrRng_bogDeltaArmMoveDownAllow,
        (TVoid*)&gCsr_tMsg1C1SendToOpus.bogDeltaArmMoveDownAllow, (TVoid*)&mCsr_tOldDat_tMsg1C1SendToOpus.bogDeltaArmMoveDownAllow, &mCsr_aeRecErr_tMsg1C1SendToOpus[16],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1C1SendToOpus.tCsrInfo_bogArrowArmMoveUpAllow, (TVoid*)&gCsr_ctRecDat_Msg1C1SendToOpus.tCsrRng_bogArrowArmMoveUpAllow,
        (TVoid*)&gCsr_tMsg1C1SendToOpus.bogArrowArmMoveUpAllow, (TVoid*)&mCsr_tOldDat_tMsg1C1SendToOpus.bogArrowArmMoveUpAllow, &mCsr_aeRecErr_tMsg1C1SendToOpus[17],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1C1SendToOpus.tCsrInfo_bogArrowArmMoveDownAllow, (TVoid*)&gCsr_ctRecDat_Msg1C1SendToOpus.tCsrRng_bogArrowArmMoveDownAllow,
        (TVoid*)&gCsr_tMsg1C1SendToOpus.bogArrowArmMoveDownAllow, (TVoid*)&mCsr_tOldDat_tMsg1C1SendToOpus.bogArrowArmMoveDownAllow, &mCsr_aeRecErr_tMsg1C1SendToOpus[18],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1C1SendToOpus.tCsrInfo_bogPendularMoveUpAllow, (TVoid*)&gCsr_ctRecDat_Msg1C1SendToOpus.tCsrRng_bogPendularMoveUpAllow,
        (TVoid*)&gCsr_tMsg1C1SendToOpus.bogPendularMoveUpAllow, (TVoid*)&mCsr_tOldDat_tMsg1C1SendToOpus.bogPendularMoveUpAllow, &mCsr_aeRecErr_tMsg1C1SendToOpus[19],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1C1SendToOpus.tCsrInfo_bogPendularMoveDownAllow, (TVoid*)&gCsr_ctRecDat_Msg1C1SendToOpus.tCsrRng_bogPendularMoveDownAllow,
        (TVoid*)&gCsr_tMsg1C1SendToOpus.bogPendularMoveDownAllow, (TVoid*)&mCsr_tOldDat_tMsg1C1SendToOpus.bogPendularMoveDownAllow, &mCsr_aeRecErr_tMsg1C1SendToOpus[20],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1C1SendToOpus.tCsrInfo_bogTelescopeMoveOutAllow, (TVoid*)&gCsr_ctRecDat_Msg1C1SendToOpus.tCsrRng_bogTelescopeMoveOutAllow,
        (TVoid*)&gCsr_tMsg1C1SendToOpus.bogTelescopeMoveOutAllow, (TVoid*)&mCsr_tOldDat_tMsg1C1SendToOpus.bogTelescopeMoveOutAllow, &mCsr_aeRecErr_tMsg1C1SendToOpus[21],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1C1SendToOpus.tCsrInfo_bogTelescopeMoveInAllow, (TVoid*)&gCsr_ctRecDat_Msg1C1SendToOpus.tCsrRng_bogTelescopeMoveInAllow,
        (TVoid*)&gCsr_tMsg1C1SendToOpus.bogTelescopeMoveInAllow, (TVoid*)&mCsr_tOldDat_tMsg1C1SendToOpus.bogTelescopeMoveInAllow, &mCsr_aeRecErr_tMsg1C1SendToOpus[22],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1C1SendToOpus.tCsrInfo_bogTurretCntrClockWiseMoveAllow, (TVoid*)&gCsr_ctRecDat_Msg1C1SendToOpus.tCsrRng_bogTurretCntrClockWiseMoveAllow,
        (TVoid*)&gCsr_tMsg1C1SendToOpus.bogTurretCntrClockWiseMoveAllow, (TVoid*)&mCsr_tOldDat_tMsg1C1SendToOpus.bogTurretCntrClockWiseMoveAllow, &mCsr_aeRecErr_tMsg1C1SendToOpus[23],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1C1SendToOpus.tCsrInfo_bogTurretClockWiseMoveAllow, (TVoid*)&gCsr_ctRecDat_Msg1C1SendToOpus.tCsrRng_bogTurretClockWiseMoveAllow,
        (TVoid*)&gCsr_tMsg1C1SendToOpus.bogTurretClockWiseMoveAllow, (TVoid*)&mCsr_tOldDat_tMsg1C1SendToOpus.bogTurretClockWiseMoveAllow, &mCsr_aeRecErr_tMsg1C1SendToOpus[24],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1C1SendToOpus.tCsrInfo_bogBasketRotCtClockWiseMoveAllow, (TVoid*)&gCsr_ctRecDat_Msg1C1SendToOpus.tCsrRng_bogBasketRotCtClockWiseMoveAllow,
        (TVoid*)&gCsr_tMsg1C1SendToOpus.bogBasketRotCtClockWiseMoveAllow, (TVoid*)&mCsr_tOldDat_tMsg1C1SendToOpus.bogBasketRotCtClockWiseMoveAllow, &mCsr_aeRecErr_tMsg1C1SendToOpus[25],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1C1SendToOpus.tCsrInfo_bogBasketRotClockWiseMoveAllow, (TVoid*)&gCsr_ctRecDat_Msg1C1SendToOpus.tCsrRng_bogBasketRotClockWiseMoveAllow,
        (TVoid*)&gCsr_tMsg1C1SendToOpus.bogBasketRotClockWiseMoveAllow, (TVoid*)&mCsr_tOldDat_tMsg1C1SendToOpus.bogBasketRotClockWiseMoveAllow, &mCsr_aeRecErr_tMsg1C1SendToOpus[26],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1C1SendToOpus.tCsrInfo_bogBasketInclinaisonMoveUpAllow, (TVoid*)&gCsr_ctRecDat_Msg1C1SendToOpus.tCsrRng_bogBasketInclinaisonMoveUpAllow,
        (TVoid*)&gCsr_tMsg1C1SendToOpus.bogBasketInclinaisonMoveUpAllow, (TVoid*)&mCsr_tOldDat_tMsg1C1SendToOpus.bogBasketInclinaisonMoveUpAllow, &mCsr_aeRecErr_tMsg1C1SendToOpus[27],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1C1SendToOpus.tCsrInfo_bogBasketIncliMoveDownAllow, (TVoid*)&gCsr_ctRecDat_Msg1C1SendToOpus.tCsrRng_bogBasketIncliMoveDownAllow,
        (TVoid*)&gCsr_tMsg1C1SendToOpus.bogBasketIncliMoveDownAllow, (TVoid*)&mCsr_tOldDat_tMsg1C1SendToOpus.bogBasketIncliMoveDownAllow, &mCsr_aeRecErr_tMsg1C1SendToOpus[28],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1C1SendToOpus.tCsrInfo_bogOverloadSecurity, (TVoid*)&gCsr_ctRecDat_Msg1C1SendToOpus.tCsrRng_bogOverloadSecurity,
        (TVoid*)&gCsr_tMsg1C1SendToOpus.bogOverloadSecurity, (TVoid*)&mCsr_tOldDat_tMsg1C1SendToOpus.bogOverloadSecurity, &mCsr_aeRecErr_tMsg1C1SendToOpus[29],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1C1SendToOpus.tCsrInfo_bogBasketStepClosed, (TVoid*)&gCsr_ctRecDat_Msg1C1SendToOpus.tCsrRng_bogBasketStepClosed,
        (TVoid*)&gCsr_tMsg1C1SendToOpus.bogBasketStepClosed, (TVoid*)&mCsr_tOldDat_tMsg1C1SendToOpus.bogBasketStepClosed, &mCsr_aeRecErr_tMsg1C1SendToOpus[30],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1C1SendToOpus.tCsrInfo_bogSystemFault, (TVoid*)&gCsr_ctRecDat_Msg1C1SendToOpus.tCsrRng_bogSystemFault,
        (TVoid*)&gCsr_tMsg1C1SendToOpus.bogSystemFault, (TVoid*)&mCsr_tOldDat_tMsg1C1SendToOpus.bogSystemFault, &mCsr_aeRecErr_tMsg1C1SendToOpus[31],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1C1SendToOpus.tCsrInfo_bogBasketAccessLocked, (TVoid*)&gCsr_ctRecDat_Msg1C1SendToOpus.tCsrRng_bogBasketAccessLocked,
        (TVoid*)&gCsr_tMsg1C1SendToOpus.bogBasketAccessLocked, (TVoid*)&mCsr_tOldDat_tMsg1C1SendToOpus.bogBasketAccessLocked, &mCsr_aeRecErr_tMsg1C1SendToOpus[32],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1C1SendToOpus.tCsrInfo_bogMeasuringMastFault, (TVoid*)&gCsr_ctRecDat_Msg1C1SendToOpus.tCsrRng_bogMeasuringMastFault,
        (TVoid*)&gCsr_tMsg1C1SendToOpus.bogMeasuringMastFault, (TVoid*)&mCsr_tOldDat_tMsg1C1SendToOpus.bogMeasuringMastFault, &mCsr_aeRecErr_tMsg1C1SendToOpus[33],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1C1SendToOpus.tCsrInfo_bogMeasuringMatOption, (TVoid*)&gCsr_ctRecDat_Msg1C1SendToOpus.tCsrRng_bogMeasuringMatOption,
        (TVoid*)&gCsr_tMsg1C1SendToOpus.bogMeasuringMatOption, (TVoid*)&mCsr_tOldDat_tMsg1C1SendToOpus.bogMeasuringMatOption, &mCsr_aeRecErr_tMsg1C1SendToOpus[34],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1C1SendToOpus.tCsrInfo_bogSafeManSystem, (TVoid*)&gCsr_ctRecDat_Msg1C1SendToOpus.tCsrRng_bogSafeManSystem,
        (TVoid*)&gCsr_tMsg1C1SendToOpus.bogSafeManSystem, (TVoid*)&mCsr_tOldDat_tMsg1C1SendToOpus.bogSafeManSystem, &mCsr_aeRecErr_tMsg1C1SendToOpus[35],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1C1SendToOpus.tCsrInfo_bogEngineForcingMode, (TVoid*)&gCsr_ctRecDat_Msg1C1SendToOpus.tCsrRng_bogEngineForcingMode,
        (TVoid*)&gCsr_tMsg1C1SendToOpus.bogEngineForcingMode, (TVoid*)&mCsr_tOldDat_tMsg1C1SendToOpus.bogEngineForcingMode, &mCsr_aeRecErr_tMsg1C1SendToOpus[36],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1C1SendToOpus.tCsrInfo_bogEngineSilentMode, (TVoid*)&gCsr_ctRecDat_Msg1C1SendToOpus.tCsrRng_bogEngineSilentMode,
        (TVoid*)&gCsr_tMsg1C1SendToOpus.bogEngineSilentMode, (TVoid*)&mCsr_tOldDat_tMsg1C1SendToOpus.bogEngineSilentMode, &mCsr_aeRecErr_tMsg1C1SendToOpus[37],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1C1SendToOpus.tCsrInfo_bogTurretEncoderFault, (TVoid*)&gCsr_ctRecDat_Msg1C1SendToOpus.tCsrRng_bogTurretEncoderFault,
        (TVoid*)&gCsr_tMsg1C1SendToOpus.bogTurretEncoderFault, (TVoid*)&mCsr_tOldDat_tMsg1C1SendToOpus.bogTurretEncoderFault, &mCsr_aeRecErr_tMsg1C1SendToOpus[38],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1C1SendToOpus.tCsrInfo_bogSlopeSensorFault, (TVoid*)&gCsr_ctRecDat_Msg1C1SendToOpus.tCsrRng_bogSlopeSensorFault,
        (TVoid*)&gCsr_tMsg1C1SendToOpus.bogSlopeSensorFault, (TVoid*)&mCsr_tOldDat_tMsg1C1SendToOpus.bogSlopeSensorFault, &mCsr_aeRecErr_tMsg1C1SendToOpus[39],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1C1SendToOpus.tCsrInfo_u8gFuel, (TVoid*)&gCsr_ctRecDat_Msg1C1SendToOpus.tCsrRng_u8gFuel,
        (TVoid*)&gCsr_tMsg1C1SendToOpus.u8gFuel, (TVoid*)&mCsr_tOldDat_tMsg1C1SendToOpus.u8gFuel, &mCsr_aeRecErr_tMsg1C1SendToOpus[40],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1C1SendToOpus.tCsrInfo_i16gelescopePositionValue, (TVoid*)&gCsr_ctRecDat_Msg1C1SendToOpus.tCsrRng_i16gelescopePositionValue,
        (TVoid*)&gCsr_tMsg1C1SendToOpus.i16gelescopePositionValue, (TVoid*)&mCsr_tOldDat_tMsg1C1SendToOpus.i16gelescopePositionValue, &mCsr_aeRecErr_tMsg1C1SendToOpus[41],
        NULL, NULL
    }
};

static const TCanSigRecRoot mCsr_ctRoot_Msg1C1SendToOpus =
{
    "Msg1C1SendToOpus",                                     //!< achName - [STR] Name Msg1C1SendToOpus
    8,                                                      //!< u8Dlc - [NUM] DLC of Can Message
    0x00,                                                   //!< u8CanByteDflt - [NUM] CAN Message default
    DATA_INTEL,                                             //!< eCanFormat - [NUM] CAN Format
    0xFF,                                                   //!< u8MasterReceiveId - [NUM] Receive Id
    42,                                                     //!< u8RecCnt - [NUM] Count of Recorde
    &mCsr_actRecDat_tMsg1C1SendToOpus[0],                   //!< ptRec - [NUM] Pointer to Record Values
    12,                                                     //!< u16RecNo - [NUM] Record Number
    CSR_STAMP                                               //!< u16Stamp - [NUM] Safety stamp
};

TCanSigRecMsg1C1SendToOpus gCsr_tMsg1C1SendToOpus =
{
    &mCsr_ctRoot_Msg1C1SendToOpus,                          //!< *cptRoot [POI] Root connection
    FALSE,                                                  //!< bogBattery_On_Off [[-]] Battery Status
    FALSE,                                                  //!< bogPreheat_On_Off [[-]] Preheat Status
    FALSE,                                                  //!< bogSTOP_On_Off [[-]] STOP Status
    FALSE,                                                  //!< bogEngine_Faillure_On_Off [[-]] Engine Faillure Status
    FALSE,                                                  //!< bogMaintenance_On_Off [[-]] Maintenance Status
    FALSE,                                                  //!< bogOil_On_OFF [[-]] Oil Status
    FALSE,                                                  //!< bogDeltaSectorDown [[-]] Delta Arm Sector Down
    FALSE,                                                  //!< bogArrowSectorDown [[-]] Arrow Sector Down
    FALSE,                                                  //!< bogPendularSectorDown [[-]] Pendular Sector Down
    FALSE,                                                  //!< bogDeltaArmInCenter [[-]] Delta Arm in Center
    FALSE,                                                  //!< bogArrowArmInCenter [[-]] Arrow Arm in Center
    FALSE,                                                  //!< bogPendularInCenter [[-]] gPendularInCenter
    FALSE,                                                  //!< bogBasketRotationInCenter [[-]] Basket Rotation in Center
    FALSE,                                                  //!< bogTelescopeInCenter [[-]] Telescope in Center
    FALSE,                                                  //!< bogBasketInclinaisonInCenter [[-]] Basket Inclinaison in Center
    FALSE,                                                  //!< bogDeltaArmMoveUpAllow [[-]] Delta Arm Move Up Allowed
    FALSE,                                                  //!< bogDeltaArmMoveDownAllow [[-]] Delta Arm Move Down Allowed
    FALSE,                                                  //!< bogArrowArmMoveUpAllow [[-]] Arrow Arm Move Up Allowed
    FALSE,                                                  //!< bogArrowArmMoveDownAllow [[-]] Arrow Arm Move Down Allowed
    FALSE,                                                  //!< bogPendularMoveUpAllow [[-]] Pendular Move Up Allowed
    FALSE,                                                  //!< bogPendularMoveDownAllow [[-]] Pendular Move Down Allowed
    FALSE,                                                  //!< bogTelescopeMoveOutAllow [[-]] Telescope Move Out Allowed
    FALSE,                                                  //!< bogTelescopeMoveInAllow [[-]] Telescope Move In Allowed
    FALSE,                                                  //!< bogTurretCntrClockWiseMoveAllow [[-]] Turret Counter Clockwise Move Allowed
    FALSE,                                                  //!< bogTurretClockWiseMoveAllow [[-]] Turret Clockwise Move Allowed
    FALSE,                                                  //!< bogBasketRotCtClockWiseMoveAllow [[-]] Basket Rotation Counter Clockwise Move Allow
    FALSE,                                                  //!< bogBasketRotClockWiseMoveAllow [[-]] Basket Rotation Clockwise Move Allow
    FALSE,                                                  //!< bogBasketInclinaisonMoveUpAllow [[-]] Basket Inclinaison Move Up Allow
    FALSE,                                                  //!< bogBasketIncliMoveDownAllow [[-]] Basket Inclinaison Move Down Allow
    FALSE,                                                  //!< bogOverloadSecurity [[-]] Basket Overload
    FALSE,                                                  //!< bogBasketStepClosed [[-]] Basket step closed
    FALSE,                                                  //!< bogSystemFault [[-]] System Fault
    FALSE,                                                  //!< bogBasketAccessLocked [[-]] Basket access locked
    FALSE,                                                  //!< bogMeasuringMastFault [[-]] Measuring Mast in Fault
    FALSE,                                                  //!< bogMeasuringMatOption [[-]] Measuring Mast Option
    FALSE,                                                  //!< bogSafeManSystem [[-]] Safe Man System
    FALSE,                                                  //!< bogEngineForcingMode [[-]] Engine in forcing mode
    FALSE,                                                  //!< bogEngineSilentMode [[-]] Engine in Silent mode
    FALSE,                                                  //!< bogTurretEncoderFault [[-]] Turret Encoder Fault
    FALSE,                                                  //!< bogSlopeSensorFault [[-]] Slope sensor fault
    (((0 * 1)/1)+0),                                        //!< u8gFuel [[-]] new signal
    (((0 * 1)/1)+0)                                         //!< i16gelescopePositionValue [[-]] new signal
};

const TCanSigRecVal_Msg3C1SendToOpus gCsr_ctRecDat_Msg3C1SendToOpus =
{
    //!< DebugDeltaArmAngle
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TINT16, TINT16, 0, 16, 0, 0, 1, 1 }, 
     { -32768, 32767, 0, 0 },
    //!< DebugArrowArmAngle
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TINT16, TINT16, 16, 16, 0, 0, 1, 1 }, 
     { -32768, 32767, 0, 0 },
    //!< DebugTelescopePosition
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TINT16, TINT16, 32, 16, 0, 0, 1, 1 }, 
     { -32768, 32767, 0, 0 },
    //!< DebugVehicleSlope
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TINT16, TINT16, 48, 16, 0, 0, 1, 1 }, 
     { -32768, 32767, 0, 0 }
};

static ESigSta mCsr_aeRecErr_tMsg3C1SendToOpus[4] =
{
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY
};

static TCanSigRecOldValMsg3C1SendToOpus mCsr_tOldDat_tMsg3C1SendToOpus =
{
    0,                                                      //!< i16DebugDeltaArmAngle [[-]] new signal
    0,                                                      //!< i16DebugArrowArmAngle [[-]] new signal
    0,                                                      //!< i16DebugTelescopePosition [[-]] new signal
    0                                                       //!< i16DebugVehicleSlope [[-]] new signal
};

extern TCanSigRecMsg3C1SendToOpus gCsr_tMsg3C1SendToOpus;
static const TRecDat mCsr_actRecDat_tMsg3C1SendToOpus[4] =
{
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg3C1SendToOpus.tCsrInfo_i16DebugDeltaArmAngle, (TVoid*)&gCsr_ctRecDat_Msg3C1SendToOpus.tCsrRng_i16DebugDeltaArmAngle,
        (TVoid*)&gCsr_tMsg3C1SendToOpus.i16DebugDeltaArmAngle, (TVoid*)&mCsr_tOldDat_tMsg3C1SendToOpus.i16DebugDeltaArmAngle, &mCsr_aeRecErr_tMsg3C1SendToOpus[0],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg3C1SendToOpus.tCsrInfo_i16DebugArrowArmAngle, (TVoid*)&gCsr_ctRecDat_Msg3C1SendToOpus.tCsrRng_i16DebugArrowArmAngle,
        (TVoid*)&gCsr_tMsg3C1SendToOpus.i16DebugArrowArmAngle, (TVoid*)&mCsr_tOldDat_tMsg3C1SendToOpus.i16DebugArrowArmAngle, &mCsr_aeRecErr_tMsg3C1SendToOpus[1],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg3C1SendToOpus.tCsrInfo_i16DebugTelescopePosition, (TVoid*)&gCsr_ctRecDat_Msg3C1SendToOpus.tCsrRng_i16DebugTelescopePosition,
        (TVoid*)&gCsr_tMsg3C1SendToOpus.i16DebugTelescopePosition, (TVoid*)&mCsr_tOldDat_tMsg3C1SendToOpus.i16DebugTelescopePosition, &mCsr_aeRecErr_tMsg3C1SendToOpus[2],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg3C1SendToOpus.tCsrInfo_i16DebugVehicleSlope, (TVoid*)&gCsr_ctRecDat_Msg3C1SendToOpus.tCsrRng_i16DebugVehicleSlope,
        (TVoid*)&gCsr_tMsg3C1SendToOpus.i16DebugVehicleSlope, (TVoid*)&mCsr_tOldDat_tMsg3C1SendToOpus.i16DebugVehicleSlope, &mCsr_aeRecErr_tMsg3C1SendToOpus[3],
        NULL, NULL
    }
};

static const TCanSigRecRoot mCsr_ctRoot_Msg3C1SendToOpus =
{
    "Msg3C1SendToOpus",                                     //!< achName - [STR] Name Msg3C1SendToOpus
    8,                                                      //!< u8Dlc - [NUM] DLC of Can Message
    0x00,                                                   //!< u8CanByteDflt - [NUM] CAN Message default
    DATA_INTEL,                                             //!< eCanFormat - [NUM] CAN Format
    0xFF,                                                   //!< u8MasterReceiveId - [NUM] Receive Id
    4,                                                      //!< u8RecCnt - [NUM] Count of Recorde
    &mCsr_actRecDat_tMsg3C1SendToOpus[0],                   //!< ptRec - [NUM] Pointer to Record Values
    13,                                                     //!< u16RecNo - [NUM] Record Number
    CSR_STAMP                                               //!< u16Stamp - [NUM] Safety stamp
};

TCanSigRecMsg3C1SendToOpus gCsr_tMsg3C1SendToOpus =
{
    &mCsr_ctRoot_Msg3C1SendToOpus,                          //!< *cptRoot [POI] Root connection
    (((0 * 1)/1)+0),                                        //!< i16DebugDeltaArmAngle [[-]] new signal
    (((0 * 1)/1)+0),                                        //!< i16DebugArrowArmAngle [[-]] new signal
    (((0 * 1)/1)+0),                                        //!< i16DebugTelescopePosition [[-]] new signal
    (((0 * 1)/1)+0)                                         //!< i16DebugVehicleSlope [[-]] new signal
};

const TCanSigRecVal_Msg5C1SendToOpus gCsr_ctRecDat_Msg5C1SendToOpus =
{
    //!< Pin230Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 0, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin243Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 1, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin244Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 2, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin245Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 3, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin256Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 4, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin257Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 5, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin258Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 6, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin103Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 7, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin127Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 8, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin104Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 9, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin128Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 10, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin105Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 11, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin129Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 12, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin106Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 13, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin130Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 14, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin107Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 15, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin131Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 16, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin108Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 17, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin132Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 18, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin109Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 19, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin133Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 20, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin110Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 21, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin134Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 22, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin111Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 23, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin135Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 24, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin112Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 25, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin136Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 26, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin113Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 27, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin137Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 28, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin114Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 29, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin138Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 30, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin115Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 31, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin139Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 32, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin116Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 33, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin140Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 34, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin117Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 35, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin141Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 36, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin122Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 37, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin146Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 38, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin123Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 39, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin147Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 40, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin124Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 41, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin148Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 42, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin153Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 43, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin177Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 44, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin156Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 45, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin180Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 46, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin159Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 47, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin183Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 48, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin186Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 49, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin162Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 50, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin189Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 51, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin165Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 52, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin192Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 53, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin168Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 54, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin195Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 55, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin171Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 56, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin154Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 57, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin178Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 58, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin157Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 59, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin181Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 60, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin160Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 61, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin184Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 62, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin187Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 63, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE }
};

static ESigSta mCsr_aeRecErr_tMsg5C1SendToOpus[64] =
{
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY
};

static TCanSigRecOldValMsg5C1SendToOpus mCsr_tOldDat_tMsg5C1SendToOpus =
{
    FALSE,                                                  //!< boPin230Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin243Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin244Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin245Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin256Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin257Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin258Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin103Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin127Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin104Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin128Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin105Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin129Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin106Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin130Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin107Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin131Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin108Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin132Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin109Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin133Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin110Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin134Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin111Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin135Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin112Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin136Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin113Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin137Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin114Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin138Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin115Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin139Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin116Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin140Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin117Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin141Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin122Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin146Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin123Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin147Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin124Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin148Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin153Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin177Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin156Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin180Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin159Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin183Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin186Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin162Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin189Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin165Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin192Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin168Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin195Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin171Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin154Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin178Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin157Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin181Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin160Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin184Fault [[-]] for the Neotec diag pages
    FALSE                                                   //!< boPin187Fault [[-]] for the Neotec diag pages
};

extern TCanSigRecMsg5C1SendToOpus gCsr_tMsg5C1SendToOpus;
static const TRecDat mCsr_actRecDat_tMsg5C1SendToOpus[64] =
{
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg5C1SendToOpus.tCsrInfo_boPin230Fault, (TVoid*)&gCsr_ctRecDat_Msg5C1SendToOpus.tCsrRng_boPin230Fault,
        (TVoid*)&gCsr_tMsg5C1SendToOpus.boPin230Fault, (TVoid*)&mCsr_tOldDat_tMsg5C1SendToOpus.boPin230Fault, &mCsr_aeRecErr_tMsg5C1SendToOpus[0],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg5C1SendToOpus.tCsrInfo_boPin243Fault, (TVoid*)&gCsr_ctRecDat_Msg5C1SendToOpus.tCsrRng_boPin243Fault,
        (TVoid*)&gCsr_tMsg5C1SendToOpus.boPin243Fault, (TVoid*)&mCsr_tOldDat_tMsg5C1SendToOpus.boPin243Fault, &mCsr_aeRecErr_tMsg5C1SendToOpus[1],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg5C1SendToOpus.tCsrInfo_boPin244Fault, (TVoid*)&gCsr_ctRecDat_Msg5C1SendToOpus.tCsrRng_boPin244Fault,
        (TVoid*)&gCsr_tMsg5C1SendToOpus.boPin244Fault, (TVoid*)&mCsr_tOldDat_tMsg5C1SendToOpus.boPin244Fault, &mCsr_aeRecErr_tMsg5C1SendToOpus[2],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg5C1SendToOpus.tCsrInfo_boPin245Fault, (TVoid*)&gCsr_ctRecDat_Msg5C1SendToOpus.tCsrRng_boPin245Fault,
        (TVoid*)&gCsr_tMsg5C1SendToOpus.boPin245Fault, (TVoid*)&mCsr_tOldDat_tMsg5C1SendToOpus.boPin245Fault, &mCsr_aeRecErr_tMsg5C1SendToOpus[3],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg5C1SendToOpus.tCsrInfo_boPin256Fault, (TVoid*)&gCsr_ctRecDat_Msg5C1SendToOpus.tCsrRng_boPin256Fault,
        (TVoid*)&gCsr_tMsg5C1SendToOpus.boPin256Fault, (TVoid*)&mCsr_tOldDat_tMsg5C1SendToOpus.boPin256Fault, &mCsr_aeRecErr_tMsg5C1SendToOpus[4],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg5C1SendToOpus.tCsrInfo_boPin257Fault, (TVoid*)&gCsr_ctRecDat_Msg5C1SendToOpus.tCsrRng_boPin257Fault,
        (TVoid*)&gCsr_tMsg5C1SendToOpus.boPin257Fault, (TVoid*)&mCsr_tOldDat_tMsg5C1SendToOpus.boPin257Fault, &mCsr_aeRecErr_tMsg5C1SendToOpus[5],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg5C1SendToOpus.tCsrInfo_boPin258Fault, (TVoid*)&gCsr_ctRecDat_Msg5C1SendToOpus.tCsrRng_boPin258Fault,
        (TVoid*)&gCsr_tMsg5C1SendToOpus.boPin258Fault, (TVoid*)&mCsr_tOldDat_tMsg5C1SendToOpus.boPin258Fault, &mCsr_aeRecErr_tMsg5C1SendToOpus[6],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg5C1SendToOpus.tCsrInfo_boPin103Fault, (TVoid*)&gCsr_ctRecDat_Msg5C1SendToOpus.tCsrRng_boPin103Fault,
        (TVoid*)&gCsr_tMsg5C1SendToOpus.boPin103Fault, (TVoid*)&mCsr_tOldDat_tMsg5C1SendToOpus.boPin103Fault, &mCsr_aeRecErr_tMsg5C1SendToOpus[7],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg5C1SendToOpus.tCsrInfo_boPin127Fault, (TVoid*)&gCsr_ctRecDat_Msg5C1SendToOpus.tCsrRng_boPin127Fault,
        (TVoid*)&gCsr_tMsg5C1SendToOpus.boPin127Fault, (TVoid*)&mCsr_tOldDat_tMsg5C1SendToOpus.boPin127Fault, &mCsr_aeRecErr_tMsg5C1SendToOpus[8],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg5C1SendToOpus.tCsrInfo_boPin104Fault, (TVoid*)&gCsr_ctRecDat_Msg5C1SendToOpus.tCsrRng_boPin104Fault,
        (TVoid*)&gCsr_tMsg5C1SendToOpus.boPin104Fault, (TVoid*)&mCsr_tOldDat_tMsg5C1SendToOpus.boPin104Fault, &mCsr_aeRecErr_tMsg5C1SendToOpus[9],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg5C1SendToOpus.tCsrInfo_boPin128Fault, (TVoid*)&gCsr_ctRecDat_Msg5C1SendToOpus.tCsrRng_boPin128Fault,
        (TVoid*)&gCsr_tMsg5C1SendToOpus.boPin128Fault, (TVoid*)&mCsr_tOldDat_tMsg5C1SendToOpus.boPin128Fault, &mCsr_aeRecErr_tMsg5C1SendToOpus[10],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg5C1SendToOpus.tCsrInfo_boPin105Fault, (TVoid*)&gCsr_ctRecDat_Msg5C1SendToOpus.tCsrRng_boPin105Fault,
        (TVoid*)&gCsr_tMsg5C1SendToOpus.boPin105Fault, (TVoid*)&mCsr_tOldDat_tMsg5C1SendToOpus.boPin105Fault, &mCsr_aeRecErr_tMsg5C1SendToOpus[11],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg5C1SendToOpus.tCsrInfo_boPin129Fault, (TVoid*)&gCsr_ctRecDat_Msg5C1SendToOpus.tCsrRng_boPin129Fault,
        (TVoid*)&gCsr_tMsg5C1SendToOpus.boPin129Fault, (TVoid*)&mCsr_tOldDat_tMsg5C1SendToOpus.boPin129Fault, &mCsr_aeRecErr_tMsg5C1SendToOpus[12],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg5C1SendToOpus.tCsrInfo_boPin106Fault, (TVoid*)&gCsr_ctRecDat_Msg5C1SendToOpus.tCsrRng_boPin106Fault,
        (TVoid*)&gCsr_tMsg5C1SendToOpus.boPin106Fault, (TVoid*)&mCsr_tOldDat_tMsg5C1SendToOpus.boPin106Fault, &mCsr_aeRecErr_tMsg5C1SendToOpus[13],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg5C1SendToOpus.tCsrInfo_boPin130Fault, (TVoid*)&gCsr_ctRecDat_Msg5C1SendToOpus.tCsrRng_boPin130Fault,
        (TVoid*)&gCsr_tMsg5C1SendToOpus.boPin130Fault, (TVoid*)&mCsr_tOldDat_tMsg5C1SendToOpus.boPin130Fault, &mCsr_aeRecErr_tMsg5C1SendToOpus[14],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg5C1SendToOpus.tCsrInfo_boPin107Fault, (TVoid*)&gCsr_ctRecDat_Msg5C1SendToOpus.tCsrRng_boPin107Fault,
        (TVoid*)&gCsr_tMsg5C1SendToOpus.boPin107Fault, (TVoid*)&mCsr_tOldDat_tMsg5C1SendToOpus.boPin107Fault, &mCsr_aeRecErr_tMsg5C1SendToOpus[15],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg5C1SendToOpus.tCsrInfo_boPin131Fault, (TVoid*)&gCsr_ctRecDat_Msg5C1SendToOpus.tCsrRng_boPin131Fault,
        (TVoid*)&gCsr_tMsg5C1SendToOpus.boPin131Fault, (TVoid*)&mCsr_tOldDat_tMsg5C1SendToOpus.boPin131Fault, &mCsr_aeRecErr_tMsg5C1SendToOpus[16],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg5C1SendToOpus.tCsrInfo_boPin108Fault, (TVoid*)&gCsr_ctRecDat_Msg5C1SendToOpus.tCsrRng_boPin108Fault,
        (TVoid*)&gCsr_tMsg5C1SendToOpus.boPin108Fault, (TVoid*)&mCsr_tOldDat_tMsg5C1SendToOpus.boPin108Fault, &mCsr_aeRecErr_tMsg5C1SendToOpus[17],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg5C1SendToOpus.tCsrInfo_boPin132Fault, (TVoid*)&gCsr_ctRecDat_Msg5C1SendToOpus.tCsrRng_boPin132Fault,
        (TVoid*)&gCsr_tMsg5C1SendToOpus.boPin132Fault, (TVoid*)&mCsr_tOldDat_tMsg5C1SendToOpus.boPin132Fault, &mCsr_aeRecErr_tMsg5C1SendToOpus[18],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg5C1SendToOpus.tCsrInfo_boPin109Fault, (TVoid*)&gCsr_ctRecDat_Msg5C1SendToOpus.tCsrRng_boPin109Fault,
        (TVoid*)&gCsr_tMsg5C1SendToOpus.boPin109Fault, (TVoid*)&mCsr_tOldDat_tMsg5C1SendToOpus.boPin109Fault, &mCsr_aeRecErr_tMsg5C1SendToOpus[19],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg5C1SendToOpus.tCsrInfo_boPin133Fault, (TVoid*)&gCsr_ctRecDat_Msg5C1SendToOpus.tCsrRng_boPin133Fault,
        (TVoid*)&gCsr_tMsg5C1SendToOpus.boPin133Fault, (TVoid*)&mCsr_tOldDat_tMsg5C1SendToOpus.boPin133Fault, &mCsr_aeRecErr_tMsg5C1SendToOpus[20],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg5C1SendToOpus.tCsrInfo_boPin110Fault, (TVoid*)&gCsr_ctRecDat_Msg5C1SendToOpus.tCsrRng_boPin110Fault,
        (TVoid*)&gCsr_tMsg5C1SendToOpus.boPin110Fault, (TVoid*)&mCsr_tOldDat_tMsg5C1SendToOpus.boPin110Fault, &mCsr_aeRecErr_tMsg5C1SendToOpus[21],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg5C1SendToOpus.tCsrInfo_boPin134Fault, (TVoid*)&gCsr_ctRecDat_Msg5C1SendToOpus.tCsrRng_boPin134Fault,
        (TVoid*)&gCsr_tMsg5C1SendToOpus.boPin134Fault, (TVoid*)&mCsr_tOldDat_tMsg5C1SendToOpus.boPin134Fault, &mCsr_aeRecErr_tMsg5C1SendToOpus[22],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg5C1SendToOpus.tCsrInfo_boPin111Fault, (TVoid*)&gCsr_ctRecDat_Msg5C1SendToOpus.tCsrRng_boPin111Fault,
        (TVoid*)&gCsr_tMsg5C1SendToOpus.boPin111Fault, (TVoid*)&mCsr_tOldDat_tMsg5C1SendToOpus.boPin111Fault, &mCsr_aeRecErr_tMsg5C1SendToOpus[23],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg5C1SendToOpus.tCsrInfo_boPin135Fault, (TVoid*)&gCsr_ctRecDat_Msg5C1SendToOpus.tCsrRng_boPin135Fault,
        (TVoid*)&gCsr_tMsg5C1SendToOpus.boPin135Fault, (TVoid*)&mCsr_tOldDat_tMsg5C1SendToOpus.boPin135Fault, &mCsr_aeRecErr_tMsg5C1SendToOpus[24],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg5C1SendToOpus.tCsrInfo_boPin112Fault, (TVoid*)&gCsr_ctRecDat_Msg5C1SendToOpus.tCsrRng_boPin112Fault,
        (TVoid*)&gCsr_tMsg5C1SendToOpus.boPin112Fault, (TVoid*)&mCsr_tOldDat_tMsg5C1SendToOpus.boPin112Fault, &mCsr_aeRecErr_tMsg5C1SendToOpus[25],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg5C1SendToOpus.tCsrInfo_boPin136Fault, (TVoid*)&gCsr_ctRecDat_Msg5C1SendToOpus.tCsrRng_boPin136Fault,
        (TVoid*)&gCsr_tMsg5C1SendToOpus.boPin136Fault, (TVoid*)&mCsr_tOldDat_tMsg5C1SendToOpus.boPin136Fault, &mCsr_aeRecErr_tMsg5C1SendToOpus[26],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg5C1SendToOpus.tCsrInfo_boPin113Fault, (TVoid*)&gCsr_ctRecDat_Msg5C1SendToOpus.tCsrRng_boPin113Fault,
        (TVoid*)&gCsr_tMsg5C1SendToOpus.boPin113Fault, (TVoid*)&mCsr_tOldDat_tMsg5C1SendToOpus.boPin113Fault, &mCsr_aeRecErr_tMsg5C1SendToOpus[27],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg5C1SendToOpus.tCsrInfo_boPin137Fault, (TVoid*)&gCsr_ctRecDat_Msg5C1SendToOpus.tCsrRng_boPin137Fault,
        (TVoid*)&gCsr_tMsg5C1SendToOpus.boPin137Fault, (TVoid*)&mCsr_tOldDat_tMsg5C1SendToOpus.boPin137Fault, &mCsr_aeRecErr_tMsg5C1SendToOpus[28],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg5C1SendToOpus.tCsrInfo_boPin114Fault, (TVoid*)&gCsr_ctRecDat_Msg5C1SendToOpus.tCsrRng_boPin114Fault,
        (TVoid*)&gCsr_tMsg5C1SendToOpus.boPin114Fault, (TVoid*)&mCsr_tOldDat_tMsg5C1SendToOpus.boPin114Fault, &mCsr_aeRecErr_tMsg5C1SendToOpus[29],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg5C1SendToOpus.tCsrInfo_boPin138Fault, (TVoid*)&gCsr_ctRecDat_Msg5C1SendToOpus.tCsrRng_boPin138Fault,
        (TVoid*)&gCsr_tMsg5C1SendToOpus.boPin138Fault, (TVoid*)&mCsr_tOldDat_tMsg5C1SendToOpus.boPin138Fault, &mCsr_aeRecErr_tMsg5C1SendToOpus[30],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg5C1SendToOpus.tCsrInfo_boPin115Fault, (TVoid*)&gCsr_ctRecDat_Msg5C1SendToOpus.tCsrRng_boPin115Fault,
        (TVoid*)&gCsr_tMsg5C1SendToOpus.boPin115Fault, (TVoid*)&mCsr_tOldDat_tMsg5C1SendToOpus.boPin115Fault, &mCsr_aeRecErr_tMsg5C1SendToOpus[31],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg5C1SendToOpus.tCsrInfo_boPin139Fault, (TVoid*)&gCsr_ctRecDat_Msg5C1SendToOpus.tCsrRng_boPin139Fault,
        (TVoid*)&gCsr_tMsg5C1SendToOpus.boPin139Fault, (TVoid*)&mCsr_tOldDat_tMsg5C1SendToOpus.boPin139Fault, &mCsr_aeRecErr_tMsg5C1SendToOpus[32],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg5C1SendToOpus.tCsrInfo_boPin116Fault, (TVoid*)&gCsr_ctRecDat_Msg5C1SendToOpus.tCsrRng_boPin116Fault,
        (TVoid*)&gCsr_tMsg5C1SendToOpus.boPin116Fault, (TVoid*)&mCsr_tOldDat_tMsg5C1SendToOpus.boPin116Fault, &mCsr_aeRecErr_tMsg5C1SendToOpus[33],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg5C1SendToOpus.tCsrInfo_boPin140Fault, (TVoid*)&gCsr_ctRecDat_Msg5C1SendToOpus.tCsrRng_boPin140Fault,
        (TVoid*)&gCsr_tMsg5C1SendToOpus.boPin140Fault, (TVoid*)&mCsr_tOldDat_tMsg5C1SendToOpus.boPin140Fault, &mCsr_aeRecErr_tMsg5C1SendToOpus[34],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg5C1SendToOpus.tCsrInfo_boPin117Fault, (TVoid*)&gCsr_ctRecDat_Msg5C1SendToOpus.tCsrRng_boPin117Fault,
        (TVoid*)&gCsr_tMsg5C1SendToOpus.boPin117Fault, (TVoid*)&mCsr_tOldDat_tMsg5C1SendToOpus.boPin117Fault, &mCsr_aeRecErr_tMsg5C1SendToOpus[35],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg5C1SendToOpus.tCsrInfo_boPin141Fault, (TVoid*)&gCsr_ctRecDat_Msg5C1SendToOpus.tCsrRng_boPin141Fault,
        (TVoid*)&gCsr_tMsg5C1SendToOpus.boPin141Fault, (TVoid*)&mCsr_tOldDat_tMsg5C1SendToOpus.boPin141Fault, &mCsr_aeRecErr_tMsg5C1SendToOpus[36],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg5C1SendToOpus.tCsrInfo_boPin122Fault, (TVoid*)&gCsr_ctRecDat_Msg5C1SendToOpus.tCsrRng_boPin122Fault,
        (TVoid*)&gCsr_tMsg5C1SendToOpus.boPin122Fault, (TVoid*)&mCsr_tOldDat_tMsg5C1SendToOpus.boPin122Fault, &mCsr_aeRecErr_tMsg5C1SendToOpus[37],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg5C1SendToOpus.tCsrInfo_boPin146Fault, (TVoid*)&gCsr_ctRecDat_Msg5C1SendToOpus.tCsrRng_boPin146Fault,
        (TVoid*)&gCsr_tMsg5C1SendToOpus.boPin146Fault, (TVoid*)&mCsr_tOldDat_tMsg5C1SendToOpus.boPin146Fault, &mCsr_aeRecErr_tMsg5C1SendToOpus[38],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg5C1SendToOpus.tCsrInfo_boPin123Fault, (TVoid*)&gCsr_ctRecDat_Msg5C1SendToOpus.tCsrRng_boPin123Fault,
        (TVoid*)&gCsr_tMsg5C1SendToOpus.boPin123Fault, (TVoid*)&mCsr_tOldDat_tMsg5C1SendToOpus.boPin123Fault, &mCsr_aeRecErr_tMsg5C1SendToOpus[39],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg5C1SendToOpus.tCsrInfo_boPin147Fault, (TVoid*)&gCsr_ctRecDat_Msg5C1SendToOpus.tCsrRng_boPin147Fault,
        (TVoid*)&gCsr_tMsg5C1SendToOpus.boPin147Fault, (TVoid*)&mCsr_tOldDat_tMsg5C1SendToOpus.boPin147Fault, &mCsr_aeRecErr_tMsg5C1SendToOpus[40],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg5C1SendToOpus.tCsrInfo_boPin124Fault, (TVoid*)&gCsr_ctRecDat_Msg5C1SendToOpus.tCsrRng_boPin124Fault,
        (TVoid*)&gCsr_tMsg5C1SendToOpus.boPin124Fault, (TVoid*)&mCsr_tOldDat_tMsg5C1SendToOpus.boPin124Fault, &mCsr_aeRecErr_tMsg5C1SendToOpus[41],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg5C1SendToOpus.tCsrInfo_boPin148Fault, (TVoid*)&gCsr_ctRecDat_Msg5C1SendToOpus.tCsrRng_boPin148Fault,
        (TVoid*)&gCsr_tMsg5C1SendToOpus.boPin148Fault, (TVoid*)&mCsr_tOldDat_tMsg5C1SendToOpus.boPin148Fault, &mCsr_aeRecErr_tMsg5C1SendToOpus[42],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg5C1SendToOpus.tCsrInfo_boPin153Fault, (TVoid*)&gCsr_ctRecDat_Msg5C1SendToOpus.tCsrRng_boPin153Fault,
        (TVoid*)&gCsr_tMsg5C1SendToOpus.boPin153Fault, (TVoid*)&mCsr_tOldDat_tMsg5C1SendToOpus.boPin153Fault, &mCsr_aeRecErr_tMsg5C1SendToOpus[43],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg5C1SendToOpus.tCsrInfo_boPin177Fault, (TVoid*)&gCsr_ctRecDat_Msg5C1SendToOpus.tCsrRng_boPin177Fault,
        (TVoid*)&gCsr_tMsg5C1SendToOpus.boPin177Fault, (TVoid*)&mCsr_tOldDat_tMsg5C1SendToOpus.boPin177Fault, &mCsr_aeRecErr_tMsg5C1SendToOpus[44],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg5C1SendToOpus.tCsrInfo_boPin156Fault, (TVoid*)&gCsr_ctRecDat_Msg5C1SendToOpus.tCsrRng_boPin156Fault,
        (TVoid*)&gCsr_tMsg5C1SendToOpus.boPin156Fault, (TVoid*)&mCsr_tOldDat_tMsg5C1SendToOpus.boPin156Fault, &mCsr_aeRecErr_tMsg5C1SendToOpus[45],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg5C1SendToOpus.tCsrInfo_boPin180Fault, (TVoid*)&gCsr_ctRecDat_Msg5C1SendToOpus.tCsrRng_boPin180Fault,
        (TVoid*)&gCsr_tMsg5C1SendToOpus.boPin180Fault, (TVoid*)&mCsr_tOldDat_tMsg5C1SendToOpus.boPin180Fault, &mCsr_aeRecErr_tMsg5C1SendToOpus[46],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg5C1SendToOpus.tCsrInfo_boPin159Fault, (TVoid*)&gCsr_ctRecDat_Msg5C1SendToOpus.tCsrRng_boPin159Fault,
        (TVoid*)&gCsr_tMsg5C1SendToOpus.boPin159Fault, (TVoid*)&mCsr_tOldDat_tMsg5C1SendToOpus.boPin159Fault, &mCsr_aeRecErr_tMsg5C1SendToOpus[47],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg5C1SendToOpus.tCsrInfo_boPin183Fault, (TVoid*)&gCsr_ctRecDat_Msg5C1SendToOpus.tCsrRng_boPin183Fault,
        (TVoid*)&gCsr_tMsg5C1SendToOpus.boPin183Fault, (TVoid*)&mCsr_tOldDat_tMsg5C1SendToOpus.boPin183Fault, &mCsr_aeRecErr_tMsg5C1SendToOpus[48],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg5C1SendToOpus.tCsrInfo_boPin186Fault, (TVoid*)&gCsr_ctRecDat_Msg5C1SendToOpus.tCsrRng_boPin186Fault,
        (TVoid*)&gCsr_tMsg5C1SendToOpus.boPin186Fault, (TVoid*)&mCsr_tOldDat_tMsg5C1SendToOpus.boPin186Fault, &mCsr_aeRecErr_tMsg5C1SendToOpus[49],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg5C1SendToOpus.tCsrInfo_boPin162Fault, (TVoid*)&gCsr_ctRecDat_Msg5C1SendToOpus.tCsrRng_boPin162Fault,
        (TVoid*)&gCsr_tMsg5C1SendToOpus.boPin162Fault, (TVoid*)&mCsr_tOldDat_tMsg5C1SendToOpus.boPin162Fault, &mCsr_aeRecErr_tMsg5C1SendToOpus[50],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg5C1SendToOpus.tCsrInfo_boPin189Fault, (TVoid*)&gCsr_ctRecDat_Msg5C1SendToOpus.tCsrRng_boPin189Fault,
        (TVoid*)&gCsr_tMsg5C1SendToOpus.boPin189Fault, (TVoid*)&mCsr_tOldDat_tMsg5C1SendToOpus.boPin189Fault, &mCsr_aeRecErr_tMsg5C1SendToOpus[51],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg5C1SendToOpus.tCsrInfo_boPin165Fault, (TVoid*)&gCsr_ctRecDat_Msg5C1SendToOpus.tCsrRng_boPin165Fault,
        (TVoid*)&gCsr_tMsg5C1SendToOpus.boPin165Fault, (TVoid*)&mCsr_tOldDat_tMsg5C1SendToOpus.boPin165Fault, &mCsr_aeRecErr_tMsg5C1SendToOpus[52],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg5C1SendToOpus.tCsrInfo_boPin192Fault, (TVoid*)&gCsr_ctRecDat_Msg5C1SendToOpus.tCsrRng_boPin192Fault,
        (TVoid*)&gCsr_tMsg5C1SendToOpus.boPin192Fault, (TVoid*)&mCsr_tOldDat_tMsg5C1SendToOpus.boPin192Fault, &mCsr_aeRecErr_tMsg5C1SendToOpus[53],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg5C1SendToOpus.tCsrInfo_boPin168Fault, (TVoid*)&gCsr_ctRecDat_Msg5C1SendToOpus.tCsrRng_boPin168Fault,
        (TVoid*)&gCsr_tMsg5C1SendToOpus.boPin168Fault, (TVoid*)&mCsr_tOldDat_tMsg5C1SendToOpus.boPin168Fault, &mCsr_aeRecErr_tMsg5C1SendToOpus[54],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg5C1SendToOpus.tCsrInfo_boPin195Fault, (TVoid*)&gCsr_ctRecDat_Msg5C1SendToOpus.tCsrRng_boPin195Fault,
        (TVoid*)&gCsr_tMsg5C1SendToOpus.boPin195Fault, (TVoid*)&mCsr_tOldDat_tMsg5C1SendToOpus.boPin195Fault, &mCsr_aeRecErr_tMsg5C1SendToOpus[55],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg5C1SendToOpus.tCsrInfo_boPin171Fault, (TVoid*)&gCsr_ctRecDat_Msg5C1SendToOpus.tCsrRng_boPin171Fault,
        (TVoid*)&gCsr_tMsg5C1SendToOpus.boPin171Fault, (TVoid*)&mCsr_tOldDat_tMsg5C1SendToOpus.boPin171Fault, &mCsr_aeRecErr_tMsg5C1SendToOpus[56],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg5C1SendToOpus.tCsrInfo_boPin154Fault, (TVoid*)&gCsr_ctRecDat_Msg5C1SendToOpus.tCsrRng_boPin154Fault,
        (TVoid*)&gCsr_tMsg5C1SendToOpus.boPin154Fault, (TVoid*)&mCsr_tOldDat_tMsg5C1SendToOpus.boPin154Fault, &mCsr_aeRecErr_tMsg5C1SendToOpus[57],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg5C1SendToOpus.tCsrInfo_boPin178Fault, (TVoid*)&gCsr_ctRecDat_Msg5C1SendToOpus.tCsrRng_boPin178Fault,
        (TVoid*)&gCsr_tMsg5C1SendToOpus.boPin178Fault, (TVoid*)&mCsr_tOldDat_tMsg5C1SendToOpus.boPin178Fault, &mCsr_aeRecErr_tMsg5C1SendToOpus[58],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg5C1SendToOpus.tCsrInfo_boPin157Fault, (TVoid*)&gCsr_ctRecDat_Msg5C1SendToOpus.tCsrRng_boPin157Fault,
        (TVoid*)&gCsr_tMsg5C1SendToOpus.boPin157Fault, (TVoid*)&mCsr_tOldDat_tMsg5C1SendToOpus.boPin157Fault, &mCsr_aeRecErr_tMsg5C1SendToOpus[59],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg5C1SendToOpus.tCsrInfo_boPin181Fault, (TVoid*)&gCsr_ctRecDat_Msg5C1SendToOpus.tCsrRng_boPin181Fault,
        (TVoid*)&gCsr_tMsg5C1SendToOpus.boPin181Fault, (TVoid*)&mCsr_tOldDat_tMsg5C1SendToOpus.boPin181Fault, &mCsr_aeRecErr_tMsg5C1SendToOpus[60],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg5C1SendToOpus.tCsrInfo_boPin160Fault, (TVoid*)&gCsr_ctRecDat_Msg5C1SendToOpus.tCsrRng_boPin160Fault,
        (TVoid*)&gCsr_tMsg5C1SendToOpus.boPin160Fault, (TVoid*)&mCsr_tOldDat_tMsg5C1SendToOpus.boPin160Fault, &mCsr_aeRecErr_tMsg5C1SendToOpus[61],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg5C1SendToOpus.tCsrInfo_boPin184Fault, (TVoid*)&gCsr_ctRecDat_Msg5C1SendToOpus.tCsrRng_boPin184Fault,
        (TVoid*)&gCsr_tMsg5C1SendToOpus.boPin184Fault, (TVoid*)&mCsr_tOldDat_tMsg5C1SendToOpus.boPin184Fault, &mCsr_aeRecErr_tMsg5C1SendToOpus[62],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg5C1SendToOpus.tCsrInfo_boPin187Fault, (TVoid*)&gCsr_ctRecDat_Msg5C1SendToOpus.tCsrRng_boPin187Fault,
        (TVoid*)&gCsr_tMsg5C1SendToOpus.boPin187Fault, (TVoid*)&mCsr_tOldDat_tMsg5C1SendToOpus.boPin187Fault, &mCsr_aeRecErr_tMsg5C1SendToOpus[63],
        NULL, NULL
    }
};

static const TCanSigRecRoot mCsr_ctRoot_Msg5C1SendToOpus =
{
    "Msg5C1SendToOpus",                                     //!< achName - [STR] Name Msg5C1SendToOpus
    8,                                                      //!< u8Dlc - [NUM] DLC of Can Message
    0x00,                                                   //!< u8CanByteDflt - [NUM] CAN Message default
    DATA_INTEL,                                             //!< eCanFormat - [NUM] CAN Format
    0xFF,                                                   //!< u8MasterReceiveId - [NUM] Receive Id
    64,                                                     //!< u8RecCnt - [NUM] Count of Recorde
    &mCsr_actRecDat_tMsg5C1SendToOpus[0],                   //!< ptRec - [NUM] Pointer to Record Values
    14,                                                     //!< u16RecNo - [NUM] Record Number
    CSR_STAMP                                               //!< u16Stamp - [NUM] Safety stamp
};

TCanSigRecMsg5C1SendToOpus gCsr_tMsg5C1SendToOpus =
{
    &mCsr_ctRoot_Msg5C1SendToOpus,                          //!< *cptRoot [POI] Root connection
    FALSE,                                                  //!< boPin230Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin243Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin244Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin245Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin256Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin257Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin258Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin103Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin127Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin104Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin128Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin105Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin129Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin106Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin130Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin107Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin131Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin108Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin132Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin109Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin133Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin110Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin134Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin111Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin135Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin112Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin136Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin113Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin137Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin114Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin138Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin115Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin139Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin116Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin140Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin117Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin141Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin122Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin146Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin123Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin147Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin124Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin148Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin153Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin177Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin156Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin180Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin159Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin183Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin186Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin162Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin189Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin165Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin192Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin168Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin195Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin171Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin154Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin178Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin157Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin181Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin160Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin184Fault [[-]] for the Neotec diag pages
    FALSE                                                   //!< boPin187Fault [[-]] for the Neotec diag pages
};

const TCanSigRecVal_Msg7C1SendToOpus gCsr_ctRecDat_Msg7C1SendToOpus =
{
    //!< gPvgDeltaArmVoltage
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TUINT16, TUINT16, 0, 16, 0, 0, 1, 1 }, 
     { U16_MIN, U16_MAX, 0, 0 },
    //!< gPvgArrowArmVoltage
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TUINT16, TUINT16, 16, 16, 0, 0, 1, 1 }, 
     { U16_MIN, U16_MAX, 0, 0 },
    //!< gPvgTelescopeArmVoltage
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TUINT16, TUINT16, 32, 16, 0, 0, 1, 1 }, 
     { U16_MIN, U16_MAX, 0, 0 },
    //!< gPvgEvTorVoltage
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TUINT16, TUINT16, 48, 16, 0, 0, 1, 1 }, 
     { U16_MIN, U16_MAX, 0, 0 }
};

static ESigSta mCsr_aeRecErr_tMsg7C1SendToOpus[4] =
{
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY
};

static TCanSigRecOldValMsg7C1SendToOpus mCsr_tOldDat_tMsg7C1SendToOpus =
{
    0,                                                      //!< u16gPvgDeltaArmVoltage [[-]] new signal
    0,                                                      //!< u16gPvgArrowArmVoltage [[-]] new signal
    0,                                                      //!< u16gPvgTelescopeArmVoltage [[-]] new signal
    0                                                       //!< u16gPvgEvTorVoltage [[-]] new signal
};

extern TCanSigRecMsg7C1SendToOpus gCsr_tMsg7C1SendToOpus;
static const TRecDat mCsr_actRecDat_tMsg7C1SendToOpus[4] =
{
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg7C1SendToOpus.tCsrInfo_u16gPvgDeltaArmVoltage, (TVoid*)&gCsr_ctRecDat_Msg7C1SendToOpus.tCsrRng_u16gPvgDeltaArmVoltage,
        (TVoid*)&gCsr_tMsg7C1SendToOpus.u16gPvgDeltaArmVoltage, (TVoid*)&mCsr_tOldDat_tMsg7C1SendToOpus.u16gPvgDeltaArmVoltage, &mCsr_aeRecErr_tMsg7C1SendToOpus[0],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg7C1SendToOpus.tCsrInfo_u16gPvgArrowArmVoltage, (TVoid*)&gCsr_ctRecDat_Msg7C1SendToOpus.tCsrRng_u16gPvgArrowArmVoltage,
        (TVoid*)&gCsr_tMsg7C1SendToOpus.u16gPvgArrowArmVoltage, (TVoid*)&mCsr_tOldDat_tMsg7C1SendToOpus.u16gPvgArrowArmVoltage, &mCsr_aeRecErr_tMsg7C1SendToOpus[1],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg7C1SendToOpus.tCsrInfo_u16gPvgTelescopeArmVoltage, (TVoid*)&gCsr_ctRecDat_Msg7C1SendToOpus.tCsrRng_u16gPvgTelescopeArmVoltage,
        (TVoid*)&gCsr_tMsg7C1SendToOpus.u16gPvgTelescopeArmVoltage, (TVoid*)&mCsr_tOldDat_tMsg7C1SendToOpus.u16gPvgTelescopeArmVoltage, &mCsr_aeRecErr_tMsg7C1SendToOpus[2],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg7C1SendToOpus.tCsrInfo_u16gPvgEvTorVoltage, (TVoid*)&gCsr_ctRecDat_Msg7C1SendToOpus.tCsrRng_u16gPvgEvTorVoltage,
        (TVoid*)&gCsr_tMsg7C1SendToOpus.u16gPvgEvTorVoltage, (TVoid*)&mCsr_tOldDat_tMsg7C1SendToOpus.u16gPvgEvTorVoltage, &mCsr_aeRecErr_tMsg7C1SendToOpus[3],
        NULL, NULL
    }
};

static const TCanSigRecRoot mCsr_ctRoot_Msg7C1SendToOpus =
{
    "Msg7C1SendToOpus",                                     //!< achName - [STR] Name Msg7C1SendToOpus
    8,                                                      //!< u8Dlc - [NUM] DLC of Can Message
    0x00,                                                   //!< u8CanByteDflt - [NUM] CAN Message default
    DATA_INTEL,                                             //!< eCanFormat - [NUM] CAN Format
    0xFF,                                                   //!< u8MasterReceiveId - [NUM] Receive Id
    4,                                                      //!< u8RecCnt - [NUM] Count of Recorde
    &mCsr_actRecDat_tMsg7C1SendToOpus[0],                   //!< ptRec - [NUM] Pointer to Record Values
    15,                                                     //!< u16RecNo - [NUM] Record Number
    CSR_STAMP                                               //!< u16Stamp - [NUM] Safety stamp
};

TCanSigRecMsg7C1SendToOpus gCsr_tMsg7C1SendToOpus =
{
    &mCsr_ctRoot_Msg7C1SendToOpus,                          //!< *cptRoot [POI] Root connection
    (((0 * 1)/1)+0),                                        //!< u16gPvgDeltaArmVoltage [[-]] new signal
    (((0 * 1)/1)+0),                                        //!< u16gPvgArrowArmVoltage [[-]] new signal
    (((0 * 1)/1)+0),                                        //!< u16gPvgTelescopeArmVoltage [[-]] new signal
    (((0 * 1)/1)+0)                                         //!< u16gPvgEvTorVoltage [[-]] new signal
};

const TCanSigRecVal_PDO4_48XS gCsr_ctRecDat_PDO4_48XS =
{
    //!< RotationTurretAxisJoystick
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TUINT16, TUINT16, 0, 16, 0, 0, 1, 1 }, 
     { U16_MIN, U16_MAX, 0, 0 },
    //!< RearmementSafetyManSystem
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TUINT16, TUINT16, 16, 16, 0, 0, 1, 1 }, 
     { U16_MIN, U16_MAX, 0, 0 },
    //!< AbutementNacelleTrackSide
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TUINT16, TUINT16, 32, 16, 0, 0, 1, 1 }, 
     { U16_MIN, U16_MAX, 0, 0 },
    //!< AbutementNacelleCenteredSide
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TUINT16, TUINT16, 48, 16, 0, 0, 1, 1 }, 
     { U16_MIN, U16_MAX, 0, 0 }
};

static ESigSta mCsr_aeRecErr_tPDO4_48XS[4] =
{
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY
};

static TCanSigRecOldValPDO4_48XS mCsr_tOldDat_tPDO4_48XS =
{
    0,                                                      //!< u16RotationTurretAxisJoystick [[-]] new signal
    0,                                                      //!< u16RearmementSafetyManSystem [[-]] new signal
    0,                                                      //!< u16AbutementNacelleTrackSide [[-]] new signal
    0                                                       //!< u16AbutementNacelleCenteredSide [[-]] new signal
};

extern TCanSigRecPDO4_48XS gCsr_tPDO4_48XS;
static const TRecDat mCsr_actRecDat_tPDO4_48XS[4] =
{
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_PDO4_48XS.tCsrInfo_u16RotationTurretAxisJoystick, (TVoid*)&gCsr_ctRecDat_PDO4_48XS.tCsrRng_u16RotationTurretAxisJoystick,
        (TVoid*)&gCsr_tPDO4_48XS.u16RotationTurretAxisJoystick, (TVoid*)&mCsr_tOldDat_tPDO4_48XS.u16RotationTurretAxisJoystick, &mCsr_aeRecErr_tPDO4_48XS[0],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_PDO4_48XS.tCsrInfo_u16RearmementSafetyManSystem, (TVoid*)&gCsr_ctRecDat_PDO4_48XS.tCsrRng_u16RearmementSafetyManSystem,
        (TVoid*)&gCsr_tPDO4_48XS.u16RearmementSafetyManSystem, (TVoid*)&mCsr_tOldDat_tPDO4_48XS.u16RearmementSafetyManSystem, &mCsr_aeRecErr_tPDO4_48XS[1],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_PDO4_48XS.tCsrInfo_u16AbutementNacelleTrackSide, (TVoid*)&gCsr_ctRecDat_PDO4_48XS.tCsrRng_u16AbutementNacelleTrackSide,
        (TVoid*)&gCsr_tPDO4_48XS.u16AbutementNacelleTrackSide, (TVoid*)&mCsr_tOldDat_tPDO4_48XS.u16AbutementNacelleTrackSide, &mCsr_aeRecErr_tPDO4_48XS[2],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_PDO4_48XS.tCsrInfo_u16AbutementNacelleCenteredSide, (TVoid*)&gCsr_ctRecDat_PDO4_48XS.tCsrRng_u16AbutementNacelleCenteredSide,
        (TVoid*)&gCsr_tPDO4_48XS.u16AbutementNacelleCenteredSide, (TVoid*)&mCsr_tOldDat_tPDO4_48XS.u16AbutementNacelleCenteredSide, &mCsr_aeRecErr_tPDO4_48XS[3],
        NULL, NULL
    }
};

static const TCanSigRecRoot mCsr_ctRoot_PDO4_48XS =
{
    "PDO4_48XS",                                            //!< achName - [STR] Name PDO4_48XS
    8,                                                      //!< u8Dlc - [NUM] DLC of Can Message
    0xff,                                                   //!< u8CanByteDflt - [NUM] CAN Message default
    DATA_INTEL,                                             //!< eCanFormat - [NUM] CAN Format
    0xFF,                                                   //!< u8MasterReceiveId - [NUM] Receive Id
    4,                                                      //!< u8RecCnt - [NUM] Count of Recorde
    &mCsr_actRecDat_tPDO4_48XS[0],                          //!< ptRec - [NUM] Pointer to Record Values
    16,                                                     //!< u16RecNo - [NUM] Record Number
    CSR_STAMP                                               //!< u16Stamp - [NUM] Safety stamp
};

TCanSigRecPDO4_48XS gCsr_tPDO4_48XS =
{
    &mCsr_ctRoot_PDO4_48XS,                                 //!< *cptRoot [POI] Root connection
    (((0 * 1)/1)+0),                                        //!< u16RotationTurretAxisJoystick [[-]] new signal
    (((0 * 1)/1)+0),                                        //!< u16RearmementSafetyManSystem [[-]] new signal
    (((0 * 1)/1)+0),                                        //!< u16AbutementNacelleTrackSide [[-]] new signal
    (((0 * 1)/1)+0)                                         //!< u16AbutementNacelleCenteredSide [[-]] new signal
};

const TCanSigRecVal_Msg2C1SendToOpus gCsr_ctRecDat_Msg2C1SendToOpus =
{
    //!< gBatteryVoltageMv
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TUINT16, TUINT16, 0, 16, 0, 0, 1, 1 }, 
     { U16_MIN, U16_MAX, 0, 0 },
    //!< gEngineRPM
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TUINT16, TUINT16, 16, 16, 0, 0, 1, 1 }, 
     { U16_MIN, U16_MAX, 0, 0 },
    //!< gDeltaArmAngleValue
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TINT16, TINT16, 32, 16, 0, 0, 1, 1 }, 
     { I16_MIN, I16_MAX, 0, 0 },
    //!< gArrowArmAngleValue
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TINT16, TINT16, 48, 16, 0, 0, 1, 1 }, 
     { I16_MIN, I16_MAX, 0, 0 }
};

static ESigSta mCsr_aeRecErr_tMsg2C1SendToOpus[4] =
{
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY
};

static TCanSigRecOldValMsg2C1SendToOpus mCsr_tOldDat_tMsg2C1SendToOpus =
{
    0,                                                      //!< u16gBatteryVoltageMv [[-]] Fuel in Litter
    0,                                                      //!< u16gEngineRPM [[-]] Battery Voltage mV
    0,                                                      //!< i16gDeltaArmAngleValue [[-]] new signal
    0                                                       //!< i16gArrowArmAngleValue [[-]] new signal
};

extern TCanSigRecMsg2C1SendToOpus gCsr_tMsg2C1SendToOpus;
static const TRecDat mCsr_actRecDat_tMsg2C1SendToOpus[4] =
{
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg2C1SendToOpus.tCsrInfo_u16gBatteryVoltageMv, (TVoid*)&gCsr_ctRecDat_Msg2C1SendToOpus.tCsrRng_u16gBatteryVoltageMv,
        (TVoid*)&gCsr_tMsg2C1SendToOpus.u16gBatteryVoltageMv, (TVoid*)&mCsr_tOldDat_tMsg2C1SendToOpus.u16gBatteryVoltageMv, &mCsr_aeRecErr_tMsg2C1SendToOpus[0],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg2C1SendToOpus.tCsrInfo_u16gEngineRPM, (TVoid*)&gCsr_ctRecDat_Msg2C1SendToOpus.tCsrRng_u16gEngineRPM,
        (TVoid*)&gCsr_tMsg2C1SendToOpus.u16gEngineRPM, (TVoid*)&mCsr_tOldDat_tMsg2C1SendToOpus.u16gEngineRPM, &mCsr_aeRecErr_tMsg2C1SendToOpus[1],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg2C1SendToOpus.tCsrInfo_i16gDeltaArmAngleValue, (TVoid*)&gCsr_ctRecDat_Msg2C1SendToOpus.tCsrRng_i16gDeltaArmAngleValue,
        (TVoid*)&gCsr_tMsg2C1SendToOpus.i16gDeltaArmAngleValue, (TVoid*)&mCsr_tOldDat_tMsg2C1SendToOpus.i16gDeltaArmAngleValue, &mCsr_aeRecErr_tMsg2C1SendToOpus[2],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg2C1SendToOpus.tCsrInfo_i16gArrowArmAngleValue, (TVoid*)&gCsr_ctRecDat_Msg2C1SendToOpus.tCsrRng_i16gArrowArmAngleValue,
        (TVoid*)&gCsr_tMsg2C1SendToOpus.i16gArrowArmAngleValue, (TVoid*)&mCsr_tOldDat_tMsg2C1SendToOpus.i16gArrowArmAngleValue, &mCsr_aeRecErr_tMsg2C1SendToOpus[3],
        NULL, NULL
    }
};

static const TCanSigRecRoot mCsr_ctRoot_Msg2C1SendToOpus =
{
    "Msg2C1SendToOpus",                                     //!< achName - [STR] Name Msg2C1SendToOpus
    8,                                                      //!< u8Dlc - [NUM] DLC of Can Message
    0x00,                                                   //!< u8CanByteDflt - [NUM] CAN Message default
    DATA_INTEL,                                             //!< eCanFormat - [NUM] CAN Format
    0xFF,                                                   //!< u8MasterReceiveId - [NUM] Receive Id
    4,                                                      //!< u8RecCnt - [NUM] Count of Recorde
    &mCsr_actRecDat_tMsg2C1SendToOpus[0],                   //!< ptRec - [NUM] Pointer to Record Values
    17,                                                     //!< u16RecNo - [NUM] Record Number
    CSR_STAMP                                               //!< u16Stamp - [NUM] Safety stamp
};

TCanSigRecMsg2C1SendToOpus gCsr_tMsg2C1SendToOpus =
{
    &mCsr_ctRoot_Msg2C1SendToOpus,                          //!< *cptRoot [POI] Root connection
    (((0 * 1)/1)+0),                                        //!< u16gBatteryVoltageMv [[-]] Fuel in Litter
    (((0 * 1)/1)+0),                                        //!< u16gEngineRPM [[-]] Battery Voltage mV
    (((0 * 1)/1)+0),                                        //!< i16gDeltaArmAngleValue [[-]] new signal
    (((0 * 1)/1)+0)                                         //!< i16gArrowArmAngleValue [[-]] new signal
};

const TCanSigRecVal_Msg4C1SendToOpus gCsr_ctRecDat_Msg4C1SendToOpus =
{
    //!< gElementSelected
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TUINT8, TUINT8, 0, 8, 0, 0, 1, 1 }, 
     { U8_MIN, U8_MAX, 0, 0 },
    //!< Pin107
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 8, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin131
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 9, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin108
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 10, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin132
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 11, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin109
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 12, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin133
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 13, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin110
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 14, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin134
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 15, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin111
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 16, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin135
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 17, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin112
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 18, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin136
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 19, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin113
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 20, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin137
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 21, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin114
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 22, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin138
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 23, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin140
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 24, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin117
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 25, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin141
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 26, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin124
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 27, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin148
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 28, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin153
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 29, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin177
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 30, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin159
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 31, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin183
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 32, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin154
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 33, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin178
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 34, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin157
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 35, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin181
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 36, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin160
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 37, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin184
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 38, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin187
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 39, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin163
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 40, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin149
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 41, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin173
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 42, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin152
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 43, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin176
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 44, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin155
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 45, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin179
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 46, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin158
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 47, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin182
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 48, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin251
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 49, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin186
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 50, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin239
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 51, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE }
};

static ESigSta mCsr_aeRecErr_tMsg4C1SendToOpus[45] =
{
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY
};

static TCanSigRecOldValMsg4C1SendToOpus mCsr_tOldDat_tMsg4C1SendToOpus =
{
    0,                                                      //!< u8gElementSelected [[-]] Element Selected 1=Telescope; 2=Arrow arm; 3=Delta arm; 4=Turret
    FALSE,                                                  //!< boPin107 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin131 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin108 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin132 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin109 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin133 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin110 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin134 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin111 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin135 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin112 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin136 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin113 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin137 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin114 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin138 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin140 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin117 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin141 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin124 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin148 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin153 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin177 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin159 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin183 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin154 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin178 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin157 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin181 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin160 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin184 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin187 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin163 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin149 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin173 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin152 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin176 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin155 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin179 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin158 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin182 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin251 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin186 [[-]] for the Neotec diag pages
    FALSE                                                   //!< boPin239 [[-]] for the Neotec diag pages
};

extern TCanSigRecMsg4C1SendToOpus gCsr_tMsg4C1SendToOpus;
static const TRecDat mCsr_actRecDat_tMsg4C1SendToOpus[45] =
{
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg4C1SendToOpus.tCsrInfo_u8gElementSelected, (TVoid*)&gCsr_ctRecDat_Msg4C1SendToOpus.tCsrRng_u8gElementSelected,
        (TVoid*)&gCsr_tMsg4C1SendToOpus.u8gElementSelected, (TVoid*)&mCsr_tOldDat_tMsg4C1SendToOpus.u8gElementSelected, &mCsr_aeRecErr_tMsg4C1SendToOpus[0],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg4C1SendToOpus.tCsrInfo_boPin107, (TVoid*)&gCsr_ctRecDat_Msg4C1SendToOpus.tCsrRng_boPin107,
        (TVoid*)&gCsr_tMsg4C1SendToOpus.boPin107, (TVoid*)&mCsr_tOldDat_tMsg4C1SendToOpus.boPin107, &mCsr_aeRecErr_tMsg4C1SendToOpus[1],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg4C1SendToOpus.tCsrInfo_boPin131, (TVoid*)&gCsr_ctRecDat_Msg4C1SendToOpus.tCsrRng_boPin131,
        (TVoid*)&gCsr_tMsg4C1SendToOpus.boPin131, (TVoid*)&mCsr_tOldDat_tMsg4C1SendToOpus.boPin131, &mCsr_aeRecErr_tMsg4C1SendToOpus[2],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg4C1SendToOpus.tCsrInfo_boPin108, (TVoid*)&gCsr_ctRecDat_Msg4C1SendToOpus.tCsrRng_boPin108,
        (TVoid*)&gCsr_tMsg4C1SendToOpus.boPin108, (TVoid*)&mCsr_tOldDat_tMsg4C1SendToOpus.boPin108, &mCsr_aeRecErr_tMsg4C1SendToOpus[3],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg4C1SendToOpus.tCsrInfo_boPin132, (TVoid*)&gCsr_ctRecDat_Msg4C1SendToOpus.tCsrRng_boPin132,
        (TVoid*)&gCsr_tMsg4C1SendToOpus.boPin132, (TVoid*)&mCsr_tOldDat_tMsg4C1SendToOpus.boPin132, &mCsr_aeRecErr_tMsg4C1SendToOpus[4],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg4C1SendToOpus.tCsrInfo_boPin109, (TVoid*)&gCsr_ctRecDat_Msg4C1SendToOpus.tCsrRng_boPin109,
        (TVoid*)&gCsr_tMsg4C1SendToOpus.boPin109, (TVoid*)&mCsr_tOldDat_tMsg4C1SendToOpus.boPin109, &mCsr_aeRecErr_tMsg4C1SendToOpus[5],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg4C1SendToOpus.tCsrInfo_boPin133, (TVoid*)&gCsr_ctRecDat_Msg4C1SendToOpus.tCsrRng_boPin133,
        (TVoid*)&gCsr_tMsg4C1SendToOpus.boPin133, (TVoid*)&mCsr_tOldDat_tMsg4C1SendToOpus.boPin133, &mCsr_aeRecErr_tMsg4C1SendToOpus[6],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg4C1SendToOpus.tCsrInfo_boPin110, (TVoid*)&gCsr_ctRecDat_Msg4C1SendToOpus.tCsrRng_boPin110,
        (TVoid*)&gCsr_tMsg4C1SendToOpus.boPin110, (TVoid*)&mCsr_tOldDat_tMsg4C1SendToOpus.boPin110, &mCsr_aeRecErr_tMsg4C1SendToOpus[7],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg4C1SendToOpus.tCsrInfo_boPin134, (TVoid*)&gCsr_ctRecDat_Msg4C1SendToOpus.tCsrRng_boPin134,
        (TVoid*)&gCsr_tMsg4C1SendToOpus.boPin134, (TVoid*)&mCsr_tOldDat_tMsg4C1SendToOpus.boPin134, &mCsr_aeRecErr_tMsg4C1SendToOpus[8],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg4C1SendToOpus.tCsrInfo_boPin111, (TVoid*)&gCsr_ctRecDat_Msg4C1SendToOpus.tCsrRng_boPin111,
        (TVoid*)&gCsr_tMsg4C1SendToOpus.boPin111, (TVoid*)&mCsr_tOldDat_tMsg4C1SendToOpus.boPin111, &mCsr_aeRecErr_tMsg4C1SendToOpus[9],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg4C1SendToOpus.tCsrInfo_boPin135, (TVoid*)&gCsr_ctRecDat_Msg4C1SendToOpus.tCsrRng_boPin135,
        (TVoid*)&gCsr_tMsg4C1SendToOpus.boPin135, (TVoid*)&mCsr_tOldDat_tMsg4C1SendToOpus.boPin135, &mCsr_aeRecErr_tMsg4C1SendToOpus[10],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg4C1SendToOpus.tCsrInfo_boPin112, (TVoid*)&gCsr_ctRecDat_Msg4C1SendToOpus.tCsrRng_boPin112,
        (TVoid*)&gCsr_tMsg4C1SendToOpus.boPin112, (TVoid*)&mCsr_tOldDat_tMsg4C1SendToOpus.boPin112, &mCsr_aeRecErr_tMsg4C1SendToOpus[11],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg4C1SendToOpus.tCsrInfo_boPin136, (TVoid*)&gCsr_ctRecDat_Msg4C1SendToOpus.tCsrRng_boPin136,
        (TVoid*)&gCsr_tMsg4C1SendToOpus.boPin136, (TVoid*)&mCsr_tOldDat_tMsg4C1SendToOpus.boPin136, &mCsr_aeRecErr_tMsg4C1SendToOpus[12],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg4C1SendToOpus.tCsrInfo_boPin113, (TVoid*)&gCsr_ctRecDat_Msg4C1SendToOpus.tCsrRng_boPin113,
        (TVoid*)&gCsr_tMsg4C1SendToOpus.boPin113, (TVoid*)&mCsr_tOldDat_tMsg4C1SendToOpus.boPin113, &mCsr_aeRecErr_tMsg4C1SendToOpus[13],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg4C1SendToOpus.tCsrInfo_boPin137, (TVoid*)&gCsr_ctRecDat_Msg4C1SendToOpus.tCsrRng_boPin137,
        (TVoid*)&gCsr_tMsg4C1SendToOpus.boPin137, (TVoid*)&mCsr_tOldDat_tMsg4C1SendToOpus.boPin137, &mCsr_aeRecErr_tMsg4C1SendToOpus[14],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg4C1SendToOpus.tCsrInfo_boPin114, (TVoid*)&gCsr_ctRecDat_Msg4C1SendToOpus.tCsrRng_boPin114,
        (TVoid*)&gCsr_tMsg4C1SendToOpus.boPin114, (TVoid*)&mCsr_tOldDat_tMsg4C1SendToOpus.boPin114, &mCsr_aeRecErr_tMsg4C1SendToOpus[15],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg4C1SendToOpus.tCsrInfo_boPin138, (TVoid*)&gCsr_ctRecDat_Msg4C1SendToOpus.tCsrRng_boPin138,
        (TVoid*)&gCsr_tMsg4C1SendToOpus.boPin138, (TVoid*)&mCsr_tOldDat_tMsg4C1SendToOpus.boPin138, &mCsr_aeRecErr_tMsg4C1SendToOpus[16],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg4C1SendToOpus.tCsrInfo_boPin140, (TVoid*)&gCsr_ctRecDat_Msg4C1SendToOpus.tCsrRng_boPin140,
        (TVoid*)&gCsr_tMsg4C1SendToOpus.boPin140, (TVoid*)&mCsr_tOldDat_tMsg4C1SendToOpus.boPin140, &mCsr_aeRecErr_tMsg4C1SendToOpus[17],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg4C1SendToOpus.tCsrInfo_boPin117, (TVoid*)&gCsr_ctRecDat_Msg4C1SendToOpus.tCsrRng_boPin117,
        (TVoid*)&gCsr_tMsg4C1SendToOpus.boPin117, (TVoid*)&mCsr_tOldDat_tMsg4C1SendToOpus.boPin117, &mCsr_aeRecErr_tMsg4C1SendToOpus[18],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg4C1SendToOpus.tCsrInfo_boPin141, (TVoid*)&gCsr_ctRecDat_Msg4C1SendToOpus.tCsrRng_boPin141,
        (TVoid*)&gCsr_tMsg4C1SendToOpus.boPin141, (TVoid*)&mCsr_tOldDat_tMsg4C1SendToOpus.boPin141, &mCsr_aeRecErr_tMsg4C1SendToOpus[19],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg4C1SendToOpus.tCsrInfo_boPin124, (TVoid*)&gCsr_ctRecDat_Msg4C1SendToOpus.tCsrRng_boPin124,
        (TVoid*)&gCsr_tMsg4C1SendToOpus.boPin124, (TVoid*)&mCsr_tOldDat_tMsg4C1SendToOpus.boPin124, &mCsr_aeRecErr_tMsg4C1SendToOpus[20],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg4C1SendToOpus.tCsrInfo_boPin148, (TVoid*)&gCsr_ctRecDat_Msg4C1SendToOpus.tCsrRng_boPin148,
        (TVoid*)&gCsr_tMsg4C1SendToOpus.boPin148, (TVoid*)&mCsr_tOldDat_tMsg4C1SendToOpus.boPin148, &mCsr_aeRecErr_tMsg4C1SendToOpus[21],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg4C1SendToOpus.tCsrInfo_boPin153, (TVoid*)&gCsr_ctRecDat_Msg4C1SendToOpus.tCsrRng_boPin153,
        (TVoid*)&gCsr_tMsg4C1SendToOpus.boPin153, (TVoid*)&mCsr_tOldDat_tMsg4C1SendToOpus.boPin153, &mCsr_aeRecErr_tMsg4C1SendToOpus[22],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg4C1SendToOpus.tCsrInfo_boPin177, (TVoid*)&gCsr_ctRecDat_Msg4C1SendToOpus.tCsrRng_boPin177,
        (TVoid*)&gCsr_tMsg4C1SendToOpus.boPin177, (TVoid*)&mCsr_tOldDat_tMsg4C1SendToOpus.boPin177, &mCsr_aeRecErr_tMsg4C1SendToOpus[23],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg4C1SendToOpus.tCsrInfo_boPin159, (TVoid*)&gCsr_ctRecDat_Msg4C1SendToOpus.tCsrRng_boPin159,
        (TVoid*)&gCsr_tMsg4C1SendToOpus.boPin159, (TVoid*)&mCsr_tOldDat_tMsg4C1SendToOpus.boPin159, &mCsr_aeRecErr_tMsg4C1SendToOpus[24],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg4C1SendToOpus.tCsrInfo_boPin183, (TVoid*)&gCsr_ctRecDat_Msg4C1SendToOpus.tCsrRng_boPin183,
        (TVoid*)&gCsr_tMsg4C1SendToOpus.boPin183, (TVoid*)&mCsr_tOldDat_tMsg4C1SendToOpus.boPin183, &mCsr_aeRecErr_tMsg4C1SendToOpus[25],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg4C1SendToOpus.tCsrInfo_boPin154, (TVoid*)&gCsr_ctRecDat_Msg4C1SendToOpus.tCsrRng_boPin154,
        (TVoid*)&gCsr_tMsg4C1SendToOpus.boPin154, (TVoid*)&mCsr_tOldDat_tMsg4C1SendToOpus.boPin154, &mCsr_aeRecErr_tMsg4C1SendToOpus[26],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg4C1SendToOpus.tCsrInfo_boPin178, (TVoid*)&gCsr_ctRecDat_Msg4C1SendToOpus.tCsrRng_boPin178,
        (TVoid*)&gCsr_tMsg4C1SendToOpus.boPin178, (TVoid*)&mCsr_tOldDat_tMsg4C1SendToOpus.boPin178, &mCsr_aeRecErr_tMsg4C1SendToOpus[27],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg4C1SendToOpus.tCsrInfo_boPin157, (TVoid*)&gCsr_ctRecDat_Msg4C1SendToOpus.tCsrRng_boPin157,
        (TVoid*)&gCsr_tMsg4C1SendToOpus.boPin157, (TVoid*)&mCsr_tOldDat_tMsg4C1SendToOpus.boPin157, &mCsr_aeRecErr_tMsg4C1SendToOpus[28],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg4C1SendToOpus.tCsrInfo_boPin181, (TVoid*)&gCsr_ctRecDat_Msg4C1SendToOpus.tCsrRng_boPin181,
        (TVoid*)&gCsr_tMsg4C1SendToOpus.boPin181, (TVoid*)&mCsr_tOldDat_tMsg4C1SendToOpus.boPin181, &mCsr_aeRecErr_tMsg4C1SendToOpus[29],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg4C1SendToOpus.tCsrInfo_boPin160, (TVoid*)&gCsr_ctRecDat_Msg4C1SendToOpus.tCsrRng_boPin160,
        (TVoid*)&gCsr_tMsg4C1SendToOpus.boPin160, (TVoid*)&mCsr_tOldDat_tMsg4C1SendToOpus.boPin160, &mCsr_aeRecErr_tMsg4C1SendToOpus[30],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg4C1SendToOpus.tCsrInfo_boPin184, (TVoid*)&gCsr_ctRecDat_Msg4C1SendToOpus.tCsrRng_boPin184,
        (TVoid*)&gCsr_tMsg4C1SendToOpus.boPin184, (TVoid*)&mCsr_tOldDat_tMsg4C1SendToOpus.boPin184, &mCsr_aeRecErr_tMsg4C1SendToOpus[31],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg4C1SendToOpus.tCsrInfo_boPin187, (TVoid*)&gCsr_ctRecDat_Msg4C1SendToOpus.tCsrRng_boPin187,
        (TVoid*)&gCsr_tMsg4C1SendToOpus.boPin187, (TVoid*)&mCsr_tOldDat_tMsg4C1SendToOpus.boPin187, &mCsr_aeRecErr_tMsg4C1SendToOpus[32],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg4C1SendToOpus.tCsrInfo_boPin163, (TVoid*)&gCsr_ctRecDat_Msg4C1SendToOpus.tCsrRng_boPin163,
        (TVoid*)&gCsr_tMsg4C1SendToOpus.boPin163, (TVoid*)&mCsr_tOldDat_tMsg4C1SendToOpus.boPin163, &mCsr_aeRecErr_tMsg4C1SendToOpus[33],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg4C1SendToOpus.tCsrInfo_boPin149, (TVoid*)&gCsr_ctRecDat_Msg4C1SendToOpus.tCsrRng_boPin149,
        (TVoid*)&gCsr_tMsg4C1SendToOpus.boPin149, (TVoid*)&mCsr_tOldDat_tMsg4C1SendToOpus.boPin149, &mCsr_aeRecErr_tMsg4C1SendToOpus[34],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg4C1SendToOpus.tCsrInfo_boPin173, (TVoid*)&gCsr_ctRecDat_Msg4C1SendToOpus.tCsrRng_boPin173,
        (TVoid*)&gCsr_tMsg4C1SendToOpus.boPin173, (TVoid*)&mCsr_tOldDat_tMsg4C1SendToOpus.boPin173, &mCsr_aeRecErr_tMsg4C1SendToOpus[35],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg4C1SendToOpus.tCsrInfo_boPin152, (TVoid*)&gCsr_ctRecDat_Msg4C1SendToOpus.tCsrRng_boPin152,
        (TVoid*)&gCsr_tMsg4C1SendToOpus.boPin152, (TVoid*)&mCsr_tOldDat_tMsg4C1SendToOpus.boPin152, &mCsr_aeRecErr_tMsg4C1SendToOpus[36],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg4C1SendToOpus.tCsrInfo_boPin176, (TVoid*)&gCsr_ctRecDat_Msg4C1SendToOpus.tCsrRng_boPin176,
        (TVoid*)&gCsr_tMsg4C1SendToOpus.boPin176, (TVoid*)&mCsr_tOldDat_tMsg4C1SendToOpus.boPin176, &mCsr_aeRecErr_tMsg4C1SendToOpus[37],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg4C1SendToOpus.tCsrInfo_boPin155, (TVoid*)&gCsr_ctRecDat_Msg4C1SendToOpus.tCsrRng_boPin155,
        (TVoid*)&gCsr_tMsg4C1SendToOpus.boPin155, (TVoid*)&mCsr_tOldDat_tMsg4C1SendToOpus.boPin155, &mCsr_aeRecErr_tMsg4C1SendToOpus[38],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg4C1SendToOpus.tCsrInfo_boPin179, (TVoid*)&gCsr_ctRecDat_Msg4C1SendToOpus.tCsrRng_boPin179,
        (TVoid*)&gCsr_tMsg4C1SendToOpus.boPin179, (TVoid*)&mCsr_tOldDat_tMsg4C1SendToOpus.boPin179, &mCsr_aeRecErr_tMsg4C1SendToOpus[39],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg4C1SendToOpus.tCsrInfo_boPin158, (TVoid*)&gCsr_ctRecDat_Msg4C1SendToOpus.tCsrRng_boPin158,
        (TVoid*)&gCsr_tMsg4C1SendToOpus.boPin158, (TVoid*)&mCsr_tOldDat_tMsg4C1SendToOpus.boPin158, &mCsr_aeRecErr_tMsg4C1SendToOpus[40],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg4C1SendToOpus.tCsrInfo_boPin182, (TVoid*)&gCsr_ctRecDat_Msg4C1SendToOpus.tCsrRng_boPin182,
        (TVoid*)&gCsr_tMsg4C1SendToOpus.boPin182, (TVoid*)&mCsr_tOldDat_tMsg4C1SendToOpus.boPin182, &mCsr_aeRecErr_tMsg4C1SendToOpus[41],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg4C1SendToOpus.tCsrInfo_boPin251, (TVoid*)&gCsr_ctRecDat_Msg4C1SendToOpus.tCsrRng_boPin251,
        (TVoid*)&gCsr_tMsg4C1SendToOpus.boPin251, (TVoid*)&mCsr_tOldDat_tMsg4C1SendToOpus.boPin251, &mCsr_aeRecErr_tMsg4C1SendToOpus[42],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg4C1SendToOpus.tCsrInfo_boPin186, (TVoid*)&gCsr_ctRecDat_Msg4C1SendToOpus.tCsrRng_boPin186,
        (TVoid*)&gCsr_tMsg4C1SendToOpus.boPin186, (TVoid*)&mCsr_tOldDat_tMsg4C1SendToOpus.boPin186, &mCsr_aeRecErr_tMsg4C1SendToOpus[43],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg4C1SendToOpus.tCsrInfo_boPin239, (TVoid*)&gCsr_ctRecDat_Msg4C1SendToOpus.tCsrRng_boPin239,
        (TVoid*)&gCsr_tMsg4C1SendToOpus.boPin239, (TVoid*)&mCsr_tOldDat_tMsg4C1SendToOpus.boPin239, &mCsr_aeRecErr_tMsg4C1SendToOpus[44],
        NULL, NULL
    }
};

static const TCanSigRecRoot mCsr_ctRoot_Msg4C1SendToOpus =
{
    "Msg4C1SendToOpus",                                     //!< achName - [STR] Name Msg4C1SendToOpus
    8,                                                      //!< u8Dlc - [NUM] DLC of Can Message
    0x00,                                                   //!< u8CanByteDflt - [NUM] CAN Message default
    DATA_INTEL,                                             //!< eCanFormat - [NUM] CAN Format
    0xFF,                                                   //!< u8MasterReceiveId - [NUM] Receive Id
    45,                                                     //!< u8RecCnt - [NUM] Count of Recorde
    &mCsr_actRecDat_tMsg4C1SendToOpus[0],                   //!< ptRec - [NUM] Pointer to Record Values
    18,                                                     //!< u16RecNo - [NUM] Record Number
    CSR_STAMP                                               //!< u16Stamp - [NUM] Safety stamp
};

TCanSigRecMsg4C1SendToOpus gCsr_tMsg4C1SendToOpus =
{
    &mCsr_ctRoot_Msg4C1SendToOpus,                          //!< *cptRoot [POI] Root connection
    (((0 * 1)/1)+0),                                        //!< u8gElementSelected [[-]] Element Selected 1=Telescope; 2=Arrow arm; 3=Delta arm; 4=Turret
    FALSE,                                                  //!< boPin107 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin131 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin108 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin132 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin109 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin133 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin110 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin134 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin111 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin135 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin112 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin136 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin113 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin137 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin114 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin138 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin140 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin117 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin141 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin124 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin148 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin153 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin177 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin159 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin183 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin154 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin178 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin157 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin181 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin160 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin184 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin187 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin163 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin149 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin173 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin152 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin176 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin155 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin179 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin158 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin182 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin251 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin186 [[-]] for the Neotec diag pages
    FALSE                                                   //!< boPin239 [[-]] for the Neotec diag pages
};

const TCanSigRecVal_Msg6C1SendToOpus gCsr_ctRecDat_Msg6C1SendToOpus =
{
    //!< Pin163Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 0, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin190Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 1, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin166Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 2, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin193Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 3, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin169Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 4, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin196Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 5, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin172Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 6, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin101Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 7, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin125Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 8, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin150Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 9, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin174Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 10, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin102Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 11, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin126Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 12, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin151Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 13, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin175Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 14, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin149Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 15, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin173Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 16, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin152Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 17, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin176Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 18, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin155Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 19, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin179Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 20, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin158Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 21, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin182Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 22, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin251Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 23, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin238Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 24, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin252Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 25, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin239Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 26, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin253Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 27, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin240Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 28, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin254Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 29, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin241Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 30, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin161Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 31, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin185Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 32, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin188Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 33, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin164Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 34, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin191Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 35, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin167Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 36, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin194Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 37, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin170Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 38, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gBypassPressureSensorValue
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TINT16, TINT16, 48, 16, 0, 0, 1, 1 }, 
     { I16_MIN, I16_MAX, 0, 0 }
};

static ESigSta mCsr_aeRecErr_tMsg6C1SendToOpus[40] =
{
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY
};

static TCanSigRecOldValMsg6C1SendToOpus mCsr_tOldDat_tMsg6C1SendToOpus =
{
    FALSE,                                                  //!< boPin163Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin190Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin166Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin193Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin169Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin196Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin172Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin101Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin125Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin150Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin174Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin102Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin126Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin151Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin175Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin149Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin173Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin152Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin176Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin155Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin179Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin158Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin182Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin251Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin238Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin252Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin239Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin253Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin240Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin254Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin241Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin161Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin185Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin188Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin164Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin191Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin167Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin194Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin170Fault [[-]] for the Neotec diag pages
    0                                                       //!< i16gBypassPressureSensorValue [[-]] new signal
};

extern TCanSigRecMsg6C1SendToOpus gCsr_tMsg6C1SendToOpus;
static const TRecDat mCsr_actRecDat_tMsg6C1SendToOpus[40] =
{
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg6C1SendToOpus.tCsrInfo_boPin163Fault, (TVoid*)&gCsr_ctRecDat_Msg6C1SendToOpus.tCsrRng_boPin163Fault,
        (TVoid*)&gCsr_tMsg6C1SendToOpus.boPin163Fault, (TVoid*)&mCsr_tOldDat_tMsg6C1SendToOpus.boPin163Fault, &mCsr_aeRecErr_tMsg6C1SendToOpus[0],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg6C1SendToOpus.tCsrInfo_boPin190Fault, (TVoid*)&gCsr_ctRecDat_Msg6C1SendToOpus.tCsrRng_boPin190Fault,
        (TVoid*)&gCsr_tMsg6C1SendToOpus.boPin190Fault, (TVoid*)&mCsr_tOldDat_tMsg6C1SendToOpus.boPin190Fault, &mCsr_aeRecErr_tMsg6C1SendToOpus[1],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg6C1SendToOpus.tCsrInfo_boPin166Fault, (TVoid*)&gCsr_ctRecDat_Msg6C1SendToOpus.tCsrRng_boPin166Fault,
        (TVoid*)&gCsr_tMsg6C1SendToOpus.boPin166Fault, (TVoid*)&mCsr_tOldDat_tMsg6C1SendToOpus.boPin166Fault, &mCsr_aeRecErr_tMsg6C1SendToOpus[2],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg6C1SendToOpus.tCsrInfo_boPin193Fault, (TVoid*)&gCsr_ctRecDat_Msg6C1SendToOpus.tCsrRng_boPin193Fault,
        (TVoid*)&gCsr_tMsg6C1SendToOpus.boPin193Fault, (TVoid*)&mCsr_tOldDat_tMsg6C1SendToOpus.boPin193Fault, &mCsr_aeRecErr_tMsg6C1SendToOpus[3],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg6C1SendToOpus.tCsrInfo_boPin169Fault, (TVoid*)&gCsr_ctRecDat_Msg6C1SendToOpus.tCsrRng_boPin169Fault,
        (TVoid*)&gCsr_tMsg6C1SendToOpus.boPin169Fault, (TVoid*)&mCsr_tOldDat_tMsg6C1SendToOpus.boPin169Fault, &mCsr_aeRecErr_tMsg6C1SendToOpus[4],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg6C1SendToOpus.tCsrInfo_boPin196Fault, (TVoid*)&gCsr_ctRecDat_Msg6C1SendToOpus.tCsrRng_boPin196Fault,
        (TVoid*)&gCsr_tMsg6C1SendToOpus.boPin196Fault, (TVoid*)&mCsr_tOldDat_tMsg6C1SendToOpus.boPin196Fault, &mCsr_aeRecErr_tMsg6C1SendToOpus[5],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg6C1SendToOpus.tCsrInfo_boPin172Fault, (TVoid*)&gCsr_ctRecDat_Msg6C1SendToOpus.tCsrRng_boPin172Fault,
        (TVoid*)&gCsr_tMsg6C1SendToOpus.boPin172Fault, (TVoid*)&mCsr_tOldDat_tMsg6C1SendToOpus.boPin172Fault, &mCsr_aeRecErr_tMsg6C1SendToOpus[6],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg6C1SendToOpus.tCsrInfo_boPin101Fault, (TVoid*)&gCsr_ctRecDat_Msg6C1SendToOpus.tCsrRng_boPin101Fault,
        (TVoid*)&gCsr_tMsg6C1SendToOpus.boPin101Fault, (TVoid*)&mCsr_tOldDat_tMsg6C1SendToOpus.boPin101Fault, &mCsr_aeRecErr_tMsg6C1SendToOpus[7],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg6C1SendToOpus.tCsrInfo_boPin125Fault, (TVoid*)&gCsr_ctRecDat_Msg6C1SendToOpus.tCsrRng_boPin125Fault,
        (TVoid*)&gCsr_tMsg6C1SendToOpus.boPin125Fault, (TVoid*)&mCsr_tOldDat_tMsg6C1SendToOpus.boPin125Fault, &mCsr_aeRecErr_tMsg6C1SendToOpus[8],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg6C1SendToOpus.tCsrInfo_boPin150Fault, (TVoid*)&gCsr_ctRecDat_Msg6C1SendToOpus.tCsrRng_boPin150Fault,
        (TVoid*)&gCsr_tMsg6C1SendToOpus.boPin150Fault, (TVoid*)&mCsr_tOldDat_tMsg6C1SendToOpus.boPin150Fault, &mCsr_aeRecErr_tMsg6C1SendToOpus[9],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg6C1SendToOpus.tCsrInfo_boPin174Fault, (TVoid*)&gCsr_ctRecDat_Msg6C1SendToOpus.tCsrRng_boPin174Fault,
        (TVoid*)&gCsr_tMsg6C1SendToOpus.boPin174Fault, (TVoid*)&mCsr_tOldDat_tMsg6C1SendToOpus.boPin174Fault, &mCsr_aeRecErr_tMsg6C1SendToOpus[10],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg6C1SendToOpus.tCsrInfo_boPin102Fault, (TVoid*)&gCsr_ctRecDat_Msg6C1SendToOpus.tCsrRng_boPin102Fault,
        (TVoid*)&gCsr_tMsg6C1SendToOpus.boPin102Fault, (TVoid*)&mCsr_tOldDat_tMsg6C1SendToOpus.boPin102Fault, &mCsr_aeRecErr_tMsg6C1SendToOpus[11],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg6C1SendToOpus.tCsrInfo_boPin126Fault, (TVoid*)&gCsr_ctRecDat_Msg6C1SendToOpus.tCsrRng_boPin126Fault,
        (TVoid*)&gCsr_tMsg6C1SendToOpus.boPin126Fault, (TVoid*)&mCsr_tOldDat_tMsg6C1SendToOpus.boPin126Fault, &mCsr_aeRecErr_tMsg6C1SendToOpus[12],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg6C1SendToOpus.tCsrInfo_boPin151Fault, (TVoid*)&gCsr_ctRecDat_Msg6C1SendToOpus.tCsrRng_boPin151Fault,
        (TVoid*)&gCsr_tMsg6C1SendToOpus.boPin151Fault, (TVoid*)&mCsr_tOldDat_tMsg6C1SendToOpus.boPin151Fault, &mCsr_aeRecErr_tMsg6C1SendToOpus[13],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg6C1SendToOpus.tCsrInfo_boPin175Fault, (TVoid*)&gCsr_ctRecDat_Msg6C1SendToOpus.tCsrRng_boPin175Fault,
        (TVoid*)&gCsr_tMsg6C1SendToOpus.boPin175Fault, (TVoid*)&mCsr_tOldDat_tMsg6C1SendToOpus.boPin175Fault, &mCsr_aeRecErr_tMsg6C1SendToOpus[14],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg6C1SendToOpus.tCsrInfo_boPin149Fault, (TVoid*)&gCsr_ctRecDat_Msg6C1SendToOpus.tCsrRng_boPin149Fault,
        (TVoid*)&gCsr_tMsg6C1SendToOpus.boPin149Fault, (TVoid*)&mCsr_tOldDat_tMsg6C1SendToOpus.boPin149Fault, &mCsr_aeRecErr_tMsg6C1SendToOpus[15],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg6C1SendToOpus.tCsrInfo_boPin173Fault, (TVoid*)&gCsr_ctRecDat_Msg6C1SendToOpus.tCsrRng_boPin173Fault,
        (TVoid*)&gCsr_tMsg6C1SendToOpus.boPin173Fault, (TVoid*)&mCsr_tOldDat_tMsg6C1SendToOpus.boPin173Fault, &mCsr_aeRecErr_tMsg6C1SendToOpus[16],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg6C1SendToOpus.tCsrInfo_boPin152Fault, (TVoid*)&gCsr_ctRecDat_Msg6C1SendToOpus.tCsrRng_boPin152Fault,
        (TVoid*)&gCsr_tMsg6C1SendToOpus.boPin152Fault, (TVoid*)&mCsr_tOldDat_tMsg6C1SendToOpus.boPin152Fault, &mCsr_aeRecErr_tMsg6C1SendToOpus[17],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg6C1SendToOpus.tCsrInfo_boPin176Fault, (TVoid*)&gCsr_ctRecDat_Msg6C1SendToOpus.tCsrRng_boPin176Fault,
        (TVoid*)&gCsr_tMsg6C1SendToOpus.boPin176Fault, (TVoid*)&mCsr_tOldDat_tMsg6C1SendToOpus.boPin176Fault, &mCsr_aeRecErr_tMsg6C1SendToOpus[18],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg6C1SendToOpus.tCsrInfo_boPin155Fault, (TVoid*)&gCsr_ctRecDat_Msg6C1SendToOpus.tCsrRng_boPin155Fault,
        (TVoid*)&gCsr_tMsg6C1SendToOpus.boPin155Fault, (TVoid*)&mCsr_tOldDat_tMsg6C1SendToOpus.boPin155Fault, &mCsr_aeRecErr_tMsg6C1SendToOpus[19],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg6C1SendToOpus.tCsrInfo_boPin179Fault, (TVoid*)&gCsr_ctRecDat_Msg6C1SendToOpus.tCsrRng_boPin179Fault,
        (TVoid*)&gCsr_tMsg6C1SendToOpus.boPin179Fault, (TVoid*)&mCsr_tOldDat_tMsg6C1SendToOpus.boPin179Fault, &mCsr_aeRecErr_tMsg6C1SendToOpus[20],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg6C1SendToOpus.tCsrInfo_boPin158Fault, (TVoid*)&gCsr_ctRecDat_Msg6C1SendToOpus.tCsrRng_boPin158Fault,
        (TVoid*)&gCsr_tMsg6C1SendToOpus.boPin158Fault, (TVoid*)&mCsr_tOldDat_tMsg6C1SendToOpus.boPin158Fault, &mCsr_aeRecErr_tMsg6C1SendToOpus[21],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg6C1SendToOpus.tCsrInfo_boPin182Fault, (TVoid*)&gCsr_ctRecDat_Msg6C1SendToOpus.tCsrRng_boPin182Fault,
        (TVoid*)&gCsr_tMsg6C1SendToOpus.boPin182Fault, (TVoid*)&mCsr_tOldDat_tMsg6C1SendToOpus.boPin182Fault, &mCsr_aeRecErr_tMsg6C1SendToOpus[22],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg6C1SendToOpus.tCsrInfo_boPin251Fault, (TVoid*)&gCsr_ctRecDat_Msg6C1SendToOpus.tCsrRng_boPin251Fault,
        (TVoid*)&gCsr_tMsg6C1SendToOpus.boPin251Fault, (TVoid*)&mCsr_tOldDat_tMsg6C1SendToOpus.boPin251Fault, &mCsr_aeRecErr_tMsg6C1SendToOpus[23],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg6C1SendToOpus.tCsrInfo_boPin238Fault, (TVoid*)&gCsr_ctRecDat_Msg6C1SendToOpus.tCsrRng_boPin238Fault,
        (TVoid*)&gCsr_tMsg6C1SendToOpus.boPin238Fault, (TVoid*)&mCsr_tOldDat_tMsg6C1SendToOpus.boPin238Fault, &mCsr_aeRecErr_tMsg6C1SendToOpus[24],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg6C1SendToOpus.tCsrInfo_boPin252Fault, (TVoid*)&gCsr_ctRecDat_Msg6C1SendToOpus.tCsrRng_boPin252Fault,
        (TVoid*)&gCsr_tMsg6C1SendToOpus.boPin252Fault, (TVoid*)&mCsr_tOldDat_tMsg6C1SendToOpus.boPin252Fault, &mCsr_aeRecErr_tMsg6C1SendToOpus[25],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg6C1SendToOpus.tCsrInfo_boPin239Fault, (TVoid*)&gCsr_ctRecDat_Msg6C1SendToOpus.tCsrRng_boPin239Fault,
        (TVoid*)&gCsr_tMsg6C1SendToOpus.boPin239Fault, (TVoid*)&mCsr_tOldDat_tMsg6C1SendToOpus.boPin239Fault, &mCsr_aeRecErr_tMsg6C1SendToOpus[26],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg6C1SendToOpus.tCsrInfo_boPin253Fault, (TVoid*)&gCsr_ctRecDat_Msg6C1SendToOpus.tCsrRng_boPin253Fault,
        (TVoid*)&gCsr_tMsg6C1SendToOpus.boPin253Fault, (TVoid*)&mCsr_tOldDat_tMsg6C1SendToOpus.boPin253Fault, &mCsr_aeRecErr_tMsg6C1SendToOpus[27],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg6C1SendToOpus.tCsrInfo_boPin240Fault, (TVoid*)&gCsr_ctRecDat_Msg6C1SendToOpus.tCsrRng_boPin240Fault,
        (TVoid*)&gCsr_tMsg6C1SendToOpus.boPin240Fault, (TVoid*)&mCsr_tOldDat_tMsg6C1SendToOpus.boPin240Fault, &mCsr_aeRecErr_tMsg6C1SendToOpus[28],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg6C1SendToOpus.tCsrInfo_boPin254Fault, (TVoid*)&gCsr_ctRecDat_Msg6C1SendToOpus.tCsrRng_boPin254Fault,
        (TVoid*)&gCsr_tMsg6C1SendToOpus.boPin254Fault, (TVoid*)&mCsr_tOldDat_tMsg6C1SendToOpus.boPin254Fault, &mCsr_aeRecErr_tMsg6C1SendToOpus[29],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg6C1SendToOpus.tCsrInfo_boPin241Fault, (TVoid*)&gCsr_ctRecDat_Msg6C1SendToOpus.tCsrRng_boPin241Fault,
        (TVoid*)&gCsr_tMsg6C1SendToOpus.boPin241Fault, (TVoid*)&mCsr_tOldDat_tMsg6C1SendToOpus.boPin241Fault, &mCsr_aeRecErr_tMsg6C1SendToOpus[30],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg6C1SendToOpus.tCsrInfo_boPin161Fault, (TVoid*)&gCsr_ctRecDat_Msg6C1SendToOpus.tCsrRng_boPin161Fault,
        (TVoid*)&gCsr_tMsg6C1SendToOpus.boPin161Fault, (TVoid*)&mCsr_tOldDat_tMsg6C1SendToOpus.boPin161Fault, &mCsr_aeRecErr_tMsg6C1SendToOpus[31],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg6C1SendToOpus.tCsrInfo_boPin185Fault, (TVoid*)&gCsr_ctRecDat_Msg6C1SendToOpus.tCsrRng_boPin185Fault,
        (TVoid*)&gCsr_tMsg6C1SendToOpus.boPin185Fault, (TVoid*)&mCsr_tOldDat_tMsg6C1SendToOpus.boPin185Fault, &mCsr_aeRecErr_tMsg6C1SendToOpus[32],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg6C1SendToOpus.tCsrInfo_boPin188Fault, (TVoid*)&gCsr_ctRecDat_Msg6C1SendToOpus.tCsrRng_boPin188Fault,
        (TVoid*)&gCsr_tMsg6C1SendToOpus.boPin188Fault, (TVoid*)&mCsr_tOldDat_tMsg6C1SendToOpus.boPin188Fault, &mCsr_aeRecErr_tMsg6C1SendToOpus[33],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg6C1SendToOpus.tCsrInfo_boPin164Fault, (TVoid*)&gCsr_ctRecDat_Msg6C1SendToOpus.tCsrRng_boPin164Fault,
        (TVoid*)&gCsr_tMsg6C1SendToOpus.boPin164Fault, (TVoid*)&mCsr_tOldDat_tMsg6C1SendToOpus.boPin164Fault, &mCsr_aeRecErr_tMsg6C1SendToOpus[34],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg6C1SendToOpus.tCsrInfo_boPin191Fault, (TVoid*)&gCsr_ctRecDat_Msg6C1SendToOpus.tCsrRng_boPin191Fault,
        (TVoid*)&gCsr_tMsg6C1SendToOpus.boPin191Fault, (TVoid*)&mCsr_tOldDat_tMsg6C1SendToOpus.boPin191Fault, &mCsr_aeRecErr_tMsg6C1SendToOpus[35],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg6C1SendToOpus.tCsrInfo_boPin167Fault, (TVoid*)&gCsr_ctRecDat_Msg6C1SendToOpus.tCsrRng_boPin167Fault,
        (TVoid*)&gCsr_tMsg6C1SendToOpus.boPin167Fault, (TVoid*)&mCsr_tOldDat_tMsg6C1SendToOpus.boPin167Fault, &mCsr_aeRecErr_tMsg6C1SendToOpus[36],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg6C1SendToOpus.tCsrInfo_boPin194Fault, (TVoid*)&gCsr_ctRecDat_Msg6C1SendToOpus.tCsrRng_boPin194Fault,
        (TVoid*)&gCsr_tMsg6C1SendToOpus.boPin194Fault, (TVoid*)&mCsr_tOldDat_tMsg6C1SendToOpus.boPin194Fault, &mCsr_aeRecErr_tMsg6C1SendToOpus[37],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg6C1SendToOpus.tCsrInfo_boPin170Fault, (TVoid*)&gCsr_ctRecDat_Msg6C1SendToOpus.tCsrRng_boPin170Fault,
        (TVoid*)&gCsr_tMsg6C1SendToOpus.boPin170Fault, (TVoid*)&mCsr_tOldDat_tMsg6C1SendToOpus.boPin170Fault, &mCsr_aeRecErr_tMsg6C1SendToOpus[38],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg6C1SendToOpus.tCsrInfo_i16gBypassPressureSensorValue, (TVoid*)&gCsr_ctRecDat_Msg6C1SendToOpus.tCsrRng_i16gBypassPressureSensorValue,
        (TVoid*)&gCsr_tMsg6C1SendToOpus.i16gBypassPressureSensorValue, (TVoid*)&mCsr_tOldDat_tMsg6C1SendToOpus.i16gBypassPressureSensorValue, &mCsr_aeRecErr_tMsg6C1SendToOpus[39],
        NULL, NULL
    }
};

static const TCanSigRecRoot mCsr_ctRoot_Msg6C1SendToOpus =
{
    "Msg6C1SendToOpus",                                     //!< achName - [STR] Name Msg6C1SendToOpus
    8,                                                      //!< u8Dlc - [NUM] DLC of Can Message
    0x00,                                                   //!< u8CanByteDflt - [NUM] CAN Message default
    DATA_INTEL,                                             //!< eCanFormat - [NUM] CAN Format
    0xFF,                                                   //!< u8MasterReceiveId - [NUM] Receive Id
    40,                                                     //!< u8RecCnt - [NUM] Count of Recorde
    &mCsr_actRecDat_tMsg6C1SendToOpus[0],                   //!< ptRec - [NUM] Pointer to Record Values
    19,                                                     //!< u16RecNo - [NUM] Record Number
    CSR_STAMP                                               //!< u16Stamp - [NUM] Safety stamp
};

TCanSigRecMsg6C1SendToOpus gCsr_tMsg6C1SendToOpus =
{
    &mCsr_ctRoot_Msg6C1SendToOpus,                          //!< *cptRoot [POI] Root connection
    FALSE,                                                  //!< boPin163Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin190Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin166Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin193Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin169Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin196Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin172Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin101Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin125Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin150Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin174Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin102Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin126Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin151Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin175Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin149Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin173Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin152Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin176Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin155Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin179Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin158Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin182Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin251Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin238Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin252Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin239Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin253Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin240Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin254Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin241Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin161Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin185Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin188Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin164Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin191Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin167Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin194Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin170Fault [[-]] for the Neotec diag pages
    (((0 * 1)/1)+0)                                         //!< i16gBypassPressureSensorValue [[-]] new signal
};

const TCanSigRecVal_Msg8C1SendToOpus gCsr_ctRecDat_Msg8C1SendToOpus =
{
    //!< gTTC510Version_Major
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TUINT8, TUINT8, 0, 8, 0, 0, 1, 1 }, 
     { U8_MIN, U8_MAX, 0, 0 },
    //!< gTTC510Version_Minor
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TUINT8, TUINT8, 8, 8, 0, 0, 1, 1 }, 
     { U8_MIN, U8_MAX, 0, 0 },
    //!< gTTC510Version_Patch
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TUINT8, TUINT8, 16, 8, 0, 0, 1, 1 }, 
     { U8_MIN, U8_MAX, 0, 0 },
    //!< gTTC510Version_Custom
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TUINT8, TUINT8, 24, 8, 0, 0, 1, 1 }, 
     { U8_MIN, U8_MAX, 0, 0 },
    //!< gTTC48XSVersion_Major
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TUINT8, TUINT8, 32, 8, 0, 0, 1, 1 }, 
     { U8_MIN, U8_MAX, 0, 0 },
    //!< gTTC48XSVersion_Minor
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TUINT8, TUINT8, 40, 8, 0, 0, 1, 1 }, 
     { U8_MIN, U8_MAX, 0, 0 },
    //!< gTTC48XSVersion_Patch
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TUINT8, TUINT8, 48, 8, 0, 0, 1, 1 }, 
     { U8_MIN, U8_MAX, 0, 0 },
    //!< gTTC48XSVersion_Custom
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TUINT8, TUINT8, 56, 8, 0, 0, 1, 1 }, 
     { U8_MIN, U8_MAX, 0, 0 }
};

static ESigSta mCsr_aeRecErr_tMsg8C1SendToOpus[8] =
{
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY
};

static TCanSigRecOldValMsg8C1SendToOpus mCsr_tOldDat_tMsg8C1SendToOpus =
{
    0,                                                      //!< u8gTTC510Version_Major [[-]] Program Version Major C1 TTC510
    0,                                                      //!< u8gTTC510Version_Minor [[-]] Program Version Minor C1 TTC510
    0,                                                      //!< u8gTTC510Version_Patch [[-]] Program Version Patch C1 TTC510
    0,                                                      //!< u8gTTC510Version_Custom [[-]] Program Version Custom C1 TTC510
    0,                                                      //!< u8gTTC48XSVersion_Major [[-]] Program Version Major TTC48XS
    0,                                                      //!< u8gTTC48XSVersion_Minor [[-]] Program Version Minor TTC48XS
    0,                                                      //!< u8gTTC48XSVersion_Patch [[-]] Program Version Patch TTC48XS
    0                                                       //!< u8gTTC48XSVersion_Custom [[-]] Program Version Custom TTC48XS
};

extern TCanSigRecMsg8C1SendToOpus gCsr_tMsg8C1SendToOpus;
static const TRecDat mCsr_actRecDat_tMsg8C1SendToOpus[8] =
{
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg8C1SendToOpus.tCsrInfo_u8gTTC510Version_Major, (TVoid*)&gCsr_ctRecDat_Msg8C1SendToOpus.tCsrRng_u8gTTC510Version_Major,
        (TVoid*)&gCsr_tMsg8C1SendToOpus.u8gTTC510Version_Major, (TVoid*)&mCsr_tOldDat_tMsg8C1SendToOpus.u8gTTC510Version_Major, &mCsr_aeRecErr_tMsg8C1SendToOpus[0],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg8C1SendToOpus.tCsrInfo_u8gTTC510Version_Minor, (TVoid*)&gCsr_ctRecDat_Msg8C1SendToOpus.tCsrRng_u8gTTC510Version_Minor,
        (TVoid*)&gCsr_tMsg8C1SendToOpus.u8gTTC510Version_Minor, (TVoid*)&mCsr_tOldDat_tMsg8C1SendToOpus.u8gTTC510Version_Minor, &mCsr_aeRecErr_tMsg8C1SendToOpus[1],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg8C1SendToOpus.tCsrInfo_u8gTTC510Version_Patch, (TVoid*)&gCsr_ctRecDat_Msg8C1SendToOpus.tCsrRng_u8gTTC510Version_Patch,
        (TVoid*)&gCsr_tMsg8C1SendToOpus.u8gTTC510Version_Patch, (TVoid*)&mCsr_tOldDat_tMsg8C1SendToOpus.u8gTTC510Version_Patch, &mCsr_aeRecErr_tMsg8C1SendToOpus[2],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg8C1SendToOpus.tCsrInfo_u8gTTC510Version_Custom, (TVoid*)&gCsr_ctRecDat_Msg8C1SendToOpus.tCsrRng_u8gTTC510Version_Custom,
        (TVoid*)&gCsr_tMsg8C1SendToOpus.u8gTTC510Version_Custom, (TVoid*)&mCsr_tOldDat_tMsg8C1SendToOpus.u8gTTC510Version_Custom, &mCsr_aeRecErr_tMsg8C1SendToOpus[3],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg8C1SendToOpus.tCsrInfo_u8gTTC48XSVersion_Major, (TVoid*)&gCsr_ctRecDat_Msg8C1SendToOpus.tCsrRng_u8gTTC48XSVersion_Major,
        (TVoid*)&gCsr_tMsg8C1SendToOpus.u8gTTC48XSVersion_Major, (TVoid*)&mCsr_tOldDat_tMsg8C1SendToOpus.u8gTTC48XSVersion_Major, &mCsr_aeRecErr_tMsg8C1SendToOpus[4],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg8C1SendToOpus.tCsrInfo_u8gTTC48XSVersion_Minor, (TVoid*)&gCsr_ctRecDat_Msg8C1SendToOpus.tCsrRng_u8gTTC48XSVersion_Minor,
        (TVoid*)&gCsr_tMsg8C1SendToOpus.u8gTTC48XSVersion_Minor, (TVoid*)&mCsr_tOldDat_tMsg8C1SendToOpus.u8gTTC48XSVersion_Minor, &mCsr_aeRecErr_tMsg8C1SendToOpus[5],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg8C1SendToOpus.tCsrInfo_u8gTTC48XSVersion_Patch, (TVoid*)&gCsr_ctRecDat_Msg8C1SendToOpus.tCsrRng_u8gTTC48XSVersion_Patch,
        (TVoid*)&gCsr_tMsg8C1SendToOpus.u8gTTC48XSVersion_Patch, (TVoid*)&mCsr_tOldDat_tMsg8C1SendToOpus.u8gTTC48XSVersion_Patch, &mCsr_aeRecErr_tMsg8C1SendToOpus[6],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg8C1SendToOpus.tCsrInfo_u8gTTC48XSVersion_Custom, (TVoid*)&gCsr_ctRecDat_Msg8C1SendToOpus.tCsrRng_u8gTTC48XSVersion_Custom,
        (TVoid*)&gCsr_tMsg8C1SendToOpus.u8gTTC48XSVersion_Custom, (TVoid*)&mCsr_tOldDat_tMsg8C1SendToOpus.u8gTTC48XSVersion_Custom, &mCsr_aeRecErr_tMsg8C1SendToOpus[7],
        NULL, NULL
    }
};

static const TCanSigRecRoot mCsr_ctRoot_Msg8C1SendToOpus =
{
    "Msg8C1SendToOpus",                                     //!< achName - [STR] Name Msg8C1SendToOpus
    8,                                                      //!< u8Dlc - [NUM] DLC of Can Message
    0xff,                                                   //!< u8CanByteDflt - [NUM] CAN Message default
    DATA_INTEL,                                             //!< eCanFormat - [NUM] CAN Format
    0xFF,                                                   //!< u8MasterReceiveId - [NUM] Receive Id
    8,                                                      //!< u8RecCnt - [NUM] Count of Recorde
    &mCsr_actRecDat_tMsg8C1SendToOpus[0],                   //!< ptRec - [NUM] Pointer to Record Values
    20,                                                     //!< u16RecNo - [NUM] Record Number
    CSR_STAMP                                               //!< u16Stamp - [NUM] Safety stamp
};

TCanSigRecMsg8C1SendToOpus gCsr_tMsg8C1SendToOpus =
{
    &mCsr_ctRoot_Msg8C1SendToOpus,                          //!< *cptRoot [POI] Root connection
    (((0 * 1)/1)+0),                                        //!< u8gTTC510Version_Major [[-]] Program Version Major C1 TTC510
    (((0 * 1)/1)+0),                                        //!< u8gTTC510Version_Minor [[-]] Program Version Minor C1 TTC510
    (((0 * 1)/1)+0),                                        //!< u8gTTC510Version_Patch [[-]] Program Version Patch C1 TTC510
    (((0 * 1)/1)+0),                                        //!< u8gTTC510Version_Custom [[-]] Program Version Custom C1 TTC510
    (((0 * 1)/1)+0),                                        //!< u8gTTC48XSVersion_Major [[-]] Program Version Major TTC48XS
    (((0 * 1)/1)+0),                                        //!< u8gTTC48XSVersion_Minor [[-]] Program Version Minor TTC48XS
    (((0 * 1)/1)+0),                                        //!< u8gTTC48XSVersion_Patch [[-]] Program Version Patch TTC48XS
    (((0 * 1)/1)+0)                                         //!< u8gTTC48XSVersion_Custom [[-]] Program Version Custom TTC48XS
};

const TCanSigRecVal_Sdo_Answer_48XS gCsr_ctRecDat_Sdo_Answer_48XS =
{
    //!< CCD
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TUINT8, TUINT8, 0, 8, 0, 0, 1, 1 }, 
     { U8_MIN, U8_MAX, 0, 0 },
    //!< Index
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TUINT16, TUINT16, 8, 16, 0, 0, 1, 1 }, 
     { U16_MIN, U16_MAX, 0, 0 },
    //!< Sub_Index
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TUINT8, TUINT8, 24, 8, 0, 0, 1, 1 }, 
     { U8_MIN, U8_MAX, 0, 0 },
    //!< Data
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TUINT32, TUINT32, 32, 32, 0, 0, 1, 1 }, 
     { U32_MIN, U32_MAX, 0, 0 }
};

static ESigSta mCsr_aeRecErr_tSdo_Answer_48XS[4] =
{
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY
};

static TCanSigRecOldValSdo_Answer_48XS mCsr_tOldDat_tSdo_Answer_48XS =
{
    0,                                                      //!< u8CCD [[-]] new signal
    0,                                                      //!< u16Index [[-]] new signal
    0,                                                      //!< u8Sub_Index [[-]] new signal
    0                                                       //!< u32Data [[-]] new signal
};

extern TCanSigRecSdo_Answer_48XS gCsr_tSdo_Answer_48XS;
static const TRecDat mCsr_actRecDat_tSdo_Answer_48XS[4] =
{
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Sdo_Answer_48XS.tCsrInfo_u8CCD, (TVoid*)&gCsr_ctRecDat_Sdo_Answer_48XS.tCsrRng_u8CCD,
        (TVoid*)&gCsr_tSdo_Answer_48XS.u8CCD, (TVoid*)&mCsr_tOldDat_tSdo_Answer_48XS.u8CCD, &mCsr_aeRecErr_tSdo_Answer_48XS[0],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Sdo_Answer_48XS.tCsrInfo_u16Index, (TVoid*)&gCsr_ctRecDat_Sdo_Answer_48XS.tCsrRng_u16Index,
        (TVoid*)&gCsr_tSdo_Answer_48XS.u16Index, (TVoid*)&mCsr_tOldDat_tSdo_Answer_48XS.u16Index, &mCsr_aeRecErr_tSdo_Answer_48XS[1],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Sdo_Answer_48XS.tCsrInfo_u8Sub_Index, (TVoid*)&gCsr_ctRecDat_Sdo_Answer_48XS.tCsrRng_u8Sub_Index,
        (TVoid*)&gCsr_tSdo_Answer_48XS.u8Sub_Index, (TVoid*)&mCsr_tOldDat_tSdo_Answer_48XS.u8Sub_Index, &mCsr_aeRecErr_tSdo_Answer_48XS[2],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Sdo_Answer_48XS.tCsrInfo_u32Data, (TVoid*)&gCsr_ctRecDat_Sdo_Answer_48XS.tCsrRng_u32Data,
        (TVoid*)&gCsr_tSdo_Answer_48XS.u32Data, (TVoid*)&mCsr_tOldDat_tSdo_Answer_48XS.u32Data, &mCsr_aeRecErr_tSdo_Answer_48XS[3],
        NULL, NULL
    }
};

static const TCanSigRecRoot mCsr_ctRoot_Sdo_Answer_48XS =
{
    "Sdo_Answer_48XS",                                      //!< achName - [STR] Name Sdo_Answer_48XS
    8,                                                      //!< u8Dlc - [NUM] DLC of Can Message
    0xff,                                                   //!< u8CanByteDflt - [NUM] CAN Message default
    DATA_INTEL,                                             //!< eCanFormat - [NUM] CAN Format
    0xFF,                                                   //!< u8MasterReceiveId - [NUM] Receive Id
    4,                                                      //!< u8RecCnt - [NUM] Count of Recorde
    &mCsr_actRecDat_tSdo_Answer_48XS[0],                    //!< ptRec - [NUM] Pointer to Record Values
    21,                                                     //!< u16RecNo - [NUM] Record Number
    CSR_STAMP                                               //!< u16Stamp - [NUM] Safety stamp
};

TCanSigRecSdo_Answer_48XS gCsr_tSdo_Answer_48XS =
{
    &mCsr_ctRoot_Sdo_Answer_48XS,                           //!< *cptRoot [POI] Root connection
    (((0 * 1)/1)+0),                                        //!< u8CCD [[-]] new signal
    (((0 * 1)/1)+0),                                        //!< u16Index [[-]] new signal
    (((0 * 1)/1)+0),                                        //!< u8Sub_Index [[-]] new signal
    (((0 * 1)/1)+0)                                         //!< u32Data [[-]] new signal
};

const TCanSigRecVal_Msg9C1SendToOpus gCsr_ctRecDat_Msg9C1SendToOpus =
{
    //!< AutoModeActivate
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 0, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< SilenceModeActivate
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 1, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< ForcingModeActivate
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 2, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< ForcingRegenlow
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 3, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< ForcingRegenHigh
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 4, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< AskReloadWithGenerator
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 5, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< ReloadWithGeneratorOn
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 6, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< AlarmCptNbrRegenFinish
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 7, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< ElectricMotorForbidden
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 8, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< PictoColdOilTankTemperature
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 9, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< RecoveryReductionRatio
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 10, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< RemainingRegenTimeAverage
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TUINT16, TUINT16, 16, 16, 0, 0, 1, 1 }, 
     { U16_MIN, U16_MAX, 0, 0 },
    //!< TotalRegenHours
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TUINT16, TUINT16, 32, 16, 0, 0, 1, 1 }, 
     { U16_MIN, U16_MAX, 0, 0 }
};

static ESigSta mCsr_aeRecErr_tMsg9C1SendToOpus[13] =
{
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY
};

static TCanSigRecOldValMsg9C1SendToOpus mCsr_tOldDat_tMsg9C1SendToOpus =
{
    FALSE,                                                  //!< boAutoModeActivate [[-]] new signal
    FALSE,                                                  //!< boSilenceModeActivate [[-]] new signal
    FALSE,                                                  //!< boForcingModeActivate [[-]] new signal
    FALSE,                                                  //!< boForcingRegenlow [[-]] new signal
    FALSE,                                                  //!< boForcingRegenHigh [[-]] new signal
    FALSE,                                                  //!< boAskReloadWithGenerator [[-]] new signal
    FALSE,                                                  //!< boReloadWithGeneratorOn [[-]] new signal
    FALSE,                                                  //!< boAlarmCptNbrRegenFinish [[-]] new signal
    FALSE,                                                  //!< boElectricMotorForbidden [[-]] new signal
    FALSE,                                                  //!< boPictoColdOilTankTemperature [[-]] new signal
    FALSE,                                                  //!< boRecoveryReductionRatio [[-]] new signal
    0,                                                      //!< u16RemainingRegenTimeAverage [[-]] new signal
    0                                                       //!< u16TotalRegenHours [[-]] new signal
};

extern TCanSigRecMsg9C1SendToOpus gCsr_tMsg9C1SendToOpus;
static const TRecDat mCsr_actRecDat_tMsg9C1SendToOpus[13] =
{
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg9C1SendToOpus.tCsrInfo_boAutoModeActivate, (TVoid*)&gCsr_ctRecDat_Msg9C1SendToOpus.tCsrRng_boAutoModeActivate,
        (TVoid*)&gCsr_tMsg9C1SendToOpus.boAutoModeActivate, (TVoid*)&mCsr_tOldDat_tMsg9C1SendToOpus.boAutoModeActivate, &mCsr_aeRecErr_tMsg9C1SendToOpus[0],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg9C1SendToOpus.tCsrInfo_boSilenceModeActivate, (TVoid*)&gCsr_ctRecDat_Msg9C1SendToOpus.tCsrRng_boSilenceModeActivate,
        (TVoid*)&gCsr_tMsg9C1SendToOpus.boSilenceModeActivate, (TVoid*)&mCsr_tOldDat_tMsg9C1SendToOpus.boSilenceModeActivate, &mCsr_aeRecErr_tMsg9C1SendToOpus[1],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg9C1SendToOpus.tCsrInfo_boForcingModeActivate, (TVoid*)&gCsr_ctRecDat_Msg9C1SendToOpus.tCsrRng_boForcingModeActivate,
        (TVoid*)&gCsr_tMsg9C1SendToOpus.boForcingModeActivate, (TVoid*)&mCsr_tOldDat_tMsg9C1SendToOpus.boForcingModeActivate, &mCsr_aeRecErr_tMsg9C1SendToOpus[2],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg9C1SendToOpus.tCsrInfo_boForcingRegenlow, (TVoid*)&gCsr_ctRecDat_Msg9C1SendToOpus.tCsrRng_boForcingRegenlow,
        (TVoid*)&gCsr_tMsg9C1SendToOpus.boForcingRegenlow, (TVoid*)&mCsr_tOldDat_tMsg9C1SendToOpus.boForcingRegenlow, &mCsr_aeRecErr_tMsg9C1SendToOpus[3],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg9C1SendToOpus.tCsrInfo_boForcingRegenHigh, (TVoid*)&gCsr_ctRecDat_Msg9C1SendToOpus.tCsrRng_boForcingRegenHigh,
        (TVoid*)&gCsr_tMsg9C1SendToOpus.boForcingRegenHigh, (TVoid*)&mCsr_tOldDat_tMsg9C1SendToOpus.boForcingRegenHigh, &mCsr_aeRecErr_tMsg9C1SendToOpus[4],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg9C1SendToOpus.tCsrInfo_boAskReloadWithGenerator, (TVoid*)&gCsr_ctRecDat_Msg9C1SendToOpus.tCsrRng_boAskReloadWithGenerator,
        (TVoid*)&gCsr_tMsg9C1SendToOpus.boAskReloadWithGenerator, (TVoid*)&mCsr_tOldDat_tMsg9C1SendToOpus.boAskReloadWithGenerator, &mCsr_aeRecErr_tMsg9C1SendToOpus[5],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg9C1SendToOpus.tCsrInfo_boReloadWithGeneratorOn, (TVoid*)&gCsr_ctRecDat_Msg9C1SendToOpus.tCsrRng_boReloadWithGeneratorOn,
        (TVoid*)&gCsr_tMsg9C1SendToOpus.boReloadWithGeneratorOn, (TVoid*)&mCsr_tOldDat_tMsg9C1SendToOpus.boReloadWithGeneratorOn, &mCsr_aeRecErr_tMsg9C1SendToOpus[6],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg9C1SendToOpus.tCsrInfo_boAlarmCptNbrRegenFinish, (TVoid*)&gCsr_ctRecDat_Msg9C1SendToOpus.tCsrRng_boAlarmCptNbrRegenFinish,
        (TVoid*)&gCsr_tMsg9C1SendToOpus.boAlarmCptNbrRegenFinish, (TVoid*)&mCsr_tOldDat_tMsg9C1SendToOpus.boAlarmCptNbrRegenFinish, &mCsr_aeRecErr_tMsg9C1SendToOpus[7],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg9C1SendToOpus.tCsrInfo_boElectricMotorForbidden, (TVoid*)&gCsr_ctRecDat_Msg9C1SendToOpus.tCsrRng_boElectricMotorForbidden,
        (TVoid*)&gCsr_tMsg9C1SendToOpus.boElectricMotorForbidden, (TVoid*)&mCsr_tOldDat_tMsg9C1SendToOpus.boElectricMotorForbidden, &mCsr_aeRecErr_tMsg9C1SendToOpus[8],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg9C1SendToOpus.tCsrInfo_boPictoColdOilTankTemperature, (TVoid*)&gCsr_ctRecDat_Msg9C1SendToOpus.tCsrRng_boPictoColdOilTankTemperature,
        (TVoid*)&gCsr_tMsg9C1SendToOpus.boPictoColdOilTankTemperature, (TVoid*)&mCsr_tOldDat_tMsg9C1SendToOpus.boPictoColdOilTankTemperature, &mCsr_aeRecErr_tMsg9C1SendToOpus[9],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg9C1SendToOpus.tCsrInfo_boRecoveryReductionRatio, (TVoid*)&gCsr_ctRecDat_Msg9C1SendToOpus.tCsrRng_boRecoveryReductionRatio,
        (TVoid*)&gCsr_tMsg9C1SendToOpus.boRecoveryReductionRatio, (TVoid*)&mCsr_tOldDat_tMsg9C1SendToOpus.boRecoveryReductionRatio, &mCsr_aeRecErr_tMsg9C1SendToOpus[10],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg9C1SendToOpus.tCsrInfo_u16RemainingRegenTimeAverage, (TVoid*)&gCsr_ctRecDat_Msg9C1SendToOpus.tCsrRng_u16RemainingRegenTimeAverage,
        (TVoid*)&gCsr_tMsg9C1SendToOpus.u16RemainingRegenTimeAverage, (TVoid*)&mCsr_tOldDat_tMsg9C1SendToOpus.u16RemainingRegenTimeAverage, &mCsr_aeRecErr_tMsg9C1SendToOpus[11],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg9C1SendToOpus.tCsrInfo_u16TotalRegenHours, (TVoid*)&gCsr_ctRecDat_Msg9C1SendToOpus.tCsrRng_u16TotalRegenHours,
        (TVoid*)&gCsr_tMsg9C1SendToOpus.u16TotalRegenHours, (TVoid*)&mCsr_tOldDat_tMsg9C1SendToOpus.u16TotalRegenHours, &mCsr_aeRecErr_tMsg9C1SendToOpus[12],
        NULL, NULL
    }
};

static const TCanSigRecRoot mCsr_ctRoot_Msg9C1SendToOpus =
{
    "Msg9C1SendToOpus",                                     //!< achName - [STR] Name Msg9C1SendToOpus
    8,                                                      //!< u8Dlc - [NUM] DLC of Can Message
    0xff,                                                   //!< u8CanByteDflt - [NUM] CAN Message default
    DATA_INTEL,                                             //!< eCanFormat - [NUM] CAN Format
    0xFF,                                                   //!< u8MasterReceiveId - [NUM] Receive Id
    13,                                                     //!< u8RecCnt - [NUM] Count of Recorde
    &mCsr_actRecDat_tMsg9C1SendToOpus[0],                   //!< ptRec - [NUM] Pointer to Record Values
    22,                                                     //!< u16RecNo - [NUM] Record Number
    CSR_STAMP                                               //!< u16Stamp - [NUM] Safety stamp
};

TCanSigRecMsg9C1SendToOpus gCsr_tMsg9C1SendToOpus =
{
    &mCsr_ctRoot_Msg9C1SendToOpus,                          //!< *cptRoot [POI] Root connection
    FALSE,                                                  //!< boAutoModeActivate [[-]] new signal
    FALSE,                                                  //!< boSilenceModeActivate [[-]] new signal
    FALSE,                                                  //!< boForcingModeActivate [[-]] new signal
    FALSE,                                                  //!< boForcingRegenlow [[-]] new signal
    FALSE,                                                  //!< boForcingRegenHigh [[-]] new signal
    FALSE,                                                  //!< boAskReloadWithGenerator [[-]] new signal
    FALSE,                                                  //!< boReloadWithGeneratorOn [[-]] new signal
    FALSE,                                                  //!< boAlarmCptNbrRegenFinish [[-]] new signal
    FALSE,                                                  //!< boElectricMotorForbidden [[-]] new signal
    FALSE,                                                  //!< boPictoColdOilTankTemperature [[-]] new signal
    FALSE,                                                  //!< boRecoveryReductionRatio [[-]] new signal
    (((0 * 1)/1)+0),                                        //!< u16RemainingRegenTimeAverage [[-]] new signal
    (((0 * 1)/1)+0)                                         //!< u16TotalRegenHours [[-]] new signal
};

const TCanSigRecVal_Sdo_Request_48XS gCsr_ctRecDat_Sdo_Request_48XS =
{
    //!< CCD
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TUINT8, TUINT8, 0, 8, 0, 0, 1, 1 }, 
     { U8_MIN, U8_MAX, 0, 0 },
    //!< Index
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TUINT16, TUINT16, 8, 16, 0, 0, 1, 1 }, 
     { U16_MIN, U16_MAX, 0, 0 },
    //!< Sub_Index
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TUINT8, TUINT8, 24, 8, 0, 0, 1, 1 }, 
     { U8_MIN, U8_MAX, 0, 0 },
    //!< Data
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TUINT32, TUINT32, 32, 32, 0, 0, 1, 1 }, 
     { U32_MIN, U32_MAX, 0, 0 }
};

static ESigSta mCsr_aeRecErr_tSdo_Request_48XS[4] =
{
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY
};

static TCanSigRecOldValSdo_Request_48XS mCsr_tOldDat_tSdo_Request_48XS =
{
    0,                                                      //!< u8CCD [[-]] Command code, indicates the type of command or response, as well
    0,                                                      //!< u16Index [[-]] Index of the parameter to write/read
    0,                                                      //!< u8Sub_Index [[-]] Sub-index of the parameter to write/read
    0                                                       //!< u32Data [[-]] Data
};

extern TCanSigRecSdo_Request_48XS gCsr_tSdo_Request_48XS;
static const TRecDat mCsr_actRecDat_tSdo_Request_48XS[4] =
{
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Sdo_Request_48XS.tCsrInfo_u8CCD, (TVoid*)&gCsr_ctRecDat_Sdo_Request_48XS.tCsrRng_u8CCD,
        (TVoid*)&gCsr_tSdo_Request_48XS.u8CCD, (TVoid*)&mCsr_tOldDat_tSdo_Request_48XS.u8CCD, &mCsr_aeRecErr_tSdo_Request_48XS[0],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Sdo_Request_48XS.tCsrInfo_u16Index, (TVoid*)&gCsr_ctRecDat_Sdo_Request_48XS.tCsrRng_u16Index,
        (TVoid*)&gCsr_tSdo_Request_48XS.u16Index, (TVoid*)&mCsr_tOldDat_tSdo_Request_48XS.u16Index, &mCsr_aeRecErr_tSdo_Request_48XS[1],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Sdo_Request_48XS.tCsrInfo_u8Sub_Index, (TVoid*)&gCsr_ctRecDat_Sdo_Request_48XS.tCsrRng_u8Sub_Index,
        (TVoid*)&gCsr_tSdo_Request_48XS.u8Sub_Index, (TVoid*)&mCsr_tOldDat_tSdo_Request_48XS.u8Sub_Index, &mCsr_aeRecErr_tSdo_Request_48XS[2],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Sdo_Request_48XS.tCsrInfo_u32Data, (TVoid*)&gCsr_ctRecDat_Sdo_Request_48XS.tCsrRng_u32Data,
        (TVoid*)&gCsr_tSdo_Request_48XS.u32Data, (TVoid*)&mCsr_tOldDat_tSdo_Request_48XS.u32Data, &mCsr_aeRecErr_tSdo_Request_48XS[3],
        NULL, NULL
    }
};

static const TCanSigRecRoot mCsr_ctRoot_Sdo_Request_48XS =
{
    "Sdo_Request_48XS",                                     //!< achName - [STR] Name Sdo_Request_48XS
    8,                                                      //!< u8Dlc - [NUM] DLC of Can Message
    0xff,                                                   //!< u8CanByteDflt - [NUM] CAN Message default
    DATA_INTEL,                                             //!< eCanFormat - [NUM] CAN Format
    0xFF,                                                   //!< u8MasterReceiveId - [NUM] Receive Id
    4,                                                      //!< u8RecCnt - [NUM] Count of Recorde
    &mCsr_actRecDat_tSdo_Request_48XS[0],                   //!< ptRec - [NUM] Pointer to Record Values
    23,                                                     //!< u16RecNo - [NUM] Record Number
    CSR_STAMP                                               //!< u16Stamp - [NUM] Safety stamp
};

TCanSigRecSdo_Request_48XS gCsr_tSdo_Request_48XS =
{
    &mCsr_ctRoot_Sdo_Request_48XS,                          //!< *cptRoot [POI] Root connection
    (((0 * 1)/1)+0),                                        //!< u8CCD [[-]] Command code, indicates the type of command or response, as well
    (((0 * 1)/1)+0),                                        //!< u16Index [[-]] Index of the parameter to write/read
    (((0 * 1)/1)+0),                                        //!< u8Sub_Index [[-]] Sub-index of the parameter to write/read
    (((0 * 1)/1)+0)                                         //!< u32Data [[-]] Data
};

const TCanSigRecVal_PDO5_48XS gCsr_ctRecDat_PDO5_48XS =
{
    //!< MotorDefaultLightErrSta
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, EERRORSTATUS48XS_TYPE, EERRORSTATUS48XS_TYPE, 0, 8, 0, 0, 1, 1 }, 
     { GE_IO_E_OK, GE_IO_E_DO_DIAG_NOT_FINISHED, GE_IO_E_UNKNOWN, GE_IO_E_UNKNOWN },
    //!< OverloadLightErrSta
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, EERRORSTATUS48XS_TYPE, EERRORSTATUS48XS_TYPE, 8, 8, 0, 0, 1, 1 }, 
     { GE_IO_E_OK, GE_IO_E_DO_DIAG_NOT_FINISHED, GE_IO_E_UNKNOWN, GE_IO_E_UNKNOWN },
    //!< BuzzerErrSta
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, EERRORSTATUS48XS_TYPE, EERRORSTATUS48XS_TYPE, 16, 8, 0, 0, 1, 1 }, 
     { GE_IO_E_OK, GE_IO_E_DO_DIAG_NOT_FINISHED, GE_IO_E_UNKNOWN, GE_IO_E_UNKNOWN },
    //!< WarmingLightErrSta
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, EERRORSTATUS48XS_TYPE, EERRORSTATUS48XS_TYPE, 24, 8, 0, 0, 1, 1 }, 
     { GE_IO_E_OK, GE_IO_E_DO_DIAG_NOT_FINISHED, GE_IO_E_UNKNOWN, GE_IO_E_UNKNOWN },
    //!< DeversDefaultLightErrSta
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, EERRORSTATUS48XS_TYPE, EERRORSTATUS48XS_TYPE, 32, 8, 0, 0, 1, 1 }, 
     { GE_IO_E_OK, GE_IO_E_DO_DIAG_NOT_FINISHED, GE_IO_E_UNKNOWN, GE_IO_E_UNKNOWN },
    //!< GasOilLightErrSta
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, EERRORSTATUS48XS_TYPE, EERRORSTATUS48XS_TYPE, 40, 8, 0, 0, 1, 1 }, 
     { GE_IO_E_OK, GE_IO_E_DO_DIAG_NOT_FINISHED, GE_IO_E_UNKNOWN, GE_IO_E_UNKNOWN },
    //!< WhiteLightARGErrSta
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, EERRORSTATUS48XS_TYPE, EERRORSTATUS48XS_TYPE, 48, 8, 0, 0, 1, 1 }, 
     { GE_IO_E_OK, GE_IO_E_DO_DIAG_NOT_FINISHED, GE_IO_E_UNKNOWN, GE_IO_E_UNKNOWN },
    //!< RedLightARGErrSta
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, EERRORSTATUS48XS_TYPE, EERRORSTATUS48XS_TYPE, 56, 8, 0, 0, 1, 1 }, 
     { GE_IO_E_OK, GE_IO_E_DO_DIAG_NOT_FINISHED, GE_IO_E_UNKNOWN, GE_IO_E_UNKNOWN }
};

static ESigSta mCsr_aeRecErr_tPDO5_48XS[8] =
{
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY
};

static TCanSigRecOldValPDO5_48XS mCsr_tOldDat_tPDO5_48XS =
{
    GE_IO_E_UNKNOWN,                                        //!< eMotorDefaultLightErrSta [[-]] new signal
    GE_IO_E_UNKNOWN,                                        //!< eOverloadLightErrSta [[-]] new signal
    GE_IO_E_UNKNOWN,                                        //!< eBuzzerErrSta [[-]] new signal
    GE_IO_E_UNKNOWN,                                        //!< eWarmingLightErrSta [[-]] new signal
    GE_IO_E_UNKNOWN,                                        //!< eDeversDefaultLightErrSta [[-]] new signal
    GE_IO_E_UNKNOWN,                                        //!< eGasOilLightErrSta [[-]] new signal
    GE_IO_E_UNKNOWN,                                        //!< eWhiteLightARGErrSta [[-]] new signal
    GE_IO_E_UNKNOWN                                         //!< eRedLightARGErrSta [[-]] new signal
};

extern TCanSigRecPDO5_48XS gCsr_tPDO5_48XS;
static const TRecDat mCsr_actRecDat_tPDO5_48XS[8] =
{
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_PDO5_48XS.tCsrInfo_eMotorDefaultLightErrSta, (TVoid*)&gCsr_ctRecDat_PDO5_48XS.tCsrRng_eMotorDefaultLightErrSta,
        (TVoid*)&gCsr_tPDO5_48XS.eMotorDefaultLightErrSta, (TVoid*)&mCsr_tOldDat_tPDO5_48XS.eMotorDefaultLightErrSta, &mCsr_aeRecErr_tPDO5_48XS[0],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_PDO5_48XS.tCsrInfo_eOverloadLightErrSta, (TVoid*)&gCsr_ctRecDat_PDO5_48XS.tCsrRng_eOverloadLightErrSta,
        (TVoid*)&gCsr_tPDO5_48XS.eOverloadLightErrSta, (TVoid*)&mCsr_tOldDat_tPDO5_48XS.eOverloadLightErrSta, &mCsr_aeRecErr_tPDO5_48XS[1],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_PDO5_48XS.tCsrInfo_eBuzzerErrSta, (TVoid*)&gCsr_ctRecDat_PDO5_48XS.tCsrRng_eBuzzerErrSta,
        (TVoid*)&gCsr_tPDO5_48XS.eBuzzerErrSta, (TVoid*)&mCsr_tOldDat_tPDO5_48XS.eBuzzerErrSta, &mCsr_aeRecErr_tPDO5_48XS[2],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_PDO5_48XS.tCsrInfo_eWarmingLightErrSta, (TVoid*)&gCsr_ctRecDat_PDO5_48XS.tCsrRng_eWarmingLightErrSta,
        (TVoid*)&gCsr_tPDO5_48XS.eWarmingLightErrSta, (TVoid*)&mCsr_tOldDat_tPDO5_48XS.eWarmingLightErrSta, &mCsr_aeRecErr_tPDO5_48XS[3],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_PDO5_48XS.tCsrInfo_eDeversDefaultLightErrSta, (TVoid*)&gCsr_ctRecDat_PDO5_48XS.tCsrRng_eDeversDefaultLightErrSta,
        (TVoid*)&gCsr_tPDO5_48XS.eDeversDefaultLightErrSta, (TVoid*)&mCsr_tOldDat_tPDO5_48XS.eDeversDefaultLightErrSta, &mCsr_aeRecErr_tPDO5_48XS[4],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_PDO5_48XS.tCsrInfo_eGasOilLightErrSta, (TVoid*)&gCsr_ctRecDat_PDO5_48XS.tCsrRng_eGasOilLightErrSta,
        (TVoid*)&gCsr_tPDO5_48XS.eGasOilLightErrSta, (TVoid*)&mCsr_tOldDat_tPDO5_48XS.eGasOilLightErrSta, &mCsr_aeRecErr_tPDO5_48XS[5],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_PDO5_48XS.tCsrInfo_eWhiteLightARGErrSta, (TVoid*)&gCsr_ctRecDat_PDO5_48XS.tCsrRng_eWhiteLightARGErrSta,
        (TVoid*)&gCsr_tPDO5_48XS.eWhiteLightARGErrSta, (TVoid*)&mCsr_tOldDat_tPDO5_48XS.eWhiteLightARGErrSta, &mCsr_aeRecErr_tPDO5_48XS[6],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_PDO5_48XS.tCsrInfo_eRedLightARGErrSta, (TVoid*)&gCsr_ctRecDat_PDO5_48XS.tCsrRng_eRedLightARGErrSta,
        (TVoid*)&gCsr_tPDO5_48XS.eRedLightARGErrSta, (TVoid*)&mCsr_tOldDat_tPDO5_48XS.eRedLightARGErrSta, &mCsr_aeRecErr_tPDO5_48XS[7],
        NULL, NULL
    }
};

static const TCanSigRecRoot mCsr_ctRoot_PDO5_48XS =
{
    "PDO5_48XS",                                            //!< achName - [STR] Name PDO5_48XS
    8,                                                      //!< u8Dlc - [NUM] DLC of Can Message
    0xff,                                                   //!< u8CanByteDflt - [NUM] CAN Message default
    DATA_INTEL,                                             //!< eCanFormat - [NUM] CAN Format
    0xFF,                                                   //!< u8MasterReceiveId - [NUM] Receive Id
    8,                                                      //!< u8RecCnt - [NUM] Count of Recorde
    &mCsr_actRecDat_tPDO5_48XS[0],                          //!< ptRec - [NUM] Pointer to Record Values
    24,                                                     //!< u16RecNo - [NUM] Record Number
    CSR_STAMP                                               //!< u16Stamp - [NUM] Safety stamp
};

TCanSigRecPDO5_48XS gCsr_tPDO5_48XS =
{
    &mCsr_ctRoot_PDO5_48XS,                                 //!< *cptRoot [POI] Root connection
    GE_IO_E_UNKNOWN,                                        //!< eMotorDefaultLightErrSta [[-]] new signal
    GE_IO_E_UNKNOWN,                                        //!< eOverloadLightErrSta [[-]] new signal
    GE_IO_E_UNKNOWN,                                        //!< eBuzzerErrSta [[-]] new signal
    GE_IO_E_UNKNOWN,                                        //!< eWarmingLightErrSta [[-]] new signal
    GE_IO_E_UNKNOWN,                                        //!< eDeversDefaultLightErrSta [[-]] new signal
    GE_IO_E_UNKNOWN,                                        //!< eGasOilLightErrSta [[-]] new signal
    GE_IO_E_UNKNOWN,                                        //!< eWhiteLightARGErrSta [[-]] new signal
    GE_IO_E_UNKNOWN                                         //!< eRedLightARGErrSta [[-]] new signal
};

const TCanSigRecVal_PDO6_48XS gCsr_ctRecDat_PDO6_48XS =
{
    //!< WhiteLightARDErrSta
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, EERRORSTATUS48XS_TYPE, EERRORSTATUS48XS_TYPE, 0, 8, 0, 0, 1, 1 }, 
     { GE_IO_E_OK, GE_IO_E_DO_DIAG_NOT_FINISHED, GE_IO_E_UNKNOWN, GE_IO_E_UNKNOWN },
    //!< RedLightARDErrSta
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, EERRORSTATUS48XS_TYPE, EERRORSTATUS48XS_TYPE, 8, 8, 0, 0, 1, 1 }, 
     { GE_IO_E_OK, GE_IO_E_DO_DIAG_NOT_FINISHED, GE_IO_E_UNKNOWN, GE_IO_E_UNKNOWN },
    //!< WhiteLightAr15746ErrSta
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, EERRORSTATUS48XS_TYPE, EERRORSTATUS48XS_TYPE, 16, 8, 0, 0, 1, 1 }, 
     { GE_IO_E_OK, GE_IO_E_DO_DIAG_NOT_FINISHED, GE_IO_E_UNKNOWN, GE_IO_E_UNKNOWN }
};

static ESigSta mCsr_aeRecErr_tPDO6_48XS[3] =
{
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY
};

static TCanSigRecOldValPDO6_48XS mCsr_tOldDat_tPDO6_48XS =
{
    GE_IO_E_UNKNOWN,                                        //!< eWhiteLightARDErrSta [[-]] new signal
    GE_IO_E_UNKNOWN,                                        //!< eRedLightARDErrSta [[-]] new signal
    GE_IO_E_UNKNOWN                                         //!< eWhiteLightAr15746ErrSta [[-]] new signal
};

extern TCanSigRecPDO6_48XS gCsr_tPDO6_48XS;
static const TRecDat mCsr_actRecDat_tPDO6_48XS[3] =
{
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_PDO6_48XS.tCsrInfo_eWhiteLightARDErrSta, (TVoid*)&gCsr_ctRecDat_PDO6_48XS.tCsrRng_eWhiteLightARDErrSta,
        (TVoid*)&gCsr_tPDO6_48XS.eWhiteLightARDErrSta, (TVoid*)&mCsr_tOldDat_tPDO6_48XS.eWhiteLightARDErrSta, &mCsr_aeRecErr_tPDO6_48XS[0],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_PDO6_48XS.tCsrInfo_eRedLightARDErrSta, (TVoid*)&gCsr_ctRecDat_PDO6_48XS.tCsrRng_eRedLightARDErrSta,
        (TVoid*)&gCsr_tPDO6_48XS.eRedLightARDErrSta, (TVoid*)&mCsr_tOldDat_tPDO6_48XS.eRedLightARDErrSta, &mCsr_aeRecErr_tPDO6_48XS[1],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_PDO6_48XS.tCsrInfo_eWhiteLightAr15746ErrSta, (TVoid*)&gCsr_ctRecDat_PDO6_48XS.tCsrRng_eWhiteLightAr15746ErrSta,
        (TVoid*)&gCsr_tPDO6_48XS.eWhiteLightAr15746ErrSta, (TVoid*)&mCsr_tOldDat_tPDO6_48XS.eWhiteLightAr15746ErrSta, &mCsr_aeRecErr_tPDO6_48XS[2],
        NULL, NULL
    }
};

static const TCanSigRecRoot mCsr_ctRoot_PDO6_48XS =
{
    "PDO6_48XS",                                            //!< achName - [STR] Name PDO6_48XS
    8,                                                      //!< u8Dlc - [NUM] DLC of Can Message
    0xff,                                                   //!< u8CanByteDflt - [NUM] CAN Message default
    DATA_INTEL,                                             //!< eCanFormat - [NUM] CAN Format
    0xFF,                                                   //!< u8MasterReceiveId - [NUM] Receive Id
    3,                                                      //!< u8RecCnt - [NUM] Count of Recorde
    &mCsr_actRecDat_tPDO6_48XS[0],                          //!< ptRec - [NUM] Pointer to Record Values
    25,                                                     //!< u16RecNo - [NUM] Record Number
    CSR_STAMP                                               //!< u16Stamp - [NUM] Safety stamp
};

TCanSigRecPDO6_48XS gCsr_tPDO6_48XS =
{
    &mCsr_ctRoot_PDO6_48XS,                                 //!< *cptRoot [POI] Root connection
    GE_IO_E_UNKNOWN,                                        //!< eWhiteLightARDErrSta [[-]] new signal
    GE_IO_E_UNKNOWN,                                        //!< eRedLightARDErrSta [[-]] new signal
    GE_IO_E_UNKNOWN                                         //!< eWhiteLightAr15746ErrSta [[-]] new signal
};

const TCanSigRecVal_Heartbeat_C1 gCsr_ctRecDat_Heartbeat_C1 =
{
    //!< State
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TUINT8, TUINT8, 0, 8, 0, 0, 1, 1 }, 
     { U8_MIN, U8_MAX, 0, 0 }
};

static ESigSta mCsr_aeRecErr_tHeartbeat_C1[1] =
{
    SIG_OKAY
};

static TCanSigRecOldValHeartbeat_C1 mCsr_tOldDat_tHeartbeat_C1 =
{
    0                                                       //!< u8State [[-]] new signal
};

extern TCanSigRecHeartbeat_C1 gCsr_tHeartbeat_C1;
static const TRecDat mCsr_actRecDat_tHeartbeat_C1[1] =
{
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Heartbeat_C1.tCsrInfo_u8State, (TVoid*)&gCsr_ctRecDat_Heartbeat_C1.tCsrRng_u8State,
        (TVoid*)&gCsr_tHeartbeat_C1.u8State, (TVoid*)&mCsr_tOldDat_tHeartbeat_C1.u8State, &mCsr_aeRecErr_tHeartbeat_C1[0],
        NULL, NULL
    }
};

static const TCanSigRecRoot mCsr_ctRoot_Heartbeat_C1 =
{
    "Heartbeat_C1",                                         //!< achName - [STR] Name Heartbeat_C1
    1,                                                      //!< u8Dlc - [NUM] DLC of Can Message
    0xff,                                                   //!< u8CanByteDflt - [NUM] CAN Message default
    DATA_INTEL,                                             //!< eCanFormat - [NUM] CAN Format
    0xFF,                                                   //!< u8MasterReceiveId - [NUM] Receive Id
    1,                                                      //!< u8RecCnt - [NUM] Count of Recorde
    &mCsr_actRecDat_tHeartbeat_C1[0],                       //!< ptRec - [NUM] Pointer to Record Values
    26,                                                     //!< u16RecNo - [NUM] Record Number
    CSR_STAMP                                               //!< u16Stamp - [NUM] Safety stamp
};

TCanSigRecHeartbeat_C1 gCsr_tHeartbeat_C1 =
{
    &mCsr_ctRoot_Heartbeat_C1,                              //!< *cptRoot [POI] Root connection
    (((0 * 1)/1)+0)                                         //!< u8State [[-]] new signal
};

const TCanSigRecVal_Hearbeat_48XS gCsr_ctRecDat_Hearbeat_48XS =
{
    //!< State
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TUINT8, TUINT8, 0, 8, 0, 0, 1, 1 }, 
     { U8_MIN, U8_MAX, 0, 0 }
};

static ESigSta mCsr_aeRecErr_tHearbeat_48XS[1] =
{
    SIG_OKAY
};

static TCanSigRecOldValHearbeat_48XS mCsr_tOldDat_tHearbeat_48XS =
{
    0                                                       //!< u8State [[-]] new signal
};

extern TCanSigRecHearbeat_48XS gCsr_tHearbeat_48XS;
static const TRecDat mCsr_actRecDat_tHearbeat_48XS[1] =
{
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Hearbeat_48XS.tCsrInfo_u8State, (TVoid*)&gCsr_ctRecDat_Hearbeat_48XS.tCsrRng_u8State,
        (TVoid*)&gCsr_tHearbeat_48XS.u8State, (TVoid*)&mCsr_tOldDat_tHearbeat_48XS.u8State, &mCsr_aeRecErr_tHearbeat_48XS[0],
        NULL, NULL
    }
};

static const TCanSigRecRoot mCsr_ctRoot_Hearbeat_48XS =
{
    "Hearbeat_48XS",                                        //!< achName - [STR] Name Hearbeat_48XS
    1,                                                      //!< u8Dlc - [NUM] DLC of Can Message
    0xff,                                                   //!< u8CanByteDflt - [NUM] CAN Message default
    DATA_INTEL,                                             //!< eCanFormat - [NUM] CAN Format
    0xFF,                                                   //!< u8MasterReceiveId - [NUM] Receive Id
    1,                                                      //!< u8RecCnt - [NUM] Count of Recorde
    &mCsr_actRecDat_tHearbeat_48XS[0],                      //!< ptRec - [NUM] Pointer to Record Values
    27,                                                     //!< u16RecNo - [NUM] Record Number
    CSR_STAMP                                               //!< u16Stamp - [NUM] Safety stamp
};

TCanSigRecHearbeat_48XS gCsr_tHearbeat_48XS =
{
    &mCsr_ctRoot_Hearbeat_48XS,                             //!< *cptRoot [POI] Root connection
    (((0 * 1)/1)+0)                                         //!< u8State [[-]] new signal
};

const TCanSigRecVal_Hearbeat_Telescope gCsr_ctRecDat_Hearbeat_Telescope =
{
    //!< State
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TUINT8, TUINT8, 0, 8, 0, 0, 1, 1 }, 
     { U8_MIN, U8_MAX, 0, 0 }
};

static ESigSta mCsr_aeRecErr_tHearbeat_Telescope[1] =
{
    SIG_OKAY
};

static TCanSigRecOldValHearbeat_Telescope mCsr_tOldDat_tHearbeat_Telescope =
{
    0                                                       //!< u8State [[-]] new signal
};

extern TCanSigRecHearbeat_Telescope gCsr_tHearbeat_Telescope;
static const TRecDat mCsr_actRecDat_tHearbeat_Telescope[1] =
{
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Hearbeat_Telescope.tCsrInfo_u8State, (TVoid*)&gCsr_ctRecDat_Hearbeat_Telescope.tCsrRng_u8State,
        (TVoid*)&gCsr_tHearbeat_Telescope.u8State, (TVoid*)&mCsr_tOldDat_tHearbeat_Telescope.u8State, &mCsr_aeRecErr_tHearbeat_Telescope[0],
        NULL, NULL
    }
};

static const TCanSigRecRoot mCsr_ctRoot_Hearbeat_Telescope =
{
    "Hearbeat_Telescope",                                   //!< achName - [STR] Name Hearbeat_Telescope
    8,                                                      //!< u8Dlc - [NUM] DLC of Can Message
    0xff,                                                   //!< u8CanByteDflt - [NUM] CAN Message default
    DATA_INTEL,                                             //!< eCanFormat - [NUM] CAN Format
    0xFF,                                                   //!< u8MasterReceiveId - [NUM] Receive Id
    1,                                                      //!< u8RecCnt - [NUM] Count of Recorde
    &mCsr_actRecDat_tHearbeat_Telescope[0],                 //!< ptRec - [NUM] Pointer to Record Values
    28,                                                     //!< u16RecNo - [NUM] Record Number
    CSR_STAMP                                               //!< u16Stamp - [NUM] Safety stamp
};

TCanSigRecHearbeat_Telescope gCsr_tHearbeat_Telescope =
{
    &mCsr_ctRoot_Hearbeat_Telescope,                        //!< *cptRoot [POI] Root connection
    (((0 * 1)/1)+0)                                         //!< u8State [[-]] new signal
};

const TCanSigRecVal_Msg1C1SendToEvision7 gCsr_ctRecDat_Msg1C1SendToEvision7 =
{
    //!< gBattery_On_Off
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 0, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gPreheat_On_Off
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 1, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gEngine_Faillure_On_Off
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 2, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gMaintenance_On_Off
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 3, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gOil_On_OFF
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 4, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gDeltaArmSectorDown
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 5, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gArrowArmSectorDown
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 6, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gPendularSectorDown
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 7, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gDeltaArmInCenter
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 8, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gArrowArmInCenter
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 9, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gPendularInCenter
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 10, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gBasketRotationInCenter
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 11, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gTelescopeInCenter
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 12, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gBasketInclinaisonInCenter
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 13, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gDeltaArmMoveUpAllow
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 14, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gDeltaArmMoveDownAllow
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 15, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gArrowArmMoveUpAllow
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 16, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gArrowArmMoveDownAllow
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 17, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gPendularMoveUpAllow
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 18, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gPendularMoveDownAllow
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 19, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gTelescopeMoveOutAllow
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 20, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gTelescopeMoveInAllow
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 21, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gTurretCtClockWiseMoveAllow
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 22, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gTurretClockWiseMoveAllow
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 23, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gBasketRotCtClockWiseMoveAllow
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 24, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gBasketRotClockWiseMoveAllow
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 25, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gBasketInclinMoveUpAllow
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 26, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gBasketInclinMoveDownAllow
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 27, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gVehiculeDefault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 28, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gTelescopeOutputPossible
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 29, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gTelescopeWinderFault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 30, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gNacellePostSelector
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 31, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gSTOP_On_Off
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 32, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gSafeManSystem
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 33, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gHighSpeedAllow
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 34, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gAutomatiqueStop
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 35, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gLowSpeedByFault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 36, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gMeasuringMastFault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 37, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gMeasuringMatOption
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 38, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gBasketAccessLocked
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 39, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gFilterOverloadNoActive
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 40, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gAnticlockwiseBasketSlew
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 41, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gClockwiseBasketSlew
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 42, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gFlashLightForced
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 43, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gBasketAccessLockOption
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 44, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gBasketLateralStopOption
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 45, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gBasketStepClosed
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 46, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gSystemFault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 47, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gTrans1PressureSensorFault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 48, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gTrans2PressureSensorFault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 49, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gOverloadSecurity
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 50, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gDeltaArmJoysCenteredTeles
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 51, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gArrowJoystickCenteredTurret
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 52, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gDeltaArmMoveUp
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 53, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gDeltaArmMoveDown
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 54, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gArrowArmMoveUp
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 55, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gArrowArmMoveDown
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 56, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gTelescopeMoveOut
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 57, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gTelescopeMoveIn
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 58, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gTurretCounterClockWiseMove
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 59, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gTurretClockWiseMove
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 60, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gTurretEncoderFault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 61, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gGeneratorOption
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 62, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gGeneratorActive
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 63, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE }
};

static ESigSta mCsr_aeRecErr_tMsg1C1SendToEvision7[64] =
{
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY
};

static TCanSigRecOldValMsg1C1SendToEvision7 mCsr_tOldDat_tMsg1C1SendToEvision7 =
{
    FALSE,                                                  //!< bogBattery_On_Off [[-]] Battery Status
    FALSE,                                                  //!< bogPreheat_On_Off [[-]] Preheat Status
    FALSE,                                                  //!< bogEngine_Faillure_On_Off [[-]] Engine Faillure Status
    FALSE,                                                  //!< bogMaintenance_On_Off [[-]] Maintenance Status
    FALSE,                                                  //!< bogOil_On_OFF [[-]] Oil Status
    FALSE,                                                  //!< bogDeltaArmSectorDown [[-]] Delta Arm Sector Down
    FALSE,                                                  //!< bogArrowArmSectorDown [[-]] Arrow Arm Sector Down
    FALSE,                                                  //!< bogPendularSectorDown [[-]] Pendular Sector Down
    FALSE,                                                  //!< bogDeltaArmInCenter [[-]] Delta Arm in Center
    FALSE,                                                  //!< bogArrowArmInCenter [[-]] Arrow Arm in Center
    FALSE,                                                  //!< bogPendularInCenter [[-]] Pendular in Center
    FALSE,                                                  //!< bogBasketRotationInCenter [[-]] Basket Rotation in Center
    FALSE,                                                  //!< bogTelescopeInCenter [[-]] Telescope in Center
    FALSE,                                                  //!< bogBasketInclinaisonInCenter [[-]] Basket Inclinaison in Center
    FALSE,                                                  //!< bogDeltaArmMoveUpAllow [[-]] Delta Arm Move Up Allowed
    FALSE,                                                  //!< bogDeltaArmMoveDownAllow [[-]] Delta Arm Move Down Allowed
    FALSE,                                                  //!< bogArrowArmMoveUpAllow [[-]] Arrow Arm Move Up Allowed
    FALSE,                                                  //!< bogArrowArmMoveDownAllow [[-]] Arrow Arm Move Down Allowed
    FALSE,                                                  //!< bogPendularMoveUpAllow [[-]] Pendular Move Up Allowed
    FALSE,                                                  //!< bogPendularMoveDownAllow [[-]] Pendular Move Down Allowed
    FALSE,                                                  //!< bogTelescopeMoveOutAllow [[-]] Telescope Move Out Allowed
    FALSE,                                                  //!< bogTelescopeMoveInAllow [[-]] Telescope Move In Allowed
    FALSE,                                                  //!< bogTurretCtClockWiseMoveAllow [[-]] Turret Counter Clockwise Move Allowed
    FALSE,                                                  //!< bogTurretClockWiseMoveAllow [[-]] Turret Clockwise Move Allowed
    FALSE,                                                  //!< bogBasketRotCtClockWiseMoveAllow [[-]] Basket Rotation Counter Clockwise Move Allowed
    FALSE,                                                  //!< bogBasketRotClockWiseMoveAllow [[-]] Basket Rotation Clockwise Move Allowed
    FALSE,                                                  //!< bogBasketInclinMoveUpAllow [[-]] Basket Inclinaison Move Up Allowed
    FALSE,                                                  //!< bogBasketInclinMoveDownAllow [[-]] Basket Inclinaison Move Down Allowed
    FALSE,                                                  //!< bogVehiculeDefault [[-]] Vehicule in Default (A12)
    FALSE,                                                  //!< bogTelescopeOutputPossible [[-]] Telescope output possible (A48)
    FALSE,                                                  //!< bogTelescopeWinderFault [[-]] Telescope Winder Fault (A17)
    FALSE,                                                  //!< bogNacellePostSelector [[-]] Nacelle post selector
    FALSE,                                                  //!< bogSTOP_On_Off [[-]] STOP Status
    FALSE,                                                  //!< bogSafeManSystem [[-]] SafeManSystem (A5)
    FALSE,                                                  //!< bogHighSpeedAllow [[-]] High Speed Allow (A19)
    FALSE,                                                  //!< bogAutomatiqueStop [[-]] Automatique Stop or function mismatch (A20)
    FALSE,                                                  //!< bogLowSpeedByFault [[-]] Low Speed by fault (A46)
    FALSE,                                                  //!< bogMeasuringMastFault [[-]] Measuring Mast in Fault (A8)
    FALSE,                                                  //!< bogMeasuringMatOption [[-]] Measuring mast option
    FALSE,                                                  //!< bogBasketAccessLocked [[-]] Basket access locked
    FALSE,                                                  //!< bogFilterOverloadNoActive [[-]] new signal
    FALSE,                                                  //!< bogAnticlockwiseBasketSlew [[-]] EV113 Anticlockwise Basket Slew
    FALSE,                                                  //!< bogClockwiseBasketSlew [[-]] EV112 Anticlockwise Basket Slew
    FALSE,                                                  //!< bogFlashLightForced [[-]] Flash Light Forced
    FALSE,                                                  //!< bogBasketAccessLockOption [[-]] Basket Lock Option
    FALSE,                                                  //!< bogBasketLateralStopOption [[-]] Basket lateral stop option
    FALSE,                                                  //!< bogBasketStepClosed [[-]] Basket step closed
    FALSE,                                                  //!< bogSystemFault [[-]] System Fault
    FALSE,                                                  //!< bogTrans1PressureSensorFault [[-]] Fault pressure transmission 1
    FALSE,                                                  //!< bogTrans2PressureSensorFault [[-]] Fault pressure transmission 2
    FALSE,                                                  //!< bogOverloadSecurity [[-]] Basket overload
    FALSE,                                                  //!< bogDeltaArmJoysCenteredTeles [[-]] Delta and Telescope Joystick centered
    FALSE,                                                  //!< bogArrowJoystickCenteredTurret [[-]] Arrow and Turret Joystick centered
    FALSE,                                                  //!< bogDeltaArmMoveUp [[-]] Delta Arm Move Up
    FALSE,                                                  //!< bogDeltaArmMoveDown [[-]] Delta Arm Move Down
    FALSE,                                                  //!< bogArrowArmMoveUp [[-]] Arrow Arm Move Up
    FALSE,                                                  //!< bogArrowArmMoveDown [[-]] Arrow Arm Move Down
    FALSE,                                                  //!< bogTelescopeMoveOut [[-]] Telescope Move Out
    FALSE,                                                  //!< bogTelescopeMoveIn [[-]] Telescope Move In
    FALSE,                                                  //!< bogTurretCounterClockWiseMove [[-]] Turret Counter Clockwise Move
    FALSE,                                                  //!< bogTurretClockWiseMove [[-]] Turret Clockwise Move
    FALSE,                                                  //!< bogTurretEncoderFault [[-]] Turret Encoder Fault
    FALSE,                                                  //!< bogGeneratorOption [[-]] Generator Option
    FALSE                                                   //!< bogGeneratorActive [[-]] Generator Active
};

extern TCanSigRecMsg1C1SendToEvision7 gCsr_tMsg1C1SendToEvision7;
static const TRecDat mCsr_actRecDat_tMsg1C1SendToEvision7[64] =
{
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1C1SendToEvision7.tCsrInfo_bogBattery_On_Off, (TVoid*)&gCsr_ctRecDat_Msg1C1SendToEvision7.tCsrRng_bogBattery_On_Off,
        (TVoid*)&gCsr_tMsg1C1SendToEvision7.bogBattery_On_Off, (TVoid*)&mCsr_tOldDat_tMsg1C1SendToEvision7.bogBattery_On_Off, &mCsr_aeRecErr_tMsg1C1SendToEvision7[0],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1C1SendToEvision7.tCsrInfo_bogPreheat_On_Off, (TVoid*)&gCsr_ctRecDat_Msg1C1SendToEvision7.tCsrRng_bogPreheat_On_Off,
        (TVoid*)&gCsr_tMsg1C1SendToEvision7.bogPreheat_On_Off, (TVoid*)&mCsr_tOldDat_tMsg1C1SendToEvision7.bogPreheat_On_Off, &mCsr_aeRecErr_tMsg1C1SendToEvision7[1],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1C1SendToEvision7.tCsrInfo_bogEngine_Faillure_On_Off, (TVoid*)&gCsr_ctRecDat_Msg1C1SendToEvision7.tCsrRng_bogEngine_Faillure_On_Off,
        (TVoid*)&gCsr_tMsg1C1SendToEvision7.bogEngine_Faillure_On_Off, (TVoid*)&mCsr_tOldDat_tMsg1C1SendToEvision7.bogEngine_Faillure_On_Off, &mCsr_aeRecErr_tMsg1C1SendToEvision7[2],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1C1SendToEvision7.tCsrInfo_bogMaintenance_On_Off, (TVoid*)&gCsr_ctRecDat_Msg1C1SendToEvision7.tCsrRng_bogMaintenance_On_Off,
        (TVoid*)&gCsr_tMsg1C1SendToEvision7.bogMaintenance_On_Off, (TVoid*)&mCsr_tOldDat_tMsg1C1SendToEvision7.bogMaintenance_On_Off, &mCsr_aeRecErr_tMsg1C1SendToEvision7[3],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1C1SendToEvision7.tCsrInfo_bogOil_On_OFF, (TVoid*)&gCsr_ctRecDat_Msg1C1SendToEvision7.tCsrRng_bogOil_On_OFF,
        (TVoid*)&gCsr_tMsg1C1SendToEvision7.bogOil_On_OFF, (TVoid*)&mCsr_tOldDat_tMsg1C1SendToEvision7.bogOil_On_OFF, &mCsr_aeRecErr_tMsg1C1SendToEvision7[4],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1C1SendToEvision7.tCsrInfo_bogDeltaArmSectorDown, (TVoid*)&gCsr_ctRecDat_Msg1C1SendToEvision7.tCsrRng_bogDeltaArmSectorDown,
        (TVoid*)&gCsr_tMsg1C1SendToEvision7.bogDeltaArmSectorDown, (TVoid*)&mCsr_tOldDat_tMsg1C1SendToEvision7.bogDeltaArmSectorDown, &mCsr_aeRecErr_tMsg1C1SendToEvision7[5],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1C1SendToEvision7.tCsrInfo_bogArrowArmSectorDown, (TVoid*)&gCsr_ctRecDat_Msg1C1SendToEvision7.tCsrRng_bogArrowArmSectorDown,
        (TVoid*)&gCsr_tMsg1C1SendToEvision7.bogArrowArmSectorDown, (TVoid*)&mCsr_tOldDat_tMsg1C1SendToEvision7.bogArrowArmSectorDown, &mCsr_aeRecErr_tMsg1C1SendToEvision7[6],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1C1SendToEvision7.tCsrInfo_bogPendularSectorDown, (TVoid*)&gCsr_ctRecDat_Msg1C1SendToEvision7.tCsrRng_bogPendularSectorDown,
        (TVoid*)&gCsr_tMsg1C1SendToEvision7.bogPendularSectorDown, (TVoid*)&mCsr_tOldDat_tMsg1C1SendToEvision7.bogPendularSectorDown, &mCsr_aeRecErr_tMsg1C1SendToEvision7[7],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1C1SendToEvision7.tCsrInfo_bogDeltaArmInCenter, (TVoid*)&gCsr_ctRecDat_Msg1C1SendToEvision7.tCsrRng_bogDeltaArmInCenter,
        (TVoid*)&gCsr_tMsg1C1SendToEvision7.bogDeltaArmInCenter, (TVoid*)&mCsr_tOldDat_tMsg1C1SendToEvision7.bogDeltaArmInCenter, &mCsr_aeRecErr_tMsg1C1SendToEvision7[8],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1C1SendToEvision7.tCsrInfo_bogArrowArmInCenter, (TVoid*)&gCsr_ctRecDat_Msg1C1SendToEvision7.tCsrRng_bogArrowArmInCenter,
        (TVoid*)&gCsr_tMsg1C1SendToEvision7.bogArrowArmInCenter, (TVoid*)&mCsr_tOldDat_tMsg1C1SendToEvision7.bogArrowArmInCenter, &mCsr_aeRecErr_tMsg1C1SendToEvision7[9],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1C1SendToEvision7.tCsrInfo_bogPendularInCenter, (TVoid*)&gCsr_ctRecDat_Msg1C1SendToEvision7.tCsrRng_bogPendularInCenter,
        (TVoid*)&gCsr_tMsg1C1SendToEvision7.bogPendularInCenter, (TVoid*)&mCsr_tOldDat_tMsg1C1SendToEvision7.bogPendularInCenter, &mCsr_aeRecErr_tMsg1C1SendToEvision7[10],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1C1SendToEvision7.tCsrInfo_bogBasketRotationInCenter, (TVoid*)&gCsr_ctRecDat_Msg1C1SendToEvision7.tCsrRng_bogBasketRotationInCenter,
        (TVoid*)&gCsr_tMsg1C1SendToEvision7.bogBasketRotationInCenter, (TVoid*)&mCsr_tOldDat_tMsg1C1SendToEvision7.bogBasketRotationInCenter, &mCsr_aeRecErr_tMsg1C1SendToEvision7[11],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1C1SendToEvision7.tCsrInfo_bogTelescopeInCenter, (TVoid*)&gCsr_ctRecDat_Msg1C1SendToEvision7.tCsrRng_bogTelescopeInCenter,
        (TVoid*)&gCsr_tMsg1C1SendToEvision7.bogTelescopeInCenter, (TVoid*)&mCsr_tOldDat_tMsg1C1SendToEvision7.bogTelescopeInCenter, &mCsr_aeRecErr_tMsg1C1SendToEvision7[12],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1C1SendToEvision7.tCsrInfo_bogBasketInclinaisonInCenter, (TVoid*)&gCsr_ctRecDat_Msg1C1SendToEvision7.tCsrRng_bogBasketInclinaisonInCenter,
        (TVoid*)&gCsr_tMsg1C1SendToEvision7.bogBasketInclinaisonInCenter, (TVoid*)&mCsr_tOldDat_tMsg1C1SendToEvision7.bogBasketInclinaisonInCenter, &mCsr_aeRecErr_tMsg1C1SendToEvision7[13],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1C1SendToEvision7.tCsrInfo_bogDeltaArmMoveUpAllow, (TVoid*)&gCsr_ctRecDat_Msg1C1SendToEvision7.tCsrRng_bogDeltaArmMoveUpAllow,
        (TVoid*)&gCsr_tMsg1C1SendToEvision7.bogDeltaArmMoveUpAllow, (TVoid*)&mCsr_tOldDat_tMsg1C1SendToEvision7.bogDeltaArmMoveUpAllow, &mCsr_aeRecErr_tMsg1C1SendToEvision7[14],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1C1SendToEvision7.tCsrInfo_bogDeltaArmMoveDownAllow, (TVoid*)&gCsr_ctRecDat_Msg1C1SendToEvision7.tCsrRng_bogDeltaArmMoveDownAllow,
        (TVoid*)&gCsr_tMsg1C1SendToEvision7.bogDeltaArmMoveDownAllow, (TVoid*)&mCsr_tOldDat_tMsg1C1SendToEvision7.bogDeltaArmMoveDownAllow, &mCsr_aeRecErr_tMsg1C1SendToEvision7[15],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1C1SendToEvision7.tCsrInfo_bogArrowArmMoveUpAllow, (TVoid*)&gCsr_ctRecDat_Msg1C1SendToEvision7.tCsrRng_bogArrowArmMoveUpAllow,
        (TVoid*)&gCsr_tMsg1C1SendToEvision7.bogArrowArmMoveUpAllow, (TVoid*)&mCsr_tOldDat_tMsg1C1SendToEvision7.bogArrowArmMoveUpAllow, &mCsr_aeRecErr_tMsg1C1SendToEvision7[16],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1C1SendToEvision7.tCsrInfo_bogArrowArmMoveDownAllow, (TVoid*)&gCsr_ctRecDat_Msg1C1SendToEvision7.tCsrRng_bogArrowArmMoveDownAllow,
        (TVoid*)&gCsr_tMsg1C1SendToEvision7.bogArrowArmMoveDownAllow, (TVoid*)&mCsr_tOldDat_tMsg1C1SendToEvision7.bogArrowArmMoveDownAllow, &mCsr_aeRecErr_tMsg1C1SendToEvision7[17],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1C1SendToEvision7.tCsrInfo_bogPendularMoveUpAllow, (TVoid*)&gCsr_ctRecDat_Msg1C1SendToEvision7.tCsrRng_bogPendularMoveUpAllow,
        (TVoid*)&gCsr_tMsg1C1SendToEvision7.bogPendularMoveUpAllow, (TVoid*)&mCsr_tOldDat_tMsg1C1SendToEvision7.bogPendularMoveUpAllow, &mCsr_aeRecErr_tMsg1C1SendToEvision7[18],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1C1SendToEvision7.tCsrInfo_bogPendularMoveDownAllow, (TVoid*)&gCsr_ctRecDat_Msg1C1SendToEvision7.tCsrRng_bogPendularMoveDownAllow,
        (TVoid*)&gCsr_tMsg1C1SendToEvision7.bogPendularMoveDownAllow, (TVoid*)&mCsr_tOldDat_tMsg1C1SendToEvision7.bogPendularMoveDownAllow, &mCsr_aeRecErr_tMsg1C1SendToEvision7[19],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1C1SendToEvision7.tCsrInfo_bogTelescopeMoveOutAllow, (TVoid*)&gCsr_ctRecDat_Msg1C1SendToEvision7.tCsrRng_bogTelescopeMoveOutAllow,
        (TVoid*)&gCsr_tMsg1C1SendToEvision7.bogTelescopeMoveOutAllow, (TVoid*)&mCsr_tOldDat_tMsg1C1SendToEvision7.bogTelescopeMoveOutAllow, &mCsr_aeRecErr_tMsg1C1SendToEvision7[20],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1C1SendToEvision7.tCsrInfo_bogTelescopeMoveInAllow, (TVoid*)&gCsr_ctRecDat_Msg1C1SendToEvision7.tCsrRng_bogTelescopeMoveInAllow,
        (TVoid*)&gCsr_tMsg1C1SendToEvision7.bogTelescopeMoveInAllow, (TVoid*)&mCsr_tOldDat_tMsg1C1SendToEvision7.bogTelescopeMoveInAllow, &mCsr_aeRecErr_tMsg1C1SendToEvision7[21],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1C1SendToEvision7.tCsrInfo_bogTurretCtClockWiseMoveAllow, (TVoid*)&gCsr_ctRecDat_Msg1C1SendToEvision7.tCsrRng_bogTurretCtClockWiseMoveAllow,
        (TVoid*)&gCsr_tMsg1C1SendToEvision7.bogTurretCtClockWiseMoveAllow, (TVoid*)&mCsr_tOldDat_tMsg1C1SendToEvision7.bogTurretCtClockWiseMoveAllow, &mCsr_aeRecErr_tMsg1C1SendToEvision7[22],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1C1SendToEvision7.tCsrInfo_bogTurretClockWiseMoveAllow, (TVoid*)&gCsr_ctRecDat_Msg1C1SendToEvision7.tCsrRng_bogTurretClockWiseMoveAllow,
        (TVoid*)&gCsr_tMsg1C1SendToEvision7.bogTurretClockWiseMoveAllow, (TVoid*)&mCsr_tOldDat_tMsg1C1SendToEvision7.bogTurretClockWiseMoveAllow, &mCsr_aeRecErr_tMsg1C1SendToEvision7[23],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1C1SendToEvision7.tCsrInfo_bogBasketRotCtClockWiseMoveAllow, (TVoid*)&gCsr_ctRecDat_Msg1C1SendToEvision7.tCsrRng_bogBasketRotCtClockWiseMoveAllow,
        (TVoid*)&gCsr_tMsg1C1SendToEvision7.bogBasketRotCtClockWiseMoveAllow, (TVoid*)&mCsr_tOldDat_tMsg1C1SendToEvision7.bogBasketRotCtClockWiseMoveAllow, &mCsr_aeRecErr_tMsg1C1SendToEvision7[24],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1C1SendToEvision7.tCsrInfo_bogBasketRotClockWiseMoveAllow, (TVoid*)&gCsr_ctRecDat_Msg1C1SendToEvision7.tCsrRng_bogBasketRotClockWiseMoveAllow,
        (TVoid*)&gCsr_tMsg1C1SendToEvision7.bogBasketRotClockWiseMoveAllow, (TVoid*)&mCsr_tOldDat_tMsg1C1SendToEvision7.bogBasketRotClockWiseMoveAllow, &mCsr_aeRecErr_tMsg1C1SendToEvision7[25],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1C1SendToEvision7.tCsrInfo_bogBasketInclinMoveUpAllow, (TVoid*)&gCsr_ctRecDat_Msg1C1SendToEvision7.tCsrRng_bogBasketInclinMoveUpAllow,
        (TVoid*)&gCsr_tMsg1C1SendToEvision7.bogBasketInclinMoveUpAllow, (TVoid*)&mCsr_tOldDat_tMsg1C1SendToEvision7.bogBasketInclinMoveUpAllow, &mCsr_aeRecErr_tMsg1C1SendToEvision7[26],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1C1SendToEvision7.tCsrInfo_bogBasketInclinMoveDownAllow, (TVoid*)&gCsr_ctRecDat_Msg1C1SendToEvision7.tCsrRng_bogBasketInclinMoveDownAllow,
        (TVoid*)&gCsr_tMsg1C1SendToEvision7.bogBasketInclinMoveDownAllow, (TVoid*)&mCsr_tOldDat_tMsg1C1SendToEvision7.bogBasketInclinMoveDownAllow, &mCsr_aeRecErr_tMsg1C1SendToEvision7[27],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1C1SendToEvision7.tCsrInfo_bogVehiculeDefault, (TVoid*)&gCsr_ctRecDat_Msg1C1SendToEvision7.tCsrRng_bogVehiculeDefault,
        (TVoid*)&gCsr_tMsg1C1SendToEvision7.bogVehiculeDefault, (TVoid*)&mCsr_tOldDat_tMsg1C1SendToEvision7.bogVehiculeDefault, &mCsr_aeRecErr_tMsg1C1SendToEvision7[28],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1C1SendToEvision7.tCsrInfo_bogTelescopeOutputPossible, (TVoid*)&gCsr_ctRecDat_Msg1C1SendToEvision7.tCsrRng_bogTelescopeOutputPossible,
        (TVoid*)&gCsr_tMsg1C1SendToEvision7.bogTelescopeOutputPossible, (TVoid*)&mCsr_tOldDat_tMsg1C1SendToEvision7.bogTelescopeOutputPossible, &mCsr_aeRecErr_tMsg1C1SendToEvision7[29],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1C1SendToEvision7.tCsrInfo_bogTelescopeWinderFault, (TVoid*)&gCsr_ctRecDat_Msg1C1SendToEvision7.tCsrRng_bogTelescopeWinderFault,
        (TVoid*)&gCsr_tMsg1C1SendToEvision7.bogTelescopeWinderFault, (TVoid*)&mCsr_tOldDat_tMsg1C1SendToEvision7.bogTelescopeWinderFault, &mCsr_aeRecErr_tMsg1C1SendToEvision7[30],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1C1SendToEvision7.tCsrInfo_bogNacellePostSelector, (TVoid*)&gCsr_ctRecDat_Msg1C1SendToEvision7.tCsrRng_bogNacellePostSelector,
        (TVoid*)&gCsr_tMsg1C1SendToEvision7.bogNacellePostSelector, (TVoid*)&mCsr_tOldDat_tMsg1C1SendToEvision7.bogNacellePostSelector, &mCsr_aeRecErr_tMsg1C1SendToEvision7[31],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1C1SendToEvision7.tCsrInfo_bogSTOP_On_Off, (TVoid*)&gCsr_ctRecDat_Msg1C1SendToEvision7.tCsrRng_bogSTOP_On_Off,
        (TVoid*)&gCsr_tMsg1C1SendToEvision7.bogSTOP_On_Off, (TVoid*)&mCsr_tOldDat_tMsg1C1SendToEvision7.bogSTOP_On_Off, &mCsr_aeRecErr_tMsg1C1SendToEvision7[32],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1C1SendToEvision7.tCsrInfo_bogSafeManSystem, (TVoid*)&gCsr_ctRecDat_Msg1C1SendToEvision7.tCsrRng_bogSafeManSystem,
        (TVoid*)&gCsr_tMsg1C1SendToEvision7.bogSafeManSystem, (TVoid*)&mCsr_tOldDat_tMsg1C1SendToEvision7.bogSafeManSystem, &mCsr_aeRecErr_tMsg1C1SendToEvision7[33],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1C1SendToEvision7.tCsrInfo_bogHighSpeedAllow, (TVoid*)&gCsr_ctRecDat_Msg1C1SendToEvision7.tCsrRng_bogHighSpeedAllow,
        (TVoid*)&gCsr_tMsg1C1SendToEvision7.bogHighSpeedAllow, (TVoid*)&mCsr_tOldDat_tMsg1C1SendToEvision7.bogHighSpeedAllow, &mCsr_aeRecErr_tMsg1C1SendToEvision7[34],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1C1SendToEvision7.tCsrInfo_bogAutomatiqueStop, (TVoid*)&gCsr_ctRecDat_Msg1C1SendToEvision7.tCsrRng_bogAutomatiqueStop,
        (TVoid*)&gCsr_tMsg1C1SendToEvision7.bogAutomatiqueStop, (TVoid*)&mCsr_tOldDat_tMsg1C1SendToEvision7.bogAutomatiqueStop, &mCsr_aeRecErr_tMsg1C1SendToEvision7[35],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1C1SendToEvision7.tCsrInfo_bogLowSpeedByFault, (TVoid*)&gCsr_ctRecDat_Msg1C1SendToEvision7.tCsrRng_bogLowSpeedByFault,
        (TVoid*)&gCsr_tMsg1C1SendToEvision7.bogLowSpeedByFault, (TVoid*)&mCsr_tOldDat_tMsg1C1SendToEvision7.bogLowSpeedByFault, &mCsr_aeRecErr_tMsg1C1SendToEvision7[36],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1C1SendToEvision7.tCsrInfo_bogMeasuringMastFault, (TVoid*)&gCsr_ctRecDat_Msg1C1SendToEvision7.tCsrRng_bogMeasuringMastFault,
        (TVoid*)&gCsr_tMsg1C1SendToEvision7.bogMeasuringMastFault, (TVoid*)&mCsr_tOldDat_tMsg1C1SendToEvision7.bogMeasuringMastFault, &mCsr_aeRecErr_tMsg1C1SendToEvision7[37],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1C1SendToEvision7.tCsrInfo_bogMeasuringMatOption, (TVoid*)&gCsr_ctRecDat_Msg1C1SendToEvision7.tCsrRng_bogMeasuringMatOption,
        (TVoid*)&gCsr_tMsg1C1SendToEvision7.bogMeasuringMatOption, (TVoid*)&mCsr_tOldDat_tMsg1C1SendToEvision7.bogMeasuringMatOption, &mCsr_aeRecErr_tMsg1C1SendToEvision7[38],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1C1SendToEvision7.tCsrInfo_bogBasketAccessLocked, (TVoid*)&gCsr_ctRecDat_Msg1C1SendToEvision7.tCsrRng_bogBasketAccessLocked,
        (TVoid*)&gCsr_tMsg1C1SendToEvision7.bogBasketAccessLocked, (TVoid*)&mCsr_tOldDat_tMsg1C1SendToEvision7.bogBasketAccessLocked, &mCsr_aeRecErr_tMsg1C1SendToEvision7[39],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1C1SendToEvision7.tCsrInfo_bogFilterOverloadNoActive, (TVoid*)&gCsr_ctRecDat_Msg1C1SendToEvision7.tCsrRng_bogFilterOverloadNoActive,
        (TVoid*)&gCsr_tMsg1C1SendToEvision7.bogFilterOverloadNoActive, (TVoid*)&mCsr_tOldDat_tMsg1C1SendToEvision7.bogFilterOverloadNoActive, &mCsr_aeRecErr_tMsg1C1SendToEvision7[40],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1C1SendToEvision7.tCsrInfo_bogAnticlockwiseBasketSlew, (TVoid*)&gCsr_ctRecDat_Msg1C1SendToEvision7.tCsrRng_bogAnticlockwiseBasketSlew,
        (TVoid*)&gCsr_tMsg1C1SendToEvision7.bogAnticlockwiseBasketSlew, (TVoid*)&mCsr_tOldDat_tMsg1C1SendToEvision7.bogAnticlockwiseBasketSlew, &mCsr_aeRecErr_tMsg1C1SendToEvision7[41],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1C1SendToEvision7.tCsrInfo_bogClockwiseBasketSlew, (TVoid*)&gCsr_ctRecDat_Msg1C1SendToEvision7.tCsrRng_bogClockwiseBasketSlew,
        (TVoid*)&gCsr_tMsg1C1SendToEvision7.bogClockwiseBasketSlew, (TVoid*)&mCsr_tOldDat_tMsg1C1SendToEvision7.bogClockwiseBasketSlew, &mCsr_aeRecErr_tMsg1C1SendToEvision7[42],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1C1SendToEvision7.tCsrInfo_bogFlashLightForced, (TVoid*)&gCsr_ctRecDat_Msg1C1SendToEvision7.tCsrRng_bogFlashLightForced,
        (TVoid*)&gCsr_tMsg1C1SendToEvision7.bogFlashLightForced, (TVoid*)&mCsr_tOldDat_tMsg1C1SendToEvision7.bogFlashLightForced, &mCsr_aeRecErr_tMsg1C1SendToEvision7[43],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1C1SendToEvision7.tCsrInfo_bogBasketAccessLockOption, (TVoid*)&gCsr_ctRecDat_Msg1C1SendToEvision7.tCsrRng_bogBasketAccessLockOption,
        (TVoid*)&gCsr_tMsg1C1SendToEvision7.bogBasketAccessLockOption, (TVoid*)&mCsr_tOldDat_tMsg1C1SendToEvision7.bogBasketAccessLockOption, &mCsr_aeRecErr_tMsg1C1SendToEvision7[44],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1C1SendToEvision7.tCsrInfo_bogBasketLateralStopOption, (TVoid*)&gCsr_ctRecDat_Msg1C1SendToEvision7.tCsrRng_bogBasketLateralStopOption,
        (TVoid*)&gCsr_tMsg1C1SendToEvision7.bogBasketLateralStopOption, (TVoid*)&mCsr_tOldDat_tMsg1C1SendToEvision7.bogBasketLateralStopOption, &mCsr_aeRecErr_tMsg1C1SendToEvision7[45],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1C1SendToEvision7.tCsrInfo_bogBasketStepClosed, (TVoid*)&gCsr_ctRecDat_Msg1C1SendToEvision7.tCsrRng_bogBasketStepClosed,
        (TVoid*)&gCsr_tMsg1C1SendToEvision7.bogBasketStepClosed, (TVoid*)&mCsr_tOldDat_tMsg1C1SendToEvision7.bogBasketStepClosed, &mCsr_aeRecErr_tMsg1C1SendToEvision7[46],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1C1SendToEvision7.tCsrInfo_bogSystemFault, (TVoid*)&gCsr_ctRecDat_Msg1C1SendToEvision7.tCsrRng_bogSystemFault,
        (TVoid*)&gCsr_tMsg1C1SendToEvision7.bogSystemFault, (TVoid*)&mCsr_tOldDat_tMsg1C1SendToEvision7.bogSystemFault, &mCsr_aeRecErr_tMsg1C1SendToEvision7[47],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1C1SendToEvision7.tCsrInfo_bogTrans1PressureSensorFault, (TVoid*)&gCsr_ctRecDat_Msg1C1SendToEvision7.tCsrRng_bogTrans1PressureSensorFault,
        (TVoid*)&gCsr_tMsg1C1SendToEvision7.bogTrans1PressureSensorFault, (TVoid*)&mCsr_tOldDat_tMsg1C1SendToEvision7.bogTrans1PressureSensorFault, &mCsr_aeRecErr_tMsg1C1SendToEvision7[48],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1C1SendToEvision7.tCsrInfo_bogTrans2PressureSensorFault, (TVoid*)&gCsr_ctRecDat_Msg1C1SendToEvision7.tCsrRng_bogTrans2PressureSensorFault,
        (TVoid*)&gCsr_tMsg1C1SendToEvision7.bogTrans2PressureSensorFault, (TVoid*)&mCsr_tOldDat_tMsg1C1SendToEvision7.bogTrans2PressureSensorFault, &mCsr_aeRecErr_tMsg1C1SendToEvision7[49],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1C1SendToEvision7.tCsrInfo_bogOverloadSecurity, (TVoid*)&gCsr_ctRecDat_Msg1C1SendToEvision7.tCsrRng_bogOverloadSecurity,
        (TVoid*)&gCsr_tMsg1C1SendToEvision7.bogOverloadSecurity, (TVoid*)&mCsr_tOldDat_tMsg1C1SendToEvision7.bogOverloadSecurity, &mCsr_aeRecErr_tMsg1C1SendToEvision7[50],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1C1SendToEvision7.tCsrInfo_bogDeltaArmJoysCenteredTeles, (TVoid*)&gCsr_ctRecDat_Msg1C1SendToEvision7.tCsrRng_bogDeltaArmJoysCenteredTeles,
        (TVoid*)&gCsr_tMsg1C1SendToEvision7.bogDeltaArmJoysCenteredTeles, (TVoid*)&mCsr_tOldDat_tMsg1C1SendToEvision7.bogDeltaArmJoysCenteredTeles, &mCsr_aeRecErr_tMsg1C1SendToEvision7[51],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1C1SendToEvision7.tCsrInfo_bogArrowJoystickCenteredTurret, (TVoid*)&gCsr_ctRecDat_Msg1C1SendToEvision7.tCsrRng_bogArrowJoystickCenteredTurret,
        (TVoid*)&gCsr_tMsg1C1SendToEvision7.bogArrowJoystickCenteredTurret, (TVoid*)&mCsr_tOldDat_tMsg1C1SendToEvision7.bogArrowJoystickCenteredTurret, &mCsr_aeRecErr_tMsg1C1SendToEvision7[52],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1C1SendToEvision7.tCsrInfo_bogDeltaArmMoveUp, (TVoid*)&gCsr_ctRecDat_Msg1C1SendToEvision7.tCsrRng_bogDeltaArmMoveUp,
        (TVoid*)&gCsr_tMsg1C1SendToEvision7.bogDeltaArmMoveUp, (TVoid*)&mCsr_tOldDat_tMsg1C1SendToEvision7.bogDeltaArmMoveUp, &mCsr_aeRecErr_tMsg1C1SendToEvision7[53],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1C1SendToEvision7.tCsrInfo_bogDeltaArmMoveDown, (TVoid*)&gCsr_ctRecDat_Msg1C1SendToEvision7.tCsrRng_bogDeltaArmMoveDown,
        (TVoid*)&gCsr_tMsg1C1SendToEvision7.bogDeltaArmMoveDown, (TVoid*)&mCsr_tOldDat_tMsg1C1SendToEvision7.bogDeltaArmMoveDown, &mCsr_aeRecErr_tMsg1C1SendToEvision7[54],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1C1SendToEvision7.tCsrInfo_bogArrowArmMoveUp, (TVoid*)&gCsr_ctRecDat_Msg1C1SendToEvision7.tCsrRng_bogArrowArmMoveUp,
        (TVoid*)&gCsr_tMsg1C1SendToEvision7.bogArrowArmMoveUp, (TVoid*)&mCsr_tOldDat_tMsg1C1SendToEvision7.bogArrowArmMoveUp, &mCsr_aeRecErr_tMsg1C1SendToEvision7[55],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1C1SendToEvision7.tCsrInfo_bogArrowArmMoveDown, (TVoid*)&gCsr_ctRecDat_Msg1C1SendToEvision7.tCsrRng_bogArrowArmMoveDown,
        (TVoid*)&gCsr_tMsg1C1SendToEvision7.bogArrowArmMoveDown, (TVoid*)&mCsr_tOldDat_tMsg1C1SendToEvision7.bogArrowArmMoveDown, &mCsr_aeRecErr_tMsg1C1SendToEvision7[56],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1C1SendToEvision7.tCsrInfo_bogTelescopeMoveOut, (TVoid*)&gCsr_ctRecDat_Msg1C1SendToEvision7.tCsrRng_bogTelescopeMoveOut,
        (TVoid*)&gCsr_tMsg1C1SendToEvision7.bogTelescopeMoveOut, (TVoid*)&mCsr_tOldDat_tMsg1C1SendToEvision7.bogTelescopeMoveOut, &mCsr_aeRecErr_tMsg1C1SendToEvision7[57],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1C1SendToEvision7.tCsrInfo_bogTelescopeMoveIn, (TVoid*)&gCsr_ctRecDat_Msg1C1SendToEvision7.tCsrRng_bogTelescopeMoveIn,
        (TVoid*)&gCsr_tMsg1C1SendToEvision7.bogTelescopeMoveIn, (TVoid*)&mCsr_tOldDat_tMsg1C1SendToEvision7.bogTelescopeMoveIn, &mCsr_aeRecErr_tMsg1C1SendToEvision7[58],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1C1SendToEvision7.tCsrInfo_bogTurretCounterClockWiseMove, (TVoid*)&gCsr_ctRecDat_Msg1C1SendToEvision7.tCsrRng_bogTurretCounterClockWiseMove,
        (TVoid*)&gCsr_tMsg1C1SendToEvision7.bogTurretCounterClockWiseMove, (TVoid*)&mCsr_tOldDat_tMsg1C1SendToEvision7.bogTurretCounterClockWiseMove, &mCsr_aeRecErr_tMsg1C1SendToEvision7[59],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1C1SendToEvision7.tCsrInfo_bogTurretClockWiseMove, (TVoid*)&gCsr_ctRecDat_Msg1C1SendToEvision7.tCsrRng_bogTurretClockWiseMove,
        (TVoid*)&gCsr_tMsg1C1SendToEvision7.bogTurretClockWiseMove, (TVoid*)&mCsr_tOldDat_tMsg1C1SendToEvision7.bogTurretClockWiseMove, &mCsr_aeRecErr_tMsg1C1SendToEvision7[60],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1C1SendToEvision7.tCsrInfo_bogTurretEncoderFault, (TVoid*)&gCsr_ctRecDat_Msg1C1SendToEvision7.tCsrRng_bogTurretEncoderFault,
        (TVoid*)&gCsr_tMsg1C1SendToEvision7.bogTurretEncoderFault, (TVoid*)&mCsr_tOldDat_tMsg1C1SendToEvision7.bogTurretEncoderFault, &mCsr_aeRecErr_tMsg1C1SendToEvision7[61],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1C1SendToEvision7.tCsrInfo_bogGeneratorOption, (TVoid*)&gCsr_ctRecDat_Msg1C1SendToEvision7.tCsrRng_bogGeneratorOption,
        (TVoid*)&gCsr_tMsg1C1SendToEvision7.bogGeneratorOption, (TVoid*)&mCsr_tOldDat_tMsg1C1SendToEvision7.bogGeneratorOption, &mCsr_aeRecErr_tMsg1C1SendToEvision7[62],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1C1SendToEvision7.tCsrInfo_bogGeneratorActive, (TVoid*)&gCsr_ctRecDat_Msg1C1SendToEvision7.tCsrRng_bogGeneratorActive,
        (TVoid*)&gCsr_tMsg1C1SendToEvision7.bogGeneratorActive, (TVoid*)&mCsr_tOldDat_tMsg1C1SendToEvision7.bogGeneratorActive, &mCsr_aeRecErr_tMsg1C1SendToEvision7[63],
        NULL, NULL
    }
};

static const TCanSigRecRoot mCsr_ctRoot_Msg1C1SendToEvision7 =
{
    "Msg1C1SendToEvision7",                                 //!< achName - [STR] Name Msg1C1SendToEvision7
    8,                                                      //!< u8Dlc - [NUM] DLC of Can Message
    0xff,                                                   //!< u8CanByteDflt - [NUM] CAN Message default
    DATA_INTEL,                                             //!< eCanFormat - [NUM] CAN Format
    0xFF,                                                   //!< u8MasterReceiveId - [NUM] Receive Id
    64,                                                     //!< u8RecCnt - [NUM] Count of Recorde
    &mCsr_actRecDat_tMsg1C1SendToEvision7[0],               //!< ptRec - [NUM] Pointer to Record Values
    29,                                                     //!< u16RecNo - [NUM] Record Number
    CSR_STAMP                                               //!< u16Stamp - [NUM] Safety stamp
};

TCanSigRecMsg1C1SendToEvision7 gCsr_tMsg1C1SendToEvision7 =
{
    &mCsr_ctRoot_Msg1C1SendToEvision7,                      //!< *cptRoot [POI] Root connection
    FALSE,                                                  //!< bogBattery_On_Off [[-]] Battery Status
    FALSE,                                                  //!< bogPreheat_On_Off [[-]] Preheat Status
    FALSE,                                                  //!< bogEngine_Faillure_On_Off [[-]] Engine Faillure Status
    FALSE,                                                  //!< bogMaintenance_On_Off [[-]] Maintenance Status
    FALSE,                                                  //!< bogOil_On_OFF [[-]] Oil Status
    FALSE,                                                  //!< bogDeltaArmSectorDown [[-]] Delta Arm Sector Down
    FALSE,                                                  //!< bogArrowArmSectorDown [[-]] Arrow Arm Sector Down
    FALSE,                                                  //!< bogPendularSectorDown [[-]] Pendular Sector Down
    FALSE,                                                  //!< bogDeltaArmInCenter [[-]] Delta Arm in Center
    FALSE,                                                  //!< bogArrowArmInCenter [[-]] Arrow Arm in Center
    FALSE,                                                  //!< bogPendularInCenter [[-]] Pendular in Center
    FALSE,                                                  //!< bogBasketRotationInCenter [[-]] Basket Rotation in Center
    FALSE,                                                  //!< bogTelescopeInCenter [[-]] Telescope in Center
    FALSE,                                                  //!< bogBasketInclinaisonInCenter [[-]] Basket Inclinaison in Center
    FALSE,                                                  //!< bogDeltaArmMoveUpAllow [[-]] Delta Arm Move Up Allowed
    FALSE,                                                  //!< bogDeltaArmMoveDownAllow [[-]] Delta Arm Move Down Allowed
    FALSE,                                                  //!< bogArrowArmMoveUpAllow [[-]] Arrow Arm Move Up Allowed
    FALSE,                                                  //!< bogArrowArmMoveDownAllow [[-]] Arrow Arm Move Down Allowed
    FALSE,                                                  //!< bogPendularMoveUpAllow [[-]] Pendular Move Up Allowed
    FALSE,                                                  //!< bogPendularMoveDownAllow [[-]] Pendular Move Down Allowed
    FALSE,                                                  //!< bogTelescopeMoveOutAllow [[-]] Telescope Move Out Allowed
    FALSE,                                                  //!< bogTelescopeMoveInAllow [[-]] Telescope Move In Allowed
    FALSE,                                                  //!< bogTurretCtClockWiseMoveAllow [[-]] Turret Counter Clockwise Move Allowed
    FALSE,                                                  //!< bogTurretClockWiseMoveAllow [[-]] Turret Clockwise Move Allowed
    FALSE,                                                  //!< bogBasketRotCtClockWiseMoveAllow [[-]] Basket Rotation Counter Clockwise Move Allowed
    FALSE,                                                  //!< bogBasketRotClockWiseMoveAllow [[-]] Basket Rotation Clockwise Move Allowed
    FALSE,                                                  //!< bogBasketInclinMoveUpAllow [[-]] Basket Inclinaison Move Up Allowed
    FALSE,                                                  //!< bogBasketInclinMoveDownAllow [[-]] Basket Inclinaison Move Down Allowed
    FALSE,                                                  //!< bogVehiculeDefault [[-]] Vehicule in Default (A12)
    FALSE,                                                  //!< bogTelescopeOutputPossible [[-]] Telescope output possible (A48)
    FALSE,                                                  //!< bogTelescopeWinderFault [[-]] Telescope Winder Fault (A17)
    FALSE,                                                  //!< bogNacellePostSelector [[-]] Nacelle post selector
    FALSE,                                                  //!< bogSTOP_On_Off [[-]] STOP Status
    FALSE,                                                  //!< bogSafeManSystem [[-]] SafeManSystem (A5)
    FALSE,                                                  //!< bogHighSpeedAllow [[-]] High Speed Allow (A19)
    FALSE,                                                  //!< bogAutomatiqueStop [[-]] Automatique Stop or function mismatch (A20)
    FALSE,                                                  //!< bogLowSpeedByFault [[-]] Low Speed by fault (A46)
    FALSE,                                                  //!< bogMeasuringMastFault [[-]] Measuring Mast in Fault (A8)
    FALSE,                                                  //!< bogMeasuringMatOption [[-]] Measuring mast option
    FALSE,                                                  //!< bogBasketAccessLocked [[-]] Basket access locked
    FALSE,                                                  //!< bogFilterOverloadNoActive [[-]] new signal
    FALSE,                                                  //!< bogAnticlockwiseBasketSlew [[-]] EV113 Anticlockwise Basket Slew
    FALSE,                                                  //!< bogClockwiseBasketSlew [[-]] EV112 Anticlockwise Basket Slew
    FALSE,                                                  //!< bogFlashLightForced [[-]] Flash Light Forced
    FALSE,                                                  //!< bogBasketAccessLockOption [[-]] Basket Lock Option
    FALSE,                                                  //!< bogBasketLateralStopOption [[-]] Basket lateral stop option
    FALSE,                                                  //!< bogBasketStepClosed [[-]] Basket step closed
    FALSE,                                                  //!< bogSystemFault [[-]] System Fault
    FALSE,                                                  //!< bogTrans1PressureSensorFault [[-]] Fault pressure transmission 1
    FALSE,                                                  //!< bogTrans2PressureSensorFault [[-]] Fault pressure transmission 2
    FALSE,                                                  //!< bogOverloadSecurity [[-]] Basket overload
    FALSE,                                                  //!< bogDeltaArmJoysCenteredTeles [[-]] Delta and Telescope Joystick centered
    FALSE,                                                  //!< bogArrowJoystickCenteredTurret [[-]] Arrow and Turret Joystick centered
    FALSE,                                                  //!< bogDeltaArmMoveUp [[-]] Delta Arm Move Up
    FALSE,                                                  //!< bogDeltaArmMoveDown [[-]] Delta Arm Move Down
    FALSE,                                                  //!< bogArrowArmMoveUp [[-]] Arrow Arm Move Up
    FALSE,                                                  //!< bogArrowArmMoveDown [[-]] Arrow Arm Move Down
    FALSE,                                                  //!< bogTelescopeMoveOut [[-]] Telescope Move Out
    FALSE,                                                  //!< bogTelescopeMoveIn [[-]] Telescope Move In
    FALSE,                                                  //!< bogTurretCounterClockWiseMove [[-]] Turret Counter Clockwise Move
    FALSE,                                                  //!< bogTurretClockWiseMove [[-]] Turret Clockwise Move
    FALSE,                                                  //!< bogTurretEncoderFault [[-]] Turret Encoder Fault
    FALSE,                                                  //!< bogGeneratorOption [[-]] Generator Option
    FALSE                                                   //!< bogGeneratorActive [[-]] Generator Active
};

const TCanSigRecVal_Msg2C1SendToEvision7 gCsr_ctRecDat_Msg2C1SendToEvision7 =
{
    //!< gFuel
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TUINT8, TUINT8, 0, 8, 0, 0, 1, 1 }, 
     { 0, 255, 0, 0 },
    //!< gBattery_Voltage
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TUINT16, TUINT16, 8, 16, 0, 0, 1, 1 }, 
     { 0, 65535, 0, 0 },
    //!< gTrainTransmissionPressure
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TUINT8, TUINT8, 24, 8, 0, 0, 1, 1 }, 
     { 0, 255, 0, 0 },
    //!< gBypassPressureSensorValue
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TINT16, TINT16, 32, 16, 0, 0, 1, 1 }, 
     { I16_MIN, I16_MAX, 0, 0 }
};

static ESigSta mCsr_aeRecErr_tMsg2C1SendToEvision7[4] =
{
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY
};

static TCanSigRecOldValMsg2C1SendToEvision7 mCsr_tOldDat_tMsg2C1SendToEvision7 =
{
    0,                                                      //!< u8gFuel [[-]] new signal
    0,                                                      //!< u16gBattery_Voltage [[-]] new signal
    0,                                                      //!< u8gTrainTransmissionPressure [[-]] new signal
    0                                                       //!< i16gBypassPressureSensorValue [[-]] new signal
};

extern TCanSigRecMsg2C1SendToEvision7 gCsr_tMsg2C1SendToEvision7;
static const TRecDat mCsr_actRecDat_tMsg2C1SendToEvision7[4] =
{
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg2C1SendToEvision7.tCsrInfo_u8gFuel, (TVoid*)&gCsr_ctRecDat_Msg2C1SendToEvision7.tCsrRng_u8gFuel,
        (TVoid*)&gCsr_tMsg2C1SendToEvision7.u8gFuel, (TVoid*)&mCsr_tOldDat_tMsg2C1SendToEvision7.u8gFuel, &mCsr_aeRecErr_tMsg2C1SendToEvision7[0],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg2C1SendToEvision7.tCsrInfo_u16gBattery_Voltage, (TVoid*)&gCsr_ctRecDat_Msg2C1SendToEvision7.tCsrRng_u16gBattery_Voltage,
        (TVoid*)&gCsr_tMsg2C1SendToEvision7.u16gBattery_Voltage, (TVoid*)&mCsr_tOldDat_tMsg2C1SendToEvision7.u16gBattery_Voltage, &mCsr_aeRecErr_tMsg2C1SendToEvision7[1],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg2C1SendToEvision7.tCsrInfo_u8gTrainTransmissionPressure, (TVoid*)&gCsr_ctRecDat_Msg2C1SendToEvision7.tCsrRng_u8gTrainTransmissionPressure,
        (TVoid*)&gCsr_tMsg2C1SendToEvision7.u8gTrainTransmissionPressure, (TVoid*)&mCsr_tOldDat_tMsg2C1SendToEvision7.u8gTrainTransmissionPressure, &mCsr_aeRecErr_tMsg2C1SendToEvision7[2],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg2C1SendToEvision7.tCsrInfo_i16gBypassPressureSensorValue, (TVoid*)&gCsr_ctRecDat_Msg2C1SendToEvision7.tCsrRng_i16gBypassPressureSensorValue,
        (TVoid*)&gCsr_tMsg2C1SendToEvision7.i16gBypassPressureSensorValue, (TVoid*)&mCsr_tOldDat_tMsg2C1SendToEvision7.i16gBypassPressureSensorValue, &mCsr_aeRecErr_tMsg2C1SendToEvision7[3],
        NULL, NULL
    }
};

static const TCanSigRecRoot mCsr_ctRoot_Msg2C1SendToEvision7 =
{
    "Msg2C1SendToEvision7",                                 //!< achName - [STR] Name Msg2C1SendToEvision7
    8,                                                      //!< u8Dlc - [NUM] DLC of Can Message
    0xff,                                                   //!< u8CanByteDflt - [NUM] CAN Message default
    DATA_INTEL,                                             //!< eCanFormat - [NUM] CAN Format
    0xFF,                                                   //!< u8MasterReceiveId - [NUM] Receive Id
    4,                                                      //!< u8RecCnt - [NUM] Count of Recorde
    &mCsr_actRecDat_tMsg2C1SendToEvision7[0],               //!< ptRec - [NUM] Pointer to Record Values
    30,                                                     //!< u16RecNo - [NUM] Record Number
    CSR_STAMP                                               //!< u16Stamp - [NUM] Safety stamp
};

TCanSigRecMsg2C1SendToEvision7 gCsr_tMsg2C1SendToEvision7 =
{
    &mCsr_ctRoot_Msg2C1SendToEvision7,                      //!< *cptRoot [POI] Root connection
    (((0 * 1)/1)+0),                                        //!< u8gFuel [[-]] new signal
    (((0 * 1)/1)+0),                                        //!< u16gBattery_Voltage [[-]] new signal
    (((0 * 1)/1)+0),                                        //!< u8gTrainTransmissionPressure [[-]] new signal
    (((0 * 1)/1)+0)                                         //!< i16gBypassPressureSensorValue [[-]] new signal
};

const TCanSigRecVal_Msg3C1SendToEvision7 gCsr_ctRecDat_Msg3C1SendToEvision7 =
{
    //!< MinValueEncodeurMast
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TUINT32, TUINT32, 0, 32, 0, 0, 1, 1 }, 
     { U32_MIN, U32_MAX, 0, 0 },
    //!< MaxValueEncodeurMast
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TUINT32, TUINT32, 32, 32, 0, 0, 1, 1 }, 
     { U32_MIN, U32_MAX, 0, 0 }
};

static ESigSta mCsr_aeRecErr_tMsg3C1SendToEvision7[2] =
{
    SIG_OKAY,
    SIG_OKAY
};

static TCanSigRecOldValMsg3C1SendToEvision7 mCsr_tOldDat_tMsg3C1SendToEvision7 =
{
    0,                                                      //!< u32MinValueEncodeurMast [[-]] new signal
    0                                                       //!< u32MaxValueEncodeurMast [[-]] new signal
};

extern TCanSigRecMsg3C1SendToEvision7 gCsr_tMsg3C1SendToEvision7;
static const TRecDat mCsr_actRecDat_tMsg3C1SendToEvision7[2] =
{
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg3C1SendToEvision7.tCsrInfo_u32MinValueEncodeurMast, (TVoid*)&gCsr_ctRecDat_Msg3C1SendToEvision7.tCsrRng_u32MinValueEncodeurMast,
        (TVoid*)&gCsr_tMsg3C1SendToEvision7.u32MinValueEncodeurMast, (TVoid*)&mCsr_tOldDat_tMsg3C1SendToEvision7.u32MinValueEncodeurMast, &mCsr_aeRecErr_tMsg3C1SendToEvision7[0],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg3C1SendToEvision7.tCsrInfo_u32MaxValueEncodeurMast, (TVoid*)&gCsr_ctRecDat_Msg3C1SendToEvision7.tCsrRng_u32MaxValueEncodeurMast,
        (TVoid*)&gCsr_tMsg3C1SendToEvision7.u32MaxValueEncodeurMast, (TVoid*)&mCsr_tOldDat_tMsg3C1SendToEvision7.u32MaxValueEncodeurMast, &mCsr_aeRecErr_tMsg3C1SendToEvision7[1],
        NULL, NULL
    }
};

static const TCanSigRecRoot mCsr_ctRoot_Msg3C1SendToEvision7 =
{
    "Msg3C1SendToEvision7",                                 //!< achName - [STR] Name Msg3C1SendToEvision7
    8,                                                      //!< u8Dlc - [NUM] DLC of Can Message
    0xff,                                                   //!< u8CanByteDflt - [NUM] CAN Message default
    DATA_INTEL,                                             //!< eCanFormat - [NUM] CAN Format
    0xFF,                                                   //!< u8MasterReceiveId - [NUM] Receive Id
    2,                                                      //!< u8RecCnt - [NUM] Count of Recorde
    &mCsr_actRecDat_tMsg3C1SendToEvision7[0],               //!< ptRec - [NUM] Pointer to Record Values
    31,                                                     //!< u16RecNo - [NUM] Record Number
    CSR_STAMP                                               //!< u16Stamp - [NUM] Safety stamp
};

TCanSigRecMsg3C1SendToEvision7 gCsr_tMsg3C1SendToEvision7 =
{
    &mCsr_ctRoot_Msg3C1SendToEvision7,                      //!< *cptRoot [POI] Root connection
    (((0 * 1)/1)+0),                                        //!< u32MinValueEncodeurMast [[-]] new signal
    (((0 * 1)/1)+0)                                         //!< u32MaxValueEncodeurMast [[-]] new signal
};

const TCanSigRecVal_Msg4C1SendToEvision7 gCsr_ctRecDat_Msg4C1SendToEvision7 =
{
    //!< EncodeurMastMeasureRaw
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TUINT32, TUINT32, 0, 32, 0, 0, 1, 1 }, 
     { U32_MIN, U32_MAX, 0, 0 },
    //!< EncodeurMastMeasureCentimeter
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TUINT16, TUINT16, 32, 16, 0, 0, 1, 1 }, 
     { U16_MIN, U16_MAX, 0, 0 }
};

static ESigSta mCsr_aeRecErr_tMsg4C1SendToEvision7[2] =
{
    SIG_OKAY,
    SIG_OKAY
};

static TCanSigRecOldValMsg4C1SendToEvision7 mCsr_tOldDat_tMsg4C1SendToEvision7 =
{
    0,                                                      //!< u32EncodeurMastMeasureRaw [[-]] new signal
    0                                                       //!< u16EncodeurMastMeasureCentimeter [[-]] new signal
};

extern TCanSigRecMsg4C1SendToEvision7 gCsr_tMsg4C1SendToEvision7;
static const TRecDat mCsr_actRecDat_tMsg4C1SendToEvision7[2] =
{
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg4C1SendToEvision7.tCsrInfo_u32EncodeurMastMeasureRaw, (TVoid*)&gCsr_ctRecDat_Msg4C1SendToEvision7.tCsrRng_u32EncodeurMastMeasureRaw,
        (TVoid*)&gCsr_tMsg4C1SendToEvision7.u32EncodeurMastMeasureRaw, (TVoid*)&mCsr_tOldDat_tMsg4C1SendToEvision7.u32EncodeurMastMeasureRaw, &mCsr_aeRecErr_tMsg4C1SendToEvision7[0],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg4C1SendToEvision7.tCsrInfo_u16EncodeurMastMeasureCentimeter, (TVoid*)&gCsr_ctRecDat_Msg4C1SendToEvision7.tCsrRng_u16EncodeurMastMeasureCentimeter,
        (TVoid*)&gCsr_tMsg4C1SendToEvision7.u16EncodeurMastMeasureCentimeter, (TVoid*)&mCsr_tOldDat_tMsg4C1SendToEvision7.u16EncodeurMastMeasureCentimeter, &mCsr_aeRecErr_tMsg4C1SendToEvision7[1],
        NULL, NULL
    }
};

static const TCanSigRecRoot mCsr_ctRoot_Msg4C1SendToEvision7 =
{
    "Msg4C1SendToEvision7",                                 //!< achName - [STR] Name Msg4C1SendToEvision7
    8,                                                      //!< u8Dlc - [NUM] DLC of Can Message
    0xff,                                                   //!< u8CanByteDflt - [NUM] CAN Message default
    DATA_INTEL,                                             //!< eCanFormat - [NUM] CAN Format
    0xFF,                                                   //!< u8MasterReceiveId - [NUM] Receive Id
    2,                                                      //!< u8RecCnt - [NUM] Count of Recorde
    &mCsr_actRecDat_tMsg4C1SendToEvision7[0],               //!< ptRec - [NUM] Pointer to Record Values
    32,                                                     //!< u16RecNo - [NUM] Record Number
    CSR_STAMP                                               //!< u16Stamp - [NUM] Safety stamp
};

TCanSigRecMsg4C1SendToEvision7 gCsr_tMsg4C1SendToEvision7 =
{
    &mCsr_ctRoot_Msg4C1SendToEvision7,                      //!< *cptRoot [POI] Root connection
    (((0 * 1)/1)+0),                                        //!< u32EncodeurMastMeasureRaw [[-]] new signal
    (((0 * 1)/1)+0)                                         //!< u16EncodeurMastMeasureCentimeter [[-]] new signal
};

const TCanSigRecVal_Msg5C1SendToEvision7 gCsr_ctRecDat_Msg5C1SendToEvision7 =
{
    //!< Reserve0
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 0, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Reserve1
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 1, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Reserve2
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 2, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Reserve3
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 3, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Reserve4
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 4, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Reserve5
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 5, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Reserve6
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 6, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Reserve7
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 7, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin107
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 8, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin131
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 9, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin108
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 10, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin132
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 11, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin109
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 12, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin133
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 13, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin110
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 14, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin134
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 15, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin111
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 16, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin135
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 17, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin112
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 18, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin136
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 19, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin113
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 20, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin137
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 21, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin114
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 22, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin138
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 23, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin140
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 24, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin117
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 25, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin141
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 26, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin124
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 27, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin148
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 28, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin153
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 29, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin177
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 30, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin159
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 31, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin183
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 32, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin154
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 33, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin178
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 34, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin157
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 35, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin181
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 36, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin160
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 37, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin184
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 38, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin187
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 39, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin163
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 40, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin149
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 41, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin173
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 42, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin152
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 43, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin176
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 44, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin155
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 45, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin179
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 46, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin158
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 47, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin182
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 48, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin251
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 49, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin186
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 50, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin239
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 51, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE }
};

static ESigSta mCsr_aeRecErr_tMsg5C1SendToEvision7[52] =
{
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY
};

static TCanSigRecOldValMsg5C1SendToEvision7 mCsr_tOldDat_tMsg5C1SendToEvision7 =
{
    FALSE,                                                  //!< boReserve0 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boReserve1 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boReserve2 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boReserve3 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boReserve4 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boReserve5 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boReserve6 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boReserve7 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin107 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin131 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin108 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin132 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin109 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin133 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin110 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin134 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin111 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin135 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin112 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin136 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin113 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin137 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin114 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin138 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin140 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin117 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin141 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin124 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin148 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin153 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin177 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin159 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin183 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin154 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin178 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin157 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin181 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin160 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin184 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin187 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin163 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin149 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin173 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin152 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin176 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin155 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin179 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin158 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin182 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin251 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin186 [[-]] for the Neotec diag pages
    FALSE                                                   //!< boPin239 [[-]] for the Neotec diag pages
};

extern TCanSigRecMsg5C1SendToEvision7 gCsr_tMsg5C1SendToEvision7;
static const TRecDat mCsr_actRecDat_tMsg5C1SendToEvision7[52] =
{
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg5C1SendToEvision7.tCsrInfo_boReserve0, (TVoid*)&gCsr_ctRecDat_Msg5C1SendToEvision7.tCsrRng_boReserve0,
        (TVoid*)&gCsr_tMsg5C1SendToEvision7.boReserve0, (TVoid*)&mCsr_tOldDat_tMsg5C1SendToEvision7.boReserve0, &mCsr_aeRecErr_tMsg5C1SendToEvision7[0],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg5C1SendToEvision7.tCsrInfo_boReserve1, (TVoid*)&gCsr_ctRecDat_Msg5C1SendToEvision7.tCsrRng_boReserve1,
        (TVoid*)&gCsr_tMsg5C1SendToEvision7.boReserve1, (TVoid*)&mCsr_tOldDat_tMsg5C1SendToEvision7.boReserve1, &mCsr_aeRecErr_tMsg5C1SendToEvision7[1],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg5C1SendToEvision7.tCsrInfo_boReserve2, (TVoid*)&gCsr_ctRecDat_Msg5C1SendToEvision7.tCsrRng_boReserve2,
        (TVoid*)&gCsr_tMsg5C1SendToEvision7.boReserve2, (TVoid*)&mCsr_tOldDat_tMsg5C1SendToEvision7.boReserve2, &mCsr_aeRecErr_tMsg5C1SendToEvision7[2],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg5C1SendToEvision7.tCsrInfo_boReserve3, (TVoid*)&gCsr_ctRecDat_Msg5C1SendToEvision7.tCsrRng_boReserve3,
        (TVoid*)&gCsr_tMsg5C1SendToEvision7.boReserve3, (TVoid*)&mCsr_tOldDat_tMsg5C1SendToEvision7.boReserve3, &mCsr_aeRecErr_tMsg5C1SendToEvision7[3],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg5C1SendToEvision7.tCsrInfo_boReserve4, (TVoid*)&gCsr_ctRecDat_Msg5C1SendToEvision7.tCsrRng_boReserve4,
        (TVoid*)&gCsr_tMsg5C1SendToEvision7.boReserve4, (TVoid*)&mCsr_tOldDat_tMsg5C1SendToEvision7.boReserve4, &mCsr_aeRecErr_tMsg5C1SendToEvision7[4],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg5C1SendToEvision7.tCsrInfo_boReserve5, (TVoid*)&gCsr_ctRecDat_Msg5C1SendToEvision7.tCsrRng_boReserve5,
        (TVoid*)&gCsr_tMsg5C1SendToEvision7.boReserve5, (TVoid*)&mCsr_tOldDat_tMsg5C1SendToEvision7.boReserve5, &mCsr_aeRecErr_tMsg5C1SendToEvision7[5],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg5C1SendToEvision7.tCsrInfo_boReserve6, (TVoid*)&gCsr_ctRecDat_Msg5C1SendToEvision7.tCsrRng_boReserve6,
        (TVoid*)&gCsr_tMsg5C1SendToEvision7.boReserve6, (TVoid*)&mCsr_tOldDat_tMsg5C1SendToEvision7.boReserve6, &mCsr_aeRecErr_tMsg5C1SendToEvision7[6],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg5C1SendToEvision7.tCsrInfo_boReserve7, (TVoid*)&gCsr_ctRecDat_Msg5C1SendToEvision7.tCsrRng_boReserve7,
        (TVoid*)&gCsr_tMsg5C1SendToEvision7.boReserve7, (TVoid*)&mCsr_tOldDat_tMsg5C1SendToEvision7.boReserve7, &mCsr_aeRecErr_tMsg5C1SendToEvision7[7],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg5C1SendToEvision7.tCsrInfo_boPin107, (TVoid*)&gCsr_ctRecDat_Msg5C1SendToEvision7.tCsrRng_boPin107,
        (TVoid*)&gCsr_tMsg5C1SendToEvision7.boPin107, (TVoid*)&mCsr_tOldDat_tMsg5C1SendToEvision7.boPin107, &mCsr_aeRecErr_tMsg5C1SendToEvision7[8],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg5C1SendToEvision7.tCsrInfo_boPin131, (TVoid*)&gCsr_ctRecDat_Msg5C1SendToEvision7.tCsrRng_boPin131,
        (TVoid*)&gCsr_tMsg5C1SendToEvision7.boPin131, (TVoid*)&mCsr_tOldDat_tMsg5C1SendToEvision7.boPin131, &mCsr_aeRecErr_tMsg5C1SendToEvision7[9],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg5C1SendToEvision7.tCsrInfo_boPin108, (TVoid*)&gCsr_ctRecDat_Msg5C1SendToEvision7.tCsrRng_boPin108,
        (TVoid*)&gCsr_tMsg5C1SendToEvision7.boPin108, (TVoid*)&mCsr_tOldDat_tMsg5C1SendToEvision7.boPin108, &mCsr_aeRecErr_tMsg5C1SendToEvision7[10],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg5C1SendToEvision7.tCsrInfo_boPin132, (TVoid*)&gCsr_ctRecDat_Msg5C1SendToEvision7.tCsrRng_boPin132,
        (TVoid*)&gCsr_tMsg5C1SendToEvision7.boPin132, (TVoid*)&mCsr_tOldDat_tMsg5C1SendToEvision7.boPin132, &mCsr_aeRecErr_tMsg5C1SendToEvision7[11],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg5C1SendToEvision7.tCsrInfo_boPin109, (TVoid*)&gCsr_ctRecDat_Msg5C1SendToEvision7.tCsrRng_boPin109,
        (TVoid*)&gCsr_tMsg5C1SendToEvision7.boPin109, (TVoid*)&mCsr_tOldDat_tMsg5C1SendToEvision7.boPin109, &mCsr_aeRecErr_tMsg5C1SendToEvision7[12],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg5C1SendToEvision7.tCsrInfo_boPin133, (TVoid*)&gCsr_ctRecDat_Msg5C1SendToEvision7.tCsrRng_boPin133,
        (TVoid*)&gCsr_tMsg5C1SendToEvision7.boPin133, (TVoid*)&mCsr_tOldDat_tMsg5C1SendToEvision7.boPin133, &mCsr_aeRecErr_tMsg5C1SendToEvision7[13],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg5C1SendToEvision7.tCsrInfo_boPin110, (TVoid*)&gCsr_ctRecDat_Msg5C1SendToEvision7.tCsrRng_boPin110,
        (TVoid*)&gCsr_tMsg5C1SendToEvision7.boPin110, (TVoid*)&mCsr_tOldDat_tMsg5C1SendToEvision7.boPin110, &mCsr_aeRecErr_tMsg5C1SendToEvision7[14],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg5C1SendToEvision7.tCsrInfo_boPin134, (TVoid*)&gCsr_ctRecDat_Msg5C1SendToEvision7.tCsrRng_boPin134,
        (TVoid*)&gCsr_tMsg5C1SendToEvision7.boPin134, (TVoid*)&mCsr_tOldDat_tMsg5C1SendToEvision7.boPin134, &mCsr_aeRecErr_tMsg5C1SendToEvision7[15],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg5C1SendToEvision7.tCsrInfo_boPin111, (TVoid*)&gCsr_ctRecDat_Msg5C1SendToEvision7.tCsrRng_boPin111,
        (TVoid*)&gCsr_tMsg5C1SendToEvision7.boPin111, (TVoid*)&mCsr_tOldDat_tMsg5C1SendToEvision7.boPin111, &mCsr_aeRecErr_tMsg5C1SendToEvision7[16],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg5C1SendToEvision7.tCsrInfo_boPin135, (TVoid*)&gCsr_ctRecDat_Msg5C1SendToEvision7.tCsrRng_boPin135,
        (TVoid*)&gCsr_tMsg5C1SendToEvision7.boPin135, (TVoid*)&mCsr_tOldDat_tMsg5C1SendToEvision7.boPin135, &mCsr_aeRecErr_tMsg5C1SendToEvision7[17],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg5C1SendToEvision7.tCsrInfo_boPin112, (TVoid*)&gCsr_ctRecDat_Msg5C1SendToEvision7.tCsrRng_boPin112,
        (TVoid*)&gCsr_tMsg5C1SendToEvision7.boPin112, (TVoid*)&mCsr_tOldDat_tMsg5C1SendToEvision7.boPin112, &mCsr_aeRecErr_tMsg5C1SendToEvision7[18],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg5C1SendToEvision7.tCsrInfo_boPin136, (TVoid*)&gCsr_ctRecDat_Msg5C1SendToEvision7.tCsrRng_boPin136,
        (TVoid*)&gCsr_tMsg5C1SendToEvision7.boPin136, (TVoid*)&mCsr_tOldDat_tMsg5C1SendToEvision7.boPin136, &mCsr_aeRecErr_tMsg5C1SendToEvision7[19],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg5C1SendToEvision7.tCsrInfo_boPin113, (TVoid*)&gCsr_ctRecDat_Msg5C1SendToEvision7.tCsrRng_boPin113,
        (TVoid*)&gCsr_tMsg5C1SendToEvision7.boPin113, (TVoid*)&mCsr_tOldDat_tMsg5C1SendToEvision7.boPin113, &mCsr_aeRecErr_tMsg5C1SendToEvision7[20],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg5C1SendToEvision7.tCsrInfo_boPin137, (TVoid*)&gCsr_ctRecDat_Msg5C1SendToEvision7.tCsrRng_boPin137,
        (TVoid*)&gCsr_tMsg5C1SendToEvision7.boPin137, (TVoid*)&mCsr_tOldDat_tMsg5C1SendToEvision7.boPin137, &mCsr_aeRecErr_tMsg5C1SendToEvision7[21],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg5C1SendToEvision7.tCsrInfo_boPin114, (TVoid*)&gCsr_ctRecDat_Msg5C1SendToEvision7.tCsrRng_boPin114,
        (TVoid*)&gCsr_tMsg5C1SendToEvision7.boPin114, (TVoid*)&mCsr_tOldDat_tMsg5C1SendToEvision7.boPin114, &mCsr_aeRecErr_tMsg5C1SendToEvision7[22],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg5C1SendToEvision7.tCsrInfo_boPin138, (TVoid*)&gCsr_ctRecDat_Msg5C1SendToEvision7.tCsrRng_boPin138,
        (TVoid*)&gCsr_tMsg5C1SendToEvision7.boPin138, (TVoid*)&mCsr_tOldDat_tMsg5C1SendToEvision7.boPin138, &mCsr_aeRecErr_tMsg5C1SendToEvision7[23],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg5C1SendToEvision7.tCsrInfo_boPin140, (TVoid*)&gCsr_ctRecDat_Msg5C1SendToEvision7.tCsrRng_boPin140,
        (TVoid*)&gCsr_tMsg5C1SendToEvision7.boPin140, (TVoid*)&mCsr_tOldDat_tMsg5C1SendToEvision7.boPin140, &mCsr_aeRecErr_tMsg5C1SendToEvision7[24],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg5C1SendToEvision7.tCsrInfo_boPin117, (TVoid*)&gCsr_ctRecDat_Msg5C1SendToEvision7.tCsrRng_boPin117,
        (TVoid*)&gCsr_tMsg5C1SendToEvision7.boPin117, (TVoid*)&mCsr_tOldDat_tMsg5C1SendToEvision7.boPin117, &mCsr_aeRecErr_tMsg5C1SendToEvision7[25],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg5C1SendToEvision7.tCsrInfo_boPin141, (TVoid*)&gCsr_ctRecDat_Msg5C1SendToEvision7.tCsrRng_boPin141,
        (TVoid*)&gCsr_tMsg5C1SendToEvision7.boPin141, (TVoid*)&mCsr_tOldDat_tMsg5C1SendToEvision7.boPin141, &mCsr_aeRecErr_tMsg5C1SendToEvision7[26],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg5C1SendToEvision7.tCsrInfo_boPin124, (TVoid*)&gCsr_ctRecDat_Msg5C1SendToEvision7.tCsrRng_boPin124,
        (TVoid*)&gCsr_tMsg5C1SendToEvision7.boPin124, (TVoid*)&mCsr_tOldDat_tMsg5C1SendToEvision7.boPin124, &mCsr_aeRecErr_tMsg5C1SendToEvision7[27],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg5C1SendToEvision7.tCsrInfo_boPin148, (TVoid*)&gCsr_ctRecDat_Msg5C1SendToEvision7.tCsrRng_boPin148,
        (TVoid*)&gCsr_tMsg5C1SendToEvision7.boPin148, (TVoid*)&mCsr_tOldDat_tMsg5C1SendToEvision7.boPin148, &mCsr_aeRecErr_tMsg5C1SendToEvision7[28],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg5C1SendToEvision7.tCsrInfo_boPin153, (TVoid*)&gCsr_ctRecDat_Msg5C1SendToEvision7.tCsrRng_boPin153,
        (TVoid*)&gCsr_tMsg5C1SendToEvision7.boPin153, (TVoid*)&mCsr_tOldDat_tMsg5C1SendToEvision7.boPin153, &mCsr_aeRecErr_tMsg5C1SendToEvision7[29],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg5C1SendToEvision7.tCsrInfo_boPin177, (TVoid*)&gCsr_ctRecDat_Msg5C1SendToEvision7.tCsrRng_boPin177,
        (TVoid*)&gCsr_tMsg5C1SendToEvision7.boPin177, (TVoid*)&mCsr_tOldDat_tMsg5C1SendToEvision7.boPin177, &mCsr_aeRecErr_tMsg5C1SendToEvision7[30],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg5C1SendToEvision7.tCsrInfo_boPin159, (TVoid*)&gCsr_ctRecDat_Msg5C1SendToEvision7.tCsrRng_boPin159,
        (TVoid*)&gCsr_tMsg5C1SendToEvision7.boPin159, (TVoid*)&mCsr_tOldDat_tMsg5C1SendToEvision7.boPin159, &mCsr_aeRecErr_tMsg5C1SendToEvision7[31],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg5C1SendToEvision7.tCsrInfo_boPin183, (TVoid*)&gCsr_ctRecDat_Msg5C1SendToEvision7.tCsrRng_boPin183,
        (TVoid*)&gCsr_tMsg5C1SendToEvision7.boPin183, (TVoid*)&mCsr_tOldDat_tMsg5C1SendToEvision7.boPin183, &mCsr_aeRecErr_tMsg5C1SendToEvision7[32],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg5C1SendToEvision7.tCsrInfo_boPin154, (TVoid*)&gCsr_ctRecDat_Msg5C1SendToEvision7.tCsrRng_boPin154,
        (TVoid*)&gCsr_tMsg5C1SendToEvision7.boPin154, (TVoid*)&mCsr_tOldDat_tMsg5C1SendToEvision7.boPin154, &mCsr_aeRecErr_tMsg5C1SendToEvision7[33],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg5C1SendToEvision7.tCsrInfo_boPin178, (TVoid*)&gCsr_ctRecDat_Msg5C1SendToEvision7.tCsrRng_boPin178,
        (TVoid*)&gCsr_tMsg5C1SendToEvision7.boPin178, (TVoid*)&mCsr_tOldDat_tMsg5C1SendToEvision7.boPin178, &mCsr_aeRecErr_tMsg5C1SendToEvision7[34],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg5C1SendToEvision7.tCsrInfo_boPin157, (TVoid*)&gCsr_ctRecDat_Msg5C1SendToEvision7.tCsrRng_boPin157,
        (TVoid*)&gCsr_tMsg5C1SendToEvision7.boPin157, (TVoid*)&mCsr_tOldDat_tMsg5C1SendToEvision7.boPin157, &mCsr_aeRecErr_tMsg5C1SendToEvision7[35],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg5C1SendToEvision7.tCsrInfo_boPin181, (TVoid*)&gCsr_ctRecDat_Msg5C1SendToEvision7.tCsrRng_boPin181,
        (TVoid*)&gCsr_tMsg5C1SendToEvision7.boPin181, (TVoid*)&mCsr_tOldDat_tMsg5C1SendToEvision7.boPin181, &mCsr_aeRecErr_tMsg5C1SendToEvision7[36],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg5C1SendToEvision7.tCsrInfo_boPin160, (TVoid*)&gCsr_ctRecDat_Msg5C1SendToEvision7.tCsrRng_boPin160,
        (TVoid*)&gCsr_tMsg5C1SendToEvision7.boPin160, (TVoid*)&mCsr_tOldDat_tMsg5C1SendToEvision7.boPin160, &mCsr_aeRecErr_tMsg5C1SendToEvision7[37],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg5C1SendToEvision7.tCsrInfo_boPin184, (TVoid*)&gCsr_ctRecDat_Msg5C1SendToEvision7.tCsrRng_boPin184,
        (TVoid*)&gCsr_tMsg5C1SendToEvision7.boPin184, (TVoid*)&mCsr_tOldDat_tMsg5C1SendToEvision7.boPin184, &mCsr_aeRecErr_tMsg5C1SendToEvision7[38],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg5C1SendToEvision7.tCsrInfo_boPin187, (TVoid*)&gCsr_ctRecDat_Msg5C1SendToEvision7.tCsrRng_boPin187,
        (TVoid*)&gCsr_tMsg5C1SendToEvision7.boPin187, (TVoid*)&mCsr_tOldDat_tMsg5C1SendToEvision7.boPin187, &mCsr_aeRecErr_tMsg5C1SendToEvision7[39],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg5C1SendToEvision7.tCsrInfo_boPin163, (TVoid*)&gCsr_ctRecDat_Msg5C1SendToEvision7.tCsrRng_boPin163,
        (TVoid*)&gCsr_tMsg5C1SendToEvision7.boPin163, (TVoid*)&mCsr_tOldDat_tMsg5C1SendToEvision7.boPin163, &mCsr_aeRecErr_tMsg5C1SendToEvision7[40],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg5C1SendToEvision7.tCsrInfo_boPin149, (TVoid*)&gCsr_ctRecDat_Msg5C1SendToEvision7.tCsrRng_boPin149,
        (TVoid*)&gCsr_tMsg5C1SendToEvision7.boPin149, (TVoid*)&mCsr_tOldDat_tMsg5C1SendToEvision7.boPin149, &mCsr_aeRecErr_tMsg5C1SendToEvision7[41],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg5C1SendToEvision7.tCsrInfo_boPin173, (TVoid*)&gCsr_ctRecDat_Msg5C1SendToEvision7.tCsrRng_boPin173,
        (TVoid*)&gCsr_tMsg5C1SendToEvision7.boPin173, (TVoid*)&mCsr_tOldDat_tMsg5C1SendToEvision7.boPin173, &mCsr_aeRecErr_tMsg5C1SendToEvision7[42],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg5C1SendToEvision7.tCsrInfo_boPin152, (TVoid*)&gCsr_ctRecDat_Msg5C1SendToEvision7.tCsrRng_boPin152,
        (TVoid*)&gCsr_tMsg5C1SendToEvision7.boPin152, (TVoid*)&mCsr_tOldDat_tMsg5C1SendToEvision7.boPin152, &mCsr_aeRecErr_tMsg5C1SendToEvision7[43],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg5C1SendToEvision7.tCsrInfo_boPin176, (TVoid*)&gCsr_ctRecDat_Msg5C1SendToEvision7.tCsrRng_boPin176,
        (TVoid*)&gCsr_tMsg5C1SendToEvision7.boPin176, (TVoid*)&mCsr_tOldDat_tMsg5C1SendToEvision7.boPin176, &mCsr_aeRecErr_tMsg5C1SendToEvision7[44],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg5C1SendToEvision7.tCsrInfo_boPin155, (TVoid*)&gCsr_ctRecDat_Msg5C1SendToEvision7.tCsrRng_boPin155,
        (TVoid*)&gCsr_tMsg5C1SendToEvision7.boPin155, (TVoid*)&mCsr_tOldDat_tMsg5C1SendToEvision7.boPin155, &mCsr_aeRecErr_tMsg5C1SendToEvision7[45],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg5C1SendToEvision7.tCsrInfo_boPin179, (TVoid*)&gCsr_ctRecDat_Msg5C1SendToEvision7.tCsrRng_boPin179,
        (TVoid*)&gCsr_tMsg5C1SendToEvision7.boPin179, (TVoid*)&mCsr_tOldDat_tMsg5C1SendToEvision7.boPin179, &mCsr_aeRecErr_tMsg5C1SendToEvision7[46],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg5C1SendToEvision7.tCsrInfo_boPin158, (TVoid*)&gCsr_ctRecDat_Msg5C1SendToEvision7.tCsrRng_boPin158,
        (TVoid*)&gCsr_tMsg5C1SendToEvision7.boPin158, (TVoid*)&mCsr_tOldDat_tMsg5C1SendToEvision7.boPin158, &mCsr_aeRecErr_tMsg5C1SendToEvision7[47],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg5C1SendToEvision7.tCsrInfo_boPin182, (TVoid*)&gCsr_ctRecDat_Msg5C1SendToEvision7.tCsrRng_boPin182,
        (TVoid*)&gCsr_tMsg5C1SendToEvision7.boPin182, (TVoid*)&mCsr_tOldDat_tMsg5C1SendToEvision7.boPin182, &mCsr_aeRecErr_tMsg5C1SendToEvision7[48],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg5C1SendToEvision7.tCsrInfo_boPin251, (TVoid*)&gCsr_ctRecDat_Msg5C1SendToEvision7.tCsrRng_boPin251,
        (TVoid*)&gCsr_tMsg5C1SendToEvision7.boPin251, (TVoid*)&mCsr_tOldDat_tMsg5C1SendToEvision7.boPin251, &mCsr_aeRecErr_tMsg5C1SendToEvision7[49],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg5C1SendToEvision7.tCsrInfo_boPin186, (TVoid*)&gCsr_ctRecDat_Msg5C1SendToEvision7.tCsrRng_boPin186,
        (TVoid*)&gCsr_tMsg5C1SendToEvision7.boPin186, (TVoid*)&mCsr_tOldDat_tMsg5C1SendToEvision7.boPin186, &mCsr_aeRecErr_tMsg5C1SendToEvision7[50],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg5C1SendToEvision7.tCsrInfo_boPin239, (TVoid*)&gCsr_ctRecDat_Msg5C1SendToEvision7.tCsrRng_boPin239,
        (TVoid*)&gCsr_tMsg5C1SendToEvision7.boPin239, (TVoid*)&mCsr_tOldDat_tMsg5C1SendToEvision7.boPin239, &mCsr_aeRecErr_tMsg5C1SendToEvision7[51],
        NULL, NULL
    }
};

static const TCanSigRecRoot mCsr_ctRoot_Msg5C1SendToEvision7 =
{
    "Msg5C1SendToEvision7",                                 //!< achName - [STR] Name Msg5C1SendToEvision7
    8,                                                      //!< u8Dlc - [NUM] DLC of Can Message
    0xff,                                                   //!< u8CanByteDflt - [NUM] CAN Message default
    DATA_INTEL,                                             //!< eCanFormat - [NUM] CAN Format
    0xFF,                                                   //!< u8MasterReceiveId - [NUM] Receive Id
    52,                                                     //!< u8RecCnt - [NUM] Count of Recorde
    &mCsr_actRecDat_tMsg5C1SendToEvision7[0],               //!< ptRec - [NUM] Pointer to Record Values
    33,                                                     //!< u16RecNo - [NUM] Record Number
    CSR_STAMP                                               //!< u16Stamp - [NUM] Safety stamp
};

TCanSigRecMsg5C1SendToEvision7 gCsr_tMsg5C1SendToEvision7 =
{
    &mCsr_ctRoot_Msg5C1SendToEvision7,                      //!< *cptRoot [POI] Root connection
    FALSE,                                                  //!< boReserve0 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boReserve1 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boReserve2 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boReserve3 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boReserve4 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boReserve5 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boReserve6 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boReserve7 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin107 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin131 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin108 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin132 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin109 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin133 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin110 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin134 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin111 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin135 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin112 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin136 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin113 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin137 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin114 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin138 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin140 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin117 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin141 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin124 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin148 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin153 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin177 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin159 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin183 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin154 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin178 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin157 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin181 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin160 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin184 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin187 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin163 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin149 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin173 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin152 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin176 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin155 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin179 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin158 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin182 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin251 [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin186 [[-]] for the Neotec diag pages
    FALSE                                                   //!< boPin239 [[-]] for the Neotec diag pages
};

const TCanSigRecVal_Msg6C1SendToEvision7 gCsr_ctRecDat_Msg6C1SendToEvision7 =
{
    //!< Pin230Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 0, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin243Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 1, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin244Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 2, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin245Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 3, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin256Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 4, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin257Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 5, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin258Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 6, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin103Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 7, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin127Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 8, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin104Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 9, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin128Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 10, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin105Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 11, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin129Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 12, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin106Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 13, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin130Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 14, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin107Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 15, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin131Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 16, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin108Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 17, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin132Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 18, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin109Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 19, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin133Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 20, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin110Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 21, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin134Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 22, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin111Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 23, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin135Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 24, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin112Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 25, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin136Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 26, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin113Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 27, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin137Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 28, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin114Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 29, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin138Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 30, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin115Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 31, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin139Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 32, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin116Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 33, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin140Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 34, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin117Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 35, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin141Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 36, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin122Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 37, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin146Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 38, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin123Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 39, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin147Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 40, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin124Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 41, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin148Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 42, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin153Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 43, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin177Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 44, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin156Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 45, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin180Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 46, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin159Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 47, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin183Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 48, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin186Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 49, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin162Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 50, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin189Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 51, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin165Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 52, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin192Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 53, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin168Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 54, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin195Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 55, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin171Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 56, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin154Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 57, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin178Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 58, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin157Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 59, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin181Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 60, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin160Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 61, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin184Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 62, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin187Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 63, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE }
};

static ESigSta mCsr_aeRecErr_tMsg6C1SendToEvision7[64] =
{
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY
};

static TCanSigRecOldValMsg6C1SendToEvision7 mCsr_tOldDat_tMsg6C1SendToEvision7 =
{
    FALSE,                                                  //!< boPin230Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin243Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin244Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin245Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin256Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin257Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin258Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin103Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin127Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin104Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin128Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin105Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin129Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin106Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin130Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin107Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin131Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin108Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin132Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin109Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin133Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin110Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin134Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin111Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin135Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin112Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin136Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin113Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin137Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin114Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin138Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin115Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin139Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin116Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin140Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin117Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin141Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin122Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin146Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin123Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin147Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin124Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin148Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin153Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin177Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin156Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin180Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin159Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin183Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin186Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin162Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin189Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin165Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin192Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin168Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin195Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin171Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin154Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin178Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin157Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin181Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin160Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin184Fault [[-]] for the Neotec diag pages
    FALSE                                                   //!< boPin187Fault [[-]] for the Neotec diag pages
};

extern TCanSigRecMsg6C1SendToEvision7 gCsr_tMsg6C1SendToEvision7;
static const TRecDat mCsr_actRecDat_tMsg6C1SendToEvision7[64] =
{
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg6C1SendToEvision7.tCsrInfo_boPin230Fault, (TVoid*)&gCsr_ctRecDat_Msg6C1SendToEvision7.tCsrRng_boPin230Fault,
        (TVoid*)&gCsr_tMsg6C1SendToEvision7.boPin230Fault, (TVoid*)&mCsr_tOldDat_tMsg6C1SendToEvision7.boPin230Fault, &mCsr_aeRecErr_tMsg6C1SendToEvision7[0],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg6C1SendToEvision7.tCsrInfo_boPin243Fault, (TVoid*)&gCsr_ctRecDat_Msg6C1SendToEvision7.tCsrRng_boPin243Fault,
        (TVoid*)&gCsr_tMsg6C1SendToEvision7.boPin243Fault, (TVoid*)&mCsr_tOldDat_tMsg6C1SendToEvision7.boPin243Fault, &mCsr_aeRecErr_tMsg6C1SendToEvision7[1],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg6C1SendToEvision7.tCsrInfo_boPin244Fault, (TVoid*)&gCsr_ctRecDat_Msg6C1SendToEvision7.tCsrRng_boPin244Fault,
        (TVoid*)&gCsr_tMsg6C1SendToEvision7.boPin244Fault, (TVoid*)&mCsr_tOldDat_tMsg6C1SendToEvision7.boPin244Fault, &mCsr_aeRecErr_tMsg6C1SendToEvision7[2],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg6C1SendToEvision7.tCsrInfo_boPin245Fault, (TVoid*)&gCsr_ctRecDat_Msg6C1SendToEvision7.tCsrRng_boPin245Fault,
        (TVoid*)&gCsr_tMsg6C1SendToEvision7.boPin245Fault, (TVoid*)&mCsr_tOldDat_tMsg6C1SendToEvision7.boPin245Fault, &mCsr_aeRecErr_tMsg6C1SendToEvision7[3],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg6C1SendToEvision7.tCsrInfo_boPin256Fault, (TVoid*)&gCsr_ctRecDat_Msg6C1SendToEvision7.tCsrRng_boPin256Fault,
        (TVoid*)&gCsr_tMsg6C1SendToEvision7.boPin256Fault, (TVoid*)&mCsr_tOldDat_tMsg6C1SendToEvision7.boPin256Fault, &mCsr_aeRecErr_tMsg6C1SendToEvision7[4],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg6C1SendToEvision7.tCsrInfo_boPin257Fault, (TVoid*)&gCsr_ctRecDat_Msg6C1SendToEvision7.tCsrRng_boPin257Fault,
        (TVoid*)&gCsr_tMsg6C1SendToEvision7.boPin257Fault, (TVoid*)&mCsr_tOldDat_tMsg6C1SendToEvision7.boPin257Fault, &mCsr_aeRecErr_tMsg6C1SendToEvision7[5],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg6C1SendToEvision7.tCsrInfo_boPin258Fault, (TVoid*)&gCsr_ctRecDat_Msg6C1SendToEvision7.tCsrRng_boPin258Fault,
        (TVoid*)&gCsr_tMsg6C1SendToEvision7.boPin258Fault, (TVoid*)&mCsr_tOldDat_tMsg6C1SendToEvision7.boPin258Fault, &mCsr_aeRecErr_tMsg6C1SendToEvision7[6],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg6C1SendToEvision7.tCsrInfo_boPin103Fault, (TVoid*)&gCsr_ctRecDat_Msg6C1SendToEvision7.tCsrRng_boPin103Fault,
        (TVoid*)&gCsr_tMsg6C1SendToEvision7.boPin103Fault, (TVoid*)&mCsr_tOldDat_tMsg6C1SendToEvision7.boPin103Fault, &mCsr_aeRecErr_tMsg6C1SendToEvision7[7],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg6C1SendToEvision7.tCsrInfo_boPin127Fault, (TVoid*)&gCsr_ctRecDat_Msg6C1SendToEvision7.tCsrRng_boPin127Fault,
        (TVoid*)&gCsr_tMsg6C1SendToEvision7.boPin127Fault, (TVoid*)&mCsr_tOldDat_tMsg6C1SendToEvision7.boPin127Fault, &mCsr_aeRecErr_tMsg6C1SendToEvision7[8],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg6C1SendToEvision7.tCsrInfo_boPin104Fault, (TVoid*)&gCsr_ctRecDat_Msg6C1SendToEvision7.tCsrRng_boPin104Fault,
        (TVoid*)&gCsr_tMsg6C1SendToEvision7.boPin104Fault, (TVoid*)&mCsr_tOldDat_tMsg6C1SendToEvision7.boPin104Fault, &mCsr_aeRecErr_tMsg6C1SendToEvision7[9],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg6C1SendToEvision7.tCsrInfo_boPin128Fault, (TVoid*)&gCsr_ctRecDat_Msg6C1SendToEvision7.tCsrRng_boPin128Fault,
        (TVoid*)&gCsr_tMsg6C1SendToEvision7.boPin128Fault, (TVoid*)&mCsr_tOldDat_tMsg6C1SendToEvision7.boPin128Fault, &mCsr_aeRecErr_tMsg6C1SendToEvision7[10],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg6C1SendToEvision7.tCsrInfo_boPin105Fault, (TVoid*)&gCsr_ctRecDat_Msg6C1SendToEvision7.tCsrRng_boPin105Fault,
        (TVoid*)&gCsr_tMsg6C1SendToEvision7.boPin105Fault, (TVoid*)&mCsr_tOldDat_tMsg6C1SendToEvision7.boPin105Fault, &mCsr_aeRecErr_tMsg6C1SendToEvision7[11],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg6C1SendToEvision7.tCsrInfo_boPin129Fault, (TVoid*)&gCsr_ctRecDat_Msg6C1SendToEvision7.tCsrRng_boPin129Fault,
        (TVoid*)&gCsr_tMsg6C1SendToEvision7.boPin129Fault, (TVoid*)&mCsr_tOldDat_tMsg6C1SendToEvision7.boPin129Fault, &mCsr_aeRecErr_tMsg6C1SendToEvision7[12],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg6C1SendToEvision7.tCsrInfo_boPin106Fault, (TVoid*)&gCsr_ctRecDat_Msg6C1SendToEvision7.tCsrRng_boPin106Fault,
        (TVoid*)&gCsr_tMsg6C1SendToEvision7.boPin106Fault, (TVoid*)&mCsr_tOldDat_tMsg6C1SendToEvision7.boPin106Fault, &mCsr_aeRecErr_tMsg6C1SendToEvision7[13],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg6C1SendToEvision7.tCsrInfo_boPin130Fault, (TVoid*)&gCsr_ctRecDat_Msg6C1SendToEvision7.tCsrRng_boPin130Fault,
        (TVoid*)&gCsr_tMsg6C1SendToEvision7.boPin130Fault, (TVoid*)&mCsr_tOldDat_tMsg6C1SendToEvision7.boPin130Fault, &mCsr_aeRecErr_tMsg6C1SendToEvision7[14],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg6C1SendToEvision7.tCsrInfo_boPin107Fault, (TVoid*)&gCsr_ctRecDat_Msg6C1SendToEvision7.tCsrRng_boPin107Fault,
        (TVoid*)&gCsr_tMsg6C1SendToEvision7.boPin107Fault, (TVoid*)&mCsr_tOldDat_tMsg6C1SendToEvision7.boPin107Fault, &mCsr_aeRecErr_tMsg6C1SendToEvision7[15],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg6C1SendToEvision7.tCsrInfo_boPin131Fault, (TVoid*)&gCsr_ctRecDat_Msg6C1SendToEvision7.tCsrRng_boPin131Fault,
        (TVoid*)&gCsr_tMsg6C1SendToEvision7.boPin131Fault, (TVoid*)&mCsr_tOldDat_tMsg6C1SendToEvision7.boPin131Fault, &mCsr_aeRecErr_tMsg6C1SendToEvision7[16],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg6C1SendToEvision7.tCsrInfo_boPin108Fault, (TVoid*)&gCsr_ctRecDat_Msg6C1SendToEvision7.tCsrRng_boPin108Fault,
        (TVoid*)&gCsr_tMsg6C1SendToEvision7.boPin108Fault, (TVoid*)&mCsr_tOldDat_tMsg6C1SendToEvision7.boPin108Fault, &mCsr_aeRecErr_tMsg6C1SendToEvision7[17],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg6C1SendToEvision7.tCsrInfo_boPin132Fault, (TVoid*)&gCsr_ctRecDat_Msg6C1SendToEvision7.tCsrRng_boPin132Fault,
        (TVoid*)&gCsr_tMsg6C1SendToEvision7.boPin132Fault, (TVoid*)&mCsr_tOldDat_tMsg6C1SendToEvision7.boPin132Fault, &mCsr_aeRecErr_tMsg6C1SendToEvision7[18],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg6C1SendToEvision7.tCsrInfo_boPin109Fault, (TVoid*)&gCsr_ctRecDat_Msg6C1SendToEvision7.tCsrRng_boPin109Fault,
        (TVoid*)&gCsr_tMsg6C1SendToEvision7.boPin109Fault, (TVoid*)&mCsr_tOldDat_tMsg6C1SendToEvision7.boPin109Fault, &mCsr_aeRecErr_tMsg6C1SendToEvision7[19],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg6C1SendToEvision7.tCsrInfo_boPin133Fault, (TVoid*)&gCsr_ctRecDat_Msg6C1SendToEvision7.tCsrRng_boPin133Fault,
        (TVoid*)&gCsr_tMsg6C1SendToEvision7.boPin133Fault, (TVoid*)&mCsr_tOldDat_tMsg6C1SendToEvision7.boPin133Fault, &mCsr_aeRecErr_tMsg6C1SendToEvision7[20],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg6C1SendToEvision7.tCsrInfo_boPin110Fault, (TVoid*)&gCsr_ctRecDat_Msg6C1SendToEvision7.tCsrRng_boPin110Fault,
        (TVoid*)&gCsr_tMsg6C1SendToEvision7.boPin110Fault, (TVoid*)&mCsr_tOldDat_tMsg6C1SendToEvision7.boPin110Fault, &mCsr_aeRecErr_tMsg6C1SendToEvision7[21],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg6C1SendToEvision7.tCsrInfo_boPin134Fault, (TVoid*)&gCsr_ctRecDat_Msg6C1SendToEvision7.tCsrRng_boPin134Fault,
        (TVoid*)&gCsr_tMsg6C1SendToEvision7.boPin134Fault, (TVoid*)&mCsr_tOldDat_tMsg6C1SendToEvision7.boPin134Fault, &mCsr_aeRecErr_tMsg6C1SendToEvision7[22],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg6C1SendToEvision7.tCsrInfo_boPin111Fault, (TVoid*)&gCsr_ctRecDat_Msg6C1SendToEvision7.tCsrRng_boPin111Fault,
        (TVoid*)&gCsr_tMsg6C1SendToEvision7.boPin111Fault, (TVoid*)&mCsr_tOldDat_tMsg6C1SendToEvision7.boPin111Fault, &mCsr_aeRecErr_tMsg6C1SendToEvision7[23],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg6C1SendToEvision7.tCsrInfo_boPin135Fault, (TVoid*)&gCsr_ctRecDat_Msg6C1SendToEvision7.tCsrRng_boPin135Fault,
        (TVoid*)&gCsr_tMsg6C1SendToEvision7.boPin135Fault, (TVoid*)&mCsr_tOldDat_tMsg6C1SendToEvision7.boPin135Fault, &mCsr_aeRecErr_tMsg6C1SendToEvision7[24],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg6C1SendToEvision7.tCsrInfo_boPin112Fault, (TVoid*)&gCsr_ctRecDat_Msg6C1SendToEvision7.tCsrRng_boPin112Fault,
        (TVoid*)&gCsr_tMsg6C1SendToEvision7.boPin112Fault, (TVoid*)&mCsr_tOldDat_tMsg6C1SendToEvision7.boPin112Fault, &mCsr_aeRecErr_tMsg6C1SendToEvision7[25],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg6C1SendToEvision7.tCsrInfo_boPin136Fault, (TVoid*)&gCsr_ctRecDat_Msg6C1SendToEvision7.tCsrRng_boPin136Fault,
        (TVoid*)&gCsr_tMsg6C1SendToEvision7.boPin136Fault, (TVoid*)&mCsr_tOldDat_tMsg6C1SendToEvision7.boPin136Fault, &mCsr_aeRecErr_tMsg6C1SendToEvision7[26],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg6C1SendToEvision7.tCsrInfo_boPin113Fault, (TVoid*)&gCsr_ctRecDat_Msg6C1SendToEvision7.tCsrRng_boPin113Fault,
        (TVoid*)&gCsr_tMsg6C1SendToEvision7.boPin113Fault, (TVoid*)&mCsr_tOldDat_tMsg6C1SendToEvision7.boPin113Fault, &mCsr_aeRecErr_tMsg6C1SendToEvision7[27],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg6C1SendToEvision7.tCsrInfo_boPin137Fault, (TVoid*)&gCsr_ctRecDat_Msg6C1SendToEvision7.tCsrRng_boPin137Fault,
        (TVoid*)&gCsr_tMsg6C1SendToEvision7.boPin137Fault, (TVoid*)&mCsr_tOldDat_tMsg6C1SendToEvision7.boPin137Fault, &mCsr_aeRecErr_tMsg6C1SendToEvision7[28],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg6C1SendToEvision7.tCsrInfo_boPin114Fault, (TVoid*)&gCsr_ctRecDat_Msg6C1SendToEvision7.tCsrRng_boPin114Fault,
        (TVoid*)&gCsr_tMsg6C1SendToEvision7.boPin114Fault, (TVoid*)&mCsr_tOldDat_tMsg6C1SendToEvision7.boPin114Fault, &mCsr_aeRecErr_tMsg6C1SendToEvision7[29],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg6C1SendToEvision7.tCsrInfo_boPin138Fault, (TVoid*)&gCsr_ctRecDat_Msg6C1SendToEvision7.tCsrRng_boPin138Fault,
        (TVoid*)&gCsr_tMsg6C1SendToEvision7.boPin138Fault, (TVoid*)&mCsr_tOldDat_tMsg6C1SendToEvision7.boPin138Fault, &mCsr_aeRecErr_tMsg6C1SendToEvision7[30],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg6C1SendToEvision7.tCsrInfo_boPin115Fault, (TVoid*)&gCsr_ctRecDat_Msg6C1SendToEvision7.tCsrRng_boPin115Fault,
        (TVoid*)&gCsr_tMsg6C1SendToEvision7.boPin115Fault, (TVoid*)&mCsr_tOldDat_tMsg6C1SendToEvision7.boPin115Fault, &mCsr_aeRecErr_tMsg6C1SendToEvision7[31],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg6C1SendToEvision7.tCsrInfo_boPin139Fault, (TVoid*)&gCsr_ctRecDat_Msg6C1SendToEvision7.tCsrRng_boPin139Fault,
        (TVoid*)&gCsr_tMsg6C1SendToEvision7.boPin139Fault, (TVoid*)&mCsr_tOldDat_tMsg6C1SendToEvision7.boPin139Fault, &mCsr_aeRecErr_tMsg6C1SendToEvision7[32],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg6C1SendToEvision7.tCsrInfo_boPin116Fault, (TVoid*)&gCsr_ctRecDat_Msg6C1SendToEvision7.tCsrRng_boPin116Fault,
        (TVoid*)&gCsr_tMsg6C1SendToEvision7.boPin116Fault, (TVoid*)&mCsr_tOldDat_tMsg6C1SendToEvision7.boPin116Fault, &mCsr_aeRecErr_tMsg6C1SendToEvision7[33],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg6C1SendToEvision7.tCsrInfo_boPin140Fault, (TVoid*)&gCsr_ctRecDat_Msg6C1SendToEvision7.tCsrRng_boPin140Fault,
        (TVoid*)&gCsr_tMsg6C1SendToEvision7.boPin140Fault, (TVoid*)&mCsr_tOldDat_tMsg6C1SendToEvision7.boPin140Fault, &mCsr_aeRecErr_tMsg6C1SendToEvision7[34],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg6C1SendToEvision7.tCsrInfo_boPin117Fault, (TVoid*)&gCsr_ctRecDat_Msg6C1SendToEvision7.tCsrRng_boPin117Fault,
        (TVoid*)&gCsr_tMsg6C1SendToEvision7.boPin117Fault, (TVoid*)&mCsr_tOldDat_tMsg6C1SendToEvision7.boPin117Fault, &mCsr_aeRecErr_tMsg6C1SendToEvision7[35],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg6C1SendToEvision7.tCsrInfo_boPin141Fault, (TVoid*)&gCsr_ctRecDat_Msg6C1SendToEvision7.tCsrRng_boPin141Fault,
        (TVoid*)&gCsr_tMsg6C1SendToEvision7.boPin141Fault, (TVoid*)&mCsr_tOldDat_tMsg6C1SendToEvision7.boPin141Fault, &mCsr_aeRecErr_tMsg6C1SendToEvision7[36],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg6C1SendToEvision7.tCsrInfo_boPin122Fault, (TVoid*)&gCsr_ctRecDat_Msg6C1SendToEvision7.tCsrRng_boPin122Fault,
        (TVoid*)&gCsr_tMsg6C1SendToEvision7.boPin122Fault, (TVoid*)&mCsr_tOldDat_tMsg6C1SendToEvision7.boPin122Fault, &mCsr_aeRecErr_tMsg6C1SendToEvision7[37],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg6C1SendToEvision7.tCsrInfo_boPin146Fault, (TVoid*)&gCsr_ctRecDat_Msg6C1SendToEvision7.tCsrRng_boPin146Fault,
        (TVoid*)&gCsr_tMsg6C1SendToEvision7.boPin146Fault, (TVoid*)&mCsr_tOldDat_tMsg6C1SendToEvision7.boPin146Fault, &mCsr_aeRecErr_tMsg6C1SendToEvision7[38],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg6C1SendToEvision7.tCsrInfo_boPin123Fault, (TVoid*)&gCsr_ctRecDat_Msg6C1SendToEvision7.tCsrRng_boPin123Fault,
        (TVoid*)&gCsr_tMsg6C1SendToEvision7.boPin123Fault, (TVoid*)&mCsr_tOldDat_tMsg6C1SendToEvision7.boPin123Fault, &mCsr_aeRecErr_tMsg6C1SendToEvision7[39],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg6C1SendToEvision7.tCsrInfo_boPin147Fault, (TVoid*)&gCsr_ctRecDat_Msg6C1SendToEvision7.tCsrRng_boPin147Fault,
        (TVoid*)&gCsr_tMsg6C1SendToEvision7.boPin147Fault, (TVoid*)&mCsr_tOldDat_tMsg6C1SendToEvision7.boPin147Fault, &mCsr_aeRecErr_tMsg6C1SendToEvision7[40],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg6C1SendToEvision7.tCsrInfo_boPin124Fault, (TVoid*)&gCsr_ctRecDat_Msg6C1SendToEvision7.tCsrRng_boPin124Fault,
        (TVoid*)&gCsr_tMsg6C1SendToEvision7.boPin124Fault, (TVoid*)&mCsr_tOldDat_tMsg6C1SendToEvision7.boPin124Fault, &mCsr_aeRecErr_tMsg6C1SendToEvision7[41],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg6C1SendToEvision7.tCsrInfo_boPin148Fault, (TVoid*)&gCsr_ctRecDat_Msg6C1SendToEvision7.tCsrRng_boPin148Fault,
        (TVoid*)&gCsr_tMsg6C1SendToEvision7.boPin148Fault, (TVoid*)&mCsr_tOldDat_tMsg6C1SendToEvision7.boPin148Fault, &mCsr_aeRecErr_tMsg6C1SendToEvision7[42],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg6C1SendToEvision7.tCsrInfo_boPin153Fault, (TVoid*)&gCsr_ctRecDat_Msg6C1SendToEvision7.tCsrRng_boPin153Fault,
        (TVoid*)&gCsr_tMsg6C1SendToEvision7.boPin153Fault, (TVoid*)&mCsr_tOldDat_tMsg6C1SendToEvision7.boPin153Fault, &mCsr_aeRecErr_tMsg6C1SendToEvision7[43],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg6C1SendToEvision7.tCsrInfo_boPin177Fault, (TVoid*)&gCsr_ctRecDat_Msg6C1SendToEvision7.tCsrRng_boPin177Fault,
        (TVoid*)&gCsr_tMsg6C1SendToEvision7.boPin177Fault, (TVoid*)&mCsr_tOldDat_tMsg6C1SendToEvision7.boPin177Fault, &mCsr_aeRecErr_tMsg6C1SendToEvision7[44],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg6C1SendToEvision7.tCsrInfo_boPin156Fault, (TVoid*)&gCsr_ctRecDat_Msg6C1SendToEvision7.tCsrRng_boPin156Fault,
        (TVoid*)&gCsr_tMsg6C1SendToEvision7.boPin156Fault, (TVoid*)&mCsr_tOldDat_tMsg6C1SendToEvision7.boPin156Fault, &mCsr_aeRecErr_tMsg6C1SendToEvision7[45],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg6C1SendToEvision7.tCsrInfo_boPin180Fault, (TVoid*)&gCsr_ctRecDat_Msg6C1SendToEvision7.tCsrRng_boPin180Fault,
        (TVoid*)&gCsr_tMsg6C1SendToEvision7.boPin180Fault, (TVoid*)&mCsr_tOldDat_tMsg6C1SendToEvision7.boPin180Fault, &mCsr_aeRecErr_tMsg6C1SendToEvision7[46],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg6C1SendToEvision7.tCsrInfo_boPin159Fault, (TVoid*)&gCsr_ctRecDat_Msg6C1SendToEvision7.tCsrRng_boPin159Fault,
        (TVoid*)&gCsr_tMsg6C1SendToEvision7.boPin159Fault, (TVoid*)&mCsr_tOldDat_tMsg6C1SendToEvision7.boPin159Fault, &mCsr_aeRecErr_tMsg6C1SendToEvision7[47],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg6C1SendToEvision7.tCsrInfo_boPin183Fault, (TVoid*)&gCsr_ctRecDat_Msg6C1SendToEvision7.tCsrRng_boPin183Fault,
        (TVoid*)&gCsr_tMsg6C1SendToEvision7.boPin183Fault, (TVoid*)&mCsr_tOldDat_tMsg6C1SendToEvision7.boPin183Fault, &mCsr_aeRecErr_tMsg6C1SendToEvision7[48],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg6C1SendToEvision7.tCsrInfo_boPin186Fault, (TVoid*)&gCsr_ctRecDat_Msg6C1SendToEvision7.tCsrRng_boPin186Fault,
        (TVoid*)&gCsr_tMsg6C1SendToEvision7.boPin186Fault, (TVoid*)&mCsr_tOldDat_tMsg6C1SendToEvision7.boPin186Fault, &mCsr_aeRecErr_tMsg6C1SendToEvision7[49],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg6C1SendToEvision7.tCsrInfo_boPin162Fault, (TVoid*)&gCsr_ctRecDat_Msg6C1SendToEvision7.tCsrRng_boPin162Fault,
        (TVoid*)&gCsr_tMsg6C1SendToEvision7.boPin162Fault, (TVoid*)&mCsr_tOldDat_tMsg6C1SendToEvision7.boPin162Fault, &mCsr_aeRecErr_tMsg6C1SendToEvision7[50],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg6C1SendToEvision7.tCsrInfo_boPin189Fault, (TVoid*)&gCsr_ctRecDat_Msg6C1SendToEvision7.tCsrRng_boPin189Fault,
        (TVoid*)&gCsr_tMsg6C1SendToEvision7.boPin189Fault, (TVoid*)&mCsr_tOldDat_tMsg6C1SendToEvision7.boPin189Fault, &mCsr_aeRecErr_tMsg6C1SendToEvision7[51],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg6C1SendToEvision7.tCsrInfo_boPin165Fault, (TVoid*)&gCsr_ctRecDat_Msg6C1SendToEvision7.tCsrRng_boPin165Fault,
        (TVoid*)&gCsr_tMsg6C1SendToEvision7.boPin165Fault, (TVoid*)&mCsr_tOldDat_tMsg6C1SendToEvision7.boPin165Fault, &mCsr_aeRecErr_tMsg6C1SendToEvision7[52],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg6C1SendToEvision7.tCsrInfo_boPin192Fault, (TVoid*)&gCsr_ctRecDat_Msg6C1SendToEvision7.tCsrRng_boPin192Fault,
        (TVoid*)&gCsr_tMsg6C1SendToEvision7.boPin192Fault, (TVoid*)&mCsr_tOldDat_tMsg6C1SendToEvision7.boPin192Fault, &mCsr_aeRecErr_tMsg6C1SendToEvision7[53],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg6C1SendToEvision7.tCsrInfo_boPin168Fault, (TVoid*)&gCsr_ctRecDat_Msg6C1SendToEvision7.tCsrRng_boPin168Fault,
        (TVoid*)&gCsr_tMsg6C1SendToEvision7.boPin168Fault, (TVoid*)&mCsr_tOldDat_tMsg6C1SendToEvision7.boPin168Fault, &mCsr_aeRecErr_tMsg6C1SendToEvision7[54],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg6C1SendToEvision7.tCsrInfo_boPin195Fault, (TVoid*)&gCsr_ctRecDat_Msg6C1SendToEvision7.tCsrRng_boPin195Fault,
        (TVoid*)&gCsr_tMsg6C1SendToEvision7.boPin195Fault, (TVoid*)&mCsr_tOldDat_tMsg6C1SendToEvision7.boPin195Fault, &mCsr_aeRecErr_tMsg6C1SendToEvision7[55],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg6C1SendToEvision7.tCsrInfo_boPin171Fault, (TVoid*)&gCsr_ctRecDat_Msg6C1SendToEvision7.tCsrRng_boPin171Fault,
        (TVoid*)&gCsr_tMsg6C1SendToEvision7.boPin171Fault, (TVoid*)&mCsr_tOldDat_tMsg6C1SendToEvision7.boPin171Fault, &mCsr_aeRecErr_tMsg6C1SendToEvision7[56],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg6C1SendToEvision7.tCsrInfo_boPin154Fault, (TVoid*)&gCsr_ctRecDat_Msg6C1SendToEvision7.tCsrRng_boPin154Fault,
        (TVoid*)&gCsr_tMsg6C1SendToEvision7.boPin154Fault, (TVoid*)&mCsr_tOldDat_tMsg6C1SendToEvision7.boPin154Fault, &mCsr_aeRecErr_tMsg6C1SendToEvision7[57],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg6C1SendToEvision7.tCsrInfo_boPin178Fault, (TVoid*)&gCsr_ctRecDat_Msg6C1SendToEvision7.tCsrRng_boPin178Fault,
        (TVoid*)&gCsr_tMsg6C1SendToEvision7.boPin178Fault, (TVoid*)&mCsr_tOldDat_tMsg6C1SendToEvision7.boPin178Fault, &mCsr_aeRecErr_tMsg6C1SendToEvision7[58],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg6C1SendToEvision7.tCsrInfo_boPin157Fault, (TVoid*)&gCsr_ctRecDat_Msg6C1SendToEvision7.tCsrRng_boPin157Fault,
        (TVoid*)&gCsr_tMsg6C1SendToEvision7.boPin157Fault, (TVoid*)&mCsr_tOldDat_tMsg6C1SendToEvision7.boPin157Fault, &mCsr_aeRecErr_tMsg6C1SendToEvision7[59],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg6C1SendToEvision7.tCsrInfo_boPin181Fault, (TVoid*)&gCsr_ctRecDat_Msg6C1SendToEvision7.tCsrRng_boPin181Fault,
        (TVoid*)&gCsr_tMsg6C1SendToEvision7.boPin181Fault, (TVoid*)&mCsr_tOldDat_tMsg6C1SendToEvision7.boPin181Fault, &mCsr_aeRecErr_tMsg6C1SendToEvision7[60],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg6C1SendToEvision7.tCsrInfo_boPin160Fault, (TVoid*)&gCsr_ctRecDat_Msg6C1SendToEvision7.tCsrRng_boPin160Fault,
        (TVoid*)&gCsr_tMsg6C1SendToEvision7.boPin160Fault, (TVoid*)&mCsr_tOldDat_tMsg6C1SendToEvision7.boPin160Fault, &mCsr_aeRecErr_tMsg6C1SendToEvision7[61],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg6C1SendToEvision7.tCsrInfo_boPin184Fault, (TVoid*)&gCsr_ctRecDat_Msg6C1SendToEvision7.tCsrRng_boPin184Fault,
        (TVoid*)&gCsr_tMsg6C1SendToEvision7.boPin184Fault, (TVoid*)&mCsr_tOldDat_tMsg6C1SendToEvision7.boPin184Fault, &mCsr_aeRecErr_tMsg6C1SendToEvision7[62],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg6C1SendToEvision7.tCsrInfo_boPin187Fault, (TVoid*)&gCsr_ctRecDat_Msg6C1SendToEvision7.tCsrRng_boPin187Fault,
        (TVoid*)&gCsr_tMsg6C1SendToEvision7.boPin187Fault, (TVoid*)&mCsr_tOldDat_tMsg6C1SendToEvision7.boPin187Fault, &mCsr_aeRecErr_tMsg6C1SendToEvision7[63],
        NULL, NULL
    }
};

static const TCanSigRecRoot mCsr_ctRoot_Msg6C1SendToEvision7 =
{
    "Msg6C1SendToEvision7",                                 //!< achName - [STR] Name Msg6C1SendToEvision7
    8,                                                      //!< u8Dlc - [NUM] DLC of Can Message
    0xff,                                                   //!< u8CanByteDflt - [NUM] CAN Message default
    DATA_INTEL,                                             //!< eCanFormat - [NUM] CAN Format
    0xFF,                                                   //!< u8MasterReceiveId - [NUM] Receive Id
    64,                                                     //!< u8RecCnt - [NUM] Count of Recorde
    &mCsr_actRecDat_tMsg6C1SendToEvision7[0],               //!< ptRec - [NUM] Pointer to Record Values
    34,                                                     //!< u16RecNo - [NUM] Record Number
    CSR_STAMP                                               //!< u16Stamp - [NUM] Safety stamp
};

TCanSigRecMsg6C1SendToEvision7 gCsr_tMsg6C1SendToEvision7 =
{
    &mCsr_ctRoot_Msg6C1SendToEvision7,                      //!< *cptRoot [POI] Root connection
    FALSE,                                                  //!< boPin230Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin243Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin244Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin245Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin256Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin257Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin258Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin103Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin127Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin104Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin128Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin105Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin129Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin106Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin130Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin107Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin131Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin108Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin132Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin109Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin133Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin110Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin134Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin111Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin135Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin112Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin136Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin113Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin137Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin114Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin138Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin115Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin139Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin116Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin140Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin117Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin141Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin122Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin146Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin123Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin147Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin124Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin148Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin153Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin177Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin156Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin180Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin159Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin183Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin186Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin162Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin189Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin165Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin192Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin168Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin195Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin171Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin154Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin178Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin157Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin181Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin160Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin184Fault [[-]] for the Neotec diag pages
    FALSE                                                   //!< boPin187Fault [[-]] for the Neotec diag pages
};

const TCanSigRecVal_Msg7C1SendToEvision7 gCsr_ctRecDat_Msg7C1SendToEvision7 =
{
    //!< Pin163Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 0, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin190Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 1, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin166Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 2, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin193Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 3, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin169Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 4, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin196Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 5, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin172Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 6, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin101Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 7, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin125Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 8, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin150Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 9, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin174Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 10, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin102Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 11, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin126Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 12, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin151Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 13, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin175Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 14, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin149Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 15, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin173Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 16, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin152Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 17, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin176Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 18, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin155Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 19, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin179Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 20, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin158Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 21, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin182Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 22, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin251Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 23, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin238Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 24, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin252Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 25, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin239Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 26, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin253Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 27, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin240Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 28, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin254Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 29, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin241Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 30, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin161Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 31, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin185Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 32, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin188Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 33, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin164Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 34, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin191Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 35, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin167Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 36, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin194Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 37, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Pin170Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 38, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE }
};

static ESigSta mCsr_aeRecErr_tMsg7C1SendToEvision7[39] =
{
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY
};

static TCanSigRecOldValMsg7C1SendToEvision7 mCsr_tOldDat_tMsg7C1SendToEvision7 =
{
    FALSE,                                                  //!< boPin163Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin190Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin166Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin193Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin169Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin196Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin172Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin101Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin125Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin150Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin174Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin102Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin126Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin151Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin175Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin149Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin173Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin152Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin176Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin155Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin179Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin158Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin182Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin251Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin238Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin252Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin239Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin253Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin240Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin254Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin241Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin161Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin185Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin188Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin164Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin191Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin167Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin194Fault [[-]] for the Neotec diag pages
    FALSE                                                   //!< boPin170Fault [[-]] for the Neotec diag pages
};

extern TCanSigRecMsg7C1SendToEvision7 gCsr_tMsg7C1SendToEvision7;
static const TRecDat mCsr_actRecDat_tMsg7C1SendToEvision7[39] =
{
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg7C1SendToEvision7.tCsrInfo_boPin163Fault, (TVoid*)&gCsr_ctRecDat_Msg7C1SendToEvision7.tCsrRng_boPin163Fault,
        (TVoid*)&gCsr_tMsg7C1SendToEvision7.boPin163Fault, (TVoid*)&mCsr_tOldDat_tMsg7C1SendToEvision7.boPin163Fault, &mCsr_aeRecErr_tMsg7C1SendToEvision7[0],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg7C1SendToEvision7.tCsrInfo_boPin190Fault, (TVoid*)&gCsr_ctRecDat_Msg7C1SendToEvision7.tCsrRng_boPin190Fault,
        (TVoid*)&gCsr_tMsg7C1SendToEvision7.boPin190Fault, (TVoid*)&mCsr_tOldDat_tMsg7C1SendToEvision7.boPin190Fault, &mCsr_aeRecErr_tMsg7C1SendToEvision7[1],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg7C1SendToEvision7.tCsrInfo_boPin166Fault, (TVoid*)&gCsr_ctRecDat_Msg7C1SendToEvision7.tCsrRng_boPin166Fault,
        (TVoid*)&gCsr_tMsg7C1SendToEvision7.boPin166Fault, (TVoid*)&mCsr_tOldDat_tMsg7C1SendToEvision7.boPin166Fault, &mCsr_aeRecErr_tMsg7C1SendToEvision7[2],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg7C1SendToEvision7.tCsrInfo_boPin193Fault, (TVoid*)&gCsr_ctRecDat_Msg7C1SendToEvision7.tCsrRng_boPin193Fault,
        (TVoid*)&gCsr_tMsg7C1SendToEvision7.boPin193Fault, (TVoid*)&mCsr_tOldDat_tMsg7C1SendToEvision7.boPin193Fault, &mCsr_aeRecErr_tMsg7C1SendToEvision7[3],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg7C1SendToEvision7.tCsrInfo_boPin169Fault, (TVoid*)&gCsr_ctRecDat_Msg7C1SendToEvision7.tCsrRng_boPin169Fault,
        (TVoid*)&gCsr_tMsg7C1SendToEvision7.boPin169Fault, (TVoid*)&mCsr_tOldDat_tMsg7C1SendToEvision7.boPin169Fault, &mCsr_aeRecErr_tMsg7C1SendToEvision7[4],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg7C1SendToEvision7.tCsrInfo_boPin196Fault, (TVoid*)&gCsr_ctRecDat_Msg7C1SendToEvision7.tCsrRng_boPin196Fault,
        (TVoid*)&gCsr_tMsg7C1SendToEvision7.boPin196Fault, (TVoid*)&mCsr_tOldDat_tMsg7C1SendToEvision7.boPin196Fault, &mCsr_aeRecErr_tMsg7C1SendToEvision7[5],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg7C1SendToEvision7.tCsrInfo_boPin172Fault, (TVoid*)&gCsr_ctRecDat_Msg7C1SendToEvision7.tCsrRng_boPin172Fault,
        (TVoid*)&gCsr_tMsg7C1SendToEvision7.boPin172Fault, (TVoid*)&mCsr_tOldDat_tMsg7C1SendToEvision7.boPin172Fault, &mCsr_aeRecErr_tMsg7C1SendToEvision7[6],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg7C1SendToEvision7.tCsrInfo_boPin101Fault, (TVoid*)&gCsr_ctRecDat_Msg7C1SendToEvision7.tCsrRng_boPin101Fault,
        (TVoid*)&gCsr_tMsg7C1SendToEvision7.boPin101Fault, (TVoid*)&mCsr_tOldDat_tMsg7C1SendToEvision7.boPin101Fault, &mCsr_aeRecErr_tMsg7C1SendToEvision7[7],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg7C1SendToEvision7.tCsrInfo_boPin125Fault, (TVoid*)&gCsr_ctRecDat_Msg7C1SendToEvision7.tCsrRng_boPin125Fault,
        (TVoid*)&gCsr_tMsg7C1SendToEvision7.boPin125Fault, (TVoid*)&mCsr_tOldDat_tMsg7C1SendToEvision7.boPin125Fault, &mCsr_aeRecErr_tMsg7C1SendToEvision7[8],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg7C1SendToEvision7.tCsrInfo_boPin150Fault, (TVoid*)&gCsr_ctRecDat_Msg7C1SendToEvision7.tCsrRng_boPin150Fault,
        (TVoid*)&gCsr_tMsg7C1SendToEvision7.boPin150Fault, (TVoid*)&mCsr_tOldDat_tMsg7C1SendToEvision7.boPin150Fault, &mCsr_aeRecErr_tMsg7C1SendToEvision7[9],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg7C1SendToEvision7.tCsrInfo_boPin174Fault, (TVoid*)&gCsr_ctRecDat_Msg7C1SendToEvision7.tCsrRng_boPin174Fault,
        (TVoid*)&gCsr_tMsg7C1SendToEvision7.boPin174Fault, (TVoid*)&mCsr_tOldDat_tMsg7C1SendToEvision7.boPin174Fault, &mCsr_aeRecErr_tMsg7C1SendToEvision7[10],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg7C1SendToEvision7.tCsrInfo_boPin102Fault, (TVoid*)&gCsr_ctRecDat_Msg7C1SendToEvision7.tCsrRng_boPin102Fault,
        (TVoid*)&gCsr_tMsg7C1SendToEvision7.boPin102Fault, (TVoid*)&mCsr_tOldDat_tMsg7C1SendToEvision7.boPin102Fault, &mCsr_aeRecErr_tMsg7C1SendToEvision7[11],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg7C1SendToEvision7.tCsrInfo_boPin126Fault, (TVoid*)&gCsr_ctRecDat_Msg7C1SendToEvision7.tCsrRng_boPin126Fault,
        (TVoid*)&gCsr_tMsg7C1SendToEvision7.boPin126Fault, (TVoid*)&mCsr_tOldDat_tMsg7C1SendToEvision7.boPin126Fault, &mCsr_aeRecErr_tMsg7C1SendToEvision7[12],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg7C1SendToEvision7.tCsrInfo_boPin151Fault, (TVoid*)&gCsr_ctRecDat_Msg7C1SendToEvision7.tCsrRng_boPin151Fault,
        (TVoid*)&gCsr_tMsg7C1SendToEvision7.boPin151Fault, (TVoid*)&mCsr_tOldDat_tMsg7C1SendToEvision7.boPin151Fault, &mCsr_aeRecErr_tMsg7C1SendToEvision7[13],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg7C1SendToEvision7.tCsrInfo_boPin175Fault, (TVoid*)&gCsr_ctRecDat_Msg7C1SendToEvision7.tCsrRng_boPin175Fault,
        (TVoid*)&gCsr_tMsg7C1SendToEvision7.boPin175Fault, (TVoid*)&mCsr_tOldDat_tMsg7C1SendToEvision7.boPin175Fault, &mCsr_aeRecErr_tMsg7C1SendToEvision7[14],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg7C1SendToEvision7.tCsrInfo_boPin149Fault, (TVoid*)&gCsr_ctRecDat_Msg7C1SendToEvision7.tCsrRng_boPin149Fault,
        (TVoid*)&gCsr_tMsg7C1SendToEvision7.boPin149Fault, (TVoid*)&mCsr_tOldDat_tMsg7C1SendToEvision7.boPin149Fault, &mCsr_aeRecErr_tMsg7C1SendToEvision7[15],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg7C1SendToEvision7.tCsrInfo_boPin173Fault, (TVoid*)&gCsr_ctRecDat_Msg7C1SendToEvision7.tCsrRng_boPin173Fault,
        (TVoid*)&gCsr_tMsg7C1SendToEvision7.boPin173Fault, (TVoid*)&mCsr_tOldDat_tMsg7C1SendToEvision7.boPin173Fault, &mCsr_aeRecErr_tMsg7C1SendToEvision7[16],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg7C1SendToEvision7.tCsrInfo_boPin152Fault, (TVoid*)&gCsr_ctRecDat_Msg7C1SendToEvision7.tCsrRng_boPin152Fault,
        (TVoid*)&gCsr_tMsg7C1SendToEvision7.boPin152Fault, (TVoid*)&mCsr_tOldDat_tMsg7C1SendToEvision7.boPin152Fault, &mCsr_aeRecErr_tMsg7C1SendToEvision7[17],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg7C1SendToEvision7.tCsrInfo_boPin176Fault, (TVoid*)&gCsr_ctRecDat_Msg7C1SendToEvision7.tCsrRng_boPin176Fault,
        (TVoid*)&gCsr_tMsg7C1SendToEvision7.boPin176Fault, (TVoid*)&mCsr_tOldDat_tMsg7C1SendToEvision7.boPin176Fault, &mCsr_aeRecErr_tMsg7C1SendToEvision7[18],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg7C1SendToEvision7.tCsrInfo_boPin155Fault, (TVoid*)&gCsr_ctRecDat_Msg7C1SendToEvision7.tCsrRng_boPin155Fault,
        (TVoid*)&gCsr_tMsg7C1SendToEvision7.boPin155Fault, (TVoid*)&mCsr_tOldDat_tMsg7C1SendToEvision7.boPin155Fault, &mCsr_aeRecErr_tMsg7C1SendToEvision7[19],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg7C1SendToEvision7.tCsrInfo_boPin179Fault, (TVoid*)&gCsr_ctRecDat_Msg7C1SendToEvision7.tCsrRng_boPin179Fault,
        (TVoid*)&gCsr_tMsg7C1SendToEvision7.boPin179Fault, (TVoid*)&mCsr_tOldDat_tMsg7C1SendToEvision7.boPin179Fault, &mCsr_aeRecErr_tMsg7C1SendToEvision7[20],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg7C1SendToEvision7.tCsrInfo_boPin158Fault, (TVoid*)&gCsr_ctRecDat_Msg7C1SendToEvision7.tCsrRng_boPin158Fault,
        (TVoid*)&gCsr_tMsg7C1SendToEvision7.boPin158Fault, (TVoid*)&mCsr_tOldDat_tMsg7C1SendToEvision7.boPin158Fault, &mCsr_aeRecErr_tMsg7C1SendToEvision7[21],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg7C1SendToEvision7.tCsrInfo_boPin182Fault, (TVoid*)&gCsr_ctRecDat_Msg7C1SendToEvision7.tCsrRng_boPin182Fault,
        (TVoid*)&gCsr_tMsg7C1SendToEvision7.boPin182Fault, (TVoid*)&mCsr_tOldDat_tMsg7C1SendToEvision7.boPin182Fault, &mCsr_aeRecErr_tMsg7C1SendToEvision7[22],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg7C1SendToEvision7.tCsrInfo_boPin251Fault, (TVoid*)&gCsr_ctRecDat_Msg7C1SendToEvision7.tCsrRng_boPin251Fault,
        (TVoid*)&gCsr_tMsg7C1SendToEvision7.boPin251Fault, (TVoid*)&mCsr_tOldDat_tMsg7C1SendToEvision7.boPin251Fault, &mCsr_aeRecErr_tMsg7C1SendToEvision7[23],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg7C1SendToEvision7.tCsrInfo_boPin238Fault, (TVoid*)&gCsr_ctRecDat_Msg7C1SendToEvision7.tCsrRng_boPin238Fault,
        (TVoid*)&gCsr_tMsg7C1SendToEvision7.boPin238Fault, (TVoid*)&mCsr_tOldDat_tMsg7C1SendToEvision7.boPin238Fault, &mCsr_aeRecErr_tMsg7C1SendToEvision7[24],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg7C1SendToEvision7.tCsrInfo_boPin252Fault, (TVoid*)&gCsr_ctRecDat_Msg7C1SendToEvision7.tCsrRng_boPin252Fault,
        (TVoid*)&gCsr_tMsg7C1SendToEvision7.boPin252Fault, (TVoid*)&mCsr_tOldDat_tMsg7C1SendToEvision7.boPin252Fault, &mCsr_aeRecErr_tMsg7C1SendToEvision7[25],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg7C1SendToEvision7.tCsrInfo_boPin239Fault, (TVoid*)&gCsr_ctRecDat_Msg7C1SendToEvision7.tCsrRng_boPin239Fault,
        (TVoid*)&gCsr_tMsg7C1SendToEvision7.boPin239Fault, (TVoid*)&mCsr_tOldDat_tMsg7C1SendToEvision7.boPin239Fault, &mCsr_aeRecErr_tMsg7C1SendToEvision7[26],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg7C1SendToEvision7.tCsrInfo_boPin253Fault, (TVoid*)&gCsr_ctRecDat_Msg7C1SendToEvision7.tCsrRng_boPin253Fault,
        (TVoid*)&gCsr_tMsg7C1SendToEvision7.boPin253Fault, (TVoid*)&mCsr_tOldDat_tMsg7C1SendToEvision7.boPin253Fault, &mCsr_aeRecErr_tMsg7C1SendToEvision7[27],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg7C1SendToEvision7.tCsrInfo_boPin240Fault, (TVoid*)&gCsr_ctRecDat_Msg7C1SendToEvision7.tCsrRng_boPin240Fault,
        (TVoid*)&gCsr_tMsg7C1SendToEvision7.boPin240Fault, (TVoid*)&mCsr_tOldDat_tMsg7C1SendToEvision7.boPin240Fault, &mCsr_aeRecErr_tMsg7C1SendToEvision7[28],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg7C1SendToEvision7.tCsrInfo_boPin254Fault, (TVoid*)&gCsr_ctRecDat_Msg7C1SendToEvision7.tCsrRng_boPin254Fault,
        (TVoid*)&gCsr_tMsg7C1SendToEvision7.boPin254Fault, (TVoid*)&mCsr_tOldDat_tMsg7C1SendToEvision7.boPin254Fault, &mCsr_aeRecErr_tMsg7C1SendToEvision7[29],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg7C1SendToEvision7.tCsrInfo_boPin241Fault, (TVoid*)&gCsr_ctRecDat_Msg7C1SendToEvision7.tCsrRng_boPin241Fault,
        (TVoid*)&gCsr_tMsg7C1SendToEvision7.boPin241Fault, (TVoid*)&mCsr_tOldDat_tMsg7C1SendToEvision7.boPin241Fault, &mCsr_aeRecErr_tMsg7C1SendToEvision7[30],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg7C1SendToEvision7.tCsrInfo_boPin161Fault, (TVoid*)&gCsr_ctRecDat_Msg7C1SendToEvision7.tCsrRng_boPin161Fault,
        (TVoid*)&gCsr_tMsg7C1SendToEvision7.boPin161Fault, (TVoid*)&mCsr_tOldDat_tMsg7C1SendToEvision7.boPin161Fault, &mCsr_aeRecErr_tMsg7C1SendToEvision7[31],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg7C1SendToEvision7.tCsrInfo_boPin185Fault, (TVoid*)&gCsr_ctRecDat_Msg7C1SendToEvision7.tCsrRng_boPin185Fault,
        (TVoid*)&gCsr_tMsg7C1SendToEvision7.boPin185Fault, (TVoid*)&mCsr_tOldDat_tMsg7C1SendToEvision7.boPin185Fault, &mCsr_aeRecErr_tMsg7C1SendToEvision7[32],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg7C1SendToEvision7.tCsrInfo_boPin188Fault, (TVoid*)&gCsr_ctRecDat_Msg7C1SendToEvision7.tCsrRng_boPin188Fault,
        (TVoid*)&gCsr_tMsg7C1SendToEvision7.boPin188Fault, (TVoid*)&mCsr_tOldDat_tMsg7C1SendToEvision7.boPin188Fault, &mCsr_aeRecErr_tMsg7C1SendToEvision7[33],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg7C1SendToEvision7.tCsrInfo_boPin164Fault, (TVoid*)&gCsr_ctRecDat_Msg7C1SendToEvision7.tCsrRng_boPin164Fault,
        (TVoid*)&gCsr_tMsg7C1SendToEvision7.boPin164Fault, (TVoid*)&mCsr_tOldDat_tMsg7C1SendToEvision7.boPin164Fault, &mCsr_aeRecErr_tMsg7C1SendToEvision7[34],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg7C1SendToEvision7.tCsrInfo_boPin191Fault, (TVoid*)&gCsr_ctRecDat_Msg7C1SendToEvision7.tCsrRng_boPin191Fault,
        (TVoid*)&gCsr_tMsg7C1SendToEvision7.boPin191Fault, (TVoid*)&mCsr_tOldDat_tMsg7C1SendToEvision7.boPin191Fault, &mCsr_aeRecErr_tMsg7C1SendToEvision7[35],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg7C1SendToEvision7.tCsrInfo_boPin167Fault, (TVoid*)&gCsr_ctRecDat_Msg7C1SendToEvision7.tCsrRng_boPin167Fault,
        (TVoid*)&gCsr_tMsg7C1SendToEvision7.boPin167Fault, (TVoid*)&mCsr_tOldDat_tMsg7C1SendToEvision7.boPin167Fault, &mCsr_aeRecErr_tMsg7C1SendToEvision7[36],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg7C1SendToEvision7.tCsrInfo_boPin194Fault, (TVoid*)&gCsr_ctRecDat_Msg7C1SendToEvision7.tCsrRng_boPin194Fault,
        (TVoid*)&gCsr_tMsg7C1SendToEvision7.boPin194Fault, (TVoid*)&mCsr_tOldDat_tMsg7C1SendToEvision7.boPin194Fault, &mCsr_aeRecErr_tMsg7C1SendToEvision7[37],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg7C1SendToEvision7.tCsrInfo_boPin170Fault, (TVoid*)&gCsr_ctRecDat_Msg7C1SendToEvision7.tCsrRng_boPin170Fault,
        (TVoid*)&gCsr_tMsg7C1SendToEvision7.boPin170Fault, (TVoid*)&mCsr_tOldDat_tMsg7C1SendToEvision7.boPin170Fault, &mCsr_aeRecErr_tMsg7C1SendToEvision7[38],
        NULL, NULL
    }
};

static const TCanSigRecRoot mCsr_ctRoot_Msg7C1SendToEvision7 =
{
    "Msg7C1SendToEvision7",                                 //!< achName - [STR] Name Msg7C1SendToEvision7
    8,                                                      //!< u8Dlc - [NUM] DLC of Can Message
    0xff,                                                   //!< u8CanByteDflt - [NUM] CAN Message default
    DATA_INTEL,                                             //!< eCanFormat - [NUM] CAN Format
    0xFF,                                                   //!< u8MasterReceiveId - [NUM] Receive Id
    39,                                                     //!< u8RecCnt - [NUM] Count of Recorde
    &mCsr_actRecDat_tMsg7C1SendToEvision7[0],               //!< ptRec - [NUM] Pointer to Record Values
    35,                                                     //!< u16RecNo - [NUM] Record Number
    CSR_STAMP                                               //!< u16Stamp - [NUM] Safety stamp
};

TCanSigRecMsg7C1SendToEvision7 gCsr_tMsg7C1SendToEvision7 =
{
    &mCsr_ctRoot_Msg7C1SendToEvision7,                      //!< *cptRoot [POI] Root connection
    FALSE,                                                  //!< boPin163Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin190Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin166Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin193Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin169Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin196Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin172Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin101Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin125Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin150Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin174Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin102Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin126Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin151Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin175Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin149Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin173Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin152Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin176Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin155Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin179Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin158Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin182Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin251Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin238Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin252Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin239Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin253Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin240Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin254Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin241Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin161Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin185Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin188Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin164Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin191Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin167Fault [[-]] for the Neotec diag pages
    FALSE,                                                  //!< boPin194Fault [[-]] for the Neotec diag pages
    FALSE                                                   //!< boPin170Fault [[-]] for the Neotec diag pages
};

const TCanSigRecVal_Msg8C1SendToEvision7 gCsr_ctRecDat_Msg8C1SendToEvision7 =
{
    //!< gPvgDeltaArmVoltage
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TUINT16, TUINT16, 0, 16, 0, 0, 1, 1 }, 
     { U16_MIN, U16_MAX, 0, 0 },
    //!< gPvgArrowArmVoltage
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TUINT16, TUINT16, 16, 16, 0, 0, 1, 1 }, 
     { U16_MIN, U16_MAX, 0, 0 },
    //!< gPvgTelescopeArmVoltage
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TUINT16, TUINT16, 32, 16, 0, 0, 1, 1 }, 
     { U16_MIN, U16_MAX, 0, 0 },
    //!< gPvgEvTorVoltage
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TUINT16, TUINT16, 48, 16, 0, 0, 1, 1 }, 
     { U16_MIN, U16_MAX, 0, 0 }
};

static ESigSta mCsr_aeRecErr_tMsg8C1SendToEvision7[4] =
{
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY
};

static TCanSigRecOldValMsg8C1SendToEvision7 mCsr_tOldDat_tMsg8C1SendToEvision7 =
{
    0,                                                      //!< u16gPvgDeltaArmVoltage [[-]] new signal
    0,                                                      //!< u16gPvgArrowArmVoltage [[-]] new signal
    0,                                                      //!< u16gPvgTelescopeArmVoltage [[-]] new signal
    0                                                       //!< u16gPvgEvTorVoltage [[-]] new signal
};

extern TCanSigRecMsg8C1SendToEvision7 gCsr_tMsg8C1SendToEvision7;
static const TRecDat mCsr_actRecDat_tMsg8C1SendToEvision7[4] =
{
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg8C1SendToEvision7.tCsrInfo_u16gPvgDeltaArmVoltage, (TVoid*)&gCsr_ctRecDat_Msg8C1SendToEvision7.tCsrRng_u16gPvgDeltaArmVoltage,
        (TVoid*)&gCsr_tMsg8C1SendToEvision7.u16gPvgDeltaArmVoltage, (TVoid*)&mCsr_tOldDat_tMsg8C1SendToEvision7.u16gPvgDeltaArmVoltage, &mCsr_aeRecErr_tMsg8C1SendToEvision7[0],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg8C1SendToEvision7.tCsrInfo_u16gPvgArrowArmVoltage, (TVoid*)&gCsr_ctRecDat_Msg8C1SendToEvision7.tCsrRng_u16gPvgArrowArmVoltage,
        (TVoid*)&gCsr_tMsg8C1SendToEvision7.u16gPvgArrowArmVoltage, (TVoid*)&mCsr_tOldDat_tMsg8C1SendToEvision7.u16gPvgArrowArmVoltage, &mCsr_aeRecErr_tMsg8C1SendToEvision7[1],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg8C1SendToEvision7.tCsrInfo_u16gPvgTelescopeArmVoltage, (TVoid*)&gCsr_ctRecDat_Msg8C1SendToEvision7.tCsrRng_u16gPvgTelescopeArmVoltage,
        (TVoid*)&gCsr_tMsg8C1SendToEvision7.u16gPvgTelescopeArmVoltage, (TVoid*)&mCsr_tOldDat_tMsg8C1SendToEvision7.u16gPvgTelescopeArmVoltage, &mCsr_aeRecErr_tMsg8C1SendToEvision7[2],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg8C1SendToEvision7.tCsrInfo_u16gPvgEvTorVoltage, (TVoid*)&gCsr_ctRecDat_Msg8C1SendToEvision7.tCsrRng_u16gPvgEvTorVoltage,
        (TVoid*)&gCsr_tMsg8C1SendToEvision7.u16gPvgEvTorVoltage, (TVoid*)&mCsr_tOldDat_tMsg8C1SendToEvision7.u16gPvgEvTorVoltage, &mCsr_aeRecErr_tMsg8C1SendToEvision7[3],
        NULL, NULL
    }
};

static const TCanSigRecRoot mCsr_ctRoot_Msg8C1SendToEvision7 =
{
    "Msg8C1SendToEvision7",                                 //!< achName - [STR] Name Msg8C1SendToEvision7
    8,                                                      //!< u8Dlc - [NUM] DLC of Can Message
    0xff,                                                   //!< u8CanByteDflt - [NUM] CAN Message default
    DATA_INTEL,                                             //!< eCanFormat - [NUM] CAN Format
    0xFF,                                                   //!< u8MasterReceiveId - [NUM] Receive Id
    4,                                                      //!< u8RecCnt - [NUM] Count of Recorde
    &mCsr_actRecDat_tMsg8C1SendToEvision7[0],               //!< ptRec - [NUM] Pointer to Record Values
    36,                                                     //!< u16RecNo - [NUM] Record Number
    CSR_STAMP                                               //!< u16Stamp - [NUM] Safety stamp
};

TCanSigRecMsg8C1SendToEvision7 gCsr_tMsg8C1SendToEvision7 =
{
    &mCsr_ctRoot_Msg8C1SendToEvision7,                      //!< *cptRoot [POI] Root connection
    (((0 * 1)/1)+0),                                        //!< u16gPvgDeltaArmVoltage [[-]] new signal
    (((0 * 1)/1)+0),                                        //!< u16gPvgArrowArmVoltage [[-]] new signal
    (((0 * 1)/1)+0),                                        //!< u16gPvgTelescopeArmVoltage [[-]] new signal
    (((0 * 1)/1)+0)                                         //!< u16gPvgEvTorVoltage [[-]] new signal
};

const TCanSigRecVal_Msg9C1SendToEvision7 gCsr_ctRecDat_Msg9C1SendToEvision7 =
{
    //!< gPendularMoveUp
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 0, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gPendularMoveDown
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 1, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gBasketRotCtClockWiseMove
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 2, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gBasketRtClockWiseMove
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 3, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gBasketInclinaisonMoveUp
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 4, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gBasketInclinaisonMoveDown
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 5, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gFuelLow
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 6, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gDeltaArmAngleValue
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TINT16, TINT16, 16, 16, 0, 0, 1, 1 }, 
     { I16_MIN, I16_MAX, 0, 0 },
    //!< gArrowArmAngleValue
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TINT16, TINT16, 32, 16, 0, 0, 1, 1 }, 
     { I16_MIN, I16_MAX, 0, 0 },
    //!< gTelescopePositionValue
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TINT16, TINT16, 48, 16, 0, 0, 1, 1 }, 
     { I16_MIN, I16_MAX, 0, 0 }
};

static ESigSta mCsr_aeRecErr_tMsg9C1SendToEvision7[10] =
{
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY
};

static TCanSigRecOldValMsg9C1SendToEvision7 mCsr_tOldDat_tMsg9C1SendToEvision7 =
{
    FALSE,                                                  //!< bogPendularMoveUp [[-]] new signal
    FALSE,                                                  //!< bogPendularMoveDown [[-]] new signal
    FALSE,                                                  //!< bogBasketRotCtClockWiseMove [[-]] new signal
    FALSE,                                                  //!< bogBasketRtClockWiseMove [[-]] new signal
    FALSE,                                                  //!< bogBasketInclinaisonMoveUp [[-]] new signal
    FALSE,                                                  //!< bogBasketInclinaisonMoveDown [[-]] new signal
    FALSE,                                                  //!< bogFuelLow [[-]] new signal
    0,                                                      //!< i16gDeltaArmAngleValue [[-]] new signal
    0,                                                      //!< i16gArrowArmAngleValue [[-]] new signal
    0                                                       //!< i16gTelescopePositionValue [[-]] new signal
};

extern TCanSigRecMsg9C1SendToEvision7 gCsr_tMsg9C1SendToEvision7;
static const TRecDat mCsr_actRecDat_tMsg9C1SendToEvision7[10] =
{
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg9C1SendToEvision7.tCsrInfo_bogPendularMoveUp, (TVoid*)&gCsr_ctRecDat_Msg9C1SendToEvision7.tCsrRng_bogPendularMoveUp,
        (TVoid*)&gCsr_tMsg9C1SendToEvision7.bogPendularMoveUp, (TVoid*)&mCsr_tOldDat_tMsg9C1SendToEvision7.bogPendularMoveUp, &mCsr_aeRecErr_tMsg9C1SendToEvision7[0],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg9C1SendToEvision7.tCsrInfo_bogPendularMoveDown, (TVoid*)&gCsr_ctRecDat_Msg9C1SendToEvision7.tCsrRng_bogPendularMoveDown,
        (TVoid*)&gCsr_tMsg9C1SendToEvision7.bogPendularMoveDown, (TVoid*)&mCsr_tOldDat_tMsg9C1SendToEvision7.bogPendularMoveDown, &mCsr_aeRecErr_tMsg9C1SendToEvision7[1],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg9C1SendToEvision7.tCsrInfo_bogBasketRotCtClockWiseMove, (TVoid*)&gCsr_ctRecDat_Msg9C1SendToEvision7.tCsrRng_bogBasketRotCtClockWiseMove,
        (TVoid*)&gCsr_tMsg9C1SendToEvision7.bogBasketRotCtClockWiseMove, (TVoid*)&mCsr_tOldDat_tMsg9C1SendToEvision7.bogBasketRotCtClockWiseMove, &mCsr_aeRecErr_tMsg9C1SendToEvision7[2],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg9C1SendToEvision7.tCsrInfo_bogBasketRtClockWiseMove, (TVoid*)&gCsr_ctRecDat_Msg9C1SendToEvision7.tCsrRng_bogBasketRtClockWiseMove,
        (TVoid*)&gCsr_tMsg9C1SendToEvision7.bogBasketRtClockWiseMove, (TVoid*)&mCsr_tOldDat_tMsg9C1SendToEvision7.bogBasketRtClockWiseMove, &mCsr_aeRecErr_tMsg9C1SendToEvision7[3],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg9C1SendToEvision7.tCsrInfo_bogBasketInclinaisonMoveUp, (TVoid*)&gCsr_ctRecDat_Msg9C1SendToEvision7.tCsrRng_bogBasketInclinaisonMoveUp,
        (TVoid*)&gCsr_tMsg9C1SendToEvision7.bogBasketInclinaisonMoveUp, (TVoid*)&mCsr_tOldDat_tMsg9C1SendToEvision7.bogBasketInclinaisonMoveUp, &mCsr_aeRecErr_tMsg9C1SendToEvision7[4],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg9C1SendToEvision7.tCsrInfo_bogBasketInclinaisonMoveDown, (TVoid*)&gCsr_ctRecDat_Msg9C1SendToEvision7.tCsrRng_bogBasketInclinaisonMoveDown,
        (TVoid*)&gCsr_tMsg9C1SendToEvision7.bogBasketInclinaisonMoveDown, (TVoid*)&mCsr_tOldDat_tMsg9C1SendToEvision7.bogBasketInclinaisonMoveDown, &mCsr_aeRecErr_tMsg9C1SendToEvision7[5],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg9C1SendToEvision7.tCsrInfo_bogFuelLow, (TVoid*)&gCsr_ctRecDat_Msg9C1SendToEvision7.tCsrRng_bogFuelLow,
        (TVoid*)&gCsr_tMsg9C1SendToEvision7.bogFuelLow, (TVoid*)&mCsr_tOldDat_tMsg9C1SendToEvision7.bogFuelLow, &mCsr_aeRecErr_tMsg9C1SendToEvision7[6],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg9C1SendToEvision7.tCsrInfo_i16gDeltaArmAngleValue, (TVoid*)&gCsr_ctRecDat_Msg9C1SendToEvision7.tCsrRng_i16gDeltaArmAngleValue,
        (TVoid*)&gCsr_tMsg9C1SendToEvision7.i16gDeltaArmAngleValue, (TVoid*)&mCsr_tOldDat_tMsg9C1SendToEvision7.i16gDeltaArmAngleValue, &mCsr_aeRecErr_tMsg9C1SendToEvision7[7],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg9C1SendToEvision7.tCsrInfo_i16gArrowArmAngleValue, (TVoid*)&gCsr_ctRecDat_Msg9C1SendToEvision7.tCsrRng_i16gArrowArmAngleValue,
        (TVoid*)&gCsr_tMsg9C1SendToEvision7.i16gArrowArmAngleValue, (TVoid*)&mCsr_tOldDat_tMsg9C1SendToEvision7.i16gArrowArmAngleValue, &mCsr_aeRecErr_tMsg9C1SendToEvision7[8],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg9C1SendToEvision7.tCsrInfo_i16gTelescopePositionValue, (TVoid*)&gCsr_ctRecDat_Msg9C1SendToEvision7.tCsrRng_i16gTelescopePositionValue,
        (TVoid*)&gCsr_tMsg9C1SendToEvision7.i16gTelescopePositionValue, (TVoid*)&mCsr_tOldDat_tMsg9C1SendToEvision7.i16gTelescopePositionValue, &mCsr_aeRecErr_tMsg9C1SendToEvision7[9],
        NULL, NULL
    }
};

static const TCanSigRecRoot mCsr_ctRoot_Msg9C1SendToEvision7 =
{
    "Msg9C1SendToEvision7",                                 //!< achName - [STR] Name Msg9C1SendToEvision7
    8,                                                      //!< u8Dlc - [NUM] DLC of Can Message
    0xff,                                                   //!< u8CanByteDflt - [NUM] CAN Message default
    DATA_INTEL,                                             //!< eCanFormat - [NUM] CAN Format
    0xFF,                                                   //!< u8MasterReceiveId - [NUM] Receive Id
    10,                                                     //!< u8RecCnt - [NUM] Count of Recorde
    &mCsr_actRecDat_tMsg9C1SendToEvision7[0],               //!< ptRec - [NUM] Pointer to Record Values
    37,                                                     //!< u16RecNo - [NUM] Record Number
    CSR_STAMP                                               //!< u16Stamp - [NUM] Safety stamp
};

TCanSigRecMsg9C1SendToEvision7 gCsr_tMsg9C1SendToEvision7 =
{
    &mCsr_ctRoot_Msg9C1SendToEvision7,                      //!< *cptRoot [POI] Root connection
    FALSE,                                                  //!< bogPendularMoveUp [[-]] new signal
    FALSE,                                                  //!< bogPendularMoveDown [[-]] new signal
    FALSE,                                                  //!< bogBasketRotCtClockWiseMove [[-]] new signal
    FALSE,                                                  //!< bogBasketRtClockWiseMove [[-]] new signal
    FALSE,                                                  //!< bogBasketInclinaisonMoveUp [[-]] new signal
    FALSE,                                                  //!< bogBasketInclinaisonMoveDown [[-]] new signal
    FALSE,                                                  //!< bogFuelLow [[-]] new signal
    (((0 * 1)/1)+0),                                        //!< i16gDeltaArmAngleValue [[-]] new signal
    (((0 * 1)/1)+0),                                        //!< i16gArrowArmAngleValue [[-]] new signal
    (((0 * 1)/1)+0)                                         //!< i16gTelescopePositionValue [[-]] new signal
};

const TCanSigRecVal_Msg10C1SendToEvision7 gCsr_ctRecDat_Msg10C1SendToEvision7 =
{
    //!< gTTC510Version_Major
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TUINT8, TUINT8, 0, 8, 0, 0, 1, 1 }, 
     { U8_MIN, U8_MAX, 0, 0 },
    //!< gTTC510Version_Minor
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TUINT8, TUINT8, 8, 8, 0, 0, 1, 1 }, 
     { U8_MIN, U8_MAX, 0, 0 },
    //!< gTTC510Version_Patch
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TUINT8, TUINT8, 16, 8, 0, 0, 1, 1 }, 
     { U8_MIN, U8_MAX, 0, 0 },
    //!< gTTC510Version_Custom
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TUINT8, TUINT8, 24, 8, 0, 0, 1, 1 }, 
     { U8_MIN, U8_MAX, 0, 0 },
    //!< gTTC48XSVersion_Major
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TUINT8, TUINT8, 32, 8, 0, 0, 1, 1 }, 
     { U8_MIN, U8_MAX, 0, 0 },
    //!< gTTC48XSVersion_Minor
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TUINT8, TUINT8, 40, 8, 0, 0, 1, 1 }, 
     { U8_MIN, U8_MAX, 0, 0 },
    //!< gTTC48XSVersion_Patch
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TUINT8, TUINT8, 48, 8, 0, 0, 1, 1 }, 
     { U8_MIN, U8_MAX, 0, 0 },
    //!< gTTC48XSVersion_Custom
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TUINT8, TUINT8, 56, 8, 0, 0, 1, 1 }, 
     { U8_MIN, U8_MAX, 0, 0 }
};

static ESigSta mCsr_aeRecErr_tMsg10C1SendToEvision7[8] =
{
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY
};

static TCanSigRecOldValMsg10C1SendToEvision7 mCsr_tOldDat_tMsg10C1SendToEvision7 =
{
    0,                                                      //!< u8gTTC510Version_Major [[-]] Program Version Major C1 TTC510
    0,                                                      //!< u8gTTC510Version_Minor [[-]] Program Version Minor C1 TTC510
    0,                                                      //!< u8gTTC510Version_Patch [[-]] Program Version Patch C1 TTC510
    0,                                                      //!< u8gTTC510Version_Custom [[-]] Program Version Custom C1 TTC510
    0,                                                      //!< u8gTTC48XSVersion_Major [[-]] Program Version Major TTC48XS
    0,                                                      //!< u8gTTC48XSVersion_Minor [[-]] Program Version MinorTTC48XS
    0,                                                      //!< u8gTTC48XSVersion_Patch [[-]] Program Version Patch TTC48XS
    0                                                       //!< u8gTTC48XSVersion_Custom [[-]] Program Version Custom TTC48XS
};

extern TCanSigRecMsg10C1SendToEvision7 gCsr_tMsg10C1SendToEvision7;
static const TRecDat mCsr_actRecDat_tMsg10C1SendToEvision7[8] =
{
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg10C1SendToEvision7.tCsrInfo_u8gTTC510Version_Major, (TVoid*)&gCsr_ctRecDat_Msg10C1SendToEvision7.tCsrRng_u8gTTC510Version_Major,
        (TVoid*)&gCsr_tMsg10C1SendToEvision7.u8gTTC510Version_Major, (TVoid*)&mCsr_tOldDat_tMsg10C1SendToEvision7.u8gTTC510Version_Major, &mCsr_aeRecErr_tMsg10C1SendToEvision7[0],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg10C1SendToEvision7.tCsrInfo_u8gTTC510Version_Minor, (TVoid*)&gCsr_ctRecDat_Msg10C1SendToEvision7.tCsrRng_u8gTTC510Version_Minor,
        (TVoid*)&gCsr_tMsg10C1SendToEvision7.u8gTTC510Version_Minor, (TVoid*)&mCsr_tOldDat_tMsg10C1SendToEvision7.u8gTTC510Version_Minor, &mCsr_aeRecErr_tMsg10C1SendToEvision7[1],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg10C1SendToEvision7.tCsrInfo_u8gTTC510Version_Patch, (TVoid*)&gCsr_ctRecDat_Msg10C1SendToEvision7.tCsrRng_u8gTTC510Version_Patch,
        (TVoid*)&gCsr_tMsg10C1SendToEvision7.u8gTTC510Version_Patch, (TVoid*)&mCsr_tOldDat_tMsg10C1SendToEvision7.u8gTTC510Version_Patch, &mCsr_aeRecErr_tMsg10C1SendToEvision7[2],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg10C1SendToEvision7.tCsrInfo_u8gTTC510Version_Custom, (TVoid*)&gCsr_ctRecDat_Msg10C1SendToEvision7.tCsrRng_u8gTTC510Version_Custom,
        (TVoid*)&gCsr_tMsg10C1SendToEvision7.u8gTTC510Version_Custom, (TVoid*)&mCsr_tOldDat_tMsg10C1SendToEvision7.u8gTTC510Version_Custom, &mCsr_aeRecErr_tMsg10C1SendToEvision7[3],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg10C1SendToEvision7.tCsrInfo_u8gTTC48XSVersion_Major, (TVoid*)&gCsr_ctRecDat_Msg10C1SendToEvision7.tCsrRng_u8gTTC48XSVersion_Major,
        (TVoid*)&gCsr_tMsg10C1SendToEvision7.u8gTTC48XSVersion_Major, (TVoid*)&mCsr_tOldDat_tMsg10C1SendToEvision7.u8gTTC48XSVersion_Major, &mCsr_aeRecErr_tMsg10C1SendToEvision7[4],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg10C1SendToEvision7.tCsrInfo_u8gTTC48XSVersion_Minor, (TVoid*)&gCsr_ctRecDat_Msg10C1SendToEvision7.tCsrRng_u8gTTC48XSVersion_Minor,
        (TVoid*)&gCsr_tMsg10C1SendToEvision7.u8gTTC48XSVersion_Minor, (TVoid*)&mCsr_tOldDat_tMsg10C1SendToEvision7.u8gTTC48XSVersion_Minor, &mCsr_aeRecErr_tMsg10C1SendToEvision7[5],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg10C1SendToEvision7.tCsrInfo_u8gTTC48XSVersion_Patch, (TVoid*)&gCsr_ctRecDat_Msg10C1SendToEvision7.tCsrRng_u8gTTC48XSVersion_Patch,
        (TVoid*)&gCsr_tMsg10C1SendToEvision7.u8gTTC48XSVersion_Patch, (TVoid*)&mCsr_tOldDat_tMsg10C1SendToEvision7.u8gTTC48XSVersion_Patch, &mCsr_aeRecErr_tMsg10C1SendToEvision7[6],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg10C1SendToEvision7.tCsrInfo_u8gTTC48XSVersion_Custom, (TVoid*)&gCsr_ctRecDat_Msg10C1SendToEvision7.tCsrRng_u8gTTC48XSVersion_Custom,
        (TVoid*)&gCsr_tMsg10C1SendToEvision7.u8gTTC48XSVersion_Custom, (TVoid*)&mCsr_tOldDat_tMsg10C1SendToEvision7.u8gTTC48XSVersion_Custom, &mCsr_aeRecErr_tMsg10C1SendToEvision7[7],
        NULL, NULL
    }
};

static const TCanSigRecRoot mCsr_ctRoot_Msg10C1SendToEvision7 =
{
    "Msg10C1SendToEvision7",                                //!< achName - [STR] Name Msg10C1SendToEvision7
    8,                                                      //!< u8Dlc - [NUM] DLC of Can Message
    0xff,                                                   //!< u8CanByteDflt - [NUM] CAN Message default
    DATA_INTEL,                                             //!< eCanFormat - [NUM] CAN Format
    0xFF,                                                   //!< u8MasterReceiveId - [NUM] Receive Id
    8,                                                      //!< u8RecCnt - [NUM] Count of Recorde
    &mCsr_actRecDat_tMsg10C1SendToEvision7[0],              //!< ptRec - [NUM] Pointer to Record Values
    38,                                                     //!< u16RecNo - [NUM] Record Number
    CSR_STAMP                                               //!< u16Stamp - [NUM] Safety stamp
};

TCanSigRecMsg10C1SendToEvision7 gCsr_tMsg10C1SendToEvision7 =
{
    &mCsr_ctRoot_Msg10C1SendToEvision7,                     //!< *cptRoot [POI] Root connection
    (((0 * 1)/1)+0),                                        //!< u8gTTC510Version_Major [[-]] Program Version Major C1 TTC510
    (((0 * 1)/1)+0),                                        //!< u8gTTC510Version_Minor [[-]] Program Version Minor C1 TTC510
    (((0 * 1)/1)+0),                                        //!< u8gTTC510Version_Patch [[-]] Program Version Patch C1 TTC510
    (((0 * 1)/1)+0),                                        //!< u8gTTC510Version_Custom [[-]] Program Version Custom C1 TTC510
    (((0 * 1)/1)+0),                                        //!< u8gTTC48XSVersion_Major [[-]] Program Version Major TTC48XS
    (((0 * 1)/1)+0),                                        //!< u8gTTC48XSVersion_Minor [[-]] Program Version MinorTTC48XS
    (((0 * 1)/1)+0),                                        //!< u8gTTC48XSVersion_Patch [[-]] Program Version Patch TTC48XS
    (((0 * 1)/1)+0)                                         //!< u8gTTC48XSVersion_Custom [[-]] Program Version Custom TTC48XS
};

const TCanSigRecVal_Msg11C1SendToEvision7 gCsr_ctRecDat_Msg11C1SendToEvision7 =
{
    //!< gScalingJoysTurret
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TINT16, TINT16, 0, 16, 0, 0, 1, 1 }, 
     { I16_MIN, I16_MAX, 0, 0 },
    //!< gScalingJoysDeltaArm
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TINT16, TINT16, 16, 16, 0, 0, 1, 1 }, 
     { I16_MIN, I16_MAX, 0, 0 },
    //!< gScalingJoysArrowArm
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TINT16, TINT16, 32, 16, 0, 0, 1, 1 }, 
     { I16_MIN, I16_MAX, 0, 0 },
    //!< gScalingJoysTelescopeArm
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TINT16, TINT16, 48, 16, 0, 0, 1, 1 }, 
     { I16_MIN, I16_MAX, 0, 0 }
};

static ESigSta mCsr_aeRecErr_tMsg11C1SendToEvision7[4] =
{
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY
};

static TCanSigRecOldValMsg11C1SendToEvision7 mCsr_tOldDat_tMsg11C1SendToEvision7 =
{
    0,                                                      //!< i16gScalingJoysTurret [[-]] new signal
    0,                                                      //!< i16gScalingJoysDeltaArm [[-]] new signal
    0,                                                      //!< i16gScalingJoysArrowArm [[-]] new signal
    0                                                       //!< i16gScalingJoysTelescopeArm [[-]] new signal
};

extern TCanSigRecMsg11C1SendToEvision7 gCsr_tMsg11C1SendToEvision7;
static const TRecDat mCsr_actRecDat_tMsg11C1SendToEvision7[4] =
{
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg11C1SendToEvision7.tCsrInfo_i16gScalingJoysTurret, (TVoid*)&gCsr_ctRecDat_Msg11C1SendToEvision7.tCsrRng_i16gScalingJoysTurret,
        (TVoid*)&gCsr_tMsg11C1SendToEvision7.i16gScalingJoysTurret, (TVoid*)&mCsr_tOldDat_tMsg11C1SendToEvision7.i16gScalingJoysTurret, &mCsr_aeRecErr_tMsg11C1SendToEvision7[0],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg11C1SendToEvision7.tCsrInfo_i16gScalingJoysDeltaArm, (TVoid*)&gCsr_ctRecDat_Msg11C1SendToEvision7.tCsrRng_i16gScalingJoysDeltaArm,
        (TVoid*)&gCsr_tMsg11C1SendToEvision7.i16gScalingJoysDeltaArm, (TVoid*)&mCsr_tOldDat_tMsg11C1SendToEvision7.i16gScalingJoysDeltaArm, &mCsr_aeRecErr_tMsg11C1SendToEvision7[1],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg11C1SendToEvision7.tCsrInfo_i16gScalingJoysArrowArm, (TVoid*)&gCsr_ctRecDat_Msg11C1SendToEvision7.tCsrRng_i16gScalingJoysArrowArm,
        (TVoid*)&gCsr_tMsg11C1SendToEvision7.i16gScalingJoysArrowArm, (TVoid*)&mCsr_tOldDat_tMsg11C1SendToEvision7.i16gScalingJoysArrowArm, &mCsr_aeRecErr_tMsg11C1SendToEvision7[2],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg11C1SendToEvision7.tCsrInfo_i16gScalingJoysTelescopeArm, (TVoid*)&gCsr_ctRecDat_Msg11C1SendToEvision7.tCsrRng_i16gScalingJoysTelescopeArm,
        (TVoid*)&gCsr_tMsg11C1SendToEvision7.i16gScalingJoysTelescopeArm, (TVoid*)&mCsr_tOldDat_tMsg11C1SendToEvision7.i16gScalingJoysTelescopeArm, &mCsr_aeRecErr_tMsg11C1SendToEvision7[3],
        NULL, NULL
    }
};

static const TCanSigRecRoot mCsr_ctRoot_Msg11C1SendToEvision7 =
{
    "Msg11C1SendToEvision7",                                //!< achName - [STR] Name Msg11C1SendToEvision7
    8,                                                      //!< u8Dlc - [NUM] DLC of Can Message
    0xff,                                                   //!< u8CanByteDflt - [NUM] CAN Message default
    DATA_INTEL,                                             //!< eCanFormat - [NUM] CAN Format
    0xFF,                                                   //!< u8MasterReceiveId - [NUM] Receive Id
    4,                                                      //!< u8RecCnt - [NUM] Count of Recorde
    &mCsr_actRecDat_tMsg11C1SendToEvision7[0],              //!< ptRec - [NUM] Pointer to Record Values
    39,                                                     //!< u16RecNo - [NUM] Record Number
    CSR_STAMP                                               //!< u16Stamp - [NUM] Safety stamp
};

TCanSigRecMsg11C1SendToEvision7 gCsr_tMsg11C1SendToEvision7 =
{
    &mCsr_ctRoot_Msg11C1SendToEvision7,                     //!< *cptRoot [POI] Root connection
    (((0 * 1)/1)+0),                                        //!< i16gScalingJoysTurret [[-]] new signal
    (((0 * 1)/1)+0),                                        //!< i16gScalingJoysDeltaArm [[-]] new signal
    (((0 * 1)/1)+0),                                        //!< i16gScalingJoysArrowArm [[-]] new signal
    (((0 * 1)/1)+0)                                         //!< i16gScalingJoysTelescopeArm [[-]] new signal
};

const TCanSigRecVal_Msg12C1SendToEvision7 gCsr_ctRecDat_Msg12C1SendToEvision7 =
{
    //!< gTelescopePVGValue
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TUINT16, TUINT16, 0, 16, 0, 0, 1, 1 }, 
     { U16_MIN, U16_MAX, 0, 0 },
    //!< gTelescopeLengthPercentile
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TUINT16, TUINT16, 16, 16, 0, 0, 1, 1 }, 
     { U16_MIN, U16_MAX, 0, 0 },
    //!< gGeneratorSolenoidValue
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TINT16, TINT16, 32, 16, 0, 0, 1, 1 }, 
     { I16_MIN, I16_MAX, 0, 0 },
    //!< gRPMSolenoidValue
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TINT16, TINT16, 48, 16, 0, 0, 1, 1 }, 
     { I16_MIN, I16_MAX, 0, 0 }
};

static ESigSta mCsr_aeRecErr_tMsg12C1SendToEvision7[4] =
{
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY
};

static TCanSigRecOldValMsg12C1SendToEvision7 mCsr_tOldDat_tMsg12C1SendToEvision7 =
{
    0,                                                      //!< u16gTelescopePVGValue [[-]] new signal
    0,                                                      //!< u16gTelescopeLengthPercentile [[-]] new signal
    0,                                                      //!< i16gGeneratorSolenoidValue [[-]] new signal
    0                                                       //!< i16gRPMSolenoidValue [[-]] new signal
};

extern TCanSigRecMsg12C1SendToEvision7 gCsr_tMsg12C1SendToEvision7;
static const TRecDat mCsr_actRecDat_tMsg12C1SendToEvision7[4] =
{
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg12C1SendToEvision7.tCsrInfo_u16gTelescopePVGValue, (TVoid*)&gCsr_ctRecDat_Msg12C1SendToEvision7.tCsrRng_u16gTelescopePVGValue,
        (TVoid*)&gCsr_tMsg12C1SendToEvision7.u16gTelescopePVGValue, (TVoid*)&mCsr_tOldDat_tMsg12C1SendToEvision7.u16gTelescopePVGValue, &mCsr_aeRecErr_tMsg12C1SendToEvision7[0],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg12C1SendToEvision7.tCsrInfo_u16gTelescopeLengthPercentile, (TVoid*)&gCsr_ctRecDat_Msg12C1SendToEvision7.tCsrRng_u16gTelescopeLengthPercentile,
        (TVoid*)&gCsr_tMsg12C1SendToEvision7.u16gTelescopeLengthPercentile, (TVoid*)&mCsr_tOldDat_tMsg12C1SendToEvision7.u16gTelescopeLengthPercentile, &mCsr_aeRecErr_tMsg12C1SendToEvision7[1],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg12C1SendToEvision7.tCsrInfo_i16gGeneratorSolenoidValue, (TVoid*)&gCsr_ctRecDat_Msg12C1SendToEvision7.tCsrRng_i16gGeneratorSolenoidValue,
        (TVoid*)&gCsr_tMsg12C1SendToEvision7.i16gGeneratorSolenoidValue, (TVoid*)&mCsr_tOldDat_tMsg12C1SendToEvision7.i16gGeneratorSolenoidValue, &mCsr_aeRecErr_tMsg12C1SendToEvision7[2],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg12C1SendToEvision7.tCsrInfo_i16gRPMSolenoidValue, (TVoid*)&gCsr_ctRecDat_Msg12C1SendToEvision7.tCsrRng_i16gRPMSolenoidValue,
        (TVoid*)&gCsr_tMsg12C1SendToEvision7.i16gRPMSolenoidValue, (TVoid*)&mCsr_tOldDat_tMsg12C1SendToEvision7.i16gRPMSolenoidValue, &mCsr_aeRecErr_tMsg12C1SendToEvision7[3],
        NULL, NULL
    }
};

static const TCanSigRecRoot mCsr_ctRoot_Msg12C1SendToEvision7 =
{
    "Msg12C1SendToEvision7",                                //!< achName - [STR] Name Msg12C1SendToEvision7
    8,                                                      //!< u8Dlc - [NUM] DLC of Can Message
    0xff,                                                   //!< u8CanByteDflt - [NUM] CAN Message default
    DATA_INTEL,                                             //!< eCanFormat - [NUM] CAN Format
    0xFF,                                                   //!< u8MasterReceiveId - [NUM] Receive Id
    4,                                                      //!< u8RecCnt - [NUM] Count of Recorde
    &mCsr_actRecDat_tMsg12C1SendToEvision7[0],              //!< ptRec - [NUM] Pointer to Record Values
    40,                                                     //!< u16RecNo - [NUM] Record Number
    CSR_STAMP                                               //!< u16Stamp - [NUM] Safety stamp
};

TCanSigRecMsg12C1SendToEvision7 gCsr_tMsg12C1SendToEvision7 =
{
    &mCsr_ctRoot_Msg12C1SendToEvision7,                     //!< *cptRoot [POI] Root connection
    (((0 * 1)/1)+0),                                        //!< u16gTelescopePVGValue [[-]] new signal
    (((0 * 1)/1)+0),                                        //!< u16gTelescopeLengthPercentile [[-]] new signal
    (((0 * 1)/1)+0),                                        //!< i16gGeneratorSolenoidValue [[-]] new signal
    (((0 * 1)/1)+0)                                         //!< i16gRPMSolenoidValue [[-]] new signal
};

const TCanSigRecVal_Msg13C1SendToEvision7 gCsr_ctRecDat_Msg13C1SendToEvision7 =
{
    //!< gBypassPressureSensorValue
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TINT16, TINT16, 0, 16, 0, 0, 1, 1 }, 
     { I16_MIN, I16_MAX, 0, 0 },
    //!< gBatteryVoltageMv
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TUINT16, TUINT16, 16, 16, 0, 0, 1, 1 }, 
     { U16_MIN, U16_MAX, 0, 0 },
    //!< RemainingRegenTimeAverage
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TUINT16, TUINT16, 32, 16, 0, 0, 1, 1 }, 
     { U16_MIN, U16_MAX, 0, 0 },
    //!< ElectricMotorForbidden
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 48, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< ReloadWithGeneratorOn
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 49, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< PictoColdOilTankTemperature
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 50, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< PictoWarningValidCycleMast
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 51, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE }
};

static ESigSta mCsr_aeRecErr_tMsg13C1SendToEvision7[7] =
{
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY
};

static TCanSigRecOldValMsg13C1SendToEvision7 mCsr_tOldDat_tMsg13C1SendToEvision7 =
{
    0,                                                      //!< i16gBypassPressureSensorValue [[-]] new signal
    0,                                                      //!< u16gBatteryVoltageMv [[-]] new signal
    0,                                                      //!< u16RemainingRegenTimeAverage [[-]] new signal
    FALSE,                                                  //!< boElectricMotorForbidden [[-]] new signal
    FALSE,                                                  //!< boReloadWithGeneratorOn [[-]] new signal
    FALSE,                                                  //!< boPictoColdOilTankTemperature [[-]] new signal
    FALSE                                                   //!< boPictoWarningValidCycleMast [[-]] new signal
};

extern TCanSigRecMsg13C1SendToEvision7 gCsr_tMsg13C1SendToEvision7;
static const TRecDat mCsr_actRecDat_tMsg13C1SendToEvision7[7] =
{
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg13C1SendToEvision7.tCsrInfo_i16gBypassPressureSensorValue, (TVoid*)&gCsr_ctRecDat_Msg13C1SendToEvision7.tCsrRng_i16gBypassPressureSensorValue,
        (TVoid*)&gCsr_tMsg13C1SendToEvision7.i16gBypassPressureSensorValue, (TVoid*)&mCsr_tOldDat_tMsg13C1SendToEvision7.i16gBypassPressureSensorValue, &mCsr_aeRecErr_tMsg13C1SendToEvision7[0],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg13C1SendToEvision7.tCsrInfo_u16gBatteryVoltageMv, (TVoid*)&gCsr_ctRecDat_Msg13C1SendToEvision7.tCsrRng_u16gBatteryVoltageMv,
        (TVoid*)&gCsr_tMsg13C1SendToEvision7.u16gBatteryVoltageMv, (TVoid*)&mCsr_tOldDat_tMsg13C1SendToEvision7.u16gBatteryVoltageMv, &mCsr_aeRecErr_tMsg13C1SendToEvision7[1],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg13C1SendToEvision7.tCsrInfo_u16RemainingRegenTimeAverage, (TVoid*)&gCsr_ctRecDat_Msg13C1SendToEvision7.tCsrRng_u16RemainingRegenTimeAverage,
        (TVoid*)&gCsr_tMsg13C1SendToEvision7.u16RemainingRegenTimeAverage, (TVoid*)&mCsr_tOldDat_tMsg13C1SendToEvision7.u16RemainingRegenTimeAverage, &mCsr_aeRecErr_tMsg13C1SendToEvision7[2],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg13C1SendToEvision7.tCsrInfo_boElectricMotorForbidden, (TVoid*)&gCsr_ctRecDat_Msg13C1SendToEvision7.tCsrRng_boElectricMotorForbidden,
        (TVoid*)&gCsr_tMsg13C1SendToEvision7.boElectricMotorForbidden, (TVoid*)&mCsr_tOldDat_tMsg13C1SendToEvision7.boElectricMotorForbidden, &mCsr_aeRecErr_tMsg13C1SendToEvision7[3],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg13C1SendToEvision7.tCsrInfo_boReloadWithGeneratorOn, (TVoid*)&gCsr_ctRecDat_Msg13C1SendToEvision7.tCsrRng_boReloadWithGeneratorOn,
        (TVoid*)&gCsr_tMsg13C1SendToEvision7.boReloadWithGeneratorOn, (TVoid*)&mCsr_tOldDat_tMsg13C1SendToEvision7.boReloadWithGeneratorOn, &mCsr_aeRecErr_tMsg13C1SendToEvision7[4],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg13C1SendToEvision7.tCsrInfo_boPictoColdOilTankTemperature, (TVoid*)&gCsr_ctRecDat_Msg13C1SendToEvision7.tCsrRng_boPictoColdOilTankTemperature,
        (TVoid*)&gCsr_tMsg13C1SendToEvision7.boPictoColdOilTankTemperature, (TVoid*)&mCsr_tOldDat_tMsg13C1SendToEvision7.boPictoColdOilTankTemperature, &mCsr_aeRecErr_tMsg13C1SendToEvision7[5],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg13C1SendToEvision7.tCsrInfo_boPictoWarningValidCycleMast, (TVoid*)&gCsr_ctRecDat_Msg13C1SendToEvision7.tCsrRng_boPictoWarningValidCycleMast,
        (TVoid*)&gCsr_tMsg13C1SendToEvision7.boPictoWarningValidCycleMast, (TVoid*)&mCsr_tOldDat_tMsg13C1SendToEvision7.boPictoWarningValidCycleMast, &mCsr_aeRecErr_tMsg13C1SendToEvision7[6],
        NULL, NULL
    }
};

static const TCanSigRecRoot mCsr_ctRoot_Msg13C1SendToEvision7 =
{
    "Msg13C1SendToEvision7",                                //!< achName - [STR] Name Msg13C1SendToEvision7
    8,                                                      //!< u8Dlc - [NUM] DLC of Can Message
    0xff,                                                   //!< u8CanByteDflt - [NUM] CAN Message default
    DATA_INTEL,                                             //!< eCanFormat - [NUM] CAN Format
    0xFF,                                                   //!< u8MasterReceiveId - [NUM] Receive Id
    7,                                                      //!< u8RecCnt - [NUM] Count of Recorde
    &mCsr_actRecDat_tMsg13C1SendToEvision7[0],              //!< ptRec - [NUM] Pointer to Record Values
    41,                                                     //!< u16RecNo - [NUM] Record Number
    CSR_STAMP                                               //!< u16Stamp - [NUM] Safety stamp
};

TCanSigRecMsg13C1SendToEvision7 gCsr_tMsg13C1SendToEvision7 =
{
    &mCsr_ctRoot_Msg13C1SendToEvision7,                     //!< *cptRoot [POI] Root connection
    (((0 * 1)/1)+0),                                        //!< i16gBypassPressureSensorValue [[-]] new signal
    (((0 * 1)/1)+0),                                        //!< u16gBatteryVoltageMv [[-]] new signal
    (((0 * 1)/1)+0),                                        //!< u16RemainingRegenTimeAverage [[-]] new signal
    FALSE,                                                  //!< boElectricMotorForbidden [[-]] new signal
    FALSE,                                                  //!< boReloadWithGeneratorOn [[-]] new signal
    FALSE,                                                  //!< boPictoColdOilTankTemperature [[-]] new signal
    FALSE                                                   //!< boPictoWarningValidCycleMast [[-]] new signal
};

const TCanSigRecVal_Msg14C1SendToEvision7 gCsr_ctRecDat_Msg14C1SendToEvision7 =
{
    //!< OilTankTemperatureValue
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TINT16, TINT16, 0, 16, 0, 0, 1, 1 }, 
     { I16_MIN, I16_MAX, 0, 0 },
    //!< TotalRegenHours
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TUINT16, TUINT16, 16, 16, 0, 0, 1, 1 }, 
     { U16_MIN, U16_MAX, 0, 0 },
    //!< TotalElectricHours
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TUINT16, TUINT16, 32, 16, 0, 0, 1, 1 }, 
     { U16_MIN, U16_MAX, 0, 0 }
};

static ESigSta mCsr_aeRecErr_tMsg14C1SendToEvision7[3] =
{
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY
};

static TCanSigRecOldValMsg14C1SendToEvision7 mCsr_tOldDat_tMsg14C1SendToEvision7 =
{
    0,                                                      //!< i16OilTankTemperatureValue [[-]] new signal
    0,                                                      //!< u16TotalRegenHours [[-]] new signal
    0                                                       //!< u16TotalElectricHours [[-]] new signal
};

extern TCanSigRecMsg14C1SendToEvision7 gCsr_tMsg14C1SendToEvision7;
static const TRecDat mCsr_actRecDat_tMsg14C1SendToEvision7[3] =
{
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg14C1SendToEvision7.tCsrInfo_i16OilTankTemperatureValue, (TVoid*)&gCsr_ctRecDat_Msg14C1SendToEvision7.tCsrRng_i16OilTankTemperatureValue,
        (TVoid*)&gCsr_tMsg14C1SendToEvision7.i16OilTankTemperatureValue, (TVoid*)&mCsr_tOldDat_tMsg14C1SendToEvision7.i16OilTankTemperatureValue, &mCsr_aeRecErr_tMsg14C1SendToEvision7[0],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg14C1SendToEvision7.tCsrInfo_u16TotalRegenHours, (TVoid*)&gCsr_ctRecDat_Msg14C1SendToEvision7.tCsrRng_u16TotalRegenHours,
        (TVoid*)&gCsr_tMsg14C1SendToEvision7.u16TotalRegenHours, (TVoid*)&mCsr_tOldDat_tMsg14C1SendToEvision7.u16TotalRegenHours, &mCsr_aeRecErr_tMsg14C1SendToEvision7[1],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg14C1SendToEvision7.tCsrInfo_u16TotalElectricHours, (TVoid*)&gCsr_ctRecDat_Msg14C1SendToEvision7.tCsrRng_u16TotalElectricHours,
        (TVoid*)&gCsr_tMsg14C1SendToEvision7.u16TotalElectricHours, (TVoid*)&mCsr_tOldDat_tMsg14C1SendToEvision7.u16TotalElectricHours, &mCsr_aeRecErr_tMsg14C1SendToEvision7[2],
        NULL, NULL
    }
};

static const TCanSigRecRoot mCsr_ctRoot_Msg14C1SendToEvision7 =
{
    "Msg14C1SendToEvision7",                                //!< achName - [STR] Name Msg14C1SendToEvision7
    8,                                                      //!< u8Dlc - [NUM] DLC of Can Message
    0xff,                                                   //!< u8CanByteDflt - [NUM] CAN Message default
    DATA_INTEL,                                             //!< eCanFormat - [NUM] CAN Format
    0xFF,                                                   //!< u8MasterReceiveId - [NUM] Receive Id
    3,                                                      //!< u8RecCnt - [NUM] Count of Recorde
    &mCsr_actRecDat_tMsg14C1SendToEvision7[0],              //!< ptRec - [NUM] Pointer to Record Values
    42,                                                     //!< u16RecNo - [NUM] Record Number
    CSR_STAMP                                               //!< u16Stamp - [NUM] Safety stamp
};

TCanSigRecMsg14C1SendToEvision7 gCsr_tMsg14C1SendToEvision7 =
{
    &mCsr_ctRoot_Msg14C1SendToEvision7,                     //!< *cptRoot [POI] Root connection
    (((0 * 1)/1)+0),                                        //!< i16OilTankTemperatureValue [[-]] new signal
    (((0 * 1)/1)+0),                                        //!< u16TotalRegenHours [[-]] new signal
    (((0 * 1)/1)+0)                                         //!< u16TotalElectricHours [[-]] new signal
};

const TCanSigRecVal_MsgDebugC1SendToEvision7 gCsr_ctRecDat_MsgDebugC1SendToEvision7 =
{
    //!< FaultyValue
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TUINT16, TUINT16, 0, 16, 0, 0, 1, 1 }, 
     { U16_MIN, U16_MAX, 0, 0 },
    //!< DeviceNum
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TUINT8, TUINT8, 16, 8, 0, 0, 1, 1 }, 
     { U8_MIN, U8_MAX, 0, 0 },
    //!< ErrorCode
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TUINT8, TUINT8, 24, 8, 0, 0, 1, 1 }, 
     { U8_MIN, U8_MAX, 0, 0 },
    //!< DebugVehicleSlope
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TINT16, TINT16, 32, 16, 0, 0, 1, 1 }, 
     { -32768, 32767, 0, 0 }
};

static ESigSta mCsr_aeRecErr_tMsgDebugC1SendToEvision7[4] =
{
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY
};

static TCanSigRecOldValMsgDebugC1SendToEvision7 mCsr_tOldDat_tMsgDebugC1SendToEvision7 =
{
    0,                                                      //!< u16FaultyValue [[-]] new signal
    0,                                                      //!< u8DeviceNum [[-]] new signal
    0,                                                      //!< u8ErrorCode [[-]] new signal
    0                                                       //!< i16DebugVehicleSlope [[-]] new signal
};

extern TCanSigRecMsgDebugC1SendToEvision7 gCsr_tMsgDebugC1SendToEvision7;
static const TRecDat mCsr_actRecDat_tMsgDebugC1SendToEvision7[4] =
{
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_MsgDebugC1SendToEvision7.tCsrInfo_u16FaultyValue, (TVoid*)&gCsr_ctRecDat_MsgDebugC1SendToEvision7.tCsrRng_u16FaultyValue,
        (TVoid*)&gCsr_tMsgDebugC1SendToEvision7.u16FaultyValue, (TVoid*)&mCsr_tOldDat_tMsgDebugC1SendToEvision7.u16FaultyValue, &mCsr_aeRecErr_tMsgDebugC1SendToEvision7[0],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_MsgDebugC1SendToEvision7.tCsrInfo_u8DeviceNum, (TVoid*)&gCsr_ctRecDat_MsgDebugC1SendToEvision7.tCsrRng_u8DeviceNum,
        (TVoid*)&gCsr_tMsgDebugC1SendToEvision7.u8DeviceNum, (TVoid*)&mCsr_tOldDat_tMsgDebugC1SendToEvision7.u8DeviceNum, &mCsr_aeRecErr_tMsgDebugC1SendToEvision7[1],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_MsgDebugC1SendToEvision7.tCsrInfo_u8ErrorCode, (TVoid*)&gCsr_ctRecDat_MsgDebugC1SendToEvision7.tCsrRng_u8ErrorCode,
        (TVoid*)&gCsr_tMsgDebugC1SendToEvision7.u8ErrorCode, (TVoid*)&mCsr_tOldDat_tMsgDebugC1SendToEvision7.u8ErrorCode, &mCsr_aeRecErr_tMsgDebugC1SendToEvision7[2],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_MsgDebugC1SendToEvision7.tCsrInfo_i16DebugVehicleSlope, (TVoid*)&gCsr_ctRecDat_MsgDebugC1SendToEvision7.tCsrRng_i16DebugVehicleSlope,
        (TVoid*)&gCsr_tMsgDebugC1SendToEvision7.i16DebugVehicleSlope, (TVoid*)&mCsr_tOldDat_tMsgDebugC1SendToEvision7.i16DebugVehicleSlope, &mCsr_aeRecErr_tMsgDebugC1SendToEvision7[3],
        NULL, NULL
    }
};

static const TCanSigRecRoot mCsr_ctRoot_MsgDebugC1SendToEvision7 =
{
    "MsgDebugC1SendToEvision7",                             //!< achName - [STR] Name MsgDebugC1SendToEvision7
    8,                                                      //!< u8Dlc - [NUM] DLC of Can Message
    0xff,                                                   //!< u8CanByteDflt - [NUM] CAN Message default
    DATA_INTEL,                                             //!< eCanFormat - [NUM] CAN Format
    0xFF,                                                   //!< u8MasterReceiveId - [NUM] Receive Id
    4,                                                      //!< u8RecCnt - [NUM] Count of Recorde
    &mCsr_actRecDat_tMsgDebugC1SendToEvision7[0],           //!< ptRec - [NUM] Pointer to Record Values
    43,                                                     //!< u16RecNo - [NUM] Record Number
    CSR_STAMP                                               //!< u16Stamp - [NUM] Safety stamp
};

TCanSigRecMsgDebugC1SendToEvision7 gCsr_tMsgDebugC1SendToEvision7 =
{
    &mCsr_ctRoot_MsgDebugC1SendToEvision7,                  //!< *cptRoot [POI] Root connection
    (((0 * 1)/1)+0),                                        //!< u16FaultyValue [[-]] new signal
    (((0 * 1)/1)+0),                                        //!< u8DeviceNum [[-]] new signal
    (((0 * 1)/1)+0),                                        //!< u8ErrorCode [[-]] new signal
    (((0 * 1)/1)+0)                                         //!< i16DebugVehicleSlope [[-]] new signal
};

const TCanSigRecVal_Msg1RcvFromEvision7 gCsr_ctRecDat_Msg1RcvFromEvision7 =
{
    //!< gLoginStatus
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 0, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gButtonCalibTurretEncoder
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 1, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gButtonCalibMinMastMeasure
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 2, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gButtonCalibMaxMastMeasure
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 3, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< SavePosEncodeurMastButton
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 4, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gActivateMeasuringMast
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 5, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< RazDistanceTraveledMastMeasure
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 6, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gOffTrackTestBrakeActivated
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 7, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gOffTrackRunInBrakeActivated
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 8, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gOsciServiceBrakeSelect
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 9, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gFixedServiceBrakeSelect
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 10, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gBothServiceBrakeSelect
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 11, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gOsciParkBrakeSelect
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 12, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gFixedParkBrakeSelect
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 13, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gBothParkBrakeSelect
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 14, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gOsciServiceRunInBrakeSelect
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 15, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gFixedServiceRunInBrakeSelect
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 16, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gBothServiceRunInBrakeSelect
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 17, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gTestBrakePageActive
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 18, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gBreakInBrakePageActive
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 19, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gSerialNumber
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 20, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gBPBasketValidate
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 21, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gKeyFilterOverload
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 22, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gKeyNextMode
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 23, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gKeyPrevMode
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 24, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gKeySignalDanger
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 25, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gKeyFlashLightON
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 26, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gKeyCalibMastMin
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 27, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gKeyCalibMastMax
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 28, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gKeyCalibMastValid
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 29, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gKeyGeneratorActivate
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 30, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gKeyWhiteLights15746
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 31, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gFixe2ndParkBrakeSelect
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 32, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gOsci2ndParkBrakeSelect
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 33, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gKeyRazController
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 34, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE }
};

static ESigSta mCsr_aeRecErr_tMsg1RcvFromEvision7[35] =
{
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY
};

static TCanSigRecOldValMsg1RcvFromEvision7 mCsr_tOldDat_tMsg1RcvFromEvision7 =
{
    FALSE,                                                  //!< bogLoginStatus [[-]] User Log in Status (1=log in)
    FALSE,                                                  //!< bogButtonCalibTurretEncoder [[-]] Button for the calibration of the turret encoder is pressed
    FALSE,                                                  //!< bogButtonCalibMinMastMeasure [[-]] Button for the calibration of min position mast measure encodeur
    FALSE,                                                  //!< bogButtonCalibMaxMastMeasure [[-]] Button for the calibration of max position mast measure encodeur
    FALSE,                                                  //!< boSavePosEncodeurMastButton [[-]] Button for save min and max value of encodeur mast measure
    FALSE,                                                  //!< bogActivateMeasuringMast [[-]] Activate mast measure function
    FALSE,                                                  //!< boRazDistanceTraveledMastMeasure [[-]] Raz distance translation traveled with mast measure unfolded
    FALSE,                                                  //!< bogOffTrackTestBrakeActivated [[-]] Status of off track variable on test brake page
    FALSE,                                                  //!< bogOffTrackRunInBrakeActivated [[-]] Status of off track variable on run in process page
    FALSE,                                                  //!< bogOsciServiceBrakeSelect [[-]] Request status of osci service test brake
    FALSE,                                                  //!< bogFixedServiceBrakeSelect [[-]] Request status of fixed service test brake
    FALSE,                                                  //!< bogBothServiceBrakeSelect [[-]] Request status of both service test brake
    FALSE,                                                  //!< bogOsciParkBrakeSelect [[-]] Request status of osci park test brake
    FALSE,                                                  //!< bogFixedParkBrakeSelect [[-]] Request status of fixed park test brake
    FALSE,                                                  //!< bogBothParkBrakeSelect [[-]] Request status of both park test brake
    FALSE,                                                  //!< bogOsciServiceRunInBrakeSelect [[-]] Request status of osci service run in brake
    FALSE,                                                  //!< bogFixedServiceRunInBrakeSelect [[-]] Request status of fixed service run in test brake
    FALSE,                                                  //!< bogBothServiceRunInBrakeSelect [[-]] Request status of both service run in test brake
    FALSE,                                                  //!< bogTestBrakePageActive [[-]] Flag when user is on test brake page
    FALSE,                                                  //!< bogBreakInBrakePageActive [[-]] Flag when user is on break in brake page
    FALSE,                                                  //!< bogSerialNumber [[-]] Machine Serial Number
    FALSE,                                                  //!< bogBPBasketValidate [[-]] Basket Panel Validate
    FALSE,                                                  //!< bogKeyFilterOverload [[-]] Overload Filter Key
    FALSE,                                                  //!< bogKeyNextMode [[-]] Select next mode
    FALSE,                                                  //!< bogKeyPrevMode [[-]] Select Previous Mode
    FALSE,                                                  //!< bogKeySignalDanger [[-]] Select Signal Danger Mode
    FALSE,                                                  //!< bogKeyFlashLightON [[-]] Force Flash Light ON
    FALSE,                                                  //!< bogKeyCalibMastMin [[-]] Key Calibration Min
    FALSE,                                                  //!< bogKeyCalibMastMax [[-]] Key Calibration Max
    FALSE,                                                  //!< bogKeyCalibMastValid [[-]] Key Calibration Validation
    FALSE,                                                  //!< bogKeyGeneratorActivate [[-]] Key Generator Activation
    FALSE,                                                  //!< bogKeyWhiteLights15746 [[-]] Key whiite lights 15746
    FALSE,                                                  //!< bogFixe2ndParkBrakeSelect [[-]] Fixe 2nd Park Brake Select
    FALSE,                                                  //!< bogOsci2ndParkBrakeSelect [[-]] Osci 2nd Park Brake Select
    FALSE                                                   //!< bogKeyRazController [[-]] new signal
};

extern TCanSigRecMsg1RcvFromEvision7 gCsr_tMsg1RcvFromEvision7;
static const TRecDat mCsr_actRecDat_tMsg1RcvFromEvision7[35] =
{
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1RcvFromEvision7.tCsrInfo_bogLoginStatus, (TVoid*)&gCsr_ctRecDat_Msg1RcvFromEvision7.tCsrRng_bogLoginStatus,
        (TVoid*)&gCsr_tMsg1RcvFromEvision7.bogLoginStatus, (TVoid*)&mCsr_tOldDat_tMsg1RcvFromEvision7.bogLoginStatus, &mCsr_aeRecErr_tMsg1RcvFromEvision7[0],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1RcvFromEvision7.tCsrInfo_bogButtonCalibTurretEncoder, (TVoid*)&gCsr_ctRecDat_Msg1RcvFromEvision7.tCsrRng_bogButtonCalibTurretEncoder,
        (TVoid*)&gCsr_tMsg1RcvFromEvision7.bogButtonCalibTurretEncoder, (TVoid*)&mCsr_tOldDat_tMsg1RcvFromEvision7.bogButtonCalibTurretEncoder, &mCsr_aeRecErr_tMsg1RcvFromEvision7[1],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1RcvFromEvision7.tCsrInfo_bogButtonCalibMinMastMeasure, (TVoid*)&gCsr_ctRecDat_Msg1RcvFromEvision7.tCsrRng_bogButtonCalibMinMastMeasure,
        (TVoid*)&gCsr_tMsg1RcvFromEvision7.bogButtonCalibMinMastMeasure, (TVoid*)&mCsr_tOldDat_tMsg1RcvFromEvision7.bogButtonCalibMinMastMeasure, &mCsr_aeRecErr_tMsg1RcvFromEvision7[2],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1RcvFromEvision7.tCsrInfo_bogButtonCalibMaxMastMeasure, (TVoid*)&gCsr_ctRecDat_Msg1RcvFromEvision7.tCsrRng_bogButtonCalibMaxMastMeasure,
        (TVoid*)&gCsr_tMsg1RcvFromEvision7.bogButtonCalibMaxMastMeasure, (TVoid*)&mCsr_tOldDat_tMsg1RcvFromEvision7.bogButtonCalibMaxMastMeasure, &mCsr_aeRecErr_tMsg1RcvFromEvision7[3],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1RcvFromEvision7.tCsrInfo_boSavePosEncodeurMastButton, (TVoid*)&gCsr_ctRecDat_Msg1RcvFromEvision7.tCsrRng_boSavePosEncodeurMastButton,
        (TVoid*)&gCsr_tMsg1RcvFromEvision7.boSavePosEncodeurMastButton, (TVoid*)&mCsr_tOldDat_tMsg1RcvFromEvision7.boSavePosEncodeurMastButton, &mCsr_aeRecErr_tMsg1RcvFromEvision7[4],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1RcvFromEvision7.tCsrInfo_bogActivateMeasuringMast, (TVoid*)&gCsr_ctRecDat_Msg1RcvFromEvision7.tCsrRng_bogActivateMeasuringMast,
        (TVoid*)&gCsr_tMsg1RcvFromEvision7.bogActivateMeasuringMast, (TVoid*)&mCsr_tOldDat_tMsg1RcvFromEvision7.bogActivateMeasuringMast, &mCsr_aeRecErr_tMsg1RcvFromEvision7[5],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1RcvFromEvision7.tCsrInfo_boRazDistanceTraveledMastMeasure, (TVoid*)&gCsr_ctRecDat_Msg1RcvFromEvision7.tCsrRng_boRazDistanceTraveledMastMeasure,
        (TVoid*)&gCsr_tMsg1RcvFromEvision7.boRazDistanceTraveledMastMeasure, (TVoid*)&mCsr_tOldDat_tMsg1RcvFromEvision7.boRazDistanceTraveledMastMeasure, &mCsr_aeRecErr_tMsg1RcvFromEvision7[6],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1RcvFromEvision7.tCsrInfo_bogOffTrackTestBrakeActivated, (TVoid*)&gCsr_ctRecDat_Msg1RcvFromEvision7.tCsrRng_bogOffTrackTestBrakeActivated,
        (TVoid*)&gCsr_tMsg1RcvFromEvision7.bogOffTrackTestBrakeActivated, (TVoid*)&mCsr_tOldDat_tMsg1RcvFromEvision7.bogOffTrackTestBrakeActivated, &mCsr_aeRecErr_tMsg1RcvFromEvision7[7],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1RcvFromEvision7.tCsrInfo_bogOffTrackRunInBrakeActivated, (TVoid*)&gCsr_ctRecDat_Msg1RcvFromEvision7.tCsrRng_bogOffTrackRunInBrakeActivated,
        (TVoid*)&gCsr_tMsg1RcvFromEvision7.bogOffTrackRunInBrakeActivated, (TVoid*)&mCsr_tOldDat_tMsg1RcvFromEvision7.bogOffTrackRunInBrakeActivated, &mCsr_aeRecErr_tMsg1RcvFromEvision7[8],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1RcvFromEvision7.tCsrInfo_bogOsciServiceBrakeSelect, (TVoid*)&gCsr_ctRecDat_Msg1RcvFromEvision7.tCsrRng_bogOsciServiceBrakeSelect,
        (TVoid*)&gCsr_tMsg1RcvFromEvision7.bogOsciServiceBrakeSelect, (TVoid*)&mCsr_tOldDat_tMsg1RcvFromEvision7.bogOsciServiceBrakeSelect, &mCsr_aeRecErr_tMsg1RcvFromEvision7[9],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1RcvFromEvision7.tCsrInfo_bogFixedServiceBrakeSelect, (TVoid*)&gCsr_ctRecDat_Msg1RcvFromEvision7.tCsrRng_bogFixedServiceBrakeSelect,
        (TVoid*)&gCsr_tMsg1RcvFromEvision7.bogFixedServiceBrakeSelect, (TVoid*)&mCsr_tOldDat_tMsg1RcvFromEvision7.bogFixedServiceBrakeSelect, &mCsr_aeRecErr_tMsg1RcvFromEvision7[10],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1RcvFromEvision7.tCsrInfo_bogBothServiceBrakeSelect, (TVoid*)&gCsr_ctRecDat_Msg1RcvFromEvision7.tCsrRng_bogBothServiceBrakeSelect,
        (TVoid*)&gCsr_tMsg1RcvFromEvision7.bogBothServiceBrakeSelect, (TVoid*)&mCsr_tOldDat_tMsg1RcvFromEvision7.bogBothServiceBrakeSelect, &mCsr_aeRecErr_tMsg1RcvFromEvision7[11],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1RcvFromEvision7.tCsrInfo_bogOsciParkBrakeSelect, (TVoid*)&gCsr_ctRecDat_Msg1RcvFromEvision7.tCsrRng_bogOsciParkBrakeSelect,
        (TVoid*)&gCsr_tMsg1RcvFromEvision7.bogOsciParkBrakeSelect, (TVoid*)&mCsr_tOldDat_tMsg1RcvFromEvision7.bogOsciParkBrakeSelect, &mCsr_aeRecErr_tMsg1RcvFromEvision7[12],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1RcvFromEvision7.tCsrInfo_bogFixedParkBrakeSelect, (TVoid*)&gCsr_ctRecDat_Msg1RcvFromEvision7.tCsrRng_bogFixedParkBrakeSelect,
        (TVoid*)&gCsr_tMsg1RcvFromEvision7.bogFixedParkBrakeSelect, (TVoid*)&mCsr_tOldDat_tMsg1RcvFromEvision7.bogFixedParkBrakeSelect, &mCsr_aeRecErr_tMsg1RcvFromEvision7[13],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1RcvFromEvision7.tCsrInfo_bogBothParkBrakeSelect, (TVoid*)&gCsr_ctRecDat_Msg1RcvFromEvision7.tCsrRng_bogBothParkBrakeSelect,
        (TVoid*)&gCsr_tMsg1RcvFromEvision7.bogBothParkBrakeSelect, (TVoid*)&mCsr_tOldDat_tMsg1RcvFromEvision7.bogBothParkBrakeSelect, &mCsr_aeRecErr_tMsg1RcvFromEvision7[14],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1RcvFromEvision7.tCsrInfo_bogOsciServiceRunInBrakeSelect, (TVoid*)&gCsr_ctRecDat_Msg1RcvFromEvision7.tCsrRng_bogOsciServiceRunInBrakeSelect,
        (TVoid*)&gCsr_tMsg1RcvFromEvision7.bogOsciServiceRunInBrakeSelect, (TVoid*)&mCsr_tOldDat_tMsg1RcvFromEvision7.bogOsciServiceRunInBrakeSelect, &mCsr_aeRecErr_tMsg1RcvFromEvision7[15],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1RcvFromEvision7.tCsrInfo_bogFixedServiceRunInBrakeSelect, (TVoid*)&gCsr_ctRecDat_Msg1RcvFromEvision7.tCsrRng_bogFixedServiceRunInBrakeSelect,
        (TVoid*)&gCsr_tMsg1RcvFromEvision7.bogFixedServiceRunInBrakeSelect, (TVoid*)&mCsr_tOldDat_tMsg1RcvFromEvision7.bogFixedServiceRunInBrakeSelect, &mCsr_aeRecErr_tMsg1RcvFromEvision7[16],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1RcvFromEvision7.tCsrInfo_bogBothServiceRunInBrakeSelect, (TVoid*)&gCsr_ctRecDat_Msg1RcvFromEvision7.tCsrRng_bogBothServiceRunInBrakeSelect,
        (TVoid*)&gCsr_tMsg1RcvFromEvision7.bogBothServiceRunInBrakeSelect, (TVoid*)&mCsr_tOldDat_tMsg1RcvFromEvision7.bogBothServiceRunInBrakeSelect, &mCsr_aeRecErr_tMsg1RcvFromEvision7[17],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1RcvFromEvision7.tCsrInfo_bogTestBrakePageActive, (TVoid*)&gCsr_ctRecDat_Msg1RcvFromEvision7.tCsrRng_bogTestBrakePageActive,
        (TVoid*)&gCsr_tMsg1RcvFromEvision7.bogTestBrakePageActive, (TVoid*)&mCsr_tOldDat_tMsg1RcvFromEvision7.bogTestBrakePageActive, &mCsr_aeRecErr_tMsg1RcvFromEvision7[18],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1RcvFromEvision7.tCsrInfo_bogBreakInBrakePageActive, (TVoid*)&gCsr_ctRecDat_Msg1RcvFromEvision7.tCsrRng_bogBreakInBrakePageActive,
        (TVoid*)&gCsr_tMsg1RcvFromEvision7.bogBreakInBrakePageActive, (TVoid*)&mCsr_tOldDat_tMsg1RcvFromEvision7.bogBreakInBrakePageActive, &mCsr_aeRecErr_tMsg1RcvFromEvision7[19],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1RcvFromEvision7.tCsrInfo_bogSerialNumber, (TVoid*)&gCsr_ctRecDat_Msg1RcvFromEvision7.tCsrRng_bogSerialNumber,
        (TVoid*)&gCsr_tMsg1RcvFromEvision7.bogSerialNumber, (TVoid*)&mCsr_tOldDat_tMsg1RcvFromEvision7.bogSerialNumber, &mCsr_aeRecErr_tMsg1RcvFromEvision7[20],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1RcvFromEvision7.tCsrInfo_bogBPBasketValidate, (TVoid*)&gCsr_ctRecDat_Msg1RcvFromEvision7.tCsrRng_bogBPBasketValidate,
        (TVoid*)&gCsr_tMsg1RcvFromEvision7.bogBPBasketValidate, (TVoid*)&mCsr_tOldDat_tMsg1RcvFromEvision7.bogBPBasketValidate, &mCsr_aeRecErr_tMsg1RcvFromEvision7[21],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1RcvFromEvision7.tCsrInfo_bogKeyFilterOverload, (TVoid*)&gCsr_ctRecDat_Msg1RcvFromEvision7.tCsrRng_bogKeyFilterOverload,
        (TVoid*)&gCsr_tMsg1RcvFromEvision7.bogKeyFilterOverload, (TVoid*)&mCsr_tOldDat_tMsg1RcvFromEvision7.bogKeyFilterOverload, &mCsr_aeRecErr_tMsg1RcvFromEvision7[22],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1RcvFromEvision7.tCsrInfo_bogKeyNextMode, (TVoid*)&gCsr_ctRecDat_Msg1RcvFromEvision7.tCsrRng_bogKeyNextMode,
        (TVoid*)&gCsr_tMsg1RcvFromEvision7.bogKeyNextMode, (TVoid*)&mCsr_tOldDat_tMsg1RcvFromEvision7.bogKeyNextMode, &mCsr_aeRecErr_tMsg1RcvFromEvision7[23],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1RcvFromEvision7.tCsrInfo_bogKeyPrevMode, (TVoid*)&gCsr_ctRecDat_Msg1RcvFromEvision7.tCsrRng_bogKeyPrevMode,
        (TVoid*)&gCsr_tMsg1RcvFromEvision7.bogKeyPrevMode, (TVoid*)&mCsr_tOldDat_tMsg1RcvFromEvision7.bogKeyPrevMode, &mCsr_aeRecErr_tMsg1RcvFromEvision7[24],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1RcvFromEvision7.tCsrInfo_bogKeySignalDanger, (TVoid*)&gCsr_ctRecDat_Msg1RcvFromEvision7.tCsrRng_bogKeySignalDanger,
        (TVoid*)&gCsr_tMsg1RcvFromEvision7.bogKeySignalDanger, (TVoid*)&mCsr_tOldDat_tMsg1RcvFromEvision7.bogKeySignalDanger, &mCsr_aeRecErr_tMsg1RcvFromEvision7[25],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1RcvFromEvision7.tCsrInfo_bogKeyFlashLightON, (TVoid*)&gCsr_ctRecDat_Msg1RcvFromEvision7.tCsrRng_bogKeyFlashLightON,
        (TVoid*)&gCsr_tMsg1RcvFromEvision7.bogKeyFlashLightON, (TVoid*)&mCsr_tOldDat_tMsg1RcvFromEvision7.bogKeyFlashLightON, &mCsr_aeRecErr_tMsg1RcvFromEvision7[26],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1RcvFromEvision7.tCsrInfo_bogKeyCalibMastMin, (TVoid*)&gCsr_ctRecDat_Msg1RcvFromEvision7.tCsrRng_bogKeyCalibMastMin,
        (TVoid*)&gCsr_tMsg1RcvFromEvision7.bogKeyCalibMastMin, (TVoid*)&mCsr_tOldDat_tMsg1RcvFromEvision7.bogKeyCalibMastMin, &mCsr_aeRecErr_tMsg1RcvFromEvision7[27],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1RcvFromEvision7.tCsrInfo_bogKeyCalibMastMax, (TVoid*)&gCsr_ctRecDat_Msg1RcvFromEvision7.tCsrRng_bogKeyCalibMastMax,
        (TVoid*)&gCsr_tMsg1RcvFromEvision7.bogKeyCalibMastMax, (TVoid*)&mCsr_tOldDat_tMsg1RcvFromEvision7.bogKeyCalibMastMax, &mCsr_aeRecErr_tMsg1RcvFromEvision7[28],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1RcvFromEvision7.tCsrInfo_bogKeyCalibMastValid, (TVoid*)&gCsr_ctRecDat_Msg1RcvFromEvision7.tCsrRng_bogKeyCalibMastValid,
        (TVoid*)&gCsr_tMsg1RcvFromEvision7.bogKeyCalibMastValid, (TVoid*)&mCsr_tOldDat_tMsg1RcvFromEvision7.bogKeyCalibMastValid, &mCsr_aeRecErr_tMsg1RcvFromEvision7[29],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1RcvFromEvision7.tCsrInfo_bogKeyGeneratorActivate, (TVoid*)&gCsr_ctRecDat_Msg1RcvFromEvision7.tCsrRng_bogKeyGeneratorActivate,
        (TVoid*)&gCsr_tMsg1RcvFromEvision7.bogKeyGeneratorActivate, (TVoid*)&mCsr_tOldDat_tMsg1RcvFromEvision7.bogKeyGeneratorActivate, &mCsr_aeRecErr_tMsg1RcvFromEvision7[30],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1RcvFromEvision7.tCsrInfo_bogKeyWhiteLights15746, (TVoid*)&gCsr_ctRecDat_Msg1RcvFromEvision7.tCsrRng_bogKeyWhiteLights15746,
        (TVoid*)&gCsr_tMsg1RcvFromEvision7.bogKeyWhiteLights15746, (TVoid*)&mCsr_tOldDat_tMsg1RcvFromEvision7.bogKeyWhiteLights15746, &mCsr_aeRecErr_tMsg1RcvFromEvision7[31],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1RcvFromEvision7.tCsrInfo_bogFixe2ndParkBrakeSelect, (TVoid*)&gCsr_ctRecDat_Msg1RcvFromEvision7.tCsrRng_bogFixe2ndParkBrakeSelect,
        (TVoid*)&gCsr_tMsg1RcvFromEvision7.bogFixe2ndParkBrakeSelect, (TVoid*)&mCsr_tOldDat_tMsg1RcvFromEvision7.bogFixe2ndParkBrakeSelect, &mCsr_aeRecErr_tMsg1RcvFromEvision7[32],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1RcvFromEvision7.tCsrInfo_bogOsci2ndParkBrakeSelect, (TVoid*)&gCsr_ctRecDat_Msg1RcvFromEvision7.tCsrRng_bogOsci2ndParkBrakeSelect,
        (TVoid*)&gCsr_tMsg1RcvFromEvision7.bogOsci2ndParkBrakeSelect, (TVoid*)&mCsr_tOldDat_tMsg1RcvFromEvision7.bogOsci2ndParkBrakeSelect, &mCsr_aeRecErr_tMsg1RcvFromEvision7[33],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Msg1RcvFromEvision7.tCsrInfo_bogKeyRazController, (TVoid*)&gCsr_ctRecDat_Msg1RcvFromEvision7.tCsrRng_bogKeyRazController,
        (TVoid*)&gCsr_tMsg1RcvFromEvision7.bogKeyRazController, (TVoid*)&mCsr_tOldDat_tMsg1RcvFromEvision7.bogKeyRazController, &mCsr_aeRecErr_tMsg1RcvFromEvision7[34],
        NULL, NULL
    }
};

static const TCanSigRecRoot mCsr_ctRoot_Msg1RcvFromEvision7 =
{
    "Msg1RcvFromEvision7",                                  //!< achName - [STR] Name Msg1RcvFromEvision7
    8,                                                      //!< u8Dlc - [NUM] DLC of Can Message
    0xff,                                                   //!< u8CanByteDflt - [NUM] CAN Message default
    DATA_INTEL,                                             //!< eCanFormat - [NUM] CAN Format
    0xFF,                                                   //!< u8MasterReceiveId - [NUM] Receive Id
    35,                                                     //!< u8RecCnt - [NUM] Count of Recorde
    &mCsr_actRecDat_tMsg1RcvFromEvision7[0],                //!< ptRec - [NUM] Pointer to Record Values
    44,                                                     //!< u16RecNo - [NUM] Record Number
    CSR_STAMP                                               //!< u16Stamp - [NUM] Safety stamp
};

TCanSigRecMsg1RcvFromEvision7 gCsr_tMsg1RcvFromEvision7 =
{
    &mCsr_ctRoot_Msg1RcvFromEvision7,                       //!< *cptRoot [POI] Root connection
    FALSE,                                                  //!< bogLoginStatus [[-]] User Log in Status (1=log in)
    FALSE,                                                  //!< bogButtonCalibTurretEncoder [[-]] Button for the calibration of the turret encoder is pressed
    FALSE,                                                  //!< bogButtonCalibMinMastMeasure [[-]] Button for the calibration of min position mast measure encodeur
    FALSE,                                                  //!< bogButtonCalibMaxMastMeasure [[-]] Button for the calibration of max position mast measure encodeur
    FALSE,                                                  //!< boSavePosEncodeurMastButton [[-]] Button for save min and max value of encodeur mast measure
    FALSE,                                                  //!< bogActivateMeasuringMast [[-]] Activate mast measure function
    FALSE,                                                  //!< boRazDistanceTraveledMastMeasure [[-]] Raz distance translation traveled with mast measure unfolded
    FALSE,                                                  //!< bogOffTrackTestBrakeActivated [[-]] Status of off track variable on test brake page
    FALSE,                                                  //!< bogOffTrackRunInBrakeActivated [[-]] Status of off track variable on run in process page
    FALSE,                                                  //!< bogOsciServiceBrakeSelect [[-]] Request status of osci service test brake
    FALSE,                                                  //!< bogFixedServiceBrakeSelect [[-]] Request status of fixed service test brake
    FALSE,                                                  //!< bogBothServiceBrakeSelect [[-]] Request status of both service test brake
    FALSE,                                                  //!< bogOsciParkBrakeSelect [[-]] Request status of osci park test brake
    FALSE,                                                  //!< bogFixedParkBrakeSelect [[-]] Request status of fixed park test brake
    FALSE,                                                  //!< bogBothParkBrakeSelect [[-]] Request status of both park test brake
    FALSE,                                                  //!< bogOsciServiceRunInBrakeSelect [[-]] Request status of osci service run in brake
    FALSE,                                                  //!< bogFixedServiceRunInBrakeSelect [[-]] Request status of fixed service run in test brake
    FALSE,                                                  //!< bogBothServiceRunInBrakeSelect [[-]] Request status of both service run in test brake
    FALSE,                                                  //!< bogTestBrakePageActive [[-]] Flag when user is on test brake page
    FALSE,                                                  //!< bogBreakInBrakePageActive [[-]] Flag when user is on break in brake page
    FALSE,                                                  //!< bogSerialNumber [[-]] Machine Serial Number
    FALSE,                                                  //!< bogBPBasketValidate [[-]] Basket Panel Validate
    FALSE,                                                  //!< bogKeyFilterOverload [[-]] Overload Filter Key
    FALSE,                                                  //!< bogKeyNextMode [[-]] Select next mode
    FALSE,                                                  //!< bogKeyPrevMode [[-]] Select Previous Mode
    FALSE,                                                  //!< bogKeySignalDanger [[-]] Select Signal Danger Mode
    FALSE,                                                  //!< bogKeyFlashLightON [[-]] Force Flash Light ON
    FALSE,                                                  //!< bogKeyCalibMastMin [[-]] Key Calibration Min
    FALSE,                                                  //!< bogKeyCalibMastMax [[-]] Key Calibration Max
    FALSE,                                                  //!< bogKeyCalibMastValid [[-]] Key Calibration Validation
    FALSE,                                                  //!< bogKeyGeneratorActivate [[-]] Key Generator Activation
    FALSE,                                                  //!< bogKeyWhiteLights15746 [[-]] Key whiite lights 15746
    FALSE,                                                  //!< bogFixe2ndParkBrakeSelect [[-]] Fixe 2nd Park Brake Select
    FALSE,                                                  //!< bogOsci2ndParkBrakeSelect [[-]] Osci 2nd Park Brake Select
    FALSE                                                   //!< bogKeyRazController [[-]] new signal
};

const TCanSigRecVal_TSC1 gCsr_ctRecDat_TSC1 =
{
    //!< OverrideControlMode
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TUINT8, TUINT8, 0, 8, 0, 0, 1, 1 }, 
     { U8_MIN, U8_MAX, 0, 0 },
    //!< RequestedEngineSpeed
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TUINT16, TUINT16, 8, 16, 0, 0, 1, 8 }, 
     { U16_MIN, U16_MAX, 0, 0 },
    //!< RequestedTorqueLimit
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TUINT8, TINT8, 24, 8, 0, -125, 1, 1 }, 
     { U8_MIN, 250, 0, 0 },
    //!< TSC1ControlPurpose
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TUINT8, TUINT8, 32, 8, 0, 0, 1, 1 }, 
     { U8_MIN, U8_MAX, U8_MAX, U8_MAX },
    //!< RequestedEngineTorque
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TUINT8, TUINT8, 40, 8, 0, 0, 1, 8 }, 
     { U8_MIN, U8_MAX, U8_MAX, U8_MAX },
    //!< MessageCounterChecksum
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TUINT8, TUINT8, 56, 8, 0, 0, 1, 1 }, 
     { U8_MIN, U8_MAX, 0, 0 }
};

static ESigSta mCsr_aeRecErr_tTSC1[6] =
{
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY
};

static TCanSigRecOldValTSC1 mCsr_tOldDat_tTSC1 =
{
    0,                                                      //!< u8OverrideControlMode [] new signal
    0,                                                      //!< u16RequestedEngineSpeed [rpm] new signal
    0,                                                      //!< i8RequestedTorqueLimit [%] new signal
    U8_MAX,                                                 //!< u8TSC1ControlPurpose [] new signal
    U8_MAX,                                                 //!< u8RequestedEngineTorque [%] new signal
    0                                                       //!< u8MessageCounterChecksum [] new signal
};

extern TCanSigRecTSC1 gCsr_tTSC1;
static const TRecDat mCsr_actRecDat_tTSC1[6] =
{
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_TSC1.tCsrInfo_u8OverrideControlMode, (TVoid*)&gCsr_ctRecDat_TSC1.tCsrRng_u8OverrideControlMode,
        (TVoid*)&gCsr_tTSC1.u8OverrideControlMode, (TVoid*)&mCsr_tOldDat_tTSC1.u8OverrideControlMode, &mCsr_aeRecErr_tTSC1[0],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_TSC1.tCsrInfo_u16RequestedEngineSpeed, (TVoid*)&gCsr_ctRecDat_TSC1.tCsrRng_u16RequestedEngineSpeed,
        (TVoid*)&gCsr_tTSC1.u16RequestedEngineSpeed, (TVoid*)&mCsr_tOldDat_tTSC1.u16RequestedEngineSpeed, &mCsr_aeRecErr_tTSC1[1],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_TSC1.tCsrInfo_i8RequestedTorqueLimit, (TVoid*)&gCsr_ctRecDat_TSC1.tCsrRng_i8RequestedTorqueLimit,
        (TVoid*)&gCsr_tTSC1.i8RequestedTorqueLimit, (TVoid*)&mCsr_tOldDat_tTSC1.u8RequestedTorqueLimit, &mCsr_aeRecErr_tTSC1[2],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_TSC1.tCsrInfo_u8TSC1ControlPurpose, (TVoid*)&gCsr_ctRecDat_TSC1.tCsrRng_u8TSC1ControlPurpose,
        (TVoid*)&gCsr_tTSC1.u8TSC1ControlPurpose, (TVoid*)&mCsr_tOldDat_tTSC1.u8TSC1ControlPurpose, &mCsr_aeRecErr_tTSC1[3],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_TSC1.tCsrInfo_u8RequestedEngineTorque, (TVoid*)&gCsr_ctRecDat_TSC1.tCsrRng_u8RequestedEngineTorque,
        (TVoid*)&gCsr_tTSC1.u8RequestedEngineTorque, (TVoid*)&mCsr_tOldDat_tTSC1.u8RequestedEngineTorque, &mCsr_aeRecErr_tTSC1[4],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_TSC1.tCsrInfo_u8MessageCounterChecksum, (TVoid*)&gCsr_ctRecDat_TSC1.tCsrRng_u8MessageCounterChecksum,
        (TVoid*)&gCsr_tTSC1.u8MessageCounterChecksum, (TVoid*)&mCsr_tOldDat_tTSC1.u8MessageCounterChecksum, &mCsr_aeRecErr_tTSC1[5],
        NULL, NULL
    }
};

static const TCanSigRecRoot mCsr_ctRoot_TSC1 =
{
    "TSC1",                                                 //!< achName - [STR] Name TSC1
    8,                                                      //!< u8Dlc - [NUM] DLC of Can Message
    0xff,                                                   //!< u8CanByteDflt - [NUM] CAN Message default
    DATA_INTEL,                                             //!< eCanFormat - [NUM] CAN Format
    0xFF,                                                   //!< u8MasterReceiveId - [NUM] Receive Id
    6,                                                      //!< u8RecCnt - [NUM] Count of Recorde
    &mCsr_actRecDat_tTSC1[0],                               //!< ptRec - [NUM] Pointer to Record Values
    45,                                                     //!< u16RecNo - [NUM] Record Number
    CSR_STAMP                                               //!< u16Stamp - [NUM] Safety stamp
};

TCanSigRecTSC1 gCsr_tTSC1 =
{
    &mCsr_ctRoot_TSC1,                                      //!< *cptRoot [POI] Root connection
    (((0 * 1)/1)+0),                                        //!< u8OverrideControlMode [] new signal
    (((0 * 1)/8)+0),                                        //!< u16RequestedEngineSpeed [rpm] new signal
    (((0 * 1)/1)+(-125)),                                   //!< i8RequestedTorqueLimit [%] new signal
    (((U8_MAX * 1)/1)+0),                                   //!< u8TSC1ControlPurpose [] new signal
    (((U8_MAX * 1)/8)+0),                                   //!< u8RequestedEngineTorque [%] new signal
    (((0 * 1)/1)+0)                                         //!< u8MessageCounterChecksum [] new signal
};

const TCanSigRecVal_EEC1 gCsr_ctRecDat_EEC1 =
{
    //!< EngineTorqueMode
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TUINT8, TUINT8, 0, 8, 0, 0, 1, 1 }, 
     { U8_MIN, U8_MAX, 0, 0 },
    //!< DriversDemandEnginePrctTorque
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TUINT8, TINT8, 8, 8, 0, -125, 1, 1 }, 
     { U8_MIN, 250, 0, 0 },
    //!< ActualEnginePercentTorque
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TUINT8, TINT8, 16, 8, 0, -125, 1, 1 }, 
     { U8_MIN, 250, 0, 0 },
    //!< EngineSpeed
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TUINT16, TUINT16, 24, 16, 0, 0, 1, 8 }, 
     { U16_MIN, U16_MAX, 0, 0 },
    //!< SrcAddrOfCtrllingDevForEngCtrl
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TUINT8, TUINT8, 40, 8, 0, 0, 1, 1 }, 
     { U8_MIN, U8_MAX, 0, 0 },
    //!< EngineStarterMode
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TUINT8, TUINT8, 48, 8, 0, 0, 1, 1 }, 
     { U8_MIN, U8_MAX, 0, 0 },
    //!< EngineDemandPercentTorque
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TUINT8, TINT8, 56, 8, 0, -125, 1, 1 }, 
     { U8_MIN, 250, 0, 0 }
};

static ESigSta mCsr_aeRecErr_tEEC1[7] =
{
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY
};

static TCanSigRecOldValEEC1 mCsr_tOldDat_tEEC1 =
{
    0,                                                      //!< u8EngineTorqueMode [[-]] new signal
    0,                                                      //!< i8DriversDemandEnginePrctTorque [[-]] new signal
    0,                                                      //!< i8ActualEnginePercentTorque [[-]] new signal
    0,                                                      //!< u16EngineSpeed [[-]] new signal
    0,                                                      //!< u8SrcAddrOfCtrllingDevForEngCtrl [[-]] new signal
    0,                                                      //!< u8EngineStarterMode [[-]] new signal
    0                                                       //!< i8EngineDemandPercentTorque [[-]] new signal
};

extern TCanSigRecEEC1 gCsr_tEEC1;
static const TRecDat mCsr_actRecDat_tEEC1[7] =
{
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_EEC1.tCsrInfo_u8EngineTorqueMode, (TVoid*)&gCsr_ctRecDat_EEC1.tCsrRng_u8EngineTorqueMode,
        (TVoid*)&gCsr_tEEC1.u8EngineTorqueMode, (TVoid*)&mCsr_tOldDat_tEEC1.u8EngineTorqueMode, &mCsr_aeRecErr_tEEC1[0],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_EEC1.tCsrInfo_i8DriversDemandEnginePrctTorque, (TVoid*)&gCsr_ctRecDat_EEC1.tCsrRng_i8DriversDemandEnginePrctTorque,
        (TVoid*)&gCsr_tEEC1.i8DriversDemandEnginePrctTorque, (TVoid*)&mCsr_tOldDat_tEEC1.u8DriversDemandEnginePrctTorque, &mCsr_aeRecErr_tEEC1[1],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_EEC1.tCsrInfo_i8ActualEnginePercentTorque, (TVoid*)&gCsr_ctRecDat_EEC1.tCsrRng_i8ActualEnginePercentTorque,
        (TVoid*)&gCsr_tEEC1.i8ActualEnginePercentTorque, (TVoid*)&mCsr_tOldDat_tEEC1.u8ActualEnginePercentTorque, &mCsr_aeRecErr_tEEC1[2],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_EEC1.tCsrInfo_u16EngineSpeed, (TVoid*)&gCsr_ctRecDat_EEC1.tCsrRng_u16EngineSpeed,
        (TVoid*)&gCsr_tEEC1.u16EngineSpeed, (TVoid*)&mCsr_tOldDat_tEEC1.u16EngineSpeed, &mCsr_aeRecErr_tEEC1[3],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_EEC1.tCsrInfo_u8SrcAddrOfCtrllingDevForEngCtrl, (TVoid*)&gCsr_ctRecDat_EEC1.tCsrRng_u8SrcAddrOfCtrllingDevForEngCtrl,
        (TVoid*)&gCsr_tEEC1.u8SrcAddrOfCtrllingDevForEngCtrl, (TVoid*)&mCsr_tOldDat_tEEC1.u8SrcAddrOfCtrllingDevForEngCtrl, &mCsr_aeRecErr_tEEC1[4],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_EEC1.tCsrInfo_u8EngineStarterMode, (TVoid*)&gCsr_ctRecDat_EEC1.tCsrRng_u8EngineStarterMode,
        (TVoid*)&gCsr_tEEC1.u8EngineStarterMode, (TVoid*)&mCsr_tOldDat_tEEC1.u8EngineStarterMode, &mCsr_aeRecErr_tEEC1[5],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_EEC1.tCsrInfo_i8EngineDemandPercentTorque, (TVoid*)&gCsr_ctRecDat_EEC1.tCsrRng_i8EngineDemandPercentTorque,
        (TVoid*)&gCsr_tEEC1.i8EngineDemandPercentTorque, (TVoid*)&mCsr_tOldDat_tEEC1.u8EngineDemandPercentTorque, &mCsr_aeRecErr_tEEC1[6],
        NULL, NULL
    }
};

static const TCanSigRecRoot mCsr_ctRoot_EEC1 =
{
    "EEC1",                                                 //!< achName - [STR] Name EEC1
    8,                                                      //!< u8Dlc - [NUM] DLC of Can Message
    0xff,                                                   //!< u8CanByteDflt - [NUM] CAN Message default
    DATA_INTEL,                                             //!< eCanFormat - [NUM] CAN Format
    0xFF,                                                   //!< u8MasterReceiveId - [NUM] Receive Id
    7,                                                      //!< u8RecCnt - [NUM] Count of Recorde
    &mCsr_actRecDat_tEEC1[0],                               //!< ptRec - [NUM] Pointer to Record Values
    46,                                                     //!< u16RecNo - [NUM] Record Number
    CSR_STAMP                                               //!< u16Stamp - [NUM] Safety stamp
};

TCanSigRecEEC1 gCsr_tEEC1 =
{
    &mCsr_ctRoot_EEC1,                                      //!< *cptRoot [POI] Root connection
    (((0 * 1)/1)+0),                                        //!< u8EngineTorqueMode [[-]] new signal
    (((0 * 1)/1)+(-125)),                                   //!< i8DriversDemandEnginePrctTorque [%] new signal
    (((0 * 1)/1)+(-125)),                                   //!< i8ActualEnginePercentTorque [%] new signal
    (((0 * 1)/8)+0),                                        //!< u16EngineSpeed [rpm] new signal
    (((0 * 1)/1)+0),                                        //!< u8SrcAddrOfCtrllingDevForEngCtrl [] new signal
    (((0 * 1)/1)+0),                                        //!< u8EngineStarterMode [] new signal
    (((0 * 1)/1)+(-125))                                    //!< i8EngineDemandPercentTorque [%] new signal
};

const TCanSigRecVal_EOI gCsr_ctRecDat_EOI =
{
    //!< EngineOperatingState
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, EMOTORSTATE_TYPE, EMOTORSTATE_TYPE, 0, 4, 0, 0, 1, 1 }, 
     { GE_Stopped, GE_PostRun, GE_Stopped, GE_Stopped },
    //!< FuelPumpPrimerControl
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 4, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< EngineStarterMotorRelayControl
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 6, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< TimeRemInEngOperatingState
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TUINT16, TUINT16, 8, 16, 0, 0, 1, 1 }, 
     { U16_MIN, U16_MAX, 0, 0 },
    //!< EngineFuelShutoffVentControl
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 24, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< EngineFuelShutoff1Control
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 26, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< EngineFuelShutoff2Control
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 28, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< EngFuelShutoffValveLeakCtrl
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 30, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< EngineOilPrimingPumpControl
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 32, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< EngineOilPreHeaterControl
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 34, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< EngElectrclSystPwrConservCtrl
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 36, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< EnginePreHeaterControl
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 38, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< EngineCoolantPumpControl
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 40, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< EngControlledShutdownReq
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 42, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< EngEmrgncyShutdownIndication
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 44, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< EngColdAmbtElevatedIdleStatus
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 46, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< EngineDerateRequest
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TUINT8, TUINT8, 56, 8, 0, 0, 4, 10 }, 
     { U8_MIN, U8_MAX, 0, 0 }
};

static ESigSta mCsr_aeRecErr_tEOI[17] =
{
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY
};

static TCanSigRecOldValEOI mCsr_tOldDat_tEOI =
{
    GE_Stopped,                                             //!< eEngineOperatingState [] new signal
    FALSE,                                                  //!< boFuelPumpPrimerControl [] new signal
    FALSE,                                                  //!< boEngineStarterMotorRelayControl [] new signal
    0,                                                      //!< u16TimeRemInEngOperatingState [s] new signal
    FALSE,                                                  //!< boEngineFuelShutoffVentControl [] new signal
    FALSE,                                                  //!< boEngineFuelShutoff1Control [] new signal
    FALSE,                                                  //!< boEngineFuelShutoff2Control [] new signal
    FALSE,                                                  //!< boEngFuelShutoffValveLeakCtrl [] new signal
    FALSE,                                                  //!< boEngineOilPrimingPumpControl [] new signal
    FALSE,                                                  //!< boEngineOilPreHeaterControl [] new signal
    FALSE,                                                  //!< boEngElectrclSystPwrConservCtrl [] new signal
    FALSE,                                                  //!< boEnginePreHeaterControl [] new signal
    FALSE,                                                  //!< boEngineCoolantPumpControl [] new signal
    FALSE,                                                  //!< boEngControlledShutdownReq [] new signal
    FALSE,                                                  //!< boEngEmrgncyShutdownIndication [] new signal
    FALSE,                                                  //!< boEngColdAmbtElevatedIdleStatus [] new signal
    0                                                       //!< u8EngineDerateRequest [%] new signal
};

extern TCanSigRecEOI gCsr_tEOI;
static const TRecDat mCsr_actRecDat_tEOI[17] =
{
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_EOI.tCsrInfo_eEngineOperatingState, (TVoid*)&gCsr_ctRecDat_EOI.tCsrRng_eEngineOperatingState,
        (TVoid*)&gCsr_tEOI.eEngineOperatingState, (TVoid*)&mCsr_tOldDat_tEOI.eEngineOperatingState, &mCsr_aeRecErr_tEOI[0],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_EOI.tCsrInfo_boFuelPumpPrimerControl, (TVoid*)&gCsr_ctRecDat_EOI.tCsrRng_boFuelPumpPrimerControl,
        (TVoid*)&gCsr_tEOI.boFuelPumpPrimerControl, (TVoid*)&mCsr_tOldDat_tEOI.boFuelPumpPrimerControl, &mCsr_aeRecErr_tEOI[1],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_EOI.tCsrInfo_boEngineStarterMotorRelayControl, (TVoid*)&gCsr_ctRecDat_EOI.tCsrRng_boEngineStarterMotorRelayControl,
        (TVoid*)&gCsr_tEOI.boEngineStarterMotorRelayControl, (TVoid*)&mCsr_tOldDat_tEOI.boEngineStarterMotorRelayControl, &mCsr_aeRecErr_tEOI[2],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_EOI.tCsrInfo_u16TimeRemInEngOperatingState, (TVoid*)&gCsr_ctRecDat_EOI.tCsrRng_u16TimeRemInEngOperatingState,
        (TVoid*)&gCsr_tEOI.u16TimeRemInEngOperatingState, (TVoid*)&mCsr_tOldDat_tEOI.u16TimeRemInEngOperatingState, &mCsr_aeRecErr_tEOI[3],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_EOI.tCsrInfo_boEngineFuelShutoffVentControl, (TVoid*)&gCsr_ctRecDat_EOI.tCsrRng_boEngineFuelShutoffVentControl,
        (TVoid*)&gCsr_tEOI.boEngineFuelShutoffVentControl, (TVoid*)&mCsr_tOldDat_tEOI.boEngineFuelShutoffVentControl, &mCsr_aeRecErr_tEOI[4],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_EOI.tCsrInfo_boEngineFuelShutoff1Control, (TVoid*)&gCsr_ctRecDat_EOI.tCsrRng_boEngineFuelShutoff1Control,
        (TVoid*)&gCsr_tEOI.boEngineFuelShutoff1Control, (TVoid*)&mCsr_tOldDat_tEOI.boEngineFuelShutoff1Control, &mCsr_aeRecErr_tEOI[5],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_EOI.tCsrInfo_boEngineFuelShutoff2Control, (TVoid*)&gCsr_ctRecDat_EOI.tCsrRng_boEngineFuelShutoff2Control,
        (TVoid*)&gCsr_tEOI.boEngineFuelShutoff2Control, (TVoid*)&mCsr_tOldDat_tEOI.boEngineFuelShutoff2Control, &mCsr_aeRecErr_tEOI[6],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_EOI.tCsrInfo_boEngFuelShutoffValveLeakCtrl, (TVoid*)&gCsr_ctRecDat_EOI.tCsrRng_boEngFuelShutoffValveLeakCtrl,
        (TVoid*)&gCsr_tEOI.boEngFuelShutoffValveLeakCtrl, (TVoid*)&mCsr_tOldDat_tEOI.boEngFuelShutoffValveLeakCtrl, &mCsr_aeRecErr_tEOI[7],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_EOI.tCsrInfo_boEngineOilPrimingPumpControl, (TVoid*)&gCsr_ctRecDat_EOI.tCsrRng_boEngineOilPrimingPumpControl,
        (TVoid*)&gCsr_tEOI.boEngineOilPrimingPumpControl, (TVoid*)&mCsr_tOldDat_tEOI.boEngineOilPrimingPumpControl, &mCsr_aeRecErr_tEOI[8],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_EOI.tCsrInfo_boEngineOilPreHeaterControl, (TVoid*)&gCsr_ctRecDat_EOI.tCsrRng_boEngineOilPreHeaterControl,
        (TVoid*)&gCsr_tEOI.boEngineOilPreHeaterControl, (TVoid*)&mCsr_tOldDat_tEOI.boEngineOilPreHeaterControl, &mCsr_aeRecErr_tEOI[9],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_EOI.tCsrInfo_boEngElectrclSystPwrConservCtrl, (TVoid*)&gCsr_ctRecDat_EOI.tCsrRng_boEngElectrclSystPwrConservCtrl,
        (TVoid*)&gCsr_tEOI.boEngElectrclSystPwrConservCtrl, (TVoid*)&mCsr_tOldDat_tEOI.boEngElectrclSystPwrConservCtrl, &mCsr_aeRecErr_tEOI[10],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_EOI.tCsrInfo_boEnginePreHeaterControl, (TVoid*)&gCsr_ctRecDat_EOI.tCsrRng_boEnginePreHeaterControl,
        (TVoid*)&gCsr_tEOI.boEnginePreHeaterControl, (TVoid*)&mCsr_tOldDat_tEOI.boEnginePreHeaterControl, &mCsr_aeRecErr_tEOI[11],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_EOI.tCsrInfo_boEngineCoolantPumpControl, (TVoid*)&gCsr_ctRecDat_EOI.tCsrRng_boEngineCoolantPumpControl,
        (TVoid*)&gCsr_tEOI.boEngineCoolantPumpControl, (TVoid*)&mCsr_tOldDat_tEOI.boEngineCoolantPumpControl, &mCsr_aeRecErr_tEOI[12],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_EOI.tCsrInfo_boEngControlledShutdownReq, (TVoid*)&gCsr_ctRecDat_EOI.tCsrRng_boEngControlledShutdownReq,
        (TVoid*)&gCsr_tEOI.boEngControlledShutdownReq, (TVoid*)&mCsr_tOldDat_tEOI.boEngControlledShutdownReq, &mCsr_aeRecErr_tEOI[13],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_EOI.tCsrInfo_boEngEmrgncyShutdownIndication, (TVoid*)&gCsr_ctRecDat_EOI.tCsrRng_boEngEmrgncyShutdownIndication,
        (TVoid*)&gCsr_tEOI.boEngEmrgncyShutdownIndication, (TVoid*)&mCsr_tOldDat_tEOI.boEngEmrgncyShutdownIndication, &mCsr_aeRecErr_tEOI[14],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_EOI.tCsrInfo_boEngColdAmbtElevatedIdleStatus, (TVoid*)&gCsr_ctRecDat_EOI.tCsrRng_boEngColdAmbtElevatedIdleStatus,
        (TVoid*)&gCsr_tEOI.boEngColdAmbtElevatedIdleStatus, (TVoid*)&mCsr_tOldDat_tEOI.boEngColdAmbtElevatedIdleStatus, &mCsr_aeRecErr_tEOI[15],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_EOI.tCsrInfo_u8EngineDerateRequest, (TVoid*)&gCsr_ctRecDat_EOI.tCsrRng_u8EngineDerateRequest,
        (TVoid*)&gCsr_tEOI.u8EngineDerateRequest, (TVoid*)&mCsr_tOldDat_tEOI.u8EngineDerateRequest, &mCsr_aeRecErr_tEOI[16],
        NULL, NULL
    }
};

static const TCanSigRecRoot mCsr_ctRoot_EOI =
{
    "EOI",                                                  //!< achName - [STR] Name EOI
    8,                                                      //!< u8Dlc - [NUM] DLC of Can Message
    0xff,                                                   //!< u8CanByteDflt - [NUM] CAN Message default
    DATA_INTEL,                                             //!< eCanFormat - [NUM] CAN Format
    0xFF,                                                   //!< u8MasterReceiveId - [NUM] Receive Id
    17,                                                     //!< u8RecCnt - [NUM] Count of Recorde
    &mCsr_actRecDat_tEOI[0],                                //!< ptRec - [NUM] Pointer to Record Values
    47,                                                     //!< u16RecNo - [NUM] Record Number
    CSR_STAMP                                               //!< u16Stamp - [NUM] Safety stamp
};

TCanSigRecEOI gCsr_tEOI =
{
    &mCsr_ctRoot_EOI,                                       //!< *cptRoot [POI] Root connection
    GE_Stopped,                                             //!< eEngineOperatingState [] new signal
    FALSE,                                                  //!< boFuelPumpPrimerControl [] new signal
    FALSE,                                                  //!< boEngineStarterMotorRelayControl [] new signal
    (((0 * 1)/1)+0),                                        //!< u16TimeRemInEngOperatingState [s] new signal
    FALSE,                                                  //!< boEngineFuelShutoffVentControl [[-]] new signal
    FALSE,                                                  //!< boEngineFuelShutoff1Control [[-]] new signal
    FALSE,                                                  //!< boEngineFuelShutoff2Control [[-]] new signal
    FALSE,                                                  //!< boEngFuelShutoffValveLeakCtrl [[-]] new signal
    FALSE,                                                  //!< boEngineOilPrimingPumpControl [[-]] new signal
    FALSE,                                                  //!< boEngineOilPreHeaterControl [[-]] new signal
    FALSE,                                                  //!< boEngElectrclSystPwrConservCtrl [[-]] new signal
    FALSE,                                                  //!< boEnginePreHeaterControl [[-]] new signal
    FALSE,                                                  //!< boEngineCoolantPumpControl [[-]] new signal
    FALSE,                                                  //!< boEngControlledShutdownReq [[-]] new signal
    FALSE,                                                  //!< boEngEmrgncyShutdownIndication [[-]] new signal
    FALSE,                                                  //!< boEngColdAmbtElevatedIdleStatus [[-]] new signal
    (((0 * 4)/10)+0)                                        //!< u8EngineDerateRequest [%] new signal
};

const TCanSigRecVal_EBC1 gCsr_ctRecDat_EBC1 =
{
    //!< ASREngineControlActive
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, ESTATEBOOL2BITS_TYPE, ESTATEBOOL2BITS_TYPE, 0, 2, 0, 0, 1, 1 }, 
     { GE_OFF, GE_NA, GE_OFF, GE_OFF },
    //!< ASRBrakeControlActive
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, ESTATEBOOL2BITS_TYPE, ESTATEBOOL2BITS_TYPE, 2, 2, 0, 0, 1, 1 }, 
     { GE_OFF, GE_NA, GE_OFF, GE_OFF },
    //!< AntiLockBrakingActive
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, ESTATEBOOL2BITS_TYPE, ESTATEBOOL2BITS_TYPE, 4, 2, 0, 0, 1, 1 }, 
     { GE_OFF, GE_NA, GE_OFF, GE_OFF },
    //!< EBSBrakeSwitch
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, ESTATEBOOL2BITS_TYPE, ESTATEBOOL2BITS_TYPE, 6, 2, 0, 0, 1, 1 }, 
     { GE_OFF, GE_NA, GE_OFF, GE_OFF },
    //!< BrakePedalPosition
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TUINT8, TUINT8, 8, 8, 0, 0, 4, 10 }, 
     { U8_MIN, U8_MAX, 0, 0 },
    //!< ABSOffRoadSwitch
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, ESTATEBOOL2BITS_TYPE, ESTATEBOOL2BITS_TYPE, 16, 2, 0, 0, 1, 1 }, 
     { GE_OFF, GE_NA, GE_OFF, GE_OFF },
    //!< ASROffRoadSwitch
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, ESTATEBOOL2BITS_TYPE, ESTATEBOOL2BITS_TYPE, 18, 2, 0, 0, 1, 1 }, 
     { GE_OFF, GE_NA, GE_OFF, GE_OFF },
    //!< ASRHillHolderSwitch
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, ESTATEBOOL2BITS_TYPE, ESTATEBOOL2BITS_TYPE, 20, 2, 0, 0, 1, 1 }, 
     { GE_OFF, GE_NA, GE_OFF, GE_OFF },
    //!< TractionControlOverrideSwitch
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, ESTATEBOOL2BITS_TYPE, ESTATEBOOL2BITS_TYPE, 22, 2, 0, 0, 1, 1 }, 
     { GE_OFF, GE_NA, GE_OFF, GE_OFF },
    //!< AcceleratorInterlockSwitch
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, ESTATEBOOL2BITS_TYPE, ESTATEBOOL2BITS_TYPE, 24, 2, 0, 0, 1, 1 }, 
     { GE_OFF, GE_NA, GE_OFF, GE_OFF },
    //!< EngineDerateSwitch
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, ESTATEBOOL2BITS_TYPE, ESTATEBOOL2BITS_TYPE, 26, 2, 0, 0, 1, 1 }, 
     { GE_OFF, GE_NA, GE_OFF, GE_OFF },
    //!< EngineAuxiliaryShutdownSwitch
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, ESTATEBOOL2BITS_TYPE, ESTATEBOOL2BITS_TYPE, 28, 2, 0, 0, 1, 1 }, 
     { GE_OFF, GE_NA, GE_OFF, GE_OFF },
    //!< RemoteAcceleratorEnableSwitch
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, ESTATEBOOL2BITS_TYPE, ESTATEBOOL2BITS_TYPE, 30, 2, 0, 0, 1, 1 }, 
     { GE_OFF, GE_NA, GE_OFF, GE_OFF },
    //!< EngineRetarderSelection
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TUINT8, TUINT8, 32, 8, 0, 0, 4, 10 }, 
     { U8_MIN, U8_MAX, 0, 0 },
    //!< ABSFullyOperational
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, ESTATEBOOL2BITS_TYPE, ESTATEBOOL2BITS_TYPE, 40, 2, 0, 0, 1, 1 }, 
     { GE_OFF, GE_NA, GE_OFF, GE_OFF },
    //!< EBSRedWarningSignal
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, ESTATEBOOL2BITS_TYPE, ESTATEBOOL2BITS_TYPE, 42, 2, 0, 0, 1, 1 }, 
     { GE_OFF, GE_NA, GE_OFF, GE_OFF },
    //!< ABSEBSAmberWarningSignal
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, ESTATEBOOL2BITS_TYPE, ESTATEBOOL2BITS_TYPE, 44, 2, 0, 0, 1, 1 }, 
     { GE_OFF, GE_NA, GE_OFF, GE_OFF },
    //!< ATCASRInformationSignal
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, ESTATEBOOL2BITS_TYPE, ESTATEBOOL2BITS_TYPE, 46, 2, 0, 0, 1, 1 }, 
     { GE_OFF, GE_NA, GE_OFF, GE_OFF },
    //!< SrcAddrOfCtrllingDevForBrkCtrl
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TUINT8, TUINT8, 48, 8, 0, 0, 1, 1 }, 
     { U8_MIN, U8_MAX, 0, 0 },
    //!< HaltBrakeSwitch
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, ESTATEBOOL2BITS_TYPE, ESTATEBOOL2BITS_TYPE, 58, 2, 0, 0, 1, 1 }, 
     { GE_OFF, GE_NA, GE_OFF, GE_OFF },
    //!< TrailerABSStatus
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, ESTATEBOOL2BITS_TYPE, ESTATEBOOL2BITS_TYPE, 60, 2, 0, 0, 1, 1 }, 
     { GE_OFF, GE_NA, GE_OFF, GE_OFF },
    //!< TractorMntdTrailerABSWarningSig
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, ESTATEBOOL2BITS_TYPE, ESTATEBOOL2BITS_TYPE, 62, 2, 0, 0, 1, 1 }, 
     { GE_OFF, GE_NA, GE_OFF, GE_OFF }
};

static ESigSta mCsr_aeRecErr_tEBC1[22] =
{
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY
};

static TCanSigRecOldValEBC1 mCsr_tOldDat_tEBC1 =
{
    GE_OFF,                                                 //!< eASREngineControlActive [[-]] new signal
    GE_OFF,                                                 //!< eASRBrakeControlActive [[-]] new signal
    GE_OFF,                                                 //!< eAntiLockBrakingActive [[-]] new signal
    GE_OFF,                                                 //!< eEBSBrakeSwitch [[-]] new signal
    0,                                                      //!< u8BrakePedalPosition [%] new signal
    GE_OFF,                                                 //!< eABSOffRoadSwitch [[-]] new signal
    GE_OFF,                                                 //!< eASROffRoadSwitch [[-]] new signal
    GE_OFF,                                                 //!< eASRHillHolderSwitch [[-]] new signal
    GE_OFF,                                                 //!< eTractionControlOverrideSwitch [[-]] new signal
    GE_OFF,                                                 //!< eAcceleratorInterlockSwitch [[-]] new signal
    GE_OFF,                                                 //!< eEngineDerateSwitch [[-]] new signal
    GE_OFF,                                                 //!< eEngineAuxiliaryShutdownSwitch [[-]] new signal
    GE_OFF,                                                 //!< eRemoteAcceleratorEnableSwitch [[-]] new signal
    0,                                                      //!< u8EngineRetarderSelection [%] new signal
    GE_OFF,                                                 //!< eABSFullyOperational [[-]] new signal
    GE_OFF,                                                 //!< eEBSRedWarningSignal [[-]] new signal
    GE_OFF,                                                 //!< eABSEBSAmberWarningSignal [[-]] new signal
    GE_OFF,                                                 //!< eATCASRInformationSignal [[-]] new signal
    0,                                                      //!< u8SrcAddrOfCtrllingDevForBrkCtrl [[-]] new signal
    GE_OFF,                                                 //!< eHaltBrakeSwitch [[-]] new signal
    GE_OFF,                                                 //!< eTrailerABSStatus [[-]] new signal
    GE_OFF                                                  //!< eTractorMntdTrailerABSWarningSig [[-]] new signal
};

extern TCanSigRecEBC1 gCsr_tEBC1;
static const TRecDat mCsr_actRecDat_tEBC1[22] =
{
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_EBC1.tCsrInfo_eASREngineControlActive, (TVoid*)&gCsr_ctRecDat_EBC1.tCsrRng_eASREngineControlActive,
        (TVoid*)&gCsr_tEBC1.eASREngineControlActive, (TVoid*)&mCsr_tOldDat_tEBC1.eASREngineControlActive, &mCsr_aeRecErr_tEBC1[0],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_EBC1.tCsrInfo_eASRBrakeControlActive, (TVoid*)&gCsr_ctRecDat_EBC1.tCsrRng_eASRBrakeControlActive,
        (TVoid*)&gCsr_tEBC1.eASRBrakeControlActive, (TVoid*)&mCsr_tOldDat_tEBC1.eASRBrakeControlActive, &mCsr_aeRecErr_tEBC1[1],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_EBC1.tCsrInfo_eAntiLockBrakingActive, (TVoid*)&gCsr_ctRecDat_EBC1.tCsrRng_eAntiLockBrakingActive,
        (TVoid*)&gCsr_tEBC1.eAntiLockBrakingActive, (TVoid*)&mCsr_tOldDat_tEBC1.eAntiLockBrakingActive, &mCsr_aeRecErr_tEBC1[2],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_EBC1.tCsrInfo_eEBSBrakeSwitch, (TVoid*)&gCsr_ctRecDat_EBC1.tCsrRng_eEBSBrakeSwitch,
        (TVoid*)&gCsr_tEBC1.eEBSBrakeSwitch, (TVoid*)&mCsr_tOldDat_tEBC1.eEBSBrakeSwitch, &mCsr_aeRecErr_tEBC1[3],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_EBC1.tCsrInfo_u8BrakePedalPosition, (TVoid*)&gCsr_ctRecDat_EBC1.tCsrRng_u8BrakePedalPosition,
        (TVoid*)&gCsr_tEBC1.u8BrakePedalPosition, (TVoid*)&mCsr_tOldDat_tEBC1.u8BrakePedalPosition, &mCsr_aeRecErr_tEBC1[4],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_EBC1.tCsrInfo_eABSOffRoadSwitch, (TVoid*)&gCsr_ctRecDat_EBC1.tCsrRng_eABSOffRoadSwitch,
        (TVoid*)&gCsr_tEBC1.eABSOffRoadSwitch, (TVoid*)&mCsr_tOldDat_tEBC1.eABSOffRoadSwitch, &mCsr_aeRecErr_tEBC1[5],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_EBC1.tCsrInfo_eASROffRoadSwitch, (TVoid*)&gCsr_ctRecDat_EBC1.tCsrRng_eASROffRoadSwitch,
        (TVoid*)&gCsr_tEBC1.eASROffRoadSwitch, (TVoid*)&mCsr_tOldDat_tEBC1.eASROffRoadSwitch, &mCsr_aeRecErr_tEBC1[6],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_EBC1.tCsrInfo_eASRHillHolderSwitch, (TVoid*)&gCsr_ctRecDat_EBC1.tCsrRng_eASRHillHolderSwitch,
        (TVoid*)&gCsr_tEBC1.eASRHillHolderSwitch, (TVoid*)&mCsr_tOldDat_tEBC1.eASRHillHolderSwitch, &mCsr_aeRecErr_tEBC1[7],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_EBC1.tCsrInfo_eTractionControlOverrideSwitch, (TVoid*)&gCsr_ctRecDat_EBC1.tCsrRng_eTractionControlOverrideSwitch,
        (TVoid*)&gCsr_tEBC1.eTractionControlOverrideSwitch, (TVoid*)&mCsr_tOldDat_tEBC1.eTractionControlOverrideSwitch, &mCsr_aeRecErr_tEBC1[8],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_EBC1.tCsrInfo_eAcceleratorInterlockSwitch, (TVoid*)&gCsr_ctRecDat_EBC1.tCsrRng_eAcceleratorInterlockSwitch,
        (TVoid*)&gCsr_tEBC1.eAcceleratorInterlockSwitch, (TVoid*)&mCsr_tOldDat_tEBC1.eAcceleratorInterlockSwitch, &mCsr_aeRecErr_tEBC1[9],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_EBC1.tCsrInfo_eEngineDerateSwitch, (TVoid*)&gCsr_ctRecDat_EBC1.tCsrRng_eEngineDerateSwitch,
        (TVoid*)&gCsr_tEBC1.eEngineDerateSwitch, (TVoid*)&mCsr_tOldDat_tEBC1.eEngineDerateSwitch, &mCsr_aeRecErr_tEBC1[10],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_EBC1.tCsrInfo_eEngineAuxiliaryShutdownSwitch, (TVoid*)&gCsr_ctRecDat_EBC1.tCsrRng_eEngineAuxiliaryShutdownSwitch,
        (TVoid*)&gCsr_tEBC1.eEngineAuxiliaryShutdownSwitch, (TVoid*)&mCsr_tOldDat_tEBC1.eEngineAuxiliaryShutdownSwitch, &mCsr_aeRecErr_tEBC1[11],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_EBC1.tCsrInfo_eRemoteAcceleratorEnableSwitch, (TVoid*)&gCsr_ctRecDat_EBC1.tCsrRng_eRemoteAcceleratorEnableSwitch,
        (TVoid*)&gCsr_tEBC1.eRemoteAcceleratorEnableSwitch, (TVoid*)&mCsr_tOldDat_tEBC1.eRemoteAcceleratorEnableSwitch, &mCsr_aeRecErr_tEBC1[12],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_EBC1.tCsrInfo_u8EngineRetarderSelection, (TVoid*)&gCsr_ctRecDat_EBC1.tCsrRng_u8EngineRetarderSelection,
        (TVoid*)&gCsr_tEBC1.u8EngineRetarderSelection, (TVoid*)&mCsr_tOldDat_tEBC1.u8EngineRetarderSelection, &mCsr_aeRecErr_tEBC1[13],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_EBC1.tCsrInfo_eABSFullyOperational, (TVoid*)&gCsr_ctRecDat_EBC1.tCsrRng_eABSFullyOperational,
        (TVoid*)&gCsr_tEBC1.eABSFullyOperational, (TVoid*)&mCsr_tOldDat_tEBC1.eABSFullyOperational, &mCsr_aeRecErr_tEBC1[14],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_EBC1.tCsrInfo_eEBSRedWarningSignal, (TVoid*)&gCsr_ctRecDat_EBC1.tCsrRng_eEBSRedWarningSignal,
        (TVoid*)&gCsr_tEBC1.eEBSRedWarningSignal, (TVoid*)&mCsr_tOldDat_tEBC1.eEBSRedWarningSignal, &mCsr_aeRecErr_tEBC1[15],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_EBC1.tCsrInfo_eABSEBSAmberWarningSignal, (TVoid*)&gCsr_ctRecDat_EBC1.tCsrRng_eABSEBSAmberWarningSignal,
        (TVoid*)&gCsr_tEBC1.eABSEBSAmberWarningSignal, (TVoid*)&mCsr_tOldDat_tEBC1.eABSEBSAmberWarningSignal, &mCsr_aeRecErr_tEBC1[16],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_EBC1.tCsrInfo_eATCASRInformationSignal, (TVoid*)&gCsr_ctRecDat_EBC1.tCsrRng_eATCASRInformationSignal,
        (TVoid*)&gCsr_tEBC1.eATCASRInformationSignal, (TVoid*)&mCsr_tOldDat_tEBC1.eATCASRInformationSignal, &mCsr_aeRecErr_tEBC1[17],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_EBC1.tCsrInfo_u8SrcAddrOfCtrllingDevForBrkCtrl, (TVoid*)&gCsr_ctRecDat_EBC1.tCsrRng_u8SrcAddrOfCtrllingDevForBrkCtrl,
        (TVoid*)&gCsr_tEBC1.u8SrcAddrOfCtrllingDevForBrkCtrl, (TVoid*)&mCsr_tOldDat_tEBC1.u8SrcAddrOfCtrllingDevForBrkCtrl, &mCsr_aeRecErr_tEBC1[18],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_EBC1.tCsrInfo_eHaltBrakeSwitch, (TVoid*)&gCsr_ctRecDat_EBC1.tCsrRng_eHaltBrakeSwitch,
        (TVoid*)&gCsr_tEBC1.eHaltBrakeSwitch, (TVoid*)&mCsr_tOldDat_tEBC1.eHaltBrakeSwitch, &mCsr_aeRecErr_tEBC1[19],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_EBC1.tCsrInfo_eTrailerABSStatus, (TVoid*)&gCsr_ctRecDat_EBC1.tCsrRng_eTrailerABSStatus,
        (TVoid*)&gCsr_tEBC1.eTrailerABSStatus, (TVoid*)&mCsr_tOldDat_tEBC1.eTrailerABSStatus, &mCsr_aeRecErr_tEBC1[20],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_EBC1.tCsrInfo_eTractorMntdTrailerABSWarningSig, (TVoid*)&gCsr_ctRecDat_EBC1.tCsrRng_eTractorMntdTrailerABSWarningSig,
        (TVoid*)&gCsr_tEBC1.eTractorMntdTrailerABSWarningSig, (TVoid*)&mCsr_tOldDat_tEBC1.eTractorMntdTrailerABSWarningSig, &mCsr_aeRecErr_tEBC1[21],
        NULL, NULL
    }
};

static const TCanSigRecRoot mCsr_ctRoot_EBC1 =
{
    "EBC1",                                                 //!< achName - [STR] Name EBC1
    8,                                                      //!< u8Dlc - [NUM] DLC of Can Message
    0xff,                                                   //!< u8CanByteDflt - [NUM] CAN Message default
    DATA_INTEL,                                             //!< eCanFormat - [NUM] CAN Format
    0xFF,                                                   //!< u8MasterReceiveId - [NUM] Receive Id
    22,                                                     //!< u8RecCnt - [NUM] Count of Recorde
    &mCsr_actRecDat_tEBC1[0],                               //!< ptRec - [NUM] Pointer to Record Values
    48,                                                     //!< u16RecNo - [NUM] Record Number
    CSR_STAMP                                               //!< u16Stamp - [NUM] Safety stamp
};

TCanSigRecEBC1 gCsr_tEBC1 =
{
    &mCsr_ctRoot_EBC1,                                      //!< *cptRoot [POI] Root connection
    GE_OFF,                                                 //!< eASREngineControlActive [] new signal
    GE_OFF,                                                 //!< eASRBrakeControlActive [] new signal
    GE_OFF,                                                 //!< eAntiLockBrakingActive [] new signal
    GE_OFF,                                                 //!< eEBSBrakeSwitch [] new signal
    (((0 * 4)/10)+0),                                       //!< u8BrakePedalPosition [%] new signal
    GE_OFF,                                                 //!< eABSOffRoadSwitch [] new signal
    GE_OFF,                                                 //!< eASROffRoadSwitch [] new signal
    GE_OFF,                                                 //!< eASRHillHolderSwitch [] new signal
    GE_OFF,                                                 //!< eTractionControlOverrideSwitch [] new signal
    GE_OFF,                                                 //!< eAcceleratorInterlockSwitch [] new signal
    GE_OFF,                                                 //!< eEngineDerateSwitch [] new signal
    GE_OFF,                                                 //!< eEngineAuxiliaryShutdownSwitch [] new signal
    GE_OFF,                                                 //!< eRemoteAcceleratorEnableSwitch [] new signal
    (((0 * 4)/10)+0),                                       //!< u8EngineRetarderSelection [%] new signal
    GE_OFF,                                                 //!< eABSFullyOperational [] new signal
    GE_OFF,                                                 //!< eEBSRedWarningSignal [] new signal
    GE_OFF,                                                 //!< eABSEBSAmberWarningSignal [] new signal
    GE_OFF,                                                 //!< eATCASRInformationSignal [] new signal
    (((0 * 1)/1)+0),                                        //!< u8SrcAddrOfCtrllingDevForBrkCtrl [] new signal
    GE_OFF,                                                 //!< eHaltBrakeSwitch [] new signal
    GE_OFF,                                                 //!< eTrailerABSStatus [] new signal
    GE_OFF                                                  //!< eTractorMntdTrailerABSWarningSig [] new signal
};

const TCanSigRecVal_DLCD1 gCsr_ctRecDat_DLCD1 =
{
    //!< EngineProtectLampData
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, ESTATEBOOL2BITS_TYPE, ESTATEBOOL2BITS_TYPE, 0, 2, 0, 0, 1, 1 }, 
     { GE_OFF, GE_NA, GE_OFF, GE_OFF },
    //!< EngineAmberWarningLampData
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, ESTATEBOOL2BITS_TYPE, ESTATEBOOL2BITS_TYPE, 2, 2, 0, 0, 1, 1 }, 
     { GE_OFF, GE_NA, GE_OFF, GE_OFF },
    //!< EngineRedStopLampData
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, ESTATEBOOL2BITS_TYPE, ESTATEBOOL2BITS_TYPE, 4, 2, 0, 0, 1, 1 }, 
     { GE_OFF, GE_NA, GE_OFF, GE_OFF },
    //!< OBDMalfunctionIndicatorLampData
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, ESTATEBOOL2BITS_TYPE, ESTATEBOOL2BITS_TYPE, 6, 2, 0, 0, 1, 1 }, 
     { GE_OFF, GE_NA, GE_OFF, GE_OFF },
    //!< EngineBrakeActiveLampData
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, ESTATEBOOL2BITS_TYPE, ESTATEBOOL2BITS_TYPE, 8, 2, 0, 0, 1, 1 }, 
     { GE_OFF, GE_NA, GE_OFF, GE_OFF },
    //!< ComPrsionBrkEnblSwIndicLampDat
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, ESTATEBOOL2BITS_TYPE, ESTATEBOOL2BITS_TYPE, 10, 2, 0, 0, 1, 1 }, 
     { GE_OFF, GE_NA, GE_OFF, GE_OFF },
    //!< EngineOilPressureLowLampData
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, ESTATEBOOL2BITS_TYPE, ESTATEBOOL2BITS_TYPE, 12, 2, 0, 0, 1, 1 }, 
     { GE_OFF, GE_NA, GE_OFF, GE_OFF },
    //!< EngCoolntTempHighLampDat
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, ESTATEBOOL2BITS_TYPE, ESTATEBOOL2BITS_TYPE, 14, 2, 0, 0, 1, 1 }, 
     { GE_OFF, GE_NA, GE_OFF, GE_OFF },
    //!< EngineCoolantLevelLowLampData
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, ESTATEBOOL2BITS_TYPE, ESTATEBOOL2BITS_TYPE, 16, 2, 0, 0, 1, 1 }, 
     { GE_OFF, GE_NA, GE_OFF, GE_OFF },
    //!< EngineIdleMngmtActvLampData
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, ESTATEBOOL2BITS_TYPE, ESTATEBOOL2BITS_TYPE, 18, 2, 0, 0, 1, 1 }, 
     { GE_OFF, GE_NA, GE_OFF, GE_OFF },
    //!< EngAirFilterRestrictionLampDat
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, ESTATEBOOL2BITS_TYPE, ESTATEBOOL2BITS_TYPE, 20, 2, 0, 0, 1, 1 }, 
     { GE_OFF, GE_NA, GE_OFF, GE_OFF },
    //!< EngFuelFilterRestrictedLampDat
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, ESTATEBOOL2BITS_TYPE, ESTATEBOOL2BITS_TYPE, 22, 2, 0, 0, 1, 1 }, 
     { GE_OFF, GE_NA, GE_OFF, GE_OFF },
    //!< EngCtrlModule1RdyForUseLampDat
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, ESTATEBOOL2BITS_TYPE, ESTATEBOOL2BITS_TYPE, 24, 2, 0, 0, 1, 1 }, 
     { GE_OFF, GE_NA, GE_OFF, GE_OFF },
    //!< EngCtrlModule2RdyForUseLampDat
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, ESTATEBOOL2BITS_TYPE, ESTATEBOOL2BITS_TYPE, 26, 2, 0, 0, 1, 1 }, 
     { GE_OFF, GE_NA, GE_OFF, GE_OFF },
    //!< EngCtrlModule3RdyForUseLampDat
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, ESTATEBOOL2BITS_TYPE, ESTATEBOOL2BITS_TYPE, 28, 2, 0, 0, 1, 1 }, 
     { GE_OFF, GE_NA, GE_OFF, GE_OFF },
    //!< EngineSpeedHighLampData
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, ESTATEBOOL2BITS_TYPE, ESTATEBOOL2BITS_TYPE, 30, 2, 0, 0, 1, 1 }, 
     { GE_OFF, GE_NA, GE_OFF, GE_OFF },
    //!< EngineSpeedVeryHighLampData
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, ESTATEBOOL2BITS_TYPE, ESTATEBOOL2BITS_TYPE, 32, 2, 0, 0, 1, 1 }, 
     { GE_OFF, GE_NA, GE_OFF, GE_OFF },
    //!< VehicleAccltnRateLimitLampData
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, ESTATEBOOL2BITS_TYPE, ESTATEBOOL2BITS_TYPE, 34, 2, 0, 0, 1, 1 }, 
     { GE_OFF, GE_NA, GE_OFF, GE_OFF },
    //!< EngineWaitToStartLampData
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, ESTATEBOOL2BITS_TYPE, ESTATEBOOL2BITS_TYPE, 62, 2, 0, 0, 1, 1 }, 
     { GE_OFF, GE_NA, GE_OFF, GE_OFF }
};

static ESigSta mCsr_aeRecErr_tDLCD1[19] =
{
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY
};

static TCanSigRecOldValDLCD1 mCsr_tOldDat_tDLCD1 =
{
    GE_OFF,                                                 //!< eEngineProtectLampData [[-]] new signal
    GE_OFF,                                                 //!< eEngineAmberWarningLampData [[-]] new signal
    GE_OFF,                                                 //!< eEngineRedStopLampData [[-]] new signal
    GE_OFF,                                                 //!< eOBDMalfunctionIndicatorLampData [[-]] new signal
    GE_OFF,                                                 //!< eEngineBrakeActiveLampData [[-]] new signal
    GE_OFF,                                                 //!< eComPrsionBrkEnblSwIndicLampDat [[-]] new signal
    GE_OFF,                                                 //!< eEngineOilPressureLowLampData [[-]] new signal
    GE_OFF,                                                 //!< eEngCoolntTempHighLampDat [[-]] new signal
    GE_OFF,                                                 //!< eEngineCoolantLevelLowLampData [[-]] new signal
    GE_OFF,                                                 //!< eEngineIdleMngmtActvLampData [[-]] new signal
    GE_OFF,                                                 //!< eEngAirFilterRestrictionLampDat [[-]] new signal
    GE_OFF,                                                 //!< eEngFuelFilterRestrictedLampDat [[-]] new signal
    GE_OFF,                                                 //!< eEngCtrlModule1RdyForUseLampDat [[-]] new signal
    GE_OFF,                                                 //!< eEngCtrlModule2RdyForUseLampDat [[-]] new signal
    GE_OFF,                                                 //!< eEngCtrlModule3RdyForUseLampDat [[-]] new signal
    GE_OFF,                                                 //!< eEngineSpeedHighLampData [[-]] new signal
    GE_OFF,                                                 //!< eEngineSpeedVeryHighLampData [[-]] new signal
    GE_OFF,                                                 //!< eVehicleAccltnRateLimitLampData [[-]] new signal
    GE_OFF                                                  //!< eEngineWaitToStartLampData [[-]] new signal
};

extern TCanSigRecDLCD1 gCsr_tDLCD1;
static const TRecDat mCsr_actRecDat_tDLCD1[19] =
{
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_DLCD1.tCsrInfo_eEngineProtectLampData, (TVoid*)&gCsr_ctRecDat_DLCD1.tCsrRng_eEngineProtectLampData,
        (TVoid*)&gCsr_tDLCD1.eEngineProtectLampData, (TVoid*)&mCsr_tOldDat_tDLCD1.eEngineProtectLampData, &mCsr_aeRecErr_tDLCD1[0],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_DLCD1.tCsrInfo_eEngineAmberWarningLampData, (TVoid*)&gCsr_ctRecDat_DLCD1.tCsrRng_eEngineAmberWarningLampData,
        (TVoid*)&gCsr_tDLCD1.eEngineAmberWarningLampData, (TVoid*)&mCsr_tOldDat_tDLCD1.eEngineAmberWarningLampData, &mCsr_aeRecErr_tDLCD1[1],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_DLCD1.tCsrInfo_eEngineRedStopLampData, (TVoid*)&gCsr_ctRecDat_DLCD1.tCsrRng_eEngineRedStopLampData,
        (TVoid*)&gCsr_tDLCD1.eEngineRedStopLampData, (TVoid*)&mCsr_tOldDat_tDLCD1.eEngineRedStopLampData, &mCsr_aeRecErr_tDLCD1[2],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_DLCD1.tCsrInfo_eOBDMalfunctionIndicatorLampData, (TVoid*)&gCsr_ctRecDat_DLCD1.tCsrRng_eOBDMalfunctionIndicatorLampData,
        (TVoid*)&gCsr_tDLCD1.eOBDMalfunctionIndicatorLampData, (TVoid*)&mCsr_tOldDat_tDLCD1.eOBDMalfunctionIndicatorLampData, &mCsr_aeRecErr_tDLCD1[3],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_DLCD1.tCsrInfo_eEngineBrakeActiveLampData, (TVoid*)&gCsr_ctRecDat_DLCD1.tCsrRng_eEngineBrakeActiveLampData,
        (TVoid*)&gCsr_tDLCD1.eEngineBrakeActiveLampData, (TVoid*)&mCsr_tOldDat_tDLCD1.eEngineBrakeActiveLampData, &mCsr_aeRecErr_tDLCD1[4],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_DLCD1.tCsrInfo_eComPrsionBrkEnblSwIndicLampDat, (TVoid*)&gCsr_ctRecDat_DLCD1.tCsrRng_eComPrsionBrkEnblSwIndicLampDat,
        (TVoid*)&gCsr_tDLCD1.eComPrsionBrkEnblSwIndicLampDat, (TVoid*)&mCsr_tOldDat_tDLCD1.eComPrsionBrkEnblSwIndicLampDat, &mCsr_aeRecErr_tDLCD1[5],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_DLCD1.tCsrInfo_eEngineOilPressureLowLampData, (TVoid*)&gCsr_ctRecDat_DLCD1.tCsrRng_eEngineOilPressureLowLampData,
        (TVoid*)&gCsr_tDLCD1.eEngineOilPressureLowLampData, (TVoid*)&mCsr_tOldDat_tDLCD1.eEngineOilPressureLowLampData, &mCsr_aeRecErr_tDLCD1[6],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_DLCD1.tCsrInfo_eEngCoolntTempHighLampDat, (TVoid*)&gCsr_ctRecDat_DLCD1.tCsrRng_eEngCoolntTempHighLampDat,
        (TVoid*)&gCsr_tDLCD1.eEngCoolntTempHighLampDat, (TVoid*)&mCsr_tOldDat_tDLCD1.eEngCoolntTempHighLampDat, &mCsr_aeRecErr_tDLCD1[7],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_DLCD1.tCsrInfo_eEngineCoolantLevelLowLampData, (TVoid*)&gCsr_ctRecDat_DLCD1.tCsrRng_eEngineCoolantLevelLowLampData,
        (TVoid*)&gCsr_tDLCD1.eEngineCoolantLevelLowLampData, (TVoid*)&mCsr_tOldDat_tDLCD1.eEngineCoolantLevelLowLampData, &mCsr_aeRecErr_tDLCD1[8],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_DLCD1.tCsrInfo_eEngineIdleMngmtActvLampData, (TVoid*)&gCsr_ctRecDat_DLCD1.tCsrRng_eEngineIdleMngmtActvLampData,
        (TVoid*)&gCsr_tDLCD1.eEngineIdleMngmtActvLampData, (TVoid*)&mCsr_tOldDat_tDLCD1.eEngineIdleMngmtActvLampData, &mCsr_aeRecErr_tDLCD1[9],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_DLCD1.tCsrInfo_eEngAirFilterRestrictionLampDat, (TVoid*)&gCsr_ctRecDat_DLCD1.tCsrRng_eEngAirFilterRestrictionLampDat,
        (TVoid*)&gCsr_tDLCD1.eEngAirFilterRestrictionLampDat, (TVoid*)&mCsr_tOldDat_tDLCD1.eEngAirFilterRestrictionLampDat, &mCsr_aeRecErr_tDLCD1[10],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_DLCD1.tCsrInfo_eEngFuelFilterRestrictedLampDat, (TVoid*)&gCsr_ctRecDat_DLCD1.tCsrRng_eEngFuelFilterRestrictedLampDat,
        (TVoid*)&gCsr_tDLCD1.eEngFuelFilterRestrictedLampDat, (TVoid*)&mCsr_tOldDat_tDLCD1.eEngFuelFilterRestrictedLampDat, &mCsr_aeRecErr_tDLCD1[11],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_DLCD1.tCsrInfo_eEngCtrlModule1RdyForUseLampDat, (TVoid*)&gCsr_ctRecDat_DLCD1.tCsrRng_eEngCtrlModule1RdyForUseLampDat,
        (TVoid*)&gCsr_tDLCD1.eEngCtrlModule1RdyForUseLampDat, (TVoid*)&mCsr_tOldDat_tDLCD1.eEngCtrlModule1RdyForUseLampDat, &mCsr_aeRecErr_tDLCD1[12],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_DLCD1.tCsrInfo_eEngCtrlModule2RdyForUseLampDat, (TVoid*)&gCsr_ctRecDat_DLCD1.tCsrRng_eEngCtrlModule2RdyForUseLampDat,
        (TVoid*)&gCsr_tDLCD1.eEngCtrlModule2RdyForUseLampDat, (TVoid*)&mCsr_tOldDat_tDLCD1.eEngCtrlModule2RdyForUseLampDat, &mCsr_aeRecErr_tDLCD1[13],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_DLCD1.tCsrInfo_eEngCtrlModule3RdyForUseLampDat, (TVoid*)&gCsr_ctRecDat_DLCD1.tCsrRng_eEngCtrlModule3RdyForUseLampDat,
        (TVoid*)&gCsr_tDLCD1.eEngCtrlModule3RdyForUseLampDat, (TVoid*)&mCsr_tOldDat_tDLCD1.eEngCtrlModule3RdyForUseLampDat, &mCsr_aeRecErr_tDLCD1[14],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_DLCD1.tCsrInfo_eEngineSpeedHighLampData, (TVoid*)&gCsr_ctRecDat_DLCD1.tCsrRng_eEngineSpeedHighLampData,
        (TVoid*)&gCsr_tDLCD1.eEngineSpeedHighLampData, (TVoid*)&mCsr_tOldDat_tDLCD1.eEngineSpeedHighLampData, &mCsr_aeRecErr_tDLCD1[15],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_DLCD1.tCsrInfo_eEngineSpeedVeryHighLampData, (TVoid*)&gCsr_ctRecDat_DLCD1.tCsrRng_eEngineSpeedVeryHighLampData,
        (TVoid*)&gCsr_tDLCD1.eEngineSpeedVeryHighLampData, (TVoid*)&mCsr_tOldDat_tDLCD1.eEngineSpeedVeryHighLampData, &mCsr_aeRecErr_tDLCD1[16],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_DLCD1.tCsrInfo_eVehicleAccltnRateLimitLampData, (TVoid*)&gCsr_ctRecDat_DLCD1.tCsrRng_eVehicleAccltnRateLimitLampData,
        (TVoid*)&gCsr_tDLCD1.eVehicleAccltnRateLimitLampData, (TVoid*)&mCsr_tOldDat_tDLCD1.eVehicleAccltnRateLimitLampData, &mCsr_aeRecErr_tDLCD1[17],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_DLCD1.tCsrInfo_eEngineWaitToStartLampData, (TVoid*)&gCsr_ctRecDat_DLCD1.tCsrRng_eEngineWaitToStartLampData,
        (TVoid*)&gCsr_tDLCD1.eEngineWaitToStartLampData, (TVoid*)&mCsr_tOldDat_tDLCD1.eEngineWaitToStartLampData, &mCsr_aeRecErr_tDLCD1[18],
        NULL, NULL
    }
};

static const TCanSigRecRoot mCsr_ctRoot_DLCD1 =
{
    "DLCD1",                                                //!< achName - [STR] Name DLCD1
    8,                                                      //!< u8Dlc - [NUM] DLC of Can Message
    0xff,                                                   //!< u8CanByteDflt - [NUM] CAN Message default
    DATA_INTEL,                                             //!< eCanFormat - [NUM] CAN Format
    0xFF,                                                   //!< u8MasterReceiveId - [NUM] Receive Id
    19,                                                     //!< u8RecCnt - [NUM] Count of Recorde
    &mCsr_actRecDat_tDLCD1[0],                              //!< ptRec - [NUM] Pointer to Record Values
    49,                                                     //!< u16RecNo - [NUM] Record Number
    CSR_STAMP                                               //!< u16Stamp - [NUM] Safety stamp
};

TCanSigRecDLCD1 gCsr_tDLCD1 =
{
    &mCsr_ctRoot_DLCD1,                                     //!< *cptRoot [POI] Root connection
    GE_OFF,                                                 //!< eEngineProtectLampData [[-]] new signal
    GE_OFF,                                                 //!< eEngineAmberWarningLampData [[-]] new signal
    GE_OFF,                                                 //!< eEngineRedStopLampData [[-]] new signal
    GE_OFF,                                                 //!< eOBDMalfunctionIndicatorLampData [[-]] new signal
    GE_OFF,                                                 //!< eEngineBrakeActiveLampData [[-]] new signal
    GE_OFF,                                                 //!< eComPrsionBrkEnblSwIndicLampDat [[-]] new signal
    GE_OFF,                                                 //!< eEngineOilPressureLowLampData [[-]] new signal
    GE_OFF,                                                 //!< eEngCoolntTempHighLampDat [[-]] new signal
    GE_OFF,                                                 //!< eEngineCoolantLevelLowLampData [[-]] new signal
    GE_OFF,                                                 //!< eEngineIdleMngmtActvLampData [[-]] new signal
    GE_OFF,                                                 //!< eEngAirFilterRestrictionLampDat [[-]] new signal
    GE_OFF,                                                 //!< eEngFuelFilterRestrictedLampDat [[-]] new signal
    GE_OFF,                                                 //!< eEngCtrlModule1RdyForUseLampDat [[-]] new signal
    GE_OFF,                                                 //!< eEngCtrlModule2RdyForUseLampDat [[-]] new signal
    GE_OFF,                                                 //!< eEngCtrlModule3RdyForUseLampDat [[-]] new signal
    GE_OFF,                                                 //!< eEngineSpeedHighLampData [[-]] new signal
    GE_OFF,                                                 //!< eEngineSpeedVeryHighLampData [[-]] new signal
    GE_OFF,                                                 //!< eVehicleAccltnRateLimitLampData [[-]] new signal
    GE_OFF                                                  //!< eEngineWaitToStartLampData [[-]] new signal
};

const TCanSigRecVal_VEP3 gCsr_ctRecDat_VEP3 =
{
    //!< AlternatorCurrent
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TUINT16, TINT32, 0, 16, 0, -1600, 1, 20 }, 
     { U16_MIN, U16_MAX, 0, 0 },
    //!< NetBatteryCurrent
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TUINT16, TINT32, 16, 16, 0, -1600, 1, 20 }, 
     { U16_MIN, U16_MAX, 0, 0 }
};

static ESigSta mCsr_aeRecErr_tVEP3[2] =
{
    SIG_OKAY,
    SIG_OKAY
};

static TCanSigRecOldValVEP3 mCsr_tOldDat_tVEP3 =
{
    0,                                                      //!< i32AlternatorCurrent [[-]] new signal
    0                                                       //!< i32NetBatteryCurrent [[-]] new signal
};

extern TCanSigRecVEP3 gCsr_tVEP3;
static const TRecDat mCsr_actRecDat_tVEP3[2] =
{
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_VEP3.tCsrInfo_i32AlternatorCurrent, (TVoid*)&gCsr_ctRecDat_VEP3.tCsrRng_i32AlternatorCurrent,
        (TVoid*)&gCsr_tVEP3.i32AlternatorCurrent, (TVoid*)&mCsr_tOldDat_tVEP3.u16AlternatorCurrent, &mCsr_aeRecErr_tVEP3[0],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_VEP3.tCsrInfo_i32NetBatteryCurrent, (TVoid*)&gCsr_ctRecDat_VEP3.tCsrRng_i32NetBatteryCurrent,
        (TVoid*)&gCsr_tVEP3.i32NetBatteryCurrent, (TVoid*)&mCsr_tOldDat_tVEP3.u16NetBatteryCurrent, &mCsr_aeRecErr_tVEP3[1],
        NULL, NULL
    }
};

static const TCanSigRecRoot mCsr_ctRoot_VEP3 =
{
    "VEP3",                                                 //!< achName - [STR] Name VEP3
    8,                                                      //!< u8Dlc - [NUM] DLC of Can Message
    0xff,                                                   //!< u8CanByteDflt - [NUM] CAN Message default
    DATA_INTEL,                                             //!< eCanFormat - [NUM] CAN Format
    0xFF,                                                   //!< u8MasterReceiveId - [NUM] Receive Id
    2,                                                      //!< u8RecCnt - [NUM] Count of Recorde
    &mCsr_actRecDat_tVEP3[0],                               //!< ptRec - [NUM] Pointer to Record Values
    50,                                                     //!< u16RecNo - [NUM] Record Number
    CSR_STAMP                                               //!< u16Stamp - [NUM] Safety stamp
};

TCanSigRecVEP3 gCsr_tVEP3 =
{
    &mCsr_ctRoot_VEP3,                                      //!< *cptRoot [POI] Root connection
    (((0 * 1)/20)+(-1600)),                                 //!< i32AlternatorCurrent [A] new signal
    (((0 * 1)/20)+(-1600))                                  //!< i32NetBatteryCurrent [A] new signal
};

const TCanSigRecVal_SHUTDN gCsr_ctRecDat_SHUTDN =
{
    //!< EngIdleShtdwnHasShtdwnEngine
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, ESTATEBOOL2BITS_TYPE, ESTATEBOOL2BITS_TYPE, 0, 2, 0, 0, 1, 1 }, 
     { GE_OFF, GE_NA, GE_OFF, GE_OFF },
    //!< EngineIdleShtdwnDrvrAlertMode
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, ESTATEBOOL2BITS_TYPE, ESTATEBOOL2BITS_TYPE, 2, 2, 0, 0, 1, 1 }, 
     { GE_OFF, GE_NA, GE_OFF, GE_OFF },
    //!< EngineIdleShtdwnTimerOverride
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, ESTATEBOOL2BITS_TYPE, ESTATEBOOL2BITS_TYPE, 4, 2, 0, 0, 1, 1 }, 
     { GE_OFF, GE_NA, GE_OFF, GE_OFF },
    //!< EngineIdleShtdwnTimerState
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, ESTATEBOOL2BITS_TYPE, ESTATEBOOL2BITS_TYPE, 6, 2, 0, 0, 1, 1 }, 
     { GE_OFF, GE_NA, GE_OFF, GE_OFF },
    //!< EngineIdleShtdwnTimerFunction
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, ESTATEBOOL2BITS_TYPE, ESTATEBOOL2BITS_TYPE, 14, 2, 0, 0, 1, 1 }, 
     { GE_OFF, GE_NA, GE_OFF, GE_OFF },
    //!< ACHighPressureFanSwitch
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, ESTATEBOOL2BITS_TYPE, ESTATEBOOL2BITS_TYPE, 16, 2, 0, 0, 1, 1 }, 
     { GE_OFF, GE_NA, GE_OFF, GE_OFF },
    //!< RefrigerantLowPressureSwitch
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, ESTATEBOOL2BITS_TYPE, ESTATEBOOL2BITS_TYPE, 18, 2, 0, 0, 1, 1 }, 
     { GE_OFF, GE_NA, GE_OFF, GE_OFF },
    //!< RefrigerantHighPressureSwitch
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, ESTATEBOOL2BITS_TYPE, ESTATEBOOL2BITS_TYPE, 20, 2, 0, 0, 1, 1 }, 
     { GE_OFF, GE_NA, GE_OFF, GE_OFF },
    //!< EngineWaitToStartLamp
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, ESTATEBOOL2BITS_TYPE, ESTATEBOOL2BITS_TYPE, 24, 2, 0, 0, 1, 1 }, 
     { GE_OFF, GE_NA, GE_OFF, GE_OFF },
    //!< EngPrtctnSystemHasShtdwnEng
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, ESTATEBOOL2BITS_TYPE, ESTATEBOOL2BITS_TYPE, 32, 2, 0, 0, 1, 1 }, 
     { GE_OFF, GE_NA, GE_OFF, GE_OFF },
    //!< EngPrtctnSystemAppchingShtdwn
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, ESTATEBOOL2BITS_TYPE, ESTATEBOOL2BITS_TYPE, 34, 2, 0, 0, 1, 1 }, 
     { GE_OFF, GE_NA, GE_OFF, GE_OFF },
    //!< EngProtecSystemTimerOverride
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, ESTATEBOOL2BITS_TYPE, ESTATEBOOL2BITS_TYPE, 36, 2, 0, 0, 1, 1 }, 
     { GE_OFF, GE_NA, GE_OFF, GE_OFF },
    //!< EngineProtecSystemTimerState
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, ESTATEBOOL2BITS_TYPE, ESTATEBOOL2BITS_TYPE, 38, 2, 0, 0, 1, 1 }, 
     { GE_OFF, GE_NA, GE_OFF, GE_OFF },
    //!< EngineProtectionSystemConf
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, ESTATEBOOL2BITS_TYPE, ESTATEBOOL2BITS_TYPE, 46, 2, 0, 0, 1, 1 }, 
     { GE_OFF, GE_NA, GE_OFF, GE_OFF },
    //!< EngineAlarmAcknowledge
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, ESTATEBOOL2BITS_TYPE, ESTATEBOOL2BITS_TYPE, 48, 2, 0, 0, 1, 1 }, 
     { GE_OFF, GE_NA, GE_OFF, GE_OFF },
    //!< EngineAlarmOutputCommandStatus
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, ESTATEBOOL2BITS_TYPE, ESTATEBOOL2BITS_TYPE, 50, 2, 0, 0, 1, 1 }, 
     { GE_OFF, GE_NA, GE_OFF, GE_OFF },
    //!< EngineAirShutoffCommandStatus
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, ESTATEBOOL2BITS_TYPE, ESTATEBOOL2BITS_TYPE, 52, 2, 0, 0, 1, 1 }, 
     { GE_OFF, GE_NA, GE_OFF, GE_OFF },
    //!< EngineOverspeedTest
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, ESTATEBOOL2BITS_TYPE, ESTATEBOOL2BITS_TYPE, 54, 2, 0, 0, 1, 1 }, 
     { GE_OFF, GE_NA, GE_OFF, GE_OFF },
    //!< EngineAirShutoffStatus
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, ESTATEBOOL2BITS_TYPE, ESTATEBOOL2BITS_TYPE, 56, 2, 0, 0, 1, 1 }, 
     { GE_OFF, GE_NA, GE_OFF, GE_OFF },
    //!< PTOShutdownHasShtdwnEngine
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, ESTATEBOOL2BITS_TYPE, ESTATEBOOL2BITS_TYPE, 58, 2, 0, 0, 1, 1 }, 
     { GE_OFF, GE_NA, GE_OFF, GE_OFF },
    //!< CoolntLvlEngPrtctnShtdwnStatus
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, ESTATEBOOL2BITS_TYPE, ESTATEBOOL2BITS_TYPE, 60, 2, 0, 0, 1, 1 }, 
     { GE_OFF, GE_NA, GE_OFF, GE_OFF }
};

static ESigSta mCsr_aeRecErr_tSHUTDN[21] =
{
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY
};

static TCanSigRecOldValSHUTDN mCsr_tOldDat_tSHUTDN =
{
    GE_OFF,                                                 //!< eEngIdleShtdwnHasShtdwnEngine [[-]] new signal
    GE_OFF,                                                 //!< eEngineIdleShtdwnDrvrAlertMode [[-]] new signal
    GE_OFF,                                                 //!< eEngineIdleShtdwnTimerOverride [[-]] new signal
    GE_OFF,                                                 //!< eEngineIdleShtdwnTimerState [[-]] new signal
    GE_OFF,                                                 //!< eEngineIdleShtdwnTimerFunction [[-]] new signal
    GE_OFF,                                                 //!< eACHighPressureFanSwitch [[-]] new signal
    GE_OFF,                                                 //!< eRefrigerantLowPressureSwitch [[-]] new signal
    GE_OFF,                                                 //!< eRefrigerantHighPressureSwitch [[-]] new signal
    GE_OFF,                                                 //!< eEngineWaitToStartLamp [[-]] new signal
    GE_OFF,                                                 //!< eEngPrtctnSystemHasShtdwnEng [[-]] new signal
    GE_OFF,                                                 //!< eEngPrtctnSystemAppchingShtdwn [[-]] new signal
    GE_OFF,                                                 //!< eEngProtecSystemTimerOverride [[-]] new signal
    GE_OFF,                                                 //!< eEngineProtecSystemTimerState [[-]] new signal
    GE_OFF,                                                 //!< eEngineProtectionSystemConf [[-]] new signal
    GE_OFF,                                                 //!< eEngineAlarmAcknowledge [[-]] new signal
    GE_OFF,                                                 //!< eEngineAlarmOutputCommandStatus [[-]] new signal
    GE_OFF,                                                 //!< eEngineAirShutoffCommandStatus [[-]] new signal
    GE_OFF,                                                 //!< eEngineOverspeedTest [[-]] new signal
    GE_OFF,                                                 //!< eEngineAirShutoffStatus [[-]] new signal
    GE_OFF,                                                 //!< ePTOShutdownHasShtdwnEngine [[-]] new signal
    GE_OFF                                                  //!< eCoolntLvlEngPrtctnShtdwnStatus [[-]] new signal
};

extern TCanSigRecSHUTDN gCsr_tSHUTDN;
static const TRecDat mCsr_actRecDat_tSHUTDN[21] =
{
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_SHUTDN.tCsrInfo_eEngIdleShtdwnHasShtdwnEngine, (TVoid*)&gCsr_ctRecDat_SHUTDN.tCsrRng_eEngIdleShtdwnHasShtdwnEngine,
        (TVoid*)&gCsr_tSHUTDN.eEngIdleShtdwnHasShtdwnEngine, (TVoid*)&mCsr_tOldDat_tSHUTDN.eEngIdleShtdwnHasShtdwnEngine, &mCsr_aeRecErr_tSHUTDN[0],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_SHUTDN.tCsrInfo_eEngineIdleShtdwnDrvrAlertMode, (TVoid*)&gCsr_ctRecDat_SHUTDN.tCsrRng_eEngineIdleShtdwnDrvrAlertMode,
        (TVoid*)&gCsr_tSHUTDN.eEngineIdleShtdwnDrvrAlertMode, (TVoid*)&mCsr_tOldDat_tSHUTDN.eEngineIdleShtdwnDrvrAlertMode, &mCsr_aeRecErr_tSHUTDN[1],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_SHUTDN.tCsrInfo_eEngineIdleShtdwnTimerOverride, (TVoid*)&gCsr_ctRecDat_SHUTDN.tCsrRng_eEngineIdleShtdwnTimerOverride,
        (TVoid*)&gCsr_tSHUTDN.eEngineIdleShtdwnTimerOverride, (TVoid*)&mCsr_tOldDat_tSHUTDN.eEngineIdleShtdwnTimerOverride, &mCsr_aeRecErr_tSHUTDN[2],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_SHUTDN.tCsrInfo_eEngineIdleShtdwnTimerState, (TVoid*)&gCsr_ctRecDat_SHUTDN.tCsrRng_eEngineIdleShtdwnTimerState,
        (TVoid*)&gCsr_tSHUTDN.eEngineIdleShtdwnTimerState, (TVoid*)&mCsr_tOldDat_tSHUTDN.eEngineIdleShtdwnTimerState, &mCsr_aeRecErr_tSHUTDN[3],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_SHUTDN.tCsrInfo_eEngineIdleShtdwnTimerFunction, (TVoid*)&gCsr_ctRecDat_SHUTDN.tCsrRng_eEngineIdleShtdwnTimerFunction,
        (TVoid*)&gCsr_tSHUTDN.eEngineIdleShtdwnTimerFunction, (TVoid*)&mCsr_tOldDat_tSHUTDN.eEngineIdleShtdwnTimerFunction, &mCsr_aeRecErr_tSHUTDN[4],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_SHUTDN.tCsrInfo_eACHighPressureFanSwitch, (TVoid*)&gCsr_ctRecDat_SHUTDN.tCsrRng_eACHighPressureFanSwitch,
        (TVoid*)&gCsr_tSHUTDN.eACHighPressureFanSwitch, (TVoid*)&mCsr_tOldDat_tSHUTDN.eACHighPressureFanSwitch, &mCsr_aeRecErr_tSHUTDN[5],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_SHUTDN.tCsrInfo_eRefrigerantLowPressureSwitch, (TVoid*)&gCsr_ctRecDat_SHUTDN.tCsrRng_eRefrigerantLowPressureSwitch,
        (TVoid*)&gCsr_tSHUTDN.eRefrigerantLowPressureSwitch, (TVoid*)&mCsr_tOldDat_tSHUTDN.eRefrigerantLowPressureSwitch, &mCsr_aeRecErr_tSHUTDN[6],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_SHUTDN.tCsrInfo_eRefrigerantHighPressureSwitch, (TVoid*)&gCsr_ctRecDat_SHUTDN.tCsrRng_eRefrigerantHighPressureSwitch,
        (TVoid*)&gCsr_tSHUTDN.eRefrigerantHighPressureSwitch, (TVoid*)&mCsr_tOldDat_tSHUTDN.eRefrigerantHighPressureSwitch, &mCsr_aeRecErr_tSHUTDN[7],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_SHUTDN.tCsrInfo_eEngineWaitToStartLamp, (TVoid*)&gCsr_ctRecDat_SHUTDN.tCsrRng_eEngineWaitToStartLamp,
        (TVoid*)&gCsr_tSHUTDN.eEngineWaitToStartLamp, (TVoid*)&mCsr_tOldDat_tSHUTDN.eEngineWaitToStartLamp, &mCsr_aeRecErr_tSHUTDN[8],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_SHUTDN.tCsrInfo_eEngPrtctnSystemHasShtdwnEng, (TVoid*)&gCsr_ctRecDat_SHUTDN.tCsrRng_eEngPrtctnSystemHasShtdwnEng,
        (TVoid*)&gCsr_tSHUTDN.eEngPrtctnSystemHasShtdwnEng, (TVoid*)&mCsr_tOldDat_tSHUTDN.eEngPrtctnSystemHasShtdwnEng, &mCsr_aeRecErr_tSHUTDN[9],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_SHUTDN.tCsrInfo_eEngPrtctnSystemAppchingShtdwn, (TVoid*)&gCsr_ctRecDat_SHUTDN.tCsrRng_eEngPrtctnSystemAppchingShtdwn,
        (TVoid*)&gCsr_tSHUTDN.eEngPrtctnSystemAppchingShtdwn, (TVoid*)&mCsr_tOldDat_tSHUTDN.eEngPrtctnSystemAppchingShtdwn, &mCsr_aeRecErr_tSHUTDN[10],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_SHUTDN.tCsrInfo_eEngProtecSystemTimerOverride, (TVoid*)&gCsr_ctRecDat_SHUTDN.tCsrRng_eEngProtecSystemTimerOverride,
        (TVoid*)&gCsr_tSHUTDN.eEngProtecSystemTimerOverride, (TVoid*)&mCsr_tOldDat_tSHUTDN.eEngProtecSystemTimerOverride, &mCsr_aeRecErr_tSHUTDN[11],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_SHUTDN.tCsrInfo_eEngineProtecSystemTimerState, (TVoid*)&gCsr_ctRecDat_SHUTDN.tCsrRng_eEngineProtecSystemTimerState,
        (TVoid*)&gCsr_tSHUTDN.eEngineProtecSystemTimerState, (TVoid*)&mCsr_tOldDat_tSHUTDN.eEngineProtecSystemTimerState, &mCsr_aeRecErr_tSHUTDN[12],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_SHUTDN.tCsrInfo_eEngineProtectionSystemConf, (TVoid*)&gCsr_ctRecDat_SHUTDN.tCsrRng_eEngineProtectionSystemConf,
        (TVoid*)&gCsr_tSHUTDN.eEngineProtectionSystemConf, (TVoid*)&mCsr_tOldDat_tSHUTDN.eEngineProtectionSystemConf, &mCsr_aeRecErr_tSHUTDN[13],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_SHUTDN.tCsrInfo_eEngineAlarmAcknowledge, (TVoid*)&gCsr_ctRecDat_SHUTDN.tCsrRng_eEngineAlarmAcknowledge,
        (TVoid*)&gCsr_tSHUTDN.eEngineAlarmAcknowledge, (TVoid*)&mCsr_tOldDat_tSHUTDN.eEngineAlarmAcknowledge, &mCsr_aeRecErr_tSHUTDN[14],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_SHUTDN.tCsrInfo_eEngineAlarmOutputCommandStatus, (TVoid*)&gCsr_ctRecDat_SHUTDN.tCsrRng_eEngineAlarmOutputCommandStatus,
        (TVoid*)&gCsr_tSHUTDN.eEngineAlarmOutputCommandStatus, (TVoid*)&mCsr_tOldDat_tSHUTDN.eEngineAlarmOutputCommandStatus, &mCsr_aeRecErr_tSHUTDN[15],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_SHUTDN.tCsrInfo_eEngineAirShutoffCommandStatus, (TVoid*)&gCsr_ctRecDat_SHUTDN.tCsrRng_eEngineAirShutoffCommandStatus,
        (TVoid*)&gCsr_tSHUTDN.eEngineAirShutoffCommandStatus, (TVoid*)&mCsr_tOldDat_tSHUTDN.eEngineAirShutoffCommandStatus, &mCsr_aeRecErr_tSHUTDN[16],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_SHUTDN.tCsrInfo_eEngineOverspeedTest, (TVoid*)&gCsr_ctRecDat_SHUTDN.tCsrRng_eEngineOverspeedTest,
        (TVoid*)&gCsr_tSHUTDN.eEngineOverspeedTest, (TVoid*)&mCsr_tOldDat_tSHUTDN.eEngineOverspeedTest, &mCsr_aeRecErr_tSHUTDN[17],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_SHUTDN.tCsrInfo_eEngineAirShutoffStatus, (TVoid*)&gCsr_ctRecDat_SHUTDN.tCsrRng_eEngineAirShutoffStatus,
        (TVoid*)&gCsr_tSHUTDN.eEngineAirShutoffStatus, (TVoid*)&mCsr_tOldDat_tSHUTDN.eEngineAirShutoffStatus, &mCsr_aeRecErr_tSHUTDN[18],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_SHUTDN.tCsrInfo_ePTOShutdownHasShtdwnEngine, (TVoid*)&gCsr_ctRecDat_SHUTDN.tCsrRng_ePTOShutdownHasShtdwnEngine,
        (TVoid*)&gCsr_tSHUTDN.ePTOShutdownHasShtdwnEngine, (TVoid*)&mCsr_tOldDat_tSHUTDN.ePTOShutdownHasShtdwnEngine, &mCsr_aeRecErr_tSHUTDN[19],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_SHUTDN.tCsrInfo_eCoolntLvlEngPrtctnShtdwnStatus, (TVoid*)&gCsr_ctRecDat_SHUTDN.tCsrRng_eCoolntLvlEngPrtctnShtdwnStatus,
        (TVoid*)&gCsr_tSHUTDN.eCoolntLvlEngPrtctnShtdwnStatus, (TVoid*)&mCsr_tOldDat_tSHUTDN.eCoolntLvlEngPrtctnShtdwnStatus, &mCsr_aeRecErr_tSHUTDN[20],
        NULL, NULL
    }
};

static const TCanSigRecRoot mCsr_ctRoot_SHUTDN =
{
    "SHUTDN",                                               //!< achName - [STR] Name SHUTDN
    8,                                                      //!< u8Dlc - [NUM] DLC of Can Message
    0xff,                                                   //!< u8CanByteDflt - [NUM] CAN Message default
    DATA_INTEL,                                             //!< eCanFormat - [NUM] CAN Format
    0xFF,                                                   //!< u8MasterReceiveId - [NUM] Receive Id
    21,                                                     //!< u8RecCnt - [NUM] Count of Recorde
    &mCsr_actRecDat_tSHUTDN[0],                             //!< ptRec - [NUM] Pointer to Record Values
    51,                                                     //!< u16RecNo - [NUM] Record Number
    CSR_STAMP                                               //!< u16Stamp - [NUM] Safety stamp
};

TCanSigRecSHUTDN gCsr_tSHUTDN =
{
    &mCsr_ctRoot_SHUTDN,                                    //!< *cptRoot [POI] Root connection
    GE_OFF,                                                 //!< eEngIdleShtdwnHasShtdwnEngine [[-]] new signal
    GE_OFF,                                                 //!< eEngineIdleShtdwnDrvrAlertMode [[-]] new signal
    GE_OFF,                                                 //!< eEngineIdleShtdwnTimerOverride [[-]] new signal
    GE_OFF,                                                 //!< eEngineIdleShtdwnTimerState [[-]] new signal
    GE_OFF,                                                 //!< eEngineIdleShtdwnTimerFunction [[-]] new signal
    GE_OFF,                                                 //!< eACHighPressureFanSwitch [[-]] new signal
    GE_OFF,                                                 //!< eRefrigerantLowPressureSwitch [[-]] new signal
    GE_OFF,                                                 //!< eRefrigerantHighPressureSwitch [[-]] new signal
    GE_OFF,                                                 //!< eEngineWaitToStartLamp [[-]] new signal
    GE_OFF,                                                 //!< eEngPrtctnSystemHasShtdwnEng [[-]] new signal
    GE_OFF,                                                 //!< eEngPrtctnSystemAppchingShtdwn [[-]] new signal
    GE_OFF,                                                 //!< eEngProtecSystemTimerOverride [[-]] new signal
    GE_OFF,                                                 //!< eEngineProtecSystemTimerState [[-]] new signal
    GE_OFF,                                                 //!< eEngineProtectionSystemConf [[-]] new signal
    GE_OFF,                                                 //!< eEngineAlarmAcknowledge [[-]] new signal
    GE_OFF,                                                 //!< eEngineAlarmOutputCommandStatus [[-]] new signal
    GE_OFF,                                                 //!< eEngineAirShutoffCommandStatus [[-]] new signal
    GE_OFF,                                                 //!< eEngineOverspeedTest [[-]] new signal
    GE_OFF,                                                 //!< eEngineAirShutoffStatus [[-]] new signal
    GE_OFF,                                                 //!< ePTOShutdownHasShtdwnEngine [[-]] new signal
    GE_OFF                                                  //!< eCoolntLvlEngPrtctnShtdwnStatus [[-]] new signal
};

const TCanSigRecVal_ET1 gCsr_ctRecDat_ET1 =
{
    //!< EngineCoolantTemperature
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TUINT8, TINT16, 0, 8, 0, -40, 1, 1 }, 
     { U8_MIN, 250, 0, 0 },
    //!< EngineFuelTemperature1
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TUINT8, TINT16, 8, 8, 0, -40, 1, 1 }, 
     { U8_MIN, 250, 0, 0 },
    //!< EngineOilTemperature1
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TUINT16, TINT16, 16, 16, 0, -273, 1, 32 }, 
     { U16_MIN, 64256, 0, 0 },
    //!< EngineTurboChgOilTemperature
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TUINT16, TINT16, 32, 16, 0, -273, 1, 32 }, 
     { U16_MIN, 64256, 0, 0 },
    //!< EngineIntercoolerTemperature
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TUINT8, TINT16, 48, 8, 0, 0, 1, 1 }, 
     { U8_MIN, 250, 0, 0 },
    //!< EngChargeAirCoolThrmsttOpening
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TUINT8, TUINT8, 56, 8, 0, 0, 4, 10 }, 
     { U8_MIN, 250, 0, 0 }
};

static ESigSta mCsr_aeRecErr_tET1[6] =
{
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY
};

static TCanSigRecOldValET1 mCsr_tOldDat_tET1 =
{
    0,                                                      //!< i16EngineCoolantTemperature [deg C] new signal
    0,                                                      //!< i16EngineFuelTemperature1 [deg C] new signal
    0,                                                      //!< i16EngineOilTemperature1 [deg C] new signal
    0,                                                      //!< i16EngineTurboChgOilTemperature [deg C] new signal
    0,                                                      //!< i16EngineIntercoolerTemperature [deg C] new signal
    0                                                       //!< u8EngChargeAirCoolThrmsttOpening [%] new signal
};

extern TCanSigRecET1 gCsr_tET1;
static const TRecDat mCsr_actRecDat_tET1[6] =
{
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_ET1.tCsrInfo_i16EngineCoolantTemperature, (TVoid*)&gCsr_ctRecDat_ET1.tCsrRng_i16EngineCoolantTemperature,
        (TVoid*)&gCsr_tET1.i16EngineCoolantTemperature, (TVoid*)&mCsr_tOldDat_tET1.u8EngineCoolantTemperature, &mCsr_aeRecErr_tET1[0],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_ET1.tCsrInfo_i16EngineFuelTemperature1, (TVoid*)&gCsr_ctRecDat_ET1.tCsrRng_i16EngineFuelTemperature1,
        (TVoid*)&gCsr_tET1.i16EngineFuelTemperature1, (TVoid*)&mCsr_tOldDat_tET1.u8EngineFuelTemperature1, &mCsr_aeRecErr_tET1[1],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_ET1.tCsrInfo_i16EngineOilTemperature1, (TVoid*)&gCsr_ctRecDat_ET1.tCsrRng_i16EngineOilTemperature1,
        (TVoid*)&gCsr_tET1.i16EngineOilTemperature1, (TVoid*)&mCsr_tOldDat_tET1.u16EngineOilTemperature1, &mCsr_aeRecErr_tET1[2],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_ET1.tCsrInfo_i16EngineTurboChgOilTemperature, (TVoid*)&gCsr_ctRecDat_ET1.tCsrRng_i16EngineTurboChgOilTemperature,
        (TVoid*)&gCsr_tET1.i16EngineTurboChgOilTemperature, (TVoid*)&mCsr_tOldDat_tET1.u16EngineTurboChgOilTemperature, &mCsr_aeRecErr_tET1[3],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_ET1.tCsrInfo_i16EngineIntercoolerTemperature, (TVoid*)&gCsr_ctRecDat_ET1.tCsrRng_i16EngineIntercoolerTemperature,
        (TVoid*)&gCsr_tET1.i16EngineIntercoolerTemperature, (TVoid*)&mCsr_tOldDat_tET1.u8EngineIntercoolerTemperature, &mCsr_aeRecErr_tET1[4],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_ET1.tCsrInfo_u8EngChargeAirCoolThrmsttOpening, (TVoid*)&gCsr_ctRecDat_ET1.tCsrRng_u8EngChargeAirCoolThrmsttOpening,
        (TVoid*)&gCsr_tET1.u8EngChargeAirCoolThrmsttOpening, (TVoid*)&mCsr_tOldDat_tET1.u8EngChargeAirCoolThrmsttOpening, &mCsr_aeRecErr_tET1[5],
        NULL, NULL
    }
};

static const TCanSigRecRoot mCsr_ctRoot_ET1 =
{
    "ET1",                                                  //!< achName - [STR] Name ET1
    8,                                                      //!< u8Dlc - [NUM] DLC of Can Message
    0xff,                                                   //!< u8CanByteDflt - [NUM] CAN Message default
    DATA_INTEL,                                             //!< eCanFormat - [NUM] CAN Format
    0xFF,                                                   //!< u8MasterReceiveId - [NUM] Receive Id
    6,                                                      //!< u8RecCnt - [NUM] Count of Recorde
    &mCsr_actRecDat_tET1[0],                                //!< ptRec - [NUM] Pointer to Record Values
    52,                                                     //!< u16RecNo - [NUM] Record Number
    CSR_STAMP                                               //!< u16Stamp - [NUM] Safety stamp
};

TCanSigRecET1 gCsr_tET1 =
{
    &mCsr_ctRoot_ET1,                                       //!< *cptRoot [POI] Root connection
    (((0 * 1)/1)+(-40)),                                    //!< i16EngineCoolantTemperature [deg C] new signal
    (((0 * 1)/1)+(-40)),                                    //!< i16EngineFuelTemperature1 [deg C] new signal
    (((0 * 1)/32)+(-273)),                                  //!< i16EngineOilTemperature1 [deg C] new signal
    (((0 * 1)/32)+(-273)),                                  //!< i16EngineTurboChgOilTemperature [deg C] new signal
    (((0 * 1)/1)+0),                                        //!< i16EngineIntercoolerTemperature [deg C] new signal
    (((0 * 4)/10)+0)                                        //!< u8EngChargeAirCoolThrmsttOpening [%] new signal
};

const TCanSigRecVal_EFL_P1 gCsr_ctRecDat_EFL_P1 =
{
    //!< EngineFuelDeliveryPressure
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TUINT8, TUINT16, 0, 8, 0, 0, 4, 1 }, 
     { U8_MIN, 250, 0, 0 },
    //!< EngExtCrankCsBlowByPressure
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TUINT8, TUINT8, 8, 8, 0, 0, 1, 20 }, 
     { U8_MIN, 250, 0, 0 },
    //!< EngineOilLevel
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TUINT8, TUINT8, 16, 8, 0, 0, 4, 10 }, 
     { U8_MIN, 250, 0, 0 },
    //!< EngineOilPressure
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TUINT8, TUINT16, 24, 8, 0, 0, 4, 1 }, 
     { U8_MIN, 250, 0, 0 },
    //!< EngineCrankcasePressure1
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TUINT16, TINT16, 32, 16, 0, -250, 1, 128 }, 
     { U16_MIN, U16_MAX, 0, 0 },
    //!< EngineCoolantPressure
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TUINT8, TUINT16, 48, 8, 0, 0, 2, 1 }, 
     { U8_MIN, 250, 0, 0 },
    //!< EngineCoolantLevel1
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TUINT8, TUINT8, 56, 8, 0, 0, 4, 10 }, 
     { U8_MIN, 250, 0, 0 }
};

static ESigSta mCsr_aeRecErr_tEFL_P1[7] =
{
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY
};

static TCanSigRecOldValEFL_P1 mCsr_tOldDat_tEFL_P1 =
{
    0,                                                      //!< u16EngineFuelDeliveryPressure [kPa] new signal
    0,                                                      //!< u8EngExtCrankCsBlowByPressure [kPa] new signal
    0,                                                      //!< u8EngineOilLevel [%] new signal
    0,                                                      //!< u16EngineOilPressure [kPa] new signal
    0,                                                      //!< i16EngineCrankcasePressure1 [kPa] new signal
    0,                                                      //!< u16EngineCoolantPressure [kPa] new signal
    0                                                       //!< u8EngineCoolantLevel1 [%] new signal
};

extern TCanSigRecEFL_P1 gCsr_tEFL_P1;
static const TRecDat mCsr_actRecDat_tEFL_P1[7] =
{
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_EFL_P1.tCsrInfo_u16EngineFuelDeliveryPressure, (TVoid*)&gCsr_ctRecDat_EFL_P1.tCsrRng_u16EngineFuelDeliveryPressure,
        (TVoid*)&gCsr_tEFL_P1.u16EngineFuelDeliveryPressure, (TVoid*)&mCsr_tOldDat_tEFL_P1.u8EngineFuelDeliveryPressure, &mCsr_aeRecErr_tEFL_P1[0],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_EFL_P1.tCsrInfo_u8EngExtCrankCsBlowByPressure, (TVoid*)&gCsr_ctRecDat_EFL_P1.tCsrRng_u8EngExtCrankCsBlowByPressure,
        (TVoid*)&gCsr_tEFL_P1.u8EngExtCrankCsBlowByPressure, (TVoid*)&mCsr_tOldDat_tEFL_P1.u8EngExtCrankCsBlowByPressure, &mCsr_aeRecErr_tEFL_P1[1],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_EFL_P1.tCsrInfo_u8EngineOilLevel, (TVoid*)&gCsr_ctRecDat_EFL_P1.tCsrRng_u8EngineOilLevel,
        (TVoid*)&gCsr_tEFL_P1.u8EngineOilLevel, (TVoid*)&mCsr_tOldDat_tEFL_P1.u8EngineOilLevel, &mCsr_aeRecErr_tEFL_P1[2],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_EFL_P1.tCsrInfo_u16EngineOilPressure, (TVoid*)&gCsr_ctRecDat_EFL_P1.tCsrRng_u16EngineOilPressure,
        (TVoid*)&gCsr_tEFL_P1.u16EngineOilPressure, (TVoid*)&mCsr_tOldDat_tEFL_P1.u8EngineOilPressure, &mCsr_aeRecErr_tEFL_P1[3],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_EFL_P1.tCsrInfo_i16EngineCrankcasePressure1, (TVoid*)&gCsr_ctRecDat_EFL_P1.tCsrRng_i16EngineCrankcasePressure1,
        (TVoid*)&gCsr_tEFL_P1.i16EngineCrankcasePressure1, (TVoid*)&mCsr_tOldDat_tEFL_P1.u16EngineCrankcasePressure1, &mCsr_aeRecErr_tEFL_P1[4],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_EFL_P1.tCsrInfo_u16EngineCoolantPressure, (TVoid*)&gCsr_ctRecDat_EFL_P1.tCsrRng_u16EngineCoolantPressure,
        (TVoid*)&gCsr_tEFL_P1.u16EngineCoolantPressure, (TVoid*)&mCsr_tOldDat_tEFL_P1.u8EngineCoolantPressure, &mCsr_aeRecErr_tEFL_P1[5],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_EFL_P1.tCsrInfo_u8EngineCoolantLevel1, (TVoid*)&gCsr_ctRecDat_EFL_P1.tCsrRng_u8EngineCoolantLevel1,
        (TVoid*)&gCsr_tEFL_P1.u8EngineCoolantLevel1, (TVoid*)&mCsr_tOldDat_tEFL_P1.u8EngineCoolantLevel1, &mCsr_aeRecErr_tEFL_P1[6],
        NULL, NULL
    }
};

static const TCanSigRecRoot mCsr_ctRoot_EFL_P1 =
{
    "EFL_P1",                                               //!< achName - [STR] Name EFL_P1
    8,                                                      //!< u8Dlc - [NUM] DLC of Can Message
    0xff,                                                   //!< u8CanByteDflt - [NUM] CAN Message default
    DATA_INTEL,                                             //!< eCanFormat - [NUM] CAN Format
    0xFF,                                                   //!< u8MasterReceiveId - [NUM] Receive Id
    7,                                                      //!< u8RecCnt - [NUM] Count of Recorde
    &mCsr_actRecDat_tEFL_P1[0],                             //!< ptRec - [NUM] Pointer to Record Values
    53,                                                     //!< u16RecNo - [NUM] Record Number
    CSR_STAMP                                               //!< u16Stamp - [NUM] Safety stamp
};

TCanSigRecEFL_P1 gCsr_tEFL_P1 =
{
    &mCsr_ctRoot_EFL_P1,                                    //!< *cptRoot [POI] Root connection
    (((0 * 4)/1)+0),                                        //!< u16EngineFuelDeliveryPressure [kPa] new signal
    (((0 * 1)/20)+0),                                       //!< u8EngExtCrankCsBlowByPressure [kPa] new signal
    (((0 * 4)/10)+0),                                       //!< u8EngineOilLevel [%] new signal
    (((0 * 4)/1)+0),                                        //!< u16EngineOilPressure [kPa] new signal
    (((0 * 1)/128)+(-250)),                                 //!< i16EngineCrankcasePressure1 [kPa] new signal
    (((0 * 2)/1)+0),                                        //!< u16EngineCoolantPressure [kPa] new signal
    (((0 * 4)/10)+0)                                        //!< u8EngineCoolantLevel1 [%] new signal
};

const TCanSigRecVal_VEP1 gCsr_ctRecDat_VEP1 =
{
    //!< NetBatteryCurrent
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TUINT8, TINT8, 0, 8, 0, -125, 1, 1 }, 
     { U8_MIN, 250, 0, 0 },
    //!< AlternatorCurrent
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TUINT8, TUINT8, 8, 8, 0, 0, 1, 1 }, 
     { U8_MIN, 250, 0, 0 },
    //!< ChargingSystemPotential
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TUINT16, TUINT16, 16, 16, 0, 0, 1, 20 }, 
     { U16_MIN, 64255, 0, 0 },
    //!< BatteryPotentialPowerInput1
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TUINT16, TUINT16, 32, 16, 0, 0, 1, 20 }, 
     { U16_MIN, 64255, 0, 0 },
    //!< KeyswitchBatteryPotential
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TUINT16, TUINT16, 48, 16, 0, 0, 1, 20 }, 
     { U16_MIN, 64255, 0, 0 }
};

static ESigSta mCsr_aeRecErr_tVEP1[5] =
{
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY
};

static TCanSigRecOldValVEP1 mCsr_tOldDat_tVEP1 =
{
    0,                                                      //!< i8NetBatteryCurrent [[-]] new signal
    0,                                                      //!< u8AlternatorCurrent [[-]] new signal
    0,                                                      //!< u16ChargingSystemPotential [[-]] new signal
    0,                                                      //!< u16BatteryPotentialPowerInput1 [[-]] new signal
    0                                                       //!< u16KeyswitchBatteryPotential [[-]] new signal
};

extern TCanSigRecVEP1 gCsr_tVEP1;
static const TRecDat mCsr_actRecDat_tVEP1[5] =
{
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_VEP1.tCsrInfo_i8NetBatteryCurrent, (TVoid*)&gCsr_ctRecDat_VEP1.tCsrRng_i8NetBatteryCurrent,
        (TVoid*)&gCsr_tVEP1.i8NetBatteryCurrent, (TVoid*)&mCsr_tOldDat_tVEP1.u8NetBatteryCurrent, &mCsr_aeRecErr_tVEP1[0],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_VEP1.tCsrInfo_u8AlternatorCurrent, (TVoid*)&gCsr_ctRecDat_VEP1.tCsrRng_u8AlternatorCurrent,
        (TVoid*)&gCsr_tVEP1.u8AlternatorCurrent, (TVoid*)&mCsr_tOldDat_tVEP1.u8AlternatorCurrent, &mCsr_aeRecErr_tVEP1[1],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_VEP1.tCsrInfo_u16ChargingSystemPotential, (TVoid*)&gCsr_ctRecDat_VEP1.tCsrRng_u16ChargingSystemPotential,
        (TVoid*)&gCsr_tVEP1.u16ChargingSystemPotential, (TVoid*)&mCsr_tOldDat_tVEP1.u16ChargingSystemPotential, &mCsr_aeRecErr_tVEP1[2],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_VEP1.tCsrInfo_u16BatteryPotentialPowerInput1, (TVoid*)&gCsr_ctRecDat_VEP1.tCsrRng_u16BatteryPotentialPowerInput1,
        (TVoid*)&gCsr_tVEP1.u16BatteryPotentialPowerInput1, (TVoid*)&mCsr_tOldDat_tVEP1.u16BatteryPotentialPowerInput1, &mCsr_aeRecErr_tVEP1[3],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_VEP1.tCsrInfo_u16KeyswitchBatteryPotential, (TVoid*)&gCsr_ctRecDat_VEP1.tCsrRng_u16KeyswitchBatteryPotential,
        (TVoid*)&gCsr_tVEP1.u16KeyswitchBatteryPotential, (TVoid*)&mCsr_tOldDat_tVEP1.u16KeyswitchBatteryPotential, &mCsr_aeRecErr_tVEP1[4],
        NULL, NULL
    }
};

static const TCanSigRecRoot mCsr_ctRoot_VEP1 =
{
    "VEP1",                                                 //!< achName - [STR] Name VEP1
    8,                                                      //!< u8Dlc - [NUM] DLC of Can Message
    0xff,                                                   //!< u8CanByteDflt - [NUM] CAN Message default
    DATA_INTEL,                                             //!< eCanFormat - [NUM] CAN Format
    0xFF,                                                   //!< u8MasterReceiveId - [NUM] Receive Id
    5,                                                      //!< u8RecCnt - [NUM] Count of Recorde
    &mCsr_actRecDat_tVEP1[0],                               //!< ptRec - [NUM] Pointer to Record Values
    54,                                                     //!< u16RecNo - [NUM] Record Number
    CSR_STAMP                                               //!< u16Stamp - [NUM] Safety stamp
};

TCanSigRecVEP1 gCsr_tVEP1 =
{
    &mCsr_ctRoot_VEP1,                                      //!< *cptRoot [POI] Root connection
    (((0 * 1)/1)+(-125)),                                   //!< i8NetBatteryCurrent [A] new signal
    (((0 * 1)/1)+0),                                        //!< u8AlternatorCurrent [A] new signal
    (((0 * 1)/20)+0),                                       //!< u16ChargingSystemPotential [V] new signal
    (((0 * 1)/20)+0),                                       //!< u16BatteryPotentialPowerInput1 [V] new signal
    (((0 * 1)/20)+0)                                        //!< u16KeyswitchBatteryPotential [V] new signal
};

const TCanSigRecVal_SendToC1RadioCmd gCsr_ctRecDat_SendToC1RadioCmd =
{
    //!< RotFrameClkwiseButton
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 0, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< RotFrameCtClkwiseButton
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 1, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< UpPendularOrRotTurretCtClock
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 2, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< DownPendularOrRotTurretClock
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 3, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< SelectorRotTurret
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 6, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< SelectorPendular
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 7, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< UpAxleOscillant
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 8, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< DownAxleOscillant
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 9, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< UpAxleFixe
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 10, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< DownAxleFixe
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 11, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< ForcingAdvanceTrack
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 12, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE }
};

static ESigSta mCsr_aeRecErr_tSendToC1RadioCmd[11] =
{
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY
};

static TCanSigRecOldValSendToC1RadioCmd mCsr_tOldDat_tSendToC1RadioCmd =
{
    FALSE,                                                  //!< boRotFrameClkwiseButton [[-]] new signal
    FALSE,                                                  //!< boRotFrameCtClkwiseButton [[-]] new signal
    FALSE,                                                  //!< boUpPendularOrRotTurretCtClock [[-]] new signal
    FALSE,                                                  //!< boDownPendularOrRotTurretClock [[-]] new signal
    FALSE,                                                  //!< boSelectorRotTurret [[-]] new signal
    FALSE,                                                  //!< boSelectorPendular [[-]] new signal
    FALSE,                                                  //!< boUpAxleOscillant [[-]] new signal
    FALSE,                                                  //!< boDownAxleOscillant [[-]] new signal
    FALSE,                                                  //!< boUpAxleFixe [[-]] new signal
    FALSE,                                                  //!< boDownAxleFixe [[-]] new signal
    FALSE                                                   //!< boForcingAdvanceTrack [[-]] new signal
};

extern TCanSigRecSendToC1RadioCmd gCsr_tSendToC1RadioCmd;
static const TRecDat mCsr_actRecDat_tSendToC1RadioCmd[11] =
{
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_SendToC1RadioCmd.tCsrInfo_boRotFrameClkwiseButton, (TVoid*)&gCsr_ctRecDat_SendToC1RadioCmd.tCsrRng_boRotFrameClkwiseButton,
        (TVoid*)&gCsr_tSendToC1RadioCmd.boRotFrameClkwiseButton, (TVoid*)&mCsr_tOldDat_tSendToC1RadioCmd.boRotFrameClkwiseButton, &mCsr_aeRecErr_tSendToC1RadioCmd[0],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_SendToC1RadioCmd.tCsrInfo_boRotFrameCtClkwiseButton, (TVoid*)&gCsr_ctRecDat_SendToC1RadioCmd.tCsrRng_boRotFrameCtClkwiseButton,
        (TVoid*)&gCsr_tSendToC1RadioCmd.boRotFrameCtClkwiseButton, (TVoid*)&mCsr_tOldDat_tSendToC1RadioCmd.boRotFrameCtClkwiseButton, &mCsr_aeRecErr_tSendToC1RadioCmd[1],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_SendToC1RadioCmd.tCsrInfo_boUpPendularOrRotTurretCtClock, (TVoid*)&gCsr_ctRecDat_SendToC1RadioCmd.tCsrRng_boUpPendularOrRotTurretCtClock,
        (TVoid*)&gCsr_tSendToC1RadioCmd.boUpPendularOrRotTurretCtClock, (TVoid*)&mCsr_tOldDat_tSendToC1RadioCmd.boUpPendularOrRotTurretCtClock, &mCsr_aeRecErr_tSendToC1RadioCmd[2],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_SendToC1RadioCmd.tCsrInfo_boDownPendularOrRotTurretClock, (TVoid*)&gCsr_ctRecDat_SendToC1RadioCmd.tCsrRng_boDownPendularOrRotTurretClock,
        (TVoid*)&gCsr_tSendToC1RadioCmd.boDownPendularOrRotTurretClock, (TVoid*)&mCsr_tOldDat_tSendToC1RadioCmd.boDownPendularOrRotTurretClock, &mCsr_aeRecErr_tSendToC1RadioCmd[3],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_SendToC1RadioCmd.tCsrInfo_boSelectorRotTurret, (TVoid*)&gCsr_ctRecDat_SendToC1RadioCmd.tCsrRng_boSelectorRotTurret,
        (TVoid*)&gCsr_tSendToC1RadioCmd.boSelectorRotTurret, (TVoid*)&mCsr_tOldDat_tSendToC1RadioCmd.boSelectorRotTurret, &mCsr_aeRecErr_tSendToC1RadioCmd[4],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_SendToC1RadioCmd.tCsrInfo_boSelectorPendular, (TVoid*)&gCsr_ctRecDat_SendToC1RadioCmd.tCsrRng_boSelectorPendular,
        (TVoid*)&gCsr_tSendToC1RadioCmd.boSelectorPendular, (TVoid*)&mCsr_tOldDat_tSendToC1RadioCmd.boSelectorPendular, &mCsr_aeRecErr_tSendToC1RadioCmd[5],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_SendToC1RadioCmd.tCsrInfo_boUpAxleOscillant, (TVoid*)&gCsr_ctRecDat_SendToC1RadioCmd.tCsrRng_boUpAxleOscillant,
        (TVoid*)&gCsr_tSendToC1RadioCmd.boUpAxleOscillant, (TVoid*)&mCsr_tOldDat_tSendToC1RadioCmd.boUpAxleOscillant, &mCsr_aeRecErr_tSendToC1RadioCmd[6],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_SendToC1RadioCmd.tCsrInfo_boDownAxleOscillant, (TVoid*)&gCsr_ctRecDat_SendToC1RadioCmd.tCsrRng_boDownAxleOscillant,
        (TVoid*)&gCsr_tSendToC1RadioCmd.boDownAxleOscillant, (TVoid*)&mCsr_tOldDat_tSendToC1RadioCmd.boDownAxleOscillant, &mCsr_aeRecErr_tSendToC1RadioCmd[7],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_SendToC1RadioCmd.tCsrInfo_boUpAxleFixe, (TVoid*)&gCsr_ctRecDat_SendToC1RadioCmd.tCsrRng_boUpAxleFixe,
        (TVoid*)&gCsr_tSendToC1RadioCmd.boUpAxleFixe, (TVoid*)&mCsr_tOldDat_tSendToC1RadioCmd.boUpAxleFixe, &mCsr_aeRecErr_tSendToC1RadioCmd[8],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_SendToC1RadioCmd.tCsrInfo_boDownAxleFixe, (TVoid*)&gCsr_ctRecDat_SendToC1RadioCmd.tCsrRng_boDownAxleFixe,
        (TVoid*)&gCsr_tSendToC1RadioCmd.boDownAxleFixe, (TVoid*)&mCsr_tOldDat_tSendToC1RadioCmd.boDownAxleFixe, &mCsr_aeRecErr_tSendToC1RadioCmd[9],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_SendToC1RadioCmd.tCsrInfo_boForcingAdvanceTrack, (TVoid*)&gCsr_ctRecDat_SendToC1RadioCmd.tCsrRng_boForcingAdvanceTrack,
        (TVoid*)&gCsr_tSendToC1RadioCmd.boForcingAdvanceTrack, (TVoid*)&mCsr_tOldDat_tSendToC1RadioCmd.boForcingAdvanceTrack, &mCsr_aeRecErr_tSendToC1RadioCmd[10],
        NULL, NULL
    }
};

static const TCanSigRecRoot mCsr_ctRoot_SendToC1RadioCmd =
{
    "SendToC1RadioCmd",                                     //!< achName - [STR] Name SendToC1RadioCmd
    8,                                                      //!< u8Dlc - [NUM] DLC of Can Message
    0xff,                                                   //!< u8CanByteDflt - [NUM] CAN Message default
    DATA_INTEL,                                             //!< eCanFormat - [NUM] CAN Format
    0xFF,                                                   //!< u8MasterReceiveId - [NUM] Receive Id
    11,                                                     //!< u8RecCnt - [NUM] Count of Recorde
    &mCsr_actRecDat_tSendToC1RadioCmd[0],                   //!< ptRec - [NUM] Pointer to Record Values
    55,                                                     //!< u16RecNo - [NUM] Record Number
    CSR_STAMP                                               //!< u16Stamp - [NUM] Safety stamp
};

TCanSigRecSendToC1RadioCmd gCsr_tSendToC1RadioCmd =
{
    &mCsr_ctRoot_SendToC1RadioCmd,                          //!< *cptRoot [POI] Root connection
    FALSE,                                                  //!< boRotFrameClkwiseButton [[-]] new signal
    FALSE,                                                  //!< boRotFrameCtClkwiseButton [[-]] new signal
    FALSE,                                                  //!< boUpPendularOrRotTurretCtClock [[-]] new signal
    FALSE,                                                  //!< boDownPendularOrRotTurretClock [[-]] new signal
    FALSE,                                                  //!< boSelectorRotTurret [[-]] new signal
    FALSE,                                                  //!< boSelectorPendular [[-]] new signal
    FALSE,                                                  //!< boUpAxleOscillant [[-]] new signal
    FALSE,                                                  //!< boDownAxleOscillant [[-]] new signal
    FALSE,                                                  //!< boUpAxleFixe [[-]] new signal
    FALSE,                                                  //!< boDownAxleFixe [[-]] new signal
    FALSE                                                   //!< boForcingAdvanceTrack [[-]] new signal
};

const TCanSigRecVal_DataRcvFromC1 gCsr_ctRecDat_DataRcvFromC1 =
{
    //!< C1TurretPostSelector
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBIT2, TBIT2, 0, 2, 0, 0, 1, 1 }, 
     { BI2_MIN, BI2_MAX, 0, 0 },
    //!< C1RadioPostSelector
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBIT2, TBIT2, 2, 2, 0, 0, 1, 1 }, 
     { BI2_MIN, BI2_MAX, 0, 0 },
    //!< C1NacellePostSelector
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBIT2, TBIT2, 4, 2, 0, 0, 1, 1 }, 
     { BI2_MIN, BI2_MAX, 0, 0 },
    //!< UpAxleOscillantCommand
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 6, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< DownAxleOscillantCommand
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 7, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< UpAxleFixeCommand
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 8, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< DownAxleFixeCommand
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 9, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< EntryTelescopeFdcSensor
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 10, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< DeltaArmFoldedSensor
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 11, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< BoomArmFoldedSensor
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 12, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< DeltaArmInLowerZone
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 13, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< TurretInRearCenterPos
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 14, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< TurretInFrontCenterPos
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 15, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< RegimeMotorAlternatorRpm
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TINT32, TINT32, 16, 32, 0, 0, 1, 1 }, 
     { I32_MIN, I32_MAX, 0, 0 },
    //!< ArrowArmAngularSensor
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TINT16, TINT16, 48, 16, 0, 0, 1, 1 }, 
     { I16_MIN, I16_MAX, 0, 0 }
};

static ESigSta mCsr_aeRecErr_tDataRcvFromC1[15] =
{
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY
};

static TCanSigRecOldValDataRcvFromC1 mCsr_tOldDat_tDataRcvFromC1 =
{
    0,                                                      //!< bi2C1TurretPostSelector [[-]] new signal
    0,                                                      //!< bi2C1RadioPostSelector [[-]] new signal
    0,                                                      //!< bi2C1NacellePostSelector [[-]] new signal
    FALSE,                                                  //!< boUpAxleOscillantCommand [[-]] new signal
    FALSE,                                                  //!< boDownAxleOscillantCommand [[-]] new signal
    FALSE,                                                  //!< boUpAxleFixeCommand [[-]] new signal
    FALSE,                                                  //!< boDownAxleFixeCommand [[-]] new signal
    FALSE,                                                  //!< boEntryTelescopeFdcSensor [[-]] new signal
    FALSE,                                                  //!< boDeltaArmFoldedSensor [[-]] new signal
    FALSE,                                                  //!< boBoomArmFoldedSensor [[-]] new signal
    FALSE,                                                  //!< boDeltaArmInLowerZone [[-]] new signal
    FALSE,                                                  //!< boTurretInRearCenterPos [[-]] new signal
    FALSE,                                                  //!< boTurretInFrontCenterPos [[-]] new signal
    0,                                                      //!< i32RegimeMotorAlternatorRpm [[-]] new signal
    0                                                       //!< i16ArrowArmAngularSensor [[-]] new signal
};

extern TCanSigRecDataRcvFromC1 gCsr_tDataRcvFromC1;
static const TRecDat mCsr_actRecDat_tDataRcvFromC1[15] =
{
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_DataRcvFromC1.tCsrInfo_bi2C1TurretPostSelector, (TVoid*)&gCsr_ctRecDat_DataRcvFromC1.tCsrRng_bi2C1TurretPostSelector,
        (TVoid*)&gCsr_tDataRcvFromC1.bi2C1TurretPostSelector, (TVoid*)&mCsr_tOldDat_tDataRcvFromC1.bi2C1TurretPostSelector, &mCsr_aeRecErr_tDataRcvFromC1[0],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_DataRcvFromC1.tCsrInfo_bi2C1RadioPostSelector, (TVoid*)&gCsr_ctRecDat_DataRcvFromC1.tCsrRng_bi2C1RadioPostSelector,
        (TVoid*)&gCsr_tDataRcvFromC1.bi2C1RadioPostSelector, (TVoid*)&mCsr_tOldDat_tDataRcvFromC1.bi2C1RadioPostSelector, &mCsr_aeRecErr_tDataRcvFromC1[1],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_DataRcvFromC1.tCsrInfo_bi2C1NacellePostSelector, (TVoid*)&gCsr_ctRecDat_DataRcvFromC1.tCsrRng_bi2C1NacellePostSelector,
        (TVoid*)&gCsr_tDataRcvFromC1.bi2C1NacellePostSelector, (TVoid*)&mCsr_tOldDat_tDataRcvFromC1.bi2C1NacellePostSelector, &mCsr_aeRecErr_tDataRcvFromC1[2],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_DataRcvFromC1.tCsrInfo_boUpAxleOscillantCommand, (TVoid*)&gCsr_ctRecDat_DataRcvFromC1.tCsrRng_boUpAxleOscillantCommand,
        (TVoid*)&gCsr_tDataRcvFromC1.boUpAxleOscillantCommand, (TVoid*)&mCsr_tOldDat_tDataRcvFromC1.boUpAxleOscillantCommand, &mCsr_aeRecErr_tDataRcvFromC1[3],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_DataRcvFromC1.tCsrInfo_boDownAxleOscillantCommand, (TVoid*)&gCsr_ctRecDat_DataRcvFromC1.tCsrRng_boDownAxleOscillantCommand,
        (TVoid*)&gCsr_tDataRcvFromC1.boDownAxleOscillantCommand, (TVoid*)&mCsr_tOldDat_tDataRcvFromC1.boDownAxleOscillantCommand, &mCsr_aeRecErr_tDataRcvFromC1[4],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_DataRcvFromC1.tCsrInfo_boUpAxleFixeCommand, (TVoid*)&gCsr_ctRecDat_DataRcvFromC1.tCsrRng_boUpAxleFixeCommand,
        (TVoid*)&gCsr_tDataRcvFromC1.boUpAxleFixeCommand, (TVoid*)&mCsr_tOldDat_tDataRcvFromC1.boUpAxleFixeCommand, &mCsr_aeRecErr_tDataRcvFromC1[5],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_DataRcvFromC1.tCsrInfo_boDownAxleFixeCommand, (TVoid*)&gCsr_ctRecDat_DataRcvFromC1.tCsrRng_boDownAxleFixeCommand,
        (TVoid*)&gCsr_tDataRcvFromC1.boDownAxleFixeCommand, (TVoid*)&mCsr_tOldDat_tDataRcvFromC1.boDownAxleFixeCommand, &mCsr_aeRecErr_tDataRcvFromC1[6],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_DataRcvFromC1.tCsrInfo_boEntryTelescopeFdcSensor, (TVoid*)&gCsr_ctRecDat_DataRcvFromC1.tCsrRng_boEntryTelescopeFdcSensor,
        (TVoid*)&gCsr_tDataRcvFromC1.boEntryTelescopeFdcSensor, (TVoid*)&mCsr_tOldDat_tDataRcvFromC1.boEntryTelescopeFdcSensor, &mCsr_aeRecErr_tDataRcvFromC1[7],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_DataRcvFromC1.tCsrInfo_boDeltaArmFoldedSensor, (TVoid*)&gCsr_ctRecDat_DataRcvFromC1.tCsrRng_boDeltaArmFoldedSensor,
        (TVoid*)&gCsr_tDataRcvFromC1.boDeltaArmFoldedSensor, (TVoid*)&mCsr_tOldDat_tDataRcvFromC1.boDeltaArmFoldedSensor, &mCsr_aeRecErr_tDataRcvFromC1[8],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_DataRcvFromC1.tCsrInfo_boBoomArmFoldedSensor, (TVoid*)&gCsr_ctRecDat_DataRcvFromC1.tCsrRng_boBoomArmFoldedSensor,
        (TVoid*)&gCsr_tDataRcvFromC1.boBoomArmFoldedSensor, (TVoid*)&mCsr_tOldDat_tDataRcvFromC1.boBoomArmFoldedSensor, &mCsr_aeRecErr_tDataRcvFromC1[9],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_DataRcvFromC1.tCsrInfo_boDeltaArmInLowerZone, (TVoid*)&gCsr_ctRecDat_DataRcvFromC1.tCsrRng_boDeltaArmInLowerZone,
        (TVoid*)&gCsr_tDataRcvFromC1.boDeltaArmInLowerZone, (TVoid*)&mCsr_tOldDat_tDataRcvFromC1.boDeltaArmInLowerZone, &mCsr_aeRecErr_tDataRcvFromC1[10],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_DataRcvFromC1.tCsrInfo_boTurretInRearCenterPos, (TVoid*)&gCsr_ctRecDat_DataRcvFromC1.tCsrRng_boTurretInRearCenterPos,
        (TVoid*)&gCsr_tDataRcvFromC1.boTurretInRearCenterPos, (TVoid*)&mCsr_tOldDat_tDataRcvFromC1.boTurretInRearCenterPos, &mCsr_aeRecErr_tDataRcvFromC1[11],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_DataRcvFromC1.tCsrInfo_boTurretInFrontCenterPos, (TVoid*)&gCsr_ctRecDat_DataRcvFromC1.tCsrRng_boTurretInFrontCenterPos,
        (TVoid*)&gCsr_tDataRcvFromC1.boTurretInFrontCenterPos, (TVoid*)&mCsr_tOldDat_tDataRcvFromC1.boTurretInFrontCenterPos, &mCsr_aeRecErr_tDataRcvFromC1[12],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_DataRcvFromC1.tCsrInfo_i32RegimeMotorAlternatorRpm, (TVoid*)&gCsr_ctRecDat_DataRcvFromC1.tCsrRng_i32RegimeMotorAlternatorRpm,
        (TVoid*)&gCsr_tDataRcvFromC1.i32RegimeMotorAlternatorRpm, (TVoid*)&mCsr_tOldDat_tDataRcvFromC1.i32RegimeMotorAlternatorRpm, &mCsr_aeRecErr_tDataRcvFromC1[13],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_DataRcvFromC1.tCsrInfo_i16ArrowArmAngularSensor, (TVoid*)&gCsr_ctRecDat_DataRcvFromC1.tCsrRng_i16ArrowArmAngularSensor,
        (TVoid*)&gCsr_tDataRcvFromC1.i16ArrowArmAngularSensor, (TVoid*)&mCsr_tOldDat_tDataRcvFromC1.i16ArrowArmAngularSensor, &mCsr_aeRecErr_tDataRcvFromC1[14],
        NULL, NULL
    }
};

static const TCanSigRecRoot mCsr_ctRoot_DataRcvFromC1 =
{
    "DataRcvFromC1",                                        //!< achName - [STR] Name DataRcvFromC1
    8,                                                      //!< u8Dlc - [NUM] DLC of Can Message
    0xff,                                                   //!< u8CanByteDflt - [NUM] CAN Message default
    DATA_INTEL,                                             //!< eCanFormat - [NUM] CAN Format
    0xFF,                                                   //!< u8MasterReceiveId - [NUM] Receive Id
    15,                                                     //!< u8RecCnt - [NUM] Count of Recorde
    &mCsr_actRecDat_tDataRcvFromC1[0],                      //!< ptRec - [NUM] Pointer to Record Values
    56,                                                     //!< u16RecNo - [NUM] Record Number
    CSR_STAMP                                               //!< u16Stamp - [NUM] Safety stamp
};

TCanSigRecDataRcvFromC1 gCsr_tDataRcvFromC1 =
{
    &mCsr_ctRoot_DataRcvFromC1,                             //!< *cptRoot [POI] Root connection
    0,                                                      //!< bi2C1TurretPostSelector [[-]] new signal
    0,                                                      //!< bi2C1RadioPostSelector [[-]] new signal
    0,                                                      //!< bi2C1NacellePostSelector [[-]] new signal
    FALSE,                                                  //!< boUpAxleOscillantCommand [[-]] new signal
    FALSE,                                                  //!< boDownAxleOscillantCommand [[-]] new signal
    FALSE,                                                  //!< boUpAxleFixeCommand [[-]] new signal
    FALSE,                                                  //!< boDownAxleFixeCommand [[-]] new signal
    FALSE,                                                  //!< boEntryTelescopeFdcSensor [[-]] new signal
    FALSE,                                                  //!< boDeltaArmFoldedSensor [[-]] new signal
    FALSE,                                                  //!< boBoomArmFoldedSensor [[-]] new signal
    FALSE,                                                  //!< boDeltaArmInLowerZone [[-]] new signal
    FALSE,                                                  //!< boTurretInRearCenterPos [[-]] new signal
    FALSE,                                                  //!< boTurretInFrontCenterPos [[-]] new signal
    (((0 * 1)/1)+0),                                        //!< i32RegimeMotorAlternatorRpm [[-]] new signal
    (((0 * 1)/1)+0)                                         //!< i16ArrowArmAngularSensor [[-]] new signal
};

const TCanSigRecVal_DataSendToC1 gCsr_ctRecDat_DataSendToC1 =
{
    //!< RestrictedModeAruRadio
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 0, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< TranslationIsSolicited
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 1, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< SelectedControlPost
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBIT2, TBIT2, 2, 2, 0, 0, 1, 1 }, 
     { BI2_MIN, BI2_MAX, BI2_UNDEF, BI2_UNDEF },
    //!< AxleMovementIsSolicited
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 4, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< DownAxleFixeSensor
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 5, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< DownAxleOscillantSensor
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 6, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< ReduceSpeedRotTurretClockwise
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 7, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< SlopeAngle
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TUINT16, TUINT16, 8, 16, 0, 0, 1, 1 }, 
     { U16_MIN, U16_MAX, 0, 0 },
    //!< NacelleBasketRightSideSensor1
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 24, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< NacelleBasketRightSideSensor2
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 25, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< NacelleBasketLeftSideSensor1
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 26, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< NacelleBasketLeftSideSensor2
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 27, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< ReduceSpeedRotTurretCtClock
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 40, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< ReduceSpeedArrowArmDown
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 41, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< StopRotTurretClockwise
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 42, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< StopRotTurretCounterClockwise
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 43, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< StopRotBasketClockwise
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 44, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< StopRotBasketCounterClockwise
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 45, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< StopArrowArmDown
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 46, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< StopTelescopeOut
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 47, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< EncodeurTurret1Angle
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TINT16, TINT16, 48, 16, 0, 0, 1, 1 }, 
     { I16_MIN, I16_MAX, 0, 0 }
};

static ESigSta mCsr_aeRecErr_tDataSendToC1[21] =
{
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY
};

static TCanSigRecOldValDataSendToC1 mCsr_tOldDat_tDataSendToC1 =
{
    FALSE,                                                  //!< boRestrictedModeAruRadio [[-]] new signal
    FALSE,                                                  //!< boTranslationIsSolicited [[-]] new signal
    BI2_UNDEF,                                              //!< bi2SelectedControlPost [[-]] new signal
    FALSE,                                                  //!< boAxleMovementIsSolicited [[-]] new signal
    FALSE,                                                  //!< boDownAxleFixeSensor [[-]] new signal
    FALSE,                                                  //!< boDownAxleOscillantSensor [[-]] new signal
    FALSE,                                                  //!< boReduceSpeedRotTurretClockwise [[-]] Reduce the speed of the turret clockwise movement
    0,                                                      //!< u16SlopeAngle [[-]] new signal
    FALSE,                                                  //!< boNacelleBasketRightSideSensor1 [[-]] new signal
    FALSE,                                                  //!< boNacelleBasketRightSideSensor2 [[-]] new signal
    FALSE,                                                  //!< boNacelleBasketLeftSideSensor1 [[-]] new signal
    FALSE,                                                  //!< boNacelleBasketLeftSideSensor2 [[-]] new signal
    FALSE,                                                  //!< boReduceSpeedRotTurretCtClock [[-]] new signal
    FALSE,                                                  //!< boReduceSpeedArrowArmDown [[-]] new signal
    FALSE,                                                  //!< boStopRotTurretClockwise [[-]] new signal
    FALSE,                                                  //!< boStopRotTurretCounterClockwise [[-]] new signal
    FALSE,                                                  //!< boStopRotBasketClockwise [[-]] new signal
    FALSE,                                                  //!< boStopRotBasketCounterClockwise [[-]] new signal
    FALSE,                                                  //!< boStopArrowArmDown [[-]] new signal
    FALSE,                                                  //!< boStopTelescopeOut [[-]] new signal
    0                                                       //!< i16EncodeurTurret1Angle [[-]] new signal
};

extern TCanSigRecDataSendToC1 gCsr_tDataSendToC1;
static const TRecDat mCsr_actRecDat_tDataSendToC1[21] =
{
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_DataSendToC1.tCsrInfo_boRestrictedModeAruRadio, (TVoid*)&gCsr_ctRecDat_DataSendToC1.tCsrRng_boRestrictedModeAruRadio,
        (TVoid*)&gCsr_tDataSendToC1.boRestrictedModeAruRadio, (TVoid*)&mCsr_tOldDat_tDataSendToC1.boRestrictedModeAruRadio, &mCsr_aeRecErr_tDataSendToC1[0],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_DataSendToC1.tCsrInfo_boTranslationIsSolicited, (TVoid*)&gCsr_ctRecDat_DataSendToC1.tCsrRng_boTranslationIsSolicited,
        (TVoid*)&gCsr_tDataSendToC1.boTranslationIsSolicited, (TVoid*)&mCsr_tOldDat_tDataSendToC1.boTranslationIsSolicited, &mCsr_aeRecErr_tDataSendToC1[1],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_DataSendToC1.tCsrInfo_bi2SelectedControlPost, (TVoid*)&gCsr_ctRecDat_DataSendToC1.tCsrRng_bi2SelectedControlPost,
        (TVoid*)&gCsr_tDataSendToC1.bi2SelectedControlPost, (TVoid*)&mCsr_tOldDat_tDataSendToC1.bi2SelectedControlPost, &mCsr_aeRecErr_tDataSendToC1[2],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_DataSendToC1.tCsrInfo_boAxleMovementIsSolicited, (TVoid*)&gCsr_ctRecDat_DataSendToC1.tCsrRng_boAxleMovementIsSolicited,
        (TVoid*)&gCsr_tDataSendToC1.boAxleMovementIsSolicited, (TVoid*)&mCsr_tOldDat_tDataSendToC1.boAxleMovementIsSolicited, &mCsr_aeRecErr_tDataSendToC1[3],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_DataSendToC1.tCsrInfo_boDownAxleFixeSensor, (TVoid*)&gCsr_ctRecDat_DataSendToC1.tCsrRng_boDownAxleFixeSensor,
        (TVoid*)&gCsr_tDataSendToC1.boDownAxleFixeSensor, (TVoid*)&mCsr_tOldDat_tDataSendToC1.boDownAxleFixeSensor, &mCsr_aeRecErr_tDataSendToC1[4],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_DataSendToC1.tCsrInfo_boDownAxleOscillantSensor, (TVoid*)&gCsr_ctRecDat_DataSendToC1.tCsrRng_boDownAxleOscillantSensor,
        (TVoid*)&gCsr_tDataSendToC1.boDownAxleOscillantSensor, (TVoid*)&mCsr_tOldDat_tDataSendToC1.boDownAxleOscillantSensor, &mCsr_aeRecErr_tDataSendToC1[5],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_DataSendToC1.tCsrInfo_boReduceSpeedRotTurretClockwise, (TVoid*)&gCsr_ctRecDat_DataSendToC1.tCsrRng_boReduceSpeedRotTurretClockwise,
        (TVoid*)&gCsr_tDataSendToC1.boReduceSpeedRotTurretClockwise, (TVoid*)&mCsr_tOldDat_tDataSendToC1.boReduceSpeedRotTurretClockwise, &mCsr_aeRecErr_tDataSendToC1[6],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_DataSendToC1.tCsrInfo_u16SlopeAngle, (TVoid*)&gCsr_ctRecDat_DataSendToC1.tCsrRng_u16SlopeAngle,
        (TVoid*)&gCsr_tDataSendToC1.u16SlopeAngle, (TVoid*)&mCsr_tOldDat_tDataSendToC1.u16SlopeAngle, &mCsr_aeRecErr_tDataSendToC1[7],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_DataSendToC1.tCsrInfo_boNacelleBasketRightSideSensor1, (TVoid*)&gCsr_ctRecDat_DataSendToC1.tCsrRng_boNacelleBasketRightSideSensor1,
        (TVoid*)&gCsr_tDataSendToC1.boNacelleBasketRightSideSensor1, (TVoid*)&mCsr_tOldDat_tDataSendToC1.boNacelleBasketRightSideSensor1, &mCsr_aeRecErr_tDataSendToC1[8],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_DataSendToC1.tCsrInfo_boNacelleBasketRightSideSensor2, (TVoid*)&gCsr_ctRecDat_DataSendToC1.tCsrRng_boNacelleBasketRightSideSensor2,
        (TVoid*)&gCsr_tDataSendToC1.boNacelleBasketRightSideSensor2, (TVoid*)&mCsr_tOldDat_tDataSendToC1.boNacelleBasketRightSideSensor2, &mCsr_aeRecErr_tDataSendToC1[9],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_DataSendToC1.tCsrInfo_boNacelleBasketLeftSideSensor1, (TVoid*)&gCsr_ctRecDat_DataSendToC1.tCsrRng_boNacelleBasketLeftSideSensor1,
        (TVoid*)&gCsr_tDataSendToC1.boNacelleBasketLeftSideSensor1, (TVoid*)&mCsr_tOldDat_tDataSendToC1.boNacelleBasketLeftSideSensor1, &mCsr_aeRecErr_tDataSendToC1[10],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_DataSendToC1.tCsrInfo_boNacelleBasketLeftSideSensor2, (TVoid*)&gCsr_ctRecDat_DataSendToC1.tCsrRng_boNacelleBasketLeftSideSensor2,
        (TVoid*)&gCsr_tDataSendToC1.boNacelleBasketLeftSideSensor2, (TVoid*)&mCsr_tOldDat_tDataSendToC1.boNacelleBasketLeftSideSensor2, &mCsr_aeRecErr_tDataSendToC1[11],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_DataSendToC1.tCsrInfo_boReduceSpeedRotTurretCtClock, (TVoid*)&gCsr_ctRecDat_DataSendToC1.tCsrRng_boReduceSpeedRotTurretCtClock,
        (TVoid*)&gCsr_tDataSendToC1.boReduceSpeedRotTurretCtClock, (TVoid*)&mCsr_tOldDat_tDataSendToC1.boReduceSpeedRotTurretCtClock, &mCsr_aeRecErr_tDataSendToC1[12],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_DataSendToC1.tCsrInfo_boReduceSpeedArrowArmDown, (TVoid*)&gCsr_ctRecDat_DataSendToC1.tCsrRng_boReduceSpeedArrowArmDown,
        (TVoid*)&gCsr_tDataSendToC1.boReduceSpeedArrowArmDown, (TVoid*)&mCsr_tOldDat_tDataSendToC1.boReduceSpeedArrowArmDown, &mCsr_aeRecErr_tDataSendToC1[13],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_DataSendToC1.tCsrInfo_boStopRotTurretClockwise, (TVoid*)&gCsr_ctRecDat_DataSendToC1.tCsrRng_boStopRotTurretClockwise,
        (TVoid*)&gCsr_tDataSendToC1.boStopRotTurretClockwise, (TVoid*)&mCsr_tOldDat_tDataSendToC1.boStopRotTurretClockwise, &mCsr_aeRecErr_tDataSendToC1[14],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_DataSendToC1.tCsrInfo_boStopRotTurretCounterClockwise, (TVoid*)&gCsr_ctRecDat_DataSendToC1.tCsrRng_boStopRotTurretCounterClockwise,
        (TVoid*)&gCsr_tDataSendToC1.boStopRotTurretCounterClockwise, (TVoid*)&mCsr_tOldDat_tDataSendToC1.boStopRotTurretCounterClockwise, &mCsr_aeRecErr_tDataSendToC1[15],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_DataSendToC1.tCsrInfo_boStopRotBasketClockwise, (TVoid*)&gCsr_ctRecDat_DataSendToC1.tCsrRng_boStopRotBasketClockwise,
        (TVoid*)&gCsr_tDataSendToC1.boStopRotBasketClockwise, (TVoid*)&mCsr_tOldDat_tDataSendToC1.boStopRotBasketClockwise, &mCsr_aeRecErr_tDataSendToC1[16],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_DataSendToC1.tCsrInfo_boStopRotBasketCounterClockwise, (TVoid*)&gCsr_ctRecDat_DataSendToC1.tCsrRng_boStopRotBasketCounterClockwise,
        (TVoid*)&gCsr_tDataSendToC1.boStopRotBasketCounterClockwise, (TVoid*)&mCsr_tOldDat_tDataSendToC1.boStopRotBasketCounterClockwise, &mCsr_aeRecErr_tDataSendToC1[17],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_DataSendToC1.tCsrInfo_boStopArrowArmDown, (TVoid*)&gCsr_ctRecDat_DataSendToC1.tCsrRng_boStopArrowArmDown,
        (TVoid*)&gCsr_tDataSendToC1.boStopArrowArmDown, (TVoid*)&mCsr_tOldDat_tDataSendToC1.boStopArrowArmDown, &mCsr_aeRecErr_tDataSendToC1[18],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_DataSendToC1.tCsrInfo_boStopTelescopeOut, (TVoid*)&gCsr_ctRecDat_DataSendToC1.tCsrRng_boStopTelescopeOut,
        (TVoid*)&gCsr_tDataSendToC1.boStopTelescopeOut, (TVoid*)&mCsr_tOldDat_tDataSendToC1.boStopTelescopeOut, &mCsr_aeRecErr_tDataSendToC1[19],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_DataSendToC1.tCsrInfo_i16EncodeurTurret1Angle, (TVoid*)&gCsr_ctRecDat_DataSendToC1.tCsrRng_i16EncodeurTurret1Angle,
        (TVoid*)&gCsr_tDataSendToC1.i16EncodeurTurret1Angle, (TVoid*)&mCsr_tOldDat_tDataSendToC1.i16EncodeurTurret1Angle, &mCsr_aeRecErr_tDataSendToC1[20],
        NULL, NULL
    }
};

static const TCanSigRecRoot mCsr_ctRoot_DataSendToC1 =
{
    "DataSendToC1",                                         //!< achName - [STR] Name DataSendToC1
    8,                                                      //!< u8Dlc - [NUM] DLC of Can Message
    0xff,                                                   //!< u8CanByteDflt - [NUM] CAN Message default
    DATA_INTEL,                                             //!< eCanFormat - [NUM] CAN Format
    0xFF,                                                   //!< u8MasterReceiveId - [NUM] Receive Id
    21,                                                     //!< u8RecCnt - [NUM] Count of Recorde
    &mCsr_actRecDat_tDataSendToC1[0],                       //!< ptRec - [NUM] Pointer to Record Values
    57,                                                     //!< u16RecNo - [NUM] Record Number
    CSR_STAMP                                               //!< u16Stamp - [NUM] Safety stamp
};

TCanSigRecDataSendToC1 gCsr_tDataSendToC1 =
{
    &mCsr_ctRoot_DataSendToC1,                              //!< *cptRoot [POI] Root connection
    FALSE,                                                  //!< boRestrictedModeAruRadio [[-]] new signal
    FALSE,                                                  //!< boTranslationIsSolicited [[-]] new signal
    3,                                                      //!< bi2SelectedControlPost [[-]] new signal
    FALSE,                                                  //!< boAxleMovementIsSolicited [[-]] new signal
    FALSE,                                                  //!< boDownAxleFixeSensor [[-]] new signal
    FALSE,                                                  //!< boDownAxleOscillantSensor [[-]] new signal
    FALSE,                                                  //!< boReduceSpeedRotTurretClockwise [[-]] Reduce the speed of the turret clockwise movement
    (((0 * 1)/1)+0),                                        //!< u16SlopeAngle [[-]] new signal
    FALSE,                                                  //!< boNacelleBasketRightSideSensor1 [[-]] new signal
    FALSE,                                                  //!< boNacelleBasketRightSideSensor2 [[-]] new signal
    FALSE,                                                  //!< boNacelleBasketLeftSideSensor1 [[-]] new signal
    FALSE,                                                  //!< boNacelleBasketLeftSideSensor2 [[-]] new signal
    FALSE,                                                  //!< boReduceSpeedRotTurretCtClock [[-]] new signal
    FALSE,                                                  //!< boReduceSpeedArrowArmDown [[-]] new signal
    FALSE,                                                  //!< boStopRotTurretClockwise [[-]] new signal
    FALSE,                                                  //!< boStopRotTurretCounterClockwise [[-]] new signal
    FALSE,                                                  //!< boStopRotBasketClockwise [[-]] new signal
    FALSE,                                                  //!< boStopRotBasketCounterClockwise [[-]] new signal
    FALSE,                                                  //!< boStopArrowArmDown [[-]] new signal
    FALSE,                                                  //!< boStopTelescopeOut [[-]] new signal
    (((0 * 1)/1)+0)                                         //!< i16EncodeurTurret1Angle [[-]] new signal
};

const TCanSigRecVal_Data2SendToC1 gCsr_ctRecDat_Data2SendToC1 =
{
    //!< RedLightARGBasketCmd
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 0, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< WhiteLightARGBasketCmd
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 1, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< WrongAbutments
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 2, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< StopMovementByBrakeTest
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 3, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< StopMovementByBreakInBrake
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 4, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< EnableBuzzerSelectPost
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 5, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< UpOsciAxlePos
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 6, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< UpFixeAxlePos
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 7, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< EncodeurMastMeasureRaw
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TUINT32, TUINT32, 8, 32, 0, 0, 1, 1 }, 
     { U32_MIN, U32_MAX, 0, 0 },
    //!< CenteredTurretState
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 40, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< AuthorizeWork
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 41, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< RailWorkMode
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, ERAILWORKMODE_TYPE, ERAILWORKMODE_TYPE, 48, 8, 0, 0, 1, 1 }, 
     { GE_NO_RAIL_WORK_MODE, GE_MULTILANE_MODE, GE_NO_RAIL_WORK_MODE, GE_NO_RAIL_WORK_MODE },
    //!< RedLightARDBasketCmd
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 56, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< WhiteLightARDBasketCmd
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 57, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< SecondParkBrakeActive
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 58, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE }
};

static ESigSta mCsr_aeRecErr_tData2SendToC1[15] =
{
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY
};

static TCanSigRecOldValData2SendToC1 mCsr_tOldDat_tData2SendToC1 =
{
    FALSE,                                                  //!< boRedLightARGBasketCmd [[-]] new signal
    FALSE,                                                  //!< boWhiteLightARGBasketCmd [[-]] new signal
    FALSE,                                                  //!< boWrongAbutments [[-]] new signal
    FALSE,                                                  //!< boStopMovementByBrakeTest [[-]] new signal
    FALSE,                                                  //!< boStopMovementByBreakInBrake [[-]] new signal
    FALSE,                                                  //!< boEnableBuzzerSelectPost [[-]] new signal
    FALSE,                                                  //!< boUpOsciAxlePos [[-]] new signal
    FALSE,                                                  //!< boUpFixeAxlePos [[-]] new signal
    0,                                                      //!< u32EncodeurMastMeasureRaw [[-]] new signal
    FALSE,                                                  //!< boCenteredTurretState [[-]] new signal
    FALSE,                                                  //!< boAuthorizeWork [[-]] new signal
    GE_NO_RAIL_WORK_MODE,                                   //!< eRailWorkMode [[-]] new signal
    FALSE,                                                  //!< boRedLightARDBasketCmd [[-]] new signal
    FALSE,                                                  //!< boWhiteLightARDBasketCmd [[-]] new signal
    FALSE                                                   //!< boSecondParkBrakeActive [[-]] new signal
};

extern TCanSigRecData2SendToC1 gCsr_tData2SendToC1;
static const TRecDat mCsr_actRecDat_tData2SendToC1[15] =
{
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Data2SendToC1.tCsrInfo_boRedLightARGBasketCmd, (TVoid*)&gCsr_ctRecDat_Data2SendToC1.tCsrRng_boRedLightARGBasketCmd,
        (TVoid*)&gCsr_tData2SendToC1.boRedLightARGBasketCmd, (TVoid*)&mCsr_tOldDat_tData2SendToC1.boRedLightARGBasketCmd, &mCsr_aeRecErr_tData2SendToC1[0],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Data2SendToC1.tCsrInfo_boWhiteLightARGBasketCmd, (TVoid*)&gCsr_ctRecDat_Data2SendToC1.tCsrRng_boWhiteLightARGBasketCmd,
        (TVoid*)&gCsr_tData2SendToC1.boWhiteLightARGBasketCmd, (TVoid*)&mCsr_tOldDat_tData2SendToC1.boWhiteLightARGBasketCmd, &mCsr_aeRecErr_tData2SendToC1[1],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Data2SendToC1.tCsrInfo_boWrongAbutments, (TVoid*)&gCsr_ctRecDat_Data2SendToC1.tCsrRng_boWrongAbutments,
        (TVoid*)&gCsr_tData2SendToC1.boWrongAbutments, (TVoid*)&mCsr_tOldDat_tData2SendToC1.boWrongAbutments, &mCsr_aeRecErr_tData2SendToC1[2],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Data2SendToC1.tCsrInfo_boStopMovementByBrakeTest, (TVoid*)&gCsr_ctRecDat_Data2SendToC1.tCsrRng_boStopMovementByBrakeTest,
        (TVoid*)&gCsr_tData2SendToC1.boStopMovementByBrakeTest, (TVoid*)&mCsr_tOldDat_tData2SendToC1.boStopMovementByBrakeTest, &mCsr_aeRecErr_tData2SendToC1[3],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Data2SendToC1.tCsrInfo_boStopMovementByBreakInBrake, (TVoid*)&gCsr_ctRecDat_Data2SendToC1.tCsrRng_boStopMovementByBreakInBrake,
        (TVoid*)&gCsr_tData2SendToC1.boStopMovementByBreakInBrake, (TVoid*)&mCsr_tOldDat_tData2SendToC1.boStopMovementByBreakInBrake, &mCsr_aeRecErr_tData2SendToC1[4],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Data2SendToC1.tCsrInfo_boEnableBuzzerSelectPost, (TVoid*)&gCsr_ctRecDat_Data2SendToC1.tCsrRng_boEnableBuzzerSelectPost,
        (TVoid*)&gCsr_tData2SendToC1.boEnableBuzzerSelectPost, (TVoid*)&mCsr_tOldDat_tData2SendToC1.boEnableBuzzerSelectPost, &mCsr_aeRecErr_tData2SendToC1[5],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Data2SendToC1.tCsrInfo_boUpOsciAxlePos, (TVoid*)&gCsr_ctRecDat_Data2SendToC1.tCsrRng_boUpOsciAxlePos,
        (TVoid*)&gCsr_tData2SendToC1.boUpOsciAxlePos, (TVoid*)&mCsr_tOldDat_tData2SendToC1.boUpOsciAxlePos, &mCsr_aeRecErr_tData2SendToC1[6],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Data2SendToC1.tCsrInfo_boUpFixeAxlePos, (TVoid*)&gCsr_ctRecDat_Data2SendToC1.tCsrRng_boUpFixeAxlePos,
        (TVoid*)&gCsr_tData2SendToC1.boUpFixeAxlePos, (TVoid*)&mCsr_tOldDat_tData2SendToC1.boUpFixeAxlePos, &mCsr_aeRecErr_tData2SendToC1[7],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Data2SendToC1.tCsrInfo_u32EncodeurMastMeasureRaw, (TVoid*)&gCsr_ctRecDat_Data2SendToC1.tCsrRng_u32EncodeurMastMeasureRaw,
        (TVoid*)&gCsr_tData2SendToC1.u32EncodeurMastMeasureRaw, (TVoid*)&mCsr_tOldDat_tData2SendToC1.u32EncodeurMastMeasureRaw, &mCsr_aeRecErr_tData2SendToC1[8],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Data2SendToC1.tCsrInfo_boCenteredTurretState, (TVoid*)&gCsr_ctRecDat_Data2SendToC1.tCsrRng_boCenteredTurretState,
        (TVoid*)&gCsr_tData2SendToC1.boCenteredTurretState, (TVoid*)&mCsr_tOldDat_tData2SendToC1.boCenteredTurretState, &mCsr_aeRecErr_tData2SendToC1[9],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Data2SendToC1.tCsrInfo_boAuthorizeWork, (TVoid*)&gCsr_ctRecDat_Data2SendToC1.tCsrRng_boAuthorizeWork,
        (TVoid*)&gCsr_tData2SendToC1.boAuthorizeWork, (TVoid*)&mCsr_tOldDat_tData2SendToC1.boAuthorizeWork, &mCsr_aeRecErr_tData2SendToC1[10],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Data2SendToC1.tCsrInfo_eRailWorkMode, (TVoid*)&gCsr_ctRecDat_Data2SendToC1.tCsrRng_eRailWorkMode,
        (TVoid*)&gCsr_tData2SendToC1.eRailWorkMode, (TVoid*)&mCsr_tOldDat_tData2SendToC1.eRailWorkMode, &mCsr_aeRecErr_tData2SendToC1[11],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Data2SendToC1.tCsrInfo_boRedLightARDBasketCmd, (TVoid*)&gCsr_ctRecDat_Data2SendToC1.tCsrRng_boRedLightARDBasketCmd,
        (TVoid*)&gCsr_tData2SendToC1.boRedLightARDBasketCmd, (TVoid*)&mCsr_tOldDat_tData2SendToC1.boRedLightARDBasketCmd, &mCsr_aeRecErr_tData2SendToC1[12],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Data2SendToC1.tCsrInfo_boWhiteLightARDBasketCmd, (TVoid*)&gCsr_ctRecDat_Data2SendToC1.tCsrRng_boWhiteLightARDBasketCmd,
        (TVoid*)&gCsr_tData2SendToC1.boWhiteLightARDBasketCmd, (TVoid*)&mCsr_tOldDat_tData2SendToC1.boWhiteLightARDBasketCmd, &mCsr_aeRecErr_tData2SendToC1[13],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Data2SendToC1.tCsrInfo_boSecondParkBrakeActive, (TVoid*)&gCsr_ctRecDat_Data2SendToC1.tCsrRng_boSecondParkBrakeActive,
        (TVoid*)&gCsr_tData2SendToC1.boSecondParkBrakeActive, (TVoid*)&mCsr_tOldDat_tData2SendToC1.boSecondParkBrakeActive, &mCsr_aeRecErr_tData2SendToC1[14],
        NULL, NULL
    }
};

static const TCanSigRecRoot mCsr_ctRoot_Data2SendToC1 =
{
    "Data2SendToC1",                                        //!< achName - [STR] Name Data2SendToC1
    8,                                                      //!< u8Dlc - [NUM] DLC of Can Message
    0xff,                                                   //!< u8CanByteDflt - [NUM] CAN Message default
    DATA_INTEL,                                             //!< eCanFormat - [NUM] CAN Format
    0xFF,                                                   //!< u8MasterReceiveId - [NUM] Receive Id
    15,                                                     //!< u8RecCnt - [NUM] Count of Recorde
    &mCsr_actRecDat_tData2SendToC1[0],                      //!< ptRec - [NUM] Pointer to Record Values
    58,                                                     //!< u16RecNo - [NUM] Record Number
    CSR_STAMP                                               //!< u16Stamp - [NUM] Safety stamp
};

TCanSigRecData2SendToC1 gCsr_tData2SendToC1 =
{
    &mCsr_ctRoot_Data2SendToC1,                             //!< *cptRoot [POI] Root connection
    FALSE,                                                  //!< boRedLightARGBasketCmd [[-]] new signal
    FALSE,                                                  //!< boWhiteLightARGBasketCmd [[-]] new signal
    FALSE,                                                  //!< boWrongAbutments [[-]] new signal
    FALSE,                                                  //!< boStopMovementByBrakeTest [[-]] new signal
    FALSE,                                                  //!< boStopMovementByBreakInBrake [[-]] new signal
    FALSE,                                                  //!< boEnableBuzzerSelectPost [[-]] new signal
    FALSE,                                                  //!< boUpOsciAxlePos [[-]] new signal
    FALSE,                                                  //!< boUpFixeAxlePos [[-]] new signal
    (((0 * 1)/1)+0),                                        //!< u32EncodeurMastMeasureRaw [[-]] new signal
    FALSE,                                                  //!< boCenteredTurretState [[-]] new signal
    FALSE,                                                  //!< boAuthorizeWork [[-]] new signal
    GE_NO_RAIL_WORK_MODE,                                   //!< eRailWorkMode [[-]] new signal
    FALSE,                                                  //!< boRedLightARDBasketCmd [[-]] new signal
    FALSE,                                                  //!< boWhiteLightARDBasketCmd [[-]] new signal
    FALSE                                                   //!< boSecondParkBrakeActive [[-]] new signal
};

const TCanSigRecVal_Data2RdvFromC1 gCsr_ctRecDat_Data2RdvFromC1 =
{
    //!< EvUpMeasuringMastCmd
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 0, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< EvDownMeasuringMastCmd
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 1, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< FoldedDeltaArmZone
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 2, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< FoldedArrowArmZone
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 3, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< FoldedMastMeasure
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 4, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< BasketInCentrerPos
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 5, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< DeltaArmAngularSensorValue
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TINT16, TINT16, 8, 16, 0, 0, 1, 1 }, 
     { I16_MIN, I16_MAX, 0, 0 },
    //!< Transmission1Pressure
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TINT16, TINT16, 24, 16, 0, 0, 1, 1 }, 
     { I16_MIN, I16_MAX, 0, 0 },
    //!< Transmission2Pressure
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TINT16, TINT16, 40, 16, 0, 0, 1, 1 }, 
     { I16_MIN, I16_MAX, 0, 0 },
    //!< ActiveHelpState
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBIT2, TBIT2, 56, 2, 0, 0, 1, 1 }, 
     { BI2_MIN, BI2_MAX, 0, 0 },
    //!< StopAllMovementsNacellePost
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 58, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< SlopeModeFromC1
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 59, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE }
};

static ESigSta mCsr_aeRecErr_tData2RdvFromC1[12] =
{
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY
};

static TCanSigRecOldValData2RdvFromC1 mCsr_tOldDat_tData2RdvFromC1 =
{
    FALSE,                                                  //!< boEvUpMeasuringMastCmd [[-]] new signal
    FALSE,                                                  //!< boEvDownMeasuringMastCmd [[-]] new signal
    FALSE,                                                  //!< boFoldedDeltaArmZone [[-]] new signal
    FALSE,                                                  //!< boFoldedArrowArmZone [[-]] new signal
    FALSE,                                                  //!< boFoldedMastMeasure [[-]] new signal
    FALSE,                                                  //!< boBasketInCentrerPos [[-]] new signal
    0,                                                      //!< i16DeltaArmAngularSensorValue [[-]] new signal
    0,                                                      //!< i16Transmission1Pressure [[-]] new signal
    0,                                                      //!< i16Transmission2Pressure [[-]] new signal
    0,                                                      //!< bi2ActiveHelpState [[-]] new signal
    FALSE,                                                  //!< boStopAllMovementsNacellePost [[-]] new signal
    FALSE                                                   //!< boSlopeModeFromC1 [[-]] new signal
};

extern TCanSigRecData2RdvFromC1 gCsr_tData2RdvFromC1;
static const TRecDat mCsr_actRecDat_tData2RdvFromC1[12] =
{
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Data2RdvFromC1.tCsrInfo_boEvUpMeasuringMastCmd, (TVoid*)&gCsr_ctRecDat_Data2RdvFromC1.tCsrRng_boEvUpMeasuringMastCmd,
        (TVoid*)&gCsr_tData2RdvFromC1.boEvUpMeasuringMastCmd, (TVoid*)&mCsr_tOldDat_tData2RdvFromC1.boEvUpMeasuringMastCmd, &mCsr_aeRecErr_tData2RdvFromC1[0],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Data2RdvFromC1.tCsrInfo_boEvDownMeasuringMastCmd, (TVoid*)&gCsr_ctRecDat_Data2RdvFromC1.tCsrRng_boEvDownMeasuringMastCmd,
        (TVoid*)&gCsr_tData2RdvFromC1.boEvDownMeasuringMastCmd, (TVoid*)&mCsr_tOldDat_tData2RdvFromC1.boEvDownMeasuringMastCmd, &mCsr_aeRecErr_tData2RdvFromC1[1],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Data2RdvFromC1.tCsrInfo_boFoldedDeltaArmZone, (TVoid*)&gCsr_ctRecDat_Data2RdvFromC1.tCsrRng_boFoldedDeltaArmZone,
        (TVoid*)&gCsr_tData2RdvFromC1.boFoldedDeltaArmZone, (TVoid*)&mCsr_tOldDat_tData2RdvFromC1.boFoldedDeltaArmZone, &mCsr_aeRecErr_tData2RdvFromC1[2],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Data2RdvFromC1.tCsrInfo_boFoldedArrowArmZone, (TVoid*)&gCsr_ctRecDat_Data2RdvFromC1.tCsrRng_boFoldedArrowArmZone,
        (TVoid*)&gCsr_tData2RdvFromC1.boFoldedArrowArmZone, (TVoid*)&mCsr_tOldDat_tData2RdvFromC1.boFoldedArrowArmZone, &mCsr_aeRecErr_tData2RdvFromC1[3],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Data2RdvFromC1.tCsrInfo_boFoldedMastMeasure, (TVoid*)&gCsr_ctRecDat_Data2RdvFromC1.tCsrRng_boFoldedMastMeasure,
        (TVoid*)&gCsr_tData2RdvFromC1.boFoldedMastMeasure, (TVoid*)&mCsr_tOldDat_tData2RdvFromC1.boFoldedMastMeasure, &mCsr_aeRecErr_tData2RdvFromC1[4],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Data2RdvFromC1.tCsrInfo_boBasketInCentrerPos, (TVoid*)&gCsr_ctRecDat_Data2RdvFromC1.tCsrRng_boBasketInCentrerPos,
        (TVoid*)&gCsr_tData2RdvFromC1.boBasketInCentrerPos, (TVoid*)&mCsr_tOldDat_tData2RdvFromC1.boBasketInCentrerPos, &mCsr_aeRecErr_tData2RdvFromC1[5],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Data2RdvFromC1.tCsrInfo_i16DeltaArmAngularSensorValue, (TVoid*)&gCsr_ctRecDat_Data2RdvFromC1.tCsrRng_i16DeltaArmAngularSensorValue,
        (TVoid*)&gCsr_tData2RdvFromC1.i16DeltaArmAngularSensorValue, (TVoid*)&mCsr_tOldDat_tData2RdvFromC1.i16DeltaArmAngularSensorValue, &mCsr_aeRecErr_tData2RdvFromC1[6],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Data2RdvFromC1.tCsrInfo_i16Transmission1Pressure, (TVoid*)&gCsr_ctRecDat_Data2RdvFromC1.tCsrRng_i16Transmission1Pressure,
        (TVoid*)&gCsr_tData2RdvFromC1.i16Transmission1Pressure, (TVoid*)&mCsr_tOldDat_tData2RdvFromC1.i16Transmission1Pressure, &mCsr_aeRecErr_tData2RdvFromC1[7],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Data2RdvFromC1.tCsrInfo_i16Transmission2Pressure, (TVoid*)&gCsr_ctRecDat_Data2RdvFromC1.tCsrRng_i16Transmission2Pressure,
        (TVoid*)&gCsr_tData2RdvFromC1.i16Transmission2Pressure, (TVoid*)&mCsr_tOldDat_tData2RdvFromC1.i16Transmission2Pressure, &mCsr_aeRecErr_tData2RdvFromC1[8],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Data2RdvFromC1.tCsrInfo_bi2ActiveHelpState, (TVoid*)&gCsr_ctRecDat_Data2RdvFromC1.tCsrRng_bi2ActiveHelpState,
        (TVoid*)&gCsr_tData2RdvFromC1.bi2ActiveHelpState, (TVoid*)&mCsr_tOldDat_tData2RdvFromC1.bi2ActiveHelpState, &mCsr_aeRecErr_tData2RdvFromC1[9],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Data2RdvFromC1.tCsrInfo_boStopAllMovementsNacellePost, (TVoid*)&gCsr_ctRecDat_Data2RdvFromC1.tCsrRng_boStopAllMovementsNacellePost,
        (TVoid*)&gCsr_tData2RdvFromC1.boStopAllMovementsNacellePost, (TVoid*)&mCsr_tOldDat_tData2RdvFromC1.boStopAllMovementsNacellePost, &mCsr_aeRecErr_tData2RdvFromC1[10],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Data2RdvFromC1.tCsrInfo_boSlopeModeFromC1, (TVoid*)&gCsr_ctRecDat_Data2RdvFromC1.tCsrRng_boSlopeModeFromC1,
        (TVoid*)&gCsr_tData2RdvFromC1.boSlopeModeFromC1, (TVoid*)&mCsr_tOldDat_tData2RdvFromC1.boSlopeModeFromC1, &mCsr_aeRecErr_tData2RdvFromC1[11],
        NULL, NULL
    }
};

static const TCanSigRecRoot mCsr_ctRoot_Data2RdvFromC1 =
{
    "Data2RdvFromC1",                                       //!< achName - [STR] Name Data2RdvFromC1
    8,                                                      //!< u8Dlc - [NUM] DLC of Can Message
    0xff,                                                   //!< u8CanByteDflt - [NUM] CAN Message default
    DATA_INTEL,                                             //!< eCanFormat - [NUM] CAN Format
    0xFF,                                                   //!< u8MasterReceiveId - [NUM] Receive Id
    12,                                                     //!< u8RecCnt - [NUM] Count of Recorde
    &mCsr_actRecDat_tData2RdvFromC1[0],                     //!< ptRec - [NUM] Pointer to Record Values
    59,                                                     //!< u16RecNo - [NUM] Record Number
    CSR_STAMP                                               //!< u16Stamp - [NUM] Safety stamp
};

TCanSigRecData2RdvFromC1 gCsr_tData2RdvFromC1 =
{
    &mCsr_ctRoot_Data2RdvFromC1,                            //!< *cptRoot [POI] Root connection
    FALSE,                                                  //!< boEvUpMeasuringMastCmd [[-]] new signal
    FALSE,                                                  //!< boEvDownMeasuringMastCmd [[-]] new signal
    FALSE,                                                  //!< boFoldedDeltaArmZone [[-]] new signal
    FALSE,                                                  //!< boFoldedArrowArmZone [[-]] new signal
    FALSE,                                                  //!< boFoldedMastMeasure [[-]] new signal
    FALSE,                                                  //!< boBasketInCentrerPos [[-]] new signal
    (((0 * 1)/1)+0),                                        //!< i16DeltaArmAngularSensorValue [[-]] new signal
    (((0 * 1)/1)+0),                                        //!< i16Transmission1Pressure [[-]] new signal
    (((0 * 1)/1)+0),                                        //!< i16Transmission2Pressure [[-]] new signal
    0,                                                      //!< bi2ActiveHelpState [[-]] new signal
    FALSE,                                                  //!< boStopAllMovementsNacellePost [[-]] new signal
    FALSE                                                   //!< boSlopeModeFromC1 [[-]] new signal
};

const TCanSigRecVal_Data3SendToC1 gCsr_ctRecDat_Data3SendToC1 =
{
    //!< SpeedVehicleKmhx100
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TINT32, TINT32, 0, 32, 0, 0, 1, 1 }, 
     { I32_MIN, I32_MAX, 0, 0 },
    //!< EvForwardCommand
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TUINT16, TUINT16, 32, 16, 0, 0, 1, 1 }, 
     { U16_MIN, U16_MAX, 0, 0 },
    //!< EvBackwardCommand
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TUINT16, TUINT16, 48, 16, 0, 0, 1, 1 }, 
     { U16_MIN, U16_MAX, 0, 0 }
};

static ESigSta mCsr_aeRecErr_tData3SendToC1[3] =
{
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY
};

static TCanSigRecOldValData3SendToC1 mCsr_tOldDat_tData3SendToC1 =
{
    0,                                                      //!< i32SpeedVehicleKmhx100 [[-]] new signal
    0,                                                      //!< u16EvForwardCommand [[-]] new signal
    0                                                       //!< u16EvBackwardCommand [[-]] new signal
};

extern TCanSigRecData3SendToC1 gCsr_tData3SendToC1;
static const TRecDat mCsr_actRecDat_tData3SendToC1[3] =
{
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Data3SendToC1.tCsrInfo_i32SpeedVehicleKmhx100, (TVoid*)&gCsr_ctRecDat_Data3SendToC1.tCsrRng_i32SpeedVehicleKmhx100,
        (TVoid*)&gCsr_tData3SendToC1.i32SpeedVehicleKmhx100, (TVoid*)&mCsr_tOldDat_tData3SendToC1.i32SpeedVehicleKmhx100, &mCsr_aeRecErr_tData3SendToC1[0],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Data3SendToC1.tCsrInfo_u16EvForwardCommand, (TVoid*)&gCsr_ctRecDat_Data3SendToC1.tCsrRng_u16EvForwardCommand,
        (TVoid*)&gCsr_tData3SendToC1.u16EvForwardCommand, (TVoid*)&mCsr_tOldDat_tData3SendToC1.u16EvForwardCommand, &mCsr_aeRecErr_tData3SendToC1[1],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Data3SendToC1.tCsrInfo_u16EvBackwardCommand, (TVoid*)&gCsr_ctRecDat_Data3SendToC1.tCsrRng_u16EvBackwardCommand,
        (TVoid*)&gCsr_tData3SendToC1.u16EvBackwardCommand, (TVoid*)&mCsr_tOldDat_tData3SendToC1.u16EvBackwardCommand, &mCsr_aeRecErr_tData3SendToC1[2],
        NULL, NULL
    }
};

static const TCanSigRecRoot mCsr_ctRoot_Data3SendToC1 =
{
    "Data3SendToC1",                                        //!< achName - [STR] Name Data3SendToC1
    8,                                                      //!< u8Dlc - [NUM] DLC of Can Message
    0xff,                                                   //!< u8CanByteDflt - [NUM] CAN Message default
    DATA_INTEL,                                             //!< eCanFormat - [NUM] CAN Format
    0xFF,                                                   //!< u8MasterReceiveId - [NUM] Receive Id
    3,                                                      //!< u8RecCnt - [NUM] Count of Recorde
    &mCsr_actRecDat_tData3SendToC1[0],                      //!< ptRec - [NUM] Pointer to Record Values
    60,                                                     //!< u16RecNo - [NUM] Record Number
    CSR_STAMP                                               //!< u16Stamp - [NUM] Safety stamp
};

TCanSigRecData3SendToC1 gCsr_tData3SendToC1 =
{
    &mCsr_ctRoot_Data3SendToC1,                             //!< *cptRoot [POI] Root connection
    (((0 * 1)/1)+0),                                        //!< i32SpeedVehicleKmhx100 [[-]] new signal
    (((0 * 1)/1)+0),                                        //!< u16EvForwardCommand [[-]] new signal
    (((0 * 1)/1)+0)                                         //!< u16EvBackwardCommand [[-]] new signal
};

const TCanSigRecVal_Data3RcvFromC1 gCsr_ctRecDat_Data3RcvFromC1 =
{
    //!< EncodeurMastMeasureCentimeter
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TUINT16, TUINT16, 0, 16, 0, 0, 1, 1 }, 
     { U16_MIN, U16_MAX, 0, 0 },
    //!< Reserve
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 16, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< MastMeasureFonctionActive
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 17, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Beacon
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 18, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< MotorOn
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 19, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< FaultLenghtSensor
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 20, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< TurretSensorsFailures
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 21, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< OptionWhiteLight15746
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 22, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< gSafeManSystem
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 23, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE }
};

static ESigSta mCsr_aeRecErr_tData3RcvFromC1[9] =
{
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY
};

static TCanSigRecOldValData3RcvFromC1 mCsr_tOldDat_tData3RcvFromC1 =
{
    0,                                                      //!< u16EncodeurMastMeasureCentimeter [[-]] new signal
    FALSE,                                                  //!< boReserve [[-]] new signal
    FALSE,                                                  //!< boMastMeasureFonctionActive [[-]] new signal
    FALSE,                                                  //!< boBeacon [[-]] Commande du gyrophare
    FALSE,                                                  //!< boMotorOn [[-]] Moteur allumé
    FALSE,                                                  //!< boFaultLenghtSensor [[-]] Alarme du capteur téléscope
    FALSE,                                                  //!< boTurretSensorsFailures [[-]] Alarme sur le capteur tourelle
    FALSE,                                                  //!< boOptionWhiteLight15746 [[-]] option feux blanc 15746
    FALSE                                                   //!< bogSafeManSystem [[-]] new signal
};

extern TCanSigRecData3RcvFromC1 gCsr_tData3RcvFromC1;
static const TRecDat mCsr_actRecDat_tData3RcvFromC1[9] =
{
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Data3RcvFromC1.tCsrInfo_u16EncodeurMastMeasureCentimeter, (TVoid*)&gCsr_ctRecDat_Data3RcvFromC1.tCsrRng_u16EncodeurMastMeasureCentimeter,
        (TVoid*)&gCsr_tData3RcvFromC1.u16EncodeurMastMeasureCentimeter, (TVoid*)&mCsr_tOldDat_tData3RcvFromC1.u16EncodeurMastMeasureCentimeter, &mCsr_aeRecErr_tData3RcvFromC1[0],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Data3RcvFromC1.tCsrInfo_boReserve, (TVoid*)&gCsr_ctRecDat_Data3RcvFromC1.tCsrRng_boReserve,
        (TVoid*)&gCsr_tData3RcvFromC1.boReserve, (TVoid*)&mCsr_tOldDat_tData3RcvFromC1.boReserve, &mCsr_aeRecErr_tData3RcvFromC1[1],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Data3RcvFromC1.tCsrInfo_boMastMeasureFonctionActive, (TVoid*)&gCsr_ctRecDat_Data3RcvFromC1.tCsrRng_boMastMeasureFonctionActive,
        (TVoid*)&gCsr_tData3RcvFromC1.boMastMeasureFonctionActive, (TVoid*)&mCsr_tOldDat_tData3RcvFromC1.boMastMeasureFonctionActive, &mCsr_aeRecErr_tData3RcvFromC1[2],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Data3RcvFromC1.tCsrInfo_boBeacon, (TVoid*)&gCsr_ctRecDat_Data3RcvFromC1.tCsrRng_boBeacon,
        (TVoid*)&gCsr_tData3RcvFromC1.boBeacon, (TVoid*)&mCsr_tOldDat_tData3RcvFromC1.boBeacon, &mCsr_aeRecErr_tData3RcvFromC1[3],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Data3RcvFromC1.tCsrInfo_boMotorOn, (TVoid*)&gCsr_ctRecDat_Data3RcvFromC1.tCsrRng_boMotorOn,
        (TVoid*)&gCsr_tData3RcvFromC1.boMotorOn, (TVoid*)&mCsr_tOldDat_tData3RcvFromC1.boMotorOn, &mCsr_aeRecErr_tData3RcvFromC1[4],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Data3RcvFromC1.tCsrInfo_boFaultLenghtSensor, (TVoid*)&gCsr_ctRecDat_Data3RcvFromC1.tCsrRng_boFaultLenghtSensor,
        (TVoid*)&gCsr_tData3RcvFromC1.boFaultLenghtSensor, (TVoid*)&mCsr_tOldDat_tData3RcvFromC1.boFaultLenghtSensor, &mCsr_aeRecErr_tData3RcvFromC1[5],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Data3RcvFromC1.tCsrInfo_boTurretSensorsFailures, (TVoid*)&gCsr_ctRecDat_Data3RcvFromC1.tCsrRng_boTurretSensorsFailures,
        (TVoid*)&gCsr_tData3RcvFromC1.boTurretSensorsFailures, (TVoid*)&mCsr_tOldDat_tData3RcvFromC1.boTurretSensorsFailures, &mCsr_aeRecErr_tData3RcvFromC1[6],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Data3RcvFromC1.tCsrInfo_boOptionWhiteLight15746, (TVoid*)&gCsr_ctRecDat_Data3RcvFromC1.tCsrRng_boOptionWhiteLight15746,
        (TVoid*)&gCsr_tData3RcvFromC1.boOptionWhiteLight15746, (TVoid*)&mCsr_tOldDat_tData3RcvFromC1.boOptionWhiteLight15746, &mCsr_aeRecErr_tData3RcvFromC1[7],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Data3RcvFromC1.tCsrInfo_bogSafeManSystem, (TVoid*)&gCsr_ctRecDat_Data3RcvFromC1.tCsrRng_bogSafeManSystem,
        (TVoid*)&gCsr_tData3RcvFromC1.bogSafeManSystem, (TVoid*)&mCsr_tOldDat_tData3RcvFromC1.bogSafeManSystem, &mCsr_aeRecErr_tData3RcvFromC1[8],
        NULL, NULL
    }
};

static const TCanSigRecRoot mCsr_ctRoot_Data3RcvFromC1 =
{
    "Data3RcvFromC1",                                       //!< achName - [STR] Name Data3RcvFromC1
    8,                                                      //!< u8Dlc - [NUM] DLC of Can Message
    0xff,                                                   //!< u8CanByteDflt - [NUM] CAN Message default
    DATA_INTEL,                                             //!< eCanFormat - [NUM] CAN Format
    0xFF,                                                   //!< u8MasterReceiveId - [NUM] Receive Id
    9,                                                      //!< u8RecCnt - [NUM] Count of Recorde
    &mCsr_actRecDat_tData3RcvFromC1[0],                     //!< ptRec - [NUM] Pointer to Record Values
    61,                                                     //!< u16RecNo - [NUM] Record Number
    CSR_STAMP                                               //!< u16Stamp - [NUM] Safety stamp
};

TCanSigRecData3RcvFromC1 gCsr_tData3RcvFromC1 =
{
    &mCsr_ctRoot_Data3RcvFromC1,                            //!< *cptRoot [POI] Root connection
    (((0 * 1)/1)+0),                                        //!< u16EncodeurMastMeasureCentimeter [[-]] new signal
    FALSE,                                                  //!< boReserve [[-]] new signal
    FALSE,                                                  //!< boMastMeasureFonctionActive [[-]] new signal
    FALSE,                                                  //!< boBeacon [[-]] Commande du gyrophare
    FALSE,                                                  //!< boMotorOn [[-]] Moteur allumé
    FALSE,                                                  //!< boFaultLenghtSensor [[-]] Alarme du capteur téléscope
    FALSE,                                                  //!< boTurretSensorsFailures [[-]] Alarme sur le capteur tourelle
    FALSE,                                                  //!< boOptionWhiteLight15746 [[-]] option feux blanc 15746
    FALSE                                                   //!< bogSafeManSystem [[-]] new signal
};

const TCanSigRecVal_FailuresC1SendToC0 gCsr_ctRecDat_FailuresC1SendToC0 =
{
    //!< Dm_Inc_Pos_Folded_Delta_Arrow
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 0, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Dm_Active_Help
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 1, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Dm_Ev_Bypass_Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 2, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< OutOfRangeTransmissionPressure
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 3, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Dm_Overload_Detected_By_C1
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 4, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE }
};

static ESigSta mCsr_aeRecErr_tFailuresC1SendToC0[5] =
{
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY
};

static TCanSigRecOldValFailuresC1SendToC0 mCsr_tOldDat_tFailuresC1SendToC0 =
{
    FALSE,                                                  //!< boDm_Inc_Pos_Folded_Delta_Arrow [[-]] new signal
    FALSE,                                                  //!< boDm_Active_Help [[-]] new signal
    FALSE,                                                  //!< boDm_Ev_Bypass_Fault [[-]] new signal
    FALSE,                                                  //!< boOutOfRangeTransmissionPressure [[-]] new signal
    FALSE                                                   //!< boDm_Overload_Detected_By_C1 [[-]] new signal
};

extern TCanSigRecFailuresC1SendToC0 gCsr_tFailuresC1SendToC0;
static const TRecDat mCsr_actRecDat_tFailuresC1SendToC0[5] =
{
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_FailuresC1SendToC0.tCsrInfo_boDm_Inc_Pos_Folded_Delta_Arrow, (TVoid*)&gCsr_ctRecDat_FailuresC1SendToC0.tCsrRng_boDm_Inc_Pos_Folded_Delta_Arrow,
        (TVoid*)&gCsr_tFailuresC1SendToC0.boDm_Inc_Pos_Folded_Delta_Arrow, (TVoid*)&mCsr_tOldDat_tFailuresC1SendToC0.boDm_Inc_Pos_Folded_Delta_Arrow, &mCsr_aeRecErr_tFailuresC1SendToC0[0],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_FailuresC1SendToC0.tCsrInfo_boDm_Active_Help, (TVoid*)&gCsr_ctRecDat_FailuresC1SendToC0.tCsrRng_boDm_Active_Help,
        (TVoid*)&gCsr_tFailuresC1SendToC0.boDm_Active_Help, (TVoid*)&mCsr_tOldDat_tFailuresC1SendToC0.boDm_Active_Help, &mCsr_aeRecErr_tFailuresC1SendToC0[1],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_FailuresC1SendToC0.tCsrInfo_boDm_Ev_Bypass_Fault, (TVoid*)&gCsr_ctRecDat_FailuresC1SendToC0.tCsrRng_boDm_Ev_Bypass_Fault,
        (TVoid*)&gCsr_tFailuresC1SendToC0.boDm_Ev_Bypass_Fault, (TVoid*)&mCsr_tOldDat_tFailuresC1SendToC0.boDm_Ev_Bypass_Fault, &mCsr_aeRecErr_tFailuresC1SendToC0[2],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_FailuresC1SendToC0.tCsrInfo_boOutOfRangeTransmissionPressure, (TVoid*)&gCsr_ctRecDat_FailuresC1SendToC0.tCsrRng_boOutOfRangeTransmissionPressure,
        (TVoid*)&gCsr_tFailuresC1SendToC0.boOutOfRangeTransmissionPressure, (TVoid*)&mCsr_tOldDat_tFailuresC1SendToC0.boOutOfRangeTransmissionPressure, &mCsr_aeRecErr_tFailuresC1SendToC0[3],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_FailuresC1SendToC0.tCsrInfo_boDm_Overload_Detected_By_C1, (TVoid*)&gCsr_ctRecDat_FailuresC1SendToC0.tCsrRng_boDm_Overload_Detected_By_C1,
        (TVoid*)&gCsr_tFailuresC1SendToC0.boDm_Overload_Detected_By_C1, (TVoid*)&mCsr_tOldDat_tFailuresC1SendToC0.boDm_Overload_Detected_By_C1, &mCsr_aeRecErr_tFailuresC1SendToC0[4],
        NULL, NULL
    }
};

static const TCanSigRecRoot mCsr_ctRoot_FailuresC1SendToC0 =
{
    "FailuresC1SendToC0",                                   //!< achName - [STR] Name FailuresC1SendToC0
    8,                                                      //!< u8Dlc - [NUM] DLC of Can Message
    0xff,                                                   //!< u8CanByteDflt - [NUM] CAN Message default
    DATA_INTEL,                                             //!< eCanFormat - [NUM] CAN Format
    0xFF,                                                   //!< u8MasterReceiveId - [NUM] Receive Id
    5,                                                      //!< u8RecCnt - [NUM] Count of Recorde
    &mCsr_actRecDat_tFailuresC1SendToC0[0],                 //!< ptRec - [NUM] Pointer to Record Values
    62,                                                     //!< u16RecNo - [NUM] Record Number
    CSR_STAMP                                               //!< u16Stamp - [NUM] Safety stamp
};

TCanSigRecFailuresC1SendToC0 gCsr_tFailuresC1SendToC0 =
{
    &mCsr_ctRoot_FailuresC1SendToC0,                        //!< *cptRoot [POI] Root connection
    FALSE,                                                  //!< boDm_Inc_Pos_Folded_Delta_Arrow [[-]] new signal
    FALSE,                                                  //!< boDm_Active_Help [[-]] new signal
    FALSE,                                                  //!< boDm_Ev_Bypass_Fault [[-]] new signal
    FALSE,                                                  //!< boOutOfRangeTransmissionPressure [[-]] new signal
    FALSE                                                   //!< boDm_Overload_Detected_By_C1 [[-]] new signal
};

const TCanSigRecVal_FailuresC0SendToC1 gCsr_ctRecDat_FailuresC0SendToC1 =
{
    //!< Dm_Swi_Dbl_NcNo_Inc_FrameRot
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 0, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Dm_Turret_Sensor_Fault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 1, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< EvParkBrakeAxleOscillantFault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 2, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< EvParkBrakeAxleFixeFault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 3, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< EvServiceBrakeAxleOsciFault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 4, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< EvServiceBrakeAxleFixeFault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 5, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< EvServiceBrakeTrackFault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 6, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Rm_Com_Can_Radio_Loss
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 7, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Ev2ndParkBrakeAxleFixeFault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 8, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Ev2ndParkBrakeAxleOsciFault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 9, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE }
};

static ESigSta mCsr_aeRecErr_tFailuresC0SendToC1[10] =
{
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY
};

static TCanSigRecOldValFailuresC0SendToC1 mCsr_tOldDat_tFailuresC0SendToC1 =
{
    FALSE,                                                  //!< boDm_Swi_Dbl_NcNo_Inc_FrameRot [[-]] new signal
    FALSE,                                                  //!< boDm_Turret_Sensor_Fault [[-]] new signal
    FALSE,                                                  //!< boEvParkBrakeAxleOscillantFault [[-]] new signal
    FALSE,                                                  //!< boEvParkBrakeAxleFixeFault [[-]] new signal
    FALSE,                                                  //!< boEvServiceBrakeAxleOsciFault [[-]] new signal
    FALSE,                                                  //!< boEvServiceBrakeAxleFixeFault [[-]] new signal
    FALSE,                                                  //!< boEvServiceBrakeTrackFault [[-]] new signal
    FALSE,                                                  //!< boRm_Com_Can_Radio_Loss [[-]] new signal
    FALSE,                                                  //!< boEv2ndParkBrakeAxleFixeFault [[-]] Variable d_alarme de l_état de la pin, pour l_envoie au C1
    FALSE                                                   //!< boEv2ndParkBrakeAxleOsciFault [[-]] Variable d_alarme de l_état de la pin, pour l_envoie au C1.
};

extern TCanSigRecFailuresC0SendToC1 gCsr_tFailuresC0SendToC1;
static const TRecDat mCsr_actRecDat_tFailuresC0SendToC1[10] =
{
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_FailuresC0SendToC1.tCsrInfo_boDm_Swi_Dbl_NcNo_Inc_FrameRot, (TVoid*)&gCsr_ctRecDat_FailuresC0SendToC1.tCsrRng_boDm_Swi_Dbl_NcNo_Inc_FrameRot,
        (TVoid*)&gCsr_tFailuresC0SendToC1.boDm_Swi_Dbl_NcNo_Inc_FrameRot, (TVoid*)&mCsr_tOldDat_tFailuresC0SendToC1.boDm_Swi_Dbl_NcNo_Inc_FrameRot, &mCsr_aeRecErr_tFailuresC0SendToC1[0],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_FailuresC0SendToC1.tCsrInfo_boDm_Turret_Sensor_Fault, (TVoid*)&gCsr_ctRecDat_FailuresC0SendToC1.tCsrRng_boDm_Turret_Sensor_Fault,
        (TVoid*)&gCsr_tFailuresC0SendToC1.boDm_Turret_Sensor_Fault, (TVoid*)&mCsr_tOldDat_tFailuresC0SendToC1.boDm_Turret_Sensor_Fault, &mCsr_aeRecErr_tFailuresC0SendToC1[1],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_FailuresC0SendToC1.tCsrInfo_boEvParkBrakeAxleOscillantFault, (TVoid*)&gCsr_ctRecDat_FailuresC0SendToC1.tCsrRng_boEvParkBrakeAxleOscillantFault,
        (TVoid*)&gCsr_tFailuresC0SendToC1.boEvParkBrakeAxleOscillantFault, (TVoid*)&mCsr_tOldDat_tFailuresC0SendToC1.boEvParkBrakeAxleOscillantFault, &mCsr_aeRecErr_tFailuresC0SendToC1[2],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_FailuresC0SendToC1.tCsrInfo_boEvParkBrakeAxleFixeFault, (TVoid*)&gCsr_ctRecDat_FailuresC0SendToC1.tCsrRng_boEvParkBrakeAxleFixeFault,
        (TVoid*)&gCsr_tFailuresC0SendToC1.boEvParkBrakeAxleFixeFault, (TVoid*)&mCsr_tOldDat_tFailuresC0SendToC1.boEvParkBrakeAxleFixeFault, &mCsr_aeRecErr_tFailuresC0SendToC1[3],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_FailuresC0SendToC1.tCsrInfo_boEvServiceBrakeAxleOsciFault, (TVoid*)&gCsr_ctRecDat_FailuresC0SendToC1.tCsrRng_boEvServiceBrakeAxleOsciFault,
        (TVoid*)&gCsr_tFailuresC0SendToC1.boEvServiceBrakeAxleOsciFault, (TVoid*)&mCsr_tOldDat_tFailuresC0SendToC1.boEvServiceBrakeAxleOsciFault, &mCsr_aeRecErr_tFailuresC0SendToC1[4],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_FailuresC0SendToC1.tCsrInfo_boEvServiceBrakeAxleFixeFault, (TVoid*)&gCsr_ctRecDat_FailuresC0SendToC1.tCsrRng_boEvServiceBrakeAxleFixeFault,
        (TVoid*)&gCsr_tFailuresC0SendToC1.boEvServiceBrakeAxleFixeFault, (TVoid*)&mCsr_tOldDat_tFailuresC0SendToC1.boEvServiceBrakeAxleFixeFault, &mCsr_aeRecErr_tFailuresC0SendToC1[5],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_FailuresC0SendToC1.tCsrInfo_boEvServiceBrakeTrackFault, (TVoid*)&gCsr_ctRecDat_FailuresC0SendToC1.tCsrRng_boEvServiceBrakeTrackFault,
        (TVoid*)&gCsr_tFailuresC0SendToC1.boEvServiceBrakeTrackFault, (TVoid*)&mCsr_tOldDat_tFailuresC0SendToC1.boEvServiceBrakeTrackFault, &mCsr_aeRecErr_tFailuresC0SendToC1[6],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_FailuresC0SendToC1.tCsrInfo_boRm_Com_Can_Radio_Loss, (TVoid*)&gCsr_ctRecDat_FailuresC0SendToC1.tCsrRng_boRm_Com_Can_Radio_Loss,
        (TVoid*)&gCsr_tFailuresC0SendToC1.boRm_Com_Can_Radio_Loss, (TVoid*)&mCsr_tOldDat_tFailuresC0SendToC1.boRm_Com_Can_Radio_Loss, &mCsr_aeRecErr_tFailuresC0SendToC1[7],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_FailuresC0SendToC1.tCsrInfo_boEv2ndParkBrakeAxleFixeFault, (TVoid*)&gCsr_ctRecDat_FailuresC0SendToC1.tCsrRng_boEv2ndParkBrakeAxleFixeFault,
        (TVoid*)&gCsr_tFailuresC0SendToC1.boEv2ndParkBrakeAxleFixeFault, (TVoid*)&mCsr_tOldDat_tFailuresC0SendToC1.boEv2ndParkBrakeAxleFixeFault, &mCsr_aeRecErr_tFailuresC0SendToC1[8],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_FailuresC0SendToC1.tCsrInfo_boEv2ndParkBrakeAxleOsciFault, (TVoid*)&gCsr_ctRecDat_FailuresC0SendToC1.tCsrRng_boEv2ndParkBrakeAxleOsciFault,
        (TVoid*)&gCsr_tFailuresC0SendToC1.boEv2ndParkBrakeAxleOsciFault, (TVoid*)&mCsr_tOldDat_tFailuresC0SendToC1.boEv2ndParkBrakeAxleOsciFault, &mCsr_aeRecErr_tFailuresC0SendToC1[9],
        NULL, NULL
    }
};

static const TCanSigRecRoot mCsr_ctRoot_FailuresC0SendToC1 =
{
    "FailuresC0SendToC1",                                   //!< achName - [STR] Name FailuresC0SendToC1
    8,                                                      //!< u8Dlc - [NUM] DLC of Can Message
    0xff,                                                   //!< u8CanByteDflt - [NUM] CAN Message default
    DATA_INTEL,                                             //!< eCanFormat - [NUM] CAN Format
    0xFF,                                                   //!< u8MasterReceiveId - [NUM] Receive Id
    10,                                                     //!< u8RecCnt - [NUM] Count of Recorde
    &mCsr_actRecDat_tFailuresC0SendToC1[0],                 //!< ptRec - [NUM] Pointer to Record Values
    63,                                                     //!< u16RecNo - [NUM] Record Number
    CSR_STAMP                                               //!< u16Stamp - [NUM] Safety stamp
};

TCanSigRecFailuresC0SendToC1 gCsr_tFailuresC0SendToC1 =
{
    &mCsr_ctRoot_FailuresC0SendToC1,                        //!< *cptRoot [POI] Root connection
    FALSE,                                                  //!< boDm_Swi_Dbl_NcNo_Inc_FrameRot [[-]] new signal
    FALSE,                                                  //!< boDm_Turret_Sensor_Fault [[-]] new signal
    FALSE,                                                  //!< boEvParkBrakeAxleOscillantFault [[-]] new signal
    FALSE,                                                  //!< boEvParkBrakeAxleFixeFault [[-]] new signal
    FALSE,                                                  //!< boEvServiceBrakeAxleOsciFault [[-]] new signal
    FALSE,                                                  //!< boEvServiceBrakeAxleFixeFault [[-]] new signal
    FALSE,                                                  //!< boEvServiceBrakeTrackFault [[-]] new signal
    FALSE,                                                  //!< boRm_Com_Can_Radio_Loss [[-]] new signal
    FALSE,                                                  //!< boEv2ndParkBrakeAxleFixeFault [[-]] Variable d_alarme de l_état de la pin, pour l_envoie au C1
    FALSE                                                   //!< boEv2ndParkBrakeAxleOsciFault [[-]] Variable d_alarme de l_état de la pin, pour l_envoie au C1.
};

const TCanSigRecVal_Data4C0SendToC1 gCsr_ctRecDat_Data4C0SendToC1 =
{
    //!< StopAggravantMovements
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 0, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< TurretPostorRadoPostOn
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 1, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< MotorAccelerated
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 2, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< RadioPostSelectorOn
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 3, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< SlopeHighWithWorkOnCrawler
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 4, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< ErrorActiveOnC0
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 5, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< RailWorkMultiLaneMode
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 6, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< PresenceSensorPlate
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 7, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< WhiteLightAV15746Command
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 8, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< WhiteLightAR15746Command
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 9, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Signal_9
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TINT16, TINT16, 16, 16, 0, 0, 1, 1 }, 
     { I16_MIN, I16_MAX, 0, 0 },
    //!< Signal_10
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TINT16, TINT16, 32, 16, 0, 0, 1, 1 }, 
     { I16_MIN, I16_MAX, 0, 0 },
    //!< RecoveryReductionRatio
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TUINT8, TUINT8, 48, 8, 0, 0, 1, 1 }, 
     { U8_MIN, U8_MAX, 0, 0 }
};

static ESigSta mCsr_aeRecErr_tData4C0SendToC1[13] =
{
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY
};

static TCanSigRecOldValData4C0SendToC1 mCsr_tOldDat_tData4C0SendToC1 =
{
    FALSE,                                                  //!< boStopAggravantMovements [[-]] new signal
    FALSE,                                                  //!< boTurretPostorRadoPostOn [[-]] new signal
    FALSE,                                                  //!< boMotorAccelerated [[-]] new signal
    FALSE,                                                  //!< boRadioPostSelectorOn [[-]] new signal
    FALSE,                                                  //!< boSlopeHighWithWorkOnCrawler [[-]] new signal
    FALSE,                                                  //!< boErrorActiveOnC0 [[-]] new signal
    FALSE,                                                  //!< boRailWorkMultiLaneMode [[-]] new signal
    FALSE,                                                  //!< boPresenceSensorPlate [[-]] new signal
    FALSE,                                                  //!< boWhiteLightAV15746Command [[-]] new signal
    FALSE,                                                  //!< boWhiteLightAR15746Command [[-]] new signal
    0,                                                      //!< i16Signal_9 [[-]] new signal
    0,                                                      //!< i16Signal_10 [[-]] new signal
    0                                                       //!< u8RecoveryReductionRatio [[-]] new signal
};

extern TCanSigRecData4C0SendToC1 gCsr_tData4C0SendToC1;
static const TRecDat mCsr_actRecDat_tData4C0SendToC1[13] =
{
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Data4C0SendToC1.tCsrInfo_boStopAggravantMovements, (TVoid*)&gCsr_ctRecDat_Data4C0SendToC1.tCsrRng_boStopAggravantMovements,
        (TVoid*)&gCsr_tData4C0SendToC1.boStopAggravantMovements, (TVoid*)&mCsr_tOldDat_tData4C0SendToC1.boStopAggravantMovements, &mCsr_aeRecErr_tData4C0SendToC1[0],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Data4C0SendToC1.tCsrInfo_boTurretPostorRadoPostOn, (TVoid*)&gCsr_ctRecDat_Data4C0SendToC1.tCsrRng_boTurretPostorRadoPostOn,
        (TVoid*)&gCsr_tData4C0SendToC1.boTurretPostorRadoPostOn, (TVoid*)&mCsr_tOldDat_tData4C0SendToC1.boTurretPostorRadoPostOn, &mCsr_aeRecErr_tData4C0SendToC1[1],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Data4C0SendToC1.tCsrInfo_boMotorAccelerated, (TVoid*)&gCsr_ctRecDat_Data4C0SendToC1.tCsrRng_boMotorAccelerated,
        (TVoid*)&gCsr_tData4C0SendToC1.boMotorAccelerated, (TVoid*)&mCsr_tOldDat_tData4C0SendToC1.boMotorAccelerated, &mCsr_aeRecErr_tData4C0SendToC1[2],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Data4C0SendToC1.tCsrInfo_boRadioPostSelectorOn, (TVoid*)&gCsr_ctRecDat_Data4C0SendToC1.tCsrRng_boRadioPostSelectorOn,
        (TVoid*)&gCsr_tData4C0SendToC1.boRadioPostSelectorOn, (TVoid*)&mCsr_tOldDat_tData4C0SendToC1.boRadioPostSelectorOn, &mCsr_aeRecErr_tData4C0SendToC1[3],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Data4C0SendToC1.tCsrInfo_boSlopeHighWithWorkOnCrawler, (TVoid*)&gCsr_ctRecDat_Data4C0SendToC1.tCsrRng_boSlopeHighWithWorkOnCrawler,
        (TVoid*)&gCsr_tData4C0SendToC1.boSlopeHighWithWorkOnCrawler, (TVoid*)&mCsr_tOldDat_tData4C0SendToC1.boSlopeHighWithWorkOnCrawler, &mCsr_aeRecErr_tData4C0SendToC1[4],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Data4C0SendToC1.tCsrInfo_boErrorActiveOnC0, (TVoid*)&gCsr_ctRecDat_Data4C0SendToC1.tCsrRng_boErrorActiveOnC0,
        (TVoid*)&gCsr_tData4C0SendToC1.boErrorActiveOnC0, (TVoid*)&mCsr_tOldDat_tData4C0SendToC1.boErrorActiveOnC0, &mCsr_aeRecErr_tData4C0SendToC1[5],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Data4C0SendToC1.tCsrInfo_boRailWorkMultiLaneMode, (TVoid*)&gCsr_ctRecDat_Data4C0SendToC1.tCsrRng_boRailWorkMultiLaneMode,
        (TVoid*)&gCsr_tData4C0SendToC1.boRailWorkMultiLaneMode, (TVoid*)&mCsr_tOldDat_tData4C0SendToC1.boRailWorkMultiLaneMode, &mCsr_aeRecErr_tData4C0SendToC1[6],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Data4C0SendToC1.tCsrInfo_boPresenceSensorPlate, (TVoid*)&gCsr_ctRecDat_Data4C0SendToC1.tCsrRng_boPresenceSensorPlate,
        (TVoid*)&gCsr_tData4C0SendToC1.boPresenceSensorPlate, (TVoid*)&mCsr_tOldDat_tData4C0SendToC1.boPresenceSensorPlate, &mCsr_aeRecErr_tData4C0SendToC1[7],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Data4C0SendToC1.tCsrInfo_boWhiteLightAV15746Command, (TVoid*)&gCsr_ctRecDat_Data4C0SendToC1.tCsrRng_boWhiteLightAV15746Command,
        (TVoid*)&gCsr_tData4C0SendToC1.boWhiteLightAV15746Command, (TVoid*)&mCsr_tOldDat_tData4C0SendToC1.boWhiteLightAV15746Command, &mCsr_aeRecErr_tData4C0SendToC1[8],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Data4C0SendToC1.tCsrInfo_boWhiteLightAR15746Command, (TVoid*)&gCsr_ctRecDat_Data4C0SendToC1.tCsrRng_boWhiteLightAR15746Command,
        (TVoid*)&gCsr_tData4C0SendToC1.boWhiteLightAR15746Command, (TVoid*)&mCsr_tOldDat_tData4C0SendToC1.boWhiteLightAR15746Command, &mCsr_aeRecErr_tData4C0SendToC1[9],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Data4C0SendToC1.tCsrInfo_i16Signal_9, (TVoid*)&gCsr_ctRecDat_Data4C0SendToC1.tCsrRng_i16Signal_9,
        (TVoid*)&gCsr_tData4C0SendToC1.i16Signal_9, (TVoid*)&mCsr_tOldDat_tData4C0SendToC1.i16Signal_9, &mCsr_aeRecErr_tData4C0SendToC1[10],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Data4C0SendToC1.tCsrInfo_i16Signal_10, (TVoid*)&gCsr_ctRecDat_Data4C0SendToC1.tCsrRng_i16Signal_10,
        (TVoid*)&gCsr_tData4C0SendToC1.i16Signal_10, (TVoid*)&mCsr_tOldDat_tData4C0SendToC1.i16Signal_10, &mCsr_aeRecErr_tData4C0SendToC1[11],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Data4C0SendToC1.tCsrInfo_u8RecoveryReductionRatio, (TVoid*)&gCsr_ctRecDat_Data4C0SendToC1.tCsrRng_u8RecoveryReductionRatio,
        (TVoid*)&gCsr_tData4C0SendToC1.u8RecoveryReductionRatio, (TVoid*)&mCsr_tOldDat_tData4C0SendToC1.u8RecoveryReductionRatio, &mCsr_aeRecErr_tData4C0SendToC1[12],
        NULL, NULL
    }
};

static const TCanSigRecRoot mCsr_ctRoot_Data4C0SendToC1 =
{
    "Data4C0SendToC1",                                      //!< achName - [STR] Name Data4C0SendToC1
    8,                                                      //!< u8Dlc - [NUM] DLC of Can Message
    0xff,                                                   //!< u8CanByteDflt - [NUM] CAN Message default
    DATA_INTEL,                                             //!< eCanFormat - [NUM] CAN Format
    0xFF,                                                   //!< u8MasterReceiveId - [NUM] Receive Id
    13,                                                     //!< u8RecCnt - [NUM] Count of Recorde
    &mCsr_actRecDat_tData4C0SendToC1[0],                    //!< ptRec - [NUM] Pointer to Record Values
    64,                                                     //!< u16RecNo - [NUM] Record Number
    CSR_STAMP                                               //!< u16Stamp - [NUM] Safety stamp
};

TCanSigRecData4C0SendToC1 gCsr_tData4C0SendToC1 =
{
    &mCsr_ctRoot_Data4C0SendToC1,                           //!< *cptRoot [POI] Root connection
    FALSE,                                                  //!< boStopAggravantMovements [[-]] new signal
    FALSE,                                                  //!< boTurretPostorRadoPostOn [[-]] new signal
    FALSE,                                                  //!< boMotorAccelerated [[-]] new signal
    FALSE,                                                  //!< boRadioPostSelectorOn [[-]] new signal
    FALSE,                                                  //!< boSlopeHighWithWorkOnCrawler [[-]] new signal
    FALSE,                                                  //!< boErrorActiveOnC0 [[-]] new signal
    FALSE,                                                  //!< boRailWorkMultiLaneMode [[-]] new signal
    FALSE,                                                  //!< boPresenceSensorPlate [[-]] new signal
    FALSE,                                                  //!< boWhiteLightAV15746Command [[-]] new signal
    FALSE,                                                  //!< boWhiteLightAR15746Command [[-]] new signal
    (((0 * 1)/1)+0),                                        //!< i16Signal_9 [[-]] new signal
    (((0 * 1)/1)+0),                                        //!< i16Signal_10 [[-]] new signal
    (((0 * 1)/1)+0)                                         //!< u8RecoveryReductionRatio [[-]] new signal
};

const TCanSigRecVal_Data4C1SendToC0 gCsr_ctRecDat_Data4C1SendToC0 =
{
    //!< NoMovementRunning
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 0, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< StopMoveLimitEnvelop
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 1, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< TransmissionPressureFault
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 2, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< LynxOnAllMvts
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 3, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< MotorOn_Dtlg
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 4, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Signal_4
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 5, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Signal_5
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 6, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Signal_6
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 7, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< Signal_7
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TUINT8, TUINT8, 8, 8, 0, 0, 1, 1 }, 
     { U8_MIN, U8_MAX, 0, 0 },
    //!< BypassPressureSensorValue
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TINT16, TINT16, 16, 16, 0, 0, 1, 1 }, 
     { I16_MIN, I16_MAX, 0, 0 },
    //!< Signal_9
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TINT16, TINT16, 32, 16, 0, 0, 1, 1 }, 
     { I16_MIN, I16_MAX, 0, 0 },
    //!< Signal_10
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TINT16, TINT16, 48, 16, 0, 0, 1, 1 }, 
     { I16_MIN, I16_MAX, 0, 0 }
};

static ESigSta mCsr_aeRecErr_tData4C1SendToC0[12] =
{
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY
};

static TCanSigRecOldValData4C1SendToC0 mCsr_tOldDat_tData4C1SendToC0 =
{
    FALSE,                                                  //!< boNoMovementRunning [[-]] new signal
    FALSE,                                                  //!< boStopMoveLimitEnvelop [[-]] new signal
    FALSE,                                                  //!< boTransmissionPressureFault [[-]] new signal
    FALSE,                                                  //!< boLynxOnAllMvts [[-]] new signal
    FALSE,                                                  //!< boMotorOn_Dtlg [[-]] new signal
    FALSE,                                                  //!< boSignal_4 [[-]] new signal
    FALSE,                                                  //!< boSignal_5 [[-]] new signal
    FALSE,                                                  //!< boSignal_6 [[-]] new signal
    0,                                                      //!< u8Signal_7 [[-]] new signal
    0,                                                      //!< i16BypassPressureSensorValue [[-]] new signal
    0,                                                      //!< i16Signal_9 [[-]] new signal
    0                                                       //!< i16Signal_10 [[-]] new signal
};

extern TCanSigRecData4C1SendToC0 gCsr_tData4C1SendToC0;
static const TRecDat mCsr_actRecDat_tData4C1SendToC0[12] =
{
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Data4C1SendToC0.tCsrInfo_boNoMovementRunning, (TVoid*)&gCsr_ctRecDat_Data4C1SendToC0.tCsrRng_boNoMovementRunning,
        (TVoid*)&gCsr_tData4C1SendToC0.boNoMovementRunning, (TVoid*)&mCsr_tOldDat_tData4C1SendToC0.boNoMovementRunning, &mCsr_aeRecErr_tData4C1SendToC0[0],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Data4C1SendToC0.tCsrInfo_boStopMoveLimitEnvelop, (TVoid*)&gCsr_ctRecDat_Data4C1SendToC0.tCsrRng_boStopMoveLimitEnvelop,
        (TVoid*)&gCsr_tData4C1SendToC0.boStopMoveLimitEnvelop, (TVoid*)&mCsr_tOldDat_tData4C1SendToC0.boStopMoveLimitEnvelop, &mCsr_aeRecErr_tData4C1SendToC0[1],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Data4C1SendToC0.tCsrInfo_boTransmissionPressureFault, (TVoid*)&gCsr_ctRecDat_Data4C1SendToC0.tCsrRng_boTransmissionPressureFault,
        (TVoid*)&gCsr_tData4C1SendToC0.boTransmissionPressureFault, (TVoid*)&mCsr_tOldDat_tData4C1SendToC0.boTransmissionPressureFault, &mCsr_aeRecErr_tData4C1SendToC0[2],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Data4C1SendToC0.tCsrInfo_boLynxOnAllMvts, (TVoid*)&gCsr_ctRecDat_Data4C1SendToC0.tCsrRng_boLynxOnAllMvts,
        (TVoid*)&gCsr_tData4C1SendToC0.boLynxOnAllMvts, (TVoid*)&mCsr_tOldDat_tData4C1SendToC0.boLynxOnAllMvts, &mCsr_aeRecErr_tData4C1SendToC0[3],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Data4C1SendToC0.tCsrInfo_boMotorOn_Dtlg, (TVoid*)&gCsr_ctRecDat_Data4C1SendToC0.tCsrRng_boMotorOn_Dtlg,
        (TVoid*)&gCsr_tData4C1SendToC0.boMotorOn_Dtlg, (TVoid*)&mCsr_tOldDat_tData4C1SendToC0.boMotorOn_Dtlg, &mCsr_aeRecErr_tData4C1SendToC0[4],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Data4C1SendToC0.tCsrInfo_boSignal_4, (TVoid*)&gCsr_ctRecDat_Data4C1SendToC0.tCsrRng_boSignal_4,
        (TVoid*)&gCsr_tData4C1SendToC0.boSignal_4, (TVoid*)&mCsr_tOldDat_tData4C1SendToC0.boSignal_4, &mCsr_aeRecErr_tData4C1SendToC0[5],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Data4C1SendToC0.tCsrInfo_boSignal_5, (TVoid*)&gCsr_ctRecDat_Data4C1SendToC0.tCsrRng_boSignal_5,
        (TVoid*)&gCsr_tData4C1SendToC0.boSignal_5, (TVoid*)&mCsr_tOldDat_tData4C1SendToC0.boSignal_5, &mCsr_aeRecErr_tData4C1SendToC0[6],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Data4C1SendToC0.tCsrInfo_boSignal_6, (TVoid*)&gCsr_ctRecDat_Data4C1SendToC0.tCsrRng_boSignal_6,
        (TVoid*)&gCsr_tData4C1SendToC0.boSignal_6, (TVoid*)&mCsr_tOldDat_tData4C1SendToC0.boSignal_6, &mCsr_aeRecErr_tData4C1SendToC0[7],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Data4C1SendToC0.tCsrInfo_u8Signal_7, (TVoid*)&gCsr_ctRecDat_Data4C1SendToC0.tCsrRng_u8Signal_7,
        (TVoid*)&gCsr_tData4C1SendToC0.u8Signal_7, (TVoid*)&mCsr_tOldDat_tData4C1SendToC0.u8Signal_7, &mCsr_aeRecErr_tData4C1SendToC0[8],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Data4C1SendToC0.tCsrInfo_i16BypassPressureSensorValue, (TVoid*)&gCsr_ctRecDat_Data4C1SendToC0.tCsrRng_i16BypassPressureSensorValue,
        (TVoid*)&gCsr_tData4C1SendToC0.i16BypassPressureSensorValue, (TVoid*)&mCsr_tOldDat_tData4C1SendToC0.i16BypassPressureSensorValue, &mCsr_aeRecErr_tData4C1SendToC0[9],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Data4C1SendToC0.tCsrInfo_i16Signal_9, (TVoid*)&gCsr_ctRecDat_Data4C1SendToC0.tCsrRng_i16Signal_9,
        (TVoid*)&gCsr_tData4C1SendToC0.i16Signal_9, (TVoid*)&mCsr_tOldDat_tData4C1SendToC0.i16Signal_9, &mCsr_aeRecErr_tData4C1SendToC0[10],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Data4C1SendToC0.tCsrInfo_i16Signal_10, (TVoid*)&gCsr_ctRecDat_Data4C1SendToC0.tCsrRng_i16Signal_10,
        (TVoid*)&gCsr_tData4C1SendToC0.i16Signal_10, (TVoid*)&mCsr_tOldDat_tData4C1SendToC0.i16Signal_10, &mCsr_aeRecErr_tData4C1SendToC0[11],
        NULL, NULL
    }
};

static const TCanSigRecRoot mCsr_ctRoot_Data4C1SendToC0 =
{
    "Data4C1SendToC0",                                      //!< achName - [STR] Name Data4C1SendToC0
    8,                                                      //!< u8Dlc - [NUM] DLC of Can Message
    0xff,                                                   //!< u8CanByteDflt - [NUM] CAN Message default
    DATA_INTEL,                                             //!< eCanFormat - [NUM] CAN Format
    0xFF,                                                   //!< u8MasterReceiveId - [NUM] Receive Id
    12,                                                     //!< u8RecCnt - [NUM] Count of Recorde
    &mCsr_actRecDat_tData4C1SendToC0[0],                    //!< ptRec - [NUM] Pointer to Record Values
    65,                                                     //!< u16RecNo - [NUM] Record Number
    CSR_STAMP                                               //!< u16Stamp - [NUM] Safety stamp
};

TCanSigRecData4C1SendToC0 gCsr_tData4C1SendToC0 =
{
    &mCsr_ctRoot_Data4C1SendToC0,                           //!< *cptRoot [POI] Root connection
    FALSE,                                                  //!< boNoMovementRunning [[-]] new signal
    FALSE,                                                  //!< boStopMoveLimitEnvelop [[-]] new signal
    FALSE,                                                  //!< boTransmissionPressureFault [[-]] new signal
    FALSE,                                                  //!< boLynxOnAllMvts [[-]] new signal
    FALSE,                                                  //!< boMotorOn_Dtlg [[-]] new signal
    FALSE,                                                  //!< boSignal_4 [[-]] new signal
    FALSE,                                                  //!< boSignal_5 [[-]] new signal
    FALSE,                                                  //!< boSignal_6 [[-]] new signal
    (((0 * 1)/1)+0),                                        //!< u8Signal_7 [[-]] new signal
    (((0 * 1)/1)+0),                                        //!< i16BypassPressureSensorValue [[-]] new signal
    (((0 * 1)/1)+0),                                        //!< i16Signal_9 [[-]] new signal
    (((0 * 1)/1)+0)                                         //!< i16Signal_10 [[-]] new signal
};

const TCanSigRecVal_Data5C0SendToC1 gCsr_ctRecDat_Data5C0SendToC1 =
{
    //!< AutorisationHighSpeedKeyState
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 0, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< TransRailElectricRampOngoing
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 1, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< SendAuthorizeReloadBattery
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 2, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< PreventLimitSpeedExceeding
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 3, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< UpMastSensorNC
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 4, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< ValveInDownPositionSensor
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 5, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< MeasuringMastSensorFolded
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 6, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< RpmPvgTransRail
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TINT16, TINT16, 8, 16, 0, 0, 1, 1 }, 
     { I16_MIN, I16_MAX, 0, 0 },
    //!< Batt_Soc
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TUINT8, TUINT8, 24, 8, 0, 0, 1, 1 }, 
     { U8_MIN, U8_MAX, 0, 0 },
    //!< Ibatt_ist
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TINT16, TINT16, 32, 16, 0, 0, 1, 1 }, 
     { I16_MIN, I16_MAX, 0, 0 },
    //!< SelectedControlPost
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TUINT8, TUINT8, 48, 8, 0, 0, 1, 1 }, 
     { U8_MIN, U8_MAX, 0, 0 },
    //!< AddPerformanceFunc
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 56, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< SlopeCaseLess2Deg
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 57, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< SlopeCaseLess4Deg
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 58, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< SlopeCaseLess6Deg
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 59, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< SlopeCaseHigher6Deg
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 60, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< TurretInSpeedZone2Deg
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 61, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< TurretInSpeedZone4Deg
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 62, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< TurretInSpeedZone2DegForBasket
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 63, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE }
};

static ESigSta mCsr_aeRecErr_tData5C0SendToC1[19] =
{
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY
};

static TCanSigRecOldValData5C0SendToC1 mCsr_tOldDat_tData5C0SendToC1 =
{
    FALSE,                                                  //!< boAutorisationHighSpeedKeyState [[-]] new signal
    FALSE,                                                  //!< boTransRailElectricRampOngoing [[-]] new signal
    FALSE,                                                  //!< boSendAuthorizeReloadBattery [[-]] new signal
    FALSE,                                                  //!< boPreventLimitSpeedExceeding [[-]] new signal
    FALSE,                                                  //!< boUpMastSensorNC [[-]] new signal
    FALSE,                                                  //!< boValveInDownPositionSensor [[-]] new signal
    FALSE,                                                  //!< boMeasuringMastSensorFolded [[-]] new signal
    0,                                                      //!< i16RpmPvgTransRail [[-]] new signal
    0,                                                      //!< u8Batt_Soc [[-]] new signal
    0,                                                      //!< i16Ibatt_ist [[-]] new signal
    0,                                                      //!< u8SelectedControlPost [[-]] new signal
    FALSE,                                                  //!< boAddPerformanceFunc [[-]] new signal
    FALSE,                                                  //!< boSlopeCaseLess2Deg [[-]] new signal
    FALSE,                                                  //!< boSlopeCaseLess4Deg [[-]] new signal
    FALSE,                                                  //!< boSlopeCaseLess6Deg [[-]] new signal
    FALSE,                                                  //!< boSlopeCaseHigher6Deg [[-]] new signal
    FALSE,                                                  //!< boTurretInSpeedZone2Deg [[-]] new signal
    FALSE,                                                  //!< boTurretInSpeedZone4Deg [[-]] new signal
    FALSE                                                   //!< boTurretInSpeedZone2DegForBasket [[-]] new signal
};

extern TCanSigRecData5C0SendToC1 gCsr_tData5C0SendToC1;
static const TRecDat mCsr_actRecDat_tData5C0SendToC1[19] =
{
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Data5C0SendToC1.tCsrInfo_boAutorisationHighSpeedKeyState, (TVoid*)&gCsr_ctRecDat_Data5C0SendToC1.tCsrRng_boAutorisationHighSpeedKeyState,
        (TVoid*)&gCsr_tData5C0SendToC1.boAutorisationHighSpeedKeyState, (TVoid*)&mCsr_tOldDat_tData5C0SendToC1.boAutorisationHighSpeedKeyState, &mCsr_aeRecErr_tData5C0SendToC1[0],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Data5C0SendToC1.tCsrInfo_boTransRailElectricRampOngoing, (TVoid*)&gCsr_ctRecDat_Data5C0SendToC1.tCsrRng_boTransRailElectricRampOngoing,
        (TVoid*)&gCsr_tData5C0SendToC1.boTransRailElectricRampOngoing, (TVoid*)&mCsr_tOldDat_tData5C0SendToC1.boTransRailElectricRampOngoing, &mCsr_aeRecErr_tData5C0SendToC1[1],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Data5C0SendToC1.tCsrInfo_boSendAuthorizeReloadBattery, (TVoid*)&gCsr_ctRecDat_Data5C0SendToC1.tCsrRng_boSendAuthorizeReloadBattery,
        (TVoid*)&gCsr_tData5C0SendToC1.boSendAuthorizeReloadBattery, (TVoid*)&mCsr_tOldDat_tData5C0SendToC1.boSendAuthorizeReloadBattery, &mCsr_aeRecErr_tData5C0SendToC1[2],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Data5C0SendToC1.tCsrInfo_boPreventLimitSpeedExceeding, (TVoid*)&gCsr_ctRecDat_Data5C0SendToC1.tCsrRng_boPreventLimitSpeedExceeding,
        (TVoid*)&gCsr_tData5C0SendToC1.boPreventLimitSpeedExceeding, (TVoid*)&mCsr_tOldDat_tData5C0SendToC1.boPreventLimitSpeedExceeding, &mCsr_aeRecErr_tData5C0SendToC1[3],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Data5C0SendToC1.tCsrInfo_boUpMastSensorNC, (TVoid*)&gCsr_ctRecDat_Data5C0SendToC1.tCsrRng_boUpMastSensorNC,
        (TVoid*)&gCsr_tData5C0SendToC1.boUpMastSensorNC, (TVoid*)&mCsr_tOldDat_tData5C0SendToC1.boUpMastSensorNC, &mCsr_aeRecErr_tData5C0SendToC1[4],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Data5C0SendToC1.tCsrInfo_boValveInDownPositionSensor, (TVoid*)&gCsr_ctRecDat_Data5C0SendToC1.tCsrRng_boValveInDownPositionSensor,
        (TVoid*)&gCsr_tData5C0SendToC1.boValveInDownPositionSensor, (TVoid*)&mCsr_tOldDat_tData5C0SendToC1.boValveInDownPositionSensor, &mCsr_aeRecErr_tData5C0SendToC1[5],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Data5C0SendToC1.tCsrInfo_boMeasuringMastSensorFolded, (TVoid*)&gCsr_ctRecDat_Data5C0SendToC1.tCsrRng_boMeasuringMastSensorFolded,
        (TVoid*)&gCsr_tData5C0SendToC1.boMeasuringMastSensorFolded, (TVoid*)&mCsr_tOldDat_tData5C0SendToC1.boMeasuringMastSensorFolded, &mCsr_aeRecErr_tData5C0SendToC1[6],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Data5C0SendToC1.tCsrInfo_i16RpmPvgTransRail, (TVoid*)&gCsr_ctRecDat_Data5C0SendToC1.tCsrRng_i16RpmPvgTransRail,
        (TVoid*)&gCsr_tData5C0SendToC1.i16RpmPvgTransRail, (TVoid*)&mCsr_tOldDat_tData5C0SendToC1.i16RpmPvgTransRail, &mCsr_aeRecErr_tData5C0SendToC1[7],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Data5C0SendToC1.tCsrInfo_u8Batt_Soc, (TVoid*)&gCsr_ctRecDat_Data5C0SendToC1.tCsrRng_u8Batt_Soc,
        (TVoid*)&gCsr_tData5C0SendToC1.u8Batt_Soc, (TVoid*)&mCsr_tOldDat_tData5C0SendToC1.u8Batt_Soc, &mCsr_aeRecErr_tData5C0SendToC1[8],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Data5C0SendToC1.tCsrInfo_i16Ibatt_ist, (TVoid*)&gCsr_ctRecDat_Data5C0SendToC1.tCsrRng_i16Ibatt_ist,
        (TVoid*)&gCsr_tData5C0SendToC1.i16Ibatt_ist, (TVoid*)&mCsr_tOldDat_tData5C0SendToC1.i16Ibatt_ist, &mCsr_aeRecErr_tData5C0SendToC1[9],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Data5C0SendToC1.tCsrInfo_u8SelectedControlPost, (TVoid*)&gCsr_ctRecDat_Data5C0SendToC1.tCsrRng_u8SelectedControlPost,
        (TVoid*)&gCsr_tData5C0SendToC1.u8SelectedControlPost, (TVoid*)&mCsr_tOldDat_tData5C0SendToC1.u8SelectedControlPost, &mCsr_aeRecErr_tData5C0SendToC1[10],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Data5C0SendToC1.tCsrInfo_boAddPerformanceFunc, (TVoid*)&gCsr_ctRecDat_Data5C0SendToC1.tCsrRng_boAddPerformanceFunc,
        (TVoid*)&gCsr_tData5C0SendToC1.boAddPerformanceFunc, (TVoid*)&mCsr_tOldDat_tData5C0SendToC1.boAddPerformanceFunc, &mCsr_aeRecErr_tData5C0SendToC1[11],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Data5C0SendToC1.tCsrInfo_boSlopeCaseLess2Deg, (TVoid*)&gCsr_ctRecDat_Data5C0SendToC1.tCsrRng_boSlopeCaseLess2Deg,
        (TVoid*)&gCsr_tData5C0SendToC1.boSlopeCaseLess2Deg, (TVoid*)&mCsr_tOldDat_tData5C0SendToC1.boSlopeCaseLess2Deg, &mCsr_aeRecErr_tData5C0SendToC1[12],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Data5C0SendToC1.tCsrInfo_boSlopeCaseLess4Deg, (TVoid*)&gCsr_ctRecDat_Data5C0SendToC1.tCsrRng_boSlopeCaseLess4Deg,
        (TVoid*)&gCsr_tData5C0SendToC1.boSlopeCaseLess4Deg, (TVoid*)&mCsr_tOldDat_tData5C0SendToC1.boSlopeCaseLess4Deg, &mCsr_aeRecErr_tData5C0SendToC1[13],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Data5C0SendToC1.tCsrInfo_boSlopeCaseLess6Deg, (TVoid*)&gCsr_ctRecDat_Data5C0SendToC1.tCsrRng_boSlopeCaseLess6Deg,
        (TVoid*)&gCsr_tData5C0SendToC1.boSlopeCaseLess6Deg, (TVoid*)&mCsr_tOldDat_tData5C0SendToC1.boSlopeCaseLess6Deg, &mCsr_aeRecErr_tData5C0SendToC1[14],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Data5C0SendToC1.tCsrInfo_boSlopeCaseHigher6Deg, (TVoid*)&gCsr_ctRecDat_Data5C0SendToC1.tCsrRng_boSlopeCaseHigher6Deg,
        (TVoid*)&gCsr_tData5C0SendToC1.boSlopeCaseHigher6Deg, (TVoid*)&mCsr_tOldDat_tData5C0SendToC1.boSlopeCaseHigher6Deg, &mCsr_aeRecErr_tData5C0SendToC1[15],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Data5C0SendToC1.tCsrInfo_boTurretInSpeedZone2Deg, (TVoid*)&gCsr_ctRecDat_Data5C0SendToC1.tCsrRng_boTurretInSpeedZone2Deg,
        (TVoid*)&gCsr_tData5C0SendToC1.boTurretInSpeedZone2Deg, (TVoid*)&mCsr_tOldDat_tData5C0SendToC1.boTurretInSpeedZone2Deg, &mCsr_aeRecErr_tData5C0SendToC1[16],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Data5C0SendToC1.tCsrInfo_boTurretInSpeedZone4Deg, (TVoid*)&gCsr_ctRecDat_Data5C0SendToC1.tCsrRng_boTurretInSpeedZone4Deg,
        (TVoid*)&gCsr_tData5C0SendToC1.boTurretInSpeedZone4Deg, (TVoid*)&mCsr_tOldDat_tData5C0SendToC1.boTurretInSpeedZone4Deg, &mCsr_aeRecErr_tData5C0SendToC1[17],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Data5C0SendToC1.tCsrInfo_boTurretInSpeedZone2DegForBasket, (TVoid*)&gCsr_ctRecDat_Data5C0SendToC1.tCsrRng_boTurretInSpeedZone2DegForBasket,
        (TVoid*)&gCsr_tData5C0SendToC1.boTurretInSpeedZone2DegForBasket, (TVoid*)&mCsr_tOldDat_tData5C0SendToC1.boTurretInSpeedZone2DegForBasket, &mCsr_aeRecErr_tData5C0SendToC1[18],
        NULL, NULL
    }
};

static const TCanSigRecRoot mCsr_ctRoot_Data5C0SendToC1 =
{
    "Data5C0SendToC1",                                      //!< achName - [STR] Name Data5C0SendToC1
    8,                                                      //!< u8Dlc - [NUM] DLC of Can Message
    0xff,                                                   //!< u8CanByteDflt - [NUM] CAN Message default
    DATA_INTEL,                                             //!< eCanFormat - [NUM] CAN Format
    0xFF,                                                   //!< u8MasterReceiveId - [NUM] Receive Id
    19,                                                     //!< u8RecCnt - [NUM] Count of Recorde
    &mCsr_actRecDat_tData5C0SendToC1[0],                    //!< ptRec - [NUM] Pointer to Record Values
    66,                                                     //!< u16RecNo - [NUM] Record Number
    CSR_STAMP                                               //!< u16Stamp - [NUM] Safety stamp
};

TCanSigRecData5C0SendToC1 gCsr_tData5C0SendToC1 =
{
    &mCsr_ctRoot_Data5C0SendToC1,                           //!< *cptRoot [POI] Root connection
    FALSE,                                                  //!< boAutorisationHighSpeedKeyState [[-]] new signal
    FALSE,                                                  //!< boTransRailElectricRampOngoing [[-]] new signal
    FALSE,                                                  //!< boSendAuthorizeReloadBattery [[-]] new signal
    FALSE,                                                  //!< boPreventLimitSpeedExceeding [[-]] new signal
    FALSE,                                                  //!< boUpMastSensorNC [[-]] new signal
    FALSE,                                                  //!< boValveInDownPositionSensor [[-]] new signal
    FALSE,                                                  //!< boMeasuringMastSensorFolded [[-]] new signal
    (((0 * 1)/1)+0),                                        //!< i16RpmPvgTransRail [[-]] new signal
    (((0 * 1)/1)+0),                                        //!< u8Batt_Soc [[-]] new signal
    (((0 * 1)/1)+0),                                        //!< i16Ibatt_ist [[-]] new signal
    (((0 * 1)/1)+0),                                        //!< u8SelectedControlPost [[-]] new signal
    FALSE,                                                  //!< boAddPerformanceFunc [[-]] new signal
    FALSE,                                                  //!< boSlopeCaseLess2Deg [[-]] new signal
    FALSE,                                                  //!< boSlopeCaseLess4Deg [[-]] new signal
    FALSE,                                                  //!< boSlopeCaseLess6Deg [[-]] new signal
    FALSE,                                                  //!< boSlopeCaseHigher6Deg [[-]] new signal
    FALSE,                                                  //!< boTurretInSpeedZone2Deg [[-]] new signal
    FALSE,                                                  //!< boTurretInSpeedZone4Deg [[-]] new signal
    FALSE                                                   //!< boTurretInSpeedZone2DegForBasket [[-]] new signal
};

const TCanSigRecVal_Data5C1SendToC0 gCsr_ctRecDat_Data5C1SendToC0 =
{
    //!< ColdOilTankTemperature
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 0, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< ElectricMotorForbidden
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 1, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< SocStopRegen
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 2, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< AutoModeActivate
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 3, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< SilenceModeActivate
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 4, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< ForcingRegenlow
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 5, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< ForcingRegenHigh
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 6, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< InterdictOfNacelTurretPost
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 7, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< RpmMotorElectric
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TINT16, TINT16, 8, 16, 0, 0, 1, 1 }, 
     { I16_MIN, I16_MAX, 0, 0 },
    //!< OilTankTemperatureValue
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TINT16, TINT16, 24, 16, 0, 0, 1, 1 }, 
     { I16_MIN, I16_MAX, 0, 0 },
    //!< GeneratorOn
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 40, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< EvDevMvtsCmd
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 41, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< PerformAutoriseTransArrow
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 42, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< ValidTelescopeSector
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 43, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< ValidFirstSectorTelescope
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 44, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< PostInterdictionMastSNCF
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 45, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< EvBypassCommand
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 46, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< MastPanthoFoldedSNCF
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TBOOLEAN, TBOOLEAN, 47, 1, 0, 0, 1, 1 }, 
     { FALSE, TRUE, FALSE, FALSE },
    //!< MotorspeedCmdJ1939
    { { { DB_LINK_NA, 0, 0 }, SBSIG_MANUALLY }, ERSIG_DFLT, TINT16, TINT16, 48, 16, 0, 0, 1, 1 }, 
     { I16_MIN, I16_MAX, 0, 0 }
};

static ESigSta mCsr_aeRecErr_tData5C1SendToC0[19] =
{
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY,
    SIG_OKAY
};

static TCanSigRecOldValData5C1SendToC0 mCsr_tOldDat_tData5C1SendToC0 =
{
    FALSE,                                                  //!< boColdOilTankTemperature [[-]] new signal
    FALSE,                                                  //!< boElectricMotorForbidden [[-]] new signal
    FALSE,                                                  //!< boSocStopRegen [[-]] new signal
    FALSE,                                                  //!< boAutoModeActivate [[-]] new signal
    FALSE,                                                  //!< boSilenceModeActivate [[-]] new signal
    FALSE,                                                  //!< boForcingRegenlow [[-]] new signal
    FALSE,                                                  //!< boForcingRegenHigh [[-]] new signal
    FALSE,                                                  //!< boInterdictOfNacelTurretPost [[-]] new signal
    0,                                                      //!< i16RpmMotorElectric [[-]] new signal
    0,                                                      //!< i16OilTankTemperatureValue [[-]] new signal
    FALSE,                                                  //!< boGeneratorOn [[-]] new signal
    FALSE,                                                  //!< boEvDevMvtsCmd [[-]] new signal
    FALSE,                                                  //!< boPerformAutoriseTransArrow [[-]] new signal
    FALSE,                                                  //!< boValidTelescopeSector [[-]] new signal
    FALSE,                                                  //!< boValidFirstSectorTelescope [[-]] new signal
    FALSE,                                                  //!< boPostInterdictionMastSNCF [[-]] new signal
    FALSE,                                                  //!< boEvBypassCommand [[-]] new signal
    FALSE,                                                  //!< boMastPanthoFoldedSNCF [[-]] new signal
    0                                                       //!< i16MotorspeedCmdJ1939 [[-]] new signal
};

extern TCanSigRecData5C1SendToC0 gCsr_tData5C1SendToC0;
static const TRecDat mCsr_actRecDat_tData5C1SendToC0[19] =
{
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Data5C1SendToC0.tCsrInfo_boColdOilTankTemperature, (TVoid*)&gCsr_ctRecDat_Data5C1SendToC0.tCsrRng_boColdOilTankTemperature,
        (TVoid*)&gCsr_tData5C1SendToC0.boColdOilTankTemperature, (TVoid*)&mCsr_tOldDat_tData5C1SendToC0.boColdOilTankTemperature, &mCsr_aeRecErr_tData5C1SendToC0[0],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Data5C1SendToC0.tCsrInfo_boElectricMotorForbidden, (TVoid*)&gCsr_ctRecDat_Data5C1SendToC0.tCsrRng_boElectricMotorForbidden,
        (TVoid*)&gCsr_tData5C1SendToC0.boElectricMotorForbidden, (TVoid*)&mCsr_tOldDat_tData5C1SendToC0.boElectricMotorForbidden, &mCsr_aeRecErr_tData5C1SendToC0[1],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Data5C1SendToC0.tCsrInfo_boSocStopRegen, (TVoid*)&gCsr_ctRecDat_Data5C1SendToC0.tCsrRng_boSocStopRegen,
        (TVoid*)&gCsr_tData5C1SendToC0.boSocStopRegen, (TVoid*)&mCsr_tOldDat_tData5C1SendToC0.boSocStopRegen, &mCsr_aeRecErr_tData5C1SendToC0[2],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Data5C1SendToC0.tCsrInfo_boAutoModeActivate, (TVoid*)&gCsr_ctRecDat_Data5C1SendToC0.tCsrRng_boAutoModeActivate,
        (TVoid*)&gCsr_tData5C1SendToC0.boAutoModeActivate, (TVoid*)&mCsr_tOldDat_tData5C1SendToC0.boAutoModeActivate, &mCsr_aeRecErr_tData5C1SendToC0[3],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Data5C1SendToC0.tCsrInfo_boSilenceModeActivate, (TVoid*)&gCsr_ctRecDat_Data5C1SendToC0.tCsrRng_boSilenceModeActivate,
        (TVoid*)&gCsr_tData5C1SendToC0.boSilenceModeActivate, (TVoid*)&mCsr_tOldDat_tData5C1SendToC0.boSilenceModeActivate, &mCsr_aeRecErr_tData5C1SendToC0[4],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Data5C1SendToC0.tCsrInfo_boForcingRegenlow, (TVoid*)&gCsr_ctRecDat_Data5C1SendToC0.tCsrRng_boForcingRegenlow,
        (TVoid*)&gCsr_tData5C1SendToC0.boForcingRegenlow, (TVoid*)&mCsr_tOldDat_tData5C1SendToC0.boForcingRegenlow, &mCsr_aeRecErr_tData5C1SendToC0[5],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Data5C1SendToC0.tCsrInfo_boForcingRegenHigh, (TVoid*)&gCsr_ctRecDat_Data5C1SendToC0.tCsrRng_boForcingRegenHigh,
        (TVoid*)&gCsr_tData5C1SendToC0.boForcingRegenHigh, (TVoid*)&mCsr_tOldDat_tData5C1SendToC0.boForcingRegenHigh, &mCsr_aeRecErr_tData5C1SendToC0[6],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Data5C1SendToC0.tCsrInfo_boInterdictOfNacelTurretPost, (TVoid*)&gCsr_ctRecDat_Data5C1SendToC0.tCsrRng_boInterdictOfNacelTurretPost,
        (TVoid*)&gCsr_tData5C1SendToC0.boInterdictOfNacelTurretPost, (TVoid*)&mCsr_tOldDat_tData5C1SendToC0.boInterdictOfNacelTurretPost, &mCsr_aeRecErr_tData5C1SendToC0[7],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Data5C1SendToC0.tCsrInfo_i16RpmMotorElectric, (TVoid*)&gCsr_ctRecDat_Data5C1SendToC0.tCsrRng_i16RpmMotorElectric,
        (TVoid*)&gCsr_tData5C1SendToC0.i16RpmMotorElectric, (TVoid*)&mCsr_tOldDat_tData5C1SendToC0.i16RpmMotorElectric, &mCsr_aeRecErr_tData5C1SendToC0[8],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Data5C1SendToC0.tCsrInfo_i16OilTankTemperatureValue, (TVoid*)&gCsr_ctRecDat_Data5C1SendToC0.tCsrRng_i16OilTankTemperatureValue,
        (TVoid*)&gCsr_tData5C1SendToC0.i16OilTankTemperatureValue, (TVoid*)&mCsr_tOldDat_tData5C1SendToC0.i16OilTankTemperatureValue, &mCsr_aeRecErr_tData5C1SendToC0[9],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Data5C1SendToC0.tCsrInfo_boGeneratorOn, (TVoid*)&gCsr_ctRecDat_Data5C1SendToC0.tCsrRng_boGeneratorOn,
        (TVoid*)&gCsr_tData5C1SendToC0.boGeneratorOn, (TVoid*)&mCsr_tOldDat_tData5C1SendToC0.boGeneratorOn, &mCsr_aeRecErr_tData5C1SendToC0[10],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Data5C1SendToC0.tCsrInfo_boEvDevMvtsCmd, (TVoid*)&gCsr_ctRecDat_Data5C1SendToC0.tCsrRng_boEvDevMvtsCmd,
        (TVoid*)&gCsr_tData5C1SendToC0.boEvDevMvtsCmd, (TVoid*)&mCsr_tOldDat_tData5C1SendToC0.boEvDevMvtsCmd, &mCsr_aeRecErr_tData5C1SendToC0[11],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Data5C1SendToC0.tCsrInfo_boPerformAutoriseTransArrow, (TVoid*)&gCsr_ctRecDat_Data5C1SendToC0.tCsrRng_boPerformAutoriseTransArrow,
        (TVoid*)&gCsr_tData5C1SendToC0.boPerformAutoriseTransArrow, (TVoid*)&mCsr_tOldDat_tData5C1SendToC0.boPerformAutoriseTransArrow, &mCsr_aeRecErr_tData5C1SendToC0[12],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Data5C1SendToC0.tCsrInfo_boValidTelescopeSector, (TVoid*)&gCsr_ctRecDat_Data5C1SendToC0.tCsrRng_boValidTelescopeSector,
        (TVoid*)&gCsr_tData5C1SendToC0.boValidTelescopeSector, (TVoid*)&mCsr_tOldDat_tData5C1SendToC0.boValidTelescopeSector, &mCsr_aeRecErr_tData5C1SendToC0[13],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Data5C1SendToC0.tCsrInfo_boValidFirstSectorTelescope, (TVoid*)&gCsr_ctRecDat_Data5C1SendToC0.tCsrRng_boValidFirstSectorTelescope,
        (TVoid*)&gCsr_tData5C1SendToC0.boValidFirstSectorTelescope, (TVoid*)&mCsr_tOldDat_tData5C1SendToC0.boValidFirstSectorTelescope, &mCsr_aeRecErr_tData5C1SendToC0[14],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Data5C1SendToC0.tCsrInfo_boPostInterdictionMastSNCF, (TVoid*)&gCsr_ctRecDat_Data5C1SendToC0.tCsrRng_boPostInterdictionMastSNCF,
        (TVoid*)&gCsr_tData5C1SendToC0.boPostInterdictionMastSNCF, (TVoid*)&mCsr_tOldDat_tData5C1SendToC0.boPostInterdictionMastSNCF, &mCsr_aeRecErr_tData5C1SendToC0[15],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Data5C1SendToC0.tCsrInfo_boEvBypassCommand, (TVoid*)&gCsr_ctRecDat_Data5C1SendToC0.tCsrRng_boEvBypassCommand,
        (TVoid*)&gCsr_tData5C1SendToC0.boEvBypassCommand, (TVoid*)&mCsr_tOldDat_tData5C1SendToC0.boEvBypassCommand, &mCsr_aeRecErr_tData5C1SendToC0[16],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Data5C1SendToC0.tCsrInfo_boMastPanthoFoldedSNCF, (TVoid*)&gCsr_ctRecDat_Data5C1SendToC0.tCsrRng_boMastPanthoFoldedSNCF,
        (TVoid*)&gCsr_tData5C1SendToC0.boMastPanthoFoldedSNCF, (TVoid*)&mCsr_tOldDat_tData5C1SendToC0.boMastPanthoFoldedSNCF, &mCsr_aeRecErr_tData5C1SendToC0[17],
        NULL, NULL
    },
    {
        (TCanSigRecInf*)&gCsr_ctRecDat_Data5C1SendToC0.tCsrInfo_i16MotorspeedCmdJ1939, (TVoid*)&gCsr_ctRecDat_Data5C1SendToC0.tCsrRng_i16MotorspeedCmdJ1939,
        (TVoid*)&gCsr_tData5C1SendToC0.i16MotorspeedCmdJ1939, (TVoid*)&mCsr_tOldDat_tData5C1SendToC0.i16MotorspeedCmdJ1939, &mCsr_aeRecErr_tData5C1SendToC0[18],
        NULL, NULL
    }
};

static const TCanSigRecRoot mCsr_ctRoot_Data5C1SendToC0 =
{
    "Data5C1SendToC0",                                      //!< achName - [STR] Name Data5C1SendToC0
    8,                                                      //!< u8Dlc - [NUM] DLC of Can Message
    0xff,                                                   //!< u8CanByteDflt - [NUM] CAN Message default
    DATA_INTEL,                                             //!< eCanFormat - [NUM] CAN Format
    0xFF,                                                   //!< u8MasterReceiveId - [NUM] Receive Id
    19,                                                     //!< u8RecCnt - [NUM] Count of Recorde
    &mCsr_actRecDat_tData5C1SendToC0[0],                    //!< ptRec - [NUM] Pointer to Record Values
    67,                                                     //!< u16RecNo - [NUM] Record Number
    CSR_STAMP                                               //!< u16Stamp - [NUM] Safety stamp
};

TCanSigRecData5C1SendToC0 gCsr_tData5C1SendToC0 =
{
    &mCsr_ctRoot_Data5C1SendToC0,                           //!< *cptRoot [POI] Root connection
    FALSE,                                                  //!< boColdOilTankTemperature [[-]] new signal
    FALSE,                                                  //!< boElectricMotorForbidden [[-]] new signal
    FALSE,                                                  //!< boSocStopRegen [[-]] new signal
    FALSE,                                                  //!< boAutoModeActivate [[-]] new signal
    FALSE,                                                  //!< boSilenceModeActivate [[-]] new signal
    FALSE,                                                  //!< boForcingRegenlow [[-]] new signal
    FALSE,                                                  //!< boForcingRegenHigh [[-]] new signal
    FALSE,                                                  //!< boInterdictOfNacelTurretPost [[-]] new signal
    (((0 * 1)/1)+0),                                        //!< i16RpmMotorElectric [[-]] new signal
    (((0 * 1)/1)+0),                                        //!< i16OilTankTemperatureValue [[-]] new signal
    FALSE,                                                  //!< boGeneratorOn [[-]] new signal
    FALSE,                                                  //!< boEvDevMvtsCmd [[-]] new signal
    FALSE,                                                  //!< boPerformAutoriseTransArrow [[-]] new signal
    FALSE,                                                  //!< boValidTelescopeSector [[-]] new signal
    FALSE,                                                  //!< boValidFirstSectorTelescope [[-]] new signal
    FALSE,                                                  //!< boPostInterdictionMastSNCF [[-]] new signal
    FALSE,                                                  //!< boEvBypassCommand [[-]] new signal
    FALSE,                                                  //!< boMastPanthoFoldedSNCF [[-]] new signal
    (((0 * 1)/1)+0)                                         //!< i16MotorspeedCmdJ1939 [[-]] new signal
};

static TVoid* m_avpCanSigRecTable[68]=
{
    (TVoid*)&gCsr_tStart_48XS,                              //!< eCR_Start_48XS
    (TVoid*)&gCsr_tSync_48XS,                               //!< eCR_Sync_48XS
    (TVoid*)&gCsr_tSRDO2_48XS,                              //!< eCR_SRDO2_48XS
    (TVoid*)&gCsr_tSRDO3_48XS,                              //!< eCR_SRDO3_48XS
    (TVoid*)&gCsr_tSRDO1_48XS,                              //!< eCR_SRDO1_48XS
    (TVoid*)&gCsr_tMsg1RcvFromOpus,                         //!< eCR_Msg1RcvFromOpus
    (TVoid*)&gCsr_tPDO1_48XS,                               //!< eCR_PDO1_48XS
    (TVoid*)&gCsr_tTelescopeFrame1,                         //!< eCR_TelescopeFrame1
    (TVoid*)&gCsr_tTelescopeFrame2,                         //!< eCR_TelescopeFrame2
    (TVoid*)&gCsr_tSRDO4_48XS,                              //!< eCR_SRDO4_48XS
    (TVoid*)&gCsr_tPDO2_48XS,                               //!< eCR_PDO2_48XS
    (TVoid*)&gCsr_tPDO3_48XS,                               //!< eCR_PDO3_48XS
    (TVoid*)&gCsr_tMsg1C1SendToOpus,                        //!< eCR_Msg1C1SendToOpus
    (TVoid*)&gCsr_tMsg3C1SendToOpus,                        //!< eCR_Msg3C1SendToOpus
    (TVoid*)&gCsr_tMsg5C1SendToOpus,                        //!< eCR_Msg5C1SendToOpus
    (TVoid*)&gCsr_tMsg7C1SendToOpus,                        //!< eCR_Msg7C1SendToOpus
    (TVoid*)&gCsr_tPDO4_48XS,                               //!< eCR_PDO4_48XS
    (TVoid*)&gCsr_tMsg2C1SendToOpus,                        //!< eCR_Msg2C1SendToOpus
    (TVoid*)&gCsr_tMsg4C1SendToOpus,                        //!< eCR_Msg4C1SendToOpus
    (TVoid*)&gCsr_tMsg6C1SendToOpus,                        //!< eCR_Msg6C1SendToOpus
    (TVoid*)&gCsr_tMsg8C1SendToOpus,                        //!< eCR_Msg8C1SendToOpus
    (TVoid*)&gCsr_tSdo_Answer_48XS,                         //!< eCR_Sdo_Answer_48XS
    (TVoid*)&gCsr_tMsg9C1SendToOpus,                        //!< eCR_Msg9C1SendToOpus
    (TVoid*)&gCsr_tSdo_Request_48XS,                        //!< eCR_Sdo_Request_48XS
    (TVoid*)&gCsr_tPDO5_48XS,                               //!< eCR_PDO5_48XS
    (TVoid*)&gCsr_tPDO6_48XS,                               //!< eCR_PDO6_48XS
    (TVoid*)&gCsr_tHeartbeat_C1,                            //!< eCR_Heartbeat_C1
    (TVoid*)&gCsr_tHearbeat_48XS,                           //!< eCR_Hearbeat_48XS
    (TVoid*)&gCsr_tHearbeat_Telescope,                      //!< eCR_Hearbeat_Telescope
    (TVoid*)&gCsr_tMsg1C1SendToEvision7,                    //!< eCR_Msg1C1SendToEvision7
    (TVoid*)&gCsr_tMsg2C1SendToEvision7,                    //!< eCR_Msg2C1SendToEvision7
    (TVoid*)&gCsr_tMsg3C1SendToEvision7,                    //!< eCR_Msg3C1SendToEvision7
    (TVoid*)&gCsr_tMsg4C1SendToEvision7,                    //!< eCR_Msg4C1SendToEvision7
    (TVoid*)&gCsr_tMsg5C1SendToEvision7,                    //!< eCR_Msg5C1SendToEvision7
    (TVoid*)&gCsr_tMsg6C1SendToEvision7,                    //!< eCR_Msg6C1SendToEvision7
    (TVoid*)&gCsr_tMsg7C1SendToEvision7,                    //!< eCR_Msg7C1SendToEvision7
    (TVoid*)&gCsr_tMsg8C1SendToEvision7,                    //!< eCR_Msg8C1SendToEvision7
    (TVoid*)&gCsr_tMsg9C1SendToEvision7,                    //!< eCR_Msg9C1SendToEvision7
    (TVoid*)&gCsr_tMsg10C1SendToEvision7,                   //!< eCR_Msg10C1SendToEvision7
    (TVoid*)&gCsr_tMsg11C1SendToEvision7,                   //!< eCR_Msg11C1SendToEvision7
    (TVoid*)&gCsr_tMsg12C1SendToEvision7,                   //!< eCR_Msg12C1SendToEvision7
    (TVoid*)&gCsr_tMsg13C1SendToEvision7,                   //!< eCR_Msg13C1SendToEvision7
    (TVoid*)&gCsr_tMsg14C1SendToEvision7,                   //!< eCR_Msg14C1SendToEvision7
    (TVoid*)&gCsr_tMsgDebugC1SendToEvision7,                //!< eCR_MsgDebugC1SendToEvision7
    (TVoid*)&gCsr_tMsg1RcvFromEvision7,                     //!< eCR_Msg1RcvFromEvision7
    (TVoid*)&gCsr_tTSC1,                                    //!< eCR_TSC1
    (TVoid*)&gCsr_tEEC1,                                    //!< eCR_EEC1
    (TVoid*)&gCsr_tEOI,                                     //!< eCR_EOI
    (TVoid*)&gCsr_tEBC1,                                    //!< eCR_EBC1
    (TVoid*)&gCsr_tDLCD1,                                   //!< eCR_DLCD1
    (TVoid*)&gCsr_tVEP3,                                    //!< eCR_VEP3
    (TVoid*)&gCsr_tSHUTDN,                                  //!< eCR_SHUTDN
    (TVoid*)&gCsr_tET1,                                     //!< eCR_ET1
    (TVoid*)&gCsr_tEFL_P1,                                  //!< eCR_EFL_P1
    (TVoid*)&gCsr_tVEP1,                                    //!< eCR_VEP1
    (TVoid*)&gCsr_tSendToC1RadioCmd,                        //!< eCR_SendToC1RadioCmd
    (TVoid*)&gCsr_tDataRcvFromC1,                           //!< eCR_DataRcvFromC1
    (TVoid*)&gCsr_tDataSendToC1,                            //!< eCR_DataSendToC1
    (TVoid*)&gCsr_tData2SendToC1,                           //!< eCR_Data2SendToC1
    (TVoid*)&gCsr_tData2RdvFromC1,                          //!< eCR_Data2RdvFromC1
    (TVoid*)&gCsr_tData3SendToC1,                           //!< eCR_Data3SendToC1
    (TVoid*)&gCsr_tData3RcvFromC1,                          //!< eCR_Data3RcvFromC1
    (TVoid*)&gCsr_tFailuresC1SendToC0,                      //!< eCR_FailuresC1SendToC0
    (TVoid*)&gCsr_tFailuresC0SendToC1,                      //!< eCR_FailuresC0SendToC1
    (TVoid*)&gCsr_tData4C0SendToC1,                         //!< eCR_Data4C0SendToC1
    (TVoid*)&gCsr_tData4C1SendToC0,                         //!< eCR_Data4C1SendToC0
    (TVoid*)&gCsr_tData5C0SendToC1,                         //!< eCR_Data5C0SendToC1
    (TVoid*)&gCsr_tData5C1SendToC0                          //!< eCR_Data5C1SendToC0
};

const TCanSigRecRootTab g_ctCanSigRecRootTab=
{
    68,                                                     //!< u16CanSigRecCnt - Count of Can Records
    m_avpCanSigRecTable,                                    //!< vpFirstCanSigRec - First Can Record
    0,                                                      //!< u16CanSigRecMuxCnt - Mux: Count of Can Records
    NULL,                                                   //!< vpFirstCanSigMuxRec - Mux: First Can Record
    NULL                                                    //!< au16FirstCanMuxRecCnt - Mux: Count of Mux Member
};

#endif // LINT_SWITCH_IGNORE

