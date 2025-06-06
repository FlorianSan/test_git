//**************************************************************************************************
//! @crc        2901657620
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
    eCSR_Start,                                             //!< eCSR_Start
    eCSR_StartSensor,                                       //!< eCSR_StartSensor
    eCSR_NMT,                                               //!< eCSR_NMT
    eCSR_HMG_1,                                             //!< eCSR_HMG_1
    eCSR_HMG_2,                                             //!< eCSR_HMG_2
    eCSR_HMG_3,                                             //!< eCSR_HMG_3
    eCSR_Datalogger,                                        //!< eCSR_Datalogger
    eCSR_SyncFrame,                                         //!< eCSR_SyncFrame
    eCSR_EmergencyMastMeasure,                              //!< eCSR_EmergencyMastMeasure
    eCSR_EmergencyEncodeurTurret1,                          //!< eCSR_EmergencyEncodeurTurret1
    eCSR_EmergencyEncodeurTurret2,                          //!< eCSR_EmergencyEncodeurTurret2
    eCSR_SRDO2_48XS,                                        //!< eCSR_SRDO2_48XS
    eCSR_SRDO3_48XS,                                        //!< eCSR_SRDO3_48XS
    eCSR_SRDO1_48XS,                                        //!< eCSR_SRDO1_48XS
    eCSR_FlashBatteryRpdo1_0,                               //!< eCSR_FlashBatteryRpdo1_0
    eCSR_FlashBatteryRpdo1_2,                               //!< eCSR_FlashBatteryRpdo1_2
    eCSR_Msg1RcvFromOpus,                                   //!< eCSR_Msg1RcvFromOpus
    eCSR_PDO1_48XS,                                         //!< eCSR_PDO1_48XS
    eCSR_DMC_RxPdo1_MS,                                     //!< eCSR_DMC_RxPdo1_MS
    eCSR_DeversFrame1,                                      //!< eCSR_DeversFrame1
    eCSR_DeversFrame2,                                      //!< eCSR_DeversFrame2
    eCSR_MastMeasure,                                       //!< eCSR_MastMeasure
    eCSR_ReadAnalogInput,                                   //!< eCSR_ReadAnalogInput
    eCSR_Msg1C0SendToOpus,                                  //!< eCSR_Msg1C0SendToOpus
    eCSR_Msg3C0SendToOpus,                                  //!< eCSR_Msg3C0SendToOpus
    eCSR_Msg5C0SendToOpus,                                  //!< eCSR_Msg5C0SendToOpus
    eCSR_Msg7C0SendToOpus,                                  //!< eCSR_Msg7C0SendToOpus
    eCSR_DMC_TxPdo1_DC,                                     //!< eCSR_DMC_TxPdo1_DC
    eCSR_FlashBatteryRpdo2_0,                               //!< eCSR_FlashBatteryRpdo2_0
    eCSR_PDO2_48XS,                                         //!< eCSR_PDO2_48XS
    eCSR_DMC_RxPdo2_DS,                                     //!< eCSR_DMC_RxPdo2_DS
    eCSR_EncodeurTurret1,                                   //!< eCSR_EncodeurTurret1
    eCSR_EncodeurTurret2,                                   //!< eCSR_EncodeurTurret2
    eCSR_ReadOnOfffInput,                                   //!< eCSR_ReadOnOfffInput
    eCSR_Msg2C0SendToOpus,                                  //!< eCSR_Msg2C0SendToOpus
    eCSR_Msg4C0SendToOpus,                                  //!< eCSR_Msg4C0SendToOpus
    eCSR_Msg6C0SendToOpus,                                  //!< eCSR_Msg6C0SendToOpus
    eCSR_Msg8C0SendToOpus,                                  //!< eCSR_Msg8C0SendToOpus
    eCSR_Msg9C0SendToOpus,                                  //!< eCSR_Msg9C0SendToOpus
    eCSR_Msg10C0SendToOpus,                                 //!< eCSR_Msg10C0SendToOpus
    eCSR_Msg11C0SendToOpus,                                 //!< eCSR_Msg11C0SendToOpus
    eCSR_DMC_TxPdo2_BCL,                                    //!< eCSR_DMC_TxPdo2_BCL
    eCSR_WriteLed,                                          //!< eCSR_WriteLed
    eCSR_FlashBatteryRpdo3_0,                               //!< eCSR_FlashBatteryRpdo3_0
    eCSR_FlashBatteryRpdo3_3,                               //!< eCSR_FlashBatteryRpdo3_3
    eCSR_PDO3_48XS,                                         //!< eCSR_PDO3_48XS
    eCSR_DMC_RxPdo3_CS,                                     //!< eCSR_DMC_RxPdo3_CS
    eCSR_PDO4_48XS,                                         //!< eCSR_PDO4_48XS
    eCSR_Sdo_Answer_Encodeur_Turret1,                       //!< eCSR_Sdo_Answer_Encodeur_Turret1
    eCSR_Sdo_Answer_Encodeur_Turret2,                       //!< eCSR_Sdo_Answer_Encodeur_Turret2
    eCSR_DMC_RxSdo,                                         //!< eCSR_DMC_RxSdo
    eCSR_Sdo_Request_Encodeur_Turret1,                      //!< eCSR_Sdo_Request_Encodeur_Turret1
    eCSR_Sdo_Request_Encodeur_Turret2,                      //!< eCSR_Sdo_Request_Encodeur_Turret2
    eCSR_DMC_TxSdo,                                         //!< eCSR_DMC_TxSdo
    eCSR_PDO5_48XS,                                         //!< eCSR_PDO5_48XS
    eCSR_PDO6_48XS,                                         //!< eCSR_PDO6_48XS
    eCSR_Hearbeat_48XS,                                     //!< eCSR_Hearbeat_48XS
    eCSR_DMC_Heartbeat_HB,                                  //!< eCSR_DMC_Heartbeat_HB
    eCSR_HeartBeatDeversFrame,                              //!< eCSR_HeartBeatDeversFrame
    eCSR_HeartBeatEncodeurTurret1,                          //!< eCSR_HeartBeatEncodeurTurret1
    eCSR_HeartBeatEncodeurTurret2,                          //!< eCSR_HeartBeatEncodeurTurret2
    eCSR_HeartBeat,                                         //!< eCSR_HeartBeat
    eCSR_Msg1C0SendToEvision7,                              //!< eCSR_Msg1C0SendToEvision7
    eCSR_Msg2C0SendToEvision7,                              //!< eCSR_Msg2C0SendToEvision7
    eCSR_Msg3C0SendToEvision7,                              //!< eCSR_Msg3C0SendToEvision7
    eCSR_Msg4C0SendToEvision7,                              //!< eCSR_Msg4C0SendToEvision7
    eCSR_Msg5C0SendToEvision7,                              //!< eCSR_Msg5C0SendToEvision7
    eCSR_Msg6C0SendToEvision7,                              //!< eCSR_Msg6C0SendToEvision7
    eCSR_Msg7C0SendToEvision7,                              //!< eCSR_Msg7C0SendToEvision7
    eCSR_Msg8C0SendToEvision7,                              //!< eCSR_Msg8C0SendToEvision7
    eCSR_Msg9C0SendToEvision7,                              //!< eCSR_Msg9C0SendToEvision7
    eCSR_Msg10C0SendToEvision7,                             //!< eCSR_Msg10C0SendToEvision7
    eCSR_Msg11C0SendToEvision7,                             //!< eCSR_Msg11C0SendToEvision7
    eCSR_Msg12C0SendToEvision7,                             //!< eCSR_Msg12C0SendToEvision7
    eCSR_Msg13C0SendToEvision7,                             //!< eCSR_Msg13C0SendToEvision7
    eCSR_Msg14C0SendToEvision7,                             //!< eCSR_Msg14C0SendToEvision7
    eCSR_Msg15C0SendToEvision7,                             //!< eCSR_Msg15C0SendToEvision7
    eCSR_MsgDebugC0SendToEvision7,                          //!< eCSR_MsgDebugC0SendToEvision7
    eCSR_Msg1RcvFromEvision7,                               //!< eCSR_Msg1RcvFromEvision7
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
    TUint8 u8Command;                                       //!< [[-]] Start command 
    TUint8 u8NodeId;                                        //!< [[-]] Node Id 
} TCanSigRecStart;

extern TCanSigRecStart gCsr_tStart;

typedef struct
{
    TUint8 u8Command;                                       //!< [[-]] Start command 
    TUint8 u8NodeId;                                        //!< [[-]] Node Id 
} TCanSigRecOldValStart;

typedef struct
{
    TCanSigRecInf     tCsrInfo_u8Command;
    TCanSigRecRng_u8  tCsrRng_u8Command;
    TCanSigRecInf     tCsrInfo_u8NodeId;
    TCanSigRecRng_u8  tCsrRng_u8NodeId;
} TCanSigRecVal_Start;

typedef struct
{
    const TCanSigRecRoot *cptRoot;                          //!< [POI] Root connection
    TUint8 u8Command;                                       //!< [[-]] new signal 
    TUint8 u8NodeId;                                        //!< [[-]] new signal 
} TCanSigRecStartSensor;

extern TCanSigRecStartSensor gCsr_tStartSensor;

typedef struct
{
    TUint8 u8Command;                                       //!< [[-]] new signal 
    TUint8 u8NodeId;                                        //!< [[-]] new signal 
} TCanSigRecOldValStartSensor;

typedef struct
{
    TCanSigRecInf     tCsrInfo_u8Command;
    TCanSigRecRng_u8  tCsrRng_u8Command;
    TCanSigRecInf     tCsrInfo_u8NodeId;
    TCanSigRecRng_u8  tCsrRng_u8NodeId;
} TCanSigRecVal_StartSensor;

typedef struct
{
    const TCanSigRecRoot *cptRoot;                          //!< [POI] Root connection
    TUint8 u8Command;                                       //!< [[-]] new signal 
    TUint8 u8TargetNode;                                    //!< [[-]] new signal 
} TCanSigRecNMT;

extern TCanSigRecNMT gCsr_tNMT;

typedef struct
{
    TUint8 u8Command;                                       //!< [[-]] new signal 
    TUint8 u8TargetNode;                                    //!< [[-]] new signal 
} TCanSigRecOldValNMT;

typedef struct
{
    TCanSigRecInf     tCsrInfo_u8Command;
    TCanSigRecRng_u8  tCsrRng_u8Command;
    TCanSigRecInf     tCsrInfo_u8TargetNode;
    TCanSigRecRng_u8  tCsrRng_u8TargetNode;
} TCanSigRecVal_NMT;

typedef struct
{
    const TCanSigRecRoot *cptRoot;                          //!< [POI] Root connection
    TUint8 u8Byte0;                                         //!< [[-]] new signal 
    TUint8 u8Byte1;                                         //!< [[-]] new signal 
    TUint8 u8Byte2;                                         //!< [[-]] new signal 
    TUint8 u8Byte3;                                         //!< [[-]] new signal 
    TUint8 u8Byte4;                                         //!< [[-]] new signal 
    TUint8 u8Byte5;                                         //!< [[-]] new signal 
    TUint8 u8Byte6;                                         //!< [[-]] new signal 
    TUint8 u8Byte7;                                         //!< [[-]] new signal 
} TCanSigRecHMG_1;

extern TCanSigRecHMG_1 gCsr_tHMG_1;

typedef struct
{
    TUint8 u8Byte0;                                         //!< [[-]] new signal 
    TUint8 u8Byte1;                                         //!< [[-]] new signal 
    TUint8 u8Byte2;                                         //!< [[-]] new signal 
    TUint8 u8Byte3;                                         //!< [[-]] new signal 
    TUint8 u8Byte4;                                         //!< [[-]] new signal 
    TUint8 u8Byte5;                                         //!< [[-]] new signal 
    TUint8 u8Byte6;                                         //!< [[-]] new signal 
    TUint8 u8Byte7;                                         //!< [[-]] new signal 
} TCanSigRecOldValHMG_1;

typedef struct
{
    TCanSigRecInf     tCsrInfo_u8Byte0;
    TCanSigRecRng_u8  tCsrRng_u8Byte0;
    TCanSigRecInf     tCsrInfo_u8Byte1;
    TCanSigRecRng_u8  tCsrRng_u8Byte1;
    TCanSigRecInf     tCsrInfo_u8Byte2;
    TCanSigRecRng_u8  tCsrRng_u8Byte2;
    TCanSigRecInf     tCsrInfo_u8Byte3;
    TCanSigRecRng_u8  tCsrRng_u8Byte3;
    TCanSigRecInf     tCsrInfo_u8Byte4;
    TCanSigRecRng_u8  tCsrRng_u8Byte4;
    TCanSigRecInf     tCsrInfo_u8Byte5;
    TCanSigRecRng_u8  tCsrRng_u8Byte5;
    TCanSigRecInf     tCsrInfo_u8Byte6;
    TCanSigRecRng_u8  tCsrRng_u8Byte6;
    TCanSigRecInf     tCsrInfo_u8Byte7;
    TCanSigRecRng_u8  tCsrRng_u8Byte7;
} TCanSigRecVal_HMG_1;

typedef struct
{
    const TCanSigRecRoot *cptRoot;                          //!< [POI] Root connection
    TUint8 u8Byte0;                                         //!< [[-]] new signal 
    TUint8 u8Byte1;                                         //!< [[-]] new signal 
    TUint8 u8Byte2;                                         //!< [[-]] new signal 
    TUint8 u8Byte3;                                         //!< [[-]] new signal 
    TUint8 u8Byte4;                                         //!< [[-]] new signal 
    TUint8 u8Byte5;                                         //!< [[-]] new signal 
    TUint8 u8Byte6;                                         //!< [[-]] new signal 
    TUint8 u8Byte7;                                         //!< [[-]] new signal 
} TCanSigRecHMG_2;

extern TCanSigRecHMG_2 gCsr_tHMG_2;

typedef struct
{
    TUint8 u8Byte0;                                         //!< [[-]] new signal 
    TUint8 u8Byte1;                                         //!< [[-]] new signal 
    TUint8 u8Byte2;                                         //!< [[-]] new signal 
    TUint8 u8Byte3;                                         //!< [[-]] new signal 
    TUint8 u8Byte4;                                         //!< [[-]] new signal 
    TUint8 u8Byte5;                                         //!< [[-]] new signal 
    TUint8 u8Byte6;                                         //!< [[-]] new signal 
    TUint8 u8Byte7;                                         //!< [[-]] new signal 
} TCanSigRecOldValHMG_2;

typedef struct
{
    TCanSigRecInf     tCsrInfo_u8Byte0;
    TCanSigRecRng_u8  tCsrRng_u8Byte0;
    TCanSigRecInf     tCsrInfo_u8Byte1;
    TCanSigRecRng_u8  tCsrRng_u8Byte1;
    TCanSigRecInf     tCsrInfo_u8Byte2;
    TCanSigRecRng_u8  tCsrRng_u8Byte2;
    TCanSigRecInf     tCsrInfo_u8Byte3;
    TCanSigRecRng_u8  tCsrRng_u8Byte3;
    TCanSigRecInf     tCsrInfo_u8Byte4;
    TCanSigRecRng_u8  tCsrRng_u8Byte4;
    TCanSigRecInf     tCsrInfo_u8Byte5;
    TCanSigRecRng_u8  tCsrRng_u8Byte5;
    TCanSigRecInf     tCsrInfo_u8Byte6;
    TCanSigRecRng_u8  tCsrRng_u8Byte6;
    TCanSigRecInf     tCsrInfo_u8Byte7;
    TCanSigRecRng_u8  tCsrRng_u8Byte7;
} TCanSigRecVal_HMG_2;

typedef struct
{
    const TCanSigRecRoot *cptRoot;                          //!< [POI] Root connection
    TUint8 u8Byte0;                                         //!< [[-]] new signal 
    TUint8 u8Byte1;                                         //!< [[-]] new signal 
    TUint8 u8Byte2;                                         //!< [[-]] new signal 
    TUint8 u8Byte3;                                         //!< [[-]] new signal 
    TUint8 u8Byte4;                                         //!< [[-]] new signal 
    TUint8 u8Byte5;                                         //!< [[-]] new signal 
    TUint8 u8Byte6;                                         //!< [[-]] new signal 
    TUint8 u8Byte7;                                         //!< [[-]] new signal 
} TCanSigRecHMG_3;

extern TCanSigRecHMG_3 gCsr_tHMG_3;

typedef struct
{
    TUint8 u8Byte0;                                         //!< [[-]] new signal 
    TUint8 u8Byte1;                                         //!< [[-]] new signal 
    TUint8 u8Byte2;                                         //!< [[-]] new signal 
    TUint8 u8Byte3;                                         //!< [[-]] new signal 
    TUint8 u8Byte4;                                         //!< [[-]] new signal 
    TUint8 u8Byte5;                                         //!< [[-]] new signal 
    TUint8 u8Byte6;                                         //!< [[-]] new signal 
    TUint8 u8Byte7;                                         //!< [[-]] new signal 
} TCanSigRecOldValHMG_3;

typedef struct
{
    TCanSigRecInf     tCsrInfo_u8Byte0;
    TCanSigRecRng_u8  tCsrRng_u8Byte0;
    TCanSigRecInf     tCsrInfo_u8Byte1;
    TCanSigRecRng_u8  tCsrRng_u8Byte1;
    TCanSigRecInf     tCsrInfo_u8Byte2;
    TCanSigRecRng_u8  tCsrRng_u8Byte2;
    TCanSigRecInf     tCsrInfo_u8Byte3;
    TCanSigRecRng_u8  tCsrRng_u8Byte3;
    TCanSigRecInf     tCsrInfo_u8Byte4;
    TCanSigRecRng_u8  tCsrRng_u8Byte4;
    TCanSigRecInf     tCsrInfo_u8Byte5;
    TCanSigRecRng_u8  tCsrRng_u8Byte5;
    TCanSigRecInf     tCsrInfo_u8Byte6;
    TCanSigRecRng_u8  tCsrRng_u8Byte6;
    TCanSigRecInf     tCsrInfo_u8Byte7;
    TCanSigRecRng_u8  tCsrRng_u8Byte7;
} TCanSigRecVal_HMG_3;

typedef struct
{
    const TCanSigRecRoot *cptRoot;                          //!< [POI] Root connection
    TBoolean boServiceBrake;                                //!< [[-]] Frein de service  
    TBoolean boParkBrake;                                   //!< [[-]] Frein de park 
    TBoolean boHorm;                                        //!< [[-]] Commande du klaxon 
    TBoolean boBeacon;                                      //!< [[-]] Commande du gyrophare 
    TBoolean boFowardMvt;                                   //!< [[-]] Direction de la machine sur rail(avant) 
    TBoolean boReverseMvt;                                  //!< [[-]] Direction de la machine sur rail(arrière) 
    TBoolean boVigilanceSystem;                             //!< [[-]] Activation de la gachette 
    TBoolean boEmergencyMode;                               //!< [[-]] Mode secour actif 
    TUint16 u16Distance_Km;                                 //!< [[-]] Distance totale 
    TUint16 u16Speed10th_Kmh;                               //!< [[-]] Vitesse actuelle 
    TBoolean boFrontAxleDown;                               //!< [[-]] Essieux en bas 
    TBoolean boRearAxleDown;                                //!< [[-]] Essieux en haut 
    TBoolean boOverload;                                    //!< [[-]] Capteur de surcharge 1 actif 
    TBoolean boHeadLight;                                   //!< [[-]] Projecteur En15746 actif 
    TBoolean boMotorOn;                                     //!< [[-]] Moteur allumé 
    TBoolean boTestParkBrakeOK;                             //!< [[-]] Test frein validé pour frein de park 
    TBoolean boTestServiceBrakeOK;                          //!< [[-]] Test frein validé pour frein de service 
    TBoolean boOverSpeedRailLowMode;                        //!< [[-]] Survitesse en petite vitesse 
    TBoolean boOverSpeedRailHighMode;                       //!< [[-]] Survitesse en grande vitesse 
    TBoolean boAskBrakeTest;                                //!< [[-]] Test frein demandé 
    TBoolean boTempOilRail;                                 //!< [[-]] Alarme température huile rail active 
    TBoolean boTempOilRoad;                                 //!< [[-]] Alarme température huile rail active 
    TBoolean boSafetyManSystem;                             //!< [[-]] Sécurité safe man system 
    TBoolean boFaultLenghtSensor;                           //!< [[-]] Alarme du capteur téléscope 
    TBoolean boFaultCantSensor;                             //!< [[-]] Alarme du capteur de dévers 
    TBoolean boFaultDeadManPedal;                           //!< [[-]] Pédale de l'homme mort 
    TBoolean boFaultSafetySolenoid;                         //!< [[-]] Alarme du bypass(Ev de sécurité) 
    TBoolean boBasketPostValid;                             //!< [[-]] Poste nacelle actif 
    TBoolean boTurretPostValid;                             //!< [[-]] Poste tourelle actif 
    TBoolean boSetupCodeOk;                                 //!< [[-]] Code dévérouiller 
    TBoolean boTurretSensorsFailures;                       //!< [[-]] Alarme sur le capteur tourelle 
    TBoolean boOneSpeedSensorFault;                         //!< [[-]] Alarme sur un seul capteur de vitesse 
    TBoolean boTwoSpeedSensorFault;                         //!< [[-]] Alarme sur deux capteur de vitesse 
    TBoolean boUnused;                                      //!< [[-]] Message de réserve 
} TCanSigRecDatalogger;

extern TCanSigRecDatalogger gCsr_tDatalogger;

typedef struct
{
    TBoolean boServiceBrake;                                //!< [[-]] Frein de service  
    TBoolean boParkBrake;                                   //!< [[-]] Frein de park 
    TBoolean boHorm;                                        //!< [[-]] Commande du klaxon 
    TBoolean boBeacon;                                      //!< [[-]] Commande du gyrophare 
    TBoolean boFowardMvt;                                   //!< [[-]] Direction de la machine sur rail(avant) 
    TBoolean boReverseMvt;                                  //!< [[-]] Direction de la machine sur rail(arrière) 
    TBoolean boVigilanceSystem;                             //!< [[-]] Activation de la gachette 
    TBoolean boEmergencyMode;                               //!< [[-]] Mode secour actif 
    TUint16 u16Distance_Km;                                 //!< [[-]] Distance totale 
    TUint16 u16Speed10th_Kmh;                               //!< [[-]] Vitesse actuelle 
    TBoolean boFrontAxleDown;                               //!< [[-]] Essieux en bas 
    TBoolean boRearAxleDown;                                //!< [[-]] Essieux en haut 
    TBoolean boOverload;                                    //!< [[-]] Capteur de surcharge 1 actif 
    TBoolean boHeadLight;                                   //!< [[-]] Projecteur En15746 actif 
    TBoolean boMotorOn;                                     //!< [[-]] Moteur allumé 
    TBoolean boTestParkBrakeOK;                             //!< [[-]] Test frein validé pour frein de park 
    TBoolean boTestServiceBrakeOK;                          //!< [[-]] Test frein validé pour frein de service 
    TBoolean boOverSpeedRailLowMode;                        //!< [[-]] Survitesse en petite vitesse 
    TBoolean boOverSpeedRailHighMode;                       //!< [[-]] Survitesse en grande vitesse 
    TBoolean boAskBrakeTest;                                //!< [[-]] Test frein demandé 
    TBoolean boTempOilRail;                                 //!< [[-]] Alarme température huile rail active 
    TBoolean boTempOilRoad;                                 //!< [[-]] Alarme température huile rail active 
    TBoolean boSafetyManSystem;                             //!< [[-]] Sécurité safe man system 
    TBoolean boFaultLenghtSensor;                           //!< [[-]] Alarme du capteur téléscope 
    TBoolean boFaultCantSensor;                             //!< [[-]] Alarme du capteur de dévers 
    TBoolean boFaultDeadManPedal;                           //!< [[-]] Pédale de l'homme mort 
    TBoolean boFaultSafetySolenoid;                         //!< [[-]] Alarme du bypass(Ev de sécurité) 
    TBoolean boBasketPostValid;                             //!< [[-]] Poste nacelle actif 
    TBoolean boTurretPostValid;                             //!< [[-]] Poste tourelle actif 
    TBoolean boSetupCodeOk;                                 //!< [[-]] Code dévérouiller 
    TBoolean boTurretSensorsFailures;                       //!< [[-]] Alarme sur le capteur tourelle 
    TBoolean boOneSpeedSensorFault;                         //!< [[-]] Alarme sur un seul capteur de vitesse 
    TBoolean boTwoSpeedSensorFault;                         //!< [[-]] Alarme sur deux capteur de vitesse 
    TBoolean boUnused;                                      //!< [[-]] Message de réserve 
} TCanSigRecOldValDatalogger;

