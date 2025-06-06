//**************************************************************************************************
//! @crc        3121026257
//! @file       App_CanSigRec.h
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

#ifndef __APP_CAN_SIG_REC_H__
#define __APP_CAN_SIG_REC_H__

#include <ItfCoreCanSigRec.h>
#include <App_DefEnu.h>

typedef enum
{
    eCSR_Start_48XS,                                        //!< eCSR_Start_48XS
    eCSR_Sync_48XS,                                         //!< eCSR_Sync_48XS
    eCSR_SRDO2_48XS,                                        //!< eCSR_SRDO2_48XS
    eCSR_SRDO3_48XS,                                        //!< eCSR_SRDO3_48XS
    eCSR_SRDO1_48XS,                                        //!< eCSR_SRDO1_48XS
    eCSR_Msg1RcvFromOpus,                                   //!< eCSR_Msg1RcvFromOpus
    eCSR_PDO1_48XS,                                         //!< eCSR_PDO1_48XS
    eCSR_TelescopeFrame1,                                   //!< eCSR_TelescopeFrame1
    eCSR_TelescopeFrame2,                                   //!< eCSR_TelescopeFrame2
    eCSR_SRDO4_48XS,                                        //!< eCSR_SRDO4_48XS
    eCSR_PDO2_48XS,                                         //!< eCSR_PDO2_48XS
    eCSR_PDO3_48XS,                                         //!< eCSR_PDO3_48XS
    eCSR_Msg1C1SendToOpus,                                  //!< eCSR_Msg1C1SendToOpus
    eCSR_Msg3C1SendToOpus,                                  //!< eCSR_Msg3C1SendToOpus
    eCSR_Msg5C1SendToOpus,                                  //!< eCSR_Msg5C1SendToOpus
    eCSR_Msg7C1SendToOpus,                                  //!< eCSR_Msg7C1SendToOpus
    eCSR_PDO4_48XS,                                         //!< eCSR_PDO4_48XS
    eCSR_Msg2C1SendToOpus,                                  //!< eCSR_Msg2C1SendToOpus
    eCSR_Msg4C1SendToOpus,                                  //!< eCSR_Msg4C1SendToOpus
    eCSR_Msg6C1SendToOpus,                                  //!< eCSR_Msg6C1SendToOpus
    eCSR_Msg8C1SendToOpus,                                  //!< eCSR_Msg8C1SendToOpus
    eCSR_Sdo_Answer_48XS,                                   //!< eCSR_Sdo_Answer_48XS
    eCSR_Msg9C1SendToOpus,                                  //!< eCSR_Msg9C1SendToOpus
    eCSR_Sdo_Request_48XS,                                  //!< eCSR_Sdo_Request_48XS
    eCSR_PDO5_48XS,                                         //!< eCSR_PDO5_48XS
    eCSR_PDO6_48XS,                                         //!< eCSR_PDO6_48XS
    eCSR_Heartbeat_C1,                                      //!< eCSR_Heartbeat_C1
    eCSR_Hearbeat_48XS,                                     //!< eCSR_Hearbeat_48XS
    eCSR_Hearbeat_Telescope,                                //!< eCSR_Hearbeat_Telescope
    eCSR_Msg1C1SendToEvision7,                              //!< eCSR_Msg1C1SendToEvision7
    eCSR_Msg2C1SendToEvision7,                              //!< eCSR_Msg2C1SendToEvision7
    eCSR_Msg3C1SendToEvision7,                              //!< eCSR_Msg3C1SendToEvision7
    eCSR_Msg4C1SendToEvision7,                              //!< eCSR_Msg4C1SendToEvision7
    eCSR_Msg5C1SendToEvision7,                              //!< eCSR_Msg5C1SendToEvision7
    eCSR_Msg6C1SendToEvision7,                              //!< eCSR_Msg6C1SendToEvision7
    eCSR_Msg7C1SendToEvision7,                              //!< eCSR_Msg7C1SendToEvision7
    eCSR_Msg8C1SendToEvision7,                              //!< eCSR_Msg8C1SendToEvision7
    eCSR_Msg9C1SendToEvision7,                              //!< eCSR_Msg9C1SendToEvision7
    eCSR_Msg10C1SendToEvision7,                             //!< eCSR_Msg10C1SendToEvision7
    eCSR_Msg11C1SendToEvision7,                             //!< eCSR_Msg11C1SendToEvision7
    eCSR_Msg12C1SendToEvision7,                             //!< eCSR_Msg12C1SendToEvision7
    eCSR_Msg13C1SendToEvision7,                             //!< eCSR_Msg13C1SendToEvision7
    eCSR_Msg14C1SendToEvision7,                             //!< eCSR_Msg14C1SendToEvision7
    eCSR_MsgDebugC1SendToEvision7,                          //!< eCSR_MsgDebugC1SendToEvision7
    eCSR_Msg1RcvFromEvision7,                               //!< eCSR_Msg1RcvFromEvision7
    eCSR_TSC1,                                              //!< eCSR_TSC1
    eCSR_EEC1,                                              //!< eCSR_EEC1
    eCSR_EOI,                                               //!< eCSR_EOI
    eCSR_EBC1,                                              //!< eCSR_EBC1
    eCSR_DLCD1,                                             //!< eCSR_DLCD1
    eCSR_VEP3,                                              //!< eCSR_VEP3
    eCSR_SHUTDN,                                            //!< eCSR_SHUTDN
    eCSR_ET1,                                               //!< eCSR_ET1
    eCSR_EFL_P1,                                            //!< eCSR_EFL_P1
    eCSR_VEP1,                                              //!< eCSR_VEP1
    eCSR_SendToC1RadioCmd,                                  //!< eCSR_SendToC1RadioCmd
    eCSR_DataRcvFromC1,                                     //!< eCSR_DataRcvFromC1
    eCSR_DataSendToC1,                                      //!< eCSR_DataSendToC1
    eCSR_Data2SendToC1,                                     //!< eCSR_Data2SendToC1
    eCSR_Data2RdvFromC1,                                    //!< eCSR_Data2RdvFromC1
    eCSR_Data3SendToC1,                                     //!< eCSR_Data3SendToC1
    eCSR_Data3RcvFromC1,                                    //!< eCSR_Data3RcvFromC1
    eCSR_FailuresC1SendToC0,                                //!< eCSR_FailuresC1SendToC0
    eCSR_FailuresC0SendToC1,                                //!< eCSR_FailuresC0SendToC1
    eCSR_Data4C0SendToC1,                                   //!< eCSR_Data4C0SendToC1
    eCSR_Data4C1SendToC0,                                   //!< eCSR_Data4C1SendToC0
    eCSR_Data5C0SendToC1,                                   //!< eCSR_Data5C0SendToC1
    eCSR_Data5C1SendToC0                                    //!< eCSR_Data5C1SendToC0
} ECanSigRecMsg;

typedef struct
{
    const TCanSigRecRoot *cptRoot;                          //!< [POI] Root connection
    TUint8 u8Command;                                       //!< [[-]] new signal 
    TUint8 u8NodeId;                                        //!< [[-]] new signal 
} TCanSigRecStart_48XS;

extern TCanSigRecStart_48XS gCsr_tStart_48XS;

typedef struct
{
    TUint8 u8Command;                                       //!< [[-]] new signal 
    TUint8 u8NodeId;                                        //!< [[-]] new signal 
} TCanSigRecOldValStart_48XS;

typedef struct
{
    TCanSigRecInf     tCsrInfo_u8Command;
    TCanSigRecRng_u8  tCsrRng_u8Command;
    TCanSigRecInf     tCsrInfo_u8NodeId;
    TCanSigRecRng_u8  tCsrRng_u8NodeId;
} TCanSigRecVal_Start_48XS;

typedef struct
{
    const TCanSigRecRoot *cptRoot;                          //!< [POI] Root connection
    TBoolean boSignal;                                      //!< [[-]] new signal 
} TCanSigRecSync_48XS;

extern TCanSigRecSync_48XS gCsr_tSync_48XS;

typedef struct
{
    TBoolean boSignal;                                      //!< [[-]] new signal 
} TCanSigRecOldValSync_48XS;

typedef struct
{
    TCanSigRecInf     tCsrInfo_boSignal;
    TCanSigRecRng_bo  tCsrRng_boSignal;
} TCanSigRecVal_Sync_48XS;

typedef struct
{
    const TCanSigRecRoot *cptRoot;                          //!< [POI] Root connection
    TUint16 u16NacelleBasketLeftSideSensor1;                //!< [[-]] new signal 
    TUint16 u16NacelleBasketLeftSideSensor2;                //!< [[-]] new signal 
    TUint16 u16LowSectorPendularSensor;                     //!< [[-]] new signal 
    TUint16 u16AdvanceAxisJoystick;                         //!< [[-]] new signal 
} TCanSigRecSRDO2_48XS;

extern TCanSigRecSRDO2_48XS gCsr_tSRDO2_48XS;

typedef struct
{
    TUint16 u16NacelleBasketLeftSideSensor1;                //!< [[-]] new signal 
    TUint16 u16NacelleBasketLeftSideSensor2;                //!< [[-]] new signal 
    TUint16 u16LowSectorPendularSensor;                     //!< [[-]] new signal 
    TUint16 u16AdvanceAxisJoystick;                         //!< [[-]] new signal 
} TCanSigRecOldValSRDO2_48XS;

typedef struct
{
    TCanSigRecInf     tCsrInfo_u16NacelleBasketLeftSideSensor1;
    TCanSigRecRng_u16 tCsrRng_u16NacelleBasketLeftSideSensor1;
    TCanSigRecInf     tCsrInfo_u16NacelleBasketLeftSideSensor2;
    TCanSigRecRng_u16 tCsrRng_u16NacelleBasketLeftSideSensor2;
    TCanSigRecInf     tCsrInfo_u16LowSectorPendularSensor;
    TCanSigRecRng_u16 tCsrRng_u16LowSectorPendularSensor;
    TCanSigRecInf     tCsrInfo_u16AdvanceAxisJoystick;
    TCanSigRecRng_u16 tCsrRng_u16AdvanceAxisJoystick;
} TCanSigRecVal_SRDO2_48XS;

typedef struct
{
    const TCanSigRecRoot *cptRoot;                          //!< [POI] Root connection
    TBoolean boDeltaArmJystckCenteredTelesc;                //!< [[-]] new signal 
    TBoolean boArrowJoystickCenteredTurret;                 //!< [[-]] new signal 
    TBoolean boCenteredAdvanceJoystick;                     //!< [[-]] new signal 
    TBoolean boDeadManPedal;                                //!< [[-]] new signal 
    TBoolean boPressenceInNacelleSensor1;                   //!< [[-]] new signal 
    TBoolean boPressenceInNacelleSensor2;                   //!< [[-]] new signal 
    TBoolean boGachette;                                    //!< [[-]] new signal 
    TBoolean boKlaxon;                                      //!< [[-]] new signal 
    TBoolean boStopMotorButton;                             //!< [[-]] new signal 
    TBoolean boAuthorizationWorkKey;                        //!< [[-]] new signal 
    TBoolean boEtallonnageJoystickButton;                   //!< [[-]] new signal 
    TBoolean boClosePortillon;                              //!< [[-]] new signal 
    TUint16 u16BatterieVoltage48Xs;                         //!< [[-]] new signal 
} TCanSigRecSRDO3_48XS;

extern TCanSigRecSRDO3_48XS gCsr_tSRDO3_48XS;

typedef struct
{
    TBoolean boDeltaArmJystckCenteredTelesc;                //!< [[-]] new signal 
    TBoolean boArrowJoystickCenteredTurret;                 //!< [[-]] new signal 
    TBoolean boCenteredAdvanceJoystick;                     //!< [[-]] new signal 
    TBoolean boDeadManPedal;                                //!< [[-]] new signal 
    TBoolean boPressenceInNacelleSensor1;                   //!< [[-]] new signal 
    TBoolean boPressenceInNacelleSensor2;                   //!< [[-]] new signal 
    TBoolean boGachette;                                    //!< [[-]] new signal 
    TBoolean boKlaxon;                                      //!< [[-]] new signal 
    TBoolean boStopMotorButton;                             //!< [[-]] new signal 
    TBoolean boAuthorizationWorkKey;                        //!< [[-]] new signal 
    TBoolean boEtallonnageJoystickButton;                   //!< [[-]] new signal 
    TBoolean boClosePortillon;                              //!< [[-]] new signal 
    TUint16 u16BatterieVoltage48Xs;                         //!< [[-]] new signal 
} TCanSigRecOldValSRDO3_48XS;

typedef struct
{
    TCanSigRecInf     tCsrInfo_boDeltaArmJystckCenteredTelesc;
    TCanSigRecRng_bo  tCsrRng_boDeltaArmJystckCenteredTelesc;
    TCanSigRecInf     tCsrInfo_boArrowJoystickCenteredTurret;
    TCanSigRecRng_bo  tCsrRng_boArrowJoystickCenteredTurret;
    TCanSigRecInf     tCsrInfo_boCenteredAdvanceJoystick;
    TCanSigRecRng_bo  tCsrRng_boCenteredAdvanceJoystick;
    TCanSigRecInf     tCsrInfo_boDeadManPedal;
    TCanSigRecRng_bo  tCsrRng_boDeadManPedal;
    TCanSigRecInf     tCsrInfo_boPressenceInNacelleSensor1;
    TCanSigRecRng_bo  tCsrRng_boPressenceInNacelleSensor1;
    TCanSigRecInf     tCsrInfo_boPressenceInNacelleSensor2;
    TCanSigRecRng_bo  tCsrRng_boPressenceInNacelleSensor2;
    TCanSigRecInf     tCsrInfo_boGachette;
    TCanSigRecRng_bo  tCsrRng_boGachette;
    TCanSigRecInf     tCsrInfo_boKlaxon;
    TCanSigRecRng_bo  tCsrRng_boKlaxon;
    TCanSigRecInf     tCsrInfo_boStopMotorButton;
    TCanSigRecRng_bo  tCsrRng_boStopMotorButton;
    TCanSigRecInf     tCsrInfo_boAuthorizationWorkKey;
    TCanSigRecRng_bo  tCsrRng_boAuthorizationWorkKey;
    TCanSigRecInf     tCsrInfo_boEtallonnageJoystickButton;
    TCanSigRecRng_bo  tCsrRng_boEtallonnageJoystickButton;
    TCanSigRecInf     tCsrInfo_boClosePortillon;
    TCanSigRecRng_bo  tCsrRng_boClosePortillon;
    TCanSigRecInf     tCsrInfo_u16BatterieVoltage48Xs;
    TCanSigRecRng_u16 tCsrRng_u16BatterieVoltage48Xs;
} TCanSigRecVal_SRDO3_48XS;

typedef struct
{
    const TCanSigRecRoot *cptRoot;                          //!< [POI] Root connection
    TUint16 u16Overload1;                                   //!< [[-]] new signal 
    TUint16 u16Overload2;                                   //!< [[-]] new signal 
    TUint16 u16NacelleBasketRightSideSensor1;               //!< [[-]] new signal 
    TUint16 u16NacelleBasketRightSideSensor2;               //!< [[-]] new signal 
} TCanSigRecSRDO1_48XS;

extern TCanSigRecSRDO1_48XS gCsr_tSRDO1_48XS;

typedef struct
{
    TUint16 u16Overload1;                                   //!< [[-]] new signal 
    TUint16 u16Overload2;                                   //!< [[-]] new signal 
    TUint16 u16NacelleBasketRightSideSensor1;               //!< [[-]] new signal 
    TUint16 u16NacelleBasketRightSideSensor2;               //!< [[-]] new signal 
} TCanSigRecOldValSRDO1_48XS;

typedef struct
{
    TCanSigRecInf     tCsrInfo_u16Overload1;
    TCanSigRecRng_u16 tCsrRng_u16Overload1;
    TCanSigRecInf     tCsrInfo_u16Overload2;
    TCanSigRecRng_u16 tCsrRng_u16Overload2;
    TCanSigRecInf     tCsrInfo_u16NacelleBasketRightSideSensor1;
    TCanSigRecRng_u16 tCsrRng_u16NacelleBasketRightSideSensor1;
    TCanSigRecInf     tCsrInfo_u16NacelleBasketRightSideSensor2;
    TCanSigRecRng_u16 tCsrRng_u16NacelleBasketRightSideSensor2;
} TCanSigRecVal_SRDO1_48XS;

typedef struct
{
    const TCanSigRecRoot *cptRoot;                          //!< [POI] Root connection
    TUint8 u8gLifeByte;                                     //!< [[-]] Life byte sent to the controllers 
    TBoolean bogDelta_Arm_Move_Up;                          //!< [[-]] Delta arm move up button is pressed 
    TBoolean bogDelta_Arm_Move_Down;                        //!< [[-]] Delta arm move down button is pressed 
    TBoolean bogArrow_Arm_Move_Up;                          //!< [[-]] Arrow arm move up button is pressed 
    TBoolean bogArrow_Arm_Move_Down;                        //!< [[-]] Arrow arm move down button is pressed 
    TBoolean bogPendular_Arm_Move_Up;                       //!< [[-]] Pendular move up button is pressed 
    TBoolean bogPendular_Arm_Move_Down;                     //!< [[-]] Pendular move down button is pressed 
    TBoolean bogTelescope_Move_Out;                         //!< [[-]] Telescope move out button is pressed 
    TBoolean bogTelescope_Move_In;                          //!< [[-]] Telescope move in button is pressed 
    TBoolean bogBasket_Inclinaison_Move_Up;                 //!< [[-]] Basket inclinaison move up button is pressed 
    TBoolean bogBasket_Inclinaison_Move_Down;               //!< [[-]] Basket inclinaison move down button is pressed 
    TBoolean bogTurret_Rotate_ClockWise;                    //!< [[-]] Rotate turret clockwise button is pressed 
    TBoolean bogTurret_Rotate_Cntr_ClockWise;               //!< [[-]] Rotate turret counter clockwise button is pressed 
    TBoolean bogBasket_Rotation_Move_Up;                    //!< [[-]] Basket rotation move up button is pressed 
    TBoolean bogBasket_Rotation_Move_Down;                  //!< [[-]] Basket rotation move down button is pressed 
    TBoolean bogKeyRpmSelect;                               //!< [[-]] Activation silent motor mode 
    TBoolean bogKeyRpmOff;                                  //!< [[-]] Activation forcing motor mode 
    TBoolean bogForcingWhiteRaillight;                      //!< [[-]] Activation forcing White Rail lights Front and Rear 
    TBoolean bogForcingNeons;                               //!< [[-]] Activation neons 
    TBoolean bogKeyCalibMin;                                //!< [[-]] Key Calibration Min 
    TBoolean bogKeyCalibMax;                                //!< [[-]] Key Calibration Max 
    TBoolean bogKeyCalibValid;                              //!< [[-]] Key Calibration Validation 
    TBoolean bogKeyCalibMax2;                               //!< [[-]] Key Calibration Max (-180°) 
    TBoolean bogKeySlopeLgReset;                            //!< [[-]] Key Slope Longitudinal reset 
    TBoolean bogKeySlopeTrReset;                            //!< [[-]] Key Slope Transversal reset 
    TBoolean boKeyYesReloadWithGenerator;                   //!< [[-]] new signal 
    TBoolean boKeyNoReloadWithGenerator;                    //!< [[-]] new signal 
    TUint8 u8gActivePageOpus;                               //!< [[-]] Page active Ecran Opus 
    TUint8 u8gElementChoice;                                //!< [[-]] Element choice 1=Telescope; 2=Arrow arm; 3=Delta arm; 4=Turret;  
} TCanSigRecMsg1RcvFromOpus;

extern TCanSigRecMsg1RcvFromOpus gCsr_tMsg1RcvFromOpus;

typedef struct
{
    TUint8 u8gLifeByte;                                     //!< [[-]] Life byte sent to the controllers 
    TBoolean bogDelta_Arm_Move_Up;                          //!< [[-]] Delta arm move up button is pressed 
    TBoolean bogDelta_Arm_Move_Down;                        //!< [[-]] Delta arm move down button is pressed 
    TBoolean bogArrow_Arm_Move_Up;                          //!< [[-]] Arrow arm move up button is pressed 
    TBoolean bogArrow_Arm_Move_Down;                        //!< [[-]] Arrow arm move down button is pressed 
    TBoolean bogPendular_Arm_Move_Up;                       //!< [[-]] Pendular move up button is pressed 
    TBoolean bogPendular_Arm_Move_Down;                     //!< [[-]] Pendular move down button is pressed 
    TBoolean bogTelescope_Move_Out;                         //!< [[-]] Telescope move out button is pressed 
    TBoolean bogTelescope_Move_In;                          //!< [[-]] Telescope move in button is pressed 
    TBoolean bogBasket_Inclinaison_Move_Up;                 //!< [[-]] Basket inclinaison move up button is pressed 
    TBoolean bogBasket_Inclinaison_Move_Down;               //!< [[-]] Basket inclinaison move down button is pressed 
    TBoolean bogTurret_Rotate_ClockWise;                    //!< [[-]] Rotate turret clockwise button is pressed 
    TBoolean bogTurret_Rotate_Cntr_ClockWise;               //!< [[-]] Rotate turret counter clockwise button is pressed 
    TBoolean bogBasket_Rotation_Move_Up;                    //!< [[-]] Basket rotation move up button is pressed 
    TBoolean bogBasket_Rotation_Move_Down;                  //!< [[-]] Basket rotation move down button is pressed 
    TBoolean bogKeyRpmSelect;                               //!< [[-]] Activation silent motor mode 
    TBoolean bogKeyRpmOff;                                  //!< [[-]] Activation forcing motor mode 
    TBoolean bogForcingWhiteRaillight;                      //!< [[-]] Activation forcing White Rail lights Front and Rear 
    TBoolean bogForcingNeons;                               //!< [[-]] Activation neons 
    TBoolean bogKeyCalibMin;                                //!< [[-]] Key Calibration Min 
    TBoolean bogKeyCalibMax;                                //!< [[-]] Key Calibration Max 
    TBoolean bogKeyCalibValid;                              //!< [[-]] Key Calibration Validation 
    TBoolean bogKeyCalibMax2;                               //!< [[-]] Key Calibration Max (-180°) 
    TBoolean bogKeySlopeLgReset;                            //!< [[-]] Key Slope Longitudinal reset 
    TBoolean bogKeySlopeTrReset;                            //!< [[-]] Key Slope Transversal reset 
    TBoolean boKeyYesReloadWithGenerator;                   //!< [[-]] new signal 
    TBoolean boKeyNoReloadWithGenerator;                    //!< [[-]] new signal 
    TUint8 u8gActivePageOpus;                               //!< [[-]] Page active Ecran Opus 
    TUint8 u8gElementChoice;                                //!< [[-]] Element choice 1=Telescope; 2=Arrow arm; 3=Delta arm; 4=Turret;  
} TCanSigRecOldValMsg1RcvFromOpus;

typedef struct
{
    TCanSigRecInf     tCsrInfo_u8gLifeByte;
    TCanSigRecRng_u8  tCsrRng_u8gLifeByte;
    TCanSigRecInf     tCsrInfo_bogDelta_Arm_Move_Up;
    TCanSigRecRng_bo  tCsrRng_bogDelta_Arm_Move_Up;
    TCanSigRecInf     tCsrInfo_bogDelta_Arm_Move_Down;
    TCanSigRecRng_bo  tCsrRng_bogDelta_Arm_Move_Down;
    TCanSigRecInf     tCsrInfo_bogArrow_Arm_Move_Up;
    TCanSigRecRng_bo  tCsrRng_bogArrow_Arm_Move_Up;
    TCanSigRecInf     tCsrInfo_bogArrow_Arm_Move_Down;
    TCanSigRecRng_bo  tCsrRng_bogArrow_Arm_Move_Down;
    TCanSigRecInf     tCsrInfo_bogPendular_Arm_Move_Up;
    TCanSigRecRng_bo  tCsrRng_bogPendular_Arm_Move_Up;
    TCanSigRecInf     tCsrInfo_bogPendular_Arm_Move_Down;
    TCanSigRecRng_bo  tCsrRng_bogPendular_Arm_Move_Down;
    TCanSigRecInf     tCsrInfo_bogTelescope_Move_Out;
    TCanSigRecRng_bo  tCsrRng_bogTelescope_Move_Out;
    TCanSigRecInf     tCsrInfo_bogTelescope_Move_In;
    TCanSigRecRng_bo  tCsrRng_bogTelescope_Move_In;
    TCanSigRecInf     tCsrInfo_bogBasket_Inclinaison_Move_Up;
    TCanSigRecRng_bo  tCsrRng_bogBasket_Inclinaison_Move_Up;
    TCanSigRecInf     tCsrInfo_bogBasket_Inclinaison_Move_Down;
    TCanSigRecRng_bo  tCsrRng_bogBasket_Inclinaison_Move_Down;
    TCanSigRecInf     tCsrInfo_bogTurret_Rotate_ClockWise;
    TCanSigRecRng_bo  tCsrRng_bogTurret_Rotate_ClockWise;
    TCanSigRecInf     tCsrInfo_bogTurret_Rotate_Cntr_ClockWise;
    TCanSigRecRng_bo  tCsrRng_bogTurret_Rotate_Cntr_ClockWise;
    TCanSigRecInf     tCsrInfo_bogBasket_Rotation_Move_Up;
    TCanSigRecRng_bo  tCsrRng_bogBasket_Rotation_Move_Up;
    TCanSigRecInf     tCsrInfo_bogBasket_Rotation_Move_Down;
    TCanSigRecRng_bo  tCsrRng_bogBasket_Rotation_Move_Down;
    TCanSigRecInf     tCsrInfo_bogKeyRpmSelect;
    TCanSigRecRng_bo  tCsrRng_bogKeyRpmSelect;
    TCanSigRecInf     tCsrInfo_bogKeyRpmOff;
    TCanSigRecRng_bo  tCsrRng_bogKeyRpmOff;
    TCanSigRecInf     tCsrInfo_bogForcingWhiteRaillight;
    TCanSigRecRng_bo  tCsrRng_bogForcingWhiteRaillight;
    TCanSigRecInf     tCsrInfo_bogForcingNeons;
    TCanSigRecRng_bo  tCsrRng_bogForcingNeons;
    TCanSigRecInf     tCsrInfo_bogKeyCalibMin;
    TCanSigRecRng_bo  tCsrRng_bogKeyCalibMin;
    TCanSigRecInf     tCsrInfo_bogKeyCalibMax;
    TCanSigRecRng_bo  tCsrRng_bogKeyCalibMax;
    TCanSigRecInf     tCsrInfo_bogKeyCalibValid;
    TCanSigRecRng_bo  tCsrRng_bogKeyCalibValid;
    TCanSigRecInf     tCsrInfo_bogKeyCalibMax2;
    TCanSigRecRng_bo  tCsrRng_bogKeyCalibMax2;
    TCanSigRecInf     tCsrInfo_bogKeySlopeLgReset;
    TCanSigRecRng_bo  tCsrRng_bogKeySlopeLgReset;
    TCanSigRecInf     tCsrInfo_bogKeySlopeTrReset;
    TCanSigRecRng_bo  tCsrRng_bogKeySlopeTrReset;
    TCanSigRecInf     tCsrInfo_boKeyYesReloadWithGenerator;
    TCanSigRecRng_bo  tCsrRng_boKeyYesReloadWithGenerator;
    TCanSigRecInf     tCsrInfo_boKeyNoReloadWithGenerator;
    TCanSigRecRng_bo  tCsrRng_boKeyNoReloadWithGenerator;
    TCanSigRecInf     tCsrInfo_u8gActivePageOpus;
    TCanSigRecRng_u8  tCsrRng_u8gActivePageOpus;
    TCanSigRecInf     tCsrInfo_u8gElementChoice;
    TCanSigRecRng_u8  tCsrRng_u8gElementChoice;
} TCanSigRecVal_Msg1RcvFromOpus;

typedef struct
{
    const TCanSigRecRoot *cptRoot;                          //!< [POI] Root connection
    TUint16 u16UpInclinaisonBasket;                         //!< [[-]] new signal 
    TUint16 u16DownInclinaisonBasket;                       //!< [[-]] new signal 
    TUint16 u16UpPendular;                                  //!< [[-]] new signal 
    TUint16 u16DownPendular;                                //!< [[-]] new signal 
} TCanSigRecPDO1_48XS;

extern TCanSigRecPDO1_48XS gCsr_tPDO1_48XS;

typedef struct
{
    TUint16 u16UpInclinaisonBasket;                         //!< [[-]] new signal 
    TUint16 u16DownInclinaisonBasket;                       //!< [[-]] new signal 
    TUint16 u16UpPendular;                                  //!< [[-]] new signal 
    TUint16 u16DownPendular;                                //!< [[-]] new signal 
} TCanSigRecOldValPDO1_48XS;

typedef struct
{
    TCanSigRecInf     tCsrInfo_u16UpInclinaisonBasket;
    TCanSigRecRng_u16 tCsrRng_u16UpInclinaisonBasket;
    TCanSigRecInf     tCsrInfo_u16DownInclinaisonBasket;
    TCanSigRecRng_u16 tCsrRng_u16DownInclinaisonBasket;
    TCanSigRecInf     tCsrInfo_u16UpPendular;
    TCanSigRecRng_u16 tCsrRng_u16UpPendular;
    TCanSigRecInf     tCsrInfo_u16DownPendular;
    TCanSigRecRng_u16 tCsrRng_u16DownPendular;
} TCanSigRecVal_PDO1_48XS;

typedef struct
{
    const TCanSigRecRoot *cptRoot;                          //!< [POI] Root connection
    TUint16 u16AngleTelescope1;                             //!< [[-]] new signal 
    TUint8 u8ErrorTelescope1;                               //!< [[-]] new signal 
    TUint16 u16LenghtTelescope1;                            //!< [[-]] new signal 
} TCanSigRecTelescopeFrame1;

extern TCanSigRecTelescopeFrame1 gCsr_tTelescopeFrame1;

typedef struct
{
    TUint16 u16AngleTelescope1;                             //!< [[-]] new signal 
    TUint8 u8ErrorTelescope1;                               //!< [[-]] new signal 
    TUint16 u16LenghtTelescope1;                            //!< [[-]] new signal 
} TCanSigRecOldValTelescopeFrame1;

typedef struct
{
    TCanSigRecInf     tCsrInfo_u16AngleTelescope1;
    TCanSigRecRng_u16 tCsrRng_u16AngleTelescope1;
    TCanSigRecInf     tCsrInfo_u8ErrorTelescope1;
    TCanSigRecRng_u8  tCsrRng_u8ErrorTelescope1;
    TCanSigRecInf     tCsrInfo_u16LenghtTelescope1;
    TCanSigRecRng_u16 tCsrRng_u16LenghtTelescope1;
} TCanSigRecVal_TelescopeFrame1;

typedef struct
{
    const TCanSigRecRoot *cptRoot;                          //!< [POI] Root connection
    TUint16 u16AngleTelescope2;                             //!< [[-]] new signal 
    TUint8 u8ErrorTelescope2;                               //!< [[-]] new signal 
    TUint16 u16LenghtTelescope2;                            //!< [[-]] new signal 
} TCanSigRecTelescopeFrame2;

extern TCanSigRecTelescopeFrame2 gCsr_tTelescopeFrame2;

typedef struct
{
    TUint16 u16AngleTelescope2;                             //!< [[-]] new signal 
    TUint8 u8ErrorTelescope2;                               //!< [[-]] new signal 
    TUint16 u16LenghtTelescope2;                            //!< [[-]] new signal 
} TCanSigRecOldValTelescopeFrame2;

typedef struct
{
    TCanSigRecInf     tCsrInfo_u16AngleTelescope2;
    TCanSigRecRng_u16 tCsrRng_u16AngleTelescope2;
    TCanSigRecInf     tCsrInfo_u8ErrorTelescope2;
    TCanSigRecRng_u8  tCsrRng_u8ErrorTelescope2;
    TCanSigRecInf     tCsrInfo_u16LenghtTelescope2;
    TCanSigRecRng_u16 tCsrRng_u16LenghtTelescope2;
} TCanSigRecVal_TelescopeFrame2;

typedef struct
{
    const TCanSigRecRoot *cptRoot;                          //!< [POI] Root connection
    TBoolean boMotorDefaultLight;                           //!< [[-]] new signal 
    TBoolean boOverloadLight;                               //!< [[-]] new signal 
    TBoolean boWhiteLightAr15746;                           //!< [[-]] new signal 
    TBoolean boBuzzer;                                      //!< [[-]] new signal 
    TBoolean boSupplyDeadManPedalAndJoysticks;              //!< [[-]] new signal 
    TBoolean boWarmingLight;                                //!< [[-]] new signal 
    TBoolean boDeversDefaultLight;                          //!< [[-]] new signal 
    TBoolean boGasOilLight;                                 //!< [[-]] new signal 
    TBoolean boWhiteLightARG;                               //!< [[-]] new signal 
    TBoolean boRedLightARG;                                 //!< [[-]] new signal 
    TBoolean boWhiteLightARD;                               //!< [[-]] new signal 
    TBoolean boRedLightARD;                                 //!< [[-]] new signal 
} TCanSigRecSRDO4_48XS;

extern TCanSigRecSRDO4_48XS gCsr_tSRDO4_48XS;

typedef struct
{
    TBoolean boMotorDefaultLight;                           //!< [[-]] new signal 
    TBoolean boOverloadLight;                               //!< [[-]] new signal 
    TBoolean boWhiteLightAr15746;                           //!< [[-]] new signal 
    TBoolean boBuzzer;                                      //!< [[-]] new signal 
    TBoolean boSupplyDeadManPedalAndJoysticks;              //!< [[-]] new signal 
    TBoolean boWarmingLight;                                //!< [[-]] new signal 
    TBoolean boDeversDefaultLight;                          //!< [[-]] new signal 
    TBoolean boGasOilLight;                                 //!< [[-]] new signal 
    TBoolean boWhiteLightARG;                               //!< [[-]] new signal 
    TBoolean boRedLightARG;                                 //!< [[-]] new signal 
    TBoolean boWhiteLightARD;                               //!< [[-]] new signal 
    TBoolean boRedLightARD;                                 //!< [[-]] new signal 
} TCanSigRecOldValSRDO4_48XS;

typedef struct
{
    TCanSigRecInf     tCsrInfo_boMotorDefaultLight;
    TCanSigRecRng_bo  tCsrRng_boMotorDefaultLight;
    TCanSigRecInf     tCsrInfo_boOverloadLight;
    TCanSigRecRng_bo  tCsrRng_boOverloadLight;
    TCanSigRecInf     tCsrInfo_boWhiteLightAr15746;
    TCanSigRecRng_bo  tCsrRng_boWhiteLightAr15746;
    TCanSigRecInf     tCsrInfo_boBuzzer;
    TCanSigRecRng_bo  tCsrRng_boBuzzer;
    TCanSigRecInf     tCsrInfo_boSupplyDeadManPedalAndJoysticks;
    TCanSigRecRng_bo  tCsrRng_boSupplyDeadManPedalAndJoysticks;
    TCanSigRecInf     tCsrInfo_boWarmingLight;
    TCanSigRecRng_bo  tCsrRng_boWarmingLight;
    TCanSigRecInf     tCsrInfo_boDeversDefaultLight;
    TCanSigRecRng_bo  tCsrRng_boDeversDefaultLight;
    TCanSigRecInf     tCsrInfo_boGasOilLight;
    TCanSigRecRng_bo  tCsrRng_boGasOilLight;
    TCanSigRecInf     tCsrInfo_boWhiteLightARG;
    TCanSigRecRng_bo  tCsrRng_boWhiteLightARG;
    TCanSigRecInf     tCsrInfo_boRedLightARG;
    TCanSigRecRng_bo  tCsrRng_boRedLightARG;
    TCanSigRecInf     tCsrInfo_boWhiteLightARD;
    TCanSigRecRng_bo  tCsrRng_boWhiteLightARD;
    TCanSigRecInf     tCsrInfo_boRedLightARD;
    TCanSigRecRng_bo  tCsrRng_boRedLightARD;
} TCanSigRecVal_SRDO4_48XS;

typedef struct
{
    const TCanSigRecRoot *cptRoot;                          //!< [POI] Root connection
    TUint16 u16RotationClockwiseBasket;                     //!< [[-]] new signal 
    TUint16 u16RotationCtClockwiseBasket;                   //!< [[-]] new signal 
    TUint16 u16HighSectorPlateSensor;                       //!< [[-]] new signal 
    TUint16 u16FoldedLadderSensor;                          //!< [[-]] new signal 
} TCanSigRecPDO2_48XS;

extern TCanSigRecPDO2_48XS gCsr_tPDO2_48XS;

typedef struct
{
    TUint16 u16RotationClockwiseBasket;                     //!< [[-]] new signal 
    TUint16 u16RotationCtClockwiseBasket;                   //!< [[-]] new signal 
    TUint16 u16HighSectorPlateSensor;                       //!< [[-]] new signal 
    TUint16 u16FoldedLadderSensor;                          //!< [[-]] new signal 
} TCanSigRecOldValPDO2_48XS;

