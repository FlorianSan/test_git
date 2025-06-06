//**************************************************************************************************
//! @crc        3535878442
//! @file       App_LibTab.c
//! @brief      Generate by: HYDAC Controller Project - Code Builder Tool Chain
//! @ecu        TTC580
//! @dll        1.2.7 (Build: 080)
//! @dll itf    1.7.0
//! @build      2023-04-03 16:35:10
//! @Match      07-04-01-04
//! @PDT        2.11.72.172
//! @PdtProjVer 0.0.0
//! @created    2025-06-04 11:35:59   HYDAC/HCP-CC
//**************************************************************************************************

// INCLUDES ========================================================================================
#include <ItfCoreLibTab.h>
#include <App_LibTab.h>
#include <ItfAppCode.h>

// GLOBAL VARIABLES ================================================================================
// STRUC-BLOCK-Itf
TCoreInp  gCore_tInp;
TCoreOut  gCore_tOut;
TBloCBus gCBus_tCAN_BUS0;
TBloCBus gCBus_tCAN_BUS1;
TBloCBus gCBus_tCAN_BUS2;
TBloCBus gCBus_tCAN_BUS3;
TBloCBus gCBus_tCAN_BUS4;
TBloInCur gInCur_tPressureBlockOscillationSensor;
TBloInCur gInCur_tPressureBrakeSensor;
TBloInCur gInCur_tTemperatureTransmissionSensor;
TBloInCur gInCur_tElectricPumpPressure;
TBloInFreq gInFreq_tOscillantAxleSpeedSensor;
TBloInFreq gInFreq_tFixeAxleSpeedSensor;
TBloDig gDig_tEvDeflectorTransmission;
TBloDig gDig_tEvUpMeasuringMast;
TBloDig gDig_tEvDownMeasuringMast;
TBloDig gDig_tEvServiceBrakeTrack;
TBloDig gDig_tEvPowerReduction;
TBloDig gDig_tSupplyRadioReceiver;
TBloDig gDig_tBuzzerLynxMovingMachine;
TBloDig gDig_tWhiteLightAVG;
TBloDig gDig_tWhiteLightAVD;
TBloDig gDig_tRedLightAVG;
TBloDig gDig_tRedLightAVD;
TBloDig gDig_tWhiteLightARG;
TBloDig gDig_tWhiteLightARD;
TBloDig gDig_tRedLightARG;
TBloDig gDig_tRedLightARD;
TBloDig gDig_tSupplyPvgLeftTrack;
TBloDig gDig_tSupplyPvgRightTrack;
TBloDig gDig_tWhiteTrailerLights;
TBloDig gDig_tRedTrailerLights;
TBloDig gDig_tSupplyAnaSensors;
TBloDig gDig_tPvgLeftTrackLowside;
TBloDig gDig_tPvgRightTrackLowside;
TBloDig gDig_tReturnLowSideEvForwardPump;
TBloDig gDig_tReturnLowSideEvBackwardPump;
TBloDig gDig_tKlaxonNeotec;
TBloDig gDig_tEvUnBlockOscillationAxle;
TBloDig gDig_tEvParkBrakeAxleOscillant;
TBloDig gDig_tEvParkBrakeAxleFixe;
TBloDig gDig_tEvServiceBrakeAxleOscillant;
TBloDig gDig_tEvUpAxleOscillant;
TBloDig gDig_tEvUpAxleFixe;
TBloDig gDig_tEvDownAxleOscillant;
TBloDig gDig_tEvDownAxleFixe;
TBloDig gDig_tEvServiceBrakeAxleFixe;
TBloDig gDig_tNeonLights;
TBloDig gDig_tEv2DeflectorTransmission;
TBloDig gDig_tCoolingRelay;
TBloDig gDig_tEv2ndParkBrakeAxleFixe;
TBloDig gDig_tEv2ndParkBrakeAxleOsci;
TBloDig gDig_tSupplyPvgTransRailElectric;
TBloDig gDig_tEvDevRailElectricMode;
TBloDig gDig_tRelayCutOffVariatorElectric;
TBloDig gDig_tRelayEnableBattery;
TBloOutVoltPro gOutVoltPro_tPvgLeftTrack;
TBloOutVoltPro gOutVoltPro_tPvgRightTrack;
TBloOutVoltPro gOutVoltPro_tPvgTransRailElectric;
TBloSwiNo gSwiNo_tRailHookSensor;
TBloSwiNo gSwiNo_tInductiveRailSensor;
TBloSwiNo gSwiNo_tCenteredTurret;
TBloSwiNo gSwiNo_tWorkKeyTrackSide;
TBloSwiNo gSwiNo_tWorkKeyBilateral;
TBloSwiNo gSwiNo_tWorkKeyCentred;
TBloSwiNo gSwiNo_tAbutmentTurretTrackSide;
TBloSwiNo gSwiNo_tAbutmentTurretCentredSide;
TBloSwiNo gSwiNo_tOscillantAxleSpeedSensorDir;
TBloSwiNo gSwiNo_tFixeAxleSpeedSensorDir;
TBloSwiNo gSwiNo_tTrailerGache;
TBloSwiNo gSwiNo_tMeasuringMastSensorFolded;
TBloSwiNo gSwiNo_tAru1Contact;
TBloSwiNo gSwiNo_tAru2Contact;
TBloSwiNo gSwiNo_tAruRadio1Contact;
TBloSwiNo gSwiNo_tAruRadio2Contact;
TBloSwiNo gSwiNo_tStarterMotorState;
TBloSwiNo gSwiNo_tAutorisationHighSpeedKey;
TBloSwiNo gSwiNo_tValveInDownPositionSensor;
TBloCBuf gCBuf_tCBUS2_CBUF_SND_1;
TBloCBuf gCBuf_tCBUS2_CBUF_RCV_1;
TBloCBuf gCBuf_tCBUS3_CBUF_SND_1;
TBloCBuf gCBuf_tCBUS3_CBUF_RCV_1;
TBloCSnd gCSnd_tStart;
TBloCSnd gCSnd_tWriteLed;
TBloCSnd gCSnd_tRadioCmd;
TBloCSnd gCSnd_tStartSensor;
TBloCSnd gCSnd_tSendToEvision7;
TBloCSnd gCSnd_tDataSendToC1;
TBloCSnd gCSnd_tMsg2SendToEvision7;
TBloCSnd gCSnd_tMsg3SendToEvision7;
TBloCSnd gCSnd_tMessage_02;
TBloCSnd gCSnd_tData2SendToC1;
TBloCSnd gCSnd_tData3SendToC1;
TBloCSnd gCSnd_tMsg4C0SendToEvision7;
TBloCSnd gCSnd_tFailuresC0SendToC1;
TBloCSnd gCSnd_tMsg5C0SendToEvision7;
TBloCSnd gCSnd_tMsg6C0SendToEvision7;
TBloCSnd gCSnd_tMsg7C0SendToEvision7;
TBloCSnd gCSnd_tMsg8C0SendToEvision7;
TBloCSnd gCSnd_tMsg9C0SendToEvision7;
TBloCSnd gCSnd_tMsg9C0SendToEvision7_1;
TBloCSnd gCSnd_tMsg2C0SendToOpus;
TBloCSnd gCSnd_tMsg3C0SendToOpus;
TBloCSnd gCSnd_tMsg4C0SendToOpus;
TBloCSnd gCSnd_tMsg5C0SendToOpus;
TBloCSnd gCSnd_tMsg6C0SendToOpus;
TBloCSnd gCSnd_tMsg7C0SendToOpus;
TBloCSnd gCSnd_tMsg8C0SendToOpus;
TBloCSnd gCSnd_tMsg1C0SendToOpus;
TBloCSnd gCSnd_tData4C0SendToC1;
TBloCSnd gCSnd_tMsg11C0SendToEvision7;
TBloCSnd gCSnd_tMsg9C0SendToOpus;
TBloCSnd gCSnd_tMsg10C0SendToOpus;
TBloCSnd gCSnd_tSyncFrame;
TBloCSnd gCSnd_tMsg12C0SendToEvision7;
TBloCSnd gCSnd_tMsg13C0SendToEvision7;
TBloCSnd gCSnd_tDatalogger;
TBloCSnd gCSnd_tSdo_Request_Encodeur_Turret;
TBloCSnd gCSnd_tSdo_Request_Encodeur_Turret2;
TBloCSnd gCSnd_tData5C0SendToC1;
TBloCSnd gCSnd_tMsg11C0SendToOpus;
TBloCSnd gCSnd_tMsg14C0SendToEvision7;
TBloCSnd gCSnd_tMsg15C0SendToEvision7;
TBloCSnd gCSnd_tHMG_1;
TBloCSnd gCSnd_tHMG_2;
TBloCSnd gCSnd_tHMG_3;
TBloCSnd gCSnd_tDMC_TxSdo;
TBloCSnd gCSnd_tNMT;
TBloCSnd gCSnd_tDMC_TxPdo1_DC;
TBloCSnd gCSnd_tDMC_TxPdo2_BCL;
TBloCSnd gCSnd_tData6C0SendToC1;
TBloCRcv gCRcv_tHeartBeat;
TBloCRcv gCRcv_tReadAnalogInput;
TBloCRcv gCRcv_tReadOnOfffInput;
TBloCRcv gCRcv_tHeartBeatDeversFrame;
TBloCRcv gCRcv_tDeversFrame1;
TBloCRcv gCRcv_tEncodeurTurret1;
TBloCRcv gCRcv_tEncodeurTurret2;
TBloCRcv gCRcv_tMsg1C0RcvFromEvision7;
TBloCRcv gCRcv_tDataRcvFromC1;
TBloCRcv gCRcv_tHeartBeatEncodeurTurret1;
TBloCRcv gCRcv_tPDO3_48XS;
TBloCRcv gCRcv_tPDO4_48XS;
TBloCRcv gCRcv_tSRDO2_48XS;
TBloCRcv gCRcv_tSRDO3_48XS;
TBloCRcv gCRcv_tMastMeasure;
TBloCRcv gCRcv_tData2RdvFromC1;
TBloCRcv gCRcv_tHearbeat_48XS;
TBloCRcv gCRcv_tPDO1_48XS;
TBloCRcv gCRcv_tPDO2_48XS;
TBloCRcv gCRcv_tSRDO1_48XS;
TBloCRcv gCRcv_tData3RcvFromC1;
TBloCRcv gCRcv_tDeversFrame2;
TBloCRcv gCRcv_tFAiluresC1SendToC0;
TBloCRcv gCRcv_tMsg1RcvFromOpus;
TBloCRcv gCRcv_tData4C1SendToC0;
TBloCRcv gCRcv_tEmergencyEncodeurTurret1;
TBloCRcv gCRcv_tEmergencyEncodeurTurret2;
TBloCRcv gCRcv_tEmergencyMastMeasure;
TBloCRcv gCRcv_tPDO5_48XS;
TBloCRcv gCRcv_tHeartBeatEncodeurTurret2;
TBloCRcv gCRcv_tPDO6_48XS;
TBloCRcv gCRcv_tSdo_Answer_Encodeur_Turret1;
TBloCRcv gCRcv_tSdo_Answer_Encodeur_Turret2;
TBloCRcv gCRcv_tData5C1SendToC0;
TBloCRcv gCRcv_tFlashBatteryRpdo1_0;
TBloCRcv gCRcv_tFlashBatteryRpdo1_2;
TBloCRcv gCRcv_tFlashBatteryRpdo2_0;
TBloCRcv gCRcv_tFlashBatteryRpdo3_0;
TBloCRcv gCRcv_tFlashBatteryRpdo3_3;
TBloCRcv gCRcv_tDMC_Heartbeat_HB;
TBloCRcv gCRcv_tDMC_RxSdo;
TBloCRcv gCRcv_tDMC_RxPdo1_MS;
TBloCRcv gCRcv_tDMC_RxPdo2_DS;
TBloCRcv gCRcv_tDMC_RxPdo3_CS;
TBloCRcv gCRcv_tSRDO5_48XS;
TBloPro gPro_tEvForwardPump;
TBloPro gPro_tEvBackwardPump;
TBloSwiNc gSwiNc_tUpOscillantAxle;
TBloSwiNc gSwiNc_tUpFixeAxle;
TBloSwiNc gSwiNc_tUpMastSensorNC;
TBloSwiDblNoNc gSwiDblNoNc_tFrameRotationSensor1;
TBloSwiDblNoNc gSwiDblNoNc_tFrameRotationSensor2;
TBloErr gErr_tSpecificErrorC0;
TBloErr gErr_tSpecificErrorC0_2;
TBloErr gErr_tSpecificErrorC0_3;
TBloErr gErr_tSpecificErrorC0_4;
TBloErr gErr_tSpecificErrorC0_5;
TBloErr gErr_tSpecificErrorC0_6;
TBloErr gErr_tSpecificErrorC0_7;
TBloErr gErr_tSpecificErrorC0_8;
TBloErr gErr_tSpecificErrorC0_9;
TBloSwiDblNcNo gSwiDblNcNo_tDownOscillantAxle;
TBloSwiDblNcNo gSwiDblNcNo_tDownFixeAxle;
TBloSwiDblNcNo gSwiDblNcNo_tAxleInMGMode;
TBloSwiDblNcNo gSwiDblNcNo_tAxleInSDMode;
TBloSil gSil_tEcu0_Safety;
TBloSil gSil_tEcu1_Safety;
TBloSil gSil_tEcuSil;
TBloSil gSil_tSensorSupply;
TBloSil gSil_tErrList;