typedef struct
{
    TCanSigRecInf     tCsrInfo_boServiceBrake;
    TCanSigRecRng_bo  tCsrRng_boServiceBrake;
    TCanSigRecInf     tCsrInfo_boParkBrake;
    TCanSigRecRng_bo  tCsrRng_boParkBrake;
    TCanSigRecInf     tCsrInfo_boHorm;
    TCanSigRecRng_bo  tCsrRng_boHorm;
    TCanSigRecInf     tCsrInfo_boBeacon;
    TCanSigRecRng_bo  tCsrRng_boBeacon;
    TCanSigRecInf     tCsrInfo_boFowardMvt;
    TCanSigRecRng_bo  tCsrRng_boFowardMvt;
    TCanSigRecInf     tCsrInfo_boReverseMvt;
    TCanSigRecRng_bo  tCsrRng_boReverseMvt;
    TCanSigRecInf     tCsrInfo_boVigilanceSystem;
    TCanSigRecRng_bo  tCsrRng_boVigilanceSystem;
    TCanSigRecInf     tCsrInfo_boEmergencyMode;
    TCanSigRecRng_bo  tCsrRng_boEmergencyMode;
    TCanSigRecInf     tCsrInfo_u16Distance_Km;
    TCanSigRecRng_u16 tCsrRng_u16Distance_Km;
    TCanSigRecInf     tCsrInfo_u16Speed10th_Kmh;
    TCanSigRecRng_u16 tCsrRng_u16Speed10th_Kmh;
    TCanSigRecInf     tCsrInfo_boFrontAxleDown;
    TCanSigRecRng_bo  tCsrRng_boFrontAxleDown;
    TCanSigRecInf     tCsrInfo_boRearAxleDown;
    TCanSigRecRng_bo  tCsrRng_boRearAxleDown;
    TCanSigRecInf     tCsrInfo_boOverload;
    TCanSigRecRng_bo  tCsrRng_boOverload;
    TCanSigRecInf     tCsrInfo_boHeadLight;
    TCanSigRecRng_bo  tCsrRng_boHeadLight;
    TCanSigRecInf     tCsrInfo_boMotorOn;
    TCanSigRecRng_bo  tCsrRng_boMotorOn;
    TCanSigRecInf     tCsrInfo_boTestParkBrakeOK;
    TCanSigRecRng_bo  tCsrRng_boTestParkBrakeOK;
    TCanSigRecInf     tCsrInfo_boTestServiceBrakeOK;
    TCanSigRecRng_bo  tCsrRng_boTestServiceBrakeOK;
    TCanSigRecInf     tCsrInfo_boOverSpeedRailLowMode;
    TCanSigRecRng_bo  tCsrRng_boOverSpeedRailLowMode;
    TCanSigRecInf     tCsrInfo_boOverSpeedRailHighMode;
    TCanSigRecRng_bo  tCsrRng_boOverSpeedRailHighMode;
    TCanSigRecInf     tCsrInfo_boAskBrakeTest;
    TCanSigRecRng_bo  tCsrRng_boAskBrakeTest;
    TCanSigRecInf     tCsrInfo_boTempOilRail;
    TCanSigRecRng_bo  tCsrRng_boTempOilRail;
    TCanSigRecInf     tCsrInfo_boTempOilRoad;
    TCanSigRecRng_bo  tCsrRng_boTempOilRoad;
    TCanSigRecInf     tCsrInfo_boSafetyManSystem;
    TCanSigRecRng_bo  tCsrRng_boSafetyManSystem;
    TCanSigRecInf     tCsrInfo_boFaultLenghtSensor;
    TCanSigRecRng_bo  tCsrRng_boFaultLenghtSensor;
    TCanSigRecInf     tCsrInfo_boFaultCantSensor;
    TCanSigRecRng_bo  tCsrRng_boFaultCantSensor;
    TCanSigRecInf     tCsrInfo_boFaultDeadManPedal;
    TCanSigRecRng_bo  tCsrRng_boFaultDeadManPedal;
    TCanSigRecInf     tCsrInfo_boFaultSafetySolenoid;
    TCanSigRecRng_bo  tCsrRng_boFaultSafetySolenoid;
    TCanSigRecInf     tCsrInfo_boBasketPostValid;
    TCanSigRecRng_bo  tCsrRng_boBasketPostValid;
    TCanSigRecInf     tCsrInfo_boTurretPostValid;
    TCanSigRecRng_bo  tCsrRng_boTurretPostValid;
    TCanSigRecInf     tCsrInfo_boSetupCodeOk;
    TCanSigRecRng_bo  tCsrRng_boSetupCodeOk;
    TCanSigRecInf     tCsrInfo_boTurretSensorsFailures;
    TCanSigRecRng_bo  tCsrRng_boTurretSensorsFailures;
    TCanSigRecInf     tCsrInfo_boOneSpeedSensorFault;
    TCanSigRecRng_bo  tCsrRng_boOneSpeedSensorFault;
    TCanSigRecInf     tCsrInfo_boTwoSpeedSensorFault;
    TCanSigRecRng_bo  tCsrRng_boTwoSpeedSensorFault;
    TCanSigRecInf     tCsrInfo_boUnused;
    TCanSigRecRng_bo  tCsrRng_boUnused;
} TCanSigRecVal_Datalogger;

typedef struct
{
    const TCanSigRecRoot *cptRoot;                          //!< [POI] Root connection
    TBoolean boSignal;                                      //!< [[-]] new signal 
} TCanSigRecSyncFrame;

extern TCanSigRecSyncFrame gCsr_tSyncFrame;

typedef struct
{
    TUint8 u8Signal;                                        //!< [[-]] new signal 
} TCanSigRecOldValSyncFrame;

typedef struct
{
    TCanSigRecInf     tCsrInfo_boSignal;
    TCanSigRecRng_u8  tCsrRng_boSignal;
} TCanSigRecVal_SyncFrame;

typedef struct
{
    const TCanSigRecRoot *cptRoot;                          //!< [POI] Root connection
    TUint16 u16ErrorCode;                                   //!< [[-]] new signal 
    TUint16 u16ErrorRegister;                               //!< [[-]] new signal 
} TCanSigRecEmergencyMastMeasure;

extern TCanSigRecEmergencyMastMeasure gCsr_tEmergencyMastMeasure;

typedef struct
{
    TUint16 u16ErrorCode;                                   //!< [[-]] new signal 
    TUint16 u16ErrorRegister;                               //!< [[-]] new signal 
} TCanSigRecOldValEmergencyMastMeasure;

typedef struct
{
    TCanSigRecInf     tCsrInfo_u16ErrorCode;
    TCanSigRecRng_u16 tCsrRng_u16ErrorCode;
    TCanSigRecInf     tCsrInfo_u16ErrorRegister;
    TCanSigRecRng_u16 tCsrRng_u16ErrorRegister;
} TCanSigRecVal_EmergencyMastMeasure;

typedef struct
{
    const TCanSigRecRoot *cptRoot;                          //!< [POI] Root connection
    TUint16 u16ErrorCode;                                   //!< [[-]] new signal 
    TUint16 u16ErrorRegister;                               //!< [[-]] new signal 
} TCanSigRecEmergencyEncodeurTurret1;

extern TCanSigRecEmergencyEncodeurTurret1 gCsr_tEmergencyEncodeurTurret1;

typedef struct
{
    TUint16 u16ErrorCode;                                   //!< [[-]] new signal 
    TUint16 u16ErrorRegister;                               //!< [[-]] new signal 
} TCanSigRecOldValEmergencyEncodeurTurret1;

typedef struct
{
    TCanSigRecInf     tCsrInfo_u16ErrorCode;
    TCanSigRecRng_u16 tCsrRng_u16ErrorCode;
    TCanSigRecInf     tCsrInfo_u16ErrorRegister;
    TCanSigRecRng_u16 tCsrRng_u16ErrorRegister;
} TCanSigRecVal_EmergencyEncodeurTurret1;

typedef struct
{
    const TCanSigRecRoot *cptRoot;                          //!< [POI] Root connection
    TUint16 u16ErrorCode;                                   //!< [[-]] new signal 
    TUint16 u16ErrorRegister;                               //!< [[-]] new signal 
} TCanSigRecEmergencyEncodeurTurret2;

extern TCanSigRecEmergencyEncodeurTurret2 gCsr_tEmergencyEncodeurTurret2;

typedef struct
{
    TUint16 u16ErrorCode;                                   //!< [[-]] new signal 
    TUint16 u16ErrorRegister;                               //!< [[-]] new signal 
} TCanSigRecOldValEmergencyEncodeurTurret2;

typedef struct
{
    TCanSigRecInf     tCsrInfo_u16ErrorCode;
    TCanSigRecRng_u16 tCsrRng_u16ErrorCode;
    TCanSigRecInf     tCsrInfo_u16ErrorRegister;
    TCanSigRecRng_u16 tCsrRng_u16ErrorRegister;
} TCanSigRecVal_EmergencyEncodeurTurret2;

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
    TUint8 u8Byte0;                                         //!< [[-]] new signal 
    TUint8 u8Byte1;                                         //!< [[-]] new signal 
    TUint8 u8Byte2;                                         //!< [[-]] new signal 
    TUint8 u8Byte3;                                         //!< [[-]] new signal 
    TUint8 u8Byte4;                                         //!< [[-]] new signal 
    TUint8 u8Byte5;                                         //!< [[-]] new signal 
    TUint8 u8Byte6;                                         //!< [[-]] new signal 
    TUint8 u8Byte7;                                         //!< [[-]] new signal 
} TCanSigRecFlashBatteryRpdo1_0;

extern TCanSigRecFlashBatteryRpdo1_0 gCsr_tFlashBatteryRpdo1_0;

typedef struct
{
    TUint8 u8Byte0;                                         //!< [[-]] new signal 
    TUint8 u8Byte1;                                         //!< [[-]] new signal 
    TUint8 u8Byte2;                                         //!< [[-]] new signal 
    TUint8 u8Byte3;                                         //!< [[-]] new signal 
    TUint8 u8Byte4;                                         //!< [[-]] new signal 
    TUint8 u8Byte5;                                         //!< [[-]] new signal 
    TUint8 u8Byte6;                                         //!< [[-]] new signal 
    TUint8 u8Byte7;                                         //!< [[-]] new signal 
} TCanSigRecOldValFlashBatteryRpdo1_0;

typedef struct
{
    TCanSigRecInf     tCsrInfo_u8Byte0;
    TCanSigRecRng_u8  tCsrRng_u8Byte0;
    TCanSigRecInf     tCsrInfo_u8Byte1;
    TCanSigRecRng_u8  tCsrRng_u8Byte1;
    TCanSigRecInf     tCsrInfo_u8Byte2;
    TCanSigRecRng_u8  tCsrRng_u8Byte2;
    TCanSigRecInf     tCsrInfo_u8Byte3;
    TCanSigRecRng_u8  tCsrRng_u8Byte3;
    TCanSigRecInf     tCsrInfo_u8Byte4;
    TCanSigRecRng_u8  tCsrRng_u8Byte4;
    TCanSigRecInf     tCsrInfo_u8Byte5;
    TCanSigRecRng_u8  tCsrRng_u8Byte5;
    TCanSigRecInf     tCsrInfo_u8Byte6;
    TCanSigRecRng_u8  tCsrRng_u8Byte6;
    TCanSigRecInf     tCsrInfo_u8Byte7;
    TCanSigRecRng_u8  tCsrRng_u8Byte7;
} TCanSigRecVal_FlashBatteryRpdo1_0;

typedef struct
{
    const TCanSigRecRoot *cptRoot;                          //!< [POI] Root connection
    TUint8 u8Byte0;                                         //!< [[-]] new signal 
    TUint8 u8Byte1;                                         //!< [[-]] new signal 
    TUint8 u8Byte2;                                         //!< [[-]] new signal 
    TUint8 u8Byte3;                                         //!< [[-]] new signal 
    TUint8 u8Byte4;                                         //!< [[-]] new signal 
    TUint8 u8Byte5;                                         //!< [[-]] new signal 
    TUint8 u8Byte6;                                         //!< [[-]] new signal 
    TUint8 u8Byte7;                                         //!< [[-]] new signal 
} TCanSigRecFlashBatteryRpdo1_2;

extern TCanSigRecFlashBatteryRpdo1_2 gCsr_tFlashBatteryRpdo1_2;

typedef struct
{
    TUint8 u8Byte0;                                         //!< [[-]] new signal 
    TUint8 u8Byte1;                                         //!< [[-]] new signal 
    TUint8 u8Byte2;                                         //!< [[-]] new signal 
    TUint8 u8Byte3;                                         //!< [[-]] new signal 
    TUint8 u8Byte4;                                         //!< [[-]] new signal 
    TUint8 u8Byte5;                                         //!< [[-]] new signal 
    TUint8 u8Byte6;                                         //!< [[-]] new signal 
    TUint8 u8Byte7;                                         //!< [[-]] new signal 
} TCanSigRecOldValFlashBatteryRpdo1_2;

typedef struct
{
    TCanSigRecInf     tCsrInfo_u8Byte0;
    TCanSigRecRng_u8  tCsrRng_u8Byte0;
    TCanSigRecInf     tCsrInfo_u8Byte1;
    TCanSigRecRng_u8  tCsrRng_u8Byte1;
    TCanSigRecInf     tCsrInfo_u8Byte2;
    TCanSigRecRng_u8  tCsrRng_u8Byte2;
    TCanSigRecInf     tCsrInfo_u8Byte3;
    TCanSigRecRng_u8  tCsrRng_u8Byte3;
    TCanSigRecInf     tCsrInfo_u8Byte4;
    TCanSigRecRng_u8  tCsrRng_u8Byte4;
    TCanSigRecInf     tCsrInfo_u8Byte5;
    TCanSigRecRng_u8  tCsrRng_u8Byte5;
    TCanSigRecInf     tCsrInfo_u8Byte6;
    TCanSigRecRng_u8  tCsrRng_u8Byte6;
    TCanSigRecInf     tCsrInfo_u8Byte7;
    TCanSigRecRng_u8  tCsrRng_u8Byte7;
} TCanSigRecVal_FlashBatteryRpdo1_2;

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
    TUint8 u8Byte0;                                         //!< [[-]] new signal 
    TUint8 u8Byte1;                                         //!< [[-]] new signal 
    TUint8 u8Byte2;                                         //!< [[-]] new signal 
    TUint8 u8Byte3;                                         //!< [[-]] new signal 
    TUint8 u8Byte4;                                         //!< [[-]] new signal 
    TUint8 u8Byte5;                                         //!< [[-]] new signal 
    TUint8 u8Byte6;                                         //!< [[-]] new signal 
    TUint8 u8Byte7;                                         //!< [[-]] new signal 
} TCanSigRecDMC_RxPdo1_MS;

extern TCanSigRecDMC_RxPdo1_MS gCsr_tDMC_RxPdo1_MS;

typedef struct
{
    TUint8 u8Byte0;                                         //!< [[-]] new signal 
    TUint8 u8Byte1;                                         //!< [[-]] new signal 
    TUint8 u8Byte2;                                         //!< [[-]] new signal 
    TUint8 u8Byte3;                                         //!< [[-]] new signal 
    TUint8 u8Byte4;                                         //!< [[-]] new signal 
    TUint8 u8Byte5;                                         //!< [[-]] new signal 
    TUint8 u8Byte6;                                         //!< [[-]] new signal 
    TUint8 u8Byte7;                                         //!< [[-]] new signal 
} TCanSigRecOldValDMC_RxPdo1_MS;

typedef struct
{
    TCanSigRecInf     tCsrInfo_u8Byte0;
    TCanSigRecRng_u8  tCsrRng_u8Byte0;
    TCanSigRecInf     tCsrInfo_u8Byte1;
    TCanSigRecRng_u8  tCsrRng_u8Byte1;
    TCanSigRecInf     tCsrInfo_u8Byte2;
    TCanSigRecRng_u8  tCsrRng_u8Byte2;
    TCanSigRecInf     tCsrInfo_u8Byte3;
    TCanSigRecRng_u8  tCsrRng_u8Byte3;
    TCanSigRecInf     tCsrInfo_u8Byte4;
    TCanSigRecRng_u8  tCsrRng_u8Byte4;
    TCanSigRecInf     tCsrInfo_u8Byte5;
    TCanSigRecRng_u8  tCsrRng_u8Byte5;
    TCanSigRecInf     tCsrInfo_u8Byte6;
    TCanSigRecRng_u8  tCsrRng_u8Byte6;
    TCanSigRecInf     tCsrInfo_u8Byte7;
    TCanSigRecRng_u8  tCsrRng_u8Byte7;
} TCanSigRecVal_DMC_RxPdo1_MS;

typedef struct
{
    const TCanSigRecRoot *cptRoot;                          //!< [POI] Root connection
    TInt16 i16Y_Axis_Angle;                                 //!< [[-]] X axis angle 1/10 degree 
    TInt16 i16X_Axis_Angle;                                 //!< [[-]] Y axis angle 1/10 degree 
    TUint16 u16Temperature;                                 //!< [[-]] Temperautre 
    TUint8 u8Alarm;                                         //!< [[-]] Alarm number 
    TUint8 u8SWVersion;                                     //!< [[-]] SW version  
} TCanSigRecDeversFrame1;

extern TCanSigRecDeversFrame1 gCsr_tDeversFrame1;

typedef struct
{
    TInt16 i16Y_Axis_Angle;                                 //!< [[-]] X axis angle 1/10 degree 
    TInt16 i16X_Axis_Angle;                                 //!< [[-]] Y axis angle 1/10 degree 
    TUint16 u16Temperature;                                 //!< [[-]] Temperautre 
    TUint8 u8Alarm;                                         //!< [[-]] Alarm number 
    TUint8 u8SWVersion;                                     //!< [[-]] SW version  
} TCanSigRecOldValDeversFrame1;

typedef struct
{
    TCanSigRecInf     tCsrInfo_i16Y_Axis_Angle;
    TCanSigRecRng_i16 tCsrRng_i16Y_Axis_Angle;
    TCanSigRecInf     tCsrInfo_i16X_Axis_Angle;
    TCanSigRecRng_i16 tCsrRng_i16X_Axis_Angle;
    TCanSigRecInf     tCsrInfo_u16Temperature;
    TCanSigRecRng_u16 tCsrRng_u16Temperature;
    TCanSigRecInf     tCsrInfo_u8Alarm;
    TCanSigRecRng_u8  tCsrRng_u8Alarm;
    TCanSigRecInf     tCsrInfo_u8SWVersion;
    TCanSigRecRng_u8  tCsrRng_u8SWVersion;
} TCanSigRecVal_DeversFrame1;

typedef struct
{
    const TCanSigRecRoot *cptRoot;                          //!< [POI] Root connection
    TInt16 i16Y_Axis_Angle;                                 //!< [[-]] new signal 
    TInt16 i16X_Axis_Angle;                                 //!< [[-]] new signal 
    TUint16 u16Temperature;                                 //!< [[-]] new signal 
    TUint8 u8Alarm;                                         //!< [[-]] new signal 
    TUint8 u8SWVersion;                                     //!< [[-]] new signal 
} TCanSigRecDeversFrame2;

extern TCanSigRecDeversFrame2 gCsr_tDeversFrame2;

typedef struct
{
    TInt16 i16Y_Axis_Angle;                                 //!< [[-]] new signal 
    TInt16 i16X_Axis_Angle;                                 //!< [[-]] new signal 
    TUint16 u16Temperature;                                 //!< [[-]] new signal 
    TUint8 u8Alarm;                                         //!< [[-]] new signal 
    TUint8 u8SWVersion;                                     //!< [[-]] new signal 
} TCanSigRecOldValDeversFrame2;

typedef struct
{
    TCanSigRecInf     tCsrInfo_i16Y_Axis_Angle;
    TCanSigRecRng_i16 tCsrRng_i16Y_Axis_Angle;
    TCanSigRecInf     tCsrInfo_i16X_Axis_Angle;
    TCanSigRecRng_i16 tCsrRng_i16X_Axis_Angle;
    TCanSigRecInf     tCsrInfo_u16Temperature;
    TCanSigRecRng_u16 tCsrRng_u16Temperature;
    TCanSigRecInf     tCsrInfo_u8Alarm;
    TCanSigRecRng_u8  tCsrRng_u8Alarm;
    TCanSigRecInf     tCsrInfo_u8SWVersion;
    TCanSigRecRng_u8  tCsrRng_u8SWVersion;
} TCanSigRecVal_DeversFrame2;

typedef struct
{
    const TCanSigRecRoot *cptRoot;                          //!< [POI] Root connection
    TUint32 u32EncodeurMastMeasure;                         //!< [[-]] new signal 
} TCanSigRecMastMeasure;

extern TCanSigRecMastMeasure gCsr_tMastMeasure;

typedef struct
{
    TUint32 u32EncodeurMastMeasure;                         //!< [[-]] new signal 
} TCanSigRecOldValMastMeasure;

typedef struct
{
    TCanSigRecInf     tCsrInfo_u32EncodeurMastMeasure;
    TCanSigRecRng_u32 tCsrRng_u32EncodeurMastMeasure;
} TCanSigRecVal_MastMeasure;

typedef struct
{
    const TCanSigRecRoot *cptRoot;                          //!< [POI] Root connection
    TUint8 u8LeftManipulator;                               //!< [[-]] Left manipulator 
    TUint8 u8RightManipulator;                              //!< [[-]] Right manipulator 
} TCanSigRecReadAnalogInput;

extern TCanSigRecReadAnalogInput gCsr_tReadAnalogInput;

typedef struct
{
    TUint8 u8LeftManipulator;                               //!< [[-]] Left manipulator 
    TUint8 u8RightManipulator;                              //!< [[-]] Right manipulator 
} TCanSigRecOldValReadAnalogInput;

typedef struct
{
    TCanSigRecInf     tCsrInfo_u8LeftManipulator;
    TCanSigRecRng_u8  tCsrRng_u8LeftManipulator;
    TCanSigRecInf     tCsrInfo_u8RightManipulator;
    TCanSigRecRng_u8  tCsrRng_u8RightManipulator;
} TCanSigRecVal_ReadAnalogInput;

typedef struct
{
    const TCanSigRecRoot *cptRoot;                          //!< [POI] Root connection
    TBoolean boBreakParkingOnOff;                           //!< [[-]] Break parking status 
    TBoolean boBreakFaillureOnOff;                          //!< [[-]] Break faillure status 
    TBoolean boTurretSectorInCenter;                        //!< [[-]] Turret sector in center 
    TBoolean boTurretInCenter;                              //!< [[-]] Turret in center 
    TBoolean boAlarmAru;                                    //!< [[-]] Status of the ARU alarm 
    TBoolean boSafetyElectricPump;                          //!< [[-]] Safety Electric Pump Activate (A44) 
    TBoolean boBackRailwayAxleLowPosition;                  //!< [[-]] Back Railway Axle in Low Position (A7) 
    TBoolean boFrontRailwayAxleLowPosition;                 //!< [[-]] Front Railway Axle in Low Position (A7) 
    TBoolean boIncoherenceLateralStopAndKey;                //!< [[-]] Incoherence between Lateral Stop and Key selector (A47) 
    TBoolean boBrakePressureFault;                          //!< [[-]] Brake Pressure Fault (A14) 
    TBoolean boTemperatureTransmissionAlarm;                //!< [[-]] Oil temperature alarm 
    TBoolean boUpAxleArFixeRadio;                           //!< [[-]] Up Axle Ar Fixe radio command 
    TBoolean boDownAxleArFixeRadio;                         //!< [[-]] Down Axle Ar Fixe radio command 
    TBoolean boUpAxleAvOscillantRadio;                      //!< [[-]] Up Axle Av Oscillant radio command 
    TBoolean boDownAxleAvOscillantRadio;                    //!< [[-]] Down Axle Ar Oscillant radio command 
    TBoolean boRotationFrameCtClkwiseRadio;                 //!< [[-]] Rotation Frame Coutner clockwise 
    TBoolean boRotationFrameClkwiseRadio;                   //!< [[-]] Rotation Frame clockwise 
    TBoolean boSelectorRotTurretRadio;                      //!< [[-]] Selector Rotation Turret radio command 
    TBoolean boSelectorPendularRadio;                       //!< [[-]] Selector Pendular radio command 
    TBoolean boUpPendulOrRotCtClkTurretRadio;               //!< [[-]] Up pendular or rotation clockwise turret 
    TBoolean boDownPendulOrRotClkTurretRadio;               //!< [[-]] Down pendular or rotation coutner clockwise turret 
    TBoolean boStartRadioCommand;                           //!< [[-]] Start Radio command 
    TBoolean boKlaxonCommand;                               //!< [[-]] Klaxon radio command 
    TBoolean boStopRadioCommand;                            //!< [[-]] Stop Radio command 
    TBoolean boForcingAdvanceTrack;                         //!< [[-]] Forcing Advance Track Radio Command 
    TBoolean boInductiveRailSensor;                         //!< [[-]] InductiveRailSensor 
    TBoolean boAuthorizeForwardCrawler;                     //!< [[-]] Authorize Forward Crawler Movement 
    TBoolean boAuthoriseBackwardCrawler;                    //!< [[-]] Authorize Backward Crawler Movement 
    TBoolean boIncoherenceBasketStopAndKey;                 //!< [[-]] Incoherence between Basket Stop and Key selector 
    TBoolean boLoginStatus;                                 //!< [[-]] User Log in Status (1=logged in) 
    TBoolean boMovement_Allow_On_Off;                       //!< [[-]] Movement Allow Status 
    TBoolean boIncoherenceModeTravail;                      //!< [[-]] Incoherence between Lateral/Basket Stop and Key selector 
    TBoolean boUserCodeOption;                              //!< [[-]] User code option active 
    TBoolean boWhiteRailsLightsON;                          //!< [[-]] White Rails Lights ON off track 
    TBoolean bogNeonsON;                                    //!< [[-]] Neons ON 
    TBoolean bogSlopeSensorFault;                           //!< [[-]] Slope sensor fault 
    TBoolean bogMastMeasureFault;                           //!< [[-]] Mast Measure fault 
    TUint8 u8gReductionPumpTrack;                           //!< [[-]] Reduction Pump Track 
    TInt16 i16gPressureBrakeSensorValue;                    //!< [[-]] Pressure Brake Sensor Value 
} TCanSigRecMsg1C0SendToOpus;

extern TCanSigRecMsg1C0SendToOpus gCsr_tMsg1C0SendToOpus;