typedef struct
{
    TCanSigRecInf     tCsrInfo_u16RotationClockwiseBasket;
    TCanSigRecRng_u16 tCsrRng_u16RotationClockwiseBasket;
    TCanSigRecInf     tCsrInfo_u16RotationCtClockwiseBasket;
    TCanSigRecRng_u16 tCsrRng_u16RotationCtClockwiseBasket;
    TCanSigRecInf     tCsrInfo_u16HighSectorPlateSensor;
    TCanSigRecRng_u16 tCsrRng_u16HighSectorPlateSensor;
    TCanSigRecInf     tCsrInfo_u16FoldedLadderSensor;
    TCanSigRecRng_u16 tCsrRng_u16FoldedLadderSensor;
} TCanSigRecVal_PDO2_48XS;

typedef struct
{
    const TCanSigRecRoot *cptRoot;                          //!< [POI] Root connection
    TUint16 u16SafetyManSystem;                             //!< [[-]] new signal 
    TUint16 u16DeltaArmAxisJoystick;                        //!< [[-]] new signal 
    TUint16 u16ArrowArmAxisJoystick;                        //!< [[-]] new signal 
    TUint16 u16TelescopeArmAxisJoysitck;                    //!< [[-]] new signal 
} TCanSigRecPDO3_48XS;

extern TCanSigRecPDO3_48XS gCsr_tPDO3_48XS;

typedef struct
{
    TUint16 u16SafetyManSystem;                             //!< [[-]] new signal 
    TUint16 u16DeltaArmAxisJoystick;                        //!< [[-]] new signal 
    TUint16 u16ArrowArmAxisJoystick;                        //!< [[-]] new signal 
    TUint16 u16TelescopeArmAxisJoysitck;                    //!< [[-]] new signal 
} TCanSigRecOldValPDO3_48XS;

typedef struct
{
    TCanSigRecInf     tCsrInfo_u16SafetyManSystem;
    TCanSigRecRng_u16 tCsrRng_u16SafetyManSystem;
    TCanSigRecInf     tCsrInfo_u16DeltaArmAxisJoystick;
    TCanSigRecRng_u16 tCsrRng_u16DeltaArmAxisJoystick;
    TCanSigRecInf     tCsrInfo_u16ArrowArmAxisJoystick;
    TCanSigRecRng_u16 tCsrRng_u16ArrowArmAxisJoystick;
    TCanSigRecInf     tCsrInfo_u16TelescopeArmAxisJoysitck;
    TCanSigRecRng_u16 tCsrRng_u16TelescopeArmAxisJoysitck;
} TCanSigRecVal_PDO3_48XS;

typedef struct
{
    const TCanSigRecRoot *cptRoot;                          //!< [POI] Root connection
    TBoolean bogBattery_On_Off;                             //!< [[-]] Battery Status 
    TBoolean bogPreheat_On_Off;                             //!< [[-]] Preheat Status 
    TBoolean bogSTOP_On_Off;                                //!< [[-]] STOP Status 
    TBoolean bogEngine_Faillure_On_Off;                     //!< [[-]] Engine Faillure Status 
    TBoolean bogMaintenance_On_Off;                         //!< [[-]] Maintenance Status 
    TBoolean bogOil_On_OFF;                                 //!< [[-]] Oil Status 
    TBoolean bogDeltaSectorDown;                            //!< [[-]] Delta Arm Sector Down 
    TBoolean bogArrowSectorDown;                            //!< [[-]] Arrow Sector Down 
    TBoolean bogPendularSectorDown;                         //!< [[-]] Pendular Sector Down 
    TBoolean bogDeltaArmInCenter;                           //!< [[-]] Delta Arm in Center 
    TBoolean bogArrowArmInCenter;                           //!< [[-]] Arrow Arm in Center 
    TBoolean bogPendularInCenter;                           //!< [[-]] gPendularInCenter 
    TBoolean bogBasketRotationInCenter;                     //!< [[-]] Basket Rotation in Center 
    TBoolean bogTelescopeInCenter;                          //!< [[-]] Telescope in Center 
    TBoolean bogBasketInclinaisonInCenter;                  //!< [[-]] Basket Inclinaison in Center 
    TBoolean bogDeltaArmMoveUpAllow;                        //!< [[-]] Delta Arm Move Up Allowed 
    TBoolean bogDeltaArmMoveDownAllow;                      //!< [[-]] Delta Arm Move Down Allowed 
    TBoolean bogArrowArmMoveUpAllow;                        //!< [[-]] Arrow Arm Move Up Allowed 
    TBoolean bogArrowArmMoveDownAllow;                      //!< [[-]] Arrow Arm Move Down Allowed 
    TBoolean bogPendularMoveUpAllow;                        //!< [[-]] Pendular Move Up Allowed 
    TBoolean bogPendularMoveDownAllow;                      //!< [[-]] Pendular Move Down Allowed 
    TBoolean bogTelescopeMoveOutAllow;                      //!< [[-]] Telescope Move Out Allowed 
    TBoolean bogTelescopeMoveInAllow;                       //!< [[-]] Telescope Move In Allowed 
    TBoolean bogTurretCntrClockWiseMoveAllow;               //!< [[-]] Turret Counter Clockwise Move Allowed 
    TBoolean bogTurretClockWiseMoveAllow;                   //!< [[-]] Turret Clockwise Move Allowed 
    TBoolean bogBasketRotCtClockWiseMoveAllow;              //!< [[-]] Basket Rotation Counter Clockwise Move Allow 
    TBoolean bogBasketRotClockWiseMoveAllow;                //!< [[-]] Basket Rotation Clockwise Move Allow 
    TBoolean bogBasketInclinaisonMoveUpAllow;               //!< [[-]] Basket Inclinaison Move Up Allow 
    TBoolean bogBasketIncliMoveDownAllow;                   //!< [[-]] Basket Inclinaison Move Down Allow 
    TBoolean bogOverloadSecurity;                           //!< [[-]] Basket Overload 
    TBoolean bogBasketStepClosed;                           //!< [[-]] Basket step closed 
    TBoolean bogSystemFault;                                //!< [[-]] System Fault 
    TBoolean bogBasketAccessLocked;                         //!< [[-]] Basket access locked 
    TBoolean bogMeasuringMastFault;                         //!< [[-]] Measuring Mast in Fault 
    TBoolean bogMeasuringMatOption;                         //!< [[-]] Measuring Mast Option 
    TBoolean bogSafeManSystem;                              //!< [[-]] Safe Man System 
    TBoolean bogEngineForcingMode;                          //!< [[-]] Engine in forcing mode 
    TBoolean bogEngineSilentMode;                           //!< [[-]] Engine in Silent mode 
    TBoolean bogTurretEncoderFault;                         //!< [[-]] Turret Encoder Fault 
    TBoolean bogSlopeSensorFault;                           //!< [[-]] Slope sensor fault 
    TUint8 u8gFuel;                                         //!< [[-]] new signal 
    TInt16 i16gelescopePositionValue;                       //!< [[-]] new signal 
} TCanSigRecMsg1C1SendToOpus;

extern TCanSigRecMsg1C1SendToOpus gCsr_tMsg1C1SendToOpus;

typedef struct
{
    TBoolean bogBattery_On_Off;                             //!< [[-]] Battery Status 
    TBoolean bogPreheat_On_Off;                             //!< [[-]] Preheat Status 
    TBoolean bogSTOP_On_Off;                                //!< [[-]] STOP Status 
    TBoolean bogEngine_Faillure_On_Off;                     //!< [[-]] Engine Faillure Status 
    TBoolean bogMaintenance_On_Off;                         //!< [[-]] Maintenance Status 
    TBoolean bogOil_On_OFF;                                 //!< [[-]] Oil Status 
    TBoolean bogDeltaSectorDown;                            //!< [[-]] Delta Arm Sector Down 
    TBoolean bogArrowSectorDown;                            //!< [[-]] Arrow Sector Down 
    TBoolean bogPendularSectorDown;                         //!< [[-]] Pendular Sector Down 
    TBoolean bogDeltaArmInCenter;                           //!< [[-]] Delta Arm in Center 
    TBoolean bogArrowArmInCenter;                           //!< [[-]] Arrow Arm in Center 
    TBoolean bogPendularInCenter;                           //!< [[-]] gPendularInCenter 
    TBoolean bogBasketRotationInCenter;                     //!< [[-]] Basket Rotation in Center 
    TBoolean bogTelescopeInCenter;                          //!< [[-]] Telescope in Center 
    TBoolean bogBasketInclinaisonInCenter;                  //!< [[-]] Basket Inclinaison in Center 
    TBoolean bogDeltaArmMoveUpAllow;                        //!< [[-]] Delta Arm Move Up Allowed 
    TBoolean bogDeltaArmMoveDownAllow;                      //!< [[-]] Delta Arm Move Down Allowed 
    TBoolean bogArrowArmMoveUpAllow;                        //!< [[-]] Arrow Arm Move Up Allowed 
    TBoolean bogArrowArmMoveDownAllow;                      //!< [[-]] Arrow Arm Move Down Allowed 
    TBoolean bogPendularMoveUpAllow;                        //!< [[-]] Pendular Move Up Allowed 
    TBoolean bogPendularMoveDownAllow;                      //!< [[-]] Pendular Move Down Allowed 
    TBoolean bogTelescopeMoveOutAllow;                      //!< [[-]] Telescope Move Out Allowed 
    TBoolean bogTelescopeMoveInAllow;                       //!< [[-]] Telescope Move In Allowed 
    TBoolean bogTurretCntrClockWiseMoveAllow;               //!< [[-]] Turret Counter Clockwise Move Allowed 
    TBoolean bogTurretClockWiseMoveAllow;                   //!< [[-]] Turret Clockwise Move Allowed 
    TBoolean bogBasketRotCtClockWiseMoveAllow;              //!< [[-]] Basket Rotation Counter Clockwise Move Allow 
    TBoolean bogBasketRotClockWiseMoveAllow;                //!< [[-]] Basket Rotation Clockwise Move Allow 
    TBoolean bogBasketInclinaisonMoveUpAllow;               //!< [[-]] Basket Inclinaison Move Up Allow 
    TBoolean bogBasketIncliMoveDownAllow;                   //!< [[-]] Basket Inclinaison Move Down Allow 
    TBoolean bogOverloadSecurity;                           //!< [[-]] Basket Overload 
    TBoolean bogBasketStepClosed;                           //!< [[-]] Basket step closed 
    TBoolean bogSystemFault;                                //!< [[-]] System Fault 
    TBoolean bogBasketAccessLocked;                         //!< [[-]] Basket access locked 
    TBoolean bogMeasuringMastFault;                         //!< [[-]] Measuring Mast in Fault 
    TBoolean bogMeasuringMatOption;                         //!< [[-]] Measuring Mast Option 
    TBoolean bogSafeManSystem;                              //!< [[-]] Safe Man System 
    TBoolean bogEngineForcingMode;                          //!< [[-]] Engine in forcing mode 
    TBoolean bogEngineSilentMode;                           //!< [[-]] Engine in Silent mode 
    TBoolean bogTurretEncoderFault;                         //!< [[-]] Turret Encoder Fault 
    TBoolean bogSlopeSensorFault;                           //!< [[-]] Slope sensor fault 
    TUint8 u8gFuel;                                         //!< [[-]] new signal 
    TInt16 i16gelescopePositionValue;                       //!< [[-]] new signal 
} TCanSigRecOldValMsg1C1SendToOpus;

typedef struct
{
    TCanSigRecInf     tCsrInfo_bogBattery_On_Off;
    TCanSigRecRng_bo  tCsrRng_bogBattery_On_Off;
    TCanSigRecInf     tCsrInfo_bogPreheat_On_Off;
    TCanSigRecRng_bo  tCsrRng_bogPreheat_On_Off;
    TCanSigRecInf     tCsrInfo_bogSTOP_On_Off;
    TCanSigRecRng_bo  tCsrRng_bogSTOP_On_Off;
    TCanSigRecInf     tCsrInfo_bogEngine_Faillure_On_Off;
    TCanSigRecRng_bo  tCsrRng_bogEngine_Faillure_On_Off;
    TCanSigRecInf     tCsrInfo_bogMaintenance_On_Off;
    TCanSigRecRng_bo  tCsrRng_bogMaintenance_On_Off;
    TCanSigRecInf     tCsrInfo_bogOil_On_OFF;
    TCanSigRecRng_bo  tCsrRng_bogOil_On_OFF;
    TCanSigRecInf     tCsrInfo_bogDeltaSectorDown;
    TCanSigRecRng_bo  tCsrRng_bogDeltaSectorDown;
    TCanSigRecInf     tCsrInfo_bogArrowSectorDown;
    TCanSigRecRng_bo  tCsrRng_bogArrowSectorDown;
    TCanSigRecInf     tCsrInfo_bogPendularSectorDown;
    TCanSigRecRng_bo  tCsrRng_bogPendularSectorDown;
    TCanSigRecInf     tCsrInfo_bogDeltaArmInCenter;
    TCanSigRecRng_bo  tCsrRng_bogDeltaArmInCenter;
    TCanSigRecInf     tCsrInfo_bogArrowArmInCenter;
    TCanSigRecRng_bo  tCsrRng_bogArrowArmInCenter;
    TCanSigRecInf     tCsrInfo_bogPendularInCenter;
    TCanSigRecRng_bo  tCsrRng_bogPendularInCenter;
    TCanSigRecInf     tCsrInfo_bogBasketRotationInCenter;
    TCanSigRecRng_bo  tCsrRng_bogBasketRotationInCenter;
    TCanSigRecInf     tCsrInfo_bogTelescopeInCenter;
    TCanSigRecRng_bo  tCsrRng_bogTelescopeInCenter;
    TCanSigRecInf     tCsrInfo_bogBasketInclinaisonInCenter;
    TCanSigRecRng_bo  tCsrRng_bogBasketInclinaisonInCenter;
    TCanSigRecInf     tCsrInfo_bogDeltaArmMoveUpAllow;
    TCanSigRecRng_bo  tCsrRng_bogDeltaArmMoveUpAllow;
    TCanSigRecInf     tCsrInfo_bogDeltaArmMoveDownAllow;
    TCanSigRecRng_bo  tCsrRng_bogDeltaArmMoveDownAllow;
    TCanSigRecInf     tCsrInfo_bogArrowArmMoveUpAllow;
    TCanSigRecRng_bo  tCsrRng_bogArrowArmMoveUpAllow;
    TCanSigRecInf     tCsrInfo_bogArrowArmMoveDownAllow;
    TCanSigRecRng_bo  tCsrRng_bogArrowArmMoveDownAllow;
    TCanSigRecInf     tCsrInfo_bogPendularMoveUpAllow;
    TCanSigRecRng_bo  tCsrRng_bogPendularMoveUpAllow;
    TCanSigRecInf     tCsrInfo_bogPendularMoveDownAllow;
    TCanSigRecRng_bo  tCsrRng_bogPendularMoveDownAllow;
    TCanSigRecInf     tCsrInfo_bogTelescopeMoveOutAllow;
    TCanSigRecRng_bo  tCsrRng_bogTelescopeMoveOutAllow;
    TCanSigRecInf     tCsrInfo_bogTelescopeMoveInAllow;
    TCanSigRecRng_bo  tCsrRng_bogTelescopeMoveInAllow;
    TCanSigRecInf     tCsrInfo_bogTurretCntrClockWiseMoveAllow;
    TCanSigRecRng_bo  tCsrRng_bogTurretCntrClockWiseMoveAllow;
    TCanSigRecInf     tCsrInfo_bogTurretClockWiseMoveAllow;
    TCanSigRecRng_bo  tCsrRng_bogTurretClockWiseMoveAllow;
    TCanSigRecInf     tCsrInfo_bogBasketRotCtClockWiseMoveAllow;
    TCanSigRecRng_bo  tCsrRng_bogBasketRotCtClockWiseMoveAllow;
    TCanSigRecInf     tCsrInfo_bogBasketRotClockWiseMoveAllow;
    TCanSigRecRng_bo  tCsrRng_bogBasketRotClockWiseMoveAllow;
    TCanSigRecInf     tCsrInfo_bogBasketInclinaisonMoveUpAllow;
    TCanSigRecRng_bo  tCsrRng_bogBasketInclinaisonMoveUpAllow;
    TCanSigRecInf     tCsrInfo_bogBasketIncliMoveDownAllow;
    TCanSigRecRng_bo  tCsrRng_bogBasketIncliMoveDownAllow;
    TCanSigRecInf     tCsrInfo_bogOverloadSecurity;
    TCanSigRecRng_bo  tCsrRng_bogOverloadSecurity;
    TCanSigRecInf     tCsrInfo_bogBasketStepClosed;
    TCanSigRecRng_bo  tCsrRng_bogBasketStepClosed;
    TCanSigRecInf     tCsrInfo_bogSystemFault;
    TCanSigRecRng_bo  tCsrRng_bogSystemFault;
    TCanSigRecInf     tCsrInfo_bogBasketAccessLocked;
    TCanSigRecRng_bo  tCsrRng_bogBasketAccessLocked;
    TCanSigRecInf     tCsrInfo_bogMeasuringMastFault;
    TCanSigRecRng_bo  tCsrRng_bogMeasuringMastFault;
    TCanSigRecInf     tCsrInfo_bogMeasuringMatOption;
    TCanSigRecRng_bo  tCsrRng_bogMeasuringMatOption;
    TCanSigRecInf     tCsrInfo_bogSafeManSystem;
    TCanSigRecRng_bo  tCsrRng_bogSafeManSystem;
    TCanSigRecInf     tCsrInfo_bogEngineForcingMode;
    TCanSigRecRng_bo  tCsrRng_bogEngineForcingMode;
    TCanSigRecInf     tCsrInfo_bogEngineSilentMode;
    TCanSigRecRng_bo  tCsrRng_bogEngineSilentMode;
    TCanSigRecInf     tCsrInfo_bogTurretEncoderFault;
    TCanSigRecRng_bo  tCsrRng_bogTurretEncoderFault;
    TCanSigRecInf     tCsrInfo_bogSlopeSensorFault;
    TCanSigRecRng_bo  tCsrRng_bogSlopeSensorFault;
    TCanSigRecInf     tCsrInfo_u8gFuel;
    TCanSigRecRng_u8  tCsrRng_u8gFuel;
    TCanSigRecInf     tCsrInfo_i16gelescopePositionValue;
    TCanSigRecRng_i16 tCsrRng_i16gelescopePositionValue;
} TCanSigRecVal_Msg1C1SendToOpus;

typedef struct
{
    const TCanSigRecRoot *cptRoot;                          //!< [POI] Root connection
    TInt16 i16DebugDeltaArmAngle;                           //!< [[-]] new signal 
    TInt16 i16DebugArrowArmAngle;                           //!< [[-]] new signal 
    TInt16 i16DebugTelescopePosition;                       //!< [[-]] new signal 
    TInt16 i16DebugVehicleSlope;                            //!< [[-]] new signal 
} TCanSigRecMsg3C1SendToOpus;

extern TCanSigRecMsg3C1SendToOpus gCsr_tMsg3C1SendToOpus;

typedef struct
{
    TInt16 i16DebugDeltaArmAngle;                           //!< [[-]] new signal 
    TInt16 i16DebugArrowArmAngle;                           //!< [[-]] new signal 
    TInt16 i16DebugTelescopePosition;                       //!< [[-]] new signal 
    TInt16 i16DebugVehicleSlope;                            //!< [[-]] new signal 
} TCanSigRecOldValMsg3C1SendToOpus;

typedef struct
{
    TCanSigRecInf     tCsrInfo_i16DebugDeltaArmAngle;
    TCanSigRecRng_i16 tCsrRng_i16DebugDeltaArmAngle;
    TCanSigRecInf     tCsrInfo_i16DebugArrowArmAngle;
    TCanSigRecRng_i16 tCsrRng_i16DebugArrowArmAngle;
    TCanSigRecInf     tCsrInfo_i16DebugTelescopePosition;
    TCanSigRecRng_i16 tCsrRng_i16DebugTelescopePosition;
    TCanSigRecInf     tCsrInfo_i16DebugVehicleSlope;
    TCanSigRecRng_i16 tCsrRng_i16DebugVehicleSlope;
} TCanSigRecVal_Msg3C1SendToOpus;

typedef struct
{
    const TCanSigRecRoot *cptRoot;                          //!< [POI] Root connection
    TBoolean boPin230Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin243Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin244Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin245Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin256Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin257Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin258Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin103Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin127Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin104Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin128Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin105Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin129Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin106Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin130Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin107Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin131Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin108Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin132Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin109Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin133Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin110Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin134Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin111Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin135Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin112Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin136Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin113Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin137Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin114Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin138Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin115Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin139Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin116Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin140Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin117Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin141Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin122Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin146Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin123Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin147Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin124Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin148Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin153Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin177Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin156Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin180Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin159Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin183Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin186Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin162Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin189Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin165Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin192Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin168Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin195Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin171Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin154Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin178Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin157Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin181Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin160Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin184Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin187Fault;                                 //!< [[-]] for the Neotec diag pages 
} TCanSigRecMsg5C1SendToOpus;

extern TCanSigRecMsg5C1SendToOpus gCsr_tMsg5C1SendToOpus;

typedef struct
{
    TBoolean boPin230Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin243Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin244Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin245Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin256Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin257Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin258Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin103Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin127Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin104Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin128Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin105Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin129Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin106Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin130Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin107Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin131Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin108Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin132Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin109Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin133Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin110Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin134Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin111Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin135Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin112Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin136Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin113Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin137Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin114Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin138Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin115Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin139Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin116Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin140Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin117Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin141Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin122Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin146Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin123Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin147Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin124Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin148Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin153Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin177Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin156Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin180Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin159Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin183Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin186Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin162Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin189Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin165Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin192Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin168Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin195Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin171Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin154Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin178Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin157Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin181Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin160Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin184Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin187Fault;                                 //!< [[-]] for the Neotec diag pages 
} TCanSigRecOldValMsg5C1SendToOpus;

typedef struct
{
    TCanSigRecInf     tCsrInfo_boPin230Fault;
    TCanSigRecRng_bo  tCsrRng_boPin230Fault;
    TCanSigRecInf     tCsrInfo_boPin243Fault;
    TCanSigRecRng_bo  tCsrRng_boPin243Fault;
    TCanSigRecInf     tCsrInfo_boPin244Fault;
    TCanSigRecRng_bo  tCsrRng_boPin244Fault;
    TCanSigRecInf     tCsrInfo_boPin245Fault;
    TCanSigRecRng_bo  tCsrRng_boPin245Fault;
    TCanSigRecInf     tCsrInfo_boPin256Fault;
    TCanSigRecRng_bo  tCsrRng_boPin256Fault;
    TCanSigRecInf     tCsrInfo_boPin257Fault;
    TCanSigRecRng_bo  tCsrRng_boPin257Fault;
    TCanSigRecInf     tCsrInfo_boPin258Fault;
    TCanSigRecRng_bo  tCsrRng_boPin258Fault;
    TCanSigRecInf     tCsrInfo_boPin103Fault;
    TCanSigRecRng_bo  tCsrRng_boPin103Fault;
    TCanSigRecInf     tCsrInfo_boPin127Fault;
    TCanSigRecRng_bo  tCsrRng_boPin127Fault;
    TCanSigRecInf     tCsrInfo_boPin104Fault;
    TCanSigRecRng_bo  tCsrRng_boPin104Fault;
    TCanSigRecInf     tCsrInfo_boPin128Fault;
    TCanSigRecRng_bo  tCsrRng_boPin128Fault;
    TCanSigRecInf     tCsrInfo_boPin105Fault;
    TCanSigRecRng_bo  tCsrRng_boPin105Fault;
    TCanSigRecInf     tCsrInfo_boPin129Fault;
    TCanSigRecRng_bo  tCsrRng_boPin129Fault;
    TCanSigRecInf     tCsrInfo_boPin106Fault;
    TCanSigRecRng_bo  tCsrRng_boPin106Fault;
    TCanSigRecInf     tCsrInfo_boPin130Fault;
    TCanSigRecRng_bo  tCsrRng_boPin130Fault;
    TCanSigRecInf     tCsrInfo_boPin107Fault;
    TCanSigRecRng_bo  tCsrRng_boPin107Fault;
    TCanSigRecInf     tCsrInfo_boPin131Fault;
    TCanSigRecRng_bo  tCsrRng_boPin131Fault;
    TCanSigRecInf     tCsrInfo_boPin108Fault;
    TCanSigRecRng_bo  tCsrRng_boPin108Fault;
    TCanSigRecInf     tCsrInfo_boPin132Fault;
    TCanSigRecRng_bo  tCsrRng_boPin132Fault;
    TCanSigRecInf     tCsrInfo_boPin109Fault;
    TCanSigRecRng_bo  tCsrRng_boPin109Fault;
    TCanSigRecInf     tCsrInfo_boPin133Fault;
    TCanSigRecRng_bo  tCsrRng_boPin133Fault;
    TCanSigRecInf     tCsrInfo_boPin110Fault;
    TCanSigRecRng_bo  tCsrRng_boPin110Fault;
    TCanSigRecInf     tCsrInfo_boPin134Fault;
    TCanSigRecRng_bo  tCsrRng_boPin134Fault;
    TCanSigRecInf     tCsrInfo_boPin111Fault;
    TCanSigRecRng_bo  tCsrRng_boPin111Fault;
    TCanSigRecInf     tCsrInfo_boPin135Fault;
    TCanSigRecRng_bo  tCsrRng_boPin135Fault;
    TCanSigRecInf     tCsrInfo_boPin112Fault;
    TCanSigRecRng_bo  tCsrRng_boPin112Fault;
    TCanSigRecInf     tCsrInfo_boPin136Fault;
    TCanSigRecRng_bo  tCsrRng_boPin136Fault;
    TCanSigRecInf     tCsrInfo_boPin113Fault;
    TCanSigRecRng_bo  tCsrRng_boPin113Fault;
    TCanSigRecInf     tCsrInfo_boPin137Fault;
    TCanSigRecRng_bo  tCsrRng_boPin137Fault;
    TCanSigRecInf     tCsrInfo_boPin114Fault;
    TCanSigRecRng_bo  tCsrRng_boPin114Fault;
    TCanSigRecInf     tCsrInfo_boPin138Fault;
    TCanSigRecRng_bo  tCsrRng_boPin138Fault;
    TCanSigRecInf     tCsrInfo_boPin115Fault;
    TCanSigRecRng_bo  tCsrRng_boPin115Fault;
    TCanSigRecInf     tCsrInfo_boPin139Fault;
    TCanSigRecRng_bo  tCsrRng_boPin139Fault;
    TCanSigRecInf     tCsrInfo_boPin116Fault;
    TCanSigRecRng_bo  tCsrRng_boPin116Fault;
    TCanSigRecInf     tCsrInfo_boPin140Fault;
    TCanSigRecRng_bo  tCsrRng_boPin140Fault;
    TCanSigRecInf     tCsrInfo_boPin117Fault;
    TCanSigRecRng_bo  tCsrRng_boPin117Fault;
    TCanSigRecInf     tCsrInfo_boPin141Fault;
    TCanSigRecRng_bo  tCsrRng_boPin141Fault;
    TCanSigRecInf     tCsrInfo_boPin122Fault;
    TCanSigRecRng_bo  tCsrRng_boPin122Fault;
    TCanSigRecInf     tCsrInfo_boPin146Fault;
    TCanSigRecRng_bo  tCsrRng_boPin146Fault;
    TCanSigRecInf     tCsrInfo_boPin123Fault;
    TCanSigRecRng_bo  tCsrRng_boPin123Fault;
    TCanSigRecInf     tCsrInfo_boPin147Fault;
    TCanSigRecRng_bo  tCsrRng_boPin147Fault;
    TCanSigRecInf     tCsrInfo_boPin124Fault;
    TCanSigRecRng_bo  tCsrRng_boPin124Fault;
    TCanSigRecInf     tCsrInfo_boPin148Fault;
    TCanSigRecRng_bo  tCsrRng_boPin148Fault;
    TCanSigRecInf     tCsrInfo_boPin153Fault;
    TCanSigRecRng_bo  tCsrRng_boPin153Fault;
    TCanSigRecInf     tCsrInfo_boPin177Fault;
    TCanSigRecRng_bo  tCsrRng_boPin177Fault;
    TCanSigRecInf     tCsrInfo_boPin156Fault;
    TCanSigRecRng_bo  tCsrRng_boPin156Fault;
    TCanSigRecInf     tCsrInfo_boPin180Fault;
    TCanSigRecRng_bo  tCsrRng_boPin180Fault;
    TCanSigRecInf     tCsrInfo_boPin159Fault;
    TCanSigRecRng_bo  tCsrRng_boPin159Fault;
    TCanSigRecInf     tCsrInfo_boPin183Fault;
    TCanSigRecRng_bo  tCsrRng_boPin183Fault;
    TCanSigRecInf     tCsrInfo_boPin186Fault;
    TCanSigRecRng_bo  tCsrRng_boPin186Fault;
    TCanSigRecInf     tCsrInfo_boPin162Fault;
    TCanSigRecRng_bo  tCsrRng_boPin162Fault;
    TCanSigRecInf     tCsrInfo_boPin189Fault;
    TCanSigRecRng_bo  tCsrRng_boPin189Fault;
    TCanSigRecInf     tCsrInfo_boPin165Fault;
    TCanSigRecRng_bo  tCsrRng_boPin165Fault;
    TCanSigRecInf     tCsrInfo_boPin192Fault;
    TCanSigRecRng_bo  tCsrRng_boPin192Fault;
    TCanSigRecInf     tCsrInfo_boPin168Fault;
    TCanSigRecRng_bo  tCsrRng_boPin168Fault;
    TCanSigRecInf     tCsrInfo_boPin195Fault;
    TCanSigRecRng_bo  tCsrRng_boPin195Fault;
    TCanSigRecInf     tCsrInfo_boPin171Fault;
    TCanSigRecRng_bo  tCsrRng_boPin171Fault;
    TCanSigRecInf     tCsrInfo_boPin154Fault;
    TCanSigRecRng_bo  tCsrRng_boPin154Fault;
    TCanSigRecInf     tCsrInfo_boPin178Fault;
    TCanSigRecRng_bo  tCsrRng_boPin178Fault;
    TCanSigRecInf     tCsrInfo_boPin157Fault;
    TCanSigRecRng_bo  tCsrRng_boPin157Fault;
    TCanSigRecInf     tCsrInfo_boPin181Fault;
    TCanSigRecRng_bo  tCsrRng_boPin181Fault;
    TCanSigRecInf     tCsrInfo_boPin160Fault;
    TCanSigRecRng_bo  tCsrRng_boPin160Fault;
    TCanSigRecInf     tCsrInfo_boPin184Fault;
    TCanSigRecRng_bo  tCsrRng_boPin184Fault;
    TCanSigRecInf     tCsrInfo_boPin187Fault;
    TCanSigRecRng_bo  tCsrRng_boPin187Fault;
} TCanSigRecVal_Msg5C1SendToOpus;

typedef struct
{
    const TCanSigRecRoot *cptRoot;                          //!< [POI] Root connection
    TUint16 u16gPvgDeltaArmVoltage;                         //!< [[-]] new signal 
    TUint16 u16gPvgArrowArmVoltage;                         //!< [[-]] new signal 
    TUint16 u16gPvgTelescopeArmVoltage;                     //!< [[-]] new signal 
    TUint16 u16gPvgEvTorVoltage;                            //!< [[-]] new signal 
} TCanSigRecMsg7C1SendToOpus;

extern TCanSigRecMsg7C1SendToOpus gCsr_tMsg7C1SendToOpus;

typedef struct
{
    TUint16 u16gPvgDeltaArmVoltage;                         //!< [[-]] new signal 
    TUint16 u16gPvgArrowArmVoltage;                         //!< [[-]] new signal 
    TUint16 u16gPvgTelescopeArmVoltage;                     //!< [[-]] new signal 
    TUint16 u16gPvgEvTorVoltage;                            //!< [[-]] new signal 
} TCanSigRecOldValMsg7C1SendToOpus;

typedef struct
{
    TCanSigRecInf     tCsrInfo_u16gPvgDeltaArmVoltage;
    TCanSigRecRng_u16 tCsrRng_u16gPvgDeltaArmVoltage;
    TCanSigRecInf     tCsrInfo_u16gPvgArrowArmVoltage;
    TCanSigRecRng_u16 tCsrRng_u16gPvgArrowArmVoltage;
    TCanSigRecInf     tCsrInfo_u16gPvgTelescopeArmVoltage;
    TCanSigRecRng_u16 tCsrRng_u16gPvgTelescopeArmVoltage;
    TCanSigRecInf     tCsrInfo_u16gPvgEvTorVoltage;
    TCanSigRecRng_u16 tCsrRng_u16gPvgEvTorVoltage;
} TCanSigRecVal_Msg7C1SendToOpus;

typedef struct
{
    const TCanSigRecRoot *cptRoot;                          //!< [POI] Root connection
    TUint16 u16RotationTurretAxisJoystick;                  //!< [[-]] new signal 
    TUint16 u16RearmementSafetyManSystem;                   //!< [[-]] new signal 
    TUint16 u16AbutementNacelleTrackSide;                   //!< [[-]] new signal 
    TUint16 u16AbutementNacelleCenteredSide;                //!< [[-]] new signal 
} TCanSigRecPDO4_48XS;

extern TCanSigRecPDO4_48XS gCsr_tPDO4_48XS;

typedef struct
{
    TUint16 u16RotationTurretAxisJoystick;                  //!< [[-]] new signal 
    TUint16 u16RearmementSafetyManSystem;                   //!< [[-]] new signal 
    TUint16 u16AbutementNacelleTrackSide;                   //!< [[-]] new signal 
    TUint16 u16AbutementNacelleCenteredSide;                //!< [[-]] new signal 
} TCanSigRecOldValPDO4_48XS;

typedef struct
{
    TCanSigRecInf     tCsrInfo_u16RotationTurretAxisJoystick;
    TCanSigRecRng_u16 tCsrRng_u16RotationTurretAxisJoystick;
    TCanSigRecInf     tCsrInfo_u16RearmementSafetyManSystem;
    TCanSigRecRng_u16 tCsrRng_u16RearmementSafetyManSystem;
    TCanSigRecInf     tCsrInfo_u16AbutementNacelleTrackSide;
    TCanSigRecRng_u16 tCsrRng_u16AbutementNacelleTrackSide;
    TCanSigRecInf     tCsrInfo_u16AbutementNacelleCenteredSide;
    TCanSigRecRng_u16 tCsrRng_u16AbutementNacelleCenteredSide;
} TCanSigRecVal_PDO4_48XS;

typedef struct
{
    const TCanSigRecRoot *cptRoot;                          //!< [POI] Root connection
    TUint16 u16gBatteryVoltageMv;                           //!< [[-]] Fuel in Litter 
    TUint16 u16gEngineRPM;                                  //!< [[-]] Battery Voltage mV 
    TInt16 i16gDeltaArmAngleValue;                          //!< [[-]] new signal 
    TInt16 i16gArrowArmAngleValue;                          //!< [[-]] new signal 
} TCanSigRecMsg2C1SendToOpus;

extern TCanSigRecMsg2C1SendToOpus gCsr_tMsg2C1SendToOpus;

typedef struct
{
    TUint16 u16gBatteryVoltageMv;                           //!< [[-]] Fuel in Litter 
    TUint16 u16gEngineRPM;                                  //!< [[-]] Battery Voltage mV 
    TInt16 i16gDeltaArmAngleValue;                          //!< [[-]] new signal 
    TInt16 i16gArrowArmAngleValue;                          //!< [[-]] new signal 
} TCanSigRecOldValMsg2C1SendToOpus;

typedef struct
{
    TCanSigRecInf     tCsrInfo_u16gBatteryVoltageMv;
    TCanSigRecRng_u16 tCsrRng_u16gBatteryVoltageMv;
    TCanSigRecInf     tCsrInfo_u16gEngineRPM;
    TCanSigRecRng_u16 tCsrRng_u16gEngineRPM;
    TCanSigRecInf     tCsrInfo_i16gDeltaArmAngleValue;
    TCanSigRecRng_i16 tCsrRng_i16gDeltaArmAngleValue;
    TCanSigRecInf     tCsrInfo_i16gArrowArmAngleValue;
    TCanSigRecRng_i16 tCsrRng_i16gArrowArmAngleValue;
} TCanSigRecVal_Msg2C1SendToOpus;

typedef struct
{
    const TCanSigRecRoot *cptRoot;                          //!< [POI] Root connection
    TUint8 u8gElementSelected;                              //!< [[-]] Element Selected 1=Telescope; 2=Arrow arm; 3=Delta arm; 4=Turret 
    TBoolean boPin107;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin131;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin108;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin132;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin109;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin133;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin110;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin134;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin111;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin135;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin112;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin136;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin113;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin137;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin114;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin138;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin140;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin117;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin141;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin124;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin148;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin153;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin177;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin159;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin183;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin154;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin178;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin157;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin181;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin160;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin184;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin187;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin163;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin149;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin173;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin152;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin176;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin155;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin179;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin158;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin182;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin251;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin186;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin239;                                      //!< [[-]] for the Neotec diag pages 
} TCanSigRecMsg4C1SendToOpus;

extern TCanSigRecMsg4C1SendToOpus gCsr_tMsg4C1SendToOpus;

