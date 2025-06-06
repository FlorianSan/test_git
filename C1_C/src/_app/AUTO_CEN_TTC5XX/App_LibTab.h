//**************************************************************************************************
//! @crc        3405752997
//! @file       App_LibTab.h
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

#ifndef __APP_LIBTAB_H__
#define __APP_LIBTAB_H__

// INCLUDES ========================================================================================
#include <ItfCoreAllObj.h>

// GLOBAL VARIABLES ================================================================================

TVoid vAppAutoLibTable( TVoid );


// BLOCKs
extern        TBloInResist gInResist_tGasGauge;
extern const TInResistCfg gInResist_ctCfg_GasGauge;
extern        TBloSwiNo gSwiNo_tActiveHelp;
extern const TSwiNoCfg gSwiNo_ctCfg_ActiveHelp;
extern        TBloSwiNo gSwiNo_tTurretPostSelector;
extern const TSwiNoCfg gSwiNo_ctCfg_TurretPostSelector;
extern        TBloSwiNo gSwiNo_tRadioPostSelector;
extern const TSwiNoCfg gSwiNo_ctCfg_RadioPostSelector;
extern        TBloSwiNo gSwiNo_tNacellePostSelector;
extern const TSwiNoCfg gSwiNo_ctCfg_NacellePostSelector;
extern        TBloSwiNo gSwiNo_tDeltaArmFoldedSensor;
extern const TSwiNoCfg gSwiNo_ctCfg_DeltaArmFoldedSensor;
extern        TBloSwiNo gSwiNo_tBoomArmFoldedSensor;
extern const TSwiNoCfg gSwiNo_ctCfg_BoomArmFoldedSensor;
extern        TBloSwiNo gSwiNo_tAlternatorChargeOK;
extern const TSwiNoCfg gSwiNo_ctCfg_AlternatorChargeOK;
extern        TBloSwiNo gSwiNo_tAru1;
extern const TSwiNoCfg gSwiNo_ctCfg_Aru1;
extern        TBloSwiNo gSwiNo_tAru2;
extern const TSwiNoCfg gSwiNo_ctCfg_Aru2;
extern        TBloSwiNo gSwiNo_tEntryTelescopeFdcSensor;
extern const TSwiNoCfg gSwiNo_ctCfg_EntryTelescopeFdcSensor;
extern        TBloSwiNo gSwiNo_tFaultPvgDeltaArm;
extern const TSwiNoCfg gSwiNo_ctCfg_FaultPvgDeltaArm;
extern        TBloSwiNo gSwiNo_tFaultPvgArrowArm;
extern const TSwiNoCfg gSwiNo_ctCfg_FaultPvgArrowArm;
extern        TBloSwiNo gSwiNo_tFaultPvgTelescopeArm;
extern const TSwiNoCfg gSwiNo_ctCfg_FaultPvgTelescopeArm;
extern        TBloSwiNo gSwiNo_tFaultPvgEvProTOR;
extern const TSwiNoCfg gSwiNo_ctCfg_FaultPvgEvProTOR;
extern        TBloSwiNo gSwiNo_tStarterMotorState;
extern const TSwiNoCfg gSwiNo_ctCfg_StarterMotorState;
extern        TBloPro gPro_tEvPropGenerator;
extern const TProCfg gPro_ctCfg_EvPropGenerator;
extern        TBloDig gDig_tBlueFire;
extern const TDigCfg gDig_ctCfg_BlueFire;
extern        TBloDig gDig_tOrangeFlashingLight;
extern const TDigCfg gDig_ctCfg_OrangeFlashingLight;
extern        TBloDig gDig_tEvBypass;
extern const TDigCfg gDig_ctCfg_EvBypass;
extern        TBloDig gDig_tSupplyPvgDeltaArm;
extern const TDigCfg gDig_ctCfg_SupplyPvgDeltaArm;
extern        TBloDig gDig_tSupplyPvgBoomArm;
extern const TDigCfg gDig_ctCfg_SupplyPvgBoomArm;
extern        TBloDig gDig_tSupplyPvgTelescopeArm;
extern const TDigCfg gDig_ctCfg_SupplyPvgTelescopeArm;
extern        TBloDig gDig_tSupplyPvgPropEvTOR;
extern const TDigCfg gDig_ctCfg_SupplyPvgPropEvTOR;
extern        TBloDig gDig_tOverloadSecurity;
extern const TDigCfg gDig_ctCfg_OverloadSecurity;
extern        TBloDig gDig_tSupllyTorSensors;
extern const TDigCfg gDig_ctCfg_SupllyTorSensors;
extern        TBloDig gDig_tSupllyAnaSensors;
extern const TDigCfg gDig_ctCfg_SupllyAnaSensors;
extern        TBloDig gDig_tEvSyncRotation;
extern const TDigCfg gDig_ctCfg_EvSyncRotation;
extern        TBloDig gDig_tEvSelectorRotTurret;
extern const TDigCfg gDig_ctCfg_EvSelectorRotTurret;
extern        TBloDig gDig_tNoisemaker;
extern const TDigCfg gDig_ctCfg_Noisemaker;
extern        TBloDig gDig_tEvRotTurretClkwise;
extern const TDigCfg gDig_ctCfg_EvRotTurretClkwise;
extern        TBloDig gDig_tEvRotTurretCtClkwise;
extern const TDigCfg gDig_ctCfg_EvRotTurretCtClkwise;
extern        TBloDig gDig_tEvRotBasketCtClkwise;
extern const TDigCfg gDig_ctCfg_EvRotBasketCtClkwise;
extern        TBloDig gDig_tEvRotBasketClkwise;
extern const TDigCfg gDig_ctCfg_EvRotBasketClkwise;
extern        TBloDig gDig_tEvUpPendular;
extern const TDigCfg gDig_ctCfg_EvUpPendular;
extern        TBloDig gDig_tEvDownPendular;
extern const TDigCfg gDig_ctCfg_EvDownPendular;
extern        TBloDig gDig_tEvUpInclinaisonBasket;
extern const TDigCfg gDig_ctCfg_EvUpInclinaisonBasket;
extern        TBloDig gDig_tEvDownInclinaisonBasket;
extern const TDigCfg gDig_ctCfg_EvDownInclinaisonBasket;
extern        TBloDig gDig_tReturnLowSideEvProGenerator;
extern const TDigCfg gDig_ctCfg_ReturnLowSideEvProGenerator;
extern        TBloDig gDig_tWhiteLightAv15746;
extern const TDigCfg gDig_ctCfg_WhiteLightAv15746;
extern        TBloDig gDig_tEvCrawlerOnly;
extern const TDigCfg gDig_ctCfg_EvCrawlerOnly;
extern        TBloDig gDig_tRelayReloadWithGenerator;
extern const TDigCfg gDig_ctCfg_RelayReloadWithGenerator;
extern        TBloDig gDig_tEvDevMvts;
extern const TDigCfg gDig_ctCfg_EvDevMvts;
extern        TBloDig gDig_tAntiStartupCommand;
extern const TDigCfg gDig_ctCfg_AntiStartupCommand;
extern        TBloDig gDig_tEvBoostRegen;
extern const TDigCfg gDig_ctCfg_EvBoostRegen;
extern        TBloCRcv gCRcv_tPDO1_48XS;
extern const TCRcvCfg gCRcv_ctCfg_PDO1_48XS;
extern        TBloCRcv gCRcv_tPDO2_48XS;
extern const TCRcvCfg gCRcv_ctCfg_PDO2_48XS;
extern        TBloCRcv gCRcv_tPDO3_48XS;
extern const TCRcvCfg gCRcv_ctCfg_PDO3_48XS;
extern        TBloCRcv gCRcv_tPDO4_48XS;
extern const TCRcvCfg gCRcv_ctCfg_PDO4_48XS;
extern        TBloCRcv gCRcv_tSRDO1_48XS;
extern const TCRcvCfg gCRcv_ctCfg_SRDO1_48XS;
extern        TBloCRcv gCRcv_tSRDO2_48XS;
extern const TCRcvCfg gCRcv_ctCfg_SRDO2_48XS;
extern        TBloCRcv gCRcv_tSRDO3_48XS;
extern const TCRcvCfg gCRcv_ctCfg_SRDO3_48XS;
extern        TBloCRcv gCRcv_tHearbeat_48XS;
extern const TCRcvCfg gCRcv_ctCfg_Hearbeat_48XS;
extern        TBloCRcv gCRcv_tHearbeat_Telescope;
extern const TCRcvCfg gCRcv_ctCfg_Hearbeat_Telescope;
extern        TBloCRcv gCRcv_tTelescopeFrame1;
extern const TCRcvCfg gCRcv_ctCfg_TelescopeFrame1;
extern        TBloCRcv gCRcv_tTelescopeFrame2;
extern const TCRcvCfg gCRcv_ctCfg_TelescopeFrame2;
extern        TBloCRcv gCRcv_tSendToC1RadioCmd;
extern const TCRcvCfg gCRcv_ctCfg_SendToC1RadioCmd;
extern        TBloCRcv gCRcv_tDataSendToC1;
extern const TCRcvCfg gCRcv_ctCfg_DataSendToC1;
extern        TBloCRcv gCRcv_tData2SendToC1;
extern const TCRcvCfg gCRcv_ctCfg_Data2SendToC1;
extern        TBloCRcv gCRcv_tMsg1C0RcvFromEvision7;
extern const TCRcvCfg gCRcv_ctCfg_Msg1C0RcvFromEvision7;
extern        TBloCRcv gCRcv_tData3SendToC1;
extern const TCRcvCfg gCRcv_ctCfg_Data3SendToC1;
extern        TBloCRcv gCRcv_tFailuresC0SendToC1;
extern const TCRcvCfg gCRcv_ctCfg_FailuresC0SendToC1;
extern        TBloCRcv gCRcv_tMsg1RcvFromOpus;
extern const TCRcvCfg gCRcv_ctCfg_Msg1RcvFromOpus;
extern        TBloCRcv gCRcv_tData4C0SendToC1;
extern const TCRcvCfg gCRcv_ctCfg_Data4C0SendToC1;
extern        TBloCRcv gCRcv_tPDO5_48XS;
extern const TCRcvCfg gCRcv_ctCfg_PDO5_48XS;
extern        TBloCRcv gCRcv_tPDO6_48XS;
extern const TCRcvCfg gCRcv_ctCfg_PDO6_48XS;
extern        TBloCRcv gCRcv_tSdo_Answer_48XS;
extern const TCRcvCfg gCRcv_ctCfg_Sdo_Answer_48XS;
extern        TBloCRcv gCRcv_tET1;
extern const TCRcvCfg gCRcv_ctCfg_ET1;
extern        TBloCRcv gCRcv_tEFL_P1;
extern const TCRcvCfg gCRcv_ctCfg_EFL_P1;
extern        TBloCRcv gCRcv_tEEC1;
extern const TCRcvCfg gCRcv_ctCfg_EEC1;
extern        TBloCRcv gCRcv_tVEP3;
extern const TCRcvCfg gCRcv_ctCfg_VEP3;
extern        TBloCRcv gCRcv_tEOI;
extern const TCRcvCfg gCRcv_ctCfg_EOI;
extern        TBloCRcv gCRcv_tVEP1;
extern const TCRcvCfg gCRcv_ctCfg_VEP1;
extern        TBloCRcv gCRcv_tDLCD1;
extern const TCRcvCfg gCRcv_ctCfg_DLCD1;
extern        TBloCRcv gCRcv_tSHUTDN;
extern const TCRcvCfg gCRcv_ctCfg_SHUTDN;
extern        TBloCRcv gCRcv_tData5C0SendToC1;
extern const TCRcvCfg gCRcv_ctCfg_Data5C0SendToC1;
extern        TBloCSnd gCSnd_tSRDO4_48XS;
extern const TCSndCfg gCSnd_ctCfg_SRDO4_48XS;
extern        TBloCSnd gCSnd_tStart_48XS;
extern const TCSndCfg gCSnd_ctCfg_Start_48XS;
extern        TBloCSnd gCSnd_tSync_48XS;
extern const TCSndCfg gCSnd_ctCfg_Sync_48XS;
extern        TBloCSnd gCSnd_tDataRcvFromC1;
extern const TCSndCfg gCSnd_ctCfg_DataRcvFromC1;
extern        TBloCSnd gCSnd_tMsg1C1SendToEvision7_1;
extern const TCSndCfg gCSnd_ctCfg_Msg1C1SendToEvision7_1;
extern        TBloCSnd gCSnd_tMsg2C1SendToEvision7_1;
extern const TCSndCfg gCSnd_ctCfg_Msg2C1SendToEvision7_1;
extern        TBloCSnd gCSnd_tMsg3C1SendToEvision7_1;
extern const TCSndCfg gCSnd_ctCfg_Msg3C1SendToEvision7_1;
extern        TBloCSnd gCSnd_tData2RdvFromC1;
extern const TCSndCfg gCSnd_ctCfg_Data2RdvFromC1;
extern        TBloCSnd gCSnd_tMsg3C1SendToEvision7;
extern const TCSndCfg gCSnd_ctCfg_Msg3C1SendToEvision7;
extern        TBloCSnd gCSnd_tMsg4C1SendToEvision7;
extern const TCSndCfg gCSnd_ctCfg_Msg4C1SendToEvision7;
extern        TBloCSnd gCSnd_tData3RcvFromC1;
extern const TCSndCfg gCSnd_ctCfg_Data3RcvFromC1;
extern        TBloCSnd gCSnd_tFAiluresC1SendToC0;
extern const TCSndCfg gCSnd_ctCfg_FAiluresC1SendToC0;
extern        TBloCSnd gCSnd_tMsg5C1SendToEvision7;
extern const TCSndCfg gCSnd_ctCfg_Msg5C1SendToEvision7;
extern        TBloCSnd gCSnd_tMsg6C1SendToEvision7;
extern const TCSndCfg gCSnd_ctCfg_Msg6C1SendToEvision7;
extern        TBloCSnd gCSnd_tMsg7C1SendToEvision7;
extern const TCSndCfg gCSnd_ctCfg_Msg7C1SendToEvision7;
extern        TBloCSnd gCSnd_tMsg8C1SendToEvision7;
extern const TCSndCfg gCSnd_ctCfg_Msg8C1SendToEvision7;
extern        TBloCSnd gCSnd_tMsg9C1SendToEvision7;
extern const TCSndCfg gCSnd_ctCfg_Msg9C1SendToEvision7;
extern        TBloCSnd gCSnd_tMsg10C1SendToEvision7;
extern const TCSndCfg gCSnd_ctCfg_Msg10C1SendToEvision7;
extern        TBloCSnd gCSnd_tMsg11C1SendToEvision7;
extern const TCSndCfg gCSnd_ctCfg_Msg11C1SendToEvision7;
extern        TBloCSnd gCSnd_tMsg1C1SendToOpus;
extern const TCSndCfg gCSnd_ctCfg_Msg1C1SendToOpus;
extern        TBloCSnd gCSnd_tMsg2C1SendToOpus;
extern const TCSndCfg gCSnd_ctCfg_Msg2C1SendToOpus;
extern        TBloCSnd gCSnd_tMsg3C1SendToOpus;
extern const TCSndCfg gCSnd_ctCfg_Msg3C1SendToOpus;
extern        TBloCSnd gCSnd_tMsg4C1SendToOpus;
extern const TCSndCfg gCSnd_ctCfg_Msg4C1SendToOpus;
extern        TBloCSnd gCSnd_tMsg5C1SendToOpus;
extern const TCSndCfg gCSnd_ctCfg_Msg5C1SendToOpus;
extern        TBloCSnd gCSnd_tMsg6C1SendToOpus;
extern const TCSndCfg gCSnd_ctCfg_Msg6C1SendToOpus;
extern        TBloCSnd gCSnd_tMsg7C1SendToOpus;
extern const TCSndCfg gCSnd_ctCfg_Msg7C1SendToOpus;
extern        TBloCSnd gCSnd_tMsg8C1SendToOpus;
extern const TCSndCfg gCSnd_ctCfg_Msg8C1SendToOpus;
extern        TBloCSnd gCSnd_tData4C1SendToC0;
extern const TCSndCfg gCSnd_ctCfg_Data4C1SendToC0;
extern        TBloCSnd gCSnd_tMsg12C1SendToEvision7;
extern const TCSndCfg gCSnd_ctCfg_Msg12C1SendToEvision7;
extern        TBloCSnd gCSnd_tHeartbeat_C1;
extern const TCSndCfg gCSnd_ctCfg_Heartbeat_C1;
extern        TBloCSnd gCSnd_tMsg13C1SendToEvision7;
extern const TCSndCfg gCSnd_ctCfg_Msg13C1SendToEvision7;
extern        TBloCSnd gCSnd_tSdo_Request_48XS;
extern const TCSndCfg gCSnd_ctCfg_Sdo_Request_48XS;
extern        TBloCSnd gCSnd_tTSC1;
extern const TCSndCfg gCSnd_ctCfg_TSC1;
extern        TBloCSnd gCSnd_tEBC1;
extern const TCSndCfg gCSnd_ctCfg_EBC1;
extern        TBloCSnd gCSnd_tData5C1SendToC0;
extern const TCSndCfg gCSnd_ctCfg_Data5C1SendToC0;
extern        TBloCSnd gCSnd_tMsg9C1SendToOpus;
extern const TCSndCfg gCSnd_ctCfg_Msg9C1SendToOpus;
extern        TBloCSnd gCSnd_tMsg14C1SendToEvision7;
extern const TCSndCfg gCSnd_ctCfg_Msg14C1SendToEvision7;
extern        TBloErr gErr_tSpecificErrorC1;
extern const TErrCfg gErr_ctCfg_SpecificErrorC1;
extern        TBloErr gErr_tSpecificErrorC1_2;
extern const TErrCfg gErr_ctCfg_SpecificErrorC1_2;
extern        TBloErr gErr_tSpecificErrorC1_3;
extern const TErrCfg gErr_ctCfg_SpecificErrorC1_3;
extern        TBloErr gErr_tSpecificErrorC1_4;
extern const TErrCfg gErr_ctCfg_SpecificErrorC1_4;
extern        TBloErr gErr_tSpecificErrorC1_5;
extern const TErrCfg gErr_ctCfg_SpecificErrorC1_5;
extern        TBloErr gErr_tSpecificErrorC1_6;
extern const TErrCfg gErr_ctCfg_SpecificErrorC1_6;
extern        TBloErr gErr_tSpecificErrorC1_7;
extern const TErrCfg gErr_ctCfg_SpecificErrorC1_7;
extern        TBloErr gErr_tSpecificErrorC1_8;
extern const TErrCfg gErr_ctCfg_SpecificErrorC1_8;
extern        TBloInCurDbl gInCurDbl_tDeltaArmAngularSensor;
extern const TInCurDblCfg gInCurDbl_ctCfg_DeltaArmAngularSensor;
extern        TBloInCurDbl gInCurDbl_tArrowArmAngularSensor;
extern const TInCurDblCfg gInCurDbl_ctCfg_ArrowArmAngularSensor;
extern        TBloCBus gCBus_tCAN_BUS0;
extern const TCBusCfg gCBus_ctCfg_CAN_BUS0;
extern        TBloCBus gCBus_tCAN_BUS1;
extern const TCBusCfg gCBus_ctCfg_CAN_BUS1;
extern        TBloCBus gCBus_tCAN_BUS2;
extern const TCBusCfg gCBus_ctCfg_CAN_BUS2;
extern        TBloCBuf gCBuf_tCBUS2_CBUF_SND_1;
extern const TCBufCfg gCBuf_ctCfg_CBUS2_CBUF_SND_1;
extern        TBloCBuf gCBuf_tCBUS2_CBUF_RCV_1;
extern const TCBufCfg gCBuf_ctCfg_CBUS2_CBUF_RCV_1;
extern        TBloInCur gInCur_tTransmission1PressureSensor;
extern const TInCurCfg gInCur_ctCfg_Transmission1PressureSensor;
extern        TBloInCur gInCur_tTransmission2PressureSensor;
extern const TInCurCfg gInCur_ctCfg_Transmission2PressureSensor;
extern        TBloInCur gInCur_tBypassPressureSensor;
extern const TInCurCfg gInCur_ctCfg_BypassPressureSensor;
extern        TBloInCur gInCur_tOilTankTemperature;
extern const TInCurCfg gInCur_ctCfg_OilTankTemperature;
extern        TBloOutVoltPro gOutVoltPro_tPvgDeltaArm;
extern const TOutVoltProCfg gOutVoltPro_ctCfg_PvgDeltaArm;
extern        TBloOutVoltPro gOutVoltPro_tPvgArrowArm;
extern const TOutVoltProCfg gOutVoltPro_ctCfg_PvgArrowArm;
extern        TBloOutVoltPro gOutVoltPro_tPvgTelescopeArm;
extern const TOutVoltProCfg gOutVoltPro_ctCfg_PvgTelescopeArm;
extern        TBloOutVoltPro gOutVoltPro_tPvgPropEvTOR;
extern const TOutVoltProCfg gOutVoltPro_ctCfg_PvgPropEvTOR;
extern        TBloSil gSil_tEcu0_Safety;
extern const TSilCfg gSil_ctCfg_Ecu0_Safety;
extern        TBloSil gSil_tEcu1_Safety;
extern const TSilCfg gSil_ctCfg_Ecu1_Safety;
extern        TBloSil gSil_tEcuSil;
extern const TSilCfg gSil_ctCfg_EcuSil;
extern        TBloSil gSil_tSensorSupply;
extern const TSilCfg gSil_ctCfg_SensorSupply;
extern        TBloSil gSil_tErrList;
extern const TSilCfg gSil_ctCfg_ErrList;

// STRUCTs


#endif // __APP_LIBTAB_H__