typedef struct
{
    TBoolean boBreakParkingOnOff;                           //!< [[-]] Break parking status 
    TBoolean boBreakFaillureOnOff;                          //!< [[-]] Break faillure status 
    TBoolean boTurretSectorInCenter;                        //!< [[-]] Turret sector in center 
    TBoolean boTurretInCenter;                              //!< [[-]] Turret in center 
    TBoolean boAlarmAru;                                    //!< [[-]] Status of the ARU alarm 
    TBoolean boSafetyElectricPump;                          //!< [[-]] Safety Electric Pump Activate (A44) 
    TBoolean boBackRailwayAxleLowPosition;                  //!< [[-]] Back Railway Axle in Low Position (A7) 
    TBoolean boFrontRailwayAxleLowPosition;                 //!< [[-]] Front Railway Axle in Low Position (A7) 
    TBoolean boIncoherenceLateralStopAndKey;                //!< [[-]] Incoherence between Lateral Stop and Key selector (A47) 
    TBoolean boBrakePressureFault;                          //!< [[-]] Brake Pressure Fault (A14) 
    TBoolean boTemperatureTransmissionAlarm;                //!< [[-]] Oil temperature alarm 
    TBoolean boUpAxleArFixeRadio;                           //!< [[-]] Up Axle Ar Fixe radio command 
    TBoolean boDownAxleArFixeRadio;                         //!< [[-]] Down Axle Ar Fixe radio command 
    TBoolean boUpAxleAvOscillantRadio;                      //!< [[-]] Up Axle Av Oscillant radio command 
    TBoolean boDownAxleAvOscillantRadio;                    //!< [[-]] Down Axle Ar Oscillant radio command 
    TBoolean boRotationFrameCtClkwiseRadio;                 //!< [[-]] Rotation Frame Coutner clockwise 
    TBoolean boRotationFrameClkwiseRadio;                   //!< [[-]] Rotation Frame clockwise 
    TBoolean boSelectorRotTurretRadio;                      //!< [[-]] Selector Rotation Turret radio command 
    TBoolean boSelectorPendularRadio;                       //!< [[-]] Selector Pendular radio command 
    TBoolean boUpPendulOrRotCtClkTurretRadio;               //!< [[-]] Up pendular or rotation clockwise turret 
    TBoolean boDownPendulOrRotClkTurretRadio;               //!< [[-]] Down pendular or rotation coutner clockwise turret 
    TBoolean boStartRadioCommand;                           //!< [[-]] Start Radio command 
    TBoolean boKlaxonCommand;                               //!< [[-]] Klaxon radio command 
    TBoolean boStopRadioCommand;                            //!< [[-]] Stop Radio command 
    TBoolean boForcingAdvanceTrack;                         //!< [[-]] Forcing Advance Track Radio Command 
    TBoolean boInductiveRailSensor;                         //!< [[-]] InductiveRailSensor 
    TBoolean boAuthorizeForwardCrawler;                     //!< [[-]] Authorize Forward Crawler Movement 
    TBoolean boAuthoriseBackwardCrawler;                    //!< [[-]] Authorize Backward Crawler Movement 
    TBoolean boIncoherenceBasketStopAndKey;                 //!< [[-]] Incoherence between Basket Stop and Key selector 
    TBoolean boLoginStatus;                                 //!< [[-]] User Log in Status (1=logged in) 
    TBoolean boMovement_Allow_On_Off;                       //!< [[-]] Movement Allow Status 
    TBoolean boIncoherenceModeTravail;                      //!< [[-]] Incoherence between Lateral/Basket Stop and Key selector 
    TBoolean boUserCodeOption;                              //!< [[-]] User code option active 
    TBoolean boWhiteRailsLightsON;                          //!< [[-]] White Rails Lights ON off track 
    TBoolean bogNeonsON;                                    //!< [[-]] Neons ON 
    TBoolean bogSlopeSensorFault;                           //!< [[-]] Slope sensor fault 
    TBoolean bogMastMeasureFault;                           //!< [[-]] Mast Measure fault 
    TUint8 u8gReductionPumpTrack;                           //!< [[-]] Reduction Pump Track 
    TInt16 i16gPressureBrakeSensorValue;                    //!< [[-]] Pressure Brake Sensor Value 
} TCanSigRecOldValMsg1C0SendToOpus;

typedef struct
{
    TCanSigRecInf     tCsrInfo_boBreakParkingOnOff;
    TCanSigRecRng_bo  tCsrRng_boBreakParkingOnOff;
    TCanSigRecInf     tCsrInfo_boBreakFaillureOnOff;
    TCanSigRecRng_bo  tCsrRng_boBreakFaillureOnOff;
    TCanSigRecInf     tCsrInfo_boTurretSectorInCenter;
    TCanSigRecRng_bo  tCsrRng_boTurretSectorInCenter;
    TCanSigRecInf     tCsrInfo_boTurretInCenter;
    TCanSigRecRng_bo  tCsrRng_boTurretInCenter;
    TCanSigRecInf     tCsrInfo_boAlarmAru;
    TCanSigRecRng_bo  tCsrRng_boAlarmAru;
    TCanSigRecInf     tCsrInfo_boSafetyElectricPump;
    TCanSigRecRng_bo  tCsrRng_boSafetyElectricPump;
    TCanSigRecInf     tCsrInfo_boBackRailwayAxleLowPosition;
    TCanSigRecRng_bo  tCsrRng_boBackRailwayAxleLowPosition;
    TCanSigRecInf     tCsrInfo_boFrontRailwayAxleLowPosition;
    TCanSigRecRng_bo  tCsrRng_boFrontRailwayAxleLowPosition;
    TCanSigRecInf     tCsrInfo_boIncoherenceLateralStopAndKey;
    TCanSigRecRng_bo  tCsrRng_boIncoherenceLateralStopAndKey;
    TCanSigRecInf     tCsrInfo_boBrakePressureFault;
    TCanSigRecRng_bo  tCsrRng_boBrakePressureFault;
    TCanSigRecInf     tCsrInfo_boTemperatureTransmissionAlarm;
    TCanSigRecRng_bo  tCsrRng_boTemperatureTransmissionAlarm;
    TCanSigRecInf     tCsrInfo_boUpAxleArFixeRadio;
    TCanSigRecRng_bo  tCsrRng_boUpAxleArFixeRadio;
    TCanSigRecInf     tCsrInfo_boDownAxleArFixeRadio;
    TCanSigRecRng_bo  tCsrRng_boDownAxleArFixeRadio;
    TCanSigRecInf     tCsrInfo_boUpAxleAvOscillantRadio;
    TCanSigRecRng_bo  tCsrRng_boUpAxleAvOscillantRadio;
    TCanSigRecInf     tCsrInfo_boDownAxleAvOscillantRadio;
    TCanSigRecRng_bo  tCsrRng_boDownAxleAvOscillantRadio;
    TCanSigRecInf     tCsrInfo_boRotationFrameCtClkwiseRadio;
    TCanSigRecRng_bo  tCsrRng_boRotationFrameCtClkwiseRadio;
    TCanSigRecInf     tCsrInfo_boRotationFrameClkwiseRadio;
    TCanSigRecRng_bo  tCsrRng_boRotationFrameClkwiseRadio;
    TCanSigRecInf     tCsrInfo_boSelectorRotTurretRadio;
    TCanSigRecRng_bo  tCsrRng_boSelectorRotTurretRadio;
    TCanSigRecInf     tCsrInfo_boSelectorPendularRadio;
    TCanSigRecRng_bo  tCsrRng_boSelectorPendularRadio;
    TCanSigRecInf     tCsrInfo_boUpPendulOrRotCtClkTurretRadio;
    TCanSigRecRng_bo  tCsrRng_boUpPendulOrRotCtClkTurretRadio;
    TCanSigRecInf     tCsrInfo_boDownPendulOrRotClkTurretRadio;
    TCanSigRecRng_bo  tCsrRng_boDownPendulOrRotClkTurretRadio;
    TCanSigRecInf     tCsrInfo_boStartRadioCommand;
    TCanSigRecRng_bo  tCsrRng_boStartRadioCommand;
    TCanSigRecInf     tCsrInfo_boKlaxonCommand;
    TCanSigRecRng_bo  tCsrRng_boKlaxonCommand;
    TCanSigRecInf     tCsrInfo_boStopRadioCommand;
    TCanSigRecRng_bo  tCsrRng_boStopRadioCommand;
    TCanSigRecInf     tCsrInfo_boForcingAdvanceTrack;
    TCanSigRecRng_bo  tCsrRng_boForcingAdvanceTrack;
    TCanSigRecInf     tCsrInfo_boInductiveRailSensor;
    TCanSigRecRng_bo  tCsrRng_boInductiveRailSensor;
    TCanSigRecInf     tCsrInfo_boAuthorizeForwardCrawler;
    TCanSigRecRng_bo  tCsrRng_boAuthorizeForwardCrawler;
    TCanSigRecInf     tCsrInfo_boAuthoriseBackwardCrawler;
    TCanSigRecRng_bo  tCsrRng_boAuthoriseBackwardCrawler;
    TCanSigRecInf     tCsrInfo_boIncoherenceBasketStopAndKey;
    TCanSigRecRng_bo  tCsrRng_boIncoherenceBasketStopAndKey;
    TCanSigRecInf     tCsrInfo_boLoginStatus;
    TCanSigRecRng_bo  tCsrRng_boLoginStatus;
    TCanSigRecInf     tCsrInfo_boMovement_Allow_On_Off;
    TCanSigRecRng_bo  tCsrRng_boMovement_Allow_On_Off;
    TCanSigRecInf     tCsrInfo_boIncoherenceModeTravail;
    TCanSigRecRng_bo  tCsrRng_boIncoherenceModeTravail;
    TCanSigRecInf     tCsrInfo_boUserCodeOption;
    TCanSigRecRng_bo  tCsrRng_boUserCodeOption;
    TCanSigRecInf     tCsrInfo_boWhiteRailsLightsON;
    TCanSigRecRng_bo  tCsrRng_boWhiteRailsLightsON;
    TCanSigRecInf     tCsrInfo_bogNeonsON;
    TCanSigRecRng_bo  tCsrRng_bogNeonsON;
    TCanSigRecInf     tCsrInfo_bogSlopeSensorFault;
    TCanSigRecRng_bo  tCsrRng_bogSlopeSensorFault;
    TCanSigRecInf     tCsrInfo_bogMastMeasureFault;
    TCanSigRecRng_bo  tCsrRng_bogMastMeasureFault;
    TCanSigRecInf     tCsrInfo_u8gReductionPumpTrack;
    TCanSigRecRng_u8  tCsrRng_u8gReductionPumpTrack;
    TCanSigRecInf     tCsrInfo_i16gPressureBrakeSensorValue;
    TCanSigRecRng_i16 tCsrRng_i16gPressureBrakeSensorValue;
} TCanSigRecVal_Msg1C0SendToOpus;

typedef struct
{
    const TCanSigRecRoot *cptRoot;                          //!< [POI] Root connection
    TUint8 u8gKeySelector;                                  //!< [[-]] Key Selector 1=bi lateralization 2=ALO Work 3=Multiple track(A6) 
    TUint8 u8gLeftManipulatorPosRadio;                      //!< [[-]] Neutral 1=NEUTRAL 2=AV 3=AR 
    TUint8 u8gRightManipulatorPosRadio;                     //!< [[-]] Neutral 1=NEUTRAL 2=AV 3=AR 
    TUint16 u16gLeftManipulatorRadioVari;                   //!< [[-]] Joystick Scaling Radio Left 
    TUint16 u16gRightManipulatorRadioVari;                  //!< [[-]] Joystick Scaling Radio Right 
    TUint8 u8gLateralizationStop;                           //!< [[-]] Lateralization Stop 1=bi lateralization 2=ALO Work 3=Multiple tr 
} TCanSigRecMsg3C0SendToOpus;

extern TCanSigRecMsg3C0SendToOpus gCsr_tMsg3C0SendToOpus;

typedef struct
{
    TUint8 u8gKeySelector;                                  //!< [[-]] Key Selector 1=bi lateralization 2=ALO Work 3=Multiple track(A6) 
    TUint8 u8gLeftManipulatorPosRadio;                      //!< [[-]] Neutral 1=NEUTRAL 2=AV 3=AR 
    TUint8 u8gRightManipulatorPosRadio;                     //!< [[-]] Neutral 1=NEUTRAL 2=AV 3=AR 
    TUint16 u16gLeftManipulatorRadioVari;                   //!< [[-]] Joystick Scaling Radio Left 
    TUint16 u16gRightManipulatorRadioVari;                  //!< [[-]] Joystick Scaling Radio Right 
    TUint8 u8gLateralizationStop;                           //!< [[-]] Lateralization Stop 1=bi lateralization 2=ALO Work 3=Multiple tr 
} TCanSigRecOldValMsg3C0SendToOpus;

typedef struct
{
    TCanSigRecInf     tCsrInfo_u8gKeySelector;
    TCanSigRecRng_u8  tCsrRng_u8gKeySelector;
    TCanSigRecInf     tCsrInfo_u8gLeftManipulatorPosRadio;
    TCanSigRecRng_u8  tCsrRng_u8gLeftManipulatorPosRadio;
    TCanSigRecInf     tCsrInfo_u8gRightManipulatorPosRadio;
    TCanSigRecRng_u8  tCsrRng_u8gRightManipulatorPosRadio;
    TCanSigRecInf     tCsrInfo_u16gLeftManipulatorRadioVari;
    TCanSigRecRng_u16 tCsrRng_u16gLeftManipulatorRadioVari;
    TCanSigRecInf     tCsrInfo_u16gRightManipulatorRadioVari;
    TCanSigRecRng_u16 tCsrRng_u16gRightManipulatorRadioVari;
    TCanSigRecInf     tCsrInfo_u8gLateralizationStop;
    TCanSigRecRng_u8  tCsrRng_u8gLateralizationStop;
} TCanSigRecVal_Msg3C0SendToOpus;

typedef struct
{
    const TCanSigRecRoot *cptRoot;                          //!< [POI] Root connection
    TBoolean boPin181Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin160Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin184Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin187Fault;                                 //!< [[-]] for the Neotec diag pages 
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
    TUint8 u8gElementSelected;                              //!< [[-]] Element Selected 1=Telescope; 2=Arrow arm; 3=Delta arm; 4=Turret 
    TUint8 u8gSelectedControlPost;                          //!< [[-]] Selected control post: 0=No post; 1=Radio; 2=Basket; 3=Turret 
} TCanSigRecMsg5C0SendToOpus;

extern TCanSigRecMsg5C0SendToOpus gCsr_tMsg5C0SendToOpus;

typedef struct
{
    TBoolean boPin181Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin160Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin184Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin187Fault;                                 //!< [[-]] for the Neotec diag pages 
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
    TUint8 u8gElementSelected;                              //!< [[-]] Element Selected 1=Telescope; 2=Arrow arm; 3=Delta arm; 4=Turret 
    TUint8 u8gSelectedControlPost;                          //!< [[-]] Selected control post: 0=No post; 1=Radio; 2=Basket; 3=Turret 
} TCanSigRecOldValMsg5C0SendToOpus;

typedef struct
{
    TCanSigRecInf     tCsrInfo_boPin181Fault;
    TCanSigRecRng_bo  tCsrRng_boPin181Fault;
    TCanSigRecInf     tCsrInfo_boPin160Fault;
    TCanSigRecRng_bo  tCsrRng_boPin160Fault;
    TCanSigRecInf     tCsrInfo_boPin184Fault;
    TCanSigRecRng_bo  tCsrRng_boPin184Fault;
    TCanSigRecInf     tCsrInfo_boPin187Fault;
    TCanSigRecRng_bo  tCsrRng_boPin187Fault;
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
    TCanSigRecInf     tCsrInfo_u8gElementSelected;
    TCanSigRecRng_u8  tCsrRng_u8gElementSelected;
    TCanSigRecInf     tCsrInfo_u8gSelectedControlPost;
    TCanSigRecRng_u8  tCsrRng_u8gSelectedControlPost;
} TCanSigRecVal_Msg5C0SendToOpus;

typedef struct
{
    const TCanSigRecRoot *cptRoot;                          //!< [POI] Root connection
    TBoolean boPin136_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin148_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin135_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin147_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin269_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin118_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin106_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin117_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin105_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin116_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin104_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin115_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin103_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin120_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin108_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin119_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin107_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin144_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin132_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin143_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin131_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin142_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin130_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin141_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin129_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin152_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin140_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin151_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin139_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin150_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin138_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin149_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin137_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin126_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin114_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin125_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin113_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin124_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin112_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin123_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin111_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin133_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin134_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin145_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin146_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin263_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin256_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin262_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin255_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin261_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin254_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin260_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin253_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin270_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin276_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin277_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin275_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin268_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin274_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin267_48XSFault;                            //!< [[-]] for the Neotec diag pages 
} TCanSigRecMsg7C0SendToOpus;

extern TCanSigRecMsg7C0SendToOpus gCsr_tMsg7C0SendToOpus;

typedef struct
{
    TBoolean boPin136_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin148_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin135_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin147_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin269_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin118_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin106_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin117_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin105_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin116_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin104_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin115_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin103_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin120_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin108_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin119_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin107_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin144_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin132_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin143_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin131_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin142_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin130_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin141_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin129_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin152_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin140_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin151_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin139_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin150_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin138_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin149_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin137_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin126_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin114_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin125_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin113_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin124_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin112_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin123_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin111_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin133_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin134_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin145_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin146_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin263_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin256_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin262_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin255_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin261_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin254_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin260_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin253_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin270_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin276_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin277_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin275_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin268_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin274_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin267_48XSFault;                            //!< [[-]] for the Neotec diag pages 
} TCanSigRecOldValMsg7C0SendToOpus;

typedef struct
{
    TCanSigRecInf     tCsrInfo_boPin136_48XSFault;
    TCanSigRecRng_bo  tCsrRng_boPin136_48XSFault;
    TCanSigRecInf     tCsrInfo_boPin148_48XSFault;
    TCanSigRecRng_bo  tCsrRng_boPin148_48XSFault;
    TCanSigRecInf     tCsrInfo_boPin135_48XSFault;
    TCanSigRecRng_bo  tCsrRng_boPin135_48XSFault;
    TCanSigRecInf     tCsrInfo_boPin147_48XSFault;
    TCanSigRecRng_bo  tCsrRng_boPin147_48XSFault;
    TCanSigRecInf     tCsrInfo_boPin269_48XSFault;
    TCanSigRecRng_bo  tCsrRng_boPin269_48XSFault;
    TCanSigRecInf     tCsrInfo_boPin118_48XSFault;
    TCanSigRecRng_bo  tCsrRng_boPin118_48XSFault;
    TCanSigRecInf     tCsrInfo_boPin106_48XSFault;
    TCanSigRecRng_bo  tCsrRng_boPin106_48XSFault;
    TCanSigRecInf     tCsrInfo_boPin117_48XSFault;
    TCanSigRecRng_bo  tCsrRng_boPin117_48XSFault;
    TCanSigRecInf     tCsrInfo_boPin105_48XSFault;
    TCanSigRecRng_bo  tCsrRng_boPin105_48XSFault;
    TCanSigRecInf     tCsrInfo_boPin116_48XSFault;
    TCanSigRecRng_bo  tCsrRng_boPin116_48XSFault;
    TCanSigRecInf     tCsrInfo_boPin104_48XSFault;
    TCanSigRecRng_bo  tCsrRng_boPin104_48XSFault;
    TCanSigRecInf     tCsrInfo_boPin115_48XSFault;
    TCanSigRecRng_bo  tCsrRng_boPin115_48XSFault;
    TCanSigRecInf     tCsrInfo_boPin103_48XSFault;
    TCanSigRecRng_bo  tCsrRng_boPin103_48XSFault;
    TCanSigRecInf     tCsrInfo_boPin120_48XSFault;
    TCanSigRecRng_bo  tCsrRng_boPin120_48XSFault;
    TCanSigRecInf     tCsrInfo_boPin108_48XSFault;
    TCanSigRecRng_bo  tCsrRng_boPin108_48XSFault;
    TCanSigRecInf     tCsrInfo_boPin119_48XSFault;
    TCanSigRecRng_bo  tCsrRng_boPin119_48XSFault;
    TCanSigRecInf     tCsrInfo_boPin107_48XSFault;
    TCanSigRecRng_bo  tCsrRng_boPin107_48XSFault;
    TCanSigRecInf     tCsrInfo_boPin144_48XSFault;
    TCanSigRecRng_bo  tCsrRng_boPin144_48XSFault;
    TCanSigRecInf     tCsrInfo_boPin132_48XSFault;
    TCanSigRecRng_bo  tCsrRng_boPin132_48XSFault;
    TCanSigRecInf     tCsrInfo_boPin143_48XSFault;
    TCanSigRecRng_bo  tCsrRng_boPin143_48XSFault;
    TCanSigRecInf     tCsrInfo_boPin131_48XSFault;
    TCanSigRecRng_bo  tCsrRng_boPin131_48XSFault;
    TCanSigRecInf     tCsrInfo_boPin142_48XSFault;
    TCanSigRecRng_bo  tCsrRng_boPin142_48XSFault;
    TCanSigRecInf     tCsrInfo_boPin130_48XSFault;
    TCanSigRecRng_bo  tCsrRng_boPin130_48XSFault;
    TCanSigRecInf     tCsrInfo_boPin141_48XSFault;
    TCanSigRecRng_bo  tCsrRng_boPin141_48XSFault;
    TCanSigRecInf     tCsrInfo_boPin129_48XSFault;
    TCanSigRecRng_bo  tCsrRng_boPin129_48XSFault;
    TCanSigRecInf     tCsrInfo_boPin152_48XSFault;
    TCanSigRecRng_bo  tCsrRng_boPin152_48XSFault;
    TCanSigRecInf     tCsrInfo_boPin140_48XSFault;
    TCanSigRecRng_bo  tCsrRng_boPin140_48XSFault;
    TCanSigRecInf     tCsrInfo_boPin151_48XSFault;
    TCanSigRecRng_bo  tCsrRng_boPin151_48XSFault;
    TCanSigRecInf     tCsrInfo_boPin139_48XSFault;
    TCanSigRecRng_bo  tCsrRng_boPin139_48XSFault;
    TCanSigRecInf     tCsrInfo_boPin150_48XSFault;
    TCanSigRecRng_bo  tCsrRng_boPin150_48XSFault;
    TCanSigRecInf     tCsrInfo_boPin138_48XSFault;
    TCanSigRecRng_bo  tCsrRng_boPin138_48XSFault;
    TCanSigRecInf     tCsrInfo_boPin149_48XSFault;
    TCanSigRecRng_bo  tCsrRng_boPin149_48XSFault;
    TCanSigRecInf     tCsrInfo_boPin137_48XSFault;
    TCanSigRecRng_bo  tCsrRng_boPin137_48XSFault;
    TCanSigRecInf     tCsrInfo_boPin126_48XSFault;
    TCanSigRecRng_bo  tCsrRng_boPin126_48XSFault;
    TCanSigRecInf     tCsrInfo_boPin114_48XSFault;
    TCanSigRecRng_bo  tCsrRng_boPin114_48XSFault;
    TCanSigRecInf     tCsrInfo_boPin125_48XSFault;
    TCanSigRecRng_bo  tCsrRng_boPin125_48XSFault;
    TCanSigRecInf     tCsrInfo_boPin113_48XSFault;
    TCanSigRecRng_bo  tCsrRng_boPin113_48XSFault;
    TCanSigRecInf     tCsrInfo_boPin124_48XSFault;
    TCanSigRecRng_bo  tCsrRng_boPin124_48XSFault;
    TCanSigRecInf     tCsrInfo_boPin112_48XSFault;
    TCanSigRecRng_bo  tCsrRng_boPin112_48XSFault;
    TCanSigRecInf     tCsrInfo_boPin123_48XSFault;
    TCanSigRecRng_bo  tCsrRng_boPin123_48XSFault;
    TCanSigRecInf     tCsrInfo_boPin111_48XSFault;
    TCanSigRecRng_bo  tCsrRng_boPin111_48XSFault;
    TCanSigRecInf     tCsrInfo_boPin133_48XSFault;
    TCanSigRecRng_bo  tCsrRng_boPin133_48XSFault;
    TCanSigRecInf     tCsrInfo_boPin134_48XSFault;
    TCanSigRecRng_bo  tCsrRng_boPin134_48XSFault;
    TCanSigRecInf     tCsrInfo_boPin145_48XSFault;
    TCanSigRecRng_bo  tCsrRng_boPin145_48XSFault;
    TCanSigRecInf     tCsrInfo_boPin146_48XSFault;
    TCanSigRecRng_bo  tCsrRng_boPin146_48XSFault;
    TCanSigRecInf     tCsrInfo_boPin263_48XSFault;
    TCanSigRecRng_bo  tCsrRng_boPin263_48XSFault;
    TCanSigRecInf     tCsrInfo_boPin256_48XSFault;
    TCanSigRecRng_bo  tCsrRng_boPin256_48XSFault;
    TCanSigRecInf     tCsrInfo_boPin262_48XSFault;
    TCanSigRecRng_bo  tCsrRng_boPin262_48XSFault;
    TCanSigRecInf     tCsrInfo_boPin255_48XSFault;
    TCanSigRecRng_bo  tCsrRng_boPin255_48XSFault;
    TCanSigRecInf     tCsrInfo_boPin261_48XSFault;
    TCanSigRecRng_bo  tCsrRng_boPin261_48XSFault;
    TCanSigRecInf     tCsrInfo_boPin254_48XSFault;
    TCanSigRecRng_bo  tCsrRng_boPin254_48XSFault;
    TCanSigRecInf     tCsrInfo_boPin260_48XSFault;
    TCanSigRecRng_bo  tCsrRng_boPin260_48XSFault;
    TCanSigRecInf     tCsrInfo_boPin253_48XSFault;
    TCanSigRecRng_bo  tCsrRng_boPin253_48XSFault;
    TCanSigRecInf     tCsrInfo_boPin270_48XSFault;
    TCanSigRecRng_bo  tCsrRng_boPin270_48XSFault;
    TCanSigRecInf     tCsrInfo_boPin276_48XSFault;
    TCanSigRecRng_bo  tCsrRng_boPin276_48XSFault;
    TCanSigRecInf     tCsrInfo_boPin277_48XSFault;
    TCanSigRecRng_bo  tCsrRng_boPin277_48XSFault;
    TCanSigRecInf     tCsrInfo_boPin275_48XSFault;
    TCanSigRecRng_bo  tCsrRng_boPin275_48XSFault;
    TCanSigRecInf     tCsrInfo_boPin268_48XSFault;
    TCanSigRecRng_bo  tCsrRng_boPin268_48XSFault;
    TCanSigRecInf     tCsrInfo_boPin274_48XSFault;
    TCanSigRecRng_bo  tCsrRng_boPin274_48XSFault;
    TCanSigRecInf     tCsrInfo_boPin267_48XSFault;
    TCanSigRecRng_bo  tCsrRng_boPin267_48XSFault;
} TCanSigRecVal_Msg7C0SendToOpus;

typedef struct
{
    const TCanSigRecRoot *cptRoot;                          //!< [POI] Root connection
    TUint8 u8Byte0;                                         //!< [[-]] new signal 
    TUint8 u8Byte1;                                         //!< [[-]] new signal 
    TUint8 u8Byte2;                                         //!< [[-]] new signal 
    TUint8 u8Byte3;                                         //!< [[-]] new signal 
    TUint8 u8Byte4;                                         //!< [[-]] new signal 
    TUint8 u8Byte5;                                         //!< [[-]] new signal 
    TUint8 u8Byte6;                                         //!< [[-]] new signal 
    TUint8 u8Byte7;                                         //!< [[-]] new signal 
} TCanSigRecDMC_TxPdo1_DC;

extern TCanSigRecDMC_TxPdo1_DC gCsr_tDMC_TxPdo1_DC;

typedef struct
{
    TUint8 u8Byte0;                                         //!< [[-]] new signal 
    TUint8 u8Byte1;                                         //!< [[-]] new signal 
    TUint8 u8Byte2;                                         //!< [[-]] new signal 
    TUint8 u8Byte3;                                         //!< [[-]] new signal 
    TUint8 u8Byte4;                                         //!< [[-]] new signal 
    TUint8 u8Byte5;                                         //!< [[-]] new signal 
    TUint8 u8Byte6;                                         //!< [[-]] new signal 
    TUint8 u8Byte7;                                         //!< [[-]] new signal 
} TCanSigRecOldValDMC_TxPdo1_DC;