typedef struct
{
    TUint8 u8gElementSelected;                              //!< [[-]] Element Selected 1=Telescope; 2=Arrow arm; 3=Delta arm; 4=Turret 
    TBoolean boPin107;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin131;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin108;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin132;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin109;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin133;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin110;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin134;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin111;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin135;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin112;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin136;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin113;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin137;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin114;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin138;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin140;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin117;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin141;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin124;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin148;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin153;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin177;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin159;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin183;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin154;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin178;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin157;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin181;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin160;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin184;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin187;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin163;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin149;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin173;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin152;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin176;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin155;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin179;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin158;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin182;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin251;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin186;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin239;                                      //!< [[-]] for the Neotec diag pages 
} TCanSigRecOldValMsg4C1SendToOpus;

typedef struct
{
    TCanSigRecInf     tCsrInfo_u8gElementSelected;
    TCanSigRecRng_u8  tCsrRng_u8gElementSelected;
    TCanSigRecInf     tCsrInfo_boPin107;
    TCanSigRecRng_bo  tCsrRng_boPin107;
    TCanSigRecInf     tCsrInfo_boPin131;
    TCanSigRecRng_bo  tCsrRng_boPin131;
    TCanSigRecInf     tCsrInfo_boPin108;
    TCanSigRecRng_bo  tCsrRng_boPin108;
    TCanSigRecInf     tCsrInfo_boPin132;
    TCanSigRecRng_bo  tCsrRng_boPin132;
    TCanSigRecInf     tCsrInfo_boPin109;
    TCanSigRecRng_bo  tCsrRng_boPin109;
    TCanSigRecInf     tCsrInfo_boPin133;
    TCanSigRecRng_bo  tCsrRng_boPin133;
    TCanSigRecInf     tCsrInfo_boPin110;
    TCanSigRecRng_bo  tCsrRng_boPin110;
    TCanSigRecInf     tCsrInfo_boPin134;
    TCanSigRecRng_bo  tCsrRng_boPin134;
    TCanSigRecInf     tCsrInfo_boPin111;
    TCanSigRecRng_bo  tCsrRng_boPin111;
    TCanSigRecInf     tCsrInfo_boPin135;
    TCanSigRecRng_bo  tCsrRng_boPin135;
    TCanSigRecInf     tCsrInfo_boPin112;
    TCanSigRecRng_bo  tCsrRng_boPin112;
    TCanSigRecInf     tCsrInfo_boPin136;
    TCanSigRecRng_bo  tCsrRng_boPin136;
    TCanSigRecInf     tCsrInfo_boPin113;
    TCanSigRecRng_bo  tCsrRng_boPin113;
    TCanSigRecInf     tCsrInfo_boPin137;
    TCanSigRecRng_bo  tCsrRng_boPin137;
    TCanSigRecInf     tCsrInfo_boPin114;
    TCanSigRecRng_bo  tCsrRng_boPin114;
    TCanSigRecInf     tCsrInfo_boPin138;
    TCanSigRecRng_bo  tCsrRng_boPin138;
    TCanSigRecInf     tCsrInfo_boPin140;
    TCanSigRecRng_bo  tCsrRng_boPin140;
    TCanSigRecInf     tCsrInfo_boPin117;
    TCanSigRecRng_bo  tCsrRng_boPin117;
    TCanSigRecInf     tCsrInfo_boPin141;
    TCanSigRecRng_bo  tCsrRng_boPin141;
    TCanSigRecInf     tCsrInfo_boPin124;
    TCanSigRecRng_bo  tCsrRng_boPin124;
    TCanSigRecInf     tCsrInfo_boPin148;
    TCanSigRecRng_bo  tCsrRng_boPin148;
    TCanSigRecInf     tCsrInfo_boPin153;
    TCanSigRecRng_bo  tCsrRng_boPin153;
    TCanSigRecInf     tCsrInfo_boPin177;
    TCanSigRecRng_bo  tCsrRng_boPin177;
    TCanSigRecInf     tCsrInfo_boPin159;
    TCanSigRecRng_bo  tCsrRng_boPin159;
    TCanSigRecInf     tCsrInfo_boPin183;
    TCanSigRecRng_bo  tCsrRng_boPin183;
    TCanSigRecInf     tCsrInfo_boPin154;
    TCanSigRecRng_bo  tCsrRng_boPin154;
    TCanSigRecInf     tCsrInfo_boPin178;
    TCanSigRecRng_bo  tCsrRng_boPin178;
    TCanSigRecInf     tCsrInfo_boPin157;
    TCanSigRecRng_bo  tCsrRng_boPin157;
    TCanSigRecInf     tCsrInfo_boPin181;
    TCanSigRecRng_bo  tCsrRng_boPin181;
    TCanSigRecInf     tCsrInfo_boPin160;
    TCanSigRecRng_bo  tCsrRng_boPin160;
    TCanSigRecInf     tCsrInfo_boPin184;
    TCanSigRecRng_bo  tCsrRng_boPin184;
    TCanSigRecInf     tCsrInfo_boPin187;
    TCanSigRecRng_bo  tCsrRng_boPin187;
    TCanSigRecInf     tCsrInfo_boPin163;
    TCanSigRecRng_bo  tCsrRng_boPin163;
    TCanSigRecInf     tCsrInfo_boPin149;
    TCanSigRecRng_bo  tCsrRng_boPin149;
    TCanSigRecInf     tCsrInfo_boPin173;
    TCanSigRecRng_bo  tCsrRng_boPin173;
    TCanSigRecInf     tCsrInfo_boPin152;
    TCanSigRecRng_bo  tCsrRng_boPin152;
    TCanSigRecInf     tCsrInfo_boPin176;
    TCanSigRecRng_bo  tCsrRng_boPin176;
    TCanSigRecInf     tCsrInfo_boPin155;
    TCanSigRecRng_bo  tCsrRng_boPin155;
    TCanSigRecInf     tCsrInfo_boPin179;
    TCanSigRecRng_bo  tCsrRng_boPin179;
    TCanSigRecInf     tCsrInfo_boPin158;
    TCanSigRecRng_bo  tCsrRng_boPin158;
    TCanSigRecInf     tCsrInfo_boPin182;
    TCanSigRecRng_bo  tCsrRng_boPin182;
    TCanSigRecInf     tCsrInfo_boPin251;
    TCanSigRecRng_bo  tCsrRng_boPin251;
    TCanSigRecInf     tCsrInfo_boPin186;
    TCanSigRecRng_bo  tCsrRng_boPin186;
    TCanSigRecInf     tCsrInfo_boPin239;
    TCanSigRecRng_bo  tCsrRng_boPin239;
} TCanSigRecVal_Msg4C1SendToOpus;

typedef struct
{
    const TCanSigRecRoot *cptRoot;                          //!< [POI] Root connection
    TBoolean boPin163Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin190Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin166Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin193Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin169Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin196Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin172Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin101Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin125Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin150Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin174Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin102Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin126Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin151Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin175Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin149Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin173Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin152Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin176Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin155Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin179Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin158Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin182Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin251Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin238Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin252Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin239Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin253Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin240Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin254Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin241Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin161Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin185Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin188Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin164Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin191Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin167Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin194Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin170Fault;                                 //!< [[-]] for the Neotec diag pages 
    TInt16 i16gBypassPressureSensorValue;                   //!< [[-]] new signal 
} TCanSigRecMsg6C1SendToOpus;

extern TCanSigRecMsg6C1SendToOpus gCsr_tMsg6C1SendToOpus;

typedef struct
{
    TBoolean boPin163Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin190Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin166Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin193Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin169Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin196Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin172Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin101Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin125Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin150Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin174Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin102Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin126Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin151Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin175Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin149Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin173Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin152Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin176Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin155Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin179Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin158Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin182Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin251Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin238Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin252Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin239Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin253Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin240Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin254Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin241Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin161Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin185Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin188Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin164Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin191Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin167Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin194Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin170Fault;                                 //!< [[-]] for the Neotec diag pages 
    TInt16 i16gBypassPressureSensorValue;                   //!< [[-]] new signal 
} TCanSigRecOldValMsg6C1SendToOpus;

typedef struct
{
    TCanSigRecInf     tCsrInfo_boPin163Fault;
    TCanSigRecRng_bo  tCsrRng_boPin163Fault;
    TCanSigRecInf     tCsrInfo_boPin190Fault;
    TCanSigRecRng_bo  tCsrRng_boPin190Fault;
    TCanSigRecInf     tCsrInfo_boPin166Fault;
    TCanSigRecRng_bo  tCsrRng_boPin166Fault;
    TCanSigRecInf     tCsrInfo_boPin193Fault;
    TCanSigRecRng_bo  tCsrRng_boPin193Fault;
    TCanSigRecInf     tCsrInfo_boPin169Fault;
    TCanSigRecRng_bo  tCsrRng_boPin169Fault;
    TCanSigRecInf     tCsrInfo_boPin196Fault;
    TCanSigRecRng_bo  tCsrRng_boPin196Fault;
    TCanSigRecInf     tCsrInfo_boPin172Fault;
    TCanSigRecRng_bo  tCsrRng_boPin172Fault;
    TCanSigRecInf     tCsrInfo_boPin101Fault;
    TCanSigRecRng_bo  tCsrRng_boPin101Fault;
    TCanSigRecInf     tCsrInfo_boPin125Fault;
    TCanSigRecRng_bo  tCsrRng_boPin125Fault;
    TCanSigRecInf     tCsrInfo_boPin150Fault;
    TCanSigRecRng_bo  tCsrRng_boPin150Fault;
    TCanSigRecInf     tCsrInfo_boPin174Fault;
    TCanSigRecRng_bo  tCsrRng_boPin174Fault;
    TCanSigRecInf     tCsrInfo_boPin102Fault;
    TCanSigRecRng_bo  tCsrRng_boPin102Fault;
    TCanSigRecInf     tCsrInfo_boPin126Fault;
    TCanSigRecRng_bo  tCsrRng_boPin126Fault;
    TCanSigRecInf     tCsrInfo_boPin151Fault;
    TCanSigRecRng_bo  tCsrRng_boPin151Fault;
    TCanSigRecInf     tCsrInfo_boPin175Fault;
    TCanSigRecRng_bo  tCsrRng_boPin175Fault;
    TCanSigRecInf     tCsrInfo_boPin149Fault;
    TCanSigRecRng_bo  tCsrRng_boPin149Fault;
    TCanSigRecInf     tCsrInfo_boPin173Fault;
    TCanSigRecRng_bo  tCsrRng_boPin173Fault;
    TCanSigRecInf     tCsrInfo_boPin152Fault;
    TCanSigRecRng_bo  tCsrRng_boPin152Fault;
    TCanSigRecInf     tCsrInfo_boPin176Fault;
    TCanSigRecRng_bo  tCsrRng_boPin176Fault;
    TCanSigRecInf     tCsrInfo_boPin155Fault;
    TCanSigRecRng_bo  tCsrRng_boPin155Fault;
    TCanSigRecInf     tCsrInfo_boPin179Fault;
    TCanSigRecRng_bo  tCsrRng_boPin179Fault;
    TCanSigRecInf     tCsrInfo_boPin158Fault;
    TCanSigRecRng_bo  tCsrRng_boPin158Fault;
    TCanSigRecInf     tCsrInfo_boPin182Fault;
    TCanSigRecRng_bo  tCsrRng_boPin182Fault;
    TCanSigRecInf     tCsrInfo_boPin251Fault;
    TCanSigRecRng_bo  tCsrRng_boPin251Fault;
    TCanSigRecInf     tCsrInfo_boPin238Fault;
    TCanSigRecRng_bo  tCsrRng_boPin238Fault;
    TCanSigRecInf     tCsrInfo_boPin252Fault;
    TCanSigRecRng_bo  tCsrRng_boPin252Fault;
    TCanSigRecInf     tCsrInfo_boPin239Fault;
    TCanSigRecRng_bo  tCsrRng_boPin239Fault;
    TCanSigRecInf     tCsrInfo_boPin253Fault;
    TCanSigRecRng_bo  tCsrRng_boPin253Fault;
    TCanSigRecInf     tCsrInfo_boPin240Fault;
    TCanSigRecRng_bo  tCsrRng_boPin240Fault;
    TCanSigRecInf     tCsrInfo_boPin254Fault;
    TCanSigRecRng_bo  tCsrRng_boPin254Fault;
    TCanSigRecInf     tCsrInfo_boPin241Fault;
    TCanSigRecRng_bo  tCsrRng_boPin241Fault;
    TCanSigRecInf     tCsrInfo_boPin161Fault;
    TCanSigRecRng_bo  tCsrRng_boPin161Fault;
    TCanSigRecInf     tCsrInfo_boPin185Fault;
    TCanSigRecRng_bo  tCsrRng_boPin185Fault;
    TCanSigRecInf     tCsrInfo_boPin188Fault;
    TCanSigRecRng_bo  tCsrRng_boPin188Fault;
    TCanSigRecInf     tCsrInfo_boPin164Fault;
    TCanSigRecRng_bo  tCsrRng_boPin164Fault;
    TCanSigRecInf     tCsrInfo_boPin191Fault;
    TCanSigRecRng_bo  tCsrRng_boPin191Fault;
    TCanSigRecInf     tCsrInfo_boPin167Fault;
    TCanSigRecRng_bo  tCsrRng_boPin167Fault;
    TCanSigRecInf     tCsrInfo_boPin194Fault;
    TCanSigRecRng_bo  tCsrRng_boPin194Fault;
    TCanSigRecInf     tCsrInfo_boPin170Fault;
    TCanSigRecRng_bo  tCsrRng_boPin170Fault;
    TCanSigRecInf     tCsrInfo_i16gBypassPressureSensorValue;
    TCanSigRecRng_i16 tCsrRng_i16gBypassPressureSensorValue;
} TCanSigRecVal_Msg6C1SendToOpus;

typedef struct
{
    const TCanSigRecRoot *cptRoot;                          //!< [POI] Root connection
    TUint8 u8gTTC510Version_Major;                          //!< [[-]] Program Version Major C1 TTC510 
    TUint8 u8gTTC510Version_Minor;                          //!< [[-]] Program Version Minor C1 TTC510 
    TUint8 u8gTTC510Version_Patch;                          //!< [[-]] Program Version Patch C1 TTC510 
    TUint8 u8gTTC510Version_Custom;                         //!< [[-]] Program Version Custom C1 TTC510 
    TUint8 u8gTTC48XSVersion_Major;                         //!< [[-]] Program Version Major TTC48XS 
    TUint8 u8gTTC48XSVersion_Minor;                         //!< [[-]] Program Version Minor TTC48XS 
    TUint8 u8gTTC48XSVersion_Patch;                         //!< [[-]] Program Version Patch TTC48XS 
    TUint8 u8gTTC48XSVersion_Custom;                        //!< [[-]] Program Version Custom TTC48XS 
} TCanSigRecMsg8C1SendToOpus;

extern TCanSigRecMsg8C1SendToOpus gCsr_tMsg8C1SendToOpus;

typedef struct
{
    TUint8 u8gTTC510Version_Major;                          //!< [[-]] Program Version Major C1 TTC510 
    TUint8 u8gTTC510Version_Minor;                          //!< [[-]] Program Version Minor C1 TTC510 
    TUint8 u8gTTC510Version_Patch;                          //!< [[-]] Program Version Patch C1 TTC510 
    TUint8 u8gTTC510Version_Custom;                         //!< [[-]] Program Version Custom C1 TTC510 
    TUint8 u8gTTC48XSVersion_Major;                         //!< [[-]] Program Version Major TTC48XS 
    TUint8 u8gTTC48XSVersion_Minor;                         //!< [[-]] Program Version Minor TTC48XS 
    TUint8 u8gTTC48XSVersion_Patch;                         //!< [[-]] Program Version Patch TTC48XS 
    TUint8 u8gTTC48XSVersion_Custom;                        //!< [[-]] Program Version Custom TTC48XS 
} TCanSigRecOldValMsg8C1SendToOpus;

typedef struct
{
    TCanSigRecInf     tCsrInfo_u8gTTC510Version_Major;
    TCanSigRecRng_u8  tCsrRng_u8gTTC510Version_Major;
    TCanSigRecInf     tCsrInfo_u8gTTC510Version_Minor;
    TCanSigRecRng_u8  tCsrRng_u8gTTC510Version_Minor;
    TCanSigRecInf     tCsrInfo_u8gTTC510Version_Patch;
    TCanSigRecRng_u8  tCsrRng_u8gTTC510Version_Patch;
    TCanSigRecInf     tCsrInfo_u8gTTC510Version_Custom;
    TCanSigRecRng_u8  tCsrRng_u8gTTC510Version_Custom;
    TCanSigRecInf     tCsrInfo_u8gTTC48XSVersion_Major;
    TCanSigRecRng_u8  tCsrRng_u8gTTC48XSVersion_Major;
    TCanSigRecInf     tCsrInfo_u8gTTC48XSVersion_Minor;
    TCanSigRecRng_u8  tCsrRng_u8gTTC48XSVersion_Minor;
    TCanSigRecInf     tCsrInfo_u8gTTC48XSVersion_Patch;
    TCanSigRecRng_u8  tCsrRng_u8gTTC48XSVersion_Patch;
    TCanSigRecInf     tCsrInfo_u8gTTC48XSVersion_Custom;
    TCanSigRecRng_u8  tCsrRng_u8gTTC48XSVersion_Custom;
} TCanSigRecVal_Msg8C1SendToOpus;

typedef struct
{
    const TCanSigRecRoot *cptRoot;                          //!< [POI] Root connection
    TUint8 u8CCD;                                           //!< [[-]] new signal 
    TUint16 u16Index;                                       //!< [[-]] new signal 
    TUint8 u8Sub_Index;                                     //!< [[-]] new signal 
    TUint32 u32Data;                                        //!< [[-]] new signal 
} TCanSigRecSdo_Answer_48XS;

extern TCanSigRecSdo_Answer_48XS gCsr_tSdo_Answer_48XS;

typedef struct
{
    TUint8 u8CCD;                                           //!< [[-]] new signal 
    TUint16 u16Index;                                       //!< [[-]] new signal 
    TUint8 u8Sub_Index;                                     //!< [[-]] new signal 
    TUint32 u32Data;                                        //!< [[-]] new signal 
} TCanSigRecOldValSdo_Answer_48XS;

typedef struct
{
    TCanSigRecInf     tCsrInfo_u8CCD;
    TCanSigRecRng_u8  tCsrRng_u8CCD;
    TCanSigRecInf     tCsrInfo_u16Index;
    TCanSigRecRng_u16 tCsrRng_u16Index;
    TCanSigRecInf     tCsrInfo_u8Sub_Index;
    TCanSigRecRng_u8  tCsrRng_u8Sub_Index;
    TCanSigRecInf     tCsrInfo_u32Data;
    TCanSigRecRng_u32 tCsrRng_u32Data;
} TCanSigRecVal_Sdo_Answer_48XS;

typedef struct
{
    const TCanSigRecRoot *cptRoot;                          //!< [POI] Root connection
    TBoolean boAutoModeActivate;                            //!< [[-]] new signal 
    TBoolean boSilenceModeActivate;                         //!< [[-]] new signal 
    TBoolean boForcingModeActivate;                         //!< [[-]] new signal 
    TBoolean boForcingRegenlow;                             //!< [[-]] new signal 
    TBoolean boForcingRegenHigh;                            //!< [[-]] new signal 
    TBoolean boAskReloadWithGenerator;                      //!< [[-]] new signal 
    TBoolean boReloadWithGeneratorOn;                       //!< [[-]] new signal 
    TBoolean boAlarmCptNbrRegenFinish;                      //!< [[-]] new signal 
    TBoolean boElectricMotorForbidden;                      //!< [[-]] new signal 
    TBoolean boPictoColdOilTankTemperature;                 //!< [[-]] new signal 
    TBoolean boRecoveryReductionRatio;                      //!< [[-]] new signal 
    TUint16 u16RemainingRegenTimeAverage;                   //!< [[-]] new signal 
    TUint16 u16TotalRegenHours;                             //!< [[-]] new signal 
} TCanSigRecMsg9C1SendToOpus;

extern TCanSigRecMsg9C1SendToOpus gCsr_tMsg9C1SendToOpus;

typedef struct
{
    TBoolean boAutoModeActivate;                            //!< [[-]] new signal 
    TBoolean boSilenceModeActivate;                         //!< [[-]] new signal 
    TBoolean boForcingModeActivate;                         //!< [[-]] new signal 
    TBoolean boForcingRegenlow;                             //!< [[-]] new signal 
    TBoolean boForcingRegenHigh;                            //!< [[-]] new signal 
    TBoolean boAskReloadWithGenerator;                      //!< [[-]] new signal 
    TBoolean boReloadWithGeneratorOn;                       //!< [[-]] new signal 
    TBoolean boAlarmCptNbrRegenFinish;                      //!< [[-]] new signal 
    TBoolean boElectricMotorForbidden;                      //!< [[-]] new signal 
    TBoolean boPictoColdOilTankTemperature;                 //!< [[-]] new signal 
    TBoolean boRecoveryReductionRatio;                      //!< [[-]] new signal 
    TUint16 u16RemainingRegenTimeAverage;                   //!< [[-]] new signal 
    TUint16 u16TotalRegenHours;                             //!< [[-]] new signal 
} TCanSigRecOldValMsg9C1SendToOpus;

typedef struct
{
    TCanSigRecInf     tCsrInfo_boAutoModeActivate;
    TCanSigRecRng_bo  tCsrRng_boAutoModeActivate;
    TCanSigRecInf     tCsrInfo_boSilenceModeActivate;
    TCanSigRecRng_bo  tCsrRng_boSilenceModeActivate;
    TCanSigRecInf     tCsrInfo_boForcingModeActivate;
    TCanSigRecRng_bo  tCsrRng_boForcingModeActivate;
    TCanSigRecInf     tCsrInfo_boForcingRegenlow;
    TCanSigRecRng_bo  tCsrRng_boForcingRegenlow;
    TCanSigRecInf     tCsrInfo_boForcingRegenHigh;
    TCanSigRecRng_bo  tCsrRng_boForcingRegenHigh;
    TCanSigRecInf     tCsrInfo_boAskReloadWithGenerator;
    TCanSigRecRng_bo  tCsrRng_boAskReloadWithGenerator;
    TCanSigRecInf     tCsrInfo_boReloadWithGeneratorOn;
    TCanSigRecRng_bo  tCsrRng_boReloadWithGeneratorOn;
    TCanSigRecInf     tCsrInfo_boAlarmCptNbrRegenFinish;
    TCanSigRecRng_bo  tCsrRng_boAlarmCptNbrRegenFinish;
    TCanSigRecInf     tCsrInfo_boElectricMotorForbidden;
    TCanSigRecRng_bo  tCsrRng_boElectricMotorForbidden;
    TCanSigRecInf     tCsrInfo_boPictoColdOilTankTemperature;
    TCanSigRecRng_bo  tCsrRng_boPictoColdOilTankTemperature;
    TCanSigRecInf     tCsrInfo_boRecoveryReductionRatio;
    TCanSigRecRng_bo  tCsrRng_boRecoveryReductionRatio;
    TCanSigRecInf     tCsrInfo_u16RemainingRegenTimeAverage;
    TCanSigRecRng_u16 tCsrRng_u16RemainingRegenTimeAverage;
    TCanSigRecInf     tCsrInfo_u16TotalRegenHours;
    TCanSigRecRng_u16 tCsrRng_u16TotalRegenHours;
} TCanSigRecVal_Msg9C1SendToOpus;

typedef struct
{
    const TCanSigRecRoot *cptRoot;                          //!< [POI] Root connection
    TUint8 u8CCD;                                           //!< [[-]] Command code, indicates the type of command or response, as well 
    TUint16 u16Index;                                       //!< [[-]] Index of the parameter to write/read 
    TUint8 u8Sub_Index;                                     //!< [[-]] Sub-index of the parameter to write/read 
    TUint32 u32Data;                                        //!< [[-]] Data 
} TCanSigRecSdo_Request_48XS;

extern TCanSigRecSdo_Request_48XS gCsr_tSdo_Request_48XS;

typedef struct
{
    TUint8 u8CCD;                                           //!< [[-]] Command code, indicates the type of command or response, as well 
    TUint16 u16Index;                                       //!< [[-]] Index of the parameter to write/read 
    TUint8 u8Sub_Index;                                     //!< [[-]] Sub-index of the parameter to write/read 
    TUint32 u32Data;                                        //!< [[-]] Data 
} TCanSigRecOldValSdo_Request_48XS;

typedef struct
{
    TCanSigRecInf     tCsrInfo_u8CCD;
    TCanSigRecRng_u8  tCsrRng_u8CCD;
    TCanSigRecInf     tCsrInfo_u16Index;
    TCanSigRecRng_u16 tCsrRng_u16Index;
    TCanSigRecInf     tCsrInfo_u8Sub_Index;
    TCanSigRecRng_u8  tCsrRng_u8Sub_Index;
    TCanSigRecInf     tCsrInfo_u32Data;
    TCanSigRecRng_u32 tCsrRng_u32Data;
} TCanSigRecVal_Sdo_Request_48XS;

typedef struct
{
    const TCanSigRecRoot *cptRoot;                          //!< [POI] Root connection
    EErrorStatus48XS eMotorDefaultLightErrSta;              //!< [[-]] new signal 
    EErrorStatus48XS eOverloadLightErrSta;                  //!< [[-]] new signal 
    EErrorStatus48XS eBuzzerErrSta;                         //!< [[-]] new signal 
    EErrorStatus48XS eWarmingLightErrSta;                   //!< [[-]] new signal 
    EErrorStatus48XS eDeversDefaultLightErrSta;             //!< [[-]] new signal 
    EErrorStatus48XS eGasOilLightErrSta;                    //!< [[-]] new signal 
    EErrorStatus48XS eWhiteLightARGErrSta;                  //!< [[-]] new signal 
    EErrorStatus48XS eRedLightARGErrSta;                    //!< [[-]] new signal 
} TCanSigRecPDO5_48XS;

extern TCanSigRecPDO5_48XS gCsr_tPDO5_48XS;

typedef struct
{
    EErrorStatus48XS eMotorDefaultLightErrSta;              //!< [[-]] new signal 
    EErrorStatus48XS eOverloadLightErrSta;                  //!< [[-]] new signal 
    EErrorStatus48XS eBuzzerErrSta;                         //!< [[-]] new signal 
    EErrorStatus48XS eWarmingLightErrSta;                   //!< [[-]] new signal 
    EErrorStatus48XS eDeversDefaultLightErrSta;             //!< [[-]] new signal 
    EErrorStatus48XS eGasOilLightErrSta;                    //!< [[-]] new signal 
    EErrorStatus48XS eWhiteLightARGErrSta;                  //!< [[-]] new signal 
    EErrorStatus48XS eRedLightARGErrSta;                    //!< [[-]] new signal 
} TCanSigRecOldValPDO5_48XS;

typedef struct
{
    TCanSigRecInf     tCsrInfo_eMotorDefaultLightErrSta;
    TCanSigRecRng_u16 tCsrRng_eMotorDefaultLightErrSta;
    TCanSigRecInf     tCsrInfo_eOverloadLightErrSta;
    TCanSigRecRng_u16 tCsrRng_eOverloadLightErrSta;
    TCanSigRecInf     tCsrInfo_eBuzzerErrSta;
    TCanSigRecRng_u16 tCsrRng_eBuzzerErrSta;
    TCanSigRecInf     tCsrInfo_eWarmingLightErrSta;
    TCanSigRecRng_u16 tCsrRng_eWarmingLightErrSta;
    TCanSigRecInf     tCsrInfo_eDeversDefaultLightErrSta;
    TCanSigRecRng_u16 tCsrRng_eDeversDefaultLightErrSta;
    TCanSigRecInf     tCsrInfo_eGasOilLightErrSta;
    TCanSigRecRng_u16 tCsrRng_eGasOilLightErrSta;
    TCanSigRecInf     tCsrInfo_eWhiteLightARGErrSta;
    TCanSigRecRng_u16 tCsrRng_eWhiteLightARGErrSta;
    TCanSigRecInf     tCsrInfo_eRedLightARGErrSta;
    TCanSigRecRng_u16 tCsrRng_eRedLightARGErrSta;
} TCanSigRecVal_PDO5_48XS;

typedef struct
{
    const TCanSigRecRoot *cptRoot;                          //!< [POI] Root connection
    EErrorStatus48XS eWhiteLightARDErrSta;                  //!< [[-]] new signal 
    EErrorStatus48XS eRedLightARDErrSta;                    //!< [[-]] new signal 
    EErrorStatus48XS eWhiteLightAr15746ErrSta;              //!< [[-]] new signal 
} TCanSigRecPDO6_48XS;

extern TCanSigRecPDO6_48XS gCsr_tPDO6_48XS;

typedef struct
{
    EErrorStatus48XS eWhiteLightARDErrSta;                  //!< [[-]] new signal 
    EErrorStatus48XS eRedLightARDErrSta;                    //!< [[-]] new signal 
    EErrorStatus48XS eWhiteLightAr15746ErrSta;              //!< [[-]] new signal 
} TCanSigRecOldValPDO6_48XS;

typedef struct
{
    TCanSigRecInf     tCsrInfo_eWhiteLightARDErrSta;
    TCanSigRecRng_u16 tCsrRng_eWhiteLightARDErrSta;
    TCanSigRecInf     tCsrInfo_eRedLightARDErrSta;
    TCanSigRecRng_u16 tCsrRng_eRedLightARDErrSta;
    TCanSigRecInf     tCsrInfo_eWhiteLightAr15746ErrSta;
    TCanSigRecRng_u16 tCsrRng_eWhiteLightAr15746ErrSta;
} TCanSigRecVal_PDO6_48XS;

typedef struct
{
    const TCanSigRecRoot *cptRoot;                          //!< [POI] Root connection
    TUint8 u8State;                                         //!< [[-]] new signal 
} TCanSigRecHeartbeat_C1;

extern TCanSigRecHeartbeat_C1 gCsr_tHeartbeat_C1;

typedef struct
{
    TUint8 u8State;                                         //!< [[-]] new signal 
} TCanSigRecOldValHeartbeat_C1;

typedef struct
{
    TCanSigRecInf     tCsrInfo_u8State;
    TCanSigRecRng_u8  tCsrRng_u8State;
} TCanSigRecVal_Heartbeat_C1;

typedef struct
{
    const TCanSigRecRoot *cptRoot;                          //!< [POI] Root connection
    TUint8 u8State;                                         //!< [[-]] new signal 
} TCanSigRecHearbeat_48XS;

extern TCanSigRecHearbeat_48XS gCsr_tHearbeat_48XS;

typedef struct
{
    TUint8 u8State;                                         //!< [[-]] new signal 
} TCanSigRecOldValHearbeat_48XS;

typedef struct
{
    TCanSigRecInf     tCsrInfo_u8State;
    TCanSigRecRng_u8  tCsrRng_u8State;
} TCanSigRecVal_Hearbeat_48XS;

typedef struct
{
    const TCanSigRecRoot *cptRoot;                          //!< [POI] Root connection
    TUint8 u8State;                                         //!< [[-]] new signal 
} TCanSigRecHearbeat_Telescope;

extern TCanSigRecHearbeat_Telescope gCsr_tHearbeat_Telescope;

typedef struct
{
    TUint8 u8State;                                         //!< [[-]] new signal 
} TCanSigRecOldValHearbeat_Telescope;

typedef struct
{
    TCanSigRecInf     tCsrInfo_u8State;
    TCanSigRecRng_u8  tCsrRng_u8State;
} TCanSigRecVal_Hearbeat_Telescope;

typedef struct
{
    const TCanSigRecRoot *cptRoot;                          //!< [POI] Root connection
    TBoolean bogBattery_On_Off;                             //!< [[-]] Battery Status 
    TBoolean bogPreheat_On_Off;                             //!< [[-]] Preheat Status 
    TBoolean bogEngine_Faillure_On_Off;                     //!< [[-]] Engine Faillure Status 
    TBoolean bogMaintenance_On_Off;                         //!< [[-]] Maintenance Status 
    TBoolean bogOil_On_OFF;                                 //!< [[-]] Oil Status 
    TBoolean bogDeltaArmSectorDown;                         //!< [[-]] Delta Arm Sector Down 
    TBoolean bogArrowArmSectorDown;                         //!< [[-]] Arrow Arm Sector Down 
    TBoolean bogPendularSectorDown;                         //!< [[-]] Pendular Sector Down 
    TBoolean bogDeltaArmInCenter;                           //!< [[-]] Delta Arm in Center 
    TBoolean bogArrowArmInCenter;                           //!< [[-]] Arrow Arm in Center 
    TBoolean bogPendularInCenter;                           //!< [[-]] Pendular in Center 
    TBoolean bogBasketRotationInCenter;                     //!< [[-]] Basket Rotation in Center 
    TBoolean bogTelescopeInCenter;                          //!< [[-]] Telescope in Center 
    TBoolean bogBasketInclinaisonInCenter;                  //!< [[-]] Basket Inclinaison in Center 
    TBoolean bogDeltaArmMoveUpAllow;                        //!< [[-]] Delta Arm Move Up Allowed 
    TBoolean bogDeltaArmMoveDownAllow;                      //!< [[-]] Delta Arm Move Down Allowed 
    TBoolean bogArrowArmMoveUpAllow;                        //!< [[-]] Arrow Arm Move Up Allowed 
    TBoolean bogArrowArmMoveDownAllow;                      //!< [[-]] Arrow Arm Move Down Allowed 
    TBoolean bogPendularMoveUpAllow;                        //!< [[-]] Pendular Move Up Allowed 
    TBoolean bogPendularMoveDownAllow;                      //!< [[-]] Pendular Move Down Allowed 
    TBoolean bogTelescopeMoveOutAllow;                      //!< [[-]] Telescope Move Out Allowed 
    TBoolean bogTelescopeMoveInAllow;                       //!< [[-]] Telescope Move In Allowed 
    TBoolean bogTurretCtClockWiseMoveAllow;                 //!< [[-]] Turret Counter Clockwise Move Allowed 
    TBoolean bogTurretClockWiseMoveAllow;                   //!< [[-]] Turret Clockwise Move Allowed 
    TBoolean bogBasketRotCtClockWiseMoveAllow;              //!< [[-]] Basket Rotation Counter Clockwise Move Allowed 
    TBoolean bogBasketRotClockWiseMoveAllow;                //!< [[-]] Basket Rotation Clockwise Move Allowed 
    TBoolean bogBasketInclinMoveUpAllow;                    //!< [[-]] Basket Inclinaison Move Up Allowed 
    TBoolean bogBasketInclinMoveDownAllow;                  //!< [[-]] Basket Inclinaison Move Down Allowed 
    TBoolean bogVehiculeDefault;                            //!< [[-]] Vehicule in Default (A12) 
    TBoolean bogTelescopeOutputPossible;                    //!< [[-]] Telescope output possible (A48) 
    TBoolean bogTelescopeWinderFault;                       //!< [[-]] Telescope Winder Fault (A17) 
    TBoolean bogNacellePostSelector;                        //!< [[-]] Nacelle post selector 
    TBoolean bogSTOP_On_Off;                                //!< [[-]] STOP Status 
    TBoolean bogSafeManSystem;                              //!< [[-]] SafeManSystem (A5) 
    TBoolean bogHighSpeedAllow;                             //!< [[-]] High Speed Allow (A19) 
    TBoolean bogAutomatiqueStop;                            //!< [[-]] Automatique Stop or function mismatch (A20) 
    TBoolean bogLowSpeedByFault;                            //!< [[-]] Low Speed by fault (A46) 
    TBoolean bogMeasuringMastFault;                         //!< [[-]] Measuring Mast in Fault (A8) 
    TBoolean bogMeasuringMatOption;                         //!< [[-]] Measuring mast option 
    TBoolean bogBasketAccessLocked;                         //!< [[-]] Basket access locked 
    TBoolean bogFilterOverloadNoActive;                     //!< [[-]] new signal 
    TBoolean bogAnticlockwiseBasketSlew;                    //!< [[-]] EV113 Anticlockwise Basket Slew 
    TBoolean bogClockwiseBasketSlew;                        //!< [[-]] EV112 Anticlockwise Basket Slew 
    TBoolean bogFlashLightForced;                           //!< [[-]] Flash Light Forced 
    TBoolean bogBasketAccessLockOption;                     //!< [[-]] Basket Lock Option 
    TBoolean bogBasketLateralStopOption;                    //!< [[-]] Basket lateral stop option 
    TBoolean bogBasketStepClosed;                           //!< [[-]] Basket step closed 
    TBoolean bogSystemFault;                                //!< [[-]] System Fault 
    TBoolean bogTrans1PressureSensorFault;                  //!< [[-]] Fault pressure transmission 1 
    TBoolean bogTrans2PressureSensorFault;                  //!< [[-]] Fault pressure transmission 2 
    TBoolean bogOverloadSecurity;                           //!< [[-]] Basket overload 
    TBoolean bogDeltaArmJoysCenteredTeles;                  //!< [[-]] Delta and Telescope Joystick centered 
    TBoolean bogArrowJoystickCenteredTurret;                //!< [[-]] Arrow and Turret Joystick centered 
    TBoolean bogDeltaArmMoveUp;                             //!< [[-]] Delta Arm Move Up 
    TBoolean bogDeltaArmMoveDown;                           //!< [[-]] Delta Arm Move Down 
    TBoolean bogArrowArmMoveUp;                             //!< [[-]] Arrow Arm Move Up 
    TBoolean bogArrowArmMoveDown;                           //!< [[-]] Arrow Arm Move Down 
    TBoolean bogTelescopeMoveOut;                           //!< [[-]] Telescope Move Out 
    TBoolean bogTelescopeMoveIn;                            //!< [[-]] Telescope Move In 
    TBoolean bogTurretCounterClockWiseMove;                 //!< [[-]] Turret Counter Clockwise Move 
    TBoolean bogTurretClockWiseMove;                        //!< [[-]] Turret Clockwise Move 
    TBoolean bogTurretEncoderFault;                         //!< [[-]] Turret Encoder Fault 
    TBoolean bogGeneratorOption;                            //!< [[-]] Generator Option 
    TBoolean bogGeneratorActive;                            //!< [[-]] Generator Active 
} TCanSigRecMsg1C1SendToEvision7;