#define OBJ_TAB_MAX 206

TObjTab g_atObjTab[OBJ_TAB_MAX];
TUint16 g_u16ObjTabMax = OBJ_TAB_MAX;

TVoid vAcbAutoCode(TVoid);

TVoid vAppAutoLibTable( TVoid )
{
    gCBus_tCAN_BUS0.tXAdr.cptCfg = &gCBus_ctCfg_CAN_BUS0;
    g_atObjTab[0].u16Type = (TUint16)STD_BLO_CBUS;
    g_atObjTab[0].pvBloAdr = &gCBus_tCAN_BUS0;

    gCBus_tCAN_BUS1.tXAdr.cptCfg = &gCBus_ctCfg_CAN_BUS1;
    g_atObjTab[1].u16Type = (TUint16)STD_BLO_CBUS;
    g_atObjTab[1].pvBloAdr = &gCBus_tCAN_BUS1;

    gCBus_tCAN_BUS2.tXAdr.cptCfg = &gCBus_ctCfg_CAN_BUS2;
    g_atObjTab[2].u16Type = (TUint16)STD_BLO_CBUS;
    g_atObjTab[2].pvBloAdr = &gCBus_tCAN_BUS2;

    gCBus_tCAN_BUS3.tXAdr.cptCfg = &gCBus_ctCfg_CAN_BUS3;
    g_atObjTab[3].u16Type = (TUint16)STD_BLO_CBUS;
    g_atObjTab[3].pvBloAdr = &gCBus_tCAN_BUS3;

    gCBus_tCAN_BUS4.tXAdr.cptCfg = &gCBus_ctCfg_CAN_BUS4;
    g_atObjTab[4].u16Type = (TUint16)STD_BLO_CBUS;
    g_atObjTab[4].pvBloAdr = &gCBus_tCAN_BUS4;

    gCBuf_tCBUS2_CBUF_SND_1.tXAdr.cptCfg = &gCBuf_ctCfg_CBUS2_CBUF_SND_1;
    g_atObjTab[5].u16Type = (TUint16)STD_BLO_CBUF;
    g_atObjTab[5].pvBloAdr = &gCBuf_tCBUS2_CBUF_SND_1;

    gCBuf_tCBUS2_CBUF_RCV_1.tXAdr.cptCfg = &gCBuf_ctCfg_CBUS2_CBUF_RCV_1;
    g_atObjTab[6].u16Type = (TUint16)STD_BLO_CBUF;
    g_atObjTab[6].pvBloAdr = &gCBuf_tCBUS2_CBUF_RCV_1;

    gCBuf_tCBUS3_CBUF_SND_1.tXAdr.cptCfg = &gCBuf_ctCfg_CBUS3_CBUF_SND_1;
    g_atObjTab[7].u16Type = (TUint16)STD_BLO_CBUF;
    g_atObjTab[7].pvBloAdr = &gCBuf_tCBUS3_CBUF_SND_1;

    gCBuf_tCBUS3_CBUF_RCV_1.tXAdr.cptCfg = &gCBuf_ctCfg_CBUS3_CBUF_RCV_1;
    g_atObjTab[8].u16Type = (TUint16)STD_BLO_CBUF;
    g_atObjTab[8].pvBloAdr = &gCBuf_tCBUS3_CBUF_RCV_1;

    gDig_tEvDeflectorTransmission.tXAdr.cptCfg = &gDig_ctCfg_EvDeflectorTransmission;
    g_atObjTab[9].u16Type = (TUint16)BLO_DIG;
    g_atObjTab[9].pvBloAdr = &gDig_tEvDeflectorTransmission;

    gDig_tEvUpMeasuringMast.tXAdr.cptCfg = &gDig_ctCfg_EvUpMeasuringMast;
    g_atObjTab[10].u16Type = (TUint16)BLO_DIG;
    g_atObjTab[10].pvBloAdr = &gDig_tEvUpMeasuringMast;

    gDig_tEvDownMeasuringMast.tXAdr.cptCfg = &gDig_ctCfg_EvDownMeasuringMast;
    g_atObjTab[11].u16Type = (TUint16)BLO_DIG;
    g_atObjTab[11].pvBloAdr = &gDig_tEvDownMeasuringMast;

    gDig_tEvServiceBrakeTrack.tXAdr.cptCfg = &gDig_ctCfg_EvServiceBrakeTrack;
    g_atObjTab[12].u16Type = (TUint16)BLO_DIG;
    g_atObjTab[12].pvBloAdr = &gDig_tEvServiceBrakeTrack;

    gDig_tEvPowerReduction.tXAdr.cptCfg = &gDig_ctCfg_EvPowerReduction;
    g_atObjTab[13].u16Type = (TUint16)BLO_DIG;
    g_atObjTab[13].pvBloAdr = &gDig_tEvPowerReduction;

    gDig_tSupplyRadioReceiver.tXAdr.cptCfg = &gDig_ctCfg_SupplyRadioReceiver;
    g_atObjTab[14].u16Type = (TUint16)BLO_DIG;
    g_atObjTab[14].pvBloAdr = &gDig_tSupplyRadioReceiver;

    gDig_tBuzzerLynxMovingMachine.tXAdr.cptCfg = &gDig_ctCfg_BuzzerLynxMovingMachine;
    g_atObjTab[15].u16Type = (TUint16)BLO_DIG;
    g_atObjTab[15].pvBloAdr = &gDig_tBuzzerLynxMovingMachine;

    gDig_tWhiteLightAVG.tXAdr.cptCfg = &gDig_ctCfg_WhiteLightAVG;
    g_atObjTab[16].u16Type = (TUint16)BLO_DIG;
    g_atObjTab[16].pvBloAdr = &gDig_tWhiteLightAVG;

    gDig_tWhiteLightAVD.tXAdr.cptCfg = &gDig_ctCfg_WhiteLightAVD;
    g_atObjTab[17].u16Type = (TUint16)BLO_DIG;
    g_atObjTab[17].pvBloAdr = &gDig_tWhiteLightAVD;

    gDig_tRedLightAVG.tXAdr.cptCfg = &gDig_ctCfg_RedLightAVG;
    g_atObjTab[18].u16Type = (TUint16)BLO_DIG;
    g_atObjTab[18].pvBloAdr = &gDig_tRedLightAVG;

    gDig_tRedLightAVD.tXAdr.cptCfg = &gDig_ctCfg_RedLightAVD;
    g_atObjTab[19].u16Type = (TUint16)BLO_DIG;
    g_atObjTab[19].pvBloAdr = &gDig_tRedLightAVD;

    gDig_tWhiteLightARG.tXAdr.cptCfg = &gDig_ctCfg_WhiteLightARG;
    g_atObjTab[20].u16Type = (TUint16)BLO_DIG;
    g_atObjTab[20].pvBloAdr = &gDig_tWhiteLightARG;

    gDig_tWhiteLightARD.tXAdr.cptCfg = &gDig_ctCfg_WhiteLightARD;
    g_atObjTab[21].u16Type = (TUint16)BLO_DIG;
    g_atObjTab[21].pvBloAdr = &gDig_tWhiteLightARD;

    gDig_tRedLightARG.tXAdr.cptCfg = &gDig_ctCfg_RedLightARG;
    g_atObjTab[22].u16Type = (TUint16)BLO_DIG;
    g_atObjTab[22].pvBloAdr = &gDig_tRedLightARG;

    gDig_tRedLightARD.tXAdr.cptCfg = &gDig_ctCfg_RedLightARD;
    g_atObjTab[23].u16Type = (TUint16)BLO_DIG;
    g_atObjTab[23].pvBloAdr = &gDig_tRedLightARD;

    gDig_tSupplyPvgLeftTrack.tXAdr.cptCfg = &gDig_ctCfg_SupplyPvgLeftTrack;
    g_atObjTab[24].u16Type = (TUint16)BLO_DIG;
    g_atObjTab[24].pvBloAdr = &gDig_tSupplyPvgLeftTrack;

    gDig_tSupplyPvgRightTrack.tXAdr.cptCfg = &gDig_ctCfg_SupplyPvgRightTrack;
    g_atObjTab[25].u16Type = (TUint16)BLO_DIG;
    g_atObjTab[25].pvBloAdr = &gDig_tSupplyPvgRightTrack;

    gDig_tWhiteTrailerLights.tXAdr.cptCfg = &gDig_ctCfg_WhiteTrailerLights;
    g_atObjTab[26].u16Type = (TUint16)BLO_DIG;
    g_atObjTab[26].pvBloAdr = &gDig_tWhiteTrailerLights;

    gDig_tRedTrailerLights.tXAdr.cptCfg = &gDig_ctCfg_RedTrailerLights;
    g_atObjTab[27].u16Type = (TUint16)BLO_DIG;
    g_atObjTab[27].pvBloAdr = &gDig_tRedTrailerLights;

    gDig_tSupplyAnaSensors.tXAdr.cptCfg = &gDig_ctCfg_SupplyAnaSensors;
    g_atObjTab[28].u16Type = (TUint16)BLO_DIG;
    g_atObjTab[28].pvBloAdr = &gDig_tSupplyAnaSensors;

    gDig_tPvgLeftTrackLowside.tXAdr.cptCfg = &gDig_ctCfg_PvgLeftTrackLowside;
    g_atObjTab[29].u16Type = (TUint16)BLO_DIG;
    g_atObjTab[29].pvBloAdr = &gDig_tPvgLeftTrackLowside;

    gDig_tPvgRightTrackLowside.tXAdr.cptCfg = &gDig_ctCfg_PvgRightTrackLowside;
    g_atObjTab[30].u16Type = (TUint16)BLO_DIG;
    g_atObjTab[30].pvBloAdr = &gDig_tPvgRightTrackLowside;

    gDig_tReturnLowSideEvForwardPump.tXAdr.cptCfg = &gDig_ctCfg_ReturnLowSideEvForwardPump;
    g_atObjTab[31].u16Type = (TUint16)BLO_DIG;
    g_atObjTab[31].pvBloAdr = &gDig_tReturnLowSideEvForwardPump;

    gDig_tReturnLowSideEvBackwardPump.tXAdr.cptCfg = &gDig_ctCfg_ReturnLowSideEvBackwardPump;
    g_atObjTab[32].u16Type = (TUint16)BLO_DIG;
    g_atObjTab[32].pvBloAdr = &gDig_tReturnLowSideEvBackwardPump;

    gDig_tKlaxonNeotec.tXAdr.cptCfg = &gDig_ctCfg_KlaxonNeotec;
    g_atObjTab[33].u16Type = (TUint16)BLO_DIG;
    g_atObjTab[33].pvBloAdr = &gDig_tKlaxonNeotec;

    gDig_tEvUnBlockOscillationAxle.tXAdr.cptCfg = &gDig_ctCfg_EvUnBlockOscillationAxle;
    g_atObjTab[34].u16Type = (TUint16)BLO_DIG;
    g_atObjTab[34].pvBloAdr = &gDig_tEvUnBlockOscillationAxle;

    gDig_tEvParkBrakeAxleOscillant.tXAdr.cptCfg = &gDig_ctCfg_EvParkBrakeAxleOscillant;
    g_atObjTab[35].u16Type = (TUint16)BLO_DIG;
    g_atObjTab[35].pvBloAdr = &gDig_tEvParkBrakeAxleOscillant;

    gDig_tEvParkBrakeAxleFixe.tXAdr.cptCfg = &gDig_ctCfg_EvParkBrakeAxleFixe;
    g_atObjTab[36].u16Type = (TUint16)BLO_DIG;
    g_atObjTab[36].pvBloAdr = &gDig_tEvParkBrakeAxleFixe;

    gDig_tEvServiceBrakeAxleOscillant.tXAdr.cptCfg = &gDig_ctCfg_EvServiceBrakeAxleOscillant;
    g_atObjTab[37].u16Type = (TUint16)BLO_DIG;
    g_atObjTab[37].pvBloAdr = &gDig_tEvServiceBrakeAxleOscillant;

    gDig_tEvUpAxleOscillant.tXAdr.cptCfg = &gDig_ctCfg_EvUpAxleOscillant;
    g_atObjTab[38].u16Type = (TUint16)BLO_DIG;
    g_atObjTab[38].pvBloAdr = &gDig_tEvUpAxleOscillant;

    gDig_tEvUpAxleFixe.tXAdr.cptCfg = &gDig_ctCfg_EvUpAxleFixe;
    g_atObjTab[39].u16Type = (TUint16)BLO_DIG;
    g_atObjTab[39].pvBloAdr = &gDig_tEvUpAxleFixe;

    gDig_tEvDownAxleOscillant.tXAdr.cptCfg = &gDig_ctCfg_EvDownAxleOscillant;
    g_atObjTab[40].u16Type = (TUint16)BLO_DIG;
    g_atObjTab[40].pvBloAdr = &gDig_tEvDownAxleOscillant;

    gDig_tEvDownAxleFixe.tXAdr.cptCfg = &gDig_ctCfg_EvDownAxleFixe;
    g_atObjTab[41].u16Type = (TUint16)BLO_DIG;
    g_atObjTab[41].pvBloAdr = &gDig_tEvDownAxleFixe;

    gDig_tEvServiceBrakeAxleFixe.tXAdr.cptCfg = &gDig_ctCfg_EvServiceBrakeAxleFixe;
    g_atObjTab[42].u16Type = (TUint16)BLO_DIG;
    g_atObjTab[42].pvBloAdr = &gDig_tEvServiceBrakeAxleFixe;

    gDig_tNeonLights.tXAdr.cptCfg = &gDig_ctCfg_NeonLights;
    g_atObjTab[43].u16Type = (TUint16)BLO_DIG;
    g_atObjTab[43].pvBloAdr = &gDig_tNeonLights;

    gDig_tEv2DeflectorTransmission.tXAdr.cptCfg = &gDig_ctCfg_Ev2DeflectorTransmission;
    g_atObjTab[44].u16Type = (TUint16)BLO_DIG;
    g_atObjTab[44].pvBloAdr = &gDig_tEv2DeflectorTransmission;

    gDig_tCoolingRelay.tXAdr.cptCfg = &gDig_ctCfg_CoolingRelay;
    g_atObjTab[45].u16Type = (TUint16)BLO_DIG;
    g_atObjTab[45].pvBloAdr = &gDig_tCoolingRelay;

    gDig_tEv2ndParkBrakeAxleFixe.tXAdr.cptCfg = &gDig_ctCfg_Ev2ndParkBrakeAxleFixe;
    g_atObjTab[46].u16Type = (TUint16)BLO_DIG;
    g_atObjTab[46].pvBloAdr = &gDig_tEv2ndParkBrakeAxleFixe;

    gDig_tEv2ndParkBrakeAxleOsci.tXAdr.cptCfg = &gDig_ctCfg_Ev2ndParkBrakeAxleOsci;
    g_atObjTab[47].u16Type = (TUint16)BLO_DIG;
    g_atObjTab[47].pvBloAdr = &gDig_tEv2ndParkBrakeAxleOsci;

    gDig_tSupplyPvgTransRailElectric.tXAdr.cptCfg = &gDig_ctCfg_SupplyPvgTransRailElectric;
    g_atObjTab[48].u16Type = (TUint16)BLO_DIG;
    g_atObjTab[48].pvBloAdr = &gDig_tSupplyPvgTransRailElectric;

    gDig_tEvDevRailElectricMode.tXAdr.cptCfg = &gDig_ctCfg_EvDevRailElectricMode;
    g_atObjTab[49].u16Type = (TUint16)BLO_DIG;
    g_atObjTab[49].pvBloAdr = &gDig_tEvDevRailElectricMode;

    gDig_tRelayCutOffVariatorElectric.tXAdr.cptCfg = &gDig_ctCfg_RelayCutOffVariatorElectric;
    g_atObjTab[50].u16Type = (TUint16)BLO_DIG;
    g_atObjTab[50].pvBloAdr = &gDig_tRelayCutOffVariatorElectric;

    gDig_tRelayEnableBattery.tXAdr.cptCfg = &gDig_ctCfg_RelayEnableBattery;
    g_atObjTab[51].u16Type = (TUint16)BLO_DIG;
    g_atObjTab[51].pvBloAdr = &gDig_tRelayEnableBattery;

    gPro_tEvForwardPump.tXAdr.cptCfg = &gPro_ctCfg_EvForwardPump;
    g_atObjTab[52].u16Type = (TUint16)BLO_PRO;
    g_atObjTab[52].pvBloAdr = &gPro_tEvForwardPump;

    gPro_tEvBackwardPump.tXAdr.cptCfg = &gPro_ctCfg_EvBackwardPump;
    g_atObjTab[53].u16Type = (TUint16)BLO_PRO;
    g_atObjTab[53].pvBloAdr = &gPro_tEvBackwardPump;

    gInCur_tPressureBlockOscillationSensor.tXAdr.cptCfg = &gInCur_ctCfg_PressureBlockOscillationSensor;
    g_atObjTab[54].u16Type = (TUint16)BLO_INCUR;
    g_atObjTab[54].pvBloAdr = &gInCur_tPressureBlockOscillationSensor;

    gInCur_tPressureBrakeSensor.tXAdr.cptCfg = &gInCur_ctCfg_PressureBrakeSensor;
    g_atObjTab[55].u16Type = (TUint16)BLO_INCUR;
    g_atObjTab[55].pvBloAdr = &gInCur_tPressureBrakeSensor;

    gInCur_tTemperatureTransmissionSensor.tXAdr.cptCfg = &gInCur_ctCfg_TemperatureTransmissionSensor;
    g_atObjTab[56].u16Type = (TUint16)BLO_INCUR;
    g_atObjTab[56].pvBloAdr = &gInCur_tTemperatureTransmissionSensor;

    gInCur_tElectricPumpPressure.tXAdr.cptCfg = &gInCur_ctCfg_ElectricPumpPressure;
    g_atObjTab[57].u16Type = (TUint16)BLO_INCUR;
    g_atObjTab[57].pvBloAdr = &gInCur_tElectricPumpPressure;

    gInFreq_tOscillantAxleSpeedSensor.tXAdr.cptCfg = &gInFreq_ctCfg_OscillantAxleSpeedSensor;
    g_atObjTab[58].u16Type = (TUint16)BLO_INFREQ;
    g_atObjTab[58].pvBloAdr = &gInFreq_tOscillantAxleSpeedSensor;

    gInFreq_tFixeAxleSpeedSensor.tXAdr.cptCfg = &gInFreq_ctCfg_FixeAxleSpeedSensor;
    g_atObjTab[59].u16Type = (TUint16)BLO_INFREQ;
    g_atObjTab[59].pvBloAdr = &gInFreq_tFixeAxleSpeedSensor;

    gOutVoltPro_tPvgLeftTrack.tXAdr.cptCfg = &gOutVoltPro_ctCfg_PvgLeftTrack;
    g_atObjTab[60].u16Type = (TUint16)BLO_OUTVOLTPRO;
    g_atObjTab[60].pvBloAdr = &gOutVoltPro_tPvgLeftTrack;

    gOutVoltPro_tPvgRightTrack.tXAdr.cptCfg = &gOutVoltPro_ctCfg_PvgRightTrack;
    g_atObjTab[61].u16Type = (TUint16)BLO_OUTVOLTPRO;
    g_atObjTab[61].pvBloAdr = &gOutVoltPro_tPvgRightTrack;

    gOutVoltPro_tPvgTransRailElectric.tXAdr.cptCfg = &gOutVoltPro_ctCfg_PvgTransRailElectric;
    g_atObjTab[62].u16Type = (TUint16)BLO_OUTVOLTPRO;
    g_atObjTab[62].pvBloAdr = &gOutVoltPro_tPvgTransRailElectric;

    gSwiNo_tRailHookSensor.tXAdr.cptCfg = &gSwiNo_ctCfg_RailHookSensor;
    g_atObjTab[63].u16Type = (TUint16)BLO_SWINO;
    g_atObjTab[63].pvBloAdr = &gSwiNo_tRailHookSensor;

    gSwiNo_tInductiveRailSensor.tXAdr.cptCfg = &gSwiNo_ctCfg_InductiveRailSensor;
    g_atObjTab[64].u16Type = (TUint16)BLO_SWINO;
    g_atObjTab[64].pvBloAdr = &gSwiNo_tInductiveRailSensor;

    gSwiNo_tCenteredTurret.tXAdr.cptCfg = &gSwiNo_ctCfg_CenteredTurret;
    g_atObjTab[65].u16Type = (TUint16)BLO_SWINO;
    g_atObjTab[65].pvBloAdr = &gSwiNo_tCenteredTurret;

    gSwiNo_tWorkKeyTrackSide.tXAdr.cptCfg = &gSwiNo_ctCfg_WorkKeyTrackSide;
    g_atObjTab[66].u16Type = (TUint16)BLO_SWINO;
    g_atObjTab[66].pvBloAdr = &gSwiNo_tWorkKeyTrackSide;

    gSwiNo_tWorkKeyBilateral.tXAdr.cptCfg = &gSwiNo_ctCfg_WorkKeyBilateral;
    g_atObjTab[67].u16Type = (TUint16)BLO_SWINO;
    g_atObjTab[67].pvBloAdr = &gSwiNo_tWorkKeyBilateral;

    gSwiNo_tWorkKeyCentred.tXAdr.cptCfg = &gSwiNo_ctCfg_WorkKeyCentred;
    g_atObjTab[68].u16Type = (TUint16)BLO_SWINO;
    g_atObjTab[68].pvBloAdr = &gSwiNo_tWorkKeyCentred;

    gSwiNo_tAbutmentTurretTrackSide.tXAdr.cptCfg = &gSwiNo_ctCfg_AbutmentTurretTrackSide;
    g_atObjTab[69].u16Type = (TUint16)BLO_SWINO;
    g_atObjTab[69].pvBloAdr = &gSwiNo_tAbutmentTurretTrackSide;

    gSwiNo_tAbutmentTurretCentredSide.tXAdr.cptCfg = &gSwiNo_ctCfg_AbutmentTurretCentredSide;
    g_atObjTab[70].u16Type = (TUint16)BLO_SWINO;
    g_atObjTab[70].pvBloAdr = &gSwiNo_tAbutmentTurretCentredSide;

    gSwiNo_tOscillantAxleSpeedSensorDir.tXAdr.cptCfg = &gSwiNo_ctCfg_OscillantAxleSpeedSensorDir;
    g_atObjTab[71].u16Type = (TUint16)BLO_SWINO;
    g_atObjTab[71].pvBloAdr = &gSwiNo_tOscillantAxleSpeedSensorDir;

    gSwiNo_tFixeAxleSpeedSensorDir.tXAdr.cptCfg = &gSwiNo_ctCfg_FixeAxleSpeedSensorDir;
    g_atObjTab[72].u16Type = (TUint16)BLO_SWINO;
    g_atObjTab[72].pvBloAdr = &gSwiNo_tFixeAxleSpeedSensorDir;

    gSwiNo_tTrailerGache.tXAdr.cptCfg = &gSwiNo_ctCfg_TrailerGache;
    g_atObjTab[73].u16Type = (TUint16)BLO_SWINO;
    g_atObjTab[73].pvBloAdr = &gSwiNo_tTrailerGache;

    gSwiNo_tMeasuringMastSensorFolded.tXAdr.cptCfg = &gSwiNo_ctCfg_MeasuringMastSensorFolded;
    g_atObjTab[74].u16Type = (TUint16)BLO_SWINO;
    g_atObjTab[74].pvBloAdr = &gSwiNo_tMeasuringMastSensorFolded;

    gSwiNo_tAru1Contact.tXAdr.cptCfg = &gSwiNo_ctCfg_Aru1Contact;
    g_atObjTab[75].u16Type = (TUint16)BLO_SWINO;
    g_atObjTab[75].pvBloAdr = &gSwiNo_tAru1Contact;

    gSwiNo_tAru2Contact.tXAdr.cptCfg = &gSwiNo_ctCfg_Aru2Contact;
    g_atObjTab[76].u16Type = (TUint16)BLO_SWINO;
    g_atObjTab[76].pvBloAdr = &gSwiNo_tAru2Contact;

    gSwiNo_tAruRadio1Contact.tXAdr.cptCfg = &gSwiNo_ctCfg_AruRadio1Contact;
    g_atObjTab[77].u16Type = (TUint16)BLO_SWINO;
    g_atObjTab[77].pvBloAdr = &gSwiNo_tAruRadio1Contact;

    gSwiNo_tAruRadio2Contact.tXAdr.cptCfg = &gSwiNo_ctCfg_AruRadio2Contact;
    g_atObjTab[78].u16Type = (TUint16)BLO_SWINO;
    g_atObjTab[78].pvBloAdr = &gSwiNo_tAruRadio2Contact;

    gSwiNo_tStarterMotorState.tXAdr.cptCfg = &gSwiNo_ctCfg_StarterMotorState;
    g_atObjTab[79].u16Type = (TUint16)BLO_SWINO;
    g_atObjTab[79].pvBloAdr = &gSwiNo_tStarterMotorState;

    gSwiNo_tAutorisationHighSpeedKey.tXAdr.cptCfg = &gSwiNo_ctCfg_AutorisationHighSpeedKey;
    g_atObjTab[80].u16Type = (TUint16)BLO_SWINO;
    g_atObjTab[80].pvBloAdr = &gSwiNo_tAutorisationHighSpeedKey;

    gSwiNo_tValveInDownPositionSensor.tXAdr.cptCfg = &gSwiNo_ctCfg_ValveInDownPositionSensor;
    g_atObjTab[81].u16Type = (TUint16)BLO_SWINO;
    g_atObjTab[81].pvBloAdr = &gSwiNo_tValveInDownPositionSensor;

    gSwiNc_tUpOscillantAxle.tXAdr.cptCfg = &gSwiNc_ctCfg_UpOscillantAxle;
    g_atObjTab[82].u16Type = (TUint16)BLO_SWINC;
    g_atObjTab[82].pvBloAdr = &gSwiNc_tUpOscillantAxle;

    gSwiNc_tUpFixeAxle.tXAdr.cptCfg = &gSwiNc_ctCfg_UpFixeAxle;
    g_atObjTab[83].u16Type = (TUint16)BLO_SWINC;
    g_atObjTab[83].pvBloAdr = &gSwiNc_tUpFixeAxle;

    gSwiNc_tUpMastSensorNC.tXAdr.cptCfg = &gSwiNc_ctCfg_UpMastSensorNC;
    g_atObjTab[84].u16Type = (TUint16)BLO_SWINC;
    g_atObjTab[84].pvBloAdr = &gSwiNc_tUpMastSensorNC;

    gSwiDblNoNc_tFrameRotationSensor1.tXAdr.cptCfg = &gSwiDblNoNc_ctCfg_FrameRotationSensor1;
    g_atObjTab[85].u16Type = (TUint16)BLO_SWIDBLNONC;
    g_atObjTab[85].pvBloAdr = &gSwiDblNoNc_tFrameRotationSensor1;

    gSwiDblNoNc_tFrameRotationSensor2.tXAdr.cptCfg = &gSwiDblNoNc_ctCfg_FrameRotationSensor2;
    g_atObjTab[86].u16Type = (TUint16)BLO_SWIDBLNONC;
    g_atObjTab[86].pvBloAdr = &gSwiDblNoNc_tFrameRotationSensor2;

    gSwiDblNcNo_tDownOscillantAxle.tXAdr.cptCfg = &gSwiDblNcNo_ctCfg_DownOscillantAxle;
    g_atObjTab[87].u16Type = (TUint16)BLO_SWIDBLNCNO;
    g_atObjTab[87].pvBloAdr = &gSwiDblNcNo_tDownOscillantAxle;

    gSwiDblNcNo_tDownFixeAxle.tXAdr.cptCfg = &gSwiDblNcNo_ctCfg_DownFixeAxle;
    g_atObjTab[88].u16Type = (TUint16)BLO_SWIDBLNCNO;
    g_atObjTab[88].pvBloAdr = &gSwiDblNcNo_tDownFixeAxle;

    gSwiDblNcNo_tAxleInMGMode.tXAdr.cptCfg = &gSwiDblNcNo_ctCfg_AxleInMGMode;
    g_atObjTab[89].u16Type = (TUint16)BLO_SWIDBLNCNO;
    g_atObjTab[89].pvBloAdr = &gSwiDblNcNo_tAxleInMGMode;

    gSwiDblNcNo_tAxleInSDMode.tXAdr.cptCfg = &gSwiDblNcNo_ctCfg_AxleInSDMode;
    g_atObjTab[90].u16Type = (TUint16)BLO_SWIDBLNCNO;
    g_atObjTab[90].pvBloAdr = &gSwiDblNcNo_tAxleInSDMode;

    gCRcv_tHeartBeat.tXAdr.cptCfg = &gCRcv_ctCfg_HeartBeat;
    g_atObjTab[91].u16Type = (TUint16)STD_BLO_CRCV;
    g_atObjTab[91].pvBloAdr = &gCRcv_tHeartBeat;

    gCRcv_tReadAnalogInput.tXAdr.cptCfg = &gCRcv_ctCfg_ReadAnalogInput;
    g_atObjTab[92].u16Type = (TUint16)STD_BLO_CRCV;
    g_atObjTab[92].pvBloAdr = &gCRcv_tReadAnalogInput;

    gCRcv_tReadOnOfffInput.tXAdr.cptCfg = &gCRcv_ctCfg_ReadOnOfffInput;
    g_atObjTab[93].u16Type = (TUint16)STD_BLO_CRCV;
    g_atObjTab[93].pvBloAdr = &gCRcv_tReadOnOfffInput;

    gCRcv_tHeartBeatDeversFrame.tXAdr.cptCfg = &gCRcv_ctCfg_HeartBeatDeversFrame;
    g_atObjTab[94].u16Type = (TUint16)STD_BLO_CRCV;
    g_atObjTab[94].pvBloAdr = &gCRcv_tHeartBeatDeversFrame;

    gCRcv_tDeversFrame1.tXAdr.cptCfg = &gCRcv_ctCfg_DeversFrame1;
    g_atObjTab[95].u16Type = (TUint16)STD_BLO_CRCV;
    g_atObjTab[95].pvBloAdr = &gCRcv_tDeversFrame1;

    gCRcv_tEncodeurTurret1.tXAdr.cptCfg = &gCRcv_ctCfg_EncodeurTurret1;
    g_atObjTab[96].u16Type = (TUint16)STD_BLO_CRCV;
    g_atObjTab[96].pvBloAdr = &gCRcv_tEncodeurTurret1;

    gCRcv_tEncodeurTurret2.tXAdr.cptCfg = &gCRcv_ctCfg_EncodeurTurret2;
    g_atObjTab[97].u16Type = (TUint16)STD_BLO_CRCV;
    g_atObjTab[97].pvBloAdr = &gCRcv_tEncodeurTurret2;

    gCRcv_tMsg1C0RcvFromEvision7.tXAdr.cptCfg = &gCRcv_ctCfg_Msg1C0RcvFromEvision7;
    g_atObjTab[98].u16Type = (TUint16)STD_BLO_CRCV;
    g_atObjTab[98].pvBloAdr = &gCRcv_tMsg1C0RcvFromEvision7;

    gCRcv_tDataRcvFromC1.tXAdr.cptCfg = &gCRcv_ctCfg_DataRcvFromC1;
    g_atObjTab[99].u16Type = (TUint16)STD_BLO_CRCV;
    g_atObjTab[99].pvBloAdr = &gCRcv_tDataRcvFromC1;

    gCRcv_tHeartBeatEncodeurTurret1.tXAdr.cptCfg = &gCRcv_ctCfg_HeartBeatEncodeurTurret1;
    g_atObjTab[100].u16Type = (TUint16)STD_BLO_CRCV;
    g_atObjTab[100].pvBloAdr = &gCRcv_tHeartBeatEncodeurTurret1;

    gCRcv_tPDO3_48XS.tXAdr.cptCfg = &gCRcv_ctCfg_PDO3_48XS;
    g_atObjTab[101].u16Type = (TUint16)STD_BLO_CRCV;
    g_atObjTab[101].pvBloAdr = &gCRcv_tPDO3_48XS;

    gCRcv_tPDO4_48XS.tXAdr.cptCfg = &gCRcv_ctCfg_PDO4_48XS;
    g_atObjTab[102].u16Type = (TUint16)STD_BLO_CRCV;
    g_atObjTab[102].pvBloAdr = &gCRcv_tPDO4_48XS;

    gCRcv_tSRDO2_48XS.tXAdr.cptCfg = &gCRcv_ctCfg_SRDO2_48XS;
    g_atObjTab[103].u16Type = (TUint16)STD_BLO_CRCV;
    g_atObjTab[103].pvBloAdr = &gCRcv_tSRDO2_48XS;

    gCRcv_tSRDO3_48XS.tXAdr.cptCfg = &gCRcv_ctCfg_SRDO3_48XS;
    g_atObjTab[104].u16Type = (TUint16)STD_BLO_CRCV;
    g_atObjTab[104].pvBloAdr = &gCRcv_tSRDO3_48XS;

    gCRcv_tMastMeasure.tXAdr.cptCfg = &gCRcv_ctCfg_MastMeasure;
    g_atObjTab[105].u16Type = (TUint16)STD_BLO_CRCV;
    g_atObjTab[105].pvBloAdr = &gCRcv_tMastMeasure;

    gCRcv_tData2RdvFromC1.tXAdr.cptCfg = &gCRcv_ctCfg_Data2RdvFromC1;
    g_atObjTab[106].u16Type = (TUint16)STD_BLO_CRCV;
    g_atObjTab[106].pvBloAdr = &gCRcv_tData2RdvFromC1;

    gCRcv_tHearbeat_48XS.tXAdr.cptCfg = &gCRcv_ctCfg_Hearbeat_48XS;
    g_atObjTab[107].u16Type = (TUint16)STD_BLO_CRCV;
    g_atObjTab[107].pvBloAdr = &gCRcv_tHearbeat_48XS;

    gCRcv_tPDO1_48XS.tXAdr.cptCfg = &gCRcv_ctCfg_PDO1_48XS;
    g_atObjTab[108].u16Type = (TUint16)STD_BLO_CRCV;
    g_atObjTab[108].pvBloAdr = &gCRcv_tPDO1_48XS;

    gCRcv_tPDO2_48XS.tXAdr.cptCfg = &gCRcv_ctCfg_PDO2_48XS;
    g_atObjTab[109].u16Type = (TUint16)STD_BLO_CRCV;
    g_atObjTab[109].pvBloAdr = &gCRcv_tPDO2_48XS;

    gCRcv_tSRDO1_48XS.tXAdr.cptCfg = &gCRcv_ctCfg_SRDO1_48XS;
    g_atObjTab[110].u16Type = (TUint16)STD_BLO_CRCV;
    g_atObjTab[110].pvBloAdr = &gCRcv_tSRDO1_48XS;

    gCRcv_tData3RcvFromC1.tXAdr.cptCfg = &gCRcv_ctCfg_Data3RcvFromC1;
    g_atObjTab[111].u16Type = (TUint16)STD_BLO_CRCV;
    g_atObjTab[111].pvBloAdr = &gCRcv_tData3RcvFromC1;

    gCRcv_tDeversFrame2.tXAdr.cptCfg = &gCRcv_ctCfg_DeversFrame2;
    g_atObjTab[112].u16Type = (TUint16)STD_BLO_CRCV;
    g_atObjTab[112].pvBloAdr = &gCRcv_tDeversFrame2;

    gCRcv_tFAiluresC1SendToC0.tXAdr.cptCfg = &gCRcv_ctCfg_FAiluresC1SendToC0;
    g_atObjTab[113].u16Type = (TUint16)STD_BLO_CRCV;
    g_atObjTab[113].pvBloAdr = &gCRcv_tFAiluresC1SendToC0;

    gCRcv_tMsg1RcvFromOpus.tXAdr.cptCfg = &gCRcv_ctCfg_Msg1RcvFromOpus;
    g_atObjTab[114].u16Type = (TUint16)STD_BLO_CRCV;
    g_atObjTab[114].pvBloAdr = &gCRcv_tMsg1RcvFromOpus;

    gCRcv_tData4C1SendToC0.tXAdr.cptCfg = &gCRcv_ctCfg_Data4C1SendToC0;
    g_atObjTab[115].u16Type = (TUint16)STD_BLO_CRCV;
    g_atObjTab[115].pvBloAdr = &gCRcv_tData4C1SendToC0;

    gCRcv_tEmergencyEncodeurTurret1.tXAdr.cptCfg = &gCRcv_ctCfg_EmergencyEncodeurTurret1;
    g_atObjTab[116].u16Type = (TUint16)STD_BLO_CRCV;
    g_atObjTab[116].pvBloAdr = &gCRcv_tEmergencyEncodeurTurret1;

    gCRcv_tEmergencyEncodeurTurret2.tXAdr.cptCfg = &gCRcv_ctCfg_EmergencyEncodeurTurret2;
    g_atObjTab[117].u16Type = (TUint16)STD_BLO_CRCV;
    g_atObjTab[117].pvBloAdr = &gCRcv_tEmergencyEncodeurTurret2;

    gCRcv_tEmergencyMastMeasure.tXAdr.cptCfg = &gCRcv_ctCfg_EmergencyMastMeasure;
    g_atObjTab[118].u16Type = (TUint16)STD_BLO_CRCV;
    g_atObjTab[118].pvBloAdr = &gCRcv_tEmergencyMastMeasure;

    gCRcv_tPDO5_48XS.tXAdr.cptCfg = &gCRcv_ctCfg_PDO5_48XS;
    g_atObjTab[119].u16Type = (TUint16)STD_BLO_CRCV;
    g_atObjTab[119].pvBloAdr = &gCRcv_tPDO5_48XS;

    gCRcv_tHeartBeatEncodeurTurret2.tXAdr.cptCfg = &gCRcv_ctCfg_HeartBeatEncodeurTurret2;
    g_atObjTab[120].u16Type = (TUint16)STD_BLO_CRCV;
    g_atObjTab[120].pvBloAdr = &gCRcv_tHeartBeatEncodeurTurret2;

    gCRcv_tPDO6_48XS.tXAdr.cptCfg = &gCRcv_ctCfg_PDO6_48XS;
    g_atObjTab[121].u16Type = (TUint16)STD_BLO_CRCV;
    g_atObjTab[121].pvBloAdr = &gCRcv_tPDO6_48XS;

    gCRcv_tSdo_Answer_Encodeur_Turret1.tXAdr.cptCfg = &gCRcv_ctCfg_Sdo_Answer_Encodeur_Turret1;
    g_atObjTab[122].u16Type = (TUint16)STD_BLO_CRCV;
    g_atObjTab[122].pvBloAdr = &gCRcv_tSdo_Answer_Encodeur_Turret1;

    gCRcv_tSdo_Answer_Encodeur_Turret2.tXAdr.cptCfg = &gCRcv_ctCfg_Sdo_Answer_Encodeur_Turret2;
    g_atObjTab[123].u16Type = (TUint16)STD_BLO_CRCV;
    g_atObjTab[123].pvBloAdr = &gCRcv_tSdo_Answer_Encodeur_Turret2;

    gCRcv_tData5C1SendToC0.tXAdr.cptCfg = &gCRcv_ctCfg_Data5C1SendToC0;
    g_atObjTab[124].u16Type = (TUint16)STD_BLO_CRCV;
    g_atObjTab[124].pvBloAdr = &gCRcv_tData5C1SendToC0;

    gCRcv_tFlashBatteryRpdo1_0.tXAdr.cptCfg = &gCRcv_ctCfg_FlashBatteryRpdo1_0;
    g_atObjTab[125].u16Type = (TUint16)STD_BLO_CRCV;
    g_atObjTab[125].pvBloAdr = &gCRcv_tFlashBatteryRpdo1_0;

    gCRcv_tFlashBatteryRpdo1_2.tXAdr.cptCfg = &gCRcv_ctCfg_FlashBatteryRpdo1_2;
    g_atObjTab[126].u16Type = (TUint16)STD_BLO_CRCV;
    g_atObjTab[126].pvBloAdr = &gCRcv_tFlashBatteryRpdo1_2;

    gCRcv_tFlashBatteryRpdo2_0.tXAdr.cptCfg = &gCRcv_ctCfg_FlashBatteryRpdo2_0;
    g_atObjTab[127].u16Type = (TUint16)STD_BLO_CRCV;
    g_atObjTab[127].pvBloAdr = &gCRcv_tFlashBatteryRpdo2_0;

    gCRcv_tFlashBatteryRpdo3_0.tXAdr.cptCfg = &gCRcv_ctCfg_FlashBatteryRpdo3_0;
    g_atObjTab[128].u16Type = (TUint16)STD_BLO_CRCV;
    g_atObjTab[128].pvBloAdr = &gCRcv_tFlashBatteryRpdo3_0;

    gCRcv_tFlashBatteryRpdo3_3.tXAdr.cptCfg = &gCRcv_ctCfg_FlashBatteryRpdo3_3;
    g_atObjTab[129].u16Type = (TUint16)STD_BLO_CRCV;
    g_atObjTab[129].pvBloAdr = &gCRcv_tFlashBatteryRpdo3_3;

    gCRcv_tDMC_Heartbeat_HB.tXAdr.cptCfg = &gCRcv_ctCfg_DMC_Heartbeat_HB;
    g_atObjTab[130].u16Type = (TUint16)STD_BLO_CRCV;
    g_atObjTab[130].pvBloAdr = &gCRcv_tDMC_Heartbeat_HB;

    gCRcv_tDMC_RxSdo.tXAdr.cptCfg = &gCRcv_ctCfg_DMC_RxSdo;
    g_atObjTab[131].u16Type = (TUint16)STD_BLO_CRCV;
    g_atObjTab[131].pvBloAdr = &gCRcv_tDMC_RxSdo;

    gCRcv_tDMC_RxPdo1_MS.tXAdr.cptCfg = &gCRcv_ctCfg_DMC_RxPdo1_MS;
    g_atObjTab[132].u16Type = (TUint16)STD_BLO_CRCV;
    g_atObjTab[132].pvBloAdr = &gCRcv_tDMC_RxPdo1_MS;

    gCRcv_tDMC_RxPdo2_DS.tXAdr.cptCfg = &gCRcv_ctCfg_DMC_RxPdo2_DS;
    g_atObjTab[133].u16Type = (TUint16)STD_BLO_CRCV;
    g_atObjTab[133].pvBloAdr = &gCRcv_tDMC_RxPdo2_DS;

    gCRcv_tDMC_RxPdo3_CS.tXAdr.cptCfg = &gCRcv_ctCfg_DMC_RxPdo3_CS;
    g_atObjTab[134].u16Type = (TUint16)STD_BLO_CRCV;
    g_atObjTab[134].pvBloAdr = &gCRcv_tDMC_RxPdo3_CS;

    gCRcv_tSRDO5_48XS.tXAdr.cptCfg = &gCRcv_ctCfg_SRDO5_48XS;
    g_atObjTab[135].u16Type = (TUint16)STD_BLO_CRCV;
    g_atObjTab[135].pvBloAdr = &gCRcv_tSRDO5_48XS;

    gCSnd_tStart.tXAdr.cptCfg = &gCSnd_ctCfg_Start;
    g_atObjTab[136].u16Type = (TUint16)STD_BLO_CSND;
    g_atObjTab[136].pvBloAdr = &gCSnd_tStart;

    gCSnd_tWriteLed.tXAdr.cptCfg = &gCSnd_ctCfg_WriteLed;
    g_atObjTab[137].u16Type = (TUint16)STD_BLO_CSND;
    g_atObjTab[137].pvBloAdr = &gCSnd_tWriteLed;

    gCSnd_tRadioCmd.tXAdr.cptCfg = &gCSnd_ctCfg_RadioCmd;
    g_atObjTab[138].u16Type = (TUint16)STD_BLO_CSND;
    g_atObjTab[138].pvBloAdr = &gCSnd_tRadioCmd;

    gCSnd_tStartSensor.tXAdr.cptCfg = &gCSnd_ctCfg_StartSensor;
    g_atObjTab[139].u16Type = (TUint16)STD_BLO_CSND;
    g_atObjTab[139].pvBloAdr = &gCSnd_tStartSensor;

    gCSnd_tSendToEvision7.tXAdr.cptCfg = &gCSnd_ctCfg_SendToEvision7;
    g_atObjTab[140].u16Type = (TUint16)STD_BLO_CSND;
    g_atObjTab[140].pvBloAdr = &gCSnd_tSendToEvision7;

    gCSnd_tDataSendToC1.tXAdr.cptCfg = &gCSnd_ctCfg_DataSendToC1;
    g_atObjTab[141].u16Type = (TUint16)STD_BLO_CSND;
    g_atObjTab[141].pvBloAdr = &gCSnd_tDataSendToC1;

    gCSnd_tMsg2SendToEvision7.tXAdr.cptCfg = &gCSnd_ctCfg_Msg2SendToEvision7;
    g_atObjTab[142].u16Type = (TUint16)STD_BLO_CSND;
    g_atObjTab[142].pvBloAdr = &gCSnd_tMsg2SendToEvision7;

    gCSnd_tMsg3SendToEvision7.tXAdr.cptCfg = &gCSnd_ctCfg_Msg3SendToEvision7;
    g_atObjTab[143].u16Type = (TUint16)STD_BLO_CSND;
    g_atObjTab[143].pvBloAdr = &gCSnd_tMsg3SendToEvision7;

    gCSnd_tMessage_02.tXAdr.cptCfg = &gCSnd_ctCfg_Message_02;
    g_atObjTab[144].u16Type = (TUint16)STD_BLO_CSND;
    g_atObjTab[144].pvBloAdr = &gCSnd_tMessage_02;

    gCSnd_tData2SendToC1.tXAdr.cptCfg = &gCSnd_ctCfg_Data2SendToC1;
    g_atObjTab[145].u16Type = (TUint16)STD_BLO_CSND;
    g_atObjTab[145].pvBloAdr = &gCSnd_tData2SendToC1;

    gCSnd_tData3SendToC1.tXAdr.cptCfg = &gCSnd_ctCfg_Data3SendToC1;
    g_atObjTab[146].u16Type = (TUint16)STD_BLO_CSND;
    g_atObjTab[146].pvBloAdr = &gCSnd_tData3SendToC1;

    gCSnd_tMsg4C0SendToEvision7.tXAdr.cptCfg = &gCSnd_ctCfg_Msg4C0SendToEvision7;
    g_atObjTab[147].u16Type = (TUint16)STD_BLO_CSND;
    g_atObjTab[147].pvBloAdr = &gCSnd_tMsg4C0SendToEvision7;

    gCSnd_tFailuresC0SendToC1.tXAdr.cptCfg = &gCSnd_ctCfg_FailuresC0SendToC1;
    g_atObjTab[148].u16Type = (TUint16)STD_BLO_CSND;
    g_atObjTab[148].pvBloAdr = &gCSnd_tFailuresC0SendToC1;

    gCSnd_tMsg5C0SendToEvision7.tXAdr.cptCfg = &gCSnd_ctCfg_Msg5C0SendToEvision7;
    g_atObjTab[149].u16Type = (TUint16)STD_BLO_CSND;
    g_atObjTab[149].pvBloAdr = &gCSnd_tMsg5C0SendToEvision7;

    gCSnd_tMsg6C0SendToEvision7.tXAdr.cptCfg = &gCSnd_ctCfg_Msg6C0SendToEvision7;
    g_atObjTab[150].u16Type = (TUint16)STD_BLO_CSND;
    g_atObjTab[150].pvBloAdr = &gCSnd_tMsg6C0SendToEvision7;

    gCSnd_tMsg7C0SendToEvision7.tXAdr.cptCfg = &gCSnd_ctCfg_Msg7C0SendToEvision7;
    g_atObjTab[151].u16Type = (TUint16)STD_BLO_CSND;
    g_atObjTab[151].pvBloAdr = &gCSnd_tMsg7C0SendToEvision7;

    gCSnd_tMsg8C0SendToEvision7.tXAdr.cptCfg = &gCSnd_ctCfg_Msg8C0SendToEvision7;
    g_atObjTab[152].u16Type = (TUint16)STD_BLO_CSND;
    g_atObjTab[152].pvBloAdr = &gCSnd_tMsg8C0SendToEvision7;

    gCSnd_tMsg9C0SendToEvision7.tXAdr.cptCfg = &gCSnd_ctCfg_Msg9C0SendToEvision7;
    g_atObjTab[153].u16Type = (TUint16)STD_BLO_CSND;
    g_atObjTab[153].pvBloAdr = &gCSnd_tMsg9C0SendToEvision7;

    gCSnd_tMsg9C0SendToEvision7_1.tXAdr.cptCfg = &gCSnd_ctCfg_Msg9C0SendToEvision7_1;
    g_atObjTab[154].u16Type = (TUint16)STD_BLO_CSND;
    g_atObjTab[154].pvBloAdr = &gCSnd_tMsg9C0SendToEvision7_1;

    gCSnd_tMsg2C0SendToOpus.tXAdr.cptCfg = &gCSnd_ctCfg_Msg2C0SendToOpus;
    g_atObjTab[155].u16Type = (TUint16)STD_BLO_CSND;
    g_atObjTab[155].pvBloAdr = &gCSnd_tMsg2C0SendToOpus;

    gCSnd_tMsg3C0SendToOpus.tXAdr.cptCfg = &gCSnd_ctCfg_Msg3C0SendToOpus;
    g_atObjTab[156].u16Type = (TUint16)STD_BLO_CSND;
    g_atObjTab[156].pvBloAdr = &gCSnd_tMsg3C0SendToOpus;

    gCSnd_tMsg4C0SendToOpus.tXAdr.cptCfg = &gCSnd_ctCfg_Msg4C0SendToOpus;
    g_atObjTab[157].u16Type = (TUint16)STD_BLO_CSND;
    g_atObjTab[157].pvBloAdr = &gCSnd_tMsg4C0SendToOpus;

    gCSnd_tMsg5C0SendToOpus.tXAdr.cptCfg = &gCSnd_ctCfg_Msg5C0SendToOpus;
    g_atObjTab[158].u16Type = (TUint16)STD_BLO_CSND;
    g_atObjTab[158].pvBloAdr = &gCSnd_tMsg5C0SendToOpus;

    gCSnd_tMsg6C0SendToOpus.tXAdr.cptCfg = &gCSnd_ctCfg_Msg6C0SendToOpus;
    g_atObjTab[159].u16Type = (TUint16)STD_BLO_CSND;
    g_atObjTab[159].pvBloAdr = &gCSnd_tMsg6C0SendToOpus;

    gCSnd_tMsg7C0SendToOpus.tXAdr.cptCfg = &gCSnd_ctCfg_Msg7C0SendToOpus;
    g_atObjTab[160].u16Type = (TUint16)STD_BLO_CSND;
    g_atObjTab[160].pvBloAdr = &gCSnd_tMsg7C0SendToOpus;

    gCSnd_tMsg8C0SendToOpus.tXAdr.cptCfg = &gCSnd_ctCfg_Msg8C0SendToOpus;
    g_atObjTab[161].u16Type = (TUint16)STD_BLO_CSND;
    g_atObjTab[161].pvBloAdr = &gCSnd_tMsg8C0SendToOpus;

    gCSnd_tMsg1C0SendToOpus.tXAdr.cptCfg = &gCSnd_ctCfg_Msg1C0SendToOpus;
    g_atObjTab[162].u16Type = (TUint16)STD_BLO_CSND;
    g_atObjTab[162].pvBloAdr = &gCSnd_tMsg1C0SendToOpus;

    gCSnd_tData4C0SendToC1.tXAdr.cptCfg = &gCSnd_ctCfg_Data4C0SendToC1;
    g_atObjTab[163].u16Type = (TUint16)STD_BLO_CSND;
    g_atObjTab[163].pvBloAdr = &gCSnd_tData4C0SendToC1;

    gCSnd_tMsg11C0SendToEvision7.tXAdr.cptCfg = &gCSnd_ctCfg_Msg11C0SendToEvision7;
    g_atObjTab[164].u16Type = (TUint16)STD_BLO_CSND;
    g_atObjTab[164].pvBloAdr = &gCSnd_tMsg11C0SendToEvision7;

    gCSnd_tMsg9C0SendToOpus.tXAdr.cptCfg = &gCSnd_ctCfg_Msg9C0SendToOpus;
    g_atObjTab[165].u16Type = (TUint16)STD_BLO_CSND;
    g_atObjTab[165].pvBloAdr = &gCSnd_tMsg9C0SendToOpus;

    gCSnd_tMsg10C0SendToOpus.tXAdr.cptCfg = &gCSnd_ctCfg_Msg10C0SendToOpus;
    g_atObjTab[166].u16Type = (TUint16)STD_BLO_CSND;
    g_atObjTab[166].pvBloAdr = &gCSnd_tMsg10C0SendToOpus;

    gCSnd_tSyncFrame.tXAdr.cptCfg = &gCSnd_ctCfg_SyncFrame;
    g_atObjTab[167].u16Type = (TUint16)STD_BLO_CSND;
    g_atObjTab[167].pvBloAdr = &gCSnd_tSyncFrame;

    gCSnd_tMsg12C0SendToEvision7.tXAdr.cptCfg = &gCSnd_ctCfg_Msg12C0SendToEvision7;
    g_atObjTab[168].u16Type = (TUint16)STD_BLO_CSND;
    g_atObjTab[168].pvBloAdr = &gCSnd_tMsg12C0SendToEvision7;

    gCSnd_tMsg13C0SendToEvision7.tXAdr.cptCfg = &gCSnd_ctCfg_Msg13C0SendToEvision7;
    g_atObjTab[169].u16Type = (TUint16)STD_BLO_CSND;
    g_atObjTab[169].pvBloAdr = &gCSnd_tMsg13C0SendToEvision7;

    gCSnd_tDatalogger.tXAdr.cptCfg = &gCSnd_ctCfg_Datalogger;
    g_atObjTab[170].u16Type = (TUint16)STD_BLO_CSND;
    g_atObjTab[170].pvBloAdr = &gCSnd_tDatalogger;

    gCSnd_tSdo_Request_Encodeur_Turret.tXAdr.cptCfg = &gCSnd_ctCfg_Sdo_Request_Encodeur_Turret;
    g_atObjTab[171].u16Type = (TUint16)STD_BLO_CSND;
    g_atObjTab[171].pvBloAdr = &gCSnd_tSdo_Request_Encodeur_Turret;

    gCSnd_tSdo_Request_Encodeur_Turret2.tXAdr.cptCfg = &gCSnd_ctCfg_Sdo_Request_Encodeur_Turret2;
    g_atObjTab[172].u16Type = (TUint16)STD_BLO_CSND;
    g_atObjTab[172].pvBloAdr = &gCSnd_tSdo_Request_Encodeur_Turret2;

    gCSnd_tData5C0SendToC1.tXAdr.cptCfg = &gCSnd_ctCfg_Data5C0SendToC1;
    g_atObjTab[173].u16Type = (TUint16)STD_BLO_CSND;
    g_atObjTab[173].pvBloAdr = &gCSnd_tData5C0SendToC1;

    gCSnd_tMsg11C0SendToOpus.tXAdr.cptCfg = &gCSnd_ctCfg_Msg11C0SendToOpus;
    g_atObjTab[174].u16Type = (TUint16)STD_BLO_CSND;
    g_atObjTab[174].pvBloAdr = &gCSnd_tMsg11C0SendToOpus;

    gCSnd_tMsg14C0SendToEvision7.tXAdr.cptCfg = &gCSnd_ctCfg_Msg14C0SendToEvision7;
    g_atObjTab[175].u16Type = (TUint16)STD_BLO_CSND;
    g_atObjTab[175].pvBloAdr = &gCSnd_tMsg14C0SendToEvision7;

    gCSnd_tMsg15C0SendToEvision7.tXAdr.cptCfg = &gCSnd_ctCfg_Msg15C0SendToEvision7;
    g_atObjTab[176].u16Type = (TUint16)STD_BLO_CSND;
    g_atObjTab[176].pvBloAdr = &gCSnd_tMsg15C0SendToEvision7;

    gCSnd_tHMG_1.tXAdr.cptCfg = &gCSnd_ctCfg_HMG_1;
    g_atObjTab[177].u16Type = (TUint16)STD_BLO_CSND;
    g_atObjTab[177].pvBloAdr = &gCSnd_tHMG_1;

    gCSnd_tHMG_2.tXAdr.cptCfg = &gCSnd_ctCfg_HMG_2;
    g_atObjTab[178].u16Type = (TUint16)STD_BLO_CSND;
    g_atObjTab[178].pvBloAdr = &gCSnd_tHMG_2;

    gCSnd_tHMG_3.tXAdr.cptCfg = &gCSnd_ctCfg_HMG_3;
    g_atObjTab[179].u16Type = (TUint16)STD_BLO_CSND;
    g_atObjTab[179].pvBloAdr = &gCSnd_tHMG_3;

    gCSnd_tDMC_TxSdo.tXAdr.cptCfg = &gCSnd_ctCfg_DMC_TxSdo;
    g_atObjTab[180].u16Type = (TUint16)STD_BLO_CSND;
    g_atObjTab[180].pvBloAdr = &gCSnd_tDMC_TxSdo;

    gCSnd_tNMT.tXAdr.cptCfg = &gCSnd_ctCfg_NMT;
    g_atObjTab[181].u16Type = (TUint16)STD_BLO_CSND;
    g_atObjTab[181].pvBloAdr = &gCSnd_tNMT;

    gCSnd_tDMC_TxPdo1_DC.tXAdr.cptCfg = &gCSnd_ctCfg_DMC_TxPdo1_DC;
    g_atObjTab[182].u16Type = (TUint16)STD_BLO_CSND;
    g_atObjTab[182].pvBloAdr = &gCSnd_tDMC_TxPdo1_DC;

    gCSnd_tDMC_TxPdo2_BCL.tXAdr.cptCfg = &gCSnd_ctCfg_DMC_TxPdo2_BCL;
    g_atObjTab[183].u16Type = (TUint16)STD_BLO_CSND;
    g_atObjTab[183].pvBloAdr = &gCSnd_tDMC_TxPdo2_BCL;

    gCSnd_tData6C0SendToC1.tXAdr.cptCfg = &gCSnd_ctCfg_Data6C0SendToC1;
    g_atObjTab[184].u16Type = (TUint16)STD_BLO_CSND;
    g_atObjTab[184].pvBloAdr = &gCSnd_tData6C0SendToC1;

    gErr_tSpecificErrorC0.tXAdr.cptCfg = &gErr_ctCfg_SpecificErrorC0;
    g_atObjTab[185].u16Type = (TUint16)STD_BLO_ERR;
    g_atObjTab[185].pvBloAdr = &gErr_tSpecificErrorC0;

    gErr_tSpecificErrorC0_2.tXAdr.cptCfg = &gErr_ctCfg_SpecificErrorC0_2;
    g_atObjTab[186].u16Type = (TUint16)STD_BLO_ERR;
    g_atObjTab[186].pvBloAdr = &gErr_tSpecificErrorC0_2;

    gErr_tSpecificErrorC0_3.tXAdr.cptCfg = &gErr_ctCfg_SpecificErrorC0_3;
    g_atObjTab[187].u16Type = (TUint16)STD_BLO_ERR;
    g_atObjTab[187].pvBloAdr = &gErr_tSpecificErrorC0_3;

    gErr_tSpecificErrorC0_4.tXAdr.cptCfg = &gErr_ctCfg_SpecificErrorC0_4;
    g_atObjTab[188].u16Type = (TUint16)STD_BLO_ERR;
    g_atObjTab[188].pvBloAdr = &gErr_tSpecificErrorC0_4;

    gErr_tSpecificErrorC0_5.tXAdr.cptCfg = &gErr_ctCfg_SpecificErrorC0_5;
    g_atObjTab[189].u16Type = (TUint16)STD_BLO_ERR;
    g_atObjTab[189].pvBloAdr = &gErr_tSpecificErrorC0_5;

    gErr_tSpecificErrorC0_6.tXAdr.cptCfg = &gErr_ctCfg_SpecificErrorC0_6;
    g_atObjTab[190].u16Type = (TUint16)STD_BLO_ERR;
    g_atObjTab[190].pvBloAdr = &gErr_tSpecificErrorC0_6;

    gErr_tSpecificErrorC0_7.tXAdr.cptCfg = &gErr_ctCfg_SpecificErrorC0_7;
    g_atObjTab[191].u16Type = (TUint16)STD_BLO_ERR;
    g_atObjTab[191].pvBloAdr = &gErr_tSpecificErrorC0_7;

    gErr_tSpecificErrorC0_8.tXAdr.cptCfg = &gErr_ctCfg_SpecificErrorC0_8;
    g_atObjTab[192].u16Type = (TUint16)STD_BLO_ERR;
    g_atObjTab[192].pvBloAdr = &gErr_tSpecificErrorC0_8;

    gErr_tSpecificErrorC0_9.tXAdr.cptCfg = &gErr_ctCfg_SpecificErrorC0_9;
    g_atObjTab[193].u16Type = (TUint16)STD_BLO_ERR;
    g_atObjTab[193].pvBloAdr = &gErr_tSpecificErrorC0_9;

    gSil_tEcu0_Safety.tXAdr.cptCfg = &gSil_ctCfg_Ecu0_Safety;
    g_atObjTab[194].u16Type = (TUint16)STD_BLO_SIL;
    g_atObjTab[194].pvBloAdr = &gSil_tEcu0_Safety;

    gSil_tEcu1_Safety.tXAdr.cptCfg = &gSil_ctCfg_Ecu1_Safety;
    g_atObjTab[195].u16Type = (TUint16)STD_BLO_SIL;
    g_atObjTab[195].pvBloAdr = &gSil_tEcu1_Safety;

    gSil_tEcuSil.tXAdr.cptCfg = &gSil_ctCfg_EcuSil;
    g_atObjTab[196].u16Type = (TUint16)STD_BLO_SIL;
    g_atObjTab[196].pvBloAdr = &gSil_tEcuSil;

    gSil_tSensorSupply.tXAdr.cptCfg = &gSil_ctCfg_SensorSupply;
    g_atObjTab[197].u16Type = (TUint16)STD_BLO_SIL;
    g_atObjTab[197].pvBloAdr = &gSil_tSensorSupply;

    gSil_tErrList.tXAdr.cptCfg = &gSil_ctCfg_ErrList;
    g_atObjTab[198].u16Type = (TUint16)STD_BLO_SIL;
    g_atObjTab[198].pvBloAdr = &gSil_tErrList;

    g_atObjTab[199].u16Type  = (TUint16)STD_STU_CREC;
    g_atObjTab[199].pvBloAdr = (TVoid*)&g_ctCanSigRecRootTab;

    g_atObjTab[200].u16Type  = (TUint16)STD_STU_DB;
    g_atObjTab[200].pvBloAdr = (TVoid*)&gDb_ctRoot;

    g_atObjTab[201].u16Type  = (TUint16)STD_STU_VER;
    g_atObjTab[201].pvBloAdr = (TVoid*)&gVer_tInf;

    g_atObjTab[202].u16Type  = (TUint16)STD_STU_PIN;
    g_atObjTab[202].pvBloAdr = (TVoid*)&gPinInfo_ctAppPin;

    g_atObjTab[203].u16Type  = (TUint16)STD_STU_ECU;
    g_atObjTab[203].pvBloAdr = (TVoid*)&gEcu_tSys;

    g_atObjTab[204].u16Type  = (TUint16)STD_STU_HCP_OUT;
    g_atObjTab[204].pvBloAdr = (TVoid*)&gCore_tOut;

    g_atObjTab[205].u16Type = (TUint16)STD_STU_HCP_INP;
    g_atObjTab[205].pvBloAdr = (TVoid*)&gCore_tInp;

    vAcbAutoCodeAppend(vAcbAutoCode);
}