typedef struct
{
    TCanSigRecInf     tCsrInfo_u8Byte0;
    TCanSigRecRng_u8  tCsrRng_u8Byte0;
    TCanSigRecInf     tCsrInfo_u8Byte1;
    TCanSigRecRng_u8  tCsrRng_u8Byte1;
    TCanSigRecInf     tCsrInfo_u8Byte2;
    TCanSigRecRng_u8  tCsrRng_u8Byte2;
    TCanSigRecInf     tCsrInfo_u8Byte3;
    TCanSigRecRng_u8  tCsrRng_u8Byte3;
    TCanSigRecInf     tCsrInfo_u8Byte4;
    TCanSigRecRng_u8  tCsrRng_u8Byte4;
    TCanSigRecInf     tCsrInfo_u8Byte5;
    TCanSigRecRng_u8  tCsrRng_u8Byte5;
    TCanSigRecInf     tCsrInfo_u8Byte6;
    TCanSigRecRng_u8  tCsrRng_u8Byte6;
    TCanSigRecInf     tCsrInfo_u8Byte7;
    TCanSigRecRng_u8  tCsrRng_u8Byte7;
} TCanSigRecVal_DMC_TxPdo1_DC;

typedef struct
{
    const TCanSigRecRoot *cptRoot;                          //!< [POI] Root connection
    TUint8 u8Byte0;                                         //!< [[-]] new signal 
    TUint8 u8Byte1;                                         //!< [[-]] new signal 
    TUint8 u8Byte2;                                         //!< [[-]] new signal 
    TUint8 u8Byte3;                                         //!< [[-]] new signal 
    TUint8 u8Byte4;                                         //!< [[-]] new signal 
    TUint8 u8Byte5;                                         //!< [[-]] new signal 
    TUint8 u8Byte6;                                         //!< [[-]] new signal 
    TUint8 u8Byte7;                                         //!< [[-]] new signal 
} TCanSigRecFlashBatteryRpdo2_0;

extern TCanSigRecFlashBatteryRpdo2_0 gCsr_tFlashBatteryRpdo2_0;

typedef struct
{
    TUint8 u8Byte0;                                         //!< [[-]] new signal 
    TUint8 u8Byte1;                                         //!< [[-]] new signal 
    TUint8 u8Byte2;                                         //!< [[-]] new signal 
    TUint8 u8Byte3;                                         //!< [[-]] new signal 
    TUint8 u8Byte4;                                         //!< [[-]] new signal 
    TUint8 u8Byte5;                                         //!< [[-]] new signal 
    TUint8 u8Byte6;                                         //!< [[-]] new signal 
    TUint8 u8Byte7;                                         //!< [[-]] new signal 
} TCanSigRecOldValFlashBatteryRpdo2_0;

typedef struct
{
    TCanSigRecInf     tCsrInfo_u8Byte0;
    TCanSigRecRng_u8  tCsrRng_u8Byte0;
    TCanSigRecInf     tCsrInfo_u8Byte1;
    TCanSigRecRng_u8  tCsrRng_u8Byte1;
    TCanSigRecInf     tCsrInfo_u8Byte2;
    TCanSigRecRng_u8  tCsrRng_u8Byte2;
    TCanSigRecInf     tCsrInfo_u8Byte3;
    TCanSigRecRng_u8  tCsrRng_u8Byte3;
    TCanSigRecInf     tCsrInfo_u8Byte4;
    TCanSigRecRng_u8  tCsrRng_u8Byte4;
    TCanSigRecInf     tCsrInfo_u8Byte5;
    TCanSigRecRng_u8  tCsrRng_u8Byte5;
    TCanSigRecInf     tCsrInfo_u8Byte6;
    TCanSigRecRng_u8  tCsrRng_u8Byte6;
    TCanSigRecInf     tCsrInfo_u8Byte7;
    TCanSigRecRng_u8  tCsrRng_u8Byte7;
} TCanSigRecVal_FlashBatteryRpdo2_0;

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
    TUint8 u8Byte0;                                         //!< [[-]] new signal 
    TUint8 u8Byte1;                                         //!< [[-]] new signal 
    TUint8 u8Byte2;                                         //!< [[-]] new signal 
    TUint8 u8Byte3;                                         //!< [[-]] new signal 
    TUint8 u8Byte4;                                         //!< [[-]] new signal 
    TUint8 u8Byte5;                                         //!< [[-]] new signal 
    TUint8 u8Byte6;                                         //!< [[-]] new signal 
    TUint8 u8Byte7;                                         //!< [[-]] new signal 
} TCanSigRecDMC_RxPdo2_DS;

extern TCanSigRecDMC_RxPdo2_DS gCsr_tDMC_RxPdo2_DS;

typedef struct
{
    TUint8 u8Byte0;                                         //!< [[-]] new signal 
    TUint8 u8Byte1;                                         //!< [[-]] new signal 
    TUint8 u8Byte2;                                         //!< [[-]] new signal 
    TUint8 u8Byte3;                                         //!< [[-]] new signal 
    TUint8 u8Byte4;                                         //!< [[-]] new signal 
    TUint8 u8Byte5;                                         //!< [[-]] new signal 
    TUint8 u8Byte6;                                         //!< [[-]] new signal 
    TUint8 u8Byte7;                                         //!< [[-]] new signal 
} TCanSigRecOldValDMC_RxPdo2_DS;

typedef struct
{
    TCanSigRecInf     tCsrInfo_u8Byte0;
    TCanSigRecRng_u8  tCsrRng_u8Byte0;
    TCanSigRecInf     tCsrInfo_u8Byte1;
    TCanSigRecRng_u8  tCsrRng_u8Byte1;
    TCanSigRecInf     tCsrInfo_u8Byte2;
    TCanSigRecRng_u8  tCsrRng_u8Byte2;
    TCanSigRecInf     tCsrInfo_u8Byte3;
    TCanSigRecRng_u8  tCsrRng_u8Byte3;
    TCanSigRecInf     tCsrInfo_u8Byte4;
    TCanSigRecRng_u8  tCsrRng_u8Byte4;
    TCanSigRecInf     tCsrInfo_u8Byte5;
    TCanSigRecRng_u8  tCsrRng_u8Byte5;
    TCanSigRecInf     tCsrInfo_u8Byte6;
    TCanSigRecRng_u8  tCsrRng_u8Byte6;
    TCanSigRecInf     tCsrInfo_u8Byte7;
    TCanSigRecRng_u8  tCsrRng_u8Byte7;
} TCanSigRecVal_DMC_RxPdo2_DS;

typedef struct
{
    const TCanSigRecRoot *cptRoot;                          //!< [POI] Root connection
    TUint32 u32EncodeurTurret1;                             //!< [[-]] new signal 
} TCanSigRecEncodeurTurret1;

extern TCanSigRecEncodeurTurret1 gCsr_tEncodeurTurret1;

typedef struct
{
    TUint32 u32EncodeurTurret1;                             //!< [[-]] new signal 
} TCanSigRecOldValEncodeurTurret1;

typedef struct
{
    TCanSigRecInf     tCsrInfo_u32EncodeurTurret1;
    TCanSigRecRng_u32 tCsrRng_u32EncodeurTurret1;
} TCanSigRecVal_EncodeurTurret1;

typedef struct
{
    const TCanSigRecRoot *cptRoot;                          //!< [POI] Root connection
    TUint32 u32EncodeurTurret2;                             //!< [[-]] new signal 
} TCanSigRecEncodeurTurret2;

extern TCanSigRecEncodeurTurret2 gCsr_tEncodeurTurret2;

typedef struct
{
    TUint32 u32EncodeurTurret2;                             //!< [[-]] new signal 
} TCanSigRecOldValEncodeurTurret2;

typedef struct
{
    TCanSigRecInf     tCsrInfo_u32EncodeurTurret2;
    TCanSigRecRng_u32 tCsrRng_u32EncodeurTurret2;
} TCanSigRecVal_EncodeurTurret2;

typedef struct
{
    const TCanSigRecRoot *cptRoot;                          //!< [POI] Root connection
    TBit2 bi2LeftManipulatorPosition;                       //!< [[-]] Left Manipulator position 
    TBit2 bi2RightManipulatorPosition;                      //!< [[-]] Right Manipulator position 
    TBoolean boUpPendularOrRotClockTurret;                  //!< [[-]] new signal 
    TBoolean boUpAxleArFixe;                                //!< [[-]] Up Axle Ar Fixe 
    TBoolean boDownAxleArFixe;                              //!< [[-]] Down Axle Ar Fixe 
    TBoolean boForcingAdvanceTrack;                         //!< [[-]] new signal 
    TBoolean boUpAxleAvOscillant;                           //!< [[-]] Up Axle Av oscillant 
    TBoolean boDownAxleAvOscillant;                         //!< [[-]] Down Axle Av oscillant 
    TBoolean boRotFrameCtClockwise;                         //!< [[-]] Antihoraire Rotation Chassis 
    TBoolean boRotFrameClockwise;                           //!< [[-]] Horaire Rotation Chassis 
    TBoolean boSelectorPendular;                            //!< [[-]] Selector Pendular 
    TBoolean boSelectorRotTurret;                           //!< [[-]] Selector rotation turret 
    TBoolean boDownPendularOrRotCtClockTurret;              //!< [[-]] new signal 
    TBoolean boStopRadioCommand;                            //!< [[-]] Stop radio command 
    TBoolean boStartRadioCommand;                           //!< [[-]] Start radio command 
    TBoolean boKlaxonCommand;                               //!< [[-]] new signal 
} TCanSigRecReadOnOfffInput;

extern TCanSigRecReadOnOfffInput gCsr_tReadOnOfffInput;

typedef struct
{
    TBit2 bi2LeftManipulatorPosition;                       //!< [[-]] Left Manipulator position 
    TBit2 bi2RightManipulatorPosition;                      //!< [[-]] Right Manipulator position 
    TBoolean boUpPendularOrRotClockTurret;                  //!< [[-]] new signal 
    TBoolean boUpAxleArFixe;                                //!< [[-]] Up Axle Ar Fixe 
    TBoolean boDownAxleArFixe;                              //!< [[-]] Down Axle Ar Fixe 
    TBoolean boForcingAdvanceTrack;                         //!< [[-]] new signal 
    TBoolean boUpAxleAvOscillant;                           //!< [[-]] Up Axle Av oscillant 
    TBoolean boDownAxleAvOscillant;                         //!< [[-]] Down Axle Av oscillant 
    TBoolean boRotFrameCtClockwise;                         //!< [[-]] Antihoraire Rotation Chassis 
    TBoolean boRotFrameClockwise;                           //!< [[-]] Horaire Rotation Chassis 
    TBoolean boSelectorPendular;                            //!< [[-]] Selector Pendular 
    TBoolean boSelectorRotTurret;                           //!< [[-]] Selector rotation turret 
    TBoolean boDownPendularOrRotCtClockTurret;              //!< [[-]] new signal 
    TBoolean boStopRadioCommand;                            //!< [[-]] Stop radio command 
    TBoolean boStartRadioCommand;                           //!< [[-]] Start radio command 
    TBoolean boKlaxonCommand;                               //!< [[-]] new signal 
} TCanSigRecOldValReadOnOfffInput;

typedef struct
{
    TCanSigRecInf     tCsrInfo_bi2LeftManipulatorPosition;
    TCanSigRecRng_u8  tCsrRng_bi2LeftManipulatorPosition;
    TCanSigRecInf     tCsrInfo_bi2RightManipulatorPosition;
    TCanSigRecRng_u8  tCsrRng_bi2RightManipulatorPosition;
    TCanSigRecInf     tCsrInfo_boUpPendularOrRotClockTurret;
    TCanSigRecRng_bo  tCsrRng_boUpPendularOrRotClockTurret;
    TCanSigRecInf     tCsrInfo_boUpAxleArFixe;
    TCanSigRecRng_bo  tCsrRng_boUpAxleArFixe;
    TCanSigRecInf     tCsrInfo_boDownAxleArFixe;
    TCanSigRecRng_bo  tCsrRng_boDownAxleArFixe;
    TCanSigRecInf     tCsrInfo_boForcingAdvanceTrack;
    TCanSigRecRng_bo  tCsrRng_boForcingAdvanceTrack;
    TCanSigRecInf     tCsrInfo_boUpAxleAvOscillant;
    TCanSigRecRng_bo  tCsrRng_boUpAxleAvOscillant;
    TCanSigRecInf     tCsrInfo_boDownAxleAvOscillant;
    TCanSigRecRng_bo  tCsrRng_boDownAxleAvOscillant;
    TCanSigRecInf     tCsrInfo_boRotFrameCtClockwise;
    TCanSigRecRng_bo  tCsrRng_boRotFrameCtClockwise;
    TCanSigRecInf     tCsrInfo_boRotFrameClockwise;
    TCanSigRecRng_bo  tCsrRng_boRotFrameClockwise;
    TCanSigRecInf     tCsrInfo_boSelectorPendular;
    TCanSigRecRng_bo  tCsrRng_boSelectorPendular;
    TCanSigRecInf     tCsrInfo_boSelectorRotTurret;
    TCanSigRecRng_bo  tCsrRng_boSelectorRotTurret;
    TCanSigRecInf     tCsrInfo_boDownPendularOrRotCtClockTurret;
    TCanSigRecRng_bo  tCsrRng_boDownPendularOrRotCtClockTurret;
    TCanSigRecInf     tCsrInfo_boStopRadioCommand;
    TCanSigRecRng_bo  tCsrRng_boStopRadioCommand;
    TCanSigRecInf     tCsrInfo_boStartRadioCommand;
    TCanSigRecRng_bo  tCsrRng_boStartRadioCommand;
    TCanSigRecInf     tCsrInfo_boKlaxonCommand;
    TCanSigRecRng_bo  tCsrRng_boKlaxonCommand;
} TCanSigRecVal_ReadOnOfffInput;

typedef struct
{
    const TCanSigRecRoot *cptRoot;                          //!< [POI] Root connection
    TUint16 u16gEngine_Use_Time;                            //!< [[-]] Engine use time in hour 
    TInt16 i16gEncodeurTurretAngle;                         //!< [[-]] Angle of encodeur turret 
    TUint8 u8gTTC580Version_Major;                          //!< [[-]] Program Version Major C0 TTC580 
    TUint8 u8gTTC580Version_Minor;                          //!< [[-]] Program Version Minor C0 TTC580 
    TUint8 u8gTTC580Version_Patch;                          //!< [[-]] Program Version Patch C0 TTC580 
    TUint8 u8gTTC580Version_Custom;                         //!< [[-]] Program Version Custom C0 TTC580 
} TCanSigRecMsg2C0SendToOpus;

extern TCanSigRecMsg2C0SendToOpus gCsr_tMsg2C0SendToOpus;

typedef struct
{
    TUint16 u16gEngine_Use_Time;                            //!< [[-]] Engine use time in hour 
    TInt16 i16gEncodeurTurretAngle;                         //!< [[-]] Angle of encodeur turret 
    TUint8 u8gTTC580Version_Major;                          //!< [[-]] Program Version Major C0 TTC580 
    TUint8 u8gTTC580Version_Minor;                          //!< [[-]] Program Version Minor C0 TTC580 
    TUint8 u8gTTC580Version_Patch;                          //!< [[-]] Program Version Patch C0 TTC580 
    TUint8 u8gTTC580Version_Custom;                         //!< [[-]] Program Version Custom C0 TTC580 
} TCanSigRecOldValMsg2C0SendToOpus;

typedef struct
{
    TCanSigRecInf     tCsrInfo_u16gEngine_Use_Time;
    TCanSigRecRng_u16 tCsrRng_u16gEngine_Use_Time;
    TCanSigRecInf     tCsrInfo_i16gEncodeurTurretAngle;
    TCanSigRecRng_i16 tCsrRng_i16gEncodeurTurretAngle;
    TCanSigRecInf     tCsrInfo_u8gTTC580Version_Major;
    TCanSigRecRng_u8  tCsrRng_u8gTTC580Version_Major;
    TCanSigRecInf     tCsrInfo_u8gTTC580Version_Minor;
    TCanSigRecRng_u8  tCsrRng_u8gTTC580Version_Minor;
    TCanSigRecInf     tCsrInfo_u8gTTC580Version_Patch;
    TCanSigRecRng_u8  tCsrRng_u8gTTC580Version_Patch;
    TCanSigRecInf     tCsrInfo_u8gTTC580Version_Custom;
    TCanSigRecRng_u8  tCsrRng_u8gTTC580Version_Custom;
} TCanSigRecVal_Msg2C0SendToOpus;

typedef struct
{
    const TCanSigRecRoot *cptRoot;                          //!< [POI] Root connection
    TBoolean boAbutementNacelleTrackSide;                   //!< [[-]] for the Neotec diag pages 
    TBoolean boAbutementNacelleCenteredSide;                //!< [[-]] for the Neotec diag pages 
    TBoolean boBasketTurretLimitation;                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin217Fault;                                 //!< [[-]] for the Neotec diag pages 
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
} TCanSigRecMsg4C0SendToOpus;

extern TCanSigRecMsg4C0SendToOpus gCsr_tMsg4C0SendToOpus;

typedef struct
{
    TBoolean boAbutementNacelleTrackSide;                   //!< [[-]] for the Neotec diag pages 
    TBoolean boAbutementNacelleCenteredSide;                //!< [[-]] for the Neotec diag pages 
    TBoolean boBasketTurretLimitation;                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin217Fault;                                 //!< [[-]] for the Neotec diag pages 
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
} TCanSigRecOldValMsg4C0SendToOpus;

typedef struct
{
    TCanSigRecInf     tCsrInfo_boAbutementNacelleTrackSide;
    TCanSigRecRng_bo  tCsrRng_boAbutementNacelleTrackSide;
    TCanSigRecInf     tCsrInfo_boAbutementNacelleCenteredSide;
    TCanSigRecRng_bo  tCsrRng_boAbutementNacelleCenteredSide;
    TCanSigRecInf     tCsrInfo_boBasketTurretLimitation;
    TCanSigRecRng_bo  tCsrRng_boBasketTurretLimitation;
    TCanSigRecInf     tCsrInfo_boPin217Fault;
    TCanSigRecRng_bo  tCsrRng_boPin217Fault;
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
} TCanSigRecVal_Msg4C0SendToOpus;

typedef struct
{
    const TCanSigRecRoot *cptRoot;                          //!< [POI] Root connection
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
    TBoolean boPin122;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin146;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin123;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin147;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin124;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin148;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin153;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin177;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin156;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin159;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin186;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin162;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin189;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin165;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin195;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin171;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin154;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin160;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin184;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin163;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin190;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin166;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin193;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin169;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin196;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin172;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin149;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin173;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin152;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin176;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin155;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin179;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin158;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin182;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin252;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin239;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin188;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin164;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin191;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin167;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin194;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin170;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin192;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin168;                                      //!< [[-]] for the Neotec diag pages 
} TCanSigRecMsg6C0SendToOpus;

extern TCanSigRecMsg6C0SendToOpus gCsr_tMsg6C0SendToOpus;

typedef struct
{
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
    TBoolean boPin122;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin146;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin123;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin147;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin124;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin148;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin153;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin177;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin156;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin159;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin186;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin162;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin189;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin165;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin195;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin171;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin154;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin160;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin184;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin163;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin190;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin166;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin193;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin169;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin196;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin172;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin149;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin173;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin152;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin176;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin155;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin179;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin158;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin182;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin252;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin239;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin188;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin164;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin191;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin167;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin194;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin170;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin192;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin168;                                      //!< [[-]] for the Neotec diag pages 
} TCanSigRecOldValMsg6C0SendToOpus;

typedef struct
{
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
    TCanSigRecInf     tCsrInfo_boPin122;
    TCanSigRecRng_bo  tCsrRng_boPin122;
    TCanSigRecInf     tCsrInfo_boPin146;
    TCanSigRecRng_bo  tCsrRng_boPin146;
    TCanSigRecInf     tCsrInfo_boPin123;
    TCanSigRecRng_bo  tCsrRng_boPin123;
    TCanSigRecInf     tCsrInfo_boPin147;
    TCanSigRecRng_bo  tCsrRng_boPin147;
    TCanSigRecInf     tCsrInfo_boPin124;
    TCanSigRecRng_bo  tCsrRng_boPin124;
    TCanSigRecInf     tCsrInfo_boPin148;
    TCanSigRecRng_bo  tCsrRng_boPin148;
    TCanSigRecInf     tCsrInfo_boPin153;
    TCanSigRecRng_bo  tCsrRng_boPin153;
    TCanSigRecInf     tCsrInfo_boPin177;
    TCanSigRecRng_bo  tCsrRng_boPin177;
    TCanSigRecInf     tCsrInfo_boPin156;
    TCanSigRecRng_bo  tCsrRng_boPin156;
    TCanSigRecInf     tCsrInfo_boPin159;
    TCanSigRecRng_bo  tCsrRng_boPin159;
    TCanSigRecInf     tCsrInfo_boPin186;
    TCanSigRecRng_bo  tCsrRng_boPin186;
    TCanSigRecInf     tCsrInfo_boPin162;
    TCanSigRecRng_bo  tCsrRng_boPin162;
    TCanSigRecInf     tCsrInfo_boPin189;
    TCanSigRecRng_bo  tCsrRng_boPin189;
    TCanSigRecInf     tCsrInfo_boPin165;
    TCanSigRecRng_bo  tCsrRng_boPin165;
    TCanSigRecInf     tCsrInfo_boPin195;
    TCanSigRecRng_bo  tCsrRng_boPin195;
    TCanSigRecInf     tCsrInfo_boPin171;
    TCanSigRecRng_bo  tCsrRng_boPin171;
    TCanSigRecInf     tCsrInfo_boPin154;
    TCanSigRecRng_bo  tCsrRng_boPin154;
    TCanSigRecInf     tCsrInfo_boPin160;
    TCanSigRecRng_bo  tCsrRng_boPin160;
    TCanSigRecInf     tCsrInfo_boPin184;
    TCanSigRecRng_bo  tCsrRng_boPin184;
    TCanSigRecInf     tCsrInfo_boPin163;
    TCanSigRecRng_bo  tCsrRng_boPin163;
    TCanSigRecInf     tCsrInfo_boPin190;
    TCanSigRecRng_bo  tCsrRng_boPin190;
    TCanSigRecInf     tCsrInfo_boPin166;
    TCanSigRecRng_bo  tCsrRng_boPin166;
    TCanSigRecInf     tCsrInfo_boPin193;
    TCanSigRecRng_bo  tCsrRng_boPin193;
    TCanSigRecInf     tCsrInfo_boPin169;
    TCanSigRecRng_bo  tCsrRng_boPin169;
    TCanSigRecInf     tCsrInfo_boPin196;
    TCanSigRecRng_bo  tCsrRng_boPin196;
    TCanSigRecInf     tCsrInfo_boPin172;
    TCanSigRecRng_bo  tCsrRng_boPin172;
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
    TCanSigRecInf     tCsrInfo_boPin252;
    TCanSigRecRng_bo  tCsrRng_boPin252;
    TCanSigRecInf     tCsrInfo_boPin239;
    TCanSigRecRng_bo  tCsrRng_boPin239;
    TCanSigRecInf     tCsrInfo_boPin188;
    TCanSigRecRng_bo  tCsrRng_boPin188;
    TCanSigRecInf     tCsrInfo_boPin164;
    TCanSigRecRng_bo  tCsrRng_boPin164;
    TCanSigRecInf     tCsrInfo_boPin191;
    TCanSigRecRng_bo  tCsrRng_boPin191;
    TCanSigRecInf     tCsrInfo_boPin167;
    TCanSigRecRng_bo  tCsrRng_boPin167;
    TCanSigRecInf     tCsrInfo_boPin194;
    TCanSigRecRng_bo  tCsrRng_boPin194;
    TCanSigRecInf     tCsrInfo_boPin170;
    TCanSigRecRng_bo  tCsrRng_boPin170;
    TCanSigRecInf     tCsrInfo_boPin192;
    TCanSigRecRng_bo  tCsrRng_boPin192;
    TCanSigRecInf     tCsrInfo_boPin168;
    TCanSigRecRng_bo  tCsrRng_boPin168;
} TCanSigRecVal_Msg6C0SendToOpus;

typedef struct
{
    const TCanSigRecRoot *cptRoot;                          //!< [POI] Root connection
    TBoolean boPin144_48XS;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin132_48XS;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin143_48XS;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin131_48XS;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin142_48XS;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin130_48XS;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin141_48XS;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin129_48XS;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin152_48XS;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin140_48XS;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin151_48XS;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin139_48XS;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin150_48XS;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin138_48XS;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin149_48XS;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin263_48XS;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin256_48XS;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin262_48XS;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin255_48XS;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin261_48XS;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin254_48XS;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin260_48XS;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin253_48XS;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin275_48XS;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin268_48XS;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin274_48XS;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin267_48XS;                                 //!< [[-]] for the Neotec diag pages 
    TUint16 u16gPvgLeftTrackVoltage;                        //!< [[-]] Left Track pvg voltage 
    TUint16 u16gPvgRightTrackVoltage;                       //!< [[-]] Right Track pvg voltage 
} TCanSigRecMsg8C0SendToOpus;

extern TCanSigRecMsg8C0SendToOpus gCsr_tMsg8C0SendToOpus;

typedef struct
{
    TBoolean boPin144_48XS;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin132_48XS;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin143_48XS;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin131_48XS;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin142_48XS;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin130_48XS;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin141_48XS;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin129_48XS;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin152_48XS;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin140_48XS;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin151_48XS;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin139_48XS;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin150_48XS;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin138_48XS;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin149_48XS;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin263_48XS;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin256_48XS;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin262_48XS;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin255_48XS;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin261_48XS;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin254_48XS;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin260_48XS;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin253_48XS;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin275_48XS;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin268_48XS;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin274_48XS;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin267_48XS;                                 //!< [[-]] for the Neotec diag pages 
    TUint16 u16gPvgLeftTrackVoltage;                        //!< [[-]] Left Track pvg voltage 
    TUint16 u16gPvgRightTrackVoltage;                       //!< [[-]] Right Track pvg voltage 
} TCanSigRecOldValMsg8C0SendToOpus;