extern TCanSigRecMsg1C1SendToEvision7 gCsr_tMsg1C1SendToEvision7;

typedef struct
{
    TBoolean bogBattery_On_Off;                             //!< [[-]] Battery Status 
    TBoolean bogPreheat_On_Off;                             //!< [[-]] Preheat Status 
    TBoolean bogEngine_Faillure_On_Off;                     //!< [[-]] Engine Faillure Status 
    TBoolean bogMaintenance_On_Off;                         //!< [[-]] Maintenance Status 
    TBoolean bogOil_On_OFF;                                 //!< [[-]] Oil Status 
    TBoolean bogDeltaArmSectorDown;                         //!< [[-]] Delta Arm Sector Down 
    TBoolean bogArrowArmSectorDown;                         //!< [[-]] Arrow Arm Sector Down 
    TBoolean bogPendularSectorDown;                         //!< [[-]] Pendular Sector Down 
    TBoolean bogDeltaArmInCenter;                           //!< [[-]] Delta Arm in Center 
    TBoolean bogArrowArmInCenter;                           //!< [[-]] Arrow Arm in Center 
    TBoolean bogPendularInCenter;                           //!< [[-]] Pendular in Center 
    TBoolean bogBasketRotationInCenter;                     //!< [[-]] Basket Rotation in Center 
    TBoolean bogTelescopeInCenter;                          //!< [[-]] Telescope in Center 
    TBoolean bogBasketInclinaisonInCenter;                  //!< [[-]] Basket Inclinaison in Center 
    TBoolean bogDeltaArmMoveUpAllow;                        //!< [[-]] Delta Arm Move Up Allowed 
    TBoolean bogDeltaArmMoveDownAllow;                      //!< [[-]] Delta Arm Move Down Allowed 
    TBoolean bogArrowArmMoveUpAllow;                        //!< [[-]] Arrow Arm Move Up Allowed 
    TBoolean bogArrowArmMoveDownAllow;                      //!< [[-]] Arrow Arm Move Down Allowed 
    TBoolean bogPendularMoveUpAllow;                        //!< [[-]] Pendular Move Up Allowed 
    TBoolean bogPendularMoveDownAllow;                      //!< [[-]] Pendular Move Down Allowed 
    TBoolean bogTelescopeMoveOutAllow;                      //!< [[-]] Telescope Move Out Allowed 
    TBoolean bogTelescopeMoveInAllow;                       //!< [[-]] Telescope Move In Allowed 
    TBoolean bogTurretCtClockWiseMoveAllow;                 //!< [[-]] Turret Counter Clockwise Move Allowed 
    TBoolean bogTurretClockWiseMoveAllow;                   //!< [[-]] Turret Clockwise Move Allowed 
    TBoolean bogBasketRotCtClockWiseMoveAllow;              //!< [[-]] Basket Rotation Counter Clockwise Move Allowed 
    TBoolean bogBasketRotClockWiseMoveAllow;                //!< [[-]] Basket Rotation Clockwise Move Allowed 
    TBoolean bogBasketInclinMoveUpAllow;                    //!< [[-]] Basket Inclinaison Move Up Allowed 
    TBoolean bogBasketInclinMoveDownAllow;                  //!< [[-]] Basket Inclinaison Move Down Allowed 
    TBoolean bogVehiculeDefault;                            //!< [[-]] Vehicule in Default (A12) 
    TBoolean bogTelescopeOutputPossible;                    //!< [[-]] Telescope output possible (A48) 
    TBoolean bogTelescopeWinderFault;                       //!< [[-]] Telescope Winder Fault (A17) 
    TBoolean bogNacellePostSelector;                        //!< [[-]] Nacelle post selector 
    TBoolean bogSTOP_On_Off;                                //!< [[-]] STOP Status 
    TBoolean bogSafeManSystem;                              //!< [[-]] SafeManSystem (A5) 
    TBoolean bogHighSpeedAllow;                             //!< [[-]] High Speed Allow (A19) 
    TBoolean bogAutomatiqueStop;                            //!< [[-]] Automatique Stop or function mismatch (A20) 
    TBoolean bogLowSpeedByFault;                            //!< [[-]] Low Speed by fault (A46) 
    TBoolean bogMeasuringMastFault;                         //!< [[-]] Measuring Mast in Fault (A8) 
    TBoolean bogMeasuringMatOption;                         //!< [[-]] Measuring mast option 
    TBoolean bogBasketAccessLocked;                         //!< [[-]] Basket access locked 
    TBoolean bogFilterOverloadNoActive;                     //!< [[-]] new signal 
    TBoolean bogAnticlockwiseBasketSlew;                    //!< [[-]] EV113 Anticlockwise Basket Slew 
    TBoolean bogClockwiseBasketSlew;                        //!< [[-]] EV112 Anticlockwise Basket Slew 
    TBoolean bogFlashLightForced;                           //!< [[-]] Flash Light Forced 
    TBoolean bogBasketAccessLockOption;                     //!< [[-]] Basket Lock Option 
    TBoolean bogBasketLateralStopOption;                    //!< [[-]] Basket lateral stop option 
    TBoolean bogBasketStepClosed;                           //!< [[-]] Basket step closed 
    TBoolean bogSystemFault;                                //!< [[-]] System Fault 
    TBoolean bogTrans1PressureSensorFault;                  //!< [[-]] Fault pressure transmission 1 
    TBoolean bogTrans2PressureSensorFault;                  //!< [[-]] Fault pressure transmission 2 
    TBoolean bogOverloadSecurity;                           //!< [[-]] Basket overload 
    TBoolean bogDeltaArmJoysCenteredTeles;                  //!< [[-]] Delta and Telescope Joystick centered 
    TBoolean bogArrowJoystickCenteredTurret;                //!< [[-]] Arrow and Turret Joystick centered 
    TBoolean bogDeltaArmMoveUp;                             //!< [[-]] Delta Arm Move Up 
    TBoolean bogDeltaArmMoveDown;                           //!< [[-]] Delta Arm Move Down 
    TBoolean bogArrowArmMoveUp;                             //!< [[-]] Arrow Arm Move Up 
    TBoolean bogArrowArmMoveDown;                           //!< [[-]] Arrow Arm Move Down 
    TBoolean bogTelescopeMoveOut;                           //!< [[-]] Telescope Move Out 
    TBoolean bogTelescopeMoveIn;                            //!< [[-]] Telescope Move In 
    TBoolean bogTurretCounterClockWiseMove;                 //!< [[-]] Turret Counter Clockwise Move 
    TBoolean bogTurretClockWiseMove;                        //!< [[-]] Turret Clockwise Move 
    TBoolean bogTurretEncoderFault;                         //!< [[-]] Turret Encoder Fault 
    TBoolean bogGeneratorOption;                            //!< [[-]] Generator Option 
    TBoolean bogGeneratorActive;                            //!< [[-]] Generator Active 
} TCanSigRecOldValMsg1C1SendToEvision7;

typedef struct
{
    TCanSigRecInf     tCsrInfo_bogBattery_On_Off;
    TCanSigRecRng_bo  tCsrRng_bogBattery_On_Off;
    TCanSigRecInf     tCsrInfo_bogPreheat_On_Off;
    TCanSigRecRng_bo  tCsrRng_bogPreheat_On_Off;
    TCanSigRecInf     tCsrInfo_bogEngine_Faillure_On_Off;
    TCanSigRecRng_bo  tCsrRng_bogEngine_Faillure_On_Off;
    TCanSigRecInf     tCsrInfo_bogMaintenance_On_Off;
    TCanSigRecRng_bo  tCsrRng_bogMaintenance_On_Off;
    TCanSigRecInf     tCsrInfo_bogOil_On_OFF;
    TCanSigRecRng_bo  tCsrRng_bogOil_On_OFF;
    TCanSigRecInf     tCsrInfo_bogDeltaArmSectorDown;
    TCanSigRecRng_bo  tCsrRng_bogDeltaArmSectorDown;
    TCanSigRecInf     tCsrInfo_bogArrowArmSectorDown;
    TCanSigRecRng_bo  tCsrRng_bogArrowArmSectorDown;
    TCanSigRecInf     tCsrInfo_bogPendularSectorDown;
    TCanSigRecRng_bo  tCsrRng_bogPendularSectorDown;
    TCanSigRecInf     tCsrInfo_bogDeltaArmInCenter;
    TCanSigRecRng_bo  tCsrRng_bogDeltaArmInCenter;
    TCanSigRecInf     tCsrInfo_bogArrowArmInCenter;
    TCanSigRecRng_bo  tCsrRng_bogArrowArmInCenter;
    TCanSigRecInf     tCsrInfo_bogPendularInCenter;
    TCanSigRecRng_bo  tCsrRng_bogPendularInCenter;
    TCanSigRecInf     tCsrInfo_bogBasketRotationInCenter;
    TCanSigRecRng_bo  tCsrRng_bogBasketRotationInCenter;
    TCanSigRecInf     tCsrInfo_bogTelescopeInCenter;
    TCanSigRecRng_bo  tCsrRng_bogTelescopeInCenter;
    TCanSigRecInf     tCsrInfo_bogBasketInclinaisonInCenter;
    TCanSigRecRng_bo  tCsrRng_bogBasketInclinaisonInCenter;
    TCanSigRecInf     tCsrInfo_bogDeltaArmMoveUpAllow;
    TCanSigRecRng_bo  tCsrRng_bogDeltaArmMoveUpAllow;
    TCanSigRecInf     tCsrInfo_bogDeltaArmMoveDownAllow;
    TCanSigRecRng_bo  tCsrRng_bogDeltaArmMoveDownAllow;
    TCanSigRecInf     tCsrInfo_bogArrowArmMoveUpAllow;
    TCanSigRecRng_bo  tCsrRng_bogArrowArmMoveUpAllow;
    TCanSigRecInf     tCsrInfo_bogArrowArmMoveDownAllow;
    TCanSigRecRng_bo  tCsrRng_bogArrowArmMoveDownAllow;
    TCanSigRecInf     tCsrInfo_bogPendularMoveUpAllow;
    TCanSigRecRng_bo  tCsrRng_bogPendularMoveUpAllow;
    TCanSigRecInf     tCsrInfo_bogPendularMoveDownAllow;
    TCanSigRecRng_bo  tCsrRng_bogPendularMoveDownAllow;
    TCanSigRecInf     tCsrInfo_bogTelescopeMoveOutAllow;
    TCanSigRecRng_bo  tCsrRng_bogTelescopeMoveOutAllow;
    TCanSigRecInf     tCsrInfo_bogTelescopeMoveInAllow;
    TCanSigRecRng_bo  tCsrRng_bogTelescopeMoveInAllow;
    TCanSigRecInf     tCsrInfo_bogTurretCtClockWiseMoveAllow;
    TCanSigRecRng_bo  tCsrRng_bogTurretCtClockWiseMoveAllow;
    TCanSigRecInf     tCsrInfo_bogTurretClockWiseMoveAllow;
    TCanSigRecRng_bo  tCsrRng_bogTurretClockWiseMoveAllow;
    TCanSigRecInf     tCsrInfo_bogBasketRotCtClockWiseMoveAllow;
    TCanSigRecRng_bo  tCsrRng_bogBasketRotCtClockWiseMoveAllow;
    TCanSigRecInf     tCsrInfo_bogBasketRotClockWiseMoveAllow;
    TCanSigRecRng_bo  tCsrRng_bogBasketRotClockWiseMoveAllow;
    TCanSigRecInf     tCsrInfo_bogBasketInclinMoveUpAllow;
    TCanSigRecRng_bo  tCsrRng_bogBasketInclinMoveUpAllow;
    TCanSigRecInf     tCsrInfo_bogBasketInclinMoveDownAllow;
    TCanSigRecRng_bo  tCsrRng_bogBasketInclinMoveDownAllow;
    TCanSigRecInf     tCsrInfo_bogVehiculeDefault;
    TCanSigRecRng_bo  tCsrRng_bogVehiculeDefault;
    TCanSigRecInf     tCsrInfo_bogTelescopeOutputPossible;
    TCanSigRecRng_bo  tCsrRng_bogTelescopeOutputPossible;
    TCanSigRecInf     tCsrInfo_bogTelescopeWinderFault;
    TCanSigRecRng_bo  tCsrRng_bogTelescopeWinderFault;
    TCanSigRecInf     tCsrInfo_bogNacellePostSelector;
    TCanSigRecRng_bo  tCsrRng_bogNacellePostSelector;
    TCanSigRecInf     tCsrInfo_bogSTOP_On_Off;
    TCanSigRecRng_bo  tCsrRng_bogSTOP_On_Off;
    TCanSigRecInf     tCsrInfo_bogSafeManSystem;
    TCanSigRecRng_bo  tCsrRng_bogSafeManSystem;
    TCanSigRecInf     tCsrInfo_bogHighSpeedAllow;
    TCanSigRecRng_bo  tCsrRng_bogHighSpeedAllow;
    TCanSigRecInf     tCsrInfo_bogAutomatiqueStop;
    TCanSigRecRng_bo  tCsrRng_bogAutomatiqueStop;
    TCanSigRecInf     tCsrInfo_bogLowSpeedByFault;
    TCanSigRecRng_bo  tCsrRng_bogLowSpeedByFault;
    TCanSigRecInf     tCsrInfo_bogMeasuringMastFault;
    TCanSigRecRng_bo  tCsrRng_bogMeasuringMastFault;
    TCanSigRecInf     tCsrInfo_bogMeasuringMatOption;
    TCanSigRecRng_bo  tCsrRng_bogMeasuringMatOption;
    TCanSigRecInf     tCsrInfo_bogBasketAccessLocked;
    TCanSigRecRng_bo  tCsrRng_bogBasketAccessLocked;
    TCanSigRecInf     tCsrInfo_bogFilterOverloadNoActive;
    TCanSigRecRng_bo  tCsrRng_bogFilterOverloadNoActive;
    TCanSigRecInf     tCsrInfo_bogAnticlockwiseBasketSlew;
    TCanSigRecRng_bo  tCsrRng_bogAnticlockwiseBasketSlew;
    TCanSigRecInf     tCsrInfo_bogClockwiseBasketSlew;
    TCanSigRecRng_bo  tCsrRng_bogClockwiseBasketSlew;
    TCanSigRecInf     tCsrInfo_bogFlashLightForced;
    TCanSigRecRng_bo  tCsrRng_bogFlashLightForced;
    TCanSigRecInf     tCsrInfo_bogBasketAccessLockOption;
    TCanSigRecRng_bo  tCsrRng_bogBasketAccessLockOption;
    TCanSigRecInf     tCsrInfo_bogBasketLateralStopOption;
    TCanSigRecRng_bo  tCsrRng_bogBasketLateralStopOption;
    TCanSigRecInf     tCsrInfo_bogBasketStepClosed;
    TCanSigRecRng_bo  tCsrRng_bogBasketStepClosed;
    TCanSigRecInf     tCsrInfo_bogSystemFault;
    TCanSigRecRng_bo  tCsrRng_bogSystemFault;
    TCanSigRecInf     tCsrInfo_bogTrans1PressureSensorFault;
    TCanSigRecRng_bo  tCsrRng_bogTrans1PressureSensorFault;
    TCanSigRecInf     tCsrInfo_bogTrans2PressureSensorFault;
    TCanSigRecRng_bo  tCsrRng_bogTrans2PressureSensorFault;
    TCanSigRecInf     tCsrInfo_bogOverloadSecurity;
    TCanSigRecRng_bo  tCsrRng_bogOverloadSecurity;
    TCanSigRecInf     tCsrInfo_bogDeltaArmJoysCenteredTeles;
    TCanSigRecRng_bo  tCsrRng_bogDeltaArmJoysCenteredTeles;
    TCanSigRecInf     tCsrInfo_bogArrowJoystickCenteredTurret;
    TCanSigRecRng_bo  tCsrRng_bogArrowJoystickCenteredTurret;
    TCanSigRecInf     tCsrInfo_bogDeltaArmMoveUp;
    TCanSigRecRng_bo  tCsrRng_bogDeltaArmMoveUp;
    TCanSigRecInf     tCsrInfo_bogDeltaArmMoveDown;
    TCanSigRecRng_bo  tCsrRng_bogDeltaArmMoveDown;
    TCanSigRecInf     tCsrInfo_bogArrowArmMoveUp;
    TCanSigRecRng_bo  tCsrRng_bogArrowArmMoveUp;
    TCanSigRecInf     tCsrInfo_bogArrowArmMoveDown;
    TCanSigRecRng_bo  tCsrRng_bogArrowArmMoveDown;
    TCanSigRecInf     tCsrInfo_bogTelescopeMoveOut;
    TCanSigRecRng_bo  tCsrRng_bogTelescopeMoveOut;
    TCanSigRecInf     tCsrInfo_bogTelescopeMoveIn;
    TCanSigRecRng_bo  tCsrRng_bogTelescopeMoveIn;
    TCanSigRecInf     tCsrInfo_bogTurretCounterClockWiseMove;
    TCanSigRecRng_bo  tCsrRng_bogTurretCounterClockWiseMove;
    TCanSigRecInf     tCsrInfo_bogTurretClockWiseMove;
    TCanSigRecRng_bo  tCsrRng_bogTurretClockWiseMove;
    TCanSigRecInf     tCsrInfo_bogTurretEncoderFault;
    TCanSigRecRng_bo  tCsrRng_bogTurretEncoderFault;
    TCanSigRecInf     tCsrInfo_bogGeneratorOption;
    TCanSigRecRng_bo  tCsrRng_bogGeneratorOption;
    TCanSigRecInf     tCsrInfo_bogGeneratorActive;
    TCanSigRecRng_bo  tCsrRng_bogGeneratorActive;
} TCanSigRecVal_Msg1C1SendToEvision7;

typedef struct
{
    const TCanSigRecRoot *cptRoot;                          //!< [POI] Root connection
    TUint8 u8gFuel;                                         //!< [[-]] new signal 
    TUint16 u16gBattery_Voltage;                            //!< [[-]] new signal 
    TUint8 u8gTrainTransmissionPressure;                    //!< [[-]] new signal 
    TInt16 i16gBypassPressureSensorValue;                   //!< [[-]] new signal 
} TCanSigRecMsg2C1SendToEvision7;

extern TCanSigRecMsg2C1SendToEvision7 gCsr_tMsg2C1SendToEvision7;

typedef struct
{
    TUint8 u8gFuel;                                         //!< [[-]] new signal 
    TUint16 u16gBattery_Voltage;                            //!< [[-]] new signal 
    TUint8 u8gTrainTransmissionPressure;                    //!< [[-]] new signal 
    TInt16 i16gBypassPressureSensorValue;                   //!< [[-]] new signal 
} TCanSigRecOldValMsg2C1SendToEvision7;

typedef struct
{
    TCanSigRecInf     tCsrInfo_u8gFuel;
    TCanSigRecRng_u8  tCsrRng_u8gFuel;
    TCanSigRecInf     tCsrInfo_u16gBattery_Voltage;
    TCanSigRecRng_u16 tCsrRng_u16gBattery_Voltage;
    TCanSigRecInf     tCsrInfo_u8gTrainTransmissionPressure;
    TCanSigRecRng_u8  tCsrRng_u8gTrainTransmissionPressure;
    TCanSigRecInf     tCsrInfo_i16gBypassPressureSensorValue;
    TCanSigRecRng_i16 tCsrRng_i16gBypassPressureSensorValue;
} TCanSigRecVal_Msg2C1SendToEvision7;

typedef struct
{
    const TCanSigRecRoot *cptRoot;                          //!< [POI] Root connection
    TUint32 u32MinValueEncodeurMast;                        //!< [[-]] new signal 
    TUint32 u32MaxValueEncodeurMast;                        //!< [[-]] new signal 
} TCanSigRecMsg3C1SendToEvision7;

extern TCanSigRecMsg3C1SendToEvision7 gCsr_tMsg3C1SendToEvision7;

typedef struct
{
    TUint32 u32MinValueEncodeurMast;                        //!< [[-]] new signal 
    TUint32 u32MaxValueEncodeurMast;                        //!< [[-]] new signal 
} TCanSigRecOldValMsg3C1SendToEvision7;

typedef struct
{
    TCanSigRecInf     tCsrInfo_u32MinValueEncodeurMast;
    TCanSigRecRng_u32 tCsrRng_u32MinValueEncodeurMast;
    TCanSigRecInf     tCsrInfo_u32MaxValueEncodeurMast;
    TCanSigRecRng_u32 tCsrRng_u32MaxValueEncodeurMast;
} TCanSigRecVal_Msg3C1SendToEvision7;

typedef struct
{
    const TCanSigRecRoot *cptRoot;                          //!< [POI] Root connection
    TUint32 u32EncodeurMastMeasureRaw;                      //!< [[-]] new signal 
    TUint16 u16EncodeurMastMeasureCentimeter;               //!< [[-]] new signal 
} TCanSigRecMsg4C1SendToEvision7;

extern TCanSigRecMsg4C1SendToEvision7 gCsr_tMsg4C1SendToEvision7;

typedef struct
{
    TUint32 u32EncodeurMastMeasureRaw;                      //!< [[-]] new signal 
    TUint16 u16EncodeurMastMeasureCentimeter;               //!< [[-]] new signal 
} TCanSigRecOldValMsg4C1SendToEvision7;

typedef struct
{
    TCanSigRecInf     tCsrInfo_u32EncodeurMastMeasureRaw;
    TCanSigRecRng_u32 tCsrRng_u32EncodeurMastMeasureRaw;
    TCanSigRecInf     tCsrInfo_u16EncodeurMastMeasureCentimeter;
    TCanSigRecRng_u16 tCsrRng_u16EncodeurMastMeasureCentimeter;
} TCanSigRecVal_Msg4C1SendToEvision7;

typedef struct
{
    const TCanSigRecRoot *cptRoot;                          //!< [POI] Root connection
    TBoolean boReserve0;                                    //!< [[-]] for the Neotec diag pages 
    TBoolean boReserve1;                                    //!< [[-]] for the Neotec diag pages 
    TBoolean boReserve2;                                    //!< [[-]] for the Neotec diag pages 
    TBoolean boReserve3;                                    //!< [[-]] for the Neotec diag pages 
    TBoolean boReserve4;                                    //!< [[-]] for the Neotec diag pages 
    TBoolean boReserve5;                                    //!< [[-]] for the Neotec diag pages 
    TBoolean boReserve6;                                    //!< [[-]] for the Neotec diag pages 
    TBoolean boReserve7;                                    //!< [[-]] for the Neotec diag pages 
    TBoolean boPin107;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin131;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin108;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin132;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin109;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin133;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin110;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin134;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin111;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin135;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin112;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin136;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin113;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin137;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin114;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin138;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin140;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin117;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin141;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin124;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin148;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin153;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin177;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin159;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin183;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin154;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin178;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin157;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin181;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin160;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin184;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin187;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin163;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin149;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin173;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin152;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin176;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin155;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin179;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin158;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin182;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin251;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin186;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin239;                                      //!< [[-]] for the Neotec diag pages 
} TCanSigRecMsg5C1SendToEvision7;

extern TCanSigRecMsg5C1SendToEvision7 gCsr_tMsg5C1SendToEvision7;

typedef struct
{
    TBoolean boReserve0;                                    //!< [[-]] for the Neotec diag pages 
    TBoolean boReserve1;                                    //!< [[-]] for the Neotec diag pages 
    TBoolean boReserve2;                                    //!< [[-]] for the Neotec diag pages 
    TBoolean boReserve3;                                    //!< [[-]] for the Neotec diag pages 
    TBoolean boReserve4;                                    //!< [[-]] for the Neotec diag pages 
    TBoolean boReserve5;                                    //!< [[-]] for the Neotec diag pages 
    TBoolean boReserve6;                                    //!< [[-]] for the Neotec diag pages 
    TBoolean boReserve7;                                    //!< [[-]] for the Neotec diag pages 
    TBoolean boPin107;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin131;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin108;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin132;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin109;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin133;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin110;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin134;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin111;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin135;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin112;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin136;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin113;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin137;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin114;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin138;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin140;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin117;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin141;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin124;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin148;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin153;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin177;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin159;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin183;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin154;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin178;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin157;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin181;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin160;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin184;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin187;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin163;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin149;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin173;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin152;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin176;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin155;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin179;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin158;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin182;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin251;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin186;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin239;                                      //!< [[-]] for the Neotec diag pages 
} TCanSigRecOldValMsg5C1SendToEvision7;

typedef struct
{
    TCanSigRecInf     tCsrInfo_boReserve0;
    TCanSigRecRng_bo  tCsrRng_boReserve0;
    TCanSigRecInf     tCsrInfo_boReserve1;
    TCanSigRecRng_bo  tCsrRng_boReserve1;
    TCanSigRecInf     tCsrInfo_boReserve2;
    TCanSigRecRng_bo  tCsrRng_boReserve2;
    TCanSigRecInf     tCsrInfo_boReserve3;
    TCanSigRecRng_bo  tCsrRng_boReserve3;
    TCanSigRecInf     tCsrInfo_boReserve4;
    TCanSigRecRng_bo  tCsrRng_boReserve4;
    TCanSigRecInf     tCsrInfo_boReserve5;
    TCanSigRecRng_bo  tCsrRng_boReserve5;
    TCanSigRecInf     tCsrInfo_boReserve6;
    TCanSigRecRng_bo  tCsrRng_boReserve6;
    TCanSigRecInf     tCsrInfo_boReserve7;
    TCanSigRecRng_bo  tCsrRng_boReserve7;
    TCanSigRecInf     tCsrInfo_boPin107;
    TCanSigRecRng_bo  tCsrRng_boPin107;
    TCanSigRecInf     tCsrInfo_boPin131;
    TCanSigRecRng_bo  tCsrRng_boPin131;
    TCanSigRecInf     tCsrInfo_boPin108;
    TCanSigRecRng_bo  tCsrRng_boPin108;
    TCanSigRecInf     tCsrInfo_boPin132;
    TCanSigRecRng_bo  tCsrRng_boPin132;
    TCanSigRecInf     tCsrInfo_boPin109;
    TCanSigRecRng_bo  tCsrRng_boPin109;
    TCanSigRecInf     tCsrInfo_boPin133;
    TCanSigRecRng_bo  tCsrRng_boPin133;
    TCanSigRecInf     tCsrInfo_boPin110;
    TCanSigRecRng_bo  tCsrRng_boPin110;
    TCanSigRecInf     tCsrInfo_boPin134;
    TCanSigRecRng_bo  tCsrRng_boPin134;
    TCanSigRecInf     tCsrInfo_boPin111;
    TCanSigRecRng_bo  tCsrRng_boPin111;
    TCanSigRecInf     tCsrInfo_boPin135;
    TCanSigRecRng_bo  tCsrRng_boPin135;
    TCanSigRecInf     tCsrInfo_boPin112;
    TCanSigRecRng_bo  tCsrRng_boPin112;
    TCanSigRecInf     tCsrInfo_boPin136;
    TCanSigRecRng_bo  tCsrRng_boPin136;
    TCanSigRecInf     tCsrInfo_boPin113;
    TCanSigRecRng_bo  tCsrRng_boPin113;
    TCanSigRecInf     tCsrInfo_boPin137;
    TCanSigRecRng_bo  tCsrRng_boPin137;
    TCanSigRecInf     tCsrInfo_boPin114;
    TCanSigRecRng_bo  tCsrRng_boPin114;
    TCanSigRecInf     tCsrInfo_boPin138;
    TCanSigRecRng_bo  tCsrRng_boPin138;
    TCanSigRecInf     tCsrInfo_boPin140;
    TCanSigRecRng_bo  tCsrRng_boPin140;
    TCanSigRecInf     tCsrInfo_boPin117;
    TCanSigRecRng_bo  tCsrRng_boPin117;
    TCanSigRecInf     tCsrInfo_boPin141;
    TCanSigRecRng_bo  tCsrRng_boPin141;
    TCanSigRecInf     tCsrInfo_boPin124;
    TCanSigRecRng_bo  tCsrRng_boPin124;
    TCanSigRecInf     tCsrInfo_boPin148;
    TCanSigRecRng_bo  tCsrRng_boPin148;
    TCanSigRecInf     tCsrInfo_boPin153;
    TCanSigRecRng_bo  tCsrRng_boPin153;
    TCanSigRecInf     tCsrInfo_boPin177;
    TCanSigRecRng_bo  tCsrRng_boPin177;
    TCanSigRecInf     tCsrInfo_boPin159;
    TCanSigRecRng_bo  tCsrRng_boPin159;
    TCanSigRecInf     tCsrInfo_boPin183;
    TCanSigRecRng_bo  tCsrRng_boPin183;
    TCanSigRecInf     tCsrInfo_boPin154;
    TCanSigRecRng_bo  tCsrRng_boPin154;
    TCanSigRecInf     tCsrInfo_boPin178;
    TCanSigRecRng_bo  tCsrRng_boPin178;
    TCanSigRecInf     tCsrInfo_boPin157;
    TCanSigRecRng_bo  tCsrRng_boPin157;
    TCanSigRecInf     tCsrInfo_boPin181;
    TCanSigRecRng_bo  tCsrRng_boPin181;
    TCanSigRecInf     tCsrInfo_boPin160;
    TCanSigRecRng_bo  tCsrRng_boPin160;
    TCanSigRecInf     tCsrInfo_boPin184;
    TCanSigRecRng_bo  tCsrRng_boPin184;
    TCanSigRecInf     tCsrInfo_boPin187;
    TCanSigRecRng_bo  tCsrRng_boPin187;
    TCanSigRecInf     tCsrInfo_boPin163;
    TCanSigRecRng_bo  tCsrRng_boPin163;
    TCanSigRecInf     tCsrInfo_boPin149;
    TCanSigRecRng_bo  tCsrRng_boPin149;
    TCanSigRecInf     tCsrInfo_boPin173;
    TCanSigRecRng_bo  tCsrRng_boPin173;
    TCanSigRecInf     tCsrInfo_boPin152;
    TCanSigRecRng_bo  tCsrRng_boPin152;
    TCanSigRecInf     tCsrInfo_boPin176;
    TCanSigRecRng_bo  tCsrRng_boPin176;
    TCanSigRecInf     tCsrInfo_boPin155;
    TCanSigRecRng_bo  tCsrRng_boPin155;
    TCanSigRecInf     tCsrInfo_boPin179;
    TCanSigRecRng_bo  tCsrRng_boPin179;
    TCanSigRecInf     tCsrInfo_boPin158;
    TCanSigRecRng_bo  tCsrRng_boPin158;
    TCanSigRecInf     tCsrInfo_boPin182;
    TCanSigRecRng_bo  tCsrRng_boPin182;
    TCanSigRecInf     tCsrInfo_boPin251;
    TCanSigRecRng_bo  tCsrRng_boPin251;
    TCanSigRecInf     tCsrInfo_boPin186;
    TCanSigRecRng_bo  tCsrRng_boPin186;
    TCanSigRecInf     tCsrInfo_boPin239;
    TCanSigRecRng_bo  tCsrRng_boPin239;
} TCanSigRecVal_Msg5C1SendToEvision7;

typedef struct
{
    const TCanSigRecRoot *cptRoot;                          //!< [POI] Root connection
    TBoolean boPin230Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin243Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin244Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin245Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin256Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin257Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin258Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin103Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin127Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin104Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin128Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin105Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin129Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin106Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin130Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin107Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin131Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin108Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin132Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin109Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin133Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin110Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin134Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin111Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin135Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin112Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin136Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin113Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin137Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin114Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin138Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin115Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin139Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin116Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin140Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin117Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin141Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin122Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin146Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin123Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin147Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin124Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin148Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin153Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin177Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin156Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin180Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin159Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin183Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin186Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin162Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin189Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin165Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin192Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin168Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin195Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin171Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin154Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin178Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin157Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin181Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin160Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin184Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin187Fault;                                 //!< [[-]] for the Neotec diag pages 
} TCanSigRecMsg6C1SendToEvision7;

extern TCanSigRecMsg6C1SendToEvision7 gCsr_tMsg6C1SendToEvision7;

typedef struct
{
    TBoolean boPin230Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin243Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin244Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin245Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin256Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin257Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin258Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin103Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin127Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin104Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin128Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin105Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin129Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin106Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin130Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin107Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin131Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin108Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin132Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin109Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin133Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin110Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin134Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin111Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin135Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin112Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin136Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin113Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin137Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin114Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin138Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin115Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin139Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin116Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin140Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin117Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin141Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin122Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin146Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin123Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin147Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin124Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin148Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin153Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin177Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin156Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin180Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin159Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin183Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin186Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin162Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin189Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin165Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin192Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin168Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin195Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin171Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin154Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin178Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin157Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin181Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin160Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin184Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin187Fault;                                 //!< [[-]] for the Neotec diag pages 
} TCanSigRecOldValMsg6C1SendToEvision7;