TVoid vAcbAutoCodeStartUp(TVoid)
{
    eBloCSndChangeCanIdInc(&gCSnd_tRadioCmd, 0x18FF0002 );
    eBloCSndChangeCanIdInc(&gCSnd_tDataSendToC1, 0x18FF0006 );
    eBloCSndChangeCanIdInc(&gCSnd_tData2SendToC1, 0x18FF0008 );
    eBloCSndChangeCanIdInc(&gCSnd_tData3SendToC1, 0x18FF000C );
    eBloCSndChangeCanIdInc(&gCSnd_tFailuresC0SendToC1, 0x18FF0014 );
    eBloCSndChangeCanIdInc(&gCSnd_tData4C0SendToC1, 0x18FF0016 );
    eBloCSndChangeCanIdInc(&gCSnd_tData5C0SendToC1, 0x18FF0020 );
    eBloCRcvChangeCanIdInc(&gCRcv_tDataRcvFromC1, 0x18FF0004 );
    eBloCRcvChangeCanIdInc(&gCRcv_tSRDO2_48XS, 0x104 );
    eBloCRcvChangeCanIdInc(&gCRcv_tSRDO3_48XS, 0x106 );
    eBloCRcvChangeCanIdInc(&gCRcv_tData2RdvFromC1, 0x18FF000A );
    eBloCRcvChangeCanIdInc(&gCRcv_tSRDO1_48XS, 0x114 );
    eBloCRcvChangeCanIdInc(&gCRcv_tData3RcvFromC1, 0x18FF000E );
    eBloCRcvChangeCanIdInc(&gCRcv_tFAiluresC1SendToC0, 0x18FF0012 );
    eBloCRcvChangeCanIdInc(&gCRcv_tData4C1SendToC0, 0x18FF0018 );
    eBloCRcvChangeCanIdInc(&gCRcv_tData5C1SendToC0, 0x18FF001C );
    eBloCRcvChangeCanIdInc(&gCRcv_tSRDO5_48XS, 0x10A );
}

TVoid vAcbAutoCode(TVoid)
{
    vAcbPhasenCode(NULL, NULL, vAcbAutoCodeStartUp, NULL);
}