typedef struct
{
    TCanSigRecInf     tCsrInfo_boPin144_48XS;
    TCanSigRecRng_bo  tCsrRng_boPin144_48XS;
    TCanSigRecInf     tCsrInfo_boPin132_48XS;
    TCanSigRecRng_bo  tCsrRng_boPin132_48XS;
    TCanSigRecInf     tCsrInfo_boPin143_48XS;
    TCanSigRecRng_bo  tCsrRng_boPin143_48XS;
    TCanSigRecInf     tCsrInfo_boPin131_48XS;
    TCanSigRecRng_bo  tCsrRng_boPin131_48XS;
    TCanSigRecInf     tCsrInfo_boPin142_48XS;
    TCanSigRecRng_bo  tCsrRng_boPin142_48XS;
    TCanSigRecInf     tCsrInfo_boPin130_48XS;
    TCanSigRecRng_bo  tCsrRng_boPin130_48XS;
    TCanSigRecInf     tCsrInfo_boPin141_48XS;
    TCanSigRecRng_bo  tCsrRng_boPin141_48XS;
    TCanSigRecInf     tCsrInfo_boPin129_48XS;
    TCanSigRecRng_bo  tCsrRng_boPin129_48XS;
    TCanSigRecInf     tCsrInfo_boPin152_48XS;
    TCanSigRecRng_bo  tCsrRng_boPin152_48XS;
    TCanSigRecInf     tCsrInfo_boPin140_48XS;
    TCanSigRecRng_bo  tCsrRng_boPin140_48XS;
    TCanSigRecInf     tCsrInfo_boPin151_48XS;
    TCanSigRecRng_bo  tCsrRng_boPin151_48XS;
    TCanSigRecInf     tCsrInfo_boPin139_48XS;
    TCanSigRecRng_bo  tCsrRng_boPin139_48XS;
    TCanSigRecInf     tCsrInfo_boPin150_48XS;
    TCanSigRecRng_bo  tCsrRng_boPin150_48XS;
    TCanSigRecInf     tCsrInfo_boPin138_48XS;
    TCanSigRecRng_bo  tCsrRng_boPin138_48XS;
    TCanSigRecInf     tCsrInfo_boPin149_48XS;
    TCanSigRecRng_bo  tCsrRng_boPin149_48XS;
    TCanSigRecInf     tCsrInfo_boPin263_48XS;
    TCanSigRecRng_bo  tCsrRng_boPin263_48XS;
    TCanSigRecInf     tCsrInfo_boPin256_48XS;
    TCanSigRecRng_bo  tCsrRng_boPin256_48XS;
    TCanSigRecInf     tCsrInfo_boPin262_48XS;
    TCanSigRecRng_bo  tCsrRng_boPin262_48XS;
    TCanSigRecInf     tCsrInfo_boPin255_48XS;
    TCanSigRecRng_bo  tCsrRng_boPin255_48XS;
    TCanSigRecInf     tCsrInfo_boPin261_48XS;
    TCanSigRecRng_bo  tCsrRng_boPin261_48XS;
    TCanSigRecInf     tCsrInfo_boPin254_48XS;
    TCanSigRecRng_bo  tCsrRng_boPin254_48XS;
    TCanSigRecInf     tCsrInfo_boPin260_48XS;
    TCanSigRecRng_bo  tCsrRng_boPin260_48XS;
    TCanSigRecInf     tCsrInfo_boPin253_48XS;
    TCanSigRecRng_bo  tCsrRng_boPin253_48XS;
    TCanSigRecInf     tCsrInfo_boPin275_48XS;
    TCanSigRecRng_bo  tCsrRng_boPin275_48XS;
    TCanSigRecInf     tCsrInfo_boPin268_48XS;
    TCanSigRecRng_bo  tCsrRng_boPin268_48XS;
    TCanSigRecInf     tCsrInfo_boPin274_48XS;
    TCanSigRecRng_bo  tCsrRng_boPin274_48XS;
    TCanSigRecInf     tCsrInfo_boPin267_48XS;
    TCanSigRecRng_bo  tCsrRng_boPin267_48XS;
    TCanSigRecInf     tCsrInfo_u16gPvgLeftTrackVoltage;
    TCanSigRecRng_u16 tCsrRng_u16gPvgLeftTrackVoltage;
    TCanSigRecInf     tCsrInfo_u16gPvgRightTrackVoltage;
    TCanSigRecRng_u16 tCsrRng_u16gPvgRightTrackVoltage;
} TCanSigRecVal_Msg8C0SendToOpus;

typedef struct
{
    const TCanSigRecRoot *cptRoot;                          //!< [POI] Root connection
    TInt16 i16gSlopeLongAngle;                              //!< [[-]] Slope Longitudinal Angle 
    TInt16 i16gSlopeTransAngle;                             //!< [[-]] Slope Transversal Angle 
    TInt16 i16gSlopeResultAngle;                            //!< [[-]] Slope Result Angle 
    TInt16 i16gTemperatureTransmissionValue;                //!< [[-]] Temp Transmission value 
} TCanSigRecMsg9C0SendToOpus;

extern TCanSigRecMsg9C0SendToOpus gCsr_tMsg9C0SendToOpus;

typedef struct
{
    TInt16 i16gSlopeLongAngle;                              //!< [[-]] Slope Longitudinal Angle 
    TInt16 i16gSlopeTransAngle;                             //!< [[-]] Slope Transversal Angle 
    TInt16 i16gSlopeResultAngle;                            //!< [[-]] Slope Result Angle 
    TInt16 i16gTemperatureTransmissionValue;                //!< [[-]] Temp Transmission value 
} TCanSigRecOldValMsg9C0SendToOpus;

typedef struct
{
    TCanSigRecInf     tCsrInfo_i16gSlopeLongAngle;
    TCanSigRecRng_i16 tCsrRng_i16gSlopeLongAngle;
    TCanSigRecInf     tCsrInfo_i16gSlopeTransAngle;
    TCanSigRecRng_i16 tCsrRng_i16gSlopeTransAngle;
    TCanSigRecInf     tCsrInfo_i16gSlopeResultAngle;
    TCanSigRecRng_i16 tCsrRng_i16gSlopeResultAngle;
    TCanSigRecInf     tCsrInfo_i16gTemperatureTransmissionValue;
    TCanSigRecRng_i16 tCsrRng_i16gTemperatureTransmissionValue;
} TCanSigRecVal_Msg9C0SendToOpus;

typedef struct
{
    const TCanSigRecRoot *cptRoot;                          //!< [POI] Root connection
    TUint16 u16gForwardPumpCurrent;                         //!< [[-]] Forward pump current feedback 
    TUint16 u16gBackwardPumpCurrent;                        //!< [[-]] Backward pump current feedback 
    TInt16 i16gTransmis1PressureSensorValue;                //!< [[-]] Pressure transmission 1 
    TInt16 i16gTransmis2PressureSensorValue;                //!< [[-]] Pressure transmission 2 
} TCanSigRecMsg10C0SendToOpus;

extern TCanSigRecMsg10C0SendToOpus gCsr_tMsg10C0SendToOpus;

typedef struct
{
    TUint16 u16gForwardPumpCurrent;                         //!< [[-]] Forward pump current feedback 
    TUint16 u16gBackwardPumpCurrent;                        //!< [[-]] Backward pump current feedback 
    TInt16 i16gTransmis1PressureSensorValue;                //!< [[-]] Pressure transmission 1 
    TInt16 i16gTransmis2PressureSensorValue;                //!< [[-]] Pressure transmission 2 
} TCanSigRecOldValMsg10C0SendToOpus;

typedef struct
{
    TCanSigRecInf     tCsrInfo_u16gForwardPumpCurrent;
    TCanSigRecRng_u16 tCsrRng_u16gForwardPumpCurrent;
    TCanSigRecInf     tCsrInfo_u16gBackwardPumpCurrent;
    TCanSigRecRng_u16 tCsrRng_u16gBackwardPumpCurrent;
    TCanSigRecInf     tCsrInfo_i16gTransmis1PressureSensorValue;
    TCanSigRecRng_i16 tCsrRng_i16gTransmis1PressureSensorValue;
    TCanSigRecInf     tCsrInfo_i16gTransmis2PressureSensorValue;
    TCanSigRecRng_i16 tCsrRng_i16gTransmis2PressureSensorValue;
} TCanSigRecVal_Msg10C0SendToOpus;

typedef struct
{
    const TCanSigRecRoot *cptRoot;                          //!< [POI] Root connection
    TBoolean boPictoReloadbatteryImpossible;                //!< [[-]] new signal 
    TBoolean boBatteryLowLevel;                             //!< [[-]] new signal 
    TBoolean boVoltageDcConverterFault;                     //!< [[-]] new signal 
    TBoolean boBattErrorCode1;                              //!< [[-]] new signal 
    TBoolean boActiveFaultRazDmc;                           //!< [[-]] new signal 
    TUint8 u8Batt_Soc;                                      //!< [[-]] new signal 
    TInt16 i16Motor_Rpm;                                    //!< [[-]] new signal 
} TCanSigRecMsg11C0SendToOpus;

extern TCanSigRecMsg11C0SendToOpus gCsr_tMsg11C0SendToOpus;

typedef struct
{
    TBoolean boPictoReloadbatteryImpossible;                //!< [[-]] new signal 
    TBoolean boBatteryLowLevel;                             //!< [[-]] new signal 
    TBoolean boVoltageDcConverterFault;                     //!< [[-]] new signal 
    TBoolean boBattErrorCode1;                              //!< [[-]] new signal 
    TBoolean boActiveFaultRazDmc;                           //!< [[-]] new signal 
    TUint8 u8Batt_Soc;                                      //!< [[-]] new signal 
    TInt16 i16Motor_Rpm;                                    //!< [[-]] new signal 
} TCanSigRecOldValMsg11C0SendToOpus;

typedef struct
{
    TCanSigRecInf     tCsrInfo_boPictoReloadbatteryImpossible;
    TCanSigRecRng_bo  tCsrRng_boPictoReloadbatteryImpossible;
    TCanSigRecInf     tCsrInfo_boBatteryLowLevel;
    TCanSigRecRng_bo  tCsrRng_boBatteryLowLevel;
    TCanSigRecInf     tCsrInfo_boVoltageDcConverterFault;
    TCanSigRecRng_bo  tCsrRng_boVoltageDcConverterFault;
    TCanSigRecInf     tCsrInfo_boBattErrorCode1;
    TCanSigRecRng_bo  tCsrRng_boBattErrorCode1;
    TCanSigRecInf     tCsrInfo_boActiveFaultRazDmc;
    TCanSigRecRng_bo  tCsrRng_boActiveFaultRazDmc;
    TCanSigRecInf     tCsrInfo_u8Batt_Soc;
    TCanSigRecRng_u8  tCsrRng_u8Batt_Soc;
    TCanSigRecInf     tCsrInfo_i16Motor_Rpm;
    TCanSigRecRng_i16 tCsrRng_i16Motor_Rpm;
} TCanSigRecVal_Msg11C0SendToOpus;

typedef struct
{
    const TCanSigRecRoot *cptRoot;                          //!< [POI] Root connection
    TUint8 u8Byte0;                                         //!< [[-]] new signal 
    TUint8 u8Byte1;                                         //!< [[-]] new signal 
    TUint8 u8Byte2;                                         //!< [[-]] new signal 
    TUint8 u8Byte3;                                         //!< [[-]] new signal 
    TUint8 u8Byte4;                                         //!< [[-]] new signal 
    TUint8 u8Byte5;                                         //!< [[-]] new signal 
    TUint8 u8Byte6;                                         //!< [[-]] new signal 
    TUint8 u8Byte7;                                         //!< [[-]] new signal 
} TCanSigRecDMC_TxPdo2_BCL;

extern TCanSigRecDMC_TxPdo2_BCL gCsr_tDMC_TxPdo2_BCL;

typedef struct
{
    TUint8 u8Byte0;                                         //!< [[-]] new signal 
    TUint8 u8Byte1;                                         //!< [[-]] new signal 
    TUint8 u8Byte2;                                         //!< [[-]] new signal 
    TUint8 u8Byte3;                                         //!< [[-]] new signal 
    TUint8 u8Byte4;                                         //!< [[-]] new signal 
    TUint8 u8Byte5;                                         //!< [[-]] new signal 
    TUint8 u8Byte6;                                         //!< [[-]] new signal 
    TUint8 u8Byte7;                                         //!< [[-]] new signal 
} TCanSigRecOldValDMC_TxPdo2_BCL;

typedef struct
{
    TCanSigRecInf     tCsrInfo_u8Byte0;
    TCanSigRecRng_u8  tCsrRng_u8Byte0;
    TCanSigRecInf     tCsrInfo_u8Byte1;
    TCanSigRecRng_u8  tCsrRng_u8Byte1;
    TCanSigRecInf     tCsrInfo_u8Byte2;
    TCanSigRecRng_u8  tCsrRng_u8Byte2;
    TCanSigRecInf     tCsrInfo_u8Byte3;
    TCanSigRecRng_u8  tCsrRng_u8Byte3;
    TCanSigRecInf     tCsrInfo_u8Byte4;
    TCanSigRecRng_u8  tCsrRng_u8Byte4;
    TCanSigRecInf     tCsrInfo_u8Byte5;
    TCanSigRecRng_u8  tCsrRng_u8Byte5;
    TCanSigRecInf     tCsrInfo_u8Byte6;
    TCanSigRecRng_u8  tCsrRng_u8Byte6;
    TCanSigRecInf     tCsrInfo_u8Byte7;
    TCanSigRecRng_u8  tCsrRng_u8Byte7;
} TCanSigRecVal_DMC_TxPdo2_BCL;

typedef struct
{
    const TCanSigRecRoot *cptRoot;                          //!< [POI] Root connection
    TBoolean boLed_1_8;                                     //!< [[-]] new signal 
    TBoolean boLed_9_11;                                    //!< [[-]] new signal 
} TCanSigRecWriteLed;

extern TCanSigRecWriteLed gCsr_tWriteLed;

typedef struct
{
    TUint8 u8Led_1_8;                                       //!< [[-]] new signal 
    TUint8 u8Led_9_11;                                      //!< [[-]] new signal 
} TCanSigRecOldValWriteLed;

typedef struct
{
    TCanSigRecInf     tCsrInfo_boLed_1_8;
    TCanSigRecRng_u8  tCsrRng_boLed_1_8;
    TCanSigRecInf     tCsrInfo_boLed_9_11;
    TCanSigRecRng_u8  tCsrRng_boLed_9_11;
} TCanSigRecVal_WriteLed;

typedef struct
{
    const TCanSigRecRoot *cptRoot;                          //!< [POI] Root connection
    TUint8 u8Byte0;                                         //!< [[-]] new signal 
    TUint8 u8Byte1;                                         //!< [[-]] new signal 
    TUint8 u8Byte2;                                         //!< [[-]] new signal 
    TUint8 u8Byte3;                                         //!< [[-]] new signal 
    TUint8 u8Byte4;                                         //!< [[-]] new signal 
    TUint8 u8Byte5;                                         //!< [[-]] new signal 
    TUint8 u8Byte6;                                         //!< [[-]] new signal 
    TUint8 u8Byte7;                                         //!< [[-]] new signal 
} TCanSigRecFlashBatteryRpdo3_0;

extern TCanSigRecFlashBatteryRpdo3_0 gCsr_tFlashBatteryRpdo3_0;

typedef struct
{
    TUint8 u8Byte0;                                         //!< [[-]] new signal 
    TUint8 u8Byte1;                                         //!< [[-]] new signal 
    TUint8 u8Byte2;                                         //!< [[-]] new signal 
    TUint8 u8Byte3;                                         //!< [[-]] new signal 
    TUint8 u8Byte4;                                         //!< [[-]] new signal 
    TUint8 u8Byte5;                                         //!< [[-]] new signal 
    TUint8 u8Byte6;                                         //!< [[-]] new signal 
    TUint8 u8Byte7;                                         //!< [[-]] new signal 
} TCanSigRecOldValFlashBatteryRpdo3_0;

typedef struct
{
    TCanSigRecInf     tCsrInfo_u8Byte0;
    TCanSigRecRng_u8  tCsrRng_u8Byte0;
    TCanSigRecInf     tCsrInfo_u8Byte1;
    TCanSigRecRng_u8  tCsrRng_u8Byte1;
    TCanSigRecInf     tCsrInfo_u8Byte2;
    TCanSigRecRng_u8  tCsrRng_u8Byte2;
    TCanSigRecInf     tCsrInfo_u8Byte3;
    TCanSigRecRng_u8  tCsrRng_u8Byte3;
    TCanSigRecInf     tCsrInfo_u8Byte4;
    TCanSigRecRng_u8  tCsrRng_u8Byte4;
    TCanSigRecInf     tCsrInfo_u8Byte5;
    TCanSigRecRng_u8  tCsrRng_u8Byte5;
    TCanSigRecInf     tCsrInfo_u8Byte6;
    TCanSigRecRng_u8  tCsrRng_u8Byte6;
    TCanSigRecInf     tCsrInfo_u8Byte7;
    TCanSigRecRng_u8  tCsrRng_u8Byte7;
} TCanSigRecVal_FlashBatteryRpdo3_0;

typedef struct
{
    const TCanSigRecRoot *cptRoot;                          //!< [POI] Root connection
    TUint8 u8Byte0;                                         //!< [[-]] new signal 
    TUint8 u8Byte1;                                         //!< [[-]] new signal 
    TUint8 u8Byte2;                                         //!< [[-]] new signal 
    TUint8 u8Byte3;                                         //!< [[-]] new signal 
    TUint8 u8Byte4;                                         //!< [[-]] new signal 
    TUint8 u8Byte5;                                         //!< [[-]] new signal 
    TUint8 u8Byte6;                                         //!< [[-]] new signal 
    TUint8 u8Byte7;                                         //!< [[-]] new signal 
} TCanSigRecFlashBatteryRpdo3_3;

extern TCanSigRecFlashBatteryRpdo3_3 gCsr_tFlashBatteryRpdo3_3;

typedef struct
{
    TUint8 u8Byte0;                                         //!< [[-]] new signal 
    TUint8 u8Byte1;                                         //!< [[-]] new signal 
    TUint8 u8Byte2;                                         //!< [[-]] new signal 
    TUint8 u8Byte3;                                         //!< [[-]] new signal 
    TUint8 u8Byte4;                                         //!< [[-]] new signal 
    TUint8 u8Byte5;                                         //!< [[-]] new signal 
    TUint8 u8Byte6;                                         //!< [[-]] new signal 
    TUint8 u8Byte7;                                         //!< [[-]] new signal 
} TCanSigRecOldValFlashBatteryRpdo3_3;

typedef struct
{
    TCanSigRecInf     tCsrInfo_u8Byte0;
    TCanSigRecRng_u8  tCsrRng_u8Byte0;
    TCanSigRecInf     tCsrInfo_u8Byte1;
    TCanSigRecRng_u8  tCsrRng_u8Byte1;
    TCanSigRecInf     tCsrInfo_u8Byte2;
    TCanSigRecRng_u8  tCsrRng_u8Byte2;
    TCanSigRecInf     tCsrInfo_u8Byte3;
    TCanSigRecRng_u8  tCsrRng_u8Byte3;
    TCanSigRecInf     tCsrInfo_u8Byte4;
    TCanSigRecRng_u8  tCsrRng_u8Byte4;
    TCanSigRecInf     tCsrInfo_u8Byte5;
    TCanSigRecRng_u8  tCsrRng_u8Byte5;
    TCanSigRecInf     tCsrInfo_u8Byte6;
    TCanSigRecRng_u8  tCsrRng_u8Byte6;
    TCanSigRecInf     tCsrInfo_u8Byte7;
    TCanSigRecRng_u8  tCsrRng_u8Byte7;
} TCanSigRecVal_FlashBatteryRpdo3_3;

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
    TUint8 u8Byte0;                                         //!< [[-]] new signal 
    TUint8 u8Byte1;                                         //!< [[-]] new signal 
    TUint8 u8Byte2;                                         //!< [[-]] new signal 
    TUint8 u8Byte3;                                         //!< [[-]] new signal 
    TUint8 u8Byte4;                                         //!< [[-]] new signal 
    TUint8 u8Byte5;                                         //!< [[-]] new signal 
    TUint8 u8Byte6;                                         //!< [[-]] new signal 
    TUint8 u8Byte7;                                         //!< [[-]] new signal 
} TCanSigRecDMC_RxPdo3_CS;

extern TCanSigRecDMC_RxPdo3_CS gCsr_tDMC_RxPdo3_CS;

typedef struct
{
    TUint8 u8Byte0;                                         //!< [[-]] new signal 
    TUint8 u8Byte1;                                         //!< [[-]] new signal 
    TUint8 u8Byte2;                                         //!< [[-]] new signal 
    TUint8 u8Byte3;                                         //!< [[-]] new signal 
    TUint8 u8Byte4;                                         //!< [[-]] new signal 
    TUint8 u8Byte5;                                         //!< [[-]] new signal 
    TUint8 u8Byte6;                                         //!< [[-]] new signal 
    TUint8 u8Byte7;                                         //!< [[-]] new signal 
} TCanSigRecOldValDMC_RxPdo3_CS;

typedef struct
{
    TCanSigRecInf     tCsrInfo_u8Byte0;
    TCanSigRecRng_u8  tCsrRng_u8Byte0;
    TCanSigRecInf     tCsrInfo_u8Byte1;
    TCanSigRecRng_u8  tCsrRng_u8Byte1;
    TCanSigRecInf     tCsrInfo_u8Byte2;
    TCanSigRecRng_u8  tCsrRng_u8Byte2;
    TCanSigRecInf     tCsrInfo_u8Byte3;
    TCanSigRecRng_u8  tCsrRng_u8Byte3;
    TCanSigRecInf     tCsrInfo_u8Byte4;
    TCanSigRecRng_u8  tCsrRng_u8Byte4;
    TCanSigRecInf     tCsrInfo_u8Byte5;
    TCanSigRecRng_u8  tCsrRng_u8Byte5;
    TCanSigRecInf     tCsrInfo_u8Byte6;
    TCanSigRecRng_u8  tCsrRng_u8Byte6;
    TCanSigRecInf     tCsrInfo_u8Byte7;
    TCanSigRecRng_u8  tCsrRng_u8Byte7;
} TCanSigRecVal_DMC_RxPdo3_CS;

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
    TUint8 u8CCD;                                           //!< [[-]] new signal 
    TUint16 u16Index;                                       //!< [[-]] new signal 
    TUint8 u8Sub_Index;                                     //!< [[-]] new signal 
    TUint32 u32Data;                                        //!< [[-]] new signal 
} TCanSigRecSdo_Answer_Encodeur_Turret1;

extern TCanSigRecSdo_Answer_Encodeur_Turret1 gCsr_tSdo_Answer_Encodeur_Turret1;

typedef struct
{
    TUint8 u8CCD;                                           //!< [[-]] new signal 
    TUint16 u16Index;                                       //!< [[-]] new signal 
    TUint8 u8Sub_Index;                                     //!< [[-]] new signal 
    TUint32 u32Data;                                        //!< [[-]] new signal 
} TCanSigRecOldValSdo_Answer_Encodeur_Turret1;

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
} TCanSigRecVal_Sdo_Answer_Encodeur_Turret1;

typedef struct
{
    const TCanSigRecRoot *cptRoot;                          //!< [POI] Root connection
    TUint8 u8CCD;                                           //!< [[-]] new signal 
    TUint16 u16Index;                                       //!< [[-]] new signal 
    TUint8 u8Sub_Index;                                     //!< [[-]] new signal 
    TUint32 u32Data;                                        //!< [[-]] new signal 
} TCanSigRecSdo_Answer_Encodeur_Turret2;

extern TCanSigRecSdo_Answer_Encodeur_Turret2 gCsr_tSdo_Answer_Encodeur_Turret2;

typedef struct
{
    TUint8 u8CCD;                                           //!< [[-]] new signal 
    TUint16 u16Index;                                       //!< [[-]] new signal 
    TUint8 u8Sub_Index;                                     //!< [[-]] new signal 
    TUint32 u32Data;                                        //!< [[-]] new signal 
} TCanSigRecOldValSdo_Answer_Encodeur_Turret2;

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
} TCanSigRecVal_Sdo_Answer_Encodeur_Turret2;

typedef struct
{
    const TCanSigRecRoot *cptRoot;                          //!< [POI] Root connection
    TUint8 u8ControlField;                                  //!< [[-]] new signal 
    TUint8 u8TargetIndexLSB;                                //!< [[-]] new signal 
    TUint8 u8TargetIndexMSB;                                //!< [[-]] new signal 
    TUint8 u8TargetSubIndex;                                //!< [[-]] new signal 
    TUint8 u8Data0;                                         //!< [[-]] new signal 
    TUint8 u8Data1;                                         //!< [[-]] new signal 
    TUint8 u8Data2;                                         //!< [[-]] new signal 
    TUint8 u8Data3;                                         //!< [[-]] new signal 
} TCanSigRecDMC_RxSdo;

extern TCanSigRecDMC_RxSdo gCsr_tDMC_RxSdo;

typedef struct
{
    TUint8 u8ControlField;                                  //!< [[-]] new signal 
    TUint8 u8TargetIndexLSB;                                //!< [[-]] new signal 
    TUint8 u8TargetIndexMSB;                                //!< [[-]] new signal 
    TUint8 u8TargetSubIndex;                                //!< [[-]] new signal 
    TUint8 u8Data0;                                         //!< [[-]] new signal 
    TUint8 u8Data1;                                         //!< [[-]] new signal 
    TUint8 u8Data2;                                         //!< [[-]] new signal 
    TUint8 u8Data3;                                         //!< [[-]] new signal 
} TCanSigRecOldValDMC_RxSdo;

typedef struct
{
    TCanSigRecInf     tCsrInfo_u8ControlField;
    TCanSigRecRng_u8  tCsrRng_u8ControlField;
    TCanSigRecInf     tCsrInfo_u8TargetIndexLSB;
    TCanSigRecRng_u8  tCsrRng_u8TargetIndexLSB;
    TCanSigRecInf     tCsrInfo_u8TargetIndexMSB;
    TCanSigRecRng_u8  tCsrRng_u8TargetIndexMSB;
    TCanSigRecInf     tCsrInfo_u8TargetSubIndex;
    TCanSigRecRng_u8  tCsrRng_u8TargetSubIndex;
    TCanSigRecInf     tCsrInfo_u8Data0;
    TCanSigRecRng_u8  tCsrRng_u8Data0;
    TCanSigRecInf     tCsrInfo_u8Data1;
    TCanSigRecRng_u8  tCsrRng_u8Data1;
    TCanSigRecInf     tCsrInfo_u8Data2;
    TCanSigRecRng_u8  tCsrRng_u8Data2;
    TCanSigRecInf     tCsrInfo_u8Data3;
    TCanSigRecRng_u8  tCsrRng_u8Data3;
} TCanSigRecVal_DMC_RxSdo;