typedef struct
{
    TCanSigRecInf     tCsrInfo_boPin230Fault;
    TCanSigRecRng_bo  tCsrRng_boPin230Fault;
    TCanSigRecInf     tCsrInfo_boPin243Fault;
    TCanSigRecRng_bo  tCsrRng_boPin243Fault;
    TCanSigRecInf     tCsrInfo_boPin244Fault;
    TCanSigRecRng_bo  tCsrRng_boPin244Fault;
    TCanSigRecInf     tCsrInfo_boPin245Fault;
    TCanSigRecRng_bo  tCsrRng_boPin245Fault;
    TCanSigRecInf     tCsrInfo_boPin256Fault;
    TCanSigRecRng_bo  tCsrRng_boPin256Fault;
    TCanSigRecInf     tCsrInfo_boPin257Fault;
    TCanSigRecRng_bo  tCsrRng_boPin257Fault;
    TCanSigRecInf     tCsrInfo_boPin258Fault;
    TCanSigRecRng_bo  tCsrRng_boPin258Fault;
    TCanSigRecInf     tCsrInfo_boPin103Fault;
    TCanSigRecRng_bo  tCsrRng_boPin103Fault;
    TCanSigRecInf     tCsrInfo_boPin127Fault;
    TCanSigRecRng_bo  tCsrRng_boPin127Fault;
    TCanSigRecInf     tCsrInfo_boPin104Fault;
    TCanSigRecRng_bo  tCsrRng_boPin104Fault;
    TCanSigRecInf     tCsrInfo_boPin128Fault;
    TCanSigRecRng_bo  tCsrRng_boPin128Fault;
    TCanSigRecInf     tCsrInfo_boPin105Fault;
    TCanSigRecRng_bo  tCsrRng_boPin105Fault;
    TCanSigRecInf     tCsrInfo_boPin129Fault;
    TCanSigRecRng_bo  tCsrRng_boPin129Fault;
    TCanSigRecInf     tCsrInfo_boPin106Fault;
    TCanSigRecRng_bo  tCsrRng_boPin106Fault;
    TCanSigRecInf     tCsrInfo_boPin130Fault;
    TCanSigRecRng_bo  tCsrRng_boPin130Fault;
    TCanSigRecInf     tCsrInfo_boPin107Fault;
    TCanSigRecRng_bo  tCsrRng_boPin107Fault;
    TCanSigRecInf     tCsrInfo_boPin131Fault;
    TCanSigRecRng_bo  tCsrRng_boPin131Fault;
    TCanSigRecInf     tCsrInfo_boPin108Fault;
    TCanSigRecRng_bo  tCsrRng_boPin108Fault;
    TCanSigRecInf     tCsrInfo_boPin132Fault;
    TCanSigRecRng_bo  tCsrRng_boPin132Fault;
    TCanSigRecInf     tCsrInfo_boPin109Fault;
    TCanSigRecRng_bo  tCsrRng_boPin109Fault;
    TCanSigRecInf     tCsrInfo_boPin133Fault;
    TCanSigRecRng_bo  tCsrRng_boPin133Fault;
    TCanSigRecInf     tCsrInfo_boPin110Fault;
    TCanSigRecRng_bo  tCsrRng_boPin110Fault;
    TCanSigRecInf     tCsrInfo_boPin134Fault;
    TCanSigRecRng_bo  tCsrRng_boPin134Fault;
    TCanSigRecInf     tCsrInfo_boPin111Fault;
    TCanSigRecRng_bo  tCsrRng_boPin111Fault;
    TCanSigRecInf     tCsrInfo_boPin135Fault;
    TCanSigRecRng_bo  tCsrRng_boPin135Fault;
    TCanSigRecInf     tCsrInfo_boPin112Fault;
    TCanSigRecRng_bo  tCsrRng_boPin112Fault;
    TCanSigRecInf     tCsrInfo_boPin136Fault;
    TCanSigRecRng_bo  tCsrRng_boPin136Fault;
    TCanSigRecInf     tCsrInfo_boPin113Fault;
    TCanSigRecRng_bo  tCsrRng_boPin113Fault;
    TCanSigRecInf     tCsrInfo_boPin137Fault;
    TCanSigRecRng_bo  tCsrRng_boPin137Fault;
    TCanSigRecInf     tCsrInfo_boPin114Fault;
    TCanSigRecRng_bo  tCsrRng_boPin114Fault;
    TCanSigRecInf     tCsrInfo_boPin138Fault;
    TCanSigRecRng_bo  tCsrRng_boPin138Fault;
    TCanSigRecInf     tCsrInfo_boPin115Fault;
    TCanSigRecRng_bo  tCsrRng_boPin115Fault;
    TCanSigRecInf     tCsrInfo_boPin139Fault;
    TCanSigRecRng_bo  tCsrRng_boPin139Fault;
    TCanSigRecInf     tCsrInfo_boPin116Fault;
    TCanSigRecRng_bo  tCsrRng_boPin116Fault;
    TCanSigRecInf     tCsrInfo_boPin140Fault;
    TCanSigRecRng_bo  tCsrRng_boPin140Fault;
    TCanSigRecInf     tCsrInfo_boPin117Fault;
    TCanSigRecRng_bo  tCsrRng_boPin117Fault;
    TCanSigRecInf     tCsrInfo_boPin141Fault;
    TCanSigRecRng_bo  tCsrRng_boPin141Fault;
    TCanSigRecInf     tCsrInfo_boPin122Fault;
    TCanSigRecRng_bo  tCsrRng_boPin122Fault;
    TCanSigRecInf     tCsrInfo_boPin146Fault;
    TCanSigRecRng_bo  tCsrRng_boPin146Fault;
    TCanSigRecInf     tCsrInfo_boPin123Fault;
    TCanSigRecRng_bo  tCsrRng_boPin123Fault;
    TCanSigRecInf     tCsrInfo_boPin147Fault;
    TCanSigRecRng_bo  tCsrRng_boPin147Fault;
    TCanSigRecInf     tCsrInfo_boPin124Fault;
    TCanSigRecRng_bo  tCsrRng_boPin124Fault;
    TCanSigRecInf     tCsrInfo_boPin148Fault;
    TCanSigRecRng_bo  tCsrRng_boPin148Fault;
    TCanSigRecInf     tCsrInfo_boPin153Fault;
    TCanSigRecRng_bo  tCsrRng_boPin153Fault;
    TCanSigRecInf     tCsrInfo_boPin177Fault;
    TCanSigRecRng_bo  tCsrRng_boPin177Fault;
    TCanSigRecInf     tCsrInfo_boPin156Fault;
    TCanSigRecRng_bo  tCsrRng_boPin156Fault;
    TCanSigRecInf     tCsrInfo_boPin180Fault;
    TCanSigRecRng_bo  tCsrRng_boPin180Fault;
    TCanSigRecInf     tCsrInfo_boPin159Fault;
    TCanSigRecRng_bo  tCsrRng_boPin159Fault;
    TCanSigRecInf     tCsrInfo_boPin183Fault;
    TCanSigRecRng_bo  tCsrRng_boPin183Fault;
    TCanSigRecInf     tCsrInfo_boPin186Fault;
    TCanSigRecRng_bo  tCsrRng_boPin186Fault;
    TCanSigRecInf     tCsrInfo_boPin162Fault;
    TCanSigRecRng_bo  tCsrRng_boPin162Fault;
    TCanSigRecInf     tCsrInfo_boPin189Fault;
    TCanSigRecRng_bo  tCsrRng_boPin189Fault;
    TCanSigRecInf     tCsrInfo_boPin165Fault;
    TCanSigRecRng_bo  tCsrRng_boPin165Fault;
    TCanSigRecInf     tCsrInfo_boPin192Fault;
    TCanSigRecRng_bo  tCsrRng_boPin192Fault;
    TCanSigRecInf     tCsrInfo_boPin168Fault;
    TCanSigRecRng_bo  tCsrRng_boPin168Fault;
    TCanSigRecInf     tCsrInfo_boPin195Fault;
    TCanSigRecRng_bo  tCsrRng_boPin195Fault;
    TCanSigRecInf     tCsrInfo_boPin171Fault;
    TCanSigRecRng_bo  tCsrRng_boPin171Fault;
    TCanSigRecInf     tCsrInfo_boPin154Fault;
    TCanSigRecRng_bo  tCsrRng_boPin154Fault;
    TCanSigRecInf     tCsrInfo_boPin178Fault;
    TCanSigRecRng_bo  tCsrRng_boPin178Fault;
    TCanSigRecInf     tCsrInfo_boPin157Fault;
    TCanSigRecRng_bo  tCsrRng_boPin157Fault;
    TCanSigRecInf     tCsrInfo_boPin181Fault;
    TCanSigRecRng_bo  tCsrRng_boPin181Fault;
    TCanSigRecInf     tCsrInfo_boPin160Fault;
    TCanSigRecRng_bo  tCsrRng_boPin160Fault;
    TCanSigRecInf     tCsrInfo_boPin184Fault;
    TCanSigRecRng_bo  tCsrRng_boPin184Fault;
    TCanSigRecInf     tCsrInfo_boPin187Fault;
    TCanSigRecRng_bo  tCsrRng_boPin187Fault;
} TCanSigRecVal_Msg6C1SendToEvision7;

typedef struct
{
    const TCanSigRecRoot *cptRoot;                          //!< [POI] Root connection
    TBoolean boPin163Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin190Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin166Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin193Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin169Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin196Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin172Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin101Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin125Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin150Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin174Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin102Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin126Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin151Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin175Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin149Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin173Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin152Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin176Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin155Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin179Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin158Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin182Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin251Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin238Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin252Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin239Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin253Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin240Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin254Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin241Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin161Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin185Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin188Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin164Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin191Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin167Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin194Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin170Fault;                                 //!< [[-]] for the Neotec diag pages 
} TCanSigRecMsg7C1SendToEvision7;

extern TCanSigRecMsg7C1SendToEvision7 gCsr_tMsg7C1SendToEvision7;

typedef struct
{
    TBoolean boPin163Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin190Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin166Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin193Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin169Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin196Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin172Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin101Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin125Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin150Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin174Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin102Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin126Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin151Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin175Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin149Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin173Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin152Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin176Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin155Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin179Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin158Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin182Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin251Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin238Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin252Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin239Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin253Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin240Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin254Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin241Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin161Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin185Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin188Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin164Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin191Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin167Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin194Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin170Fault;                                 //!< [[-]] for the Neotec diag pages 
} TCanSigRecOldValMsg7C1SendToEvision7;

typedef struct
{
    TCanSigRecInf     tCsrInfo_boPin163Fault;
    TCanSigRecRng_bo  tCsrRng_boPin163Fault;
    TCanSigRecInf     tCsrInfo_boPin190Fault;
    TCanSigRecRng_bo  tCsrRng_boPin190Fault;
    TCanSigRecInf     tCsrInfo_boPin166Fault;
    TCanSigRecRng_bo  tCsrRng_boPin166Fault;
    TCanSigRecInf     tCsrInfo_boPin193Fault;
    TCanSigRecRng_bo  tCsrRng_boPin193Fault;
    TCanSigRecInf     tCsrInfo_boPin169Fault;
    TCanSigRecRng_bo  tCsrRng_boPin169Fault;
    TCanSigRecInf     tCsrInfo_boPin196Fault;
    TCanSigRecRng_bo  tCsrRng_boPin196Fault;
    TCanSigRecInf     tCsrInfo_boPin172Fault;
    TCanSigRecRng_bo  tCsrRng_boPin172Fault;
    TCanSigRecInf     tCsrInfo_boPin101Fault;
    TCanSigRecRng_bo  tCsrRng_boPin101Fault;
    TCanSigRecInf     tCsrInfo_boPin125Fault;
    TCanSigRecRng_bo  tCsrRng_boPin125Fault;
    TCanSigRecInf     tCsrInfo_boPin150Fault;
    TCanSigRecRng_bo  tCsrRng_boPin150Fault;
    TCanSigRecInf     tCsrInfo_boPin174Fault;
    TCanSigRecRng_bo  tCsrRng_boPin174Fault;
    TCanSigRecInf     tCsrInfo_boPin102Fault;
    TCanSigRecRng_bo  tCsrRng_boPin102Fault;
    TCanSigRecInf     tCsrInfo_boPin126Fault;
    TCanSigRecRng_bo  tCsrRng_boPin126Fault;
    TCanSigRecInf     tCsrInfo_boPin151Fault;
    TCanSigRecRng_bo  tCsrRng_boPin151Fault;
    TCanSigRecInf     tCsrInfo_boPin175Fault;
    TCanSigRecRng_bo  tCsrRng_boPin175Fault;
    TCanSigRecInf     tCsrInfo_boPin149Fault;
    TCanSigRecRng_bo  tCsrRng_boPin149Fault;
    TCanSigRecInf     tCsrInfo_boPin173Fault;
    TCanSigRecRng_bo  tCsrRng_boPin173Fault;
    TCanSigRecInf     tCsrInfo_boPin152Fault;
    TCanSigRecRng_bo  tCsrRng_boPin152Fault;
    TCanSigRecInf     tCsrInfo_boPin176Fault;
    TCanSigRecRng_bo  tCsrRng_boPin176Fault;
    TCanSigRecInf     tCsrInfo_boPin155Fault;
    TCanSigRecRng_bo  tCsrRng_boPin155Fault;
    TCanSigRecInf     tCsrInfo_boPin179Fault;
    TCanSigRecRng_bo  tCsrRng_boPin179Fault;
    TCanSigRecInf     tCsrInfo_boPin158Fault;
    TCanSigRecRng_bo  tCsrRng_boPin158Fault;
    TCanSigRecInf     tCsrInfo_boPin182Fault;
    TCanSigRecRng_bo  tCsrRng_boPin182Fault;
    TCanSigRecInf     tCsrInfo_boPin251Fault;
    TCanSigRecRng_bo  tCsrRng_boPin251Fault;
    TCanSigRecInf     tCsrInfo_boPin238Fault;
    TCanSigRecRng_bo  tCsrRng_boPin238Fault;
    TCanSigRecInf     tCsrInfo_boPin252Fault;
    TCanSigRecRng_bo  tCsrRng_boPin252Fault;
    TCanSigRecInf     tCsrInfo_boPin239Fault;
    TCanSigRecRng_bo  tCsrRng_boPin239Fault;
    TCanSigRecInf     tCsrInfo_boPin253Fault;
    TCanSigRecRng_bo  tCsrRng_boPin253Fault;
    TCanSigRecInf     tCsrInfo_boPin240Fault;
    TCanSigRecRng_bo  tCsrRng_boPin240Fault;
    TCanSigRecInf     tCsrInfo_boPin254Fault;
    TCanSigRecRng_bo  tCsrRng_boPin254Fault;
    TCanSigRecInf     tCsrInfo_boPin241Fault;
    TCanSigRecRng_bo  tCsrRng_boPin241Fault;
    TCanSigRecInf     tCsrInfo_boPin161Fault;
    TCanSigRecRng_bo  tCsrRng_boPin161Fault;
    TCanSigRecInf     tCsrInfo_boPin185Fault;
    TCanSigRecRng_bo  tCsrRng_boPin185Fault;
    TCanSigRecInf     tCsrInfo_boPin188Fault;
    TCanSigRecRng_bo  tCsrRng_boPin188Fault;
    TCanSigRecInf     tCsrInfo_boPin164Fault;
    TCanSigRecRng_bo  tCsrRng_boPin164Fault;
    TCanSigRecInf     tCsrInfo_boPin191Fault;
    TCanSigRecRng_bo  tCsrRng_boPin191Fault;
    TCanSigRecInf     tCsrInfo_boPin167Fault;
    TCanSigRecRng_bo  tCsrRng_boPin167Fault;
    TCanSigRecInf     tCsrInfo_boPin194Fault;
    TCanSigRecRng_bo  tCsrRng_boPin194Fault;
    TCanSigRecInf     tCsrInfo_boPin170Fault;
    TCanSigRecRng_bo  tCsrRng_boPin170Fault;
} TCanSigRecVal_Msg7C1SendToEvision7;

typedef struct
{
    const TCanSigRecRoot *cptRoot;                          //!< [POI] Root connection
    TUint16 u16gPvgDeltaArmVoltage;                         //!< [[-]] new signal 
    TUint16 u16gPvgArrowArmVoltage;                         //!< [[-]] new signal 
    TUint16 u16gPvgTelescopeArmVoltage;                     //!< [[-]] new signal 
    TUint16 u16gPvgEvTorVoltage;                            //!< [[-]] new signal 
} TCanSigRecMsg8C1SendToEvision7;

extern TCanSigRecMsg8C1SendToEvision7 gCsr_tMsg8C1SendToEvision7;

typedef struct
{
    TUint16 u16gPvgDeltaArmVoltage;                         //!< [[-]] new signal 
    TUint16 u16gPvgArrowArmVoltage;                         //!< [[-]] new signal 
    TUint16 u16gPvgTelescopeArmVoltage;                     //!< [[-]] new signal 
    TUint16 u16gPvgEvTorVoltage;                            //!< [[-]] new signal 
} TCanSigRecOldValMsg8C1SendToEvision7;

typedef struct
{
    TCanSigRecInf     tCsrInfo_u16gPvgDeltaArmVoltage;
    TCanSigRecRng_u16 tCsrRng_u16gPvgDeltaArmVoltage;
    TCanSigRecInf     tCsrInfo_u16gPvgArrowArmVoltage;
    TCanSigRecRng_u16 tCsrRng_u16gPvgArrowArmVoltage;
    TCanSigRecInf     tCsrInfo_u16gPvgTelescopeArmVoltage;
    TCanSigRecRng_u16 tCsrRng_u16gPvgTelescopeArmVoltage;
    TCanSigRecInf     tCsrInfo_u16gPvgEvTorVoltage;
    TCanSigRecRng_u16 tCsrRng_u16gPvgEvTorVoltage;
} TCanSigRecVal_Msg8C1SendToEvision7;

typedef struct
{
    const TCanSigRecRoot *cptRoot;                          //!< [POI] Root connection
    TBoolean bogPendularMoveUp;                             //!< [[-]] new signal 
    TBoolean bogPendularMoveDown;                           //!< [[-]] new signal 
    TBoolean bogBasketRotCtClockWiseMove;                   //!< [[-]] new signal 
    TBoolean bogBasketRtClockWiseMove;                      //!< [[-]] new signal 
    TBoolean bogBasketInclinaisonMoveUp;                    //!< [[-]] new signal 
    TBoolean bogBasketInclinaisonMoveDown;                  //!< [[-]] new signal 
    TBoolean bogFuelLow;                                    //!< [[-]] new signal 
    TInt16 i16gDeltaArmAngleValue;                          //!< [[-]] new signal 
    TInt16 i16gArrowArmAngleValue;                          //!< [[-]] new signal 
    TInt16 i16gTelescopePositionValue;                      //!< [[-]] new signal 
} TCanSigRecMsg9C1SendToEvision7;

extern TCanSigRecMsg9C1SendToEvision7 gCsr_tMsg9C1SendToEvision7;

typedef struct
{
    TBoolean bogPendularMoveUp;                             //!< [[-]] new signal 
    TBoolean bogPendularMoveDown;                           //!< [[-]] new signal 
    TBoolean bogBasketRotCtClockWiseMove;                   //!< [[-]] new signal 
    TBoolean bogBasketRtClockWiseMove;                      //!< [[-]] new signal 
    TBoolean bogBasketInclinaisonMoveUp;                    //!< [[-]] new signal 
    TBoolean bogBasketInclinaisonMoveDown;                  //!< [[-]] new signal 
    TBoolean bogFuelLow;                                    //!< [[-]] new signal 
    TInt16 i16gDeltaArmAngleValue;                          //!< [[-]] new signal 
    TInt16 i16gArrowArmAngleValue;                          //!< [[-]] new signal 
    TInt16 i16gTelescopePositionValue;                      //!< [[-]] new signal 
} TCanSigRecOldValMsg9C1SendToEvision7;

typedef struct
{
    TCanSigRecInf     tCsrInfo_bogPendularMoveUp;
    TCanSigRecRng_bo  tCsrRng_bogPendularMoveUp;
    TCanSigRecInf     tCsrInfo_bogPendularMoveDown;
    TCanSigRecRng_bo  tCsrRng_bogPendularMoveDown;
    TCanSigRecInf     tCsrInfo_bogBasketRotCtClockWiseMove;
    TCanSigRecRng_bo  tCsrRng_bogBasketRotCtClockWiseMove;
    TCanSigRecInf     tCsrInfo_bogBasketRtClockWiseMove;
    TCanSigRecRng_bo  tCsrRng_bogBasketRtClockWiseMove;
    TCanSigRecInf     tCsrInfo_bogBasketInclinaisonMoveUp;
    TCanSigRecRng_bo  tCsrRng_bogBasketInclinaisonMoveUp;
    TCanSigRecInf     tCsrInfo_bogBasketInclinaisonMoveDown;
    TCanSigRecRng_bo  tCsrRng_bogBasketInclinaisonMoveDown;
    TCanSigRecInf     tCsrInfo_bogFuelLow;
    TCanSigRecRng_bo  tCsrRng_bogFuelLow;
    TCanSigRecInf     tCsrInfo_i16gDeltaArmAngleValue;
    TCanSigRecRng_i16 tCsrRng_i16gDeltaArmAngleValue;
    TCanSigRecInf     tCsrInfo_i16gArrowArmAngleValue;
    TCanSigRecRng_i16 tCsrRng_i16gArrowArmAngleValue;
    TCanSigRecInf     tCsrInfo_i16gTelescopePositionValue;
    TCanSigRecRng_i16 tCsrRng_i16gTelescopePositionValue;
} TCanSigRecVal_Msg9C1SendToEvision7;

typedef struct
{
    const TCanSigRecRoot *cptRoot;                          //!< [POI] Root connection
    TUint8 u8gTTC510Version_Major;                          //!< [[-]] Program Version Major C1 TTC510 
    TUint8 u8gTTC510Version_Minor;                          //!< [[-]] Program Version Minor C1 TTC510 
    TUint8 u8gTTC510Version_Patch;                          //!< [[-]] Program Version Patch C1 TTC510 
    TUint8 u8gTTC510Version_Custom;                         //!< [[-]] Program Version Custom C1 TTC510 
    TUint8 u8gTTC48XSVersion_Major;                         //!< [[-]] Program Version Major TTC48XS 
    TUint8 u8gTTC48XSVersion_Minor;                         //!< [[-]] Program Version MinorTTC48XS 
    TUint8 u8gTTC48XSVersion_Patch;                         //!< [[-]] Program Version Patch TTC48XS 
    TUint8 u8gTTC48XSVersion_Custom;                        //!< [[-]] Program Version Custom TTC48XS 
} TCanSigRecMsg10C1SendToEvision7;

extern TCanSigRecMsg10C1SendToEvision7 gCsr_tMsg10C1SendToEvision7;

typedef struct
{
    TUint8 u8gTTC510Version_Major;                          //!< [[-]] Program Version Major C1 TTC510 
    TUint8 u8gTTC510Version_Minor;                          //!< [[-]] Program Version Minor C1 TTC510 
    TUint8 u8gTTC510Version_Patch;                          //!< [[-]] Program Version Patch C1 TTC510 
    TUint8 u8gTTC510Version_Custom;                         //!< [[-]] Program Version Custom C1 TTC510 
    TUint8 u8gTTC48XSVersion_Major;                         //!< [[-]] Program Version Major TTC48XS 
    TUint8 u8gTTC48XSVersion_Minor;                         //!< [[-]] Program Version MinorTTC48XS 
    TUint8 u8gTTC48XSVersion_Patch;                         //!< [[-]] Program Version Patch TTC48XS 
    TUint8 u8gTTC48XSVersion_Custom;                        //!< [[-]] Program Version Custom TTC48XS 
} TCanSigRecOldValMsg10C1SendToEvision7;

typedef struct
{
    TCanSigRecInf     tCsrInfo_u8gTTC510Version_Major;
    TCanSigRecRng_u8  tCsrRng_u8gTTC510Version_Major;
    TCanSigRecInf     tCsrInfo_u8gTTC510Version_Minor;
    TCanSigRecRng_u8  tCsrRng_u8gTTC510Version_Minor;
    TCanSigRecInf     tCsrInfo_u8gTTC510Version_Patch;
    TCanSigRecRng_u8  tCsrRng_u8gTTC510Version_Patch;
    TCanSigRecInf     tCsrInfo_u8gTTC510Version_Custom;
    TCanSigRecRng_u8  tCsrRng_u8gTTC510Version_Custom;
    TCanSigRecInf     tCsrInfo_u8gTTC48XSVersion_Major;
    TCanSigRecRng_u8  tCsrRng_u8gTTC48XSVersion_Major;
    TCanSigRecInf     tCsrInfo_u8gTTC48XSVersion_Minor;
    TCanSigRecRng_u8  tCsrRng_u8gTTC48XSVersion_Minor;
    TCanSigRecInf     tCsrInfo_u8gTTC48XSVersion_Patch;
    TCanSigRecRng_u8  tCsrRng_u8gTTC48XSVersion_Patch;
    TCanSigRecInf     tCsrInfo_u8gTTC48XSVersion_Custom;
    TCanSigRecRng_u8  tCsrRng_u8gTTC48XSVersion_Custom;
} TCanSigRecVal_Msg10C1SendToEvision7;

typedef struct
{
    const TCanSigRecRoot *cptRoot;                          //!< [POI] Root connection
    TInt16 i16gScalingJoysTurret;                           //!< [[-]] new signal 
    TInt16 i16gScalingJoysDeltaArm;                         //!< [[-]] new signal 
    TInt16 i16gScalingJoysArrowArm;                         //!< [[-]] new signal 
    TInt16 i16gScalingJoysTelescopeArm;                     //!< [[-]] new signal 
} TCanSigRecMsg11C1SendToEvision7;

extern TCanSigRecMsg11C1SendToEvision7 gCsr_tMsg11C1SendToEvision7;

typedef struct
{
    TInt16 i16gScalingJoysTurret;                           //!< [[-]] new signal 
    TInt16 i16gScalingJoysDeltaArm;                         //!< [[-]] new signal 
    TInt16 i16gScalingJoysArrowArm;                         //!< [[-]] new signal 
    TInt16 i16gScalingJoysTelescopeArm;                     //!< [[-]] new signal 
} TCanSigRecOldValMsg11C1SendToEvision7;

typedef struct
{
    TCanSigRecInf     tCsrInfo_i16gScalingJoysTurret;
    TCanSigRecRng_i16 tCsrRng_i16gScalingJoysTurret;
    TCanSigRecInf     tCsrInfo_i16gScalingJoysDeltaArm;
    TCanSigRecRng_i16 tCsrRng_i16gScalingJoysDeltaArm;
    TCanSigRecInf     tCsrInfo_i16gScalingJoysArrowArm;
    TCanSigRecRng_i16 tCsrRng_i16gScalingJoysArrowArm;
    TCanSigRecInf     tCsrInfo_i16gScalingJoysTelescopeArm;
    TCanSigRecRng_i16 tCsrRng_i16gScalingJoysTelescopeArm;
} TCanSigRecVal_Msg11C1SendToEvision7;

typedef struct
{
    const TCanSigRecRoot *cptRoot;                          //!< [POI] Root connection
    TUint16 u16gTelescopePVGValue;                          //!< [[-]] new signal 
    TUint16 u16gTelescopeLengthPercentile;                  //!< [[-]] new signal 
    TInt16 i16gGeneratorSolenoidValue;                      //!< [[-]] new signal 
    TInt16 i16gRPMSolenoidValue;                            //!< [[-]] new signal 
} TCanSigRecMsg12C1SendToEvision7;

extern TCanSigRecMsg12C1SendToEvision7 gCsr_tMsg12C1SendToEvision7;

typedef struct
{
    TUint16 u16gTelescopePVGValue;                          //!< [[-]] new signal 
    TUint16 u16gTelescopeLengthPercentile;                  //!< [[-]] new signal 
    TInt16 i16gGeneratorSolenoidValue;                      //!< [[-]] new signal 
    TInt16 i16gRPMSolenoidValue;                            //!< [[-]] new signal 
} TCanSigRecOldValMsg12C1SendToEvision7;

typedef struct
{
    TCanSigRecInf     tCsrInfo_u16gTelescopePVGValue;
    TCanSigRecRng_u16 tCsrRng_u16gTelescopePVGValue;
    TCanSigRecInf     tCsrInfo_u16gTelescopeLengthPercentile;
    TCanSigRecRng_u16 tCsrRng_u16gTelescopeLengthPercentile;
    TCanSigRecInf     tCsrInfo_i16gGeneratorSolenoidValue;
    TCanSigRecRng_i16 tCsrRng_i16gGeneratorSolenoidValue;
    TCanSigRecInf     tCsrInfo_i16gRPMSolenoidValue;
    TCanSigRecRng_i16 tCsrRng_i16gRPMSolenoidValue;
} TCanSigRecVal_Msg12C1SendToEvision7;

typedef struct
{
    const TCanSigRecRoot *cptRoot;                          //!< [POI] Root connection
    TInt16 i16gBypassPressureSensorValue;                   //!< [[-]] new signal 
    TUint16 u16gBatteryVoltageMv;                           //!< [[-]] new signal 
    TUint16 u16RemainingRegenTimeAverage;                   //!< [[-]] new signal 
    TBoolean boElectricMotorForbidden;                      //!< [[-]] new signal 
    TBoolean boReloadWithGeneratorOn;                       //!< [[-]] new signal 
    TBoolean boPictoColdOilTankTemperature;                 //!< [[-]] new signal 
    TBoolean boPictoWarningValidCycleMast;                  //!< [[-]] new signal 
} TCanSigRecMsg13C1SendToEvision7;

extern TCanSigRecMsg13C1SendToEvision7 gCsr_tMsg13C1SendToEvision7;

typedef struct
{
    TInt16 i16gBypassPressureSensorValue;                   //!< [[-]] new signal 
    TUint16 u16gBatteryVoltageMv;                           //!< [[-]] new signal 
    TUint16 u16RemainingRegenTimeAverage;                   //!< [[-]] new signal 
    TBoolean boElectricMotorForbidden;                      //!< [[-]] new signal 
    TBoolean boReloadWithGeneratorOn;                       //!< [[-]] new signal 
    TBoolean boPictoColdOilTankTemperature;                 //!< [[-]] new signal 
    TBoolean boPictoWarningValidCycleMast;                  //!< [[-]] new signal 
} TCanSigRecOldValMsg13C1SendToEvision7;

typedef struct
{
    TCanSigRecInf     tCsrInfo_i16gBypassPressureSensorValue;
    TCanSigRecRng_i16 tCsrRng_i16gBypassPressureSensorValue;
    TCanSigRecInf     tCsrInfo_u16gBatteryVoltageMv;
    TCanSigRecRng_u16 tCsrRng_u16gBatteryVoltageMv;
    TCanSigRecInf     tCsrInfo_u16RemainingRegenTimeAverage;
    TCanSigRecRng_u16 tCsrRng_u16RemainingRegenTimeAverage;
    TCanSigRecInf     tCsrInfo_boElectricMotorForbidden;
    TCanSigRecRng_bo  tCsrRng_boElectricMotorForbidden;
    TCanSigRecInf     tCsrInfo_boReloadWithGeneratorOn;
    TCanSigRecRng_bo  tCsrRng_boReloadWithGeneratorOn;
    TCanSigRecInf     tCsrInfo_boPictoColdOilTankTemperature;
    TCanSigRecRng_bo  tCsrRng_boPictoColdOilTankTemperature;
    TCanSigRecInf     tCsrInfo_boPictoWarningValidCycleMast;
    TCanSigRecRng_bo  tCsrRng_boPictoWarningValidCycleMast;
} TCanSigRecVal_Msg13C1SendToEvision7;

typedef struct
{
    const TCanSigRecRoot *cptRoot;                          //!< [POI] Root connection
    TInt16 i16OilTankTemperatureValue;                      //!< [[-]] new signal 
    TUint16 u16TotalRegenHours;                             //!< [[-]] new signal 
    TUint16 u16TotalElectricHours;                          //!< [[-]] new signal 
} TCanSigRecMsg14C1SendToEvision7;

extern TCanSigRecMsg14C1SendToEvision7 gCsr_tMsg14C1SendToEvision7;

typedef struct
{
    TInt16 i16OilTankTemperatureValue;                      //!< [[-]] new signal 
    TUint16 u16TotalRegenHours;                             //!< [[-]] new signal 
    TUint16 u16TotalElectricHours;                          //!< [[-]] new signal 
} TCanSigRecOldValMsg14C1SendToEvision7;

typedef struct
{
    TCanSigRecInf     tCsrInfo_i16OilTankTemperatureValue;
    TCanSigRecRng_i16 tCsrRng_i16OilTankTemperatureValue;
    TCanSigRecInf     tCsrInfo_u16TotalRegenHours;
    TCanSigRecRng_u16 tCsrRng_u16TotalRegenHours;
    TCanSigRecInf     tCsrInfo_u16TotalElectricHours;
    TCanSigRecRng_u16 tCsrRng_u16TotalElectricHours;
} TCanSigRecVal_Msg14C1SendToEvision7;

typedef struct
{
    const TCanSigRecRoot *cptRoot;                          //!< [POI] Root connection
    TUint16 u16FaultyValue;                                 //!< [[-]] new signal 
    TUint8 u8DeviceNum;                                     //!< [[-]] new signal 
    TUint8 u8ErrorCode;                                     //!< [[-]] new signal 
    TInt16 i16DebugVehicleSlope;                            //!< [[-]] new signal 
} TCanSigRecMsgDebugC1SendToEvision7;

extern TCanSigRecMsgDebugC1SendToEvision7 gCsr_tMsgDebugC1SendToEvision7;

typedef struct
{
    TUint16 u16FaultyValue;                                 //!< [[-]] new signal 
    TUint8 u8DeviceNum;                                     //!< [[-]] new signal 
    TUint8 u8ErrorCode;                                     //!< [[-]] new signal 
    TInt16 i16DebugVehicleSlope;                            //!< [[-]] new signal 
} TCanSigRecOldValMsgDebugC1SendToEvision7;

typedef struct
{
    TCanSigRecInf     tCsrInfo_u16FaultyValue;
    TCanSigRecRng_u16 tCsrRng_u16FaultyValue;
    TCanSigRecInf     tCsrInfo_u8DeviceNum;
    TCanSigRecRng_u8  tCsrRng_u8DeviceNum;
    TCanSigRecInf     tCsrInfo_u8ErrorCode;
    TCanSigRecRng_u8  tCsrRng_u8ErrorCode;
    TCanSigRecInf     tCsrInfo_i16DebugVehicleSlope;
    TCanSigRecRng_i16 tCsrRng_i16DebugVehicleSlope;
} TCanSigRecVal_MsgDebugC1SendToEvision7;

typedef struct
{
    const TCanSigRecRoot *cptRoot;                          //!< [POI] Root connection
    TBoolean bogLoginStatus;                                //!< [[-]] User Log in Status (1=log in) 
    TBoolean bogButtonCalibTurretEncoder;                   //!< [[-]] Button for the calibration of the turret encoder is pressed 
    TBoolean bogButtonCalibMinMastMeasure;                  //!< [[-]] Button for the calibration of min position mast measure encodeur 
    TBoolean bogButtonCalibMaxMastMeasure;                  //!< [[-]] Button for the calibration of max position mast measure encodeur 
    TBoolean boSavePosEncodeurMastButton;                   //!< [[-]] Button for save min and max value of encodeur mast measure 
    TBoolean bogActivateMeasuringMast;                      //!< [[-]] Activate mast measure function 
    TBoolean boRazDistanceTraveledMastMeasure;              //!< [[-]] Raz distance translation traveled with mast measure unfolded 
    TBoolean bogOffTrackTestBrakeActivated;                 //!< [[-]] Status of off track variable on test brake page 
    TBoolean bogOffTrackRunInBrakeActivated;                //!< [[-]] Status of off track variable on run in process page 
    TBoolean bogOsciServiceBrakeSelect;                     //!< [[-]] Request status of osci service test brake 
    TBoolean bogFixedServiceBrakeSelect;                    //!< [[-]] Request status of fixed service test brake 
    TBoolean bogBothServiceBrakeSelect;                     //!< [[-]] Request status of both service test brake 
    TBoolean bogOsciParkBrakeSelect;                        //!< [[-]] Request status of osci park test brake 
    TBoolean bogFixedParkBrakeSelect;                       //!< [[-]] Request status of fixed park test brake 
    TBoolean bogBothParkBrakeSelect;                        //!< [[-]] Request status of both park test brake 
    TBoolean bogOsciServiceRunInBrakeSelect;                //!< [[-]] Request status of osci service run in brake 
    TBoolean bogFixedServiceRunInBrakeSelect;               //!< [[-]] Request status of fixed service run in test brake 
    TBoolean bogBothServiceRunInBrakeSelect;                //!< [[-]] Request status of both service run in test brake 
    TBoolean bogTestBrakePageActive;                        //!< [[-]] Flag when user is on test brake page 
    TBoolean bogBreakInBrakePageActive;                     //!< [[-]] Flag when user is on break in brake page 
    TBoolean bogSerialNumber;                               //!< [[-]] Machine Serial Number 
    TBoolean bogBPBasketValidate;                           //!< [[-]] Basket Panel Validate 
    TBoolean bogKeyFilterOverload;                          //!< [[-]] Overload Filter Key 
    TBoolean bogKeyNextMode;                                //!< [[-]] Select next mode 
    TBoolean bogKeyPrevMode;                                //!< [[-]] Select Previous Mode 
    TBoolean bogKeySignalDanger;                            //!< [[-]] Select Signal Danger Mode 
    TBoolean bogKeyFlashLightON;                            //!< [[-]] Force Flash Light ON 
    TBoolean bogKeyCalibMastMin;                            //!< [[-]] Key Calibration Min 
    TBoolean bogKeyCalibMastMax;                            //!< [[-]] Key Calibration Max 
    TBoolean bogKeyCalibMastValid;                          //!< [[-]] Key Calibration Validation 
    TBoolean bogKeyGeneratorActivate;                       //!< [[-]] Key Generator Activation 
    TBoolean bogKeyWhiteLights15746;                        //!< [[-]] Key whiite lights 15746 
    TBoolean bogFixe2ndParkBrakeSelect;                     //!< [[-]] Fixe 2nd Park Brake Select 
    TBoolean bogOsci2ndParkBrakeSelect;                     //!< [[-]] Osci 2nd Park Brake Select 
    TBoolean bogKeyRazController;                           //!< [[-]] new signal 
} TCanSigRecMsg1RcvFromEvision7;

extern TCanSigRecMsg1RcvFromEvision7 gCsr_tMsg1RcvFromEvision7;

typedef struct
{
    TBoolean bogLoginStatus;                                //!< [[-]] User Log in Status (1=log in) 
    TBoolean bogButtonCalibTurretEncoder;                   //!< [[-]] Button for the calibration of the turret encoder is pressed 
    TBoolean bogButtonCalibMinMastMeasure;                  //!< [[-]] Button for the calibration of min position mast measure encodeur 
    TBoolean bogButtonCalibMaxMastMeasure;                  //!< [[-]] Button for the calibration of max position mast measure encodeur 
    TBoolean boSavePosEncodeurMastButton;                   //!< [[-]] Button for save min and max value of encodeur mast measure 
    TBoolean bogActivateMeasuringMast;                      //!< [[-]] Activate mast measure function 
    TBoolean boRazDistanceTraveledMastMeasure;              //!< [[-]] Raz distance translation traveled with mast measure unfolded 
    TBoolean bogOffTrackTestBrakeActivated;                 //!< [[-]] Status of off track variable on test brake page 
    TBoolean bogOffTrackRunInBrakeActivated;                //!< [[-]] Status of off track variable on run in process page 
    TBoolean bogOsciServiceBrakeSelect;                     //!< [[-]] Request status of osci service test brake 
    TBoolean bogFixedServiceBrakeSelect;                    //!< [[-]] Request status of fixed service test brake 
    TBoolean bogBothServiceBrakeSelect;                     //!< [[-]] Request status of both service test brake 
    TBoolean bogOsciParkBrakeSelect;                        //!< [[-]] Request status of osci park test brake 
    TBoolean bogFixedParkBrakeSelect;                       //!< [[-]] Request status of fixed park test brake 
    TBoolean bogBothParkBrakeSelect;                        //!< [[-]] Request status of both park test brake 
    TBoolean bogOsciServiceRunInBrakeSelect;                //!< [[-]] Request status of osci service run in brake 
    TBoolean bogFixedServiceRunInBrakeSelect;               //!< [[-]] Request status of fixed service run in test brake 
    TBoolean bogBothServiceRunInBrakeSelect;                //!< [[-]] Request status of both service run in test brake 
    TBoolean bogTestBrakePageActive;                        //!< [[-]] Flag when user is on test brake page 
    TBoolean bogBreakInBrakePageActive;                     //!< [[-]] Flag when user is on break in brake page 
    TBoolean bogSerialNumber;                               //!< [[-]] Machine Serial Number 
    TBoolean bogBPBasketValidate;                           //!< [[-]] Basket Panel Validate 
    TBoolean bogKeyFilterOverload;                          //!< [[-]] Overload Filter Key 
    TBoolean bogKeyNextMode;                                //!< [[-]] Select next mode 
    TBoolean bogKeyPrevMode;                                //!< [[-]] Select Previous Mode 
    TBoolean bogKeySignalDanger;                            //!< [[-]] Select Signal Danger Mode 
    TBoolean bogKeyFlashLightON;                            //!< [[-]] Force Flash Light ON 
    TBoolean bogKeyCalibMastMin;                            //!< [[-]] Key Calibration Min 
    TBoolean bogKeyCalibMastMax;                            //!< [[-]] Key Calibration Max 
    TBoolean bogKeyCalibMastValid;                          //!< [[-]] Key Calibration Validation 
    TBoolean bogKeyGeneratorActivate;                       //!< [[-]] Key Generator Activation 
    TBoolean bogKeyWhiteLights15746;                        //!< [[-]] Key whiite lights 15746 
    TBoolean bogFixe2ndParkBrakeSelect;                     //!< [[-]] Fixe 2nd Park Brake Select 
    TBoolean bogOsci2ndParkBrakeSelect;                     //!< [[-]] Osci 2nd Park Brake Select 
    TBoolean bogKeyRazController;                           //!< [[-]] new signal 
} TCanSigRecOldValMsg1RcvFromEvision7;

