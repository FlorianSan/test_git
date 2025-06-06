//**************************************************************************************************
//! @crc        4095526285
//! @file       App_LibTab.c
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

// INCLUDES ========================================================================================
#include <ItfCoreLibTab.h>
#include <App_LibTab.h>
#include <ItfAppCode.h>

// GLOBAL VARIABLES ================================================================================
// STRUC-BLOCK-Itf
TCoreInp  gCore_tInp;
TCoreOut  gCore_tOut;
TBloInResist gInResist_tGasGauge;
TBloSwiNo gSwiNo_tActiveHelp;
TBloSwiNo gSwiNo_tTurretPostSelector;
TBloSwiNo gSwiNo_tRadioPostSelector;
TBloSwiNo gSwiNo_tNacellePostSelector;
TBloSwiNo gSwiNo_tDeltaArmFoldedSensor;
TBloSwiNo gSwiNo_tBoomArmFoldedSensor;
TBloSwiNo gSwiNo_tAlternatorChargeOK;
TBloSwiNo gSwiNo_tAru1;
TBloSwiNo gSwiNo_tAru2;
TBloSwiNo gSwiNo_tEntryTelescopeFdcSensor;
TBloSwiNo gSwiNo_tFaultPvgDeltaArm;
TBloSwiNo gSwiNo_tFaultPvgArrowArm;
TBloSwiNo gSwiNo_tFaultPvgTelescopeArm;
TBloSwiNo gSwiNo_tFaultPvgEvProTOR;
TBloSwiNo gSwiNo_tStarterMotorState;
TBloPro gPro_tEvPropGenerator;
TBloDig gDig_tBlueFire;
TBloDig gDig_tOrangeFlashingLight;
TBloDig gDig_tEvBypass;
TBloDig gDig_tSupplyPvgDeltaArm;
TBloDig gDig_tSupplyPvgBoomArm;
TBloDig gDig_tSupplyPvgTelescopeArm;
TBloDig gDig_tSupplyPvgPropEvTOR;
TBloDig gDig_tOverloadSecurity;
TBloDig gDig_tSupllyTorSensors;
TBloDig gDig_tSupllyAnaSensors;
TBloDig gDig_tEvSyncRotation;
TBloDig gDig_tEvSelectorRotTurret;
TBloDig gDig_tNoisemaker;
TBloDig gDig_tEvRotTurretClkwise;
TBloDig gDig_tEvRotTurretCtClkwise;
TBloDig gDig_tEvRotBasketCtClkwise;
TBloDig gDig_tEvRotBasketClkwise;
TBloDig gDig_tEvUpPendular;
TBloDig gDig_tEvDownPendular;
TBloDig gDig_tEvUpInclinaisonBasket;
TBloDig gDig_tEvDownInclinaisonBasket;
TBloDig gDig_tReturnLowSideEvProGenerator;
TBloDig gDig_tWhiteLightAv15746;
TBloDig gDig_tEvCrawlerOnly;
TBloDig gDig_tRelayReloadWithGenerator;
TBloDig gDig_tEvDevMvts;
TBloDig gDig_tAntiStartupCommand;
TBloDig gDig_tEvBoostRegen;
TBloCRcv gCRcv_tPDO1_48XS;
TBloCRcv gCRcv_tPDO2_48XS;
TBloCRcv gCRcv_tPDO3_48XS;
TBloCRcv gCRcv_tPDO4_48XS;
TBloCRcv gCRcv_tSRDO1_48XS;
TBloCRcv gCRcv_tSRDO2_48XS;
TBloCRcv gCRcv_tSRDO3_48XS;
TBloCRcv gCRcv_tHearbeat_48XS;
TBloCRcv gCRcv_tHearbeat_Telescope;
TBloCRcv gCRcv_tTelescopeFrame1;
TBloCRcv gCRcv_tTelescopeFrame2;
TBloCRcv gCRcv_tSendToC1RadioCmd;
TBloCRcv gCRcv_tDataSendToC1;
TBloCRcv gCRcv_tData2SendToC1;
TBloCRcv gCRcv_tMsg1C0RcvFromEvision7;
TBloCRcv gCRcv_tData3SendToC1;
TBloCRcv gCRcv_tFailuresC0SendToC1;
TBloCRcv gCRcv_tMsg1RcvFromOpus;
TBloCRcv gCRcv_tData4C0SendToC1;
TBloCRcv gCRcv_tPDO5_48XS;
TBloCRcv gCRcv_tPDO6_48XS;
TBloCRcv gCRcv_tSdo_Answer_48XS;
TBloCRcv gCRcv_tET1;
TBloCRcv gCRcv_tEFL_P1;
TBloCRcv gCRcv_tEEC1;
TBloCRcv gCRcv_tVEP3;
TBloCRcv gCRcv_tEOI;
TBloCRcv gCRcv_tVEP1;
TBloCRcv gCRcv_tDLCD1;
TBloCRcv gCRcv_tSHUTDN;
TBloCRcv gCRcv_tData5C0SendToC1;
TBloCSnd gCSnd_tSRDO4_48XS;
TBloCSnd gCSnd_tStart_48XS;
TBloCSnd gCSnd_tSync_48XS;
TBloCSnd gCSnd_tDataRcvFromC1;
TBloCSnd gCSnd_tMsg1C1SendToEvision7_1;
TBloCSnd gCSnd_tMsg2C1SendToEvision7_1;
TBloCSnd gCSnd_tMsg3C1SendToEvision7_1;
TBloCSnd gCSnd_tData2RdvFromC1;
TBloCSnd gCSnd_tMsg3C1SendToEvision7;
TBloCSnd gCSnd_tMsg4C1SendToEvision7;
TBloCSnd gCSnd_tData3RcvFromC1;
TBloCSnd gCSnd_tFAiluresC1SendToC0;
TBloCSnd gCSnd_tMsg5C1SendToEvision7;
TBloCSnd gCSnd_tMsg6C1SendToEvision7;
TBloCSnd gCSnd_tMsg7C1SendToEvision7;
TBloCSnd gCSnd_tMsg8C1SendToEvision7;
TBloCSnd gCSnd_tMsg9C1SendToEvision7;
TBloCSnd gCSnd_tMsg10C1SendToEvision7;
TBloCSnd gCSnd_tMsg11C1SendToEvision7;
TBloCSnd gCSnd_tMsg1C1SendToOpus;
TBloCSnd gCSnd_tMsg2C1SendToOpus;
TBloCSnd gCSnd_tMsg3C1SendToOpus;
TBloCSnd gCSnd_tMsg4C1SendToOpus;
TBloCSnd gCSnd_tMsg5C1SendToOpus;
TBloCSnd gCSnd_tMsg6C1SendToOpus;
TBloCSnd gCSnd_tMsg7C1SendToOpus;
TBloCSnd gCSnd_tMsg8C1SendToOpus;
TBloCSnd gCSnd_tData4C1SendToC0;
TBloCSnd gCSnd_tMsg12C1SendToEvision7;
TBloCSnd gCSnd_tHeartbeat_C1;
TBloCSnd gCSnd_tMsg13C1SendToEvision7;
TBloCSnd gCSnd_tSdo_Request_48XS;
TBloCSnd gCSnd_tTSC1;
TBloCSnd gCSnd_tEBC1;
TBloCSnd gCSnd_tData5C1SendToC0;
TBloCSnd gCSnd_tMsg9C1SendToOpus;
TBloCSnd gCSnd_tMsg14C1SendToEvision7;
TBloErr gErr_tSpecificErrorC1;
TBloErr gErr_tSpecificErrorC1_2;
TBloErr gErr_tSpecificErrorC1_3;
TBloErr gErr_tSpecificErrorC1_4;
TBloErr gErr_tSpecificErrorC1_5;
TBloErr gErr_tSpecificErrorC1_6;
TBloErr gErr_tSpecificErrorC1_7;
TBloErr gErr_tSpecificErrorC1_8;
TBloInCurDbl gInCurDbl_tDeltaArmAngularSensor;
TBloInCurDbl gInCurDbl_tArrowArmAngularSensor;
TBloCBus gCBus_tCAN_BUS0;
TBloCBus gCBus_tCAN_BUS1;
TBloCBus gCBus_tCAN_BUS2;
TBloCBuf gCBuf_tCBUS2_CBUF_SND_1;
TBloCBuf gCBuf_tCBUS2_CBUF_RCV_1;
TBloInCur gInCur_tTransmission1PressureSensor;
TBloInCur gInCur_tTransmission2PressureSensor;
TBloInCur gInCur_tBypassPressureSensor;
TBloInCur gInCur_tOilTankTemperature;
TBloOutVoltPro gOutVoltPro_tPvgDeltaArm;
TBloOutVoltPro gOutVoltPro_tPvgArrowArm;
TBloOutVoltPro gOutVoltPro_tPvgTelescopeArm;
TBloOutVoltPro gOutVoltPro_tPvgPropEvTOR;
TBloSil gSil_tEcu0_Safety;
TBloSil gSil_tEcu1_Safety;
TBloSil gSil_tEcuSil;
TBloSil gSil_tSensorSupply;
TBloSil gSil_tErrList;