typedef struct
{
    const TCanSigRecRoot *cptRoot;                          //!< [POI] Root connection
    TUint8 u8CCD;                                           //!< [[-]] new signal 
    TUint16 u16Index;                                       //!< [[-]] new signal 
    TUint8 u8Sub_Index;                                     //!< [[-]] new signal 
    TUint32 u32Data;                                        //!< [[-]] new signal 
} TCanSigRecSdo_Request_Encodeur_Turret1;

extern TCanSigRecSdo_Request_Encodeur_Turret1 gCsr_tSdo_Request_Encodeur_Turret1;

typedef struct
{
    TUint8 u8CCD;                                           //!< [[-]] new signal 
    TUint16 u16Index;                                       //!< [[-]] new signal 
    TUint8 u8Sub_Index;                                     //!< [[-]] new signal 
    TUint32 u32Data;                                        //!< [[-]] new signal 
} TCanSigRecOldValSdo_Request_Encodeur_Turret1;

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
} TCanSigRecVal_Sdo_Request_Encodeur_Turret1;

typedef struct
{
    const TCanSigRecRoot *cptRoot;                          //!< [POI] Root connection
    TUint8 u8CCD;                                           //!< [[-]] new signal 
    TUint16 u16Index;                                       //!< [[-]] new signal 
    TUint8 u8Sub_Index;                                     //!< [[-]] new signal 
    TUint32 u32Data;                                        //!< [[-]] new signal 
} TCanSigRecSdo_Request_Encodeur_Turret2;

extern TCanSigRecSdo_Request_Encodeur_Turret2 gCsr_tSdo_Request_Encodeur_Turret2;

typedef struct
{
    TUint8 u8CCD;                                           //!< [[-]] new signal 
    TUint16 u16Index;                                       //!< [[-]] new signal 
    TUint8 u8Sub_Index;                                     //!< [[-]] new signal 
    TUint32 u32Data;                                        //!< [[-]] new signal 
} TCanSigRecOldValSdo_Request_Encodeur_Turret2;

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
} TCanSigRecVal_Sdo_Request_Encodeur_Turret2;

typedef struct
{
    const TCanSigRecRoot *cptRoot;                          //!< [POI] Root connection
    TUint8 u8ControlField;                                  //!< [[-]] new signal 
    TUint8 u8TargetIndexLSB;                                //!< [[-]] new signal 
    TUint8 u8TargetIndexMSB;                                //!< [[-]] new signal 
    TUint8 u8TargetSubIndex;                                //!< [[-]] new signal 
    TUint8 u8Data0;                                         //!< [[-]] new signal 
    TUint8 u8Data1;                                         //!< [[-]] new signal 
    TUint8 u8Data2;                                         //!< [[-]] new signal 
    TUint8 u8Data3;                                         //!< [[-]] new signal 
} TCanSigRecDMC_TxSdo;

extern TCanSigRecDMC_TxSdo gCsr_tDMC_TxSdo;

typedef struct
{
    TUint8 u8ControlField;                                  //!< [[-]] new signal 
    TUint8 u8TargetIndexLSB;                                //!< [[-]] new signal 
    TUint8 u8TargetIndexMSB;                                //!< [[-]] new signal 
    TUint8 u8TargetSubIndex;                                //!< [[-]] new signal 
    TUint8 u8Data0;                                         //!< [[-]] new signal 
    TUint8 u8Data1;                                         //!< [[-]] new signal 
    TUint8 u8Data2;                                         //!< [[-]] new signal 
    TUint8 u8Data3;                                         //!< [[-]] new signal 
} TCanSigRecOldValDMC_TxSdo;

typedef struct
{
    TCanSigRecInf     tCsrInfo_u8ControlField;
    TCanSigRecRng_u8  tCsrRng_u8ControlField;
    TCanSigRecInf     tCsrInfo_u8TargetIndexLSB;
    TCanSigRecRng_u8  tCsrRng_u8TargetIndexLSB;
    TCanSigRecInf     tCsrInfo_u8TargetIndexMSB;
    TCanSigRecRng_u8  tCsrRng_u8TargetIndexMSB;
    TCanSigRecInf     tCsrInfo_u8TargetSubIndex;
    TCanSigRecRng_u8  tCsrRng_u8TargetSubIndex;
    TCanSigRecInf     tCsrInfo_u8Data0;
    TCanSigRecRng_u8  tCsrRng_u8Data0;
    TCanSigRecInf     tCsrInfo_u8Data1;
    TCanSigRecRng_u8  tCsrRng_u8Data1;
    TCanSigRecInf     tCsrInfo_u8Data2;
    TCanSigRecRng_u8  tCsrRng_u8Data2;
    TCanSigRecInf     tCsrInfo_u8Data3;
    TCanSigRecRng_u8  tCsrRng_u8Data3;
} TCanSigRecVal_DMC_TxSdo;

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
    TUint8 u8NodeState;                                     //!< [[-]] new signal 
} TCanSigRecDMC_Heartbeat_HB;

extern TCanSigRecDMC_Heartbeat_HB gCsr_tDMC_Heartbeat_HB;

typedef struct
{
    TUint8 u8NodeState;                                     //!< [[-]] new signal 
} TCanSigRecOldValDMC_Heartbeat_HB;

typedef struct
{
    TCanSigRecInf     tCsrInfo_u8NodeState;
    TCanSigRecRng_u8  tCsrRng_u8NodeState;
} TCanSigRecVal_DMC_Heartbeat_HB;

typedef struct
{
    const TCanSigRecRoot *cptRoot;                          //!< [POI] Root connection
    TUint8 u8State;                                         //!< [[-]] new signal 
} TCanSigRecHeartBeatDeversFrame;

extern TCanSigRecHeartBeatDeversFrame gCsr_tHeartBeatDeversFrame;

typedef struct
{
    TUint8 u8State;                                         //!< [[-]] new signal 
} TCanSigRecOldValHeartBeatDeversFrame;

typedef struct
{
    TCanSigRecInf     tCsrInfo_u8State;
    TCanSigRecRng_u8  tCsrRng_u8State;
} TCanSigRecVal_HeartBeatDeversFrame;

typedef struct
{
    const TCanSigRecRoot *cptRoot;                          //!< [POI] Root connection
    TUint8 u8State;                                         //!< [[-]] new signal 
} TCanSigRecHeartBeatEncodeurTurret1;

extern TCanSigRecHeartBeatEncodeurTurret1 gCsr_tHeartBeatEncodeurTurret1;

typedef struct
{
    TUint8 u8State;                                         //!< [[-]] new signal 
} TCanSigRecOldValHeartBeatEncodeurTurret1;

typedef struct
{
    TCanSigRecInf     tCsrInfo_u8State;
    TCanSigRecRng_u8  tCsrRng_u8State;
} TCanSigRecVal_HeartBeatEncodeurTurret1;

typedef struct
{
    const TCanSigRecRoot *cptRoot;                          //!< [POI] Root connection
    TUint8 u8State;                                         //!< [[-]] new signal 
} TCanSigRecHeartBeatEncodeurTurret2;

extern TCanSigRecHeartBeatEncodeurTurret2 gCsr_tHeartBeatEncodeurTurret2;

typedef struct
{
    TUint8 u8State;                                         //!< [[-]] new signal 
} TCanSigRecOldValHeartBeatEncodeurTurret2;

typedef struct
{
    TCanSigRecInf     tCsrInfo_u8State;
    TCanSigRecRng_u8  tCsrRng_u8State;
} TCanSigRecVal_HeartBeatEncodeurTurret2;

typedef struct
{
    const TCanSigRecRoot *cptRoot;                          //!< [POI] Root connection
    TUint8 u8State;                                         //!< [[-]] State of Heart Beat 
} TCanSigRecHeartBeat;

extern TCanSigRecHeartBeat gCsr_tHeartBeat;

typedef struct
{
    TUint8 u8State;                                         //!< [[-]] State of Heart Beat 
} TCanSigRecOldValHeartBeat;

typedef struct
{
    TCanSigRecInf     tCsrInfo_u8State;
    TCanSigRecRng_u8  tCsrRng_u8State;
} TCanSigRecVal_HeartBeat;

typedef struct
{
    const TCanSigRecRoot *cptRoot;                          //!< [POI] Root connection
    TBoolean bogBreak_Parking_On_Off;                       //!< [[-]] Break Parking Status  
    TBoolean bogBreak_Faillure_On_Off;                      //!< [[-]] Break Faillure Status 
    TBoolean bogMovement_Allow_Nacelle;                     //!< [[-]] Movement Allow Status 
    TBoolean bogTurretSectorInCenter;                       //!< [[-]] Turret Sector in Center 
    TBoolean bogTurretInCenter;                             //!< [[-]] Turret in Center 
    TBoolean bogVehiculeTrainMode;                          //!< [[-]] Vehicule in Train Mode (Speed in MPH) 
    TBoolean bogIncoherenceLateralStopAndKey;               //!< [[-]] Incoherence between Lateral Stop and Key selector (A47) 
    TBoolean bogWorkMode;                                   //!< [[-]] 0=Work Mode activate 1=Site Acces Mode  (A4) 
    TBoolean bogSafetyElectricPump;                         //!< [[-]] Safety Electric Pump Activate (A44) 
    TBoolean bogDownhill150mm;                              //!< [[-]] Downhill between 150mm and 200mm (A13) 
    TBoolean bogTrainModeAllow;                             //!< [[-]] Train Mode Allow (A10) 
    TBoolean bogBrakeTestService;                           //!< [[-]] Brake test need to be launch (A22) 
    TBoolean bogBrakePressureFault;                         //!< [[-]] Brake Pressure Fault (A14) 
    TBoolean bogActivateMeasuringMast;                      //!< [[-]] Activate Measuring Mast (A21) 
    TBoolean bogAutoMovementDirectionLight;                 //!< [[-]] Auto Movement Direction Light (A23) 
    TBoolean bogBackRailwayAxleLowPosition;                 //!< [[-]] Back Railway Axle in Low Position (A7) 
    TBoolean bogFrontRailwayAxleLowPosition;                //!< [[-]] Front Railway Axle in Low Position (A7) 
    TBoolean bogBackRailwayAxleServiceBrake;                //!< [[-]] Back Railway Axle Service Brake (A25) 
    TBoolean bogFrontRailwayAxleServiceBrake;               //!< [[-]] Front Railway Axle Service Brake (A25) 
    TBoolean bogBackRailwayAxleParkBrake;                   //!< [[-]] Back Railway Axle Park Brake (A26) 
    TBoolean bogFrontRailwayAxleParkBrake;                  //!< [[-]] Front Railway Axle Park Brake (A26)  
    TBoolean bogStatusFrontLeftTrainBrakeTest;              //!< [[-]] Status of Front Left Train Brake Test (A27) 
    TBoolean bogStatFrontRightTrainBrakeTest;               //!< [[-]] Status of Front Right Train Brake Test (A27) 
    TBoolean bogStatusBackLeftTrainBrakeTest;               //!< [[-]] Status of Back Left Train Brake Test (A27) 
    TBoolean bogStatusBackRightTrainBrakeTest;              //!< [[-]] Status of Back Left Train Brake Test (A27) 
    TBoolean bogAlarmAru;                                   //!< [[-]] Status of the ARU alarm 
    TBoolean bogLitmitSpeedExceeded;                        //!< [[-]] Flag when limit speed is exceeded 
    TBoolean bogShowCamera;                                 //!< [[-]] Display camera on screen when translation is solicited 
    TBoolean bogFixeAxleFrequencyFault;                     //!< [[-]] Fixed axle Speed sensor 2 fault 
    TBoolean bogOscillantAxleFrequencyFault;                //!< [[-]] Fixed axle Speed sensor 1 fault 
    TBoolean bogTemperatureTransmAlarm;                     //!< [[-]] Oil temperature alarm 
    TBoolean bogUserCodeOption;                             //!< [[-]] Option user code active 
    TBoolean bogRequestForwardTransRail;                    //!< [[-]] Request joystick forward trans rail 
    TBoolean bogRequestBackwardTransRail;                   //!< [[-]] Request joystick forward trans rail 
    TBoolean bogEvForwardFault;                             //!< [[-]] Ev Forward Fault CC CO 
    TBoolean bogEvBackwardFault;                            //!< [[-]] Ev Backward Fault CC CO 
    TBoolean bogIncoherenceModeTravail;                     //!< [[-]] Incoherence between Lateral/Basket Stop and Key selector  
    TBoolean bogIncoherenceBasketStopAndKey;                //!< [[-]] Incoherence between Basket Stop and Key selector 
    TBoolean bogCenteredAdvanceJoystick;                    //!< [[-]] Advance joystick centered 
    TBoolean bogKlaxon;                                     //!< [[-]] Klaxon 
    TBoolean bogGachette;                                   //!< [[-]] Gachette 
    TBoolean bogStopMoteur;                                 //!< [[-]] BP STOP 
    TBoolean bogEStop;                                      //!< [[-]] Emergency stop 
    TBoolean bogDeadMan;                                    //!< [[-]] Dead man pedal 
    TBoolean bogSignalDangerMode;                           //!< [[-]] Signal Danger Lights mode 
    TBoolean bogLimitSpeedLowSpeedBrakeTest;                //!< [[-]] Limit/low Speed because of none Brake test 
    TBoolean bogSlopeSensorFault;                           //!< [[-]] Fuel low 
    TBoolean bogMastMeasureFault;                           //!< [[-]] Mast Measure Fault 
    TInt16 i16gEncodeurTurretAngle;                         //!< [[-]] RPM Solenoid value 
} TCanSigRecMsg1C0SendToEvision7;

extern TCanSigRecMsg1C0SendToEvision7 gCsr_tMsg1C0SendToEvision7;

typedef struct
{
    TBoolean bogBreak_Parking_On_Off;                       //!< [[-]] Break Parking Status  
    TBoolean bogBreak_Faillure_On_Off;                      //!< [[-]] Break Faillure Status 
    TBoolean bogMovement_Allow_Nacelle;                     //!< [[-]] Movement Allow Status 
    TBoolean bogTurretSectorInCenter;                       //!< [[-]] Turret Sector in Center 
    TBoolean bogTurretInCenter;                             //!< [[-]] Turret in Center 
    TBoolean bogVehiculeTrainMode;                          //!< [[-]] Vehicule in Train Mode (Speed in MPH) 
    TBoolean bogIncoherenceLateralStopAndKey;               //!< [[-]] Incoherence between Lateral Stop and Key selector (A47) 
    TBoolean bogWorkMode;                                   //!< [[-]] 0=Work Mode activate 1=Site Acces Mode  (A4) 
    TBoolean bogSafetyElectricPump;                         //!< [[-]] Safety Electric Pump Activate (A44) 
    TBoolean bogDownhill150mm;                              //!< [[-]] Downhill between 150mm and 200mm (A13) 
    TBoolean bogTrainModeAllow;                             //!< [[-]] Train Mode Allow (A10) 
    TBoolean bogBrakeTestService;                           //!< [[-]] Brake test need to be launch (A22) 
    TBoolean bogBrakePressureFault;                         //!< [[-]] Brake Pressure Fault (A14) 
    TBoolean bogActivateMeasuringMast;                      //!< [[-]] Activate Measuring Mast (A21) 
    TBoolean bogAutoMovementDirectionLight;                 //!< [[-]] Auto Movement Direction Light (A23) 
    TBoolean bogBackRailwayAxleLowPosition;                 //!< [[-]] Back Railway Axle in Low Position (A7) 
    TBoolean bogFrontRailwayAxleLowPosition;                //!< [[-]] Front Railway Axle in Low Position (A7) 
    TBoolean bogBackRailwayAxleServiceBrake;                //!< [[-]] Back Railway Axle Service Brake (A25) 
    TBoolean bogFrontRailwayAxleServiceBrake;               //!< [[-]] Front Railway Axle Service Brake (A25) 
    TBoolean bogBackRailwayAxleParkBrake;                   //!< [[-]] Back Railway Axle Park Brake (A26) 
    TBoolean bogFrontRailwayAxleParkBrake;                  //!< [[-]] Front Railway Axle Park Brake (A26)  
    TBoolean bogStatusFrontLeftTrainBrakeTest;              //!< [[-]] Status of Front Left Train Brake Test (A27) 
    TBoolean bogStatFrontRightTrainBrakeTest;               //!< [[-]] Status of Front Right Train Brake Test (A27) 
    TBoolean bogStatusBackLeftTrainBrakeTest;               //!< [[-]] Status of Back Left Train Brake Test (A27) 
    TBoolean bogStatusBackRightTrainBrakeTest;              //!< [[-]] Status of Back Left Train Brake Test (A27) 
    TBoolean bogAlarmAru;                                   //!< [[-]] Status of the ARU alarm 
    TBoolean bogLitmitSpeedExceeded;                        //!< [[-]] Flag when limit speed is exceeded 
    TBoolean bogShowCamera;                                 //!< [[-]] Display camera on screen when translation is solicited 
    TBoolean bogFixeAxleFrequencyFault;                     //!< [[-]] Fixed axle Speed sensor 2 fault 
    TBoolean bogOscillantAxleFrequencyFault;                //!< [[-]] Fixed axle Speed sensor 1 fault 
    TBoolean bogTemperatureTransmAlarm;                     //!< [[-]] Oil temperature alarm 
    TBoolean bogUserCodeOption;                             //!< [[-]] Option user code active 
    TBoolean bogRequestForwardTransRail;                    //!< [[-]] Request joystick forward trans rail 
    TBoolean bogRequestBackwardTransRail;                   //!< [[-]] Request joystick forward trans rail 
    TBoolean bogEvForwardFault;                             //!< [[-]] Ev Forward Fault CC CO 
    TBoolean bogEvBackwardFault;                            //!< [[-]] Ev Backward Fault CC CO 
    TBoolean bogIncoherenceModeTravail;                     //!< [[-]] Incoherence between Lateral/Basket Stop and Key selector  
    TBoolean bogIncoherenceBasketStopAndKey;                //!< [[-]] Incoherence between Basket Stop and Key selector 
    TBoolean bogCenteredAdvanceJoystick;                    //!< [[-]] Advance joystick centered 
    TBoolean bogKlaxon;                                     //!< [[-]] Klaxon 
    TBoolean bogGachette;                                   //!< [[-]] Gachette 
    TBoolean bogStopMoteur;                                 //!< [[-]] BP STOP 
    TBoolean bogEStop;                                      //!< [[-]] Emergency stop 
    TBoolean bogDeadMan;                                    //!< [[-]] Dead man pedal 
    TBoolean bogSignalDangerMode;                           //!< [[-]] Signal Danger Lights mode 
    TBoolean bogLimitSpeedLowSpeedBrakeTest;                //!< [[-]] Limit/low Speed because of none Brake test 
    TBoolean bogSlopeSensorFault;                           //!< [[-]] Fuel low 
    TBoolean bogMastMeasureFault;                           //!< [[-]] Mast Measure Fault 
    TInt16 i16gEncodeurTurretAngle;                         //!< [[-]] RPM Solenoid value 
} TCanSigRecOldValMsg1C0SendToEvision7;

typedef struct
{
    TCanSigRecInf     tCsrInfo_bogBreak_Parking_On_Off;
    TCanSigRecRng_bo  tCsrRng_bogBreak_Parking_On_Off;
    TCanSigRecInf     tCsrInfo_bogBreak_Faillure_On_Off;
    TCanSigRecRng_bo  tCsrRng_bogBreak_Faillure_On_Off;
    TCanSigRecInf     tCsrInfo_bogMovement_Allow_Nacelle;
    TCanSigRecRng_bo  tCsrRng_bogMovement_Allow_Nacelle;
    TCanSigRecInf     tCsrInfo_bogTurretSectorInCenter;
    TCanSigRecRng_bo  tCsrRng_bogTurretSectorInCenter;
    TCanSigRecInf     tCsrInfo_bogTurretInCenter;
    TCanSigRecRng_bo  tCsrRng_bogTurretInCenter;
    TCanSigRecInf     tCsrInfo_bogVehiculeTrainMode;
    TCanSigRecRng_bo  tCsrRng_bogVehiculeTrainMode;
    TCanSigRecInf     tCsrInfo_bogIncoherenceLateralStopAndKey;
    TCanSigRecRng_bo  tCsrRng_bogIncoherenceLateralStopAndKey;
    TCanSigRecInf     tCsrInfo_bogWorkMode;
    TCanSigRecRng_bo  tCsrRng_bogWorkMode;
    TCanSigRecInf     tCsrInfo_bogSafetyElectricPump;
    TCanSigRecRng_bo  tCsrRng_bogSafetyElectricPump;
    TCanSigRecInf     tCsrInfo_bogDownhill150mm;
    TCanSigRecRng_bo  tCsrRng_bogDownhill150mm;
    TCanSigRecInf     tCsrInfo_bogTrainModeAllow;
    TCanSigRecRng_bo  tCsrRng_bogTrainModeAllow;
    TCanSigRecInf     tCsrInfo_bogBrakeTestService;
    TCanSigRecRng_bo  tCsrRng_bogBrakeTestService;
    TCanSigRecInf     tCsrInfo_bogBrakePressureFault;
    TCanSigRecRng_bo  tCsrRng_bogBrakePressureFault;
    TCanSigRecInf     tCsrInfo_bogActivateMeasuringMast;
    TCanSigRecRng_bo  tCsrRng_bogActivateMeasuringMast;
    TCanSigRecInf     tCsrInfo_bogAutoMovementDirectionLight;
    TCanSigRecRng_bo  tCsrRng_bogAutoMovementDirectionLight;
    TCanSigRecInf     tCsrInfo_bogBackRailwayAxleLowPosition;
    TCanSigRecRng_bo  tCsrRng_bogBackRailwayAxleLowPosition;
    TCanSigRecInf     tCsrInfo_bogFrontRailwayAxleLowPosition;
    TCanSigRecRng_bo  tCsrRng_bogFrontRailwayAxleLowPosition;
    TCanSigRecInf     tCsrInfo_bogBackRailwayAxleServiceBrake;
    TCanSigRecRng_bo  tCsrRng_bogBackRailwayAxleServiceBrake;
    TCanSigRecInf     tCsrInfo_bogFrontRailwayAxleServiceBrake;
    TCanSigRecRng_bo  tCsrRng_bogFrontRailwayAxleServiceBrake;
    TCanSigRecInf     tCsrInfo_bogBackRailwayAxleParkBrake;
    TCanSigRecRng_bo  tCsrRng_bogBackRailwayAxleParkBrake;
    TCanSigRecInf     tCsrInfo_bogFrontRailwayAxleParkBrake;
    TCanSigRecRng_bo  tCsrRng_bogFrontRailwayAxleParkBrake;
    TCanSigRecInf     tCsrInfo_bogStatusFrontLeftTrainBrakeTest;
    TCanSigRecRng_bo  tCsrRng_bogStatusFrontLeftTrainBrakeTest;
    TCanSigRecInf     tCsrInfo_bogStatFrontRightTrainBrakeTest;
    TCanSigRecRng_bo  tCsrRng_bogStatFrontRightTrainBrakeTest;
    TCanSigRecInf     tCsrInfo_bogStatusBackLeftTrainBrakeTest;
    TCanSigRecRng_bo  tCsrRng_bogStatusBackLeftTrainBrakeTest;
    TCanSigRecInf     tCsrInfo_bogStatusBackRightTrainBrakeTest;
    TCanSigRecRng_bo  tCsrRng_bogStatusBackRightTrainBrakeTest;
    TCanSigRecInf     tCsrInfo_bogAlarmAru;
    TCanSigRecRng_bo  tCsrRng_bogAlarmAru;
    TCanSigRecInf     tCsrInfo_bogLitmitSpeedExceeded;
    TCanSigRecRng_bo  tCsrRng_bogLitmitSpeedExceeded;
    TCanSigRecInf     tCsrInfo_bogShowCamera;
    TCanSigRecRng_bo  tCsrRng_bogShowCamera;
    TCanSigRecInf     tCsrInfo_bogFixeAxleFrequencyFault;
    TCanSigRecRng_bo  tCsrRng_bogFixeAxleFrequencyFault;
    TCanSigRecInf     tCsrInfo_bogOscillantAxleFrequencyFault;
    TCanSigRecRng_bo  tCsrRng_bogOscillantAxleFrequencyFault;
    TCanSigRecInf     tCsrInfo_bogTemperatureTransmAlarm;
    TCanSigRecRng_bo  tCsrRng_bogTemperatureTransmAlarm;
    TCanSigRecInf     tCsrInfo_bogUserCodeOption;
    TCanSigRecRng_bo  tCsrRng_bogUserCodeOption;
    TCanSigRecInf     tCsrInfo_bogRequestForwardTransRail;
    TCanSigRecRng_bo  tCsrRng_bogRequestForwardTransRail;
    TCanSigRecInf     tCsrInfo_bogRequestBackwardTransRail;
    TCanSigRecRng_bo  tCsrRng_bogRequestBackwardTransRail;
    TCanSigRecInf     tCsrInfo_bogEvForwardFault;
    TCanSigRecRng_bo  tCsrRng_bogEvForwardFault;
    TCanSigRecInf     tCsrInfo_bogEvBackwardFault;
    TCanSigRecRng_bo  tCsrRng_bogEvBackwardFault;
    TCanSigRecInf     tCsrInfo_bogIncoherenceModeTravail;
    TCanSigRecRng_bo  tCsrRng_bogIncoherenceModeTravail;
    TCanSigRecInf     tCsrInfo_bogIncoherenceBasketStopAndKey;
    TCanSigRecRng_bo  tCsrRng_bogIncoherenceBasketStopAndKey;
    TCanSigRecInf     tCsrInfo_bogCenteredAdvanceJoystick;
    TCanSigRecRng_bo  tCsrRng_bogCenteredAdvanceJoystick;
    TCanSigRecInf     tCsrInfo_bogKlaxon;
    TCanSigRecRng_bo  tCsrRng_bogKlaxon;
    TCanSigRecInf     tCsrInfo_bogGachette;
    TCanSigRecRng_bo  tCsrRng_bogGachette;
    TCanSigRecInf     tCsrInfo_bogStopMoteur;
    TCanSigRecRng_bo  tCsrRng_bogStopMoteur;
    TCanSigRecInf     tCsrInfo_bogEStop;
    TCanSigRecRng_bo  tCsrRng_bogEStop;
    TCanSigRecInf     tCsrInfo_bogDeadMan;
    TCanSigRecRng_bo  tCsrRng_bogDeadMan;
    TCanSigRecInf     tCsrInfo_bogSignalDangerMode;
    TCanSigRecRng_bo  tCsrRng_bogSignalDangerMode;
    TCanSigRecInf     tCsrInfo_bogLimitSpeedLowSpeedBrakeTest;
    TCanSigRecRng_bo  tCsrRng_bogLimitSpeedLowSpeedBrakeTest;
    TCanSigRecInf     tCsrInfo_bogSlopeSensorFault;
    TCanSigRecRng_bo  tCsrRng_bogSlopeSensorFault;
    TCanSigRecInf     tCsrInfo_bogMastMeasureFault;
    TCanSigRecRng_bo  tCsrRng_bogMastMeasureFault;
    TCanSigRecInf     tCsrInfo_i16gEncodeurTurretAngle;
    TCanSigRecRng_i16 tCsrRng_i16gEncodeurTurretAngle;
} TCanSigRecVal_Msg1C0SendToEvision7;