typedef struct
{
    TCanSigRecInf     tCsrInfo_bogLoginStatus;
    TCanSigRecRng_bo  tCsrRng_bogLoginStatus;
    TCanSigRecInf     tCsrInfo_bogButtonCalibTurretEncoder;
    TCanSigRecRng_bo  tCsrRng_bogButtonCalibTurretEncoder;
    TCanSigRecInf     tCsrInfo_bogButtonCalibMinMastMeasure;
    TCanSigRecRng_bo  tCsrRng_bogButtonCalibMinMastMeasure;
    TCanSigRecInf     tCsrInfo_bogButtonCalibMaxMastMeasure;
    TCanSigRecRng_bo  tCsrRng_bogButtonCalibMaxMastMeasure;
    TCanSigRecInf     tCsrInfo_boSavePosEncodeurMastButton;
    TCanSigRecRng_bo  tCsrRng_boSavePosEncodeurMastButton;
    TCanSigRecInf     tCsrInfo_bogActivateMeasuringMast;
    TCanSigRecRng_bo  tCsrRng_bogActivateMeasuringMast;
    TCanSigRecInf     tCsrInfo_boRazDistanceTraveledMastMeasure;
    TCanSigRecRng_bo  tCsrRng_boRazDistanceTraveledMastMeasure;
    TCanSigRecInf     tCsrInfo_bogOffTrackTestBrakeActivated;
    TCanSigRecRng_bo  tCsrRng_bogOffTrackTestBrakeActivated;
    TCanSigRecInf     tCsrInfo_bogOffTrackRunInBrakeActivated;
    TCanSigRecRng_bo  tCsrRng_bogOffTrackRunInBrakeActivated;
    TCanSigRecInf     tCsrInfo_bogOsciServiceBrakeSelect;
    TCanSigRecRng_bo  tCsrRng_bogOsciServiceBrakeSelect;
    TCanSigRecInf     tCsrInfo_bogFixedServiceBrakeSelect;
    TCanSigRecRng_bo  tCsrRng_bogFixedServiceBrakeSelect;
    TCanSigRecInf     tCsrInfo_bogBothServiceBrakeSelect;
    TCanSigRecRng_bo  tCsrRng_bogBothServiceBrakeSelect;
    TCanSigRecInf     tCsrInfo_bogOsciParkBrakeSelect;
    TCanSigRecRng_bo  tCsrRng_bogOsciParkBrakeSelect;
    TCanSigRecInf     tCsrInfo_bogFixedParkBrakeSelect;
    TCanSigRecRng_bo  tCsrRng_bogFixedParkBrakeSelect;
    TCanSigRecInf     tCsrInfo_bogBothParkBrakeSelect;
    TCanSigRecRng_bo  tCsrRng_bogBothParkBrakeSelect;
    TCanSigRecInf     tCsrInfo_bogOsciServiceRunInBrakeSelect;
    TCanSigRecRng_bo  tCsrRng_bogOsciServiceRunInBrakeSelect;
    TCanSigRecInf     tCsrInfo_bogFixedServiceRunInBrakeSelect;
    TCanSigRecRng_bo  tCsrRng_bogFixedServiceRunInBrakeSelect;
    TCanSigRecInf     tCsrInfo_bogBothServiceRunInBrakeSelect;
    TCanSigRecRng_bo  tCsrRng_bogBothServiceRunInBrakeSelect;
    TCanSigRecInf     tCsrInfo_bogTestBrakePageActive;
    TCanSigRecRng_bo  tCsrRng_bogTestBrakePageActive;
    TCanSigRecInf     tCsrInfo_bogBreakInBrakePageActive;
    TCanSigRecRng_bo  tCsrRng_bogBreakInBrakePageActive;
    TCanSigRecInf     tCsrInfo_bogSerialNumber;
    TCanSigRecRng_bo  tCsrRng_bogSerialNumber;
    TCanSigRecInf     tCsrInfo_bogBPBasketValidate;
    TCanSigRecRng_bo  tCsrRng_bogBPBasketValidate;
    TCanSigRecInf     tCsrInfo_bogKeyFilterOverload;
    TCanSigRecRng_bo  tCsrRng_bogKeyFilterOverload;
    TCanSigRecInf     tCsrInfo_bogKeyNextMode;
    TCanSigRecRng_bo  tCsrRng_bogKeyNextMode;
    TCanSigRecInf     tCsrInfo_bogKeyPrevMode;
    TCanSigRecRng_bo  tCsrRng_bogKeyPrevMode;
    TCanSigRecInf     tCsrInfo_bogKeySignalDanger;
    TCanSigRecRng_bo  tCsrRng_bogKeySignalDanger;
    TCanSigRecInf     tCsrInfo_bogKeyFlashLightON;
    TCanSigRecRng_bo  tCsrRng_bogKeyFlashLightON;
    TCanSigRecInf     tCsrInfo_bogKeyCalibMastMin;
    TCanSigRecRng_bo  tCsrRng_bogKeyCalibMastMin;
    TCanSigRecInf     tCsrInfo_bogKeyCalibMastMax;
    TCanSigRecRng_bo  tCsrRng_bogKeyCalibMastMax;
    TCanSigRecInf     tCsrInfo_bogKeyCalibMastValid;
    TCanSigRecRng_bo  tCsrRng_bogKeyCalibMastValid;
    TCanSigRecInf     tCsrInfo_bogKeyGeneratorActivate;
    TCanSigRecRng_bo  tCsrRng_bogKeyGeneratorActivate;
    TCanSigRecInf     tCsrInfo_bogKeyWhiteLights15746;
    TCanSigRecRng_bo  tCsrRng_bogKeyWhiteLights15746;
    TCanSigRecInf     tCsrInfo_bogFixe2ndParkBrakeSelect;
    TCanSigRecRng_bo  tCsrRng_bogFixe2ndParkBrakeSelect;
    TCanSigRecInf     tCsrInfo_bogOsci2ndParkBrakeSelect;
    TCanSigRecRng_bo  tCsrRng_bogOsci2ndParkBrakeSelect;
    TCanSigRecInf     tCsrInfo_bogKeyRazController;
    TCanSigRecRng_bo  tCsrRng_bogKeyRazController;
} TCanSigRecVal_Msg1RcvFromEvision7;

typedef struct
{
    const TCanSigRecRoot *cptRoot;                          //!< [POI] Root connection
    TUint8 u8OverrideControlMode;                           //!< [] new signal 
    TUint16 u16RequestedEngineSpeed;                        //!< [rpm] new signal 
    TInt8 i8RequestedTorqueLimit;                           //!< [%] new signal 
    TUint8 u8TSC1ControlPurpose;                            //!< [] new signal 
    TUint8 u8RequestedEngineTorque;                         //!< [%] new signal 
    TUint8 u8MessageCounterChecksum;                        //!< [] new signal 
} TCanSigRecTSC1;

extern TCanSigRecTSC1 gCsr_tTSC1;

typedef struct
{
    TUint8 u8OverrideControlMode;                           //!< [] new signal 
    TUint16 u16RequestedEngineSpeed;                        //!< [rpm] new signal 
    TUint8 u8RequestedTorqueLimit;                          //!< [%] new signal 
    TUint8 u8TSC1ControlPurpose;                            //!< [] new signal 
    TUint8 u8RequestedEngineTorque;                         //!< [%] new signal 
    TUint8 u8MessageCounterChecksum;                        //!< [] new signal 
} TCanSigRecOldValTSC1;

typedef struct
{
    TCanSigRecInf     tCsrInfo_u8OverrideControlMode;
    TCanSigRecRng_u8  tCsrRng_u8OverrideControlMode;
    TCanSigRecInf     tCsrInfo_u16RequestedEngineSpeed;
    TCanSigRecRng_u16 tCsrRng_u16RequestedEngineSpeed;
    TCanSigRecInf     tCsrInfo_i8RequestedTorqueLimit;
    TCanSigRecRng_u8  tCsrRng_i8RequestedTorqueLimit;
    TCanSigRecInf     tCsrInfo_u8TSC1ControlPurpose;
    TCanSigRecRng_u8  tCsrRng_u8TSC1ControlPurpose;
    TCanSigRecInf     tCsrInfo_u8RequestedEngineTorque;
    TCanSigRecRng_u8  tCsrRng_u8RequestedEngineTorque;
    TCanSigRecInf     tCsrInfo_u8MessageCounterChecksum;
    TCanSigRecRng_u8  tCsrRng_u8MessageCounterChecksum;
} TCanSigRecVal_TSC1;

typedef struct
{
    const TCanSigRecRoot *cptRoot;                          //!< [POI] Root connection
    TUint8 u8EngineTorqueMode;                              //!< [[-]] new signal 
    TInt8 i8DriversDemandEnginePrctTorque;                  //!< [[-]] new signal 
    TInt8 i8ActualEnginePercentTorque;                      //!< [[-]] new signal 
    TUint16 u16EngineSpeed;                                 //!< [[-]] new signal 
    TUint8 u8SrcAddrOfCtrllingDevForEngCtrl;                //!< [[-]] new signal 
    TUint8 u8EngineStarterMode;                             //!< [[-]] new signal 
    TInt8 i8EngineDemandPercentTorque;                      //!< [[-]] new signal 
} TCanSigRecEEC1;

extern TCanSigRecEEC1 gCsr_tEEC1;

typedef struct
{
    TUint8 u8EngineTorqueMode;                              //!< [[-]] new signal 
    TUint8 u8DriversDemandEnginePrctTorque;                 //!< [[-]] new signal 
    TUint8 u8ActualEnginePercentTorque;                     //!< [[-]] new signal 
    TUint16 u16EngineSpeed;                                 //!< [[-]] new signal 
    TUint8 u8SrcAddrOfCtrllingDevForEngCtrl;                //!< [[-]] new signal 
    TUint8 u8EngineStarterMode;                             //!< [[-]] new signal 
    TUint8 u8EngineDemandPercentTorque;                     //!< [[-]] new signal 
} TCanSigRecOldValEEC1;

typedef struct
{
    TCanSigRecInf     tCsrInfo_u8EngineTorqueMode;
    TCanSigRecRng_u8  tCsrRng_u8EngineTorqueMode;
    TCanSigRecInf     tCsrInfo_i8DriversDemandEnginePrctTorque;
    TCanSigRecRng_u8  tCsrRng_i8DriversDemandEnginePrctTorque;
    TCanSigRecInf     tCsrInfo_i8ActualEnginePercentTorque;
    TCanSigRecRng_u8  tCsrRng_i8ActualEnginePercentTorque;
    TCanSigRecInf     tCsrInfo_u16EngineSpeed;
    TCanSigRecRng_u16 tCsrRng_u16EngineSpeed;
    TCanSigRecInf     tCsrInfo_u8SrcAddrOfCtrllingDevForEngCtrl;
    TCanSigRecRng_u8  tCsrRng_u8SrcAddrOfCtrllingDevForEngCtrl;
    TCanSigRecInf     tCsrInfo_u8EngineStarterMode;
    TCanSigRecRng_u8  tCsrRng_u8EngineStarterMode;
    TCanSigRecInf     tCsrInfo_i8EngineDemandPercentTorque;
    TCanSigRecRng_u8  tCsrRng_i8EngineDemandPercentTorque;
} TCanSigRecVal_EEC1;

typedef struct
{
    const TCanSigRecRoot *cptRoot;                          //!< [POI] Root connection
    EMotorState eEngineOperatingState;                      //!< [] new signal 
    TBoolean boFuelPumpPrimerControl;                       //!< [] new signal 
    TBoolean boEngineStarterMotorRelayControl;              //!< [] new signal 
    TUint16 u16TimeRemInEngOperatingState;                  //!< [s] new signal 
    TBoolean boEngineFuelShutoffVentControl;                //!< [] new signal 
    TBoolean boEngineFuelShutoff1Control;                   //!< [] new signal 
    TBoolean boEngineFuelShutoff2Control;                   //!< [] new signal 
    TBoolean boEngFuelShutoffValveLeakCtrl;                 //!< [] new signal 
    TBoolean boEngineOilPrimingPumpControl;                 //!< [] new signal 
    TBoolean boEngineOilPreHeaterControl;                   //!< [] new signal 
    TBoolean boEngElectrclSystPwrConservCtrl;               //!< [] new signal 
    TBoolean boEnginePreHeaterControl;                      //!< [] new signal 
    TBoolean boEngineCoolantPumpControl;                    //!< [] new signal 
    TBoolean boEngControlledShutdownReq;                    //!< [] new signal 
    TBoolean boEngEmrgncyShutdownIndication;                //!< [] new signal 
    TBoolean boEngColdAmbtElevatedIdleStatus;               //!< [] new signal 
    TUint8 u8EngineDerateRequest;                           //!< [%] new signal 
} TCanSigRecEOI;

extern TCanSigRecEOI gCsr_tEOI;

typedef struct
{
    EMotorState eEngineOperatingState;                      //!< [] new signal 
    TBoolean boFuelPumpPrimerControl;                       //!< [] new signal 
    TBoolean boEngineStarterMotorRelayControl;              //!< [] new signal 
    TUint16 u16TimeRemInEngOperatingState;                  //!< [s] new signal 
    TBoolean boEngineFuelShutoffVentControl;                //!< [] new signal 
    TBoolean boEngineFuelShutoff1Control;                   //!< [] new signal 
    TBoolean boEngineFuelShutoff2Control;                   //!< [] new signal 
    TBoolean boEngFuelShutoffValveLeakCtrl;                 //!< [] new signal 
    TBoolean boEngineOilPrimingPumpControl;                 //!< [] new signal 
    TBoolean boEngineOilPreHeaterControl;                   //!< [] new signal 
    TBoolean boEngElectrclSystPwrConservCtrl;               //!< [] new signal 
    TBoolean boEnginePreHeaterControl;                      //!< [] new signal 
    TBoolean boEngineCoolantPumpControl;                    //!< [] new signal 
    TBoolean boEngControlledShutdownReq;                    //!< [] new signal 
    TBoolean boEngEmrgncyShutdownIndication;                //!< [] new signal 
    TBoolean boEngColdAmbtElevatedIdleStatus;               //!< [] new signal 
    TUint8 u8EngineDerateRequest;                           //!< [%] new signal 
} TCanSigRecOldValEOI;

typedef struct
{
    TCanSigRecInf     tCsrInfo_eEngineOperatingState;
    TCanSigRecRng_u16 tCsrRng_eEngineOperatingState;
    TCanSigRecInf     tCsrInfo_boFuelPumpPrimerControl;
    TCanSigRecRng_bo  tCsrRng_boFuelPumpPrimerControl;
    TCanSigRecInf     tCsrInfo_boEngineStarterMotorRelayControl;
    TCanSigRecRng_bo  tCsrRng_boEngineStarterMotorRelayControl;
    TCanSigRecInf     tCsrInfo_u16TimeRemInEngOperatingState;
    TCanSigRecRng_u16 tCsrRng_u16TimeRemInEngOperatingState;
    TCanSigRecInf     tCsrInfo_boEngineFuelShutoffVentControl;
    TCanSigRecRng_bo  tCsrRng_boEngineFuelShutoffVentControl;
    TCanSigRecInf     tCsrInfo_boEngineFuelShutoff1Control;
    TCanSigRecRng_bo  tCsrRng_boEngineFuelShutoff1Control;
    TCanSigRecInf     tCsrInfo_boEngineFuelShutoff2Control;
    TCanSigRecRng_bo  tCsrRng_boEngineFuelShutoff2Control;
    TCanSigRecInf     tCsrInfo_boEngFuelShutoffValveLeakCtrl;
    TCanSigRecRng_bo  tCsrRng_boEngFuelShutoffValveLeakCtrl;
    TCanSigRecInf     tCsrInfo_boEngineOilPrimingPumpControl;
    TCanSigRecRng_bo  tCsrRng_boEngineOilPrimingPumpControl;
    TCanSigRecInf     tCsrInfo_boEngineOilPreHeaterControl;
    TCanSigRecRng_bo  tCsrRng_boEngineOilPreHeaterControl;
    TCanSigRecInf     tCsrInfo_boEngElectrclSystPwrConservCtrl;
    TCanSigRecRng_bo  tCsrRng_boEngElectrclSystPwrConservCtrl;
    TCanSigRecInf     tCsrInfo_boEnginePreHeaterControl;
    TCanSigRecRng_bo  tCsrRng_boEnginePreHeaterControl;
    TCanSigRecInf     tCsrInfo_boEngineCoolantPumpControl;
    TCanSigRecRng_bo  tCsrRng_boEngineCoolantPumpControl;
    TCanSigRecInf     tCsrInfo_boEngControlledShutdownReq;
    TCanSigRecRng_bo  tCsrRng_boEngControlledShutdownReq;
    TCanSigRecInf     tCsrInfo_boEngEmrgncyShutdownIndication;
    TCanSigRecRng_bo  tCsrRng_boEngEmrgncyShutdownIndication;
    TCanSigRecInf     tCsrInfo_boEngColdAmbtElevatedIdleStatus;
    TCanSigRecRng_bo  tCsrRng_boEngColdAmbtElevatedIdleStatus;
    TCanSigRecInf     tCsrInfo_u8EngineDerateRequest;
    TCanSigRecRng_u8  tCsrRng_u8EngineDerateRequest;
} TCanSigRecVal_EOI;

typedef struct
{
    const TCanSigRecRoot *cptRoot;                          //!< [POI] Root connection
    EStateBool2bits eASREngineControlActive;                //!< [[-]] new signal 
    EStateBool2bits eASRBrakeControlActive;                 //!< [[-]] new signal 
    EStateBool2bits eAntiLockBrakingActive;                 //!< [[-]] new signal 
    EStateBool2bits eEBSBrakeSwitch;                        //!< [[-]] new signal 
    TUint8 u8BrakePedalPosition;                            //!< [%] new signal 
    EStateBool2bits eABSOffRoadSwitch;                      //!< [[-]] new signal 
    EStateBool2bits eASROffRoadSwitch;                      //!< [[-]] new signal 
    EStateBool2bits eASRHillHolderSwitch;                   //!< [[-]] new signal 
    EStateBool2bits eTractionControlOverrideSwitch;         //!< [[-]] new signal 
    EStateBool2bits eAcceleratorInterlockSwitch;            //!< [[-]] new signal 
    EStateBool2bits eEngineDerateSwitch;                    //!< [[-]] new signal 
    EStateBool2bits eEngineAuxiliaryShutdownSwitch;         //!< [[-]] new signal 
    EStateBool2bits eRemoteAcceleratorEnableSwitch;         //!< [[-]] new signal 
    TUint8 u8EngineRetarderSelection;                       //!< [%] new signal 
    EStateBool2bits eABSFullyOperational;                   //!< [[-]] new signal 
    EStateBool2bits eEBSRedWarningSignal;                   //!< [[-]] new signal 
    EStateBool2bits eABSEBSAmberWarningSignal;              //!< [[-]] new signal 
    EStateBool2bits eATCASRInformationSignal;               //!< [[-]] new signal 
    TUint8 u8SrcAddrOfCtrllingDevForBrkCtrl;                //!< [[-]] new signal 
    EStateBool2bits eHaltBrakeSwitch;                       //!< [[-]] new signal 
    EStateBool2bits eTrailerABSStatus;                      //!< [[-]] new signal 
    EStateBool2bits eTractorMntdTrailerABSWarningSig;       //!< [[-]] new signal 
} TCanSigRecEBC1;

extern TCanSigRecEBC1 gCsr_tEBC1;

typedef struct
{
    EStateBool2bits eASREngineControlActive;                //!< [[-]] new signal 
    EStateBool2bits eASRBrakeControlActive;                 //!< [[-]] new signal 
    EStateBool2bits eAntiLockBrakingActive;                 //!< [[-]] new signal 
    EStateBool2bits eEBSBrakeSwitch;                        //!< [[-]] new signal 
    TUint8 u8BrakePedalPosition;                            //!< [%] new signal 
    EStateBool2bits eABSOffRoadSwitch;                      //!< [[-]] new signal 
    EStateBool2bits eASROffRoadSwitch;                      //!< [[-]] new signal 
    EStateBool2bits eASRHillHolderSwitch;                   //!< [[-]] new signal 
    EStateBool2bits eTractionControlOverrideSwitch;         //!< [[-]] new signal 
    EStateBool2bits eAcceleratorInterlockSwitch;            //!< [[-]] new signal 
    EStateBool2bits eEngineDerateSwitch;                    //!< [[-]] new signal 
    EStateBool2bits eEngineAuxiliaryShutdownSwitch;         //!< [[-]] new signal 
    EStateBool2bits eRemoteAcceleratorEnableSwitch;         //!< [[-]] new signal 
    TUint8 u8EngineRetarderSelection;                       //!< [%] new signal 
    EStateBool2bits eABSFullyOperational;                   //!< [[-]] new signal 
    EStateBool2bits eEBSRedWarningSignal;                   //!< [[-]] new signal 
    EStateBool2bits eABSEBSAmberWarningSignal;              //!< [[-]] new signal 
    EStateBool2bits eATCASRInformationSignal;               //!< [[-]] new signal 
    TUint8 u8SrcAddrOfCtrllingDevForBrkCtrl;                //!< [[-]] new signal 
    EStateBool2bits eHaltBrakeSwitch;                       //!< [[-]] new signal 
    EStateBool2bits eTrailerABSStatus;                      //!< [[-]] new signal 
    EStateBool2bits eTractorMntdTrailerABSWarningSig;       //!< [[-]] new signal 
} TCanSigRecOldValEBC1;

typedef struct
{
    TCanSigRecInf     tCsrInfo_eASREngineControlActive;
    TCanSigRecRng_u16 tCsrRng_eASREngineControlActive;
    TCanSigRecInf     tCsrInfo_eASRBrakeControlActive;
    TCanSigRecRng_u16 tCsrRng_eASRBrakeControlActive;
    TCanSigRecInf     tCsrInfo_eAntiLockBrakingActive;
    TCanSigRecRng_u16 tCsrRng_eAntiLockBrakingActive;
    TCanSigRecInf     tCsrInfo_eEBSBrakeSwitch;
    TCanSigRecRng_u16 tCsrRng_eEBSBrakeSwitch;
    TCanSigRecInf     tCsrInfo_u8BrakePedalPosition;
    TCanSigRecRng_u8  tCsrRng_u8BrakePedalPosition;
    TCanSigRecInf     tCsrInfo_eABSOffRoadSwitch;
    TCanSigRecRng_u16 tCsrRng_eABSOffRoadSwitch;
    TCanSigRecInf     tCsrInfo_eASROffRoadSwitch;
    TCanSigRecRng_u16 tCsrRng_eASROffRoadSwitch;
    TCanSigRecInf     tCsrInfo_eASRHillHolderSwitch;
    TCanSigRecRng_u16 tCsrRng_eASRHillHolderSwitch;
    TCanSigRecInf     tCsrInfo_eTractionControlOverrideSwitch;
    TCanSigRecRng_u16 tCsrRng_eTractionControlOverrideSwitch;
    TCanSigRecInf     tCsrInfo_eAcceleratorInterlockSwitch;
    TCanSigRecRng_u16 tCsrRng_eAcceleratorInterlockSwitch;
    TCanSigRecInf     tCsrInfo_eEngineDerateSwitch;
    TCanSigRecRng_u16 tCsrRng_eEngineDerateSwitch;
    TCanSigRecInf     tCsrInfo_eEngineAuxiliaryShutdownSwitch;
    TCanSigRecRng_u16 tCsrRng_eEngineAuxiliaryShutdownSwitch;
    TCanSigRecInf     tCsrInfo_eRemoteAcceleratorEnableSwitch;
    TCanSigRecRng_u16 tCsrRng_eRemoteAcceleratorEnableSwitch;
    TCanSigRecInf     tCsrInfo_u8EngineRetarderSelection;
    TCanSigRecRng_u8  tCsrRng_u8EngineRetarderSelection;
    TCanSigRecInf     tCsrInfo_eABSFullyOperational;
    TCanSigRecRng_u16 tCsrRng_eABSFullyOperational;
    TCanSigRecInf     tCsrInfo_eEBSRedWarningSignal;
    TCanSigRecRng_u16 tCsrRng_eEBSRedWarningSignal;
    TCanSigRecInf     tCsrInfo_eABSEBSAmberWarningSignal;
    TCanSigRecRng_u16 tCsrRng_eABSEBSAmberWarningSignal;
    TCanSigRecInf     tCsrInfo_eATCASRInformationSignal;
    TCanSigRecRng_u16 tCsrRng_eATCASRInformationSignal;
    TCanSigRecInf     tCsrInfo_u8SrcAddrOfCtrllingDevForBrkCtrl;
    TCanSigRecRng_u8  tCsrRng_u8SrcAddrOfCtrllingDevForBrkCtrl;
    TCanSigRecInf     tCsrInfo_eHaltBrakeSwitch;
    TCanSigRecRng_u16 tCsrRng_eHaltBrakeSwitch;
    TCanSigRecInf     tCsrInfo_eTrailerABSStatus;
    TCanSigRecRng_u16 tCsrRng_eTrailerABSStatus;
    TCanSigRecInf     tCsrInfo_eTractorMntdTrailerABSWarningSig;
    TCanSigRecRng_u16 tCsrRng_eTractorMntdTrailerABSWarningSig;
} TCanSigRecVal_EBC1;

typedef struct
{
    const TCanSigRecRoot *cptRoot;                          //!< [POI] Root connection
    EStateBool2bits eEngineProtectLampData;                 //!< [[-]] new signal 
    EStateBool2bits eEngineAmberWarningLampData;            //!< [[-]] new signal 
    EStateBool2bits eEngineRedStopLampData;                 //!< [[-]] new signal 
    EStateBool2bits eOBDMalfunctionIndicatorLampData;       //!< [[-]] new signal 
    EStateBool2bits eEngineBrakeActiveLampData;             //!< [[-]] new signal 
    EStateBool2bits eComPrsionBrkEnblSwIndicLampDat;        //!< [[-]] new signal 
    EStateBool2bits eEngineOilPressureLowLampData;          //!< [[-]] new signal 
    EStateBool2bits eEngCoolntTempHighLampDat;              //!< [[-]] new signal 
    EStateBool2bits eEngineCoolantLevelLowLampData;         //!< [[-]] new signal 
    EStateBool2bits eEngineIdleMngmtActvLampData;           //!< [[-]] new signal 
    EStateBool2bits eEngAirFilterRestrictionLampDat;        //!< [[-]] new signal 
    EStateBool2bits eEngFuelFilterRestrictedLampDat;        //!< [[-]] new signal 
    EStateBool2bits eEngCtrlModule1RdyForUseLampDat;        //!< [[-]] new signal 
    EStateBool2bits eEngCtrlModule2RdyForUseLampDat;        //!< [[-]] new signal 
    EStateBool2bits eEngCtrlModule3RdyForUseLampDat;        //!< [[-]] new signal 
    EStateBool2bits eEngineSpeedHighLampData;               //!< [[-]] new signal 
    EStateBool2bits eEngineSpeedVeryHighLampData;           //!< [[-]] new signal 
    EStateBool2bits eVehicleAccltnRateLimitLampData;        //!< [[-]] new signal 
    EStateBool2bits eEngineWaitToStartLampData;             //!< [[-]] new signal 
} TCanSigRecDLCD1;

extern TCanSigRecDLCD1 gCsr_tDLCD1;

typedef struct
{
    EStateBool2bits eEngineProtectLampData;                 //!< [[-]] new signal 
    EStateBool2bits eEngineAmberWarningLampData;            //!< [[-]] new signal 
    EStateBool2bits eEngineRedStopLampData;                 //!< [[-]] new signal 
    EStateBool2bits eOBDMalfunctionIndicatorLampData;       //!< [[-]] new signal 
    EStateBool2bits eEngineBrakeActiveLampData;             //!< [[-]] new signal 
    EStateBool2bits eComPrsionBrkEnblSwIndicLampDat;        //!< [[-]] new signal 
    EStateBool2bits eEngineOilPressureLowLampData;          //!< [[-]] new signal 
    EStateBool2bits eEngCoolntTempHighLampDat;              //!< [[-]] new signal 
    EStateBool2bits eEngineCoolantLevelLowLampData;         //!< [[-]] new signal 
    EStateBool2bits eEngineIdleMngmtActvLampData;           //!< [[-]] new signal 
    EStateBool2bits eEngAirFilterRestrictionLampDat;        //!< [[-]] new signal 
    EStateBool2bits eEngFuelFilterRestrictedLampDat;        //!< [[-]] new signal 
    EStateBool2bits eEngCtrlModule1RdyForUseLampDat;        //!< [[-]] new signal 
    EStateBool2bits eEngCtrlModule2RdyForUseLampDat;        //!< [[-]] new signal 
    EStateBool2bits eEngCtrlModule3RdyForUseLampDat;        //!< [[-]] new signal 
    EStateBool2bits eEngineSpeedHighLampData;               //!< [[-]] new signal 
    EStateBool2bits eEngineSpeedVeryHighLampData;           //!< [[-]] new signal 
    EStateBool2bits eVehicleAccltnRateLimitLampData;        //!< [[-]] new signal 
    EStateBool2bits eEngineWaitToStartLampData;             //!< [[-]] new signal 
} TCanSigRecOldValDLCD1;

typedef struct
{
    TCanSigRecInf     tCsrInfo_eEngineProtectLampData;
    TCanSigRecRng_u16 tCsrRng_eEngineProtectLampData;
    TCanSigRecInf     tCsrInfo_eEngineAmberWarningLampData;
    TCanSigRecRng_u16 tCsrRng_eEngineAmberWarningLampData;
    TCanSigRecInf     tCsrInfo_eEngineRedStopLampData;
    TCanSigRecRng_u16 tCsrRng_eEngineRedStopLampData;
    TCanSigRecInf     tCsrInfo_eOBDMalfunctionIndicatorLampData;
    TCanSigRecRng_u16 tCsrRng_eOBDMalfunctionIndicatorLampData;
    TCanSigRecInf     tCsrInfo_eEngineBrakeActiveLampData;
    TCanSigRecRng_u16 tCsrRng_eEngineBrakeActiveLampData;
    TCanSigRecInf     tCsrInfo_eComPrsionBrkEnblSwIndicLampDat;
    TCanSigRecRng_u16 tCsrRng_eComPrsionBrkEnblSwIndicLampDat;
    TCanSigRecInf     tCsrInfo_eEngineOilPressureLowLampData;
    TCanSigRecRng_u16 tCsrRng_eEngineOilPressureLowLampData;
    TCanSigRecInf     tCsrInfo_eEngCoolntTempHighLampDat;
    TCanSigRecRng_u16 tCsrRng_eEngCoolntTempHighLampDat;
    TCanSigRecInf     tCsrInfo_eEngineCoolantLevelLowLampData;
    TCanSigRecRng_u16 tCsrRng_eEngineCoolantLevelLowLampData;
    TCanSigRecInf     tCsrInfo_eEngineIdleMngmtActvLampData;
    TCanSigRecRng_u16 tCsrRng_eEngineIdleMngmtActvLampData;
    TCanSigRecInf     tCsrInfo_eEngAirFilterRestrictionLampDat;
    TCanSigRecRng_u16 tCsrRng_eEngAirFilterRestrictionLampDat;
    TCanSigRecInf     tCsrInfo_eEngFuelFilterRestrictedLampDat;
    TCanSigRecRng_u16 tCsrRng_eEngFuelFilterRestrictedLampDat;
    TCanSigRecInf     tCsrInfo_eEngCtrlModule1RdyForUseLampDat;
    TCanSigRecRng_u16 tCsrRng_eEngCtrlModule1RdyForUseLampDat;
    TCanSigRecInf     tCsrInfo_eEngCtrlModule2RdyForUseLampDat;
    TCanSigRecRng_u16 tCsrRng_eEngCtrlModule2RdyForUseLampDat;
    TCanSigRecInf     tCsrInfo_eEngCtrlModule3RdyForUseLampDat;
    TCanSigRecRng_u16 tCsrRng_eEngCtrlModule3RdyForUseLampDat;
    TCanSigRecInf     tCsrInfo_eEngineSpeedHighLampData;
    TCanSigRecRng_u16 tCsrRng_eEngineSpeedHighLampData;
    TCanSigRecInf     tCsrInfo_eEngineSpeedVeryHighLampData;
    TCanSigRecRng_u16 tCsrRng_eEngineSpeedVeryHighLampData;
    TCanSigRecInf     tCsrInfo_eVehicleAccltnRateLimitLampData;
    TCanSigRecRng_u16 tCsrRng_eVehicleAccltnRateLimitLampData;
    TCanSigRecInf     tCsrInfo_eEngineWaitToStartLampData;
    TCanSigRecRng_u16 tCsrRng_eEngineWaitToStartLampData;
} TCanSigRecVal_DLCD1;

typedef struct
{
    const TCanSigRecRoot *cptRoot;                          //!< [POI] Root connection
    TInt32 i32AlternatorCurrent;                            //!< [[-]] new signal 
    TInt32 i32NetBatteryCurrent;                            //!< [[-]] new signal 
} TCanSigRecVEP3;

extern TCanSigRecVEP3 gCsr_tVEP3;

typedef struct
{
    TUint16 u16AlternatorCurrent;                           //!< [[-]] new signal 
    TUint16 u16NetBatteryCurrent;                           //!< [[-]] new signal 
} TCanSigRecOldValVEP3;

typedef struct
{
    TCanSigRecInf     tCsrInfo_i32AlternatorCurrent;
    TCanSigRecRng_u16 tCsrRng_i32AlternatorCurrent;
    TCanSigRecInf     tCsrInfo_i32NetBatteryCurrent;
    TCanSigRecRng_u16 tCsrRng_i32NetBatteryCurrent;
} TCanSigRecVal_VEP3;

typedef struct
{
    const TCanSigRecRoot *cptRoot;                          //!< [POI] Root connection
    EStateBool2bits eEngIdleShtdwnHasShtdwnEngine;          //!< [[-]] new signal 
    EStateBool2bits eEngineIdleShtdwnDrvrAlertMode;         //!< [[-]] new signal 
    EStateBool2bits eEngineIdleShtdwnTimerOverride;         //!< [[-]] new signal 
    EStateBool2bits eEngineIdleShtdwnTimerState;            //!< [[-]] new signal 
    EStateBool2bits eEngineIdleShtdwnTimerFunction;         //!< [[-]] new signal 
    EStateBool2bits eACHighPressureFanSwitch;               //!< [[-]] new signal 
    EStateBool2bits eRefrigerantLowPressureSwitch;          //!< [[-]] new signal 
    EStateBool2bits eRefrigerantHighPressureSwitch;         //!< [[-]] new signal 
    EStateBool2bits eEngineWaitToStartLamp;                 //!< [[-]] new signal 
    EStateBool2bits eEngPrtctnSystemHasShtdwnEng;           //!< [[-]] new signal 
    EStateBool2bits eEngPrtctnSystemAppchingShtdwn;         //!< [[-]] new signal 
    EStateBool2bits eEngProtecSystemTimerOverride;          //!< [[-]] new signal 
    EStateBool2bits eEngineProtecSystemTimerState;          //!< [[-]] new signal 
    EStateBool2bits eEngineProtectionSystemConf;            //!< [[-]] new signal 
    EStateBool2bits eEngineAlarmAcknowledge;                //!< [[-]] new signal 
    EStateBool2bits eEngineAlarmOutputCommandStatus;        //!< [[-]] new signal 
    EStateBool2bits eEngineAirShutoffCommandStatus;         //!< [[-]] new signal 
    EStateBool2bits eEngineOverspeedTest;                   //!< [[-]] new signal 
    EStateBool2bits eEngineAirShutoffStatus;                //!< [[-]] new signal 
    EStateBool2bits ePTOShutdownHasShtdwnEngine;            //!< [[-]] new signal 
    EStateBool2bits eCoolntLvlEngPrtctnShtdwnStatus;        //!< [[-]] new signal 
} TCanSigRecSHUTDN;