#define OBJ_TAB_MAX 148

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

    gCBuf_tCBUS2_CBUF_SND_1.tXAdr.cptCfg = &gCBuf_ctCfg_CBUS2_CBUF_SND_1;
    g_atObjTab[3].u16Type = (TUint16)STD_BLO_CBUF;
    g_atObjTab[3].pvBloAdr = &gCBuf_tCBUS2_CBUF_SND_1;

    gCBuf_tCBUS2_CBUF_RCV_1.tXAdr.cptCfg = &gCBuf_ctCfg_CBUS2_CBUF_RCV_1;
    g_atObjTab[4].u16Type = (TUint16)STD_BLO_CBUF;
    g_atObjTab[4].pvBloAdr = &gCBuf_tCBUS2_CBUF_RCV_1;

    gDig_tBlueFire.tXAdr.cptCfg = &gDig_ctCfg_BlueFire;
    g_atObjTab[5].u16Type = (TUint16)BLO_DIG;
    g_atObjTab[5].pvBloAdr = &gDig_tBlueFire;

    gDig_tOrangeFlashingLight.tXAdr.cptCfg = &gDig_ctCfg_OrangeFlashingLight;
    g_atObjTab[6].u16Type = (TUint16)BLO_DIG;
    g_atObjTab[6].pvBloAdr = &gDig_tOrangeFlashingLight;

    gDig_tEvBypass.tXAdr.cptCfg = &gDig_ctCfg_EvBypass;
    g_atObjTab[7].u16Type = (TUint16)BLO_DIG;
    g_atObjTab[7].pvBloAdr = &gDig_tEvBypass;

    gDig_tSupplyPvgDeltaArm.tXAdr.cptCfg = &gDig_ctCfg_SupplyPvgDeltaArm;
    g_atObjTab[8].u16Type = (TUint16)BLO_DIG;
    g_atObjTab[8].pvBloAdr = &gDig_tSupplyPvgDeltaArm;

    gDig_tSupplyPvgBoomArm.tXAdr.cptCfg = &gDig_ctCfg_SupplyPvgBoomArm;
    g_atObjTab[9].u16Type = (TUint16)BLO_DIG;
    g_atObjTab[9].pvBloAdr = &gDig_tSupplyPvgBoomArm;

    gDig_tSupplyPvgTelescopeArm.tXAdr.cptCfg = &gDig_ctCfg_SupplyPvgTelescopeArm;
    g_atObjTab[10].u16Type = (TUint16)BLO_DIG;
    g_atObjTab[10].pvBloAdr = &gDig_tSupplyPvgTelescopeArm;

    gDig_tSupplyPvgPropEvTOR.tXAdr.cptCfg = &gDig_ctCfg_SupplyPvgPropEvTOR;
    g_atObjTab[11].u16Type = (TUint16)BLO_DIG;
    g_atObjTab[11].pvBloAdr = &gDig_tSupplyPvgPropEvTOR;

    gDig_tOverloadSecurity.tXAdr.cptCfg = &gDig_ctCfg_OverloadSecurity;
    g_atObjTab[12].u16Type = (TUint16)BLO_DIG;
    g_atObjTab[12].pvBloAdr = &gDig_tOverloadSecurity;

    gDig_tSupllyTorSensors.tXAdr.cptCfg = &gDig_ctCfg_SupllyTorSensors;
    g_atObjTab[13].u16Type = (TUint16)BLO_DIG;
    g_atObjTab[13].pvBloAdr = &gDig_tSupllyTorSensors;

    gDig_tSupllyAnaSensors.tXAdr.cptCfg = &gDig_ctCfg_SupllyAnaSensors;
    g_atObjTab[14].u16Type = (TUint16)BLO_DIG;
    g_atObjTab[14].pvBloAdr = &gDig_tSupllyAnaSensors;

    gDig_tEvSyncRotation.tXAdr.cptCfg = &gDig_ctCfg_EvSyncRotation;
    g_atObjTab[15].u16Type = (TUint16)BLO_DIG;
    g_atObjTab[15].pvBloAdr = &gDig_tEvSyncRotation;

    gDig_tEvSelectorRotTurret.tXAdr.cptCfg = &gDig_ctCfg_EvSelectorRotTurret;
    g_atObjTab[16].u16Type = (TUint16)BLO_DIG;
    g_atObjTab[16].pvBloAdr = &gDig_tEvSelectorRotTurret;

    gDig_tNoisemaker.tXAdr.cptCfg = &gDig_ctCfg_Noisemaker;
    g_atObjTab[17].u16Type = (TUint16)BLO_DIG;
    g_atObjTab[17].pvBloAdr = &gDig_tNoisemaker;

    gDig_tEvRotTurretClkwise.tXAdr.cptCfg = &gDig_ctCfg_EvRotTurretClkwise;
    g_atObjTab[18].u16Type = (TUint16)BLO_DIG;
    g_atObjTab[18].pvBloAdr = &gDig_tEvRotTurretClkwise;

    gDig_tEvRotTurretCtClkwise.tXAdr.cptCfg = &gDig_ctCfg_EvRotTurretCtClkwise;
    g_atObjTab[19].u16Type = (TUint16)BLO_DIG;
    g_atObjTab[19].pvBloAdr = &gDig_tEvRotTurretCtClkwise;

    gDig_tEvRotBasketCtClkwise.tXAdr.cptCfg = &gDig_ctCfg_EvRotBasketCtClkwise;
    g_atObjTab[20].u16Type = (TUint16)BLO_DIG;
    g_atObjTab[20].pvBloAdr = &gDig_tEvRotBasketCtClkwise;

    gDig_tEvRotBasketClkwise.tXAdr.cptCfg = &gDig_ctCfg_EvRotBasketClkwise;
    g_atObjTab[21].u16Type = (TUint16)BLO_DIG;
    g_atObjTab[21].pvBloAdr = &gDig_tEvRotBasketClkwise;

    gDig_tEvUpPendular.tXAdr.cptCfg = &gDig_ctCfg_EvUpPendular;
    g_atObjTab[22].u16Type = (TUint16)BLO_DIG;
    g_atObjTab[22].pvBloAdr = &gDig_tEvUpPendular;

    gDig_tEvDownPendular.tXAdr.cptCfg = &gDig_ctCfg_EvDownPendular;
    g_atObjTab[23].u16Type = (TUint16)BLO_DIG;
    g_atObjTab[23].pvBloAdr = &gDig_tEvDownPendular;

    gDig_tEvUpInclinaisonBasket.tXAdr.cptCfg = &gDig_ctCfg_EvUpInclinaisonBasket;
    g_atObjTab[24].u16Type = (TUint16)BLO_DIG;
    g_atObjTab[24].pvBloAdr = &gDig_tEvUpInclinaisonBasket;

    gDig_tEvDownInclinaisonBasket.tXAdr.cptCfg = &gDig_ctCfg_EvDownInclinaisonBasket;
    g_atObjTab[25].u16Type = (TUint16)BLO_DIG;
    g_atObjTab[25].pvBloAdr = &gDig_tEvDownInclinaisonBasket;

    gDig_tReturnLowSideEvProGenerator.tXAdr.cptCfg = &gDig_ctCfg_ReturnLowSideEvProGenerator;
    g_atObjTab[26].u16Type = (TUint16)BLO_DIG;
    g_atObjTab[26].pvBloAdr = &gDig_tReturnLowSideEvProGenerator;

    gDig_tWhiteLightAv15746.tXAdr.cptCfg = &gDig_ctCfg_WhiteLightAv15746;
    g_atObjTab[27].u16Type = (TUint16)BLO_DIG;
    g_atObjTab[27].pvBloAdr = &gDig_tWhiteLightAv15746;

    gDig_tEvCrawlerOnly.tXAdr.cptCfg = &gDig_ctCfg_EvCrawlerOnly;
    g_atObjTab[28].u16Type = (TUint16)BLO_DIG;
    g_atObjTab[28].pvBloAdr = &gDig_tEvCrawlerOnly;

    gDig_tRelayReloadWithGenerator.tXAdr.cptCfg = &gDig_ctCfg_RelayReloadWithGenerator;
    g_atObjTab[29].u16Type = (TUint16)BLO_DIG;
    g_atObjTab[29].pvBloAdr = &gDig_tRelayReloadWithGenerator;

    gDig_tEvDevMvts.tXAdr.cptCfg = &gDig_ctCfg_EvDevMvts;
    g_atObjTab[30].u16Type = (TUint16)BLO_DIG;
    g_atObjTab[30].pvBloAdr = &gDig_tEvDevMvts;

    gDig_tAntiStartupCommand.tXAdr.cptCfg = &gDig_ctCfg_AntiStartupCommand;
    g_atObjTab[31].u16Type = (TUint16)BLO_DIG;
    g_atObjTab[31].pvBloAdr = &gDig_tAntiStartupCommand;

    gDig_tEvBoostRegen.tXAdr.cptCfg = &gDig_ctCfg_EvBoostRegen;
    g_atObjTab[32].u16Type = (TUint16)BLO_DIG;
    g_atObjTab[32].pvBloAdr = &gDig_tEvBoostRegen;

    gPro_tEvPropGenerator.tXAdr.cptCfg = &gPro_ctCfg_EvPropGenerator;
    g_atObjTab[33].u16Type = (TUint16)BLO_PRO;
    g_atObjTab[33].pvBloAdr = &gPro_tEvPropGenerator;

    gInResist_tGasGauge.tXAdr.cptCfg = &gInResist_ctCfg_GasGauge;
    g_atObjTab[34].u16Type = (TUint16)BLO_INRESIST;
    g_atObjTab[34].pvBloAdr = &gInResist_tGasGauge;

    gSwiNo_tActiveHelp.tXAdr.cptCfg = &gSwiNo_ctCfg_ActiveHelp;
    g_atObjTab[35].u16Type = (TUint16)BLO_SWINO;
    g_atObjTab[35].pvBloAdr = &gSwiNo_tActiveHelp;

    gSwiNo_tTurretPostSelector.tXAdr.cptCfg = &gSwiNo_ctCfg_TurretPostSelector;
    g_atObjTab[36].u16Type = (TUint16)BLO_SWINO;
    g_atObjTab[36].pvBloAdr = &gSwiNo_tTurretPostSelector;

    gSwiNo_tRadioPostSelector.tXAdr.cptCfg = &gSwiNo_ctCfg_RadioPostSelector;
    g_atObjTab[37].u16Type = (TUint16)BLO_SWINO;
    g_atObjTab[37].pvBloAdr = &gSwiNo_tRadioPostSelector;

    gSwiNo_tNacellePostSelector.tXAdr.cptCfg = &gSwiNo_ctCfg_NacellePostSelector;
    g_atObjTab[38].u16Type = (TUint16)BLO_SWINO;
    g_atObjTab[38].pvBloAdr = &gSwiNo_tNacellePostSelector;

    gSwiNo_tDeltaArmFoldedSensor.tXAdr.cptCfg = &gSwiNo_ctCfg_DeltaArmFoldedSensor;
    g_atObjTab[39].u16Type = (TUint16)BLO_SWINO;
    g_atObjTab[39].pvBloAdr = &gSwiNo_tDeltaArmFoldedSensor;

    gSwiNo_tBoomArmFoldedSensor.tXAdr.cptCfg = &gSwiNo_ctCfg_BoomArmFoldedSensor;
    g_atObjTab[40].u16Type = (TUint16)BLO_SWINO;
    g_atObjTab[40].pvBloAdr = &gSwiNo_tBoomArmFoldedSensor;

    gSwiNo_tAlternatorChargeOK.tXAdr.cptCfg = &gSwiNo_ctCfg_AlternatorChargeOK;
    g_atObjTab[41].u16Type = (TUint16)BLO_SWINO;
    g_atObjTab[41].pvBloAdr = &gSwiNo_tAlternatorChargeOK;

    gSwiNo_tAru1.tXAdr.cptCfg = &gSwiNo_ctCfg_Aru1;
    g_atObjTab[42].u16Type = (TUint16)BLO_SWINO;
    g_atObjTab[42].pvBloAdr = &gSwiNo_tAru1;

    gSwiNo_tAru2.tXAdr.cptCfg = &gSwiNo_ctCfg_Aru2;
    g_atObjTab[43].u16Type = (TUint16)BLO_SWINO;
    g_atObjTab[43].pvBloAdr = &gSwiNo_tAru2;

    gSwiNo_tEntryTelescopeFdcSensor.tXAdr.cptCfg = &gSwiNo_ctCfg_EntryTelescopeFdcSensor;
    g_atObjTab[44].u16Type = (TUint16)BLO_SWINO;
    g_atObjTab[44].pvBloAdr = &gSwiNo_tEntryTelescopeFdcSensor;

    gSwiNo_tFaultPvgDeltaArm.tXAdr.cptCfg = &gSwiNo_ctCfg_FaultPvgDeltaArm;
    g_atObjTab[45].u16Type = (TUint16)BLO_SWINO;
    g_atObjTab[45].pvBloAdr = &gSwiNo_tFaultPvgDeltaArm;

    gSwiNo_tFaultPvgArrowArm.tXAdr.cptCfg = &gSwiNo_ctCfg_FaultPvgArrowArm;
    g_atObjTab[46].u16Type = (TUint16)BLO_SWINO;
    g_atObjTab[46].pvBloAdr = &gSwiNo_tFaultPvgArrowArm;

    gSwiNo_tFaultPvgTelescopeArm.tXAdr.cptCfg = &gSwiNo_ctCfg_FaultPvgTelescopeArm;
    g_atObjTab[47].u16Type = (TUint16)BLO_SWINO;
    g_atObjTab[47].pvBloAdr = &gSwiNo_tFaultPvgTelescopeArm;

    gSwiNo_tFaultPvgEvProTOR.tXAdr.cptCfg = &gSwiNo_ctCfg_FaultPvgEvProTOR;
    g_atObjTab[48].u16Type = (TUint16)BLO_SWINO;
    g_atObjTab[48].pvBloAdr = &gSwiNo_tFaultPvgEvProTOR;

    gSwiNo_tStarterMotorState.tXAdr.cptCfg = &gSwiNo_ctCfg_StarterMotorState;
    g_atObjTab[49].u16Type = (TUint16)BLO_SWINO;
    g_atObjTab[49].pvBloAdr = &gSwiNo_tStarterMotorState;

    gInCurDbl_tDeltaArmAngularSensor.tXAdr.cptCfg = &gInCurDbl_ctCfg_DeltaArmAngularSensor;
    g_atObjTab[50].u16Type = (TUint16)BLO_INCURDBL;
    g_atObjTab[50].pvBloAdr = &gInCurDbl_tDeltaArmAngularSensor;

    gInCurDbl_tArrowArmAngularSensor.tXAdr.cptCfg = &gInCurDbl_ctCfg_ArrowArmAngularSensor;
    g_atObjTab[51].u16Type = (TUint16)BLO_INCURDBL;
    g_atObjTab[51].pvBloAdr = &gInCurDbl_tArrowArmAngularSensor;

    gInCur_tTransmission1PressureSensor.tXAdr.cptCfg = &gInCur_ctCfg_Transmission1PressureSensor;
    g_atObjTab[52].u16Type = (TUint16)BLO_INCUR;
    g_atObjTab[52].pvBloAdr = &gInCur_tTransmission1PressureSensor;

    gInCur_tTransmission2PressureSensor.tXAdr.cptCfg = &gInCur_ctCfg_Transmission2PressureSensor;
    g_atObjTab[53].u16Type = (TUint16)BLO_INCUR;
    g_atObjTab[53].pvBloAdr = &gInCur_tTransmission2PressureSensor;

    gInCur_tBypassPressureSensor.tXAdr.cptCfg = &gInCur_ctCfg_BypassPressureSensor;
    g_atObjTab[54].u16Type = (TUint16)BLO_INCUR;
    g_atObjTab[54].pvBloAdr = &gInCur_tBypassPressureSensor;

    gInCur_tOilTankTemperature.tXAdr.cptCfg = &gInCur_ctCfg_OilTankTemperature;
    g_atObjTab[55].u16Type = (TUint16)BLO_INCUR;
    g_atObjTab[55].pvBloAdr = &gInCur_tOilTankTemperature;

    gOutVoltPro_tPvgDeltaArm.tXAdr.cptCfg = &gOutVoltPro_ctCfg_PvgDeltaArm;
    g_atObjTab[56].u16Type = (TUint16)BLO_OUTVOLTPRO;
    g_atObjTab[56].pvBloAdr = &gOutVoltPro_tPvgDeltaArm;

    gOutVoltPro_tPvgArrowArm.tXAdr.cptCfg = &gOutVoltPro_ctCfg_PvgArrowArm;
    g_atObjTab[57].u16Type = (TUint16)BLO_OUTVOLTPRO;
    g_atObjTab[57].pvBloAdr = &gOutVoltPro_tPvgArrowArm;

    gOutVoltPro_tPvgTelescopeArm.tXAdr.cptCfg = &gOutVoltPro_ctCfg_PvgTelescopeArm;
    g_atObjTab[58].u16Type = (TUint16)BLO_OUTVOLTPRO;
    g_atObjTab[58].pvBloAdr = &gOutVoltPro_tPvgTelescopeArm;

    gOutVoltPro_tPvgPropEvTOR.tXAdr.cptCfg = &gOutVoltPro_ctCfg_PvgPropEvTOR;
    g_atObjTab[59].u16Type = (TUint16)BLO_OUTVOLTPRO;
    g_atObjTab[59].pvBloAdr = &gOutVoltPro_tPvgPropEvTOR;

    gCRcv_tPDO1_48XS.tXAdr.cptCfg = &gCRcv_ctCfg_PDO1_48XS;
    g_atObjTab[60].u16Type = (TUint16)STD_BLO_CRCV;
    g_atObjTab[60].pvBloAdr = &gCRcv_tPDO1_48XS;

    gCRcv_tPDO2_48XS.tXAdr.cptCfg = &gCRcv_ctCfg_PDO2_48XS;
    g_atObjTab[61].u16Type = (TUint16)STD_BLO_CRCV;
    g_atObjTab[61].pvBloAdr = &gCRcv_tPDO2_48XS;

    gCRcv_tPDO3_48XS.tXAdr.cptCfg = &gCRcv_ctCfg_PDO3_48XS;
    g_atObjTab[62].u16Type = (TUint16)STD_BLO_CRCV;
    g_atObjTab[62].pvBloAdr = &gCRcv_tPDO3_48XS;

    gCRcv_tPDO4_48XS.tXAdr.cptCfg = &gCRcv_ctCfg_PDO4_48XS;
    g_atObjTab[63].u16Type = (TUint16)STD_BLO_CRCV;
    g_atObjTab[63].pvBloAdr = &gCRcv_tPDO4_48XS;

    gCRcv_tSRDO1_48XS.tXAdr.cptCfg = &gCRcv_ctCfg_SRDO1_48XS;
    g_atObjTab[64].u16Type = (TUint16)STD_BLO_CRCV;
    g_atObjTab[64].pvBloAdr = &gCRcv_tSRDO1_48XS;

    gCRcv_tSRDO2_48XS.tXAdr.cptCfg = &gCRcv_ctCfg_SRDO2_48XS;
    g_atObjTab[65].u16Type = (TUint16)STD_BLO_CRCV;
    g_atObjTab[65].pvBloAdr = &gCRcv_tSRDO2_48XS;

    gCRcv_tSRDO3_48XS.tXAdr.cptCfg = &gCRcv_ctCfg_SRDO3_48XS;
    g_atObjTab[66].u16Type = (TUint16)STD_BLO_CRCV;
    g_atObjTab[66].pvBloAdr = &gCRcv_tSRDO3_48XS;

    gCRcv_tHearbeat_48XS.tXAdr.cptCfg = &gCRcv_ctCfg_Hearbeat_48XS;
    g_atObjTab[67].u16Type = (TUint16)STD_BLO_CRCV;
    g_atObjTab[67].pvBloAdr = &gCRcv_tHearbeat_48XS;

    gCRcv_tHearbeat_Telescope.tXAdr.cptCfg = &gCRcv_ctCfg_Hearbeat_Telescope;
    g_atObjTab[68].u16Type = (TUint16)STD_BLO_CRCV;
    g_atObjTab[68].pvBloAdr = &gCRcv_tHearbeat_Telescope;

    gCRcv_tTelescopeFrame1.tXAdr.cptCfg = &gCRcv_ctCfg_TelescopeFrame1;
    g_atObjTab[69].u16Type = (TUint16)STD_BLO_CRCV;
    g_atObjTab[69].pvBloAdr = &gCRcv_tTelescopeFrame1;

    gCRcv_tTelescopeFrame2.tXAdr.cptCfg = &gCRcv_ctCfg_TelescopeFrame2;
    g_atObjTab[70].u16Type = (TUint16)STD_BLO_CRCV;
    g_atObjTab[70].pvBloAdr = &gCRcv_tTelescopeFrame2;

    gCRcv_tSendToC1RadioCmd.tXAdr.cptCfg = &gCRcv_ctCfg_SendToC1RadioCmd;
    g_atObjTab[71].u16Type = (TUint16)STD_BLO_CRCV;
    g_atObjTab[71].pvBloAdr = &gCRcv_tSendToC1RadioCmd;

    gCRcv_tDataSendToC1.tXAdr.cptCfg = &gCRcv_ctCfg_DataSendToC1;
    g_atObjTab[72].u16Type = (TUint16)STD_BLO_CRCV;
    g_atObjTab[72].pvBloAdr = &gCRcv_tDataSendToC1;

    gCRcv_tData2SendToC1.tXAdr.cptCfg = &gCRcv_ctCfg_Data2SendToC1;
    g_atObjTab[73].u16Type = (TUint16)STD_BLO_CRCV;
    g_atObjTab[73].pvBloAdr = &gCRcv_tData2SendToC1;

    gCRcv_tMsg1C0RcvFromEvision7.tXAdr.cptCfg = &gCRcv_ctCfg_Msg1C0RcvFromEvision7;
    g_atObjTab[74].u16Type = (TUint16)STD_BLO_CRCV;
    g_atObjTab[74].pvBloAdr = &gCRcv_tMsg1C0RcvFromEvision7;

    gCRcv_tData3SendToC1.tXAdr.cptCfg = &gCRcv_ctCfg_Data3SendToC1;
    g_atObjTab[75].u16Type = (TUint16)STD_BLO_CRCV;
    g_atObjTab[75].pvBloAdr = &gCRcv_tData3SendToC1;

    gCRcv_tFailuresC0SendToC1.tXAdr.cptCfg = &gCRcv_ctCfg_FailuresC0SendToC1;
    g_atObjTab[76].u16Type = (TUint16)STD_BLO_CRCV;
    g_atObjTab[76].pvBloAdr = &gCRcv_tFailuresC0SendToC1;

    gCRcv_tMsg1RcvFromOpus.tXAdr.cptCfg = &gCRcv_ctCfg_Msg1RcvFromOpus;
    g_atObjTab[77].u16Type = (TUint16)STD_BLO_CRCV;
    g_atObjTab[77].pvBloAdr = &gCRcv_tMsg1RcvFromOpus;

    gCRcv_tData4C0SendToC1.tXAdr.cptCfg = &gCRcv_ctCfg_Data4C0SendToC1;
    g_atObjTab[78].u16Type = (TUint16)STD_BLO_CRCV;
    g_atObjTab[78].pvBloAdr = &gCRcv_tData4C0SendToC1;

    gCRcv_tPDO5_48XS.tXAdr.cptCfg = &gCRcv_ctCfg_PDO5_48XS;
    g_atObjTab[79].u16Type = (TUint16)STD_BLO_CRCV;
    g_atObjTab[79].pvBloAdr = &gCRcv_tPDO5_48XS;

    gCRcv_tPDO6_48XS.tXAdr.cptCfg = &gCRcv_ctCfg_PDO6_48XS;
    g_atObjTab[80].u16Type = (TUint16)STD_BLO_CRCV;
    g_atObjTab[80].pvBloAdr = &gCRcv_tPDO6_48XS;

    gCRcv_tSdo_Answer_48XS.tXAdr.cptCfg = &gCRcv_ctCfg_Sdo_Answer_48XS;
    g_atObjTab[81].u16Type = (TUint16)STD_BLO_CRCV;
    g_atObjTab[81].pvBloAdr = &gCRcv_tSdo_Answer_48XS;

    gCRcv_tET1.tXAdr.cptCfg = &gCRcv_ctCfg_ET1;
    g_atObjTab[82].u16Type = (TUint16)STD_BLO_CRCV;
    g_atObjTab[82].pvBloAdr = &gCRcv_tET1;

    gCRcv_tEFL_P1.tXAdr.cptCfg = &gCRcv_ctCfg_EFL_P1;
    g_atObjTab[83].u16Type = (TUint16)STD_BLO_CRCV;
    g_atObjTab[83].pvBloAdr = &gCRcv_tEFL_P1;

    gCRcv_tEEC1.tXAdr.cptCfg = &gCRcv_ctCfg_EEC1;
    g_atObjTab[84].u16Type = (TUint16)STD_BLO_CRCV;
    g_atObjTab[84].pvBloAdr = &gCRcv_tEEC1;

    gCRcv_tVEP3.tXAdr.cptCfg = &gCRcv_ctCfg_VEP3;
    g_atObjTab[85].u16Type = (TUint16)STD_BLO_CRCV;
    g_atObjTab[85].pvBloAdr = &gCRcv_tVEP3;

    gCRcv_tEOI.tXAdr.cptCfg = &gCRcv_ctCfg_EOI;
    g_atObjTab[86].u16Type = (TUint16)STD_BLO_CRCV;
    g_atObjTab[86].pvBloAdr = &gCRcv_tEOI;

    gCRcv_tVEP1.tXAdr.cptCfg = &gCRcv_ctCfg_VEP1;
    g_atObjTab[87].u16Type = (TUint16)STD_BLO_CRCV;
    g_atObjTab[87].pvBloAdr = &gCRcv_tVEP1;

    gCRcv_tDLCD1.tXAdr.cptCfg = &gCRcv_ctCfg_DLCD1;
    g_atObjTab[88].u16Type = (TUint16)STD_BLO_CRCV;
    g_atObjTab[88].pvBloAdr = &gCRcv_tDLCD1;

    gCRcv_tSHUTDN.tXAdr.cptCfg = &gCRcv_ctCfg_SHUTDN;
    g_atObjTab[89].u16Type = (TUint16)STD_BLO_CRCV;
    g_atObjTab[89].pvBloAdr = &gCRcv_tSHUTDN;

    gCRcv_tData5C0SendToC1.tXAdr.cptCfg = &gCRcv_ctCfg_Data5C0SendToC1;
    g_atObjTab[90].u16Type = (TUint16)STD_BLO_CRCV;
    g_atObjTab[90].pvBloAdr = &gCRcv_tData5C0SendToC1;

    gCSnd_tSRDO4_48XS.tXAdr.cptCfg = &gCSnd_ctCfg_SRDO4_48XS;
    g_atObjTab[91].u16Type = (TUint16)STD_BLO_CSND;
    g_atObjTab[91].pvBloAdr = &gCSnd_tSRDO4_48XS;

    gCSnd_tStart_48XS.tXAdr.cptCfg = &gCSnd_ctCfg_Start_48XS;
    g_atObjTab[92].u16Type = (TUint16)STD_BLO_CSND;
    g_atObjTab[92].pvBloAdr = &gCSnd_tStart_48XS;

    gCSnd_tSync_48XS.tXAdr.cptCfg = &gCSnd_ctCfg_Sync_48XS;
    g_atObjTab[93].u16Type = (TUint16)STD_BLO_CSND;
    g_atObjTab[93].pvBloAdr = &gCSnd_tSync_48XS;

    gCSnd_tDataRcvFromC1.tXAdr.cptCfg = &gCSnd_ctCfg_DataRcvFromC1;
    g_atObjTab[94].u16Type = (TUint16)STD_BLO_CSND;
    g_atObjTab[94].pvBloAdr = &gCSnd_tDataRcvFromC1;

    gCSnd_tMsg1C1SendToEvision7_1.tXAdr.cptCfg = &gCSnd_ctCfg_Msg1C1SendToEvision7_1;
    g_atObjTab[95].u16Type = (TUint16)STD_BLO_CSND;
    g_atObjTab[95].pvBloAdr = &gCSnd_tMsg1C1SendToEvision7_1;

    gCSnd_tMsg2C1SendToEvision7_1.tXAdr.cptCfg = &gCSnd_ctCfg_Msg2C1SendToEvision7_1;
    g_atObjTab[96].u16Type = (TUint16)STD_BLO_CSND;
    g_atObjTab[96].pvBloAdr = &gCSnd_tMsg2C1SendToEvision7_1;

    gCSnd_tMsg3C1SendToEvision7_1.tXAdr.cptCfg = &gCSnd_ctCfg_Msg3C1SendToEvision7_1;
    g_atObjTab[97].u16Type = (TUint16)STD_BLO_CSND;
    g_atObjTab[97].pvBloAdr = &gCSnd_tMsg3C1SendToEvision7_1;

    gCSnd_tData2RdvFromC1.tXAdr.cptCfg = &gCSnd_ctCfg_Data2RdvFromC1;
    g_atObjTab[98].u16Type = (TUint16)STD_BLO_CSND;
    g_atObjTab[98].pvBloAdr = &gCSnd_tData2RdvFromC1;

    gCSnd_tMsg3C1SendToEvision7.tXAdr.cptCfg = &gCSnd_ctCfg_Msg3C1SendToEvision7;
    g_atObjTab[99].u16Type = (TUint16)STD_BLO_CSND;
    g_atObjTab[99].pvBloAdr = &gCSnd_tMsg3C1SendToEvision7;

    gCSnd_tMsg4C1SendToEvision7.tXAdr.cptCfg = &gCSnd_ctCfg_Msg4C1SendToEvision7;
    g_atObjTab[100].u16Type = (TUint16)STD_BLO_CSND;
    g_atObjTab[100].pvBloAdr = &gCSnd_tMsg4C1SendToEvision7;

    gCSnd_tData3RcvFromC1.tXAdr.cptCfg = &gCSnd_ctCfg_Data3RcvFromC1;
    g_atObjTab[101].u16Type = (TUint16)STD_BLO_CSND;
    g_atObjTab[101].pvBloAdr = &gCSnd_tData3RcvFromC1;

    gCSnd_tFAiluresC1SendToC0.tXAdr.cptCfg = &gCSnd_ctCfg_FAiluresC1SendToC0;
    g_atObjTab[102].u16Type = (TUint16)STD_BLO_CSND;
    g_atObjTab[102].pvBloAdr = &gCSnd_tFAiluresC1SendToC0;

    gCSnd_tMsg5C1SendToEvision7.tXAdr.cptCfg = &gCSnd_ctCfg_Msg5C1SendToEvision7;
    g_atObjTab[103].u16Type = (TUint16)STD_BLO_CSND;
    g_atObjTab[103].pvBloAdr = &gCSnd_tMsg5C1SendToEvision7;

    gCSnd_tMsg6C1SendToEvision7.tXAdr.cptCfg = &gCSnd_ctCfg_Msg6C1SendToEvision7;
    g_atObjTab[104].u16Type = (TUint16)STD_BLO_CSND;
    g_atObjTab[104].pvBloAdr = &gCSnd_tMsg6C1SendToEvision7;

    gCSnd_tMsg7C1SendToEvision7.tXAdr.cptCfg = &gCSnd_ctCfg_Msg7C1SendToEvision7;
    g_atObjTab[105].u16Type = (TUint16)STD_BLO_CSND;
    g_atObjTab[105].pvBloAdr = &gCSnd_tMsg7C1SendToEvision7;

    gCSnd_tMsg8C1SendToEvision7.tXAdr.cptCfg = &gCSnd_ctCfg_Msg8C1SendToEvision7;
    g_atObjTab[106].u16Type = (TUint16)STD_BLO_CSND;
    g_atObjTab[106].pvBloAdr = &gCSnd_tMsg8C1SendToEvision7;

    gCSnd_tMsg9C1SendToEvision7.tXAdr.cptCfg = &gCSnd_ctCfg_Msg9C1SendToEvision7;
    g_atObjTab[107].u16Type = (TUint16)STD_BLO_CSND;
    g_atObjTab[107].pvBloAdr = &gCSnd_tMsg9C1SendToEvision7;

    gCSnd_tMsg10C1SendToEvision7.tXAdr.cptCfg = &gCSnd_ctCfg_Msg10C1SendToEvision7;
    g_atObjTab[108].u16Type = (TUint16)STD_BLO_CSND;
    g_atObjTab[108].pvBloAdr = &gCSnd_tMsg10C1SendToEvision7;

    gCSnd_tMsg11C1SendToEvision7.tXAdr.cptCfg = &gCSnd_ctCfg_Msg11C1SendToEvision7;
    g_atObjTab[109].u16Type = (TUint16)STD_BLO_CSND;
    g_atObjTab[109].pvBloAdr = &gCSnd_tMsg11C1SendToEvision7;

    gCSnd_tMsg1C1SendToOpus.tXAdr.cptCfg = &gCSnd_ctCfg_Msg1C1SendToOpus;
    g_atObjTab[110].u16Type = (TUint16)STD_BLO_CSND;
    g_atObjTab[110].pvBloAdr = &gCSnd_tMsg1C1SendToOpus;

    gCSnd_tMsg2C1SendToOpus.tXAdr.cptCfg = &gCSnd_ctCfg_Msg2C1SendToOpus;
    g_atObjTab[111].u16Type = (TUint16)STD_BLO_CSND;
    g_atObjTab[111].pvBloAdr = &gCSnd_tMsg2C1SendToOpus;

    gCSnd_tMsg3C1SendToOpus.tXAdr.cptCfg = &gCSnd_ctCfg_Msg3C1SendToOpus;
    g_atObjTab[112].u16Type = (TUint16)STD_BLO_CSND;
    g_atObjTab[112].pvBloAdr = &gCSnd_tMsg3C1SendToOpus;

    gCSnd_tMsg4C1SendToOpus.tXAdr.cptCfg = &gCSnd_ctCfg_Msg4C1SendToOpus;
    g_atObjTab[113].u16Type = (TUint16)STD_BLO_CSND;
    g_atObjTab[113].pvBloAdr = &gCSnd_tMsg4C1SendToOpus;

    gCSnd_tMsg5C1SendToOpus.tXAdr.cptCfg = &gCSnd_ctCfg_Msg5C1SendToOpus;
    g_atObjTab[114].u16Type = (TUint16)STD_BLO_CSND;
    g_atObjTab[114].pvBloAdr = &gCSnd_tMsg5C1SendToOpus;

    gCSnd_tMsg6C1SendToOpus.tXAdr.cptCfg = &gCSnd_ctCfg_Msg6C1SendToOpus;
    g_atObjTab[115].u16Type = (TUint16)STD_BLO_CSND;
    g_atObjTab[115].pvBloAdr = &gCSnd_tMsg6C1SendToOpus;

    gCSnd_tMsg7C1SendToOpus.tXAdr.cptCfg = &gCSnd_ctCfg_Msg7C1SendToOpus;
    g_atObjTab[116].u16Type = (TUint16)STD_BLO_CSND;
    g_atObjTab[116].pvBloAdr = &gCSnd_tMsg7C1SendToOpus;

    gCSnd_tMsg8C1SendToOpus.tXAdr.cptCfg = &gCSnd_ctCfg_Msg8C1SendToOpus;
    g_atObjTab[117].u16Type = (TUint16)STD_BLO_CSND;
    g_atObjTab[117].pvBloAdr = &gCSnd_tMsg8C1SendToOpus;

    gCSnd_tData4C1SendToC0.tXAdr.cptCfg = &gCSnd_ctCfg_Data4C1SendToC0;
    g_atObjTab[118].u16Type = (TUint16)STD_BLO_CSND;
    g_atObjTab[118].pvBloAdr = &gCSnd_tData4C1SendToC0;

    gCSnd_tMsg12C1SendToEvision7.tXAdr.cptCfg = &gCSnd_ctCfg_Msg12C1SendToEvision7;
    g_atObjTab[119].u16Type = (TUint16)STD_BLO_CSND;
    g_atObjTab[119].pvBloAdr = &gCSnd_tMsg12C1SendToEvision7;

    gCSnd_tHeartbeat_C1.tXAdr.cptCfg = &gCSnd_ctCfg_Heartbeat_C1;
    g_atObjTab[120].u16Type = (TUint16)STD_BLO_CSND;
    g_atObjTab[120].pvBloAdr = &gCSnd_tHeartbeat_C1;

    gCSnd_tMsg13C1SendToEvision7.tXAdr.cptCfg = &gCSnd_ctCfg_Msg13C1SendToEvision7;
    g_atObjTab[121].u16Type = (TUint16)STD_BLO_CSND;
    g_atObjTab[121].pvBloAdr = &gCSnd_tMsg13C1SendToEvision7;

    gCSnd_tSdo_Request_48XS.tXAdr.cptCfg = &gCSnd_ctCfg_Sdo_Request_48XS;
    g_atObjTab[122].u16Type = (TUint16)STD_BLO_CSND;
    g_atObjTab[122].pvBloAdr = &gCSnd_tSdo_Request_48XS;

    gCSnd_tTSC1.tXAdr.cptCfg = &gCSnd_ctCfg_TSC1;
    g_atObjTab[123].u16Type = (TUint16)STD_BLO_CSND;
    g_atObjTab[123].pvBloAdr = &gCSnd_tTSC1;

    gCSnd_tEBC1.tXAdr.cptCfg = &gCSnd_ctCfg_EBC1;
    g_atObjTab[124].u16Type = (TUint16)STD_BLO_CSND;
    g_atObjTab[124].pvBloAdr = &gCSnd_tEBC1;

    gCSnd_tData5C1SendToC0.tXAdr.cptCfg = &gCSnd_ctCfg_Data5C1SendToC0;
    g_atObjTab[125].u16Type = (TUint16)STD_BLO_CSND;
    g_atObjTab[125].pvBloAdr = &gCSnd_tData5C1SendToC0;

    gCSnd_tMsg9C1SendToOpus.tXAdr.cptCfg = &gCSnd_ctCfg_Msg9C1SendToOpus;
    g_atObjTab[126].u16Type = (TUint16)STD_BLO_CSND;
    g_atObjTab[126].pvBloAdr = &gCSnd_tMsg9C1SendToOpus;

    gCSnd_tMsg14C1SendToEvision7.tXAdr.cptCfg = &gCSnd_ctCfg_Msg14C1SendToEvision7;
    g_atObjTab[127].u16Type = (TUint16)STD_BLO_CSND;
    g_atObjTab[127].pvBloAdr = &gCSnd_tMsg14C1SendToEvision7;

    gErr_tSpecificErrorC1.tXAdr.cptCfg = &gErr_ctCfg_SpecificErrorC1;
    g_atObjTab[128].u16Type = (TUint16)STD_BLO_ERR;
    g_atObjTab[128].pvBloAdr = &gErr_tSpecificErrorC1;

    gErr_tSpecificErrorC1_2.tXAdr.cptCfg = &gErr_ctCfg_SpecificErrorC1_2;
    g_atObjTab[129].u16Type = (TUint16)STD_BLO_ERR;
    g_atObjTab[129].pvBloAdr = &gErr_tSpecificErrorC1_2;

    gErr_tSpecificErrorC1_3.tXAdr.cptCfg = &gErr_ctCfg_SpecificErrorC1_3;
    g_atObjTab[130].u16Type = (TUint16)STD_BLO_ERR;
    g_atObjTab[130].pvBloAdr = &gErr_tSpecificErrorC1_3;

    gErr_tSpecificErrorC1_4.tXAdr.cptCfg = &gErr_ctCfg_SpecificErrorC1_4;
    g_atObjTab[131].u16Type = (TUint16)STD_BLO_ERR;
    g_atObjTab[131].pvBloAdr = &gErr_tSpecificErrorC1_4;

    gErr_tSpecificErrorC1_5.tXAdr.cptCfg = &gErr_ctCfg_SpecificErrorC1_5;
    g_atObjTab[132].u16Type = (TUint16)STD_BLO_ERR;
    g_atObjTab[132].pvBloAdr = &gErr_tSpecificErrorC1_5;

    gErr_tSpecificErrorC1_6.tXAdr.cptCfg = &gErr_ctCfg_SpecificErrorC1_6;
    g_atObjTab[133].u16Type = (TUint16)STD_BLO_ERR;
    g_atObjTab[133].pvBloAdr = &gErr_tSpecificErrorC1_6;

    gErr_tSpecificErrorC1_7.tXAdr.cptCfg = &gErr_ctCfg_SpecificErrorC1_7;
    g_atObjTab[134].u16Type = (TUint16)STD_BLO_ERR;
    g_atObjTab[134].pvBloAdr = &gErr_tSpecificErrorC1_7;

    gErr_tSpecificErrorC1_8.tXAdr.cptCfg = &gErr_ctCfg_SpecificErrorC1_8;
    g_atObjTab[135].u16Type = (TUint16)STD_BLO_ERR;
    g_atObjTab[135].pvBloAdr = &gErr_tSpecificErrorC1_8;

    gSil_tEcu0_Safety.tXAdr.cptCfg = &gSil_ctCfg_Ecu0_Safety;
    g_atObjTab[136].u16Type = (TUint16)STD_BLO_SIL;
    g_atObjTab[136].pvBloAdr = &gSil_tEcu0_Safety;

    gSil_tEcu1_Safety.tXAdr.cptCfg = &gSil_ctCfg_Ecu1_Safety;
    g_atObjTab[137].u16Type = (TUint16)STD_BLO_SIL;
    g_atObjTab[137].pvBloAdr = &gSil_tEcu1_Safety;

    gSil_tEcuSil.tXAdr.cptCfg = &gSil_ctCfg_EcuSil;
    g_atObjTab[138].u16Type = (TUint16)STD_BLO_SIL;
    g_atObjTab[138].pvBloAdr = &gSil_tEcuSil;

    gSil_tSensorSupply.tXAdr.cptCfg = &gSil_ctCfg_SensorSupply;
    g_atObjTab[139].u16Type = (TUint16)STD_BLO_SIL;
    g_atObjTab[139].pvBloAdr = &gSil_tSensorSupply;

    gSil_tErrList.tXAdr.cptCfg = &gSil_ctCfg_ErrList;
    g_atObjTab[140].u16Type = (TUint16)STD_BLO_SIL;
    g_atObjTab[140].pvBloAdr = &gSil_tErrList;

    g_atObjTab[141].u16Type  = (TUint16)STD_STU_CREC;
    g_atObjTab[141].pvBloAdr = (TVoid*)&g_ctCanSigRecRootTab;

    g_atObjTab[142].u16Type  = (TUint16)STD_STU_DB;
    g_atObjTab[142].pvBloAdr = (TVoid*)&gDb_ctRoot;

    g_atObjTab[143].u16Type  = (TUint16)STD_STU_VER;
    g_atObjTab[143].pvBloAdr = (TVoid*)&gVer_tInf;

    g_atObjTab[144].u16Type  = (TUint16)STD_STU_PIN;
    g_atObjTab[144].pvBloAdr = (TVoid*)&gPinInfo_ctAppPin;

    g_atObjTab[145].u16Type  = (TUint16)STD_STU_ECU;
    g_atObjTab[145].pvBloAdr = (TVoid*)&gEcu_tSys;

    g_atObjTab[146].u16Type  = (TUint16)STD_STU_HCP_OUT;
    g_atObjTab[146].pvBloAdr = (TVoid*)&gCore_tOut;

    g_atObjTab[147].u16Type = (TUint16)STD_STU_HCP_INP;
    g_atObjTab[147].pvBloAdr = (TVoid*)&gCore_tInp;

    vAcbAutoCodeAppend(vAcbAutoCode);
}