typedef struct
{
    const TCanSigRecRoot *cptRoot;                          //!< [POI] Root connection
    TUint16 u16gEngine_Use_Time;                            //!< [[-]] Engine use time in hour 
    TUint16 u16gEngine_RPM;                                 //!< [[-]] Engine RPM 
    TUint16 u16gVehiculeSpeed;                              //!< [[-]] Vehicule Speed in Km/h * 100 
    TUint8 u8gLateralizationStop;                           //!< [[-]] Lateralization Stop 1=bi lateralization 2=ALO Work 3=Multiple tr 
    TUint8 u8gKeySelector;                                  //!< [[-]] Key Selector 1=bi lateralization 2=ALO Work 3=Multiple track(A6) 
} TCanSigRecMsg2C0SendToEvision7;

extern TCanSigRecMsg2C0SendToEvision7 gCsr_tMsg2C0SendToEvision7;

typedef struct
{
    TUint16 u16gEngine_Use_Time;                            //!< [[-]] Engine use time in hour 
    TUint16 u16gEngine_RPM;                                 //!< [[-]] Engine RPM 
    TUint16 u16gVehiculeSpeed;                              //!< [[-]] Vehicule Speed in Km/h * 100 
    TUint8 u8gLateralizationStop;                           //!< [[-]] Lateralization Stop 1=bi lateralization 2=ALO Work 3=Multiple tr 
    TUint8 u8gKeySelector;                                  //!< [[-]] Key Selector 1=bi lateralization 2=ALO Work 3=Multiple track(A6) 
} TCanSigRecOldValMsg2C0SendToEvision7;

typedef struct
{
    TCanSigRecInf     tCsrInfo_u16gEngine_Use_Time;
    TCanSigRecRng_u16 tCsrRng_u16gEngine_Use_Time;
    TCanSigRecInf     tCsrInfo_u16gEngine_RPM;
    TCanSigRecRng_u16 tCsrRng_u16gEngine_RPM;
    TCanSigRecInf     tCsrInfo_u16gVehiculeSpeed;
    TCanSigRecRng_u16 tCsrRng_u16gVehiculeSpeed;
    TCanSigRecInf     tCsrInfo_u8gLateralizationStop;
    TCanSigRecRng_u8  tCsrRng_u8gLateralizationStop;
    TCanSigRecInf     tCsrInfo_u8gKeySelector;
    TCanSigRecRng_u8  tCsrRng_u8gKeySelector;
} TCanSigRecVal_Msg2C0SendToEvision7;

typedef struct
{
    const TCanSigRecRoot *cptRoot;                          //!< [POI] Root connection
    TUint16 u16gFrontSpeedRailWayAxle;                      //!< [[-]] Front Speed Railway Axle in Km/h (A24) 
    TUint16 u16gBackSpeedRailWayAxle;                       //!< [[-]] Back Speed Railway Axle in Km/h 
    TUint16 u16gAvdvancePeriod;                             //!< [[-]] new signal 
    TUint16 u16gPressureEfficiencyRate;                     //!< [[-]] new signal 
} TCanSigRecMsg3C0SendToEvision7;

extern TCanSigRecMsg3C0SendToEvision7 gCsr_tMsg3C0SendToEvision7;

typedef struct
{
    TUint16 u16gFrontSpeedRailWayAxle;                      //!< [[-]] Front Speed Railway Axle in Km/h (A24) 
    TUint16 u16gBackSpeedRailWayAxle;                       //!< [[-]] Back Speed Railway Axle in Km/h 
    TUint16 u16gAvdvancePeriod;                             //!< [[-]] new signal 
    TUint16 u16gPressureEfficiencyRate;                     //!< [[-]] new signal 
} TCanSigRecOldValMsg3C0SendToEvision7;

typedef struct
{
    TCanSigRecInf     tCsrInfo_u16gFrontSpeedRailWayAxle;
    TCanSigRecRng_u16 tCsrRng_u16gFrontSpeedRailWayAxle;
    TCanSigRecInf     tCsrInfo_u16gBackSpeedRailWayAxle;
    TCanSigRecRng_u16 tCsrRng_u16gBackSpeedRailWayAxle;
    TCanSigRecInf     tCsrInfo_u16gAvdvancePeriod;
    TCanSigRecRng_u16 tCsrRng_u16gAvdvancePeriod;
    TCanSigRecInf     tCsrInfo_u16gPressureEfficiencyRate;
    TCanSigRecRng_u16 tCsrRng_u16gPressureEfficiencyRate;
} TCanSigRecVal_Msg3C0SendToEvision7;

typedef struct
{
    const TCanSigRecRoot *cptRoot;                          //!< [POI] Root connection
    TUint16 u16gForwardPumpCurrent;                         //!< [[-]] Pressure transmission 1 
    TUint16 u16gBackwardPumpCurrent;                        //!< [[-]] Pressure transmission 2 
    TInt16 i16gTrans1PressureSensorValue;                   //!< [[-]] new signal 
    TInt16 i16gTrans2PressureSensorValue;                   //!< [[-]] new signal 
} TCanSigRecMsg4C0SendToEvision7;

extern TCanSigRecMsg4C0SendToEvision7 gCsr_tMsg4C0SendToEvision7;

typedef struct
{
    TUint16 u16gForwardPumpCurrent;                         //!< [[-]] Pressure transmission 1 
    TUint16 u16gBackwardPumpCurrent;                        //!< [[-]] Pressure transmission 2 
    TInt16 i16gTrans1PressureSensorValue;                   //!< [[-]] new signal 
    TInt16 i16gTrans2PressureSensorValue;                   //!< [[-]] new signal 
} TCanSigRecOldValMsg4C0SendToEvision7;

typedef struct
{
    TCanSigRecInf     tCsrInfo_u16gForwardPumpCurrent;
    TCanSigRecRng_u16 tCsrRng_u16gForwardPumpCurrent;
    TCanSigRecInf     tCsrInfo_u16gBackwardPumpCurrent;
    TCanSigRecRng_u16 tCsrRng_u16gBackwardPumpCurrent;
    TCanSigRecInf     tCsrInfo_i16gTrans1PressureSensorValue;
    TCanSigRecRng_i16 tCsrRng_i16gTrans1PressureSensorValue;
    TCanSigRecInf     tCsrInfo_i16gTrans2PressureSensorValue;
    TCanSigRecRng_i16 tCsrRng_i16gTrans2PressureSensorValue;
} TCanSigRecVal_Msg4C0SendToEvision7;

typedef struct
{
    const TCanSigRecRoot *cptRoot;                          //!< [POI] Root connection
    TBoolean boAbutementNacelleTrackSide;                   //!< [[-]] for the Neotec diag pages 
    TBoolean boAbutementNacelleCenteredSide;                //!< [[-]] for the Neotec diag pages 
    TBoolean boBasketTurretLimitation;                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin217Fault;                                 //!< [[-]] for the Neotec diag pages 
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
} TCanSigRecMsg5C0SendToEvision7;

extern TCanSigRecMsg5C0SendToEvision7 gCsr_tMsg5C0SendToEvision7;

typedef struct
{
    TBoolean boAbutementNacelleTrackSide;                   //!< [[-]] for the Neotec diag pages 
    TBoolean boAbutementNacelleCenteredSide;                //!< [[-]] for the Neotec diag pages 
    TBoolean boBasketTurretLimitation;                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin217Fault;                                 //!< [[-]] for the Neotec diag pages 
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
} TCanSigRecOldValMsg5C0SendToEvision7;

typedef struct
{
    TCanSigRecInf     tCsrInfo_boAbutementNacelleTrackSide;
    TCanSigRecRng_bo  tCsrRng_boAbutementNacelleTrackSide;
    TCanSigRecInf     tCsrInfo_boAbutementNacelleCenteredSide;
    TCanSigRecRng_bo  tCsrRng_boAbutementNacelleCenteredSide;
    TCanSigRecInf     tCsrInfo_boBasketTurretLimitation;
    TCanSigRecRng_bo  tCsrRng_boBasketTurretLimitation;
    TCanSigRecInf     tCsrInfo_boPin217Fault;
    TCanSigRecRng_bo  tCsrRng_boPin217Fault;
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
} TCanSigRecVal_Msg5C0SendToEvision7;

typedef struct
{
    const TCanSigRecRoot *cptRoot;                          //!< [POI] Root connection
    TBoolean boPin181Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin160Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin184Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin187Fault;                                 //!< [[-]] for the Neotec diag pages 
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
} TCanSigRecMsg6C0SendToEvision7;

extern TCanSigRecMsg6C0SendToEvision7 gCsr_tMsg6C0SendToEvision7;

typedef struct
{
    TBoolean boPin181Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin160Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin184Fault;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin187Fault;                                 //!< [[-]] for the Neotec diag pages 
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
} TCanSigRecOldValMsg6C0SendToEvision7;

typedef struct
{
    TCanSigRecInf     tCsrInfo_boPin181Fault;
    TCanSigRecRng_bo  tCsrRng_boPin181Fault;
    TCanSigRecInf     tCsrInfo_boPin160Fault;
    TCanSigRecRng_bo  tCsrRng_boPin160Fault;
    TCanSigRecInf     tCsrInfo_boPin184Fault;
    TCanSigRecRng_bo  tCsrRng_boPin184Fault;
    TCanSigRecInf     tCsrInfo_boPin187Fault;
    TCanSigRecRng_bo  tCsrRng_boPin187Fault;
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
} TCanSigRecVal_Msg6C0SendToEvision7;

typedef struct
{
    const TCanSigRecRoot *cptRoot;                          //!< [POI] Root connection
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
    TBoolean boPin122;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin146;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin123;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin187;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin124;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin148;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin153;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin177;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin156;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin159;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin186;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin162;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin189;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin165;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin195;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin171;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin154;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin160;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin184;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin163;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin190;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin166;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin193;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin169;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin196;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin172;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin149;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin173;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin152;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin176;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin155;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin179;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin158;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin182;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin252;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin239;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin188;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin164;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin191;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin167;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin194;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin170;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin192;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin168;                                      //!< [[-]] for the Neotec diag pages 
} TCanSigRecMsg7C0SendToEvision7;

extern TCanSigRecMsg7C0SendToEvision7 gCsr_tMsg7C0SendToEvision7;

typedef struct
{
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
    TBoolean boPin122;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin146;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin123;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin187;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin124;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin148;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin153;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin177;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin156;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin159;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin186;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin162;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin189;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin165;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin195;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin171;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin154;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin160;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin184;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin163;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin190;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin166;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin193;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin169;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin196;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin172;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin149;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin173;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin152;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin176;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin155;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin179;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin158;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin182;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin252;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin239;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin188;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin164;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin191;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin167;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin194;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin170;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin192;                                      //!< [[-]] for the Neotec diag pages 
    TBoolean boPin168;                                      //!< [[-]] for the Neotec diag pages 
} TCanSigRecOldValMsg7C0SendToEvision7;

typedef struct
{
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
    TCanSigRecInf     tCsrInfo_boPin122;
    TCanSigRecRng_bo  tCsrRng_boPin122;
    TCanSigRecInf     tCsrInfo_boPin146;
    TCanSigRecRng_bo  tCsrRng_boPin146;
    TCanSigRecInf     tCsrInfo_boPin123;
    TCanSigRecRng_bo  tCsrRng_boPin123;
    TCanSigRecInf     tCsrInfo_boPin187;
    TCanSigRecRng_bo  tCsrRng_boPin187;
    TCanSigRecInf     tCsrInfo_boPin124;
    TCanSigRecRng_bo  tCsrRng_boPin124;
    TCanSigRecInf     tCsrInfo_boPin148;
    TCanSigRecRng_bo  tCsrRng_boPin148;
    TCanSigRecInf     tCsrInfo_boPin153;
    TCanSigRecRng_bo  tCsrRng_boPin153;
    TCanSigRecInf     tCsrInfo_boPin177;
    TCanSigRecRng_bo  tCsrRng_boPin177;
    TCanSigRecInf     tCsrInfo_boPin156;
    TCanSigRecRng_bo  tCsrRng_boPin156;
    TCanSigRecInf     tCsrInfo_boPin159;
    TCanSigRecRng_bo  tCsrRng_boPin159;
    TCanSigRecInf     tCsrInfo_boPin186;
    TCanSigRecRng_bo  tCsrRng_boPin186;
    TCanSigRecInf     tCsrInfo_boPin162;
    TCanSigRecRng_bo  tCsrRng_boPin162;
    TCanSigRecInf     tCsrInfo_boPin189;
    TCanSigRecRng_bo  tCsrRng_boPin189;
    TCanSigRecInf     tCsrInfo_boPin165;
    TCanSigRecRng_bo  tCsrRng_boPin165;
    TCanSigRecInf     tCsrInfo_boPin195;
    TCanSigRecRng_bo  tCsrRng_boPin195;
    TCanSigRecInf     tCsrInfo_boPin171;
    TCanSigRecRng_bo  tCsrRng_boPin171;
    TCanSigRecInf     tCsrInfo_boPin154;
    TCanSigRecRng_bo  tCsrRng_boPin154;
    TCanSigRecInf     tCsrInfo_boPin160;
    TCanSigRecRng_bo  tCsrRng_boPin160;
    TCanSigRecInf     tCsrInfo_boPin184;
    TCanSigRecRng_bo  tCsrRng_boPin184;
    TCanSigRecInf     tCsrInfo_boPin163;
    TCanSigRecRng_bo  tCsrRng_boPin163;
    TCanSigRecInf     tCsrInfo_boPin190;
    TCanSigRecRng_bo  tCsrRng_boPin190;
    TCanSigRecInf     tCsrInfo_boPin166;
    TCanSigRecRng_bo  tCsrRng_boPin166;
    TCanSigRecInf     tCsrInfo_boPin193;
    TCanSigRecRng_bo  tCsrRng_boPin193;
    TCanSigRecInf     tCsrInfo_boPin169;
    TCanSigRecRng_bo  tCsrRng_boPin169;
    TCanSigRecInf     tCsrInfo_boPin196;
    TCanSigRecRng_bo  tCsrRng_boPin196;
    TCanSigRecInf     tCsrInfo_boPin172;
    TCanSigRecRng_bo  tCsrRng_boPin172;
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
    TCanSigRecInf     tCsrInfo_boPin252;
    TCanSigRecRng_bo  tCsrRng_boPin252;
    TCanSigRecInf     tCsrInfo_boPin239;
    TCanSigRecRng_bo  tCsrRng_boPin239;
    TCanSigRecInf     tCsrInfo_boPin188;
    TCanSigRecRng_bo  tCsrRng_boPin188;
    TCanSigRecInf     tCsrInfo_boPin164;
    TCanSigRecRng_bo  tCsrRng_boPin164;
    TCanSigRecInf     tCsrInfo_boPin191;
    TCanSigRecRng_bo  tCsrRng_boPin191;
    TCanSigRecInf     tCsrInfo_boPin167;
    TCanSigRecRng_bo  tCsrRng_boPin167;
    TCanSigRecInf     tCsrInfo_boPin194;
    TCanSigRecRng_bo  tCsrRng_boPin194;
    TCanSigRecInf     tCsrInfo_boPin170;
    TCanSigRecRng_bo  tCsrRng_boPin170;
    TCanSigRecInf     tCsrInfo_boPin192;
    TCanSigRecRng_bo  tCsrRng_boPin192;
    TCanSigRecInf     tCsrInfo_boPin168;
    TCanSigRecRng_bo  tCsrRng_boPin168;
} TCanSigRecVal_Msg7C0SendToEvision7;

typedef struct
{
    const TCanSigRecRoot *cptRoot;                          //!< [POI] Root connection
    TBoolean boPin136_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin148_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin135_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin147_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin269_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin118_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin106_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin117_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin105_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin116_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin104_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin115_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin103_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin120_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin108_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin119_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin107_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin144_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin132_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin143_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin131_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin142_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin130_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin141_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin129_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin152_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin140_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin151_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin139_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin150_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin138_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin149_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin137_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin126_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin114_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin125_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin113_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin124_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin112_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin123_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin111_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin133_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin134_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin145_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin146_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin263_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin256_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin262_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin255_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin261_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin254_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin260_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin253_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin270_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin276_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin277_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin275_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin268_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin274_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin267_48XSFault;                            //!< [[-]] for the Neotec diag pages 
} TCanSigRecMsg8C0SendToEvision7;

extern TCanSigRecMsg8C0SendToEvision7 gCsr_tMsg8C0SendToEvision7;

typedef struct
{
    TBoolean boPin136_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin148_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin135_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin147_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin269_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin118_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin106_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin117_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin105_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin116_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin104_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin115_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin103_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin120_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin108_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin119_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin107_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin144_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin132_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin143_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin131_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin142_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin130_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin141_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin129_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin152_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin140_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin151_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin139_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin150_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin138_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin149_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin137_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin126_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin114_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin125_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin113_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin124_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin112_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin123_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin111_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin133_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin134_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin145_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin146_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin263_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin256_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin262_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin255_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin261_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin254_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin260_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin253_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin270_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin276_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin277_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin275_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin268_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin274_48XSFault;                            //!< [[-]] for the Neotec diag pages 
    TBoolean boPin267_48XSFault;                            //!< [[-]] for the Neotec diag pages 
} TCanSigRecOldValMsg8C0SendToEvision7;

typedef struct
{
    TCanSigRecInf     tCsrInfo_boPin136_48XSFault;
    TCanSigRecRng_bo  tCsrRng_boPin136_48XSFault;
    TCanSigRecInf     tCsrInfo_boPin148_48XSFault;
    TCanSigRecRng_bo  tCsrRng_boPin148_48XSFault;
    TCanSigRecInf     tCsrInfo_boPin135_48XSFault;
    TCanSigRecRng_bo  tCsrRng_boPin135_48XSFault;
    TCanSigRecInf     tCsrInfo_boPin147_48XSFault;
    TCanSigRecRng_bo  tCsrRng_boPin147_48XSFault;
    TCanSigRecInf     tCsrInfo_boPin269_48XSFault;
    TCanSigRecRng_bo  tCsrRng_boPin269_48XSFault;
    TCanSigRecInf     tCsrInfo_boPin118_48XSFault;
    TCanSigRecRng_bo  tCsrRng_boPin118_48XSFault;
    TCanSigRecInf     tCsrInfo_boPin106_48XSFault;
    TCanSigRecRng_bo  tCsrRng_boPin106_48XSFault;
    TCanSigRecInf     tCsrInfo_boPin117_48XSFault;
    TCanSigRecRng_bo  tCsrRng_boPin117_48XSFault;
    TCanSigRecInf     tCsrInfo_boPin105_48XSFault;
    TCanSigRecRng_bo  tCsrRng_boPin105_48XSFault;
    TCanSigRecInf     tCsrInfo_boPin116_48XSFault;
    TCanSigRecRng_bo  tCsrRng_boPin116_48XSFault;
    TCanSigRecInf     tCsrInfo_boPin104_48XSFault;
    TCanSigRecRng_bo  tCsrRng_boPin104_48XSFault;
    TCanSigRecInf     tCsrInfo_boPin115_48XSFault;
    TCanSigRecRng_bo  tCsrRng_boPin115_48XSFault;
    TCanSigRecInf     tCsrInfo_boPin103_48XSFault;
    TCanSigRecRng_bo  tCsrRng_boPin103_48XSFault;
    TCanSigRecInf     tCsrInfo_boPin120_48XSFault;
    TCanSigRecRng_bo  tCsrRng_boPin120_48XSFault;
    TCanSigRecInf     tCsrInfo_boPin108_48XSFault;
    TCanSigRecRng_bo  tCsrRng_boPin108_48XSFault;
    TCanSigRecInf     tCsrInfo_boPin119_48XSFault;
    TCanSigRecRng_bo  tCsrRng_boPin119_48XSFault;
    TCanSigRecInf     tCsrInfo_boPin107_48XSFault;
    TCanSigRecRng_bo  tCsrRng_boPin107_48XSFault;
    TCanSigRecInf     tCsrInfo_boPin144_48XSFault;
    TCanSigRecRng_bo  tCsrRng_boPin144_48XSFault;
    TCanSigRecInf     tCsrInfo_boPin132_48XSFault;
    TCanSigRecRng_bo  tCsrRng_boPin132_48XSFault;
    TCanSigRecInf     tCsrInfo_boPin143_48XSFault;
    TCanSigRecRng_bo  tCsrRng_boPin143_48XSFault;
    TCanSigRecInf     tCsrInfo_boPin131_48XSFault;
    TCanSigRecRng_bo  tCsrRng_boPin131_48XSFault;
    TCanSigRecInf     tCsrInfo_boPin142_48XSFault;
    TCanSigRecRng_bo  tCsrRng_boPin142_48XSFault;
    TCanSigRecInf     tCsrInfo_boPin130_48XSFault;
    TCanSigRecRng_bo  tCsrRng_boPin130_48XSFault;
    TCanSigRecInf     tCsrInfo_boPin141_48XSFault;
    TCanSigRecRng_bo  tCsrRng_boPin141_48XSFault;
    TCanSigRecInf     tCsrInfo_boPin129_48XSFault;
    TCanSigRecRng_bo  tCsrRng_boPin129_48XSFault;
    TCanSigRecInf     tCsrInfo_boPin152_48XSFault;
    TCanSigRecRng_bo  tCsrRng_boPin152_48XSFault;
    TCanSigRecInf     tCsrInfo_boPin140_48XSFault;
    TCanSigRecRng_bo  tCsrRng_boPin140_48XSFault;
    TCanSigRecInf     tCsrInfo_boPin151_48XSFault;
    TCanSigRecRng_bo  tCsrRng_boPin151_48XSFault;
    TCanSigRecInf     tCsrInfo_boPin139_48XSFault;
    TCanSigRecRng_bo  tCsrRng_boPin139_48XSFault;
    TCanSigRecInf     tCsrInfo_boPin150_48XSFault;
    TCanSigRecRng_bo  tCsrRng_boPin150_48XSFault;
    TCanSigRecInf     tCsrInfo_boPin138_48XSFault;
    TCanSigRecRng_bo  tCsrRng_boPin138_48XSFault;
    TCanSigRecInf     tCsrInfo_boPin149_48XSFault;
    TCanSigRecRng_bo  tCsrRng_boPin149_48XSFault;
    TCanSigRecInf     tCsrInfo_boPin137_48XSFault;
    TCanSigRecRng_bo  tCsrRng_boPin137_48XSFault;
    TCanSigRecInf     tCsrInfo_boPin126_48XSFault;
    TCanSigRecRng_bo  tCsrRng_boPin126_48XSFault;
    TCanSigRecInf     tCsrInfo_boPin114_48XSFault;
    TCanSigRecRng_bo  tCsrRng_boPin114_48XSFault;
    TCanSigRecInf     tCsrInfo_boPin125_48XSFault;
    TCanSigRecRng_bo  tCsrRng_boPin125_48XSFault;
    TCanSigRecInf     tCsrInfo_boPin113_48XSFault;
    TCanSigRecRng_bo  tCsrRng_boPin113_48XSFault;
    TCanSigRecInf     tCsrInfo_boPin124_48XSFault;
    TCanSigRecRng_bo  tCsrRng_boPin124_48XSFault;
    TCanSigRecInf     tCsrInfo_boPin112_48XSFault;
    TCanSigRecRng_bo  tCsrRng_boPin112_48XSFault;
    TCanSigRecInf     tCsrInfo_boPin123_48XSFault;
    TCanSigRecRng_bo  tCsrRng_boPin123_48XSFault;
    TCanSigRecInf     tCsrInfo_boPin111_48XSFault;
    TCanSigRecRng_bo  tCsrRng_boPin111_48XSFault;
    TCanSigRecInf     tCsrInfo_boPin133_48XSFault;
    TCanSigRecRng_bo  tCsrRng_boPin133_48XSFault;
    TCanSigRecInf     tCsrInfo_boPin134_48XSFault;
    TCanSigRecRng_bo  tCsrRng_boPin134_48XSFault;
    TCanSigRecInf     tCsrInfo_boPin145_48XSFault;
    TCanSigRecRng_bo  tCsrRng_boPin145_48XSFault;
    TCanSigRecInf     tCsrInfo_boPin146_48XSFault;
    TCanSigRecRng_bo  tCsrRng_boPin146_48XSFault;
    TCanSigRecInf     tCsrInfo_boPin263_48XSFault;
    TCanSigRecRng_bo  tCsrRng_boPin263_48XSFault;
    TCanSigRecInf     tCsrInfo_boPin256_48XSFault;
    TCanSigRecRng_bo  tCsrRng_boPin256_48XSFault;
    TCanSigRecInf     tCsrInfo_boPin262_48XSFault;
    TCanSigRecRng_bo  tCsrRng_boPin262_48XSFault;
    TCanSigRecInf     tCsrInfo_boPin255_48XSFault;
    TCanSigRecRng_bo  tCsrRng_boPin255_48XSFault;
    TCanSigRecInf     tCsrInfo_boPin261_48XSFault;
    TCanSigRecRng_bo  tCsrRng_boPin261_48XSFault;
    TCanSigRecInf     tCsrInfo_boPin254_48XSFault;
    TCanSigRecRng_bo  tCsrRng_boPin254_48XSFault;
    TCanSigRecInf     tCsrInfo_boPin260_48XSFault;
    TCanSigRecRng_bo  tCsrRng_boPin260_48XSFault;
    TCanSigRecInf     tCsrInfo_boPin253_48XSFault;
    TCanSigRecRng_bo  tCsrRng_boPin253_48XSFault;
    TCanSigRecInf     tCsrInfo_boPin270_48XSFault;
    TCanSigRecRng_bo  tCsrRng_boPin270_48XSFault;
    TCanSigRecInf     tCsrInfo_boPin276_48XSFault;
    TCanSigRecRng_bo  tCsrRng_boPin276_48XSFault;
    TCanSigRecInf     tCsrInfo_boPin277_48XSFault;
    TCanSigRecRng_bo  tCsrRng_boPin277_48XSFault;
    TCanSigRecInf     tCsrInfo_boPin275_48XSFault;
    TCanSigRecRng_bo  tCsrRng_boPin275_48XSFault;
    TCanSigRecInf     tCsrInfo_boPin268_48XSFault;
    TCanSigRecRng_bo  tCsrRng_boPin268_48XSFault;
    TCanSigRecInf     tCsrInfo_boPin274_48XSFault;
    TCanSigRecRng_bo  tCsrRng_boPin274_48XSFault;
    TCanSigRecInf     tCsrInfo_boPin267_48XSFault;
    TCanSigRecRng_bo  tCsrRng_boPin267_48XSFault;
} TCanSigRecVal_Msg8C0SendToEvision7;