extern TCanSigRecSHUTDN gCsr_tSHUTDN;

typedef struct
{
    EStateBool2bits eEngIdleShtdwnHasShtdwnEngine;          //!< [[-]] new signal 
    EStateBool2bits eEngineIdleShtdwnDrvrAlertMode;         //!< [[-]] new signal 
    EStateBool2bits eEngineIdleShtdwnTimerOverride;         //!< [[-]] new signal 
    EStateBool2bits eEngineIdleShtdwnTimerState;            //!< [[-]] new signal 
    EStateBool2bits eEngineIdleShtdwnTimerFunction;         //!< [[-]] new signal 
    EStateBool2bits eACHighPressureFanSwitch;               //!< [[-]] new signal 
    EStateBool2bits eRefrigerantLowPressureSwitch;          //!< [[-]] new signal 
    EStateBool2bits eRefrigerantHighPressureSwitch;         //!< [[-]] new signal 
    EStateBool2bits eEngineWaitToStartLamp;                 //!< [[-]] new signal 
    EStateBool2bits eEngPrtctnSystemHasShtdwnEng;           //!< [[-]] new signal 
    EStateBool2bits eEngPrtctnSystemAppchingShtdwn;         //!< [[-]] new signal 
    EStateBool2bits eEngProtecSystemTimerOverride;          //!< [[-]] new signal 
    EStateBool2bits eEngineProtecSystemTimerState;          //!< [[-]] new signal 
    EStateBool2bits eEngineProtectionSystemConf;            //!< [[-]] new signal 
    EStateBool2bits eEngineAlarmAcknowledge;                //!< [[-]] new signal 
    EStateBool2bits eEngineAlarmOutputCommandStatus;        //!< [[-]] new signal 
    EStateBool2bits eEngineAirShutoffCommandStatus;         //!< [[-]] new signal 
    EStateBool2bits eEngineOverspeedTest;                   //!< [[-]] new signal 
    EStateBool2bits eEngineAirShutoffStatus;                //!< [[-]] new signal 
    EStateBool2bits ePTOShutdownHasShtdwnEngine;            //!< [[-]] new signal 
    EStateBool2bits eCoolntLvlEngPrtctnShtdwnStatus;        //!< [[-]] new signal 
} TCanSigRecOldValSHUTDN;

typedef struct
{
    TCanSigRecInf     tCsrInfo_eEngIdleShtdwnHasShtdwnEngine;
    TCanSigRecRng_u16 tCsrRng_eEngIdleShtdwnHasShtdwnEngine;
    TCanSigRecInf     tCsrInfo_eEngineIdleShtdwnDrvrAlertMode;
    TCanSigRecRng_u16 tCsrRng_eEngineIdleShtdwnDrvrAlertMode;
    TCanSigRecInf     tCsrInfo_eEngineIdleShtdwnTimerOverride;
    TCanSigRecRng_u16 tCsrRng_eEngineIdleShtdwnTimerOverride;
    TCanSigRecInf     tCsrInfo_eEngineIdleShtdwnTimerState;
    TCanSigRecRng_u16 tCsrRng_eEngineIdleShtdwnTimerState;
    TCanSigRecInf     tCsrInfo_eEngineIdleShtdwnTimerFunction;
    TCanSigRecRng_u16 tCsrRng_eEngineIdleShtdwnTimerFunction;
    TCanSigRecInf     tCsrInfo_eACHighPressureFanSwitch;
    TCanSigRecRng_u16 tCsrRng_eACHighPressureFanSwitch;
    TCanSigRecInf     tCsrInfo_eRefrigerantLowPressureSwitch;
    TCanSigRecRng_u16 tCsrRng_eRefrigerantLowPressureSwitch;
    TCanSigRecInf     tCsrInfo_eRefrigerantHighPressureSwitch;
    TCanSigRecRng_u16 tCsrRng_eRefrigerantHighPressureSwitch;
    TCanSigRecInf     tCsrInfo_eEngineWaitToStartLamp;
    TCanSigRecRng_u16 tCsrRng_eEngineWaitToStartLamp;
    TCanSigRecInf     tCsrInfo_eEngPrtctnSystemHasShtdwnEng;
    TCanSigRecRng_u16 tCsrRng_eEngPrtctnSystemHasShtdwnEng;
    TCanSigRecInf     tCsrInfo_eEngPrtctnSystemAppchingShtdwn;
    TCanSigRecRng_u16 tCsrRng_eEngPrtctnSystemAppchingShtdwn;
    TCanSigRecInf     tCsrInfo_eEngProtecSystemTimerOverride;
    TCanSigRecRng_u16 tCsrRng_eEngProtecSystemTimerOverride;
    TCanSigRecInf     tCsrInfo_eEngineProtecSystemTimerState;
    TCanSigRecRng_u16 tCsrRng_eEngineProtecSystemTimerState;
    TCanSigRecInf     tCsrInfo_eEngineProtectionSystemConf;
    TCanSigRecRng_u16 tCsrRng_eEngineProtectionSystemConf;
    TCanSigRecInf     tCsrInfo_eEngineAlarmAcknowledge;
    TCanSigRecRng_u16 tCsrRng_eEngineAlarmAcknowledge;
    TCanSigRecInf     tCsrInfo_eEngineAlarmOutputCommandStatus;
    TCanSigRecRng_u16 tCsrRng_eEngineAlarmOutputCommandStatus;
    TCanSigRecInf     tCsrInfo_eEngineAirShutoffCommandStatus;
    TCanSigRecRng_u16 tCsrRng_eEngineAirShutoffCommandStatus;
    TCanSigRecInf     tCsrInfo_eEngineOverspeedTest;
    TCanSigRecRng_u16 tCsrRng_eEngineOverspeedTest;
    TCanSigRecInf     tCsrInfo_eEngineAirShutoffStatus;
    TCanSigRecRng_u16 tCsrRng_eEngineAirShutoffStatus;
    TCanSigRecInf     tCsrInfo_ePTOShutdownHasShtdwnEngine;
    TCanSigRecRng_u16 tCsrRng_ePTOShutdownHasShtdwnEngine;
    TCanSigRecInf     tCsrInfo_eCoolntLvlEngPrtctnShtdwnStatus;
    TCanSigRecRng_u16 tCsrRng_eCoolntLvlEngPrtctnShtdwnStatus;
} TCanSigRecVal_SHUTDN;

typedef struct
{
    const TCanSigRecRoot *cptRoot;                          //!< [POI] Root connection
    TInt16 i16EngineCoolantTemperature;                     //!< [deg C] new signal 
    TInt16 i16EngineFuelTemperature1;                       //!< [deg C] new signal 
    TInt16 i16EngineOilTemperature1;                        //!< [deg C] new signal 
    TInt16 i16EngineTurboChgOilTemperature;                 //!< [deg C] new signal 
    TInt16 i16EngineIntercoolerTemperature;                 //!< [deg C] new signal 
    TUint8 u8EngChargeAirCoolThrmsttOpening;                //!< [%] new signal 
} TCanSigRecET1;

extern TCanSigRecET1 gCsr_tET1;

typedef struct
{
    TUint8 u8EngineCoolantTemperature;                      //!< [deg C] new signal 
    TUint8 u8EngineFuelTemperature1;                        //!< [deg C] new signal 
    TUint16 u16EngineOilTemperature1;                       //!< [deg C] new signal 
    TUint16 u16EngineTurboChgOilTemperature;                //!< [deg C] new signal 
    TUint8 u8EngineIntercoolerTemperature;                  //!< [deg C] new signal 
    TUint8 u8EngChargeAirCoolThrmsttOpening;                //!< [%] new signal 
} TCanSigRecOldValET1;

typedef struct
{
    TCanSigRecInf     tCsrInfo_i16EngineCoolantTemperature;
    TCanSigRecRng_u8  tCsrRng_i16EngineCoolantTemperature;
    TCanSigRecInf     tCsrInfo_i16EngineFuelTemperature1;
    TCanSigRecRng_u8  tCsrRng_i16EngineFuelTemperature1;
    TCanSigRecInf     tCsrInfo_i16EngineOilTemperature1;
    TCanSigRecRng_u16 tCsrRng_i16EngineOilTemperature1;
    TCanSigRecInf     tCsrInfo_i16EngineTurboChgOilTemperature;
    TCanSigRecRng_u16 tCsrRng_i16EngineTurboChgOilTemperature;
    TCanSigRecInf     tCsrInfo_i16EngineIntercoolerTemperature;
    TCanSigRecRng_u8  tCsrRng_i16EngineIntercoolerTemperature;
    TCanSigRecInf     tCsrInfo_u8EngChargeAirCoolThrmsttOpening;
    TCanSigRecRng_u8  tCsrRng_u8EngChargeAirCoolThrmsttOpening;
} TCanSigRecVal_ET1;

typedef struct
{
    const TCanSigRecRoot *cptRoot;                          //!< [POI] Root connection
    TUint16 u16EngineFuelDeliveryPressure;                  //!< [kPa] new signal 
    TUint8 u8EngExtCrankCsBlowByPressure;                   //!< [kPa] new signal 
    TUint8 u8EngineOilLevel;                                //!< [%] new signal 
    TUint16 u16EngineOilPressure;                           //!< [kPa] new signal 
    TInt16 i16EngineCrankcasePressure1;                     //!< [kPa] new signal 
    TUint16 u16EngineCoolantPressure;                       //!< [kPa] new signal 
    TUint8 u8EngineCoolantLevel1;                           //!< [%] new signal 
} TCanSigRecEFL_P1;

extern TCanSigRecEFL_P1 gCsr_tEFL_P1;

typedef struct
{
    TUint8 u8EngineFuelDeliveryPressure;                    //!< [kPa] new signal 
    TUint8 u8EngExtCrankCsBlowByPressure;                   //!< [kPa] new signal 
    TUint8 u8EngineOilLevel;                                //!< [%] new signal 
    TUint8 u8EngineOilPressure;                             //!< [kPa] new signal 
    TUint16 u16EngineCrankcasePressure1;                    //!< [kPa] new signal 
    TUint8 u8EngineCoolantPressure;                         //!< [kPa] new signal 
    TUint8 u8EngineCoolantLevel1;                           //!< [%] new signal 
} TCanSigRecOldValEFL_P1;

typedef struct
{
    TCanSigRecInf     tCsrInfo_u16EngineFuelDeliveryPressure;
    TCanSigRecRng_u8  tCsrRng_u16EngineFuelDeliveryPressure;
    TCanSigRecInf     tCsrInfo_u8EngExtCrankCsBlowByPressure;
    TCanSigRecRng_u8  tCsrRng_u8EngExtCrankCsBlowByPressure;
    TCanSigRecInf     tCsrInfo_u8EngineOilLevel;
    TCanSigRecRng_u8  tCsrRng_u8EngineOilLevel;
    TCanSigRecInf     tCsrInfo_u16EngineOilPressure;
    TCanSigRecRng_u8  tCsrRng_u16EngineOilPressure;
    TCanSigRecInf     tCsrInfo_i16EngineCrankcasePressure1;
    TCanSigRecRng_u16 tCsrRng_i16EngineCrankcasePressure1;
    TCanSigRecInf     tCsrInfo_u16EngineCoolantPressure;
    TCanSigRecRng_u8  tCsrRng_u16EngineCoolantPressure;
    TCanSigRecInf     tCsrInfo_u8EngineCoolantLevel1;
    TCanSigRecRng_u8  tCsrRng_u8EngineCoolantLevel1;
} TCanSigRecVal_EFL_P1;

typedef struct
{
    const TCanSigRecRoot *cptRoot;                          //!< [POI] Root connection
    TInt8 i8NetBatteryCurrent;                              //!< [[-]] new signal 
    TUint8 u8AlternatorCurrent;                             //!< [[-]] new signal 
    TUint16 u16ChargingSystemPotential;                     //!< [[-]] new signal 
    TUint16 u16BatteryPotentialPowerInput1;                 //!< [[-]] new signal 
    TUint16 u16KeyswitchBatteryPotential;                   //!< [[-]] new signal 
} TCanSigRecVEP1;

extern TCanSigRecVEP1 gCsr_tVEP1;

typedef struct
{
    TUint8 u8NetBatteryCurrent;                             //!< [[-]] new signal 
    TUint8 u8AlternatorCurrent;                             //!< [[-]] new signal 
    TUint16 u16ChargingSystemPotential;                     //!< [[-]] new signal 
    TUint16 u16BatteryPotentialPowerInput1;                 //!< [[-]] new signal 
    TUint16 u16KeyswitchBatteryPotential;                   //!< [[-]] new signal 
} TCanSigRecOldValVEP1;

typedef struct
{
    TCanSigRecInf     tCsrInfo_i8NetBatteryCurrent;
    TCanSigRecRng_u8  tCsrRng_i8NetBatteryCurrent;
    TCanSigRecInf     tCsrInfo_u8AlternatorCurrent;
    TCanSigRecRng_u8  tCsrRng_u8AlternatorCurrent;
    TCanSigRecInf     tCsrInfo_u16ChargingSystemPotential;
    TCanSigRecRng_u16 tCsrRng_u16ChargingSystemPotential;
    TCanSigRecInf     tCsrInfo_u16BatteryPotentialPowerInput1;
    TCanSigRecRng_u16 tCsrRng_u16BatteryPotentialPowerInput1;
    TCanSigRecInf     tCsrInfo_u16KeyswitchBatteryPotential;
    TCanSigRecRng_u16 tCsrRng_u16KeyswitchBatteryPotential;
} TCanSigRecVal_VEP1;

typedef struct
{
    const TCanSigRecRoot *cptRoot;                          //!< [POI] Root connection
    TBoolean boRotFrameClkwiseButton;                       //!< [[-]] new signal 
    TBoolean boRotFrameCtClkwiseButton;                     //!< [[-]] new signal 
    TBoolean boUpPendularOrRotTurretCtClock;                //!< [[-]] new signal 
    TBoolean boDownPendularOrRotTurretClock;                //!< [[-]] new signal 
    TBoolean boSelectorRotTurret;                           //!< [[-]] new signal 
    TBoolean boSelectorPendular;                            //!< [[-]] new signal 
    TBoolean boUpAxleOscillant;                             //!< [[-]] new signal 
    TBoolean boDownAxleOscillant;                           //!< [[-]] new signal 
    TBoolean boUpAxleFixe;                                  //!< [[-]] new signal 
    TBoolean boDownAxleFixe;                                //!< [[-]] new signal 
    TBoolean boForcingAdvanceTrack;                         //!< [[-]] new signal 
} TCanSigRecSendToC1RadioCmd;

extern TCanSigRecSendToC1RadioCmd gCsr_tSendToC1RadioCmd;

typedef struct
{
    TBoolean boRotFrameClkwiseButton;                       //!< [[-]] new signal 
    TBoolean boRotFrameCtClkwiseButton;                     //!< [[-]] new signal 
    TBoolean boUpPendularOrRotTurretCtClock;                //!< [[-]] new signal 
    TBoolean boDownPendularOrRotTurretClock;                //!< [[-]] new signal 
    TBoolean boSelectorRotTurret;                           //!< [[-]] new signal 
    TBoolean boSelectorPendular;                            //!< [[-]] new signal 
    TBoolean boUpAxleOscillant;                             //!< [[-]] new signal 
    TBoolean boDownAxleOscillant;                           //!< [[-]] new signal 
    TBoolean boUpAxleFixe;                                  //!< [[-]] new signal 
    TBoolean boDownAxleFixe;                                //!< [[-]] new signal 
    TBoolean boForcingAdvanceTrack;                         //!< [[-]] new signal 
} TCanSigRecOldValSendToC1RadioCmd;

typedef struct
{
    TCanSigRecInf     tCsrInfo_boRotFrameClkwiseButton;
    TCanSigRecRng_bo  tCsrRng_boRotFrameClkwiseButton;
    TCanSigRecInf     tCsrInfo_boRotFrameCtClkwiseButton;
    TCanSigRecRng_bo  tCsrRng_boRotFrameCtClkwiseButton;
    TCanSigRecInf     tCsrInfo_boUpPendularOrRotTurretCtClock;
    TCanSigRecRng_bo  tCsrRng_boUpPendularOrRotTurretCtClock;
    TCanSigRecInf     tCsrInfo_boDownPendularOrRotTurretClock;
    TCanSigRecRng_bo  tCsrRng_boDownPendularOrRotTurretClock;
    TCanSigRecInf     tCsrInfo_boSelectorRotTurret;
    TCanSigRecRng_bo  tCsrRng_boSelectorRotTurret;
    TCanSigRecInf     tCsrInfo_boSelectorPendular;
    TCanSigRecRng_bo  tCsrRng_boSelectorPendular;
    TCanSigRecInf     tCsrInfo_boUpAxleOscillant;
    TCanSigRecRng_bo  tCsrRng_boUpAxleOscillant;
    TCanSigRecInf     tCsrInfo_boDownAxleOscillant;
    TCanSigRecRng_bo  tCsrRng_boDownAxleOscillant;
    TCanSigRecInf     tCsrInfo_boUpAxleFixe;
    TCanSigRecRng_bo  tCsrRng_boUpAxleFixe;
    TCanSigRecInf     tCsrInfo_boDownAxleFixe;
    TCanSigRecRng_bo  tCsrRng_boDownAxleFixe;
    TCanSigRecInf     tCsrInfo_boForcingAdvanceTrack;
    TCanSigRecRng_bo  tCsrRng_boForcingAdvanceTrack;
} TCanSigRecVal_SendToC1RadioCmd;

typedef struct
{
    const TCanSigRecRoot *cptRoot;                          //!< [POI] Root connection
    TBit2 bi2C1TurretPostSelector;                          //!< [[-]] new signal 
    TBit2 bi2C1RadioPostSelector;                           //!< [[-]] new signal 
    TBit2 bi2C1NacellePostSelector;                         //!< [[-]] new signal 
    TBoolean boUpAxleOscillantCommand;                      //!< [[-]] new signal 
    TBoolean boDownAxleOscillantCommand;                    //!< [[-]] new signal 
    TBoolean boUpAxleFixeCommand;                           //!< [[-]] new signal 
    TBoolean boDownAxleFixeCommand;                         //!< [[-]] new signal 
    TBoolean boEntryTelescopeFdcSensor;                     //!< [[-]] new signal 
    TBoolean boDeltaArmFoldedSensor;                        //!< [[-]] new signal 
    TBoolean boBoomArmFoldedSensor;                         //!< [[-]] new signal 
    TBoolean boDeltaArmInLowerZone;                         //!< [[-]] new signal 
    TBoolean boTurretInRearCenterPos;                       //!< [[-]] new signal 
    TBoolean boTurretInFrontCenterPos;                      //!< [[-]] new signal 
    TInt32 i32RegimeMotorAlternatorRpm;                     //!< [[-]] new signal 
    TInt16 i16ArrowArmAngularSensor;                        //!< [[-]] new signal 
} TCanSigRecDataRcvFromC1;

extern TCanSigRecDataRcvFromC1 gCsr_tDataRcvFromC1;

typedef struct
{
    TBit2 bi2C1TurretPostSelector;                          //!< [[-]] new signal 
    TBit2 bi2C1RadioPostSelector;                           //!< [[-]] new signal 
    TBit2 bi2C1NacellePostSelector;                         //!< [[-]] new signal 
    TBoolean boUpAxleOscillantCommand;                      //!< [[-]] new signal 
    TBoolean boDownAxleOscillantCommand;                    //!< [[-]] new signal 
    TBoolean boUpAxleFixeCommand;                           //!< [[-]] new signal 
    TBoolean boDownAxleFixeCommand;                         //!< [[-]] new signal 
    TBoolean boEntryTelescopeFdcSensor;                     //!< [[-]] new signal 
    TBoolean boDeltaArmFoldedSensor;                        //!< [[-]] new signal 
    TBoolean boBoomArmFoldedSensor;                         //!< [[-]] new signal 
    TBoolean boDeltaArmInLowerZone;                         //!< [[-]] new signal 
    TBoolean boTurretInRearCenterPos;                       //!< [[-]] new signal 
    TBoolean boTurretInFrontCenterPos;                      //!< [[-]] new signal 
    TInt32 i32RegimeMotorAlternatorRpm;                     //!< [[-]] new signal 
    TInt16 i16ArrowArmAngularSensor;                        //!< [[-]] new signal 
} TCanSigRecOldValDataRcvFromC1;

typedef struct
{
    TCanSigRecInf     tCsrInfo_bi2C1TurretPostSelector;
    TCanSigRecRng_u8  tCsrRng_bi2C1TurretPostSelector;
    TCanSigRecInf     tCsrInfo_bi2C1RadioPostSelector;
    TCanSigRecRng_u8  tCsrRng_bi2C1RadioPostSelector;
    TCanSigRecInf     tCsrInfo_bi2C1NacellePostSelector;
    TCanSigRecRng_u8  tCsrRng_bi2C1NacellePostSelector;
    TCanSigRecInf     tCsrInfo_boUpAxleOscillantCommand;
    TCanSigRecRng_bo  tCsrRng_boUpAxleOscillantCommand;
    TCanSigRecInf     tCsrInfo_boDownAxleOscillantCommand;
    TCanSigRecRng_bo  tCsrRng_boDownAxleOscillantCommand;
    TCanSigRecInf     tCsrInfo_boUpAxleFixeCommand;
    TCanSigRecRng_bo  tCsrRng_boUpAxleFixeCommand;
    TCanSigRecInf     tCsrInfo_boDownAxleFixeCommand;
    TCanSigRecRng_bo  tCsrRng_boDownAxleFixeCommand;
    TCanSigRecInf     tCsrInfo_boEntryTelescopeFdcSensor;
    TCanSigRecRng_bo  tCsrRng_boEntryTelescopeFdcSensor;
    TCanSigRecInf     tCsrInfo_boDeltaArmFoldedSensor;
    TCanSigRecRng_bo  tCsrRng_boDeltaArmFoldedSensor;
    TCanSigRecInf     tCsrInfo_boBoomArmFoldedSensor;
    TCanSigRecRng_bo  tCsrRng_boBoomArmFoldedSensor;
    TCanSigRecInf     tCsrInfo_boDeltaArmInLowerZone;
    TCanSigRecRng_bo  tCsrRng_boDeltaArmInLowerZone;
    TCanSigRecInf     tCsrInfo_boTurretInRearCenterPos;
    TCanSigRecRng_bo  tCsrRng_boTurretInRearCenterPos;
    TCanSigRecInf     tCsrInfo_boTurretInFrontCenterPos;
    TCanSigRecRng_bo  tCsrRng_boTurretInFrontCenterPos;
    TCanSigRecInf     tCsrInfo_i32RegimeMotorAlternatorRpm;
    TCanSigRecRng_i32 tCsrRng_i32RegimeMotorAlternatorRpm;
    TCanSigRecInf     tCsrInfo_i16ArrowArmAngularSensor;
    TCanSigRecRng_i16 tCsrRng_i16ArrowArmAngularSensor;
} TCanSigRecVal_DataRcvFromC1;

typedef struct
{
    const TCanSigRecRoot *cptRoot;                          //!< [POI] Root connection
    TBoolean boRestrictedModeAruRadio;                      //!< [[-]] new signal 
    TBoolean boTranslationIsSolicited;                      //!< [[-]] new signal 
    TBit2 bi2SelectedControlPost;                           //!< [[-]] new signal 
    TBoolean boAxleMovementIsSolicited;                     //!< [[-]] new signal 
    TBoolean boDownAxleFixeSensor;                          //!< [[-]] new signal 
    TBoolean boDownAxleOscillantSensor;                     //!< [[-]] new signal 
    TBoolean boReduceSpeedRotTurretClockwise;               //!< [[-]] Reduce the speed of the turret clockwise movement 
    TUint16 u16SlopeAngle;                                  //!< [[-]] new signal 
    TBoolean boNacelleBasketRightSideSensor1;               //!< [[-]] new signal 
    TBoolean boNacelleBasketRightSideSensor2;               //!< [[-]] new signal 
    TBoolean boNacelleBasketLeftSideSensor1;                //!< [[-]] new signal 
    TBoolean boNacelleBasketLeftSideSensor2;                //!< [[-]] new signal 
    TBoolean boReduceSpeedRotTurretCtClock;                 //!< [[-]] new signal 
    TBoolean boReduceSpeedArrowArmDown;                     //!< [[-]] new signal 
    TBoolean boStopRotTurretClockwise;                      //!< [[-]] new signal 
    TBoolean boStopRotTurretCounterClockwise;               //!< [[-]] new signal 
    TBoolean boStopRotBasketClockwise;                      //!< [[-]] new signal 
    TBoolean boStopRotBasketCounterClockwise;               //!< [[-]] new signal 
    TBoolean boStopArrowArmDown;                            //!< [[-]] new signal 
    TBoolean boStopTelescopeOut;                            //!< [[-]] new signal 
    TInt16 i16EncodeurTurret1Angle;                         //!< [[-]] new signal 
} TCanSigRecDataSendToC1;

extern TCanSigRecDataSendToC1 gCsr_tDataSendToC1;

typedef struct
{
    TBoolean boRestrictedModeAruRadio;                      //!< [[-]] new signal 
    TBoolean boTranslationIsSolicited;                      //!< [[-]] new signal 
    TBit2 bi2SelectedControlPost;                           //!< [[-]] new signal 
    TBoolean boAxleMovementIsSolicited;                     //!< [[-]] new signal 
    TBoolean boDownAxleFixeSensor;                          //!< [[-]] new signal 
    TBoolean boDownAxleOscillantSensor;                     //!< [[-]] new signal 
    TBoolean boReduceSpeedRotTurretClockwise;               //!< [[-]] Reduce the speed of the turret clockwise movement 
    TUint16 u16SlopeAngle;                                  //!< [[-]] new signal 
    TBoolean boNacelleBasketRightSideSensor1;               //!< [[-]] new signal 
    TBoolean boNacelleBasketRightSideSensor2;               //!< [[-]] new signal 
    TBoolean boNacelleBasketLeftSideSensor1;                //!< [[-]] new signal 
    TBoolean boNacelleBasketLeftSideSensor2;                //!< [[-]] new signal 
    TBoolean boReduceSpeedRotTurretCtClock;                 //!< [[-]] new signal 
    TBoolean boReduceSpeedArrowArmDown;                     //!< [[-]] new signal 
    TBoolean boStopRotTurretClockwise;                      //!< [[-]] new signal 
    TBoolean boStopRotTurretCounterClockwise;               //!< [[-]] new signal 
    TBoolean boStopRotBasketClockwise;                      //!< [[-]] new signal 
    TBoolean boStopRotBasketCounterClockwise;               //!< [[-]] new signal 
    TBoolean boStopArrowArmDown;                            //!< [[-]] new signal 
    TBoolean boStopTelescopeOut;                            //!< [[-]] new signal 
    TInt16 i16EncodeurTurret1Angle;                         //!< [[-]] new signal 
} TCanSigRecOldValDataSendToC1;

typedef struct
{
    TCanSigRecInf     tCsrInfo_boRestrictedModeAruRadio;
    TCanSigRecRng_bo  tCsrRng_boRestrictedModeAruRadio;
    TCanSigRecInf     tCsrInfo_boTranslationIsSolicited;
    TCanSigRecRng_bo  tCsrRng_boTranslationIsSolicited;
    TCanSigRecInf     tCsrInfo_bi2SelectedControlPost;
    TCanSigRecRng_u8  tCsrRng_bi2SelectedControlPost;
    TCanSigRecInf     tCsrInfo_boAxleMovementIsSolicited;
    TCanSigRecRng_bo  tCsrRng_boAxleMovementIsSolicited;
    TCanSigRecInf     tCsrInfo_boDownAxleFixeSensor;
    TCanSigRecRng_bo  tCsrRng_boDownAxleFixeSensor;
    TCanSigRecInf     tCsrInfo_boDownAxleOscillantSensor;
    TCanSigRecRng_bo  tCsrRng_boDownAxleOscillantSensor;
    TCanSigRecInf     tCsrInfo_boReduceSpeedRotTurretClockwise;
    TCanSigRecRng_bo  tCsrRng_boReduceSpeedRotTurretClockwise;
    TCanSigRecInf     tCsrInfo_u16SlopeAngle;
    TCanSigRecRng_u16 tCsrRng_u16SlopeAngle;
    TCanSigRecInf     tCsrInfo_boNacelleBasketRightSideSensor1;
    TCanSigRecRng_bo  tCsrRng_boNacelleBasketRightSideSensor1;
    TCanSigRecInf     tCsrInfo_boNacelleBasketRightSideSensor2;
    TCanSigRecRng_bo  tCsrRng_boNacelleBasketRightSideSensor2;
    TCanSigRecInf     tCsrInfo_boNacelleBasketLeftSideSensor1;
    TCanSigRecRng_bo  tCsrRng_boNacelleBasketLeftSideSensor1;
    TCanSigRecInf     tCsrInfo_boNacelleBasketLeftSideSensor2;
    TCanSigRecRng_bo  tCsrRng_boNacelleBasketLeftSideSensor2;
    TCanSigRecInf     tCsrInfo_boReduceSpeedRotTurretCtClock;
    TCanSigRecRng_bo  tCsrRng_boReduceSpeedRotTurretCtClock;
    TCanSigRecInf     tCsrInfo_boReduceSpeedArrowArmDown;
    TCanSigRecRng_bo  tCsrRng_boReduceSpeedArrowArmDown;
    TCanSigRecInf     tCsrInfo_boStopRotTurretClockwise;
    TCanSigRecRng_bo  tCsrRng_boStopRotTurretClockwise;
    TCanSigRecInf     tCsrInfo_boStopRotTurretCounterClockwise;
    TCanSigRecRng_bo  tCsrRng_boStopRotTurretCounterClockwise;
    TCanSigRecInf     tCsrInfo_boStopRotBasketClockwise;
    TCanSigRecRng_bo  tCsrRng_boStopRotBasketClockwise;
    TCanSigRecInf     tCsrInfo_boStopRotBasketCounterClockwise;
    TCanSigRecRng_bo  tCsrRng_boStopRotBasketCounterClockwise;
    TCanSigRecInf     tCsrInfo_boStopArrowArmDown;
    TCanSigRecRng_bo  tCsrRng_boStopArrowArmDown;
    TCanSigRecInf     tCsrInfo_boStopTelescopeOut;
    TCanSigRecRng_bo  tCsrRng_boStopTelescopeOut;
    TCanSigRecInf     tCsrInfo_i16EncodeurTurret1Angle;
    TCanSigRecRng_i16 tCsrRng_i16EncodeurTurret1Angle;
} TCanSigRecVal_DataSendToC1;

typedef struct
{
    const TCanSigRecRoot *cptRoot;                          //!< [POI] Root connection
    TBoolean boRedLightARGBasketCmd;                        //!< [[-]] new signal 
    TBoolean boWhiteLightARGBasketCmd;                      //!< [[-]] new signal 
    TBoolean boWrongAbutments;                              //!< [[-]] new signal 
    TBoolean boStopMovementByBrakeTest;                     //!< [[-]] new signal 
    TBoolean boStopMovementByBreakInBrake;                  //!< [[-]] new signal 
    TBoolean boEnableBuzzerSelectPost;                      //!< [[-]] new signal 
    TBoolean boUpOsciAxlePos;                               //!< [[-]] new signal 
    TBoolean boUpFixeAxlePos;                               //!< [[-]] new signal 
    TUint32 u32EncodeurMastMeasureRaw;                      //!< [[-]] new signal 
    TBoolean boCenteredTurretState;                         //!< [[-]] new signal 
    TBoolean boAuthorizeWork;                               //!< [[-]] new signal 
    ERailWorkMode eRailWorkMode;                            //!< [[-]] new signal 
    TBoolean boRedLightARDBasketCmd;                        //!< [[-]] new signal 
    TBoolean boWhiteLightARDBasketCmd;                      //!< [[-]] new signal 
    TBoolean boSecondParkBrakeActive;                       //!< [[-]] new signal 
} TCanSigRecData2SendToC1;

extern TCanSigRecData2SendToC1 gCsr_tData2SendToC1;

typedef struct
{
    TBoolean boRedLightARGBasketCmd;                        //!< [[-]] new signal 
    TBoolean boWhiteLightARGBasketCmd;                      //!< [[-]] new signal 
    TBoolean boWrongAbutments;                              //!< [[-]] new signal 
    TBoolean boStopMovementByBrakeTest;                     //!< [[-]] new signal 
    TBoolean boStopMovementByBreakInBrake;                  //!< [[-]] new signal 
    TBoolean boEnableBuzzerSelectPost;                      //!< [[-]] new signal 
    TBoolean boUpOsciAxlePos;                               //!< [[-]] new signal 
    TBoolean boUpFixeAxlePos;                               //!< [[-]] new signal 
    TUint32 u32EncodeurMastMeasureRaw;                      //!< [[-]] new signal 
    TBoolean boCenteredTurretState;                         //!< [[-]] new signal 
    TBoolean boAuthorizeWork;                               //!< [[-]] new signal 
    ERailWorkMode eRailWorkMode;                            //!< [[-]] new signal 
    TBoolean boRedLightARDBasketCmd;                        //!< [[-]] new signal 
    TBoolean boWhiteLightARDBasketCmd;                      //!< [[-]] new signal 
    TBoolean boSecondParkBrakeActive;                       //!< [[-]] new signal 
} TCanSigRecOldValData2SendToC1;

typedef struct
{
    TCanSigRecInf     tCsrInfo_boRedLightARGBasketCmd;
    TCanSigRecRng_bo  tCsrRng_boRedLightARGBasketCmd;
    TCanSigRecInf     tCsrInfo_boWhiteLightARGBasketCmd;
    TCanSigRecRng_bo  tCsrRng_boWhiteLightARGBasketCmd;
    TCanSigRecInf     tCsrInfo_boWrongAbutments;
    TCanSigRecRng_bo  tCsrRng_boWrongAbutments;
    TCanSigRecInf     tCsrInfo_boStopMovementByBrakeTest;
    TCanSigRecRng_bo  tCsrRng_boStopMovementByBrakeTest;
    TCanSigRecInf     tCsrInfo_boStopMovementByBreakInBrake;
    TCanSigRecRng_bo  tCsrRng_boStopMovementByBreakInBrake;
    TCanSigRecInf     tCsrInfo_boEnableBuzzerSelectPost;
    TCanSigRecRng_bo  tCsrRng_boEnableBuzzerSelectPost;
    TCanSigRecInf     tCsrInfo_boUpOsciAxlePos;
    TCanSigRecRng_bo  tCsrRng_boUpOsciAxlePos;
    TCanSigRecInf     tCsrInfo_boUpFixeAxlePos;
    TCanSigRecRng_bo  tCsrRng_boUpFixeAxlePos;
    TCanSigRecInf     tCsrInfo_u32EncodeurMastMeasureRaw;
    TCanSigRecRng_u32 tCsrRng_u32EncodeurMastMeasureRaw;
    TCanSigRecInf     tCsrInfo_boCenteredTurretState;
    TCanSigRecRng_bo  tCsrRng_boCenteredTurretState;
    TCanSigRecInf     tCsrInfo_boAuthorizeWork;
    TCanSigRecRng_bo  tCsrRng_boAuthorizeWork;
    TCanSigRecInf     tCsrInfo_eRailWorkMode;
    TCanSigRecRng_u16 tCsrRng_eRailWorkMode;
    TCanSigRecInf     tCsrInfo_boRedLightARDBasketCmd;
    TCanSigRecRng_bo  tCsrRng_boRedLightARDBasketCmd;
    TCanSigRecInf     tCsrInfo_boWhiteLightARDBasketCmd;
    TCanSigRecRng_bo  tCsrRng_boWhiteLightARDBasketCmd;
    TCanSigRecInf     tCsrInfo_boSecondParkBrakeActive;
    TCanSigRecRng_bo  tCsrRng_boSecondParkBrakeActive;
} TCanSigRecVal_Data2SendToC1;

typedef struct
{
    const TCanSigRecRoot *cptRoot;                          //!< [POI] Root connection
    TBoolean boEvUpMeasuringMastCmd;                        //!< [[-]] new signal 
    TBoolean boEvDownMeasuringMastCmd;                      //!< [[-]] new signal 
    TBoolean boFoldedDeltaArmZone;                          //!< [[-]] new signal 
    TBoolean boFoldedArrowArmZone;                          //!< [[-]] new signal 
    TBoolean boFoldedMastMeasure;                           //!< [[-]] new signal 
    TBoolean boBasketInCentrerPos;                          //!< [[-]] new signal 
    TInt16 i16DeltaArmAngularSensorValue;                   //!< [[-]] new signal 
    TInt16 i16Transmission1Pressure;                        //!< [[-]] new signal 
    TInt16 i16Transmission2Pressure;                        //!< [[-]] new signal 
    TBit2 bi2ActiveHelpState;                               //!< [[-]] new signal 
    TBoolean boStopAllMovementsNacellePost;                 //!< [[-]] new signal 
    TBoolean boSlopeModeFromC1;                             //!< [[-]] new signal 
} TCanSigRecData2RdvFromC1;