TVoid vAcbAutoCodeStartUp(TVoid)
{
    eBloCSndChangeCanIdInc(&gCSnd_tDataRcvFromC1, 0x18FF0004 );
    eBloCSndChangeCanIdInc(&gCSnd_tData2RdvFromC1, 0x18FF000A );
    eBloCSndChangeCanIdInc(&gCSnd_tData3RcvFromC1, 0x18FF000E );
    eBloCSndChangeCanIdInc(&gCSnd_tFAiluresC1SendToC0, 0x18FF0012 );
    eBloCSndChangeCanIdInc(&gCSnd_tData4C1SendToC0, 0x18FF0018 );
    eBloCSndChangeCanIdInc(&gCSnd_tData5C1SendToC0, 0x18FF001C );
    eBloCRcvChangeCanIdInc(&gCRcv_tSRDO1_48XS, 0x114 );
    eBloCRcvChangeCanIdInc(&gCRcv_tSRDO2_48XS, 0x104 );
    eBloCRcvChangeCanIdInc(&gCRcv_tSRDO3_48XS, 0x106 );
    eBloCRcvChangeCanIdInc(&gCRcv_tSendToC1RadioCmd, 0x18FF0002 );
    eBloCRcvChangeCanIdInc(&gCRcv_tDataSendToC1, 0x18FF0006 );
    eBloCRcvChangeCanIdInc(&gCRcv_tData2SendToC1, 0x18FF0008 );
    eBloCRcvChangeCanIdInc(&gCRcv_tData3SendToC1, 0x18FF000C );
    eBloCRcvChangeCanIdInc(&gCRcv_tFailuresC0SendToC1, 0x18FF0014 );
    eBloCRcvChangeCanIdInc(&gCRcv_tData4C0SendToC1, 0x18FF0016 );
    eBloCRcvChangeCanIdInc(&gCRcv_tData5C0SendToC1, 0x18FF0020 );
}

TVoid vAcbAutoCode(TVoid)
{
    vAcbPhasenCode(NULL, NULL, vAcbAutoCodeStartUp, NULL);
}