typedef struct
{
    const TCanSigRecRoot *cptRoot;                          //!< [POI] Root connection
    TBoolean boPin144_48XS;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin132_48XS;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin143_48XS;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin131_48XS;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin142_48XS;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin130_48XS;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin141_48XS;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin129_48XS;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin152_48XS;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin140_48XS;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin151_48XS;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin139_48XS;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin150_48XS;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin138_48XS;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin149_48XS;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin263_48XS;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin256_48XS;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin262_48XS;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin255_48XS;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin261_48XS;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin254_48XS;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin260_48XS;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin253_48XS;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin275_48XS;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin268_48XS;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin274_48XS;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin267_48XS;                                 //!< [[-]] for the Neotec diag pages 
    TInt16 i16gPressureBrakeSensorValue;                    //!< [[-]] for the Neotec diag pages 
    TUint8 u8gLightsMode;                                   //!< [[-]] for the Neotec diag pages 
    TBoolean bogOsciServiceBrakinBrakeOn;                   //!< [[-]] Activation rodage frein essieu oscillant 
    TBoolean bogFixeServiceBrakinBrakeOn;                   //!< [[-]] Activation rodage frein essieu fixe 
    TBoolean bogBothServiceBrakinBrakeOn;                   //!< [[-]] Activation rodage deux freins 
    TBoolean bogActiveWhiteLights15746;                     //!< [[-]] new signal 
} TCanSigRecMsg9C0SendToEvision7;

extern TCanSigRecMsg9C0SendToEvision7 gCsr_tMsg9C0SendToEvision7;

typedef struct
{
    TBoolean boPin144_48XS;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin132_48XS;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin143_48XS;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin131_48XS;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin142_48XS;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin130_48XS;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin141_48XS;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin129_48XS;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin152_48XS;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin140_48XS;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin151_48XS;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin139_48XS;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin150_48XS;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin138_48XS;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin149_48XS;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin263_48XS;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin256_48XS;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin262_48XS;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin255_48XS;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin261_48XS;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin254_48XS;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin260_48XS;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin253_48XS;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin275_48XS;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin268_48XS;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin274_48XS;                                 //!< [[-]] for the Neotec diag pages 
    TBoolean boPin267_48XS;                                 //!< [[-]] for the Neotec diag pages 
    TInt16 i16gPressureBrakeSensorValue;                    //!< [[-]] for the Neotec diag pages 
    TUint8 u8gLightsMode;                                   //!< [[-]] for the Neotec diag pages 
    TBoolean bogOsciServiceBrakinBrakeOn;                   //!< [[-]] Activation rodage frein essieu oscillant 
    TBoolean bogFixeServiceBrakinBrakeOn;                   //!< [[-]] Activation rodage frein essieu fixe 
    TBoolean bogBothServiceBrakinBrakeOn;                   //!< [[-]] Activation rodage deux freins 
    TBoolean bogActiveWhiteLights15746;                     //!< [[-]] new signal 
} TCanSigRecOldValMsg9C0SendToEvision7;

typedef struct
{
    TCanSigRecInf     tCsrInfo_boPin144_48XS;
    TCanSigRecRng_bo  tCsrRng_boPin144_48XS;
    TCanSigRecInf     tCsrInfo_boPin132_48XS;
    TCanSigRecRng_bo  tCsrRng_boPin132_48XS;
    TCanSigRecInf     tCsrInfo_boPin143_48XS;
    TCanSigRecRng_bo  tCsrRng_boPin143_48XS;
    TCanSigRecInf     tCsrInfo_boPin131_48XS;
    TCanSigRecRng_bo  tCsrRng_boPin131_48XS;
    TCanSigRecInf     tCsrInfo_boPin142_48XS;
    TCanSigRecRng_bo  tCsrRng_boPin142_48XS;
    TCanSigRecInf     tCsrInfo_boPin130_48XS;
    TCanSigRecRng_bo  tCsrRng_boPin130_48XS;
    TCanSigRecInf     tCsrInfo_boPin141_48XS;
    TCanSigRecRng_bo  tCsrRng_boPin141_48XS;
    TCanSigRecInf     tCsrInfo_boPin129_48XS;
    TCanSigRecRng_bo  tCsrRng_boPin129_48XS;
    TCanSigRecInf     tCsrInfo_boPin152_48XS;
    TCanSigRecRng_bo  tCsrRng_boPin152_48XS;
    TCanSigRecInf     tCsrInfo_boPin140_48XS;
    TCanSigRecRng_bo  tCsrRng_boPin140_48XS;
    TCanSigRecInf     tCsrInfo_boPin151_48XS;
    TCanSigRecRng_bo  tCsrRng_boPin151_48XS;
    TCanSigRecInf     tCsrInfo_boPin139_48XS;
    TCanSigRecRng_bo  tCsrRng_boPin139_48XS;
    TCanSigRecInf     tCsrInfo_boPin150_48XS;
    TCanSigRecRng_bo  tCsrRng_boPin150_48XS;
    TCanSigRecInf     tCsrInfo_boPin138_48XS;
    TCanSigRecRng_bo  tCsrRng_boPin138_48XS;
    TCanSigRecInf     tCsrInfo_boPin149_48XS;
    TCanSigRecRng_bo  tCsrRng_boPin149_48XS;
    TCanSigRecInf     tCsrInfo_boPin263_48XS;
    TCanSigRecRng_bo  tCsrRng_boPin263_48XS;
    TCanSigRecInf     tCsrInfo_boPin256_48XS;
    TCanSigRecRng_bo  tCsrRng_boPin256_48XS;
    TCanSigRecInf     tCsrInfo_boPin262_48XS;
    TCanSigRecRng_bo  tCsrRng_boPin262_48XS;
    TCanSigRecInf     tCsrInfo_boPin255_48XS;
    TCanSigRecRng_bo  tCsrRng_boPin255_48XS;
    TCanSigRecInf     tCsrInfo_boPin261_48XS;
    TCanSigRecRng_bo  tCsrRng_boPin261_48XS;
    TCanSigRecInf     tCsrInfo_boPin254_48XS;
    TCanSigRecRng_bo  tCsrRng_boPin254_48XS;
    TCanSigRecInf     tCsrInfo_boPin260_48XS;
    TCanSigRecRng_bo  tCsrRng_boPin260_48XS;
    TCanSigRecInf     tCsrInfo_boPin253_48XS;
    TCanSigRecRng_bo  tCsrRng_boPin253_48XS;
    TCanSigRecInf     tCsrInfo_boPin275_48XS;
    TCanSigRecRng_bo  tCsrRng_boPin275_48XS;
    TCanSigRecInf     tCsrInfo_boPin268_48XS;
    TCanSigRecRng_bo  tCsrRng_boPin268_48XS;
    TCanSigRecInf     tCsrInfo_boPin274_48XS;
    TCanSigRecRng_bo  tCsrRng_boPin274_48XS;
    TCanSigRecInf     tCsrInfo_boPin267_48XS;
    TCanSigRecRng_bo  tCsrRng_boPin267_48XS;
    TCanSigRecInf     tCsrInfo_i16gPressureBrakeSensorValue;
    TCanSigRecRng_i16 tCsrRng_i16gPressureBrakeSensorValue;
    TCanSigRecInf     tCsrInfo_u8gLightsMode;
    TCanSigRecRng_u8  tCsrRng_u8gLightsMode;
    TCanSigRecInf     tCsrInfo_bogOsciServiceBrakinBrakeOn;
    TCanSigRecRng_bo  tCsrRng_bogOsciServiceBrakinBrakeOn;
    TCanSigRecInf     tCsrInfo_bogFixeServiceBrakinBrakeOn;
    TCanSigRecRng_bo  tCsrRng_bogFixeServiceBrakinBrakeOn;
    TCanSigRecInf     tCsrInfo_bogBothServiceBrakinBrakeOn;
    TCanSigRecRng_bo  tCsrRng_bogBothServiceBrakinBrakeOn;
    TCanSigRecInf     tCsrInfo_bogActiveWhiteLights15746;
    TCanSigRecRng_bo  tCsrRng_bogActiveWhiteLights15746;
} TCanSigRecVal_Msg9C0SendToEvision7;

typedef struct
{
    const TCanSigRecRoot *cptRoot;                          //!< [POI] Root connection
    TInt16 i16gPressureBlockOscillation;                    //!< [[-]] Oscillation block pressure 
    TUint8 u8gTTC580Version_Major;                          //!< [[-]] Program Version Major C0 TTC580 
    TUint8 u8gTTC580Version_Minor;                          //!< [[-]] Program Version Minor C0 TTC580 
    TUint8 u8gTTC580Version_Patch;                          //!< [[-]] Program Version Path C0 TTC580 
    TUint8 u8gTTC580Version_Custom;                         //!< [[-]] Program Version Custom C0 TTC580 
    TInt16 i16gJoystAdvanceScaling;                         //!< [[-]] Joystick Advance Scaling Value 
} TCanSigRecMsg10C0SendToEvision7;

extern TCanSigRecMsg10C0SendToEvision7 gCsr_tMsg10C0SendToEvision7;

typedef struct
{
    TInt16 i16gPressureBlockOscillation;                    //!< [[-]] Oscillation block pressure 
    TUint8 u8gTTC580Version_Major;                          //!< [[-]] Program Version Major C0 TTC580 
    TUint8 u8gTTC580Version_Minor;                          //!< [[-]] Program Version Minor C0 TTC580 
    TUint8 u8gTTC580Version_Patch;                          //!< [[-]] Program Version Path C0 TTC580 
    TUint8 u8gTTC580Version_Custom;                         //!< [[-]] Program Version Custom C0 TTC580 
    TInt16 i16gJoystAdvanceScaling;                         //!< [[-]] Joystick Advance Scaling Value 
} TCanSigRecOldValMsg10C0SendToEvision7;

typedef struct
{
    TCanSigRecInf     tCsrInfo_i16gPressureBlockOscillation;
    TCanSigRecRng_i16 tCsrRng_i16gPressureBlockOscillation;
    TCanSigRecInf     tCsrInfo_u8gTTC580Version_Major;
    TCanSigRecRng_u8  tCsrRng_u8gTTC580Version_Major;
    TCanSigRecInf     tCsrInfo_u8gTTC580Version_Minor;
    TCanSigRecRng_u8  tCsrRng_u8gTTC580Version_Minor;
    TCanSigRecInf     tCsrInfo_u8gTTC580Version_Patch;
    TCanSigRecRng_u8  tCsrRng_u8gTTC580Version_Patch;
    TCanSigRecInf     tCsrInfo_u8gTTC580Version_Custom;
    TCanSigRecRng_u8  tCsrRng_u8gTTC580Version_Custom;
    TCanSigRecInf     tCsrInfo_i16gJoystAdvanceScaling;
    TCanSigRecRng_i16 tCsrRng_i16gJoystAdvanceScaling;
} TCanSigRecVal_Msg10C0SendToEvision7;

typedef struct
{
    const TCanSigRecRoot *cptRoot;                          //!< [POI] Root connection
    TInt16 i16gSlopeLongAngle;                              //!< [[-]] Slope Longitudinal Angle 
    TInt16 i16gSlopeTransAngle;                             //!< [[-]] Slope Transversal Angle 
    TInt16 i16gSlopeResultAngle;                            //!< [[-]] Slope Result Angle 
    TInt16 i16gTemperatureTransmissionValue;                //!< [[-]] Temp. Transmission value 
} TCanSigRecMsg11C0SendToEvision7;

extern TCanSigRecMsg11C0SendToEvision7 gCsr_tMsg11C0SendToEvision7;

typedef struct
{
    TInt16 i16gSlopeLongAngle;                              //!< [[-]] Slope Longitudinal Angle 
    TInt16 i16gSlopeTransAngle;                             //!< [[-]] Slope Transversal Angle 
    TInt16 i16gSlopeResultAngle;                            //!< [[-]] Slope Result Angle 
    TInt16 i16gTemperatureTransmissionValue;                //!< [[-]] Temp. Transmission value 
} TCanSigRecOldValMsg11C0SendToEvision7;

typedef struct
{
    TCanSigRecInf     tCsrInfo_i16gSlopeLongAngle;
    TCanSigRecRng_i16 tCsrRng_i16gSlopeLongAngle;
    TCanSigRecInf     tCsrInfo_i16gSlopeTransAngle;
    TCanSigRecRng_i16 tCsrRng_i16gSlopeTransAngle;
    TCanSigRecInf     tCsrInfo_i16gSlopeResultAngle;
    TCanSigRecRng_i16 tCsrRng_i16gSlopeResultAngle;
    TCanSigRecInf     tCsrInfo_i16gTemperatureTransmissionValue;
    TCanSigRecRng_i16 tCsrRng_i16gTemperatureTransmissionValue;
} TCanSigRecVal_Msg11C0SendToEvision7;

typedef struct
{
    const TCanSigRecRoot *cptRoot;                          //!< [POI] Root connection
    TInt32 i32gDistanceTraveledMeasureMast;                 //!< [[-]] new signal 
    TUint32 u32gTotalDistance;                              //!< [[-]] new signal 
} TCanSigRecMsg12C0SendToEvision7;

extern TCanSigRecMsg12C0SendToEvision7 gCsr_tMsg12C0SendToEvision7;

typedef struct
{
    TInt32 i32gDistanceTraveledMeasureMast;                 //!< [[-]] new signal 
    TUint32 u32gTotalDistance;                              //!< [[-]] new signal 
} TCanSigRecOldValMsg12C0SendToEvision7;

typedef struct
{
    TCanSigRecInf     tCsrInfo_i32gDistanceTraveledMeasureMast;
    TCanSigRecRng_i32 tCsrRng_i32gDistanceTraveledMeasureMast;
    TCanSigRecInf     tCsrInfo_u32gTotalDistance;
    TCanSigRecRng_u32 tCsrRng_u32gTotalDistance;
} TCanSigRecVal_Msg12C0SendToEvision7;

typedef struct
{
    const TCanSigRecRoot *cptRoot;                          //!< [POI] Root connection
    TUint8 u8gReductionPumpRail;                            //!< [[-]] new signal 
    TUint8 u8gPourcentCycleBrake;                           //!< [[-]] new signal 
    TUint8 u8gPourcentCycle2ndParkBrake;                    //!< [[-]] Envoie du pourcentage du nombre de cycle de freins 
    TBoolean bogSecondParkBrakeActive;                      //!< [[-]] Option active 
    TBoolean boStatFront2eParkTrainBrakeTest;               //!< [[-]] Validation du test frein sur le 2nd frein de oscillant 
    TBoolean boStatBack2eParkTrainBrakeTest;                //!< [[-]] Validation du test frein sur le 2nd frein du fixe 
    TBoolean boAutorizeRazController;                       //!< [[-]] new signal 
    TBoolean boVoltageDcConverterFault;                     //!< [[-]] new signal 
    TBoolean boBatteryLowLevel;                             //!< [[-]] new signal 
    TBoolean boBattErrorCode1;                              //!< [[-]] new signal 
    TBoolean boActiveFaultRazDmc;                           //!< [[-]] new signal 
    TInt16 i16Motor_Rpm;                                    //!< [[-]] new signal 
    TInt8 i8Controller_Temp;                                //!< [[-]] new signal 
    TInt8 i8Motor_Temp;                                     //!< [[-]] new signal 
} TCanSigRecMsg13C0SendToEvision7;

extern TCanSigRecMsg13C0SendToEvision7 gCsr_tMsg13C0SendToEvision7;

typedef struct
{
    TUint8 u8gReductionPumpRail;                            //!< [[-]] new signal 
    TUint8 u8gPourcentCycleBrake;                           //!< [[-]] new signal 
    TUint8 u8gPourcentCycle2ndParkBrake;                    //!< [[-]] Envoie du pourcentage du nombre de cycle de freins 
    TBoolean bogSecondParkBrakeActive;                      //!< [[-]] Option active 
    TBoolean boStatFront2eParkTrainBrakeTest;               //!< [[-]] Validation du test frein sur le 2nd frein de oscillant 
    TBoolean boStatBack2eParkTrainBrakeTest;                //!< [[-]] Validation du test frein sur le 2nd frein du fixe 
    TBoolean boAutorizeRazController;                       //!< [[-]] new signal 
    TBoolean boVoltageDcConverterFault;                     //!< [[-]] new signal 
    TBoolean boBatteryLowLevel;                             //!< [[-]] new signal 
    TBoolean boBattErrorCode1;                              //!< [[-]] new signal 
    TBoolean boActiveFaultRazDmc;                           //!< [[-]] new signal 
    TInt16 i16Motor_Rpm;                                    //!< [[-]] new signal 
    TInt8 i8Controller_Temp;                                //!< [[-]] new signal 
    TInt8 i8Motor_Temp;                                     //!< [[-]] new signal 
} TCanSigRecOldValMsg13C0SendToEvision7;

typedef struct
{
    TCanSigRecInf     tCsrInfo_u8gReductionPumpRail;
    TCanSigRecRng_u8  tCsrRng_u8gReductionPumpRail;
    TCanSigRecInf     tCsrInfo_u8gPourcentCycleBrake;
    TCanSigRecRng_u8  tCsrRng_u8gPourcentCycleBrake;
    TCanSigRecInf     tCsrInfo_u8gPourcentCycle2ndParkBrake;
    TCanSigRecRng_u8  tCsrRng_u8gPourcentCycle2ndParkBrake;
    TCanSigRecInf     tCsrInfo_bogSecondParkBrakeActive;
    TCanSigRecRng_bo  tCsrRng_bogSecondParkBrakeActive;
    TCanSigRecInf     tCsrInfo_boStatFront2eParkTrainBrakeTest;
    TCanSigRecRng_bo  tCsrRng_boStatFront2eParkTrainBrakeTest;
    TCanSigRecInf     tCsrInfo_boStatBack2eParkTrainBrakeTest;
    TCanSigRecRng_bo  tCsrRng_boStatBack2eParkTrainBrakeTest;
    TCanSigRecInf     tCsrInfo_boAutorizeRazController;
    TCanSigRecRng_bo  tCsrRng_boAutorizeRazController;
    TCanSigRecInf     tCsrInfo_boVoltageDcConverterFault;
    TCanSigRecRng_bo  tCsrRng_boVoltageDcConverterFault;
    TCanSigRecInf     tCsrInfo_boBatteryLowLevel;
    TCanSigRecRng_bo  tCsrRng_boBatteryLowLevel;
    TCanSigRecInf     tCsrInfo_boBattErrorCode1;
    TCanSigRecRng_bo  tCsrRng_boBattErrorCode1;
    TCanSigRecInf     tCsrInfo_boActiveFaultRazDmc;
    TCanSigRecRng_bo  tCsrRng_boActiveFaultRazDmc;
    TCanSigRecInf     tCsrInfo_i16Motor_Rpm;
    TCanSigRecRng_i16 tCsrRng_i16Motor_Rpm;
    TCanSigRecInf     tCsrInfo_i8Controller_Temp;
    TCanSigRecRng_i8  tCsrRng_i8Controller_Temp;
    TCanSigRecInf     tCsrInfo_i8Motor_Temp;
    TCanSigRecRng_i8  tCsrRng_i8Motor_Temp;
} TCanSigRecVal_Msg13C0SendToEvision7;

typedef struct
{
    const TCanSigRecRoot *cptRoot;                          //!< [POI] Root connection
    TInt16 i16Ibatt_ist;                                    //!< [[-]] new signal 
    TUint16 u16Vbatt_ist;                                   //!< [[-]] new signal 
    TUint8 u8Batt_Soc;                                      //!< [[-]] new signal 
    TBoolean boAddParkBrakeActive;                          //!< [[-]] new signal 
    TBoolean boPreventLimitSpeedExceeding;                  //!< [[-]] new signal 
} TCanSigRecMsg14C0SendToEvision7;

extern TCanSigRecMsg14C0SendToEvision7 gCsr_tMsg14C0SendToEvision7;

typedef struct
{
    TInt16 i16Ibatt_ist;                                    //!< [[-]] new signal 
    TUint16 u16Vbatt_ist;                                   //!< [[-]] new signal 
    TUint8 u8Batt_Soc;                                      //!< [[-]] new signal 
    TBoolean boAddParkBrakeActive;                          //!< [[-]] new signal 
    TBoolean boPreventLimitSpeedExceeding;                  //!< [[-]] new signal 
} TCanSigRecOldValMsg14C0SendToEvision7;

typedef struct
{
    TCanSigRecInf     tCsrInfo_i16Ibatt_ist;
    TCanSigRecRng_i16 tCsrRng_i16Ibatt_ist;
    TCanSigRecInf     tCsrInfo_u16Vbatt_ist;
    TCanSigRecRng_u16 tCsrRng_u16Vbatt_ist;
    TCanSigRecInf     tCsrInfo_u8Batt_Soc;
    TCanSigRecRng_u8  tCsrRng_u8Batt_Soc;
    TCanSigRecInf     tCsrInfo_boAddParkBrakeActive;
    TCanSigRecRng_bo  tCsrRng_boAddParkBrakeActive;
    TCanSigRecInf     tCsrInfo_boPreventLimitSpeedExceeding;
    TCanSigRecRng_bo  tCsrRng_boPreventLimitSpeedExceeding;
} TCanSigRecVal_Msg14C0SendToEvision7;

typedef struct
{
    const TCanSigRecRoot *cptRoot;                          //!< [POI] Root connection
    TInt16 i16ElectricPumpPressureValue;                    //!< [[-]] new signal 
    TUint16 u16PvgTransRailElectricVoltage;                 //!< [[-]] new signal 
    TBoolean boRelayCutOffVariatorElectricCmd;              //!< [[-]] new signal 
    TBoolean boRelayEnableBatteryCmd;                       //!< [[-]] new signal 
    TBoolean boPictoAskResartController;                    //!< [[-]] new signal 
    TBoolean boPictoReloadBatteryImpossible;                //!< [[-]] new signal 
    TUint8 u8Controller_FaultCode;                          //!< [[-]] new signal 
    TUint16 u16Controller_FaultSubCode;                     //!< [[-]] new signal 
} TCanSigRecMsg15C0SendToEvision7;

extern TCanSigRecMsg15C0SendToEvision7 gCsr_tMsg15C0SendToEvision7;

typedef struct
{
    TInt16 i16ElectricPumpPressureValue;                    //!< [[-]] new signal 
    TUint16 u16PvgTransRailElectricVoltage;                 //!< [[-]] new signal 
    TBoolean boRelayCutOffVariatorElectricCmd;              //!< [[-]] new signal 
    TBoolean boRelayEnableBatteryCmd;                       //!< [[-]] new signal 
    TBoolean boPictoAskResartController;                    //!< [[-]] new signal 
    TBoolean boPictoReloadBatteryImpossible;                //!< [[-]] new signal 
    TUint8 u8Controller_FaultCode;                          //!< [[-]] new signal 
    TUint16 u16Controller_FaultSubCode;                     //!< [[-]] new signal 
} TCanSigRecOldValMsg15C0SendToEvision7;

typedef struct
{
    TCanSigRecInf     tCsrInfo_i16ElectricPumpPressureValue;
    TCanSigRecRng_i16 tCsrRng_i16ElectricPumpPressureValue;
    TCanSigRecInf     tCsrInfo_u16PvgTransRailElectricVoltage;
    TCanSigRecRng_u16 tCsrRng_u16PvgTransRailElectricVoltage;
    TCanSigRecInf     tCsrInfo_boRelayCutOffVariatorElectricCmd;
    TCanSigRecRng_bo  tCsrRng_boRelayCutOffVariatorElectricCmd;
    TCanSigRecInf     tCsrInfo_boRelayEnableBatteryCmd;
    TCanSigRecRng_bo  tCsrRng_boRelayEnableBatteryCmd;
    TCanSigRecInf     tCsrInfo_boPictoAskResartController;
    TCanSigRecRng_bo  tCsrRng_boPictoAskResartController;
    TCanSigRecInf     tCsrInfo_boPictoReloadBatteryImpossible;
    TCanSigRecRng_bo  tCsrRng_boPictoReloadBatteryImpossible;
    TCanSigRecInf     tCsrInfo_u8Controller_FaultCode;
    TCanSigRecRng_u8  tCsrRng_u8Controller_FaultCode;
    TCanSigRecInf     tCsrInfo_u16Controller_FaultSubCode;
    TCanSigRecRng_u16 tCsrRng_u16Controller_FaultSubCode;
} TCanSigRecVal_Msg15C0SendToEvision7;

typedef struct
{
    const TCanSigRecRoot *cptRoot;                          //!< [POI] Root connection
    TUint16 u16FaultyValue;                                 //!< [[-]]  
    TUint8 u8DeviceNum;                                     //!< [[-]]  
    TUint8 u8ErrorCode;                                     //!< [[-]]  
} TCanSigRecMsgDebugC0SendToEvision7;

extern TCanSigRecMsgDebugC0SendToEvision7 gCsr_tMsgDebugC0SendToEvision7;

typedef struct
{
    TUint16 u16FaultyValue;                                 //!< [[-]]  
    TUint8 u8DeviceNum;                                     //!< [[-]]  
    TUint8 u8ErrorCode;                                     //!< [[-]]  
} TCanSigRecOldValMsgDebugC0SendToEvision7;

typedef struct
{
    TCanSigRecInf     tCsrInfo_u16FaultyValue;
    TCanSigRecRng_u16 tCsrRng_u16FaultyValue;
    TCanSigRecInf     tCsrInfo_u8DeviceNum;
    TCanSigRecRng_u8  tCsrRng_u8DeviceNum;
    TCanSigRecInf     tCsrInfo_u8ErrorCode;
    TCanSigRecRng_u8  tCsrRng_u8ErrorCode;
} TCanSigRecVal_MsgDebugC0SendToEvision7;

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