extern TCanSigRecData2RdvFromC1 gCsr_tData2RdvFromC1;

typedef struct
{
    TBoolean boEvUpMeasuringMastCmd;                        //!< [[-]] new signal 
    TBoolean boEvDownMeasuringMastCmd;                      //!< [[-]] new signal 
    TBoolean boFoldedDeltaArmZone;                          //!< [[-]] new signal 
    TBoolean boFoldedArrowArmZone;                          //!< [[-]] new signal 
    TBoolean boFoldedMastMeasure;                           //!< [[-]] new signal 
    TBoolean boBasketInCentrerPos;                          //!< [[-]] new signal 
    TInt16 i16DeltaArmAngularSensorValue;                   //!< [[-]] new signal 
    TInt16 i16Transmission1Pressure;                        //!< [[-]] new signal 
    TInt16 i16Transmission2Pressure;                        //!< [[-]] new signal 
    TBit2 bi2ActiveHelpState;                               //!< [[-]] new signal 
    TBoolean boStopAllMovementsNacellePost;                 //!< [[-]] new signal 
    TBoolean boSlopeModeFromC1;                             //!< [[-]] new signal 
} TCanSigRecOldValData2RdvFromC1;

typedef struct
{
    TCanSigRecInf     tCsrInfo_boEvUpMeasuringMastCmd;
    TCanSigRecRng_bo  tCsrRng_boEvUpMeasuringMastCmd;
    TCanSigRecInf     tCsrInfo_boEvDownMeasuringMastCmd;
    TCanSigRecRng_bo  tCsrRng_boEvDownMeasuringMastCmd;
    TCanSigRecInf     tCsrInfo_boFoldedDeltaArmZone;
    TCanSigRecRng_bo  tCsrRng_boFoldedDeltaArmZone;
    TCanSigRecInf     tCsrInfo_boFoldedArrowArmZone;
    TCanSigRecRng_bo  tCsrRng_boFoldedArrowArmZone;
    TCanSigRecInf     tCsrInfo_boFoldedMastMeasure;
    TCanSigRecRng_bo  tCsrRng_boFoldedMastMeasure;
    TCanSigRecInf     tCsrInfo_boBasketInCentrerPos;
    TCanSigRecRng_bo  tCsrRng_boBasketInCentrerPos;
    TCanSigRecInf     tCsrInfo_i16DeltaArmAngularSensorValue;
    TCanSigRecRng_i16 tCsrRng_i16DeltaArmAngularSensorValue;
    TCanSigRecInf     tCsrInfo_i16Transmission1Pressure;
    TCanSigRecRng_i16 tCsrRng_i16Transmission1Pressure;
    TCanSigRecInf     tCsrInfo_i16Transmission2Pressure;
    TCanSigRecRng_i16 tCsrRng_i16Transmission2Pressure;
    TCanSigRecInf     tCsrInfo_bi2ActiveHelpState;
    TCanSigRecRng_u8  tCsrRng_bi2ActiveHelpState;
    TCanSigRecInf     tCsrInfo_boStopAllMovementsNacellePost;
    TCanSigRecRng_bo  tCsrRng_boStopAllMovementsNacellePost;
    TCanSigRecInf     tCsrInfo_boSlopeModeFromC1;
    TCanSigRecRng_bo  tCsrRng_boSlopeModeFromC1;
} TCanSigRecVal_Data2RdvFromC1;

typedef struct
{
    const TCanSigRecRoot *cptRoot;                          //!< [POI] Root connection
    TInt32 i32SpeedVehicleKmhx100;                          //!< [[-]] new signal 
    TUint16 u16EvForwardCommand;                            //!< [[-]] new signal 
    TUint16 u16EvBackwardCommand;                           //!< [[-]] new signal 
} TCanSigRecData3SendToC1;

extern TCanSigRecData3SendToC1 gCsr_tData3SendToC1;

typedef struct
{
    TInt32 i32SpeedVehicleKmhx100;                          //!< [[-]] new signal 
    TUint16 u16EvForwardCommand;                            //!< [[-]] new signal 
    TUint16 u16EvBackwardCommand;                           //!< [[-]] new signal 
} TCanSigRecOldValData3SendToC1;

typedef struct
{
    TCanSigRecInf     tCsrInfo_i32SpeedVehicleKmhx100;
    TCanSigRecRng_i32 tCsrRng_i32SpeedVehicleKmhx100;
    TCanSigRecInf     tCsrInfo_u16EvForwardCommand;
    TCanSigRecRng_u16 tCsrRng_u16EvForwardCommand;
    TCanSigRecInf     tCsrInfo_u16EvBackwardCommand;
    TCanSigRecRng_u16 tCsrRng_u16EvBackwardCommand;
} TCanSigRecVal_Data3SendToC1;

typedef struct
{
    const TCanSigRecRoot *cptRoot;                          //!< [POI] Root connection
    TUint16 u16EncodeurMastMeasureCentimeter;               //!< [[-]] new signal 
    TBoolean boReserve;                                     //!< [[-]] new signal 
    TBoolean boMastMeasureFonctionActive;                   //!< [[-]] new signal 
    TBoolean boBeacon;                                      //!< [[-]] Commande du gyrophare 
    TBoolean boMotorOn;                                     //!< [[-]] Moteur allumé 
    TBoolean boFaultLenghtSensor;                           //!< [[-]] Alarme du capteur téléscope 
    TBoolean boTurretSensorsFailures;                       //!< [[-]] Alarme sur le capteur tourelle 
    TBoolean boOptionWhiteLight15746;                       //!< [[-]] option feux blanc 15746 
    TBoolean bogSafeManSystem;                              //!< [[-]] new signal 
} TCanSigRecData3RcvFromC1;

extern TCanSigRecData3RcvFromC1 gCsr_tData3RcvFromC1;

typedef struct
{
    TUint16 u16EncodeurMastMeasureCentimeter;               //!< [[-]] new signal 
    TBoolean boReserve;                                     //!< [[-]] new signal 
    TBoolean boMastMeasureFonctionActive;                   //!< [[-]] new signal 
    TBoolean boBeacon;                                      //!< [[-]] Commande du gyrophare 
    TBoolean boMotorOn;                                     //!< [[-]] Moteur allumé 
    TBoolean boFaultLenghtSensor;                           //!< [[-]] Alarme du capteur téléscope 
    TBoolean boTurretSensorsFailures;                       //!< [[-]] Alarme sur le capteur tourelle 
    TBoolean boOptionWhiteLight15746;                       //!< [[-]] option feux blanc 15746 
    TBoolean bogSafeManSystem;                              //!< [[-]] new signal 
} TCanSigRecOldValData3RcvFromC1;

typedef struct
{
    TCanSigRecInf     tCsrInfo_u16EncodeurMastMeasureCentimeter;
    TCanSigRecRng_u16 tCsrRng_u16EncodeurMastMeasureCentimeter;
    TCanSigRecInf     tCsrInfo_boReserve;
    TCanSigRecRng_bo  tCsrRng_boReserve;
    TCanSigRecInf     tCsrInfo_boMastMeasureFonctionActive;
    TCanSigRecRng_bo  tCsrRng_boMastMeasureFonctionActive;
    TCanSigRecInf     tCsrInfo_boBeacon;
    TCanSigRecRng_bo  tCsrRng_boBeacon;
    TCanSigRecInf     tCsrInfo_boMotorOn;
    TCanSigRecRng_bo  tCsrRng_boMotorOn;
    TCanSigRecInf     tCsrInfo_boFaultLenghtSensor;
    TCanSigRecRng_bo  tCsrRng_boFaultLenghtSensor;
    TCanSigRecInf     tCsrInfo_boTurretSensorsFailures;
    TCanSigRecRng_bo  tCsrRng_boTurretSensorsFailures;
    TCanSigRecInf     tCsrInfo_boOptionWhiteLight15746;
    TCanSigRecRng_bo  tCsrRng_boOptionWhiteLight15746;
    TCanSigRecInf     tCsrInfo_bogSafeManSystem;
    TCanSigRecRng_bo  tCsrRng_bogSafeManSystem;
} TCanSigRecVal_Data3RcvFromC1;

typedef struct
{
    const TCanSigRecRoot *cptRoot;                          //!< [POI] Root connection
    TBoolean boDm_Inc_Pos_Folded_Delta_Arrow;               //!< [[-]] new signal 
    TBoolean boDm_Active_Help;                              //!< [[-]] new signal 
    TBoolean boDm_Ev_Bypass_Fault;                          //!< [[-]] new signal 
    TBoolean boOutOfRangeTransmissionPressure;              //!< [[-]] new signal 
    TBoolean boDm_Overload_Detected_By_C1;                  //!< [[-]] new signal 
} TCanSigRecFailuresC1SendToC0;

extern TCanSigRecFailuresC1SendToC0 gCsr_tFailuresC1SendToC0;

typedef struct
{
    TBoolean boDm_Inc_Pos_Folded_Delta_Arrow;               //!< [[-]] new signal 
    TBoolean boDm_Active_Help;                              //!< [[-]] new signal 
    TBoolean boDm_Ev_Bypass_Fault;                          //!< [[-]] new signal 
    TBoolean boOutOfRangeTransmissionPressure;              //!< [[-]] new signal 
    TBoolean boDm_Overload_Detected_By_C1;                  //!< [[-]] new signal 
} TCanSigRecOldValFailuresC1SendToC0;

typedef struct
{
    TCanSigRecInf     tCsrInfo_boDm_Inc_Pos_Folded_Delta_Arrow;
    TCanSigRecRng_bo  tCsrRng_boDm_Inc_Pos_Folded_Delta_Arrow;
    TCanSigRecInf     tCsrInfo_boDm_Active_Help;
    TCanSigRecRng_bo  tCsrRng_boDm_Active_Help;
    TCanSigRecInf     tCsrInfo_boDm_Ev_Bypass_Fault;
    TCanSigRecRng_bo  tCsrRng_boDm_Ev_Bypass_Fault;
    TCanSigRecInf     tCsrInfo_boOutOfRangeTransmissionPressure;
    TCanSigRecRng_bo  tCsrRng_boOutOfRangeTransmissionPressure;
    TCanSigRecInf     tCsrInfo_boDm_Overload_Detected_By_C1;
    TCanSigRecRng_bo  tCsrRng_boDm_Overload_Detected_By_C1;
} TCanSigRecVal_FailuresC1SendToC0;

typedef struct
{
    const TCanSigRecRoot *cptRoot;                          //!< [POI] Root connection
    TBoolean boDm_Swi_Dbl_NcNo_Inc_FrameRot;                //!< [[-]] new signal 
    TBoolean boDm_Turret_Sensor_Fault;                      //!< [[-]] new signal 
    TBoolean boEvParkBrakeAxleOscillantFault;               //!< [[-]] new signal 
    TBoolean boEvParkBrakeAxleFixeFault;                    //!< [[-]] new signal 
    TBoolean boEvServiceBrakeAxleOsciFault;                 //!< [[-]] new signal 
    TBoolean boEvServiceBrakeAxleFixeFault;                 //!< [[-]] new signal 
    TBoolean boEvServiceBrakeTrackFault;                    //!< [[-]] new signal 
    TBoolean boRm_Com_Can_Radio_Loss;                       //!< [[-]] new signal 
    TBoolean boEv2ndParkBrakeAxleFixeFault;                 //!< [[-]] Variable d_alarme de l_état de la pin, pour l_envoie au C1 
    TBoolean boEv2ndParkBrakeAxleOsciFault;                 //!< [[-]] Variable d_alarme de l_état de la pin, pour l_envoie au C1. 
} TCanSigRecFailuresC0SendToC1;

extern TCanSigRecFailuresC0SendToC1 gCsr_tFailuresC0SendToC1;

typedef struct
{
    TBoolean boDm_Swi_Dbl_NcNo_Inc_FrameRot;                //!< [[-]] new signal 
    TBoolean boDm_Turret_Sensor_Fault;                      //!< [[-]] new signal 
    TBoolean boEvParkBrakeAxleOscillantFault;               //!< [[-]] new signal 
    TBoolean boEvParkBrakeAxleFixeFault;                    //!< [[-]] new signal 
    TBoolean boEvServiceBrakeAxleOsciFault;                 //!< [[-]] new signal 
    TBoolean boEvServiceBrakeAxleFixeFault;                 //!< [[-]] new signal 
    TBoolean boEvServiceBrakeTrackFault;                    //!< [[-]] new signal 
    TBoolean boRm_Com_Can_Radio_Loss;                       //!< [[-]] new signal 
    TBoolean boEv2ndParkBrakeAxleFixeFault;                 //!< [[-]] Variable d_alarme de l_état de la pin, pour l_envoie au C1 
    TBoolean boEv2ndParkBrakeAxleOsciFault;                 //!< [[-]] Variable d_alarme de l_état de la pin, pour l_envoie au C1. 
} TCanSigRecOldValFailuresC0SendToC1;

typedef struct
{
    TCanSigRecInf     tCsrInfo_boDm_Swi_Dbl_NcNo_Inc_FrameRot;
    TCanSigRecRng_bo  tCsrRng_boDm_Swi_Dbl_NcNo_Inc_FrameRot;
    TCanSigRecInf     tCsrInfo_boDm_Turret_Sensor_Fault;
    TCanSigRecRng_bo  tCsrRng_boDm_Turret_Sensor_Fault;
    TCanSigRecInf     tCsrInfo_boEvParkBrakeAxleOscillantFault;
    TCanSigRecRng_bo  tCsrRng_boEvParkBrakeAxleOscillantFault;
    TCanSigRecInf     tCsrInfo_boEvParkBrakeAxleFixeFault;
    TCanSigRecRng_bo  tCsrRng_boEvParkBrakeAxleFixeFault;
    TCanSigRecInf     tCsrInfo_boEvServiceBrakeAxleOsciFault;
    TCanSigRecRng_bo  tCsrRng_boEvServiceBrakeAxleOsciFault;
    TCanSigRecInf     tCsrInfo_boEvServiceBrakeAxleFixeFault;
    TCanSigRecRng_bo  tCsrRng_boEvServiceBrakeAxleFixeFault;
    TCanSigRecInf     tCsrInfo_boEvServiceBrakeTrackFault;
    TCanSigRecRng_bo  tCsrRng_boEvServiceBrakeTrackFault;
    TCanSigRecInf     tCsrInfo_boRm_Com_Can_Radio_Loss;
    TCanSigRecRng_bo  tCsrRng_boRm_Com_Can_Radio_Loss;
    TCanSigRecInf     tCsrInfo_boEv2ndParkBrakeAxleFixeFault;
    TCanSigRecRng_bo  tCsrRng_boEv2ndParkBrakeAxleFixeFault;
    TCanSigRecInf     tCsrInfo_boEv2ndParkBrakeAxleOsciFault;
    TCanSigRecRng_bo  tCsrRng_boEv2ndParkBrakeAxleOsciFault;
} TCanSigRecVal_FailuresC0SendToC1;

typedef struct
{
    const TCanSigRecRoot *cptRoot;                          //!< [POI] Root connection
    TBoolean boStopAggravantMovements;                      //!< [[-]] new signal 
    TBoolean boTurretPostorRadoPostOn;                      //!< [[-]] new signal 
    TBoolean boMotorAccelerated;                            //!< [[-]] new signal 
    TBoolean boRadioPostSelectorOn;                         //!< [[-]] new signal 
    TBoolean boSlopeHighWithWorkOnCrawler;                  //!< [[-]] new signal 
    TBoolean boErrorActiveOnC0;                             //!< [[-]] new signal 
    TBoolean boRailWorkMultiLaneMode;                       //!< [[-]] new signal 
    TBoolean boPresenceSensorPlate;                         //!< [[-]] new signal 
    TBoolean boWhiteLightAV15746Command;                    //!< [[-]] new signal 
    TBoolean boWhiteLightAR15746Command;                    //!< [[-]] new signal 
    TInt16 i16Signal_9;                                     //!< [[-]] new signal 
    TInt16 i16Signal_10;                                    //!< [[-]] new signal 
    TUint8 u8RecoveryReductionRatio;                        //!< [[-]] new signal 
} TCanSigRecData4C0SendToC1;

extern TCanSigRecData4C0SendToC1 gCsr_tData4C0SendToC1;

typedef struct
{
    TBoolean boStopAggravantMovements;                      //!< [[-]] new signal 
    TBoolean boTurretPostorRadoPostOn;                      //!< [[-]] new signal 
    TBoolean boMotorAccelerated;                            //!< [[-]] new signal 
    TBoolean boRadioPostSelectorOn;                         //!< [[-]] new signal 
    TBoolean boSlopeHighWithWorkOnCrawler;                  //!< [[-]] new signal 
    TBoolean boErrorActiveOnC0;                             //!< [[-]] new signal 
    TBoolean boRailWorkMultiLaneMode;                       //!< [[-]] new signal 
    TBoolean boPresenceSensorPlate;                         //!< [[-]] new signal 
    TBoolean boWhiteLightAV15746Command;                    //!< [[-]] new signal 
    TBoolean boWhiteLightAR15746Command;                    //!< [[-]] new signal 
    TInt16 i16Signal_9;                                     //!< [[-]] new signal 
    TInt16 i16Signal_10;                                    //!< [[-]] new signal 
    TUint8 u8RecoveryReductionRatio;                        //!< [[-]] new signal 
} TCanSigRecOldValData4C0SendToC1;

typedef struct
{
    TCanSigRecInf     tCsrInfo_boStopAggravantMovements;
    TCanSigRecRng_bo  tCsrRng_boStopAggravantMovements;
    TCanSigRecInf     tCsrInfo_boTurretPostorRadoPostOn;
    TCanSigRecRng_bo  tCsrRng_boTurretPostorRadoPostOn;
    TCanSigRecInf     tCsrInfo_boMotorAccelerated;
    TCanSigRecRng_bo  tCsrRng_boMotorAccelerated;
    TCanSigRecInf     tCsrInfo_boRadioPostSelectorOn;
    TCanSigRecRng_bo  tCsrRng_boRadioPostSelectorOn;
    TCanSigRecInf     tCsrInfo_boSlopeHighWithWorkOnCrawler;
    TCanSigRecRng_bo  tCsrRng_boSlopeHighWithWorkOnCrawler;
    TCanSigRecInf     tCsrInfo_boErrorActiveOnC0;
    TCanSigRecRng_bo  tCsrRng_boErrorActiveOnC0;
    TCanSigRecInf     tCsrInfo_boRailWorkMultiLaneMode;
    TCanSigRecRng_bo  tCsrRng_boRailWorkMultiLaneMode;
    TCanSigRecInf     tCsrInfo_boPresenceSensorPlate;
    TCanSigRecRng_bo  tCsrRng_boPresenceSensorPlate;
    TCanSigRecInf     tCsrInfo_boWhiteLightAV15746Command;
    TCanSigRecRng_bo  tCsrRng_boWhiteLightAV15746Command;
    TCanSigRecInf     tCsrInfo_boWhiteLightAR15746Command;
    TCanSigRecRng_bo  tCsrRng_boWhiteLightAR15746Command;
    TCanSigRecInf     tCsrInfo_i16Signal_9;
    TCanSigRecRng_i16 tCsrRng_i16Signal_9;
    TCanSigRecInf     tCsrInfo_i16Signal_10;
    TCanSigRecRng_i16 tCsrRng_i16Signal_10;
    TCanSigRecInf     tCsrInfo_u8RecoveryReductionRatio;
    TCanSigRecRng_u8  tCsrRng_u8RecoveryReductionRatio;
} TCanSigRecVal_Data4C0SendToC1;

typedef struct
{
    const TCanSigRecRoot *cptRoot;                          //!< [POI] Root connection
    TBoolean boNoMovementRunning;                           //!< [[-]] new signal 
    TBoolean boStopMoveLimitEnvelop;                        //!< [[-]] new signal 
    TBoolean boTransmissionPressureFault;                   //!< [[-]] new signal 
    TBoolean boLynxOnAllMvts;                               //!< [[-]] new signal 
    TBoolean boMotorOn_Dtlg;                                //!< [[-]] new signal 
    TBoolean boSignal_4;                                    //!< [[-]] new signal 
    TBoolean boSignal_5;                                    //!< [[-]] new signal 
    TBoolean boSignal_6;                                    //!< [[-]] new signal 
    TUint8 u8Signal_7;                                      //!< [[-]] new signal 
    TInt16 i16BypassPressureSensorValue;                    //!< [[-]] new signal 
    TInt16 i16Signal_9;                                     //!< [[-]] new signal 
    TInt16 i16Signal_10;                                    //!< [[-]] new signal 
} TCanSigRecData4C1SendToC0;

extern TCanSigRecData4C1SendToC0 gCsr_tData4C1SendToC0;

typedef struct
{
    TBoolean boNoMovementRunning;                           //!< [[-]] new signal 
    TBoolean boStopMoveLimitEnvelop;                        //!< [[-]] new signal 
    TBoolean boTransmissionPressureFault;                   //!< [[-]] new signal 
    TBoolean boLynxOnAllMvts;                               //!< [[-]] new signal 
    TBoolean boMotorOn_Dtlg;                                //!< [[-]] new signal 
    TBoolean boSignal_4;                                    //!< [[-]] new signal 
    TBoolean boSignal_5;                                    //!< [[-]] new signal 
    TBoolean boSignal_6;                                    //!< [[-]] new signal 
    TUint8 u8Signal_7;                                      //!< [[-]] new signal 
    TInt16 i16BypassPressureSensorValue;                    //!< [[-]] new signal 
    TInt16 i16Signal_9;                                     //!< [[-]] new signal 
    TInt16 i16Signal_10;                                    //!< [[-]] new signal 
} TCanSigRecOldValData4C1SendToC0;

typedef struct
{
    TCanSigRecInf     tCsrInfo_boNoMovementRunning;
    TCanSigRecRng_bo  tCsrRng_boNoMovementRunning;
    TCanSigRecInf     tCsrInfo_boStopMoveLimitEnvelop;
    TCanSigRecRng_bo  tCsrRng_boStopMoveLimitEnvelop;
    TCanSigRecInf     tCsrInfo_boTransmissionPressureFault;
    TCanSigRecRng_bo  tCsrRng_boTransmissionPressureFault;
    TCanSigRecInf     tCsrInfo_boLynxOnAllMvts;
    TCanSigRecRng_bo  tCsrRng_boLynxOnAllMvts;
    TCanSigRecInf     tCsrInfo_boMotorOn_Dtlg;
    TCanSigRecRng_bo  tCsrRng_boMotorOn_Dtlg;
    TCanSigRecInf     tCsrInfo_boSignal_4;
    TCanSigRecRng_bo  tCsrRng_boSignal_4;
    TCanSigRecInf     tCsrInfo_boSignal_5;
    TCanSigRecRng_bo  tCsrRng_boSignal_5;
    TCanSigRecInf     tCsrInfo_boSignal_6;
    TCanSigRecRng_bo  tCsrRng_boSignal_6;
    TCanSigRecInf     tCsrInfo_u8Signal_7;
    TCanSigRecRng_u8  tCsrRng_u8Signal_7;
    TCanSigRecInf     tCsrInfo_i16BypassPressureSensorValue;
    TCanSigRecRng_i16 tCsrRng_i16BypassPressureSensorValue;
    TCanSigRecInf     tCsrInfo_i16Signal_9;
    TCanSigRecRng_i16 tCsrRng_i16Signal_9;
    TCanSigRecInf     tCsrInfo_i16Signal_10;
    TCanSigRecRng_i16 tCsrRng_i16Signal_10;
} TCanSigRecVal_Data4C1SendToC0;

typedef struct
{
    const TCanSigRecRoot *cptRoot;                          //!< [POI] Root connection
    TBoolean boAutorisationHighSpeedKeyState;               //!< [[-]] new signal 
    TBoolean boTransRailElectricRampOngoing;                //!< [[-]] new signal 
    TBoolean boSendAuthorizeReloadBattery;                  //!< [[-]] new signal 
    TBoolean boPreventLimitSpeedExceeding;                  //!< [[-]] new signal 
    TBoolean boUpMastSensorNC;                              //!< [[-]] new signal 
    TBoolean boValveInDownPositionSensor;                   //!< [[-]] new signal 
    TBoolean boMeasuringMastSensorFolded;                   //!< [[-]] new signal 
    TInt16 i16RpmPvgTransRail;                              //!< [[-]] new signal 
    TUint8 u8Batt_Soc;                                      //!< [[-]] new signal 
    TInt16 i16Ibatt_ist;                                    //!< [[-]] new signal 
    TUint8 u8SelectedControlPost;                           //!< [[-]] new signal 
    TBoolean boAddPerformanceFunc;                          //!< [[-]] new signal 
    TBoolean boSlopeCaseLess2Deg;                           //!< [[-]] new signal 
    TBoolean boSlopeCaseLess4Deg;                           //!< [[-]] new signal 
    TBoolean boSlopeCaseLess6Deg;                           //!< [[-]] new signal 
    TBoolean boSlopeCaseHigher6Deg;                         //!< [[-]] new signal 
    TBoolean boTurretInSpeedZone2Deg;                       //!< [[-]] new signal 
    TBoolean boTurretInSpeedZone4Deg;                       //!< [[-]] new signal 
    TBoolean boTurretInSpeedZone2DegForBasket;              //!< [[-]] new signal 
} TCanSigRecData5C0SendToC1;

extern TCanSigRecData5C0SendToC1 gCsr_tData5C0SendToC1;

typedef struct
{
    TBoolean boAutorisationHighSpeedKeyState;               //!< [[-]] new signal 
    TBoolean boTransRailElectricRampOngoing;                //!< [[-]] new signal 
    TBoolean boSendAuthorizeReloadBattery;                  //!< [[-]] new signal 
    TBoolean boPreventLimitSpeedExceeding;                  //!< [[-]] new signal 
    TBoolean boUpMastSensorNC;                              //!< [[-]] new signal 
    TBoolean boValveInDownPositionSensor;                   //!< [[-]] new signal 
    TBoolean boMeasuringMastSensorFolded;                   //!< [[-]] new signal 
    TInt16 i16RpmPvgTransRail;                              //!< [[-]] new signal 
    TUint8 u8Batt_Soc;                                      //!< [[-]] new signal 
    TInt16 i16Ibatt_ist;                                    //!< [[-]] new signal 
    TUint8 u8SelectedControlPost;                           //!< [[-]] new signal 
    TBoolean boAddPerformanceFunc;                          //!< [[-]] new signal 
    TBoolean boSlopeCaseLess2Deg;                           //!< [[-]] new signal 
    TBoolean boSlopeCaseLess4Deg;                           //!< [[-]] new signal 
    TBoolean boSlopeCaseLess6Deg;                           //!< [[-]] new signal 
    TBoolean boSlopeCaseHigher6Deg;                         //!< [[-]] new signal 
    TBoolean boTurretInSpeedZone2Deg;                       //!< [[-]] new signal 
    TBoolean boTurretInSpeedZone4Deg;                       //!< [[-]] new signal 
    TBoolean boTurretInSpeedZone2DegForBasket;              //!< [[-]] new signal 
} TCanSigRecOldValData5C0SendToC1;

typedef struct
{
    TCanSigRecInf     tCsrInfo_boAutorisationHighSpeedKeyState;
    TCanSigRecRng_bo  tCsrRng_boAutorisationHighSpeedKeyState;
    TCanSigRecInf     tCsrInfo_boTransRailElectricRampOngoing;
    TCanSigRecRng_bo  tCsrRng_boTransRailElectricRampOngoing;
    TCanSigRecInf     tCsrInfo_boSendAuthorizeReloadBattery;
    TCanSigRecRng_bo  tCsrRng_boSendAuthorizeReloadBattery;
    TCanSigRecInf     tCsrInfo_boPreventLimitSpeedExceeding;
    TCanSigRecRng_bo  tCsrRng_boPreventLimitSpeedExceeding;
    TCanSigRecInf     tCsrInfo_boUpMastSensorNC;
    TCanSigRecRng_bo  tCsrRng_boUpMastSensorNC;
    TCanSigRecInf     tCsrInfo_boValveInDownPositionSensor;
    TCanSigRecRng_bo  tCsrRng_boValveInDownPositionSensor;
    TCanSigRecInf     tCsrInfo_boMeasuringMastSensorFolded;
    TCanSigRecRng_bo  tCsrRng_boMeasuringMastSensorFolded;
    TCanSigRecInf     tCsrInfo_i16RpmPvgTransRail;
    TCanSigRecRng_i16 tCsrRng_i16RpmPvgTransRail;
    TCanSigRecInf     tCsrInfo_u8Batt_Soc;
    TCanSigRecRng_u8  tCsrRng_u8Batt_Soc;
    TCanSigRecInf     tCsrInfo_i16Ibatt_ist;
    TCanSigRecRng_i16 tCsrRng_i16Ibatt_ist;
    TCanSigRecInf     tCsrInfo_u8SelectedControlPost;
    TCanSigRecRng_u8  tCsrRng_u8SelectedControlPost;
    TCanSigRecInf     tCsrInfo_boAddPerformanceFunc;
    TCanSigRecRng_bo  tCsrRng_boAddPerformanceFunc;
    TCanSigRecInf     tCsrInfo_boSlopeCaseLess2Deg;
    TCanSigRecRng_bo  tCsrRng_boSlopeCaseLess2Deg;
    TCanSigRecInf     tCsrInfo_boSlopeCaseLess4Deg;
    TCanSigRecRng_bo  tCsrRng_boSlopeCaseLess4Deg;
    TCanSigRecInf     tCsrInfo_boSlopeCaseLess6Deg;
    TCanSigRecRng_bo  tCsrRng_boSlopeCaseLess6Deg;
    TCanSigRecInf     tCsrInfo_boSlopeCaseHigher6Deg;
    TCanSigRecRng_bo  tCsrRng_boSlopeCaseHigher6Deg;
    TCanSigRecInf     tCsrInfo_boTurretInSpeedZone2Deg;
    TCanSigRecRng_bo  tCsrRng_boTurretInSpeedZone2Deg;
    TCanSigRecInf     tCsrInfo_boTurretInSpeedZone4Deg;
    TCanSigRecRng_bo  tCsrRng_boTurretInSpeedZone4Deg;
    TCanSigRecInf     tCsrInfo_boTurretInSpeedZone2DegForBasket;
    TCanSigRecRng_bo  tCsrRng_boTurretInSpeedZone2DegForBasket;
} TCanSigRecVal_Data5C0SendToC1;

typedef struct
{
    const TCanSigRecRoot *cptRoot;                          //!< [POI] Root connection
    TBoolean boColdOilTankTemperature;                      //!< [[-]] new signal 
    TBoolean boElectricMotorForbidden;                      //!< [[-]] new signal 
    TBoolean boSocStopRegen;                                //!< [[-]] new signal 
    TBoolean boAutoModeActivate;                            //!< [[-]] new signal 
    TBoolean boSilenceModeActivate;                         //!< [[-]] new signal 
    TBoolean boForcingRegenlow;                             //!< [[-]] new signal 
    TBoolean boForcingRegenHigh;                            //!< [[-]] new signal 
    TBoolean boInterdictOfNacelTurretPost;                  //!< [[-]] new signal 
    TInt16 i16RpmMotorElectric;                             //!< [[-]] new signal 
    TInt16 i16OilTankTemperatureValue;                      //!< [[-]] new signal 
    TBoolean boGeneratorOn;                                 //!< [[-]] new signal 
    TBoolean boEvDevMvtsCmd;                                //!< [[-]] new signal 
    TBoolean boPerformAutoriseTransArrow;                   //!< [[-]] new signal 
    TBoolean boValidTelescopeSector;                        //!< [[-]] new signal 
    TBoolean boValidFirstSectorTelescope;                   //!< [[-]] new signal 
    TBoolean boPostInterdictionMastSNCF;                    //!< [[-]] new signal 
    TBoolean boEvBypassCommand;                             //!< [[-]] new signal 
    TBoolean boMastPanthoFoldedSNCF;                        //!< [[-]] new signal 
    TInt16 i16MotorspeedCmdJ1939;                           //!< [[-]] new signal 
} TCanSigRecData5C1SendToC0;

extern TCanSigRecData5C1SendToC0 gCsr_tData5C1SendToC0;

typedef struct
{
    TBoolean boColdOilTankTemperature;                      //!< [[-]] new signal 
    TBoolean boElectricMotorForbidden;                      //!< [[-]] new signal 
    TBoolean boSocStopRegen;                                //!< [[-]] new signal 
    TBoolean boAutoModeActivate;                            //!< [[-]] new signal 
    TBoolean boSilenceModeActivate;                         //!< [[-]] new signal 
    TBoolean boForcingRegenlow;                             //!< [[-]] new signal 
    TBoolean boForcingRegenHigh;                            //!< [[-]] new signal 
    TBoolean boInterdictOfNacelTurretPost;                  //!< [[-]] new signal 
    TInt16 i16RpmMotorElectric;                             //!< [[-]] new signal 
    TInt16 i16OilTankTemperatureValue;                      //!< [[-]] new signal 
    TBoolean boGeneratorOn;                                 //!< [[-]] new signal 
    TBoolean boEvDevMvtsCmd;                                //!< [[-]] new signal 
    TBoolean boPerformAutoriseTransArrow;                   //!< [[-]] new signal 
    TBoolean boValidTelescopeSector;                        //!< [[-]] new signal 
    TBoolean boValidFirstSectorTelescope;                   //!< [[-]] new signal 
    TBoolean boPostInterdictionMastSNCF;                    //!< [[-]] new signal 
    TBoolean boEvBypassCommand;                             //!< [[-]] new signal 
    TBoolean boMastPanthoFoldedSNCF;                        //!< [[-]] new signal 
    TInt16 i16MotorspeedCmdJ1939;                           //!< [[-]] new signal 
} TCanSigRecOldValData5C1SendToC0;

typedef struct
{
    TCanSigRecInf     tCsrInfo_boColdOilTankTemperature;
    TCanSigRecRng_bo  tCsrRng_boColdOilTankTemperature;
    TCanSigRecInf     tCsrInfo_boElectricMotorForbidden;
    TCanSigRecRng_bo  tCsrRng_boElectricMotorForbidden;
    TCanSigRecInf     tCsrInfo_boSocStopRegen;
    TCanSigRecRng_bo  tCsrRng_boSocStopRegen;
    TCanSigRecInf     tCsrInfo_boAutoModeActivate;
    TCanSigRecRng_bo  tCsrRng_boAutoModeActivate;
    TCanSigRecInf     tCsrInfo_boSilenceModeActivate;
    TCanSigRecRng_bo  tCsrRng_boSilenceModeActivate;
    TCanSigRecInf     tCsrInfo_boForcingRegenlow;
    TCanSigRecRng_bo  tCsrRng_boForcingRegenlow;
    TCanSigRecInf     tCsrInfo_boForcingRegenHigh;
    TCanSigRecRng_bo  tCsrRng_boForcingRegenHigh;
    TCanSigRecInf     tCsrInfo_boInterdictOfNacelTurretPost;
    TCanSigRecRng_bo  tCsrRng_boInterdictOfNacelTurretPost;
    TCanSigRecInf     tCsrInfo_i16RpmMotorElectric;
    TCanSigRecRng_i16 tCsrRng_i16RpmMotorElectric;
    TCanSigRecInf     tCsrInfo_i16OilTankTemperatureValue;
    TCanSigRecRng_i16 tCsrRng_i16OilTankTemperatureValue;
    TCanSigRecInf     tCsrInfo_boGeneratorOn;
    TCanSigRecRng_bo  tCsrRng_boGeneratorOn;
    TCanSigRecInf     tCsrInfo_boEvDevMvtsCmd;
    TCanSigRecRng_bo  tCsrRng_boEvDevMvtsCmd;
    TCanSigRecInf     tCsrInfo_boPerformAutoriseTransArrow;
    TCanSigRecRng_bo  tCsrRng_boPerformAutoriseTransArrow;
    TCanSigRecInf     tCsrInfo_boValidTelescopeSector;
    TCanSigRecRng_bo  tCsrRng_boValidTelescopeSector;
    TCanSigRecInf     tCsrInfo_boValidFirstSectorTelescope;
    TCanSigRecRng_bo  tCsrRng_boValidFirstSectorTelescope;
    TCanSigRecInf     tCsrInfo_boPostInterdictionMastSNCF;
    TCanSigRecRng_bo  tCsrRng_boPostInterdictionMastSNCF;
    TCanSigRecInf     tCsrInfo_boEvBypassCommand;
    TCanSigRecRng_bo  tCsrRng_boEvBypassCommand;
    TCanSigRecInf     tCsrInfo_boMastPanthoFoldedSNCF;
    TCanSigRecRng_bo  tCsrRng_boMastPanthoFoldedSNCF;
    TCanSigRecInf     tCsrInfo_i16MotorspeedCmdJ1939;
    TCanSigRecRng_i16 tCsrRng_i16MotorspeedCmdJ1939;
} TCanSigRecVal_Data5C1SendToC0;

#endif // __APP_CAN_SIG_REC_H__ 

