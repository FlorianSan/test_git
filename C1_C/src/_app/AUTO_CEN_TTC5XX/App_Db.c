//**************************************************************************************************
//! @crc        2098358931
//! @file       App_Db.c
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

#include <ItfCoreDb.h>
#include <App_Db.h>

//RAM for DB-List's-------------------------------------------------------------------------------

TDbRamEcuInputsC1 gDb_tRamEcuInputsC1 =
{
    {DB_LIST_DFLT,{{{0,0,0,0,0,0},{0,0}},{0,FALSE,0,0,FALSE,FALSE,FALSE},{0,0,0,0,0,0}},{0,(TVoid*)&gDb_catList[0],{NULL,0},DB_STAMP}}, //!< tListRoot
    BI3_UNDEF,                                              //!< bi3DeltaArmAngularSensorState
    I16_UNDEF,                                              //!< i16DeltaArmAngularSensorValue
    I16_UNDEF,                                              //!< i16DeltaArmAngleValue
    U16_UNDEF,                                              //!< u16DeltaArmAngularSensorRawValueMas
    U16_UNDEF,                                              //!< u16DeltaArmAngularSensorRawValueSla
    BI3_UNDEF,                                              //!< bi3ArrowArmAngularSensorState
    I16_UNDEF,                                              //!< i16ArrowArmAngularSensorValue
    I16_UNDEF,                                              //!< i16ArrowArmAngleValue
    U16_UNDEF,                                              //!< u16ArrowArmAngularSensorRawValueMas
    U16_UNDEF,                                              //!< u16ArrowArmAngularSensorRawValueSla
    I16_UNDEF,                                              //!< i16GasGaugeValue
    U32_UNDEF,                                              //!< u32GasGaugeRawValue
    GE_DI_ERROR,                                            //!< eAru1State
    U16_UNDEF,                                              //!< u16Aru1RawValue
    GE_DI_ERROR,                                            //!< eAru2State
    U16_UNDEF,                                              //!< u16Aru2RawValue
    GE_DI_ERROR,                                            //!< eEntryTelescopeFdcSensorState
    U16_UNDEF,                                              //!< u16EntryTelescopeFdcSensorRawValue
    GE_DI_ERROR,                                            //!< eFoldedDeltaArmSensorState
    U16_UNDEF,                                              //!< u16FoldedDeltaArmSensorRawValue
    GE_DI_ERROR,                                            //!< eFoldedBoomArmSensorState
    U16_UNDEF,                                              //!< u16FoldedBoomArmSensorRawValue
    GE_DI_ERROR,                                            //!< eForcingMotorRegimeState
    U16_UNDEF,                                              //!< u16ForcingMotorRegimeRawValue
    GE_DI_ERROR,                                            //!< eActiveHelpState
    U16_UNDEF,                                              //!< u16ActiveHelpRawValue
    GE_DI_ERROR,                                            //!< eOilPressureState
    U16_UNDEF,                                              //!< u16OilPressureRawValue
    GE_DI_ERROR,                                            //!< eWaterTemperatureState
    U16_UNDEF,                                              //!< u16WaterTemperatureRawValue
    GE_DI_ERROR,                                            //!< eStopMotorInfoState
    U16_MIN,                                                //!< u16StopMotorInfoRawValue
    GE_DI_ERROR,                                            //!< eTurretPostSelectorState
    U16_MIN,                                                //!< u16TurretPostSelectorRawValue
    GE_DI_ERROR,                                            //!< eRadioPostSelectorState
    U16_MIN,                                                //!< u16RadioPostSelectorRawValue
    GE_DI_ERROR,                                            //!< eNacellePostSelectorState
    U16_MIN,                                                //!< u16NacellePostSelectorRawValue
    I32_MIN,                                                //!< i32RegimeMotorAlternatorRpm
    GE_DI_ERROR,                                            //!< eAlternatorChargeOkState
    U16_UNDEF,                                              //!< u16AlternatorChargeOkValue
    BI3_UNDEF,                                              //!< bi3Transmission1PressureSensorState
    I16_UNDEF,                                              //!< i16Transmission1PressureSensorValue
    BI3_UNDEF,                                              //!< bi3Transmission2PressureSensorState
    I16_UNDEF,                                              //!< i16Transmission2PressureSensorValue
    GE_DI_ERROR,                                            //!< eFaultPvgDeltaArmState
    U16_UNDEF,                                              //!< u16FaultPvgDeltaArmRawValue
    GE_DI_ERROR,                                            //!< eFaultPvgArrowArmState
    U16_UNDEF,                                              //!< u16FaultPvgArrowArmRawValue
    GE_DI_ERROR,                                            //!< eFaultPvgTelescopeArmState
    U16_UNDEF,                                              //!< u16FaultPvgTelescopeArmRawValue
    GE_DI_ERROR,                                            //!< eFaultPvgEvProTorState
    U16_UNDEF,                                              //!< u16FaultPvgEvProTorRawValue
    BI3_UNDEF,                                              //!< bi3BypassPressureSensorState
    I16_UNDEF,                                              //!< i16BypassPressureSensorValue
    U16_UNDEF,                                              //!< u16BypassPressureSensorRawValue
    GE_DI_OFF,                                              //!< eStarterMotorState
    U16_UNDEF,                                              //!< u16StarterMotorRawValue
    BI3_UNDEF,                                              //!< bi3OilTankTemperatureState
    I16_UNDEF,                                              //!< i16OilTankTemperatureValue
    U16_UNDEF                                               //!< u16OilTankTemperatureRawValue
};

TDbRamEcuOutputsC1 gDb_tRamEcuOutputsC1 =
{
    {DB_LIST_DFLT,{{{0,0,0,0,0,0},{0,0}},{0,FALSE,0,0,FALSE,FALSE,FALSE},{0,0,0,0,0,0}},{1,(TVoid*)&gDb_catList[1],{NULL,0},DB_STAMP}}, //!< tListRoot
    FALSE,                                                  //!< boBlueFireCommand
    GE_DIG_ERROR,                                           //!< eBlueFireValue
    FALSE,                                                  //!< boOrangeFlashingLightCommand
    GE_DIG_ERROR,                                           //!< eOrangeFlashingLightValue
    FALSE,                                                  //!< boAntiStartupCommand
    GE_DIG_ERROR,                                           //!< eAntiStartupValue
    FALSE,                                                  //!< boStopMotorCommand
    FALSE,                                                  //!< boWarmingCommand
    FALSE,                                                  //!< boEvBypassCommand
    GE_DIG_ERROR,                                           //!< eEvBypassValue
    FALSE,                                                  //!< boSupplyPvgDeltaArmCommand
    GE_DIG_ERROR,                                           //!< eSupplyPvgDeltaArmValue
    FALSE,                                                  //!< boSupplyPvgArrowArmCommand
    GE_DIG_ERROR,                                           //!< eSupplyPvgArrowArmValue
    FALSE,                                                  //!< boSupplyPvgTelescopeArmCommand
    GE_DIG_ERROR,                                           //!< eSupplyPvgTelescopeArmValue
    FALSE,                                                  //!< boSupplyPvgPropEvTorCommand
    GE_DIG_ERROR,                                           //!< eSupplyPvgPropEvTorValue
    U16_MIN,                                                //!< u16EvPropMotorAcceleratorCommand
    GE_PRO_ERROR,                                           //!< eEvPropGeneratorState
    U16_MIN,                                                //!< u16EvPropGeneratorCommand
    U16_MIN,                                                //!< u16EvPropGeneratorCurrent
    GE_DIG_OFF,                                             //!< eNoisemakerState
    FALSE,                                                  //!< boNoisemakerCommand
    GE_DIG_OFF,                                             //!< eEvRotationTurretCtClockwiseState
    FALSE,                                                  //!< boEvRotTurretCtClockwiseCmdBool
    GE_DIG_OFF,                                             //!< eEvRotationTurretClockwiseState
    FALSE,                                                  //!< boEvRotTurretClockwiseCmdBool
    GE_DIG_OFF,                                             //!< eEvRotationBasketCtClockwiseState
    FALSE,                                                  //!< boEvRotationBasketCtClkWiseCmdBool
    GE_DIG_OFF,                                             //!< eEvRotationBasketClockwiseState
    FALSE,                                                  //!< boEvRotationBasketClkWiseCmdBool
    GE_DIG_OFF,                                             //!< eEvUpPendularState
    FALSE,                                                  //!< boEvUpPendularCommandBool
    GE_DIG_OFF,                                             //!< eEvDownPendularState
    FALSE,                                                  //!< boEvDownPendularCommandBool
    GE_DIG_OFF,                                             //!< eEvUpInclinaisonBasketState
    FALSE,                                                  //!< boEvUpInclinaisonBasketCmdBool
    GE_DIG_OFF,                                             //!< eEvDownInclinaisonBasketState
    U16_MIN,                                                //!< u16EvDownInclinaisonBasketCommand
    FALSE,                                                  //!< boEvDownInclinaisonBasketCmdBool
    U16_MIN,                                                //!< u16EvDownInclinaisonBasketCurrent
    U16_MIN,                                                //!< u16PvgDeltaArmCommand
    U16_MIN,                                                //!< u16PvgDeltaArmVoltage
    U16_MIN,                                                //!< u16PvgArrowArmCommand
    U16_MIN,                                                //!< u16PvgArrowArmVoltage
    U16_MIN,                                                //!< u16PvgTelescopeArmCommand
    U16_MIN,                                                //!< u16PvgTelescopeArmVoltage
    FALSE,                                                  //!< boOverloadSecurityCommand
    GE_DIG_ERROR,                                           //!< eOverloadSecurityValue
    FALSE,                                                  //!< boSupllyTorSensorsCommand
    GE_DIG_ERROR,                                           //!< eSupllyTorSensorsValue
    FALSE,                                                  //!< boSupllyAnaSensorsCommand
    GE_DIG_ERROR,                                           //!< eSupllyAnaSensorsValue
    FALSE,                                                  //!< boEvSyncRotationCommand
    GE_DIG_ERROR,                                           //!< eEvSyncRotationValue
    U16_MIN,                                                //!< u16PvgEvTorCommand
    U16_MIN,                                                //!< u16PvgEvTorVoltage
    FALSE,                                                  //!< boEvUpPendularActivation
    FALSE,                                                  //!< boEvDownPendularActivation
    FALSE,                                                  //!< boEvRotBasketCtClkWiseActivation
    FALSE,                                                  //!< boEvRotBasketClkWiseActivation
    FALSE,                                                  //!< boEvUpIncliBasketActivation
    FALSE,                                                  //!< boEvDownIncliBasketActivation
    FALSE,                                                  //!< boEvRotTurretClockwiseActivation
    FALSE,                                                  //!< boEvRotTurretCtClockwiseActivation
    GE_DIG_ERROR,                                           //!< eEvSelectorRotTurretValue
    FALSE,                                                  //!< boEvSelectorRotTurretCmd
    FALSE,                                                  //!< boReturnLowSideEvProAccMotorCmd
    FALSE,                                                  //!< boReturnLowSideEvProGeneratorCmd
    GE_DIG_ERROR,                                           //!< eReturnLowSideEvProGeneratorValue
    FALSE,                                                  //!< boEvUpAxleOscillantActivation
    FALSE,                                                  //!< boEvDownAxleOscillantActivation
    FALSE,                                                  //!< boEvUpAxleOscillantCmd
    FALSE,                                                  //!< boEvDownAxleOscillantCmd
    FALSE,                                                  //!< boEvUpAxleFixeActivation
    FALSE,                                                  //!< boEvDownAxleFixeActivation
    FALSE,                                                  //!< boEvUpAxleFixeCmd
    FALSE,                                                  //!< boEvDownAxleFixeCmd
    FALSE,                                                  //!< boEvUpMastMeasureActivation
    FALSE,                                                  //!< boEvUpMastMeasureCmd
    FALSE,                                                  //!< boEvDownMastMeasureActivation
    FALSE,                                                  //!< boEvDownMastMeasureCmd
    GE_DIG_ERROR,                                           //!< eWhiteLightAv15746Value
    FALSE,                                                  //!< boWhiteLightAv15746Command
    GE_DIG_ERROR,                                           //!< eEvCrawlerOnlyValue
    FALSE,                                                  //!< boEvCrawlerOnlyCommand
    FALSE,                                                  //!< boRelayReloadWithGeneratorCmd
    GE_DIG_ERROR,                                           //!< eRelayReloadWithGeneratorState
    FALSE,                                                  //!< boEvDevMvtsCmd
    GE_DIG_ERROR,                                           //!< eEvDevMvtsState
    FALSE,                                                  //!< boEvBoostRegenCmd
    GE_DIG_ERROR                                            //!< eEvBoostRegenState
};

TDbRamGeneralC1 gDb_tRamGeneralC1 =
{
    {DB_LIST_DFLT,{{{0,0,0,0,0,0},{0,0}},{0,FALSE,0,0,FALSE,FALSE,FALSE},{0,0,0,0,0,0}},{2,(TVoid*)&gDb_catList[2],{NULL,0},DB_STAMP}}, //!< tListRoot
    U8_MIN,                                                 //!< u8LifeByte
    GE_RUNNING,                                             //!< eWatchdogState
    0,                                                      //!< u16EcuVoltage
    FALSE,                                                  //!< boBypassArmDelta
    FALSE,                                                  //!< boBypassArmArrow
    FALSE,                                                  //!< boBypassArmTelescope
    FALSE,                                                  //!< boTestEvision
    I16_UNDEF,                                              //!< i16PvgTorConsigneCommand
    I16_MIN,                                                //!< i16PvgEvTorTurretCmd
    FALSE,                                                  //!< boEngineOn
    U16_MIN,                                                //!< u16gMotorCmd
    0,                                                      //!< u8CounterRisingEdge
    0,                                                      //!< u8CounterFallingEdge
    U16_MIN,                                                //!< u16LifeBitRotBasket
    FALSE,                                                  //!< boTestElevationActivation
    FALSE,                                                  //!< boRotTurretBool
    I16_UNDEF,                                              //!< i16ScalingJoysTurret
    I16_UNDEF,                                              //!< i16ScalingJoysDeltaArm
    I16_UNDEF,                                              //!< i16PvgDeltaArmConsigne
    I16_UNDEF,                                              //!< i16ScalingJoysArrowArm
    I16_UNDEF,                                              //!< i16PvgArrowArmConsigne
    I16_UNDEF,                                              //!< i16ScalingJoysTelescopeArm
    I16_UNDEF,                                              //!< i16PvgTelescopeArmConsigne
    {I16_UNDEF, I16_UNDEF, I16_UNDEF, I16_UNDEF, I16_UNDEF},//!< ai16PvgTorVoltageRangeValue
    TRUE,                                                   //!< boActiveWorkEnvelopLimit
    FALSE,                                                  //!< boPortillonLadderClose
    FALSE,                                                  //!< boActiveFailure
    FALSE,                                                  //!< boStopAllMovementsNacellePost
    U32_MIN,                                                //!< u32AverageTimeCycle
    U32_MIN,                                                //!< u32MaxTimeCycle
    FALSE,                                                  //!< boTestRefreshParamBlockCurrent
    FALSE,                                                  //!< boLynxOnAllMvts
    0,                                                      //!< i16ReturnValStart48XsFunc
    0U,                                                     //!< u32IndexVersion48Xs
    FALSE,                                                  //!< boTestElectricalIO
    0,                                                      //!< u8Major_48XS
    0,                                                      //!< u8Minor_48XS
    0,                                                      //!< u8Patch_48XS
    0,                                                      //!< u8Custom_48XS
    FALSE,                                                  //!< boRunningStable48XS
    FALSE,                                                  //!< boBlinkLow
    0,                                                      //!< u16FaultyValue
    0,                                                      //!< u8DeviceNum
    0,                                                      //!< u8ErrorCode
    FALSE,                                                  //!< boEngineRunningStable
    FALSE                                                   //!< boBypassTestCommand
};

TDbNvOptionsC1 gDb_tNvOptionsC1 =
{
    {DB_LIST_DFLT,{{{0,0,0,0,0,0},{0,0}},{0,FALSE,0,0,FALSE,FALSE,FALSE},{0,0,0,0,0,0}},{3,(TVoid*)&gDb_catList[3],{NULL,0},DB_STAMP}}, //!< tListRoot
    FALSE,                                                  //!< boPortillon
    FALSE,                                                  //!< boLadder
    FALSE,                                                  //!< boMeasuringMat
    FALSE,                                                  //!< boMastDigitalDisplay
    FALSE,                                                  //!< boGenerator
    FALSE,                                                  //!< boFlashingLightOnRail
    FALSE,                                                  //!< boAutoStopMeasuringMast
    FALSE,                                                  //!< boLynxOnAllMvts
    FALSE,                                                  //!< boWhiteLight15746
    FALSE,                                                  //!< boAutorisationWorkKeyPresent
    FALSE,                                                  //!< boFlasingLightAlwaysOnAUS
    FALSE,                                                  //!< boContactMastSNCFOption
    FALSE                                                   //!< boPresenceContactMast
};

TDbNvMemoryC1 gDb_tNvMemoryC1 =
{
    {DB_LIST_DFLT,{{{0,0,0,0,0,0},{0,0}},{0,FALSE,0,0,FALSE,FALSE,FALSE},{0,0,0,0,0,0}},{4,(TVoid*)&gDb_catList[4],{NULL,0},DB_STAMP}}, //!< tListRoot
    0,                                                      //!< boNvMemoryC
    0,                                                      //!< u8VarMemory1
    0,                                                      //!< u8VarMemory2
    0,                                                      //!< u8VarMemory3
    0,                                                      //!< u16VarMemory4
    0,                                                      //!< u16VarMemory5
    0,                                                      //!< u16VarMemory6
    0,                                                      //!< i16VarMemory7
    0,                                                      //!< i16VarMemory8
    0,                                                      //!< i16VarMemory9
    FALSE,                                                  //!< boVarMemory10
    FALSE,                                                  //!< boVarMemory11
    FALSE,                                                  //!< boVarMemory12
    FALSE,                                                  //!< boVarMemory13
    FALSE,                                                  //!< boVarMemory14
    0,                                                      //!< u16CptNbrRegenFinish
    FALSE,                                                  //!< boFirstKeyNoReloadWithGenerator
    FALSE,                                                  //!< boNewSocUperReloadWithGenerator
    0U,                                                     //!< u32TotalRegenMinutes
    0U                                                      //!< u32TotalElecticMinutes
};

TDbNvParametersC1 gDb_tNvParametersC1 =
{
    {DB_LIST_DFLT,{{{0,0,0,0,0,0},{0,0}},{0,FALSE,0,0,FALSE,FALSE,FALSE},{0,0,0,0,0,0}},{5,(TVoid*)&gDb_catList[5],{NULL,0},DB_STAMP}}, //!< tListRoot
    25,                                                     //!< u8PvgUpDeltaArmTurretPostCmdPrct
    75,                                                     //!< u8PvgDownDeltaArmTurretPostCmdPrct
    25,                                                     //!< u8PvgUpArrowArmTurretPostCmdPrct
    75,                                                     //!< u8PvgDownArrowArmTurretPostCmdPrct
    75,                                                     //!< u8PvgInTelescTurretPostCmdPrct
    25,                                                     //!< u8PvgOutTelescTurretPostCmdPrct
    25,                                                     //!< u8MaxPvgUpDeltaArmCmdPrct
    75,                                                     //!< u8MaxPvgDownDeltaArmCmdPrct
    25,                                                     //!< u8MaxPvgUpArrowArmCmdPrct
    75,                                                     //!< u8MaxPvgDownArrowArmCmdPrct
    75,                                                     //!< u8MaxPvgInTelescopeArmCmdPrct
    25,                                                     //!< u8MaxPvgOutTelescopeArmCmdPrct
    45,                                                     //!< u8MinPvgUpDeltaArmCmdPrct
    55,                                                     //!< u8MinPvgDownDeltaArmCmdPrct
    45,                                                     //!< u8MinPvgUpArrowArmCmdPrct
    55,                                                     //!< u8MinPvgDownArrowArmCmdPrct
    55,                                                     //!< u8MinPvgInTelescopeArmCmdPrct
    45,                                                     //!< u8MinPvgOutTelescopeArmCmdPrct
    2500,                                                   //!< u16TresholdAnaToBoForInputs48Xs
    75,                                                     //!< u8PvgAxleMovementCmdPrct
    5,                                                      //!< u8DeadZoneJoystickTurret
    5,                                                      //!< u8DeadZoneJoystickDeltaArm
    5,                                                      //!< u8DeadZoneJoystickTelescope
    5,                                                      //!< u8DeadZoneJoystickArrow
    5,                                                      //!< u8DeadZoneJoystickRailAdvancement
    5,                                                      //!< u8DeadZoneJoystickRotationTurret
    1000,                                                   //!< u16EngineOffCurEvPropMotorAccel
    3000,                                                   //!< u16MinCurEvPropMotorAccelerator
    1100,                                                   //!< u16StopCurEvPropMotorAccelerator
    1000,                                                   //!< u16EngineOffCurEvPropGenerator
    3000,                                                   //!< u16MinCurEvPropGenerator
    1100,                                                   //!< u16StopCurEvPropGenerator
    400,                                                    //!< u16PidGpEvPropMotorAcc
    50,                                                     //!< u16PidTiEvPropMotorAcc
    0,                                                      //!< u16PidTdEvPropMotorAcc
    400,                                                    //!< u16PidGpEvPropGenerator
    50,                                                     //!< u16PidTiEvPropGenerator
    0,                                                      //!< u16PidTdEvPropGenerator
    3,                                                      //!< u8DeviationLimitTransmPressure
    3600,                                                   //!< i16OutCharPosDeltaArmAngular
    0,                                                      //!< i16OutCharNeuDeltaArmAngular
    0,                                                      //!< i16OutCharNegDeltaArmAngular
    3,                                                      //!< u8DeviationLimitDeltaArmAngle
    3600,                                                   //!< i16OutCharPosArrowArmAngular
    0,                                                      //!< i16OutCharNeuArrowArmAngular
    0,                                                      //!< i16OutCharNegArrowArmAngular
    3,                                                      //!< u8DeviationLimitArrowArmAngle
    42,                                                     //!< u8MinPvgUpPendularTurretPost
    42,                                                     //!< u8MinPvgUpPendularNacellePost
    42,                                                     //!< u8MinPvgUpPendularRadioPost
    38,                                                     //!< u8MaxPvgUpPendularTurretPost
    38,                                                     //!< u8MaxPvgUpPendularNacellePost
    38,                                                     //!< u8MaxPvgUpPendularRadioPost
    {100, 100},                                             //!< au16UpPendularRampRatioTurret
    {100, 100},                                             //!< au16UpPendularRampRatioNacelle
    {100, 100},                                             //!< au16UpPendularRampRatioRadio
    42,                                                     //!< u8MinPvgDownPendularTurretPost
    42,                                                     //!< u8MinPvgDownPendularNacellePost
    42,                                                     //!< u8MinPvgDownPendularRadioPost
    38,                                                     //!< u8MaxPvgDownPendularTurretPost
    38,                                                     //!< u8MaxPvgDownPendularNacellePost
    38,                                                     //!< u8MaxPvgDownPendularRadioPost
    {100, 100},                                             //!< au16DownPendularRampRatioTurret
    {100, 100},                                             //!< au16DownPendularRampRatioNacelle
    {100, 100},                                             //!< au16DownPendularRampRatioRadio
    42,                                                     //!< u8MinPvgUpIncliBasketTurretPost
    42,                                                     //!< u8MinPvgUpIncliBasketNacellePost
    42,                                                     //!< u8MinPvgUpIncliBasketRadioPost
    38,                                                     //!< u8MaxPvgUpIncliBasketTurretPost
    38,                                                     //!< u8MaxPvgUpIncliBasketNacellePost
    38,                                                     //!< u8MaxPvgUpIncliBasketRadioPost
    {100, 100},                                             //!< au16UpInclinBasketRampRatioTurret
    {100, 100},                                             //!< au16UpInclinBasketRampRatioNacelle
    {100, 100},                                             //!< au16UpInclinBasketRampRatioRadio
    42,                                                     //!< u8MinPvgDownIncliBasketTurretPost
    42,                                                     //!< u8MinPvgDownIncliBasketNacellePost
    42,                                                     //!< u8MinPvgDownIncliBasketRadioPost
    38,                                                     //!< u8MaxPvgDownIncliBasketTurretPost
    38,                                                     //!< u8MaxPvgDownIncliBasketNacellePost
    38,                                                     //!< u8MaxPvgDownIncliBasketRadioPost
    {100, 100},                                             //!< au16DownInclinBasketRampRatioTurret
    {100, 100},                                             //!< au16DownInclinBasketRampRatioNacelle
    {100, 100},                                             //!< au16DownInclinBasketRampRatioRadio
    42,                                                     //!< u8MinPvgRotBasktClkwiseTurretPost
    42,                                                     //!< u8MinPvgRotBasktClkwiseNacellePost
    42,                                                     //!< u8MinPvgRotBasketClkwiseRadioPost
    38,                                                     //!< u8MaxPvgRotBasketClkwiseTurretPost
    38,                                                     //!< u8MaxPvgRotBasktClkwiseNacellePost
    38,                                                     //!< u8MaxPvgRotBasketClkwiseRadioPost
    {100, 100},                                             //!< au16RotBasketClkwiseRampRatioTurret
    {100, 100},                                             //!< au16RotBasketClkwiseRampRatioNacel
    {100, 100},                                             //!< au16RotBasketClkwiseRampRatioRadio
    42,                                                     //!< u8MinPvgRotBasktCtClkwiseTurtPost
    42,                                                     //!< u8MinPvgRotBasktCtClkwiseNacelPost
    42,                                                     //!< u8MinPvgRotBasktCtClkwiseRadioPost
    38,                                                     //!< u8MaxPvgRotBasktCtClkwiseTuretPost
    38,                                                     //!< u8MaxPvgRotBasktCtClkwiseNacelPost
    38,                                                     //!< u8MaxPvgRotBasktCtClkwiseRadioPost
    {100, 100},                                             //!< au16RotBasketCtClkwiseRampRatioTuret
    {100, 100},                                             //!< au16RotBasketCtClkwiseRampRatioNacel
    {100, 100},                                             //!< au16RotBasketCtClkwiseRampRatioRadio
    420,                                                    //!< u16MinPvgRotTurretClkwiseTurretPost
    420,                                                    //!< u16MinPvgRotTurretClkwiseNacelPost
    420,                                                    //!< u16MinPvgRotTurretClkwiseRadioPost
    380,                                                    //!< u16MaxPvgRotTurretClkwiseTurretPost
    380,                                                    //!< u16MaxPvgRotTurretClkwiseNacelPost
    380,                                                    //!< u16MaxPvgRotTurretClkwiseRadioPost
    {100, 100},                                             //!< au16RotTurretClkwiseRampRatioTurret
    {100, 100},                                             //!< au16RotTurretClkwiseRampRatioNacelle
    {100, 100},                                             //!< au16RotTurretClkwiseRampRatioRadio
    420,                                                    //!< u16MinPvgRotTurretCtClkwiseTurtPost
    420,                                                    //!< u16MinPvgRotTurretCtClkwseNacelPost
    420,                                                    //!< u16MinPvgRotTuretCtClkwseRadioPost
    380,                                                    //!< u16MaxPvgRotTurretCtClkwseTuretPost
    380,                                                    //!< u16MaxPvgRotTurretCtClkwseNacelPost
    380,                                                    //!< u16MaxPvgRotTurretCtClkwseRadioPost
    {100, 100},                                             //!< au16RotTurretCtClkwiseRampRatioTuret
    {100, 100},                                             //!< au16RotTurretCtClkwiseRampRatioNacel
    {100, 100},                                             //!< au16RotTurretCtClkwiseRampRatioRadio
    55,                                                     //!< u8MinPvgUpAxleOscillant
    75,                                                     //!< u8MaxPvgUpAxleOscillant
    {100, 100},                                             //!< au16PvgUpAxleOscillantRampRatio
    55,                                                     //!< u8MinPvgDownAxleOscillant
    75,                                                     //!< u8MaxPvgDownAxleOscillant
    {100, 100},                                             //!< au16PvgDownAxleOscillantRampRatio
    55,                                                     //!< u8MinPvgUpAxleFixe
    75,                                                     //!< u8MaxPvgUpAxleFixe
    {100, 100},                                             //!< au16PvgUpAxleFixeRampRatio
    55,                                                     //!< u8MinPvgDownAxleFixe
    75,                                                     //!< u8MaxPvgDownAxleFixe
    {100, 100},                                             //!< au16PvgDownAxleFixeRampRatio
    42,                                                     //!< u8MinPvgRotFrameCtClkwise
    38,                                                     //!< u8MaxPvgRotFrameCtClkwise
    {100, 100},                                             //!< au16RotFrameCtClkwiseRampRatio
    42,                                                     //!< u8MinPvgRotFrameClkwise
    38,                                                     //!< u8MaxPvgRotFrameClkwise
    {100, 100},                                             //!< au16RotFrameClkwiseRampRatio
    5000U,                                                  //!< u32AntiDemarrageTime
    500L,                                                   //!< i32TresholdRmpMotorAntidemarrage
    350,                                                    //!< u16SlowSpeedUpDeltaArmTelescOut
    650,                                                    //!< u16SlowSpeedDownDeltaArmTelescOut
    350,                                                    //!< u16SlowSpeedUpArrowArmTelescOut
    650,                                                    //!< u16SlowSpeedDownArrowArmTelescOut
    400,                                                    //!< u16RotTurretClockSlowSpeedRedAlo
    400,                                                    //!< u16RotTurretCtClockSlowSpeedRedAlo
    650,                                                    //!< u16ArrowArmDownSlowSpeedRedAlo
    400,                                                    //!< u16SlowSpeedRotTurretCtClokTelecOut
    400,                                                    //!< u16SlowSpeedRotTurretClokTelecOut
    450,                                                    //!< u16MinPvgUpMastMeasure
    250,                                                    //!< u16MaxPvgUpMastMeasure
    {100, 100},                                             //!< au16UpMastMeasureRampRatio
    450,                                                    //!< u16MinPvgDownMastMeasure
    250,                                                    //!< u16MaxPvgDownMastMeasure
    {100, 100},                                             //!< au16DownMastMeasureRampRatio
    2500,                                                   //!< i16OutCharPosTransmission1Pressure
    0,                                                      //!< i16OutCharNeuTransmission1Pressure
    0,                                                      //!< i16OutCharNegTransmission1Pressure
    20000,                                                  //!< i16InCharPosTransmission1Pressure
    4000,                                                   //!< i16InCharNeuTransmission1Pressure
    4000,                                                   //!< i16INCharNegTransmission1Pressure
    2500,                                                   //!< i16OutCharPosTransmission2Pressure
    0,                                                      //!< i16OutCharNeuTransmission2Pressure
    0,                                                      //!< i16OutCharNegTransmission2Pressure
    20000,                                                  //!< i16InCharPosTransmission2Pressure
    4000,                                                   //!< i16InCharNeuTransmission2Pressure
    4000,                                                   //!< i16INCharNegTransmission2Pressure
    2500,                                                   //!< i16OutCharPosBypassPressureSensor
    0,                                                      //!< i16OutCharNeuBypassPressureSensor
    0,                                                      //!< i16OutCharNegBypassPressureSensor
    20000,                                                  //!< i16InCharPosBypassPressureSensor
    4000,                                                   //!< i16InCharNeuBypassPressureSensor
    4000,                                                   //!< i16InCharNegBypassPressureSensor
    0,                                                      //!< boNvParametersC1_1
    0,                                                      //!< boNvParametersC1_2
    0,                                                      //!< boNvParametersC1_3
    0,                                                      //!< boNvParametersC1_4
    0,                                                      //!< boNvParametersC1_5
    0,                                                      //!< u8NvParametersC1_6
    0,                                                      //!< u8NvParametersC1_7
    0,                                                      //!< u8NvParametersC1_8
    0,                                                      //!< u8NvParametersC1_9
    0,                                                      //!< u16NvParametersC1_10
    0,                                                      //!< u16NvParametersC1_11
    0,                                                      //!< u16NvParametersC1_12
    0,                                                      //!< u16NvParametersC1_13
    0,                                                      //!< i16NvParametersC1_14
    0,                                                      //!< i16NvParametersC1_15
    0,                                                      //!< i16NvParametersC1_16
    0,                                                      //!< i16NvParametersC1_17
    0,                                                      //!< u16CurFor220VGeneratorOn
    1,                                                      //!< u8NbElementTransissionPressure
    0,                                                      //!< u16RampUpEvGenerator
    0,                                                      //!< u16RampDownEvGenerator
    0,                                                      //!< i16GasGaugeAlarm
    19606,                                                  //!< u16CRC_SRDO1
    47055,                                                  //!< u16CRC_SRDO2
    60807,                                                  //!< u16CRC_SRDO3
    65189,                                                  //!< u16CRC_SRDO4
    12930,                                                  //!< u16CRC_SRDO5
    55374,                                                  //!< u16CRC_SRDO6
    50757,                                                  //!< u16CRC_SRDO7
    52176,                                                  //!< u16CRC_SRDO8
    45018,                                                  //!< u16CRC_SRDO9
    42040,                                                  //!< u16CRC_SRDO10
    200U,                                                   //!< u32TimeoutSdoRequestTime
    FALSE,                                                  //!< boActiveSystemFault
    FALSE,                                                  //!< boBypassAlarmActiveC1
    150,                                                    //!< i16OutCharPosOilTankTemp
    -50,                                                    //!< i16OutCharNeuOilTankTemp
    -50                                                     //!< i16OutCharNegOilTankTemp
};

TDbNvCalibrationC1 gDb_tNvCalibrationC1 =
{
    {DB_LIST_DFLT,{{{0,0,0,0,0,0},{0,0}},{0,FALSE,0,0,FALSE,FALSE,FALSE},{0,0,0,0,0,0}},{6,(TVoid*)&gDb_catList[6],{NULL,0},DB_STAMP}}, //!< tListRoot
    {1000, 500, 1000, 500},                                 //!< au16ArmDeltaRampRatioNacellePost
    {1000, 500, 1000, 500},                                 //!< au16ArmArrowRampRatioNacellePost
    {1000, 500, 1000, 500},                                 //!< au16ArmTelescopeRampRatioNacellePost
    {100, 100},                                             //!< au16RotTurretRampRatio
    {100, 100, 100, 100},                                   //!< au16PvgEvTorRampRatio
    0,                                                      //!< i16AngleEndStopLowDeltaArm
    3000,                                                   //!< i16AngleCalibEndStopLowDeltaArm
    1800,                                                   //!< i16AngleEndStopHighDeltaArm
    21000,                                                  //!< i16AngleCalibEndStopHighDeltaArm
    0,                                                      //!< i16AngleEndStopLowArrowArm
    3000,                                                   //!< i16AngleCalibEndStopLowArrowArm
    1800,                                                   //!< i16AngleEndStopHighArrowArm
    21000,                                                  //!< i16AngleCalibEndStopHighArrowArm
    0,                                                      //!< u16LenghtEndStopLowTelescope1
    2250,                                                   //!< u16LenghtEndStopHighTelescope1
    0,                                                      //!< u16LenghtCaliEndStopLowTelescope1
    2250,                                                   //!< u16LenghtCaliEndStopHighTelescope1
    0,                                                      //!< u16LenghtEndStopLowTelescope2
    2250,                                                   //!< u16LenghtEndStopHighTelescope2
    0,                                                      //!< u16LenghtCaliEndStopLowTelescope2
    2250,                                                   //!< u16LenghtCaliEndStopHighTelescope2
    {1000, 500, 1000, 500},                                 //!< au16ArmDeltaRampRatioTurretPost
    {1000, 500, 1000, 500},                                 //!< au16ArmArrowRampRatioTurretPost
    {1000, 500, 1000, 500},                                 //!< au16ArmTelescopeRampRatioTurretPost
    0,                                                      //!< i16AngleCalibDeltaArmHyst
    0,                                                      //!< i16AngleCalibArrowArmHyst
    21000,                                                  //!< i16AngleCalibEndStopHighDeltaArmSla
    3000,                                                   //!< i16AngleCalibEndStopLowDeltaArmSla
    21000,                                                  //!< i16AngleCalibEndStopHighArrowArmSla
    3000                                                    //!< i16AngleCalibEndStopLowArrowArmSla
};

TDbRam48XsInputsC1 gDb_tRam48XsInputsC1 =
{
    {DB_LIST_DFLT,{{{0,0,0,0,0,0},{0,0}},{0,FALSE,0,0,FALSE,FALSE,FALSE},{0,0,0,0,0,0}},{7,(TVoid*)&gDb_catList[7],{NULL,0},DB_STAMP}}, //!< tListRoot
    FALSE,                                                  //!< boUpInclinaisonBasketButton
    U16_MIN,                                                //!< u16UpInclinaisonBasketButtonValue
    FALSE,                                                  //!< boDownInclinaisonBasketButton
    U16_UNDEF,                                              //!< u16DownInclinaisonBasketButtonValue
    FALSE,                                                  //!< boUpPendularButton
    U16_MIN,                                                //!< u16UpPendularButtonValue
    FALSE,                                                  //!< boDownPendularButton
    U16_MIN,                                                //!< u16DownPendularButtonValue
    FALSE,                                                  //!< boRotationCtClockwiseBasketButton
    U16_MIN,                                                //!< u16RotCtClockwiseBasketButtonVal
    FALSE,                                                  //!< boRotationClockwiseBasketButton
    U16_MIN,                                                //!< u16RotationClockwiseBasketButtonVal
    FALSE,                                                  //!< boOverload1
    U16_MIN,                                                //!< u16Overload1Value
    FALSE,                                                  //!< boOverload2
    U16_MIN,                                                //!< u16Overload2Value
    FALSE,                                                  //!< boNacelleBasketRightSideSensor1
    U16_MIN,                                                //!< u16NacelleBasketRightSideSensor1Val
    FALSE,                                                  //!< boNacelleBasketRightSideSensor2
    U16_MIN,                                                //!< u16NacelleBasketRightSideSensor2Val
    FALSE,                                                  //!< boNacelleBasketLeftSideSensor1
    U16_MIN,                                                //!< u16NacelleBasketLeftSideSensor1Val
    FALSE,                                                  //!< boNacelleBasketLeftSideSensor2
    U16_MIN,                                                //!< u16NacelleBasketLeftSideSensor2Val
    FALSE,                                                  //!< boLowSectorPendularSensor
    U16_MIN,                                                //!< u16LowSectorPendularSensorVal
    FALSE,                                                  //!< boHighSectorPlateSensor
    U16_MIN,                                                //!< u16HighSectorPlateSensorVal
    FALSE,                                                  //!< boFoldedLadderSensor
    U16_MIN,                                                //!< u16FoldedLadderSensorVal
    U16_UNDEF,                                              //!< u16SafetyManSystem
    U16_UNDEF,                                              //!< u16DeltaArmAxisJoystick
    U16_UNDEF,                                              //!< u16ArrowArmAxisJoystick
    U16_UNDEF,                                              //!< u16TelescopeArmAxisJoysitck
    U16_UNDEF,                                              //!< u16RotationTurretAxisJoystick
    U16_UNDEF,                                              //!< u16AdvanceAxisJoystick
    FALSE,                                                  //!< boRearmementSafetyManSystem
    U8_MIN,                                                 //!< u16RearmementSafetyManSystemVal
    FALSE,                                                  //!< boAbutementNacelleTrackSide
    U8_MIN,                                                 //!< u16AbutementNacelleTrackSideVal
    FALSE,                                                  //!< boAbutementNacelleCenteredSide
    U8_MIN,                                                 //!< u16AbutementNacelleCenteredSideVal
    FALSE,                                                  //!< boDeltaArmJystckCenteredTelescope
    FALSE,                                                  //!< boArrowJoystickCenteredTurret
    FALSE,                                                  //!< boCenteredAdvanceJoystick
    FALSE,                                                  //!< boDeadManPedal
    FALSE,                                                  //!< boPressenceInNacelleSensor1
    FALSE,                                                  //!< boPressenceInNacelleSensor2
    FALSE,                                                  //!< boGachette
    FALSE,                                                  //!< boKlaxon
    FALSE,                                                  //!< boStopMotorButton
    FALSE,                                                  //!< boAuthorizationWorkKey
    FALSE,                                                  //!< boEtallonnageJoystickButton
    FALSE,                                                  //!< boClosePortillonSensor
    U8_MIN,                                                 //!< u8Hearbeat48Xs
    U16_UNDEF                                               //!< u16BatterieVoltage48Xs
};

TDbRamRcvRadioCmdC1 gDb_tRamRcvRadioCmdC1 =
{
    {DB_LIST_DFLT,{{{0,0,0,0,0,0},{0,0}},{0,FALSE,0,0,FALSE,FALSE,FALSE},{0,0,0,0,0,0}},{8,(TVoid*)&gDb_catList[8],{NULL,0},DB_STAMP}}, //!< tListRoot
    FALSE,                                                  //!< boRotFrameClkwiseButton
    FALSE,                                                  //!< boRotFrameCtClkwiseButton
    FALSE,                                                  //!< boUpPendularOrRotTurretCtClock
    FALSE,                                                  //!< boDownPendularOrRotTurretClock
    FALSE,                                                  //!< boSelectorPendular
    FALSE,                                                  //!< boSelectorRotTurret
    FALSE,                                                  //!< boUpAxleOscillant
    FALSE,                                                  //!< boDownAxleOscillant
    FALSE,                                                  //!< boUpAxleFixe
    FALSE,                                                  //!< boDownAxleFixe
    FALSE                                                   //!< boForcingAdvanceTrack
};

TDbRamLimitMoveC1 gDb_tRamLimitMoveC1 =
{
    {DB_LIST_DFLT,{{{0,0,0,0,0,0},{0,0}},{0,FALSE,0,0,FALSE,FALSE,FALSE},{0,0,0,0,0,0}},{9,(TVoid*)&gDb_catList[9],{NULL,0},DB_STAMP}}, //!< tListRoot
    TRUE,                                                   //!< boAutorizeUpDeltaArm
    TRUE,                                                   //!< boAutorizeDownDeltaArm
    TRUE,                                                   //!< boAutorizeUpArrowArm
    TRUE,                                                   //!< boAutorizeDownArrowArm
    TRUE,                                                   //!< boAutorizeOutTelescopeArm
    TRUE,                                                   //!< boAutorizeInTelescopeArm
    TRUE,                                                   //!< boAutorizeRotBasketClkwise
    TRUE,                                                   //!< boAutorizeRotBasketCtClkwise
    TRUE,                                                   //!< boAutorizeUpInclinaisonBasket
    TRUE,                                                   //!< boAutorizeDownInclinaisonBasket
    TRUE,                                                   //!< boAutorizeUpPendular
    TRUE,                                                   //!< boAutorizeDownPendular
    TRUE,                                                   //!< boAutorizeRotTurretClkwise
    TRUE                                                    //!< boAutorizeRotTurretCtClkwise
};

TDbNvParamMotorC1 gDb_tNvParamMotorC1 =
{
    {DB_LIST_DFLT,{{{0,0,0,0,0,0},{0,0}},{0,FALSE,0,0,FALSE,FALSE,FALSE},{0,0,0,0,0,0}},{10,(TVoid*)&gDb_catList[10],{NULL,0},DB_STAMP}}, //!< tListRoot
    1200,                                                   //!< u16StartUpCurrentMotor
    2400,                                                   //!< u16HighForcingCurrentMotor
    1700,                                                   //!< u16LowForcingCurrentMotor
    2400,                                                   //!< u16Threshold3
    1800,                                                   //!< u16Threshold2
    1200,                                                   //!< u16Threshold1
    5000U,                                                  //!< u32StartUpTime
    5000U,                                                  //!< u32HighForcingTime
    2400,                                                   //!< u16TranslationCurrentMotor
    1800,                                                   //!< u16NoMovementCurrentMotor
    1460,                                                   //!< u16TresholdRegimeForGenerator
    1100,                                                   //!< u16EngineIdleSpeedMotor
    3                                                       //!< u8CptmaxNoMovement
};

TDbRam48XsOutputsC1 gDb_tRam48XsOutputsC1 =
{
    {DB_LIST_DFLT,{{{0,0,0,0,0,0},{0,0}},{0,FALSE,0,0,FALSE,FALSE,FALSE},{0,0,0,0,0,0}},{11,(TVoid*)&gDb_catList[11],{NULL,0},DB_STAMP}}, //!< tListRoot
    GE_IO_E_UNKNOWN,                                        //!< eMotorDefaultLightErrSta
    FALSE,                                                  //!< boMotorDefaultLight
    GE_IO_E_UNKNOWN,                                        //!< eOverloadLightErrSta
    FALSE,                                                  //!< boOverloadLight
    GE_IO_E_UNKNOWN,                                        //!< eBuzzerErrSta
    FALSE,                                                  //!< boBuzzer
    FALSE,                                                  //!< boSupplyDeadManPedalAndJoysticks
    GE_IO_E_UNKNOWN,                                        //!< eWarmingLightErrSta
    FALSE,                                                  //!< boWarmingLight
    GE_IO_E_UNKNOWN,                                        //!< eDeversDefaultLightErrSta
    FALSE,                                                  //!< boDeversDefaultLight
    GE_IO_E_UNKNOWN,                                        //!< eGasOilLightErrSta
    FALSE,                                                  //!< boGasOilLight
    GE_IO_E_UNKNOWN,                                        //!< eWhiteLightARGBasketErrSta
    FALSE,                                                  //!< boWhiteLightARGBasket
    GE_IO_E_UNKNOWN,                                        //!< eRedLightARGBasketErrSta
    FALSE,                                                  //!< boRedLightARGBasket
    GE_IO_E_UNKNOWN,                                        //!< eRedLightARDBasketErrSta
    FALSE,                                                  //!< boRedLightARDBasket
    GE_IO_E_UNKNOWN,                                        //!< eWhiteLightARDBasketErrSta
    FALSE,                                                  //!< boWhiteLightARDBasket
    GE_IO_E_UNKNOWN,                                        //!< eWhiteLightAr15746ErrSta
    FALSE                                                   //!< boWhiteLightAr15746Command
};

TDbRamEcuC1RcvFromC0 gDb_tRamEcuC1RcvFromC0 =
{
    {DB_LIST_DFLT,{{{0,0,0,0,0,0},{0,0}},{0,FALSE,0,0,FALSE,FALSE,FALSE},{0,0,0,0,0,0}},{12,(TVoid*)&gDb_catList[12],{NULL,0},DB_STAMP}}, //!< tListRoot
    FALSE,                                                  //!< boRestrictedModeAruActive
    FALSE,                                                  //!< boTranslationMovementIsSolicited
    FALSE,                                                  //!< boAxleMovementIsSolicited
    FALSE,                                                  //!< boDownAxleFixeSensor
    FALSE,                                                  //!< boDownAxleOscillantSensor
    U16_UNDEF,                                              //!< u16SlopeAngle
    FALSE,                                                  //!< boReduceSpeedRotTurretClockwise
    FALSE,                                                  //!< boReduceSpeedRotTurretCounterClock
    FALSE,                                                  //!< boReduceSpeedArrowArmDown
    FALSE,                                                  //!< boStopRotTurretClockwise
    FALSE,                                                  //!< boStopRotTurretCounterClockwise
    FALSE,                                                  //!< boStopRotBasketClockwise
    FALSE,                                                  //!< boStopRotBasketCounterClockwise
    FALSE,                                                  //!< boStopArrowArmDown
    FALSE,                                                  //!< boStopTelescopeOut
    I16_UNDEF,                                              //!< i16EncodeurTurret1Angle
    FALSE,                                                  //!< boRedLightARGBasketCmd
    FALSE,                                                  //!< boWhiteLightARGBasketCmd
    U32_UNDEF,                                              //!< u32EncodeurMastMeasureRaw
    FALSE,                                                  //!< boWrongAbutments
    0L,                                                     //!< i32SpeedVehicleKmhx100
    FALSE,                                                  //!< boStopMovementByBrakeTest
    FALSE,                                                  //!< boStopMovementByBreakInBrake
    FALSE,                                                  //!< boEnableBuzzerSelectPost
    GE_POST_NO_POST,                                        //!< eSelectedControlPost
    FALSE,                                                  //!< boCenteredTurretState
    FALSE,                                                  //!< boAuthorizeWork
    FALSE,                                                  //!< boUpOsciAxlePos
    FALSE,                                                  //!< boUpFixeAxlePos
    GE_NO_RAIL_WORK_MODE,                                   //!< eRailWorkMode
    0,                                                      //!< u16EvForwardCommand
    0,                                                      //!< u16EvBackwardCommand
    FALSE,                                                  //!< boRedLightARDBasketCmd
    FALSE,                                                  //!< boWhiteLightARDBasketCmd
    FALSE,                                                  //!< boSecondParkBrakeActive
    FALSE,                                                  //!< boAutorisationHighSpeedKeyState
    FALSE,                                                  //!< boTransRailElectricRampOngoing
    0,                                                      //!< i16RpmPvgTransRail
    0,                                                      //!< u8Batt_Soc
    0,                                                      //!< i16Ibatt_ist
    FALSE                                                   //!< boSendAuthorizeReloadBattery
};

TDbRamEcuEvision7C1 gDb_tRamEcuEvision7C1 =
{
    {DB_LIST_DFLT,{{{0,0,0,0,0,0},{0,0}},{0,FALSE,0,0,FALSE,FALSE,FALSE},{0,0,0,0,0,0}},{13,(TVoid*)&gDb_catList[13],{NULL,0},DB_STAMP}}, //!< tListRoot
    FALSE,                                                  //!< bogBattery_On_Off
    FALSE,                                                  //!< bogPreheat_On_Off
    FALSE,                                                  //!< bogEngine_Faillure_On_Off
    FALSE,                                                  //!< bogMaintenance_On_Off
    FALSE,                                                  //!< bogOil_On_OFF
    FALSE,                                                  //!< bogDeltaArmSectorDown
    FALSE,                                                  //!< bogArrowArmSectorDown
    FALSE,                                                  //!< bogPendularSectorDown
    FALSE,                                                  //!< bogDeltaArmInCenter
    FALSE,                                                  //!< bogArrowArmInCenter
    FALSE,                                                  //!< bogPendularInCenter
    FALSE,                                                  //!< bogBasketRotationInCenter
    FALSE,                                                  //!< bogTelescopeInCenter
    FALSE,                                                  //!< bogBasketInclinaisonInCenter
    FALSE,                                                  //!< bogDeltaArmMoveUpAllow
    FALSE,                                                  //!< bogDeltaArmMoveDownAllow
    FALSE,                                                  //!< bogArrowArmMoveUpAllow
    FALSE,                                                  //!< bogArrowArmMoveDownAllow
    FALSE,                                                  //!< bogPendularMoveUpAllow
    FALSE,                                                  //!< bogPendularMoveDownAllow
    FALSE,                                                  //!< bogTelescopeMoveOutAllow
    FALSE,                                                  //!< bogTelescopeMoveInAllow
    FALSE,                                                  //!< bogTurretCtClockWiseMoveAllow
    FALSE,                                                  //!< bogTurretClockWiseMoveAllow
    FALSE,                                                  //!< bogBasketRotCtClockWiseMoveAllow
    FALSE,                                                  //!< bogBasketRotClockWiseMoveAllow
    FALSE,                                                  //!< bogBasketInclinaisonMoveUpAllow
    FALSE,                                                  //!< bogBasketInclinaisonMoveDownAllow
    FALSE,                                                  //!< bogVehiculeDefault
    FALSE,                                                  //!< bogTelescopeOutputPossible
    FALSE,                                                  //!< bogTelescopeWinderFault
    FALSE,                                                  //!< bogNacellePostSelector
    FALSE,                                                  //!< bogSTOP_On_Off
    FALSE,                                                  //!< bogSafeManSystem
    FALSE,                                                  //!< bogHighSpeedAllow
    FALSE,                                                  //!< bogAutomatiqueStop
    FALSE,                                                  //!< bogLowSpeedByFault
    FALSE,                                                  //!< bogMeasuringMastFault
    U8_UNDEF,                                               //!< u8gFuel
    U16_UNDEF,                                              //!< u16gBattery_Voltage
    U8_UNDEF                                                //!< u8gTrainTransmissionPressure
};

TDbRamEvision4C1 gDb_tRamEvision4C1 =
{
    {DB_LIST_DFLT,{{{0,0,0,0,0,0},{0,0}},{0,FALSE,0,0,FALSE,FALSE,FALSE},{0,0,0,0,0,0}},{14,(TVoid*)&gDb_catList[14],{NULL,0},DB_STAMP}}, //!< tListRoot
    U8_UNDEF,                                               //!< u8LifeByte
    FALSE,                                                  //!< bogDelta_Arm_Move_Up
    FALSE,                                                  //!< bogDelta_Arm_Move_Down
    FALSE,                                                  //!< bogArrow_Move_Up
    FALSE,                                                  //!< bogArrow_Move_Down
    FALSE,                                                  //!< bogPendular_Move_Up
    FALSE,                                                  //!< bogPendular_Move_Down
    FALSE,                                                  //!< bogTelescope_Move_Out
    FALSE,                                                  //!< bogTelescope_Move_In
    FALSE,                                                  //!< bogBasket_Inclinaison_Move_Up
    FALSE,                                                  //!< bogBasket_Inclinaison_Move_Down
    FALSE,                                                  //!< bogTurret_Rotate_ClockWise
    FALSE,                                                  //!< bogTurret_Rotate_Counter_ClockWise
    FALSE,                                                  //!< bogBasket_Rotate_ClockWise
    FALSE,                                                  //!< bogBasket_Rotate_Counter_ClockWise
    FALSE,                                                  //!< bogKeyRpmSelect
    FALSE,                                                  //!< bogKeyRpmOff
    FALSE,                                                  //!< bogForcingWhiteRaillight
    FALSE,                                                  //!< bogForcingNeons
    FALSE,                                                  //!< bogKeyCalibMin
    FALSE,                                                  //!< bogKeyCalibMax
    FALSE,                                                  //!< bogKeyCalibValid
    U8_MIN,                                                 //!< u8gElementChoice
    FALSE,                                                  //!< bogKeyCalibMax2
    FALSE,                                                  //!< bogKeySlopeLgReset
    FALSE,                                                  //!< bogKeySlopeTrReset
    0,                                                      //!< u8ActivePageOpus
    FALSE,                                                  //!< boKeyYesReloadWithGenerator
    FALSE                                                   //!< boKeyNoReloadWithGenerator
};

TDbRamEcuCaliCmdC1 gDb_tRamEcuCaliCmdC1 =
{
    {DB_LIST_DFLT,{{{0,0,0,0,0,0},{0,0}},{0,FALSE,0,0,FALSE,FALSE,FALSE},{0,0,0,0,0,0}},{15,(TVoid*)&gDb_catList[15],{NULL,0},DB_STAMP}}, //!< tListRoot
    FALSE,                                                  //!< boCalibAngleEndStopLowDeltaArm
    FALSE,                                                  //!< boCalibAngleEndStopHighDeltaArm
    FALSE,                                                  //!< boCalibAngleEndStopLowArrowArm
    FALSE,                                                  //!< boCalibAngleEndStopHighArrowArm
    FALSE,                                                  //!< boSavedCalibrationListC1
    FALSE,                                                  //!< boCalibLenghtEndStopLowTelescope
    FALSE                                                   //!< boCalibLenghtEndStopHighTelescope
};

TDbNvParamLimitWorkEnvelopeC1 gDb_tNvParamLimitWorkEnvelopeC1 =
{
    {DB_LIST_DFLT,{{{0,0,0,0,0,0},{0,0}},{0,FALSE,0,0,FALSE,FALSE,FALSE},{0,0,0,0,0,0}},{16,(TVoid*)&gDb_catList[16],{NULL,0},DB_STAMP}}, //!< tListRoot
    {0, 10, 20, 30, 40, 50, 60, 70, 
    80},                                                    //!< au16SlopeTelescModeCurveSlopeAngles
    {2250, 2250, 2045, 1645, 1645, 1645, 1645, 1450, 
    1312},                                                  //!< au16SlopeTelescModeCurveTelescLenght
    100,                                                    //!< u16TelescopeLimitCriticZoneThresRel
    -10,                                                    //!< i16TelescopeLimitCriticZoneHystRel
    30,                                                     //!< u16DeltaArmLimitSlopeHighThresAbs
    -5,                                                     //!< i16DeltaArmLimitSlopeHighHystRel
    250,                                                    //!< i16DeltaArmLimitUpperZoneThresAbs
    -10,                                                    //!< i16DeltaArmLimitUpperZoneHystRel
    -50,                                                    //!< i16DeltaArmLimitSlowZoneThresRel
    800,                                                    //!< u16DeltaArmLimitSlowSpeedReduc
    60,                                                     //!< i16DeltaArmLimitCriticZoneThresRel
    -10,                                                    //!< i16DeltaArmLimitCriticZoneHystRel
    450,                                                    //!< i16ArrowArmLimitLowerZoneThresAbs
    10,                                                     //!< i16ArrowArmLimitLowerZoneHystRel
    800,                                                    //!< i16ArrowArmLimitSlowZoneThresRel
    50,                                                     //!< u16ArrowArmLimitSlowSpeedReduc
    -60,                                                    //!< i16ArrowArmLimitCriticZoneThresRel
    10,                                                     //!< i16ArrowArmLimitCriticZoneHystRel
    {0, 10, 20, 30, 40, 50, 60, 70, 
    80},                                                    //!< au16ArmTelescModeCurveArmAngles
    {2250, 2250, 2045, 1645, 1645, 1645, 1645, 1450, 
    1312},                                                  //!< au16ArmTelescModeCurveTelescLenght
    FALSE,                                                  //!< boSlopeTelescopeMode
    4500,                                                   //!< u16ArrowArmPerformLowUpperSector
    3500,                                                   //!< u16ArrowArmPerformSectorUpperCritic
    100                                                     //!< u16ArrowArmPerformSectorHyst
};

TDbRamLimitWorkEnvelopeC1 gDb_tRamLimitWorkEnvelopeC1 =
{
    {DB_LIST_DFLT,{{{0,0,0,0,0,0},{0,0}},{0,FALSE,0,0,FALSE,FALSE,FALSE},{0,0,0,0,0,0}},{17,(TVoid*)&gDb_catList[17],{NULL,0},DB_STAMP}}, //!< tListRoot
    FALSE,                                                  //!< boReduceSpeedDeltaArmUp
    FALSE,                                                  //!< boReduceSpeedArrowArmDown
    FALSE,                                                  //!< boStopTelescopeOut
    FALSE,                                                  //!< boStopDeltaArmUp
    FALSE,                                                  //!< boStopArrowArmDown
    FALSE,                                                  //!< boStopAllMovements
    0,                                                      //!< u16SelectedSlopeAngle
    0,                                                      //!< u16TelescopeLimitStrokeThres
    FALSE,                                                  //!< boTelescopeInCriticalZone
    FALSE,                                                  //!< boSlopeIsHigh
    FALSE,                                                  //!< boDeltaArmInUpperZone
    FALSE,                                                  //!< boDeltaArmInCriticalZone
    FALSE,                                                  //!< boArrowArmInLowerZone
    FALSE,                                                  //!< boArrowArmInCriticalZone
    FALSE,                                                  //!< boEnableSimuMode
    0,                                                      //!< i16SimuSlopeAngleLong
    0,                                                      //!< i16SimuSlopeAngleTrans
    0,                                                      //!< u16SimuTelescopePositionSensor
    0,                                                      //!< i16SimuDeltaArmAngularSensor
    0                                                       //!< i16SimuArrowArmAngularSensor
};

TDbRamTelescopeCanC1 gDb_tRamTelescopeCanC1 =
{
    {DB_LIST_DFLT,{{{0,0,0,0,0,0},{0,0}},{0,FALSE,0,0,FALSE,FALSE,FALSE},{0,0,0,0,0,0}},{18,(TVoid*)&gDb_catList[18],{NULL,0},DB_STAMP}}, //!< tListRoot
    U8_UNDEF,                                               //!< u8StateHeartBeatTelescopeSensor
    U16_UNDEF,                                              //!< u16LenghtTelescope1
    U8_UNDEF,                                               //!< u8ErrorRetractorTelescope1
    U16_UNDEF,                                              //!< u16RetractorTelescopeVal1
    U16_UNDEF,                                              //!< u16LenghtTelescope2
    U8_UNDEF,                                               //!< u8ErrorRetractorTelescope2
    U16_UNDEF                                               //!< u16RetractorTelescopeVal2
};

TDbRamMvtEndStopC1 gDb_tRamMvtEndStopC1 =
{
    {DB_LIST_DFLT,{{{0,0,0,0,0,0},{0,0}},{0,FALSE,0,0,FALSE,FALSE,FALSE},{0,0,0,0,0,0}},{19,(TVoid*)&gDb_catList[19],{NULL,0},DB_STAMP}}, //!< tListRoot
    FALSE,                                                  //!< boReduceSpeedRotTurretClockwise
    FALSE,                                                  //!< boStopRotTurretClockwise
    FALSE,                                                  //!< boReduceSpeedRotTurretCounterClock
    FALSE,                                                  //!< boStopRotTurretCounterClockwise
    FALSE,                                                  //!< boReduceSpeedDeltaArmDown
    FALSE,                                                  //!< boFoldedDeltaArm
    FALSE,                                                  //!< boReduceSpeedDeltaArmUp
    0,                                                      //!< i16TestTurretPosition
    0,                                                      //!< i16TestDeltaArmPosition
    FALSE,                                                  //!< boFoldedArrowArm
    FALSE,                                                  //!< boReduceSpeedArrowArmUp
    FALSE,                                                  //!< boReduceSpeedArrowArmDown
    FALSE,                                                  //!< boReduceSpeedTelescopFolded
    FALSE,                                                  //!< boReduceSpeedTelescopeUp
    FALSE,                                                  //!< boReduceSpeedTelescopeDown
    FALSE,                                                  //!< boPerformFoldedTelescopeStop
    FALSE,                                                  //!< boPerformAutoriseTransSlopeArrow
    FALSE,                                                  //!< boValidSectorTelescope
    FALSE                                                   //!< boValidFirstSectorTelescope
};

TDbNvParamMvtEndStopC1 gDb_tNvParamMvtEndStopC1 =
{
    {DB_LIST_DFLT,{{{0,0,0,0,0,0},{0,0}},{0,FALSE,0,0,FALSE,FALSE,FALSE},{0,0,0,0,0,0}},{20,(TVoid*)&gDb_catList[20],{NULL,0},DB_STAMP}}, //!< tListRoot
    -1900,                                                  //!< i16TurretNegEndStopThres
    10,                                                     //!< i16TurretNegEndStopHyst
    50,                                                     //!< i16TurretNegEndStopSlowThres
    1900,                                                   //!< i16TurretPosEndStopThres
    -10,                                                    //!< i16TurretPosEndStopHyst
    -50,                                                    //!< i16TurretPosEndStopSlowThres
    100,                                                    //!< i16FoldedDeltaArmThres
    100,                                                    //!< i16FoldedDeltaArmHyst
    500,                                                    //!< i16DeltaArmBottomEndStopSlowThres
    8000,                                                   //!< i16DeltaArmTopEndStopThres
    -100,                                                   //!< i16DeltaArmTopEndStopHyst
    -500,                                                   //!< i16DeltaArmTopEndStopSlowThres
    100,                                                    //!< i16FoldedArrowArmThres
    100,                                                    //!< i16FoldedArrowArmHyst
    600,                                                    //!< u16DeltaArmSlowMvtEndStop
    500,                                                    //!< i16ArrowArmTopEndStopSlowThres
    300,                                                    //!< i16ArrowArmBottomEndStopSlowThres
    7800,                                                   //!< i16ArrowArmTopEndStopThres
    650,                                                    //!< u16ArrowArmSlowMvtDownEndStop
    350,                                                    //!< u16ArrowArmSlowMvtUpEndStop
    650,                                                    //!< u16TelescopSlowMvtFoldedEndStop
    600,                                                    //!< u16TelescopePerfOutLimit
    10,                                                     //!< u16TelescopePerfOutLimitHyst
    50                                                      //!< u16TelescopePerfOutLimitSlowThres
};

TDbNvParamAutoStopC1 gDb_tNvParamAutoStopC1 =
{
    {DB_LIST_DFLT,{{{0,0,0,0,0,0},{0,0}},{0,FALSE,0,0,FALSE,FALSE,FALSE},{0,0,0,0,0,0}},{21,(TVoid*)&gDb_catList[21],{NULL,0},DB_STAMP}}, //!< tListRoot
    0,                                                      //!< i16TurretRearCenterPos
    1800,                                                   //!< i16TurretFrontPositiveCenterPos
    -1800,                                                  //!< i16TurretFrontNegativeCenterPos
    20,                                                     //!< i16TurretCenterZoneWindow
    10,                                                     //!< i16TurretCenterZoneWindowHyst
    50,                                                     //!< i16TurretCenterZoneSlowThres
    10,                                                     //!< i16TurretCenterZoneWindowLeft
    10                                                      //!< i16TurretCenterZoneWindowRight
};

TDbRamAutoStopC1 gDb_tRamAutoStopC1 =
{
    {DB_LIST_DFLT,{{{0,0,0,0,0,0},{0,0}},{0,FALSE,0,0,FALSE,FALSE,FALSE},{0,0,0,0,0,0}},{22,(TVoid*)&gDb_catList[22],{NULL,0},DB_STAMP}}, //!< tListRoot
    FALSE,                                                  //!< boStopBasketRotation
    FALSE,                                                  //!< boStopTurretRotation
    FALSE,                                                  //!< boReduceSpeedRotTurretClockwise
    FALSE,                                                  //!< boReduceSpeedRotTurretCounterClock
    FALSE,                                                  //!< boTurrentInCenterPos
    FALSE,                                                  //!< boEnableSimuMode
    FALSE,                                                  //!< boTestBasketLeftSideSensor
    FALSE,                                                  //!< boTestBasketRightSideSensor
    FALSE,                                                  //!< boTestBasketRotCmdEnabled
    0,                                                      //!< i16TestTurretAngularPosition
    FALSE,                                                  //!< boTestTurretRotCmdEnabled
    FALSE,                                                  //!< boTurretInRearCenterPos
    FALSE,                                                  //!< boTurretInFrontPositiveCenterPos
    FALSE,                                                  //!< boTurretInFrontNegativeCenterPos
    FALSE,                                                  //!< boBasketInCentrerPos
    FALSE,                                                  //!< boTurretRotationCmdEnabled
    0,                                                      //!< u8CounterStopTurretRotationDebug
    0                                                       //!< u8CounterNoStopTurretRotationDebug
};

TDbRamMastMeasureC1 gDb_tRamMastMeasureC1 =
{
    {DB_LIST_DFLT,{{{0,0,0,0,0,0},{0,0}},{0,FALSE,0,0,FALSE,FALSE,FALSE},{0,0,0,0,0,0}},{23,(TVoid*)&gDb_catList[23],{NULL,0},DB_STAMP}}, //!< tListRoot
    FALSE,                                                  //!< boFonction_Active
    FALSE,                                                  //!< boCommande_Neutre
    FALSE,                                                  //!< boAuthorize_Driving
    FALSE,                                                  //!< boFolded_Position_Mast
    FALSE,                                                  //!< boStop_Movement_By_Mast
    FALSE,                                                  //!< boRazDistanceTraveledButton
    0L,                                                     //!< i32DistanceTraveledMm
    U32_UNDEF,                                              //!< u32DeltaMinMaxEncodeurValue
    U16_UNDEF,                                              //!< u16EncodeurMastCentimeterOffset
    U16_UNDEF,                                              //!< u16EncodeurMastMeasureCentimeter
    FALSE,                                                  //!< boNoMovementIsDuringAndNeutralCmd
    0,                                                      //!< i16ScalingJoyMatTelescope
    U32_UNDEF,                                              //!< u32TimeWithMastNotFolded
    FALSE,                                                  //!< boDownAxleOscillantForMast
    FALSE,                                                  //!< boVisibleDistanceTraveledMat
    FALSE,                                                  //!< boMastInUpperPosition
    FALSE,                                                  //!< boMastPanthoInFoldedPosition
    FALSE,                                                  //!< boValveInDownPosition
    FALSE,                                                  //!< boPostInterdictionMastSNCF
    FALSE,                                                  //!< boMemoFirstValidCycleMast
    FALSE,                                                  //!< boContactMastAutorisationOfMvts
    FALSE,                                                  //!< boInterdictionOfNacelleTurretPost
    FALSE                                                   //!< boPictoWarningFirstValidCycleMast
};

TDbNvParamMastC1 gDb_tNvParamMastC1 =
{
    {DB_LIST_DFLT,{{{0,0,0,0,0,0},{0,0}},{0,FALSE,0,0,FALSE,FALSE,FALSE},{0,0,0,0,0,0}},{24,(TVoid*)&gDb_catList[24],{NULL,0},DB_STAMP}}, //!< tListRoot
    0,                                                      //!< i16Offset_Mast_Centimeter
    20,                                                     //!< i16FoldedMastThres
    5,                                                      //!< i16FoldedMastHyst
    0U,                                                     //!< u32MinValueEncodeurMast
    5000U,                                                  //!< u32MaxValueEncodeurMast
    0,                                                      //!< u16MinCentimeterEncodeurMast
    1000,                                                   //!< u16MaxCentimeterEncodeurMast
    500U                                                    //!< u32MastDisplayRefreshCycleTime
};

TDbRamEvision7C1 gDb_tRamEvision7C1 =
{
    {DB_LIST_DFLT,{{{0,0,0,0,0,0},{0,0}},{0,FALSE,0,0,FALSE,FALSE,FALSE},{0,0,0,0,0,0}},{25,(TVoid*)&gDb_catList[25],{NULL,0},DB_STAMP}}, //!< tListRoot
    FALSE,                                                  //!< bogActivateMeasuringMast
    FALSE,                                                  //!< bogButtonCalibMinMastMeasure
    FALSE,                                                  //!< bogButtonCalibMaxMastMeasure
    FALSE,                                                  //!< boSavePosEncodeurMastMeasureButton
    FALSE,                                                  //!< boRazDistanceTraveledMastMeasure
    FALSE,                                                  //!< bogSerialNumber
    FALSE,                                                  //!< bogBPBasketValidate
    FALSE,                                                  //!< bogKeyFilterOverload
    FALSE,                                                  //!< bogKeyNextMode
    FALSE,                                                  //!< bogKeyPrevMode
    FALSE,                                                  //!< bogKeySignalDanger
    FALSE,                                                  //!< bogKeyFlashLightON
    FALSE,                                                  //!< bogKeyCalibMastMin
    FALSE,                                                  //!< bogKeyCalibMastMax
    FALSE,                                                  //!< bogKeyCalibMastValid
    FALSE                                                   //!< bogKeyGeneratorActivate
};

TDbNvParamAlarmC1 gDb_tNvParamAlarmC1 =
{
    {DB_LIST_DFLT,{{{0,0,0,0,0,0},{0,0}},{0,FALSE,0,0,FALSE,FALSE,FALSE},{0,0,0,0,0,0}},{26,(TVoid*)&gDb_catList[26],{NULL,0},DB_STAMP}}, //!< tListRoot
    0,                                                      //!< i16BypassPressureThres
    0,                                                      //!< i16TelescopeInToleranceInductive
    0,                                                      //!< i16TelescopeToleranceNoMovement
    0,                                                      //!< i16TelescopeToleranceChannels
    0L,                                                     //!< i32AlternatorRegimeMaxThres
    0,                                                      //!< u16BatteryVoltageMinThres
    15,                                                     //!< u8MinAlarmJoyDeltaArmPrctBat
    85,                                                     //!< u8MaxAlarmJoyDeltaArmPrctBat
    15,                                                     //!< u8MinAlarmJoyArrowArmPrctBat
    85,                                                     //!< u8MaxAlarmJoyArrowArmPrctBat
    15,                                                     //!< u8MinAlarmJoyTelescopeArmPrctBat
    85,                                                     //!< u8MaxAlarmJoyTelescopeArmPrctBat
    15,                                                     //!< u8MinAlarmJoyRotTurretArmPrctBat
    85,                                                     //!< u8MaxAlarmJoyRotTurretArmPrctBat
    15,                                                     //!< u8MinAlarmJoyAdvancementPrctBat
    85,                                                     //!< u8MaxAlarmJoyAdvancementPrctBat
    25,                                                     //!< u16TimeBypassFault
    50                                                      //!< u16cptTimeTestBypassMax
};

TDbRamEcuC1RcvFailluresFromC0 gDb_tRamEcuC1RcvFailluresFromC0 =
{
    {DB_LIST_DFLT,{{{0,0,0,0,0,0},{0,0}},{0,FALSE,0,0,FALSE,FALSE,FALSE},{0,0,0,0,0,0}},{27,(TVoid*)&gDb_catList[27],{NULL,0},DB_STAMP}}, //!< tListRoot
    FALSE,                                                  //!< boDm_Swi_Dbl_NcNo_Inc_FrameRot
    FALSE,                                                  //!< boDm_Turret_Sensor_Fault
    FALSE,                                                  //!< boEvParkBrakeAxleOscillantFault
    FALSE,                                                  //!< boEvParkBrakeAxleFixeFault
    FALSE,                                                  //!< boEvServiceBrakeAxleOscillantFault
    FALSE,                                                  //!< boEvServiceBrakeAxleFixeFault
    FALSE,                                                  //!< boEvServiceBrakeTrackFault
    FALSE,                                                  //!< boRm_Com_Can_Radio_Loss
    FALSE,                                                  //!< boEv2ndParkBrakeAxleFixeFault
    FALSE                                                   //!< boEv2ndParkBrakeAxleOsciFault
};

TDbRamData4C1RcvFromC0 gDb_tRamData4C1RcvFromC0 =
{
    {DB_LIST_DFLT,{{{0,0,0,0,0,0},{0,0}},{0,FALSE,0,0,FALSE,FALSE,FALSE},{0,0,0,0,0,0}},{28,(TVoid*)&gDb_catList[28],{NULL,0},DB_STAMP}}, //!< tListRoot
    FALSE,                                                  //!< boStopAggravantMovements
    FALSE,                                                  //!< boTurretPostorRadoPostOn
    FALSE,                                                  //!< boMotorAccelerated
    FALSE,                                                  //!< boRadioPostSelectorOn
    FALSE,                                                  //!< boSlopeHighWithWorkOnCrawler
    FALSE,                                                  //!< boErrorActiveOnC0
    FALSE,                                                  //!< boRailWorkMultiLaneMode
    FALSE,                                                  //!< boTestFrance
    FALSE,                                                  //!< boWhiteLightAV15746Command
    FALSE,                                                  //!< boWhiteLightAr15746Command
    0,                                                      //!< i16Signal_9
    0,                                                      //!< i16Signal_10
    0,                                                      //!< i16Signal_11
    FALSE,                                                  //!< boAddPerformanceFunc
    FALSE,                                                  //!< boSlopeCaseLess2Deg
    FALSE,                                                  //!< boSlopeCaseLess4Deg
    FALSE,                                                  //!< boSlopeCaseLess6Deg
    FALSE,                                                  //!< boSlopeCaseHigher6Deg
    FALSE,                                                  //!< boTurretInSpeedZone2Deg
    FALSE,                                                  //!< boTurretInSpeedZone4Deg
    FALSE,                                                  //!< boTurretInSpeedZone2DegForBasket
    GE_DI_OFF,                                              //!< eSelectedControlPost
    FALSE,                                                  //!< boUpMastSensorNC
    FALSE,                                                  //!< boValveInDownPositionSensor
    FALSE,                                                  //!< boMeasuringMastSensorFolded
    FALSE,                                                  //!< boPresenceSensorPlate
    U8_MIN                                                  //!< u8RecoveryReductionRatio
};

TDbRamGeneralNeotecC1 gDb_tRamGeneralNeotecC1 =
{
    {DB_LIST_DFLT,{{{0,0,0,0,0,0},{0,0}},{0,FALSE,0,0,FALSE,FALSE,FALSE},{0,0,0,0,0,0}},{29,(TVoid*)&gDb_catList[29],{NULL,0},DB_STAMP}}, //!< tListRoot
    0,                                                      //!< boRamGeneralNeotecC1_1
    0,                                                      //!< boRamGeneralNeotecC1_1_1
    0,                                                      //!< boRamGeneralNeotecC1_1_2
    0,                                                      //!< boRamGeneralNeotecC1_1_3
    0,                                                      //!< boRamGeneralNeotecC1_1_4
    0,                                                      //!< boRamGeneralNeotecC1_1_5
    0,                                                      //!< boRamGeneralNeotecC1_1_6
    0,                                                      //!< boRamGeneralNeotecC1_1_7
    0,                                                      //!< boRamGeneralNeotecC1_1_8
    0,                                                      //!< boRamGeneralNeotecC1_1_9
    0,                                                      //!< boRamGeneralNeotecC1_1_10
    0,                                                      //!< boRamGeneralNeotecC1_1_11
    0,                                                      //!< boRamGeneralNeotecC1_1_12
    0,                                                      //!< boRamGeneralNeotecC1_1_13
    0,                                                      //!< boRamGeneralNeotecC1_1_14
    0,                                                      //!< boRamGeneralNeotecC1_1_15
    0,                                                      //!< u8RamGeneralNeotecC1_2
    0,                                                      //!< u8RamGeneralNeotecC1_2_1
    0,                                                      //!< u8RamGeneralNeotecC1_2_2
    0,                                                      //!< u8RamGeneralNeotecC1_2_3
    0,                                                      //!< u8RamGeneralNeotecC1_2_4
    0,                                                      //!< u8RamGeneralNeotecC1_2_5
    0,                                                      //!< u16RamGeneralNeotecC1_3
    0,                                                      //!< u16RamGeneralNeotecC1_3_1
    0,                                                      //!< u16RamGeneralNeotecC1_3_2
    0,                                                      //!< u16RamGeneralNeotecC1_3_3
    0,                                                      //!< u16RamGeneralNeotecC1_3_4
    0,                                                      //!< u16RamGeneralNeotecC1_3_5
    0,                                                      //!< u16RamGeneralNeotecC1_3_6
    0,                                                      //!< u16RamGeneralNeotecC1_3_7
    0,                                                      //!< u16RamGeneralNeotecC1_3_8
    0,                                                      //!< i16RamGeneralNeotecC1_4
    0,                                                      //!< i16RamGeneralNeotecC1_4_1
    0,                                                      //!< i16RamGeneralNeotecC1_4_2
    0,                                                      //!< i16RamGeneralNeotecC1_4_3
    0,                                                      //!< i16RamGeneralNeotecC1_4_4
    0,                                                      //!< i16RamGeneralNeotecC1_4_5
    0,                                                      //!< i16RamGeneralNeotecC1_4_6
    0,                                                      //!< i16RamGeneralNeotecC1_4_7
    0,                                                      //!< i16RamGeneralNeotecC1_4_8
    0,                                                      //!< i16WaterTempJ1939
    0,                                                      //!< u16OilPressureJ1939
    0,                                                      //!< u16MotorSpeedJ1939
    0L,                                                     //!< i32AlternatorCurentJ1939
    GE_Stopped,                                             //!< eMotorStateJ1939
    0,                                                      //!< i16PowerBatterie
    0,                                                      //!< u16MotorSpeedCmdJ1939
    0,                                                      //!< u8OverrideControlModeCmdJ1939
    GE_OFF,                                                 //!< eHighPressureOilJ1939
    GE_OFF,                                                 //!< eWarmingActiveJ1939
    GE_OFF                                                  //!< eStopMotorJ1939
};

TDbNvParamGreenEffC1 gDb_tNvParamGreenEffC1 =
{
    {DB_LIST_DFLT,{{{0,0,0,0,0,0},{0,0}},{0,FALSE,0,0,FALSE,FALSE,FALSE},{0,0,0,0,0,0}},{30,(TVoid*)&gDb_catList[30],{NULL,0},DB_STAMP}}, //!< tListRoot
    100,                                                    //!< u16REGEN_SOC_FULL
    95,                                                     //!< u16REGEN_SOC_MAX
    7,                                                      //!< u16REGEN_HYST_SOC_MAX
    7,                                                      //!< u16NBR_REGEN_SOC_ALARM
    10,                                                     //!< u16NBR_REGEN_SOC_OVERED
    3450,                                                   //!< u16ELECTRIC_MOTOR_RPM_MAX
    800,                                                    //!< u16ELECTRIC_MOTOR_RPM_MIN
    2000,                                                   //!< u16ELECTRIC_MOTOR_RPM_PVG
    300,                                                    //!< u16ELECTRIC_MOTOR_RPM_TOR
    30,                                                     //!< i16ELECTRIC_MOTOR_COLD_OIL_TEMP
    210,                                                    //!< u16BATTERY_CAPACITY_AMP_HOUR
    10                                                      //!< u8NbElementRemainingRegenTime
};

TDbRamGreenEffC1 gDb_tRamGreenEffC1 =
{
    {DB_LIST_DFLT,{{{0,0,0,0,0,0},{0,0}},{0,FALSE,0,0,FALSE,FALSE,FALSE},{0,0,0,0,0,0}},{31,(TVoid*)&gDb_catList[31],{NULL,0},DB_STAMP}}, //!< tListRoot
    FALSE,                                                  //!< boAlarmCptNbrRegenFinish
    FALSE,                                                  //!< boElectricMotorForbidden
    FALSE,                                                  //!< boColdOilTankTemperature
    0,                                                      //!< i16RpmMvtsElectricMode
    0,                                                      //!< i16RpmTransRailElectricMode
    0,                                                      //!< i16RpmOilTankTemp
    0,                                                      //!< i16RpmMotorElectric
    FALSE,                                                  //!< boGeneratorOn
    FALSE,                                                  //!< boAutoModeActivate
    FALSE,                                                  //!< boSilenceModeActivate
    FALSE,                                                  //!< boForcingModeActivate
    FALSE,                                                  //!< boForcingRegenlow
    FALSE,                                                  //!< boForcingRegenHigh
    0,                                                      //!< u16RemainingRegenTimeAverage
    FALSE,                                                  //!< boAskReloadWithGenerator
    FALSE,                                                  //!< boReloadWithGeneratorOn
    FALSE,                                                  //!< boSocStopRegen
    0,                                                      //!< u16TotalRegenHours
    FALSE,                                                  //!< boPictoColdOilTankTemperature
    0,                                                      //!< u16TotalElectricHours
    FALSE                                                   //!< boPictoRecoveryReductionRatio
};

//List Set-Struct---------------------------------------------------------------------------------

const TDbSetRamEcuInputsC1 gDb_ctSetRamEcuInputsC1=
{
    {0xffff, 185, TBIT3, DB_VAR},                           //!< tInf_DeltaArmAngularSensorState
    {BI3_MIN, BI3_MAX},                                     //!< abi3Rng_DeltaArmAngularSensorState[2]
    BI3_UNDEF,                                              //!< bi3Def_DeltaArmAngularSensorState
    {0xffff, 186, TINT16, DB_VAR},                          //!< tInf_DeltaArmAngularSensorValue
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_DeltaArmAngularSensorValue[2]
    I16_UNDEF,                                              //!< i16Def_DeltaArmAngularSensorValue
    {0xffff, 195, TINT16, DB_VAR},                          //!< tInf_DeltaArmAngleValue
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_DeltaArmAngleValue[2]
    I16_UNDEF,                                              //!< i16Def_DeltaArmAngleValue
    {0xffff, 187, TUINT16, DB_VAR},                         //!< tInf_DeltaArmAngularSensorRawValueMas
    {U16_MIN, U16_MAX},                                     //!< au16Rng_DeltaArmAngularSensorRawValueMas[2]
    U16_UNDEF,                                              //!< u16Def_DeltaArmAngularSensorRawValueMas
    {0xffff, 188, TUINT16, DB_VAR},                         //!< tInf_DeltaArmAngularSensorRawValueSla
    {U16_MIN, U16_MAX},                                     //!< au16Rng_DeltaArmAngularSensorRawValueSla[2]
    U16_UNDEF,                                              //!< u16Def_DeltaArmAngularSensorRawValueSla
    {0xffff, 191, TBIT3, DB_VAR},                           //!< tInf_ArrowArmAngularSensorState
    {BI3_MIN, BI3_MAX},                                     //!< abi3Rng_ArrowArmAngularSensorState[2]
    BI3_UNDEF,                                              //!< bi3Def_ArrowArmAngularSensorState
    {0xffff, 192, TINT16, DB_VAR},                          //!< tInf_ArrowArmAngularSensorValue
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_ArrowArmAngularSensorValue[2]
    I16_UNDEF,                                              //!< i16Def_ArrowArmAngularSensorValue
    {0xffff, 405, TINT16, DB_VAR},                          //!< tInf_ArrowArmAngleValue
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_ArrowArmAngleValue[2]
    I16_UNDEF,                                              //!< i16Def_ArrowArmAngleValue
    {0xffff, 193, TUINT16, DB_VAR},                         //!< tInf_ArrowArmAngularSensorRawValueMas
    {U16_MIN, U16_MAX},                                     //!< au16Rng_ArrowArmAngularSensorRawValueMas[2]
    U16_UNDEF,                                              //!< u16Def_ArrowArmAngularSensorRawValueMas
    {0xffff, 194, TUINT16, DB_VAR},                         //!< tInf_ArrowArmAngularSensorRawValueSla
    {U16_MIN, U16_MAX},                                     //!< au16Rng_ArrowArmAngularSensorRawValueSla[2]
    U16_UNDEF,                                              //!< u16Def_ArrowArmAngularSensorRawValueSla
    {0xffff, 197, TINT16, DB_VAR},                          //!< tInf_GasGaugeValue
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_GasGaugeValue[2]
    I16_UNDEF,                                              //!< i16Def_GasGaugeValue
    {0xffff, 198, TUINT32, DB_VAR},                         //!< tInf_GasGaugeRawValue
    {U32_MIN, U32_MAX},                                     //!< au32Rng_GasGaugeRawValue[2]
    U32_UNDEF,                                              //!< u32Def_GasGaugeRawValue
    {0xffff, 199, EDISTATE_TYPE, DB_VAR},                   //!< tInf_Aru1State
    {GE_DI_OFF, GE_DI_UNDEF},                               //!< aeRng_Aru1State[2]
    GE_DI_ERROR,                                            //!< eDef_Aru1State
    {0xffff, 201, TUINT16, DB_VAR},                         //!< tInf_Aru1RawValue
    {U16_MIN, U16_MAX},                                     //!< au16Rng_Aru1RawValue[2]
    U16_UNDEF,                                              //!< u16Def_Aru1RawValue
    {0xffff, 202, EDISTATE_TYPE, DB_VAR},                   //!< tInf_Aru2State
    {GE_DI_OFF, GE_DI_UNDEF},                               //!< aeRng_Aru2State[2]
    GE_DI_ERROR,                                            //!< eDef_Aru2State
    {0xffff, 204, TUINT16, DB_VAR},                         //!< tInf_Aru2RawValue
    {U16_MIN, U16_MAX},                                     //!< au16Rng_Aru2RawValue[2]
    U16_UNDEF,                                              //!< u16Def_Aru2RawValue
    {0xffff, 226, EDISTATE_TYPE, DB_VAR},                   //!< tInf_EntryTelescopeFdcSensorState
    {GE_DI_OFF, GE_DI_UNDEF},                               //!< aeRng_EntryTelescopeFdcSensorState[2]
    GE_DI_ERROR,                                            //!< eDef_EntryTelescopeFdcSensorState
    {0xffff, 228, TUINT16, DB_VAR},                         //!< tInf_EntryTelescopeFdcSensorRawValue
    {U16_MIN, U16_MAX},                                     //!< au16Rng_EntryTelescopeFdcSensorRawValue[2]
    U16_UNDEF,                                              //!< u16Def_EntryTelescopeFdcSensorRawValue
    {0xffff, 243, EDISTATE_TYPE, DB_VAR},                   //!< tInf_FoldedDeltaArmSensorState
    {GE_DI_OFF, GE_DI_UNDEF},                               //!< aeRng_FoldedDeltaArmSensorState[2]
    GE_DI_ERROR,                                            //!< eDef_FoldedDeltaArmSensorState
    {0xffff, 244, TUINT16, DB_VAR},                         //!< tInf_FoldedDeltaArmSensorRawValue
    {U16_MIN, U16_MAX},                                     //!< au16Rng_FoldedDeltaArmSensorRawValue[2]
    U16_UNDEF,                                              //!< u16Def_FoldedDeltaArmSensorRawValue
    {0xffff, 245, EDISTATE_TYPE, DB_VAR},                   //!< tInf_FoldedBoomArmSensorState
    {GE_DI_OFF, GE_DI_UNDEF},                               //!< aeRng_FoldedBoomArmSensorState[2]
    GE_DI_ERROR,                                            //!< eDef_FoldedBoomArmSensorState
    {0xffff, 246, TUINT16, DB_VAR},                         //!< tInf_FoldedBoomArmSensorRawValue
    {U16_MIN, U16_MAX},                                     //!< au16Rng_FoldedBoomArmSensorRawValue[2]
    U16_UNDEF,                                              //!< u16Def_FoldedBoomArmSensorRawValue
    {0xffff, 247, EDISTATE_TYPE, DB_VAR},                   //!< tInf_ForcingMotorRegimeState
    {GE_DI_OFF, GE_DI_UNDEF},                               //!< aeRng_ForcingMotorRegimeState[2]
    GE_DI_ERROR,                                            //!< eDef_ForcingMotorRegimeState
    {0xffff, 248, TUINT16, DB_VAR},                         //!< tInf_ForcingMotorRegimeRawValue
    {U16_MIN, U16_MAX},                                     //!< au16Rng_ForcingMotorRegimeRawValue[2]
    U16_UNDEF,                                              //!< u16Def_ForcingMotorRegimeRawValue
    {0xffff, 255, EDISTATE_TYPE, DB_VAR},                   //!< tInf_ActiveHelpState
    {GE_DI_OFF, GE_DI_UNDEF},                               //!< aeRng_ActiveHelpState[2]
    GE_DI_ERROR,                                            //!< eDef_ActiveHelpState
    {0xffff, 256, TUINT16, DB_VAR},                         //!< tInf_ActiveHelpRawValue
    {U16_MIN, U16_MAX},                                     //!< au16Rng_ActiveHelpRawValue[2]
    U16_UNDEF,                                              //!< u16Def_ActiveHelpRawValue
    {0xffff, 259, EDISTATE_TYPE, DB_VAR},                   //!< tInf_OilPressureState
    {GE_DI_OFF, GE_DI_UNDEF},                               //!< aeRng_OilPressureState[2]
    GE_DI_ERROR,                                            //!< eDef_OilPressureState
    {0xffff, 260, TUINT16, DB_VAR},                         //!< tInf_OilPressureRawValue
    {U16_MIN, U16_MAX},                                     //!< au16Rng_OilPressureRawValue[2]
    U16_UNDEF,                                              //!< u16Def_OilPressureRawValue
    {0xffff, 261, EDISTATE_TYPE, DB_VAR},                   //!< tInf_WaterTemperatureState
    {GE_DI_OFF, GE_DI_UNDEF},                               //!< aeRng_WaterTemperatureState[2]
    GE_DI_ERROR,                                            //!< eDef_WaterTemperatureState
    {0xffff, 262, TUINT16, DB_VAR},                         //!< tInf_WaterTemperatureRawValue
    {U16_MIN, U16_MAX},                                     //!< au16Rng_WaterTemperatureRawValue[2]
    U16_UNDEF,                                              //!< u16Def_WaterTemperatureRawValue
    {0xffff, 206, EDISTATE_TYPE, DB_VAR},                   //!< tInf_StopMotorInfoState
    {GE_DI_OFF, GE_DI_UNDEF},                               //!< aeRng_StopMotorInfoState[2]
    GE_DI_ERROR,                                            //!< eDef_StopMotorInfoState
    {0xffff, 207, TUINT16, DB_VAR},                         //!< tInf_StopMotorInfoRawValue
    {U16_MIN, U16_MAX},                                     //!< au16Rng_StopMotorInfoRawValue[2]
    U16_MIN,                                                //!< u16Def_StopMotorInfoRawValue
    {0xffff, 208, EDISTATE_TYPE, DB_VAR},                   //!< tInf_TurretPostSelectorState
    {GE_DI_OFF, GE_DI_UNDEF},                               //!< aeRng_TurretPostSelectorState[2]
    GE_DI_ERROR,                                            //!< eDef_TurretPostSelectorState
    {0xffff, 209, TUINT16, DB_VAR},                         //!< tInf_TurretPostSelectorRawValue
    {U16_MIN, U16_MAX},                                     //!< au16Rng_TurretPostSelectorRawValue[2]
    U16_MIN,                                                //!< u16Def_TurretPostSelectorRawValue
    {0xffff, 210, EDISTATE_TYPE, DB_VAR},                   //!< tInf_RadioPostSelectorState
    {GE_DI_OFF, GE_DI_UNDEF},                               //!< aeRng_RadioPostSelectorState[2]
    GE_DI_ERROR,                                            //!< eDef_RadioPostSelectorState
    {0xffff, 211, TUINT16, DB_VAR},                         //!< tInf_RadioPostSelectorRawValue
    {U16_MIN, U16_MAX},                                     //!< au16Rng_RadioPostSelectorRawValue[2]
    U16_MIN,                                                //!< u16Def_RadioPostSelectorRawValue
    {0xffff, 212, EDISTATE_TYPE, DB_VAR},                   //!< tInf_NacellePostSelectorState
    {GE_DI_OFF, GE_DI_UNDEF},                               //!< aeRng_NacellePostSelectorState[2]
    GE_DI_ERROR,                                            //!< eDef_NacellePostSelectorState
    {0xffff, 213, TUINT16, DB_VAR},                         //!< tInf_NacellePostSelectorRawValue
    {U16_MIN, U16_MAX},                                     //!< au16Rng_NacellePostSelectorRawValue[2]
    U16_MIN,                                                //!< u16Def_NacellePostSelectorRawValue
    {0xffff, 205, TINT32, DB_VAR},                          //!< tInf_RegimeMotorAlternatorRpm
    {I32_MIN, I32_MAX},                                     //!< ai32Rng_RegimeMotorAlternatorRpm[2]
    I32_MIN,                                                //!< i32Def_RegimeMotorAlternatorRpm
    {0xffff, 311, EDISTATE_TYPE, DB_VAR},                   //!< tInf_AlternatorChargeOkState
    {GE_DI_OFF, GE_DI_UNDEF},                               //!< aeRng_AlternatorChargeOkState[2]
    GE_DI_ERROR,                                            //!< eDef_AlternatorChargeOkState
    {0xffff, 313, TUINT16, DB_VAR},                         //!< tInf_AlternatorChargeOkValue
    {U16_MIN, U16_MAX},                                     //!< au16Rng_AlternatorChargeOkValue[2]
    U16_UNDEF,                                              //!< u16Def_AlternatorChargeOkValue
    {0xffff, 179, TBIT3, DB_VAR},                           //!< tInf_Transmission1PressureSensorState
    {BI3_MIN, BI3_MAX},                                     //!< abi3Rng_Transmission1PressureSensorState[2]
    BI3_UNDEF,                                              //!< bi3Def_Transmission1PressureSensorState
    {0xffff, 180, TINT16, DB_VAR},                          //!< tInf_Transmission1PressureSensorValue
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_Transmission1PressureSensorValue[2]
    I16_UNDEF,                                              //!< i16Def_Transmission1PressureSensorValue
    {0xffff, 181, TBIT3, DB_VAR},                           //!< tInf_Transmission2PressureSensorState
    {BI3_MIN, BI3_MAX},                                     //!< abi3Rng_Transmission2PressureSensorState[2]
    BI3_UNDEF,                                              //!< bi3Def_Transmission2PressureSensorState
    {0xffff, 264, TINT16, DB_VAR},                          //!< tInf_Transmission2PressureSensorValue
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_Transmission2PressureSensorValue[2]
    I16_UNDEF,                                              //!< i16Def_Transmission2PressureSensorValue
    {0xffff, 214, EDISTATE_TYPE, DB_VAR},                   //!< tInf_FaultPvgDeltaArmState
    {GE_DI_OFF, GE_DI_UNDEF},                               //!< aeRng_FaultPvgDeltaArmState[2]
    GE_DI_ERROR,                                            //!< eDef_FaultPvgDeltaArmState
    {0xffff, 216, TUINT16, DB_VAR},                         //!< tInf_FaultPvgDeltaArmRawValue
    {U16_MIN, U16_MAX},                                     //!< au16Rng_FaultPvgDeltaArmRawValue[2]
    U16_UNDEF,                                              //!< u16Def_FaultPvgDeltaArmRawValue
    {0xffff, 217, EDISTATE_TYPE, DB_VAR},                   //!< tInf_FaultPvgArrowArmState
    {GE_DI_OFF, GE_DI_UNDEF},                               //!< aeRng_FaultPvgArrowArmState[2]
    GE_DI_ERROR,                                            //!< eDef_FaultPvgArrowArmState
    {0xffff, 219, TUINT16, DB_VAR},                         //!< tInf_FaultPvgArrowArmRawValue
    {U16_MIN, U16_MAX},                                     //!< au16Rng_FaultPvgArrowArmRawValue[2]
    U16_UNDEF,                                              //!< u16Def_FaultPvgArrowArmRawValue
    {0xffff, 220, EDISTATE_TYPE, DB_VAR},                   //!< tInf_FaultPvgTelescopeArmState
    {GE_DI_OFF, GE_DI_UNDEF},                               //!< aeRng_FaultPvgTelescopeArmState[2]
    GE_DI_ERROR,                                            //!< eDef_FaultPvgTelescopeArmState
    {0xffff, 222, TUINT16, DB_VAR},                         //!< tInf_FaultPvgTelescopeArmRawValue
    {U16_MIN, U16_MAX},                                     //!< au16Rng_FaultPvgTelescopeArmRawValue[2]
    U16_UNDEF,                                              //!< u16Def_FaultPvgTelescopeArmRawValue
    {0xffff, 223, EDISTATE_TYPE, DB_VAR},                   //!< tInf_FaultPvgEvProTorState
    {GE_DI_OFF, GE_DI_UNDEF},                               //!< aeRng_FaultPvgEvProTorState[2]
    GE_DI_ERROR,                                            //!< eDef_FaultPvgEvProTorState
    {0xffff, 225, TUINT16, DB_VAR},                         //!< tInf_FaultPvgEvProTorRawValue
    {U16_MIN, U16_MAX},                                     //!< au16Rng_FaultPvgEvProTorRawValue[2]
    U16_UNDEF,                                              //!< u16Def_FaultPvgEvProTorRawValue
    {0xffff, 1345, TBIT3, DB_VAR},                          //!< tInf_BypassPressureSensorState
    {BI3_MIN, BI3_MAX},                                     //!< abi3Rng_BypassPressureSensorState[2]
    BI3_UNDEF,                                              //!< bi3Def_BypassPressureSensorState
    {0xffff, 1346, TINT16, DB_VAR},                         //!< tInf_BypassPressureSensorValue
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_BypassPressureSensorValue[2]
    I16_UNDEF,                                              //!< i16Def_BypassPressureSensorValue
    {0xffff, 1347, TUINT16, DB_VAR},                        //!< tInf_BypassPressureSensorRawValue
    {U16_MIN, U16_MAX},                                     //!< au16Rng_BypassPressureSensorRawValue[2]
    U16_UNDEF,                                              //!< u16Def_BypassPressureSensorRawValue
    {0xffff, 1582, EDISTATE_TYPE, DB_VAR},                  //!< tInf_StarterMotorState
    {GE_DI_OFF, GE_DI_UNDEF},                               //!< aeRng_StarterMotorState[2]
    GE_DI_OFF,                                              //!< eDef_StarterMotorState
    {0xffff, 1583, TUINT16, DB_VAR},                        //!< tInf_StarterMotorRawValue
    {U16_MIN, U16_MAX},                                     //!< au16Rng_StarterMotorRawValue[2]
    U16_UNDEF,                                              //!< u16Def_StarterMotorRawValue
    {0xffff, 1873, TBIT3, DB_VAR},                          //!< tInf_OilTankTemperatureState
    {BI3_MIN, BI3_MAX},                                     //!< abi3Rng_OilTankTemperatureState[2]
    BI3_UNDEF,                                              //!< bi3Def_OilTankTemperatureState
    {0xffff, 1874, TINT16, DB_VAR},                         //!< tInf_OilTankTemperatureValue
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_OilTankTemperatureValue[2]
    I16_UNDEF,                                              //!< i16Def_OilTankTemperatureValue
    {0xffff, 1875, TUINT16, DB_VAR},                        //!< tInf_OilTankTemperatureRawValue
    {U16_MIN, U16_MAX},                                     //!< au16Rng_OilTankTemperatureRawValue[2]
    U16_UNDEF                                               //!< u16Def_OilTankTemperatureRawValue
};

const TDbSetRamEcuOutputsC1 gDb_ctSetRamEcuOutputsC1=
{
    {0xffff, 266, TBOOLEAN, DB_VAR},                        //!< tInf_BlueFireCommand
    {FALSE, TRUE},                                          //!< aboRng_BlueFireCommand[2]
    FALSE,                                                  //!< boDef_BlueFireCommand
    {0xffff, 267, EDIGSTATUS_TYPE, DB_VAR},                 //!< tInf_BlueFireValue
    {GE_DIG_OFF, GE_DIG_UNDEF},                             //!< aeRng_BlueFireValue[2]
    GE_DIG_ERROR,                                           //!< eDef_BlueFireValue
    {0xffff, 268, TBOOLEAN, DB_VAR},                        //!< tInf_OrangeFlashingLightCommand
    {FALSE, TRUE},                                          //!< aboRng_OrangeFlashingLightCommand[2]
    FALSE,                                                  //!< boDef_OrangeFlashingLightCommand
    {0xffff, 269, EDIGSTATUS_TYPE, DB_VAR},                 //!< tInf_OrangeFlashingLightValue
    {GE_DIG_OFF, GE_DIG_UNDEF},                             //!< aeRng_OrangeFlashingLightValue[2]
    GE_DIG_ERROR,                                           //!< eDef_OrangeFlashingLightValue
    {0xffff, 272, TBOOLEAN, DB_VAR},                        //!< tInf_AntiStartupCommand
    {FALSE, TRUE},                                          //!< aboRng_AntiStartupCommand[2]
    FALSE,                                                  //!< boDef_AntiStartupCommand
    {0xffff, 2005, EDIGSTATUS_TYPE, DB_VAR},                //!< tInf_AntiStartupValue
    {GE_DIG_OFF, GE_DIG_UNDEF},                             //!< aeRng_AntiStartupValue[2]
    GE_DIG_ERROR,                                           //!< eDef_AntiStartupValue
    {0xffff, 274, TBOOLEAN, DB_VAR},                        //!< tInf_StopMotorCommand
    {FALSE, TRUE},                                          //!< aboRng_StopMotorCommand[2]
    FALSE,                                                  //!< boDef_StopMotorCommand
    {0xffff, 276, TBOOLEAN, DB_VAR},                        //!< tInf_WarmingCommand
    {FALSE, TRUE},                                          //!< aboRng_WarmingCommand[2]
    FALSE,                                                  //!< boDef_WarmingCommand
    {0xffff, 278, TBOOLEAN, DB_VAR},                        //!< tInf_EvBypassCommand
    {FALSE, TRUE},                                          //!< aboRng_EvBypassCommand[2]
    FALSE,                                                  //!< boDef_EvBypassCommand
    {0xffff, 279, EDIGSTATUS_TYPE, DB_VAR},                 //!< tInf_EvBypassValue
    {GE_DIG_OFF, GE_DIG_UNDEF},                             //!< aeRng_EvBypassValue[2]
    GE_DIG_ERROR,                                           //!< eDef_EvBypassValue
    {0xffff, 280, TBOOLEAN, DB_VAR},                        //!< tInf_SupplyPvgDeltaArmCommand
    {FALSE, TRUE},                                          //!< aboRng_SupplyPvgDeltaArmCommand[2]
    FALSE,                                                  //!< boDef_SupplyPvgDeltaArmCommand
    {0xffff, 281, EDIGSTATUS_TYPE, DB_VAR},                 //!< tInf_SupplyPvgDeltaArmValue
    {GE_DIG_OFF, GE_DIG_UNDEF},                             //!< aeRng_SupplyPvgDeltaArmValue[2]
    GE_DIG_ERROR,                                           //!< eDef_SupplyPvgDeltaArmValue
    {0xffff, 282, TBOOLEAN, DB_VAR},                        //!< tInf_SupplyPvgArrowArmCommand
    {FALSE, TRUE},                                          //!< aboRng_SupplyPvgArrowArmCommand[2]
    FALSE,                                                  //!< boDef_SupplyPvgArrowArmCommand
    {0xffff, 283, EDIGSTATUS_TYPE, DB_VAR},                 //!< tInf_SupplyPvgArrowArmValue
    {GE_DIG_OFF, GE_DIG_UNDEF},                             //!< aeRng_SupplyPvgArrowArmValue[2]
    GE_DIG_ERROR,                                           //!< eDef_SupplyPvgArrowArmValue
    {0xffff, 284, TBOOLEAN, DB_VAR},                        //!< tInf_SupplyPvgTelescopeArmCommand
    {FALSE, TRUE},                                          //!< aboRng_SupplyPvgTelescopeArmCommand[2]
    FALSE,                                                  //!< boDef_SupplyPvgTelescopeArmCommand
    {0xffff, 285, EDIGSTATUS_TYPE, DB_VAR},                 //!< tInf_SupplyPvgTelescopeArmValue
    {GE_DIG_OFF, GE_DIG_UNDEF},                             //!< aeRng_SupplyPvgTelescopeArmValue[2]
    GE_DIG_ERROR,                                           //!< eDef_SupplyPvgTelescopeArmValue
    {0xffff, 286, TBOOLEAN, DB_VAR},                        //!< tInf_SupplyPvgPropEvTorCommand
    {FALSE, TRUE},                                          //!< aboRng_SupplyPvgPropEvTorCommand[2]
    FALSE,                                                  //!< boDef_SupplyPvgPropEvTorCommand
    {0xffff, 287, EDIGSTATUS_TYPE, DB_VAR},                 //!< tInf_SupplyPvgPropEvTorValue
    {GE_DIG_OFF, GE_DIG_UNDEF},                             //!< aeRng_SupplyPvgPropEvTorValue[2]
    GE_DIG_ERROR,                                           //!< eDef_SupplyPvgPropEvTorValue
    {0xffff, 295, TUINT16, DB_VAR},                         //!< tInf_EvPropMotorAcceleratorCommand
    {U16_MIN, U16_MAX},                                     //!< au16Rng_EvPropMotorAcceleratorCommand[2]
    U16_MIN,                                                //!< u16Def_EvPropMotorAcceleratorCommand
    {0xffff, 297, EPROSTATUS_TYPE, DB_VAR},                 //!< tInf_EvPropGeneratorState
    {GE_PRO_OFF, GE_PRO_MIN_DUTY_CYCLE},                    //!< aeRng_EvPropGeneratorState[2]
    GE_PRO_ERROR,                                           //!< eDef_EvPropGeneratorState
    {0xffff, 298, TUINT16, DB_VAR},                         //!< tInf_EvPropGeneratorCommand
    {U16_MIN, U16_MAX},                                     //!< au16Rng_EvPropGeneratorCommand[2]
    U16_MIN,                                                //!< u16Def_EvPropGeneratorCommand
    {0xffff, 299, TUINT16, DB_VAR},                         //!< tInf_EvPropGeneratorCurrent
    {U16_MIN, U16_MAX},                                     //!< au16Rng_EvPropGeneratorCurrent[2]
    U16_MIN,                                                //!< u16Def_EvPropGeneratorCurrent
    {0xffff, 300, EDIGSTATUS_TYPE, DB_VAR},                 //!< tInf_NoisemakerState
    {GE_DIG_OFF, GE_DIG_UNDEF},                             //!< aeRng_NoisemakerState[2]
    GE_DIG_OFF,                                             //!< eDef_NoisemakerState
    {0xffff, 301, TBOOLEAN, DB_VAR},                        //!< tInf_NoisemakerCommand
    {FALSE, TRUE},                                          //!< aboRng_NoisemakerCommand[2]
    FALSE,                                                  //!< boDef_NoisemakerCommand
    {0xffff, 306, EDIGSTATUS_TYPE, DB_VAR},                 //!< tInf_EvRotationTurretCtClockwiseState
    {GE_DIG_OFF, GE_DIG_UNDEF},                             //!< aeRng_EvRotationTurretCtClockwiseState[2]
    GE_DIG_OFF,                                             //!< eDef_EvRotationTurretCtClockwiseState
    {0xffff, 237, TBOOLEAN, DB_VAR},                        //!< tInf_EvRotTurretCtClockwiseCmdBool
    {FALSE, TRUE},                                          //!< aboRng_EvRotTurretCtClockwiseCmdBool[2]
    FALSE,                                                  //!< boDef_EvRotTurretCtClockwiseCmdBool
    {0xffff, 309, EDIGSTATUS_TYPE, DB_VAR},                 //!< tInf_EvRotationTurretClockwiseState
    {GE_DIG_OFF, GE_DIG_UNDEF},                             //!< aeRng_EvRotationTurretClockwiseState[2]
    GE_DIG_OFF,                                             //!< eDef_EvRotationTurretClockwiseState
    {0xffff, 238, TBOOLEAN, DB_VAR},                        //!< tInf_EvRotTurretClockwiseCmdBool
    {FALSE, TRUE},                                          //!< aboRng_EvRotTurretClockwiseCmdBool[2]
    FALSE,                                                  //!< boDef_EvRotTurretClockwiseCmdBool
    {0xffff, 312, EDIGSTATUS_TYPE, DB_VAR},                 //!< tInf_EvRotationBasketCtClockwiseState
    {GE_DIG_OFF, GE_DIG_UNDEF},                             //!< aeRng_EvRotationBasketCtClockwiseState[2]
    GE_DIG_OFF,                                             //!< eDef_EvRotationBasketCtClockwiseState
    {0xffff, 442, TBOOLEAN, DB_VAR},                        //!< tInf_EvRotationBasketCtClkWiseCmdBool
    {FALSE, TRUE},                                          //!< aboRng_EvRotationBasketCtClkWiseCmdBool[2]
    FALSE,                                                  //!< boDef_EvRotationBasketCtClkWiseCmdBool
    {0xffff, 315, EDIGSTATUS_TYPE, DB_VAR},                 //!< tInf_EvRotationBasketClockwiseState
    {GE_DIG_OFF, GE_DIG_UNDEF},                             //!< aeRng_EvRotationBasketClockwiseState[2]
    GE_DIG_OFF,                                             //!< eDef_EvRotationBasketClockwiseState
    {0xffff, 443, TBOOLEAN, DB_VAR},                        //!< tInf_EvRotationBasketClkWiseCmdBool
    {FALSE, TRUE},                                          //!< aboRng_EvRotationBasketClkWiseCmdBool[2]
    FALSE,                                                  //!< boDef_EvRotationBasketClkWiseCmdBool
    {0xffff, 318, EDIGSTATUS_TYPE, DB_VAR},                 //!< tInf_EvUpPendularState
    {GE_DIG_OFF, GE_DIG_UNDEF},                             //!< aeRng_EvUpPendularState[2]
    GE_DIG_OFF,                                             //!< eDef_EvUpPendularState
    {0xffff, 239, TBOOLEAN, DB_VAR},                        //!< tInf_EvUpPendularCommandBool
    {FALSE, TRUE},                                          //!< aboRng_EvUpPendularCommandBool[2]
    FALSE,                                                  //!< boDef_EvUpPendularCommandBool
    {0xffff, 321, EDIGSTATUS_TYPE, DB_VAR},                 //!< tInf_EvDownPendularState
    {GE_DIG_OFF, GE_DIG_UNDEF},                             //!< aeRng_EvDownPendularState[2]
    GE_DIG_OFF,                                             //!< eDef_EvDownPendularState
    {0xffff, 240, TBOOLEAN, DB_VAR},                        //!< tInf_EvDownPendularCommandBool
    {FALSE, TRUE},                                          //!< aboRng_EvDownPendularCommandBool[2]
    FALSE,                                                  //!< boDef_EvDownPendularCommandBool
    {0xffff, 324, EDIGSTATUS_TYPE, DB_VAR},                 //!< tInf_EvUpInclinaisonBasketState
    {GE_DIG_OFF, GE_DIG_UNDEF},                             //!< aeRng_EvUpInclinaisonBasketState[2]
    GE_DIG_OFF,                                             //!< eDef_EvUpInclinaisonBasketState
    {0xffff, 241, TBOOLEAN, DB_VAR},                        //!< tInf_EvUpInclinaisonBasketCmdBool
    {FALSE, TRUE},                                          //!< aboRng_EvUpInclinaisonBasketCmdBool[2]
    FALSE,                                                  //!< boDef_EvUpInclinaisonBasketCmdBool
    {0xffff, 327, EDIGSTATUS_TYPE, DB_VAR},                 //!< tInf_EvDownInclinaisonBasketState
    {GE_DIG_OFF, GE_DIG_UNDEF},                             //!< aeRng_EvDownInclinaisonBasketState[2]
    GE_DIG_OFF,                                             //!< eDef_EvDownInclinaisonBasketState
    {0xffff, 328, TUINT16, DB_VAR},                         //!< tInf_EvDownInclinaisonBasketCommand
    {U16_MIN, U16_MAX},                                     //!< au16Rng_EvDownInclinaisonBasketCommand[2]
    U16_MIN,                                                //!< u16Def_EvDownInclinaisonBasketCommand
    {0xffff, 242, TBOOLEAN, DB_VAR},                        //!< tInf_EvDownInclinaisonBasketCmdBool
    {FALSE, TRUE},                                          //!< aboRng_EvDownInclinaisonBasketCmdBool[2]
    FALSE,                                                  //!< boDef_EvDownInclinaisonBasketCmdBool
    {0xffff, 329, TUINT16, DB_VAR},                         //!< tInf_EvDownInclinaisonBasketCurrent
    {U16_MIN, U16_MAX},                                     //!< au16Rng_EvDownInclinaisonBasketCurrent[2]
    U16_MIN,                                                //!< u16Def_EvDownInclinaisonBasketCurrent
    {0xffff, 417, TUINT16, DB_VAR},                         //!< tInf_PvgDeltaArmCommand
    {U16_MIN, U16_MAX},                                     //!< au16Rng_PvgDeltaArmCommand[2]
    U16_MIN,                                                //!< u16Def_PvgDeltaArmCommand
    {0xffff, 418, TUINT16, DB_VAR},                         //!< tInf_PvgDeltaArmVoltage
    {U16_MIN, U16_MAX},                                     //!< au16Rng_PvgDeltaArmVoltage[2]
    U16_MIN,                                                //!< u16Def_PvgDeltaArmVoltage
    {0xffff, 517, TUINT16, DB_VAR},                         //!< tInf_PvgArrowArmCommand
    {U16_MIN, U16_MAX},                                     //!< au16Rng_PvgArrowArmCommand[2]
    U16_MIN,                                                //!< u16Def_PvgArrowArmCommand
    {0xffff, 518, TUINT16, DB_VAR},                         //!< tInf_PvgArrowArmVoltage
    {U16_MIN, U16_MAX},                                     //!< au16Rng_PvgArrowArmVoltage[2]
    U16_MIN,                                                //!< u16Def_PvgArrowArmVoltage
    {0xffff, 519, TUINT16, DB_VAR},                         //!< tInf_PvgTelescopeArmCommand
    {U16_MIN, U16_MAX},                                     //!< au16Rng_PvgTelescopeArmCommand[2]
    U16_MIN,                                                //!< u16Def_PvgTelescopeArmCommand
    {0xffff, 520, TUINT16, DB_VAR},                         //!< tInf_PvgTelescopeArmVoltage
    {U16_MIN, U16_MAX},                                     //!< au16Rng_PvgTelescopeArmVoltage[2]
    U16_MIN,                                                //!< u16Def_PvgTelescopeArmVoltage
    {0xffff, 229, TBOOLEAN, DB_VAR},                        //!< tInf_OverloadSecurityCommand
    {FALSE, TRUE},                                          //!< aboRng_OverloadSecurityCommand[2]
    FALSE,                                                  //!< boDef_OverloadSecurityCommand
    {0xffff, 230, EDIGSTATUS_TYPE, DB_VAR},                 //!< tInf_OverloadSecurityValue
    {GE_DIG_OFF, GE_DIG_UNDEF},                             //!< aeRng_OverloadSecurityValue[2]
    GE_DIG_ERROR,                                           //!< eDef_OverloadSecurityValue
    {0xffff, 231, TBOOLEAN, DB_VAR},                        //!< tInf_SupllyTorSensorsCommand
    {FALSE, TRUE},                                          //!< aboRng_SupllyTorSensorsCommand[2]
    FALSE,                                                  //!< boDef_SupllyTorSensorsCommand
    {0xffff, 232, EDIGSTATUS_TYPE, DB_VAR},                 //!< tInf_SupllyTorSensorsValue
    {GE_DIG_OFF, GE_DIG_UNDEF},                             //!< aeRng_SupllyTorSensorsValue[2]
    GE_DIG_ERROR,                                           //!< eDef_SupllyTorSensorsValue
    {0xffff, 233, TBOOLEAN, DB_VAR},                        //!< tInf_SupllyAnaSensorsCommand
    {FALSE, TRUE},                                          //!< aboRng_SupllyAnaSensorsCommand[2]
    FALSE,                                                  //!< boDef_SupllyAnaSensorsCommand
    {0xffff, 234, EDIGSTATUS_TYPE, DB_VAR},                 //!< tInf_SupllyAnaSensorsValue
    {GE_DIG_OFF, GE_DIG_UNDEF},                             //!< aeRng_SupllyAnaSensorsValue[2]
    GE_DIG_ERROR,                                           //!< eDef_SupllyAnaSensorsValue
    {0xffff, 235, TBOOLEAN, DB_VAR},                        //!< tInf_EvSyncRotationCommand
    {FALSE, TRUE},                                          //!< aboRng_EvSyncRotationCommand[2]
    FALSE,                                                  //!< boDef_EvSyncRotationCommand
    {0xffff, 236, EDIGSTATUS_TYPE, DB_VAR},                 //!< tInf_EvSyncRotationValue
    {GE_DIG_OFF, GE_DIG_UNDEF},                             //!< aeRng_EvSyncRotationValue[2]
    GE_DIG_ERROR,                                           //!< eDef_EvSyncRotationValue
    {0xffff, 271, TUINT16, DB_VAR},                         //!< tInf_PvgEvTorCommand
    {U16_MIN, U16_MAX},                                     //!< au16Rng_PvgEvTorCommand[2]
    U16_MIN,                                                //!< u16Def_PvgEvTorCommand
    {0xffff, 288, TUINT16, DB_VAR},                         //!< tInf_PvgEvTorVoltage
    {U16_MIN, U16_MAX},                                     //!< au16Rng_PvgEvTorVoltage[2]
    U16_MIN,                                                //!< u16Def_PvgEvTorVoltage
    {0xffff, 468, TBOOLEAN, DB_VAR},                        //!< tInf_EvUpPendularActivation
    {FALSE, TRUE},                                          //!< aboRng_EvUpPendularActivation[2]
    FALSE,                                                  //!< boDef_EvUpPendularActivation
    {0xffff, 471, TBOOLEAN, DB_VAR},                        //!< tInf_EvDownPendularActivation
    {FALSE, TRUE},                                          //!< aboRng_EvDownPendularActivation[2]
    FALSE,                                                  //!< boDef_EvDownPendularActivation
    {0xffff, 588, TBOOLEAN, DB_VAR},                        //!< tInf_EvRotBasketCtClkWiseActivation
    {FALSE, TRUE},                                          //!< aboRng_EvRotBasketCtClkWiseActivation[2]
    FALSE,                                                  //!< boDef_EvRotBasketCtClkWiseActivation
    {0xffff, 589, TBOOLEAN, DB_VAR},                        //!< tInf_EvRotBasketClkWiseActivation
    {FALSE, TRUE},                                          //!< aboRng_EvRotBasketClkWiseActivation[2]
    FALSE,                                                  //!< boDef_EvRotBasketClkWiseActivation
    {0xffff, 591, TBOOLEAN, DB_VAR},                        //!< tInf_EvUpIncliBasketActivation
    {FALSE, TRUE},                                          //!< aboRng_EvUpIncliBasketActivation[2]
    FALSE,                                                  //!< boDef_EvUpIncliBasketActivation
    {0xffff, 590, TBOOLEAN, DB_VAR},                        //!< tInf_EvDownIncliBasketActivation
    {FALSE, TRUE},                                          //!< aboRng_EvDownIncliBasketActivation[2]
    FALSE,                                                  //!< boDef_EvDownIncliBasketActivation
    {0xffff, 592, TBOOLEAN, DB_VAR},                        //!< tInf_EvRotTurretClockwiseActivation
    {FALSE, TRUE},                                          //!< aboRng_EvRotTurretClockwiseActivation[2]
    FALSE,                                                  //!< boDef_EvRotTurretClockwiseActivation
    {0xffff, 593, TBOOLEAN, DB_VAR},                        //!< tInf_EvRotTurretCtClockwiseActivation
    {FALSE, TRUE},                                          //!< aboRng_EvRotTurretCtClockwiseActivation[2]
    FALSE,                                                  //!< boDef_EvRotTurretCtClockwiseActivation
    {0xffff, 608, EDIGSTATUS_TYPE, DB_VAR},                 //!< tInf_EvSelectorRotTurretValue
    {GE_DIG_OFF, GE_DIG_UNDEF},                             //!< aeRng_EvSelectorRotTurretValue[2]
    GE_DIG_ERROR,                                           //!< eDef_EvSelectorRotTurretValue
    {0xffff, 609, TBOOLEAN, DB_VAR},                        //!< tInf_EvSelectorRotTurretCmd
    {FALSE, TRUE},                                          //!< aboRng_EvSelectorRotTurretCmd[2]
    FALSE,                                                  //!< boDef_EvSelectorRotTurretCmd
    {0xffff, 115, TBOOLEAN, DB_VAR},                        //!< tInf_ReturnLowSideEvProAccMotorCmd
    {FALSE, TRUE},                                          //!< aboRng_ReturnLowSideEvProAccMotorCmd[2]
    FALSE,                                                  //!< boDef_ReturnLowSideEvProAccMotorCmd
    {0xffff, 121, TBOOLEAN, DB_VAR},                        //!< tInf_ReturnLowSideEvProGeneratorCmd
    {FALSE, TRUE},                                          //!< aboRng_ReturnLowSideEvProGeneratorCmd[2]
    FALSE,                                                  //!< boDef_ReturnLowSideEvProGeneratorCmd
    {0xffff, 123, EDIGSTATUS_TYPE, DB_VAR},                 //!< tInf_ReturnLowSideEvProGeneratorValue
    {GE_DIG_OFF, GE_DIG_UNDEF},                             //!< aeRng_ReturnLowSideEvProGeneratorValue[2]
    GE_DIG_ERROR,                                           //!< eDef_ReturnLowSideEvProGeneratorValue
    {0xffff, 635, TBOOLEAN, DB_VAR},                        //!< tInf_EvUpAxleOscillantActivation
    {FALSE, TRUE},                                          //!< aboRng_EvUpAxleOscillantActivation[2]
    FALSE,                                                  //!< boDef_EvUpAxleOscillantActivation
    {0xffff, 636, TBOOLEAN, DB_VAR},                        //!< tInf_EvDownAxleOscillantActivation
    {FALSE, TRUE},                                          //!< aboRng_EvDownAxleOscillantActivation[2]
    FALSE,                                                  //!< boDef_EvDownAxleOscillantActivation
    {0xffff, 637, TBOOLEAN, DB_VAR},                        //!< tInf_EvUpAxleOscillantCmd
    {FALSE, TRUE},                                          //!< aboRng_EvUpAxleOscillantCmd[2]
    FALSE,                                                  //!< boDef_EvUpAxleOscillantCmd
    {0xffff, 642, TBOOLEAN, DB_VAR},                        //!< tInf_EvDownAxleOscillantCmd
    {FALSE, TRUE},                                          //!< aboRng_EvDownAxleOscillantCmd[2]
    FALSE,                                                  //!< boDef_EvDownAxleOscillantCmd
    {0xffff, 643, TBOOLEAN, DB_VAR},                        //!< tInf_EvUpAxleFixeActivation
    {FALSE, TRUE},                                          //!< aboRng_EvUpAxleFixeActivation[2]
    FALSE,                                                  //!< boDef_EvUpAxleFixeActivation
    {0xffff, 644, TBOOLEAN, DB_VAR},                        //!< tInf_EvDownAxleFixeActivation
    {FALSE, TRUE},                                          //!< aboRng_EvDownAxleFixeActivation[2]
    FALSE,                                                  //!< boDef_EvDownAxleFixeActivation
    {0xffff, 645, TBOOLEAN, DB_VAR},                        //!< tInf_EvUpAxleFixeCmd
    {FALSE, TRUE},                                          //!< aboRng_EvUpAxleFixeCmd[2]
    FALSE,                                                  //!< boDef_EvUpAxleFixeCmd
    {0xffff, 646, TBOOLEAN, DB_VAR},                        //!< tInf_EvDownAxleFixeCmd
    {FALSE, TRUE},                                          //!< aboRng_EvDownAxleFixeCmd[2]
    FALSE,                                                  //!< boDef_EvDownAxleFixeCmd
    {0xffff, 1179, TBOOLEAN, DB_VAR},                       //!< tInf_EvUpMastMeasureActivation
    {FALSE, TRUE},                                          //!< aboRng_EvUpMastMeasureActivation[2]
    FALSE,                                                  //!< boDef_EvUpMastMeasureActivation
    {0xffff, 1184, TBOOLEAN, DB_VAR},                       //!< tInf_EvUpMastMeasureCmd
    {FALSE, TRUE},                                          //!< aboRng_EvUpMastMeasureCmd[2]
    FALSE,                                                  //!< boDef_EvUpMastMeasureCmd
    {0xffff, 1196, TBOOLEAN, DB_VAR},                       //!< tInf_EvDownMastMeasureActivation
    {FALSE, TRUE},                                          //!< aboRng_EvDownMastMeasureActivation[2]
    FALSE,                                                  //!< boDef_EvDownMastMeasureActivation
    {0xffff, 1197, TBOOLEAN, DB_VAR},                       //!< tInf_EvDownMastMeasureCmd
    {FALSE, TRUE},                                          //!< aboRng_EvDownMastMeasureCmd[2]
    FALSE,                                                  //!< boDef_EvDownMastMeasureCmd
    {0xffff, 1750, EDIGSTATUS_TYPE, DB_VAR},                //!< tInf_WhiteLightAv15746Value
    {GE_DIG_OFF, GE_DIG_UNDEF},                             //!< aeRng_WhiteLightAv15746Value[2]
    GE_DIG_ERROR,                                           //!< eDef_WhiteLightAv15746Value
    {0xffff, 1751, TBOOLEAN, DB_VAR},                       //!< tInf_WhiteLightAv15746Command
    {FALSE, TRUE},                                          //!< aboRng_WhiteLightAv15746Command[2]
    FALSE,                                                  //!< boDef_WhiteLightAv15746Command
    {0xffff, 1754, EDIGSTATUS_TYPE, DB_VAR},                //!< tInf_EvCrawlerOnlyValue
    {GE_DIG_OFF, GE_DIG_UNDEF},                             //!< aeRng_EvCrawlerOnlyValue[2]
    GE_DIG_ERROR,                                           //!< eDef_EvCrawlerOnlyValue
    {0xffff, 1755, TBOOLEAN, DB_VAR},                       //!< tInf_EvCrawlerOnlyCommand
    {FALSE, TRUE},                                          //!< aboRng_EvCrawlerOnlyCommand[2]
    FALSE,                                                  //!< boDef_EvCrawlerOnlyCommand
    {0xffff, 1922, TBOOLEAN, DB_VAR},                       //!< tInf_RelayReloadWithGeneratorCmd
    {FALSE, TRUE},                                          //!< aboRng_RelayReloadWithGeneratorCmd[2]
    FALSE,                                                  //!< boDef_RelayReloadWithGeneratorCmd
    {0xffff, 1923, EDIGSTATUS_TYPE, DB_VAR},                //!< tInf_RelayReloadWithGeneratorState
    {GE_DIG_OFF, GE_DIG_UNDEF},                             //!< aeRng_RelayReloadWithGeneratorState[2]
    GE_DIG_ERROR,                                           //!< eDef_RelayReloadWithGeneratorState
    {0xffff, 1924, TBOOLEAN, DB_VAR},                       //!< tInf_EvDevMvtsCmd
    {FALSE, TRUE},                                          //!< aboRng_EvDevMvtsCmd[2]
    FALSE,                                                  //!< boDef_EvDevMvtsCmd
    {0xffff, 1925, EDIGSTATUS_TYPE, DB_VAR},                //!< tInf_EvDevMvtsState
    {GE_DIG_OFF, GE_DIG_UNDEF},                             //!< aeRng_EvDevMvtsState[2]
    GE_DIG_ERROR,                                           //!< eDef_EvDevMvtsState
    {0xffff, 1958, TBOOLEAN, DB_VAR},                       //!< tInf_EvBoostRegenCmd
    {FALSE, TRUE},                                          //!< aboRng_EvBoostRegenCmd[2]
    FALSE,                                                  //!< boDef_EvBoostRegenCmd
    {0xffff, 2099, EDIGSTATUS_TYPE, DB_VAR},                //!< tInf_EvBoostRegenState
    {GE_DIG_OFF, GE_DIG_UNDEF},                             //!< aeRng_EvBoostRegenState[2]
    GE_DIG_ERROR                                            //!< eDef_EvBoostRegenState
};

const TDbSetRamGeneralC1 gDb_ctSetRamGeneralC1=
{
    {0xffff, 333, TUINT8, DB_VAR},                          //!< tInf_LifeByte
    {U8_MIN, U8_MAX},                                       //!< au8Rng_LifeByte[2]
    U8_MIN,                                                 //!< u8Def_LifeByte
    {0xffff, 334, EWDSTATE_TYPE, DB_VAR},                   //!< tInf_WatchdogState
    {GE_RUNNING, GE_TRIGGERED},                             //!< aeRng_WatchdogState[2]
    GE_RUNNING,                                             //!< eDef_WatchdogState
    {0xffff, 484, TUINT16, DB_VAR},                         //!< tInf_EcuVoltage
    {U16_MIN, U16_MAX},                                     //!< au16Rng_EcuVoltage[2]
    0,                                                      //!< u16Def_EcuVoltage
    {0xffff, 416, TBOOLEAN, DB_VAR},                        //!< tInf_BypassArmDelta
    {FALSE, TRUE},                                          //!< aboRng_BypassArmDelta[2]
    FALSE,                                                  //!< boDef_BypassArmDelta
    {0xffff, 419, TBOOLEAN, DB_VAR},                        //!< tInf_BypassArmArrow
    {FALSE, TRUE},                                          //!< aboRng_BypassArmArrow[2]
    FALSE,                                                  //!< boDef_BypassArmArrow
    {0xffff, 420, TBOOLEAN, DB_VAR},                        //!< tInf_BypassArmTelescope
    {FALSE, TRUE},                                          //!< aboRng_BypassArmTelescope[2]
    FALSE,                                                  //!< boDef_BypassArmTelescope
    {0xffff, 437, TBOOLEAN, DB_VAR},                        //!< tInf_TestEvision
    {FALSE, TRUE},                                          //!< aboRng_TestEvision[2]
    FALSE,                                                  //!< boDef_TestEvision
    {0xffff, 444, TINT16, DB_VAR},                          //!< tInf_PvgTorConsigneCommand
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_PvgTorConsigneCommand[2]
    I16_UNDEF,                                              //!< i16Def_PvgTorConsigneCommand
    {0xffff, 330, TINT16, DB_VAR},                          //!< tInf_PvgEvTorTurretCmd
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_PvgEvTorTurretCmd[2]
    I16_MIN,                                                //!< i16Def_PvgEvTorTurretCmd
    {0xffff, 466, TBOOLEAN, DB_VAR},                        //!< tInf_EngineOn
    {FALSE, TRUE},                                          //!< aboRng_EngineOn[2]
    FALSE,                                                  //!< boDef_EngineOn
    {0xffff, 467, TUINT16, DB_VAR},                         //!< tInf_gMotorCmd
    {U16_MIN, U16_MAX},                                     //!< au16Rng_gMotorCmd[2]
    U16_MIN,                                                //!< u16Def_gMotorCmd
    {0xffff, 469, TUINT8, DB_VAR},                          //!< tInf_CounterRisingEdge
    {U8_MIN, U8_MAX},                                       //!< au8Rng_CounterRisingEdge[2]
    0,                                                      //!< u8Def_CounterRisingEdge
    {0xffff, 470, TUINT8, DB_VAR},                          //!< tInf_CounterFallingEdge
    {U8_MIN, U8_MAX},                                       //!< au8Rng_CounterFallingEdge[2]
    0,                                                      //!< u8Def_CounterFallingEdge
    {0xffff, 594, TUINT16, DB_VAR},                         //!< tInf_LifeBitRotBasket
    {U16_MIN, U16_MAX},                                     //!< au16Rng_LifeBitRotBasket[2]
    U16_MIN,                                                //!< u16Def_LifeBitRotBasket
    {0xffff, 599, TBOOLEAN, DB_VAR},                        //!< tInf_TestElevationActivation
    {FALSE, TRUE},                                          //!< aboRng_TestElevationActivation[2]
    FALSE,                                                  //!< boDef_TestElevationActivation
    {0xffff, 227, TBOOLEAN, DB_VAR},                        //!< tInf_RotTurretBool
    {FALSE, TRUE},                                          //!< aboRng_RotTurretBool[2]
    FALSE,                                                  //!< boDef_RotTurretBool
    {0xffff, 310, TINT16, DB_VAR},                          //!< tInf_ScalingJoysTurret
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_ScalingJoysTurret[2]
    I16_UNDEF,                                              //!< i16Def_ScalingJoysTurret
    {0xffff, 667, TINT16, DB_VAR},                          //!< tInf_ScalingJoysDeltaArm
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_ScalingJoysDeltaArm[2]
    I16_UNDEF,                                              //!< i16Def_ScalingJoysDeltaArm
    {0xffff, 668, TINT16, DB_VAR},                          //!< tInf_PvgDeltaArmConsigne
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_PvgDeltaArmConsigne[2]
    I16_UNDEF,                                              //!< i16Def_PvgDeltaArmConsigne
    {0xffff, 669, TINT16, DB_VAR},                          //!< tInf_ScalingJoysArrowArm
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_ScalingJoysArrowArm[2]
    I16_UNDEF,                                              //!< i16Def_ScalingJoysArrowArm
    {0xffff, 670, TINT16, DB_VAR},                          //!< tInf_PvgArrowArmConsigne
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_PvgArrowArmConsigne[2]
    I16_UNDEF,                                              //!< i16Def_PvgArrowArmConsigne
    {0xffff, 671, TINT16, DB_VAR},                          //!< tInf_ScalingJoysTelescopeArm
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_ScalingJoysTelescopeArm[2]
    I16_UNDEF,                                              //!< i16Def_ScalingJoysTelescopeArm
    {0xffff, 672, TINT16, DB_VAR},                          //!< tInf_PvgTelescopeArmConsigne
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_PvgTelescopeArmConsigne[2]
    I16_UNDEF,                                              //!< i16Def_PvgTelescopeArmConsigne
    {0xffff, 634, TINT16, 5},                               //!< tInf_PvgTorVoltageRangeValue
    {
        { I16_MIN, I16_MAX },                               //!< aai16Rng_PvgTorVoltageRangeValue[0][2]
        { I16_MIN, I16_MAX },                               //!< aai16Rng_PvgTorVoltageRangeValue[1][2]
        { I16_MIN, I16_MAX },                               //!< aai16Rng_PvgTorVoltageRangeValue[2][2]
        { I16_MIN, I16_MAX },                               //!< aai16Rng_PvgTorVoltageRangeValue[3][2]
        { I16_MIN, I16_MAX }                                //!< aai16Rng_PvgTorVoltageRangeValue[4][2]
    },
    {I16_UNDEF, I16_UNDEF, I16_UNDEF, I16_UNDEF, I16_UNDEF},//!< ai16Def_PvgTorVoltageRangeValue[5]
    {0xffff, 1017, TBOOLEAN, DB_VAR},                       //!< tInf_ActiveWorkEnvelopLimit
    {FALSE, TRUE},                                          //!< aboRng_ActiveWorkEnvelopLimit[2]
    TRUE,                                                   //!< boDef_ActiveWorkEnvelopLimit
    {0xffff, 1103, TBOOLEAN, DB_VAR},                       //!< tInf_PortillonLadderClose
    {FALSE, TRUE},                                          //!< aboRng_PortillonLadderClose[2]
    FALSE,                                                  //!< boDef_PortillonLadderClose
    {0xffff, 397, TBOOLEAN, DB_VAR},                        //!< tInf_ActiveFailure
    {FALSE, TRUE},                                          //!< aboRng_ActiveFailure[2]
    FALSE,                                                  //!< boDef_ActiveFailure
    {0xffff, 1362, TBOOLEAN, DB_VAR},                       //!< tInf_StopAllMovementsNacellePost
    {FALSE, TRUE},                                          //!< aboRng_StopAllMovementsNacellePost[2]
    FALSE,                                                  //!< boDef_StopAllMovementsNacellePost
    {0xffff, 1480, TUINT32, DB_VAR},                        //!< tInf_AverageTimeCycle
    {U32_MIN, U32_MAX},                                     //!< au32Rng_AverageTimeCycle[2]
    U32_MIN,                                                //!< u32Def_AverageTimeCycle
    {0xffff, 1481, TUINT32, DB_VAR},                        //!< tInf_MaxTimeCycle
    {U32_MIN, U32_MAX},                                     //!< au32Rng_MaxTimeCycle[2]
    U32_MIN,                                                //!< u32Def_MaxTimeCycle
    {0xffff, 1617, TBOOLEAN, DB_VAR},                       //!< tInf_TestRefreshParamBlockCurrent
    {FALSE, TRUE},                                          //!< aboRng_TestRefreshParamBlockCurrent[2]
    FALSE,                                                  //!< boDef_TestRefreshParamBlockCurrent
    {0xffff, 1757, TBOOLEAN, DB_VAR},                       //!< tInf_LynxOnAllMvts
    {FALSE, TRUE},                                          //!< aboRng_LynxOnAllMvts[2]
    FALSE,                                                  //!< boDef_LynxOnAllMvts
    {0xffff, 1776, TINT16, DB_VAR},                         //!< tInf_ReturnValStart48XsFunc
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_ReturnValStart48XsFunc[2]
    0,                                                      //!< i16Def_ReturnValStart48XsFunc
    {0xffff, 1777, TUINT32, DB_VAR},                        //!< tInf_IndexVersion48Xs
    {U32_MIN, U32_MAX},                                     //!< au32Rng_IndexVersion48Xs[2]
    0U,                                                     //!< u32Def_IndexVersion48Xs
    {0xffff, 1782, TBOOLEAN, DB_VAR},                       //!< tInf_TestElectricalIO
    {FALSE, TRUE},                                          //!< aboRng_TestElectricalIO[2]
    FALSE,                                                  //!< boDef_TestElectricalIO
    {0xffff, 1778, TUINT8, DB_VAR},                         //!< tInf_Major_48XS
    {U8_MIN, U8_MAX},                                       //!< au8Rng_Major_48XS[2]
    0,                                                      //!< u8Def_Major_48XS
    {0xffff, 1786, TUINT8, DB_VAR},                         //!< tInf_Minor_48XS
    {U8_MIN, U8_MAX},                                       //!< au8Rng_Minor_48XS[2]
    0,                                                      //!< u8Def_Minor_48XS
    {0xffff, 1787, TUINT8, DB_VAR},                         //!< tInf_Patch_48XS
    {U8_MIN, U8_MAX},                                       //!< au8Rng_Patch_48XS[2]
    0,                                                      //!< u8Def_Patch_48XS
    {0xffff, 1788, TUINT8, DB_VAR},                         //!< tInf_Custom_48XS
    {U8_MIN, U8_MAX},                                       //!< au8Rng_Custom_48XS[2]
    0,                                                      //!< u8Def_Custom_48XS
    {0xffff, 2012, TBOOLEAN, DB_VAR},                       //!< tInf_RunningStable48XS
    {FALSE, TRUE},                                          //!< aboRng_RunningStable48XS[2]
    FALSE,                                                  //!< boDef_RunningStable48XS
    {0xffff, 2017, TBOOLEAN, DB_VAR},                       //!< tInf_BlinkLow
    {FALSE, TRUE},                                          //!< aboRng_BlinkLow[2]
    FALSE,                                                  //!< boDef_BlinkLow
    {0xffff, 2143, TUINT16, DB_VAR},                        //!< tInf_FaultyValue
    {U16_MIN, U16_MAX},                                     //!< au16Rng_FaultyValue[2]
    0,                                                      //!< u16Def_FaultyValue
    {0xffff, 2144, TUINT8, DB_VAR},                         //!< tInf_DeviceNum
    {U8_MIN, U8_MAX},                                       //!< au8Rng_DeviceNum[2]
    0,                                                      //!< u8Def_DeviceNum
    {0xffff, 2145, TUINT8, DB_VAR},                         //!< tInf_ErrorCode
    {U8_MIN, U8_MAX},                                       //!< au8Rng_ErrorCode[2]
    0,                                                      //!< u8Def_ErrorCode
    {0xffff, 2152, TBOOLEAN, DB_VAR},                       //!< tInf_EngineRunningStable
    {FALSE, TRUE},                                          //!< aboRng_EngineRunningStable[2]
    FALSE,                                                  //!< boDef_EngineRunningStable
    {0xffff, 2154, TBOOLEAN, DB_VAR},                       //!< tInf_BypassTestCommand
    {FALSE, TRUE},                                          //!< aboRng_BypassTestCommand[2]
    FALSE                                                   //!< boDef_BypassTestCommand
};

const TDbSetNvOptionsC1 gDb_ctSetNvOptionsC1=
{
    {0xffff, 1096, TBOOLEAN, DB_VAR},                       //!< tInf_Portillon
    {FALSE, TRUE},                                          //!< aboRng_Portillon[2]
    FALSE,                                                  //!< boDef_Portillon
    {0xffff, 1097, TBOOLEAN, DB_VAR},                       //!< tInf_Ladder
    {FALSE, TRUE},                                          //!< aboRng_Ladder[2]
    FALSE,                                                  //!< boDef_Ladder
    {0xffff, 1202, TBOOLEAN, DB_VAR},                       //!< tInf_MeasuringMat
    {FALSE, TRUE},                                          //!< aboRng_MeasuringMat[2]
    FALSE,                                                  //!< boDef_MeasuringMat
    {0xffff, 1389, TBOOLEAN, DB_VAR},                       //!< tInf_MastDigitalDisplay
    {FALSE, TRUE},                                          //!< aboRng_MastDigitalDisplay[2]
    FALSE,                                                  //!< boDef_MastDigitalDisplay
    {0xffff, 1563, TBOOLEAN, DB_VAR},                       //!< tInf_Generator
    {FALSE, TRUE},                                          //!< aboRng_Generator[2]
    FALSE,                                                  //!< boDef_Generator
    {0xffff, 1607, TBOOLEAN, DB_VAR},                       //!< tInf_FlashingLightOnRail
    {FALSE, TRUE},                                          //!< aboRng_FlashingLightOnRail[2]
    FALSE,                                                  //!< boDef_FlashingLightOnRail
    {0xffff, 1622, TBOOLEAN, DB_VAR},                       //!< tInf_AutoStopMeasuringMast
    {FALSE, TRUE},                                          //!< aboRng_AutoStopMeasuringMast[2]
    FALSE,                                                  //!< boDef_AutoStopMeasuringMast
    {0xffff, 1756, TBOOLEAN, DB_VAR},                       //!< tInf_LynxOnAllMvts
    {FALSE, TRUE},                                          //!< aboRng_LynxOnAllMvts[2]
    FALSE,                                                  //!< boDef_LynxOnAllMvts
    {0xffff, 1758, TBOOLEAN, DB_VAR},                       //!< tInf_WhiteLight15746
    {FALSE, TRUE},                                          //!< aboRng_WhiteLight15746[2]
    FALSE,                                                  //!< boDef_WhiteLight15746
    {0xffff, 1780, TBOOLEAN, DB_VAR},                       //!< tInf_AutorisationWorkKeyPresent
    {FALSE, TRUE},                                          //!< aboRng_AutorisationWorkKeyPresent[2]
    FALSE,                                                  //!< boDef_AutorisationWorkKeyPresent
    {0xffff, 1827, TBOOLEAN, DB_VAR},                       //!< tInf_FlasingLightAlwaysOnAUS
    {FALSE, TRUE},                                          //!< aboRng_FlasingLightAlwaysOnAUS[2]
    FALSE,                                                  //!< boDef_FlasingLightAlwaysOnAUS
    {0xffff, 2118, TBOOLEAN, DB_VAR},                       //!< tInf_ContactMastSNCFOption
    {FALSE, TRUE},                                          //!< aboRng_ContactMastSNCFOption[2]
    FALSE,                                                  //!< boDef_ContactMastSNCFOption
    {0xffff, 2125, TBOOLEAN, DB_VAR},                       //!< tInf_PresenceContactMast
    {FALSE, TRUE},                                          //!< aboRng_PresenceContactMast[2]
    FALSE                                                   //!< boDef_PresenceContactMast
};

const TDbSetNvMemoryC1 gDb_ctSetNvMemoryC1=
{
    {0xffff, 1383, TBOOLEAN, DB_VAR},                       //!< tInf_NvMemoryC
    {FALSE, TRUE},                                          //!< aboRng_NvMemoryC[2]
    0,                                                      //!< boDef_NvMemoryC
    {0xffff, 1497, TUINT8, DB_VAR},                         //!< tInf_VarMemory1
    {U8_MIN, U8_MAX},                                       //!< au8Rng_VarMemory1[2]
    0,                                                      //!< u8Def_VarMemory1
    {0xffff, 1498, TUINT8, DB_VAR},                         //!< tInf_VarMemory2
    {U8_MIN, U8_MAX},                                       //!< au8Rng_VarMemory2[2]
    0,                                                      //!< u8Def_VarMemory2
    {0xffff, 1499, TUINT8, DB_VAR},                         //!< tInf_VarMemory3
    {U8_MIN, U8_MAX},                                       //!< au8Rng_VarMemory3[2]
    0,                                                      //!< u8Def_VarMemory3
    {0xffff, 1500, TUINT16, DB_VAR},                        //!< tInf_VarMemory4
    {U16_MIN, U16_MAX},                                     //!< au16Rng_VarMemory4[2]
    0,                                                      //!< u16Def_VarMemory4
    {0xffff, 1501, TUINT16, DB_VAR},                        //!< tInf_VarMemory5
    {U16_MIN, U16_MAX},                                     //!< au16Rng_VarMemory5[2]
    0,                                                      //!< u16Def_VarMemory5
    {0xffff, 1502, TUINT16, DB_VAR},                        //!< tInf_VarMemory6
    {U16_MIN, U16_MAX},                                     //!< au16Rng_VarMemory6[2]
    0,                                                      //!< u16Def_VarMemory6
    {0xffff, 1503, TINT16, DB_VAR},                         //!< tInf_VarMemory7
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_VarMemory7[2]
    0,                                                      //!< i16Def_VarMemory7
    {0xffff, 1504, TINT16, DB_VAR},                         //!< tInf_VarMemory8
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_VarMemory8[2]
    0,                                                      //!< i16Def_VarMemory8
    {0xffff, 1505, TINT16, DB_VAR},                         //!< tInf_VarMemory9
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_VarMemory9[2]
    0,                                                      //!< i16Def_VarMemory9
    {0xffff, 1506, TBOOLEAN, DB_VAR},                       //!< tInf_VarMemory10
    {FALSE, TRUE},                                          //!< aboRng_VarMemory10[2]
    FALSE,                                                  //!< boDef_VarMemory10
    {0xffff, 1507, TBOOLEAN, DB_VAR},                       //!< tInf_VarMemory11
    {FALSE, TRUE},                                          //!< aboRng_VarMemory11[2]
    FALSE,                                                  //!< boDef_VarMemory11
    {0xffff, 1508, TBOOLEAN, DB_VAR},                       //!< tInf_VarMemory12
    {FALSE, TRUE},                                          //!< aboRng_VarMemory12[2]
    FALSE,                                                  //!< boDef_VarMemory12
    {0xffff, 1509, TBOOLEAN, DB_VAR},                       //!< tInf_VarMemory13
    {FALSE, TRUE},                                          //!< aboRng_VarMemory13[2]
    FALSE,                                                  //!< boDef_VarMemory13
    {0xffff, 1510, TBOOLEAN, DB_VAR},                       //!< tInf_VarMemory14
    {FALSE, TRUE},                                          //!< aboRng_VarMemory14[2]
    FALSE,                                                  //!< boDef_VarMemory14
    {0xffff, 1855, TUINT16, DB_VAR},                        //!< tInf_CptNbrRegenFinish
    {U16_MIN, U16_MAX},                                     //!< au16Rng_CptNbrRegenFinish[2]
    0,                                                      //!< u16Def_CptNbrRegenFinish
    {0xffff, 2002, TBOOLEAN, DB_VAR},                       //!< tInf_FirstKeyNoReloadWithGenerator
    {FALSE, TRUE},                                          //!< aboRng_FirstKeyNoReloadWithGenerator[2]
    FALSE,                                                  //!< boDef_FirstKeyNoReloadWithGenerator
    {0xffff, 2004, TBOOLEAN, DB_VAR},                       //!< tInf_NewSocUperReloadWithGenerator
    {FALSE, TRUE},                                          //!< aboRng_NewSocUperReloadWithGenerator[2]
    FALSE,                                                  //!< boDef_NewSocUperReloadWithGenerator
    {0xffff, 2009, TUINT32, DB_VAR},                        //!< tInf_TotalRegenMinutes
    {U32_MIN, U32_MAX},                                     //!< au32Rng_TotalRegenMinutes[2]
    0U,                                                     //!< u32Def_TotalRegenMinutes
    {0xffff, 2079, TUINT32, DB_VAR},                        //!< tInf_TotalElecticMinutes
    {U32_MIN, U32_MAX},                                     //!< au32Rng_TotalElecticMinutes[2]
    0U                                                      //!< u32Def_TotalElecticMinutes
};

const TDbSetNvParametersC1 gDb_ctSetNvParametersC1=
{
    {0xfff4, 144, TUINT8, DB_VAR},                          //!< tInf_PvgUpDeltaArmTurretPostCmdPrct
    {0, 50},                                                //!< au8Rng_PvgUpDeltaArmTurretPostCmdPrct[2]
    25,                                                     //!< u8Def_PvgUpDeltaArmTurretPostCmdPrct
    {0xfff4, 146, TUINT8, DB_VAR},                          //!< tInf_PvgDownDeltaArmTurretPostCmdPrct
    {50, 100},                                              //!< au8Rng_PvgDownDeltaArmTurretPostCmdPrct[2]
    75,                                                     //!< u8Def_PvgDownDeltaArmTurretPostCmdPrct
    {0xfff4, 148, TUINT8, DB_VAR},                          //!< tInf_PvgUpArrowArmTurretPostCmdPrct
    {0, 50},                                                //!< au8Rng_PvgUpArrowArmTurretPostCmdPrct[2]
    25,                                                     //!< u8Def_PvgUpArrowArmTurretPostCmdPrct
    {0xfff4, 150, TUINT8, DB_VAR},                          //!< tInf_PvgDownArrowArmTurretPostCmdPrct
    {50, 100},                                              //!< au8Rng_PvgDownArrowArmTurretPostCmdPrct[2]
    75,                                                     //!< u8Def_PvgDownArrowArmTurretPostCmdPrct
    {0xfff4, 401, TUINT8, DB_VAR},                          //!< tInf_PvgInTelescTurretPostCmdPrct
    {50, 100},                                              //!< au8Rng_PvgInTelescTurretPostCmdPrct[2]
    75,                                                     //!< u8Def_PvgInTelescTurretPostCmdPrct
    {0xfff4, 402, TUINT8, DB_VAR},                          //!< tInf_PvgOutTelescTurretPostCmdPrct
    {0, 50},                                                //!< au8Rng_PvgOutTelescTurretPostCmdPrct[2]
    25,                                                     //!< u8Def_PvgOutTelescTurretPostCmdPrct
    {0xfff4, 140, TUINT8, DB_VAR},                          //!< tInf_MaxPvgUpDeltaArmCmdPrct
    {0, 50},                                                //!< au8Rng_MaxPvgUpDeltaArmCmdPrct[2]
    25,                                                     //!< u8Def_MaxPvgUpDeltaArmCmdPrct
    {0xfff4, 142, TUINT8, DB_VAR},                          //!< tInf_MaxPvgDownDeltaArmCmdPrct
    {50, 100},                                              //!< au8Rng_MaxPvgDownDeltaArmCmdPrct[2]
    75,                                                     //!< u8Def_MaxPvgDownDeltaArmCmdPrct
    {0xfff4, 448, TUINT8, DB_VAR},                          //!< tInf_MaxPvgUpArrowArmCmdPrct
    {0, 50},                                                //!< au8Rng_MaxPvgUpArrowArmCmdPrct[2]
    25,                                                     //!< u8Def_MaxPvgUpArrowArmCmdPrct
    {0xfff4, 521, TUINT8, DB_VAR},                          //!< tInf_MaxPvgDownArrowArmCmdPrct
    {50, 100},                                              //!< au8Rng_MaxPvgDownArrowArmCmdPrct[2]
    75,                                                     //!< u8Def_MaxPvgDownArrowArmCmdPrct
    {0xfff4, 522, TUINT8, DB_VAR},                          //!< tInf_MaxPvgInTelescopeArmCmdPrct
    {50, 100},                                              //!< au8Rng_MaxPvgInTelescopeArmCmdPrct[2]
    75,                                                     //!< u8Def_MaxPvgInTelescopeArmCmdPrct
    {0xfff4, 523, TUINT8, DB_VAR},                          //!< tInf_MaxPvgOutTelescopeArmCmdPrct
    {0, 50},                                                //!< au8Rng_MaxPvgOutTelescopeArmCmdPrct[2]
    25,                                                     //!< u8Def_MaxPvgOutTelescopeArmCmdPrct
    {0xfff4, 320, TUINT8, DB_VAR},                          //!< tInf_MinPvgUpDeltaArmCmdPrct
    {0, 50},                                                //!< au8Rng_MinPvgUpDeltaArmCmdPrct[2]
    45,                                                     //!< u8Def_MinPvgUpDeltaArmCmdPrct
    {0xfff4, 322, TUINT8, DB_VAR},                          //!< tInf_MinPvgDownDeltaArmCmdPrct
    {50, 100},                                              //!< au8Rng_MinPvgDownDeltaArmCmdPrct[2]
    55,                                                     //!< u8Def_MinPvgDownDeltaArmCmdPrct
    {0xfff4, 323, TUINT8, DB_VAR},                          //!< tInf_MinPvgUpArrowArmCmdPrct
    {0, 50},                                                //!< au8Rng_MinPvgUpArrowArmCmdPrct[2]
    45,                                                     //!< u8Def_MinPvgUpArrowArmCmdPrct
    {0xfff4, 325, TUINT8, DB_VAR},                          //!< tInf_MinPvgDownArrowArmCmdPrct
    {50, 100},                                              //!< au8Rng_MinPvgDownArrowArmCmdPrct[2]
    55,                                                     //!< u8Def_MinPvgDownArrowArmCmdPrct
    {0xfff4, 406, TUINT8, DB_VAR},                          //!< tInf_MinPvgInTelescopeArmCmdPrct
    {50, 100},                                              //!< au8Rng_MinPvgInTelescopeArmCmdPrct[2]
    55,                                                     //!< u8Def_MinPvgInTelescopeArmCmdPrct
    {0xfff4, 407, TUINT8, DB_VAR},                          //!< tInf_MinPvgOutTelescopeArmCmdPrct
    {0, 50},                                                //!< au8Rng_MinPvgOutTelescopeArmCmdPrct[2]
    45,                                                     //!< u8Def_MinPvgOutTelescopeArmCmdPrct
    {0xfff4, 114, TUINT16, DB_VAR},                         //!< tInf_TresholdAnaToBoForInputs48Xs
    {U16_MIN, U16_MAX},                                     //!< au16Rng_TresholdAnaToBoForInputs48Xs[2]
    2500,                                                   //!< u16Def_TresholdAnaToBoForInputs48Xs
    {0xfff4, 200, TUINT8, DB_VAR},                          //!< tInf_PvgAxleMovementCmdPrct
    {0, 100},                                               //!< au8Rng_PvgAxleMovementCmdPrct[2]
    75,                                                     //!< u8Def_PvgAxleMovementCmdPrct
    {0xfff4, 326, TUINT8, DB_VAR},                          //!< tInf_DeadZoneJoystickTurret
    {0, 100},                                               //!< au8Rng_DeadZoneJoystickTurret[2]
    5,                                                      //!< u8Def_DeadZoneJoystickTurret
    {0xfff4, 359, TUINT8, DB_VAR},                          //!< tInf_DeadZoneJoystickDeltaArm
    {0, 100},                                               //!< au8Rng_DeadZoneJoystickDeltaArm[2]
    5,                                                      //!< u8Def_DeadZoneJoystickDeltaArm
    {0xfff4, 384, TUINT8, DB_VAR},                          //!< tInf_DeadZoneJoystickTelescope
    {0, 100},                                               //!< au8Rng_DeadZoneJoystickTelescope[2]
    5,                                                      //!< u8Def_DeadZoneJoystickTelescope
    {0xfff4, 575, TUINT8, DB_VAR},                          //!< tInf_DeadZoneJoystickArrow
    {0, 100},                                               //!< au8Rng_DeadZoneJoystickArrow[2]
    5,                                                      //!< u8Def_DeadZoneJoystickArrow
    {0xfff4, 438, TUINT8, DB_VAR},                          //!< tInf_DeadZoneJoystickRailAdvancement
    {0, 100},                                               //!< au8Rng_DeadZoneJoystickRailAdvancement[2]
    5,                                                      //!< u8Def_DeadZoneJoystickRailAdvancement
    {0xfff4, 525, TUINT8, DB_VAR},                          //!< tInf_DeadZoneJoystickRotationTurret
    {0, 100},                                               //!< au8Rng_DeadZoneJoystickRotationTurret[2]
    5,                                                      //!< u8Def_DeadZoneJoystickRotationTurret
    {0xfff4, 678, TUINT16, DB_VAR},                         //!< tInf_EngineOffCurEvPropMotorAccel
    {U16_MIN, U16_MAX},                                     //!< au16Rng_EngineOffCurEvPropMotorAccel[2]
    1000,                                                   //!< u16Def_EngineOffCurEvPropMotorAccel
    {0xfff4, 679, TUINT16, DB_VAR},                         //!< tInf_MinCurEvPropMotorAccelerator
    {U16_MIN, U16_MAX},                                     //!< au16Rng_MinCurEvPropMotorAccelerator[2]
    3000,                                                   //!< u16Def_MinCurEvPropMotorAccelerator
    {0xfff4, 680, TUINT16, DB_VAR},                         //!< tInf_StopCurEvPropMotorAccelerator
    {U16_MIN, U16_MAX},                                     //!< au16Rng_StopCurEvPropMotorAccelerator[2]
    1100,                                                   //!< u16Def_StopCurEvPropMotorAccelerator
    {0xfff4, 681, TUINT16, DB_VAR},                         //!< tInf_EngineOffCurEvPropGenerator
    {U16_MIN, U16_MAX},                                     //!< au16Rng_EngineOffCurEvPropGenerator[2]
    1000,                                                   //!< u16Def_EngineOffCurEvPropGenerator
    {0xfff4, 682, TUINT16, DB_VAR},                         //!< tInf_MinCurEvPropGenerator
    {U16_MIN, U16_MAX},                                     //!< au16Rng_MinCurEvPropGenerator[2]
    3000,                                                   //!< u16Def_MinCurEvPropGenerator
    {0xfff4, 683, TUINT16, DB_VAR},                         //!< tInf_StopCurEvPropGenerator
    {U16_MIN, U16_MAX},                                     //!< au16Rng_StopCurEvPropGenerator[2]
    1100,                                                   //!< u16Def_StopCurEvPropGenerator
    {0xfff4, 746, TUINT16, DB_VAR},                         //!< tInf_PidGpEvPropMotorAcc
    {U16_MIN, U16_MAX},                                     //!< au16Rng_PidGpEvPropMotorAcc[2]
    400,                                                    //!< u16Def_PidGpEvPropMotorAcc
    {0xfff4, 747, TUINT16, DB_VAR},                         //!< tInf_PidTiEvPropMotorAcc
    {U16_MIN, U16_MAX},                                     //!< au16Rng_PidTiEvPropMotorAcc[2]
    50,                                                     //!< u16Def_PidTiEvPropMotorAcc
    {0xfff4, 748, TUINT16, DB_VAR},                         //!< tInf_PidTdEvPropMotorAcc
    {U16_MIN, U16_MAX},                                     //!< au16Rng_PidTdEvPropMotorAcc[2]
    0,                                                      //!< u16Def_PidTdEvPropMotorAcc
    {0xfff4, 749, TUINT16, DB_VAR},                         //!< tInf_PidGpEvPropGenerator
    {U16_MIN, U16_MAX},                                     //!< au16Rng_PidGpEvPropGenerator[2]
    400,                                                    //!< u16Def_PidGpEvPropGenerator
    {0xfff4, 750, TUINT16, DB_VAR},                         //!< tInf_PidTiEvPropGenerator
    {U16_MIN, U16_MAX},                                     //!< au16Rng_PidTiEvPropGenerator[2]
    50,                                                     //!< u16Def_PidTiEvPropGenerator
    {0xfff4, 751, TUINT16, DB_VAR},                         //!< tInf_PidTdEvPropGenerator
    {U16_MIN, U16_MAX},                                     //!< au16Rng_PidTdEvPropGenerator[2]
    0,                                                      //!< u16Def_PidTdEvPropGenerator
    {0xfff4, 257, TUINT8, DB_VAR},                          //!< tInf_DeviationLimitTransmPressure
    {U8_MIN, U8_MAX},                                       //!< au8Rng_DeviationLimitTransmPressure[2]
    3,                                                      //!< u8Def_DeviationLimitTransmPressure
    {0xfff4, 757, TINT16, DB_VAR},                          //!< tInf_OutCharPosDeltaArmAngular
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_OutCharPosDeltaArmAngular[2]
    3600,                                                   //!< i16Def_OutCharPosDeltaArmAngular
    {0xfff4, 758, TINT16, DB_VAR},                          //!< tInf_OutCharNeuDeltaArmAngular
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_OutCharNeuDeltaArmAngular[2]
    0,                                                      //!< i16Def_OutCharNeuDeltaArmAngular
    {0xfff4, 759, TINT16, DB_VAR},                          //!< tInf_OutCharNegDeltaArmAngular
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_OutCharNegDeltaArmAngular[2]
    0,                                                      //!< i16Def_OutCharNegDeltaArmAngular
    {0xfff4, 258, TUINT8, DB_VAR},                          //!< tInf_DeviationLimitDeltaArmAngle
    {U8_MIN, U8_MAX},                                       //!< au8Rng_DeviationLimitDeltaArmAngle[2]
    3,                                                      //!< u8Def_DeviationLimitDeltaArmAngle
    {0xfff4, 763, TINT16, DB_VAR},                          //!< tInf_OutCharPosArrowArmAngular
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_OutCharPosArrowArmAngular[2]
    3600,                                                   //!< i16Def_OutCharPosArrowArmAngular
    {0xfff4, 764, TINT16, DB_VAR},                          //!< tInf_OutCharNeuArrowArmAngular
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_OutCharNeuArrowArmAngular[2]
    0,                                                      //!< i16Def_OutCharNeuArrowArmAngular
    {0xfff4, 765, TINT16, DB_VAR},                          //!< tInf_OutCharNegArrowArmAngular
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_OutCharNegArrowArmAngular[2]
    0,                                                      //!< i16Def_OutCharNegArrowArmAngular
    {0xfff4, 263, TUINT8, DB_VAR},                          //!< tInf_DeviationLimitArrowArmAngle
    {U8_MIN, U8_MAX},                                       //!< au8Rng_DeviationLimitArrowArmAngle[2]
    3,                                                      //!< u8Def_DeviationLimitArrowArmAngle
    {0xfff4, 541, TUINT8, DB_VAR},                          //!< tInf_MinPvgUpPendularTurretPost
    {U8_MIN, U8_MAX},                                       //!< au8Rng_MinPvgUpPendularTurretPost[2]
    42,                                                     //!< u8Def_MinPvgUpPendularTurretPost
    {0xfff4, 542, TUINT8, DB_VAR},                          //!< tInf_MinPvgUpPendularNacellePost
    {U8_MIN, U8_MAX},                                       //!< au8Rng_MinPvgUpPendularNacellePost[2]
    42,                                                     //!< u8Def_MinPvgUpPendularNacellePost
    {0xfff4, 543, TUINT8, DB_VAR},                          //!< tInf_MinPvgUpPendularRadioPost
    {U8_MIN, U8_MAX},                                       //!< au8Rng_MinPvgUpPendularRadioPost[2]
    42,                                                     //!< u8Def_MinPvgUpPendularRadioPost
    {0xfff4, 778, TUINT8, DB_VAR},                          //!< tInf_MaxPvgUpPendularTurretPost
    {U8_MIN, U8_MAX},                                       //!< au8Rng_MaxPvgUpPendularTurretPost[2]
    38,                                                     //!< u8Def_MaxPvgUpPendularTurretPost
    {0xfff4, 779, TUINT8, DB_VAR},                          //!< tInf_MaxPvgUpPendularNacellePost
    {U8_MIN, U8_MAX},                                       //!< au8Rng_MaxPvgUpPendularNacellePost[2]
    38,                                                     //!< u8Def_MaxPvgUpPendularNacellePost
    {0xfff4, 780, TUINT8, DB_VAR},                          //!< tInf_MaxPvgUpPendularRadioPost
    {U8_MIN, U8_MAX},                                       //!< au8Rng_MaxPvgUpPendularRadioPost[2]
    38,                                                     //!< u8Def_MaxPvgUpPendularRadioPost
    {0xfff4, 544, TUINT16, 2},                              //!< tInf_UpPendularRampRatioTurret
    {
        { U16_MIN, U16_MAX },                               //!< aau16Rng_UpPendularRampRatioTurret[0][2]
        { U16_MIN, U16_MAX }                                //!< aau16Rng_UpPendularRampRatioTurret[1][2]
    },
    {100, 100},                                             //!< au16Def_UpPendularRampRatioTurret[2]
    {0xfff4, 927, TUINT16, 2},                              //!< tInf_UpPendularRampRatioNacelle
    {
        { U16_MIN, U16_MAX },                               //!< aau16Rng_UpPendularRampRatioNacelle[0][2]
        { U16_MIN, U16_MAX }                                //!< aau16Rng_UpPendularRampRatioNacelle[1][2]
    },
    {100, 100},                                             //!< au16Def_UpPendularRampRatioNacelle[2]
    {0xfff4, 928, TUINT16, 2},                              //!< tInf_UpPendularRampRatioRadio
    {
        { U16_MIN, U16_MAX },                               //!< aau16Rng_UpPendularRampRatioRadio[0][2]
        { U16_MIN, U16_MAX }                                //!< aau16Rng_UpPendularRampRatioRadio[1][2]
    },
    {100, 100},                                             //!< au16Def_UpPendularRampRatioRadio[2]
    {0xfff4, 781, TUINT8, DB_VAR},                          //!< tInf_MinPvgDownPendularTurretPost
    {U8_MIN, U8_MAX},                                       //!< au8Rng_MinPvgDownPendularTurretPost[2]
    42,                                                     //!< u8Def_MinPvgDownPendularTurretPost
    {0xfff4, 782, TUINT8, DB_VAR},                          //!< tInf_MinPvgDownPendularNacellePost
    {U8_MIN, U8_MAX},                                       //!< au8Rng_MinPvgDownPendularNacellePost[2]
    42,                                                     //!< u8Def_MinPvgDownPendularNacellePost
    {0xfff4, 783, TUINT8, DB_VAR},                          //!< tInf_MinPvgDownPendularRadioPost
    {U8_MIN, U8_MAX},                                       //!< au8Rng_MinPvgDownPendularRadioPost[2]
    42,                                                     //!< u8Def_MinPvgDownPendularRadioPost
    {0xfff4, 784, TUINT8, DB_VAR},                          //!< tInf_MaxPvgDownPendularTurretPost
    {U8_MIN, U8_MAX},                                       //!< au8Rng_MaxPvgDownPendularTurretPost[2]
    38,                                                     //!< u8Def_MaxPvgDownPendularTurretPost
    {0xfff4, 785, TUINT8, DB_VAR},                          //!< tInf_MaxPvgDownPendularNacellePost
    {U8_MIN, U8_MAX},                                       //!< au8Rng_MaxPvgDownPendularNacellePost[2]
    38,                                                     //!< u8Def_MaxPvgDownPendularNacellePost
    {0xfff4, 786, TUINT8, DB_VAR},                          //!< tInf_MaxPvgDownPendularRadioPost
    {U8_MIN, U8_MAX},                                       //!< au8Rng_MaxPvgDownPendularRadioPost[2]
    38,                                                     //!< u8Def_MaxPvgDownPendularRadioPost
    {0xfff4, 787, TUINT16, 2},                              //!< tInf_DownPendularRampRatioTurret
    {
        { U16_MIN, U16_MAX },                               //!< aau16Rng_DownPendularRampRatioTurret[0][2]
        { U16_MIN, U16_MAX }                                //!< aau16Rng_DownPendularRampRatioTurret[1][2]
    },
    {100, 100},                                             //!< au16Def_DownPendularRampRatioTurret[2]
    {0xfff4, 929, TUINT16, 2},                              //!< tInf_DownPendularRampRatioNacelle
    {
        { U16_MIN, U16_MAX },                               //!< aau16Rng_DownPendularRampRatioNacelle[0][2]
        { U16_MIN, U16_MAX }                                //!< aau16Rng_DownPendularRampRatioNacelle[1][2]
    },
    {100, 100},                                             //!< au16Def_DownPendularRampRatioNacelle[2]
    {0xfff4, 930, TUINT16, 2},                              //!< tInf_DownPendularRampRatioRadio
    {
        { U16_MIN, U16_MAX },                               //!< aau16Rng_DownPendularRampRatioRadio[0][2]
        { U16_MIN, U16_MAX }                                //!< aau16Rng_DownPendularRampRatioRadio[1][2]
    },
    {100, 100},                                             //!< au16Def_DownPendularRampRatioRadio[2]
    {0xfff4, 788, TUINT8, DB_VAR},                          //!< tInf_MinPvgUpIncliBasketTurretPost
    {U8_MIN, U8_MAX},                                       //!< au8Rng_MinPvgUpIncliBasketTurretPost[2]
    42,                                                     //!< u8Def_MinPvgUpIncliBasketTurretPost
    {0xfff4, 789, TUINT8, DB_VAR},                          //!< tInf_MinPvgUpIncliBasketNacellePost
    {U8_MIN, U8_MAX},                                       //!< au8Rng_MinPvgUpIncliBasketNacellePost[2]
    42,                                                     //!< u8Def_MinPvgUpIncliBasketNacellePost
    {0xfff4, 790, TUINT8, DB_VAR},                          //!< tInf_MinPvgUpIncliBasketRadioPost
    {U8_MIN, U8_MAX},                                       //!< au8Rng_MinPvgUpIncliBasketRadioPost[2]
    42,                                                     //!< u8Def_MinPvgUpIncliBasketRadioPost
    {0xfff4, 791, TUINT8, DB_VAR},                          //!< tInf_MaxPvgUpIncliBasketTurretPost
    {U8_MIN, U8_MAX},                                       //!< au8Rng_MaxPvgUpIncliBasketTurretPost[2]
    38,                                                     //!< u8Def_MaxPvgUpIncliBasketTurretPost
    {0xfff4, 792, TUINT8, DB_VAR},                          //!< tInf_MaxPvgUpIncliBasketNacellePost
    {U8_MIN, U8_MAX},                                       //!< au8Rng_MaxPvgUpIncliBasketNacellePost[2]
    38,                                                     //!< u8Def_MaxPvgUpIncliBasketNacellePost
    {0xfff4, 793, TUINT8, DB_VAR},                          //!< tInf_MaxPvgUpIncliBasketRadioPost
    {U8_MIN, U8_MAX},                                       //!< au8Rng_MaxPvgUpIncliBasketRadioPost[2]
    38,                                                     //!< u8Def_MaxPvgUpIncliBasketRadioPost
    {0xfff4, 794, TUINT16, 2},                              //!< tInf_UpInclinBasketRampRatioTurret
    {
        { U16_MIN, U16_MAX },                               //!< aau16Rng_UpInclinBasketRampRatioTurret[0][2]
        { U16_MIN, U16_MAX }                                //!< aau16Rng_UpInclinBasketRampRatioTurret[1][2]
    },
    {100, 100},                                             //!< au16Def_UpInclinBasketRampRatioTurret[2]
    {0xfff4, 931, TUINT16, 2},                              //!< tInf_UpInclinBasketRampRatioNacelle
    {
        { U16_MIN, U16_MAX },                               //!< aau16Rng_UpInclinBasketRampRatioNacelle[0][2]
        { U16_MIN, U16_MAX }                                //!< aau16Rng_UpInclinBasketRampRatioNacelle[1][2]
    },
    {100, 100},                                             //!< au16Def_UpInclinBasketRampRatioNacelle[2]
    {0xfff4, 932, TUINT16, 2},                              //!< tInf_UpInclinBasketRampRatioRadio
    {
        { U16_MIN, U16_MAX },                               //!< aau16Rng_UpInclinBasketRampRatioRadio[0][2]
        { U16_MIN, U16_MAX }                                //!< aau16Rng_UpInclinBasketRampRatioRadio[1][2]
    },
    {100, 100},                                             //!< au16Def_UpInclinBasketRampRatioRadio[2]
    {0xfff4, 795, TUINT8, DB_VAR},                          //!< tInf_MinPvgDownIncliBasketTurretPost
    {U8_MIN, U8_MAX},                                       //!< au8Rng_MinPvgDownIncliBasketTurretPost[2]
    42,                                                     //!< u8Def_MinPvgDownIncliBasketTurretPost
    {0xfff4, 796, TUINT8, DB_VAR},                          //!< tInf_MinPvgDownIncliBasketNacellePost
    {U8_MIN, U8_MAX},                                       //!< au8Rng_MinPvgDownIncliBasketNacellePost[2]
    42,                                                     //!< u8Def_MinPvgDownIncliBasketNacellePost
    {0xfff4, 797, TUINT8, DB_VAR},                          //!< tInf_MinPvgDownIncliBasketRadioPost
    {U8_MIN, U8_MAX},                                       //!< au8Rng_MinPvgDownIncliBasketRadioPost[2]
    42,                                                     //!< u8Def_MinPvgDownIncliBasketRadioPost
    {0xfff4, 798, TUINT8, DB_VAR},                          //!< tInf_MaxPvgDownIncliBasketTurretPost
    {U8_MIN, U8_MAX},                                       //!< au8Rng_MaxPvgDownIncliBasketTurretPost[2]
    38,                                                     //!< u8Def_MaxPvgDownIncliBasketTurretPost
    {0xfff4, 799, TUINT8, DB_VAR},                          //!< tInf_MaxPvgDownIncliBasketNacellePost
    {U8_MIN, U8_MAX},                                       //!< au8Rng_MaxPvgDownIncliBasketNacellePost[2]
    38,                                                     //!< u8Def_MaxPvgDownIncliBasketNacellePost
    {0xfff4, 800, TUINT8, DB_VAR},                          //!< tInf_MaxPvgDownIncliBasketRadioPost
    {U8_MIN, U8_MAX},                                       //!< au8Rng_MaxPvgDownIncliBasketRadioPost[2]
    38,                                                     //!< u8Def_MaxPvgDownIncliBasketRadioPost
    {0xfff4, 801, TUINT16, 2},                              //!< tInf_DownInclinBasketRampRatioTurret
    {
        { U16_MIN, U16_MAX },                               //!< aau16Rng_DownInclinBasketRampRatioTurret[0][2]
        { U16_MIN, U16_MAX }                                //!< aau16Rng_DownInclinBasketRampRatioTurret[1][2]
    },
    {100, 100},                                             //!< au16Def_DownInclinBasketRampRatioTurret[2]
    {0xfff4, 933, TUINT16, 2},                              //!< tInf_DownInclinBasketRampRatioNacelle
    {
        { U16_MIN, U16_MAX },                               //!< aau16Rng_DownInclinBasketRampRatioNacelle[0][2]
        { U16_MIN, U16_MAX }                                //!< aau16Rng_DownInclinBasketRampRatioNacelle[1][2]
    },
    {100, 100},                                             //!< au16Def_DownInclinBasketRampRatioNacelle[2]
    {0xfff4, 934, TUINT16, 2},                              //!< tInf_DownInclinBasketRampRatioRadio
    {
        { U16_MIN, U16_MAX },                               //!< aau16Rng_DownInclinBasketRampRatioRadio[0][2]
        { U16_MIN, U16_MAX }                                //!< aau16Rng_DownInclinBasketRampRatioRadio[1][2]
    },
    {100, 100},                                             //!< au16Def_DownInclinBasketRampRatioRadio[2]
    {0xfff4, 802, TUINT8, DB_VAR},                          //!< tInf_MinPvgRotBasktClkwiseTurretPost
    {U8_MIN, U8_MAX},                                       //!< au8Rng_MinPvgRotBasktClkwiseTurretPost[2]
    42,                                                     //!< u8Def_MinPvgRotBasktClkwiseTurretPost
    {0xfff4, 803, TUINT8, DB_VAR},                          //!< tInf_MinPvgRotBasktClkwiseNacellePost
    {U8_MIN, U8_MAX},                                       //!< au8Rng_MinPvgRotBasktClkwiseNacellePost[2]
    42,                                                     //!< u8Def_MinPvgRotBasktClkwiseNacellePost
    {0xfff4, 804, TUINT8, DB_VAR},                          //!< tInf_MinPvgRotBasketClkwiseRadioPost
    {U8_MIN, U8_MAX},                                       //!< au8Rng_MinPvgRotBasketClkwiseRadioPost[2]
    42,                                                     //!< u8Def_MinPvgRotBasketClkwiseRadioPost
    {0xfff4, 805, TUINT8, DB_VAR},                          //!< tInf_MaxPvgRotBasketClkwiseTurretPost
    {U8_MIN, U8_MAX},                                       //!< au8Rng_MaxPvgRotBasketClkwiseTurretPost[2]
    38,                                                     //!< u8Def_MaxPvgRotBasketClkwiseTurretPost
    {0xfff4, 806, TUINT8, DB_VAR},                          //!< tInf_MaxPvgRotBasktClkwiseNacellePost
    {U8_MIN, U8_MAX},                                       //!< au8Rng_MaxPvgRotBasktClkwiseNacellePost[2]
    38,                                                     //!< u8Def_MaxPvgRotBasktClkwiseNacellePost
    {0xfff4, 807, TUINT8, DB_VAR},                          //!< tInf_MaxPvgRotBasketClkwiseRadioPost
    {U8_MIN, U8_MAX},                                       //!< au8Rng_MaxPvgRotBasketClkwiseRadioPost[2]
    38,                                                     //!< u8Def_MaxPvgRotBasketClkwiseRadioPost
    {0xfff4, 808, TUINT16, 2},                              //!< tInf_RotBasketClkwiseRampRatioTurret
    {
        { U16_MIN, U16_MAX },                               //!< aau16Rng_RotBasketClkwiseRampRatioTurret[0][2]
        { U16_MIN, U16_MAX }                                //!< aau16Rng_RotBasketClkwiseRampRatioTurret[1][2]
    },
    {100, 100},                                             //!< au16Def_RotBasketClkwiseRampRatioTurret[2]
    {0xfff4, 925, TUINT16, 2},                              //!< tInf_RotBasketClkwiseRampRatioNacel
    {
        { U16_MIN, U16_MAX },                               //!< aau16Rng_RotBasketClkwiseRampRatioNacel[0][2]
        { U16_MIN, U16_MAX }                                //!< aau16Rng_RotBasketClkwiseRampRatioNacel[1][2]
    },
    {100, 100},                                             //!< au16Def_RotBasketClkwiseRampRatioNacel[2]
    {0xfff4, 926, TUINT16, 2},                              //!< tInf_RotBasketClkwiseRampRatioRadio
    {
        { U16_MIN, U16_MAX },                               //!< aau16Rng_RotBasketClkwiseRampRatioRadio[0][2]
        { U16_MIN, U16_MAX }                                //!< aau16Rng_RotBasketClkwiseRampRatioRadio[1][2]
    },
    {100, 100},                                             //!< au16Def_RotBasketClkwiseRampRatioRadio[2]
    {0xfff4, 809, TUINT8, DB_VAR},                          //!< tInf_MinPvgRotBasktCtClkwiseTurtPost
    {U8_MIN, U8_MAX},                                       //!< au8Rng_MinPvgRotBasktCtClkwiseTurtPost[2]
    42,                                                     //!< u8Def_MinPvgRotBasktCtClkwiseTurtPost
    {0xfff4, 810, TUINT8, DB_VAR},                          //!< tInf_MinPvgRotBasktCtClkwiseNacelPost
    {U8_MIN, U8_MAX},                                       //!< au8Rng_MinPvgRotBasktCtClkwiseNacelPost[2]
    42,                                                     //!< u8Def_MinPvgRotBasktCtClkwiseNacelPost
    {0xfff4, 811, TUINT8, DB_VAR},                          //!< tInf_MinPvgRotBasktCtClkwiseRadioPost
    {U8_MIN, U8_MAX},                                       //!< au8Rng_MinPvgRotBasktCtClkwiseRadioPost[2]
    42,                                                     //!< u8Def_MinPvgRotBasktCtClkwiseRadioPost
    {0xfff4, 812, TUINT8, DB_VAR},                          //!< tInf_MaxPvgRotBasktCtClkwiseTuretPost
    {U8_MIN, U8_MAX},                                       //!< au8Rng_MaxPvgRotBasktCtClkwiseTuretPost[2]
    38,                                                     //!< u8Def_MaxPvgRotBasktCtClkwiseTuretPost
    {0xfff4, 813, TUINT8, DB_VAR},                          //!< tInf_MaxPvgRotBasktCtClkwiseNacelPost
    {U8_MIN, U8_MAX},                                       //!< au8Rng_MaxPvgRotBasktCtClkwiseNacelPost[2]
    38,                                                     //!< u8Def_MaxPvgRotBasktCtClkwiseNacelPost
    {0xfff4, 814, TUINT8, DB_VAR},                          //!< tInf_MaxPvgRotBasktCtClkwiseRadioPost
    {U8_MIN, U8_MAX},                                       //!< au8Rng_MaxPvgRotBasktCtClkwiseRadioPost[2]
    38,                                                     //!< u8Def_MaxPvgRotBasktCtClkwiseRadioPost
    {0xfff4, 815, TUINT16, 2},                              //!< tInf_RotBasketCtClkwiseRampRatioTuret
    {
        { U16_MIN, U16_MAX },                               //!< aau16Rng_RotBasketCtClkwiseRampRatioTuret[0][2]
        { U16_MIN, U16_MAX }                                //!< aau16Rng_RotBasketCtClkwiseRampRatioTuret[1][2]
    },
    {100, 100},                                             //!< au16Def_RotBasketCtClkwiseRampRatioTuret[2]
    {0xfff4, 923, TUINT16, 2},                              //!< tInf_RotBasketCtClkwiseRampRatioNacel
    {
        { U16_MIN, U16_MAX },                               //!< aau16Rng_RotBasketCtClkwiseRampRatioNacel[0][2]
        { U16_MIN, U16_MAX }                                //!< aau16Rng_RotBasketCtClkwiseRampRatioNacel[1][2]
    },
    {100, 100},                                             //!< au16Def_RotBasketCtClkwiseRampRatioNacel[2]
    {0xfff4, 924, TUINT16, 2},                              //!< tInf_RotBasketCtClkwiseRampRatioRadio
    {
        { U16_MIN, U16_MAX },                               //!< aau16Rng_RotBasketCtClkwiseRampRatioRadio[0][2]
        { U16_MIN, U16_MAX }                                //!< aau16Rng_RotBasketCtClkwiseRampRatioRadio[1][2]
    },
    {100, 100},                                             //!< au16Def_RotBasketCtClkwiseRampRatioRadio[2]
    {0xfff4, 816, TUINT16, DB_VAR},                         //!< tInf_MinPvgRotTurretClkwiseTurretPost
    {U16_MIN, U16_MAX},                                     //!< au16Rng_MinPvgRotTurretClkwiseTurretPost[2]
    420,                                                    //!< u16Def_MinPvgRotTurretClkwiseTurretPost
    {0xfff4, 817, TUINT16, DB_VAR},                         //!< tInf_MinPvgRotTurretClkwiseNacelPost
    {U16_MIN, U16_MAX},                                     //!< au16Rng_MinPvgRotTurretClkwiseNacelPost[2]
    420,                                                    //!< u16Def_MinPvgRotTurretClkwiseNacelPost
    {0xfff4, 818, TUINT16, DB_VAR},                         //!< tInf_MinPvgRotTurretClkwiseRadioPost
    {U16_MIN, U16_MAX},                                     //!< au16Rng_MinPvgRotTurretClkwiseRadioPost[2]
    420,                                                    //!< u16Def_MinPvgRotTurretClkwiseRadioPost
    {0xfff4, 819, TUINT16, DB_VAR},                         //!< tInf_MaxPvgRotTurretClkwiseTurretPost
    {U16_MIN, U16_MAX},                                     //!< au16Rng_MaxPvgRotTurretClkwiseTurretPost[2]
    380,                                                    //!< u16Def_MaxPvgRotTurretClkwiseTurretPost
    {0xfff4, 820, TUINT16, DB_VAR},                         //!< tInf_MaxPvgRotTurretClkwiseNacelPost
    {U16_MIN, U16_MAX},                                     //!< au16Rng_MaxPvgRotTurretClkwiseNacelPost[2]
    380,                                                    //!< u16Def_MaxPvgRotTurretClkwiseNacelPost
    {0xfff4, 821, TUINT16, DB_VAR},                         //!< tInf_MaxPvgRotTurretClkwiseRadioPost
    {U16_MIN, U16_MAX},                                     //!< au16Rng_MaxPvgRotTurretClkwiseRadioPost[2]
    380,                                                    //!< u16Def_MaxPvgRotTurretClkwiseRadioPost
    {0xfff4, 822, TUINT16, 2},                              //!< tInf_RotTurretClkwiseRampRatioTurret
    {
        { U16_MIN, U16_MAX },                               //!< aau16Rng_RotTurretClkwiseRampRatioTurret[0][2]
        { U16_MIN, U16_MAX }                                //!< aau16Rng_RotTurretClkwiseRampRatioTurret[1][2]
    },
    {100, 100},                                             //!< au16Def_RotTurretClkwiseRampRatioTurret[2]
    {0xfff4, 935, TUINT16, 2},                              //!< tInf_RotTurretClkwiseRampRatioNacelle
    {
        { U16_MIN, U16_MAX },                               //!< aau16Rng_RotTurretClkwiseRampRatioNacelle[0][2]
        { U16_MIN, U16_MAX }                                //!< aau16Rng_RotTurretClkwiseRampRatioNacelle[1][2]
    },
    {100, 100},                                             //!< au16Def_RotTurretClkwiseRampRatioNacelle[2]
    {0xfff4, 936, TUINT16, 2},                              //!< tInf_RotTurretClkwiseRampRatioRadio
    {
        { U16_MIN, U16_MAX },                               //!< aau16Rng_RotTurretClkwiseRampRatioRadio[0][2]
        { U16_MIN, U16_MAX }                                //!< aau16Rng_RotTurretClkwiseRampRatioRadio[1][2]
    },
    {100, 100},                                             //!< au16Def_RotTurretClkwiseRampRatioRadio[2]
    {0xfff4, 823, TUINT16, DB_VAR},                         //!< tInf_MinPvgRotTurretCtClkwiseTurtPost
    {U16_MIN, U16_MAX},                                     //!< au16Rng_MinPvgRotTurretCtClkwiseTurtPost[2]
    420,                                                    //!< u16Def_MinPvgRotTurretCtClkwiseTurtPost
    {0xfff4, 824, TUINT16, DB_VAR},                         //!< tInf_MinPvgRotTurretCtClkwseNacelPost
    {U16_MIN, U16_MAX},                                     //!< au16Rng_MinPvgRotTurretCtClkwseNacelPost[2]
    420,                                                    //!< u16Def_MinPvgRotTurretCtClkwseNacelPost
    {0xfff4, 825, TUINT16, DB_VAR},                         //!< tInf_MinPvgRotTuretCtClkwseRadioPost
    {U16_MIN, U16_MAX},                                     //!< au16Rng_MinPvgRotTuretCtClkwseRadioPost[2]
    420,                                                    //!< u16Def_MinPvgRotTuretCtClkwseRadioPost
    {0xfff4, 826, TUINT16, DB_VAR},                         //!< tInf_MaxPvgRotTurretCtClkwseTuretPost
    {U16_MIN, U16_MAX},                                     //!< au16Rng_MaxPvgRotTurretCtClkwseTuretPost[2]
    380,                                                    //!< u16Def_MaxPvgRotTurretCtClkwseTuretPost
    {0xfff4, 827, TUINT16, DB_VAR},                         //!< tInf_MaxPvgRotTurretCtClkwseNacelPost
    {U16_MIN, U16_MAX},                                     //!< au16Rng_MaxPvgRotTurretCtClkwseNacelPost[2]
    380,                                                    //!< u16Def_MaxPvgRotTurretCtClkwseNacelPost
    {0xfff4, 828, TUINT16, DB_VAR},                         //!< tInf_MaxPvgRotTurretCtClkwseRadioPost
    {U16_MIN, U16_MAX},                                     //!< au16Rng_MaxPvgRotTurretCtClkwseRadioPost[2]
    380,                                                    //!< u16Def_MaxPvgRotTurretCtClkwseRadioPost
    {0xfff4, 829, TUINT16, 2},                              //!< tInf_RotTurretCtClkwiseRampRatioTuret
    {
        { U16_MIN, U16_MAX },                               //!< aau16Rng_RotTurretCtClkwiseRampRatioTuret[0][2]
        { U16_MIN, U16_MAX }                                //!< aau16Rng_RotTurretCtClkwiseRampRatioTuret[1][2]
    },
    {100, 100},                                             //!< au16Def_RotTurretCtClkwiseRampRatioTuret[2]
    {0xfff4, 937, TUINT16, 2},                              //!< tInf_RotTurretCtClkwiseRampRatioNacel
    {
        { U16_MIN, U16_MAX },                               //!< aau16Rng_RotTurretCtClkwiseRampRatioNacel[0][2]
        { U16_MIN, U16_MAX }                                //!< aau16Rng_RotTurretCtClkwiseRampRatioNacel[1][2]
    },
    {100, 100},                                             //!< au16Def_RotTurretCtClkwiseRampRatioNacel[2]
    {0xfff4, 938, TUINT16, 2},                              //!< tInf_RotTurretCtClkwiseRampRatioRadio
    {
        { U16_MIN, U16_MAX },                               //!< aau16Rng_RotTurretCtClkwiseRampRatioRadio[0][2]
        { U16_MIN, U16_MAX }                                //!< aau16Rng_RotTurretCtClkwiseRampRatioRadio[1][2]
    },
    {100, 100},                                             //!< au16Def_RotTurretCtClkwiseRampRatioRadio[2]
    {0xfff4, 830, TUINT8, DB_VAR},                          //!< tInf_MinPvgUpAxleOscillant
    {U8_MIN, U8_MAX},                                       //!< au8Rng_MinPvgUpAxleOscillant[2]
    55,                                                     //!< u8Def_MinPvgUpAxleOscillant
    {0xfff4, 834, TUINT8, DB_VAR},                          //!< tInf_MaxPvgUpAxleOscillant
    {U8_MIN, U8_MAX},                                       //!< au8Rng_MaxPvgUpAxleOscillant[2]
    75,                                                     //!< u8Def_MaxPvgUpAxleOscillant
    {0xfff4, 836, TUINT16, 2},                              //!< tInf_PvgUpAxleOscillantRampRatio
    {
        { U16_MIN, U16_MAX },                               //!< aau16Rng_PvgUpAxleOscillantRampRatio[0][2]
        { U16_MIN, U16_MAX }                                //!< aau16Rng_PvgUpAxleOscillantRampRatio[1][2]
    },
    {100, 100},                                             //!< au16Def_PvgUpAxleOscillantRampRatio[2]
    {0xfff4, 837, TUINT8, DB_VAR},                          //!< tInf_MinPvgDownAxleOscillant
    {U8_MIN, U8_MAX},                                       //!< au8Rng_MinPvgDownAxleOscillant[2]
    55,                                                     //!< u8Def_MinPvgDownAxleOscillant
    {0xfff4, 838, TUINT8, DB_VAR},                          //!< tInf_MaxPvgDownAxleOscillant
    {U8_MIN, U8_MAX},                                       //!< au8Rng_MaxPvgDownAxleOscillant[2]
    75,                                                     //!< u8Def_MaxPvgDownAxleOscillant
    {0xfff4, 839, TUINT16, 2},                              //!< tInf_PvgDownAxleOscillantRampRatio
    {
        { U16_MIN, U16_MAX },                               //!< aau16Rng_PvgDownAxleOscillantRampRatio[0][2]
        { U16_MIN, U16_MAX }                                //!< aau16Rng_PvgDownAxleOscillantRampRatio[1][2]
    },
    {100, 100},                                             //!< au16Def_PvgDownAxleOscillantRampRatio[2]
    {0xfff4, 840, TUINT8, DB_VAR},                          //!< tInf_MinPvgUpAxleFixe
    {U8_MIN, U8_MAX},                                       //!< au8Rng_MinPvgUpAxleFixe[2]
    55,                                                     //!< u8Def_MinPvgUpAxleFixe
    {0xfff4, 841, TUINT8, DB_VAR},                          //!< tInf_MaxPvgUpAxleFixe
    {U8_MIN, U8_MAX},                                       //!< au8Rng_MaxPvgUpAxleFixe[2]
    75,                                                     //!< u8Def_MaxPvgUpAxleFixe
    {0xfff4, 842, TUINT16, 2},                              //!< tInf_PvgUpAxleFixeRampRatio
    {
        { U16_MIN, U16_MAX },                               //!< aau16Rng_PvgUpAxleFixeRampRatio[0][2]
        { U16_MIN, U16_MAX }                                //!< aau16Rng_PvgUpAxleFixeRampRatio[1][2]
    },
    {100, 100},                                             //!< au16Def_PvgUpAxleFixeRampRatio[2]
    {0xfff4, 843, TUINT8, DB_VAR},                          //!< tInf_MinPvgDownAxleFixe
    {U8_MIN, U8_MAX},                                       //!< au8Rng_MinPvgDownAxleFixe[2]
    55,                                                     //!< u8Def_MinPvgDownAxleFixe
    {0xfff4, 844, TUINT8, DB_VAR},                          //!< tInf_MaxPvgDownAxleFixe
    {U8_MIN, U8_MAX},                                       //!< au8Rng_MaxPvgDownAxleFixe[2]
    75,                                                     //!< u8Def_MaxPvgDownAxleFixe
    {0xfff4, 845, TUINT16, 2},                              //!< tInf_PvgDownAxleFixeRampRatio
    {
        { U16_MIN, U16_MAX },                               //!< aau16Rng_PvgDownAxleFixeRampRatio[0][2]
        { U16_MIN, U16_MAX }                                //!< aau16Rng_PvgDownAxleFixeRampRatio[1][2]
    },
    {100, 100},                                             //!< au16Def_PvgDownAxleFixeRampRatio[2]
    {0xfff4, 846, TUINT8, DB_VAR},                          //!< tInf_MinPvgRotFrameCtClkwise
    {U8_MIN, U8_MAX},                                       //!< au8Rng_MinPvgRotFrameCtClkwise[2]
    42,                                                     //!< u8Def_MinPvgRotFrameCtClkwise
    {0xfff4, 851, TUINT8, DB_VAR},                          //!< tInf_MaxPvgRotFrameCtClkwise
    {U8_MIN, U8_MAX},                                       //!< au8Rng_MaxPvgRotFrameCtClkwise[2]
    38,                                                     //!< u8Def_MaxPvgRotFrameCtClkwise
    {0xfff4, 852, TUINT16, 2},                              //!< tInf_RotFrameCtClkwiseRampRatio
    {
        { U16_MIN, U16_MAX },                               //!< aau16Rng_RotFrameCtClkwiseRampRatio[0][2]
        { U16_MIN, U16_MAX }                                //!< aau16Rng_RotFrameCtClkwiseRampRatio[1][2]
    },
    {100, 100},                                             //!< au16Def_RotFrameCtClkwiseRampRatio[2]
    {0xfff4, 853, TUINT8, DB_VAR},                          //!< tInf_MinPvgRotFrameClkwise
    {U8_MIN, U8_MAX},                                       //!< au8Rng_MinPvgRotFrameClkwise[2]
    42,                                                     //!< u8Def_MinPvgRotFrameClkwise
    {0xfff4, 854, TUINT8, DB_VAR},                          //!< tInf_MaxPvgRotFrameClkwise
    {U8_MIN, U8_MAX},                                       //!< au8Rng_MaxPvgRotFrameClkwise[2]
    38,                                                     //!< u8Def_MaxPvgRotFrameClkwise
    {0xfff4, 855, TUINT16, 2},                              //!< tInf_RotFrameClkwiseRampRatio
    {
        { U16_MIN, U16_MAX },                               //!< aau16Rng_RotFrameClkwiseRampRatio[0][2]
        { U16_MIN, U16_MAX }                                //!< aau16Rng_RotFrameClkwiseRampRatio[1][2]
    },
    {100, 100},                                             //!< au16Def_RotFrameClkwiseRampRatio[2]
    {0xfff4, 425, TUINT32, DB_VAR},                         //!< tInf_AntiDemarrageTime
    {U32_MIN, U32_MAX},                                     //!< au32Rng_AntiDemarrageTime[2]
    5000U,                                                  //!< u32Def_AntiDemarrageTime
    {0xfff4, 752, TINT32, DB_VAR},                          //!< tInf_TresholdRmpMotorAntidemarrage
    {I32_MIN, I32_MAX},                                     //!< ai32Rng_TresholdRmpMotorAntidemarrage[2]
    500L,                                                   //!< i32Def_TresholdRmpMotorAntidemarrage
    {0xfff4, 1013, TUINT16, DB_VAR},                        //!< tInf_SlowSpeedUpDeltaArmTelescOut
    {U16_MIN, U16_MAX},                                     //!< au16Rng_SlowSpeedUpDeltaArmTelescOut[2]
    350,                                                    //!< u16Def_SlowSpeedUpDeltaArmTelescOut
    {0xfff4, 1014, TUINT16, DB_VAR},                        //!< tInf_SlowSpeedDownDeltaArmTelescOut
    {U16_MIN, U16_MAX},                                     //!< au16Rng_SlowSpeedDownDeltaArmTelescOut[2]
    650,                                                    //!< u16Def_SlowSpeedDownDeltaArmTelescOut
    {0xfff4, 1015, TUINT16, DB_VAR},                        //!< tInf_SlowSpeedUpArrowArmTelescOut
    {U16_MIN, U16_MAX},                                     //!< au16Rng_SlowSpeedUpArrowArmTelescOut[2]
    350,                                                    //!< u16Def_SlowSpeedUpArrowArmTelescOut
    {0xfff4, 1016, TUINT16, DB_VAR},                        //!< tInf_SlowSpeedDownArrowArmTelescOut
    {U16_MIN, U16_MAX},                                     //!< au16Rng_SlowSpeedDownArrowArmTelescOut[2]
    650,                                                    //!< u16Def_SlowSpeedDownArrowArmTelescOut
    {0xfff4, 1046, TUINT16, DB_VAR},                        //!< tInf_RotTurretClockSlowSpeedRedAlo
    {0, 500},                                               //!< au16Rng_RotTurretClockSlowSpeedRedAlo[2]
    400,                                                    //!< u16Def_RotTurretClockSlowSpeedRedAlo
    {0xfff4, 1047, TUINT16, DB_VAR},                        //!< tInf_RotTurretCtClockSlowSpeedRedAlo
    {0, 500},                                               //!< au16Rng_RotTurretCtClockSlowSpeedRedAlo[2]
    400,                                                    //!< u16Def_RotTurretCtClockSlowSpeedRedAlo
    {0xfff4, 1048, TUINT16, DB_VAR},                        //!< tInf_ArrowArmDownSlowSpeedRedAlo
    {500, 1000},                                            //!< au16Rng_ArrowArmDownSlowSpeedRedAlo[2]
    650,                                                    //!< u16Def_ArrowArmDownSlowSpeedRedAlo
    {0xfff4, 1160, TUINT16, DB_VAR},                        //!< tInf_SlowSpeedRotTurretCtClokTelecOut
    {0, 500},                                               //!< au16Rng_SlowSpeedRotTurretCtClokTelecOut[2]
    400,                                                    //!< u16Def_SlowSpeedRotTurretCtClokTelecOut
    {0xfff4, 1161, TUINT16, DB_VAR},                        //!< tInf_SlowSpeedRotTurretClokTelecOut
    {0, 500},                                               //!< au16Rng_SlowSpeedRotTurretClokTelecOut[2]
    400,                                                    //!< u16Def_SlowSpeedRotTurretClokTelecOut
    {0xfff4, 1165, TUINT16, DB_VAR},                        //!< tInf_MinPvgUpMastMeasure
    {U16_MIN, U16_MAX},                                     //!< au16Rng_MinPvgUpMastMeasure[2]
    450,                                                    //!< u16Def_MinPvgUpMastMeasure
    {0xfff4, 1166, TUINT16, DB_VAR},                        //!< tInf_MaxPvgUpMastMeasure
    {U16_MIN, U16_MAX},                                     //!< au16Rng_MaxPvgUpMastMeasure[2]
    250,                                                    //!< u16Def_MaxPvgUpMastMeasure
    {0xfff4, 1206, TUINT16, 2},                             //!< tInf_UpMastMeasureRampRatio
    {
        { U16_MIN, U16_MAX },                               //!< aau16Rng_UpMastMeasureRampRatio[0][2]
        { U16_MIN, U16_MAX }                                //!< aau16Rng_UpMastMeasureRampRatio[1][2]
    },
    {100, 100},                                             //!< au16Def_UpMastMeasureRampRatio[2]
    {0xfff4, 1207, TUINT16, DB_VAR},                        //!< tInf_MinPvgDownMastMeasure
    {U16_MIN, U16_MAX},                                     //!< au16Rng_MinPvgDownMastMeasure[2]
    450,                                                    //!< u16Def_MinPvgDownMastMeasure
    {0xfff4, 1208, TUINT16, DB_VAR},                        //!< tInf_MaxPvgDownMastMeasure
    {U16_MIN, U16_MAX},                                     //!< au16Rng_MaxPvgDownMastMeasure[2]
    250,                                                    //!< u16Def_MaxPvgDownMastMeasure
    {0xfff4, 1209, TUINT16, 2},                             //!< tInf_DownMastMeasureRampRatio
    {
        { U16_MIN, U16_MAX },                               //!< aau16Rng_DownMastMeasureRampRatio[0][2]
        { U16_MIN, U16_MAX }                                //!< aau16Rng_DownMastMeasureRampRatio[1][2]
    },
    {100, 100},                                             //!< au16Def_DownMastMeasureRampRatio[2]
    {0xfff4, 639, TINT16, DB_VAR},                          //!< tInf_OutCharPosTransmission1Pressure
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_OutCharPosTransmission1Pressure[2]
    2500,                                                   //!< i16Def_OutCharPosTransmission1Pressure
    {0xfff4, 640, TINT16, DB_VAR},                          //!< tInf_OutCharNeuTransmission1Pressure
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_OutCharNeuTransmission1Pressure[2]
    0,                                                      //!< i16Def_OutCharNeuTransmission1Pressure
    {0xfff4, 641, TINT16, DB_VAR},                          //!< tInf_OutCharNegTransmission1Pressure
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_OutCharNegTransmission1Pressure[2]
    0,                                                      //!< i16Def_OutCharNegTransmission1Pressure
    {0xfff4, 1265, TINT16, DB_VAR},                         //!< tInf_InCharPosTransmission1Pressure
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_InCharPosTransmission1Pressure[2]
    20000,                                                  //!< i16Def_InCharPosTransmission1Pressure
    {0xfff4, 1266, TINT16, DB_VAR},                         //!< tInf_InCharNeuTransmission1Pressure
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_InCharNeuTransmission1Pressure[2]
    4000,                                                   //!< i16Def_InCharNeuTransmission1Pressure
    {0xfff4, 1267, TINT16, DB_VAR},                         //!< tInf_INCharNegTransmission1Pressure
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_INCharNegTransmission1Pressure[2]
    4000,                                                   //!< i16Def_INCharNegTransmission1Pressure
    {0xfff4, 1269, TINT16, DB_VAR},                         //!< tInf_OutCharPosTransmission2Pressure
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_OutCharPosTransmission2Pressure[2]
    2500,                                                   //!< i16Def_OutCharPosTransmission2Pressure
    {0xfff4, 1270, TINT16, DB_VAR},                         //!< tInf_OutCharNeuTransmission2Pressure
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_OutCharNeuTransmission2Pressure[2]
    0,                                                      //!< i16Def_OutCharNeuTransmission2Pressure
    {0xfff4, 1271, TINT16, DB_VAR},                         //!< tInf_OutCharNegTransmission2Pressure
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_OutCharNegTransmission2Pressure[2]
    0,                                                      //!< i16Def_OutCharNegTransmission2Pressure
    {0xfff4, 1272, TINT16, DB_VAR},                         //!< tInf_InCharPosTransmission2Pressure
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_InCharPosTransmission2Pressure[2]
    20000,                                                  //!< i16Def_InCharPosTransmission2Pressure
    {0xfff4, 1273, TINT16, DB_VAR},                         //!< tInf_InCharNeuTransmission2Pressure
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_InCharNeuTransmission2Pressure[2]
    4000,                                                   //!< i16Def_InCharNeuTransmission2Pressure
    {0xfff4, 1274, TINT16, DB_VAR},                         //!< tInf_INCharNegTransmission2Pressure
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_INCharNegTransmission2Pressure[2]
    4000,                                                   //!< i16Def_INCharNegTransmission2Pressure
    {0xfff4, 11, TINT16, DB_VAR},                           //!< tInf_OutCharPosBypassPressureSensor
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_OutCharPosBypassPressureSensor[2]
    2500,                                                   //!< i16Def_OutCharPosBypassPressureSensor
    {0xfff4, 13, TINT16, DB_VAR},                           //!< tInf_OutCharNeuBypassPressureSensor
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_OutCharNeuBypassPressureSensor[2]
    0,                                                      //!< i16Def_OutCharNeuBypassPressureSensor
    {0xfff4, 1341, TINT16, DB_VAR},                         //!< tInf_OutCharNegBypassPressureSensor
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_OutCharNegBypassPressureSensor[2]
    0,                                                      //!< i16Def_OutCharNegBypassPressureSensor
    {0xfff4, 1342, TINT16, DB_VAR},                         //!< tInf_InCharPosBypassPressureSensor
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_InCharPosBypassPressureSensor[2]
    20000,                                                  //!< i16Def_InCharPosBypassPressureSensor
    {0xfff4, 1343, TINT16, DB_VAR},                         //!< tInf_InCharNeuBypassPressureSensor
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_InCharNeuBypassPressureSensor[2]
    4000,                                                   //!< i16Def_InCharNeuBypassPressureSensor
    {0xfff4, 1344, TINT16, DB_VAR},                         //!< tInf_InCharNegBypassPressureSensor
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_InCharNegBypassPressureSensor[2]
    4000,                                                   //!< i16Def_InCharNegBypassPressureSensor
    {0xfff4, 1528, TBOOLEAN, DB_VAR},                       //!< tInf_NvParametersC1_1
    {FALSE, TRUE},                                          //!< aboRng_NvParametersC1_1[2]
    0,                                                      //!< boDef_NvParametersC1_1
    {0xfff4, 1529, TBOOLEAN, DB_VAR},                       //!< tInf_NvParametersC1_2
    {FALSE, TRUE},                                          //!< aboRng_NvParametersC1_2[2]
    0,                                                      //!< boDef_NvParametersC1_2
    {0xfff4, 1530, TBOOLEAN, DB_VAR},                       //!< tInf_NvParametersC1_3
    {FALSE, TRUE},                                          //!< aboRng_NvParametersC1_3[2]
    0,                                                      //!< boDef_NvParametersC1_3
    {0xfff4, 1531, TBOOLEAN, DB_VAR},                       //!< tInf_NvParametersC1_4
    {FALSE, TRUE},                                          //!< aboRng_NvParametersC1_4[2]
    0,                                                      //!< boDef_NvParametersC1_4
    {0xfff4, 1532, TBOOLEAN, DB_VAR},                       //!< tInf_NvParametersC1_5
    {FALSE, TRUE},                                          //!< aboRng_NvParametersC1_5[2]
    0,                                                      //!< boDef_NvParametersC1_5
    {0xfff4, 1533, TUINT8, DB_VAR},                         //!< tInf_NvParametersC1_6
    {U8_MIN, U8_MAX},                                       //!< au8Rng_NvParametersC1_6[2]
    0,                                                      //!< u8Def_NvParametersC1_6
    {0xfff4, 1534, TUINT8, DB_VAR},                         //!< tInf_NvParametersC1_7
    {U8_MIN, U8_MAX},                                       //!< au8Rng_NvParametersC1_7[2]
    0,                                                      //!< u8Def_NvParametersC1_7
    {0xfff4, 1535, TUINT8, DB_VAR},                         //!< tInf_NvParametersC1_8
    {U8_MIN, U8_MAX},                                       //!< au8Rng_NvParametersC1_8[2]
    0,                                                      //!< u8Def_NvParametersC1_8
    {0xfff4, 1536, TUINT8, DB_VAR},                         //!< tInf_NvParametersC1_9
    {U8_MIN, U8_MAX},                                       //!< au8Rng_NvParametersC1_9[2]
    0,                                                      //!< u8Def_NvParametersC1_9
    {0xfff4, 1537, TUINT16, DB_VAR},                        //!< tInf_NvParametersC1_10
    {U16_MIN, U16_MAX},                                     //!< au16Rng_NvParametersC1_10[2]
    0,                                                      //!< u16Def_NvParametersC1_10
    {0xfff4, 1538, TUINT16, DB_VAR},                        //!< tInf_NvParametersC1_11
    {U16_MIN, U16_MAX},                                     //!< au16Rng_NvParametersC1_11[2]
    0,                                                      //!< u16Def_NvParametersC1_11
    {0xfff4, 1539, TUINT16, DB_VAR},                        //!< tInf_NvParametersC1_12
    {U16_MIN, U16_MAX},                                     //!< au16Rng_NvParametersC1_12[2]
    0,                                                      //!< u16Def_NvParametersC1_12
    {0xfff4, 1540, TUINT16, DB_VAR},                        //!< tInf_NvParametersC1_13
    {U16_MIN, U16_MAX},                                     //!< au16Rng_NvParametersC1_13[2]
    0,                                                      //!< u16Def_NvParametersC1_13
    {0xfff4, 1541, TINT16, DB_VAR},                         //!< tInf_NvParametersC1_14
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_NvParametersC1_14[2]
    0,                                                      //!< i16Def_NvParametersC1_14
    {0xfff4, 1542, TINT16, DB_VAR},                         //!< tInf_NvParametersC1_15
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_NvParametersC1_15[2]
    0,                                                      //!< i16Def_NvParametersC1_15
    {0xfff4, 1543, TINT16, DB_VAR},                         //!< tInf_NvParametersC1_16
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_NvParametersC1_16[2]
    0,                                                      //!< i16Def_NvParametersC1_16
    {0xfff4, 1544, TINT16, DB_VAR},                         //!< tInf_NvParametersC1_17
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_NvParametersC1_17[2]
    0,                                                      //!< i16Def_NvParametersC1_17
    {0xfff4, 1565, TUINT16, DB_VAR},                        //!< tInf_CurFor220VGeneratorOn
    {U16_MIN, U16_MAX},                                     //!< au16Rng_CurFor220VGeneratorOn[2]
    0,                                                      //!< u16Def_CurFor220VGeneratorOn
    {0xfff4, 1606, TUINT8, DB_VAR},                         //!< tInf_NbElementTransissionPressure
    {U8_MIN, U8_MAX},                                       //!< au8Rng_NbElementTransissionPressure[2]
    1,                                                      //!< u8Def_NbElementTransissionPressure
    {0xfff4, 1608, TUINT16, DB_VAR},                        //!< tInf_RampUpEvGenerator
    {U16_MIN, U16_MAX},                                     //!< au16Rng_RampUpEvGenerator[2]
    0,                                                      //!< u16Def_RampUpEvGenerator
    {0xfff4, 1609, TUINT16, DB_VAR},                        //!< tInf_RampDownEvGenerator
    {U16_MIN, U16_MAX},                                     //!< au16Rng_RampDownEvGenerator[2]
    0,                                                      //!< u16Def_RampDownEvGenerator
    {0xfff4, 1610, TINT16, DB_VAR},                         //!< tInf_GasGaugeAlarm
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_GasGaugeAlarm[2]
    0,                                                      //!< i16Def_GasGaugeAlarm
    {0xfff4, 1748, TUINT16, DB_VAR},                        //!< tInf_CRC_SRDO1
    {U16_MIN, U16_MAX},                                     //!< au16Rng_CRC_SRDO1[2]
    19606,                                                  //!< u16Def_CRC_SRDO1
    {0xfff4, 1766, TUINT16, DB_VAR},                        //!< tInf_CRC_SRDO2
    {U16_MIN, U16_MAX},                                     //!< au16Rng_CRC_SRDO2[2]
    47055,                                                  //!< u16Def_CRC_SRDO2
    {0xfff4, 1768, TUINT16, DB_VAR},                        //!< tInf_CRC_SRDO3
    {U16_MIN, U16_MAX},                                     //!< au16Rng_CRC_SRDO3[2]
    60807,                                                  //!< u16Def_CRC_SRDO3
    {0xfff4, 1769, TUINT16, DB_VAR},                        //!< tInf_CRC_SRDO4
    {U16_MIN, U16_MAX},                                     //!< au16Rng_CRC_SRDO4[2]
    65189,                                                  //!< u16Def_CRC_SRDO4
    {0xfff4, 1770, TUINT16, DB_VAR},                        //!< tInf_CRC_SRDO5
    {U16_MIN, U16_MAX},                                     //!< au16Rng_CRC_SRDO5[2]
    12930,                                                  //!< u16Def_CRC_SRDO5
    {0xfff4, 1771, TUINT16, DB_VAR},                        //!< tInf_CRC_SRDO6
    {U16_MIN, U16_MAX},                                     //!< au16Rng_CRC_SRDO6[2]
    55374,                                                  //!< u16Def_CRC_SRDO6
    {0xfff4, 1772, TUINT16, DB_VAR},                        //!< tInf_CRC_SRDO7
    {U16_MIN, U16_MAX},                                     //!< au16Rng_CRC_SRDO7[2]
    50757,                                                  //!< u16Def_CRC_SRDO7
    {0xfff4, 1773, TUINT16, DB_VAR},                        //!< tInf_CRC_SRDO8
    {U16_MIN, U16_MAX},                                     //!< au16Rng_CRC_SRDO8[2]
    52176,                                                  //!< u16Def_CRC_SRDO8
    {0xfff4, 1774, TUINT16, DB_VAR},                        //!< tInf_CRC_SRDO9
    {U16_MIN, U16_MAX},                                     //!< au16Rng_CRC_SRDO9[2]
    45018,                                                  //!< u16Def_CRC_SRDO9
    {0xfff4, 1775, TUINT16, DB_VAR},                        //!< tInf_CRC_SRDO10
    {U16_MIN, U16_MAX},                                     //!< au16Rng_CRC_SRDO10[2]
    42040,                                                  //!< u16Def_CRC_SRDO10
    {0xfff4, 1767, TUINT32, DB_VAR},                        //!< tInf_TimeoutSdoRequestTime
    {U32_MIN, U32_MAX},                                     //!< au32Rng_TimeoutSdoRequestTime[2]
    200U,                                                   //!< u32Def_TimeoutSdoRequestTime
    {0xfff4, 1828, TBOOLEAN, DB_VAR},                       //!< tInf_ActiveSystemFault
    {FALSE, TRUE},                                          //!< aboRng_ActiveSystemFault[2]
    FALSE,                                                  //!< boDef_ActiveSystemFault
    {0xfff4, 1829, TBOOLEAN, DB_VAR},                       //!< tInf_BypassAlarmActiveC1
    {FALSE, TRUE},                                          //!< aboRng_BypassAlarmActiveC1[2]
    FALSE,                                                  //!< boDef_BypassAlarmActiveC1
    {0xfff4, 1869, TINT16, DB_VAR},                         //!< tInf_OutCharPosOilTankTemp
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_OutCharPosOilTankTemp[2]
    150,                                                    //!< i16Def_OutCharPosOilTankTemp
    {0xfff4, 1870, TINT16, DB_VAR},                         //!< tInf_OutCharNeuOilTankTemp
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_OutCharNeuOilTankTemp[2]
    -50,                                                    //!< i16Def_OutCharNeuOilTankTemp
    {0xfff4, 1871, TINT16, DB_VAR},                         //!< tInf_OutCharNegOilTankTemp
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_OutCharNegOilTankTemp[2]
    -50                                                     //!< i16Def_OutCharNegOilTankTemp
};

const TDbSetNvCalibrationC1 gDb_ctSetNvCalibrationC1=
{
    {0xffff, 440, TUINT16, 4},                              //!< tInf_ArmDeltaRampRatioNacellePost
    {
        { U16_MIN, U16_MAX },                               //!< aau16Rng_ArmDeltaRampRatioNacellePost[0][2]
        { U16_MIN, U16_MAX },                               //!< aau16Rng_ArmDeltaRampRatioNacellePost[1][2]
        { U16_MIN, U16_MAX },                               //!< aau16Rng_ArmDeltaRampRatioNacellePost[2][2]
        { U16_MIN, U16_MAX }                                //!< aau16Rng_ArmDeltaRampRatioNacellePost[3][2]
    },
    {1000, 500, 1000, 500},                                 //!< au16Def_ArmDeltaRampRatioNacellePost[4]
    {0xffff, 414, TUINT16, 4},                              //!< tInf_ArmArrowRampRatioNacellePost
    {
        { U16_MIN, U16_MAX },                               //!< aau16Rng_ArmArrowRampRatioNacellePost[0][2]
        { U16_MIN, U16_MAX },                               //!< aau16Rng_ArmArrowRampRatioNacellePost[1][2]
        { U16_MIN, U16_MAX },                               //!< aau16Rng_ArmArrowRampRatioNacellePost[2][2]
        { U16_MIN, U16_MAX }                                //!< aau16Rng_ArmArrowRampRatioNacellePost[3][2]
    },
    {1000, 500, 1000, 500},                                 //!< au16Def_ArmArrowRampRatioNacellePost[4]
    {0xffff, 415, TUINT16, 4},                              //!< tInf_ArmTelescopeRampRatioNacellePost
    {
        { U16_MIN, U16_MAX },                               //!< aau16Rng_ArmTelescopeRampRatioNacellePost[0][2]
        { U16_MIN, U16_MAX },                               //!< aau16Rng_ArmTelescopeRampRatioNacellePost[1][2]
        { U16_MIN, U16_MAX },                               //!< aau16Rng_ArmTelescopeRampRatioNacellePost[2][2]
        { U16_MIN, U16_MAX }                                //!< aau16Rng_ArmTelescopeRampRatioNacellePost[3][2]
    },
    {1000, 500, 1000, 500},                                 //!< au16Def_ArmTelescopeRampRatioNacellePost[4]
    {0xffff, 270, TUINT16, 2},                              //!< tInf_RotTurretRampRatio
    {
        { U16_MIN, U16_MAX },                               //!< aau16Rng_RotTurretRampRatio[0][2]
        { U16_MIN, U16_MAX }                                //!< aau16Rng_RotTurretRampRatio[1][2]
    },
    {100, 100},                                             //!< au16Def_RotTurretRampRatio[2]
    {0xffff, 422, TUINT16, 4},                              //!< tInf_PvgEvTorRampRatio
    {
        { U16_MIN, U16_MAX },                               //!< aau16Rng_PvgEvTorRampRatio[0][2]
        { U16_MIN, U16_MAX },                               //!< aau16Rng_PvgEvTorRampRatio[1][2]
        { U16_MIN, U16_MAX },                               //!< aau16Rng_PvgEvTorRampRatio[2][2]
        { U16_MIN, U16_MAX }                                //!< aau16Rng_PvgEvTorRampRatio[3][2]
    },
    {100, 100, 100, 100},                                   //!< au16Def_PvgEvTorRampRatio[4]
    {0xffff, 183, TINT16, DB_VAR},                          //!< tInf_AngleEndStopLowDeltaArm
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_AngleEndStopLowDeltaArm[2]
    0,                                                      //!< i16Def_AngleEndStopLowDeltaArm
    {0xffff, 189, TINT16, DB_VAR},                          //!< tInf_AngleCalibEndStopLowDeltaArm
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_AngleCalibEndStopLowDeltaArm[2]
    3000,                                                   //!< i16Def_AngleCalibEndStopLowDeltaArm
    {0xffff, 182, TINT16, DB_VAR},                          //!< tInf_AngleEndStopHighDeltaArm
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_AngleEndStopHighDeltaArm[2]
    1800,                                                   //!< i16Def_AngleEndStopHighDeltaArm
    {0xffff, 184, TINT16, DB_VAR},                          //!< tInf_AngleCalibEndStopHighDeltaArm
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_AngleCalibEndStopHighDeltaArm[2]
    21000,                                                  //!< i16Def_AngleCalibEndStopHighDeltaArm
    {0xffff, 866, TINT16, DB_VAR},                          //!< tInf_AngleEndStopLowArrowArm
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_AngleEndStopLowArrowArm[2]
    0,                                                      //!< i16Def_AngleEndStopLowArrowArm
    {0xffff, 867, TINT16, DB_VAR},                          //!< tInf_AngleCalibEndStopLowArrowArm
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_AngleCalibEndStopLowArrowArm[2]
    3000,                                                   //!< i16Def_AngleCalibEndStopLowArrowArm
    {0xffff, 863, TINT16, DB_VAR},                          //!< tInf_AngleEndStopHighArrowArm
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_AngleEndStopHighArrowArm[2]
    1800,                                                   //!< i16Def_AngleEndStopHighArrowArm
    {0xffff, 864, TINT16, DB_VAR},                          //!< tInf_AngleCalibEndStopHighArrowArm
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_AngleCalibEndStopHighArrowArm[2]
    21000,                                                  //!< i16Def_AngleCalibEndStopHighArrowArm
    {0xffff, 902, TUINT16, DB_VAR},                         //!< tInf_LenghtEndStopLowTelescope1
    {U16_MIN, U16_MAX},                                     //!< au16Rng_LenghtEndStopLowTelescope1[2]
    0,                                                      //!< u16Def_LenghtEndStopLowTelescope1
    {0xffff, 903, TUINT16, DB_VAR},                         //!< tInf_LenghtEndStopHighTelescope1
    {U16_MIN, U16_MAX},                                     //!< au16Rng_LenghtEndStopHighTelescope1[2]
    2250,                                                   //!< u16Def_LenghtEndStopHighTelescope1
    {0xffff, 904, TUINT16, DB_VAR},                         //!< tInf_LenghtCaliEndStopLowTelescope1
    {U16_MIN, U16_MAX},                                     //!< au16Rng_LenghtCaliEndStopLowTelescope1[2]
    0,                                                      //!< u16Def_LenghtCaliEndStopLowTelescope1
    {0xffff, 905, TUINT16, DB_VAR},                         //!< tInf_LenghtCaliEndStopHighTelescope1
    {U16_MIN, U16_MAX},                                     //!< au16Rng_LenghtCaliEndStopHighTelescope1[2]
    2250,                                                   //!< u16Def_LenghtCaliEndStopHighTelescope1
    {0xffff, 909, TUINT16, DB_VAR},                         //!< tInf_LenghtEndStopLowTelescope2
    {U16_MIN, U16_MAX},                                     //!< au16Rng_LenghtEndStopLowTelescope2[2]
    0,                                                      //!< u16Def_LenghtEndStopLowTelescope2
    {0xffff, 910, TUINT16, DB_VAR},                         //!< tInf_LenghtEndStopHighTelescope2
    {U16_MIN, U16_MAX},                                     //!< au16Rng_LenghtEndStopHighTelescope2[2]
    2250,                                                   //!< u16Def_LenghtEndStopHighTelescope2
    {0xffff, 911, TUINT16, DB_VAR},                         //!< tInf_LenghtCaliEndStopLowTelescope2
    {U16_MIN, U16_MAX},                                     //!< au16Rng_LenghtCaliEndStopLowTelescope2[2]
    0,                                                      //!< u16Def_LenghtCaliEndStopLowTelescope2
    {0xffff, 912, TUINT16, DB_VAR},                         //!< tInf_LenghtCaliEndStopHighTelescope2
    {U16_MIN, U16_MAX},                                     //!< au16Rng_LenghtCaliEndStopHighTelescope2[2]
    2250,                                                   //!< u16Def_LenghtCaliEndStopHighTelescope2
    {0xffff, 920, TUINT16, 4},                              //!< tInf_ArmDeltaRampRatioTurretPost
    {
        { U16_MIN, U16_MAX },                               //!< aau16Rng_ArmDeltaRampRatioTurretPost[0][2]
        { U16_MIN, U16_MAX },                               //!< aau16Rng_ArmDeltaRampRatioTurretPost[1][2]
        { U16_MIN, U16_MAX },                               //!< aau16Rng_ArmDeltaRampRatioTurretPost[2][2]
        { U16_MIN, U16_MAX }                                //!< aau16Rng_ArmDeltaRampRatioTurretPost[3][2]
    },
    {1000, 500, 1000, 500},                                 //!< au16Def_ArmDeltaRampRatioTurretPost[4]
    {0xffff, 921, TUINT16, 4},                              //!< tInf_ArmArrowRampRatioTurretPost
    {
        { U16_MIN, U16_MAX },                               //!< aau16Rng_ArmArrowRampRatioTurretPost[0][2]
        { U16_MIN, U16_MAX },                               //!< aau16Rng_ArmArrowRampRatioTurretPost[1][2]
        { U16_MIN, U16_MAX },                               //!< aau16Rng_ArmArrowRampRatioTurretPost[2][2]
        { U16_MIN, U16_MAX }                                //!< aau16Rng_ArmArrowRampRatioTurretPost[3][2]
    },
    {1000, 500, 1000, 500},                                 //!< au16Def_ArmArrowRampRatioTurretPost[4]
    {0xffff, 922, TUINT16, 4},                              //!< tInf_ArmTelescopeRampRatioTurretPost
    {
        { U16_MIN, U16_MAX },                               //!< aau16Rng_ArmTelescopeRampRatioTurretPost[0][2]
        { U16_MIN, U16_MAX },                               //!< aau16Rng_ArmTelescopeRampRatioTurretPost[1][2]
        { U16_MIN, U16_MAX },                               //!< aau16Rng_ArmTelescopeRampRatioTurretPost[2][2]
        { U16_MIN, U16_MAX }                                //!< aau16Rng_ArmTelescopeRampRatioTurretPost[3][2]
    },
    {1000, 500, 1000, 500},                                 //!< au16Def_ArmTelescopeRampRatioTurretPost[4]
    {0xffff, 1611, TINT16, DB_VAR},                         //!< tInf_AngleCalibDeltaArmHyst
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_AngleCalibDeltaArmHyst[2]
    0,                                                      //!< i16Def_AngleCalibDeltaArmHyst
    {0xffff, 1612, TINT16, DB_VAR},                         //!< tInf_AngleCalibArrowArmHyst
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_AngleCalibArrowArmHyst[2]
    0,                                                      //!< i16Def_AngleCalibArrowArmHyst
    {0xffff, 1618, TINT16, DB_VAR},                         //!< tInf_AngleCalibEndStopHighDeltaArmSla
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_AngleCalibEndStopHighDeltaArmSla[2]
    21000,                                                  //!< i16Def_AngleCalibEndStopHighDeltaArmSla
    {0xffff, 1619, TINT16, DB_VAR},                         //!< tInf_AngleCalibEndStopLowDeltaArmSla
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_AngleCalibEndStopLowDeltaArmSla[2]
    3000,                                                   //!< i16Def_AngleCalibEndStopLowDeltaArmSla
    {0xffff, 1620, TINT16, DB_VAR},                         //!< tInf_AngleCalibEndStopHighArrowArmSla
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_AngleCalibEndStopHighArrowArmSla[2]
    21000,                                                  //!< i16Def_AngleCalibEndStopHighArrowArmSla
    {0xffff, 1621, TINT16, DB_VAR},                         //!< tInf_AngleCalibEndStopLowArrowArmSla
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_AngleCalibEndStopLowArrowArmSla[2]
    3000                                                    //!< i16Def_AngleCalibEndStopLowArrowArmSla
};

const TDbSetRam48XsInputsC1 gDb_ctSetRam48XsInputsC1=
{
    {0xffff, 488, TBOOLEAN, DB_VAR},                        //!< tInf_UpInclinaisonBasketButton
    {FALSE, TRUE},                                          //!< aboRng_UpInclinaisonBasketButton[2]
    FALSE,                                                  //!< boDef_UpInclinaisonBasketButton
    {0xffff, 557, TUINT16, DB_VAR},                         //!< tInf_UpInclinaisonBasketButtonValue
    {U16_MIN, U16_MAX},                                     //!< au16Rng_UpInclinaisonBasketButtonValue[2]
    U16_MIN,                                                //!< u16Def_UpInclinaisonBasketButtonValue
    {0xffff, 489, TBOOLEAN, DB_VAR},                        //!< tInf_DownInclinaisonBasketButton
    {FALSE, TRUE},                                          //!< aboRng_DownInclinaisonBasketButton[2]
    FALSE,                                                  //!< boDef_DownInclinaisonBasketButton
    {0xffff, 558, TUINT16, DB_VAR},                         //!< tInf_DownInclinaisonBasketButtonValue
    {U16_MIN, U16_MAX},                                     //!< au16Rng_DownInclinaisonBasketButtonValue[2]
    U16_UNDEF,                                              //!< u16Def_DownInclinaisonBasketButtonValue
    {0xffff, 490, TBOOLEAN, DB_VAR},                        //!< tInf_UpPendularButton
    {FALSE, TRUE},                                          //!< aboRng_UpPendularButton[2]
    FALSE,                                                  //!< boDef_UpPendularButton
    {0xffff, 559, TUINT16, DB_VAR},                         //!< tInf_UpPendularButtonValue
    {U16_MIN, U16_MAX},                                     //!< au16Rng_UpPendularButtonValue[2]
    U16_MIN,                                                //!< u16Def_UpPendularButtonValue
    {0xffff, 491, TBOOLEAN, DB_VAR},                        //!< tInf_DownPendularButton
    {FALSE, TRUE},                                          //!< aboRng_DownPendularButton[2]
    FALSE,                                                  //!< boDef_DownPendularButton
    {0xffff, 560, TUINT16, DB_VAR},                         //!< tInf_DownPendularButtonValue
    {U16_MIN, U16_MAX},                                     //!< au16Rng_DownPendularButtonValue[2]
    U16_MIN,                                                //!< u16Def_DownPendularButtonValue
    {0xffff, 492, TBOOLEAN, DB_VAR},                        //!< tInf_RotationCtClockwiseBasketButton
    {FALSE, TRUE},                                          //!< aboRng_RotationCtClockwiseBasketButton[2]
    FALSE,                                                  //!< boDef_RotationCtClockwiseBasketButton
    {0xffff, 561, TUINT16, DB_VAR},                         //!< tInf_RotCtClockwiseBasketButtonVal
    {U16_MIN, U16_MAX},                                     //!< au16Rng_RotCtClockwiseBasketButtonVal[2]
    U16_MIN,                                                //!< u16Def_RotCtClockwiseBasketButtonVal
    {0xffff, 493, TBOOLEAN, DB_VAR},                        //!< tInf_RotationClockwiseBasketButton
    {FALSE, TRUE},                                          //!< aboRng_RotationClockwiseBasketButton[2]
    FALSE,                                                  //!< boDef_RotationClockwiseBasketButton
    {0xffff, 562, TUINT16, DB_VAR},                         //!< tInf_RotationClockwiseBasketButtonVal
    {U16_MIN, U16_MAX},                                     //!< au16Rng_RotationClockwiseBasketButtonVal[2]
    U16_MIN,                                                //!< u16Def_RotationClockwiseBasketButtonVal
    {0xffff, 477, TBOOLEAN, DB_VAR},                        //!< tInf_Overload1
    {FALSE, TRUE},                                          //!< aboRng_Overload1[2]
    FALSE,                                                  //!< boDef_Overload1
    {0xffff, 563, TUINT16, DB_VAR},                         //!< tInf_Overload1Value
    {U16_MIN, U16_MAX},                                     //!< au16Rng_Overload1Value[2]
    U16_MIN,                                                //!< u16Def_Overload1Value
    {0xffff, 478, TBOOLEAN, DB_VAR},                        //!< tInf_Overload2
    {FALSE, TRUE},                                          //!< aboRng_Overload2[2]
    FALSE,                                                  //!< boDef_Overload2
    {0xffff, 564, TUINT16, DB_VAR},                         //!< tInf_Overload2Value
    {U16_MIN, U16_MAX},                                     //!< au16Rng_Overload2Value[2]
    U16_MIN,                                                //!< u16Def_Overload2Value
    {0xffff, 494, TBOOLEAN, DB_VAR},                        //!< tInf_NacelleBasketRightSideSensor1
    {FALSE, TRUE},                                          //!< aboRng_NacelleBasketRightSideSensor1[2]
    FALSE,                                                  //!< boDef_NacelleBasketRightSideSensor1
    {0xffff, 565, TUINT16, DB_VAR},                         //!< tInf_NacelleBasketRightSideSensor1Val
    {U16_MIN, U16_MAX},                                     //!< au16Rng_NacelleBasketRightSideSensor1Val[2]
    U16_MIN,                                                //!< u16Def_NacelleBasketRightSideSensor1Val
    {0xffff, 495, TBOOLEAN, DB_VAR},                        //!< tInf_NacelleBasketRightSideSensor2
    {FALSE, TRUE},                                          //!< aboRng_NacelleBasketRightSideSensor2[2]
    FALSE,                                                  //!< boDef_NacelleBasketRightSideSensor2
    {0xffff, 566, TUINT16, DB_VAR},                         //!< tInf_NacelleBasketRightSideSensor2Val
    {U16_MIN, U16_MAX},                                     //!< au16Rng_NacelleBasketRightSideSensor2Val[2]
    U16_MIN,                                                //!< u16Def_NacelleBasketRightSideSensor2Val
    {0xffff, 496, TBOOLEAN, DB_VAR},                        //!< tInf_NacelleBasketLeftSideSensor1
    {FALSE, TRUE},                                          //!< aboRng_NacelleBasketLeftSideSensor1[2]
    FALSE,                                                  //!< boDef_NacelleBasketLeftSideSensor1
    {0xffff, 567, TUINT16, DB_VAR},                         //!< tInf_NacelleBasketLeftSideSensor1Val
    {U16_MIN, U16_MAX},                                     //!< au16Rng_NacelleBasketLeftSideSensor1Val[2]
    U16_MIN,                                                //!< u16Def_NacelleBasketLeftSideSensor1Val
    {0xffff, 497, TBOOLEAN, DB_VAR},                        //!< tInf_NacelleBasketLeftSideSensor2
    {FALSE, TRUE},                                          //!< aboRng_NacelleBasketLeftSideSensor2[2]
    FALSE,                                                  //!< boDef_NacelleBasketLeftSideSensor2
    {0xffff, 568, TUINT16, DB_VAR},                         //!< tInf_NacelleBasketLeftSideSensor2Val
    {U16_MIN, U16_MAX},                                     //!< au16Rng_NacelleBasketLeftSideSensor2Val[2]
    U16_MIN,                                                //!< u16Def_NacelleBasketLeftSideSensor2Val
    {0xffff, 498, TBOOLEAN, DB_VAR},                        //!< tInf_LowSectorPendularSensor
    {FALSE, TRUE},                                          //!< aboRng_LowSectorPendularSensor[2]
    FALSE,                                                  //!< boDef_LowSectorPendularSensor
    {0xffff, 569, TUINT16, DB_VAR},                         //!< tInf_LowSectorPendularSensorVal
    {U16_MIN, U16_MAX},                                     //!< au16Rng_LowSectorPendularSensorVal[2]
    U16_MIN,                                                //!< u16Def_LowSectorPendularSensorVal
    {0xffff, 499, TBOOLEAN, DB_VAR},                        //!< tInf_HighSectorPlateSensor
    {FALSE, TRUE},                                          //!< aboRng_HighSectorPlateSensor[2]
    FALSE,                                                  //!< boDef_HighSectorPlateSensor
    {0xffff, 570, TUINT16, DB_VAR},                         //!< tInf_HighSectorPlateSensorVal
    {U16_MIN, U16_MAX},                                     //!< au16Rng_HighSectorPlateSensorVal[2]
    U16_MIN,                                                //!< u16Def_HighSectorPlateSensorVal
    {0xffff, 510, TBOOLEAN, DB_VAR},                        //!< tInf_FoldedLadderSensor
    {FALSE, TRUE},                                          //!< aboRng_FoldedLadderSensor[2]
    FALSE,                                                  //!< boDef_FoldedLadderSensor
    {0xffff, 571, TUINT16, DB_VAR},                         //!< tInf_FoldedLadderSensorVal
    {U16_MIN, U16_MAX},                                     //!< au16Rng_FoldedLadderSensorVal[2]
    U16_MIN,                                                //!< u16Def_FoldedLadderSensorVal
    {0xffff, 511, TUINT16, DB_VAR},                         //!< tInf_SafetyManSystem
    {U16_MIN, U16_MAX},                                     //!< au16Rng_SafetyManSystem[2]
    U16_UNDEF,                                              //!< u16Def_SafetyManSystem
    {0xffff, 512, TUINT16, DB_VAR},                         //!< tInf_DeltaArmAxisJoystick
    {U16_MIN, U16_MAX},                                     //!< au16Rng_DeltaArmAxisJoystick[2]
    U16_UNDEF,                                              //!< u16Def_DeltaArmAxisJoystick
    {0xffff, 513, TUINT16, DB_VAR},                         //!< tInf_ArrowArmAxisJoystick
    {U16_MIN, U16_MAX},                                     //!< au16Rng_ArrowArmAxisJoystick[2]
    U16_UNDEF,                                              //!< u16Def_ArrowArmAxisJoystick
    {0xffff, 514, TUINT16, DB_VAR},                         //!< tInf_TelescopeArmAxisJoysitck
    {U16_MIN, U16_MAX},                                     //!< au16Rng_TelescopeArmAxisJoysitck[2]
    U16_UNDEF,                                              //!< u16Def_TelescopeArmAxisJoysitck
    {0xffff, 515, TUINT16, DB_VAR},                         //!< tInf_RotationTurretAxisJoystick
    {U16_MIN, U16_MAX},                                     //!< au16Rng_RotationTurretAxisJoystick[2]
    U16_UNDEF,                                              //!< u16Def_RotationTurretAxisJoystick
    {0xffff, 516, TUINT16, DB_VAR},                         //!< tInf_AdvanceAxisJoystick
    {U16_MIN, U16_MAX},                                     //!< au16Rng_AdvanceAxisJoystick[2]
    U16_UNDEF,                                              //!< u16Def_AdvanceAxisJoystick
    {0xffff, 572, TBOOLEAN, DB_VAR},                        //!< tInf_RearmementSafetyManSystem
    {FALSE, TRUE},                                          //!< aboRng_RearmementSafetyManSystem[2]
    FALSE,                                                  //!< boDef_RearmementSafetyManSystem
    {0xffff, 479, TUINT16, DB_VAR},                         //!< tInf_RearmementSafetyManSystemVal
    {U16_MIN, U16_MAX},                                     //!< au16Rng_RearmementSafetyManSystemVal[2]
    U8_MIN,                                                 //!< u16Def_RearmementSafetyManSystemVal
    {0xffff, 573, TBOOLEAN, DB_VAR},                        //!< tInf_AbutementNacelleTrackSide
    {FALSE, TRUE},                                          //!< aboRng_AbutementNacelleTrackSide[2]
    FALSE,                                                  //!< boDef_AbutementNacelleTrackSide
    {0xffff, 480, TUINT16, DB_VAR},                         //!< tInf_AbutementNacelleTrackSideVal
    {U16_MIN, U16_MAX},                                     //!< au16Rng_AbutementNacelleTrackSideVal[2]
    U8_MIN,                                                 //!< u16Def_AbutementNacelleTrackSideVal
    {0xffff, 574, TBOOLEAN, DB_VAR},                        //!< tInf_AbutementNacelleCenteredSide
    {FALSE, TRUE},                                          //!< aboRng_AbutementNacelleCenteredSide[2]
    FALSE,                                                  //!< boDef_AbutementNacelleCenteredSide
    {0xffff, 481, TUINT16, DB_VAR},                         //!< tInf_AbutementNacelleCenteredSideVal
    {U16_MIN, U16_MAX},                                     //!< au16Rng_AbutementNacelleCenteredSideVal[2]
    U8_MIN,                                                 //!< u16Def_AbutementNacelleCenteredSideVal
    {0xffff, 501, TBOOLEAN, DB_VAR},                        //!< tInf_DeltaArmJystckCenteredTelescope
    {FALSE, TRUE},                                          //!< aboRng_DeltaArmJystckCenteredTelescope[2]
    FALSE,                                                  //!< boDef_DeltaArmJystckCenteredTelescope
    {0xffff, 502, TBOOLEAN, DB_VAR},                        //!< tInf_ArrowJoystickCenteredTurret
    {FALSE, TRUE},                                          //!< aboRng_ArrowJoystickCenteredTurret[2]
    FALSE,                                                  //!< boDef_ArrowJoystickCenteredTurret
    {0xffff, 503, TBOOLEAN, DB_VAR},                        //!< tInf_CenteredAdvanceJoystick
    {FALSE, TRUE},                                          //!< aboRng_CenteredAdvanceJoystick[2]
    FALSE,                                                  //!< boDef_CenteredAdvanceJoystick
    {0xffff, 500, TBOOLEAN, DB_VAR},                        //!< tInf_DeadManPedal
    {FALSE, TRUE},                                          //!< aboRng_DeadManPedal[2]
    FALSE,                                                  //!< boDef_DeadManPedal
    {0xffff, 504, TBOOLEAN, DB_VAR},                        //!< tInf_PressenceInNacelleSensor1
    {FALSE, TRUE},                                          //!< aboRng_PressenceInNacelleSensor1[2]
    FALSE,                                                  //!< boDef_PressenceInNacelleSensor1
    {0xffff, 482, TBOOLEAN, DB_VAR},                        //!< tInf_PressenceInNacelleSensor2
    {FALSE, TRUE},                                          //!< aboRng_PressenceInNacelleSensor2[2]
    FALSE,                                                  //!< boDef_PressenceInNacelleSensor2
    {0xffff, 505, TBOOLEAN, DB_VAR},                        //!< tInf_Gachette
    {FALSE, TRUE},                                          //!< aboRng_Gachette[2]
    FALSE,                                                  //!< boDef_Gachette
    {0xffff, 506, TBOOLEAN, DB_VAR},                        //!< tInf_Klaxon
    {FALSE, TRUE},                                          //!< aboRng_Klaxon[2]
    FALSE,                                                  //!< boDef_Klaxon
    {0xffff, 507, TBOOLEAN, DB_VAR},                        //!< tInf_StopMotorButton
    {FALSE, TRUE},                                          //!< aboRng_StopMotorButton[2]
    FALSE,                                                  //!< boDef_StopMotorButton
    {0xffff, 508, TBOOLEAN, DB_VAR},                        //!< tInf_AuthorizationWorkKey
    {FALSE, TRUE},                                          //!< aboRng_AuthorizationWorkKey[2]
    FALSE,                                                  //!< boDef_AuthorizationWorkKey
    {0xffff, 483, TBOOLEAN, DB_VAR},                        //!< tInf_EtallonnageJoystickButton
    {FALSE, TRUE},                                          //!< aboRng_EtallonnageJoystickButton[2]
    FALSE,                                                  //!< boDef_EtallonnageJoystickButton
    {0xffff, 509, TBOOLEAN, DB_VAR},                        //!< tInf_ClosePortillonSensor
    {FALSE, TRUE},                                          //!< aboRng_ClosePortillonSensor[2]
    FALSE,                                                  //!< boDef_ClosePortillonSensor
    {0xffff, 577, TUINT8, DB_VAR},                          //!< tInf_Hearbeat48Xs
    {U8_MIN, U8_MAX},                                       //!< au8Rng_Hearbeat48Xs[2]
    U8_MIN,                                                 //!< u8Def_Hearbeat48Xs
    {0xffff, 638, TUINT16, DB_VAR},                         //!< tInf_BatterieVoltage48Xs
    {U16_MIN, U16_MAX},                                     //!< au16Rng_BatterieVoltage48Xs[2]
    U16_UNDEF                                               //!< u16Def_BatterieVoltage48Xs
};

const TDbSetRamRcvRadioCmdC1 gDb_ctSetRamRcvRadioCmdC1=
{
    {0xffff, 291, TBOOLEAN, DB_VAR},                        //!< tInf_RotFrameClkwiseButton
    {FALSE, TRUE},                                          //!< aboRng_RotFrameClkwiseButton[2]
    FALSE,                                                  //!< boDef_RotFrameClkwiseButton
    {0xffff, 292, TBOOLEAN, DB_VAR},                        //!< tInf_RotFrameCtClkwiseButton
    {FALSE, TRUE},                                          //!< aboRng_RotFrameCtClkwiseButton[2]
    FALSE,                                                  //!< boDef_RotFrameCtClkwiseButton
    {0xffff, 293, TBOOLEAN, DB_VAR},                        //!< tInf_UpPendularOrRotTurretCtClock
    {FALSE, TRUE},                                          //!< aboRng_UpPendularOrRotTurretCtClock[2]
    FALSE,                                                  //!< boDef_UpPendularOrRotTurretCtClock
    {0xffff, 303, TBOOLEAN, DB_VAR},                        //!< tInf_DownPendularOrRotTurretClock
    {FALSE, TRUE},                                          //!< aboRng_DownPendularOrRotTurretClock[2]
    FALSE,                                                  //!< boDef_DownPendularOrRotTurretClock
    {0xffff, 304, TBOOLEAN, DB_VAR},                        //!< tInf_SelectorPendular
    {FALSE, TRUE},                                          //!< aboRng_SelectorPendular[2]
    FALSE,                                                  //!< boDef_SelectorPendular
    {0xffff, 305, TBOOLEAN, DB_VAR},                        //!< tInf_SelectorRotTurret
    {FALSE, TRUE},                                          //!< aboRng_SelectorRotTurret[2]
    FALSE,                                                  //!< boDef_SelectorRotTurret
    {0xffff, 545, TBOOLEAN, DB_VAR},                        //!< tInf_UpAxleOscillant
    {FALSE, TRUE},                                          //!< aboRng_UpAxleOscillant[2]
    FALSE,                                                  //!< boDef_UpAxleOscillant
    {0xffff, 546, TBOOLEAN, DB_VAR},                        //!< tInf_DownAxleOscillant
    {FALSE, TRUE},                                          //!< aboRng_DownAxleOscillant[2]
    FALSE,                                                  //!< boDef_DownAxleOscillant
    {0xffff, 547, TBOOLEAN, DB_VAR},                        //!< tInf_UpAxleFixe
    {FALSE, TRUE},                                          //!< aboRng_UpAxleFixe[2]
    FALSE,                                                  //!< boDef_UpAxleFixe
    {0xffff, 633, TBOOLEAN, DB_VAR},                        //!< tInf_DownAxleFixe
    {FALSE, TRUE},                                          //!< aboRng_DownAxleFixe[2]
    FALSE,                                                  //!< boDef_DownAxleFixe
    {0xffff, 1747, TBOOLEAN, DB_VAR},                       //!< tInf_ForcingAdvanceTrack
    {FALSE, TRUE},                                          //!< aboRng_ForcingAdvanceTrack[2]
    FALSE                                                   //!< boDef_ForcingAdvanceTrack
};

const TDbSetRamLimitMoveC1 gDb_ctSetRamLimitMoveC1=
{
    {0xffff, 331, TBOOLEAN, DB_VAR},                        //!< tInf_AutorizeUpDeltaArm
    {FALSE, TRUE},                                          //!< aboRng_AutorizeUpDeltaArm[2]
    TRUE,                                                   //!< boDef_AutorizeUpDeltaArm
    {0xffff, 528, TBOOLEAN, DB_VAR},                        //!< tInf_AutorizeDownDeltaArm
    {FALSE, TRUE},                                          //!< aboRng_AutorizeDownDeltaArm[2]
    TRUE,                                                   //!< boDef_AutorizeDownDeltaArm
    {0xffff, 529, TBOOLEAN, DB_VAR},                        //!< tInf_AutorizeUpArrowArm
    {FALSE, TRUE},                                          //!< aboRng_AutorizeUpArrowArm[2]
    TRUE,                                                   //!< boDef_AutorizeUpArrowArm
    {0xffff, 530, TBOOLEAN, DB_VAR},                        //!< tInf_AutorizeDownArrowArm
    {FALSE, TRUE},                                          //!< aboRng_AutorizeDownArrowArm[2]
    TRUE,                                                   //!< boDef_AutorizeDownArrowArm
    {0xffff, 531, TBOOLEAN, DB_VAR},                        //!< tInf_AutorizeOutTelescopeArm
    {FALSE, TRUE},                                          //!< aboRng_AutorizeOutTelescopeArm[2]
    TRUE,                                                   //!< boDef_AutorizeOutTelescopeArm
    {0xffff, 532, TBOOLEAN, DB_VAR},                        //!< tInf_AutorizeInTelescopeArm
    {FALSE, TRUE},                                          //!< aboRng_AutorizeInTelescopeArm[2]
    TRUE,                                                   //!< boDef_AutorizeInTelescopeArm
    {0xffff, 533, TBOOLEAN, DB_VAR},                        //!< tInf_AutorizeRotBasketClkwise
    {FALSE, TRUE},                                          //!< aboRng_AutorizeRotBasketClkwise[2]
    TRUE,                                                   //!< boDef_AutorizeRotBasketClkwise
    {0xffff, 534, TBOOLEAN, DB_VAR},                        //!< tInf_AutorizeRotBasketCtClkwise
    {FALSE, TRUE},                                          //!< aboRng_AutorizeRotBasketCtClkwise[2]
    TRUE,                                                   //!< boDef_AutorizeRotBasketCtClkwise
    {0xffff, 535, TBOOLEAN, DB_VAR},                        //!< tInf_AutorizeUpInclinaisonBasket
    {FALSE, TRUE},                                          //!< aboRng_AutorizeUpInclinaisonBasket[2]
    TRUE,                                                   //!< boDef_AutorizeUpInclinaisonBasket
    {0xffff, 536, TBOOLEAN, DB_VAR},                        //!< tInf_AutorizeDownInclinaisonBasket
    {FALSE, TRUE},                                          //!< aboRng_AutorizeDownInclinaisonBasket[2]
    TRUE,                                                   //!< boDef_AutorizeDownInclinaisonBasket
    {0xffff, 537, TBOOLEAN, DB_VAR},                        //!< tInf_AutorizeUpPendular
    {FALSE, TRUE},                                          //!< aboRng_AutorizeUpPendular[2]
    TRUE,                                                   //!< boDef_AutorizeUpPendular
    {0xffff, 538, TBOOLEAN, DB_VAR},                        //!< tInf_AutorizeDownPendular
    {FALSE, TRUE},                                          //!< aboRng_AutorizeDownPendular[2]
    TRUE,                                                   //!< boDef_AutorizeDownPendular
    {0xffff, 332, TBOOLEAN, DB_VAR},                        //!< tInf_AutorizeRotTurretClkwise
    {FALSE, TRUE},                                          //!< aboRng_AutorizeRotTurretClkwise[2]
    TRUE,                                                   //!< boDef_AutorizeRotTurretClkwise
    {0xffff, 421, TBOOLEAN, DB_VAR},                        //!< tInf_AutorizeRotTurretCtClkwise
    {FALSE, TRUE},                                          //!< aboRng_AutorizeRotTurretCtClkwise[2]
    TRUE                                                    //!< boDef_AutorizeRotTurretCtClkwise
};

const TDbSetNvParamMotorC1 gDb_ctSetNvParamMotorC1=
{
    {0xfff4, 449, TUINT16, DB_VAR},                         //!< tInf_StartUpCurrentMotor
    {U16_MIN, U16_MAX},                                     //!< au16Rng_StartUpCurrentMotor[2]
    1200,                                                   //!< u16Def_StartUpCurrentMotor
    {0xfff4, 450, TUINT16, DB_VAR},                         //!< tInf_HighForcingCurrentMotor
    {U16_MIN, U16_MAX},                                     //!< au16Rng_HighForcingCurrentMotor[2]
    2400,                                                   //!< u16Def_HighForcingCurrentMotor
    {0xfff4, 451, TUINT16, DB_VAR},                         //!< tInf_LowForcingCurrentMotor
    {U16_MIN, U16_MAX},                                     //!< au16Rng_LowForcingCurrentMotor[2]
    1700,                                                   //!< u16Def_LowForcingCurrentMotor
    {0xfff4, 452, TUINT16, DB_VAR},                         //!< tInf_Threshold3
    {U16_MIN, U16_MAX},                                     //!< au16Rng_Threshold3[2]
    2400,                                                   //!< u16Def_Threshold3
    {0xfff4, 453, TUINT16, DB_VAR},                         //!< tInf_Threshold2
    {U16_MIN, U16_MAX},                                     //!< au16Rng_Threshold2[2]
    1800,                                                   //!< u16Def_Threshold2
    {0xfff4, 454, TUINT16, DB_VAR},                         //!< tInf_Threshold1
    {U16_MIN, U16_MAX},                                     //!< au16Rng_Threshold1[2]
    1200,                                                   //!< u16Def_Threshold1
    {0xfff4, 456, TUINT32, DB_VAR},                         //!< tInf_StartUpTime
    {U32_MIN, U32_MAX},                                     //!< au32Rng_StartUpTime[2]
    5000U,                                                  //!< u32Def_StartUpTime
    {0xfff4, 455, TUINT32, DB_VAR},                         //!< tInf_HighForcingTime
    {U32_MIN, U32_MAX},                                     //!< au32Rng_HighForcingTime[2]
    5000U,                                                  //!< u32Def_HighForcingTime
    {0xfff4, 458, TUINT16, DB_VAR},                         //!< tInf_TranslationCurrentMotor
    {U16_MIN, U16_MAX},                                     //!< au16Rng_TranslationCurrentMotor[2]
    2400,                                                   //!< u16Def_TranslationCurrentMotor
    {0xfff4, 459, TUINT16, DB_VAR},                         //!< tInf_NoMovementCurrentMotor
    {U16_MIN, U16_MAX},                                     //!< au16Rng_NoMovementCurrentMotor[2]
    1800,                                                   //!< u16Def_NoMovementCurrentMotor
    {0xfff4, 1564, TUINT16, DB_VAR},                        //!< tInf_TresholdRegimeForGenerator
    {U16_MIN, U16_MAX},                                     //!< au16Rng_TresholdRegimeForGenerator[2]
    1460,                                                   //!< u16Def_TresholdRegimeForGenerator
    {0xffff, 1841, TUINT16, DB_VAR},                        //!< tInf_EngineIdleSpeedMotor
    {U16_MIN, U16_MAX},                                     //!< au16Rng_EngineIdleSpeedMotor[2]
    1100,                                                   //!< u16Def_EngineIdleSpeedMotor
    {0xffff, 2010, TUINT8, DB_VAR},                         //!< tInf_CptmaxNoMovement
    {U8_MIN, U8_MAX},                                       //!< au8Rng_CptmaxNoMovement[2]
    3                                                       //!< u8Def_CptmaxNoMovement
};

const TDbSetRam48XsOutputsC1 gDb_ctSetRam48XsOutputsC1=
{
    {0xffff, 1569, EERRORSTATUS48XS_TYPE, DB_VAR},          //!< tInf_MotorDefaultLightErrSta
    {GE_IO_E_OK, GE_IO_E_DO_DIAG_NOT_FINISHED},             //!< aeRng_MotorDefaultLightErrSta[2]
    GE_IO_E_UNKNOWN,                                        //!< eDef_MotorDefaultLightErrSta
    {0xffff, 555, TBOOLEAN, DB_VAR},                        //!< tInf_MotorDefaultLight
    {FALSE, TRUE},                                          //!< aboRng_MotorDefaultLight[2]
    FALSE,                                                  //!< boDef_MotorDefaultLight
    {0xffff, 1570, EERRORSTATUS48XS_TYPE, DB_VAR},          //!< tInf_OverloadLightErrSta
    {GE_IO_E_OK, GE_IO_E_DO_DIAG_NOT_FINISHED},             //!< aeRng_OverloadLightErrSta[2]
    GE_IO_E_UNKNOWN,                                        //!< eDef_OverloadLightErrSta
    {0xffff, 556, TBOOLEAN, DB_VAR},                        //!< tInf_OverloadLight
    {FALSE, TRUE},                                          //!< aboRng_OverloadLight[2]
    FALSE,                                                  //!< boDef_OverloadLight
    {0xffff, 1571, EERRORSTATUS48XS_TYPE, DB_VAR},          //!< tInf_BuzzerErrSta
    {GE_IO_E_OK, GE_IO_E_DO_DIAG_NOT_FINISHED},             //!< aeRng_BuzzerErrSta[2]
    GE_IO_E_UNKNOWN,                                        //!< eDef_BuzzerErrSta
    {0xffff, 548, TBOOLEAN, DB_VAR},                        //!< tInf_Buzzer
    {FALSE, TRUE},                                          //!< aboRng_Buzzer[2]
    FALSE,                                                  //!< boDef_Buzzer
    {0xffff, 549, TBOOLEAN, DB_VAR},                        //!< tInf_SupplyDeadManPedalAndJoysticks
    {FALSE, TRUE},                                          //!< aboRng_SupplyDeadManPedalAndJoysticks[2]
    FALSE,                                                  //!< boDef_SupplyDeadManPedalAndJoysticks
    {0xffff, 1717, EERRORSTATUS48XS_TYPE, DB_VAR},          //!< tInf_WarmingLightErrSta
    {GE_IO_E_OK, GE_IO_E_DO_DIAG_NOT_FINISHED},             //!< aeRng_WarmingLightErrSta[2]
    GE_IO_E_UNKNOWN,                                        //!< eDef_WarmingLightErrSta
    {0xffff, 550, TBOOLEAN, DB_VAR},                        //!< tInf_WarmingLight
    {FALSE, TRUE},                                          //!< aboRng_WarmingLight[2]
    FALSE,                                                  //!< boDef_WarmingLight
    {0xffff, 1718, EERRORSTATUS48XS_TYPE, DB_VAR},          //!< tInf_DeversDefaultLightErrSta
    {GE_IO_E_OK, GE_IO_E_DO_DIAG_NOT_FINISHED},             //!< aeRng_DeversDefaultLightErrSta[2]
    GE_IO_E_UNKNOWN,                                        //!< eDef_DeversDefaultLightErrSta
    {0xffff, 551, TBOOLEAN, DB_VAR},                        //!< tInf_DeversDefaultLight
    {FALSE, TRUE},                                          //!< aboRng_DeversDefaultLight[2]
    FALSE,                                                  //!< boDef_DeversDefaultLight
    {0xffff, 1719, EERRORSTATUS48XS_TYPE, DB_VAR},          //!< tInf_GasOilLightErrSta
    {GE_IO_E_OK, GE_IO_E_DO_DIAG_NOT_FINISHED},             //!< aeRng_GasOilLightErrSta[2]
    GE_IO_E_UNKNOWN,                                        //!< eDef_GasOilLightErrSta
    {0xffff, 552, TBOOLEAN, DB_VAR},                        //!< tInf_GasOilLight
    {FALSE, TRUE},                                          //!< aboRng_GasOilLight[2]
    FALSE,                                                  //!< boDef_GasOilLight
    {0xffff, 1720, EERRORSTATUS48XS_TYPE, DB_VAR},          //!< tInf_WhiteLightARGBasketErrSta
    {GE_IO_E_OK, GE_IO_E_DO_DIAG_NOT_FINISHED},             //!< aeRng_WhiteLightARGBasketErrSta[2]
    GE_IO_E_UNKNOWN,                                        //!< eDef_WhiteLightARGBasketErrSta
    {0xffff, 553, TBOOLEAN, DB_VAR},                        //!< tInf_WhiteLightARGBasket
    {FALSE, TRUE},                                          //!< aboRng_WhiteLightARGBasket[2]
    FALSE,                                                  //!< boDef_WhiteLightARGBasket
    {0xffff, 1721, EERRORSTATUS48XS_TYPE, DB_VAR},          //!< tInf_RedLightARGBasketErrSta
    {GE_IO_E_OK, GE_IO_E_DO_DIAG_NOT_FINISHED},             //!< aeRng_RedLightARGBasketErrSta[2]
    GE_IO_E_UNKNOWN,                                        //!< eDef_RedLightARGBasketErrSta
    {0xffff, 554, TBOOLEAN, DB_VAR},                        //!< tInf_RedLightARGBasket
    {FALSE, TRUE},                                          //!< aboRng_RedLightARGBasket[2]
    FALSE,                                                  //!< boDef_RedLightARGBasket
    {0xffff, 1588, EERRORSTATUS48XS_TYPE, DB_VAR},          //!< tInf_RedLightARDBasketErrSta
    {GE_IO_E_OK, GE_IO_E_DO_DIAG_NOT_FINISHED},             //!< aeRng_RedLightARDBasketErrSta[2]
    GE_IO_E_UNKNOWN,                                        //!< eDef_RedLightARDBasketErrSta
    {0xffff, 1589, TBOOLEAN, DB_VAR},                       //!< tInf_RedLightARDBasket
    {FALSE, TRUE},                                          //!< aboRng_RedLightARDBasket[2]
    FALSE,                                                  //!< boDef_RedLightARDBasket
    {0xffff, 1590, EERRORSTATUS48XS_TYPE, DB_VAR},          //!< tInf_WhiteLightARDBasketErrSta
    {GE_IO_E_OK, GE_IO_E_DO_DIAG_NOT_FINISHED},             //!< aeRng_WhiteLightARDBasketErrSta[2]
    GE_IO_E_UNKNOWN,                                        //!< eDef_WhiteLightARDBasketErrSta
    {0xffff, 1591, TBOOLEAN, DB_VAR},                       //!< tInf_WhiteLightARDBasket
    {FALSE, TRUE},                                          //!< aboRng_WhiteLightARDBasket[2]
    FALSE,                                                  //!< boDef_WhiteLightARDBasket
    {0xffff, 1764, EERRORSTATUS48XS_TYPE, DB_VAR},          //!< tInf_WhiteLightAr15746ErrSta
    {GE_IO_E_OK, GE_IO_E_DO_DIAG_NOT_FINISHED},             //!< aeRng_WhiteLightAr15746ErrSta[2]
    GE_IO_E_UNKNOWN,                                        //!< eDef_WhiteLightAr15746ErrSta
    {0xffff, 1765, TBOOLEAN, DB_VAR},                       //!< tInf_WhiteLightAr15746Command
    {FALSE, TRUE},                                          //!< aboRng_WhiteLightAr15746Command[2]
    FALSE                                                   //!< boDef_WhiteLightAr15746Command
};

const TDbSetRamEcuC1RcvFromC0 gDb_ctSetRamEcuC1RcvFromC0=
{
    {0xffff, 109, TBOOLEAN, DB_VAR},                        //!< tInf_RestrictedModeAruActive
    {FALSE, TRUE},                                          //!< aboRng_RestrictedModeAruActive[2]
    FALSE,                                                  //!< boDef_RestrictedModeAruActive
    {0xffff, 112, TBOOLEAN, DB_VAR},                        //!< tInf_TranslationMovementIsSolicited
    {FALSE, TRUE},                                          //!< aboRng_TranslationMovementIsSolicited[2]
    FALSE,                                                  //!< boDef_TranslationMovementIsSolicited
    {0xffff, 203, TBOOLEAN, DB_VAR},                        //!< tInf_AxleMovementIsSolicited
    {FALSE, TRUE},                                          //!< aboRng_AxleMovementIsSolicited[2]
    FALSE,                                                  //!< boDef_AxleMovementIsSolicited
    {0xffff, 526, TBOOLEAN, DB_VAR},                        //!< tInf_DownAxleFixeSensor
    {FALSE, TRUE},                                          //!< aboRng_DownAxleFixeSensor[2]
    FALSE,                                                  //!< boDef_DownAxleFixeSensor
    {0xffff, 527, TBOOLEAN, DB_VAR},                        //!< tInf_DownAxleOscillantSensor
    {FALSE, TRUE},                                          //!< aboRng_DownAxleOscillantSensor[2]
    FALSE,                                                  //!< boDef_DownAxleOscillantSensor
    {0xffff, 908, TUINT16, DB_VAR},                         //!< tInf_SlopeAngle
    {U16_MIN, U16_MAX},                                     //!< au16Rng_SlopeAngle[2]
    U16_UNDEF,                                              //!< u16Def_SlopeAngle
    {0xffff, 1043, TBOOLEAN, DB_VAR},                       //!< tInf_ReduceSpeedRotTurretClockwise
    {FALSE, TRUE},                                          //!< aboRng_ReduceSpeedRotTurretClockwise[2]
    FALSE,                                                  //!< boDef_ReduceSpeedRotTurretClockwise
    {0xffff, 1044, TBOOLEAN, DB_VAR},                       //!< tInf_ReduceSpeedRotTurretCounterClock
    {FALSE, TRUE},                                          //!< aboRng_ReduceSpeedRotTurretCounterClock[2]
    FALSE,                                                  //!< boDef_ReduceSpeedRotTurretCounterClock
    {0xffff, 1045, TBOOLEAN, DB_VAR},                       //!< tInf_ReduceSpeedArrowArmDown
    {FALSE, TRUE},                                          //!< aboRng_ReduceSpeedArrowArmDown[2]
    FALSE,                                                  //!< boDef_ReduceSpeedArrowArmDown
    {0xffff, 1049, TBOOLEAN, DB_VAR},                       //!< tInf_StopRotTurretClockwise
    {FALSE, TRUE},                                          //!< aboRng_StopRotTurretClockwise[2]
    FALSE,                                                  //!< boDef_StopRotTurretClockwise
    {0xffff, 1050, TBOOLEAN, DB_VAR},                       //!< tInf_StopRotTurretCounterClockwise
    {FALSE, TRUE},                                          //!< aboRng_StopRotTurretCounterClockwise[2]
    FALSE,                                                  //!< boDef_StopRotTurretCounterClockwise
    {0xffff, 1051, TBOOLEAN, DB_VAR},                       //!< tInf_StopRotBasketClockwise
    {FALSE, TRUE},                                          //!< aboRng_StopRotBasketClockwise[2]
    FALSE,                                                  //!< boDef_StopRotBasketClockwise
    {0xffff, 1052, TBOOLEAN, DB_VAR},                       //!< tInf_StopRotBasketCounterClockwise
    {FALSE, TRUE},                                          //!< aboRng_StopRotBasketCounterClockwise[2]
    FALSE,                                                  //!< boDef_StopRotBasketCounterClockwise
    {0xffff, 1053, TBOOLEAN, DB_VAR},                       //!< tInf_StopArrowArmDown
    {FALSE, TRUE},                                          //!< aboRng_StopArrowArmDown[2]
    FALSE,                                                  //!< boDef_StopArrowArmDown
    {0xffff, 1054, TBOOLEAN, DB_VAR},                       //!< tInf_StopTelescopeOut
    {FALSE, TRUE},                                          //!< aboRng_StopTelescopeOut[2]
    FALSE,                                                  //!< boDef_StopTelescopeOut
    {0xffff, 1083, TINT16, DB_VAR},                         //!< tInf_EncodeurTurret1Angle
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_EncodeurTurret1Angle[2]
    I16_UNDEF,                                              //!< i16Def_EncodeurTurret1Angle
    {0xffff, 1094, TBOOLEAN, DB_VAR},                       //!< tInf_RedLightARGBasketCmd
    {FALSE, TRUE},                                          //!< aboRng_RedLightARGBasketCmd[2]
    FALSE,                                                  //!< boDef_RedLightARGBasketCmd
    {0xffff, 1095, TBOOLEAN, DB_VAR},                       //!< tInf_WhiteLightARGBasketCmd
    {FALSE, TRUE},                                          //!< aboRng_WhiteLightARGBasketCmd[2]
    FALSE,                                                  //!< boDef_WhiteLightARGBasketCmd
    {0xffff, 1203, TUINT32, DB_VAR},                        //!< tInf_EncodeurMastMeasureRaw
    {U32_MIN, U32_MAX},                                     //!< au32Rng_EncodeurMastMeasureRaw[2]
    U32_UNDEF,                                              //!< u32Def_EncodeurMastMeasureRaw
    {0xffff, 1167, TBOOLEAN, DB_VAR},                       //!< tInf_WrongAbutments
    {FALSE, TRUE},                                          //!< aboRng_WrongAbutments[2]
    FALSE,                                                  //!< boDef_WrongAbutments
    {0xffff, 1212, TINT32, DB_VAR},                         //!< tInf_SpeedVehicleKmhx100
    {I32_MIN, I32_MAX},                                     //!< ai32Rng_SpeedVehicleKmhx100[2]
    0L,                                                     //!< i32Def_SpeedVehicleKmhx100
    {0xffff, 1288, TBOOLEAN, DB_VAR},                       //!< tInf_StopMovementByBrakeTest
    {FALSE, TRUE},                                          //!< aboRng_StopMovementByBrakeTest[2]
    FALSE,                                                  //!< boDef_StopMovementByBrakeTest
    {0xffff, 1289, TBOOLEAN, DB_VAR},                       //!< tInf_StopMovementByBreakInBrake
    {FALSE, TRUE},                                          //!< aboRng_StopMovementByBreakInBrake[2]
    FALSE,                                                  //!< boDef_StopMovementByBreakInBrake
    {0xffff, 913, TBOOLEAN, DB_VAR},                        //!< tInf_EnableBuzzerSelectPost
    {FALSE, TRUE},                                          //!< aboRng_EnableBuzzerSelectPost[2]
    FALSE,                                                  //!< boDef_EnableBuzzerSelectPost
    {0xffff, 1329, ECONTROLPOST_TYPE, DB_VAR},              //!< tInf_SelectedControlPost
    {GE_POST_NO_POST, GE_POST_TURRET},                      //!< aeRng_SelectedControlPost[2]
    GE_POST_NO_POST,                                        //!< eDef_SelectedControlPost
    {0xffff, 660, TBOOLEAN, DB_VAR},                        //!< tInf_CenteredTurretState
    {FALSE, TRUE},                                          //!< aboRng_CenteredTurretState[2]
    FALSE,                                                  //!< boDef_CenteredTurretState
    {0xffff, 1360, TBOOLEAN, DB_VAR},                       //!< tInf_AuthorizeWork
    {FALSE, TRUE},                                          //!< aboRng_AuthorizeWork[2]
    FALSE,                                                  //!< boDef_AuthorizeWork
    {0xffff, 1406, TBOOLEAN, DB_VAR},                       //!< tInf_UpOsciAxlePos
    {FALSE, TRUE},                                          //!< aboRng_UpOsciAxlePos[2]
    FALSE,                                                  //!< boDef_UpOsciAxlePos
    {0xffff, 1407, TBOOLEAN, DB_VAR},                       //!< tInf_UpFixeAxlePos
    {FALSE, TRUE},                                          //!< aboRng_UpFixeAxlePos[2]
    FALSE,                                                  //!< boDef_UpFixeAxlePos
    {0xffff, 1479, ERAILWORKMODE_TYPE, DB_VAR},             //!< tInf_RailWorkMode
    {GE_NO_RAIL_WORK_MODE, GE_MULTILANE_MODE},              //!< aeRng_RailWorkMode[2]
    GE_NO_RAIL_WORK_MODE,                                   //!< eDef_RailWorkMode
    {0xffff, 1567, TUINT16, DB_VAR},                        //!< tInf_EvForwardCommand
    {U16_MIN, U16_MAX},                                     //!< au16Rng_EvForwardCommand[2]
    0,                                                      //!< u16Def_EvForwardCommand
    {0xffff, 1568, TUINT16, DB_VAR},                        //!< tInf_EvBackwardCommand
    {U16_MIN, U16_MAX},                                     //!< au16Rng_EvBackwardCommand[2]
    0,                                                      //!< u16Def_EvBackwardCommand
    {0xffff, 1586, TBOOLEAN, DB_VAR},                       //!< tInf_RedLightARDBasketCmd
    {FALSE, TRUE},                                          //!< aboRng_RedLightARDBasketCmd[2]
    FALSE,                                                  //!< boDef_RedLightARDBasketCmd
    {0xffff, 1587, TBOOLEAN, DB_VAR},                       //!< tInf_WhiteLightARDBasketCmd
    {FALSE, TRUE},                                          //!< aboRng_WhiteLightARDBasketCmd[2]
    FALSE,                                                  //!< boDef_WhiteLightARDBasketCmd
    {0xffff, 1826, TBOOLEAN, DB_VAR},                       //!< tInf_SecondParkBrakeActive
    {FALSE, TRUE},                                          //!< aboRng_SecondParkBrakeActive[2]
    FALSE,                                                  //!< boDef_SecondParkBrakeActive
    {0xffff, 1862, TBOOLEAN, DB_VAR},                       //!< tInf_AutorisationHighSpeedKeyState
    {FALSE, TRUE},                                          //!< aboRng_AutorisationHighSpeedKeyState[2]
    FALSE,                                                  //!< boDef_AutorisationHighSpeedKeyState
    {0xffff, 1906, TBOOLEAN, DB_VAR},                       //!< tInf_TransRailElectricRampOngoing
    {FALSE, TRUE},                                          //!< aboRng_TransRailElectricRampOngoing[2]
    FALSE,                                                  //!< boDef_TransRailElectricRampOngoing
    {0xffff, 1949, TINT16, DB_VAR},                         //!< tInf_RpmPvgTransRail
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_RpmPvgTransRail[2]
    0,                                                      //!< i16Def_RpmPvgTransRail
    {0xffff, 1950, TUINT8, DB_VAR},                         //!< tInf_Batt_Soc
    {U8_MIN, U8_MAX},                                       //!< au8Rng_Batt_Soc[2]
    0,                                                      //!< u8Def_Batt_Soc
    {0xffff, 1972, TINT16, DB_VAR},                         //!< tInf_Ibatt_ist
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_Ibatt_ist[2]
    0,                                                      //!< i16Def_Ibatt_ist
    {0xffff, 2003, TBOOLEAN, DB_VAR},                       //!< tInf_SendAuthorizeReloadBattery
    {FALSE, TRUE},                                          //!< aboRng_SendAuthorizeReloadBattery[2]
    FALSE                                                   //!< boDef_SendAuthorizeReloadBattery
};

const TDbSetRamEcuEvision7C1 gDb_ctSetRamEcuEvision7C1=
{
    {0xffff, 692, TBOOLEAN, DB_VAR},                        //!< tInf_gBattery_On_Off
    {FALSE, TRUE},                                          //!< aboRng_gBattery_On_Off[2]
    FALSE,                                                  //!< boDef_gBattery_On_Off
    {0xffff, 693, TBOOLEAN, DB_VAR},                        //!< tInf_gPreheat_On_Off
    {FALSE, TRUE},                                          //!< aboRng_gPreheat_On_Off[2]
    FALSE,                                                  //!< boDef_gPreheat_On_Off
    {0xffff, 694, TBOOLEAN, DB_VAR},                        //!< tInf_gEngine_Faillure_On_Off
    {FALSE, TRUE},                                          //!< aboRng_gEngine_Faillure_On_Off[2]
    FALSE,                                                  //!< boDef_gEngine_Faillure_On_Off
    {0xffff, 695, TBOOLEAN, DB_VAR},                        //!< tInf_gMaintenance_On_Off
    {FALSE, TRUE},                                          //!< aboRng_gMaintenance_On_Off[2]
    FALSE,                                                  //!< boDef_gMaintenance_On_Off
    {0xffff, 696, TBOOLEAN, DB_VAR},                        //!< tInf_gOil_On_OFF
    {FALSE, TRUE},                                          //!< aboRng_gOil_On_OFF[2]
    FALSE,                                                  //!< boDef_gOil_On_OFF
    {0xffff, 697, TBOOLEAN, DB_VAR},                        //!< tInf_gDeltaArmSectorDown
    {FALSE, TRUE},                                          //!< aboRng_gDeltaArmSectorDown[2]
    FALSE,                                                  //!< boDef_gDeltaArmSectorDown
    {0xffff, 698, TBOOLEAN, DB_VAR},                        //!< tInf_gArrowArmSectorDown
    {FALSE, TRUE},                                          //!< aboRng_gArrowArmSectorDown[2]
    FALSE,                                                  //!< boDef_gArrowArmSectorDown
    {0xffff, 699, TBOOLEAN, DB_VAR},                        //!< tInf_gPendularSectorDown
    {FALSE, TRUE},                                          //!< aboRng_gPendularSectorDown[2]
    FALSE,                                                  //!< boDef_gPendularSectorDown
    {0xffff, 700, TBOOLEAN, DB_VAR},                        //!< tInf_gDeltaArmInCenter
    {FALSE, TRUE},                                          //!< aboRng_gDeltaArmInCenter[2]
    FALSE,                                                  //!< boDef_gDeltaArmInCenter
    {0xffff, 701, TBOOLEAN, DB_VAR},                        //!< tInf_gArrowArmInCenter
    {FALSE, TRUE},                                          //!< aboRng_gArrowArmInCenter[2]
    FALSE,                                                  //!< boDef_gArrowArmInCenter
    {0xffff, 702, TBOOLEAN, DB_VAR},                        //!< tInf_gPendularInCenter
    {FALSE, TRUE},                                          //!< aboRng_gPendularInCenter[2]
    FALSE,                                                  //!< boDef_gPendularInCenter
    {0xffff, 703, TBOOLEAN, DB_VAR},                        //!< tInf_gBasketRotationInCenter
    {FALSE, TRUE},                                          //!< aboRng_gBasketRotationInCenter[2]
    FALSE,                                                  //!< boDef_gBasketRotationInCenter
    {0xffff, 704, TBOOLEAN, DB_VAR},                        //!< tInf_gTelescopeInCenter
    {FALSE, TRUE},                                          //!< aboRng_gTelescopeInCenter[2]
    FALSE,                                                  //!< boDef_gTelescopeInCenter
    {0xffff, 705, TBOOLEAN, DB_VAR},                        //!< tInf_gBasketInclinaisonInCenter
    {FALSE, TRUE},                                          //!< aboRng_gBasketInclinaisonInCenter[2]
    FALSE,                                                  //!< boDef_gBasketInclinaisonInCenter
    {0xffff, 706, TBOOLEAN, DB_VAR},                        //!< tInf_gDeltaArmMoveUpAllow
    {FALSE, TRUE},                                          //!< aboRng_gDeltaArmMoveUpAllow[2]
    FALSE,                                                  //!< boDef_gDeltaArmMoveUpAllow
    {0xffff, 707, TBOOLEAN, DB_VAR},                        //!< tInf_gDeltaArmMoveDownAllow
    {FALSE, TRUE},                                          //!< aboRng_gDeltaArmMoveDownAllow[2]
    FALSE,                                                  //!< boDef_gDeltaArmMoveDownAllow
    {0xffff, 708, TBOOLEAN, DB_VAR},                        //!< tInf_gArrowArmMoveUpAllow
    {FALSE, TRUE},                                          //!< aboRng_gArrowArmMoveUpAllow[2]
    FALSE,                                                  //!< boDef_gArrowArmMoveUpAllow
    {0xffff, 709, TBOOLEAN, DB_VAR},                        //!< tInf_gArrowArmMoveDownAllow
    {FALSE, TRUE},                                          //!< aboRng_gArrowArmMoveDownAllow[2]
    FALSE,                                                  //!< boDef_gArrowArmMoveDownAllow
    {0xffff, 710, TBOOLEAN, DB_VAR},                        //!< tInf_gPendularMoveUpAllow
    {FALSE, TRUE},                                          //!< aboRng_gPendularMoveUpAllow[2]
    FALSE,                                                  //!< boDef_gPendularMoveUpAllow
    {0xffff, 711, TBOOLEAN, DB_VAR},                        //!< tInf_gPendularMoveDownAllow
    {FALSE, TRUE},                                          //!< aboRng_gPendularMoveDownAllow[2]
    FALSE,                                                  //!< boDef_gPendularMoveDownAllow
    {0xffff, 712, TBOOLEAN, DB_VAR},                        //!< tInf_gTelescopeMoveOutAllow
    {FALSE, TRUE},                                          //!< aboRng_gTelescopeMoveOutAllow[2]
    FALSE,                                                  //!< boDef_gTelescopeMoveOutAllow
    {0xffff, 713, TBOOLEAN, DB_VAR},                        //!< tInf_gTelescopeMoveInAllow
    {FALSE, TRUE},                                          //!< aboRng_gTelescopeMoveInAllow[2]
    FALSE,                                                  //!< boDef_gTelescopeMoveInAllow
    {0xffff, 714, TBOOLEAN, DB_VAR},                        //!< tInf_gTurretCtClockWiseMoveAllow
    {FALSE, TRUE},                                          //!< aboRng_gTurretCtClockWiseMoveAllow[2]
    FALSE,                                                  //!< boDef_gTurretCtClockWiseMoveAllow
    {0xffff, 715, TBOOLEAN, DB_VAR},                        //!< tInf_gTurretClockWiseMoveAllow
    {FALSE, TRUE},                                          //!< aboRng_gTurretClockWiseMoveAllow[2]
    FALSE,                                                  //!< boDef_gTurretClockWiseMoveAllow
    {0xffff, 716, TBOOLEAN, DB_VAR},                        //!< tInf_gBasketRotCtClockWiseMoveAllow
    {FALSE, TRUE},                                          //!< aboRng_gBasketRotCtClockWiseMoveAllow[2]
    FALSE,                                                  //!< boDef_gBasketRotCtClockWiseMoveAllow
    {0xffff, 717, TBOOLEAN, DB_VAR},                        //!< tInf_gBasketRotClockWiseMoveAllow
    {FALSE, TRUE},                                          //!< aboRng_gBasketRotClockWiseMoveAllow[2]
    FALSE,                                                  //!< boDef_gBasketRotClockWiseMoveAllow
    {0xffff, 718, TBOOLEAN, DB_VAR},                        //!< tInf_gBasketInclinaisonMoveUpAllow
    {FALSE, TRUE},                                          //!< aboRng_gBasketInclinaisonMoveUpAllow[2]
    FALSE,                                                  //!< boDef_gBasketInclinaisonMoveUpAllow
    {0xffff, 719, TBOOLEAN, DB_VAR},                        //!< tInf_gBasketInclinaisonMoveDownAllow
    {FALSE, TRUE},                                          //!< aboRng_gBasketInclinaisonMoveDownAllow[2]
    FALSE,                                                  //!< boDef_gBasketInclinaisonMoveDownAllow
    {0xffff, 720, TBOOLEAN, DB_VAR},                        //!< tInf_gVehiculeDefault
    {FALSE, TRUE},                                          //!< aboRng_gVehiculeDefault[2]
    FALSE,                                                  //!< boDef_gVehiculeDefault
    {0xffff, 721, TBOOLEAN, DB_VAR},                        //!< tInf_gTelescopeOutputPossible
    {FALSE, TRUE},                                          //!< aboRng_gTelescopeOutputPossible[2]
    FALSE,                                                  //!< boDef_gTelescopeOutputPossible
    {0xffff, 722, TBOOLEAN, DB_VAR},                        //!< tInf_gTelescopeWinderFault
    {FALSE, TRUE},                                          //!< aboRng_gTelescopeWinderFault[2]
    FALSE,                                                  //!< boDef_gTelescopeWinderFault
    {0xffff, 723, TBOOLEAN, DB_VAR},                        //!< tInf_gNacellePostSelector
    {FALSE, TRUE},                                          //!< aboRng_gNacellePostSelector[2]
    FALSE,                                                  //!< boDef_gNacellePostSelector
    {0xffff, 724, TBOOLEAN, DB_VAR},                        //!< tInf_gSTOP_On_Off
    {FALSE, TRUE},                                          //!< aboRng_gSTOP_On_Off[2]
    FALSE,                                                  //!< boDef_gSTOP_On_Off
    {0xffff, 725, TBOOLEAN, DB_VAR},                        //!< tInf_gSafeManSystem
    {FALSE, TRUE},                                          //!< aboRng_gSafeManSystem[2]
    FALSE,                                                  //!< boDef_gSafeManSystem
    {0xffff, 726, TBOOLEAN, DB_VAR},                        //!< tInf_gHighSpeedAllow
    {FALSE, TRUE},                                          //!< aboRng_gHighSpeedAllow[2]
    FALSE,                                                  //!< boDef_gHighSpeedAllow
    {0xffff, 727, TBOOLEAN, DB_VAR},                        //!< tInf_gAutomatiqueStop
    {FALSE, TRUE},                                          //!< aboRng_gAutomatiqueStop[2]
    FALSE,                                                  //!< boDef_gAutomatiqueStop
    {0xffff, 728, TBOOLEAN, DB_VAR},                        //!< tInf_gLowSpeedByFault
    {FALSE, TRUE},                                          //!< aboRng_gLowSpeedByFault[2]
    FALSE,                                                  //!< boDef_gLowSpeedByFault
    {0xffff, 729, TBOOLEAN, DB_VAR},                        //!< tInf_gMeasuringMastFault
    {FALSE, TRUE},                                          //!< aboRng_gMeasuringMastFault[2]
    FALSE,                                                  //!< boDef_gMeasuringMastFault
    {0xffff, 730, TUINT8, DB_VAR},                          //!< tInf_gFuel
    {U8_MIN, U8_MAX},                                       //!< au8Rng_gFuel[2]
    U8_UNDEF,                                               //!< u8Def_gFuel
    {0xffff, 731, TUINT16, DB_VAR},                         //!< tInf_gBattery_Voltage
    {U16_MIN, U16_MAX},                                     //!< au16Rng_gBattery_Voltage[2]
    U16_UNDEF,                                              //!< u16Def_gBattery_Voltage
    {0xffff, 732, TUINT8, DB_VAR},                          //!< tInf_gTrainTransmissionPressure
    {U8_MIN, U8_MAX},                                       //!< au8Rng_gTrainTransmissionPressure[2]
    U8_UNDEF                                                //!< u8Def_gTrainTransmissionPressure
};

const TDbSetRamEvision4C1 gDb_ctSetRamEvision4C1=
{
    {0xffff, 316, TUINT8, DB_VAR},                          //!< tInf_LifeByte
    {U8_MIN, U8_MAX},                                       //!< au8Rng_LifeByte[2]
    U8_UNDEF,                                               //!< u8Def_LifeByte
    {0xffff, 317, TBOOLEAN, DB_VAR},                        //!< tInf_gDelta_Arm_Move_Up
    {FALSE, TRUE},                                          //!< aboRng_gDelta_Arm_Move_Up[2]
    FALSE,                                                  //!< boDef_gDelta_Arm_Move_Up
    {0xffff, 733, TBOOLEAN, DB_VAR},                        //!< tInf_gDelta_Arm_Move_Down
    {FALSE, TRUE},                                          //!< aboRng_gDelta_Arm_Move_Down[2]
    FALSE,                                                  //!< boDef_gDelta_Arm_Move_Down
    {0xffff, 734, TBOOLEAN, DB_VAR},                        //!< tInf_gArrow_Move_Up
    {FALSE, TRUE},                                          //!< aboRng_gArrow_Move_Up[2]
    FALSE,                                                  //!< boDef_gArrow_Move_Up
    {0xffff, 319, TBOOLEAN, DB_VAR},                        //!< tInf_gArrow_Move_Down
    {FALSE, TRUE},                                          //!< aboRng_gArrow_Move_Down[2]
    FALSE,                                                  //!< boDef_gArrow_Move_Down
    {0xffff, 736, TBOOLEAN, DB_VAR},                        //!< tInf_gPendular_Move_Up
    {FALSE, TRUE},                                          //!< aboRng_gPendular_Move_Up[2]
    FALSE,                                                  //!< boDef_gPendular_Move_Up
    {0xffff, 737, TBOOLEAN, DB_VAR},                        //!< tInf_gPendular_Move_Down
    {FALSE, TRUE},                                          //!< aboRng_gPendular_Move_Down[2]
    FALSE,                                                  //!< boDef_gPendular_Move_Down
    {0xffff, 738, TBOOLEAN, DB_VAR},                        //!< tInf_gTelescope_Move_Out
    {FALSE, TRUE},                                          //!< aboRng_gTelescope_Move_Out[2]
    FALSE,                                                  //!< boDef_gTelescope_Move_Out
    {0xffff, 739, TBOOLEAN, DB_VAR},                        //!< tInf_gTelescope_Move_In
    {FALSE, TRUE},                                          //!< aboRng_gTelescope_Move_In[2]
    FALSE,                                                  //!< boDef_gTelescope_Move_In
    {0xffff, 740, TBOOLEAN, DB_VAR},                        //!< tInf_gBasket_Inclinaison_Move_Up
    {FALSE, TRUE},                                          //!< aboRng_gBasket_Inclinaison_Move_Up[2]
    FALSE,                                                  //!< boDef_gBasket_Inclinaison_Move_Up
    {0xffff, 741, TBOOLEAN, DB_VAR},                        //!< tInf_gBasket_Inclinaison_Move_Down
    {FALSE, TRUE},                                          //!< aboRng_gBasket_Inclinaison_Move_Down[2]
    FALSE,                                                  //!< boDef_gBasket_Inclinaison_Move_Down
    {0xffff, 742, TBOOLEAN, DB_VAR},                        //!< tInf_gTurret_Rotate_ClockWise
    {FALSE, TRUE},                                          //!< aboRng_gTurret_Rotate_ClockWise[2]
    FALSE,                                                  //!< boDef_gTurret_Rotate_ClockWise
    {0xffff, 743, TBOOLEAN, DB_VAR},                        //!< tInf_gTurret_Rotate_Counter_ClockWise
    {FALSE, TRUE},                                          //!< aboRng_gTurret_Rotate_Counter_ClockWise[2]
    FALSE,                                                  //!< boDef_gTurret_Rotate_Counter_ClockWise
    {0xffff, 744, TBOOLEAN, DB_VAR},                        //!< tInf_gBasket_Rotate_ClockWise
    {FALSE, TRUE},                                          //!< aboRng_gBasket_Rotate_ClockWise[2]
    FALSE,                                                  //!< boDef_gBasket_Rotate_ClockWise
    {0xffff, 745, TBOOLEAN, DB_VAR},                        //!< tInf_gBasket_Rotate_Counter_ClockWise
    {FALSE, TRUE},                                          //!< aboRng_gBasket_Rotate_Counter_ClockWise[2]
    FALSE,                                                  //!< boDef_gBasket_Rotate_Counter_ClockWise
    {0xffff, 1419, TBOOLEAN, DB_VAR},                       //!< tInf_gKeyRpmSelect
    {FALSE, TRUE},                                          //!< aboRng_gKeyRpmSelect[2]
    FALSE,                                                  //!< boDef_gKeyRpmSelect
    {0xffff, 1431, TBOOLEAN, DB_VAR},                       //!< tInf_gKeyRpmOff
    {FALSE, TRUE},                                          //!< aboRng_gKeyRpmOff[2]
    FALSE,                                                  //!< boDef_gKeyRpmOff
    {0xffff, 1432, TBOOLEAN, DB_VAR},                       //!< tInf_gForcingWhiteRaillight
    {FALSE, TRUE},                                          //!< aboRng_gForcingWhiteRaillight[2]
    FALSE,                                                  //!< boDef_gForcingWhiteRaillight
    {0xffff, 1433, TBOOLEAN, DB_VAR},                       //!< tInf_gForcingNeons
    {FALSE, TRUE},                                          //!< aboRng_gForcingNeons[2]
    FALSE,                                                  //!< boDef_gForcingNeons
    {0xffff, 1434, TBOOLEAN, DB_VAR},                       //!< tInf_gKeyCalibMin
    {FALSE, TRUE},                                          //!< aboRng_gKeyCalibMin[2]
    FALSE,                                                  //!< boDef_gKeyCalibMin
    {0xffff, 1435, TBOOLEAN, DB_VAR},                       //!< tInf_gKeyCalibMax
    {FALSE, TRUE},                                          //!< aboRng_gKeyCalibMax[2]
    FALSE,                                                  //!< boDef_gKeyCalibMax
    {0xffff, 1436, TBOOLEAN, DB_VAR},                       //!< tInf_gKeyCalibValid
    {FALSE, TRUE},                                          //!< aboRng_gKeyCalibValid[2]
    FALSE,                                                  //!< boDef_gKeyCalibValid
    {0xffff, 1437, TUINT8, DB_VAR},                         //!< tInf_gElementChoice
    {U8_MIN, U8_MAX},                                       //!< au8Rng_gElementChoice[2]
    U8_MIN,                                                 //!< u8Def_gElementChoice
    {0xffff, 1430, TBOOLEAN, DB_VAR},                       //!< tInf_gKeyCalibMax2
    {FALSE, TRUE},                                          //!< aboRng_gKeyCalibMax2[2]
    FALSE,                                                  //!< boDef_gKeyCalibMax2
    {0xffff, 1557, TBOOLEAN, DB_VAR},                       //!< tInf_gKeySlopeLgReset
    {FALSE, TRUE},                                          //!< aboRng_gKeySlopeLgReset[2]
    FALSE,                                                  //!< boDef_gKeySlopeLgReset
    {0xffff, 1558, TBOOLEAN, DB_VAR},                       //!< tInf_gKeySlopeTrReset
    {FALSE, TRUE},                                          //!< aboRng_gKeySlopeTrReset[2]
    FALSE,                                                  //!< boDef_gKeySlopeTrReset
    {0xffff, 1613, TUINT8, DB_VAR},                         //!< tInf_ActivePageOpus
    {U8_MIN, U8_MAX},                                       //!< au8Rng_ActivePageOpus[2]
    0,                                                      //!< u8Def_ActivePageOpus
    {0xffff, 1974, TBOOLEAN, DB_VAR},                       //!< tInf_KeyYesReloadWithGenerator
    {FALSE, TRUE},                                          //!< aboRng_KeyYesReloadWithGenerator[2]
    FALSE,                                                  //!< boDef_KeyYesReloadWithGenerator
    {0xffff, 1975, TBOOLEAN, DB_VAR},                       //!< tInf_KeyNoReloadWithGenerator
    {FALSE, TRUE},                                          //!< aboRng_KeyNoReloadWithGenerator[2]
    FALSE                                                   //!< boDef_KeyNoReloadWithGenerator
};

const TDbSetRamEcuCaliCmdC1 gDb_ctSetRamEcuCaliCmdC1=
{
    {0xffff, 403, TBOOLEAN, DB_VAR},                        //!< tInf_CalibAngleEndStopLowDeltaArm
    {FALSE, TRUE},                                          //!< aboRng_CalibAngleEndStopLowDeltaArm[2]
    FALSE,                                                  //!< boDef_CalibAngleEndStopLowDeltaArm
    {0xffff, 265, TBOOLEAN, DB_VAR},                        //!< tInf_CalibAngleEndStopHighDeltaArm
    {FALSE, TRUE},                                          //!< aboRng_CalibAngleEndStopHighDeltaArm[2]
    FALSE,                                                  //!< boDef_CalibAngleEndStopHighDeltaArm
    {0xffff, 196, TBOOLEAN, DB_VAR},                        //!< tInf_CalibAngleEndStopLowArrowArm
    {FALSE, TRUE},                                          //!< aboRng_CalibAngleEndStopLowArrowArm[2]
    FALSE,                                                  //!< boDef_CalibAngleEndStopLowArrowArm
    {0xffff, 404, TBOOLEAN, DB_VAR},                        //!< tInf_CalibAngleEndStopHighArrowArm
    {FALSE, TRUE},                                          //!< aboRng_CalibAngleEndStopHighArrowArm[2]
    FALSE,                                                  //!< boDef_CalibAngleEndStopHighArrowArm
    {0xffff, 190, TBOOLEAN, DB_VAR},                        //!< tInf_SavedCalibrationListC1
    {FALSE, TRUE},                                          //!< aboRng_SavedCalibrationListC1[2]
    FALSE,                                                  //!< boDef_SavedCalibrationListC1
    {0xffff, 906, TBOOLEAN, DB_VAR},                        //!< tInf_CalibLenghtEndStopLowTelescope
    {FALSE, TRUE},                                          //!< aboRng_CalibLenghtEndStopLowTelescope[2]
    FALSE,                                                  //!< boDef_CalibLenghtEndStopLowTelescope
    {0xffff, 907, TBOOLEAN, DB_VAR},                        //!< tInf_CalibLenghtEndStopHighTelescope
    {FALSE, TRUE},                                          //!< aboRng_CalibLenghtEndStopHighTelescope[2]
    FALSE                                                   //!< boDef_CalibLenghtEndStopHighTelescope
};

const TDbSetNvParamLimitWorkEnvelopeC1 gDb_ctSetNvParamLimitWorkEnvelopeC1=
{
    {0xfff4, 761, TUINT16, 9},                              //!< tInf_SlopeTelescModeCurveSlopeAngles
    {
        { 0, 1800 },                                        //!< aau16Rng_SlopeTelescModeCurveSlopeAngles[0][2]
        { 0, 1800 },                                        //!< aau16Rng_SlopeTelescModeCurveSlopeAngles[1][2]
        { 0, 1800 },                                        //!< aau16Rng_SlopeTelescModeCurveSlopeAngles[2][2]
        { 0, 1800 },                                        //!< aau16Rng_SlopeTelescModeCurveSlopeAngles[3][2]
        { 0, 1800 },                                        //!< aau16Rng_SlopeTelescModeCurveSlopeAngles[4][2]
        { 0, 1800 },                                        //!< aau16Rng_SlopeTelescModeCurveSlopeAngles[5][2]
        { 0, 1800 },                                        //!< aau16Rng_SlopeTelescModeCurveSlopeAngles[6][2]
        { 0, 1800 },                                        //!< aau16Rng_SlopeTelescModeCurveSlopeAngles[7][2]
        { 0, 1800 }                                         //!< aau16Rng_SlopeTelescModeCurveSlopeAngles[8][2]
    },
    {0, 10, 20, 30, 40, 50, 60, 70, 
    80},                                                    //!< au16Def_SlopeTelescModeCurveSlopeAngles[9]
    {0xfff4, 762, TUINT16, 9},                              //!< tInf_SlopeTelescModeCurveTelescLenght
    {
        { 0, 2500 },                                        //!< aau16Rng_SlopeTelescModeCurveTelescLenght[0][2]
        { 0, 2500 },                                        //!< aau16Rng_SlopeTelescModeCurveTelescLenght[1][2]
        { 0, 2500 },                                        //!< aau16Rng_SlopeTelescModeCurveTelescLenght[2][2]
        { 0, 2500 },                                        //!< aau16Rng_SlopeTelescModeCurveTelescLenght[3][2]
        { 0, 2500 },                                        //!< aau16Rng_SlopeTelescModeCurveTelescLenght[4][2]
        { 0, 2500 },                                        //!< aau16Rng_SlopeTelescModeCurveTelescLenght[5][2]
        { 0, 2500 },                                        //!< aau16Rng_SlopeTelescModeCurveTelescLenght[6][2]
        { 0, 2500 },                                        //!< aau16Rng_SlopeTelescModeCurveTelescLenght[7][2]
        { 0, 2500 }                                         //!< aau16Rng_SlopeTelescModeCurveTelescLenght[8][2]
    },
    {2250, 2250, 2045, 1645, 1645, 1645, 1645, 1450, 
    1312},                                                  //!< au16Def_SlopeTelescModeCurveTelescLenght[9]
    {0xfff4, 766, TUINT16, DB_VAR},                         //!< tInf_TelescopeLimitCriticZoneThresRel
    {0, 2500},                                              //!< au16Rng_TelescopeLimitCriticZoneThresRel[2]
    100,                                                    //!< u16Def_TelescopeLimitCriticZoneThresRel
    {0xfff4, 767, TINT16, DB_VAR},                          //!< tInf_TelescopeLimitCriticZoneHystRel
    {-2500, 0},                                             //!< ai16Rng_TelescopeLimitCriticZoneHystRel[2]
    -10,                                                    //!< i16Def_TelescopeLimitCriticZoneHystRel
    {0xfff4, 768, TUINT16, DB_VAR},                         //!< tInf_DeltaArmLimitSlopeHighThresAbs
    {0, 18000},                                             //!< au16Rng_DeltaArmLimitSlopeHighThresAbs[2]
    30,                                                     //!< u16Def_DeltaArmLimitSlopeHighThresAbs
    {0xfff4, 831, TINT16, DB_VAR},                          //!< tInf_DeltaArmLimitSlopeHighHystRel
    {-18000, 0},                                            //!< ai16Rng_DeltaArmLimitSlopeHighHystRel[2]
    -5,                                                     //!< i16Def_DeltaArmLimitSlopeHighHystRel
    {0xfff4, 832, TINT16, DB_VAR},                          //!< tInf_DeltaArmLimitUpperZoneThresAbs
    {0, 18000},                                             //!< ai16Rng_DeltaArmLimitUpperZoneThresAbs[2]
    250,                                                    //!< i16Def_DeltaArmLimitUpperZoneThresAbs
    {0xfff4, 833, TINT16, DB_VAR},                          //!< tInf_DeltaArmLimitUpperZoneHystRel
    {-18000, 0},                                            //!< ai16Rng_DeltaArmLimitUpperZoneHystRel[2]
    -10,                                                    //!< i16Def_DeltaArmLimitUpperZoneHystRel
    {0xfff4, 835, TINT16, DB_VAR},                          //!< tInf_DeltaArmLimitSlowZoneThresRel
    {-18000, 0},                                            //!< ai16Rng_DeltaArmLimitSlowZoneThresRel[2]
    -50,                                                    //!< i16Def_DeltaArmLimitSlowZoneThresRel
    {0xfff4, 847, TUINT16, DB_VAR},                         //!< tInf_DeltaArmLimitSlowSpeedReduc
    {0, 1000},                                              //!< au16Rng_DeltaArmLimitSlowSpeedReduc[2]
    800,                                                    //!< u16Def_DeltaArmLimitSlowSpeedReduc
    {0xfff4, 848, TINT16, DB_VAR},                          //!< tInf_DeltaArmLimitCriticZoneThresRel
    {0, 18000},                                             //!< ai16Rng_DeltaArmLimitCriticZoneThresRel[2]
    60,                                                     //!< i16Def_DeltaArmLimitCriticZoneThresRel
    {0xfff4, 849, TINT16, DB_VAR},                          //!< tInf_DeltaArmLimitCriticZoneHystRel
    {-18000, 0},                                            //!< ai16Rng_DeltaArmLimitCriticZoneHystRel[2]
    -10,                                                    //!< i16Def_DeltaArmLimitCriticZoneHystRel
    {0xfff4, 850, TINT16, DB_VAR},                          //!< tInf_ArrowArmLimitLowerZoneThresAbs
    {0, 18000},                                             //!< ai16Rng_ArrowArmLimitLowerZoneThresAbs[2]
    450,                                                    //!< i16Def_ArrowArmLimitLowerZoneThresAbs
    {0xfff4, 865, TINT16, DB_VAR},                          //!< tInf_ArrowArmLimitLowerZoneHystRel
    {0, 18000},                                             //!< ai16Rng_ArrowArmLimitLowerZoneHystRel[2]
    10,                                                     //!< i16Def_ArrowArmLimitLowerZoneHystRel
    {0xfff4, 868, TINT16, DB_VAR},                          //!< tInf_ArrowArmLimitSlowZoneThresRel
    {0, 18000},                                             //!< ai16Rng_ArrowArmLimitSlowZoneThresRel[2]
    800,                                                    //!< i16Def_ArrowArmLimitSlowZoneThresRel
    {0xfff4, 869, TUINT16, DB_VAR},                         //!< tInf_ArrowArmLimitSlowSpeedReduc
    {0, 1000},                                              //!< au16Rng_ArrowArmLimitSlowSpeedReduc[2]
    50,                                                     //!< u16Def_ArrowArmLimitSlowSpeedReduc
    {0xfff4, 870, TINT16, DB_VAR},                          //!< tInf_ArrowArmLimitCriticZoneThresRel
    {-18000, 0},                                            //!< ai16Rng_ArrowArmLimitCriticZoneThresRel[2]
    -60,                                                    //!< i16Def_ArrowArmLimitCriticZoneThresRel
    {0xfff4, 871, TINT16, DB_VAR},                          //!< tInf_ArrowArmLimitCriticZoneHystRel
    {0, 18000},                                             //!< ai16Rng_ArrowArmLimitCriticZoneHystRel[2]
    10,                                                     //!< i16Def_ArrowArmLimitCriticZoneHystRel
    {0xfff4, 1784, TUINT16, 9},                             //!< tInf_ArmTelescModeCurveArmAngles
    {
        { 0, 1800 },                                        //!< aau16Rng_ArmTelescModeCurveArmAngles[0][2]
        { 0, 1800 },                                        //!< aau16Rng_ArmTelescModeCurveArmAngles[1][2]
        { 0, 1800 },                                        //!< aau16Rng_ArmTelescModeCurveArmAngles[2][2]
        { 0, 1800 },                                        //!< aau16Rng_ArmTelescModeCurveArmAngles[3][2]
        { 0, 1800 },                                        //!< aau16Rng_ArmTelescModeCurveArmAngles[4][2]
        { 0, 1800 },                                        //!< aau16Rng_ArmTelescModeCurveArmAngles[5][2]
        { 0, 1800 },                                        //!< aau16Rng_ArmTelescModeCurveArmAngles[6][2]
        { 0, 1800 },                                        //!< aau16Rng_ArmTelescModeCurveArmAngles[7][2]
        { 0, 1800 }                                         //!< aau16Rng_ArmTelescModeCurveArmAngles[8][2]
    },
    {0, 10, 20, 30, 40, 50, 60, 70, 
    80},                                                    //!< au16Def_ArmTelescModeCurveArmAngles[9]
    {0xfff4, 1785, TUINT16, 9},                             //!< tInf_ArmTelescModeCurveTelescLenght
    {
        { 0, 2500 },                                        //!< aau16Rng_ArmTelescModeCurveTelescLenght[0][2]
        { 0, 2500 },                                        //!< aau16Rng_ArmTelescModeCurveTelescLenght[1][2]
        { 0, 2500 },                                        //!< aau16Rng_ArmTelescModeCurveTelescLenght[2][2]
        { 0, 2500 },                                        //!< aau16Rng_ArmTelescModeCurveTelescLenght[3][2]
        { 0, 2500 },                                        //!< aau16Rng_ArmTelescModeCurveTelescLenght[4][2]
        { 0, 2500 },                                        //!< aau16Rng_ArmTelescModeCurveTelescLenght[5][2]
        { 0, 2500 },                                        //!< aau16Rng_ArmTelescModeCurveTelescLenght[6][2]
        { 0, 2500 },                                        //!< aau16Rng_ArmTelescModeCurveTelescLenght[7][2]
        { 0, 2500 }                                         //!< aau16Rng_ArmTelescModeCurveTelescLenght[8][2]
    },
    {2250, 2250, 2045, 1645, 1645, 1645, 1645, 1450, 
    1312},                                                  //!< au16Def_ArmTelescModeCurveTelescLenght[9]
    {0xf554, 1794, TBOOLEAN, DB_VAR},                       //!< tInf_SlopeTelescopeMode
    {FALSE, TRUE},                                          //!< aboRng_SlopeTelescopeMode[2]
    FALSE,                                                  //!< boDef_SlopeTelescopeMode
    {0xffff, 2075, TUINT16, DB_VAR},                        //!< tInf_ArrowArmPerformLowUpperSector
    {U16_MIN, U16_MAX},                                     //!< au16Rng_ArrowArmPerformLowUpperSector[2]
    4500,                                                   //!< u16Def_ArrowArmPerformLowUpperSector
    {0xffff, 2076, TUINT16, DB_VAR},                        //!< tInf_ArrowArmPerformSectorUpperCritic
    {U16_MIN, U16_MAX},                                     //!< au16Rng_ArrowArmPerformSectorUpperCritic[2]
    3500,                                                   //!< u16Def_ArrowArmPerformSectorUpperCritic
    {0xffff, 2077, TUINT16, DB_VAR},                        //!< tInf_ArrowArmPerformSectorHyst
    {U16_MIN, U16_MAX},                                     //!< au16Rng_ArrowArmPerformSectorHyst[2]
    100                                                     //!< u16Def_ArrowArmPerformSectorHyst
};

const TDbSetRamLimitWorkEnvelopeC1 gDb_ctSetRamLimitWorkEnvelopeC1=
{
    {0xffff, 872, TBOOLEAN, DB_VAR},                        //!< tInf_ReduceSpeedDeltaArmUp
    {FALSE, TRUE},                                          //!< aboRng_ReduceSpeedDeltaArmUp[2]
    FALSE,                                                  //!< boDef_ReduceSpeedDeltaArmUp
    {0xffff, 873, TBOOLEAN, DB_VAR},                        //!< tInf_ReduceSpeedArrowArmDown
    {FALSE, TRUE},                                          //!< aboRng_ReduceSpeedArrowArmDown[2]
    FALSE,                                                  //!< boDef_ReduceSpeedArrowArmDown
    {0xffff, 874, TBOOLEAN, DB_VAR},                        //!< tInf_StopTelescopeOut
    {FALSE, TRUE},                                          //!< aboRng_StopTelescopeOut[2]
    FALSE,                                                  //!< boDef_StopTelescopeOut
    {0xffff, 875, TBOOLEAN, DB_VAR},                        //!< tInf_StopDeltaArmUp
    {FALSE, TRUE},                                          //!< aboRng_StopDeltaArmUp[2]
    FALSE,                                                  //!< boDef_StopDeltaArmUp
    {0xffff, 876, TBOOLEAN, DB_VAR},                        //!< tInf_StopArrowArmDown
    {FALSE, TRUE},                                          //!< aboRng_StopArrowArmDown[2]
    FALSE,                                                  //!< boDef_StopArrowArmDown
    {0xffff, 877, TBOOLEAN, DB_VAR},                        //!< tInf_StopAllMovements
    {FALSE, TRUE},                                          //!< aboRng_StopAllMovements[2]
    FALSE,                                                  //!< boDef_StopAllMovements
    {0xffff, 878, TUINT16, DB_VAR},                         //!< tInf_SelectedSlopeAngle
    {U16_MIN, U16_MAX},                                     //!< au16Rng_SelectedSlopeAngle[2]
    0,                                                      //!< u16Def_SelectedSlopeAngle
    {0xffff, 879, TUINT16, DB_VAR},                         //!< tInf_TelescopeLimitStrokeThres
    {U16_MIN, U16_MAX},                                     //!< au16Rng_TelescopeLimitStrokeThres[2]
    0,                                                      //!< u16Def_TelescopeLimitStrokeThres
    {0xffff, 880, TBOOLEAN, DB_VAR},                        //!< tInf_TelescopeInCriticalZone
    {FALSE, TRUE},                                          //!< aboRng_TelescopeInCriticalZone[2]
    FALSE,                                                  //!< boDef_TelescopeInCriticalZone
    {0xffff, 881, TBOOLEAN, DB_VAR},                        //!< tInf_SlopeIsHigh
    {FALSE, TRUE},                                          //!< aboRng_SlopeIsHigh[2]
    FALSE,                                                  //!< boDef_SlopeIsHigh
    {0xffff, 882, TBOOLEAN, DB_VAR},                        //!< tInf_DeltaArmInUpperZone
    {FALSE, TRUE},                                          //!< aboRng_DeltaArmInUpperZone[2]
    FALSE,                                                  //!< boDef_DeltaArmInUpperZone
    {0xffff, 883, TBOOLEAN, DB_VAR},                        //!< tInf_DeltaArmInCriticalZone
    {FALSE, TRUE},                                          //!< aboRng_DeltaArmInCriticalZone[2]
    FALSE,                                                  //!< boDef_DeltaArmInCriticalZone
    {0xffff, 884, TBOOLEAN, DB_VAR},                        //!< tInf_ArrowArmInLowerZone
    {FALSE, TRUE},                                          //!< aboRng_ArrowArmInLowerZone[2]
    FALSE,                                                  //!< boDef_ArrowArmInLowerZone
    {0xffff, 885, TBOOLEAN, DB_VAR},                        //!< tInf_ArrowArmInCriticalZone
    {FALSE, TRUE},                                          //!< aboRng_ArrowArmInCriticalZone[2]
    FALSE,                                                  //!< boDef_ArrowArmInCriticalZone
    {0xffff, 607, TBOOLEAN, DB_VAR},                        //!< tInf_EnableSimuMode
    {FALSE, TRUE},                                          //!< aboRng_EnableSimuMode[2]
    FALSE,                                                  //!< boDef_EnableSimuMode
    {0xffff, 886, TINT16, DB_VAR},                          //!< tInf_SimuSlopeAngleLong
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_SimuSlopeAngleLong[2]
    0,                                                      //!< i16Def_SimuSlopeAngleLong
    {0xffff, 887, TINT16, DB_VAR},                          //!< tInf_SimuSlopeAngleTrans
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_SimuSlopeAngleTrans[2]
    0,                                                      //!< i16Def_SimuSlopeAngleTrans
    {0xffff, 888, TUINT16, DB_VAR},                         //!< tInf_SimuTelescopePositionSensor
    {U16_MIN, U16_MAX},                                     //!< au16Rng_SimuTelescopePositionSensor[2]
    0,                                                      //!< u16Def_SimuTelescopePositionSensor
    {0xffff, 889, TINT16, DB_VAR},                          //!< tInf_SimuDeltaArmAngularSensor
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_SimuDeltaArmAngularSensor[2]
    0,                                                      //!< i16Def_SimuDeltaArmAngularSensor
    {0xffff, 890, TINT16, DB_VAR},                          //!< tInf_SimuArrowArmAngularSensor
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_SimuArrowArmAngularSensor[2]
    0                                                       //!< i16Def_SimuArrowArmAngularSensor
};

const TDbSetRamTelescopeCanC1 gDb_ctSetRamTelescopeCanC1=
{
    {0xffff, 587, TUINT8, DB_VAR},                          //!< tInf_StateHeartBeatTelescopeSensor
    {U8_MIN, U8_MAX},                                       //!< au8Rng_StateHeartBeatTelescopeSensor[2]
    U8_UNDEF,                                               //!< u8Def_StateHeartBeatTelescopeSensor
    {0xffff, 896, TUINT16, DB_VAR},                         //!< tInf_LenghtTelescope1
    {U16_MIN, U16_MAX},                                     //!< au16Rng_LenghtTelescope1[2]
    U16_UNDEF,                                              //!< u16Def_LenghtTelescope1
    {0xffff, 897, TUINT8, DB_VAR},                          //!< tInf_ErrorRetractorTelescope1
    {U8_MIN, U8_MAX},                                       //!< au8Rng_ErrorRetractorTelescope1[2]
    U8_UNDEF,                                               //!< u8Def_ErrorRetractorTelescope1
    {0xffff, 898, TUINT16, DB_VAR},                         //!< tInf_RetractorTelescopeVal1
    {U16_MIN, U16_MAX},                                     //!< au16Rng_RetractorTelescopeVal1[2]
    U16_UNDEF,                                              //!< u16Def_RetractorTelescopeVal1
    {0xffff, 899, TUINT16, DB_VAR},                         //!< tInf_LenghtTelescope2
    {U16_MIN, U16_MAX},                                     //!< au16Rng_LenghtTelescope2[2]
    U16_UNDEF,                                              //!< u16Def_LenghtTelescope2
    {0xffff, 900, TUINT8, DB_VAR},                          //!< tInf_ErrorRetractorTelescope2
    {U8_MIN, U8_MAX},                                       //!< au8Rng_ErrorRetractorTelescope2[2]
    U8_UNDEF,                                               //!< u8Def_ErrorRetractorTelescope2
    {0xffff, 901, TUINT16, DB_VAR},                         //!< tInf_RetractorTelescopeVal2
    {U16_MIN, U16_MAX},                                     //!< au16Rng_RetractorTelescopeVal2[2]
    U16_UNDEF                                               //!< u16Def_RetractorTelescopeVal2
};

const TDbSetRamMvtEndStopC1 gDb_ctSetRamMvtEndStopC1=
{
    {0xffff, 1055, TBOOLEAN, DB_VAR},                       //!< tInf_ReduceSpeedRotTurretClockwise
    {FALSE, TRUE},                                          //!< aboRng_ReduceSpeedRotTurretClockwise[2]
    FALSE,                                                  //!< boDef_ReduceSpeedRotTurretClockwise
    {0xffff, 1057, TBOOLEAN, DB_VAR},                       //!< tInf_StopRotTurretClockwise
    {FALSE, TRUE},                                          //!< aboRng_StopRotTurretClockwise[2]
    FALSE,                                                  //!< boDef_StopRotTurretClockwise
    {0xffff, 1058, TBOOLEAN, DB_VAR},                       //!< tInf_ReduceSpeedRotTurretCounterClock
    {FALSE, TRUE},                                          //!< aboRng_ReduceSpeedRotTurretCounterClock[2]
    FALSE,                                                  //!< boDef_ReduceSpeedRotTurretCounterClock
    {0xffff, 1059, TBOOLEAN, DB_VAR},                       //!< tInf_StopRotTurretCounterClockwise
    {FALSE, TRUE},                                          //!< aboRng_StopRotTurretCounterClockwise[2]
    FALSE,                                                  //!< boDef_StopRotTurretCounterClockwise
    {0xffff, 1060, TBOOLEAN, DB_VAR},                       //!< tInf_ReduceSpeedDeltaArmDown
    {FALSE, TRUE},                                          //!< aboRng_ReduceSpeedDeltaArmDown[2]
    FALSE,                                                  //!< boDef_ReduceSpeedDeltaArmDown
    {0xffff, 1061, TBOOLEAN, DB_VAR},                       //!< tInf_FoldedDeltaArm
    {FALSE, TRUE},                                          //!< aboRng_FoldedDeltaArm[2]
    FALSE,                                                  //!< boDef_FoldedDeltaArm
    {0xffff, 1062, TBOOLEAN, DB_VAR},                       //!< tInf_ReduceSpeedDeltaArmUp
    {FALSE, TRUE},                                          //!< aboRng_ReduceSpeedDeltaArmUp[2]
    FALSE,                                                  //!< boDef_ReduceSpeedDeltaArmUp
    {0xffff, 1064, TINT16, DB_VAR},                         //!< tInf_TestTurretPosition
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_TestTurretPosition[2]
    0,                                                      //!< i16Def_TestTurretPosition
    {0xffff, 1065, TINT16, DB_VAR},                         //!< tInf_TestDeltaArmPosition
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_TestDeltaArmPosition[2]
    0,                                                      //!< i16Def_TestDeltaArmPosition
    {0xffff, 1085, TBOOLEAN, DB_VAR},                       //!< tInf_FoldedArrowArm
    {FALSE, TRUE},                                          //!< aboRng_FoldedArrowArm[2]
    FALSE,                                                  //!< boDef_FoldedArrowArm
    {0xffff, 1856, TBOOLEAN, DB_VAR},                       //!< tInf_ReduceSpeedArrowArmUp
    {FALSE, TRUE},                                          //!< aboRng_ReduceSpeedArrowArmUp[2]
    FALSE,                                                  //!< boDef_ReduceSpeedArrowArmUp
    {0xffff, 1857, TBOOLEAN, DB_VAR},                       //!< tInf_ReduceSpeedArrowArmDown
    {FALSE, TRUE},                                          //!< aboRng_ReduceSpeedArrowArmDown[2]
    FALSE,                                                  //!< boDef_ReduceSpeedArrowArmDown
    {0xffff, 1858, TBOOLEAN, DB_VAR},                       //!< tInf_ReduceSpeedTelescopFolded
    {FALSE, TRUE},                                          //!< aboRng_ReduceSpeedTelescopFolded[2]
    FALSE,                                                  //!< boDef_ReduceSpeedTelescopFolded
    {0xffff, 2073, TBOOLEAN, DB_VAR},                       //!< tInf_ReduceSpeedTelescopeUp
    {FALSE, TRUE},                                          //!< aboRng_ReduceSpeedTelescopeUp[2]
    FALSE,                                                  //!< boDef_ReduceSpeedTelescopeUp
    {0xffff, 2074, TBOOLEAN, DB_VAR},                       //!< tInf_ReduceSpeedTelescopeDown
    {FALSE, TRUE},                                          //!< aboRng_ReduceSpeedTelescopeDown[2]
    FALSE,                                                  //!< boDef_ReduceSpeedTelescopeDown
    {0xffff, 2069, TBOOLEAN, DB_VAR},                       //!< tInf_PerformFoldedTelescopeStop
    {FALSE, TRUE},                                          //!< aboRng_PerformFoldedTelescopeStop[2]
    FALSE,                                                  //!< boDef_PerformFoldedTelescopeStop
    {0xffff, 2070, TBOOLEAN, DB_VAR},                       //!< tInf_PerformAutoriseTransSlopeArrow
    {FALSE, TRUE},                                          //!< aboRng_PerformAutoriseTransSlopeArrow[2]
    FALSE,                                                  //!< boDef_PerformAutoriseTransSlopeArrow
    {0xffff, 2071, TBOOLEAN, DB_VAR},                       //!< tInf_ValidSectorTelescope
    {FALSE, TRUE},                                          //!< aboRng_ValidSectorTelescope[2]
    FALSE,                                                  //!< boDef_ValidSectorTelescope
    {0xffff, 2072, TBOOLEAN, DB_VAR},                       //!< tInf_ValidFirstSectorTelescope
    {FALSE, TRUE},                                          //!< aboRng_ValidFirstSectorTelescope[2]
    FALSE                                                   //!< boDef_ValidFirstSectorTelescope
};

const TDbSetNvParamMvtEndStopC1 gDb_ctSetNvParamMvtEndStopC1=
{
    {0xfff4, 1066, TINT16, DB_VAR},                         //!< tInf_TurretNegEndStopThres
    {-3000, 0},                                             //!< ai16Rng_TurretNegEndStopThres[2]
    -1900,                                                  //!< i16Def_TurretNegEndStopThres
    {0xfff4, 1067, TINT16, DB_VAR},                         //!< tInf_TurretNegEndStopHyst
    {0, 900},                                               //!< ai16Rng_TurretNegEndStopHyst[2]
    10,                                                     //!< i16Def_TurretNegEndStopHyst
    {0xfff4, 1068, TINT16, DB_VAR},                         //!< tInf_TurretNegEndStopSlowThres
    {0, 900},                                               //!< ai16Rng_TurretNegEndStopSlowThres[2]
    50,                                                     //!< i16Def_TurretNegEndStopSlowThres
    {0xfff4, 1069, TINT16, DB_VAR},                         //!< tInf_TurretPosEndStopThres
    {0, 3000},                                              //!< ai16Rng_TurretPosEndStopThres[2]
    1900,                                                   //!< i16Def_TurretPosEndStopThres
    {0xfff4, 1070, TINT16, DB_VAR},                         //!< tInf_TurretPosEndStopHyst
    {-900, 0},                                              //!< ai16Rng_TurretPosEndStopHyst[2]
    -10,                                                    //!< i16Def_TurretPosEndStopHyst
    {0xfff4, 1071, TINT16, DB_VAR},                         //!< tInf_TurretPosEndStopSlowThres
    {-900, 0},                                              //!< ai16Rng_TurretPosEndStopSlowThres[2]
    -50,                                                    //!< i16Def_TurretPosEndStopSlowThres
    {0xfff4, 1072, TINT16, DB_VAR},                         //!< tInf_FoldedDeltaArmThres
    {-18000, 18000},                                        //!< ai16Rng_FoldedDeltaArmThres[2]
    100,                                                    //!< i16Def_FoldedDeltaArmThres
    {0xfff4, 1073, TINT16, DB_VAR},                         //!< tInf_FoldedDeltaArmHyst
    {0, 9000},                                              //!< ai16Rng_FoldedDeltaArmHyst[2]
    100,                                                    //!< i16Def_FoldedDeltaArmHyst
    {0xfff4, 1074, TINT16, DB_VAR},                         //!< tInf_DeltaArmBottomEndStopSlowThres
    {0, 10000},                                             //!< ai16Rng_DeltaArmBottomEndStopSlowThres[2]
    500,                                                    //!< i16Def_DeltaArmBottomEndStopSlowThres
    {0xfff4, 1075, TINT16, DB_VAR},                         //!< tInf_DeltaArmTopEndStopThres
    {-18000, 18000},                                        //!< ai16Rng_DeltaArmTopEndStopThres[2]
    8000,                                                   //!< i16Def_DeltaArmTopEndStopThres
    {0xfff4, 1076, TINT16, DB_VAR},                         //!< tInf_DeltaArmTopEndStopHyst
    {-9000, 0},                                             //!< ai16Rng_DeltaArmTopEndStopHyst[2]
    -100,                                                   //!< i16Def_DeltaArmTopEndStopHyst
    {0xfff4, 1077, TINT16, DB_VAR},                         //!< tInf_DeltaArmTopEndStopSlowThres
    {-9000, 0},                                             //!< ai16Rng_DeltaArmTopEndStopSlowThres[2]
    -500,                                                   //!< i16Def_DeltaArmTopEndStopSlowThres
    {0xfff4, 1063, TINT16, DB_VAR},                         //!< tInf_FoldedArrowArmThres
    {-18000, 18000},                                        //!< ai16Rng_FoldedArrowArmThres[2]
    100,                                                    //!< i16Def_FoldedArrowArmThres
    {0xfff4, 1084, TINT16, DB_VAR},                         //!< tInf_FoldedArrowArmHyst
    {0, 9000},                                              //!< ai16Rng_FoldedArrowArmHyst[2]
    100,                                                    //!< i16Def_FoldedArrowArmHyst
    {0xfff4, 1213, TUINT16, DB_VAR},                        //!< tInf_DeltaArmSlowMvtEndStop
    {500, 750},                                             //!< au16Rng_DeltaArmSlowMvtEndStop[2]
    600,                                                    //!< u16Def_DeltaArmSlowMvtEndStop
    {0xffff, 1846, TINT16, DB_VAR},                         //!< tInf_ArrowArmTopEndStopSlowThres
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_ArrowArmTopEndStopSlowThres[2]
    500,                                                    //!< i16Def_ArrowArmTopEndStopSlowThres
    {0xffff, 1847, TINT16, DB_VAR},                         //!< tInf_ArrowArmBottomEndStopSlowThres
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_ArrowArmBottomEndStopSlowThres[2]
    300,                                                    //!< i16Def_ArrowArmBottomEndStopSlowThres
    {0xffff, 1848, TINT16, DB_VAR},                         //!< tInf_ArrowArmTopEndStopThres
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_ArrowArmTopEndStopThres[2]
    7800,                                                   //!< i16Def_ArrowArmTopEndStopThres
    {0xffff, 1849, TUINT16, DB_VAR},                        //!< tInf_ArrowArmSlowMvtDownEndStop
    {U16_MIN, U16_MAX},                                     //!< au16Rng_ArrowArmSlowMvtDownEndStop[2]
    650,                                                    //!< u16Def_ArrowArmSlowMvtDownEndStop
    {0xffff, 1850, TUINT16, DB_VAR},                        //!< tInf_ArrowArmSlowMvtUpEndStop
    {U16_MIN, U16_MAX},                                     //!< au16Rng_ArrowArmSlowMvtUpEndStop[2]
    350,                                                    //!< u16Def_ArrowArmSlowMvtUpEndStop
    {0xffff, 1851, TUINT16, DB_VAR},                        //!< tInf_TelescopSlowMvtFoldedEndStop
    {U16_MIN, U16_MAX},                                     //!< au16Rng_TelescopSlowMvtFoldedEndStop[2]
    650,                                                    //!< u16Def_TelescopSlowMvtFoldedEndStop
    {0xffff, 2066, TUINT16, DB_VAR},                        //!< tInf_TelescopePerfOutLimit
    {U16_MIN, U16_MAX},                                     //!< au16Rng_TelescopePerfOutLimit[2]
    600,                                                    //!< u16Def_TelescopePerfOutLimit
    {0xffff, 2067, TUINT16, DB_VAR},                        //!< tInf_TelescopePerfOutLimitHyst
    {U16_MIN, U16_MAX},                                     //!< au16Rng_TelescopePerfOutLimitHyst[2]
    10,                                                     //!< u16Def_TelescopePerfOutLimitHyst
    {0xffff, 2068, TUINT16, DB_VAR},                        //!< tInf_TelescopePerfOutLimitSlowThres
    {U16_MIN, U16_MAX},                                     //!< au16Rng_TelescopePerfOutLimitSlowThres[2]
    50                                                      //!< u16Def_TelescopePerfOutLimitSlowThres
};

const TDbSetNvParamAutoStopC1 gDb_ctSetNvParamAutoStopC1=
{
    {0xfff4, 1104, TINT16, DB_VAR},                         //!< tInf_TurretRearCenterPos
    {-100, 100},                                            //!< ai16Rng_TurretRearCenterPos[2]
    0,                                                      //!< i16Def_TurretRearCenterPos
    {0xfff4, 1105, TINT16, DB_VAR},                         //!< tInf_TurretFrontPositiveCenterPos
    {1700, 1900},                                           //!< ai16Rng_TurretFrontPositiveCenterPos[2]
    1800,                                                   //!< i16Def_TurretFrontPositiveCenterPos
    {0xfff4, 1106, TINT16, DB_VAR},                         //!< tInf_TurretFrontNegativeCenterPos
    {-1900, -1700},                                         //!< ai16Rng_TurretFrontNegativeCenterPos[2]
    -1800,                                                  //!< i16Def_TurretFrontNegativeCenterPos
    {0xfff4, 1107, TINT16, DB_VAR},                         //!< tInf_TurretCenterZoneWindow
    {0, 900},                                               //!< ai16Rng_TurretCenterZoneWindow[2]
    20,                                                     //!< i16Def_TurretCenterZoneWindow
    {0xfff4, 1108, TINT16, DB_VAR},                         //!< tInf_TurretCenterZoneWindowHyst
    {0, 900},                                               //!< ai16Rng_TurretCenterZoneWindowHyst[2]
    10,                                                     //!< i16Def_TurretCenterZoneWindowHyst
    {0xfff4, 1109, TINT16, DB_VAR},                         //!< tInf_TurretCenterZoneSlowThres
    {0, 900},                                               //!< ai16Rng_TurretCenterZoneSlowThres[2]
    50,                                                     //!< i16Def_TurretCenterZoneSlowThres
    {0xfff4, 1369, TINT16, DB_VAR},                         //!< tInf_TurretCenterZoneWindowLeft
    {0, 1800},                                              //!< ai16Rng_TurretCenterZoneWindowLeft[2]
    10,                                                     //!< i16Def_TurretCenterZoneWindowLeft
    {0xfff4, 1370, TINT16, DB_VAR},                         //!< tInf_TurretCenterZoneWindowRight
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_TurretCenterZoneWindowRight[2]
    10                                                      //!< i16Def_TurretCenterZoneWindowRight
};

const TDbSetRamAutoStopC1 gDb_ctSetRamAutoStopC1=
{
    {0xffff, 1110, TBOOLEAN, DB_VAR},                       //!< tInf_StopBasketRotation
    {FALSE, TRUE},                                          //!< aboRng_StopBasketRotation[2]
    FALSE,                                                  //!< boDef_StopBasketRotation
    {0xffff, 1111, TBOOLEAN, DB_VAR},                       //!< tInf_StopTurretRotation
    {FALSE, TRUE},                                          //!< aboRng_StopTurretRotation[2]
    FALSE,                                                  //!< boDef_StopTurretRotation
    {0xffff, 1112, TBOOLEAN, DB_VAR},                       //!< tInf_ReduceSpeedRotTurretClockwise
    {FALSE, TRUE},                                          //!< aboRng_ReduceSpeedRotTurretClockwise[2]
    FALSE,                                                  //!< boDef_ReduceSpeedRotTurretClockwise
    {0xffff, 1113, TBOOLEAN, DB_VAR},                       //!< tInf_ReduceSpeedRotTurretCounterClock
    {FALSE, TRUE},                                          //!< aboRng_ReduceSpeedRotTurretCounterClock[2]
    FALSE,                                                  //!< boDef_ReduceSpeedRotTurretCounterClock
    {0xffff, 1114, TBOOLEAN, DB_VAR},                       //!< tInf_TurrentInCenterPos
    {FALSE, TRUE},                                          //!< aboRng_TurrentInCenterPos[2]
    FALSE,                                                  //!< boDef_TurrentInCenterPos
    {0xffff, 1115, TBOOLEAN, DB_VAR},                       //!< tInf_EnableSimuMode
    {FALSE, TRUE},                                          //!< aboRng_EnableSimuMode[2]
    FALSE,                                                  //!< boDef_EnableSimuMode
    {0xffff, 1116, TBOOLEAN, DB_VAR},                       //!< tInf_TestBasketLeftSideSensor
    {FALSE, TRUE},                                          //!< aboRng_TestBasketLeftSideSensor[2]
    FALSE,                                                  //!< boDef_TestBasketLeftSideSensor
    {0xffff, 1117, TBOOLEAN, DB_VAR},                       //!< tInf_TestBasketRightSideSensor
    {FALSE, TRUE},                                          //!< aboRng_TestBasketRightSideSensor[2]
    FALSE,                                                  //!< boDef_TestBasketRightSideSensor
    {0xffff, 1118, TBOOLEAN, DB_VAR},                       //!< tInf_TestBasketRotCmdEnabled
    {FALSE, TRUE},                                          //!< aboRng_TestBasketRotCmdEnabled[2]
    FALSE,                                                  //!< boDef_TestBasketRotCmdEnabled
    {0xffff, 1119, TINT16, DB_VAR},                         //!< tInf_TestTurretAngularPosition
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_TestTurretAngularPosition[2]
    0,                                                      //!< i16Def_TestTurretAngularPosition
    {0xffff, 1120, TBOOLEAN, DB_VAR},                       //!< tInf_TestTurretRotCmdEnabled
    {FALSE, TRUE},                                          //!< aboRng_TestTurretRotCmdEnabled[2]
    FALSE,                                                  //!< boDef_TestTurretRotCmdEnabled
    {0xffff, 1121, TBOOLEAN, DB_VAR},                       //!< tInf_TurretInRearCenterPos
    {FALSE, TRUE},                                          //!< aboRng_TurretInRearCenterPos[2]
    FALSE,                                                  //!< boDef_TurretInRearCenterPos
    {0xffff, 1122, TBOOLEAN, DB_VAR},                       //!< tInf_TurretInFrontPositiveCenterPos
    {FALSE, TRUE},                                          //!< aboRng_TurretInFrontPositiveCenterPos[2]
    FALSE,                                                  //!< boDef_TurretInFrontPositiveCenterPos
    {0xffff, 1123, TBOOLEAN, DB_VAR},                       //!< tInf_TurretInFrontNegativeCenterPos
    {FALSE, TRUE},                                          //!< aboRng_TurretInFrontNegativeCenterPos[2]
    FALSE,                                                  //!< boDef_TurretInFrontNegativeCenterPos
    {0xffff, 1128, TBOOLEAN, DB_VAR},                       //!< tInf_BasketInCentrerPos
    {FALSE, TRUE},                                          //!< aboRng_BasketInCentrerPos[2]
    FALSE,                                                  //!< boDef_BasketInCentrerPos
    {0xffff, 1129, TBOOLEAN, DB_VAR},                       //!< tInf_TurretRotationCmdEnabled
    {FALSE, TRUE},                                          //!< aboRng_TurretRotationCmdEnabled[2]
    FALSE,                                                  //!< boDef_TurretRotationCmdEnabled
    {0xffff, 1130, TUINT8, DB_VAR},                         //!< tInf_CounterStopTurretRotationDebug
    {U8_MIN, U8_MAX},                                       //!< au8Rng_CounterStopTurretRotationDebug[2]
    0,                                                      //!< u8Def_CounterStopTurretRotationDebug
    {0xffff, 1131, TUINT8, DB_VAR},                         //!< tInf_CounterNoStopTurretRotationDebug
    {U8_MIN, U8_MAX},                                       //!< au8Rng_CounterNoStopTurretRotationDebug[2]
    0                                                       //!< u8Def_CounterNoStopTurretRotationDebug
};

const TDbSetRamMastMeasureC1 gDb_ctSetRamMastMeasureC1=
{
    {0xffff, 1191, TBOOLEAN, DB_VAR},                       //!< tInf_Fonction_Active
    {FALSE, TRUE},                                          //!< aboRng_Fonction_Active[2]
    FALSE,                                                  //!< boDef_Fonction_Active
    {0xffff, 1192, TBOOLEAN, DB_VAR},                       //!< tInf_Commande_Neutre
    {FALSE, TRUE},                                          //!< aboRng_Commande_Neutre[2]
    FALSE,                                                  //!< boDef_Commande_Neutre
    {0xffff, 1193, TBOOLEAN, DB_VAR},                       //!< tInf_Authorize_Driving
    {FALSE, TRUE},                                          //!< aboRng_Authorize_Driving[2]
    FALSE,                                                  //!< boDef_Authorize_Driving
    {0xffff, 1194, TBOOLEAN, DB_VAR},                       //!< tInf_Folded_Position_Mast
    {FALSE, TRUE},                                          //!< aboRng_Folded_Position_Mast[2]
    FALSE,                                                  //!< boDef_Folded_Position_Mast
    {0xffff, 1195, TBOOLEAN, DB_VAR},                       //!< tInf_Stop_Movement_By_Mast
    {FALSE, TRUE},                                          //!< aboRng_Stop_Movement_By_Mast[2]
    FALSE,                                                  //!< boDef_Stop_Movement_By_Mast
    {0xffff, 1198, TBOOLEAN, DB_VAR},                       //!< tInf_RazDistanceTraveledButton
    {FALSE, TRUE},                                          //!< aboRng_RazDistanceTraveledButton[2]
    FALSE,                                                  //!< boDef_RazDistanceTraveledButton
    {0xffff, 1199, TINT32, DB_VAR},                         //!< tInf_DistanceTraveledMm
    {I32_MIN, I32_MAX},                                     //!< ai32Rng_DistanceTraveledMm[2]
    0L,                                                     //!< i32Def_DistanceTraveledMm
    {0xffff, 1200, TUINT32, DB_VAR},                        //!< tInf_DeltaMinMaxEncodeurValue
    {U32_MIN, U32_MAX},                                     //!< au32Rng_DeltaMinMaxEncodeurValue[2]
    U32_UNDEF,                                              //!< u32Def_DeltaMinMaxEncodeurValue
    {0xffff, 1201, TUINT16, DB_VAR},                        //!< tInf_EncodeurMastCentimeterOffset
    {U16_MIN, U16_MAX},                                     //!< au16Rng_EncodeurMastCentimeterOffset[2]
    U16_UNDEF,                                              //!< u16Def_EncodeurMastCentimeterOffset
    {0xffff, 1204, TUINT16, DB_VAR},                        //!< tInf_EncodeurMastMeasureCentimeter
    {U16_MIN, U16_MAX},                                     //!< au16Rng_EncodeurMastMeasureCentimeter[2]
    U16_UNDEF,                                              //!< u16Def_EncodeurMastMeasureCentimeter
    {0xffff, 1011, TBOOLEAN, DB_VAR},                       //!< tInf_NoMovementIsDuringAndNeutralCmd
    {FALSE, TRUE},                                          //!< aboRng_NoMovementIsDuringAndNeutralCmd[2]
    FALSE,                                                  //!< boDef_NoMovementIsDuringAndNeutralCmd
    {0xffff, 1012, TINT16, DB_VAR},                         //!< tInf_ScalingJoyMatTelescope
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_ScalingJoyMatTelescope[2]
    0,                                                      //!< i16Def_ScalingJoyMatTelescope
    {0xffff, 1168, TUINT32, DB_VAR},                        //!< tInf_TimeWithMastNotFolded
    {U32_MIN, U32_MAX},                                     //!< au32Rng_TimeWithMastNotFolded[2]
    U32_UNDEF,                                              //!< u32Def_TimeWithMastNotFolded
    {0xffff, 1178, TBOOLEAN, DB_VAR},                       //!< tInf_DownAxleOscillantForMast
    {FALSE, TRUE},                                          //!< aboRng_DownAxleOscillantForMast[2]
    FALSE,                                                  //!< boDef_DownAxleOscillantForMast
    {0xffff, 1173, TBOOLEAN, DB_VAR},                       //!< tInf_VisibleDistanceTraveledMat
    {FALSE, TRUE},                                          //!< aboRng_VisibleDistanceTraveledMat[2]
    FALSE,                                                  //!< boDef_VisibleDistanceTraveledMat
    {0xffff, 2107, TBOOLEAN, DB_VAR},                       //!< tInf_MastInUpperPosition
    {FALSE, TRUE},                                          //!< aboRng_MastInUpperPosition[2]
    FALSE,                                                  //!< boDef_MastInUpperPosition
    {0xffff, 2108, TBOOLEAN, DB_VAR},                       //!< tInf_MastPanthoInFoldedPosition
    {FALSE, TRUE},                                          //!< aboRng_MastPanthoInFoldedPosition[2]
    FALSE,                                                  //!< boDef_MastPanthoInFoldedPosition
    {0xffff, 2109, TBOOLEAN, DB_VAR},                       //!< tInf_ValveInDownPosition
    {FALSE, TRUE},                                          //!< aboRng_ValveInDownPosition[2]
    FALSE,                                                  //!< boDef_ValveInDownPosition
    {0xffff, 2110, TBOOLEAN, DB_VAR},                       //!< tInf_PostInterdictionMastSNCF
    {FALSE, TRUE},                                          //!< aboRng_PostInterdictionMastSNCF[2]
    FALSE,                                                  //!< boDef_PostInterdictionMastSNCF
    {0xffff, 2111, TBOOLEAN, DB_VAR},                       //!< tInf_MemoFirstValidCycleMast
    {FALSE, TRUE},                                          //!< aboRng_MemoFirstValidCycleMast[2]
    FALSE,                                                  //!< boDef_MemoFirstValidCycleMast
    {0xffff, 2112, TBOOLEAN, DB_VAR},                       //!< tInf_ContactMastAutorisationOfMvts
    {FALSE, TRUE},                                          //!< aboRng_ContactMastAutorisationOfMvts[2]
    FALSE,                                                  //!< boDef_ContactMastAutorisationOfMvts
    {0xffff, 2113, TBOOLEAN, DB_VAR},                       //!< tInf_InterdictionOfNacelleTurretPost
    {FALSE, TRUE},                                          //!< aboRng_InterdictionOfNacelleTurretPost[2]
    FALSE,                                                  //!< boDef_InterdictionOfNacelleTurretPost
    {0xffff, 2138, TBOOLEAN, DB_VAR},                       //!< tInf_PictoWarningFirstValidCycleMast
    {FALSE, TRUE},                                          //!< aboRng_PictoWarningFirstValidCycleMast[2]
    FALSE                                                   //!< boDef_PictoWarningFirstValidCycleMast
};

const TDbSetNvParamMastC1 gDb_ctSetNvParamMastC1=
{
    {0xfff4, 1183, TINT16, DB_VAR},                         //!< tInf_Offset_Mast_Centimeter
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_Offset_Mast_Centimeter[2]
    0,                                                      //!< i16Def_Offset_Mast_Centimeter
    {0xfff4, 1185, TINT16, DB_VAR},                         //!< tInf_FoldedMastThres
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_FoldedMastThres[2]
    20,                                                     //!< i16Def_FoldedMastThres
    {0xfff4, 1186, TINT16, DB_VAR},                         //!< tInf_FoldedMastHyst
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_FoldedMastHyst[2]
    5,                                                      //!< i16Def_FoldedMastHyst
    {0xfff4, 1187, TUINT32, DB_VAR},                        //!< tInf_MinValueEncodeurMast
    {U32_MIN, U32_MAX},                                     //!< au32Rng_MinValueEncodeurMast[2]
    0U,                                                     //!< u32Def_MinValueEncodeurMast
    {0xfff4, 1188, TUINT32, DB_VAR},                        //!< tInf_MaxValueEncodeurMast
    {U32_MIN, U32_MAX},                                     //!< au32Rng_MaxValueEncodeurMast[2]
    5000U,                                                  //!< u32Def_MaxValueEncodeurMast
    {0xfff4, 1189, TUINT16, DB_VAR},                        //!< tInf_MinCentimeterEncodeurMast
    {U16_MIN, U16_MAX},                                     //!< au16Rng_MinCentimeterEncodeurMast[2]
    0,                                                      //!< u16Def_MinCentimeterEncodeurMast
    {0xfff4, 1190, TUINT16, DB_VAR},                        //!< tInf_MaxCentimeterEncodeurMast
    {U16_MIN, U16_MAX},                                     //!< au16Rng_MaxCentimeterEncodeurMast[2]
    1000,                                                   //!< u16Def_MaxCentimeterEncodeurMast
    {0xfff4, 1388, TUINT32, DB_VAR},                        //!< tInf_MastDisplayRefreshCycleTime
    {U32_MIN, U32_MAX},                                     //!< au32Rng_MastDisplayRefreshCycleTime[2]
    500U                                                    //!< u32Def_MastDisplayRefreshCycleTime
};

const TDbSetRamEvision7C1 gDb_ctSetRamEvision7C1=
{
    {0xffff, 1205, TBOOLEAN, DB_VAR},                       //!< tInf_gActivateMeasuringMast
    {FALSE, TRUE},                                          //!< aboRng_gActivateMeasuringMast[2]
    FALSE,                                                  //!< boDef_gActivateMeasuringMast
    {0xffff, 1169, TBOOLEAN, DB_VAR},                       //!< tInf_gButtonCalibMinMastMeasure
    {FALSE, TRUE},                                          //!< aboRng_gButtonCalibMinMastMeasure[2]
    FALSE,                                                  //!< boDef_gButtonCalibMinMastMeasure
    {0xffff, 1170, TBOOLEAN, DB_VAR},                       //!< tInf_gButtonCalibMaxMastMeasure
    {FALSE, TRUE},                                          //!< aboRng_gButtonCalibMaxMastMeasure[2]
    FALSE,                                                  //!< boDef_gButtonCalibMaxMastMeasure
    {0xffff, 1171, TBOOLEAN, DB_VAR},                       //!< tInf_SavePosEncodeurMastMeasureButton
    {FALSE, TRUE},                                          //!< aboRng_SavePosEncodeurMastMeasureButton[2]
    FALSE,                                                  //!< boDef_SavePosEncodeurMastMeasureButton
    {0xffff, 1172, TBOOLEAN, DB_VAR},                       //!< tInf_RazDistanceTraveledMastMeasure
    {FALSE, TRUE},                                          //!< aboRng_RazDistanceTraveledMastMeasure[2]
    FALSE,                                                  //!< boDef_RazDistanceTraveledMastMeasure
    {0xffff, 1420, TBOOLEAN, DB_VAR},                       //!< tInf_gSerialNumber
    {FALSE, TRUE},                                          //!< aboRng_gSerialNumber[2]
    FALSE,                                                  //!< boDef_gSerialNumber
    {0xffff, 1421, TBOOLEAN, DB_VAR},                       //!< tInf_gBPBasketValidate
    {FALSE, TRUE},                                          //!< aboRng_gBPBasketValidate[2]
    FALSE,                                                  //!< boDef_gBPBasketValidate
    {0xffff, 1422, TBOOLEAN, DB_VAR},                       //!< tInf_gKeyFilterOverload
    {FALSE, TRUE},                                          //!< aboRng_gKeyFilterOverload[2]
    FALSE,                                                  //!< boDef_gKeyFilterOverload
    {0xffff, 1423, TBOOLEAN, DB_VAR},                       //!< tInf_gKeyNextMode
    {FALSE, TRUE},                                          //!< aboRng_gKeyNextMode[2]
    FALSE,                                                  //!< boDef_gKeyNextMode
    {0xffff, 1424, TBOOLEAN, DB_VAR},                       //!< tInf_gKeyPrevMode
    {FALSE, TRUE},                                          //!< aboRng_gKeyPrevMode[2]
    FALSE,                                                  //!< boDef_gKeyPrevMode
    {0xffff, 1425, TBOOLEAN, DB_VAR},                       //!< tInf_gKeySignalDanger
    {FALSE, TRUE},                                          //!< aboRng_gKeySignalDanger[2]
    FALSE,                                                  //!< boDef_gKeySignalDanger
    {0xffff, 1426, TBOOLEAN, DB_VAR},                       //!< tInf_gKeyFlashLightON
    {FALSE, TRUE},                                          //!< aboRng_gKeyFlashLightON[2]
    FALSE,                                                  //!< boDef_gKeyFlashLightON
    {0xffff, 1427, TBOOLEAN, DB_VAR},                       //!< tInf_gKeyCalibMastMin
    {FALSE, TRUE},                                          //!< aboRng_gKeyCalibMastMin[2]
    FALSE,                                                  //!< boDef_gKeyCalibMastMin
    {0xffff, 1428, TBOOLEAN, DB_VAR},                       //!< tInf_gKeyCalibMastMax
    {FALSE, TRUE},                                          //!< aboRng_gKeyCalibMastMax[2]
    FALSE,                                                  //!< boDef_gKeyCalibMastMax
    {0xffff, 1429, TBOOLEAN, DB_VAR},                       //!< tInf_gKeyCalibMastValid
    {FALSE, TRUE},                                          //!< aboRng_gKeyCalibMastValid[2]
    FALSE,                                                  //!< boDef_gKeyCalibMastValid
    {0xffff, 1553, TBOOLEAN, DB_VAR},                       //!< tInf_gKeyGeneratorActivate
    {FALSE, TRUE},                                          //!< aboRng_gKeyGeneratorActivate[2]
    FALSE                                                   //!< boDef_gKeyGeneratorActivate
};

const TDbSetNvParamAlarmC1 gDb_ctSetNvParamAlarmC1=
{
    {0xfff4, 1348, TINT16, DB_VAR},                         //!< tInf_BypassPressureThres
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_BypassPressureThres[2]
    0,                                                      //!< i16Def_BypassPressureThres
    {0xfff4, 1349, TINT16, DB_VAR},                         //!< tInf_TelescopeInToleranceInductive
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_TelescopeInToleranceInductive[2]
    0,                                                      //!< i16Def_TelescopeInToleranceInductive
    {0xfff4, 1453, TINT16, DB_VAR},                         //!< tInf_TelescopeToleranceNoMovement
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_TelescopeToleranceNoMovement[2]
    0,                                                      //!< i16Def_TelescopeToleranceNoMovement
    {0xfff4, 1454, TINT16, DB_VAR},                         //!< tInf_TelescopeToleranceChannels
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_TelescopeToleranceChannels[2]
    0,                                                      //!< i16Def_TelescopeToleranceChannels
    {0xfff4, 1546, TINT32, DB_VAR},                         //!< tInf_AlternatorRegimeMaxThres
    {I32_MIN, I32_MAX},                                     //!< ai32Rng_AlternatorRegimeMaxThres[2]
    0L,                                                     //!< i32Def_AlternatorRegimeMaxThres
    {0xfff4, 1547, TUINT16, DB_VAR},                        //!< tInf_BatteryVoltageMinThres
    {U16_MIN, U16_MAX},                                     //!< au16Rng_BatteryVoltageMinThres[2]
    0,                                                      //!< u16Def_BatteryVoltageMinThres
    {0xfff4, 1575, TUINT8, DB_VAR},                         //!< tInf_MinAlarmJoyDeltaArmPrctBat
    {0, 100},                                               //!< au8Rng_MinAlarmJoyDeltaArmPrctBat[2]
    15,                                                     //!< u8Def_MinAlarmJoyDeltaArmPrctBat
    {0xfff4, 1576, TUINT8, DB_VAR},                         //!< tInf_MaxAlarmJoyDeltaArmPrctBat
    {0, 100},                                               //!< au8Rng_MaxAlarmJoyDeltaArmPrctBat[2]
    85,                                                     //!< u8Def_MaxAlarmJoyDeltaArmPrctBat
    {0xfff4, 1727, TUINT8, DB_VAR},                         //!< tInf_MinAlarmJoyArrowArmPrctBat
    {0, 100},                                               //!< au8Rng_MinAlarmJoyArrowArmPrctBat[2]
    15,                                                     //!< u8Def_MinAlarmJoyArrowArmPrctBat
    {0xfff4, 1728, TUINT8, DB_VAR},                         //!< tInf_MaxAlarmJoyArrowArmPrctBat
    {0, 100},                                               //!< au8Rng_MaxAlarmJoyArrowArmPrctBat[2]
    85,                                                     //!< u8Def_MaxAlarmJoyArrowArmPrctBat
    {0xfff4, 1729, TUINT8, DB_VAR},                         //!< tInf_MinAlarmJoyTelescopeArmPrctBat
    {0, 100},                                               //!< au8Rng_MinAlarmJoyTelescopeArmPrctBat[2]
    15,                                                     //!< u8Def_MinAlarmJoyTelescopeArmPrctBat
    {0xfff4, 1730, TUINT8, DB_VAR},                         //!< tInf_MaxAlarmJoyTelescopeArmPrctBat
    {0, 100},                                               //!< au8Rng_MaxAlarmJoyTelescopeArmPrctBat[2]
    85,                                                     //!< u8Def_MaxAlarmJoyTelescopeArmPrctBat
    {0xfff4, 1731, TUINT8, DB_VAR},                         //!< tInf_MinAlarmJoyRotTurretArmPrctBat
    {0, 100},                                               //!< au8Rng_MinAlarmJoyRotTurretArmPrctBat[2]
    15,                                                     //!< u8Def_MinAlarmJoyRotTurretArmPrctBat
    {0xfff4, 1732, TUINT8, DB_VAR},                         //!< tInf_MaxAlarmJoyRotTurretArmPrctBat
    {0, 100},                                               //!< au8Rng_MaxAlarmJoyRotTurretArmPrctBat[2]
    85,                                                     //!< u8Def_MaxAlarmJoyRotTurretArmPrctBat
    {0xfff4, 1733, TUINT8, DB_VAR},                         //!< tInf_MinAlarmJoyAdvancementPrctBat
    {0, 100},                                               //!< au8Rng_MinAlarmJoyAdvancementPrctBat[2]
    15,                                                     //!< u8Def_MinAlarmJoyAdvancementPrctBat
    {0xfff4, 1734, TUINT8, DB_VAR},                         //!< tInf_MaxAlarmJoyAdvancementPrctBat
    {0, 100},                                               //!< au8Rng_MaxAlarmJoyAdvancementPrctBat[2]
    85,                                                     //!< u8Def_MaxAlarmJoyAdvancementPrctBat
    {0xffff, 2007, TUINT16, DB_VAR},                        //!< tInf_TimeBypassFault
    {U16_MIN, U16_MAX},                                     //!< au16Rng_TimeBypassFault[2]
    25,                                                     //!< u16Def_TimeBypassFault
    {0xffff, 2153, TUINT16, DB_VAR},                        //!< tInf_cptTimeTestBypassMax
    {U16_MIN, U16_MAX},                                     //!< au16Rng_cptTimeTestBypassMax[2]
    50                                                      //!< u16Def_cptTimeTestBypassMax
};

const TDbSetRamEcuC1RcvFailluresFromC0 gDb_ctSetRamEcuC1RcvFailluresFromC0=
{
    {0xffff, 1386, TBOOLEAN, DB_VAR},                       //!< tInf_Dm_Swi_Dbl_NcNo_Inc_FrameRot
    {FALSE, TRUE},                                          //!< aboRng_Dm_Swi_Dbl_NcNo_Inc_FrameRot[2]
    FALSE,                                                  //!< boDef_Dm_Swi_Dbl_NcNo_Inc_FrameRot
    {0xffff, 1478, TBOOLEAN, DB_VAR},                       //!< tInf_Dm_Turret_Sensor_Fault
    {FALSE, TRUE},                                          //!< aboRng_Dm_Turret_Sensor_Fault[2]
    FALSE,                                                  //!< boDef_Dm_Turret_Sensor_Fault
    {0xffff, 1545, TBOOLEAN, DB_VAR},                       //!< tInf_EvParkBrakeAxleOscillantFault
    {FALSE, TRUE},                                          //!< aboRng_EvParkBrakeAxleOscillantFault[2]
    FALSE,                                                  //!< boDef_EvParkBrakeAxleOscillantFault
    {0xffff, 1548, TBOOLEAN, DB_VAR},                       //!< tInf_EvParkBrakeAxleFixeFault
    {FALSE, TRUE},                                          //!< aboRng_EvParkBrakeAxleFixeFault[2]
    FALSE,                                                  //!< boDef_EvParkBrakeAxleFixeFault
    {0xffff, 1549, TBOOLEAN, DB_VAR},                       //!< tInf_EvServiceBrakeAxleOscillantFault
    {FALSE, TRUE},                                          //!< aboRng_EvServiceBrakeAxleOscillantFault[2]
    FALSE,                                                  //!< boDef_EvServiceBrakeAxleOscillantFault
    {0xffff, 1550, TBOOLEAN, DB_VAR},                       //!< tInf_EvServiceBrakeAxleFixeFault
    {FALSE, TRUE},                                          //!< aboRng_EvServiceBrakeAxleFixeFault[2]
    FALSE,                                                  //!< boDef_EvServiceBrakeAxleFixeFault
    {0xffff, 1551, TBOOLEAN, DB_VAR},                       //!< tInf_EvServiceBrakeTrackFault
    {FALSE, TRUE},                                          //!< aboRng_EvServiceBrakeTrackFault[2]
    FALSE,                                                  //!< boDef_EvServiceBrakeTrackFault
    {0xffff, 1578, TBOOLEAN, DB_VAR},                       //!< tInf_Rm_Com_Can_Radio_Loss
    {FALSE, TRUE},                                          //!< aboRng_Rm_Com_Can_Radio_Loss[2]
    FALSE,                                                  //!< boDef_Rm_Com_Can_Radio_Loss
    {0xffff, 1824, TBOOLEAN, DB_VAR},                       //!< tInf_Ev2ndParkBrakeAxleFixeFault
    {FALSE, TRUE},                                          //!< aboRng_Ev2ndParkBrakeAxleFixeFault[2]
    FALSE,                                                  //!< boDef_Ev2ndParkBrakeAxleFixeFault
    {0xffff, 1825, TBOOLEAN, DB_VAR},                       //!< tInf_Ev2ndParkBrakeAxleOsciFault
    {FALSE, TRUE},                                          //!< aboRng_Ev2ndParkBrakeAxleOsciFault[2]
    FALSE                                                   //!< boDef_Ev2ndParkBrakeAxleOsciFault
};

const TDbSetRamData4C1RcvFromC0 gDb_ctSetRamData4C1RcvFromC0=
{
    {0xffff, 1625, TBOOLEAN, DB_VAR},                       //!< tInf_StopAggravantMovements
    {FALSE, TRUE},                                          //!< aboRng_StopAggravantMovements[2]
    FALSE,                                                  //!< boDef_StopAggravantMovements
    {0xffff, 1626, TBOOLEAN, DB_VAR},                       //!< tInf_TurretPostorRadoPostOn
    {FALSE, TRUE},                                          //!< aboRng_TurretPostorRadoPostOn[2]
    FALSE,                                                  //!< boDef_TurretPostorRadoPostOn
    {0xffff, 1627, TBOOLEAN, DB_VAR},                       //!< tInf_MotorAccelerated
    {FALSE, TRUE},                                          //!< aboRng_MotorAccelerated[2]
    FALSE,                                                  //!< boDef_MotorAccelerated
    {0xffff, 1628, TBOOLEAN, DB_VAR},                       //!< tInf_RadioPostSelectorOn
    {FALSE, TRUE},                                          //!< aboRng_RadioPostSelectorOn[2]
    FALSE,                                                  //!< boDef_RadioPostSelectorOn
    {0xffff, 1629, TBOOLEAN, DB_VAR},                       //!< tInf_SlopeHighWithWorkOnCrawler
    {FALSE, TRUE},                                          //!< aboRng_SlopeHighWithWorkOnCrawler[2]
    FALSE,                                                  //!< boDef_SlopeHighWithWorkOnCrawler
    {0xffff, 1630, TBOOLEAN, DB_VAR},                       //!< tInf_ErrorActiveOnC0
    {FALSE, TRUE},                                          //!< aboRng_ErrorActiveOnC0[2]
    FALSE,                                                  //!< boDef_ErrorActiveOnC0
    {0xffff, 1631, TBOOLEAN, DB_VAR},                       //!< tInf_RailWorkMultiLaneMode
    {FALSE, TRUE},                                          //!< aboRng_RailWorkMultiLaneMode[2]
    FALSE,                                                  //!< boDef_RailWorkMultiLaneMode
    {0xffff, 1632, TBOOLEAN, DB_VAR},                       //!< tInf_TestFrance
    {FALSE, TRUE},                                          //!< aboRng_TestFrance[2]
    FALSE,                                                  //!< boDef_TestFrance
    {0xffff, 1633, TBOOLEAN, DB_VAR},                       //!< tInf_WhiteLightAV15746Command
    {FALSE, TRUE},                                          //!< aboRng_WhiteLightAV15746Command[2]
    FALSE,                                                  //!< boDef_WhiteLightAV15746Command
    {0xffff, 1759, TBOOLEAN, DB_VAR},                       //!< tInf_WhiteLightAr15746Command
    {FALSE, TRUE},                                          //!< aboRng_WhiteLightAr15746Command[2]
    FALSE,                                                  //!< boDef_WhiteLightAr15746Command
    {0xffff, 1634, TINT16, DB_VAR},                         //!< tInf_Signal_9
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_Signal_9[2]
    0,                                                      //!< i16Def_Signal_9
    {0xffff, 1635, TINT16, DB_VAR},                         //!< tInf_Signal_10
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_Signal_10[2]
    0,                                                      //!< i16Def_Signal_10
    {0xffff, 1636, TINT16, DB_VAR},                         //!< tInf_Signal_11
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_Signal_11[2]
    0,                                                      //!< i16Def_Signal_11
    {0xffff, 2058, TBOOLEAN, DB_VAR},                       //!< tInf_AddPerformanceFunc
    {FALSE, TRUE},                                          //!< aboRng_AddPerformanceFunc[2]
    FALSE,                                                  //!< boDef_AddPerformanceFunc
    {0xffff, 2059, TBOOLEAN, DB_VAR},                       //!< tInf_SlopeCaseLess2Deg
    {FALSE, TRUE},                                          //!< aboRng_SlopeCaseLess2Deg[2]
    FALSE,                                                  //!< boDef_SlopeCaseLess2Deg
    {0xffff, 2060, TBOOLEAN, DB_VAR},                       //!< tInf_SlopeCaseLess4Deg
    {FALSE, TRUE},                                          //!< aboRng_SlopeCaseLess4Deg[2]
    FALSE,                                                  //!< boDef_SlopeCaseLess4Deg
    {0xffff, 2061, TBOOLEAN, DB_VAR},                       //!< tInf_SlopeCaseLess6Deg
    {FALSE, TRUE},                                          //!< aboRng_SlopeCaseLess6Deg[2]
    FALSE,                                                  //!< boDef_SlopeCaseLess6Deg
    {0xffff, 2062, TBOOLEAN, DB_VAR},                       //!< tInf_SlopeCaseHigher6Deg
    {FALSE, TRUE},                                          //!< aboRng_SlopeCaseHigher6Deg[2]
    FALSE,                                                  //!< boDef_SlopeCaseHigher6Deg
    {0xffff, 2063, TBOOLEAN, DB_VAR},                       //!< tInf_TurretInSpeedZone2Deg
    {FALSE, TRUE},                                          //!< aboRng_TurretInSpeedZone2Deg[2]
    FALSE,                                                  //!< boDef_TurretInSpeedZone2Deg
    {0xffff, 2064, TBOOLEAN, DB_VAR},                       //!< tInf_TurretInSpeedZone4Deg
    {FALSE, TRUE},                                          //!< aboRng_TurretInSpeedZone4Deg[2]
    FALSE,                                                  //!< boDef_TurretInSpeedZone4Deg
    {0xffff, 2065, TBOOLEAN, DB_VAR},                       //!< tInf_TurretInSpeedZone2DegForBasket
    {FALSE, TRUE},                                          //!< aboRng_TurretInSpeedZone2DegForBasket[2]
    FALSE,                                                  //!< boDef_TurretInSpeedZone2DegForBasket
    {0xffff, 2114, EDISTATE_TYPE, DB_VAR},                  //!< tInf_SelectedControlPost
    {GE_DI_OFF, GE_DI_UNDEF},                               //!< aeRng_SelectedControlPost[2]
    GE_DI_OFF,                                              //!< eDef_SelectedControlPost
    {0xffff, 2115, TBOOLEAN, DB_VAR},                       //!< tInf_UpMastSensorNC
    {FALSE, TRUE},                                          //!< aboRng_UpMastSensorNC[2]
    FALSE,                                                  //!< boDef_UpMastSensorNC
    {0xffff, 2116, TBOOLEAN, DB_VAR},                       //!< tInf_ValveInDownPositionSensor
    {FALSE, TRUE},                                          //!< aboRng_ValveInDownPositionSensor[2]
    FALSE,                                                  //!< boDef_ValveInDownPositionSensor
    {0xffff, 2117, TBOOLEAN, DB_VAR},                       //!< tInf_MeasuringMastSensorFolded
    {FALSE, TRUE},                                          //!< aboRng_MeasuringMastSensorFolded[2]
    FALSE,                                                  //!< boDef_MeasuringMastSensorFolded
    {0xffff, 2126, TBOOLEAN, DB_VAR},                       //!< tInf_PresenceSensorPlate
    {FALSE, TRUE},                                          //!< aboRng_PresenceSensorPlate[2]
    FALSE,                                                  //!< boDef_PresenceSensorPlate
    {0xffff, 2149, TUINT8, DB_VAR},                         //!< tInf_RecoveryReductionRatio
    {U8_MIN, U8_MAX},                                       //!< au8Rng_RecoveryReductionRatio[2]
    U8_MIN                                                  //!< u8Def_RecoveryReductionRatio
};

const TDbSetRamGeneralNeotecC1 gDb_ctSetRamGeneralNeotecC1=
{
    {0xffff, 1637, TBOOLEAN, DB_VAR},                       //!< tInf_RamGeneralNeotecC1_1
    {FALSE, TRUE},                                          //!< aboRng_RamGeneralNeotecC1_1[2]
    0,                                                      //!< boDef_RamGeneralNeotecC1_1
    {0xffff, 1638, TBOOLEAN, DB_VAR},                       //!< tInf_RamGeneralNeotecC1_1_1
    {FALSE, TRUE},                                          //!< aboRng_RamGeneralNeotecC1_1_1[2]
    0,                                                      //!< boDef_RamGeneralNeotecC1_1_1
    {0xffff, 1639, TBOOLEAN, DB_VAR},                       //!< tInf_RamGeneralNeotecC1_1_2
    {FALSE, TRUE},                                          //!< aboRng_RamGeneralNeotecC1_1_2[2]
    0,                                                      //!< boDef_RamGeneralNeotecC1_1_2
    {0xffff, 1640, TBOOLEAN, DB_VAR},                       //!< tInf_RamGeneralNeotecC1_1_3
    {FALSE, TRUE},                                          //!< aboRng_RamGeneralNeotecC1_1_3[2]
    0,                                                      //!< boDef_RamGeneralNeotecC1_1_3
    {0xffff, 1641, TBOOLEAN, DB_VAR},                       //!< tInf_RamGeneralNeotecC1_1_4
    {FALSE, TRUE},                                          //!< aboRng_RamGeneralNeotecC1_1_4[2]
    0,                                                      //!< boDef_RamGeneralNeotecC1_1_4
    {0xffff, 1642, TBOOLEAN, DB_VAR},                       //!< tInf_RamGeneralNeotecC1_1_5
    {FALSE, TRUE},                                          //!< aboRng_RamGeneralNeotecC1_1_5[2]
    0,                                                      //!< boDef_RamGeneralNeotecC1_1_5
    {0xffff, 1643, TBOOLEAN, DB_VAR},                       //!< tInf_RamGeneralNeotecC1_1_6
    {FALSE, TRUE},                                          //!< aboRng_RamGeneralNeotecC1_1_6[2]
    0,                                                      //!< boDef_RamGeneralNeotecC1_1_6
    {0xffff, 1644, TBOOLEAN, DB_VAR},                       //!< tInf_RamGeneralNeotecC1_1_7
    {FALSE, TRUE},                                          //!< aboRng_RamGeneralNeotecC1_1_7[2]
    0,                                                      //!< boDef_RamGeneralNeotecC1_1_7
    {0xffff, 1645, TBOOLEAN, DB_VAR},                       //!< tInf_RamGeneralNeotecC1_1_8
    {FALSE, TRUE},                                          //!< aboRng_RamGeneralNeotecC1_1_8[2]
    0,                                                      //!< boDef_RamGeneralNeotecC1_1_8
    {0xffff, 1646, TBOOLEAN, DB_VAR},                       //!< tInf_RamGeneralNeotecC1_1_9
    {FALSE, TRUE},                                          //!< aboRng_RamGeneralNeotecC1_1_9[2]
    0,                                                      //!< boDef_RamGeneralNeotecC1_1_9
    {0xffff, 1647, TBOOLEAN, DB_VAR},                       //!< tInf_RamGeneralNeotecC1_1_10
    {FALSE, TRUE},                                          //!< aboRng_RamGeneralNeotecC1_1_10[2]
    0,                                                      //!< boDef_RamGeneralNeotecC1_1_10
    {0xffff, 1648, TBOOLEAN, DB_VAR},                       //!< tInf_RamGeneralNeotecC1_1_11
    {FALSE, TRUE},                                          //!< aboRng_RamGeneralNeotecC1_1_11[2]
    0,                                                      //!< boDef_RamGeneralNeotecC1_1_11
    {0xffff, 1649, TBOOLEAN, DB_VAR},                       //!< tInf_RamGeneralNeotecC1_1_12
    {FALSE, TRUE},                                          //!< aboRng_RamGeneralNeotecC1_1_12[2]
    0,                                                      //!< boDef_RamGeneralNeotecC1_1_12
    {0xffff, 1650, TBOOLEAN, DB_VAR},                       //!< tInf_RamGeneralNeotecC1_1_13
    {FALSE, TRUE},                                          //!< aboRng_RamGeneralNeotecC1_1_13[2]
    0,                                                      //!< boDef_RamGeneralNeotecC1_1_13
    {0xffff, 1651, TBOOLEAN, DB_VAR},                       //!< tInf_RamGeneralNeotecC1_1_14
    {FALSE, TRUE},                                          //!< aboRng_RamGeneralNeotecC1_1_14[2]
    0,                                                      //!< boDef_RamGeneralNeotecC1_1_14
    {0xffff, 1652, TBOOLEAN, DB_VAR},                       //!< tInf_RamGeneralNeotecC1_1_15
    {FALSE, TRUE},                                          //!< aboRng_RamGeneralNeotecC1_1_15[2]
    0,                                                      //!< boDef_RamGeneralNeotecC1_1_15
    {0xffff, 1653, TUINT8, DB_VAR},                         //!< tInf_RamGeneralNeotecC1_2
    {U8_MIN, U8_MAX},                                       //!< au8Rng_RamGeneralNeotecC1_2[2]
    0,                                                      //!< u8Def_RamGeneralNeotecC1_2
    {0xffff, 1654, TUINT8, DB_VAR},                         //!< tInf_RamGeneralNeotecC1_2_1
    {U8_MIN, U8_MAX},                                       //!< au8Rng_RamGeneralNeotecC1_2_1[2]
    0,                                                      //!< u8Def_RamGeneralNeotecC1_2_1
    {0xffff, 1655, TUINT8, DB_VAR},                         //!< tInf_RamGeneralNeotecC1_2_2
    {U8_MIN, U8_MAX},                                       //!< au8Rng_RamGeneralNeotecC1_2_2[2]
    0,                                                      //!< u8Def_RamGeneralNeotecC1_2_2
    {0xffff, 1656, TUINT8, DB_VAR},                         //!< tInf_RamGeneralNeotecC1_2_3
    {U8_MIN, U8_MAX},                                       //!< au8Rng_RamGeneralNeotecC1_2_3[2]
    0,                                                      //!< u8Def_RamGeneralNeotecC1_2_3
    {0xffff, 1657, TUINT8, DB_VAR},                         //!< tInf_RamGeneralNeotecC1_2_4
    {U8_MIN, U8_MAX},                                       //!< au8Rng_RamGeneralNeotecC1_2_4[2]
    0,                                                      //!< u8Def_RamGeneralNeotecC1_2_4
    {0xffff, 1658, TUINT8, DB_VAR},                         //!< tInf_RamGeneralNeotecC1_2_5
    {U8_MIN, U8_MAX},                                       //!< au8Rng_RamGeneralNeotecC1_2_5[2]
    0,                                                      //!< u8Def_RamGeneralNeotecC1_2_5
    {0xffff, 1659, TUINT16, DB_VAR},                        //!< tInf_RamGeneralNeotecC1_3
    {U16_MIN, U16_MAX},                                     //!< au16Rng_RamGeneralNeotecC1_3[2]
    0,                                                      //!< u16Def_RamGeneralNeotecC1_3
    {0xffff, 1660, TUINT16, DB_VAR},                        //!< tInf_RamGeneralNeotecC1_3_1
    {U16_MIN, U16_MAX},                                     //!< au16Rng_RamGeneralNeotecC1_3_1[2]
    0,                                                      //!< u16Def_RamGeneralNeotecC1_3_1
    {0xffff, 1661, TUINT16, DB_VAR},                        //!< tInf_RamGeneralNeotecC1_3_2
    {U16_MIN, U16_MAX},                                     //!< au16Rng_RamGeneralNeotecC1_3_2[2]
    0,                                                      //!< u16Def_RamGeneralNeotecC1_3_2
    {0xffff, 1662, TUINT16, DB_VAR},                        //!< tInf_RamGeneralNeotecC1_3_3
    {U16_MIN, U16_MAX},                                     //!< au16Rng_RamGeneralNeotecC1_3_3[2]
    0,                                                      //!< u16Def_RamGeneralNeotecC1_3_3
    {0xffff, 1663, TUINT16, DB_VAR},                        //!< tInf_RamGeneralNeotecC1_3_4
    {U16_MIN, U16_MAX},                                     //!< au16Rng_RamGeneralNeotecC1_3_4[2]
    0,                                                      //!< u16Def_RamGeneralNeotecC1_3_4
    {0xffff, 1664, TUINT16, DB_VAR},                        //!< tInf_RamGeneralNeotecC1_3_5
    {U16_MIN, U16_MAX},                                     //!< au16Rng_RamGeneralNeotecC1_3_5[2]
    0,                                                      //!< u16Def_RamGeneralNeotecC1_3_5
    {0xffff, 1665, TUINT16, DB_VAR},                        //!< tInf_RamGeneralNeotecC1_3_6
    {U16_MIN, U16_MAX},                                     //!< au16Rng_RamGeneralNeotecC1_3_6[2]
    0,                                                      //!< u16Def_RamGeneralNeotecC1_3_6
    {0xffff, 1666, TUINT16, DB_VAR},                        //!< tInf_RamGeneralNeotecC1_3_7
    {U16_MIN, U16_MAX},                                     //!< au16Rng_RamGeneralNeotecC1_3_7[2]
    0,                                                      //!< u16Def_RamGeneralNeotecC1_3_7
    {0xffff, 1667, TUINT16, DB_VAR},                        //!< tInf_RamGeneralNeotecC1_3_8
    {U16_MIN, U16_MAX},                                     //!< au16Rng_RamGeneralNeotecC1_3_8[2]
    0,                                                      //!< u16Def_RamGeneralNeotecC1_3_8
    {0xffff, 1668, TINT16, DB_VAR},                         //!< tInf_RamGeneralNeotecC1_4
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_RamGeneralNeotecC1_4[2]
    0,                                                      //!< i16Def_RamGeneralNeotecC1_4
    {0xffff, 1669, TINT16, DB_VAR},                         //!< tInf_RamGeneralNeotecC1_4_1
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_RamGeneralNeotecC1_4_1[2]
    0,                                                      //!< i16Def_RamGeneralNeotecC1_4_1
    {0xffff, 1670, TINT16, DB_VAR},                         //!< tInf_RamGeneralNeotecC1_4_2
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_RamGeneralNeotecC1_4_2[2]
    0,                                                      //!< i16Def_RamGeneralNeotecC1_4_2
    {0xffff, 1671, TINT16, DB_VAR},                         //!< tInf_RamGeneralNeotecC1_4_3
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_RamGeneralNeotecC1_4_3[2]
    0,                                                      //!< i16Def_RamGeneralNeotecC1_4_3
    {0xffff, 1672, TINT16, DB_VAR},                         //!< tInf_RamGeneralNeotecC1_4_4
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_RamGeneralNeotecC1_4_4[2]
    0,                                                      //!< i16Def_RamGeneralNeotecC1_4_4
    {0xffff, 1673, TINT16, DB_VAR},                         //!< tInf_RamGeneralNeotecC1_4_5
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_RamGeneralNeotecC1_4_5[2]
    0,                                                      //!< i16Def_RamGeneralNeotecC1_4_5
    {0xffff, 1674, TINT16, DB_VAR},                         //!< tInf_RamGeneralNeotecC1_4_6
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_RamGeneralNeotecC1_4_6[2]
    0,                                                      //!< i16Def_RamGeneralNeotecC1_4_6
    {0xffff, 1675, TINT16, DB_VAR},                         //!< tInf_RamGeneralNeotecC1_4_7
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_RamGeneralNeotecC1_4_7[2]
    0,                                                      //!< i16Def_RamGeneralNeotecC1_4_7
    {0xffff, 1676, TINT16, DB_VAR},                         //!< tInf_RamGeneralNeotecC1_4_8
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_RamGeneralNeotecC1_4_8[2]
    0,                                                      //!< i16Def_RamGeneralNeotecC1_4_8
    {0xffff, 275, TINT16, DB_VAR},                          //!< tInf_WaterTempJ1939
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_WaterTempJ1939[2]
    0,                                                      //!< i16Def_WaterTempJ1939
    {0xffff, 277, TUINT16, DB_VAR},                         //!< tInf_OilPressureJ1939
    {U16_MIN, U16_MAX},                                     //!< au16Rng_OilPressureJ1939[2]
    0,                                                      //!< u16Def_OilPressureJ1939
    {0xffff, 294, TUINT16, DB_VAR},                         //!< tInf_MotorSpeedJ1939
    {U16_MIN, U16_MAX},                                     //!< au16Rng_MotorSpeedJ1939[2]
    0,                                                      //!< u16Def_MotorSpeedJ1939
    {0xffff, 296, TINT32, DB_VAR},                          //!< tInf_AlternatorCurentJ1939
    {I32_MIN, I32_MAX},                                     //!< ai32Rng_AlternatorCurentJ1939[2]
    0L,                                                     //!< i32Def_AlternatorCurentJ1939
    {0xffff, 1831, EMOTORSTATE_TYPE, DB_VAR},               //!< tInf_MotorStateJ1939
    {GE_Stopped, GE_PostRun},                               //!< aeRng_MotorStateJ1939[2]
    GE_Stopped,                                             //!< eDef_MotorStateJ1939
    {0xffff, 1832, TINT16, DB_VAR},                         //!< tInf_PowerBatterie
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_PowerBatterie[2]
    0,                                                      //!< i16Def_PowerBatterie
    {0xffff, 1833, TUINT16, DB_VAR},                        //!< tInf_MotorSpeedCmdJ1939
    {U16_MIN, U16_MAX},                                     //!< au16Rng_MotorSpeedCmdJ1939[2]
    0,                                                      //!< u16Def_MotorSpeedCmdJ1939
    {0xffff, 1834, TUINT8, DB_VAR},                         //!< tInf_OverrideControlModeCmdJ1939
    {U8_MIN, U8_MAX},                                       //!< au8Rng_OverrideControlModeCmdJ1939[2]
    0,                                                      //!< u8Def_OverrideControlModeCmdJ1939
    {0xffff, 1838, ESTATEBOOL2BITS_TYPE, DB_VAR},           //!< tInf_HighPressureOilJ1939
    {GE_OFF, GE_NA},                                        //!< aeRng_HighPressureOilJ1939[2]
    GE_OFF,                                                 //!< eDef_HighPressureOilJ1939
    {0xffff, 1839, ESTATEBOOL2BITS_TYPE, DB_VAR},           //!< tInf_WarmingActiveJ1939
    {GE_OFF, GE_NA},                                        //!< aeRng_WarmingActiveJ1939[2]
    GE_OFF,                                                 //!< eDef_WarmingActiveJ1939
    {0xffff, 1840, ESTATEBOOL2BITS_TYPE, DB_VAR},           //!< tInf_StopMotorJ1939
    {GE_OFF, GE_NA},                                        //!< aeRng_StopMotorJ1939[2]
    GE_OFF                                                  //!< eDef_StopMotorJ1939
};

const TDbSetNvParamGreenEffC1 gDb_ctSetNvParamGreenEffC1=
{
    {0xffff, 1999, TUINT16, DB_VAR},                        //!< tInf_REGEN_SOC_FULL
    {U16_MIN, U16_MAX},                                     //!< au16Rng_REGEN_SOC_FULL[2]
    100,                                                    //!< u16Def_REGEN_SOC_FULL
    {0xffff, 1852, TUINT16, DB_VAR},                        //!< tInf_REGEN_SOC_MAX
    {U16_MIN, U16_MAX},                                     //!< au16Rng_REGEN_SOC_MAX[2]
    95,                                                     //!< u16Def_REGEN_SOC_MAX
    {0xffff, 1996, TUINT16, DB_VAR},                        //!< tInf_REGEN_HYST_SOC_MAX
    {U16_MIN, U16_MAX},                                     //!< au16Rng_REGEN_HYST_SOC_MAX[2]
    7,                                                      //!< u16Def_REGEN_HYST_SOC_MAX
    {0xffff, 1853, TUINT16, DB_VAR},                        //!< tInf_NBR_REGEN_SOC_ALARM
    {U16_MIN, U16_MAX},                                     //!< au16Rng_NBR_REGEN_SOC_ALARM[2]
    7,                                                      //!< u16Def_NBR_REGEN_SOC_ALARM
    {0xffff, 1854, TUINT16, DB_VAR},                        //!< tInf_NBR_REGEN_SOC_OVERED
    {U16_MIN, U16_MAX},                                     //!< au16Rng_NBR_REGEN_SOC_OVERED[2]
    10,                                                     //!< u16Def_NBR_REGEN_SOC_OVERED
    {0xffff, 1863, TUINT16, DB_VAR},                        //!< tInf_ELECTRIC_MOTOR_RPM_MAX
    {U16_MIN, U16_MAX},                                     //!< au16Rng_ELECTRIC_MOTOR_RPM_MAX[2]
    3450,                                                   //!< u16Def_ELECTRIC_MOTOR_RPM_MAX
    {0xffff, 1865, TUINT16, DB_VAR},                        //!< tInf_ELECTRIC_MOTOR_RPM_MIN
    {U16_MIN, U16_MAX},                                     //!< au16Rng_ELECTRIC_MOTOR_RPM_MIN[2]
    800,                                                    //!< u16Def_ELECTRIC_MOTOR_RPM_MIN
    {0xffff, 1866, TUINT16, DB_VAR},                        //!< tInf_ELECTRIC_MOTOR_RPM_PVG
    {U16_MIN, U16_MAX},                                     //!< au16Rng_ELECTRIC_MOTOR_RPM_PVG[2]
    2000,                                                   //!< u16Def_ELECTRIC_MOTOR_RPM_PVG
    {0xffff, 1867, TUINT16, DB_VAR},                        //!< tInf_ELECTRIC_MOTOR_RPM_TOR
    {U16_MIN, U16_MAX},                                     //!< au16Rng_ELECTRIC_MOTOR_RPM_TOR[2]
    300,                                                    //!< u16Def_ELECTRIC_MOTOR_RPM_TOR
    {0xffff, 1864, TINT16, DB_VAR},                         //!< tInf_ELECTRIC_MOTOR_COLD_OIL_TEMP
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_ELECTRIC_MOTOR_COLD_OIL_TEMP[2]
    30,                                                     //!< i16Def_ELECTRIC_MOTOR_COLD_OIL_TEMP
    {0xffff, 1955, TUINT16, DB_VAR},                        //!< tInf_BATTERY_CAPACITY_AMP_HOUR
    {U16_MIN, U16_MAX},                                     //!< au16Rng_BATTERY_CAPACITY_AMP_HOUR[2]
    210,                                                    //!< u16Def_BATTERY_CAPACITY_AMP_HOUR
    {0xffff, 1956, TUINT8, DB_VAR},                         //!< tInf_NbElementRemainingRegenTime
    {U8_MIN, U8_MAX},                                       //!< au8Rng_NbElementRemainingRegenTime[2]
    10                                                      //!< u8Def_NbElementRemainingRegenTime
};

const TDbSetRamGreenEffC1 gDb_ctSetRamGreenEffC1=
{
    {0xffff, 1859, TBOOLEAN, DB_VAR},                       //!< tInf_AlarmCptNbrRegenFinish
    {FALSE, TRUE},                                          //!< aboRng_AlarmCptNbrRegenFinish[2]
    FALSE,                                                  //!< boDef_AlarmCptNbrRegenFinish
    {0xffff, 1860, TBOOLEAN, DB_VAR},                       //!< tInf_ElectricMotorForbidden
    {FALSE, TRUE},                                          //!< aboRng_ElectricMotorForbidden[2]
    FALSE,                                                  //!< boDef_ElectricMotorForbidden
    {0xffff, 1868, TBOOLEAN, DB_VAR},                       //!< tInf_ColdOilTankTemperature
    {FALSE, TRUE},                                          //!< aboRng_ColdOilTankTemperature[2]
    FALSE,                                                  //!< boDef_ColdOilTankTemperature
    {0xffff, 1902, TINT16, DB_VAR},                         //!< tInf_RpmMvtsElectricMode
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_RpmMvtsElectricMode[2]
    0,                                                      //!< i16Def_RpmMvtsElectricMode
    {0xffff, 1903, TINT16, DB_VAR},                         //!< tInf_RpmTransRailElectricMode
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_RpmTransRailElectricMode[2]
    0,                                                      //!< i16Def_RpmTransRailElectricMode
    {0xffff, 1904, TINT16, DB_VAR},                         //!< tInf_RpmOilTankTemp
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_RpmOilTankTemp[2]
    0,                                                      //!< i16Def_RpmOilTankTemp
    {0xffff, 1905, TINT16, DB_VAR},                         //!< tInf_RpmMotorElectric
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_RpmMotorElectric[2]
    0,                                                      //!< i16Def_RpmMotorElectric
    {0xffff, 1965, TBOOLEAN, DB_VAR},                       //!< tInf_GeneratorOn
    {FALSE, TRUE},                                          //!< aboRng_GeneratorOn[2]
    FALSE,                                                  //!< boDef_GeneratorOn
    {0xffff, 1966, TBOOLEAN, DB_VAR},                       //!< tInf_AutoModeActivate
    {FALSE, TRUE},                                          //!< aboRng_AutoModeActivate[2]
    FALSE,                                                  //!< boDef_AutoModeActivate
    {0xffff, 1967, TBOOLEAN, DB_VAR},                       //!< tInf_SilenceModeActivate
    {FALSE, TRUE},                                          //!< aboRng_SilenceModeActivate[2]
    FALSE,                                                  //!< boDef_SilenceModeActivate
    {0xffff, 1968, TBOOLEAN, DB_VAR},                       //!< tInf_ForcingModeActivate
    {FALSE, TRUE},                                          //!< aboRng_ForcingModeActivate[2]
    FALSE,                                                  //!< boDef_ForcingModeActivate
    {0xffff, 1969, TBOOLEAN, DB_VAR},                       //!< tInf_ForcingRegenlow
    {FALSE, TRUE},                                          //!< aboRng_ForcingRegenlow[2]
    FALSE,                                                  //!< boDef_ForcingRegenlow
    {0xffff, 1970, TBOOLEAN, DB_VAR},                       //!< tInf_ForcingRegenHigh
    {FALSE, TRUE},                                          //!< aboRng_ForcingRegenHigh[2]
    FALSE,                                                  //!< boDef_ForcingRegenHigh
    {0xffff, 1971, TUINT16, DB_VAR},                        //!< tInf_RemainingRegenTimeAverage
    {U16_MIN, U16_MAX},                                     //!< au16Rng_RemainingRegenTimeAverage[2]
    0,                                                      //!< u16Def_RemainingRegenTimeAverage
    {0xffff, 1976, TBOOLEAN, DB_VAR},                       //!< tInf_AskReloadWithGenerator
    {FALSE, TRUE},                                          //!< aboRng_AskReloadWithGenerator[2]
    FALSE,                                                  //!< boDef_AskReloadWithGenerator
    {0xffff, 1977, TBOOLEAN, DB_VAR},                       //!< tInf_ReloadWithGeneratorOn
    {FALSE, TRUE},                                          //!< aboRng_ReloadWithGeneratorOn[2]
    FALSE,                                                  //!< boDef_ReloadWithGeneratorOn
    {0xffff, 2000, TBOOLEAN, DB_VAR},                       //!< tInf_SocStopRegen
    {FALSE, TRUE},                                          //!< aboRng_SocStopRegen[2]
    FALSE,                                                  //!< boDef_SocStopRegen
    {0xffff, 2008, TUINT16, DB_VAR},                        //!< tInf_TotalRegenHours
    {U16_MIN, U16_MAX},                                     //!< au16Rng_TotalRegenHours[2]
    0,                                                      //!< u16Def_TotalRegenHours
    {0xffff, 2016, TBOOLEAN, DB_VAR},                       //!< tInf_PictoColdOilTankTemperature
    {FALSE, TRUE},                                          //!< aboRng_PictoColdOilTankTemperature[2]
    FALSE,                                                  //!< boDef_PictoColdOilTankTemperature
    {0xffff, 2078, TUINT16, DB_VAR},                        //!< tInf_TotalElectricHours
    {U16_MIN, U16_MAX},                                     //!< au16Rng_TotalElectricHours[2]
    0,                                                      //!< u16Def_TotalElectricHours
    {0xffff, 2150, TBOOLEAN, DB_VAR},                       //!< tInf_PictoRecoveryReductionRatio
    {FALSE, TRUE},                                          //!< aboRng_PictoRecoveryReductionRatio[2]
    FALSE                                                   //!< boDef_PictoRecoveryReductionRatio
};

// LIST-TABEL ------------------------------------------------------------------------------------


const TDbVarTabRam gDb_catVarTabRamEcuInputsC1[61] =
{    //!< *cptInf *vpVal *cvpDataDef 
    { &gDb_ctSetRamEcuInputsC1.tInf_DeltaArmAngularSensorState, (TVoid*)&gDb_tRamEcuInputsC1.bi3DeltaArmAngularSensorState, (TVoid*)&gDb_ctSetRamEcuInputsC1.bi3Def_DeltaArmAngularSensorState, (TVoid*)&gDb_ctSetRamEcuInputsC1.abi3Rng_DeltaArmAngularSensorState[0]},
    { &gDb_ctSetRamEcuInputsC1.tInf_DeltaArmAngularSensorValue, (TVoid*)&gDb_tRamEcuInputsC1.i16DeltaArmAngularSensorValue, (TVoid*)&gDb_ctSetRamEcuInputsC1.i16Def_DeltaArmAngularSensorValue, (TVoid*)&gDb_ctSetRamEcuInputsC1.ai16Rng_DeltaArmAngularSensorValue[0]},
    { &gDb_ctSetRamEcuInputsC1.tInf_DeltaArmAngleValue, (TVoid*)&gDb_tRamEcuInputsC1.i16DeltaArmAngleValue, (TVoid*)&gDb_ctSetRamEcuInputsC1.i16Def_DeltaArmAngleValue, (TVoid*)&gDb_ctSetRamEcuInputsC1.ai16Rng_DeltaArmAngleValue[0]},
    { &gDb_ctSetRamEcuInputsC1.tInf_DeltaArmAngularSensorRawValueMas, (TVoid*)&gDb_tRamEcuInputsC1.u16DeltaArmAngularSensorRawValueMas, (TVoid*)&gDb_ctSetRamEcuInputsC1.u16Def_DeltaArmAngularSensorRawValueMas, (TVoid*)&gDb_ctSetRamEcuInputsC1.au16Rng_DeltaArmAngularSensorRawValueMas[0]},
    { &gDb_ctSetRamEcuInputsC1.tInf_DeltaArmAngularSensorRawValueSla, (TVoid*)&gDb_tRamEcuInputsC1.u16DeltaArmAngularSensorRawValueSla, (TVoid*)&gDb_ctSetRamEcuInputsC1.u16Def_DeltaArmAngularSensorRawValueSla, (TVoid*)&gDb_ctSetRamEcuInputsC1.au16Rng_DeltaArmAngularSensorRawValueSla[0]},
    { &gDb_ctSetRamEcuInputsC1.tInf_ArrowArmAngularSensorState, (TVoid*)&gDb_tRamEcuInputsC1.bi3ArrowArmAngularSensorState, (TVoid*)&gDb_ctSetRamEcuInputsC1.bi3Def_ArrowArmAngularSensorState, (TVoid*)&gDb_ctSetRamEcuInputsC1.abi3Rng_ArrowArmAngularSensorState[0]},
    { &gDb_ctSetRamEcuInputsC1.tInf_ArrowArmAngularSensorValue, (TVoid*)&gDb_tRamEcuInputsC1.i16ArrowArmAngularSensorValue, (TVoid*)&gDb_ctSetRamEcuInputsC1.i16Def_ArrowArmAngularSensorValue, (TVoid*)&gDb_ctSetRamEcuInputsC1.ai16Rng_ArrowArmAngularSensorValue[0]},
    { &gDb_ctSetRamEcuInputsC1.tInf_ArrowArmAngleValue, (TVoid*)&gDb_tRamEcuInputsC1.i16ArrowArmAngleValue, (TVoid*)&gDb_ctSetRamEcuInputsC1.i16Def_ArrowArmAngleValue, (TVoid*)&gDb_ctSetRamEcuInputsC1.ai16Rng_ArrowArmAngleValue[0]},
    { &gDb_ctSetRamEcuInputsC1.tInf_ArrowArmAngularSensorRawValueMas, (TVoid*)&gDb_tRamEcuInputsC1.u16ArrowArmAngularSensorRawValueMas, (TVoid*)&gDb_ctSetRamEcuInputsC1.u16Def_ArrowArmAngularSensorRawValueMas, (TVoid*)&gDb_ctSetRamEcuInputsC1.au16Rng_ArrowArmAngularSensorRawValueMas[0]},
    { &gDb_ctSetRamEcuInputsC1.tInf_ArrowArmAngularSensorRawValueSla, (TVoid*)&gDb_tRamEcuInputsC1.u16ArrowArmAngularSensorRawValueSla, (TVoid*)&gDb_ctSetRamEcuInputsC1.u16Def_ArrowArmAngularSensorRawValueSla, (TVoid*)&gDb_ctSetRamEcuInputsC1.au16Rng_ArrowArmAngularSensorRawValueSla[0]},
    { &gDb_ctSetRamEcuInputsC1.tInf_GasGaugeValue, (TVoid*)&gDb_tRamEcuInputsC1.i16GasGaugeValue, (TVoid*)&gDb_ctSetRamEcuInputsC1.i16Def_GasGaugeValue, (TVoid*)&gDb_ctSetRamEcuInputsC1.ai16Rng_GasGaugeValue[0]},
    { &gDb_ctSetRamEcuInputsC1.tInf_GasGaugeRawValue, (TVoid*)&gDb_tRamEcuInputsC1.u32GasGaugeRawValue, (TVoid*)&gDb_ctSetRamEcuInputsC1.u32Def_GasGaugeRawValue, (TVoid*)&gDb_ctSetRamEcuInputsC1.au32Rng_GasGaugeRawValue[0]},
    { &gDb_ctSetRamEcuInputsC1.tInf_Aru1State, (TVoid*)&gDb_tRamEcuInputsC1.eAru1State, (TVoid*)&gDb_ctSetRamEcuInputsC1.eDef_Aru1State, (TVoid*)&gDb_ctSetRamEcuInputsC1.aeRng_Aru1State[0]},
    { &gDb_ctSetRamEcuInputsC1.tInf_Aru1RawValue, (TVoid*)&gDb_tRamEcuInputsC1.u16Aru1RawValue, (TVoid*)&gDb_ctSetRamEcuInputsC1.u16Def_Aru1RawValue, (TVoid*)&gDb_ctSetRamEcuInputsC1.au16Rng_Aru1RawValue[0]},
    { &gDb_ctSetRamEcuInputsC1.tInf_Aru2State, (TVoid*)&gDb_tRamEcuInputsC1.eAru2State, (TVoid*)&gDb_ctSetRamEcuInputsC1.eDef_Aru2State, (TVoid*)&gDb_ctSetRamEcuInputsC1.aeRng_Aru2State[0]},
    { &gDb_ctSetRamEcuInputsC1.tInf_Aru2RawValue, (TVoid*)&gDb_tRamEcuInputsC1.u16Aru2RawValue, (TVoid*)&gDb_ctSetRamEcuInputsC1.u16Def_Aru2RawValue, (TVoid*)&gDb_ctSetRamEcuInputsC1.au16Rng_Aru2RawValue[0]},
    { &gDb_ctSetRamEcuInputsC1.tInf_EntryTelescopeFdcSensorState, (TVoid*)&gDb_tRamEcuInputsC1.eEntryTelescopeFdcSensorState, (TVoid*)&gDb_ctSetRamEcuInputsC1.eDef_EntryTelescopeFdcSensorState, (TVoid*)&gDb_ctSetRamEcuInputsC1.aeRng_EntryTelescopeFdcSensorState[0]},
    { &gDb_ctSetRamEcuInputsC1.tInf_EntryTelescopeFdcSensorRawValue, (TVoid*)&gDb_tRamEcuInputsC1.u16EntryTelescopeFdcSensorRawValue, (TVoid*)&gDb_ctSetRamEcuInputsC1.u16Def_EntryTelescopeFdcSensorRawValue, (TVoid*)&gDb_ctSetRamEcuInputsC1.au16Rng_EntryTelescopeFdcSensorRawValue[0]},
    { &gDb_ctSetRamEcuInputsC1.tInf_FoldedDeltaArmSensorState, (TVoid*)&gDb_tRamEcuInputsC1.eFoldedDeltaArmSensorState, (TVoid*)&gDb_ctSetRamEcuInputsC1.eDef_FoldedDeltaArmSensorState, (TVoid*)&gDb_ctSetRamEcuInputsC1.aeRng_FoldedDeltaArmSensorState[0]},
    { &gDb_ctSetRamEcuInputsC1.tInf_FoldedDeltaArmSensorRawValue, (TVoid*)&gDb_tRamEcuInputsC1.u16FoldedDeltaArmSensorRawValue, (TVoid*)&gDb_ctSetRamEcuInputsC1.u16Def_FoldedDeltaArmSensorRawValue, (TVoid*)&gDb_ctSetRamEcuInputsC1.au16Rng_FoldedDeltaArmSensorRawValue[0]},
    { &gDb_ctSetRamEcuInputsC1.tInf_FoldedBoomArmSensorState, (TVoid*)&gDb_tRamEcuInputsC1.eFoldedBoomArmSensorState, (TVoid*)&gDb_ctSetRamEcuInputsC1.eDef_FoldedBoomArmSensorState, (TVoid*)&gDb_ctSetRamEcuInputsC1.aeRng_FoldedBoomArmSensorState[0]},
    { &gDb_ctSetRamEcuInputsC1.tInf_FoldedBoomArmSensorRawValue, (TVoid*)&gDb_tRamEcuInputsC1.u16FoldedBoomArmSensorRawValue, (TVoid*)&gDb_ctSetRamEcuInputsC1.u16Def_FoldedBoomArmSensorRawValue, (TVoid*)&gDb_ctSetRamEcuInputsC1.au16Rng_FoldedBoomArmSensorRawValue[0]},
    { &gDb_ctSetRamEcuInputsC1.tInf_ForcingMotorRegimeState, (TVoid*)&gDb_tRamEcuInputsC1.eForcingMotorRegimeState, (TVoid*)&gDb_ctSetRamEcuInputsC1.eDef_ForcingMotorRegimeState, (TVoid*)&gDb_ctSetRamEcuInputsC1.aeRng_ForcingMotorRegimeState[0]},
    { &gDb_ctSetRamEcuInputsC1.tInf_ForcingMotorRegimeRawValue, (TVoid*)&gDb_tRamEcuInputsC1.u16ForcingMotorRegimeRawValue, (TVoid*)&gDb_ctSetRamEcuInputsC1.u16Def_ForcingMotorRegimeRawValue, (TVoid*)&gDb_ctSetRamEcuInputsC1.au16Rng_ForcingMotorRegimeRawValue[0]},
    { &gDb_ctSetRamEcuInputsC1.tInf_ActiveHelpState, (TVoid*)&gDb_tRamEcuInputsC1.eActiveHelpState, (TVoid*)&gDb_ctSetRamEcuInputsC1.eDef_ActiveHelpState, (TVoid*)&gDb_ctSetRamEcuInputsC1.aeRng_ActiveHelpState[0]},
    { &gDb_ctSetRamEcuInputsC1.tInf_ActiveHelpRawValue, (TVoid*)&gDb_tRamEcuInputsC1.u16ActiveHelpRawValue, (TVoid*)&gDb_ctSetRamEcuInputsC1.u16Def_ActiveHelpRawValue, (TVoid*)&gDb_ctSetRamEcuInputsC1.au16Rng_ActiveHelpRawValue[0]},
    { &gDb_ctSetRamEcuInputsC1.tInf_OilPressureState, (TVoid*)&gDb_tRamEcuInputsC1.eOilPressureState, (TVoid*)&gDb_ctSetRamEcuInputsC1.eDef_OilPressureState, (TVoid*)&gDb_ctSetRamEcuInputsC1.aeRng_OilPressureState[0]},
    { &gDb_ctSetRamEcuInputsC1.tInf_OilPressureRawValue, (TVoid*)&gDb_tRamEcuInputsC1.u16OilPressureRawValue, (TVoid*)&gDb_ctSetRamEcuInputsC1.u16Def_OilPressureRawValue, (TVoid*)&gDb_ctSetRamEcuInputsC1.au16Rng_OilPressureRawValue[0]},
    { &gDb_ctSetRamEcuInputsC1.tInf_WaterTemperatureState, (TVoid*)&gDb_tRamEcuInputsC1.eWaterTemperatureState, (TVoid*)&gDb_ctSetRamEcuInputsC1.eDef_WaterTemperatureState, (TVoid*)&gDb_ctSetRamEcuInputsC1.aeRng_WaterTemperatureState[0]},
    { &gDb_ctSetRamEcuInputsC1.tInf_WaterTemperatureRawValue, (TVoid*)&gDb_tRamEcuInputsC1.u16WaterTemperatureRawValue, (TVoid*)&gDb_ctSetRamEcuInputsC1.u16Def_WaterTemperatureRawValue, (TVoid*)&gDb_ctSetRamEcuInputsC1.au16Rng_WaterTemperatureRawValue[0]},
    { &gDb_ctSetRamEcuInputsC1.tInf_StopMotorInfoState, (TVoid*)&gDb_tRamEcuInputsC1.eStopMotorInfoState, (TVoid*)&gDb_ctSetRamEcuInputsC1.eDef_StopMotorInfoState, (TVoid*)&gDb_ctSetRamEcuInputsC1.aeRng_StopMotorInfoState[0]},
    { &gDb_ctSetRamEcuInputsC1.tInf_StopMotorInfoRawValue, (TVoid*)&gDb_tRamEcuInputsC1.u16StopMotorInfoRawValue, (TVoid*)&gDb_ctSetRamEcuInputsC1.u16Def_StopMotorInfoRawValue, (TVoid*)&gDb_ctSetRamEcuInputsC1.au16Rng_StopMotorInfoRawValue[0]},
    { &gDb_ctSetRamEcuInputsC1.tInf_TurretPostSelectorState, (TVoid*)&gDb_tRamEcuInputsC1.eTurretPostSelectorState, (TVoid*)&gDb_ctSetRamEcuInputsC1.eDef_TurretPostSelectorState, (TVoid*)&gDb_ctSetRamEcuInputsC1.aeRng_TurretPostSelectorState[0]},
    { &gDb_ctSetRamEcuInputsC1.tInf_TurretPostSelectorRawValue, (TVoid*)&gDb_tRamEcuInputsC1.u16TurretPostSelectorRawValue, (TVoid*)&gDb_ctSetRamEcuInputsC1.u16Def_TurretPostSelectorRawValue, (TVoid*)&gDb_ctSetRamEcuInputsC1.au16Rng_TurretPostSelectorRawValue[0]},
    { &gDb_ctSetRamEcuInputsC1.tInf_RadioPostSelectorState, (TVoid*)&gDb_tRamEcuInputsC1.eRadioPostSelectorState, (TVoid*)&gDb_ctSetRamEcuInputsC1.eDef_RadioPostSelectorState, (TVoid*)&gDb_ctSetRamEcuInputsC1.aeRng_RadioPostSelectorState[0]},
    { &gDb_ctSetRamEcuInputsC1.tInf_RadioPostSelectorRawValue, (TVoid*)&gDb_tRamEcuInputsC1.u16RadioPostSelectorRawValue, (TVoid*)&gDb_ctSetRamEcuInputsC1.u16Def_RadioPostSelectorRawValue, (TVoid*)&gDb_ctSetRamEcuInputsC1.au16Rng_RadioPostSelectorRawValue[0]},
    { &gDb_ctSetRamEcuInputsC1.tInf_NacellePostSelectorState, (TVoid*)&gDb_tRamEcuInputsC1.eNacellePostSelectorState, (TVoid*)&gDb_ctSetRamEcuInputsC1.eDef_NacellePostSelectorState, (TVoid*)&gDb_ctSetRamEcuInputsC1.aeRng_NacellePostSelectorState[0]},
    { &gDb_ctSetRamEcuInputsC1.tInf_NacellePostSelectorRawValue, (TVoid*)&gDb_tRamEcuInputsC1.u16NacellePostSelectorRawValue, (TVoid*)&gDb_ctSetRamEcuInputsC1.u16Def_NacellePostSelectorRawValue, (TVoid*)&gDb_ctSetRamEcuInputsC1.au16Rng_NacellePostSelectorRawValue[0]},
    { &gDb_ctSetRamEcuInputsC1.tInf_RegimeMotorAlternatorRpm, (TVoid*)&gDb_tRamEcuInputsC1.i32RegimeMotorAlternatorRpm, (TVoid*)&gDb_ctSetRamEcuInputsC1.i32Def_RegimeMotorAlternatorRpm, (TVoid*)&gDb_ctSetRamEcuInputsC1.ai32Rng_RegimeMotorAlternatorRpm[0]},
    { &gDb_ctSetRamEcuInputsC1.tInf_AlternatorChargeOkState, (TVoid*)&gDb_tRamEcuInputsC1.eAlternatorChargeOkState, (TVoid*)&gDb_ctSetRamEcuInputsC1.eDef_AlternatorChargeOkState, (TVoid*)&gDb_ctSetRamEcuInputsC1.aeRng_AlternatorChargeOkState[0]},
    { &gDb_ctSetRamEcuInputsC1.tInf_AlternatorChargeOkValue, (TVoid*)&gDb_tRamEcuInputsC1.u16AlternatorChargeOkValue, (TVoid*)&gDb_ctSetRamEcuInputsC1.u16Def_AlternatorChargeOkValue, (TVoid*)&gDb_ctSetRamEcuInputsC1.au16Rng_AlternatorChargeOkValue[0]},
    { &gDb_ctSetRamEcuInputsC1.tInf_Transmission1PressureSensorState, (TVoid*)&gDb_tRamEcuInputsC1.bi3Transmission1PressureSensorState, (TVoid*)&gDb_ctSetRamEcuInputsC1.bi3Def_Transmission1PressureSensorState, (TVoid*)&gDb_ctSetRamEcuInputsC1.abi3Rng_Transmission1PressureSensorState[0]},
    { &gDb_ctSetRamEcuInputsC1.tInf_Transmission1PressureSensorValue, (TVoid*)&gDb_tRamEcuInputsC1.i16Transmission1PressureSensorValue, (TVoid*)&gDb_ctSetRamEcuInputsC1.i16Def_Transmission1PressureSensorValue, (TVoid*)&gDb_ctSetRamEcuInputsC1.ai16Rng_Transmission1PressureSensorValue[0]},
    { &gDb_ctSetRamEcuInputsC1.tInf_Transmission2PressureSensorState, (TVoid*)&gDb_tRamEcuInputsC1.bi3Transmission2PressureSensorState, (TVoid*)&gDb_ctSetRamEcuInputsC1.bi3Def_Transmission2PressureSensorState, (TVoid*)&gDb_ctSetRamEcuInputsC1.abi3Rng_Transmission2PressureSensorState[0]},
    { &gDb_ctSetRamEcuInputsC1.tInf_Transmission2PressureSensorValue, (TVoid*)&gDb_tRamEcuInputsC1.i16Transmission2PressureSensorValue, (TVoid*)&gDb_ctSetRamEcuInputsC1.i16Def_Transmission2PressureSensorValue, (TVoid*)&gDb_ctSetRamEcuInputsC1.ai16Rng_Transmission2PressureSensorValue[0]},
    { &gDb_ctSetRamEcuInputsC1.tInf_FaultPvgDeltaArmState, (TVoid*)&gDb_tRamEcuInputsC1.eFaultPvgDeltaArmState, (TVoid*)&gDb_ctSetRamEcuInputsC1.eDef_FaultPvgDeltaArmState, (TVoid*)&gDb_ctSetRamEcuInputsC1.aeRng_FaultPvgDeltaArmState[0]},
    { &gDb_ctSetRamEcuInputsC1.tInf_FaultPvgDeltaArmRawValue, (TVoid*)&gDb_tRamEcuInputsC1.u16FaultPvgDeltaArmRawValue, (TVoid*)&gDb_ctSetRamEcuInputsC1.u16Def_FaultPvgDeltaArmRawValue, (TVoid*)&gDb_ctSetRamEcuInputsC1.au16Rng_FaultPvgDeltaArmRawValue[0]},
    { &gDb_ctSetRamEcuInputsC1.tInf_FaultPvgArrowArmState, (TVoid*)&gDb_tRamEcuInputsC1.eFaultPvgArrowArmState, (TVoid*)&gDb_ctSetRamEcuInputsC1.eDef_FaultPvgArrowArmState, (TVoid*)&gDb_ctSetRamEcuInputsC1.aeRng_FaultPvgArrowArmState[0]},
    { &gDb_ctSetRamEcuInputsC1.tInf_FaultPvgArrowArmRawValue, (TVoid*)&gDb_tRamEcuInputsC1.u16FaultPvgArrowArmRawValue, (TVoid*)&gDb_ctSetRamEcuInputsC1.u16Def_FaultPvgArrowArmRawValue, (TVoid*)&gDb_ctSetRamEcuInputsC1.au16Rng_FaultPvgArrowArmRawValue[0]},
    { &gDb_ctSetRamEcuInputsC1.tInf_FaultPvgTelescopeArmState, (TVoid*)&gDb_tRamEcuInputsC1.eFaultPvgTelescopeArmState, (TVoid*)&gDb_ctSetRamEcuInputsC1.eDef_FaultPvgTelescopeArmState, (TVoid*)&gDb_ctSetRamEcuInputsC1.aeRng_FaultPvgTelescopeArmState[0]},
    { &gDb_ctSetRamEcuInputsC1.tInf_FaultPvgTelescopeArmRawValue, (TVoid*)&gDb_tRamEcuInputsC1.u16FaultPvgTelescopeArmRawValue, (TVoid*)&gDb_ctSetRamEcuInputsC1.u16Def_FaultPvgTelescopeArmRawValue, (TVoid*)&gDb_ctSetRamEcuInputsC1.au16Rng_FaultPvgTelescopeArmRawValue[0]},
    { &gDb_ctSetRamEcuInputsC1.tInf_FaultPvgEvProTorState, (TVoid*)&gDb_tRamEcuInputsC1.eFaultPvgEvProTorState, (TVoid*)&gDb_ctSetRamEcuInputsC1.eDef_FaultPvgEvProTorState, (TVoid*)&gDb_ctSetRamEcuInputsC1.aeRng_FaultPvgEvProTorState[0]},
    { &gDb_ctSetRamEcuInputsC1.tInf_FaultPvgEvProTorRawValue, (TVoid*)&gDb_tRamEcuInputsC1.u16FaultPvgEvProTorRawValue, (TVoid*)&gDb_ctSetRamEcuInputsC1.u16Def_FaultPvgEvProTorRawValue, (TVoid*)&gDb_ctSetRamEcuInputsC1.au16Rng_FaultPvgEvProTorRawValue[0]},
    { &gDb_ctSetRamEcuInputsC1.tInf_BypassPressureSensorState, (TVoid*)&gDb_tRamEcuInputsC1.bi3BypassPressureSensorState, (TVoid*)&gDb_ctSetRamEcuInputsC1.bi3Def_BypassPressureSensorState, (TVoid*)&gDb_ctSetRamEcuInputsC1.abi3Rng_BypassPressureSensorState[0]},
    { &gDb_ctSetRamEcuInputsC1.tInf_BypassPressureSensorValue, (TVoid*)&gDb_tRamEcuInputsC1.i16BypassPressureSensorValue, (TVoid*)&gDb_ctSetRamEcuInputsC1.i16Def_BypassPressureSensorValue, (TVoid*)&gDb_ctSetRamEcuInputsC1.ai16Rng_BypassPressureSensorValue[0]},
    { &gDb_ctSetRamEcuInputsC1.tInf_BypassPressureSensorRawValue, (TVoid*)&gDb_tRamEcuInputsC1.u16BypassPressureSensorRawValue, (TVoid*)&gDb_ctSetRamEcuInputsC1.u16Def_BypassPressureSensorRawValue, (TVoid*)&gDb_ctSetRamEcuInputsC1.au16Rng_BypassPressureSensorRawValue[0]},
    { &gDb_ctSetRamEcuInputsC1.tInf_StarterMotorState, (TVoid*)&gDb_tRamEcuInputsC1.eStarterMotorState, (TVoid*)&gDb_ctSetRamEcuInputsC1.eDef_StarterMotorState, (TVoid*)&gDb_ctSetRamEcuInputsC1.aeRng_StarterMotorState[0]},
    { &gDb_ctSetRamEcuInputsC1.tInf_StarterMotorRawValue, (TVoid*)&gDb_tRamEcuInputsC1.u16StarterMotorRawValue, (TVoid*)&gDb_ctSetRamEcuInputsC1.u16Def_StarterMotorRawValue, (TVoid*)&gDb_ctSetRamEcuInputsC1.au16Rng_StarterMotorRawValue[0]},
    { &gDb_ctSetRamEcuInputsC1.tInf_OilTankTemperatureState, (TVoid*)&gDb_tRamEcuInputsC1.bi3OilTankTemperatureState, (TVoid*)&gDb_ctSetRamEcuInputsC1.bi3Def_OilTankTemperatureState, (TVoid*)&gDb_ctSetRamEcuInputsC1.abi3Rng_OilTankTemperatureState[0]},
    { &gDb_ctSetRamEcuInputsC1.tInf_OilTankTemperatureValue, (TVoid*)&gDb_tRamEcuInputsC1.i16OilTankTemperatureValue, (TVoid*)&gDb_ctSetRamEcuInputsC1.i16Def_OilTankTemperatureValue, (TVoid*)&gDb_ctSetRamEcuInputsC1.ai16Rng_OilTankTemperatureValue[0]},
    { &gDb_ctSetRamEcuInputsC1.tInf_OilTankTemperatureRawValue, (TVoid*)&gDb_tRamEcuInputsC1.u16OilTankTemperatureRawValue, (TVoid*)&gDb_ctSetRamEcuInputsC1.u16Def_OilTankTemperatureRawValue, (TVoid*)&gDb_ctSetRamEcuInputsC1.au16Rng_OilTankTemperatureRawValue[0]}
};

const TDbVarTabRam gDb_catVarTabRamEcuOutputsC1[93] =
{    //!< *cptInf *vpVal *cvpDataDef 
    { &gDb_ctSetRamEcuOutputsC1.tInf_BlueFireCommand, (TVoid*)&gDb_tRamEcuOutputsC1.boBlueFireCommand, (TVoid*)&gDb_ctSetRamEcuOutputsC1.boDef_BlueFireCommand, (TVoid*)&gDb_ctSetRamEcuOutputsC1.aboRng_BlueFireCommand[0]},
    { &gDb_ctSetRamEcuOutputsC1.tInf_BlueFireValue, (TVoid*)&gDb_tRamEcuOutputsC1.eBlueFireValue, (TVoid*)&gDb_ctSetRamEcuOutputsC1.eDef_BlueFireValue, (TVoid*)&gDb_ctSetRamEcuOutputsC1.aeRng_BlueFireValue[0]},
    { &gDb_ctSetRamEcuOutputsC1.tInf_OrangeFlashingLightCommand, (TVoid*)&gDb_tRamEcuOutputsC1.boOrangeFlashingLightCommand, (TVoid*)&gDb_ctSetRamEcuOutputsC1.boDef_OrangeFlashingLightCommand, (TVoid*)&gDb_ctSetRamEcuOutputsC1.aboRng_OrangeFlashingLightCommand[0]},
    { &gDb_ctSetRamEcuOutputsC1.tInf_OrangeFlashingLightValue, (TVoid*)&gDb_tRamEcuOutputsC1.eOrangeFlashingLightValue, (TVoid*)&gDb_ctSetRamEcuOutputsC1.eDef_OrangeFlashingLightValue, (TVoid*)&gDb_ctSetRamEcuOutputsC1.aeRng_OrangeFlashingLightValue[0]},
    { &gDb_ctSetRamEcuOutputsC1.tInf_AntiStartupCommand, (TVoid*)&gDb_tRamEcuOutputsC1.boAntiStartupCommand, (TVoid*)&gDb_ctSetRamEcuOutputsC1.boDef_AntiStartupCommand, (TVoid*)&gDb_ctSetRamEcuOutputsC1.aboRng_AntiStartupCommand[0]},
    { &gDb_ctSetRamEcuOutputsC1.tInf_AntiStartupValue, (TVoid*)&gDb_tRamEcuOutputsC1.eAntiStartupValue, (TVoid*)&gDb_ctSetRamEcuOutputsC1.eDef_AntiStartupValue, (TVoid*)&gDb_ctSetRamEcuOutputsC1.aeRng_AntiStartupValue[0]},
    { &gDb_ctSetRamEcuOutputsC1.tInf_StopMotorCommand, (TVoid*)&gDb_tRamEcuOutputsC1.boStopMotorCommand, (TVoid*)&gDb_ctSetRamEcuOutputsC1.boDef_StopMotorCommand, (TVoid*)&gDb_ctSetRamEcuOutputsC1.aboRng_StopMotorCommand[0]},
    { &gDb_ctSetRamEcuOutputsC1.tInf_WarmingCommand, (TVoid*)&gDb_tRamEcuOutputsC1.boWarmingCommand, (TVoid*)&gDb_ctSetRamEcuOutputsC1.boDef_WarmingCommand, (TVoid*)&gDb_ctSetRamEcuOutputsC1.aboRng_WarmingCommand[0]},
    { &gDb_ctSetRamEcuOutputsC1.tInf_EvBypassCommand, (TVoid*)&gDb_tRamEcuOutputsC1.boEvBypassCommand, (TVoid*)&gDb_ctSetRamEcuOutputsC1.boDef_EvBypassCommand, (TVoid*)&gDb_ctSetRamEcuOutputsC1.aboRng_EvBypassCommand[0]},
    { &gDb_ctSetRamEcuOutputsC1.tInf_EvBypassValue, (TVoid*)&gDb_tRamEcuOutputsC1.eEvBypassValue, (TVoid*)&gDb_ctSetRamEcuOutputsC1.eDef_EvBypassValue, (TVoid*)&gDb_ctSetRamEcuOutputsC1.aeRng_EvBypassValue[0]},
    { &gDb_ctSetRamEcuOutputsC1.tInf_SupplyPvgDeltaArmCommand, (TVoid*)&gDb_tRamEcuOutputsC1.boSupplyPvgDeltaArmCommand, (TVoid*)&gDb_ctSetRamEcuOutputsC1.boDef_SupplyPvgDeltaArmCommand, (TVoid*)&gDb_ctSetRamEcuOutputsC1.aboRng_SupplyPvgDeltaArmCommand[0]},
    { &gDb_ctSetRamEcuOutputsC1.tInf_SupplyPvgDeltaArmValue, (TVoid*)&gDb_tRamEcuOutputsC1.eSupplyPvgDeltaArmValue, (TVoid*)&gDb_ctSetRamEcuOutputsC1.eDef_SupplyPvgDeltaArmValue, (TVoid*)&gDb_ctSetRamEcuOutputsC1.aeRng_SupplyPvgDeltaArmValue[0]},
    { &gDb_ctSetRamEcuOutputsC1.tInf_SupplyPvgArrowArmCommand, (TVoid*)&gDb_tRamEcuOutputsC1.boSupplyPvgArrowArmCommand, (TVoid*)&gDb_ctSetRamEcuOutputsC1.boDef_SupplyPvgArrowArmCommand, (TVoid*)&gDb_ctSetRamEcuOutputsC1.aboRng_SupplyPvgArrowArmCommand[0]},
    { &gDb_ctSetRamEcuOutputsC1.tInf_SupplyPvgArrowArmValue, (TVoid*)&gDb_tRamEcuOutputsC1.eSupplyPvgArrowArmValue, (TVoid*)&gDb_ctSetRamEcuOutputsC1.eDef_SupplyPvgArrowArmValue, (TVoid*)&gDb_ctSetRamEcuOutputsC1.aeRng_SupplyPvgArrowArmValue[0]},
    { &gDb_ctSetRamEcuOutputsC1.tInf_SupplyPvgTelescopeArmCommand, (TVoid*)&gDb_tRamEcuOutputsC1.boSupplyPvgTelescopeArmCommand, (TVoid*)&gDb_ctSetRamEcuOutputsC1.boDef_SupplyPvgTelescopeArmCommand, (TVoid*)&gDb_ctSetRamEcuOutputsC1.aboRng_SupplyPvgTelescopeArmCommand[0]},
    { &gDb_ctSetRamEcuOutputsC1.tInf_SupplyPvgTelescopeArmValue, (TVoid*)&gDb_tRamEcuOutputsC1.eSupplyPvgTelescopeArmValue, (TVoid*)&gDb_ctSetRamEcuOutputsC1.eDef_SupplyPvgTelescopeArmValue, (TVoid*)&gDb_ctSetRamEcuOutputsC1.aeRng_SupplyPvgTelescopeArmValue[0]},
    { &gDb_ctSetRamEcuOutputsC1.tInf_SupplyPvgPropEvTorCommand, (TVoid*)&gDb_tRamEcuOutputsC1.boSupplyPvgPropEvTorCommand, (TVoid*)&gDb_ctSetRamEcuOutputsC1.boDef_SupplyPvgPropEvTorCommand, (TVoid*)&gDb_ctSetRamEcuOutputsC1.aboRng_SupplyPvgPropEvTorCommand[0]},
    { &gDb_ctSetRamEcuOutputsC1.tInf_SupplyPvgPropEvTorValue, (TVoid*)&gDb_tRamEcuOutputsC1.eSupplyPvgPropEvTorValue, (TVoid*)&gDb_ctSetRamEcuOutputsC1.eDef_SupplyPvgPropEvTorValue, (TVoid*)&gDb_ctSetRamEcuOutputsC1.aeRng_SupplyPvgPropEvTorValue[0]},
    { &gDb_ctSetRamEcuOutputsC1.tInf_EvPropMotorAcceleratorCommand, (TVoid*)&gDb_tRamEcuOutputsC1.u16EvPropMotorAcceleratorCommand, (TVoid*)&gDb_ctSetRamEcuOutputsC1.u16Def_EvPropMotorAcceleratorCommand, (TVoid*)&gDb_ctSetRamEcuOutputsC1.au16Rng_EvPropMotorAcceleratorCommand[0]},
    { &gDb_ctSetRamEcuOutputsC1.tInf_EvPropGeneratorState, (TVoid*)&gDb_tRamEcuOutputsC1.eEvPropGeneratorState, (TVoid*)&gDb_ctSetRamEcuOutputsC1.eDef_EvPropGeneratorState, (TVoid*)&gDb_ctSetRamEcuOutputsC1.aeRng_EvPropGeneratorState[0]},
    { &gDb_ctSetRamEcuOutputsC1.tInf_EvPropGeneratorCommand, (TVoid*)&gDb_tRamEcuOutputsC1.u16EvPropGeneratorCommand, (TVoid*)&gDb_ctSetRamEcuOutputsC1.u16Def_EvPropGeneratorCommand, (TVoid*)&gDb_ctSetRamEcuOutputsC1.au16Rng_EvPropGeneratorCommand[0]},
    { &gDb_ctSetRamEcuOutputsC1.tInf_EvPropGeneratorCurrent, (TVoid*)&gDb_tRamEcuOutputsC1.u16EvPropGeneratorCurrent, (TVoid*)&gDb_ctSetRamEcuOutputsC1.u16Def_EvPropGeneratorCurrent, (TVoid*)&gDb_ctSetRamEcuOutputsC1.au16Rng_EvPropGeneratorCurrent[0]},
    { &gDb_ctSetRamEcuOutputsC1.tInf_NoisemakerState, (TVoid*)&gDb_tRamEcuOutputsC1.eNoisemakerState, (TVoid*)&gDb_ctSetRamEcuOutputsC1.eDef_NoisemakerState, (TVoid*)&gDb_ctSetRamEcuOutputsC1.aeRng_NoisemakerState[0]},
    { &gDb_ctSetRamEcuOutputsC1.tInf_NoisemakerCommand, (TVoid*)&gDb_tRamEcuOutputsC1.boNoisemakerCommand, (TVoid*)&gDb_ctSetRamEcuOutputsC1.boDef_NoisemakerCommand, (TVoid*)&gDb_ctSetRamEcuOutputsC1.aboRng_NoisemakerCommand[0]},
    { &gDb_ctSetRamEcuOutputsC1.tInf_EvRotationTurretCtClockwiseState, (TVoid*)&gDb_tRamEcuOutputsC1.eEvRotationTurretCtClockwiseState, (TVoid*)&gDb_ctSetRamEcuOutputsC1.eDef_EvRotationTurretCtClockwiseState, (TVoid*)&gDb_ctSetRamEcuOutputsC1.aeRng_EvRotationTurretCtClockwiseState[0]},
    { &gDb_ctSetRamEcuOutputsC1.tInf_EvRotTurretCtClockwiseCmdBool, (TVoid*)&gDb_tRamEcuOutputsC1.boEvRotTurretCtClockwiseCmdBool, (TVoid*)&gDb_ctSetRamEcuOutputsC1.boDef_EvRotTurretCtClockwiseCmdBool, (TVoid*)&gDb_ctSetRamEcuOutputsC1.aboRng_EvRotTurretCtClockwiseCmdBool[0]},
    { &gDb_ctSetRamEcuOutputsC1.tInf_EvRotationTurretClockwiseState, (TVoid*)&gDb_tRamEcuOutputsC1.eEvRotationTurretClockwiseState, (TVoid*)&gDb_ctSetRamEcuOutputsC1.eDef_EvRotationTurretClockwiseState, (TVoid*)&gDb_ctSetRamEcuOutputsC1.aeRng_EvRotationTurretClockwiseState[0]},
    { &gDb_ctSetRamEcuOutputsC1.tInf_EvRotTurretClockwiseCmdBool, (TVoid*)&gDb_tRamEcuOutputsC1.boEvRotTurretClockwiseCmdBool, (TVoid*)&gDb_ctSetRamEcuOutputsC1.boDef_EvRotTurretClockwiseCmdBool, (TVoid*)&gDb_ctSetRamEcuOutputsC1.aboRng_EvRotTurretClockwiseCmdBool[0]},
    { &gDb_ctSetRamEcuOutputsC1.tInf_EvRotationBasketCtClockwiseState, (TVoid*)&gDb_tRamEcuOutputsC1.eEvRotationBasketCtClockwiseState, (TVoid*)&gDb_ctSetRamEcuOutputsC1.eDef_EvRotationBasketCtClockwiseState, (TVoid*)&gDb_ctSetRamEcuOutputsC1.aeRng_EvRotationBasketCtClockwiseState[0]},
    { &gDb_ctSetRamEcuOutputsC1.tInf_EvRotationBasketCtClkWiseCmdBool, (TVoid*)&gDb_tRamEcuOutputsC1.boEvRotationBasketCtClkWiseCmdBool, (TVoid*)&gDb_ctSetRamEcuOutputsC1.boDef_EvRotationBasketCtClkWiseCmdBool, (TVoid*)&gDb_ctSetRamEcuOutputsC1.aboRng_EvRotationBasketCtClkWiseCmdBool[0]},
    { &gDb_ctSetRamEcuOutputsC1.tInf_EvRotationBasketClockwiseState, (TVoid*)&gDb_tRamEcuOutputsC1.eEvRotationBasketClockwiseState, (TVoid*)&gDb_ctSetRamEcuOutputsC1.eDef_EvRotationBasketClockwiseState, (TVoid*)&gDb_ctSetRamEcuOutputsC1.aeRng_EvRotationBasketClockwiseState[0]},
    { &gDb_ctSetRamEcuOutputsC1.tInf_EvRotationBasketClkWiseCmdBool, (TVoid*)&gDb_tRamEcuOutputsC1.boEvRotationBasketClkWiseCmdBool, (TVoid*)&gDb_ctSetRamEcuOutputsC1.boDef_EvRotationBasketClkWiseCmdBool, (TVoid*)&gDb_ctSetRamEcuOutputsC1.aboRng_EvRotationBasketClkWiseCmdBool[0]},
    { &gDb_ctSetRamEcuOutputsC1.tInf_EvUpPendularState, (TVoid*)&gDb_tRamEcuOutputsC1.eEvUpPendularState, (TVoid*)&gDb_ctSetRamEcuOutputsC1.eDef_EvUpPendularState, (TVoid*)&gDb_ctSetRamEcuOutputsC1.aeRng_EvUpPendularState[0]},
    { &gDb_ctSetRamEcuOutputsC1.tInf_EvUpPendularCommandBool, (TVoid*)&gDb_tRamEcuOutputsC1.boEvUpPendularCommandBool, (TVoid*)&gDb_ctSetRamEcuOutputsC1.boDef_EvUpPendularCommandBool, (TVoid*)&gDb_ctSetRamEcuOutputsC1.aboRng_EvUpPendularCommandBool[0]},
    { &gDb_ctSetRamEcuOutputsC1.tInf_EvDownPendularState, (TVoid*)&gDb_tRamEcuOutputsC1.eEvDownPendularState, (TVoid*)&gDb_ctSetRamEcuOutputsC1.eDef_EvDownPendularState, (TVoid*)&gDb_ctSetRamEcuOutputsC1.aeRng_EvDownPendularState[0]},
    { &gDb_ctSetRamEcuOutputsC1.tInf_EvDownPendularCommandBool, (TVoid*)&gDb_tRamEcuOutputsC1.boEvDownPendularCommandBool, (TVoid*)&gDb_ctSetRamEcuOutputsC1.boDef_EvDownPendularCommandBool, (TVoid*)&gDb_ctSetRamEcuOutputsC1.aboRng_EvDownPendularCommandBool[0]},
    { &gDb_ctSetRamEcuOutputsC1.tInf_EvUpInclinaisonBasketState, (TVoid*)&gDb_tRamEcuOutputsC1.eEvUpInclinaisonBasketState, (TVoid*)&gDb_ctSetRamEcuOutputsC1.eDef_EvUpInclinaisonBasketState, (TVoid*)&gDb_ctSetRamEcuOutputsC1.aeRng_EvUpInclinaisonBasketState[0]},
    { &gDb_ctSetRamEcuOutputsC1.tInf_EvUpInclinaisonBasketCmdBool, (TVoid*)&gDb_tRamEcuOutputsC1.boEvUpInclinaisonBasketCmdBool, (TVoid*)&gDb_ctSetRamEcuOutputsC1.boDef_EvUpInclinaisonBasketCmdBool, (TVoid*)&gDb_ctSetRamEcuOutputsC1.aboRng_EvUpInclinaisonBasketCmdBool[0]},
    { &gDb_ctSetRamEcuOutputsC1.tInf_EvDownInclinaisonBasketState, (TVoid*)&gDb_tRamEcuOutputsC1.eEvDownInclinaisonBasketState, (TVoid*)&gDb_ctSetRamEcuOutputsC1.eDef_EvDownInclinaisonBasketState, (TVoid*)&gDb_ctSetRamEcuOutputsC1.aeRng_EvDownInclinaisonBasketState[0]},
    { &gDb_ctSetRamEcuOutputsC1.tInf_EvDownInclinaisonBasketCommand, (TVoid*)&gDb_tRamEcuOutputsC1.u16EvDownInclinaisonBasketCommand, (TVoid*)&gDb_ctSetRamEcuOutputsC1.u16Def_EvDownInclinaisonBasketCommand, (TVoid*)&gDb_ctSetRamEcuOutputsC1.au16Rng_EvDownInclinaisonBasketCommand[0]},
    { &gDb_ctSetRamEcuOutputsC1.tInf_EvDownInclinaisonBasketCmdBool, (TVoid*)&gDb_tRamEcuOutputsC1.boEvDownInclinaisonBasketCmdBool, (TVoid*)&gDb_ctSetRamEcuOutputsC1.boDef_EvDownInclinaisonBasketCmdBool, (TVoid*)&gDb_ctSetRamEcuOutputsC1.aboRng_EvDownInclinaisonBasketCmdBool[0]},
    { &gDb_ctSetRamEcuOutputsC1.tInf_EvDownInclinaisonBasketCurrent, (TVoid*)&gDb_tRamEcuOutputsC1.u16EvDownInclinaisonBasketCurrent, (TVoid*)&gDb_ctSetRamEcuOutputsC1.u16Def_EvDownInclinaisonBasketCurrent, (TVoid*)&gDb_ctSetRamEcuOutputsC1.au16Rng_EvDownInclinaisonBasketCurrent[0]},
    { &gDb_ctSetRamEcuOutputsC1.tInf_PvgDeltaArmCommand, (TVoid*)&gDb_tRamEcuOutputsC1.u16PvgDeltaArmCommand, (TVoid*)&gDb_ctSetRamEcuOutputsC1.u16Def_PvgDeltaArmCommand, (TVoid*)&gDb_ctSetRamEcuOutputsC1.au16Rng_PvgDeltaArmCommand[0]},
    { &gDb_ctSetRamEcuOutputsC1.tInf_PvgDeltaArmVoltage, (TVoid*)&gDb_tRamEcuOutputsC1.u16PvgDeltaArmVoltage, (TVoid*)&gDb_ctSetRamEcuOutputsC1.u16Def_PvgDeltaArmVoltage, (TVoid*)&gDb_ctSetRamEcuOutputsC1.au16Rng_PvgDeltaArmVoltage[0]},
    { &gDb_ctSetRamEcuOutputsC1.tInf_PvgArrowArmCommand, (TVoid*)&gDb_tRamEcuOutputsC1.u16PvgArrowArmCommand, (TVoid*)&gDb_ctSetRamEcuOutputsC1.u16Def_PvgArrowArmCommand, (TVoid*)&gDb_ctSetRamEcuOutputsC1.au16Rng_PvgArrowArmCommand[0]},
    { &gDb_ctSetRamEcuOutputsC1.tInf_PvgArrowArmVoltage, (TVoid*)&gDb_tRamEcuOutputsC1.u16PvgArrowArmVoltage, (TVoid*)&gDb_ctSetRamEcuOutputsC1.u16Def_PvgArrowArmVoltage, (TVoid*)&gDb_ctSetRamEcuOutputsC1.au16Rng_PvgArrowArmVoltage[0]},
    { &gDb_ctSetRamEcuOutputsC1.tInf_PvgTelescopeArmCommand, (TVoid*)&gDb_tRamEcuOutputsC1.u16PvgTelescopeArmCommand, (TVoid*)&gDb_ctSetRamEcuOutputsC1.u16Def_PvgTelescopeArmCommand, (TVoid*)&gDb_ctSetRamEcuOutputsC1.au16Rng_PvgTelescopeArmCommand[0]},
    { &gDb_ctSetRamEcuOutputsC1.tInf_PvgTelescopeArmVoltage, (TVoid*)&gDb_tRamEcuOutputsC1.u16PvgTelescopeArmVoltage, (TVoid*)&gDb_ctSetRamEcuOutputsC1.u16Def_PvgTelescopeArmVoltage, (TVoid*)&gDb_ctSetRamEcuOutputsC1.au16Rng_PvgTelescopeArmVoltage[0]},
    { &gDb_ctSetRamEcuOutputsC1.tInf_OverloadSecurityCommand, (TVoid*)&gDb_tRamEcuOutputsC1.boOverloadSecurityCommand, (TVoid*)&gDb_ctSetRamEcuOutputsC1.boDef_OverloadSecurityCommand, (TVoid*)&gDb_ctSetRamEcuOutputsC1.aboRng_OverloadSecurityCommand[0]},
    { &gDb_ctSetRamEcuOutputsC1.tInf_OverloadSecurityValue, (TVoid*)&gDb_tRamEcuOutputsC1.eOverloadSecurityValue, (TVoid*)&gDb_ctSetRamEcuOutputsC1.eDef_OverloadSecurityValue, (TVoid*)&gDb_ctSetRamEcuOutputsC1.aeRng_OverloadSecurityValue[0]},
    { &gDb_ctSetRamEcuOutputsC1.tInf_SupllyTorSensorsCommand, (TVoid*)&gDb_tRamEcuOutputsC1.boSupllyTorSensorsCommand, (TVoid*)&gDb_ctSetRamEcuOutputsC1.boDef_SupllyTorSensorsCommand, (TVoid*)&gDb_ctSetRamEcuOutputsC1.aboRng_SupllyTorSensorsCommand[0]},
    { &gDb_ctSetRamEcuOutputsC1.tInf_SupllyTorSensorsValue, (TVoid*)&gDb_tRamEcuOutputsC1.eSupllyTorSensorsValue, (TVoid*)&gDb_ctSetRamEcuOutputsC1.eDef_SupllyTorSensorsValue, (TVoid*)&gDb_ctSetRamEcuOutputsC1.aeRng_SupllyTorSensorsValue[0]},
    { &gDb_ctSetRamEcuOutputsC1.tInf_SupllyAnaSensorsCommand, (TVoid*)&gDb_tRamEcuOutputsC1.boSupllyAnaSensorsCommand, (TVoid*)&gDb_ctSetRamEcuOutputsC1.boDef_SupllyAnaSensorsCommand, (TVoid*)&gDb_ctSetRamEcuOutputsC1.aboRng_SupllyAnaSensorsCommand[0]},
    { &gDb_ctSetRamEcuOutputsC1.tInf_SupllyAnaSensorsValue, (TVoid*)&gDb_tRamEcuOutputsC1.eSupllyAnaSensorsValue, (TVoid*)&gDb_ctSetRamEcuOutputsC1.eDef_SupllyAnaSensorsValue, (TVoid*)&gDb_ctSetRamEcuOutputsC1.aeRng_SupllyAnaSensorsValue[0]},
    { &gDb_ctSetRamEcuOutputsC1.tInf_EvSyncRotationCommand, (TVoid*)&gDb_tRamEcuOutputsC1.boEvSyncRotationCommand, (TVoid*)&gDb_ctSetRamEcuOutputsC1.boDef_EvSyncRotationCommand, (TVoid*)&gDb_ctSetRamEcuOutputsC1.aboRng_EvSyncRotationCommand[0]},
    { &gDb_ctSetRamEcuOutputsC1.tInf_EvSyncRotationValue, (TVoid*)&gDb_tRamEcuOutputsC1.eEvSyncRotationValue, (TVoid*)&gDb_ctSetRamEcuOutputsC1.eDef_EvSyncRotationValue, (TVoid*)&gDb_ctSetRamEcuOutputsC1.aeRng_EvSyncRotationValue[0]},
    { &gDb_ctSetRamEcuOutputsC1.tInf_PvgEvTorCommand, (TVoid*)&gDb_tRamEcuOutputsC1.u16PvgEvTorCommand, (TVoid*)&gDb_ctSetRamEcuOutputsC1.u16Def_PvgEvTorCommand, (TVoid*)&gDb_ctSetRamEcuOutputsC1.au16Rng_PvgEvTorCommand[0]},
    { &gDb_ctSetRamEcuOutputsC1.tInf_PvgEvTorVoltage, (TVoid*)&gDb_tRamEcuOutputsC1.u16PvgEvTorVoltage, (TVoid*)&gDb_ctSetRamEcuOutputsC1.u16Def_PvgEvTorVoltage, (TVoid*)&gDb_ctSetRamEcuOutputsC1.au16Rng_PvgEvTorVoltage[0]},
    { &gDb_ctSetRamEcuOutputsC1.tInf_EvUpPendularActivation, (TVoid*)&gDb_tRamEcuOutputsC1.boEvUpPendularActivation, (TVoid*)&gDb_ctSetRamEcuOutputsC1.boDef_EvUpPendularActivation, (TVoid*)&gDb_ctSetRamEcuOutputsC1.aboRng_EvUpPendularActivation[0]},
    { &gDb_ctSetRamEcuOutputsC1.tInf_EvDownPendularActivation, (TVoid*)&gDb_tRamEcuOutputsC1.boEvDownPendularActivation, (TVoid*)&gDb_ctSetRamEcuOutputsC1.boDef_EvDownPendularActivation, (TVoid*)&gDb_ctSetRamEcuOutputsC1.aboRng_EvDownPendularActivation[0]},
    { &gDb_ctSetRamEcuOutputsC1.tInf_EvRotBasketCtClkWiseActivation, (TVoid*)&gDb_tRamEcuOutputsC1.boEvRotBasketCtClkWiseActivation, (TVoid*)&gDb_ctSetRamEcuOutputsC1.boDef_EvRotBasketCtClkWiseActivation, (TVoid*)&gDb_ctSetRamEcuOutputsC1.aboRng_EvRotBasketCtClkWiseActivation[0]},
    { &gDb_ctSetRamEcuOutputsC1.tInf_EvRotBasketClkWiseActivation, (TVoid*)&gDb_tRamEcuOutputsC1.boEvRotBasketClkWiseActivation, (TVoid*)&gDb_ctSetRamEcuOutputsC1.boDef_EvRotBasketClkWiseActivation, (TVoid*)&gDb_ctSetRamEcuOutputsC1.aboRng_EvRotBasketClkWiseActivation[0]},
    { &gDb_ctSetRamEcuOutputsC1.tInf_EvUpIncliBasketActivation, (TVoid*)&gDb_tRamEcuOutputsC1.boEvUpIncliBasketActivation, (TVoid*)&gDb_ctSetRamEcuOutputsC1.boDef_EvUpIncliBasketActivation, (TVoid*)&gDb_ctSetRamEcuOutputsC1.aboRng_EvUpIncliBasketActivation[0]},
    { &gDb_ctSetRamEcuOutputsC1.tInf_EvDownIncliBasketActivation, (TVoid*)&gDb_tRamEcuOutputsC1.boEvDownIncliBasketActivation, (TVoid*)&gDb_ctSetRamEcuOutputsC1.boDef_EvDownIncliBasketActivation, (TVoid*)&gDb_ctSetRamEcuOutputsC1.aboRng_EvDownIncliBasketActivation[0]},
    { &gDb_ctSetRamEcuOutputsC1.tInf_EvRotTurretClockwiseActivation, (TVoid*)&gDb_tRamEcuOutputsC1.boEvRotTurretClockwiseActivation, (TVoid*)&gDb_ctSetRamEcuOutputsC1.boDef_EvRotTurretClockwiseActivation, (TVoid*)&gDb_ctSetRamEcuOutputsC1.aboRng_EvRotTurretClockwiseActivation[0]},
    { &gDb_ctSetRamEcuOutputsC1.tInf_EvRotTurretCtClockwiseActivation, (TVoid*)&gDb_tRamEcuOutputsC1.boEvRotTurretCtClockwiseActivation, (TVoid*)&gDb_ctSetRamEcuOutputsC1.boDef_EvRotTurretCtClockwiseActivation, (TVoid*)&gDb_ctSetRamEcuOutputsC1.aboRng_EvRotTurretCtClockwiseActivation[0]},
    { &gDb_ctSetRamEcuOutputsC1.tInf_EvSelectorRotTurretValue, (TVoid*)&gDb_tRamEcuOutputsC1.eEvSelectorRotTurretValue, (TVoid*)&gDb_ctSetRamEcuOutputsC1.eDef_EvSelectorRotTurretValue, (TVoid*)&gDb_ctSetRamEcuOutputsC1.aeRng_EvSelectorRotTurretValue[0]},
    { &gDb_ctSetRamEcuOutputsC1.tInf_EvSelectorRotTurretCmd, (TVoid*)&gDb_tRamEcuOutputsC1.boEvSelectorRotTurretCmd, (TVoid*)&gDb_ctSetRamEcuOutputsC1.boDef_EvSelectorRotTurretCmd, (TVoid*)&gDb_ctSetRamEcuOutputsC1.aboRng_EvSelectorRotTurretCmd[0]},
    { &gDb_ctSetRamEcuOutputsC1.tInf_ReturnLowSideEvProAccMotorCmd, (TVoid*)&gDb_tRamEcuOutputsC1.boReturnLowSideEvProAccMotorCmd, (TVoid*)&gDb_ctSetRamEcuOutputsC1.boDef_ReturnLowSideEvProAccMotorCmd, (TVoid*)&gDb_ctSetRamEcuOutputsC1.aboRng_ReturnLowSideEvProAccMotorCmd[0]},
    { &gDb_ctSetRamEcuOutputsC1.tInf_ReturnLowSideEvProGeneratorCmd, (TVoid*)&gDb_tRamEcuOutputsC1.boReturnLowSideEvProGeneratorCmd, (TVoid*)&gDb_ctSetRamEcuOutputsC1.boDef_ReturnLowSideEvProGeneratorCmd, (TVoid*)&gDb_ctSetRamEcuOutputsC1.aboRng_ReturnLowSideEvProGeneratorCmd[0]},
    { &gDb_ctSetRamEcuOutputsC1.tInf_ReturnLowSideEvProGeneratorValue, (TVoid*)&gDb_tRamEcuOutputsC1.eReturnLowSideEvProGeneratorValue, (TVoid*)&gDb_ctSetRamEcuOutputsC1.eDef_ReturnLowSideEvProGeneratorValue, (TVoid*)&gDb_ctSetRamEcuOutputsC1.aeRng_ReturnLowSideEvProGeneratorValue[0]},
    { &gDb_ctSetRamEcuOutputsC1.tInf_EvUpAxleOscillantActivation, (TVoid*)&gDb_tRamEcuOutputsC1.boEvUpAxleOscillantActivation, (TVoid*)&gDb_ctSetRamEcuOutputsC1.boDef_EvUpAxleOscillantActivation, (TVoid*)&gDb_ctSetRamEcuOutputsC1.aboRng_EvUpAxleOscillantActivation[0]},
    { &gDb_ctSetRamEcuOutputsC1.tInf_EvDownAxleOscillantActivation, (TVoid*)&gDb_tRamEcuOutputsC1.boEvDownAxleOscillantActivation, (TVoid*)&gDb_ctSetRamEcuOutputsC1.boDef_EvDownAxleOscillantActivation, (TVoid*)&gDb_ctSetRamEcuOutputsC1.aboRng_EvDownAxleOscillantActivation[0]},
    { &gDb_ctSetRamEcuOutputsC1.tInf_EvUpAxleOscillantCmd, (TVoid*)&gDb_tRamEcuOutputsC1.boEvUpAxleOscillantCmd, (TVoid*)&gDb_ctSetRamEcuOutputsC1.boDef_EvUpAxleOscillantCmd, (TVoid*)&gDb_ctSetRamEcuOutputsC1.aboRng_EvUpAxleOscillantCmd[0]},
    { &gDb_ctSetRamEcuOutputsC1.tInf_EvDownAxleOscillantCmd, (TVoid*)&gDb_tRamEcuOutputsC1.boEvDownAxleOscillantCmd, (TVoid*)&gDb_ctSetRamEcuOutputsC1.boDef_EvDownAxleOscillantCmd, (TVoid*)&gDb_ctSetRamEcuOutputsC1.aboRng_EvDownAxleOscillantCmd[0]},
    { &gDb_ctSetRamEcuOutputsC1.tInf_EvUpAxleFixeActivation, (TVoid*)&gDb_tRamEcuOutputsC1.boEvUpAxleFixeActivation, (TVoid*)&gDb_ctSetRamEcuOutputsC1.boDef_EvUpAxleFixeActivation, (TVoid*)&gDb_ctSetRamEcuOutputsC1.aboRng_EvUpAxleFixeActivation[0]},
    { &gDb_ctSetRamEcuOutputsC1.tInf_EvDownAxleFixeActivation, (TVoid*)&gDb_tRamEcuOutputsC1.boEvDownAxleFixeActivation, (TVoid*)&gDb_ctSetRamEcuOutputsC1.boDef_EvDownAxleFixeActivation, (TVoid*)&gDb_ctSetRamEcuOutputsC1.aboRng_EvDownAxleFixeActivation[0]},
    { &gDb_ctSetRamEcuOutputsC1.tInf_EvUpAxleFixeCmd, (TVoid*)&gDb_tRamEcuOutputsC1.boEvUpAxleFixeCmd, (TVoid*)&gDb_ctSetRamEcuOutputsC1.boDef_EvUpAxleFixeCmd, (TVoid*)&gDb_ctSetRamEcuOutputsC1.aboRng_EvUpAxleFixeCmd[0]},
    { &gDb_ctSetRamEcuOutputsC1.tInf_EvDownAxleFixeCmd, (TVoid*)&gDb_tRamEcuOutputsC1.boEvDownAxleFixeCmd, (TVoid*)&gDb_ctSetRamEcuOutputsC1.boDef_EvDownAxleFixeCmd, (TVoid*)&gDb_ctSetRamEcuOutputsC1.aboRng_EvDownAxleFixeCmd[0]},
    { &gDb_ctSetRamEcuOutputsC1.tInf_EvUpMastMeasureActivation, (TVoid*)&gDb_tRamEcuOutputsC1.boEvUpMastMeasureActivation, (TVoid*)&gDb_ctSetRamEcuOutputsC1.boDef_EvUpMastMeasureActivation, (TVoid*)&gDb_ctSetRamEcuOutputsC1.aboRng_EvUpMastMeasureActivation[0]},
    { &gDb_ctSetRamEcuOutputsC1.tInf_EvUpMastMeasureCmd, (TVoid*)&gDb_tRamEcuOutputsC1.boEvUpMastMeasureCmd, (TVoid*)&gDb_ctSetRamEcuOutputsC1.boDef_EvUpMastMeasureCmd, (TVoid*)&gDb_ctSetRamEcuOutputsC1.aboRng_EvUpMastMeasureCmd[0]},
    { &gDb_ctSetRamEcuOutputsC1.tInf_EvDownMastMeasureActivation, (TVoid*)&gDb_tRamEcuOutputsC1.boEvDownMastMeasureActivation, (TVoid*)&gDb_ctSetRamEcuOutputsC1.boDef_EvDownMastMeasureActivation, (TVoid*)&gDb_ctSetRamEcuOutputsC1.aboRng_EvDownMastMeasureActivation[0]},
    { &gDb_ctSetRamEcuOutputsC1.tInf_EvDownMastMeasureCmd, (TVoid*)&gDb_tRamEcuOutputsC1.boEvDownMastMeasureCmd, (TVoid*)&gDb_ctSetRamEcuOutputsC1.boDef_EvDownMastMeasureCmd, (TVoid*)&gDb_ctSetRamEcuOutputsC1.aboRng_EvDownMastMeasureCmd[0]},
    { &gDb_ctSetRamEcuOutputsC1.tInf_WhiteLightAv15746Value, (TVoid*)&gDb_tRamEcuOutputsC1.eWhiteLightAv15746Value, (TVoid*)&gDb_ctSetRamEcuOutputsC1.eDef_WhiteLightAv15746Value, (TVoid*)&gDb_ctSetRamEcuOutputsC1.aeRng_WhiteLightAv15746Value[0]},
    { &gDb_ctSetRamEcuOutputsC1.tInf_WhiteLightAv15746Command, (TVoid*)&gDb_tRamEcuOutputsC1.boWhiteLightAv15746Command, (TVoid*)&gDb_ctSetRamEcuOutputsC1.boDef_WhiteLightAv15746Command, (TVoid*)&gDb_ctSetRamEcuOutputsC1.aboRng_WhiteLightAv15746Command[0]},
    { &gDb_ctSetRamEcuOutputsC1.tInf_EvCrawlerOnlyValue, (TVoid*)&gDb_tRamEcuOutputsC1.eEvCrawlerOnlyValue, (TVoid*)&gDb_ctSetRamEcuOutputsC1.eDef_EvCrawlerOnlyValue, (TVoid*)&gDb_ctSetRamEcuOutputsC1.aeRng_EvCrawlerOnlyValue[0]},
    { &gDb_ctSetRamEcuOutputsC1.tInf_EvCrawlerOnlyCommand, (TVoid*)&gDb_tRamEcuOutputsC1.boEvCrawlerOnlyCommand, (TVoid*)&gDb_ctSetRamEcuOutputsC1.boDef_EvCrawlerOnlyCommand, (TVoid*)&gDb_ctSetRamEcuOutputsC1.aboRng_EvCrawlerOnlyCommand[0]},
    { &gDb_ctSetRamEcuOutputsC1.tInf_RelayReloadWithGeneratorCmd, (TVoid*)&gDb_tRamEcuOutputsC1.boRelayReloadWithGeneratorCmd, (TVoid*)&gDb_ctSetRamEcuOutputsC1.boDef_RelayReloadWithGeneratorCmd, (TVoid*)&gDb_ctSetRamEcuOutputsC1.aboRng_RelayReloadWithGeneratorCmd[0]},
    { &gDb_ctSetRamEcuOutputsC1.tInf_RelayReloadWithGeneratorState, (TVoid*)&gDb_tRamEcuOutputsC1.eRelayReloadWithGeneratorState, (TVoid*)&gDb_ctSetRamEcuOutputsC1.eDef_RelayReloadWithGeneratorState, (TVoid*)&gDb_ctSetRamEcuOutputsC1.aeRng_RelayReloadWithGeneratorState[0]},
    { &gDb_ctSetRamEcuOutputsC1.tInf_EvDevMvtsCmd, (TVoid*)&gDb_tRamEcuOutputsC1.boEvDevMvtsCmd, (TVoid*)&gDb_ctSetRamEcuOutputsC1.boDef_EvDevMvtsCmd, (TVoid*)&gDb_ctSetRamEcuOutputsC1.aboRng_EvDevMvtsCmd[0]},
    { &gDb_ctSetRamEcuOutputsC1.tInf_EvDevMvtsState, (TVoid*)&gDb_tRamEcuOutputsC1.eEvDevMvtsState, (TVoid*)&gDb_ctSetRamEcuOutputsC1.eDef_EvDevMvtsState, (TVoid*)&gDb_ctSetRamEcuOutputsC1.aeRng_EvDevMvtsState[0]},
    { &gDb_ctSetRamEcuOutputsC1.tInf_EvBoostRegenCmd, (TVoid*)&gDb_tRamEcuOutputsC1.boEvBoostRegenCmd, (TVoid*)&gDb_ctSetRamEcuOutputsC1.boDef_EvBoostRegenCmd, (TVoid*)&gDb_ctSetRamEcuOutputsC1.aboRng_EvBoostRegenCmd[0]},
    { &gDb_ctSetRamEcuOutputsC1.tInf_EvBoostRegenState, (TVoid*)&gDb_tRamEcuOutputsC1.eEvBoostRegenState, (TVoid*)&gDb_ctSetRamEcuOutputsC1.eDef_EvBoostRegenState, (TVoid*)&gDb_ctSetRamEcuOutputsC1.aeRng_EvBoostRegenState[0]}
};

const TDbVarTabRam gDb_catVarTabRamGeneralC1[46] =
{    //!< *cptInf *vpVal *cvpDataDef 
    { &gDb_ctSetRamGeneralC1.tInf_LifeByte, (TVoid*)&gDb_tRamGeneralC1.u8LifeByte, (TVoid*)&gDb_ctSetRamGeneralC1.u8Def_LifeByte, (TVoid*)&gDb_ctSetRamGeneralC1.au8Rng_LifeByte[0]},
    { &gDb_ctSetRamGeneralC1.tInf_WatchdogState, (TVoid*)&gDb_tRamGeneralC1.eWatchdogState, (TVoid*)&gDb_ctSetRamGeneralC1.eDef_WatchdogState, (TVoid*)&gDb_ctSetRamGeneralC1.aeRng_WatchdogState[0]},
    { &gDb_ctSetRamGeneralC1.tInf_EcuVoltage, (TVoid*)&gDb_tRamGeneralC1.u16EcuVoltage, (TVoid*)&gDb_ctSetRamGeneralC1.u16Def_EcuVoltage, (TVoid*)&gDb_ctSetRamGeneralC1.au16Rng_EcuVoltage[0]},
    { &gDb_ctSetRamGeneralC1.tInf_BypassArmDelta, (TVoid*)&gDb_tRamGeneralC1.boBypassArmDelta, (TVoid*)&gDb_ctSetRamGeneralC1.boDef_BypassArmDelta, (TVoid*)&gDb_ctSetRamGeneralC1.aboRng_BypassArmDelta[0]},
    { &gDb_ctSetRamGeneralC1.tInf_BypassArmArrow, (TVoid*)&gDb_tRamGeneralC1.boBypassArmArrow, (TVoid*)&gDb_ctSetRamGeneralC1.boDef_BypassArmArrow, (TVoid*)&gDb_ctSetRamGeneralC1.aboRng_BypassArmArrow[0]},
    { &gDb_ctSetRamGeneralC1.tInf_BypassArmTelescope, (TVoid*)&gDb_tRamGeneralC1.boBypassArmTelescope, (TVoid*)&gDb_ctSetRamGeneralC1.boDef_BypassArmTelescope, (TVoid*)&gDb_ctSetRamGeneralC1.aboRng_BypassArmTelescope[0]},
    { &gDb_ctSetRamGeneralC1.tInf_TestEvision, (TVoid*)&gDb_tRamGeneralC1.boTestEvision, (TVoid*)&gDb_ctSetRamGeneralC1.boDef_TestEvision, (TVoid*)&gDb_ctSetRamGeneralC1.aboRng_TestEvision[0]},
    { &gDb_ctSetRamGeneralC1.tInf_PvgTorConsigneCommand, (TVoid*)&gDb_tRamGeneralC1.i16PvgTorConsigneCommand, (TVoid*)&gDb_ctSetRamGeneralC1.i16Def_PvgTorConsigneCommand, (TVoid*)&gDb_ctSetRamGeneralC1.ai16Rng_PvgTorConsigneCommand[0]},
    { &gDb_ctSetRamGeneralC1.tInf_PvgEvTorTurretCmd, (TVoid*)&gDb_tRamGeneralC1.i16PvgEvTorTurretCmd, (TVoid*)&gDb_ctSetRamGeneralC1.i16Def_PvgEvTorTurretCmd, (TVoid*)&gDb_ctSetRamGeneralC1.ai16Rng_PvgEvTorTurretCmd[0]},
    { &gDb_ctSetRamGeneralC1.tInf_EngineOn, (TVoid*)&gDb_tRamGeneralC1.boEngineOn, (TVoid*)&gDb_ctSetRamGeneralC1.boDef_EngineOn, (TVoid*)&gDb_ctSetRamGeneralC1.aboRng_EngineOn[0]},
    { &gDb_ctSetRamGeneralC1.tInf_gMotorCmd, (TVoid*)&gDb_tRamGeneralC1.u16gMotorCmd, (TVoid*)&gDb_ctSetRamGeneralC1.u16Def_gMotorCmd, (TVoid*)&gDb_ctSetRamGeneralC1.au16Rng_gMotorCmd[0]},
    { &gDb_ctSetRamGeneralC1.tInf_CounterRisingEdge, (TVoid*)&gDb_tRamGeneralC1.u8CounterRisingEdge, (TVoid*)&gDb_ctSetRamGeneralC1.u8Def_CounterRisingEdge, (TVoid*)&gDb_ctSetRamGeneralC1.au8Rng_CounterRisingEdge[0]},
    { &gDb_ctSetRamGeneralC1.tInf_CounterFallingEdge, (TVoid*)&gDb_tRamGeneralC1.u8CounterFallingEdge, (TVoid*)&gDb_ctSetRamGeneralC1.u8Def_CounterFallingEdge, (TVoid*)&gDb_ctSetRamGeneralC1.au8Rng_CounterFallingEdge[0]},
    { &gDb_ctSetRamGeneralC1.tInf_LifeBitRotBasket, (TVoid*)&gDb_tRamGeneralC1.u16LifeBitRotBasket, (TVoid*)&gDb_ctSetRamGeneralC1.u16Def_LifeBitRotBasket, (TVoid*)&gDb_ctSetRamGeneralC1.au16Rng_LifeBitRotBasket[0]},
    { &gDb_ctSetRamGeneralC1.tInf_TestElevationActivation, (TVoid*)&gDb_tRamGeneralC1.boTestElevationActivation, (TVoid*)&gDb_ctSetRamGeneralC1.boDef_TestElevationActivation, (TVoid*)&gDb_ctSetRamGeneralC1.aboRng_TestElevationActivation[0]},
    { &gDb_ctSetRamGeneralC1.tInf_RotTurretBool, (TVoid*)&gDb_tRamGeneralC1.boRotTurretBool, (TVoid*)&gDb_ctSetRamGeneralC1.boDef_RotTurretBool, (TVoid*)&gDb_ctSetRamGeneralC1.aboRng_RotTurretBool[0]},
    { &gDb_ctSetRamGeneralC1.tInf_ScalingJoysTurret, (TVoid*)&gDb_tRamGeneralC1.i16ScalingJoysTurret, (TVoid*)&gDb_ctSetRamGeneralC1.i16Def_ScalingJoysTurret, (TVoid*)&gDb_ctSetRamGeneralC1.ai16Rng_ScalingJoysTurret[0]},
    { &gDb_ctSetRamGeneralC1.tInf_ScalingJoysDeltaArm, (TVoid*)&gDb_tRamGeneralC1.i16ScalingJoysDeltaArm, (TVoid*)&gDb_ctSetRamGeneralC1.i16Def_ScalingJoysDeltaArm, (TVoid*)&gDb_ctSetRamGeneralC1.ai16Rng_ScalingJoysDeltaArm[0]},
    { &gDb_ctSetRamGeneralC1.tInf_PvgDeltaArmConsigne, (TVoid*)&gDb_tRamGeneralC1.i16PvgDeltaArmConsigne, (TVoid*)&gDb_ctSetRamGeneralC1.i16Def_PvgDeltaArmConsigne, (TVoid*)&gDb_ctSetRamGeneralC1.ai16Rng_PvgDeltaArmConsigne[0]},
    { &gDb_ctSetRamGeneralC1.tInf_ScalingJoysArrowArm, (TVoid*)&gDb_tRamGeneralC1.i16ScalingJoysArrowArm, (TVoid*)&gDb_ctSetRamGeneralC1.i16Def_ScalingJoysArrowArm, (TVoid*)&gDb_ctSetRamGeneralC1.ai16Rng_ScalingJoysArrowArm[0]},
    { &gDb_ctSetRamGeneralC1.tInf_PvgArrowArmConsigne, (TVoid*)&gDb_tRamGeneralC1.i16PvgArrowArmConsigne, (TVoid*)&gDb_ctSetRamGeneralC1.i16Def_PvgArrowArmConsigne, (TVoid*)&gDb_ctSetRamGeneralC1.ai16Rng_PvgArrowArmConsigne[0]},
    { &gDb_ctSetRamGeneralC1.tInf_ScalingJoysTelescopeArm, (TVoid*)&gDb_tRamGeneralC1.i16ScalingJoysTelescopeArm, (TVoid*)&gDb_ctSetRamGeneralC1.i16Def_ScalingJoysTelescopeArm, (TVoid*)&gDb_ctSetRamGeneralC1.ai16Rng_ScalingJoysTelescopeArm[0]},
    { &gDb_ctSetRamGeneralC1.tInf_PvgTelescopeArmConsigne, (TVoid*)&gDb_tRamGeneralC1.i16PvgTelescopeArmConsigne, (TVoid*)&gDb_ctSetRamGeneralC1.i16Def_PvgTelescopeArmConsigne, (TVoid*)&gDb_ctSetRamGeneralC1.ai16Rng_PvgTelescopeArmConsigne[0]},
    { &gDb_ctSetRamGeneralC1.tInf_PvgTorVoltageRangeValue, (TVoid*)&gDb_tRamGeneralC1.ai16PvgTorVoltageRangeValue[0], (TVoid*)&gDb_ctSetRamGeneralC1.ai16Def_PvgTorVoltageRangeValue[0], (TVoid*)&gDb_ctSetRamGeneralC1.aai16Rng_PvgTorVoltageRangeValue[0][0]},
    { &gDb_ctSetRamGeneralC1.tInf_ActiveWorkEnvelopLimit, (TVoid*)&gDb_tRamGeneralC1.boActiveWorkEnvelopLimit, (TVoid*)&gDb_ctSetRamGeneralC1.boDef_ActiveWorkEnvelopLimit, (TVoid*)&gDb_ctSetRamGeneralC1.aboRng_ActiveWorkEnvelopLimit[0]},
    { &gDb_ctSetRamGeneralC1.tInf_PortillonLadderClose, (TVoid*)&gDb_tRamGeneralC1.boPortillonLadderClose, (TVoid*)&gDb_ctSetRamGeneralC1.boDef_PortillonLadderClose, (TVoid*)&gDb_ctSetRamGeneralC1.aboRng_PortillonLadderClose[0]},
    { &gDb_ctSetRamGeneralC1.tInf_ActiveFailure, (TVoid*)&gDb_tRamGeneralC1.boActiveFailure, (TVoid*)&gDb_ctSetRamGeneralC1.boDef_ActiveFailure, (TVoid*)&gDb_ctSetRamGeneralC1.aboRng_ActiveFailure[0]},
    { &gDb_ctSetRamGeneralC1.tInf_StopAllMovementsNacellePost, (TVoid*)&gDb_tRamGeneralC1.boStopAllMovementsNacellePost, (TVoid*)&gDb_ctSetRamGeneralC1.boDef_StopAllMovementsNacellePost, (TVoid*)&gDb_ctSetRamGeneralC1.aboRng_StopAllMovementsNacellePost[0]},
    { &gDb_ctSetRamGeneralC1.tInf_AverageTimeCycle, (TVoid*)&gDb_tRamGeneralC1.u32AverageTimeCycle, (TVoid*)&gDb_ctSetRamGeneralC1.u32Def_AverageTimeCycle, (TVoid*)&gDb_ctSetRamGeneralC1.au32Rng_AverageTimeCycle[0]},
    { &gDb_ctSetRamGeneralC1.tInf_MaxTimeCycle, (TVoid*)&gDb_tRamGeneralC1.u32MaxTimeCycle, (TVoid*)&gDb_ctSetRamGeneralC1.u32Def_MaxTimeCycle, (TVoid*)&gDb_ctSetRamGeneralC1.au32Rng_MaxTimeCycle[0]},
    { &gDb_ctSetRamGeneralC1.tInf_TestRefreshParamBlockCurrent, (TVoid*)&gDb_tRamGeneralC1.boTestRefreshParamBlockCurrent, (TVoid*)&gDb_ctSetRamGeneralC1.boDef_TestRefreshParamBlockCurrent, (TVoid*)&gDb_ctSetRamGeneralC1.aboRng_TestRefreshParamBlockCurrent[0]},
    { &gDb_ctSetRamGeneralC1.tInf_LynxOnAllMvts, (TVoid*)&gDb_tRamGeneralC1.boLynxOnAllMvts, (TVoid*)&gDb_ctSetRamGeneralC1.boDef_LynxOnAllMvts, (TVoid*)&gDb_ctSetRamGeneralC1.aboRng_LynxOnAllMvts[0]},
    { &gDb_ctSetRamGeneralC1.tInf_ReturnValStart48XsFunc, (TVoid*)&gDb_tRamGeneralC1.i16ReturnValStart48XsFunc, (TVoid*)&gDb_ctSetRamGeneralC1.i16Def_ReturnValStart48XsFunc, (TVoid*)&gDb_ctSetRamGeneralC1.ai16Rng_ReturnValStart48XsFunc[0]},
    { &gDb_ctSetRamGeneralC1.tInf_IndexVersion48Xs, (TVoid*)&gDb_tRamGeneralC1.u32IndexVersion48Xs, (TVoid*)&gDb_ctSetRamGeneralC1.u32Def_IndexVersion48Xs, (TVoid*)&gDb_ctSetRamGeneralC1.au32Rng_IndexVersion48Xs[0]},
    { &gDb_ctSetRamGeneralC1.tInf_TestElectricalIO, (TVoid*)&gDb_tRamGeneralC1.boTestElectricalIO, (TVoid*)&gDb_ctSetRamGeneralC1.boDef_TestElectricalIO, (TVoid*)&gDb_ctSetRamGeneralC1.aboRng_TestElectricalIO[0]},
    { &gDb_ctSetRamGeneralC1.tInf_Major_48XS, (TVoid*)&gDb_tRamGeneralC1.u8Major_48XS, (TVoid*)&gDb_ctSetRamGeneralC1.u8Def_Major_48XS, (TVoid*)&gDb_ctSetRamGeneralC1.au8Rng_Major_48XS[0]},
    { &gDb_ctSetRamGeneralC1.tInf_Minor_48XS, (TVoid*)&gDb_tRamGeneralC1.u8Minor_48XS, (TVoid*)&gDb_ctSetRamGeneralC1.u8Def_Minor_48XS, (TVoid*)&gDb_ctSetRamGeneralC1.au8Rng_Minor_48XS[0]},
    { &gDb_ctSetRamGeneralC1.tInf_Patch_48XS, (TVoid*)&gDb_tRamGeneralC1.u8Patch_48XS, (TVoid*)&gDb_ctSetRamGeneralC1.u8Def_Patch_48XS, (TVoid*)&gDb_ctSetRamGeneralC1.au8Rng_Patch_48XS[0]},
    { &gDb_ctSetRamGeneralC1.tInf_Custom_48XS, (TVoid*)&gDb_tRamGeneralC1.u8Custom_48XS, (TVoid*)&gDb_ctSetRamGeneralC1.u8Def_Custom_48XS, (TVoid*)&gDb_ctSetRamGeneralC1.au8Rng_Custom_48XS[0]},
    { &gDb_ctSetRamGeneralC1.tInf_RunningStable48XS, (TVoid*)&gDb_tRamGeneralC1.boRunningStable48XS, (TVoid*)&gDb_ctSetRamGeneralC1.boDef_RunningStable48XS, (TVoid*)&gDb_ctSetRamGeneralC1.aboRng_RunningStable48XS[0]},
    { &gDb_ctSetRamGeneralC1.tInf_BlinkLow, (TVoid*)&gDb_tRamGeneralC1.boBlinkLow, (TVoid*)&gDb_ctSetRamGeneralC1.boDef_BlinkLow, (TVoid*)&gDb_ctSetRamGeneralC1.aboRng_BlinkLow[0]},
    { &gDb_ctSetRamGeneralC1.tInf_FaultyValue, (TVoid*)&gDb_tRamGeneralC1.u16FaultyValue, (TVoid*)&gDb_ctSetRamGeneralC1.u16Def_FaultyValue, (TVoid*)&gDb_ctSetRamGeneralC1.au16Rng_FaultyValue[0]},
    { &gDb_ctSetRamGeneralC1.tInf_DeviceNum, (TVoid*)&gDb_tRamGeneralC1.u8DeviceNum, (TVoid*)&gDb_ctSetRamGeneralC1.u8Def_DeviceNum, (TVoid*)&gDb_ctSetRamGeneralC1.au8Rng_DeviceNum[0]},
    { &gDb_ctSetRamGeneralC1.tInf_ErrorCode, (TVoid*)&gDb_tRamGeneralC1.u8ErrorCode, (TVoid*)&gDb_ctSetRamGeneralC1.u8Def_ErrorCode, (TVoid*)&gDb_ctSetRamGeneralC1.au8Rng_ErrorCode[0]},
    { &gDb_ctSetRamGeneralC1.tInf_EngineRunningStable, (TVoid*)&gDb_tRamGeneralC1.boEngineRunningStable, (TVoid*)&gDb_ctSetRamGeneralC1.boDef_EngineRunningStable, (TVoid*)&gDb_ctSetRamGeneralC1.aboRng_EngineRunningStable[0]},
    { &gDb_ctSetRamGeneralC1.tInf_BypassTestCommand, (TVoid*)&gDb_tRamGeneralC1.boBypassTestCommand, (TVoid*)&gDb_ctSetRamGeneralC1.boDef_BypassTestCommand, (TVoid*)&gDb_ctSetRamGeneralC1.aboRng_BypassTestCommand[0]}
};

const TDbVarTabNvm gDb_catVarTabNvOptionsC1[13] =
{    //!< *cptInf *vpVal *cvpDataRang *cvpDataDef cu16Adr cu16ValuePos
    { &gDb_ctSetNvOptionsC1.tInf_Portillon, (TVoid*)&gDb_tNvOptionsC1.boPortillon, (TVoid*)&gDb_ctSetNvOptionsC1.boDef_Portillon, (TVoid*)&gDb_ctSetNvOptionsC1.aboRng_Portillon[0], 12, 0},
    { &gDb_ctSetNvOptionsC1.tInf_Ladder, (TVoid*)&gDb_tNvOptionsC1.boLadder, (TVoid*)&gDb_ctSetNvOptionsC1.boDef_Ladder, (TVoid*)&gDb_ctSetNvOptionsC1.aboRng_Ladder[0], 13, 1},
    { &gDb_ctSetNvOptionsC1.tInf_MeasuringMat, (TVoid*)&gDb_tNvOptionsC1.boMeasuringMat, (TVoid*)&gDb_ctSetNvOptionsC1.boDef_MeasuringMat, (TVoid*)&gDb_ctSetNvOptionsC1.aboRng_MeasuringMat[0], 14, 2},
    { &gDb_ctSetNvOptionsC1.tInf_MastDigitalDisplay, (TVoid*)&gDb_tNvOptionsC1.boMastDigitalDisplay, (TVoid*)&gDb_ctSetNvOptionsC1.boDef_MastDigitalDisplay, (TVoid*)&gDb_ctSetNvOptionsC1.aboRng_MastDigitalDisplay[0], 15, 3},
    { &gDb_ctSetNvOptionsC1.tInf_Generator, (TVoid*)&gDb_tNvOptionsC1.boGenerator, (TVoid*)&gDb_ctSetNvOptionsC1.boDef_Generator, (TVoid*)&gDb_ctSetNvOptionsC1.aboRng_Generator[0], 16, 4},
    { &gDb_ctSetNvOptionsC1.tInf_FlashingLightOnRail, (TVoid*)&gDb_tNvOptionsC1.boFlashingLightOnRail, (TVoid*)&gDb_ctSetNvOptionsC1.boDef_FlashingLightOnRail, (TVoid*)&gDb_ctSetNvOptionsC1.aboRng_FlashingLightOnRail[0], 17, 5},
    { &gDb_ctSetNvOptionsC1.tInf_AutoStopMeasuringMast, (TVoid*)&gDb_tNvOptionsC1.boAutoStopMeasuringMast, (TVoid*)&gDb_ctSetNvOptionsC1.boDef_AutoStopMeasuringMast, (TVoid*)&gDb_ctSetNvOptionsC1.aboRng_AutoStopMeasuringMast[0], 18, 6},
    { &gDb_ctSetNvOptionsC1.tInf_LynxOnAllMvts, (TVoid*)&gDb_tNvOptionsC1.boLynxOnAllMvts, (TVoid*)&gDb_ctSetNvOptionsC1.boDef_LynxOnAllMvts, (TVoid*)&gDb_ctSetNvOptionsC1.aboRng_LynxOnAllMvts[0], 19, 7},
    { &gDb_ctSetNvOptionsC1.tInf_WhiteLight15746, (TVoid*)&gDb_tNvOptionsC1.boWhiteLight15746, (TVoid*)&gDb_ctSetNvOptionsC1.boDef_WhiteLight15746, (TVoid*)&gDb_ctSetNvOptionsC1.aboRng_WhiteLight15746[0], 20, 8},
    { &gDb_ctSetNvOptionsC1.tInf_AutorisationWorkKeyPresent, (TVoid*)&gDb_tNvOptionsC1.boAutorisationWorkKeyPresent, (TVoid*)&gDb_ctSetNvOptionsC1.boDef_AutorisationWorkKeyPresent, (TVoid*)&gDb_ctSetNvOptionsC1.aboRng_AutorisationWorkKeyPresent[0], 21, 9},
    { &gDb_ctSetNvOptionsC1.tInf_FlasingLightAlwaysOnAUS, (TVoid*)&gDb_tNvOptionsC1.boFlasingLightAlwaysOnAUS, (TVoid*)&gDb_ctSetNvOptionsC1.boDef_FlasingLightAlwaysOnAUS, (TVoid*)&gDb_ctSetNvOptionsC1.aboRng_FlasingLightAlwaysOnAUS[0], 22, 10},
    { &gDb_ctSetNvOptionsC1.tInf_ContactMastSNCFOption, (TVoid*)&gDb_tNvOptionsC1.boContactMastSNCFOption, (TVoid*)&gDb_ctSetNvOptionsC1.boDef_ContactMastSNCFOption, (TVoid*)&gDb_ctSetNvOptionsC1.aboRng_ContactMastSNCFOption[0], 23, 11},
    { &gDb_ctSetNvOptionsC1.tInf_PresenceContactMast, (TVoid*)&gDb_tNvOptionsC1.boPresenceContactMast, (TVoid*)&gDb_ctSetNvOptionsC1.boDef_PresenceContactMast, (TVoid*)&gDb_ctSetNvOptionsC1.aboRng_PresenceContactMast[0], 24, 12}
};

const TDbVarTabNvm gDb_catVarTabNvMemoryC1[20] =
{    //!< *cptInf *vpVal *cvpDataRang *cvpDataDef cu16Adr cu16ValuePos
    { &gDb_ctSetNvMemoryC1.tInf_NvMemoryC, (TVoid*)&gDb_tNvMemoryC1.boNvMemoryC, (TVoid*)&gDb_ctSetNvMemoryC1.boDef_NvMemoryC, (TVoid*)&gDb_ctSetNvMemoryC1.aboRng_NvMemoryC[0], 212, 0},
    { &gDb_ctSetNvMemoryC1.tInf_VarMemory1, (TVoid*)&gDb_tNvMemoryC1.u8VarMemory1, (TVoid*)&gDb_ctSetNvMemoryC1.u8Def_VarMemory1, (TVoid*)&gDb_ctSetNvMemoryC1.au8Rng_VarMemory1[0], 213, 1},
    { &gDb_ctSetNvMemoryC1.tInf_VarMemory2, (TVoid*)&gDb_tNvMemoryC1.u8VarMemory2, (TVoid*)&gDb_ctSetNvMemoryC1.u8Def_VarMemory2, (TVoid*)&gDb_ctSetNvMemoryC1.au8Rng_VarMemory2[0], 214, 2},
    { &gDb_ctSetNvMemoryC1.tInf_VarMemory3, (TVoid*)&gDb_tNvMemoryC1.u8VarMemory3, (TVoid*)&gDb_ctSetNvMemoryC1.u8Def_VarMemory3, (TVoid*)&gDb_ctSetNvMemoryC1.au8Rng_VarMemory3[0], 215, 3},
    { &gDb_ctSetNvMemoryC1.tInf_VarMemory4, (TVoid*)&gDb_tNvMemoryC1.u16VarMemory4, (TVoid*)&gDb_ctSetNvMemoryC1.u16Def_VarMemory4, (TVoid*)&gDb_ctSetNvMemoryC1.au16Rng_VarMemory4[0], 216, 4},
    { &gDb_ctSetNvMemoryC1.tInf_VarMemory5, (TVoid*)&gDb_tNvMemoryC1.u16VarMemory5, (TVoid*)&gDb_ctSetNvMemoryC1.u16Def_VarMemory5, (TVoid*)&gDb_ctSetNvMemoryC1.au16Rng_VarMemory5[0], 218, 5},
    { &gDb_ctSetNvMemoryC1.tInf_VarMemory6, (TVoid*)&gDb_tNvMemoryC1.u16VarMemory6, (TVoid*)&gDb_ctSetNvMemoryC1.u16Def_VarMemory6, (TVoid*)&gDb_ctSetNvMemoryC1.au16Rng_VarMemory6[0], 220, 6},
    { &gDb_ctSetNvMemoryC1.tInf_VarMemory7, (TVoid*)&gDb_tNvMemoryC1.i16VarMemory7, (TVoid*)&gDb_ctSetNvMemoryC1.i16Def_VarMemory7, (TVoid*)&gDb_ctSetNvMemoryC1.ai16Rng_VarMemory7[0], 222, 7},
    { &gDb_ctSetNvMemoryC1.tInf_VarMemory8, (TVoid*)&gDb_tNvMemoryC1.i16VarMemory8, (TVoid*)&gDb_ctSetNvMemoryC1.i16Def_VarMemory8, (TVoid*)&gDb_ctSetNvMemoryC1.ai16Rng_VarMemory8[0], 224, 8},
    { &gDb_ctSetNvMemoryC1.tInf_VarMemory9, (TVoid*)&gDb_tNvMemoryC1.i16VarMemory9, (TVoid*)&gDb_ctSetNvMemoryC1.i16Def_VarMemory9, (TVoid*)&gDb_ctSetNvMemoryC1.ai16Rng_VarMemory9[0], 226, 9},
    { &gDb_ctSetNvMemoryC1.tInf_VarMemory10, (TVoid*)&gDb_tNvMemoryC1.boVarMemory10, (TVoid*)&gDb_ctSetNvMemoryC1.boDef_VarMemory10, (TVoid*)&gDb_ctSetNvMemoryC1.aboRng_VarMemory10[0], 228, 10},
    { &gDb_ctSetNvMemoryC1.tInf_VarMemory11, (TVoid*)&gDb_tNvMemoryC1.boVarMemory11, (TVoid*)&gDb_ctSetNvMemoryC1.boDef_VarMemory11, (TVoid*)&gDb_ctSetNvMemoryC1.aboRng_VarMemory11[0], 229, 11},
    { &gDb_ctSetNvMemoryC1.tInf_VarMemory12, (TVoid*)&gDb_tNvMemoryC1.boVarMemory12, (TVoid*)&gDb_ctSetNvMemoryC1.boDef_VarMemory12, (TVoid*)&gDb_ctSetNvMemoryC1.aboRng_VarMemory12[0], 230, 12},
    { &gDb_ctSetNvMemoryC1.tInf_VarMemory13, (TVoid*)&gDb_tNvMemoryC1.boVarMemory13, (TVoid*)&gDb_ctSetNvMemoryC1.boDef_VarMemory13, (TVoid*)&gDb_ctSetNvMemoryC1.aboRng_VarMemory13[0], 231, 13},
    { &gDb_ctSetNvMemoryC1.tInf_VarMemory14, (TVoid*)&gDb_tNvMemoryC1.boVarMemory14, (TVoid*)&gDb_ctSetNvMemoryC1.boDef_VarMemory14, (TVoid*)&gDb_ctSetNvMemoryC1.aboRng_VarMemory14[0], 232, 14},
    { &gDb_ctSetNvMemoryC1.tInf_CptNbrRegenFinish, (TVoid*)&gDb_tNvMemoryC1.u16CptNbrRegenFinish, (TVoid*)&gDb_ctSetNvMemoryC1.u16Def_CptNbrRegenFinish, (TVoid*)&gDb_ctSetNvMemoryC1.au16Rng_CptNbrRegenFinish[0], 233, 15},
    { &gDb_ctSetNvMemoryC1.tInf_FirstKeyNoReloadWithGenerator, (TVoid*)&gDb_tNvMemoryC1.boFirstKeyNoReloadWithGenerator, (TVoid*)&gDb_ctSetNvMemoryC1.boDef_FirstKeyNoReloadWithGenerator, (TVoid*)&gDb_ctSetNvMemoryC1.aboRng_FirstKeyNoReloadWithGenerator[0], 235, 16},
    { &gDb_ctSetNvMemoryC1.tInf_NewSocUperReloadWithGenerator, (TVoid*)&gDb_tNvMemoryC1.boNewSocUperReloadWithGenerator, (TVoid*)&gDb_ctSetNvMemoryC1.boDef_NewSocUperReloadWithGenerator, (TVoid*)&gDb_ctSetNvMemoryC1.aboRng_NewSocUperReloadWithGenerator[0], 236, 17},
    { &gDb_ctSetNvMemoryC1.tInf_TotalRegenMinutes, (TVoid*)&gDb_tNvMemoryC1.u32TotalRegenMinutes, (TVoid*)&gDb_ctSetNvMemoryC1.u32Def_TotalRegenMinutes, (TVoid*)&gDb_ctSetNvMemoryC1.au32Rng_TotalRegenMinutes[0], 237, 18},
    { &gDb_ctSetNvMemoryC1.tInf_TotalElecticMinutes, (TVoid*)&gDb_tNvMemoryC1.u32TotalElecticMinutes, (TVoid*)&gDb_ctSetNvMemoryC1.u32Def_TotalElecticMinutes, (TVoid*)&gDb_ctSetNvMemoryC1.au32Rng_TotalElecticMinutes[0], 241, 19}
};

const TDbVarTabNvm gDb_catVarTabNvParametersC1[210] =
{    //!< *cptInf *vpVal *cvpDataRang *cvpDataDef cu16Adr cu16ValuePos
    { &gDb_ctSetNvParametersC1.tInf_PvgUpDeltaArmTurretPostCmdPrct, (TVoid*)&gDb_tNvParametersC1.u8PvgUpDeltaArmTurretPostCmdPrct, (TVoid*)&gDb_ctSetNvParametersC1.u8Def_PvgUpDeltaArmTurretPostCmdPrct, (TVoid*)&gDb_ctSetNvParametersC1.au8Rng_PvgUpDeltaArmTurretPostCmdPrct[0], 412, 0},
    { &gDb_ctSetNvParametersC1.tInf_PvgDownDeltaArmTurretPostCmdPrct, (TVoid*)&gDb_tNvParametersC1.u8PvgDownDeltaArmTurretPostCmdPrct, (TVoid*)&gDb_ctSetNvParametersC1.u8Def_PvgDownDeltaArmTurretPostCmdPrct, (TVoid*)&gDb_ctSetNvParametersC1.au8Rng_PvgDownDeltaArmTurretPostCmdPrct[0], 413, 1},
    { &gDb_ctSetNvParametersC1.tInf_PvgUpArrowArmTurretPostCmdPrct, (TVoid*)&gDb_tNvParametersC1.u8PvgUpArrowArmTurretPostCmdPrct, (TVoid*)&gDb_ctSetNvParametersC1.u8Def_PvgUpArrowArmTurretPostCmdPrct, (TVoid*)&gDb_ctSetNvParametersC1.au8Rng_PvgUpArrowArmTurretPostCmdPrct[0], 414, 2},
    { &gDb_ctSetNvParametersC1.tInf_PvgDownArrowArmTurretPostCmdPrct, (TVoid*)&gDb_tNvParametersC1.u8PvgDownArrowArmTurretPostCmdPrct, (TVoid*)&gDb_ctSetNvParametersC1.u8Def_PvgDownArrowArmTurretPostCmdPrct, (TVoid*)&gDb_ctSetNvParametersC1.au8Rng_PvgDownArrowArmTurretPostCmdPrct[0], 415, 3},
    { &gDb_ctSetNvParametersC1.tInf_PvgInTelescTurretPostCmdPrct, (TVoid*)&gDb_tNvParametersC1.u8PvgInTelescTurretPostCmdPrct, (TVoid*)&gDb_ctSetNvParametersC1.u8Def_PvgInTelescTurretPostCmdPrct, (TVoid*)&gDb_ctSetNvParametersC1.au8Rng_PvgInTelescTurretPostCmdPrct[0], 416, 4},
    { &gDb_ctSetNvParametersC1.tInf_PvgOutTelescTurretPostCmdPrct, (TVoid*)&gDb_tNvParametersC1.u8PvgOutTelescTurretPostCmdPrct, (TVoid*)&gDb_ctSetNvParametersC1.u8Def_PvgOutTelescTurretPostCmdPrct, (TVoid*)&gDb_ctSetNvParametersC1.au8Rng_PvgOutTelescTurretPostCmdPrct[0], 417, 5},
    { &gDb_ctSetNvParametersC1.tInf_MaxPvgUpDeltaArmCmdPrct, (TVoid*)&gDb_tNvParametersC1.u8MaxPvgUpDeltaArmCmdPrct, (TVoid*)&gDb_ctSetNvParametersC1.u8Def_MaxPvgUpDeltaArmCmdPrct, (TVoid*)&gDb_ctSetNvParametersC1.au8Rng_MaxPvgUpDeltaArmCmdPrct[0], 418, 6},
    { &gDb_ctSetNvParametersC1.tInf_MaxPvgDownDeltaArmCmdPrct, (TVoid*)&gDb_tNvParametersC1.u8MaxPvgDownDeltaArmCmdPrct, (TVoid*)&gDb_ctSetNvParametersC1.u8Def_MaxPvgDownDeltaArmCmdPrct, (TVoid*)&gDb_ctSetNvParametersC1.au8Rng_MaxPvgDownDeltaArmCmdPrct[0], 419, 7},
    { &gDb_ctSetNvParametersC1.tInf_MaxPvgUpArrowArmCmdPrct, (TVoid*)&gDb_tNvParametersC1.u8MaxPvgUpArrowArmCmdPrct, (TVoid*)&gDb_ctSetNvParametersC1.u8Def_MaxPvgUpArrowArmCmdPrct, (TVoid*)&gDb_ctSetNvParametersC1.au8Rng_MaxPvgUpArrowArmCmdPrct[0], 420, 8},
    { &gDb_ctSetNvParametersC1.tInf_MaxPvgDownArrowArmCmdPrct, (TVoid*)&gDb_tNvParametersC1.u8MaxPvgDownArrowArmCmdPrct, (TVoid*)&gDb_ctSetNvParametersC1.u8Def_MaxPvgDownArrowArmCmdPrct, (TVoid*)&gDb_ctSetNvParametersC1.au8Rng_MaxPvgDownArrowArmCmdPrct[0], 421, 9},
    { &gDb_ctSetNvParametersC1.tInf_MaxPvgInTelescopeArmCmdPrct, (TVoid*)&gDb_tNvParametersC1.u8MaxPvgInTelescopeArmCmdPrct, (TVoid*)&gDb_ctSetNvParametersC1.u8Def_MaxPvgInTelescopeArmCmdPrct, (TVoid*)&gDb_ctSetNvParametersC1.au8Rng_MaxPvgInTelescopeArmCmdPrct[0], 422, 10},
    { &gDb_ctSetNvParametersC1.tInf_MaxPvgOutTelescopeArmCmdPrct, (TVoid*)&gDb_tNvParametersC1.u8MaxPvgOutTelescopeArmCmdPrct, (TVoid*)&gDb_ctSetNvParametersC1.u8Def_MaxPvgOutTelescopeArmCmdPrct, (TVoid*)&gDb_ctSetNvParametersC1.au8Rng_MaxPvgOutTelescopeArmCmdPrct[0], 423, 11},
    { &gDb_ctSetNvParametersC1.tInf_MinPvgUpDeltaArmCmdPrct, (TVoid*)&gDb_tNvParametersC1.u8MinPvgUpDeltaArmCmdPrct, (TVoid*)&gDb_ctSetNvParametersC1.u8Def_MinPvgUpDeltaArmCmdPrct, (TVoid*)&gDb_ctSetNvParametersC1.au8Rng_MinPvgUpDeltaArmCmdPrct[0], 424, 12},
    { &gDb_ctSetNvParametersC1.tInf_MinPvgDownDeltaArmCmdPrct, (TVoid*)&gDb_tNvParametersC1.u8MinPvgDownDeltaArmCmdPrct, (TVoid*)&gDb_ctSetNvParametersC1.u8Def_MinPvgDownDeltaArmCmdPrct, (TVoid*)&gDb_ctSetNvParametersC1.au8Rng_MinPvgDownDeltaArmCmdPrct[0], 425, 13},
    { &gDb_ctSetNvParametersC1.tInf_MinPvgUpArrowArmCmdPrct, (TVoid*)&gDb_tNvParametersC1.u8MinPvgUpArrowArmCmdPrct, (TVoid*)&gDb_ctSetNvParametersC1.u8Def_MinPvgUpArrowArmCmdPrct, (TVoid*)&gDb_ctSetNvParametersC1.au8Rng_MinPvgUpArrowArmCmdPrct[0], 426, 14},
    { &gDb_ctSetNvParametersC1.tInf_MinPvgDownArrowArmCmdPrct, (TVoid*)&gDb_tNvParametersC1.u8MinPvgDownArrowArmCmdPrct, (TVoid*)&gDb_ctSetNvParametersC1.u8Def_MinPvgDownArrowArmCmdPrct, (TVoid*)&gDb_ctSetNvParametersC1.au8Rng_MinPvgDownArrowArmCmdPrct[0], 427, 15},
    { &gDb_ctSetNvParametersC1.tInf_MinPvgInTelescopeArmCmdPrct, (TVoid*)&gDb_tNvParametersC1.u8MinPvgInTelescopeArmCmdPrct, (TVoid*)&gDb_ctSetNvParametersC1.u8Def_MinPvgInTelescopeArmCmdPrct, (TVoid*)&gDb_ctSetNvParametersC1.au8Rng_MinPvgInTelescopeArmCmdPrct[0], 428, 16},
    { &gDb_ctSetNvParametersC1.tInf_MinPvgOutTelescopeArmCmdPrct, (TVoid*)&gDb_tNvParametersC1.u8MinPvgOutTelescopeArmCmdPrct, (TVoid*)&gDb_ctSetNvParametersC1.u8Def_MinPvgOutTelescopeArmCmdPrct, (TVoid*)&gDb_ctSetNvParametersC1.au8Rng_MinPvgOutTelescopeArmCmdPrct[0], 429, 17},
    { &gDb_ctSetNvParametersC1.tInf_TresholdAnaToBoForInputs48Xs, (TVoid*)&gDb_tNvParametersC1.u16TresholdAnaToBoForInputs48Xs, (TVoid*)&gDb_ctSetNvParametersC1.u16Def_TresholdAnaToBoForInputs48Xs, (TVoid*)&gDb_ctSetNvParametersC1.au16Rng_TresholdAnaToBoForInputs48Xs[0], 430, 18},
    { &gDb_ctSetNvParametersC1.tInf_PvgAxleMovementCmdPrct, (TVoid*)&gDb_tNvParametersC1.u8PvgAxleMovementCmdPrct, (TVoid*)&gDb_ctSetNvParametersC1.u8Def_PvgAxleMovementCmdPrct, (TVoid*)&gDb_ctSetNvParametersC1.au8Rng_PvgAxleMovementCmdPrct[0], 432, 19},
    { &gDb_ctSetNvParametersC1.tInf_DeadZoneJoystickTurret, (TVoid*)&gDb_tNvParametersC1.u8DeadZoneJoystickTurret, (TVoid*)&gDb_ctSetNvParametersC1.u8Def_DeadZoneJoystickTurret, (TVoid*)&gDb_ctSetNvParametersC1.au8Rng_DeadZoneJoystickTurret[0], 433, 20},
    { &gDb_ctSetNvParametersC1.tInf_DeadZoneJoystickDeltaArm, (TVoid*)&gDb_tNvParametersC1.u8DeadZoneJoystickDeltaArm, (TVoid*)&gDb_ctSetNvParametersC1.u8Def_DeadZoneJoystickDeltaArm, (TVoid*)&gDb_ctSetNvParametersC1.au8Rng_DeadZoneJoystickDeltaArm[0], 434, 21},
    { &gDb_ctSetNvParametersC1.tInf_DeadZoneJoystickTelescope, (TVoid*)&gDb_tNvParametersC1.u8DeadZoneJoystickTelescope, (TVoid*)&gDb_ctSetNvParametersC1.u8Def_DeadZoneJoystickTelescope, (TVoid*)&gDb_ctSetNvParametersC1.au8Rng_DeadZoneJoystickTelescope[0], 435, 22},
    { &gDb_ctSetNvParametersC1.tInf_DeadZoneJoystickArrow, (TVoid*)&gDb_tNvParametersC1.u8DeadZoneJoystickArrow, (TVoid*)&gDb_ctSetNvParametersC1.u8Def_DeadZoneJoystickArrow, (TVoid*)&gDb_ctSetNvParametersC1.au8Rng_DeadZoneJoystickArrow[0], 436, 23},
    { &gDb_ctSetNvParametersC1.tInf_DeadZoneJoystickRailAdvancement, (TVoid*)&gDb_tNvParametersC1.u8DeadZoneJoystickRailAdvancement, (TVoid*)&gDb_ctSetNvParametersC1.u8Def_DeadZoneJoystickRailAdvancement, (TVoid*)&gDb_ctSetNvParametersC1.au8Rng_DeadZoneJoystickRailAdvancement[0], 437, 24},
    { &gDb_ctSetNvParametersC1.tInf_DeadZoneJoystickRotationTurret, (TVoid*)&gDb_tNvParametersC1.u8DeadZoneJoystickRotationTurret, (TVoid*)&gDb_ctSetNvParametersC1.u8Def_DeadZoneJoystickRotationTurret, (TVoid*)&gDb_ctSetNvParametersC1.au8Rng_DeadZoneJoystickRotationTurret[0], 438, 25},
    { &gDb_ctSetNvParametersC1.tInf_EngineOffCurEvPropMotorAccel, (TVoid*)&gDb_tNvParametersC1.u16EngineOffCurEvPropMotorAccel, (TVoid*)&gDb_ctSetNvParametersC1.u16Def_EngineOffCurEvPropMotorAccel, (TVoid*)&gDb_ctSetNvParametersC1.au16Rng_EngineOffCurEvPropMotorAccel[0], 439, 26},
    { &gDb_ctSetNvParametersC1.tInf_MinCurEvPropMotorAccelerator, (TVoid*)&gDb_tNvParametersC1.u16MinCurEvPropMotorAccelerator, (TVoid*)&gDb_ctSetNvParametersC1.u16Def_MinCurEvPropMotorAccelerator, (TVoid*)&gDb_ctSetNvParametersC1.au16Rng_MinCurEvPropMotorAccelerator[0], 441, 27},
    { &gDb_ctSetNvParametersC1.tInf_StopCurEvPropMotorAccelerator, (TVoid*)&gDb_tNvParametersC1.u16StopCurEvPropMotorAccelerator, (TVoid*)&gDb_ctSetNvParametersC1.u16Def_StopCurEvPropMotorAccelerator, (TVoid*)&gDb_ctSetNvParametersC1.au16Rng_StopCurEvPropMotorAccelerator[0], 443, 28},
    { &gDb_ctSetNvParametersC1.tInf_EngineOffCurEvPropGenerator, (TVoid*)&gDb_tNvParametersC1.u16EngineOffCurEvPropGenerator, (TVoid*)&gDb_ctSetNvParametersC1.u16Def_EngineOffCurEvPropGenerator, (TVoid*)&gDb_ctSetNvParametersC1.au16Rng_EngineOffCurEvPropGenerator[0], 445, 29},
    { &gDb_ctSetNvParametersC1.tInf_MinCurEvPropGenerator, (TVoid*)&gDb_tNvParametersC1.u16MinCurEvPropGenerator, (TVoid*)&gDb_ctSetNvParametersC1.u16Def_MinCurEvPropGenerator, (TVoid*)&gDb_ctSetNvParametersC1.au16Rng_MinCurEvPropGenerator[0], 447, 30},
    { &gDb_ctSetNvParametersC1.tInf_StopCurEvPropGenerator, (TVoid*)&gDb_tNvParametersC1.u16StopCurEvPropGenerator, (TVoid*)&gDb_ctSetNvParametersC1.u16Def_StopCurEvPropGenerator, (TVoid*)&gDb_ctSetNvParametersC1.au16Rng_StopCurEvPropGenerator[0], 449, 31},
    { &gDb_ctSetNvParametersC1.tInf_PidGpEvPropMotorAcc, (TVoid*)&gDb_tNvParametersC1.u16PidGpEvPropMotorAcc, (TVoid*)&gDb_ctSetNvParametersC1.u16Def_PidGpEvPropMotorAcc, (TVoid*)&gDb_ctSetNvParametersC1.au16Rng_PidGpEvPropMotorAcc[0], 451, 32},
    { &gDb_ctSetNvParametersC1.tInf_PidTiEvPropMotorAcc, (TVoid*)&gDb_tNvParametersC1.u16PidTiEvPropMotorAcc, (TVoid*)&gDb_ctSetNvParametersC1.u16Def_PidTiEvPropMotorAcc, (TVoid*)&gDb_ctSetNvParametersC1.au16Rng_PidTiEvPropMotorAcc[0], 453, 33},
    { &gDb_ctSetNvParametersC1.tInf_PidTdEvPropMotorAcc, (TVoid*)&gDb_tNvParametersC1.u16PidTdEvPropMotorAcc, (TVoid*)&gDb_ctSetNvParametersC1.u16Def_PidTdEvPropMotorAcc, (TVoid*)&gDb_ctSetNvParametersC1.au16Rng_PidTdEvPropMotorAcc[0], 455, 34},
    { &gDb_ctSetNvParametersC1.tInf_PidGpEvPropGenerator, (TVoid*)&gDb_tNvParametersC1.u16PidGpEvPropGenerator, (TVoid*)&gDb_ctSetNvParametersC1.u16Def_PidGpEvPropGenerator, (TVoid*)&gDb_ctSetNvParametersC1.au16Rng_PidGpEvPropGenerator[0], 457, 35},
    { &gDb_ctSetNvParametersC1.tInf_PidTiEvPropGenerator, (TVoid*)&gDb_tNvParametersC1.u16PidTiEvPropGenerator, (TVoid*)&gDb_ctSetNvParametersC1.u16Def_PidTiEvPropGenerator, (TVoid*)&gDb_ctSetNvParametersC1.au16Rng_PidTiEvPropGenerator[0], 459, 36},
    { &gDb_ctSetNvParametersC1.tInf_PidTdEvPropGenerator, (TVoid*)&gDb_tNvParametersC1.u16PidTdEvPropGenerator, (TVoid*)&gDb_ctSetNvParametersC1.u16Def_PidTdEvPropGenerator, (TVoid*)&gDb_ctSetNvParametersC1.au16Rng_PidTdEvPropGenerator[0], 461, 37},
    { &gDb_ctSetNvParametersC1.tInf_DeviationLimitTransmPressure, (TVoid*)&gDb_tNvParametersC1.u8DeviationLimitTransmPressure, (TVoid*)&gDb_ctSetNvParametersC1.u8Def_DeviationLimitTransmPressure, (TVoid*)&gDb_ctSetNvParametersC1.au8Rng_DeviationLimitTransmPressure[0], 463, 38},
    { &gDb_ctSetNvParametersC1.tInf_OutCharPosDeltaArmAngular, (TVoid*)&gDb_tNvParametersC1.i16OutCharPosDeltaArmAngular, (TVoid*)&gDb_ctSetNvParametersC1.i16Def_OutCharPosDeltaArmAngular, (TVoid*)&gDb_ctSetNvParametersC1.ai16Rng_OutCharPosDeltaArmAngular[0], 464, 39},
    { &gDb_ctSetNvParametersC1.tInf_OutCharNeuDeltaArmAngular, (TVoid*)&gDb_tNvParametersC1.i16OutCharNeuDeltaArmAngular, (TVoid*)&gDb_ctSetNvParametersC1.i16Def_OutCharNeuDeltaArmAngular, (TVoid*)&gDb_ctSetNvParametersC1.ai16Rng_OutCharNeuDeltaArmAngular[0], 466, 40},
    { &gDb_ctSetNvParametersC1.tInf_OutCharNegDeltaArmAngular, (TVoid*)&gDb_tNvParametersC1.i16OutCharNegDeltaArmAngular, (TVoid*)&gDb_ctSetNvParametersC1.i16Def_OutCharNegDeltaArmAngular, (TVoid*)&gDb_ctSetNvParametersC1.ai16Rng_OutCharNegDeltaArmAngular[0], 468, 41},
    { &gDb_ctSetNvParametersC1.tInf_DeviationLimitDeltaArmAngle, (TVoid*)&gDb_tNvParametersC1.u8DeviationLimitDeltaArmAngle, (TVoid*)&gDb_ctSetNvParametersC1.u8Def_DeviationLimitDeltaArmAngle, (TVoid*)&gDb_ctSetNvParametersC1.au8Rng_DeviationLimitDeltaArmAngle[0], 470, 42},
    { &gDb_ctSetNvParametersC1.tInf_OutCharPosArrowArmAngular, (TVoid*)&gDb_tNvParametersC1.i16OutCharPosArrowArmAngular, (TVoid*)&gDb_ctSetNvParametersC1.i16Def_OutCharPosArrowArmAngular, (TVoid*)&gDb_ctSetNvParametersC1.ai16Rng_OutCharPosArrowArmAngular[0], 471, 43},
    { &gDb_ctSetNvParametersC1.tInf_OutCharNeuArrowArmAngular, (TVoid*)&gDb_tNvParametersC1.i16OutCharNeuArrowArmAngular, (TVoid*)&gDb_ctSetNvParametersC1.i16Def_OutCharNeuArrowArmAngular, (TVoid*)&gDb_ctSetNvParametersC1.ai16Rng_OutCharNeuArrowArmAngular[0], 473, 44},
    { &gDb_ctSetNvParametersC1.tInf_OutCharNegArrowArmAngular, (TVoid*)&gDb_tNvParametersC1.i16OutCharNegArrowArmAngular, (TVoid*)&gDb_ctSetNvParametersC1.i16Def_OutCharNegArrowArmAngular, (TVoid*)&gDb_ctSetNvParametersC1.ai16Rng_OutCharNegArrowArmAngular[0], 475, 45},
    { &gDb_ctSetNvParametersC1.tInf_DeviationLimitArrowArmAngle, (TVoid*)&gDb_tNvParametersC1.u8DeviationLimitArrowArmAngle, (TVoid*)&gDb_ctSetNvParametersC1.u8Def_DeviationLimitArrowArmAngle, (TVoid*)&gDb_ctSetNvParametersC1.au8Rng_DeviationLimitArrowArmAngle[0], 477, 46},
    { &gDb_ctSetNvParametersC1.tInf_MinPvgUpPendularTurretPost, (TVoid*)&gDb_tNvParametersC1.u8MinPvgUpPendularTurretPost, (TVoid*)&gDb_ctSetNvParametersC1.u8Def_MinPvgUpPendularTurretPost, (TVoid*)&gDb_ctSetNvParametersC1.au8Rng_MinPvgUpPendularTurretPost[0], 478, 47},
    { &gDb_ctSetNvParametersC1.tInf_MinPvgUpPendularNacellePost, (TVoid*)&gDb_tNvParametersC1.u8MinPvgUpPendularNacellePost, (TVoid*)&gDb_ctSetNvParametersC1.u8Def_MinPvgUpPendularNacellePost, (TVoid*)&gDb_ctSetNvParametersC1.au8Rng_MinPvgUpPendularNacellePost[0], 479, 48},
    { &gDb_ctSetNvParametersC1.tInf_MinPvgUpPendularRadioPost, (TVoid*)&gDb_tNvParametersC1.u8MinPvgUpPendularRadioPost, (TVoid*)&gDb_ctSetNvParametersC1.u8Def_MinPvgUpPendularRadioPost, (TVoid*)&gDb_ctSetNvParametersC1.au8Rng_MinPvgUpPendularRadioPost[0], 480, 49},
    { &gDb_ctSetNvParametersC1.tInf_MaxPvgUpPendularTurretPost, (TVoid*)&gDb_tNvParametersC1.u8MaxPvgUpPendularTurretPost, (TVoid*)&gDb_ctSetNvParametersC1.u8Def_MaxPvgUpPendularTurretPost, (TVoid*)&gDb_ctSetNvParametersC1.au8Rng_MaxPvgUpPendularTurretPost[0], 481, 50},
    { &gDb_ctSetNvParametersC1.tInf_MaxPvgUpPendularNacellePost, (TVoid*)&gDb_tNvParametersC1.u8MaxPvgUpPendularNacellePost, (TVoid*)&gDb_ctSetNvParametersC1.u8Def_MaxPvgUpPendularNacellePost, (TVoid*)&gDb_ctSetNvParametersC1.au8Rng_MaxPvgUpPendularNacellePost[0], 482, 51},
    { &gDb_ctSetNvParametersC1.tInf_MaxPvgUpPendularRadioPost, (TVoid*)&gDb_tNvParametersC1.u8MaxPvgUpPendularRadioPost, (TVoid*)&gDb_ctSetNvParametersC1.u8Def_MaxPvgUpPendularRadioPost, (TVoid*)&gDb_ctSetNvParametersC1.au8Rng_MaxPvgUpPendularRadioPost[0], 483, 52},
    { &gDb_ctSetNvParametersC1.tInf_UpPendularRampRatioTurret, (TVoid*)&gDb_tNvParametersC1.au16UpPendularRampRatioTurret[0], (TVoid*)&gDb_ctSetNvParametersC1.au16Def_UpPendularRampRatioTurret[0], (TVoid*)&gDb_ctSetNvParametersC1.aau16Rng_UpPendularRampRatioTurret[0][0], 484, 53},
    { &gDb_ctSetNvParametersC1.tInf_UpPendularRampRatioNacelle, (TVoid*)&gDb_tNvParametersC1.au16UpPendularRampRatioNacelle[0], (TVoid*)&gDb_ctSetNvParametersC1.au16Def_UpPendularRampRatioNacelle[0], (TVoid*)&gDb_ctSetNvParametersC1.aau16Rng_UpPendularRampRatioNacelle[0][0], 488, 55},
    { &gDb_ctSetNvParametersC1.tInf_UpPendularRampRatioRadio, (TVoid*)&gDb_tNvParametersC1.au16UpPendularRampRatioRadio[0], (TVoid*)&gDb_ctSetNvParametersC1.au16Def_UpPendularRampRatioRadio[0], (TVoid*)&gDb_ctSetNvParametersC1.aau16Rng_UpPendularRampRatioRadio[0][0], 492, 57},
    { &gDb_ctSetNvParametersC1.tInf_MinPvgDownPendularTurretPost, (TVoid*)&gDb_tNvParametersC1.u8MinPvgDownPendularTurretPost, (TVoid*)&gDb_ctSetNvParametersC1.u8Def_MinPvgDownPendularTurretPost, (TVoid*)&gDb_ctSetNvParametersC1.au8Rng_MinPvgDownPendularTurretPost[0], 496, 59},
    { &gDb_ctSetNvParametersC1.tInf_MinPvgDownPendularNacellePost, (TVoid*)&gDb_tNvParametersC1.u8MinPvgDownPendularNacellePost, (TVoid*)&gDb_ctSetNvParametersC1.u8Def_MinPvgDownPendularNacellePost, (TVoid*)&gDb_ctSetNvParametersC1.au8Rng_MinPvgDownPendularNacellePost[0], 497, 60},
    { &gDb_ctSetNvParametersC1.tInf_MinPvgDownPendularRadioPost, (TVoid*)&gDb_tNvParametersC1.u8MinPvgDownPendularRadioPost, (TVoid*)&gDb_ctSetNvParametersC1.u8Def_MinPvgDownPendularRadioPost, (TVoid*)&gDb_ctSetNvParametersC1.au8Rng_MinPvgDownPendularRadioPost[0], 498, 61},
    { &gDb_ctSetNvParametersC1.tInf_MaxPvgDownPendularTurretPost, (TVoid*)&gDb_tNvParametersC1.u8MaxPvgDownPendularTurretPost, (TVoid*)&gDb_ctSetNvParametersC1.u8Def_MaxPvgDownPendularTurretPost, (TVoid*)&gDb_ctSetNvParametersC1.au8Rng_MaxPvgDownPendularTurretPost[0], 499, 62},
    { &gDb_ctSetNvParametersC1.tInf_MaxPvgDownPendularNacellePost, (TVoid*)&gDb_tNvParametersC1.u8MaxPvgDownPendularNacellePost, (TVoid*)&gDb_ctSetNvParametersC1.u8Def_MaxPvgDownPendularNacellePost, (TVoid*)&gDb_ctSetNvParametersC1.au8Rng_MaxPvgDownPendularNacellePost[0], 500, 63},
    { &gDb_ctSetNvParametersC1.tInf_MaxPvgDownPendularRadioPost, (TVoid*)&gDb_tNvParametersC1.u8MaxPvgDownPendularRadioPost, (TVoid*)&gDb_ctSetNvParametersC1.u8Def_MaxPvgDownPendularRadioPost, (TVoid*)&gDb_ctSetNvParametersC1.au8Rng_MaxPvgDownPendularRadioPost[0], 501, 64},
    { &gDb_ctSetNvParametersC1.tInf_DownPendularRampRatioTurret, (TVoid*)&gDb_tNvParametersC1.au16DownPendularRampRatioTurret[0], (TVoid*)&gDb_ctSetNvParametersC1.au16Def_DownPendularRampRatioTurret[0], (TVoid*)&gDb_ctSetNvParametersC1.aau16Rng_DownPendularRampRatioTurret[0][0], 502, 65},
    { &gDb_ctSetNvParametersC1.tInf_DownPendularRampRatioNacelle, (TVoid*)&gDb_tNvParametersC1.au16DownPendularRampRatioNacelle[0], (TVoid*)&gDb_ctSetNvParametersC1.au16Def_DownPendularRampRatioNacelle[0], (TVoid*)&gDb_ctSetNvParametersC1.aau16Rng_DownPendularRampRatioNacelle[0][0], 506, 67},
    { &gDb_ctSetNvParametersC1.tInf_DownPendularRampRatioRadio, (TVoid*)&gDb_tNvParametersC1.au16DownPendularRampRatioRadio[0], (TVoid*)&gDb_ctSetNvParametersC1.au16Def_DownPendularRampRatioRadio[0], (TVoid*)&gDb_ctSetNvParametersC1.aau16Rng_DownPendularRampRatioRadio[0][0], 510, 69},
    { &gDb_ctSetNvParametersC1.tInf_MinPvgUpIncliBasketTurretPost, (TVoid*)&gDb_tNvParametersC1.u8MinPvgUpIncliBasketTurretPost, (TVoid*)&gDb_ctSetNvParametersC1.u8Def_MinPvgUpIncliBasketTurretPost, (TVoid*)&gDb_ctSetNvParametersC1.au8Rng_MinPvgUpIncliBasketTurretPost[0], 514, 71},
    { &gDb_ctSetNvParametersC1.tInf_MinPvgUpIncliBasketNacellePost, (TVoid*)&gDb_tNvParametersC1.u8MinPvgUpIncliBasketNacellePost, (TVoid*)&gDb_ctSetNvParametersC1.u8Def_MinPvgUpIncliBasketNacellePost, (TVoid*)&gDb_ctSetNvParametersC1.au8Rng_MinPvgUpIncliBasketNacellePost[0], 515, 72},
    { &gDb_ctSetNvParametersC1.tInf_MinPvgUpIncliBasketRadioPost, (TVoid*)&gDb_tNvParametersC1.u8MinPvgUpIncliBasketRadioPost, (TVoid*)&gDb_ctSetNvParametersC1.u8Def_MinPvgUpIncliBasketRadioPost, (TVoid*)&gDb_ctSetNvParametersC1.au8Rng_MinPvgUpIncliBasketRadioPost[0], 516, 73},
    { &gDb_ctSetNvParametersC1.tInf_MaxPvgUpIncliBasketTurretPost, (TVoid*)&gDb_tNvParametersC1.u8MaxPvgUpIncliBasketTurretPost, (TVoid*)&gDb_ctSetNvParametersC1.u8Def_MaxPvgUpIncliBasketTurretPost, (TVoid*)&gDb_ctSetNvParametersC1.au8Rng_MaxPvgUpIncliBasketTurretPost[0], 517, 74},
    { &gDb_ctSetNvParametersC1.tInf_MaxPvgUpIncliBasketNacellePost, (TVoid*)&gDb_tNvParametersC1.u8MaxPvgUpIncliBasketNacellePost, (TVoid*)&gDb_ctSetNvParametersC1.u8Def_MaxPvgUpIncliBasketNacellePost, (TVoid*)&gDb_ctSetNvParametersC1.au8Rng_MaxPvgUpIncliBasketNacellePost[0], 518, 75},
    { &gDb_ctSetNvParametersC1.tInf_MaxPvgUpIncliBasketRadioPost, (TVoid*)&gDb_tNvParametersC1.u8MaxPvgUpIncliBasketRadioPost, (TVoid*)&gDb_ctSetNvParametersC1.u8Def_MaxPvgUpIncliBasketRadioPost, (TVoid*)&gDb_ctSetNvParametersC1.au8Rng_MaxPvgUpIncliBasketRadioPost[0], 519, 76},
    { &gDb_ctSetNvParametersC1.tInf_UpInclinBasketRampRatioTurret, (TVoid*)&gDb_tNvParametersC1.au16UpInclinBasketRampRatioTurret[0], (TVoid*)&gDb_ctSetNvParametersC1.au16Def_UpInclinBasketRampRatioTurret[0], (TVoid*)&gDb_ctSetNvParametersC1.aau16Rng_UpInclinBasketRampRatioTurret[0][0], 520, 77},
    { &gDb_ctSetNvParametersC1.tInf_UpInclinBasketRampRatioNacelle, (TVoid*)&gDb_tNvParametersC1.au16UpInclinBasketRampRatioNacelle[0], (TVoid*)&gDb_ctSetNvParametersC1.au16Def_UpInclinBasketRampRatioNacelle[0], (TVoid*)&gDb_ctSetNvParametersC1.aau16Rng_UpInclinBasketRampRatioNacelle[0][0], 524, 79},
    { &gDb_ctSetNvParametersC1.tInf_UpInclinBasketRampRatioRadio, (TVoid*)&gDb_tNvParametersC1.au16UpInclinBasketRampRatioRadio[0], (TVoid*)&gDb_ctSetNvParametersC1.au16Def_UpInclinBasketRampRatioRadio[0], (TVoid*)&gDb_ctSetNvParametersC1.aau16Rng_UpInclinBasketRampRatioRadio[0][0], 528, 81},
    { &gDb_ctSetNvParametersC1.tInf_MinPvgDownIncliBasketTurretPost, (TVoid*)&gDb_tNvParametersC1.u8MinPvgDownIncliBasketTurretPost, (TVoid*)&gDb_ctSetNvParametersC1.u8Def_MinPvgDownIncliBasketTurretPost, (TVoid*)&gDb_ctSetNvParametersC1.au8Rng_MinPvgDownIncliBasketTurretPost[0], 532, 83},
    { &gDb_ctSetNvParametersC1.tInf_MinPvgDownIncliBasketNacellePost, (TVoid*)&gDb_tNvParametersC1.u8MinPvgDownIncliBasketNacellePost, (TVoid*)&gDb_ctSetNvParametersC1.u8Def_MinPvgDownIncliBasketNacellePost, (TVoid*)&gDb_ctSetNvParametersC1.au8Rng_MinPvgDownIncliBasketNacellePost[0], 533, 84},
    { &gDb_ctSetNvParametersC1.tInf_MinPvgDownIncliBasketRadioPost, (TVoid*)&gDb_tNvParametersC1.u8MinPvgDownIncliBasketRadioPost, (TVoid*)&gDb_ctSetNvParametersC1.u8Def_MinPvgDownIncliBasketRadioPost, (TVoid*)&gDb_ctSetNvParametersC1.au8Rng_MinPvgDownIncliBasketRadioPost[0], 534, 85},
    { &gDb_ctSetNvParametersC1.tInf_MaxPvgDownIncliBasketTurretPost, (TVoid*)&gDb_tNvParametersC1.u8MaxPvgDownIncliBasketTurretPost, (TVoid*)&gDb_ctSetNvParametersC1.u8Def_MaxPvgDownIncliBasketTurretPost, (TVoid*)&gDb_ctSetNvParametersC1.au8Rng_MaxPvgDownIncliBasketTurretPost[0], 535, 86},
    { &gDb_ctSetNvParametersC1.tInf_MaxPvgDownIncliBasketNacellePost, (TVoid*)&gDb_tNvParametersC1.u8MaxPvgDownIncliBasketNacellePost, (TVoid*)&gDb_ctSetNvParametersC1.u8Def_MaxPvgDownIncliBasketNacellePost, (TVoid*)&gDb_ctSetNvParametersC1.au8Rng_MaxPvgDownIncliBasketNacellePost[0], 536, 87},
    { &gDb_ctSetNvParametersC1.tInf_MaxPvgDownIncliBasketRadioPost, (TVoid*)&gDb_tNvParametersC1.u8MaxPvgDownIncliBasketRadioPost, (TVoid*)&gDb_ctSetNvParametersC1.u8Def_MaxPvgDownIncliBasketRadioPost, (TVoid*)&gDb_ctSetNvParametersC1.au8Rng_MaxPvgDownIncliBasketRadioPost[0], 537, 88},
    { &gDb_ctSetNvParametersC1.tInf_DownInclinBasketRampRatioTurret, (TVoid*)&gDb_tNvParametersC1.au16DownInclinBasketRampRatioTurret[0], (TVoid*)&gDb_ctSetNvParametersC1.au16Def_DownInclinBasketRampRatioTurret[0], (TVoid*)&gDb_ctSetNvParametersC1.aau16Rng_DownInclinBasketRampRatioTurret[0][0], 538, 89},
    { &gDb_ctSetNvParametersC1.tInf_DownInclinBasketRampRatioNacelle, (TVoid*)&gDb_tNvParametersC1.au16DownInclinBasketRampRatioNacelle[0], (TVoid*)&gDb_ctSetNvParametersC1.au16Def_DownInclinBasketRampRatioNacelle[0], (TVoid*)&gDb_ctSetNvParametersC1.aau16Rng_DownInclinBasketRampRatioNacelle[0][0], 542, 91},
    { &gDb_ctSetNvParametersC1.tInf_DownInclinBasketRampRatioRadio, (TVoid*)&gDb_tNvParametersC1.au16DownInclinBasketRampRatioRadio[0], (TVoid*)&gDb_ctSetNvParametersC1.au16Def_DownInclinBasketRampRatioRadio[0], (TVoid*)&gDb_ctSetNvParametersC1.aau16Rng_DownInclinBasketRampRatioRadio[0][0], 546, 93},
    { &gDb_ctSetNvParametersC1.tInf_MinPvgRotBasktClkwiseTurretPost, (TVoid*)&gDb_tNvParametersC1.u8MinPvgRotBasktClkwiseTurretPost, (TVoid*)&gDb_ctSetNvParametersC1.u8Def_MinPvgRotBasktClkwiseTurretPost, (TVoid*)&gDb_ctSetNvParametersC1.au8Rng_MinPvgRotBasktClkwiseTurretPost[0], 550, 95},
    { &gDb_ctSetNvParametersC1.tInf_MinPvgRotBasktClkwiseNacellePost, (TVoid*)&gDb_tNvParametersC1.u8MinPvgRotBasktClkwiseNacellePost, (TVoid*)&gDb_ctSetNvParametersC1.u8Def_MinPvgRotBasktClkwiseNacellePost, (TVoid*)&gDb_ctSetNvParametersC1.au8Rng_MinPvgRotBasktClkwiseNacellePost[0], 551, 96},
    { &gDb_ctSetNvParametersC1.tInf_MinPvgRotBasketClkwiseRadioPost, (TVoid*)&gDb_tNvParametersC1.u8MinPvgRotBasketClkwiseRadioPost, (TVoid*)&gDb_ctSetNvParametersC1.u8Def_MinPvgRotBasketClkwiseRadioPost, (TVoid*)&gDb_ctSetNvParametersC1.au8Rng_MinPvgRotBasketClkwiseRadioPost[0], 552, 97},
    { &gDb_ctSetNvParametersC1.tInf_MaxPvgRotBasketClkwiseTurretPost, (TVoid*)&gDb_tNvParametersC1.u8MaxPvgRotBasketClkwiseTurretPost, (TVoid*)&gDb_ctSetNvParametersC1.u8Def_MaxPvgRotBasketClkwiseTurretPost, (TVoid*)&gDb_ctSetNvParametersC1.au8Rng_MaxPvgRotBasketClkwiseTurretPost[0], 553, 98},
    { &gDb_ctSetNvParametersC1.tInf_MaxPvgRotBasktClkwiseNacellePost, (TVoid*)&gDb_tNvParametersC1.u8MaxPvgRotBasktClkwiseNacellePost, (TVoid*)&gDb_ctSetNvParametersC1.u8Def_MaxPvgRotBasktClkwiseNacellePost, (TVoid*)&gDb_ctSetNvParametersC1.au8Rng_MaxPvgRotBasktClkwiseNacellePost[0], 554, 99},
    { &gDb_ctSetNvParametersC1.tInf_MaxPvgRotBasketClkwiseRadioPost, (TVoid*)&gDb_tNvParametersC1.u8MaxPvgRotBasketClkwiseRadioPost, (TVoid*)&gDb_ctSetNvParametersC1.u8Def_MaxPvgRotBasketClkwiseRadioPost, (TVoid*)&gDb_ctSetNvParametersC1.au8Rng_MaxPvgRotBasketClkwiseRadioPost[0], 555, 100},
    { &gDb_ctSetNvParametersC1.tInf_RotBasketClkwiseRampRatioTurret, (TVoid*)&gDb_tNvParametersC1.au16RotBasketClkwiseRampRatioTurret[0], (TVoid*)&gDb_ctSetNvParametersC1.au16Def_RotBasketClkwiseRampRatioTurret[0], (TVoid*)&gDb_ctSetNvParametersC1.aau16Rng_RotBasketClkwiseRampRatioTurret[0][0], 556, 101},
    { &gDb_ctSetNvParametersC1.tInf_RotBasketClkwiseRampRatioNacel, (TVoid*)&gDb_tNvParametersC1.au16RotBasketClkwiseRampRatioNacel[0], (TVoid*)&gDb_ctSetNvParametersC1.au16Def_RotBasketClkwiseRampRatioNacel[0], (TVoid*)&gDb_ctSetNvParametersC1.aau16Rng_RotBasketClkwiseRampRatioNacel[0][0], 560, 103},
    { &gDb_ctSetNvParametersC1.tInf_RotBasketClkwiseRampRatioRadio, (TVoid*)&gDb_tNvParametersC1.au16RotBasketClkwiseRampRatioRadio[0], (TVoid*)&gDb_ctSetNvParametersC1.au16Def_RotBasketClkwiseRampRatioRadio[0], (TVoid*)&gDb_ctSetNvParametersC1.aau16Rng_RotBasketClkwiseRampRatioRadio[0][0], 564, 105},
    { &gDb_ctSetNvParametersC1.tInf_MinPvgRotBasktCtClkwiseTurtPost, (TVoid*)&gDb_tNvParametersC1.u8MinPvgRotBasktCtClkwiseTurtPost, (TVoid*)&gDb_ctSetNvParametersC1.u8Def_MinPvgRotBasktCtClkwiseTurtPost, (TVoid*)&gDb_ctSetNvParametersC1.au8Rng_MinPvgRotBasktCtClkwiseTurtPost[0], 568, 107},
    { &gDb_ctSetNvParametersC1.tInf_MinPvgRotBasktCtClkwiseNacelPost, (TVoid*)&gDb_tNvParametersC1.u8MinPvgRotBasktCtClkwiseNacelPost, (TVoid*)&gDb_ctSetNvParametersC1.u8Def_MinPvgRotBasktCtClkwiseNacelPost, (TVoid*)&gDb_ctSetNvParametersC1.au8Rng_MinPvgRotBasktCtClkwiseNacelPost[0], 569, 108},
    { &gDb_ctSetNvParametersC1.tInf_MinPvgRotBasktCtClkwiseRadioPost, (TVoid*)&gDb_tNvParametersC1.u8MinPvgRotBasktCtClkwiseRadioPost, (TVoid*)&gDb_ctSetNvParametersC1.u8Def_MinPvgRotBasktCtClkwiseRadioPost, (TVoid*)&gDb_ctSetNvParametersC1.au8Rng_MinPvgRotBasktCtClkwiseRadioPost[0], 570, 109},
    { &gDb_ctSetNvParametersC1.tInf_MaxPvgRotBasktCtClkwiseTuretPost, (TVoid*)&gDb_tNvParametersC1.u8MaxPvgRotBasktCtClkwiseTuretPost, (TVoid*)&gDb_ctSetNvParametersC1.u8Def_MaxPvgRotBasktCtClkwiseTuretPost, (TVoid*)&gDb_ctSetNvParametersC1.au8Rng_MaxPvgRotBasktCtClkwiseTuretPost[0], 571, 110},
    { &gDb_ctSetNvParametersC1.tInf_MaxPvgRotBasktCtClkwiseNacelPost, (TVoid*)&gDb_tNvParametersC1.u8MaxPvgRotBasktCtClkwiseNacelPost, (TVoid*)&gDb_ctSetNvParametersC1.u8Def_MaxPvgRotBasktCtClkwiseNacelPost, (TVoid*)&gDb_ctSetNvParametersC1.au8Rng_MaxPvgRotBasktCtClkwiseNacelPost[0], 572, 111},
    { &gDb_ctSetNvParametersC1.tInf_MaxPvgRotBasktCtClkwiseRadioPost, (TVoid*)&gDb_tNvParametersC1.u8MaxPvgRotBasktCtClkwiseRadioPost, (TVoid*)&gDb_ctSetNvParametersC1.u8Def_MaxPvgRotBasktCtClkwiseRadioPost, (TVoid*)&gDb_ctSetNvParametersC1.au8Rng_MaxPvgRotBasktCtClkwiseRadioPost[0], 573, 112},
    { &gDb_ctSetNvParametersC1.tInf_RotBasketCtClkwiseRampRatioTuret, (TVoid*)&gDb_tNvParametersC1.au16RotBasketCtClkwiseRampRatioTuret[0], (TVoid*)&gDb_ctSetNvParametersC1.au16Def_RotBasketCtClkwiseRampRatioTuret[0], (TVoid*)&gDb_ctSetNvParametersC1.aau16Rng_RotBasketCtClkwiseRampRatioTuret[0][0], 574, 113},
    { &gDb_ctSetNvParametersC1.tInf_RotBasketCtClkwiseRampRatioNacel, (TVoid*)&gDb_tNvParametersC1.au16RotBasketCtClkwiseRampRatioNacel[0], (TVoid*)&gDb_ctSetNvParametersC1.au16Def_RotBasketCtClkwiseRampRatioNacel[0], (TVoid*)&gDb_ctSetNvParametersC1.aau16Rng_RotBasketCtClkwiseRampRatioNacel[0][0], 578, 115},
    { &gDb_ctSetNvParametersC1.tInf_RotBasketCtClkwiseRampRatioRadio, (TVoid*)&gDb_tNvParametersC1.au16RotBasketCtClkwiseRampRatioRadio[0], (TVoid*)&gDb_ctSetNvParametersC1.au16Def_RotBasketCtClkwiseRampRatioRadio[0], (TVoid*)&gDb_ctSetNvParametersC1.aau16Rng_RotBasketCtClkwiseRampRatioRadio[0][0], 582, 117},
    { &gDb_ctSetNvParametersC1.tInf_MinPvgRotTurretClkwiseTurretPost, (TVoid*)&gDb_tNvParametersC1.u16MinPvgRotTurretClkwiseTurretPost, (TVoid*)&gDb_ctSetNvParametersC1.u16Def_MinPvgRotTurretClkwiseTurretPost, (TVoid*)&gDb_ctSetNvParametersC1.au16Rng_MinPvgRotTurretClkwiseTurretPost[0], 586, 119},
    { &gDb_ctSetNvParametersC1.tInf_MinPvgRotTurretClkwiseNacelPost, (TVoid*)&gDb_tNvParametersC1.u16MinPvgRotTurretClkwiseNacelPost, (TVoid*)&gDb_ctSetNvParametersC1.u16Def_MinPvgRotTurretClkwiseNacelPost, (TVoid*)&gDb_ctSetNvParametersC1.au16Rng_MinPvgRotTurretClkwiseNacelPost[0], 588, 120},
    { &gDb_ctSetNvParametersC1.tInf_MinPvgRotTurretClkwiseRadioPost, (TVoid*)&gDb_tNvParametersC1.u16MinPvgRotTurretClkwiseRadioPost, (TVoid*)&gDb_ctSetNvParametersC1.u16Def_MinPvgRotTurretClkwiseRadioPost, (TVoid*)&gDb_ctSetNvParametersC1.au16Rng_MinPvgRotTurretClkwiseRadioPost[0], 590, 121},
    { &gDb_ctSetNvParametersC1.tInf_MaxPvgRotTurretClkwiseTurretPost, (TVoid*)&gDb_tNvParametersC1.u16MaxPvgRotTurretClkwiseTurretPost, (TVoid*)&gDb_ctSetNvParametersC1.u16Def_MaxPvgRotTurretClkwiseTurretPost, (TVoid*)&gDb_ctSetNvParametersC1.au16Rng_MaxPvgRotTurretClkwiseTurretPost[0], 592, 122},
    { &gDb_ctSetNvParametersC1.tInf_MaxPvgRotTurretClkwiseNacelPost, (TVoid*)&gDb_tNvParametersC1.u16MaxPvgRotTurretClkwiseNacelPost, (TVoid*)&gDb_ctSetNvParametersC1.u16Def_MaxPvgRotTurretClkwiseNacelPost, (TVoid*)&gDb_ctSetNvParametersC1.au16Rng_MaxPvgRotTurretClkwiseNacelPost[0], 594, 123},
    { &gDb_ctSetNvParametersC1.tInf_MaxPvgRotTurretClkwiseRadioPost, (TVoid*)&gDb_tNvParametersC1.u16MaxPvgRotTurretClkwiseRadioPost, (TVoid*)&gDb_ctSetNvParametersC1.u16Def_MaxPvgRotTurretClkwiseRadioPost, (TVoid*)&gDb_ctSetNvParametersC1.au16Rng_MaxPvgRotTurretClkwiseRadioPost[0], 596, 124},
    { &gDb_ctSetNvParametersC1.tInf_RotTurretClkwiseRampRatioTurret, (TVoid*)&gDb_tNvParametersC1.au16RotTurretClkwiseRampRatioTurret[0], (TVoid*)&gDb_ctSetNvParametersC1.au16Def_RotTurretClkwiseRampRatioTurret[0], (TVoid*)&gDb_ctSetNvParametersC1.aau16Rng_RotTurretClkwiseRampRatioTurret[0][0], 598, 125},
    { &gDb_ctSetNvParametersC1.tInf_RotTurretClkwiseRampRatioNacelle, (TVoid*)&gDb_tNvParametersC1.au16RotTurretClkwiseRampRatioNacelle[0], (TVoid*)&gDb_ctSetNvParametersC1.au16Def_RotTurretClkwiseRampRatioNacelle[0], (TVoid*)&gDb_ctSetNvParametersC1.aau16Rng_RotTurretClkwiseRampRatioNacelle[0][0], 602, 127},
    { &gDb_ctSetNvParametersC1.tInf_RotTurretClkwiseRampRatioRadio, (TVoid*)&gDb_tNvParametersC1.au16RotTurretClkwiseRampRatioRadio[0], (TVoid*)&gDb_ctSetNvParametersC1.au16Def_RotTurretClkwiseRampRatioRadio[0], (TVoid*)&gDb_ctSetNvParametersC1.aau16Rng_RotTurretClkwiseRampRatioRadio[0][0], 606, 129},
    { &gDb_ctSetNvParametersC1.tInf_MinPvgRotTurretCtClkwiseTurtPost, (TVoid*)&gDb_tNvParametersC1.u16MinPvgRotTurretCtClkwiseTurtPost, (TVoid*)&gDb_ctSetNvParametersC1.u16Def_MinPvgRotTurretCtClkwiseTurtPost, (TVoid*)&gDb_ctSetNvParametersC1.au16Rng_MinPvgRotTurretCtClkwiseTurtPost[0], 610, 131},
    { &gDb_ctSetNvParametersC1.tInf_MinPvgRotTurretCtClkwseNacelPost, (TVoid*)&gDb_tNvParametersC1.u16MinPvgRotTurretCtClkwseNacelPost, (TVoid*)&gDb_ctSetNvParametersC1.u16Def_MinPvgRotTurretCtClkwseNacelPost, (TVoid*)&gDb_ctSetNvParametersC1.au16Rng_MinPvgRotTurretCtClkwseNacelPost[0], 612, 132},
    { &gDb_ctSetNvParametersC1.tInf_MinPvgRotTuretCtClkwseRadioPost, (TVoid*)&gDb_tNvParametersC1.u16MinPvgRotTuretCtClkwseRadioPost, (TVoid*)&gDb_ctSetNvParametersC1.u16Def_MinPvgRotTuretCtClkwseRadioPost, (TVoid*)&gDb_ctSetNvParametersC1.au16Rng_MinPvgRotTuretCtClkwseRadioPost[0], 614, 133},
    { &gDb_ctSetNvParametersC1.tInf_MaxPvgRotTurretCtClkwseTuretPost, (TVoid*)&gDb_tNvParametersC1.u16MaxPvgRotTurretCtClkwseTuretPost, (TVoid*)&gDb_ctSetNvParametersC1.u16Def_MaxPvgRotTurretCtClkwseTuretPost, (TVoid*)&gDb_ctSetNvParametersC1.au16Rng_MaxPvgRotTurretCtClkwseTuretPost[0], 616, 134},
    { &gDb_ctSetNvParametersC1.tInf_MaxPvgRotTurretCtClkwseNacelPost, (TVoid*)&gDb_tNvParametersC1.u16MaxPvgRotTurretCtClkwseNacelPost, (TVoid*)&gDb_ctSetNvParametersC1.u16Def_MaxPvgRotTurretCtClkwseNacelPost, (TVoid*)&gDb_ctSetNvParametersC1.au16Rng_MaxPvgRotTurretCtClkwseNacelPost[0], 618, 135},
    { &gDb_ctSetNvParametersC1.tInf_MaxPvgRotTurretCtClkwseRadioPost, (TVoid*)&gDb_tNvParametersC1.u16MaxPvgRotTurretCtClkwseRadioPost, (TVoid*)&gDb_ctSetNvParametersC1.u16Def_MaxPvgRotTurretCtClkwseRadioPost, (TVoid*)&gDb_ctSetNvParametersC1.au16Rng_MaxPvgRotTurretCtClkwseRadioPost[0], 620, 136},
    { &gDb_ctSetNvParametersC1.tInf_RotTurretCtClkwiseRampRatioTuret, (TVoid*)&gDb_tNvParametersC1.au16RotTurretCtClkwiseRampRatioTuret[0], (TVoid*)&gDb_ctSetNvParametersC1.au16Def_RotTurretCtClkwiseRampRatioTuret[0], (TVoid*)&gDb_ctSetNvParametersC1.aau16Rng_RotTurretCtClkwiseRampRatioTuret[0][0], 622, 137},
    { &gDb_ctSetNvParametersC1.tInf_RotTurretCtClkwiseRampRatioNacel, (TVoid*)&gDb_tNvParametersC1.au16RotTurretCtClkwiseRampRatioNacel[0], (TVoid*)&gDb_ctSetNvParametersC1.au16Def_RotTurretCtClkwiseRampRatioNacel[0], (TVoid*)&gDb_ctSetNvParametersC1.aau16Rng_RotTurretCtClkwiseRampRatioNacel[0][0], 626, 139},
    { &gDb_ctSetNvParametersC1.tInf_RotTurretCtClkwiseRampRatioRadio, (TVoid*)&gDb_tNvParametersC1.au16RotTurretCtClkwiseRampRatioRadio[0], (TVoid*)&gDb_ctSetNvParametersC1.au16Def_RotTurretCtClkwiseRampRatioRadio[0], (TVoid*)&gDb_ctSetNvParametersC1.aau16Rng_RotTurretCtClkwiseRampRatioRadio[0][0], 630, 141},
    { &gDb_ctSetNvParametersC1.tInf_MinPvgUpAxleOscillant, (TVoid*)&gDb_tNvParametersC1.u8MinPvgUpAxleOscillant, (TVoid*)&gDb_ctSetNvParametersC1.u8Def_MinPvgUpAxleOscillant, (TVoid*)&gDb_ctSetNvParametersC1.au8Rng_MinPvgUpAxleOscillant[0], 634, 143},
    { &gDb_ctSetNvParametersC1.tInf_MaxPvgUpAxleOscillant, (TVoid*)&gDb_tNvParametersC1.u8MaxPvgUpAxleOscillant, (TVoid*)&gDb_ctSetNvParametersC1.u8Def_MaxPvgUpAxleOscillant, (TVoid*)&gDb_ctSetNvParametersC1.au8Rng_MaxPvgUpAxleOscillant[0], 635, 144},
    { &gDb_ctSetNvParametersC1.tInf_PvgUpAxleOscillantRampRatio, (TVoid*)&gDb_tNvParametersC1.au16PvgUpAxleOscillantRampRatio[0], (TVoid*)&gDb_ctSetNvParametersC1.au16Def_PvgUpAxleOscillantRampRatio[0], (TVoid*)&gDb_ctSetNvParametersC1.aau16Rng_PvgUpAxleOscillantRampRatio[0][0], 636, 145},
    { &gDb_ctSetNvParametersC1.tInf_MinPvgDownAxleOscillant, (TVoid*)&gDb_tNvParametersC1.u8MinPvgDownAxleOscillant, (TVoid*)&gDb_ctSetNvParametersC1.u8Def_MinPvgDownAxleOscillant, (TVoid*)&gDb_ctSetNvParametersC1.au8Rng_MinPvgDownAxleOscillant[0], 640, 147},
    { &gDb_ctSetNvParametersC1.tInf_MaxPvgDownAxleOscillant, (TVoid*)&gDb_tNvParametersC1.u8MaxPvgDownAxleOscillant, (TVoid*)&gDb_ctSetNvParametersC1.u8Def_MaxPvgDownAxleOscillant, (TVoid*)&gDb_ctSetNvParametersC1.au8Rng_MaxPvgDownAxleOscillant[0], 641, 148},
    { &gDb_ctSetNvParametersC1.tInf_PvgDownAxleOscillantRampRatio, (TVoid*)&gDb_tNvParametersC1.au16PvgDownAxleOscillantRampRatio[0], (TVoid*)&gDb_ctSetNvParametersC1.au16Def_PvgDownAxleOscillantRampRatio[0], (TVoid*)&gDb_ctSetNvParametersC1.aau16Rng_PvgDownAxleOscillantRampRatio[0][0], 642, 149},
    { &gDb_ctSetNvParametersC1.tInf_MinPvgUpAxleFixe, (TVoid*)&gDb_tNvParametersC1.u8MinPvgUpAxleFixe, (TVoid*)&gDb_ctSetNvParametersC1.u8Def_MinPvgUpAxleFixe, (TVoid*)&gDb_ctSetNvParametersC1.au8Rng_MinPvgUpAxleFixe[0], 646, 151},
    { &gDb_ctSetNvParametersC1.tInf_MaxPvgUpAxleFixe, (TVoid*)&gDb_tNvParametersC1.u8MaxPvgUpAxleFixe, (TVoid*)&gDb_ctSetNvParametersC1.u8Def_MaxPvgUpAxleFixe, (TVoid*)&gDb_ctSetNvParametersC1.au8Rng_MaxPvgUpAxleFixe[0], 647, 152},
    { &gDb_ctSetNvParametersC1.tInf_PvgUpAxleFixeRampRatio, (TVoid*)&gDb_tNvParametersC1.au16PvgUpAxleFixeRampRatio[0], (TVoid*)&gDb_ctSetNvParametersC1.au16Def_PvgUpAxleFixeRampRatio[0], (TVoid*)&gDb_ctSetNvParametersC1.aau16Rng_PvgUpAxleFixeRampRatio[0][0], 648, 153},
    { &gDb_ctSetNvParametersC1.tInf_MinPvgDownAxleFixe, (TVoid*)&gDb_tNvParametersC1.u8MinPvgDownAxleFixe, (TVoid*)&gDb_ctSetNvParametersC1.u8Def_MinPvgDownAxleFixe, (TVoid*)&gDb_ctSetNvParametersC1.au8Rng_MinPvgDownAxleFixe[0], 652, 155},
    { &gDb_ctSetNvParametersC1.tInf_MaxPvgDownAxleFixe, (TVoid*)&gDb_tNvParametersC1.u8MaxPvgDownAxleFixe, (TVoid*)&gDb_ctSetNvParametersC1.u8Def_MaxPvgDownAxleFixe, (TVoid*)&gDb_ctSetNvParametersC1.au8Rng_MaxPvgDownAxleFixe[0], 653, 156},
    { &gDb_ctSetNvParametersC1.tInf_PvgDownAxleFixeRampRatio, (TVoid*)&gDb_tNvParametersC1.au16PvgDownAxleFixeRampRatio[0], (TVoid*)&gDb_ctSetNvParametersC1.au16Def_PvgDownAxleFixeRampRatio[0], (TVoid*)&gDb_ctSetNvParametersC1.aau16Rng_PvgDownAxleFixeRampRatio[0][0], 654, 157},
    { &gDb_ctSetNvParametersC1.tInf_MinPvgRotFrameCtClkwise, (TVoid*)&gDb_tNvParametersC1.u8MinPvgRotFrameCtClkwise, (TVoid*)&gDb_ctSetNvParametersC1.u8Def_MinPvgRotFrameCtClkwise, (TVoid*)&gDb_ctSetNvParametersC1.au8Rng_MinPvgRotFrameCtClkwise[0], 658, 159},
    { &gDb_ctSetNvParametersC1.tInf_MaxPvgRotFrameCtClkwise, (TVoid*)&gDb_tNvParametersC1.u8MaxPvgRotFrameCtClkwise, (TVoid*)&gDb_ctSetNvParametersC1.u8Def_MaxPvgRotFrameCtClkwise, (TVoid*)&gDb_ctSetNvParametersC1.au8Rng_MaxPvgRotFrameCtClkwise[0], 659, 160},
    { &gDb_ctSetNvParametersC1.tInf_RotFrameCtClkwiseRampRatio, (TVoid*)&gDb_tNvParametersC1.au16RotFrameCtClkwiseRampRatio[0], (TVoid*)&gDb_ctSetNvParametersC1.au16Def_RotFrameCtClkwiseRampRatio[0], (TVoid*)&gDb_ctSetNvParametersC1.aau16Rng_RotFrameCtClkwiseRampRatio[0][0], 660, 161},
    { &gDb_ctSetNvParametersC1.tInf_MinPvgRotFrameClkwise, (TVoid*)&gDb_tNvParametersC1.u8MinPvgRotFrameClkwise, (TVoid*)&gDb_ctSetNvParametersC1.u8Def_MinPvgRotFrameClkwise, (TVoid*)&gDb_ctSetNvParametersC1.au8Rng_MinPvgRotFrameClkwise[0], 664, 163},
    { &gDb_ctSetNvParametersC1.tInf_MaxPvgRotFrameClkwise, (TVoid*)&gDb_tNvParametersC1.u8MaxPvgRotFrameClkwise, (TVoid*)&gDb_ctSetNvParametersC1.u8Def_MaxPvgRotFrameClkwise, (TVoid*)&gDb_ctSetNvParametersC1.au8Rng_MaxPvgRotFrameClkwise[0], 665, 164},
    { &gDb_ctSetNvParametersC1.tInf_RotFrameClkwiseRampRatio, (TVoid*)&gDb_tNvParametersC1.au16RotFrameClkwiseRampRatio[0], (TVoid*)&gDb_ctSetNvParametersC1.au16Def_RotFrameClkwiseRampRatio[0], (TVoid*)&gDb_ctSetNvParametersC1.aau16Rng_RotFrameClkwiseRampRatio[0][0], 666, 165},
    { &gDb_ctSetNvParametersC1.tInf_AntiDemarrageTime, (TVoid*)&gDb_tNvParametersC1.u32AntiDemarrageTime, (TVoid*)&gDb_ctSetNvParametersC1.u32Def_AntiDemarrageTime, (TVoid*)&gDb_ctSetNvParametersC1.au32Rng_AntiDemarrageTime[0], 670, 167},
    { &gDb_ctSetNvParametersC1.tInf_TresholdRmpMotorAntidemarrage, (TVoid*)&gDb_tNvParametersC1.i32TresholdRmpMotorAntidemarrage, (TVoid*)&gDb_ctSetNvParametersC1.i32Def_TresholdRmpMotorAntidemarrage, (TVoid*)&gDb_ctSetNvParametersC1.ai32Rng_TresholdRmpMotorAntidemarrage[0], 674, 168},
    { &gDb_ctSetNvParametersC1.tInf_SlowSpeedUpDeltaArmTelescOut, (TVoid*)&gDb_tNvParametersC1.u16SlowSpeedUpDeltaArmTelescOut, (TVoid*)&gDb_ctSetNvParametersC1.u16Def_SlowSpeedUpDeltaArmTelescOut, (TVoid*)&gDb_ctSetNvParametersC1.au16Rng_SlowSpeedUpDeltaArmTelescOut[0], 678, 169},
    { &gDb_ctSetNvParametersC1.tInf_SlowSpeedDownDeltaArmTelescOut, (TVoid*)&gDb_tNvParametersC1.u16SlowSpeedDownDeltaArmTelescOut, (TVoid*)&gDb_ctSetNvParametersC1.u16Def_SlowSpeedDownDeltaArmTelescOut, (TVoid*)&gDb_ctSetNvParametersC1.au16Rng_SlowSpeedDownDeltaArmTelescOut[0], 680, 170},
    { &gDb_ctSetNvParametersC1.tInf_SlowSpeedUpArrowArmTelescOut, (TVoid*)&gDb_tNvParametersC1.u16SlowSpeedUpArrowArmTelescOut, (TVoid*)&gDb_ctSetNvParametersC1.u16Def_SlowSpeedUpArrowArmTelescOut, (TVoid*)&gDb_ctSetNvParametersC1.au16Rng_SlowSpeedUpArrowArmTelescOut[0], 682, 171},
    { &gDb_ctSetNvParametersC1.tInf_SlowSpeedDownArrowArmTelescOut, (TVoid*)&gDb_tNvParametersC1.u16SlowSpeedDownArrowArmTelescOut, (TVoid*)&gDb_ctSetNvParametersC1.u16Def_SlowSpeedDownArrowArmTelescOut, (TVoid*)&gDb_ctSetNvParametersC1.au16Rng_SlowSpeedDownArrowArmTelescOut[0], 684, 172},
    { &gDb_ctSetNvParametersC1.tInf_RotTurretClockSlowSpeedRedAlo, (TVoid*)&gDb_tNvParametersC1.u16RotTurretClockSlowSpeedRedAlo, (TVoid*)&gDb_ctSetNvParametersC1.u16Def_RotTurretClockSlowSpeedRedAlo, (TVoid*)&gDb_ctSetNvParametersC1.au16Rng_RotTurretClockSlowSpeedRedAlo[0], 686, 173},
    { &gDb_ctSetNvParametersC1.tInf_RotTurretCtClockSlowSpeedRedAlo, (TVoid*)&gDb_tNvParametersC1.u16RotTurretCtClockSlowSpeedRedAlo, (TVoid*)&gDb_ctSetNvParametersC1.u16Def_RotTurretCtClockSlowSpeedRedAlo, (TVoid*)&gDb_ctSetNvParametersC1.au16Rng_RotTurretCtClockSlowSpeedRedAlo[0], 688, 174},
    { &gDb_ctSetNvParametersC1.tInf_ArrowArmDownSlowSpeedRedAlo, (TVoid*)&gDb_tNvParametersC1.u16ArrowArmDownSlowSpeedRedAlo, (TVoid*)&gDb_ctSetNvParametersC1.u16Def_ArrowArmDownSlowSpeedRedAlo, (TVoid*)&gDb_ctSetNvParametersC1.au16Rng_ArrowArmDownSlowSpeedRedAlo[0], 690, 175},
    { &gDb_ctSetNvParametersC1.tInf_SlowSpeedRotTurretCtClokTelecOut, (TVoid*)&gDb_tNvParametersC1.u16SlowSpeedRotTurretCtClokTelecOut, (TVoid*)&gDb_ctSetNvParametersC1.u16Def_SlowSpeedRotTurretCtClokTelecOut, (TVoid*)&gDb_ctSetNvParametersC1.au16Rng_SlowSpeedRotTurretCtClokTelecOut[0], 692, 176},
    { &gDb_ctSetNvParametersC1.tInf_SlowSpeedRotTurretClokTelecOut, (TVoid*)&gDb_tNvParametersC1.u16SlowSpeedRotTurretClokTelecOut, (TVoid*)&gDb_ctSetNvParametersC1.u16Def_SlowSpeedRotTurretClokTelecOut, (TVoid*)&gDb_ctSetNvParametersC1.au16Rng_SlowSpeedRotTurretClokTelecOut[0], 694, 177},
    { &gDb_ctSetNvParametersC1.tInf_MinPvgUpMastMeasure, (TVoid*)&gDb_tNvParametersC1.u16MinPvgUpMastMeasure, (TVoid*)&gDb_ctSetNvParametersC1.u16Def_MinPvgUpMastMeasure, (TVoid*)&gDb_ctSetNvParametersC1.au16Rng_MinPvgUpMastMeasure[0], 696, 178},
    { &gDb_ctSetNvParametersC1.tInf_MaxPvgUpMastMeasure, (TVoid*)&gDb_tNvParametersC1.u16MaxPvgUpMastMeasure, (TVoid*)&gDb_ctSetNvParametersC1.u16Def_MaxPvgUpMastMeasure, (TVoid*)&gDb_ctSetNvParametersC1.au16Rng_MaxPvgUpMastMeasure[0], 698, 179},
    { &gDb_ctSetNvParametersC1.tInf_UpMastMeasureRampRatio, (TVoid*)&gDb_tNvParametersC1.au16UpMastMeasureRampRatio[0], (TVoid*)&gDb_ctSetNvParametersC1.au16Def_UpMastMeasureRampRatio[0], (TVoid*)&gDb_ctSetNvParametersC1.aau16Rng_UpMastMeasureRampRatio[0][0], 700, 180},
    { &gDb_ctSetNvParametersC1.tInf_MinPvgDownMastMeasure, (TVoid*)&gDb_tNvParametersC1.u16MinPvgDownMastMeasure, (TVoid*)&gDb_ctSetNvParametersC1.u16Def_MinPvgDownMastMeasure, (TVoid*)&gDb_ctSetNvParametersC1.au16Rng_MinPvgDownMastMeasure[0], 704, 182},
    { &gDb_ctSetNvParametersC1.tInf_MaxPvgDownMastMeasure, (TVoid*)&gDb_tNvParametersC1.u16MaxPvgDownMastMeasure, (TVoid*)&gDb_ctSetNvParametersC1.u16Def_MaxPvgDownMastMeasure, (TVoid*)&gDb_ctSetNvParametersC1.au16Rng_MaxPvgDownMastMeasure[0], 706, 183},
    { &gDb_ctSetNvParametersC1.tInf_DownMastMeasureRampRatio, (TVoid*)&gDb_tNvParametersC1.au16DownMastMeasureRampRatio[0], (TVoid*)&gDb_ctSetNvParametersC1.au16Def_DownMastMeasureRampRatio[0], (TVoid*)&gDb_ctSetNvParametersC1.aau16Rng_DownMastMeasureRampRatio[0][0], 708, 184},
    { &gDb_ctSetNvParametersC1.tInf_OutCharPosTransmission1Pressure, (TVoid*)&gDb_tNvParametersC1.i16OutCharPosTransmission1Pressure, (TVoid*)&gDb_ctSetNvParametersC1.i16Def_OutCharPosTransmission1Pressure, (TVoid*)&gDb_ctSetNvParametersC1.ai16Rng_OutCharPosTransmission1Pressure[0], 712, 186},
    { &gDb_ctSetNvParametersC1.tInf_OutCharNeuTransmission1Pressure, (TVoid*)&gDb_tNvParametersC1.i16OutCharNeuTransmission1Pressure, (TVoid*)&gDb_ctSetNvParametersC1.i16Def_OutCharNeuTransmission1Pressure, (TVoid*)&gDb_ctSetNvParametersC1.ai16Rng_OutCharNeuTransmission1Pressure[0], 714, 187},
    { &gDb_ctSetNvParametersC1.tInf_OutCharNegTransmission1Pressure, (TVoid*)&gDb_tNvParametersC1.i16OutCharNegTransmission1Pressure, (TVoid*)&gDb_ctSetNvParametersC1.i16Def_OutCharNegTransmission1Pressure, (TVoid*)&gDb_ctSetNvParametersC1.ai16Rng_OutCharNegTransmission1Pressure[0], 716, 188},
    { &gDb_ctSetNvParametersC1.tInf_InCharPosTransmission1Pressure, (TVoid*)&gDb_tNvParametersC1.i16InCharPosTransmission1Pressure, (TVoid*)&gDb_ctSetNvParametersC1.i16Def_InCharPosTransmission1Pressure, (TVoid*)&gDb_ctSetNvParametersC1.ai16Rng_InCharPosTransmission1Pressure[0], 718, 189},
    { &gDb_ctSetNvParametersC1.tInf_InCharNeuTransmission1Pressure, (TVoid*)&gDb_tNvParametersC1.i16InCharNeuTransmission1Pressure, (TVoid*)&gDb_ctSetNvParametersC1.i16Def_InCharNeuTransmission1Pressure, (TVoid*)&gDb_ctSetNvParametersC1.ai16Rng_InCharNeuTransmission1Pressure[0], 720, 190},
    { &gDb_ctSetNvParametersC1.tInf_INCharNegTransmission1Pressure, (TVoid*)&gDb_tNvParametersC1.i16INCharNegTransmission1Pressure, (TVoid*)&gDb_ctSetNvParametersC1.i16Def_INCharNegTransmission1Pressure, (TVoid*)&gDb_ctSetNvParametersC1.ai16Rng_INCharNegTransmission1Pressure[0], 722, 191},
    { &gDb_ctSetNvParametersC1.tInf_OutCharPosTransmission2Pressure, (TVoid*)&gDb_tNvParametersC1.i16OutCharPosTransmission2Pressure, (TVoid*)&gDb_ctSetNvParametersC1.i16Def_OutCharPosTransmission2Pressure, (TVoid*)&gDb_ctSetNvParametersC1.ai16Rng_OutCharPosTransmission2Pressure[0], 724, 192},
    { &gDb_ctSetNvParametersC1.tInf_OutCharNeuTransmission2Pressure, (TVoid*)&gDb_tNvParametersC1.i16OutCharNeuTransmission2Pressure, (TVoid*)&gDb_ctSetNvParametersC1.i16Def_OutCharNeuTransmission2Pressure, (TVoid*)&gDb_ctSetNvParametersC1.ai16Rng_OutCharNeuTransmission2Pressure[0], 726, 193},
    { &gDb_ctSetNvParametersC1.tInf_OutCharNegTransmission2Pressure, (TVoid*)&gDb_tNvParametersC1.i16OutCharNegTransmission2Pressure, (TVoid*)&gDb_ctSetNvParametersC1.i16Def_OutCharNegTransmission2Pressure, (TVoid*)&gDb_ctSetNvParametersC1.ai16Rng_OutCharNegTransmission2Pressure[0], 728, 194},
    { &gDb_ctSetNvParametersC1.tInf_InCharPosTransmission2Pressure, (TVoid*)&gDb_tNvParametersC1.i16InCharPosTransmission2Pressure, (TVoid*)&gDb_ctSetNvParametersC1.i16Def_InCharPosTransmission2Pressure, (TVoid*)&gDb_ctSetNvParametersC1.ai16Rng_InCharPosTransmission2Pressure[0], 730, 195},
    { &gDb_ctSetNvParametersC1.tInf_InCharNeuTransmission2Pressure, (TVoid*)&gDb_tNvParametersC1.i16InCharNeuTransmission2Pressure, (TVoid*)&gDb_ctSetNvParametersC1.i16Def_InCharNeuTransmission2Pressure, (TVoid*)&gDb_ctSetNvParametersC1.ai16Rng_InCharNeuTransmission2Pressure[0], 732, 196},
    { &gDb_ctSetNvParametersC1.tInf_INCharNegTransmission2Pressure, (TVoid*)&gDb_tNvParametersC1.i16INCharNegTransmission2Pressure, (TVoid*)&gDb_ctSetNvParametersC1.i16Def_INCharNegTransmission2Pressure, (TVoid*)&gDb_ctSetNvParametersC1.ai16Rng_INCharNegTransmission2Pressure[0], 734, 197},
    { &gDb_ctSetNvParametersC1.tInf_OutCharPosBypassPressureSensor, (TVoid*)&gDb_tNvParametersC1.i16OutCharPosBypassPressureSensor, (TVoid*)&gDb_ctSetNvParametersC1.i16Def_OutCharPosBypassPressureSensor, (TVoid*)&gDb_ctSetNvParametersC1.ai16Rng_OutCharPosBypassPressureSensor[0], 736, 198},
    { &gDb_ctSetNvParametersC1.tInf_OutCharNeuBypassPressureSensor, (TVoid*)&gDb_tNvParametersC1.i16OutCharNeuBypassPressureSensor, (TVoid*)&gDb_ctSetNvParametersC1.i16Def_OutCharNeuBypassPressureSensor, (TVoid*)&gDb_ctSetNvParametersC1.ai16Rng_OutCharNeuBypassPressureSensor[0], 738, 199},
    { &gDb_ctSetNvParametersC1.tInf_OutCharNegBypassPressureSensor, (TVoid*)&gDb_tNvParametersC1.i16OutCharNegBypassPressureSensor, (TVoid*)&gDb_ctSetNvParametersC1.i16Def_OutCharNegBypassPressureSensor, (TVoid*)&gDb_ctSetNvParametersC1.ai16Rng_OutCharNegBypassPressureSensor[0], 740, 200},
    { &gDb_ctSetNvParametersC1.tInf_InCharPosBypassPressureSensor, (TVoid*)&gDb_tNvParametersC1.i16InCharPosBypassPressureSensor, (TVoid*)&gDb_ctSetNvParametersC1.i16Def_InCharPosBypassPressureSensor, (TVoid*)&gDb_ctSetNvParametersC1.ai16Rng_InCharPosBypassPressureSensor[0], 742, 201},
    { &gDb_ctSetNvParametersC1.tInf_InCharNeuBypassPressureSensor, (TVoid*)&gDb_tNvParametersC1.i16InCharNeuBypassPressureSensor, (TVoid*)&gDb_ctSetNvParametersC1.i16Def_InCharNeuBypassPressureSensor, (TVoid*)&gDb_ctSetNvParametersC1.ai16Rng_InCharNeuBypassPressureSensor[0], 744, 202},
    { &gDb_ctSetNvParametersC1.tInf_InCharNegBypassPressureSensor, (TVoid*)&gDb_tNvParametersC1.i16InCharNegBypassPressureSensor, (TVoid*)&gDb_ctSetNvParametersC1.i16Def_InCharNegBypassPressureSensor, (TVoid*)&gDb_ctSetNvParametersC1.ai16Rng_InCharNegBypassPressureSensor[0], 746, 203},
    { &gDb_ctSetNvParametersC1.tInf_NvParametersC1_1, (TVoid*)&gDb_tNvParametersC1.boNvParametersC1_1, (TVoid*)&gDb_ctSetNvParametersC1.boDef_NvParametersC1_1, (TVoid*)&gDb_ctSetNvParametersC1.aboRng_NvParametersC1_1[0], 748, 204},
    { &gDb_ctSetNvParametersC1.tInf_NvParametersC1_2, (TVoid*)&gDb_tNvParametersC1.boNvParametersC1_2, (TVoid*)&gDb_ctSetNvParametersC1.boDef_NvParametersC1_2, (TVoid*)&gDb_ctSetNvParametersC1.aboRng_NvParametersC1_2[0], 749, 205},
    { &gDb_ctSetNvParametersC1.tInf_NvParametersC1_3, (TVoid*)&gDb_tNvParametersC1.boNvParametersC1_3, (TVoid*)&gDb_ctSetNvParametersC1.boDef_NvParametersC1_3, (TVoid*)&gDb_ctSetNvParametersC1.aboRng_NvParametersC1_3[0], 750, 206},
    { &gDb_ctSetNvParametersC1.tInf_NvParametersC1_4, (TVoid*)&gDb_tNvParametersC1.boNvParametersC1_4, (TVoid*)&gDb_ctSetNvParametersC1.boDef_NvParametersC1_4, (TVoid*)&gDb_ctSetNvParametersC1.aboRng_NvParametersC1_4[0], 751, 207},
    { &gDb_ctSetNvParametersC1.tInf_NvParametersC1_5, (TVoid*)&gDb_tNvParametersC1.boNvParametersC1_5, (TVoid*)&gDb_ctSetNvParametersC1.boDef_NvParametersC1_5, (TVoid*)&gDb_ctSetNvParametersC1.aboRng_NvParametersC1_5[0], 752, 208},
    { &gDb_ctSetNvParametersC1.tInf_NvParametersC1_6, (TVoid*)&gDb_tNvParametersC1.u8NvParametersC1_6, (TVoid*)&gDb_ctSetNvParametersC1.u8Def_NvParametersC1_6, (TVoid*)&gDb_ctSetNvParametersC1.au8Rng_NvParametersC1_6[0], 753, 209},
    { &gDb_ctSetNvParametersC1.tInf_NvParametersC1_7, (TVoid*)&gDb_tNvParametersC1.u8NvParametersC1_7, (TVoid*)&gDb_ctSetNvParametersC1.u8Def_NvParametersC1_7, (TVoid*)&gDb_ctSetNvParametersC1.au8Rng_NvParametersC1_7[0], 754, 210},
    { &gDb_ctSetNvParametersC1.tInf_NvParametersC1_8, (TVoid*)&gDb_tNvParametersC1.u8NvParametersC1_8, (TVoid*)&gDb_ctSetNvParametersC1.u8Def_NvParametersC1_8, (TVoid*)&gDb_ctSetNvParametersC1.au8Rng_NvParametersC1_8[0], 755, 211},
    { &gDb_ctSetNvParametersC1.tInf_NvParametersC1_9, (TVoid*)&gDb_tNvParametersC1.u8NvParametersC1_9, (TVoid*)&gDb_ctSetNvParametersC1.u8Def_NvParametersC1_9, (TVoid*)&gDb_ctSetNvParametersC1.au8Rng_NvParametersC1_9[0], 756, 212},
    { &gDb_ctSetNvParametersC1.tInf_NvParametersC1_10, (TVoid*)&gDb_tNvParametersC1.u16NvParametersC1_10, (TVoid*)&gDb_ctSetNvParametersC1.u16Def_NvParametersC1_10, (TVoid*)&gDb_ctSetNvParametersC1.au16Rng_NvParametersC1_10[0], 757, 213},
    { &gDb_ctSetNvParametersC1.tInf_NvParametersC1_11, (TVoid*)&gDb_tNvParametersC1.u16NvParametersC1_11, (TVoid*)&gDb_ctSetNvParametersC1.u16Def_NvParametersC1_11, (TVoid*)&gDb_ctSetNvParametersC1.au16Rng_NvParametersC1_11[0], 759, 214},
    { &gDb_ctSetNvParametersC1.tInf_NvParametersC1_12, (TVoid*)&gDb_tNvParametersC1.u16NvParametersC1_12, (TVoid*)&gDb_ctSetNvParametersC1.u16Def_NvParametersC1_12, (TVoid*)&gDb_ctSetNvParametersC1.au16Rng_NvParametersC1_12[0], 761, 215},
    { &gDb_ctSetNvParametersC1.tInf_NvParametersC1_13, (TVoid*)&gDb_tNvParametersC1.u16NvParametersC1_13, (TVoid*)&gDb_ctSetNvParametersC1.u16Def_NvParametersC1_13, (TVoid*)&gDb_ctSetNvParametersC1.au16Rng_NvParametersC1_13[0], 763, 216},
    { &gDb_ctSetNvParametersC1.tInf_NvParametersC1_14, (TVoid*)&gDb_tNvParametersC1.i16NvParametersC1_14, (TVoid*)&gDb_ctSetNvParametersC1.i16Def_NvParametersC1_14, (TVoid*)&gDb_ctSetNvParametersC1.ai16Rng_NvParametersC1_14[0], 765, 217},
    { &gDb_ctSetNvParametersC1.tInf_NvParametersC1_15, (TVoid*)&gDb_tNvParametersC1.i16NvParametersC1_15, (TVoid*)&gDb_ctSetNvParametersC1.i16Def_NvParametersC1_15, (TVoid*)&gDb_ctSetNvParametersC1.ai16Rng_NvParametersC1_15[0], 767, 218},
    { &gDb_ctSetNvParametersC1.tInf_NvParametersC1_16, (TVoid*)&gDb_tNvParametersC1.i16NvParametersC1_16, (TVoid*)&gDb_ctSetNvParametersC1.i16Def_NvParametersC1_16, (TVoid*)&gDb_ctSetNvParametersC1.ai16Rng_NvParametersC1_16[0], 769, 219},
    { &gDb_ctSetNvParametersC1.tInf_NvParametersC1_17, (TVoid*)&gDb_tNvParametersC1.i16NvParametersC1_17, (TVoid*)&gDb_ctSetNvParametersC1.i16Def_NvParametersC1_17, (TVoid*)&gDb_ctSetNvParametersC1.ai16Rng_NvParametersC1_17[0], 771, 220},
    { &gDb_ctSetNvParametersC1.tInf_CurFor220VGeneratorOn, (TVoid*)&gDb_tNvParametersC1.u16CurFor220VGeneratorOn, (TVoid*)&gDb_ctSetNvParametersC1.u16Def_CurFor220VGeneratorOn, (TVoid*)&gDb_ctSetNvParametersC1.au16Rng_CurFor220VGeneratorOn[0], 773, 221},
    { &gDb_ctSetNvParametersC1.tInf_NbElementTransissionPressure, (TVoid*)&gDb_tNvParametersC1.u8NbElementTransissionPressure, (TVoid*)&gDb_ctSetNvParametersC1.u8Def_NbElementTransissionPressure, (TVoid*)&gDb_ctSetNvParametersC1.au8Rng_NbElementTransissionPressure[0], 775, 222},
    { &gDb_ctSetNvParametersC1.tInf_RampUpEvGenerator, (TVoid*)&gDb_tNvParametersC1.u16RampUpEvGenerator, (TVoid*)&gDb_ctSetNvParametersC1.u16Def_RampUpEvGenerator, (TVoid*)&gDb_ctSetNvParametersC1.au16Rng_RampUpEvGenerator[0], 776, 223},
    { &gDb_ctSetNvParametersC1.tInf_RampDownEvGenerator, (TVoid*)&gDb_tNvParametersC1.u16RampDownEvGenerator, (TVoid*)&gDb_ctSetNvParametersC1.u16Def_RampDownEvGenerator, (TVoid*)&gDb_ctSetNvParametersC1.au16Rng_RampDownEvGenerator[0], 778, 224},
    { &gDb_ctSetNvParametersC1.tInf_GasGaugeAlarm, (TVoid*)&gDb_tNvParametersC1.i16GasGaugeAlarm, (TVoid*)&gDb_ctSetNvParametersC1.i16Def_GasGaugeAlarm, (TVoid*)&gDb_ctSetNvParametersC1.ai16Rng_GasGaugeAlarm[0], 780, 225},
    { &gDb_ctSetNvParametersC1.tInf_CRC_SRDO1, (TVoid*)&gDb_tNvParametersC1.u16CRC_SRDO1, (TVoid*)&gDb_ctSetNvParametersC1.u16Def_CRC_SRDO1, (TVoid*)&gDb_ctSetNvParametersC1.au16Rng_CRC_SRDO1[0], 782, 226},
    { &gDb_ctSetNvParametersC1.tInf_CRC_SRDO2, (TVoid*)&gDb_tNvParametersC1.u16CRC_SRDO2, (TVoid*)&gDb_ctSetNvParametersC1.u16Def_CRC_SRDO2, (TVoid*)&gDb_ctSetNvParametersC1.au16Rng_CRC_SRDO2[0], 784, 227},
    { &gDb_ctSetNvParametersC1.tInf_CRC_SRDO3, (TVoid*)&gDb_tNvParametersC1.u16CRC_SRDO3, (TVoid*)&gDb_ctSetNvParametersC1.u16Def_CRC_SRDO3, (TVoid*)&gDb_ctSetNvParametersC1.au16Rng_CRC_SRDO3[0], 786, 228},
    { &gDb_ctSetNvParametersC1.tInf_CRC_SRDO4, (TVoid*)&gDb_tNvParametersC1.u16CRC_SRDO4, (TVoid*)&gDb_ctSetNvParametersC1.u16Def_CRC_SRDO4, (TVoid*)&gDb_ctSetNvParametersC1.au16Rng_CRC_SRDO4[0], 788, 229},
    { &gDb_ctSetNvParametersC1.tInf_CRC_SRDO5, (TVoid*)&gDb_tNvParametersC1.u16CRC_SRDO5, (TVoid*)&gDb_ctSetNvParametersC1.u16Def_CRC_SRDO5, (TVoid*)&gDb_ctSetNvParametersC1.au16Rng_CRC_SRDO5[0], 790, 230},
    { &gDb_ctSetNvParametersC1.tInf_CRC_SRDO6, (TVoid*)&gDb_tNvParametersC1.u16CRC_SRDO6, (TVoid*)&gDb_ctSetNvParametersC1.u16Def_CRC_SRDO6, (TVoid*)&gDb_ctSetNvParametersC1.au16Rng_CRC_SRDO6[0], 792, 231},
    { &gDb_ctSetNvParametersC1.tInf_CRC_SRDO7, (TVoid*)&gDb_tNvParametersC1.u16CRC_SRDO7, (TVoid*)&gDb_ctSetNvParametersC1.u16Def_CRC_SRDO7, (TVoid*)&gDb_ctSetNvParametersC1.au16Rng_CRC_SRDO7[0], 794, 232},
    { &gDb_ctSetNvParametersC1.tInf_CRC_SRDO8, (TVoid*)&gDb_tNvParametersC1.u16CRC_SRDO8, (TVoid*)&gDb_ctSetNvParametersC1.u16Def_CRC_SRDO8, (TVoid*)&gDb_ctSetNvParametersC1.au16Rng_CRC_SRDO8[0], 796, 233},
    { &gDb_ctSetNvParametersC1.tInf_CRC_SRDO9, (TVoid*)&gDb_tNvParametersC1.u16CRC_SRDO9, (TVoid*)&gDb_ctSetNvParametersC1.u16Def_CRC_SRDO9, (TVoid*)&gDb_ctSetNvParametersC1.au16Rng_CRC_SRDO9[0], 798, 234},
    { &gDb_ctSetNvParametersC1.tInf_CRC_SRDO10, (TVoid*)&gDb_tNvParametersC1.u16CRC_SRDO10, (TVoid*)&gDb_ctSetNvParametersC1.u16Def_CRC_SRDO10, (TVoid*)&gDb_ctSetNvParametersC1.au16Rng_CRC_SRDO10[0], 800, 235},
    { &gDb_ctSetNvParametersC1.tInf_TimeoutSdoRequestTime, (TVoid*)&gDb_tNvParametersC1.u32TimeoutSdoRequestTime, (TVoid*)&gDb_ctSetNvParametersC1.u32Def_TimeoutSdoRequestTime, (TVoid*)&gDb_ctSetNvParametersC1.au32Rng_TimeoutSdoRequestTime[0], 802, 236},
    { &gDb_ctSetNvParametersC1.tInf_ActiveSystemFault, (TVoid*)&gDb_tNvParametersC1.boActiveSystemFault, (TVoid*)&gDb_ctSetNvParametersC1.boDef_ActiveSystemFault, (TVoid*)&gDb_ctSetNvParametersC1.aboRng_ActiveSystemFault[0], 806, 237},
    { &gDb_ctSetNvParametersC1.tInf_BypassAlarmActiveC1, (TVoid*)&gDb_tNvParametersC1.boBypassAlarmActiveC1, (TVoid*)&gDb_ctSetNvParametersC1.boDef_BypassAlarmActiveC1, (TVoid*)&gDb_ctSetNvParametersC1.aboRng_BypassAlarmActiveC1[0], 807, 238},
    { &gDb_ctSetNvParametersC1.tInf_OutCharPosOilTankTemp, (TVoid*)&gDb_tNvParametersC1.i16OutCharPosOilTankTemp, (TVoid*)&gDb_ctSetNvParametersC1.i16Def_OutCharPosOilTankTemp, (TVoid*)&gDb_ctSetNvParametersC1.ai16Rng_OutCharPosOilTankTemp[0], 808, 239},
    { &gDb_ctSetNvParametersC1.tInf_OutCharNeuOilTankTemp, (TVoid*)&gDb_tNvParametersC1.i16OutCharNeuOilTankTemp, (TVoid*)&gDb_ctSetNvParametersC1.i16Def_OutCharNeuOilTankTemp, (TVoid*)&gDb_ctSetNvParametersC1.ai16Rng_OutCharNeuOilTankTemp[0], 810, 240},
    { &gDb_ctSetNvParametersC1.tInf_OutCharNegOilTankTemp, (TVoid*)&gDb_tNvParametersC1.i16OutCharNegOilTankTemp, (TVoid*)&gDb_ctSetNvParametersC1.i16Def_OutCharNegOilTankTemp, (TVoid*)&gDb_ctSetNvParametersC1.ai16Rng_OutCharNegOilTankTemp[0], 812, 241}
};

const TDbVarTabNvm gDb_catVarTabNvCalibrationC1[30] =
{    //!< *cptInf *vpVal *cvpDataRang *cvpDataDef cu16Adr cu16ValuePos
    { &gDb_ctSetNvCalibrationC1.tInf_ArmDeltaRampRatioNacellePost, (TVoid*)&gDb_tNvCalibrationC1.au16ArmDeltaRampRatioNacellePost[0], (TVoid*)&gDb_ctSetNvCalibrationC1.au16Def_ArmDeltaRampRatioNacellePost[0], (TVoid*)&gDb_ctSetNvCalibrationC1.aau16Rng_ArmDeltaRampRatioNacellePost[0][0], 1012, 0},
    { &gDb_ctSetNvCalibrationC1.tInf_ArmArrowRampRatioNacellePost, (TVoid*)&gDb_tNvCalibrationC1.au16ArmArrowRampRatioNacellePost[0], (TVoid*)&gDb_ctSetNvCalibrationC1.au16Def_ArmArrowRampRatioNacellePost[0], (TVoid*)&gDb_ctSetNvCalibrationC1.aau16Rng_ArmArrowRampRatioNacellePost[0][0], 1020, 4},
    { &gDb_ctSetNvCalibrationC1.tInf_ArmTelescopeRampRatioNacellePost, (TVoid*)&gDb_tNvCalibrationC1.au16ArmTelescopeRampRatioNacellePost[0], (TVoid*)&gDb_ctSetNvCalibrationC1.au16Def_ArmTelescopeRampRatioNacellePost[0], (TVoid*)&gDb_ctSetNvCalibrationC1.aau16Rng_ArmTelescopeRampRatioNacellePost[0][0], 1028, 8},
    { &gDb_ctSetNvCalibrationC1.tInf_RotTurretRampRatio, (TVoid*)&gDb_tNvCalibrationC1.au16RotTurretRampRatio[0], (TVoid*)&gDb_ctSetNvCalibrationC1.au16Def_RotTurretRampRatio[0], (TVoid*)&gDb_ctSetNvCalibrationC1.aau16Rng_RotTurretRampRatio[0][0], 1036, 12},
    { &gDb_ctSetNvCalibrationC1.tInf_PvgEvTorRampRatio, (TVoid*)&gDb_tNvCalibrationC1.au16PvgEvTorRampRatio[0], (TVoid*)&gDb_ctSetNvCalibrationC1.au16Def_PvgEvTorRampRatio[0], (TVoid*)&gDb_ctSetNvCalibrationC1.aau16Rng_PvgEvTorRampRatio[0][0], 1040, 14},
    { &gDb_ctSetNvCalibrationC1.tInf_AngleEndStopLowDeltaArm, (TVoid*)&gDb_tNvCalibrationC1.i16AngleEndStopLowDeltaArm, (TVoid*)&gDb_ctSetNvCalibrationC1.i16Def_AngleEndStopLowDeltaArm, (TVoid*)&gDb_ctSetNvCalibrationC1.ai16Rng_AngleEndStopLowDeltaArm[0], 1048, 18},
    { &gDb_ctSetNvCalibrationC1.tInf_AngleCalibEndStopLowDeltaArm, (TVoid*)&gDb_tNvCalibrationC1.i16AngleCalibEndStopLowDeltaArm, (TVoid*)&gDb_ctSetNvCalibrationC1.i16Def_AngleCalibEndStopLowDeltaArm, (TVoid*)&gDb_ctSetNvCalibrationC1.ai16Rng_AngleCalibEndStopLowDeltaArm[0], 1050, 19},
    { &gDb_ctSetNvCalibrationC1.tInf_AngleEndStopHighDeltaArm, (TVoid*)&gDb_tNvCalibrationC1.i16AngleEndStopHighDeltaArm, (TVoid*)&gDb_ctSetNvCalibrationC1.i16Def_AngleEndStopHighDeltaArm, (TVoid*)&gDb_ctSetNvCalibrationC1.ai16Rng_AngleEndStopHighDeltaArm[0], 1052, 20},
    { &gDb_ctSetNvCalibrationC1.tInf_AngleCalibEndStopHighDeltaArm, (TVoid*)&gDb_tNvCalibrationC1.i16AngleCalibEndStopHighDeltaArm, (TVoid*)&gDb_ctSetNvCalibrationC1.i16Def_AngleCalibEndStopHighDeltaArm, (TVoid*)&gDb_ctSetNvCalibrationC1.ai16Rng_AngleCalibEndStopHighDeltaArm[0], 1054, 21},
    { &gDb_ctSetNvCalibrationC1.tInf_AngleEndStopLowArrowArm, (TVoid*)&gDb_tNvCalibrationC1.i16AngleEndStopLowArrowArm, (TVoid*)&gDb_ctSetNvCalibrationC1.i16Def_AngleEndStopLowArrowArm, (TVoid*)&gDb_ctSetNvCalibrationC1.ai16Rng_AngleEndStopLowArrowArm[0], 1056, 22},
    { &gDb_ctSetNvCalibrationC1.tInf_AngleCalibEndStopLowArrowArm, (TVoid*)&gDb_tNvCalibrationC1.i16AngleCalibEndStopLowArrowArm, (TVoid*)&gDb_ctSetNvCalibrationC1.i16Def_AngleCalibEndStopLowArrowArm, (TVoid*)&gDb_ctSetNvCalibrationC1.ai16Rng_AngleCalibEndStopLowArrowArm[0], 1058, 23},
    { &gDb_ctSetNvCalibrationC1.tInf_AngleEndStopHighArrowArm, (TVoid*)&gDb_tNvCalibrationC1.i16AngleEndStopHighArrowArm, (TVoid*)&gDb_ctSetNvCalibrationC1.i16Def_AngleEndStopHighArrowArm, (TVoid*)&gDb_ctSetNvCalibrationC1.ai16Rng_AngleEndStopHighArrowArm[0], 1060, 24},
    { &gDb_ctSetNvCalibrationC1.tInf_AngleCalibEndStopHighArrowArm, (TVoid*)&gDb_tNvCalibrationC1.i16AngleCalibEndStopHighArrowArm, (TVoid*)&gDb_ctSetNvCalibrationC1.i16Def_AngleCalibEndStopHighArrowArm, (TVoid*)&gDb_ctSetNvCalibrationC1.ai16Rng_AngleCalibEndStopHighArrowArm[0], 1062, 25},
    { &gDb_ctSetNvCalibrationC1.tInf_LenghtEndStopLowTelescope1, (TVoid*)&gDb_tNvCalibrationC1.u16LenghtEndStopLowTelescope1, (TVoid*)&gDb_ctSetNvCalibrationC1.u16Def_LenghtEndStopLowTelescope1, (TVoid*)&gDb_ctSetNvCalibrationC1.au16Rng_LenghtEndStopLowTelescope1[0], 1064, 26},
    { &gDb_ctSetNvCalibrationC1.tInf_LenghtEndStopHighTelescope1, (TVoid*)&gDb_tNvCalibrationC1.u16LenghtEndStopHighTelescope1, (TVoid*)&gDb_ctSetNvCalibrationC1.u16Def_LenghtEndStopHighTelescope1, (TVoid*)&gDb_ctSetNvCalibrationC1.au16Rng_LenghtEndStopHighTelescope1[0], 1066, 27},
    { &gDb_ctSetNvCalibrationC1.tInf_LenghtCaliEndStopLowTelescope1, (TVoid*)&gDb_tNvCalibrationC1.u16LenghtCaliEndStopLowTelescope1, (TVoid*)&gDb_ctSetNvCalibrationC1.u16Def_LenghtCaliEndStopLowTelescope1, (TVoid*)&gDb_ctSetNvCalibrationC1.au16Rng_LenghtCaliEndStopLowTelescope1[0], 1068, 28},
    { &gDb_ctSetNvCalibrationC1.tInf_LenghtCaliEndStopHighTelescope1, (TVoid*)&gDb_tNvCalibrationC1.u16LenghtCaliEndStopHighTelescope1, (TVoid*)&gDb_ctSetNvCalibrationC1.u16Def_LenghtCaliEndStopHighTelescope1, (TVoid*)&gDb_ctSetNvCalibrationC1.au16Rng_LenghtCaliEndStopHighTelescope1[0], 1070, 29},
    { &gDb_ctSetNvCalibrationC1.tInf_LenghtEndStopLowTelescope2, (TVoid*)&gDb_tNvCalibrationC1.u16LenghtEndStopLowTelescope2, (TVoid*)&gDb_ctSetNvCalibrationC1.u16Def_LenghtEndStopLowTelescope2, (TVoid*)&gDb_ctSetNvCalibrationC1.au16Rng_LenghtEndStopLowTelescope2[0], 1072, 30},
    { &gDb_ctSetNvCalibrationC1.tInf_LenghtEndStopHighTelescope2, (TVoid*)&gDb_tNvCalibrationC1.u16LenghtEndStopHighTelescope2, (TVoid*)&gDb_ctSetNvCalibrationC1.u16Def_LenghtEndStopHighTelescope2, (TVoid*)&gDb_ctSetNvCalibrationC1.au16Rng_LenghtEndStopHighTelescope2[0], 1074, 31},
    { &gDb_ctSetNvCalibrationC1.tInf_LenghtCaliEndStopLowTelescope2, (TVoid*)&gDb_tNvCalibrationC1.u16LenghtCaliEndStopLowTelescope2, (TVoid*)&gDb_ctSetNvCalibrationC1.u16Def_LenghtCaliEndStopLowTelescope2, (TVoid*)&gDb_ctSetNvCalibrationC1.au16Rng_LenghtCaliEndStopLowTelescope2[0], 1076, 32},
    { &gDb_ctSetNvCalibrationC1.tInf_LenghtCaliEndStopHighTelescope2, (TVoid*)&gDb_tNvCalibrationC1.u16LenghtCaliEndStopHighTelescope2, (TVoid*)&gDb_ctSetNvCalibrationC1.u16Def_LenghtCaliEndStopHighTelescope2, (TVoid*)&gDb_ctSetNvCalibrationC1.au16Rng_LenghtCaliEndStopHighTelescope2[0], 1078, 33},
    { &gDb_ctSetNvCalibrationC1.tInf_ArmDeltaRampRatioTurretPost, (TVoid*)&gDb_tNvCalibrationC1.au16ArmDeltaRampRatioTurretPost[0], (TVoid*)&gDb_ctSetNvCalibrationC1.au16Def_ArmDeltaRampRatioTurretPost[0], (TVoid*)&gDb_ctSetNvCalibrationC1.aau16Rng_ArmDeltaRampRatioTurretPost[0][0], 1080, 34},
    { &gDb_ctSetNvCalibrationC1.tInf_ArmArrowRampRatioTurretPost, (TVoid*)&gDb_tNvCalibrationC1.au16ArmArrowRampRatioTurretPost[0], (TVoid*)&gDb_ctSetNvCalibrationC1.au16Def_ArmArrowRampRatioTurretPost[0], (TVoid*)&gDb_ctSetNvCalibrationC1.aau16Rng_ArmArrowRampRatioTurretPost[0][0], 1088, 38},
    { &gDb_ctSetNvCalibrationC1.tInf_ArmTelescopeRampRatioTurretPost, (TVoid*)&gDb_tNvCalibrationC1.au16ArmTelescopeRampRatioTurretPost[0], (TVoid*)&gDb_ctSetNvCalibrationC1.au16Def_ArmTelescopeRampRatioTurretPost[0], (TVoid*)&gDb_ctSetNvCalibrationC1.aau16Rng_ArmTelescopeRampRatioTurretPost[0][0], 1096, 42},
    { &gDb_ctSetNvCalibrationC1.tInf_AngleCalibDeltaArmHyst, (TVoid*)&gDb_tNvCalibrationC1.i16AngleCalibDeltaArmHyst, (TVoid*)&gDb_ctSetNvCalibrationC1.i16Def_AngleCalibDeltaArmHyst, (TVoid*)&gDb_ctSetNvCalibrationC1.ai16Rng_AngleCalibDeltaArmHyst[0], 1104, 46},
    { &gDb_ctSetNvCalibrationC1.tInf_AngleCalibArrowArmHyst, (TVoid*)&gDb_tNvCalibrationC1.i16AngleCalibArrowArmHyst, (TVoid*)&gDb_ctSetNvCalibrationC1.i16Def_AngleCalibArrowArmHyst, (TVoid*)&gDb_ctSetNvCalibrationC1.ai16Rng_AngleCalibArrowArmHyst[0], 1106, 47},
    { &gDb_ctSetNvCalibrationC1.tInf_AngleCalibEndStopHighDeltaArmSla, (TVoid*)&gDb_tNvCalibrationC1.i16AngleCalibEndStopHighDeltaArmSla, (TVoid*)&gDb_ctSetNvCalibrationC1.i16Def_AngleCalibEndStopHighDeltaArmSla, (TVoid*)&gDb_ctSetNvCalibrationC1.ai16Rng_AngleCalibEndStopHighDeltaArmSla[0], 1108, 48},
    { &gDb_ctSetNvCalibrationC1.tInf_AngleCalibEndStopLowDeltaArmSla, (TVoid*)&gDb_tNvCalibrationC1.i16AngleCalibEndStopLowDeltaArmSla, (TVoid*)&gDb_ctSetNvCalibrationC1.i16Def_AngleCalibEndStopLowDeltaArmSla, (TVoid*)&gDb_ctSetNvCalibrationC1.ai16Rng_AngleCalibEndStopLowDeltaArmSla[0], 1110, 49},
    { &gDb_ctSetNvCalibrationC1.tInf_AngleCalibEndStopHighArrowArmSla, (TVoid*)&gDb_tNvCalibrationC1.i16AngleCalibEndStopHighArrowArmSla, (TVoid*)&gDb_ctSetNvCalibrationC1.i16Def_AngleCalibEndStopHighArrowArmSla, (TVoid*)&gDb_ctSetNvCalibrationC1.ai16Rng_AngleCalibEndStopHighArrowArmSla[0], 1112, 50},
    { &gDb_ctSetNvCalibrationC1.tInf_AngleCalibEndStopLowArrowArmSla, (TVoid*)&gDb_tNvCalibrationC1.i16AngleCalibEndStopLowArrowArmSla, (TVoid*)&gDb_ctSetNvCalibrationC1.i16Def_AngleCalibEndStopLowArrowArmSla, (TVoid*)&gDb_ctSetNvCalibrationC1.ai16Rng_AngleCalibEndStopLowArrowArmSla[0], 1114, 51}
};

const TDbVarTabRam gDb_catVarTabRam48XsInputsC1[56] =
{    //!< *cptInf *vpVal *cvpDataDef 
    { &gDb_ctSetRam48XsInputsC1.tInf_UpInclinaisonBasketButton, (TVoid*)&gDb_tRam48XsInputsC1.boUpInclinaisonBasketButton, (TVoid*)&gDb_ctSetRam48XsInputsC1.boDef_UpInclinaisonBasketButton, (TVoid*)&gDb_ctSetRam48XsInputsC1.aboRng_UpInclinaisonBasketButton[0]},
    { &gDb_ctSetRam48XsInputsC1.tInf_UpInclinaisonBasketButtonValue, (TVoid*)&gDb_tRam48XsInputsC1.u16UpInclinaisonBasketButtonValue, (TVoid*)&gDb_ctSetRam48XsInputsC1.u16Def_UpInclinaisonBasketButtonValue, (TVoid*)&gDb_ctSetRam48XsInputsC1.au16Rng_UpInclinaisonBasketButtonValue[0]},
    { &gDb_ctSetRam48XsInputsC1.tInf_DownInclinaisonBasketButton, (TVoid*)&gDb_tRam48XsInputsC1.boDownInclinaisonBasketButton, (TVoid*)&gDb_ctSetRam48XsInputsC1.boDef_DownInclinaisonBasketButton, (TVoid*)&gDb_ctSetRam48XsInputsC1.aboRng_DownInclinaisonBasketButton[0]},
    { &gDb_ctSetRam48XsInputsC1.tInf_DownInclinaisonBasketButtonValue, (TVoid*)&gDb_tRam48XsInputsC1.u16DownInclinaisonBasketButtonValue, (TVoid*)&gDb_ctSetRam48XsInputsC1.u16Def_DownInclinaisonBasketButtonValue, (TVoid*)&gDb_ctSetRam48XsInputsC1.au16Rng_DownInclinaisonBasketButtonValue[0]},
    { &gDb_ctSetRam48XsInputsC1.tInf_UpPendularButton, (TVoid*)&gDb_tRam48XsInputsC1.boUpPendularButton, (TVoid*)&gDb_ctSetRam48XsInputsC1.boDef_UpPendularButton, (TVoid*)&gDb_ctSetRam48XsInputsC1.aboRng_UpPendularButton[0]},
    { &gDb_ctSetRam48XsInputsC1.tInf_UpPendularButtonValue, (TVoid*)&gDb_tRam48XsInputsC1.u16UpPendularButtonValue, (TVoid*)&gDb_ctSetRam48XsInputsC1.u16Def_UpPendularButtonValue, (TVoid*)&gDb_ctSetRam48XsInputsC1.au16Rng_UpPendularButtonValue[0]},
    { &gDb_ctSetRam48XsInputsC1.tInf_DownPendularButton, (TVoid*)&gDb_tRam48XsInputsC1.boDownPendularButton, (TVoid*)&gDb_ctSetRam48XsInputsC1.boDef_DownPendularButton, (TVoid*)&gDb_ctSetRam48XsInputsC1.aboRng_DownPendularButton[0]},
    { &gDb_ctSetRam48XsInputsC1.tInf_DownPendularButtonValue, (TVoid*)&gDb_tRam48XsInputsC1.u16DownPendularButtonValue, (TVoid*)&gDb_ctSetRam48XsInputsC1.u16Def_DownPendularButtonValue, (TVoid*)&gDb_ctSetRam48XsInputsC1.au16Rng_DownPendularButtonValue[0]},
    { &gDb_ctSetRam48XsInputsC1.tInf_RotationCtClockwiseBasketButton, (TVoid*)&gDb_tRam48XsInputsC1.boRotationCtClockwiseBasketButton, (TVoid*)&gDb_ctSetRam48XsInputsC1.boDef_RotationCtClockwiseBasketButton, (TVoid*)&gDb_ctSetRam48XsInputsC1.aboRng_RotationCtClockwiseBasketButton[0]},
    { &gDb_ctSetRam48XsInputsC1.tInf_RotCtClockwiseBasketButtonVal, (TVoid*)&gDb_tRam48XsInputsC1.u16RotCtClockwiseBasketButtonVal, (TVoid*)&gDb_ctSetRam48XsInputsC1.u16Def_RotCtClockwiseBasketButtonVal, (TVoid*)&gDb_ctSetRam48XsInputsC1.au16Rng_RotCtClockwiseBasketButtonVal[0]},
    { &gDb_ctSetRam48XsInputsC1.tInf_RotationClockwiseBasketButton, (TVoid*)&gDb_tRam48XsInputsC1.boRotationClockwiseBasketButton, (TVoid*)&gDb_ctSetRam48XsInputsC1.boDef_RotationClockwiseBasketButton, (TVoid*)&gDb_ctSetRam48XsInputsC1.aboRng_RotationClockwiseBasketButton[0]},
    { &gDb_ctSetRam48XsInputsC1.tInf_RotationClockwiseBasketButtonVal, (TVoid*)&gDb_tRam48XsInputsC1.u16RotationClockwiseBasketButtonVal, (TVoid*)&gDb_ctSetRam48XsInputsC1.u16Def_RotationClockwiseBasketButtonVal, (TVoid*)&gDb_ctSetRam48XsInputsC1.au16Rng_RotationClockwiseBasketButtonVal[0]},
    { &gDb_ctSetRam48XsInputsC1.tInf_Overload1, (TVoid*)&gDb_tRam48XsInputsC1.boOverload1, (TVoid*)&gDb_ctSetRam48XsInputsC1.boDef_Overload1, (TVoid*)&gDb_ctSetRam48XsInputsC1.aboRng_Overload1[0]},
    { &gDb_ctSetRam48XsInputsC1.tInf_Overload1Value, (TVoid*)&gDb_tRam48XsInputsC1.u16Overload1Value, (TVoid*)&gDb_ctSetRam48XsInputsC1.u16Def_Overload1Value, (TVoid*)&gDb_ctSetRam48XsInputsC1.au16Rng_Overload1Value[0]},
    { &gDb_ctSetRam48XsInputsC1.tInf_Overload2, (TVoid*)&gDb_tRam48XsInputsC1.boOverload2, (TVoid*)&gDb_ctSetRam48XsInputsC1.boDef_Overload2, (TVoid*)&gDb_ctSetRam48XsInputsC1.aboRng_Overload2[0]},
    { &gDb_ctSetRam48XsInputsC1.tInf_Overload2Value, (TVoid*)&gDb_tRam48XsInputsC1.u16Overload2Value, (TVoid*)&gDb_ctSetRam48XsInputsC1.u16Def_Overload2Value, (TVoid*)&gDb_ctSetRam48XsInputsC1.au16Rng_Overload2Value[0]},
    { &gDb_ctSetRam48XsInputsC1.tInf_NacelleBasketRightSideSensor1, (TVoid*)&gDb_tRam48XsInputsC1.boNacelleBasketRightSideSensor1, (TVoid*)&gDb_ctSetRam48XsInputsC1.boDef_NacelleBasketRightSideSensor1, (TVoid*)&gDb_ctSetRam48XsInputsC1.aboRng_NacelleBasketRightSideSensor1[0]},
    { &gDb_ctSetRam48XsInputsC1.tInf_NacelleBasketRightSideSensor1Val, (TVoid*)&gDb_tRam48XsInputsC1.u16NacelleBasketRightSideSensor1Val, (TVoid*)&gDb_ctSetRam48XsInputsC1.u16Def_NacelleBasketRightSideSensor1Val, (TVoid*)&gDb_ctSetRam48XsInputsC1.au16Rng_NacelleBasketRightSideSensor1Val[0]},
    { &gDb_ctSetRam48XsInputsC1.tInf_NacelleBasketRightSideSensor2, (TVoid*)&gDb_tRam48XsInputsC1.boNacelleBasketRightSideSensor2, (TVoid*)&gDb_ctSetRam48XsInputsC1.boDef_NacelleBasketRightSideSensor2, (TVoid*)&gDb_ctSetRam48XsInputsC1.aboRng_NacelleBasketRightSideSensor2[0]},
    { &gDb_ctSetRam48XsInputsC1.tInf_NacelleBasketRightSideSensor2Val, (TVoid*)&gDb_tRam48XsInputsC1.u16NacelleBasketRightSideSensor2Val, (TVoid*)&gDb_ctSetRam48XsInputsC1.u16Def_NacelleBasketRightSideSensor2Val, (TVoid*)&gDb_ctSetRam48XsInputsC1.au16Rng_NacelleBasketRightSideSensor2Val[0]},
    { &gDb_ctSetRam48XsInputsC1.tInf_NacelleBasketLeftSideSensor1, (TVoid*)&gDb_tRam48XsInputsC1.boNacelleBasketLeftSideSensor1, (TVoid*)&gDb_ctSetRam48XsInputsC1.boDef_NacelleBasketLeftSideSensor1, (TVoid*)&gDb_ctSetRam48XsInputsC1.aboRng_NacelleBasketLeftSideSensor1[0]},
    { &gDb_ctSetRam48XsInputsC1.tInf_NacelleBasketLeftSideSensor1Val, (TVoid*)&gDb_tRam48XsInputsC1.u16NacelleBasketLeftSideSensor1Val, (TVoid*)&gDb_ctSetRam48XsInputsC1.u16Def_NacelleBasketLeftSideSensor1Val, (TVoid*)&gDb_ctSetRam48XsInputsC1.au16Rng_NacelleBasketLeftSideSensor1Val[0]},
    { &gDb_ctSetRam48XsInputsC1.tInf_NacelleBasketLeftSideSensor2, (TVoid*)&gDb_tRam48XsInputsC1.boNacelleBasketLeftSideSensor2, (TVoid*)&gDb_ctSetRam48XsInputsC1.boDef_NacelleBasketLeftSideSensor2, (TVoid*)&gDb_ctSetRam48XsInputsC1.aboRng_NacelleBasketLeftSideSensor2[0]},
    { &gDb_ctSetRam48XsInputsC1.tInf_NacelleBasketLeftSideSensor2Val, (TVoid*)&gDb_tRam48XsInputsC1.u16NacelleBasketLeftSideSensor2Val, (TVoid*)&gDb_ctSetRam48XsInputsC1.u16Def_NacelleBasketLeftSideSensor2Val, (TVoid*)&gDb_ctSetRam48XsInputsC1.au16Rng_NacelleBasketLeftSideSensor2Val[0]},
    { &gDb_ctSetRam48XsInputsC1.tInf_LowSectorPendularSensor, (TVoid*)&gDb_tRam48XsInputsC1.boLowSectorPendularSensor, (TVoid*)&gDb_ctSetRam48XsInputsC1.boDef_LowSectorPendularSensor, (TVoid*)&gDb_ctSetRam48XsInputsC1.aboRng_LowSectorPendularSensor[0]},
    { &gDb_ctSetRam48XsInputsC1.tInf_LowSectorPendularSensorVal, (TVoid*)&gDb_tRam48XsInputsC1.u16LowSectorPendularSensorVal, (TVoid*)&gDb_ctSetRam48XsInputsC1.u16Def_LowSectorPendularSensorVal, (TVoid*)&gDb_ctSetRam48XsInputsC1.au16Rng_LowSectorPendularSensorVal[0]},
    { &gDb_ctSetRam48XsInputsC1.tInf_HighSectorPlateSensor, (TVoid*)&gDb_tRam48XsInputsC1.boHighSectorPlateSensor, (TVoid*)&gDb_ctSetRam48XsInputsC1.boDef_HighSectorPlateSensor, (TVoid*)&gDb_ctSetRam48XsInputsC1.aboRng_HighSectorPlateSensor[0]},
    { &gDb_ctSetRam48XsInputsC1.tInf_HighSectorPlateSensorVal, (TVoid*)&gDb_tRam48XsInputsC1.u16HighSectorPlateSensorVal, (TVoid*)&gDb_ctSetRam48XsInputsC1.u16Def_HighSectorPlateSensorVal, (TVoid*)&gDb_ctSetRam48XsInputsC1.au16Rng_HighSectorPlateSensorVal[0]},
    { &gDb_ctSetRam48XsInputsC1.tInf_FoldedLadderSensor, (TVoid*)&gDb_tRam48XsInputsC1.boFoldedLadderSensor, (TVoid*)&gDb_ctSetRam48XsInputsC1.boDef_FoldedLadderSensor, (TVoid*)&gDb_ctSetRam48XsInputsC1.aboRng_FoldedLadderSensor[0]},
    { &gDb_ctSetRam48XsInputsC1.tInf_FoldedLadderSensorVal, (TVoid*)&gDb_tRam48XsInputsC1.u16FoldedLadderSensorVal, (TVoid*)&gDb_ctSetRam48XsInputsC1.u16Def_FoldedLadderSensorVal, (TVoid*)&gDb_ctSetRam48XsInputsC1.au16Rng_FoldedLadderSensorVal[0]},
    { &gDb_ctSetRam48XsInputsC1.tInf_SafetyManSystem, (TVoid*)&gDb_tRam48XsInputsC1.u16SafetyManSystem, (TVoid*)&gDb_ctSetRam48XsInputsC1.u16Def_SafetyManSystem, (TVoid*)&gDb_ctSetRam48XsInputsC1.au16Rng_SafetyManSystem[0]},
    { &gDb_ctSetRam48XsInputsC1.tInf_DeltaArmAxisJoystick, (TVoid*)&gDb_tRam48XsInputsC1.u16DeltaArmAxisJoystick, (TVoid*)&gDb_ctSetRam48XsInputsC1.u16Def_DeltaArmAxisJoystick, (TVoid*)&gDb_ctSetRam48XsInputsC1.au16Rng_DeltaArmAxisJoystick[0]},
    { &gDb_ctSetRam48XsInputsC1.tInf_ArrowArmAxisJoystick, (TVoid*)&gDb_tRam48XsInputsC1.u16ArrowArmAxisJoystick, (TVoid*)&gDb_ctSetRam48XsInputsC1.u16Def_ArrowArmAxisJoystick, (TVoid*)&gDb_ctSetRam48XsInputsC1.au16Rng_ArrowArmAxisJoystick[0]},
    { &gDb_ctSetRam48XsInputsC1.tInf_TelescopeArmAxisJoysitck, (TVoid*)&gDb_tRam48XsInputsC1.u16TelescopeArmAxisJoysitck, (TVoid*)&gDb_ctSetRam48XsInputsC1.u16Def_TelescopeArmAxisJoysitck, (TVoid*)&gDb_ctSetRam48XsInputsC1.au16Rng_TelescopeArmAxisJoysitck[0]},
    { &gDb_ctSetRam48XsInputsC1.tInf_RotationTurretAxisJoystick, (TVoid*)&gDb_tRam48XsInputsC1.u16RotationTurretAxisJoystick, (TVoid*)&gDb_ctSetRam48XsInputsC1.u16Def_RotationTurretAxisJoystick, (TVoid*)&gDb_ctSetRam48XsInputsC1.au16Rng_RotationTurretAxisJoystick[0]},
    { &gDb_ctSetRam48XsInputsC1.tInf_AdvanceAxisJoystick, (TVoid*)&gDb_tRam48XsInputsC1.u16AdvanceAxisJoystick, (TVoid*)&gDb_ctSetRam48XsInputsC1.u16Def_AdvanceAxisJoystick, (TVoid*)&gDb_ctSetRam48XsInputsC1.au16Rng_AdvanceAxisJoystick[0]},
    { &gDb_ctSetRam48XsInputsC1.tInf_RearmementSafetyManSystem, (TVoid*)&gDb_tRam48XsInputsC1.boRearmementSafetyManSystem, (TVoid*)&gDb_ctSetRam48XsInputsC1.boDef_RearmementSafetyManSystem, (TVoid*)&gDb_ctSetRam48XsInputsC1.aboRng_RearmementSafetyManSystem[0]},
    { &gDb_ctSetRam48XsInputsC1.tInf_RearmementSafetyManSystemVal, (TVoid*)&gDb_tRam48XsInputsC1.u16RearmementSafetyManSystemVal, (TVoid*)&gDb_ctSetRam48XsInputsC1.u16Def_RearmementSafetyManSystemVal, (TVoid*)&gDb_ctSetRam48XsInputsC1.au16Rng_RearmementSafetyManSystemVal[0]},
    { &gDb_ctSetRam48XsInputsC1.tInf_AbutementNacelleTrackSide, (TVoid*)&gDb_tRam48XsInputsC1.boAbutementNacelleTrackSide, (TVoid*)&gDb_ctSetRam48XsInputsC1.boDef_AbutementNacelleTrackSide, (TVoid*)&gDb_ctSetRam48XsInputsC1.aboRng_AbutementNacelleTrackSide[0]},
    { &gDb_ctSetRam48XsInputsC1.tInf_AbutementNacelleTrackSideVal, (TVoid*)&gDb_tRam48XsInputsC1.u16AbutementNacelleTrackSideVal, (TVoid*)&gDb_ctSetRam48XsInputsC1.u16Def_AbutementNacelleTrackSideVal, (TVoid*)&gDb_ctSetRam48XsInputsC1.au16Rng_AbutementNacelleTrackSideVal[0]},
    { &gDb_ctSetRam48XsInputsC1.tInf_AbutementNacelleCenteredSide, (TVoid*)&gDb_tRam48XsInputsC1.boAbutementNacelleCenteredSide, (TVoid*)&gDb_ctSetRam48XsInputsC1.boDef_AbutementNacelleCenteredSide, (TVoid*)&gDb_ctSetRam48XsInputsC1.aboRng_AbutementNacelleCenteredSide[0]},
    { &gDb_ctSetRam48XsInputsC1.tInf_AbutementNacelleCenteredSideVal, (TVoid*)&gDb_tRam48XsInputsC1.u16AbutementNacelleCenteredSideVal, (TVoid*)&gDb_ctSetRam48XsInputsC1.u16Def_AbutementNacelleCenteredSideVal, (TVoid*)&gDb_ctSetRam48XsInputsC1.au16Rng_AbutementNacelleCenteredSideVal[0]},
    { &gDb_ctSetRam48XsInputsC1.tInf_DeltaArmJystckCenteredTelescope, (TVoid*)&gDb_tRam48XsInputsC1.boDeltaArmJystckCenteredTelescope, (TVoid*)&gDb_ctSetRam48XsInputsC1.boDef_DeltaArmJystckCenteredTelescope, (TVoid*)&gDb_ctSetRam48XsInputsC1.aboRng_DeltaArmJystckCenteredTelescope[0]},
    { &gDb_ctSetRam48XsInputsC1.tInf_ArrowJoystickCenteredTurret, (TVoid*)&gDb_tRam48XsInputsC1.boArrowJoystickCenteredTurret, (TVoid*)&gDb_ctSetRam48XsInputsC1.boDef_ArrowJoystickCenteredTurret, (TVoid*)&gDb_ctSetRam48XsInputsC1.aboRng_ArrowJoystickCenteredTurret[0]},
    { &gDb_ctSetRam48XsInputsC1.tInf_CenteredAdvanceJoystick, (TVoid*)&gDb_tRam48XsInputsC1.boCenteredAdvanceJoystick, (TVoid*)&gDb_ctSetRam48XsInputsC1.boDef_CenteredAdvanceJoystick, (TVoid*)&gDb_ctSetRam48XsInputsC1.aboRng_CenteredAdvanceJoystick[0]},
    { &gDb_ctSetRam48XsInputsC1.tInf_DeadManPedal, (TVoid*)&gDb_tRam48XsInputsC1.boDeadManPedal, (TVoid*)&gDb_ctSetRam48XsInputsC1.boDef_DeadManPedal, (TVoid*)&gDb_ctSetRam48XsInputsC1.aboRng_DeadManPedal[0]},
    { &gDb_ctSetRam48XsInputsC1.tInf_PressenceInNacelleSensor1, (TVoid*)&gDb_tRam48XsInputsC1.boPressenceInNacelleSensor1, (TVoid*)&gDb_ctSetRam48XsInputsC1.boDef_PressenceInNacelleSensor1, (TVoid*)&gDb_ctSetRam48XsInputsC1.aboRng_PressenceInNacelleSensor1[0]},
    { &gDb_ctSetRam48XsInputsC1.tInf_PressenceInNacelleSensor2, (TVoid*)&gDb_tRam48XsInputsC1.boPressenceInNacelleSensor2, (TVoid*)&gDb_ctSetRam48XsInputsC1.boDef_PressenceInNacelleSensor2, (TVoid*)&gDb_ctSetRam48XsInputsC1.aboRng_PressenceInNacelleSensor2[0]},
    { &gDb_ctSetRam48XsInputsC1.tInf_Gachette, (TVoid*)&gDb_tRam48XsInputsC1.boGachette, (TVoid*)&gDb_ctSetRam48XsInputsC1.boDef_Gachette, (TVoid*)&gDb_ctSetRam48XsInputsC1.aboRng_Gachette[0]},
    { &gDb_ctSetRam48XsInputsC1.tInf_Klaxon, (TVoid*)&gDb_tRam48XsInputsC1.boKlaxon, (TVoid*)&gDb_ctSetRam48XsInputsC1.boDef_Klaxon, (TVoid*)&gDb_ctSetRam48XsInputsC1.aboRng_Klaxon[0]},
    { &gDb_ctSetRam48XsInputsC1.tInf_StopMotorButton, (TVoid*)&gDb_tRam48XsInputsC1.boStopMotorButton, (TVoid*)&gDb_ctSetRam48XsInputsC1.boDef_StopMotorButton, (TVoid*)&gDb_ctSetRam48XsInputsC1.aboRng_StopMotorButton[0]},
    { &gDb_ctSetRam48XsInputsC1.tInf_AuthorizationWorkKey, (TVoid*)&gDb_tRam48XsInputsC1.boAuthorizationWorkKey, (TVoid*)&gDb_ctSetRam48XsInputsC1.boDef_AuthorizationWorkKey, (TVoid*)&gDb_ctSetRam48XsInputsC1.aboRng_AuthorizationWorkKey[0]},
    { &gDb_ctSetRam48XsInputsC1.tInf_EtallonnageJoystickButton, (TVoid*)&gDb_tRam48XsInputsC1.boEtallonnageJoystickButton, (TVoid*)&gDb_ctSetRam48XsInputsC1.boDef_EtallonnageJoystickButton, (TVoid*)&gDb_ctSetRam48XsInputsC1.aboRng_EtallonnageJoystickButton[0]},
    { &gDb_ctSetRam48XsInputsC1.tInf_ClosePortillonSensor, (TVoid*)&gDb_tRam48XsInputsC1.boClosePortillonSensor, (TVoid*)&gDb_ctSetRam48XsInputsC1.boDef_ClosePortillonSensor, (TVoid*)&gDb_ctSetRam48XsInputsC1.aboRng_ClosePortillonSensor[0]},
    { &gDb_ctSetRam48XsInputsC1.tInf_Hearbeat48Xs, (TVoid*)&gDb_tRam48XsInputsC1.u8Hearbeat48Xs, (TVoid*)&gDb_ctSetRam48XsInputsC1.u8Def_Hearbeat48Xs, (TVoid*)&gDb_ctSetRam48XsInputsC1.au8Rng_Hearbeat48Xs[0]},
    { &gDb_ctSetRam48XsInputsC1.tInf_BatterieVoltage48Xs, (TVoid*)&gDb_tRam48XsInputsC1.u16BatterieVoltage48Xs, (TVoid*)&gDb_ctSetRam48XsInputsC1.u16Def_BatterieVoltage48Xs, (TVoid*)&gDb_ctSetRam48XsInputsC1.au16Rng_BatterieVoltage48Xs[0]}
};

const TDbVarTabRam gDb_catVarTabRamRcvRadioCmdC1[11] =
{    //!< *cptInf *vpVal *cvpDataDef 
    { &gDb_ctSetRamRcvRadioCmdC1.tInf_RotFrameClkwiseButton, (TVoid*)&gDb_tRamRcvRadioCmdC1.boRotFrameClkwiseButton, (TVoid*)&gDb_ctSetRamRcvRadioCmdC1.boDef_RotFrameClkwiseButton, (TVoid*)&gDb_ctSetRamRcvRadioCmdC1.aboRng_RotFrameClkwiseButton[0]},
    { &gDb_ctSetRamRcvRadioCmdC1.tInf_RotFrameCtClkwiseButton, (TVoid*)&gDb_tRamRcvRadioCmdC1.boRotFrameCtClkwiseButton, (TVoid*)&gDb_ctSetRamRcvRadioCmdC1.boDef_RotFrameCtClkwiseButton, (TVoid*)&gDb_ctSetRamRcvRadioCmdC1.aboRng_RotFrameCtClkwiseButton[0]},
    { &gDb_ctSetRamRcvRadioCmdC1.tInf_UpPendularOrRotTurretCtClock, (TVoid*)&gDb_tRamRcvRadioCmdC1.boUpPendularOrRotTurretCtClock, (TVoid*)&gDb_ctSetRamRcvRadioCmdC1.boDef_UpPendularOrRotTurretCtClock, (TVoid*)&gDb_ctSetRamRcvRadioCmdC1.aboRng_UpPendularOrRotTurretCtClock[0]},
    { &gDb_ctSetRamRcvRadioCmdC1.tInf_DownPendularOrRotTurretClock, (TVoid*)&gDb_tRamRcvRadioCmdC1.boDownPendularOrRotTurretClock, (TVoid*)&gDb_ctSetRamRcvRadioCmdC1.boDef_DownPendularOrRotTurretClock, (TVoid*)&gDb_ctSetRamRcvRadioCmdC1.aboRng_DownPendularOrRotTurretClock[0]},
    { &gDb_ctSetRamRcvRadioCmdC1.tInf_SelectorPendular, (TVoid*)&gDb_tRamRcvRadioCmdC1.boSelectorPendular, (TVoid*)&gDb_ctSetRamRcvRadioCmdC1.boDef_SelectorPendular, (TVoid*)&gDb_ctSetRamRcvRadioCmdC1.aboRng_SelectorPendular[0]},
    { &gDb_ctSetRamRcvRadioCmdC1.tInf_SelectorRotTurret, (TVoid*)&gDb_tRamRcvRadioCmdC1.boSelectorRotTurret, (TVoid*)&gDb_ctSetRamRcvRadioCmdC1.boDef_SelectorRotTurret, (TVoid*)&gDb_ctSetRamRcvRadioCmdC1.aboRng_SelectorRotTurret[0]},
    { &gDb_ctSetRamRcvRadioCmdC1.tInf_UpAxleOscillant, (TVoid*)&gDb_tRamRcvRadioCmdC1.boUpAxleOscillant, (TVoid*)&gDb_ctSetRamRcvRadioCmdC1.boDef_UpAxleOscillant, (TVoid*)&gDb_ctSetRamRcvRadioCmdC1.aboRng_UpAxleOscillant[0]},
    { &gDb_ctSetRamRcvRadioCmdC1.tInf_DownAxleOscillant, (TVoid*)&gDb_tRamRcvRadioCmdC1.boDownAxleOscillant, (TVoid*)&gDb_ctSetRamRcvRadioCmdC1.boDef_DownAxleOscillant, (TVoid*)&gDb_ctSetRamRcvRadioCmdC1.aboRng_DownAxleOscillant[0]},
    { &gDb_ctSetRamRcvRadioCmdC1.tInf_UpAxleFixe, (TVoid*)&gDb_tRamRcvRadioCmdC1.boUpAxleFixe, (TVoid*)&gDb_ctSetRamRcvRadioCmdC1.boDef_UpAxleFixe, (TVoid*)&gDb_ctSetRamRcvRadioCmdC1.aboRng_UpAxleFixe[0]},
    { &gDb_ctSetRamRcvRadioCmdC1.tInf_DownAxleFixe, (TVoid*)&gDb_tRamRcvRadioCmdC1.boDownAxleFixe, (TVoid*)&gDb_ctSetRamRcvRadioCmdC1.boDef_DownAxleFixe, (TVoid*)&gDb_ctSetRamRcvRadioCmdC1.aboRng_DownAxleFixe[0]},
    { &gDb_ctSetRamRcvRadioCmdC1.tInf_ForcingAdvanceTrack, (TVoid*)&gDb_tRamRcvRadioCmdC1.boForcingAdvanceTrack, (TVoid*)&gDb_ctSetRamRcvRadioCmdC1.boDef_ForcingAdvanceTrack, (TVoid*)&gDb_ctSetRamRcvRadioCmdC1.aboRng_ForcingAdvanceTrack[0]}
};

const TDbVarTabRam gDb_catVarTabRamLimitMoveC1[14] =
{    //!< *cptInf *vpVal *cvpDataDef 
    { &gDb_ctSetRamLimitMoveC1.tInf_AutorizeUpDeltaArm, (TVoid*)&gDb_tRamLimitMoveC1.boAutorizeUpDeltaArm, (TVoid*)&gDb_ctSetRamLimitMoveC1.boDef_AutorizeUpDeltaArm, (TVoid*)&gDb_ctSetRamLimitMoveC1.aboRng_AutorizeUpDeltaArm[0]},
    { &gDb_ctSetRamLimitMoveC1.tInf_AutorizeDownDeltaArm, (TVoid*)&gDb_tRamLimitMoveC1.boAutorizeDownDeltaArm, (TVoid*)&gDb_ctSetRamLimitMoveC1.boDef_AutorizeDownDeltaArm, (TVoid*)&gDb_ctSetRamLimitMoveC1.aboRng_AutorizeDownDeltaArm[0]},
    { &gDb_ctSetRamLimitMoveC1.tInf_AutorizeUpArrowArm, (TVoid*)&gDb_tRamLimitMoveC1.boAutorizeUpArrowArm, (TVoid*)&gDb_ctSetRamLimitMoveC1.boDef_AutorizeUpArrowArm, (TVoid*)&gDb_ctSetRamLimitMoveC1.aboRng_AutorizeUpArrowArm[0]},
    { &gDb_ctSetRamLimitMoveC1.tInf_AutorizeDownArrowArm, (TVoid*)&gDb_tRamLimitMoveC1.boAutorizeDownArrowArm, (TVoid*)&gDb_ctSetRamLimitMoveC1.boDef_AutorizeDownArrowArm, (TVoid*)&gDb_ctSetRamLimitMoveC1.aboRng_AutorizeDownArrowArm[0]},
    { &gDb_ctSetRamLimitMoveC1.tInf_AutorizeOutTelescopeArm, (TVoid*)&gDb_tRamLimitMoveC1.boAutorizeOutTelescopeArm, (TVoid*)&gDb_ctSetRamLimitMoveC1.boDef_AutorizeOutTelescopeArm, (TVoid*)&gDb_ctSetRamLimitMoveC1.aboRng_AutorizeOutTelescopeArm[0]},
    { &gDb_ctSetRamLimitMoveC1.tInf_AutorizeInTelescopeArm, (TVoid*)&gDb_tRamLimitMoveC1.boAutorizeInTelescopeArm, (TVoid*)&gDb_ctSetRamLimitMoveC1.boDef_AutorizeInTelescopeArm, (TVoid*)&gDb_ctSetRamLimitMoveC1.aboRng_AutorizeInTelescopeArm[0]},
    { &gDb_ctSetRamLimitMoveC1.tInf_AutorizeRotBasketClkwise, (TVoid*)&gDb_tRamLimitMoveC1.boAutorizeRotBasketClkwise, (TVoid*)&gDb_ctSetRamLimitMoveC1.boDef_AutorizeRotBasketClkwise, (TVoid*)&gDb_ctSetRamLimitMoveC1.aboRng_AutorizeRotBasketClkwise[0]},
    { &gDb_ctSetRamLimitMoveC1.tInf_AutorizeRotBasketCtClkwise, (TVoid*)&gDb_tRamLimitMoveC1.boAutorizeRotBasketCtClkwise, (TVoid*)&gDb_ctSetRamLimitMoveC1.boDef_AutorizeRotBasketCtClkwise, (TVoid*)&gDb_ctSetRamLimitMoveC1.aboRng_AutorizeRotBasketCtClkwise[0]},
    { &gDb_ctSetRamLimitMoveC1.tInf_AutorizeUpInclinaisonBasket, (TVoid*)&gDb_tRamLimitMoveC1.boAutorizeUpInclinaisonBasket, (TVoid*)&gDb_ctSetRamLimitMoveC1.boDef_AutorizeUpInclinaisonBasket, (TVoid*)&gDb_ctSetRamLimitMoveC1.aboRng_AutorizeUpInclinaisonBasket[0]},
    { &gDb_ctSetRamLimitMoveC1.tInf_AutorizeDownInclinaisonBasket, (TVoid*)&gDb_tRamLimitMoveC1.boAutorizeDownInclinaisonBasket, (TVoid*)&gDb_ctSetRamLimitMoveC1.boDef_AutorizeDownInclinaisonBasket, (TVoid*)&gDb_ctSetRamLimitMoveC1.aboRng_AutorizeDownInclinaisonBasket[0]},
    { &gDb_ctSetRamLimitMoveC1.tInf_AutorizeUpPendular, (TVoid*)&gDb_tRamLimitMoveC1.boAutorizeUpPendular, (TVoid*)&gDb_ctSetRamLimitMoveC1.boDef_AutorizeUpPendular, (TVoid*)&gDb_ctSetRamLimitMoveC1.aboRng_AutorizeUpPendular[0]},
    { &gDb_ctSetRamLimitMoveC1.tInf_AutorizeDownPendular, (TVoid*)&gDb_tRamLimitMoveC1.boAutorizeDownPendular, (TVoid*)&gDb_ctSetRamLimitMoveC1.boDef_AutorizeDownPendular, (TVoid*)&gDb_ctSetRamLimitMoveC1.aboRng_AutorizeDownPendular[0]},
    { &gDb_ctSetRamLimitMoveC1.tInf_AutorizeRotTurretClkwise, (TVoid*)&gDb_tRamLimitMoveC1.boAutorizeRotTurretClkwise, (TVoid*)&gDb_ctSetRamLimitMoveC1.boDef_AutorizeRotTurretClkwise, (TVoid*)&gDb_ctSetRamLimitMoveC1.aboRng_AutorizeRotTurretClkwise[0]},
    { &gDb_ctSetRamLimitMoveC1.tInf_AutorizeRotTurretCtClkwise, (TVoid*)&gDb_tRamLimitMoveC1.boAutorizeRotTurretCtClkwise, (TVoid*)&gDb_ctSetRamLimitMoveC1.boDef_AutorizeRotTurretCtClkwise, (TVoid*)&gDb_ctSetRamLimitMoveC1.aboRng_AutorizeRotTurretCtClkwise[0]}
};

const TDbVarTabNvm gDb_catVarTabNvParamMotorC1[13] =
{    //!< *cptInf *vpVal *cvpDataRang *cvpDataDef cu16Adr cu16ValuePos
    { &gDb_ctSetNvParamMotorC1.tInf_StartUpCurrentMotor, (TVoid*)&gDb_tNvParamMotorC1.u16StartUpCurrentMotor, (TVoid*)&gDb_ctSetNvParamMotorC1.u16Def_StartUpCurrentMotor, (TVoid*)&gDb_ctSetNvParamMotorC1.au16Rng_StartUpCurrentMotor[0], 1212, 0},
    { &gDb_ctSetNvParamMotorC1.tInf_HighForcingCurrentMotor, (TVoid*)&gDb_tNvParamMotorC1.u16HighForcingCurrentMotor, (TVoid*)&gDb_ctSetNvParamMotorC1.u16Def_HighForcingCurrentMotor, (TVoid*)&gDb_ctSetNvParamMotorC1.au16Rng_HighForcingCurrentMotor[0], 1214, 1},
    { &gDb_ctSetNvParamMotorC1.tInf_LowForcingCurrentMotor, (TVoid*)&gDb_tNvParamMotorC1.u16LowForcingCurrentMotor, (TVoid*)&gDb_ctSetNvParamMotorC1.u16Def_LowForcingCurrentMotor, (TVoid*)&gDb_ctSetNvParamMotorC1.au16Rng_LowForcingCurrentMotor[0], 1216, 2},
    { &gDb_ctSetNvParamMotorC1.tInf_Threshold3, (TVoid*)&gDb_tNvParamMotorC1.u16Threshold3, (TVoid*)&gDb_ctSetNvParamMotorC1.u16Def_Threshold3, (TVoid*)&gDb_ctSetNvParamMotorC1.au16Rng_Threshold3[0], 1218, 3},
    { &gDb_ctSetNvParamMotorC1.tInf_Threshold2, (TVoid*)&gDb_tNvParamMotorC1.u16Threshold2, (TVoid*)&gDb_ctSetNvParamMotorC1.u16Def_Threshold2, (TVoid*)&gDb_ctSetNvParamMotorC1.au16Rng_Threshold2[0], 1220, 4},
    { &gDb_ctSetNvParamMotorC1.tInf_Threshold1, (TVoid*)&gDb_tNvParamMotorC1.u16Threshold1, (TVoid*)&gDb_ctSetNvParamMotorC1.u16Def_Threshold1, (TVoid*)&gDb_ctSetNvParamMotorC1.au16Rng_Threshold1[0], 1222, 5},
    { &gDb_ctSetNvParamMotorC1.tInf_StartUpTime, (TVoid*)&gDb_tNvParamMotorC1.u32StartUpTime, (TVoid*)&gDb_ctSetNvParamMotorC1.u32Def_StartUpTime, (TVoid*)&gDb_ctSetNvParamMotorC1.au32Rng_StartUpTime[0], 1224, 6},
    { &gDb_ctSetNvParamMotorC1.tInf_HighForcingTime, (TVoid*)&gDb_tNvParamMotorC1.u32HighForcingTime, (TVoid*)&gDb_ctSetNvParamMotorC1.u32Def_HighForcingTime, (TVoid*)&gDb_ctSetNvParamMotorC1.au32Rng_HighForcingTime[0], 1228, 7},
    { &gDb_ctSetNvParamMotorC1.tInf_TranslationCurrentMotor, (TVoid*)&gDb_tNvParamMotorC1.u16TranslationCurrentMotor, (TVoid*)&gDb_ctSetNvParamMotorC1.u16Def_TranslationCurrentMotor, (TVoid*)&gDb_ctSetNvParamMotorC1.au16Rng_TranslationCurrentMotor[0], 1232, 8},
    { &gDb_ctSetNvParamMotorC1.tInf_NoMovementCurrentMotor, (TVoid*)&gDb_tNvParamMotorC1.u16NoMovementCurrentMotor, (TVoid*)&gDb_ctSetNvParamMotorC1.u16Def_NoMovementCurrentMotor, (TVoid*)&gDb_ctSetNvParamMotorC1.au16Rng_NoMovementCurrentMotor[0], 1234, 9},
    { &gDb_ctSetNvParamMotorC1.tInf_TresholdRegimeForGenerator, (TVoid*)&gDb_tNvParamMotorC1.u16TresholdRegimeForGenerator, (TVoid*)&gDb_ctSetNvParamMotorC1.u16Def_TresholdRegimeForGenerator, (TVoid*)&gDb_ctSetNvParamMotorC1.au16Rng_TresholdRegimeForGenerator[0], 1236, 10},
    { &gDb_ctSetNvParamMotorC1.tInf_EngineIdleSpeedMotor, (TVoid*)&gDb_tNvParamMotorC1.u16EngineIdleSpeedMotor, (TVoid*)&gDb_ctSetNvParamMotorC1.u16Def_EngineIdleSpeedMotor, (TVoid*)&gDb_ctSetNvParamMotorC1.au16Rng_EngineIdleSpeedMotor[0], 1238, 11},
    { &gDb_ctSetNvParamMotorC1.tInf_CptmaxNoMovement, (TVoid*)&gDb_tNvParamMotorC1.u8CptmaxNoMovement, (TVoid*)&gDb_ctSetNvParamMotorC1.u8Def_CptmaxNoMovement, (TVoid*)&gDb_ctSetNvParamMotorC1.au8Rng_CptmaxNoMovement[0], 1240, 12}
};

const TDbVarTabRam gDb_catVarTabRam48XsOutputsC1[23] =
{    //!< *cptInf *vpVal *cvpDataDef 
    { &gDb_ctSetRam48XsOutputsC1.tInf_MotorDefaultLightErrSta, (TVoid*)&gDb_tRam48XsOutputsC1.eMotorDefaultLightErrSta, (TVoid*)&gDb_ctSetRam48XsOutputsC1.eDef_MotorDefaultLightErrSta, (TVoid*)&gDb_ctSetRam48XsOutputsC1.aeRng_MotorDefaultLightErrSta[0]},
    { &gDb_ctSetRam48XsOutputsC1.tInf_MotorDefaultLight, (TVoid*)&gDb_tRam48XsOutputsC1.boMotorDefaultLight, (TVoid*)&gDb_ctSetRam48XsOutputsC1.boDef_MotorDefaultLight, (TVoid*)&gDb_ctSetRam48XsOutputsC1.aboRng_MotorDefaultLight[0]},
    { &gDb_ctSetRam48XsOutputsC1.tInf_OverloadLightErrSta, (TVoid*)&gDb_tRam48XsOutputsC1.eOverloadLightErrSta, (TVoid*)&gDb_ctSetRam48XsOutputsC1.eDef_OverloadLightErrSta, (TVoid*)&gDb_ctSetRam48XsOutputsC1.aeRng_OverloadLightErrSta[0]},
    { &gDb_ctSetRam48XsOutputsC1.tInf_OverloadLight, (TVoid*)&gDb_tRam48XsOutputsC1.boOverloadLight, (TVoid*)&gDb_ctSetRam48XsOutputsC1.boDef_OverloadLight, (TVoid*)&gDb_ctSetRam48XsOutputsC1.aboRng_OverloadLight[0]},
    { &gDb_ctSetRam48XsOutputsC1.tInf_BuzzerErrSta, (TVoid*)&gDb_tRam48XsOutputsC1.eBuzzerErrSta, (TVoid*)&gDb_ctSetRam48XsOutputsC1.eDef_BuzzerErrSta, (TVoid*)&gDb_ctSetRam48XsOutputsC1.aeRng_BuzzerErrSta[0]},
    { &gDb_ctSetRam48XsOutputsC1.tInf_Buzzer, (TVoid*)&gDb_tRam48XsOutputsC1.boBuzzer, (TVoid*)&gDb_ctSetRam48XsOutputsC1.boDef_Buzzer, (TVoid*)&gDb_ctSetRam48XsOutputsC1.aboRng_Buzzer[0]},
    { &gDb_ctSetRam48XsOutputsC1.tInf_SupplyDeadManPedalAndJoysticks, (TVoid*)&gDb_tRam48XsOutputsC1.boSupplyDeadManPedalAndJoysticks, (TVoid*)&gDb_ctSetRam48XsOutputsC1.boDef_SupplyDeadManPedalAndJoysticks, (TVoid*)&gDb_ctSetRam48XsOutputsC1.aboRng_SupplyDeadManPedalAndJoysticks[0]},
    { &gDb_ctSetRam48XsOutputsC1.tInf_WarmingLightErrSta, (TVoid*)&gDb_tRam48XsOutputsC1.eWarmingLightErrSta, (TVoid*)&gDb_ctSetRam48XsOutputsC1.eDef_WarmingLightErrSta, (TVoid*)&gDb_ctSetRam48XsOutputsC1.aeRng_WarmingLightErrSta[0]},
    { &gDb_ctSetRam48XsOutputsC1.tInf_WarmingLight, (TVoid*)&gDb_tRam48XsOutputsC1.boWarmingLight, (TVoid*)&gDb_ctSetRam48XsOutputsC1.boDef_WarmingLight, (TVoid*)&gDb_ctSetRam48XsOutputsC1.aboRng_WarmingLight[0]},
    { &gDb_ctSetRam48XsOutputsC1.tInf_DeversDefaultLightErrSta, (TVoid*)&gDb_tRam48XsOutputsC1.eDeversDefaultLightErrSta, (TVoid*)&gDb_ctSetRam48XsOutputsC1.eDef_DeversDefaultLightErrSta, (TVoid*)&gDb_ctSetRam48XsOutputsC1.aeRng_DeversDefaultLightErrSta[0]},
    { &gDb_ctSetRam48XsOutputsC1.tInf_DeversDefaultLight, (TVoid*)&gDb_tRam48XsOutputsC1.boDeversDefaultLight, (TVoid*)&gDb_ctSetRam48XsOutputsC1.boDef_DeversDefaultLight, (TVoid*)&gDb_ctSetRam48XsOutputsC1.aboRng_DeversDefaultLight[0]},
    { &gDb_ctSetRam48XsOutputsC1.tInf_GasOilLightErrSta, (TVoid*)&gDb_tRam48XsOutputsC1.eGasOilLightErrSta, (TVoid*)&gDb_ctSetRam48XsOutputsC1.eDef_GasOilLightErrSta, (TVoid*)&gDb_ctSetRam48XsOutputsC1.aeRng_GasOilLightErrSta[0]},
    { &gDb_ctSetRam48XsOutputsC1.tInf_GasOilLight, (TVoid*)&gDb_tRam48XsOutputsC1.boGasOilLight, (TVoid*)&gDb_ctSetRam48XsOutputsC1.boDef_GasOilLight, (TVoid*)&gDb_ctSetRam48XsOutputsC1.aboRng_GasOilLight[0]},
    { &gDb_ctSetRam48XsOutputsC1.tInf_WhiteLightARGBasketErrSta, (TVoid*)&gDb_tRam48XsOutputsC1.eWhiteLightARGBasketErrSta, (TVoid*)&gDb_ctSetRam48XsOutputsC1.eDef_WhiteLightARGBasketErrSta, (TVoid*)&gDb_ctSetRam48XsOutputsC1.aeRng_WhiteLightARGBasketErrSta[0]},
    { &gDb_ctSetRam48XsOutputsC1.tInf_WhiteLightARGBasket, (TVoid*)&gDb_tRam48XsOutputsC1.boWhiteLightARGBasket, (TVoid*)&gDb_ctSetRam48XsOutputsC1.boDef_WhiteLightARGBasket, (TVoid*)&gDb_ctSetRam48XsOutputsC1.aboRng_WhiteLightARGBasket[0]},
    { &gDb_ctSetRam48XsOutputsC1.tInf_RedLightARGBasketErrSta, (TVoid*)&gDb_tRam48XsOutputsC1.eRedLightARGBasketErrSta, (TVoid*)&gDb_ctSetRam48XsOutputsC1.eDef_RedLightARGBasketErrSta, (TVoid*)&gDb_ctSetRam48XsOutputsC1.aeRng_RedLightARGBasketErrSta[0]},
    { &gDb_ctSetRam48XsOutputsC1.tInf_RedLightARGBasket, (TVoid*)&gDb_tRam48XsOutputsC1.boRedLightARGBasket, (TVoid*)&gDb_ctSetRam48XsOutputsC1.boDef_RedLightARGBasket, (TVoid*)&gDb_ctSetRam48XsOutputsC1.aboRng_RedLightARGBasket[0]},
    { &gDb_ctSetRam48XsOutputsC1.tInf_RedLightARDBasketErrSta, (TVoid*)&gDb_tRam48XsOutputsC1.eRedLightARDBasketErrSta, (TVoid*)&gDb_ctSetRam48XsOutputsC1.eDef_RedLightARDBasketErrSta, (TVoid*)&gDb_ctSetRam48XsOutputsC1.aeRng_RedLightARDBasketErrSta[0]},
    { &gDb_ctSetRam48XsOutputsC1.tInf_RedLightARDBasket, (TVoid*)&gDb_tRam48XsOutputsC1.boRedLightARDBasket, (TVoid*)&gDb_ctSetRam48XsOutputsC1.boDef_RedLightARDBasket, (TVoid*)&gDb_ctSetRam48XsOutputsC1.aboRng_RedLightARDBasket[0]},
    { &gDb_ctSetRam48XsOutputsC1.tInf_WhiteLightARDBasketErrSta, (TVoid*)&gDb_tRam48XsOutputsC1.eWhiteLightARDBasketErrSta, (TVoid*)&gDb_ctSetRam48XsOutputsC1.eDef_WhiteLightARDBasketErrSta, (TVoid*)&gDb_ctSetRam48XsOutputsC1.aeRng_WhiteLightARDBasketErrSta[0]},
    { &gDb_ctSetRam48XsOutputsC1.tInf_WhiteLightARDBasket, (TVoid*)&gDb_tRam48XsOutputsC1.boWhiteLightARDBasket, (TVoid*)&gDb_ctSetRam48XsOutputsC1.boDef_WhiteLightARDBasket, (TVoid*)&gDb_ctSetRam48XsOutputsC1.aboRng_WhiteLightARDBasket[0]},
    { &gDb_ctSetRam48XsOutputsC1.tInf_WhiteLightAr15746ErrSta, (TVoid*)&gDb_tRam48XsOutputsC1.eWhiteLightAr15746ErrSta, (TVoid*)&gDb_ctSetRam48XsOutputsC1.eDef_WhiteLightAr15746ErrSta, (TVoid*)&gDb_ctSetRam48XsOutputsC1.aeRng_WhiteLightAr15746ErrSta[0]},
    { &gDb_ctSetRam48XsOutputsC1.tInf_WhiteLightAr15746Command, (TVoid*)&gDb_tRam48XsOutputsC1.boWhiteLightAr15746Command, (TVoid*)&gDb_ctSetRam48XsOutputsC1.boDef_WhiteLightAr15746Command, (TVoid*)&gDb_ctSetRam48XsOutputsC1.aboRng_WhiteLightAr15746Command[0]}
};

const TDbVarTabRam gDb_catVarTabRamEcuC1RcvFromC0[41] =
{    //!< *cptInf *vpVal *cvpDataDef 
    { &gDb_ctSetRamEcuC1RcvFromC0.tInf_RestrictedModeAruActive, (TVoid*)&gDb_tRamEcuC1RcvFromC0.boRestrictedModeAruActive, (TVoid*)&gDb_ctSetRamEcuC1RcvFromC0.boDef_RestrictedModeAruActive, (TVoid*)&gDb_ctSetRamEcuC1RcvFromC0.aboRng_RestrictedModeAruActive[0]},
    { &gDb_ctSetRamEcuC1RcvFromC0.tInf_TranslationMovementIsSolicited, (TVoid*)&gDb_tRamEcuC1RcvFromC0.boTranslationMovementIsSolicited, (TVoid*)&gDb_ctSetRamEcuC1RcvFromC0.boDef_TranslationMovementIsSolicited, (TVoid*)&gDb_ctSetRamEcuC1RcvFromC0.aboRng_TranslationMovementIsSolicited[0]},
    { &gDb_ctSetRamEcuC1RcvFromC0.tInf_AxleMovementIsSolicited, (TVoid*)&gDb_tRamEcuC1RcvFromC0.boAxleMovementIsSolicited, (TVoid*)&gDb_ctSetRamEcuC1RcvFromC0.boDef_AxleMovementIsSolicited, (TVoid*)&gDb_ctSetRamEcuC1RcvFromC0.aboRng_AxleMovementIsSolicited[0]},
    { &gDb_ctSetRamEcuC1RcvFromC0.tInf_DownAxleFixeSensor, (TVoid*)&gDb_tRamEcuC1RcvFromC0.boDownAxleFixeSensor, (TVoid*)&gDb_ctSetRamEcuC1RcvFromC0.boDef_DownAxleFixeSensor, (TVoid*)&gDb_ctSetRamEcuC1RcvFromC0.aboRng_DownAxleFixeSensor[0]},
    { &gDb_ctSetRamEcuC1RcvFromC0.tInf_DownAxleOscillantSensor, (TVoid*)&gDb_tRamEcuC1RcvFromC0.boDownAxleOscillantSensor, (TVoid*)&gDb_ctSetRamEcuC1RcvFromC0.boDef_DownAxleOscillantSensor, (TVoid*)&gDb_ctSetRamEcuC1RcvFromC0.aboRng_DownAxleOscillantSensor[0]},
    { &gDb_ctSetRamEcuC1RcvFromC0.tInf_SlopeAngle, (TVoid*)&gDb_tRamEcuC1RcvFromC0.u16SlopeAngle, (TVoid*)&gDb_ctSetRamEcuC1RcvFromC0.u16Def_SlopeAngle, (TVoid*)&gDb_ctSetRamEcuC1RcvFromC0.au16Rng_SlopeAngle[0]},
    { &gDb_ctSetRamEcuC1RcvFromC0.tInf_ReduceSpeedRotTurretClockwise, (TVoid*)&gDb_tRamEcuC1RcvFromC0.boReduceSpeedRotTurretClockwise, (TVoid*)&gDb_ctSetRamEcuC1RcvFromC0.boDef_ReduceSpeedRotTurretClockwise, (TVoid*)&gDb_ctSetRamEcuC1RcvFromC0.aboRng_ReduceSpeedRotTurretClockwise[0]},
    { &gDb_ctSetRamEcuC1RcvFromC0.tInf_ReduceSpeedRotTurretCounterClock, (TVoid*)&gDb_tRamEcuC1RcvFromC0.boReduceSpeedRotTurretCounterClock, (TVoid*)&gDb_ctSetRamEcuC1RcvFromC0.boDef_ReduceSpeedRotTurretCounterClock, (TVoid*)&gDb_ctSetRamEcuC1RcvFromC0.aboRng_ReduceSpeedRotTurretCounterClock[0]},
    { &gDb_ctSetRamEcuC1RcvFromC0.tInf_ReduceSpeedArrowArmDown, (TVoid*)&gDb_tRamEcuC1RcvFromC0.boReduceSpeedArrowArmDown, (TVoid*)&gDb_ctSetRamEcuC1RcvFromC0.boDef_ReduceSpeedArrowArmDown, (TVoid*)&gDb_ctSetRamEcuC1RcvFromC0.aboRng_ReduceSpeedArrowArmDown[0]},
    { &gDb_ctSetRamEcuC1RcvFromC0.tInf_StopRotTurretClockwise, (TVoid*)&gDb_tRamEcuC1RcvFromC0.boStopRotTurretClockwise, (TVoid*)&gDb_ctSetRamEcuC1RcvFromC0.boDef_StopRotTurretClockwise, (TVoid*)&gDb_ctSetRamEcuC1RcvFromC0.aboRng_StopRotTurretClockwise[0]},
    { &gDb_ctSetRamEcuC1RcvFromC0.tInf_StopRotTurretCounterClockwise, (TVoid*)&gDb_tRamEcuC1RcvFromC0.boStopRotTurretCounterClockwise, (TVoid*)&gDb_ctSetRamEcuC1RcvFromC0.boDef_StopRotTurretCounterClockwise, (TVoid*)&gDb_ctSetRamEcuC1RcvFromC0.aboRng_StopRotTurretCounterClockwise[0]},
    { &gDb_ctSetRamEcuC1RcvFromC0.tInf_StopRotBasketClockwise, (TVoid*)&gDb_tRamEcuC1RcvFromC0.boStopRotBasketClockwise, (TVoid*)&gDb_ctSetRamEcuC1RcvFromC0.boDef_StopRotBasketClockwise, (TVoid*)&gDb_ctSetRamEcuC1RcvFromC0.aboRng_StopRotBasketClockwise[0]},
    { &gDb_ctSetRamEcuC1RcvFromC0.tInf_StopRotBasketCounterClockwise, (TVoid*)&gDb_tRamEcuC1RcvFromC0.boStopRotBasketCounterClockwise, (TVoid*)&gDb_ctSetRamEcuC1RcvFromC0.boDef_StopRotBasketCounterClockwise, (TVoid*)&gDb_ctSetRamEcuC1RcvFromC0.aboRng_StopRotBasketCounterClockwise[0]},
    { &gDb_ctSetRamEcuC1RcvFromC0.tInf_StopArrowArmDown, (TVoid*)&gDb_tRamEcuC1RcvFromC0.boStopArrowArmDown, (TVoid*)&gDb_ctSetRamEcuC1RcvFromC0.boDef_StopArrowArmDown, (TVoid*)&gDb_ctSetRamEcuC1RcvFromC0.aboRng_StopArrowArmDown[0]},
    { &gDb_ctSetRamEcuC1RcvFromC0.tInf_StopTelescopeOut, (TVoid*)&gDb_tRamEcuC1RcvFromC0.boStopTelescopeOut, (TVoid*)&gDb_ctSetRamEcuC1RcvFromC0.boDef_StopTelescopeOut, (TVoid*)&gDb_ctSetRamEcuC1RcvFromC0.aboRng_StopTelescopeOut[0]},
    { &gDb_ctSetRamEcuC1RcvFromC0.tInf_EncodeurTurret1Angle, (TVoid*)&gDb_tRamEcuC1RcvFromC0.i16EncodeurTurret1Angle, (TVoid*)&gDb_ctSetRamEcuC1RcvFromC0.i16Def_EncodeurTurret1Angle, (TVoid*)&gDb_ctSetRamEcuC1RcvFromC0.ai16Rng_EncodeurTurret1Angle[0]},
    { &gDb_ctSetRamEcuC1RcvFromC0.tInf_RedLightARGBasketCmd, (TVoid*)&gDb_tRamEcuC1RcvFromC0.boRedLightARGBasketCmd, (TVoid*)&gDb_ctSetRamEcuC1RcvFromC0.boDef_RedLightARGBasketCmd, (TVoid*)&gDb_ctSetRamEcuC1RcvFromC0.aboRng_RedLightARGBasketCmd[0]},
    { &gDb_ctSetRamEcuC1RcvFromC0.tInf_WhiteLightARGBasketCmd, (TVoid*)&gDb_tRamEcuC1RcvFromC0.boWhiteLightARGBasketCmd, (TVoid*)&gDb_ctSetRamEcuC1RcvFromC0.boDef_WhiteLightARGBasketCmd, (TVoid*)&gDb_ctSetRamEcuC1RcvFromC0.aboRng_WhiteLightARGBasketCmd[0]},
    { &gDb_ctSetRamEcuC1RcvFromC0.tInf_EncodeurMastMeasureRaw, (TVoid*)&gDb_tRamEcuC1RcvFromC0.u32EncodeurMastMeasureRaw, (TVoid*)&gDb_ctSetRamEcuC1RcvFromC0.u32Def_EncodeurMastMeasureRaw, (TVoid*)&gDb_ctSetRamEcuC1RcvFromC0.au32Rng_EncodeurMastMeasureRaw[0]},
    { &gDb_ctSetRamEcuC1RcvFromC0.tInf_WrongAbutments, (TVoid*)&gDb_tRamEcuC1RcvFromC0.boWrongAbutments, (TVoid*)&gDb_ctSetRamEcuC1RcvFromC0.boDef_WrongAbutments, (TVoid*)&gDb_ctSetRamEcuC1RcvFromC0.aboRng_WrongAbutments[0]},
    { &gDb_ctSetRamEcuC1RcvFromC0.tInf_SpeedVehicleKmhx100, (TVoid*)&gDb_tRamEcuC1RcvFromC0.i32SpeedVehicleKmhx100, (TVoid*)&gDb_ctSetRamEcuC1RcvFromC0.i32Def_SpeedVehicleKmhx100, (TVoid*)&gDb_ctSetRamEcuC1RcvFromC0.ai32Rng_SpeedVehicleKmhx100[0]},
    { &gDb_ctSetRamEcuC1RcvFromC0.tInf_StopMovementByBrakeTest, (TVoid*)&gDb_tRamEcuC1RcvFromC0.boStopMovementByBrakeTest, (TVoid*)&gDb_ctSetRamEcuC1RcvFromC0.boDef_StopMovementByBrakeTest, (TVoid*)&gDb_ctSetRamEcuC1RcvFromC0.aboRng_StopMovementByBrakeTest[0]},
    { &gDb_ctSetRamEcuC1RcvFromC0.tInf_StopMovementByBreakInBrake, (TVoid*)&gDb_tRamEcuC1RcvFromC0.boStopMovementByBreakInBrake, (TVoid*)&gDb_ctSetRamEcuC1RcvFromC0.boDef_StopMovementByBreakInBrake, (TVoid*)&gDb_ctSetRamEcuC1RcvFromC0.aboRng_StopMovementByBreakInBrake[0]},
    { &gDb_ctSetRamEcuC1RcvFromC0.tInf_EnableBuzzerSelectPost, (TVoid*)&gDb_tRamEcuC1RcvFromC0.boEnableBuzzerSelectPost, (TVoid*)&gDb_ctSetRamEcuC1RcvFromC0.boDef_EnableBuzzerSelectPost, (TVoid*)&gDb_ctSetRamEcuC1RcvFromC0.aboRng_EnableBuzzerSelectPost[0]},
    { &gDb_ctSetRamEcuC1RcvFromC0.tInf_SelectedControlPost, (TVoid*)&gDb_tRamEcuC1RcvFromC0.eSelectedControlPost, (TVoid*)&gDb_ctSetRamEcuC1RcvFromC0.eDef_SelectedControlPost, (TVoid*)&gDb_ctSetRamEcuC1RcvFromC0.aeRng_SelectedControlPost[0]},
    { &gDb_ctSetRamEcuC1RcvFromC0.tInf_CenteredTurretState, (TVoid*)&gDb_tRamEcuC1RcvFromC0.boCenteredTurretState, (TVoid*)&gDb_ctSetRamEcuC1RcvFromC0.boDef_CenteredTurretState, (TVoid*)&gDb_ctSetRamEcuC1RcvFromC0.aboRng_CenteredTurretState[0]},
    { &gDb_ctSetRamEcuC1RcvFromC0.tInf_AuthorizeWork, (TVoid*)&gDb_tRamEcuC1RcvFromC0.boAuthorizeWork, (TVoid*)&gDb_ctSetRamEcuC1RcvFromC0.boDef_AuthorizeWork, (TVoid*)&gDb_ctSetRamEcuC1RcvFromC0.aboRng_AuthorizeWork[0]},
    { &gDb_ctSetRamEcuC1RcvFromC0.tInf_UpOsciAxlePos, (TVoid*)&gDb_tRamEcuC1RcvFromC0.boUpOsciAxlePos, (TVoid*)&gDb_ctSetRamEcuC1RcvFromC0.boDef_UpOsciAxlePos, (TVoid*)&gDb_ctSetRamEcuC1RcvFromC0.aboRng_UpOsciAxlePos[0]},
    { &gDb_ctSetRamEcuC1RcvFromC0.tInf_UpFixeAxlePos, (TVoid*)&gDb_tRamEcuC1RcvFromC0.boUpFixeAxlePos, (TVoid*)&gDb_ctSetRamEcuC1RcvFromC0.boDef_UpFixeAxlePos, (TVoid*)&gDb_ctSetRamEcuC1RcvFromC0.aboRng_UpFixeAxlePos[0]},
    { &gDb_ctSetRamEcuC1RcvFromC0.tInf_RailWorkMode, (TVoid*)&gDb_tRamEcuC1RcvFromC0.eRailWorkMode, (TVoid*)&gDb_ctSetRamEcuC1RcvFromC0.eDef_RailWorkMode, (TVoid*)&gDb_ctSetRamEcuC1RcvFromC0.aeRng_RailWorkMode[0]},
    { &gDb_ctSetRamEcuC1RcvFromC0.tInf_EvForwardCommand, (TVoid*)&gDb_tRamEcuC1RcvFromC0.u16EvForwardCommand, (TVoid*)&gDb_ctSetRamEcuC1RcvFromC0.u16Def_EvForwardCommand, (TVoid*)&gDb_ctSetRamEcuC1RcvFromC0.au16Rng_EvForwardCommand[0]},
    { &gDb_ctSetRamEcuC1RcvFromC0.tInf_EvBackwardCommand, (TVoid*)&gDb_tRamEcuC1RcvFromC0.u16EvBackwardCommand, (TVoid*)&gDb_ctSetRamEcuC1RcvFromC0.u16Def_EvBackwardCommand, (TVoid*)&gDb_ctSetRamEcuC1RcvFromC0.au16Rng_EvBackwardCommand[0]},
    { &gDb_ctSetRamEcuC1RcvFromC0.tInf_RedLightARDBasketCmd, (TVoid*)&gDb_tRamEcuC1RcvFromC0.boRedLightARDBasketCmd, (TVoid*)&gDb_ctSetRamEcuC1RcvFromC0.boDef_RedLightARDBasketCmd, (TVoid*)&gDb_ctSetRamEcuC1RcvFromC0.aboRng_RedLightARDBasketCmd[0]},
    { &gDb_ctSetRamEcuC1RcvFromC0.tInf_WhiteLightARDBasketCmd, (TVoid*)&gDb_tRamEcuC1RcvFromC0.boWhiteLightARDBasketCmd, (TVoid*)&gDb_ctSetRamEcuC1RcvFromC0.boDef_WhiteLightARDBasketCmd, (TVoid*)&gDb_ctSetRamEcuC1RcvFromC0.aboRng_WhiteLightARDBasketCmd[0]},
    { &gDb_ctSetRamEcuC1RcvFromC0.tInf_SecondParkBrakeActive, (TVoid*)&gDb_tRamEcuC1RcvFromC0.boSecondParkBrakeActive, (TVoid*)&gDb_ctSetRamEcuC1RcvFromC0.boDef_SecondParkBrakeActive, (TVoid*)&gDb_ctSetRamEcuC1RcvFromC0.aboRng_SecondParkBrakeActive[0]},
    { &gDb_ctSetRamEcuC1RcvFromC0.tInf_AutorisationHighSpeedKeyState, (TVoid*)&gDb_tRamEcuC1RcvFromC0.boAutorisationHighSpeedKeyState, (TVoid*)&gDb_ctSetRamEcuC1RcvFromC0.boDef_AutorisationHighSpeedKeyState, (TVoid*)&gDb_ctSetRamEcuC1RcvFromC0.aboRng_AutorisationHighSpeedKeyState[0]},
    { &gDb_ctSetRamEcuC1RcvFromC0.tInf_TransRailElectricRampOngoing, (TVoid*)&gDb_tRamEcuC1RcvFromC0.boTransRailElectricRampOngoing, (TVoid*)&gDb_ctSetRamEcuC1RcvFromC0.boDef_TransRailElectricRampOngoing, (TVoid*)&gDb_ctSetRamEcuC1RcvFromC0.aboRng_TransRailElectricRampOngoing[0]},
    { &gDb_ctSetRamEcuC1RcvFromC0.tInf_RpmPvgTransRail, (TVoid*)&gDb_tRamEcuC1RcvFromC0.i16RpmPvgTransRail, (TVoid*)&gDb_ctSetRamEcuC1RcvFromC0.i16Def_RpmPvgTransRail, (TVoid*)&gDb_ctSetRamEcuC1RcvFromC0.ai16Rng_RpmPvgTransRail[0]},
    { &gDb_ctSetRamEcuC1RcvFromC0.tInf_Batt_Soc, (TVoid*)&gDb_tRamEcuC1RcvFromC0.u8Batt_Soc, (TVoid*)&gDb_ctSetRamEcuC1RcvFromC0.u8Def_Batt_Soc, (TVoid*)&gDb_ctSetRamEcuC1RcvFromC0.au8Rng_Batt_Soc[0]},
    { &gDb_ctSetRamEcuC1RcvFromC0.tInf_Ibatt_ist, (TVoid*)&gDb_tRamEcuC1RcvFromC0.i16Ibatt_ist, (TVoid*)&gDb_ctSetRamEcuC1RcvFromC0.i16Def_Ibatt_ist, (TVoid*)&gDb_ctSetRamEcuC1RcvFromC0.ai16Rng_Ibatt_ist[0]},
    { &gDb_ctSetRamEcuC1RcvFromC0.tInf_SendAuthorizeReloadBattery, (TVoid*)&gDb_tRamEcuC1RcvFromC0.boSendAuthorizeReloadBattery, (TVoid*)&gDb_ctSetRamEcuC1RcvFromC0.boDef_SendAuthorizeReloadBattery, (TVoid*)&gDb_ctSetRamEcuC1RcvFromC0.aboRng_SendAuthorizeReloadBattery[0]}
};

const TDbVarTabRam gDb_catVarTabRamEcuEvision7C1[41] =
{    //!< *cptInf *vpVal *cvpDataDef 
    { &gDb_ctSetRamEcuEvision7C1.tInf_gBattery_On_Off, (TVoid*)&gDb_tRamEcuEvision7C1.bogBattery_On_Off, (TVoid*)&gDb_ctSetRamEcuEvision7C1.boDef_gBattery_On_Off, (TVoid*)&gDb_ctSetRamEcuEvision7C1.aboRng_gBattery_On_Off[0]},
    { &gDb_ctSetRamEcuEvision7C1.tInf_gPreheat_On_Off, (TVoid*)&gDb_tRamEcuEvision7C1.bogPreheat_On_Off, (TVoid*)&gDb_ctSetRamEcuEvision7C1.boDef_gPreheat_On_Off, (TVoid*)&gDb_ctSetRamEcuEvision7C1.aboRng_gPreheat_On_Off[0]},
    { &gDb_ctSetRamEcuEvision7C1.tInf_gEngine_Faillure_On_Off, (TVoid*)&gDb_tRamEcuEvision7C1.bogEngine_Faillure_On_Off, (TVoid*)&gDb_ctSetRamEcuEvision7C1.boDef_gEngine_Faillure_On_Off, (TVoid*)&gDb_ctSetRamEcuEvision7C1.aboRng_gEngine_Faillure_On_Off[0]},
    { &gDb_ctSetRamEcuEvision7C1.tInf_gMaintenance_On_Off, (TVoid*)&gDb_tRamEcuEvision7C1.bogMaintenance_On_Off, (TVoid*)&gDb_ctSetRamEcuEvision7C1.boDef_gMaintenance_On_Off, (TVoid*)&gDb_ctSetRamEcuEvision7C1.aboRng_gMaintenance_On_Off[0]},
    { &gDb_ctSetRamEcuEvision7C1.tInf_gOil_On_OFF, (TVoid*)&gDb_tRamEcuEvision7C1.bogOil_On_OFF, (TVoid*)&gDb_ctSetRamEcuEvision7C1.boDef_gOil_On_OFF, (TVoid*)&gDb_ctSetRamEcuEvision7C1.aboRng_gOil_On_OFF[0]},
    { &gDb_ctSetRamEcuEvision7C1.tInf_gDeltaArmSectorDown, (TVoid*)&gDb_tRamEcuEvision7C1.bogDeltaArmSectorDown, (TVoid*)&gDb_ctSetRamEcuEvision7C1.boDef_gDeltaArmSectorDown, (TVoid*)&gDb_ctSetRamEcuEvision7C1.aboRng_gDeltaArmSectorDown[0]},
    { &gDb_ctSetRamEcuEvision7C1.tInf_gArrowArmSectorDown, (TVoid*)&gDb_tRamEcuEvision7C1.bogArrowArmSectorDown, (TVoid*)&gDb_ctSetRamEcuEvision7C1.boDef_gArrowArmSectorDown, (TVoid*)&gDb_ctSetRamEcuEvision7C1.aboRng_gArrowArmSectorDown[0]},
    { &gDb_ctSetRamEcuEvision7C1.tInf_gPendularSectorDown, (TVoid*)&gDb_tRamEcuEvision7C1.bogPendularSectorDown, (TVoid*)&gDb_ctSetRamEcuEvision7C1.boDef_gPendularSectorDown, (TVoid*)&gDb_ctSetRamEcuEvision7C1.aboRng_gPendularSectorDown[0]},
    { &gDb_ctSetRamEcuEvision7C1.tInf_gDeltaArmInCenter, (TVoid*)&gDb_tRamEcuEvision7C1.bogDeltaArmInCenter, (TVoid*)&gDb_ctSetRamEcuEvision7C1.boDef_gDeltaArmInCenter, (TVoid*)&gDb_ctSetRamEcuEvision7C1.aboRng_gDeltaArmInCenter[0]},
    { &gDb_ctSetRamEcuEvision7C1.tInf_gArrowArmInCenter, (TVoid*)&gDb_tRamEcuEvision7C1.bogArrowArmInCenter, (TVoid*)&gDb_ctSetRamEcuEvision7C1.boDef_gArrowArmInCenter, (TVoid*)&gDb_ctSetRamEcuEvision7C1.aboRng_gArrowArmInCenter[0]},
    { &gDb_ctSetRamEcuEvision7C1.tInf_gPendularInCenter, (TVoid*)&gDb_tRamEcuEvision7C1.bogPendularInCenter, (TVoid*)&gDb_ctSetRamEcuEvision7C1.boDef_gPendularInCenter, (TVoid*)&gDb_ctSetRamEcuEvision7C1.aboRng_gPendularInCenter[0]},
    { &gDb_ctSetRamEcuEvision7C1.tInf_gBasketRotationInCenter, (TVoid*)&gDb_tRamEcuEvision7C1.bogBasketRotationInCenter, (TVoid*)&gDb_ctSetRamEcuEvision7C1.boDef_gBasketRotationInCenter, (TVoid*)&gDb_ctSetRamEcuEvision7C1.aboRng_gBasketRotationInCenter[0]},
    { &gDb_ctSetRamEcuEvision7C1.tInf_gTelescopeInCenter, (TVoid*)&gDb_tRamEcuEvision7C1.bogTelescopeInCenter, (TVoid*)&gDb_ctSetRamEcuEvision7C1.boDef_gTelescopeInCenter, (TVoid*)&gDb_ctSetRamEcuEvision7C1.aboRng_gTelescopeInCenter[0]},
    { &gDb_ctSetRamEcuEvision7C1.tInf_gBasketInclinaisonInCenter, (TVoid*)&gDb_tRamEcuEvision7C1.bogBasketInclinaisonInCenter, (TVoid*)&gDb_ctSetRamEcuEvision7C1.boDef_gBasketInclinaisonInCenter, (TVoid*)&gDb_ctSetRamEcuEvision7C1.aboRng_gBasketInclinaisonInCenter[0]},
    { &gDb_ctSetRamEcuEvision7C1.tInf_gDeltaArmMoveUpAllow, (TVoid*)&gDb_tRamEcuEvision7C1.bogDeltaArmMoveUpAllow, (TVoid*)&gDb_ctSetRamEcuEvision7C1.boDef_gDeltaArmMoveUpAllow, (TVoid*)&gDb_ctSetRamEcuEvision7C1.aboRng_gDeltaArmMoveUpAllow[0]},
    { &gDb_ctSetRamEcuEvision7C1.tInf_gDeltaArmMoveDownAllow, (TVoid*)&gDb_tRamEcuEvision7C1.bogDeltaArmMoveDownAllow, (TVoid*)&gDb_ctSetRamEcuEvision7C1.boDef_gDeltaArmMoveDownAllow, (TVoid*)&gDb_ctSetRamEcuEvision7C1.aboRng_gDeltaArmMoveDownAllow[0]},
    { &gDb_ctSetRamEcuEvision7C1.tInf_gArrowArmMoveUpAllow, (TVoid*)&gDb_tRamEcuEvision7C1.bogArrowArmMoveUpAllow, (TVoid*)&gDb_ctSetRamEcuEvision7C1.boDef_gArrowArmMoveUpAllow, (TVoid*)&gDb_ctSetRamEcuEvision7C1.aboRng_gArrowArmMoveUpAllow[0]},
    { &gDb_ctSetRamEcuEvision7C1.tInf_gArrowArmMoveDownAllow, (TVoid*)&gDb_tRamEcuEvision7C1.bogArrowArmMoveDownAllow, (TVoid*)&gDb_ctSetRamEcuEvision7C1.boDef_gArrowArmMoveDownAllow, (TVoid*)&gDb_ctSetRamEcuEvision7C1.aboRng_gArrowArmMoveDownAllow[0]},
    { &gDb_ctSetRamEcuEvision7C1.tInf_gPendularMoveUpAllow, (TVoid*)&gDb_tRamEcuEvision7C1.bogPendularMoveUpAllow, (TVoid*)&gDb_ctSetRamEcuEvision7C1.boDef_gPendularMoveUpAllow, (TVoid*)&gDb_ctSetRamEcuEvision7C1.aboRng_gPendularMoveUpAllow[0]},
    { &gDb_ctSetRamEcuEvision7C1.tInf_gPendularMoveDownAllow, (TVoid*)&gDb_tRamEcuEvision7C1.bogPendularMoveDownAllow, (TVoid*)&gDb_ctSetRamEcuEvision7C1.boDef_gPendularMoveDownAllow, (TVoid*)&gDb_ctSetRamEcuEvision7C1.aboRng_gPendularMoveDownAllow[0]},
    { &gDb_ctSetRamEcuEvision7C1.tInf_gTelescopeMoveOutAllow, (TVoid*)&gDb_tRamEcuEvision7C1.bogTelescopeMoveOutAllow, (TVoid*)&gDb_ctSetRamEcuEvision7C1.boDef_gTelescopeMoveOutAllow, (TVoid*)&gDb_ctSetRamEcuEvision7C1.aboRng_gTelescopeMoveOutAllow[0]},
    { &gDb_ctSetRamEcuEvision7C1.tInf_gTelescopeMoveInAllow, (TVoid*)&gDb_tRamEcuEvision7C1.bogTelescopeMoveInAllow, (TVoid*)&gDb_ctSetRamEcuEvision7C1.boDef_gTelescopeMoveInAllow, (TVoid*)&gDb_ctSetRamEcuEvision7C1.aboRng_gTelescopeMoveInAllow[0]},
    { &gDb_ctSetRamEcuEvision7C1.tInf_gTurretCtClockWiseMoveAllow, (TVoid*)&gDb_tRamEcuEvision7C1.bogTurretCtClockWiseMoveAllow, (TVoid*)&gDb_ctSetRamEcuEvision7C1.boDef_gTurretCtClockWiseMoveAllow, (TVoid*)&gDb_ctSetRamEcuEvision7C1.aboRng_gTurretCtClockWiseMoveAllow[0]},
    { &gDb_ctSetRamEcuEvision7C1.tInf_gTurretClockWiseMoveAllow, (TVoid*)&gDb_tRamEcuEvision7C1.bogTurretClockWiseMoveAllow, (TVoid*)&gDb_ctSetRamEcuEvision7C1.boDef_gTurretClockWiseMoveAllow, (TVoid*)&gDb_ctSetRamEcuEvision7C1.aboRng_gTurretClockWiseMoveAllow[0]},
    { &gDb_ctSetRamEcuEvision7C1.tInf_gBasketRotCtClockWiseMoveAllow, (TVoid*)&gDb_tRamEcuEvision7C1.bogBasketRotCtClockWiseMoveAllow, (TVoid*)&gDb_ctSetRamEcuEvision7C1.boDef_gBasketRotCtClockWiseMoveAllow, (TVoid*)&gDb_ctSetRamEcuEvision7C1.aboRng_gBasketRotCtClockWiseMoveAllow[0]},
    { &gDb_ctSetRamEcuEvision7C1.tInf_gBasketRotClockWiseMoveAllow, (TVoid*)&gDb_tRamEcuEvision7C1.bogBasketRotClockWiseMoveAllow, (TVoid*)&gDb_ctSetRamEcuEvision7C1.boDef_gBasketRotClockWiseMoveAllow, (TVoid*)&gDb_ctSetRamEcuEvision7C1.aboRng_gBasketRotClockWiseMoveAllow[0]},
    { &gDb_ctSetRamEcuEvision7C1.tInf_gBasketInclinaisonMoveUpAllow, (TVoid*)&gDb_tRamEcuEvision7C1.bogBasketInclinaisonMoveUpAllow, (TVoid*)&gDb_ctSetRamEcuEvision7C1.boDef_gBasketInclinaisonMoveUpAllow, (TVoid*)&gDb_ctSetRamEcuEvision7C1.aboRng_gBasketInclinaisonMoveUpAllow[0]},
    { &gDb_ctSetRamEcuEvision7C1.tInf_gBasketInclinaisonMoveDownAllow, (TVoid*)&gDb_tRamEcuEvision7C1.bogBasketInclinaisonMoveDownAllow, (TVoid*)&gDb_ctSetRamEcuEvision7C1.boDef_gBasketInclinaisonMoveDownAllow, (TVoid*)&gDb_ctSetRamEcuEvision7C1.aboRng_gBasketInclinaisonMoveDownAllow[0]},
    { &gDb_ctSetRamEcuEvision7C1.tInf_gVehiculeDefault, (TVoid*)&gDb_tRamEcuEvision7C1.bogVehiculeDefault, (TVoid*)&gDb_ctSetRamEcuEvision7C1.boDef_gVehiculeDefault, (TVoid*)&gDb_ctSetRamEcuEvision7C1.aboRng_gVehiculeDefault[0]},
    { &gDb_ctSetRamEcuEvision7C1.tInf_gTelescopeOutputPossible, (TVoid*)&gDb_tRamEcuEvision7C1.bogTelescopeOutputPossible, (TVoid*)&gDb_ctSetRamEcuEvision7C1.boDef_gTelescopeOutputPossible, (TVoid*)&gDb_ctSetRamEcuEvision7C1.aboRng_gTelescopeOutputPossible[0]},
    { &gDb_ctSetRamEcuEvision7C1.tInf_gTelescopeWinderFault, (TVoid*)&gDb_tRamEcuEvision7C1.bogTelescopeWinderFault, (TVoid*)&gDb_ctSetRamEcuEvision7C1.boDef_gTelescopeWinderFault, (TVoid*)&gDb_ctSetRamEcuEvision7C1.aboRng_gTelescopeWinderFault[0]},
    { &gDb_ctSetRamEcuEvision7C1.tInf_gNacellePostSelector, (TVoid*)&gDb_tRamEcuEvision7C1.bogNacellePostSelector, (TVoid*)&gDb_ctSetRamEcuEvision7C1.boDef_gNacellePostSelector, (TVoid*)&gDb_ctSetRamEcuEvision7C1.aboRng_gNacellePostSelector[0]},
    { &gDb_ctSetRamEcuEvision7C1.tInf_gSTOP_On_Off, (TVoid*)&gDb_tRamEcuEvision7C1.bogSTOP_On_Off, (TVoid*)&gDb_ctSetRamEcuEvision7C1.boDef_gSTOP_On_Off, (TVoid*)&gDb_ctSetRamEcuEvision7C1.aboRng_gSTOP_On_Off[0]},
    { &gDb_ctSetRamEcuEvision7C1.tInf_gSafeManSystem, (TVoid*)&gDb_tRamEcuEvision7C1.bogSafeManSystem, (TVoid*)&gDb_ctSetRamEcuEvision7C1.boDef_gSafeManSystem, (TVoid*)&gDb_ctSetRamEcuEvision7C1.aboRng_gSafeManSystem[0]},
    { &gDb_ctSetRamEcuEvision7C1.tInf_gHighSpeedAllow, (TVoid*)&gDb_tRamEcuEvision7C1.bogHighSpeedAllow, (TVoid*)&gDb_ctSetRamEcuEvision7C1.boDef_gHighSpeedAllow, (TVoid*)&gDb_ctSetRamEcuEvision7C1.aboRng_gHighSpeedAllow[0]},
    { &gDb_ctSetRamEcuEvision7C1.tInf_gAutomatiqueStop, (TVoid*)&gDb_tRamEcuEvision7C1.bogAutomatiqueStop, (TVoid*)&gDb_ctSetRamEcuEvision7C1.boDef_gAutomatiqueStop, (TVoid*)&gDb_ctSetRamEcuEvision7C1.aboRng_gAutomatiqueStop[0]},
    { &gDb_ctSetRamEcuEvision7C1.tInf_gLowSpeedByFault, (TVoid*)&gDb_tRamEcuEvision7C1.bogLowSpeedByFault, (TVoid*)&gDb_ctSetRamEcuEvision7C1.boDef_gLowSpeedByFault, (TVoid*)&gDb_ctSetRamEcuEvision7C1.aboRng_gLowSpeedByFault[0]},
    { &gDb_ctSetRamEcuEvision7C1.tInf_gMeasuringMastFault, (TVoid*)&gDb_tRamEcuEvision7C1.bogMeasuringMastFault, (TVoid*)&gDb_ctSetRamEcuEvision7C1.boDef_gMeasuringMastFault, (TVoid*)&gDb_ctSetRamEcuEvision7C1.aboRng_gMeasuringMastFault[0]},
    { &gDb_ctSetRamEcuEvision7C1.tInf_gFuel, (TVoid*)&gDb_tRamEcuEvision7C1.u8gFuel, (TVoid*)&gDb_ctSetRamEcuEvision7C1.u8Def_gFuel, (TVoid*)&gDb_ctSetRamEcuEvision7C1.au8Rng_gFuel[0]},
    { &gDb_ctSetRamEcuEvision7C1.tInf_gBattery_Voltage, (TVoid*)&gDb_tRamEcuEvision7C1.u16gBattery_Voltage, (TVoid*)&gDb_ctSetRamEcuEvision7C1.u16Def_gBattery_Voltage, (TVoid*)&gDb_ctSetRamEcuEvision7C1.au16Rng_gBattery_Voltage[0]},
    { &gDb_ctSetRamEcuEvision7C1.tInf_gTrainTransmissionPressure, (TVoid*)&gDb_tRamEcuEvision7C1.u8gTrainTransmissionPressure, (TVoid*)&gDb_ctSetRamEcuEvision7C1.u8Def_gTrainTransmissionPressure, (TVoid*)&gDb_ctSetRamEcuEvision7C1.au8Rng_gTrainTransmissionPressure[0]}
};

const TDbVarTabRam gDb_catVarTabRamEvision4C1[29] =
{    //!< *cptInf *vpVal *cvpDataDef 
    { &gDb_ctSetRamEvision4C1.tInf_LifeByte, (TVoid*)&gDb_tRamEvision4C1.u8LifeByte, (TVoid*)&gDb_ctSetRamEvision4C1.u8Def_LifeByte, (TVoid*)&gDb_ctSetRamEvision4C1.au8Rng_LifeByte[0]},
    { &gDb_ctSetRamEvision4C1.tInf_gDelta_Arm_Move_Up, (TVoid*)&gDb_tRamEvision4C1.bogDelta_Arm_Move_Up, (TVoid*)&gDb_ctSetRamEvision4C1.boDef_gDelta_Arm_Move_Up, (TVoid*)&gDb_ctSetRamEvision4C1.aboRng_gDelta_Arm_Move_Up[0]},
    { &gDb_ctSetRamEvision4C1.tInf_gDelta_Arm_Move_Down, (TVoid*)&gDb_tRamEvision4C1.bogDelta_Arm_Move_Down, (TVoid*)&gDb_ctSetRamEvision4C1.boDef_gDelta_Arm_Move_Down, (TVoid*)&gDb_ctSetRamEvision4C1.aboRng_gDelta_Arm_Move_Down[0]},
    { &gDb_ctSetRamEvision4C1.tInf_gArrow_Move_Up, (TVoid*)&gDb_tRamEvision4C1.bogArrow_Move_Up, (TVoid*)&gDb_ctSetRamEvision4C1.boDef_gArrow_Move_Up, (TVoid*)&gDb_ctSetRamEvision4C1.aboRng_gArrow_Move_Up[0]},
    { &gDb_ctSetRamEvision4C1.tInf_gArrow_Move_Down, (TVoid*)&gDb_tRamEvision4C1.bogArrow_Move_Down, (TVoid*)&gDb_ctSetRamEvision4C1.boDef_gArrow_Move_Down, (TVoid*)&gDb_ctSetRamEvision4C1.aboRng_gArrow_Move_Down[0]},
    { &gDb_ctSetRamEvision4C1.tInf_gPendular_Move_Up, (TVoid*)&gDb_tRamEvision4C1.bogPendular_Move_Up, (TVoid*)&gDb_ctSetRamEvision4C1.boDef_gPendular_Move_Up, (TVoid*)&gDb_ctSetRamEvision4C1.aboRng_gPendular_Move_Up[0]},
    { &gDb_ctSetRamEvision4C1.tInf_gPendular_Move_Down, (TVoid*)&gDb_tRamEvision4C1.bogPendular_Move_Down, (TVoid*)&gDb_ctSetRamEvision4C1.boDef_gPendular_Move_Down, (TVoid*)&gDb_ctSetRamEvision4C1.aboRng_gPendular_Move_Down[0]},
    { &gDb_ctSetRamEvision4C1.tInf_gTelescope_Move_Out, (TVoid*)&gDb_tRamEvision4C1.bogTelescope_Move_Out, (TVoid*)&gDb_ctSetRamEvision4C1.boDef_gTelescope_Move_Out, (TVoid*)&gDb_ctSetRamEvision4C1.aboRng_gTelescope_Move_Out[0]},
    { &gDb_ctSetRamEvision4C1.tInf_gTelescope_Move_In, (TVoid*)&gDb_tRamEvision4C1.bogTelescope_Move_In, (TVoid*)&gDb_ctSetRamEvision4C1.boDef_gTelescope_Move_In, (TVoid*)&gDb_ctSetRamEvision4C1.aboRng_gTelescope_Move_In[0]},
    { &gDb_ctSetRamEvision4C1.tInf_gBasket_Inclinaison_Move_Up, (TVoid*)&gDb_tRamEvision4C1.bogBasket_Inclinaison_Move_Up, (TVoid*)&gDb_ctSetRamEvision4C1.boDef_gBasket_Inclinaison_Move_Up, (TVoid*)&gDb_ctSetRamEvision4C1.aboRng_gBasket_Inclinaison_Move_Up[0]},
    { &gDb_ctSetRamEvision4C1.tInf_gBasket_Inclinaison_Move_Down, (TVoid*)&gDb_tRamEvision4C1.bogBasket_Inclinaison_Move_Down, (TVoid*)&gDb_ctSetRamEvision4C1.boDef_gBasket_Inclinaison_Move_Down, (TVoid*)&gDb_ctSetRamEvision4C1.aboRng_gBasket_Inclinaison_Move_Down[0]},
    { &gDb_ctSetRamEvision4C1.tInf_gTurret_Rotate_ClockWise, (TVoid*)&gDb_tRamEvision4C1.bogTurret_Rotate_ClockWise, (TVoid*)&gDb_ctSetRamEvision4C1.boDef_gTurret_Rotate_ClockWise, (TVoid*)&gDb_ctSetRamEvision4C1.aboRng_gTurret_Rotate_ClockWise[0]},
    { &gDb_ctSetRamEvision4C1.tInf_gTurret_Rotate_Counter_ClockWise, (TVoid*)&gDb_tRamEvision4C1.bogTurret_Rotate_Counter_ClockWise, (TVoid*)&gDb_ctSetRamEvision4C1.boDef_gTurret_Rotate_Counter_ClockWise, (TVoid*)&gDb_ctSetRamEvision4C1.aboRng_gTurret_Rotate_Counter_ClockWise[0]},
    { &gDb_ctSetRamEvision4C1.tInf_gBasket_Rotate_ClockWise, (TVoid*)&gDb_tRamEvision4C1.bogBasket_Rotate_ClockWise, (TVoid*)&gDb_ctSetRamEvision4C1.boDef_gBasket_Rotate_ClockWise, (TVoid*)&gDb_ctSetRamEvision4C1.aboRng_gBasket_Rotate_ClockWise[0]},
    { &gDb_ctSetRamEvision4C1.tInf_gBasket_Rotate_Counter_ClockWise, (TVoid*)&gDb_tRamEvision4C1.bogBasket_Rotate_Counter_ClockWise, (TVoid*)&gDb_ctSetRamEvision4C1.boDef_gBasket_Rotate_Counter_ClockWise, (TVoid*)&gDb_ctSetRamEvision4C1.aboRng_gBasket_Rotate_Counter_ClockWise[0]},
    { &gDb_ctSetRamEvision4C1.tInf_gKeyRpmSelect, (TVoid*)&gDb_tRamEvision4C1.bogKeyRpmSelect, (TVoid*)&gDb_ctSetRamEvision4C1.boDef_gKeyRpmSelect, (TVoid*)&gDb_ctSetRamEvision4C1.aboRng_gKeyRpmSelect[0]},
    { &gDb_ctSetRamEvision4C1.tInf_gKeyRpmOff, (TVoid*)&gDb_tRamEvision4C1.bogKeyRpmOff, (TVoid*)&gDb_ctSetRamEvision4C1.boDef_gKeyRpmOff, (TVoid*)&gDb_ctSetRamEvision4C1.aboRng_gKeyRpmOff[0]},
    { &gDb_ctSetRamEvision4C1.tInf_gForcingWhiteRaillight, (TVoid*)&gDb_tRamEvision4C1.bogForcingWhiteRaillight, (TVoid*)&gDb_ctSetRamEvision4C1.boDef_gForcingWhiteRaillight, (TVoid*)&gDb_ctSetRamEvision4C1.aboRng_gForcingWhiteRaillight[0]},
    { &gDb_ctSetRamEvision4C1.tInf_gForcingNeons, (TVoid*)&gDb_tRamEvision4C1.bogForcingNeons, (TVoid*)&gDb_ctSetRamEvision4C1.boDef_gForcingNeons, (TVoid*)&gDb_ctSetRamEvision4C1.aboRng_gForcingNeons[0]},
    { &gDb_ctSetRamEvision4C1.tInf_gKeyCalibMin, (TVoid*)&gDb_tRamEvision4C1.bogKeyCalibMin, (TVoid*)&gDb_ctSetRamEvision4C1.boDef_gKeyCalibMin, (TVoid*)&gDb_ctSetRamEvision4C1.aboRng_gKeyCalibMin[0]},
    { &gDb_ctSetRamEvision4C1.tInf_gKeyCalibMax, (TVoid*)&gDb_tRamEvision4C1.bogKeyCalibMax, (TVoid*)&gDb_ctSetRamEvision4C1.boDef_gKeyCalibMax, (TVoid*)&gDb_ctSetRamEvision4C1.aboRng_gKeyCalibMax[0]},
    { &gDb_ctSetRamEvision4C1.tInf_gKeyCalibValid, (TVoid*)&gDb_tRamEvision4C1.bogKeyCalibValid, (TVoid*)&gDb_ctSetRamEvision4C1.boDef_gKeyCalibValid, (TVoid*)&gDb_ctSetRamEvision4C1.aboRng_gKeyCalibValid[0]},
    { &gDb_ctSetRamEvision4C1.tInf_gElementChoice, (TVoid*)&gDb_tRamEvision4C1.u8gElementChoice, (TVoid*)&gDb_ctSetRamEvision4C1.u8Def_gElementChoice, (TVoid*)&gDb_ctSetRamEvision4C1.au8Rng_gElementChoice[0]},
    { &gDb_ctSetRamEvision4C1.tInf_gKeyCalibMax2, (TVoid*)&gDb_tRamEvision4C1.bogKeyCalibMax2, (TVoid*)&gDb_ctSetRamEvision4C1.boDef_gKeyCalibMax2, (TVoid*)&gDb_ctSetRamEvision4C1.aboRng_gKeyCalibMax2[0]},
    { &gDb_ctSetRamEvision4C1.tInf_gKeySlopeLgReset, (TVoid*)&gDb_tRamEvision4C1.bogKeySlopeLgReset, (TVoid*)&gDb_ctSetRamEvision4C1.boDef_gKeySlopeLgReset, (TVoid*)&gDb_ctSetRamEvision4C1.aboRng_gKeySlopeLgReset[0]},
    { &gDb_ctSetRamEvision4C1.tInf_gKeySlopeTrReset, (TVoid*)&gDb_tRamEvision4C1.bogKeySlopeTrReset, (TVoid*)&gDb_ctSetRamEvision4C1.boDef_gKeySlopeTrReset, (TVoid*)&gDb_ctSetRamEvision4C1.aboRng_gKeySlopeTrReset[0]},
    { &gDb_ctSetRamEvision4C1.tInf_ActivePageOpus, (TVoid*)&gDb_tRamEvision4C1.u8ActivePageOpus, (TVoid*)&gDb_ctSetRamEvision4C1.u8Def_ActivePageOpus, (TVoid*)&gDb_ctSetRamEvision4C1.au8Rng_ActivePageOpus[0]},
    { &gDb_ctSetRamEvision4C1.tInf_KeyYesReloadWithGenerator, (TVoid*)&gDb_tRamEvision4C1.boKeyYesReloadWithGenerator, (TVoid*)&gDb_ctSetRamEvision4C1.boDef_KeyYesReloadWithGenerator, (TVoid*)&gDb_ctSetRamEvision4C1.aboRng_KeyYesReloadWithGenerator[0]},
    { &gDb_ctSetRamEvision4C1.tInf_KeyNoReloadWithGenerator, (TVoid*)&gDb_tRamEvision4C1.boKeyNoReloadWithGenerator, (TVoid*)&gDb_ctSetRamEvision4C1.boDef_KeyNoReloadWithGenerator, (TVoid*)&gDb_ctSetRamEvision4C1.aboRng_KeyNoReloadWithGenerator[0]}
};

const TDbVarTabRam gDb_catVarTabRamEcuCaliCmdC1[7] =
{    //!< *cptInf *vpVal *cvpDataDef 
    { &gDb_ctSetRamEcuCaliCmdC1.tInf_CalibAngleEndStopLowDeltaArm, (TVoid*)&gDb_tRamEcuCaliCmdC1.boCalibAngleEndStopLowDeltaArm, (TVoid*)&gDb_ctSetRamEcuCaliCmdC1.boDef_CalibAngleEndStopLowDeltaArm, (TVoid*)&gDb_ctSetRamEcuCaliCmdC1.aboRng_CalibAngleEndStopLowDeltaArm[0]},
    { &gDb_ctSetRamEcuCaliCmdC1.tInf_CalibAngleEndStopHighDeltaArm, (TVoid*)&gDb_tRamEcuCaliCmdC1.boCalibAngleEndStopHighDeltaArm, (TVoid*)&gDb_ctSetRamEcuCaliCmdC1.boDef_CalibAngleEndStopHighDeltaArm, (TVoid*)&gDb_ctSetRamEcuCaliCmdC1.aboRng_CalibAngleEndStopHighDeltaArm[0]},
    { &gDb_ctSetRamEcuCaliCmdC1.tInf_CalibAngleEndStopLowArrowArm, (TVoid*)&gDb_tRamEcuCaliCmdC1.boCalibAngleEndStopLowArrowArm, (TVoid*)&gDb_ctSetRamEcuCaliCmdC1.boDef_CalibAngleEndStopLowArrowArm, (TVoid*)&gDb_ctSetRamEcuCaliCmdC1.aboRng_CalibAngleEndStopLowArrowArm[0]},
    { &gDb_ctSetRamEcuCaliCmdC1.tInf_CalibAngleEndStopHighArrowArm, (TVoid*)&gDb_tRamEcuCaliCmdC1.boCalibAngleEndStopHighArrowArm, (TVoid*)&gDb_ctSetRamEcuCaliCmdC1.boDef_CalibAngleEndStopHighArrowArm, (TVoid*)&gDb_ctSetRamEcuCaliCmdC1.aboRng_CalibAngleEndStopHighArrowArm[0]},
    { &gDb_ctSetRamEcuCaliCmdC1.tInf_SavedCalibrationListC1, (TVoid*)&gDb_tRamEcuCaliCmdC1.boSavedCalibrationListC1, (TVoid*)&gDb_ctSetRamEcuCaliCmdC1.boDef_SavedCalibrationListC1, (TVoid*)&gDb_ctSetRamEcuCaliCmdC1.aboRng_SavedCalibrationListC1[0]},
    { &gDb_ctSetRamEcuCaliCmdC1.tInf_CalibLenghtEndStopLowTelescope, (TVoid*)&gDb_tRamEcuCaliCmdC1.boCalibLenghtEndStopLowTelescope, (TVoid*)&gDb_ctSetRamEcuCaliCmdC1.boDef_CalibLenghtEndStopLowTelescope, (TVoid*)&gDb_ctSetRamEcuCaliCmdC1.aboRng_CalibLenghtEndStopLowTelescope[0]},
    { &gDb_ctSetRamEcuCaliCmdC1.tInf_CalibLenghtEndStopHighTelescope, (TVoid*)&gDb_tRamEcuCaliCmdC1.boCalibLenghtEndStopHighTelescope, (TVoid*)&gDb_ctSetRamEcuCaliCmdC1.boDef_CalibLenghtEndStopHighTelescope, (TVoid*)&gDb_ctSetRamEcuCaliCmdC1.aboRng_CalibLenghtEndStopHighTelescope[0]}
};

const TDbVarTabNvm gDb_catVarTabNvParamLimitWorkEnvelopeC1[24] =
{    //!< *cptInf *vpVal *cvpDataRang *cvpDataDef cu16Adr cu16ValuePos
    { &gDb_ctSetNvParamLimitWorkEnvelopeC1.tInf_SlopeTelescModeCurveSlopeAngles, (TVoid*)&gDb_tNvParamLimitWorkEnvelopeC1.au16SlopeTelescModeCurveSlopeAngles[0], (TVoid*)&gDb_ctSetNvParamLimitWorkEnvelopeC1.au16Def_SlopeTelescModeCurveSlopeAngles[0], (TVoid*)&gDb_ctSetNvParamLimitWorkEnvelopeC1.aau16Rng_SlopeTelescModeCurveSlopeAngles[0][0], 1412, 0},
    { &gDb_ctSetNvParamLimitWorkEnvelopeC1.tInf_SlopeTelescModeCurveTelescLenght, (TVoid*)&gDb_tNvParamLimitWorkEnvelopeC1.au16SlopeTelescModeCurveTelescLenght[0], (TVoid*)&gDb_ctSetNvParamLimitWorkEnvelopeC1.au16Def_SlopeTelescModeCurveTelescLenght[0], (TVoid*)&gDb_ctSetNvParamLimitWorkEnvelopeC1.aau16Rng_SlopeTelescModeCurveTelescLenght[0][0], 1430, 9},
    { &gDb_ctSetNvParamLimitWorkEnvelopeC1.tInf_TelescopeLimitCriticZoneThresRel, (TVoid*)&gDb_tNvParamLimitWorkEnvelopeC1.u16TelescopeLimitCriticZoneThresRel, (TVoid*)&gDb_ctSetNvParamLimitWorkEnvelopeC1.u16Def_TelescopeLimitCriticZoneThresRel, (TVoid*)&gDb_ctSetNvParamLimitWorkEnvelopeC1.au16Rng_TelescopeLimitCriticZoneThresRel[0], 1448, 18},
    { &gDb_ctSetNvParamLimitWorkEnvelopeC1.tInf_TelescopeLimitCriticZoneHystRel, (TVoid*)&gDb_tNvParamLimitWorkEnvelopeC1.i16TelescopeLimitCriticZoneHystRel, (TVoid*)&gDb_ctSetNvParamLimitWorkEnvelopeC1.i16Def_TelescopeLimitCriticZoneHystRel, (TVoid*)&gDb_ctSetNvParamLimitWorkEnvelopeC1.ai16Rng_TelescopeLimitCriticZoneHystRel[0], 1450, 19},
    { &gDb_ctSetNvParamLimitWorkEnvelopeC1.tInf_DeltaArmLimitSlopeHighThresAbs, (TVoid*)&gDb_tNvParamLimitWorkEnvelopeC1.u16DeltaArmLimitSlopeHighThresAbs, (TVoid*)&gDb_ctSetNvParamLimitWorkEnvelopeC1.u16Def_DeltaArmLimitSlopeHighThresAbs, (TVoid*)&gDb_ctSetNvParamLimitWorkEnvelopeC1.au16Rng_DeltaArmLimitSlopeHighThresAbs[0], 1452, 20},
    { &gDb_ctSetNvParamLimitWorkEnvelopeC1.tInf_DeltaArmLimitSlopeHighHystRel, (TVoid*)&gDb_tNvParamLimitWorkEnvelopeC1.i16DeltaArmLimitSlopeHighHystRel, (TVoid*)&gDb_ctSetNvParamLimitWorkEnvelopeC1.i16Def_DeltaArmLimitSlopeHighHystRel, (TVoid*)&gDb_ctSetNvParamLimitWorkEnvelopeC1.ai16Rng_DeltaArmLimitSlopeHighHystRel[0], 1454, 21},
    { &gDb_ctSetNvParamLimitWorkEnvelopeC1.tInf_DeltaArmLimitUpperZoneThresAbs, (TVoid*)&gDb_tNvParamLimitWorkEnvelopeC1.i16DeltaArmLimitUpperZoneThresAbs, (TVoid*)&gDb_ctSetNvParamLimitWorkEnvelopeC1.i16Def_DeltaArmLimitUpperZoneThresAbs, (TVoid*)&gDb_ctSetNvParamLimitWorkEnvelopeC1.ai16Rng_DeltaArmLimitUpperZoneThresAbs[0], 1456, 22},
    { &gDb_ctSetNvParamLimitWorkEnvelopeC1.tInf_DeltaArmLimitUpperZoneHystRel, (TVoid*)&gDb_tNvParamLimitWorkEnvelopeC1.i16DeltaArmLimitUpperZoneHystRel, (TVoid*)&gDb_ctSetNvParamLimitWorkEnvelopeC1.i16Def_DeltaArmLimitUpperZoneHystRel, (TVoid*)&gDb_ctSetNvParamLimitWorkEnvelopeC1.ai16Rng_DeltaArmLimitUpperZoneHystRel[0], 1458, 23},
    { &gDb_ctSetNvParamLimitWorkEnvelopeC1.tInf_DeltaArmLimitSlowZoneThresRel, (TVoid*)&gDb_tNvParamLimitWorkEnvelopeC1.i16DeltaArmLimitSlowZoneThresRel, (TVoid*)&gDb_ctSetNvParamLimitWorkEnvelopeC1.i16Def_DeltaArmLimitSlowZoneThresRel, (TVoid*)&gDb_ctSetNvParamLimitWorkEnvelopeC1.ai16Rng_DeltaArmLimitSlowZoneThresRel[0], 1460, 24},
    { &gDb_ctSetNvParamLimitWorkEnvelopeC1.tInf_DeltaArmLimitSlowSpeedReduc, (TVoid*)&gDb_tNvParamLimitWorkEnvelopeC1.u16DeltaArmLimitSlowSpeedReduc, (TVoid*)&gDb_ctSetNvParamLimitWorkEnvelopeC1.u16Def_DeltaArmLimitSlowSpeedReduc, (TVoid*)&gDb_ctSetNvParamLimitWorkEnvelopeC1.au16Rng_DeltaArmLimitSlowSpeedReduc[0], 1462, 25},
    { &gDb_ctSetNvParamLimitWorkEnvelopeC1.tInf_DeltaArmLimitCriticZoneThresRel, (TVoid*)&gDb_tNvParamLimitWorkEnvelopeC1.i16DeltaArmLimitCriticZoneThresRel, (TVoid*)&gDb_ctSetNvParamLimitWorkEnvelopeC1.i16Def_DeltaArmLimitCriticZoneThresRel, (TVoid*)&gDb_ctSetNvParamLimitWorkEnvelopeC1.ai16Rng_DeltaArmLimitCriticZoneThresRel[0], 1464, 26},
    { &gDb_ctSetNvParamLimitWorkEnvelopeC1.tInf_DeltaArmLimitCriticZoneHystRel, (TVoid*)&gDb_tNvParamLimitWorkEnvelopeC1.i16DeltaArmLimitCriticZoneHystRel, (TVoid*)&gDb_ctSetNvParamLimitWorkEnvelopeC1.i16Def_DeltaArmLimitCriticZoneHystRel, (TVoid*)&gDb_ctSetNvParamLimitWorkEnvelopeC1.ai16Rng_DeltaArmLimitCriticZoneHystRel[0], 1466, 27},
    { &gDb_ctSetNvParamLimitWorkEnvelopeC1.tInf_ArrowArmLimitLowerZoneThresAbs, (TVoid*)&gDb_tNvParamLimitWorkEnvelopeC1.i16ArrowArmLimitLowerZoneThresAbs, (TVoid*)&gDb_ctSetNvParamLimitWorkEnvelopeC1.i16Def_ArrowArmLimitLowerZoneThresAbs, (TVoid*)&gDb_ctSetNvParamLimitWorkEnvelopeC1.ai16Rng_ArrowArmLimitLowerZoneThresAbs[0], 1468, 28},
    { &gDb_ctSetNvParamLimitWorkEnvelopeC1.tInf_ArrowArmLimitLowerZoneHystRel, (TVoid*)&gDb_tNvParamLimitWorkEnvelopeC1.i16ArrowArmLimitLowerZoneHystRel, (TVoid*)&gDb_ctSetNvParamLimitWorkEnvelopeC1.i16Def_ArrowArmLimitLowerZoneHystRel, (TVoid*)&gDb_ctSetNvParamLimitWorkEnvelopeC1.ai16Rng_ArrowArmLimitLowerZoneHystRel[0], 1470, 29},
    { &gDb_ctSetNvParamLimitWorkEnvelopeC1.tInf_ArrowArmLimitSlowZoneThresRel, (TVoid*)&gDb_tNvParamLimitWorkEnvelopeC1.i16ArrowArmLimitSlowZoneThresRel, (TVoid*)&gDb_ctSetNvParamLimitWorkEnvelopeC1.i16Def_ArrowArmLimitSlowZoneThresRel, (TVoid*)&gDb_ctSetNvParamLimitWorkEnvelopeC1.ai16Rng_ArrowArmLimitSlowZoneThresRel[0], 1472, 30},
    { &gDb_ctSetNvParamLimitWorkEnvelopeC1.tInf_ArrowArmLimitSlowSpeedReduc, (TVoid*)&gDb_tNvParamLimitWorkEnvelopeC1.u16ArrowArmLimitSlowSpeedReduc, (TVoid*)&gDb_ctSetNvParamLimitWorkEnvelopeC1.u16Def_ArrowArmLimitSlowSpeedReduc, (TVoid*)&gDb_ctSetNvParamLimitWorkEnvelopeC1.au16Rng_ArrowArmLimitSlowSpeedReduc[0], 1474, 31},
    { &gDb_ctSetNvParamLimitWorkEnvelopeC1.tInf_ArrowArmLimitCriticZoneThresRel, (TVoid*)&gDb_tNvParamLimitWorkEnvelopeC1.i16ArrowArmLimitCriticZoneThresRel, (TVoid*)&gDb_ctSetNvParamLimitWorkEnvelopeC1.i16Def_ArrowArmLimitCriticZoneThresRel, (TVoid*)&gDb_ctSetNvParamLimitWorkEnvelopeC1.ai16Rng_ArrowArmLimitCriticZoneThresRel[0], 1476, 32},
    { &gDb_ctSetNvParamLimitWorkEnvelopeC1.tInf_ArrowArmLimitCriticZoneHystRel, (TVoid*)&gDb_tNvParamLimitWorkEnvelopeC1.i16ArrowArmLimitCriticZoneHystRel, (TVoid*)&gDb_ctSetNvParamLimitWorkEnvelopeC1.i16Def_ArrowArmLimitCriticZoneHystRel, (TVoid*)&gDb_ctSetNvParamLimitWorkEnvelopeC1.ai16Rng_ArrowArmLimitCriticZoneHystRel[0], 1478, 33},
    { &gDb_ctSetNvParamLimitWorkEnvelopeC1.tInf_ArmTelescModeCurveArmAngles, (TVoid*)&gDb_tNvParamLimitWorkEnvelopeC1.au16ArmTelescModeCurveArmAngles[0], (TVoid*)&gDb_ctSetNvParamLimitWorkEnvelopeC1.au16Def_ArmTelescModeCurveArmAngles[0], (TVoid*)&gDb_ctSetNvParamLimitWorkEnvelopeC1.aau16Rng_ArmTelescModeCurveArmAngles[0][0], 1480, 34},
    { &gDb_ctSetNvParamLimitWorkEnvelopeC1.tInf_ArmTelescModeCurveTelescLenght, (TVoid*)&gDb_tNvParamLimitWorkEnvelopeC1.au16ArmTelescModeCurveTelescLenght[0], (TVoid*)&gDb_ctSetNvParamLimitWorkEnvelopeC1.au16Def_ArmTelescModeCurveTelescLenght[0], (TVoid*)&gDb_ctSetNvParamLimitWorkEnvelopeC1.aau16Rng_ArmTelescModeCurveTelescLenght[0][0], 1498, 43},
    { &gDb_ctSetNvParamLimitWorkEnvelopeC1.tInf_SlopeTelescopeMode, (TVoid*)&gDb_tNvParamLimitWorkEnvelopeC1.boSlopeTelescopeMode, (TVoid*)&gDb_ctSetNvParamLimitWorkEnvelopeC1.boDef_SlopeTelescopeMode, (TVoid*)&gDb_ctSetNvParamLimitWorkEnvelopeC1.aboRng_SlopeTelescopeMode[0], 1516, 52},
    { &gDb_ctSetNvParamLimitWorkEnvelopeC1.tInf_ArrowArmPerformLowUpperSector, (TVoid*)&gDb_tNvParamLimitWorkEnvelopeC1.u16ArrowArmPerformLowUpperSector, (TVoid*)&gDb_ctSetNvParamLimitWorkEnvelopeC1.u16Def_ArrowArmPerformLowUpperSector, (TVoid*)&gDb_ctSetNvParamLimitWorkEnvelopeC1.au16Rng_ArrowArmPerformLowUpperSector[0], 1517, 53},
    { &gDb_ctSetNvParamLimitWorkEnvelopeC1.tInf_ArrowArmPerformSectorUpperCritic, (TVoid*)&gDb_tNvParamLimitWorkEnvelopeC1.u16ArrowArmPerformSectorUpperCritic, (TVoid*)&gDb_ctSetNvParamLimitWorkEnvelopeC1.u16Def_ArrowArmPerformSectorUpperCritic, (TVoid*)&gDb_ctSetNvParamLimitWorkEnvelopeC1.au16Rng_ArrowArmPerformSectorUpperCritic[0], 1519, 54},
    { &gDb_ctSetNvParamLimitWorkEnvelopeC1.tInf_ArrowArmPerformSectorHyst, (TVoid*)&gDb_tNvParamLimitWorkEnvelopeC1.u16ArrowArmPerformSectorHyst, (TVoid*)&gDb_ctSetNvParamLimitWorkEnvelopeC1.u16Def_ArrowArmPerformSectorHyst, (TVoid*)&gDb_ctSetNvParamLimitWorkEnvelopeC1.au16Rng_ArrowArmPerformSectorHyst[0], 1521, 55}
};

const TDbVarTabRam gDb_catVarTabRamLimitWorkEnvelopeC1[20] =
{    //!< *cptInf *vpVal *cvpDataDef 
    { &gDb_ctSetRamLimitWorkEnvelopeC1.tInf_ReduceSpeedDeltaArmUp, (TVoid*)&gDb_tRamLimitWorkEnvelopeC1.boReduceSpeedDeltaArmUp, (TVoid*)&gDb_ctSetRamLimitWorkEnvelopeC1.boDef_ReduceSpeedDeltaArmUp, (TVoid*)&gDb_ctSetRamLimitWorkEnvelopeC1.aboRng_ReduceSpeedDeltaArmUp[0]},
    { &gDb_ctSetRamLimitWorkEnvelopeC1.tInf_ReduceSpeedArrowArmDown, (TVoid*)&gDb_tRamLimitWorkEnvelopeC1.boReduceSpeedArrowArmDown, (TVoid*)&gDb_ctSetRamLimitWorkEnvelopeC1.boDef_ReduceSpeedArrowArmDown, (TVoid*)&gDb_ctSetRamLimitWorkEnvelopeC1.aboRng_ReduceSpeedArrowArmDown[0]},
    { &gDb_ctSetRamLimitWorkEnvelopeC1.tInf_StopTelescopeOut, (TVoid*)&gDb_tRamLimitWorkEnvelopeC1.boStopTelescopeOut, (TVoid*)&gDb_ctSetRamLimitWorkEnvelopeC1.boDef_StopTelescopeOut, (TVoid*)&gDb_ctSetRamLimitWorkEnvelopeC1.aboRng_StopTelescopeOut[0]},
    { &gDb_ctSetRamLimitWorkEnvelopeC1.tInf_StopDeltaArmUp, (TVoid*)&gDb_tRamLimitWorkEnvelopeC1.boStopDeltaArmUp, (TVoid*)&gDb_ctSetRamLimitWorkEnvelopeC1.boDef_StopDeltaArmUp, (TVoid*)&gDb_ctSetRamLimitWorkEnvelopeC1.aboRng_StopDeltaArmUp[0]},
    { &gDb_ctSetRamLimitWorkEnvelopeC1.tInf_StopArrowArmDown, (TVoid*)&gDb_tRamLimitWorkEnvelopeC1.boStopArrowArmDown, (TVoid*)&gDb_ctSetRamLimitWorkEnvelopeC1.boDef_StopArrowArmDown, (TVoid*)&gDb_ctSetRamLimitWorkEnvelopeC1.aboRng_StopArrowArmDown[0]},
    { &gDb_ctSetRamLimitWorkEnvelopeC1.tInf_StopAllMovements, (TVoid*)&gDb_tRamLimitWorkEnvelopeC1.boStopAllMovements, (TVoid*)&gDb_ctSetRamLimitWorkEnvelopeC1.boDef_StopAllMovements, (TVoid*)&gDb_ctSetRamLimitWorkEnvelopeC1.aboRng_StopAllMovements[0]},
    { &gDb_ctSetRamLimitWorkEnvelopeC1.tInf_SelectedSlopeAngle, (TVoid*)&gDb_tRamLimitWorkEnvelopeC1.u16SelectedSlopeAngle, (TVoid*)&gDb_ctSetRamLimitWorkEnvelopeC1.u16Def_SelectedSlopeAngle, (TVoid*)&gDb_ctSetRamLimitWorkEnvelopeC1.au16Rng_SelectedSlopeAngle[0]},
    { &gDb_ctSetRamLimitWorkEnvelopeC1.tInf_TelescopeLimitStrokeThres, (TVoid*)&gDb_tRamLimitWorkEnvelopeC1.u16TelescopeLimitStrokeThres, (TVoid*)&gDb_ctSetRamLimitWorkEnvelopeC1.u16Def_TelescopeLimitStrokeThres, (TVoid*)&gDb_ctSetRamLimitWorkEnvelopeC1.au16Rng_TelescopeLimitStrokeThres[0]},
    { &gDb_ctSetRamLimitWorkEnvelopeC1.tInf_TelescopeInCriticalZone, (TVoid*)&gDb_tRamLimitWorkEnvelopeC1.boTelescopeInCriticalZone, (TVoid*)&gDb_ctSetRamLimitWorkEnvelopeC1.boDef_TelescopeInCriticalZone, (TVoid*)&gDb_ctSetRamLimitWorkEnvelopeC1.aboRng_TelescopeInCriticalZone[0]},
    { &gDb_ctSetRamLimitWorkEnvelopeC1.tInf_SlopeIsHigh, (TVoid*)&gDb_tRamLimitWorkEnvelopeC1.boSlopeIsHigh, (TVoid*)&gDb_ctSetRamLimitWorkEnvelopeC1.boDef_SlopeIsHigh, (TVoid*)&gDb_ctSetRamLimitWorkEnvelopeC1.aboRng_SlopeIsHigh[0]},
    { &gDb_ctSetRamLimitWorkEnvelopeC1.tInf_DeltaArmInUpperZone, (TVoid*)&gDb_tRamLimitWorkEnvelopeC1.boDeltaArmInUpperZone, (TVoid*)&gDb_ctSetRamLimitWorkEnvelopeC1.boDef_DeltaArmInUpperZone, (TVoid*)&gDb_ctSetRamLimitWorkEnvelopeC1.aboRng_DeltaArmInUpperZone[0]},
    { &gDb_ctSetRamLimitWorkEnvelopeC1.tInf_DeltaArmInCriticalZone, (TVoid*)&gDb_tRamLimitWorkEnvelopeC1.boDeltaArmInCriticalZone, (TVoid*)&gDb_ctSetRamLimitWorkEnvelopeC1.boDef_DeltaArmInCriticalZone, (TVoid*)&gDb_ctSetRamLimitWorkEnvelopeC1.aboRng_DeltaArmInCriticalZone[0]},
    { &gDb_ctSetRamLimitWorkEnvelopeC1.tInf_ArrowArmInLowerZone, (TVoid*)&gDb_tRamLimitWorkEnvelopeC1.boArrowArmInLowerZone, (TVoid*)&gDb_ctSetRamLimitWorkEnvelopeC1.boDef_ArrowArmInLowerZone, (TVoid*)&gDb_ctSetRamLimitWorkEnvelopeC1.aboRng_ArrowArmInLowerZone[0]},
    { &gDb_ctSetRamLimitWorkEnvelopeC1.tInf_ArrowArmInCriticalZone, (TVoid*)&gDb_tRamLimitWorkEnvelopeC1.boArrowArmInCriticalZone, (TVoid*)&gDb_ctSetRamLimitWorkEnvelopeC1.boDef_ArrowArmInCriticalZone, (TVoid*)&gDb_ctSetRamLimitWorkEnvelopeC1.aboRng_ArrowArmInCriticalZone[0]},
    { &gDb_ctSetRamLimitWorkEnvelopeC1.tInf_EnableSimuMode, (TVoid*)&gDb_tRamLimitWorkEnvelopeC1.boEnableSimuMode, (TVoid*)&gDb_ctSetRamLimitWorkEnvelopeC1.boDef_EnableSimuMode, (TVoid*)&gDb_ctSetRamLimitWorkEnvelopeC1.aboRng_EnableSimuMode[0]},
    { &gDb_ctSetRamLimitWorkEnvelopeC1.tInf_SimuSlopeAngleLong, (TVoid*)&gDb_tRamLimitWorkEnvelopeC1.i16SimuSlopeAngleLong, (TVoid*)&gDb_ctSetRamLimitWorkEnvelopeC1.i16Def_SimuSlopeAngleLong, (TVoid*)&gDb_ctSetRamLimitWorkEnvelopeC1.ai16Rng_SimuSlopeAngleLong[0]},
    { &gDb_ctSetRamLimitWorkEnvelopeC1.tInf_SimuSlopeAngleTrans, (TVoid*)&gDb_tRamLimitWorkEnvelopeC1.i16SimuSlopeAngleTrans, (TVoid*)&gDb_ctSetRamLimitWorkEnvelopeC1.i16Def_SimuSlopeAngleTrans, (TVoid*)&gDb_ctSetRamLimitWorkEnvelopeC1.ai16Rng_SimuSlopeAngleTrans[0]},
    { &gDb_ctSetRamLimitWorkEnvelopeC1.tInf_SimuTelescopePositionSensor, (TVoid*)&gDb_tRamLimitWorkEnvelopeC1.u16SimuTelescopePositionSensor, (TVoid*)&gDb_ctSetRamLimitWorkEnvelopeC1.u16Def_SimuTelescopePositionSensor, (TVoid*)&gDb_ctSetRamLimitWorkEnvelopeC1.au16Rng_SimuTelescopePositionSensor[0]},
    { &gDb_ctSetRamLimitWorkEnvelopeC1.tInf_SimuDeltaArmAngularSensor, (TVoid*)&gDb_tRamLimitWorkEnvelopeC1.i16SimuDeltaArmAngularSensor, (TVoid*)&gDb_ctSetRamLimitWorkEnvelopeC1.i16Def_SimuDeltaArmAngularSensor, (TVoid*)&gDb_ctSetRamLimitWorkEnvelopeC1.ai16Rng_SimuDeltaArmAngularSensor[0]},
    { &gDb_ctSetRamLimitWorkEnvelopeC1.tInf_SimuArrowArmAngularSensor, (TVoid*)&gDb_tRamLimitWorkEnvelopeC1.i16SimuArrowArmAngularSensor, (TVoid*)&gDb_ctSetRamLimitWorkEnvelopeC1.i16Def_SimuArrowArmAngularSensor, (TVoid*)&gDb_ctSetRamLimitWorkEnvelopeC1.ai16Rng_SimuArrowArmAngularSensor[0]}
};

const TDbVarTabRam gDb_catVarTabRamTelescopeCanC1[7] =
{    //!< *cptInf *vpVal *cvpDataDef 
    { &gDb_ctSetRamTelescopeCanC1.tInf_StateHeartBeatTelescopeSensor, (TVoid*)&gDb_tRamTelescopeCanC1.u8StateHeartBeatTelescopeSensor, (TVoid*)&gDb_ctSetRamTelescopeCanC1.u8Def_StateHeartBeatTelescopeSensor, (TVoid*)&gDb_ctSetRamTelescopeCanC1.au8Rng_StateHeartBeatTelescopeSensor[0]},
    { &gDb_ctSetRamTelescopeCanC1.tInf_LenghtTelescope1, (TVoid*)&gDb_tRamTelescopeCanC1.u16LenghtTelescope1, (TVoid*)&gDb_ctSetRamTelescopeCanC1.u16Def_LenghtTelescope1, (TVoid*)&gDb_ctSetRamTelescopeCanC1.au16Rng_LenghtTelescope1[0]},
    { &gDb_ctSetRamTelescopeCanC1.tInf_ErrorRetractorTelescope1, (TVoid*)&gDb_tRamTelescopeCanC1.u8ErrorRetractorTelescope1, (TVoid*)&gDb_ctSetRamTelescopeCanC1.u8Def_ErrorRetractorTelescope1, (TVoid*)&gDb_ctSetRamTelescopeCanC1.au8Rng_ErrorRetractorTelescope1[0]},
    { &gDb_ctSetRamTelescopeCanC1.tInf_RetractorTelescopeVal1, (TVoid*)&gDb_tRamTelescopeCanC1.u16RetractorTelescopeVal1, (TVoid*)&gDb_ctSetRamTelescopeCanC1.u16Def_RetractorTelescopeVal1, (TVoid*)&gDb_ctSetRamTelescopeCanC1.au16Rng_RetractorTelescopeVal1[0]},
    { &gDb_ctSetRamTelescopeCanC1.tInf_LenghtTelescope2, (TVoid*)&gDb_tRamTelescopeCanC1.u16LenghtTelescope2, (TVoid*)&gDb_ctSetRamTelescopeCanC1.u16Def_LenghtTelescope2, (TVoid*)&gDb_ctSetRamTelescopeCanC1.au16Rng_LenghtTelescope2[0]},
    { &gDb_ctSetRamTelescopeCanC1.tInf_ErrorRetractorTelescope2, (TVoid*)&gDb_tRamTelescopeCanC1.u8ErrorRetractorTelescope2, (TVoid*)&gDb_ctSetRamTelescopeCanC1.u8Def_ErrorRetractorTelescope2, (TVoid*)&gDb_ctSetRamTelescopeCanC1.au8Rng_ErrorRetractorTelescope2[0]},
    { &gDb_ctSetRamTelescopeCanC1.tInf_RetractorTelescopeVal2, (TVoid*)&gDb_tRamTelescopeCanC1.u16RetractorTelescopeVal2, (TVoid*)&gDb_ctSetRamTelescopeCanC1.u16Def_RetractorTelescopeVal2, (TVoid*)&gDb_ctSetRamTelescopeCanC1.au16Rng_RetractorTelescopeVal2[0]}
};

const TDbVarTabRam gDb_catVarTabRamMvtEndStopC1[19] =
{    //!< *cptInf *vpVal *cvpDataDef 
    { &gDb_ctSetRamMvtEndStopC1.tInf_ReduceSpeedRotTurretClockwise, (TVoid*)&gDb_tRamMvtEndStopC1.boReduceSpeedRotTurretClockwise, (TVoid*)&gDb_ctSetRamMvtEndStopC1.boDef_ReduceSpeedRotTurretClockwise, (TVoid*)&gDb_ctSetRamMvtEndStopC1.aboRng_ReduceSpeedRotTurretClockwise[0]},
    { &gDb_ctSetRamMvtEndStopC1.tInf_StopRotTurretClockwise, (TVoid*)&gDb_tRamMvtEndStopC1.boStopRotTurretClockwise, (TVoid*)&gDb_ctSetRamMvtEndStopC1.boDef_StopRotTurretClockwise, (TVoid*)&gDb_ctSetRamMvtEndStopC1.aboRng_StopRotTurretClockwise[0]},
    { &gDb_ctSetRamMvtEndStopC1.tInf_ReduceSpeedRotTurretCounterClock, (TVoid*)&gDb_tRamMvtEndStopC1.boReduceSpeedRotTurretCounterClock, (TVoid*)&gDb_ctSetRamMvtEndStopC1.boDef_ReduceSpeedRotTurretCounterClock, (TVoid*)&gDb_ctSetRamMvtEndStopC1.aboRng_ReduceSpeedRotTurretCounterClock[0]},
    { &gDb_ctSetRamMvtEndStopC1.tInf_StopRotTurretCounterClockwise, (TVoid*)&gDb_tRamMvtEndStopC1.boStopRotTurretCounterClockwise, (TVoid*)&gDb_ctSetRamMvtEndStopC1.boDef_StopRotTurretCounterClockwise, (TVoid*)&gDb_ctSetRamMvtEndStopC1.aboRng_StopRotTurretCounterClockwise[0]},
    { &gDb_ctSetRamMvtEndStopC1.tInf_ReduceSpeedDeltaArmDown, (TVoid*)&gDb_tRamMvtEndStopC1.boReduceSpeedDeltaArmDown, (TVoid*)&gDb_ctSetRamMvtEndStopC1.boDef_ReduceSpeedDeltaArmDown, (TVoid*)&gDb_ctSetRamMvtEndStopC1.aboRng_ReduceSpeedDeltaArmDown[0]},
    { &gDb_ctSetRamMvtEndStopC1.tInf_FoldedDeltaArm, (TVoid*)&gDb_tRamMvtEndStopC1.boFoldedDeltaArm, (TVoid*)&gDb_ctSetRamMvtEndStopC1.boDef_FoldedDeltaArm, (TVoid*)&gDb_ctSetRamMvtEndStopC1.aboRng_FoldedDeltaArm[0]},
    { &gDb_ctSetRamMvtEndStopC1.tInf_ReduceSpeedDeltaArmUp, (TVoid*)&gDb_tRamMvtEndStopC1.boReduceSpeedDeltaArmUp, (TVoid*)&gDb_ctSetRamMvtEndStopC1.boDef_ReduceSpeedDeltaArmUp, (TVoid*)&gDb_ctSetRamMvtEndStopC1.aboRng_ReduceSpeedDeltaArmUp[0]},
    { &gDb_ctSetRamMvtEndStopC1.tInf_TestTurretPosition, (TVoid*)&gDb_tRamMvtEndStopC1.i16TestTurretPosition, (TVoid*)&gDb_ctSetRamMvtEndStopC1.i16Def_TestTurretPosition, (TVoid*)&gDb_ctSetRamMvtEndStopC1.ai16Rng_TestTurretPosition[0]},
    { &gDb_ctSetRamMvtEndStopC1.tInf_TestDeltaArmPosition, (TVoid*)&gDb_tRamMvtEndStopC1.i16TestDeltaArmPosition, (TVoid*)&gDb_ctSetRamMvtEndStopC1.i16Def_TestDeltaArmPosition, (TVoid*)&gDb_ctSetRamMvtEndStopC1.ai16Rng_TestDeltaArmPosition[0]},
    { &gDb_ctSetRamMvtEndStopC1.tInf_FoldedArrowArm, (TVoid*)&gDb_tRamMvtEndStopC1.boFoldedArrowArm, (TVoid*)&gDb_ctSetRamMvtEndStopC1.boDef_FoldedArrowArm, (TVoid*)&gDb_ctSetRamMvtEndStopC1.aboRng_FoldedArrowArm[0]},
    { &gDb_ctSetRamMvtEndStopC1.tInf_ReduceSpeedArrowArmUp, (TVoid*)&gDb_tRamMvtEndStopC1.boReduceSpeedArrowArmUp, (TVoid*)&gDb_ctSetRamMvtEndStopC1.boDef_ReduceSpeedArrowArmUp, (TVoid*)&gDb_ctSetRamMvtEndStopC1.aboRng_ReduceSpeedArrowArmUp[0]},
    { &gDb_ctSetRamMvtEndStopC1.tInf_ReduceSpeedArrowArmDown, (TVoid*)&gDb_tRamMvtEndStopC1.boReduceSpeedArrowArmDown, (TVoid*)&gDb_ctSetRamMvtEndStopC1.boDef_ReduceSpeedArrowArmDown, (TVoid*)&gDb_ctSetRamMvtEndStopC1.aboRng_ReduceSpeedArrowArmDown[0]},
    { &gDb_ctSetRamMvtEndStopC1.tInf_ReduceSpeedTelescopFolded, (TVoid*)&gDb_tRamMvtEndStopC1.boReduceSpeedTelescopFolded, (TVoid*)&gDb_ctSetRamMvtEndStopC1.boDef_ReduceSpeedTelescopFolded, (TVoid*)&gDb_ctSetRamMvtEndStopC1.aboRng_ReduceSpeedTelescopFolded[0]},
    { &gDb_ctSetRamMvtEndStopC1.tInf_ReduceSpeedTelescopeUp, (TVoid*)&gDb_tRamMvtEndStopC1.boReduceSpeedTelescopeUp, (TVoid*)&gDb_ctSetRamMvtEndStopC1.boDef_ReduceSpeedTelescopeUp, (TVoid*)&gDb_ctSetRamMvtEndStopC1.aboRng_ReduceSpeedTelescopeUp[0]},
    { &gDb_ctSetRamMvtEndStopC1.tInf_ReduceSpeedTelescopeDown, (TVoid*)&gDb_tRamMvtEndStopC1.boReduceSpeedTelescopeDown, (TVoid*)&gDb_ctSetRamMvtEndStopC1.boDef_ReduceSpeedTelescopeDown, (TVoid*)&gDb_ctSetRamMvtEndStopC1.aboRng_ReduceSpeedTelescopeDown[0]},
    { &gDb_ctSetRamMvtEndStopC1.tInf_PerformFoldedTelescopeStop, (TVoid*)&gDb_tRamMvtEndStopC1.boPerformFoldedTelescopeStop, (TVoid*)&gDb_ctSetRamMvtEndStopC1.boDef_PerformFoldedTelescopeStop, (TVoid*)&gDb_ctSetRamMvtEndStopC1.aboRng_PerformFoldedTelescopeStop[0]},
    { &gDb_ctSetRamMvtEndStopC1.tInf_PerformAutoriseTransSlopeArrow, (TVoid*)&gDb_tRamMvtEndStopC1.boPerformAutoriseTransSlopeArrow, (TVoid*)&gDb_ctSetRamMvtEndStopC1.boDef_PerformAutoriseTransSlopeArrow, (TVoid*)&gDb_ctSetRamMvtEndStopC1.aboRng_PerformAutoriseTransSlopeArrow[0]},
    { &gDb_ctSetRamMvtEndStopC1.tInf_ValidSectorTelescope, (TVoid*)&gDb_tRamMvtEndStopC1.boValidSectorTelescope, (TVoid*)&gDb_ctSetRamMvtEndStopC1.boDef_ValidSectorTelescope, (TVoid*)&gDb_ctSetRamMvtEndStopC1.aboRng_ValidSectorTelescope[0]},
    { &gDb_ctSetRamMvtEndStopC1.tInf_ValidFirstSectorTelescope, (TVoid*)&gDb_tRamMvtEndStopC1.boValidFirstSectorTelescope, (TVoid*)&gDb_ctSetRamMvtEndStopC1.boDef_ValidFirstSectorTelescope, (TVoid*)&gDb_ctSetRamMvtEndStopC1.aboRng_ValidFirstSectorTelescope[0]}
};

const TDbVarTabNvm gDb_catVarTabNvParamMvtEndStopC1[24] =
{    //!< *cptInf *vpVal *cvpDataRang *cvpDataDef cu16Adr cu16ValuePos
    { &gDb_ctSetNvParamMvtEndStopC1.tInf_TurretNegEndStopThres, (TVoid*)&gDb_tNvParamMvtEndStopC1.i16TurretNegEndStopThres, (TVoid*)&gDb_ctSetNvParamMvtEndStopC1.i16Def_TurretNegEndStopThres, (TVoid*)&gDb_ctSetNvParamMvtEndStopC1.ai16Rng_TurretNegEndStopThres[0], 1612, 0},
    { &gDb_ctSetNvParamMvtEndStopC1.tInf_TurretNegEndStopHyst, (TVoid*)&gDb_tNvParamMvtEndStopC1.i16TurretNegEndStopHyst, (TVoid*)&gDb_ctSetNvParamMvtEndStopC1.i16Def_TurretNegEndStopHyst, (TVoid*)&gDb_ctSetNvParamMvtEndStopC1.ai16Rng_TurretNegEndStopHyst[0], 1614, 1},
    { &gDb_ctSetNvParamMvtEndStopC1.tInf_TurretNegEndStopSlowThres, (TVoid*)&gDb_tNvParamMvtEndStopC1.i16TurretNegEndStopSlowThres, (TVoid*)&gDb_ctSetNvParamMvtEndStopC1.i16Def_TurretNegEndStopSlowThres, (TVoid*)&gDb_ctSetNvParamMvtEndStopC1.ai16Rng_TurretNegEndStopSlowThres[0], 1616, 2},
    { &gDb_ctSetNvParamMvtEndStopC1.tInf_TurretPosEndStopThres, (TVoid*)&gDb_tNvParamMvtEndStopC1.i16TurretPosEndStopThres, (TVoid*)&gDb_ctSetNvParamMvtEndStopC1.i16Def_TurretPosEndStopThres, (TVoid*)&gDb_ctSetNvParamMvtEndStopC1.ai16Rng_TurretPosEndStopThres[0], 1618, 3},
    { &gDb_ctSetNvParamMvtEndStopC1.tInf_TurretPosEndStopHyst, (TVoid*)&gDb_tNvParamMvtEndStopC1.i16TurretPosEndStopHyst, (TVoid*)&gDb_ctSetNvParamMvtEndStopC1.i16Def_TurretPosEndStopHyst, (TVoid*)&gDb_ctSetNvParamMvtEndStopC1.ai16Rng_TurretPosEndStopHyst[0], 1620, 4},
    { &gDb_ctSetNvParamMvtEndStopC1.tInf_TurretPosEndStopSlowThres, (TVoid*)&gDb_tNvParamMvtEndStopC1.i16TurretPosEndStopSlowThres, (TVoid*)&gDb_ctSetNvParamMvtEndStopC1.i16Def_TurretPosEndStopSlowThres, (TVoid*)&gDb_ctSetNvParamMvtEndStopC1.ai16Rng_TurretPosEndStopSlowThres[0], 1622, 5},
    { &gDb_ctSetNvParamMvtEndStopC1.tInf_FoldedDeltaArmThres, (TVoid*)&gDb_tNvParamMvtEndStopC1.i16FoldedDeltaArmThres, (TVoid*)&gDb_ctSetNvParamMvtEndStopC1.i16Def_FoldedDeltaArmThres, (TVoid*)&gDb_ctSetNvParamMvtEndStopC1.ai16Rng_FoldedDeltaArmThres[0], 1624, 6},
    { &gDb_ctSetNvParamMvtEndStopC1.tInf_FoldedDeltaArmHyst, (TVoid*)&gDb_tNvParamMvtEndStopC1.i16FoldedDeltaArmHyst, (TVoid*)&gDb_ctSetNvParamMvtEndStopC1.i16Def_FoldedDeltaArmHyst, (TVoid*)&gDb_ctSetNvParamMvtEndStopC1.ai16Rng_FoldedDeltaArmHyst[0], 1626, 7},
    { &gDb_ctSetNvParamMvtEndStopC1.tInf_DeltaArmBottomEndStopSlowThres, (TVoid*)&gDb_tNvParamMvtEndStopC1.i16DeltaArmBottomEndStopSlowThres, (TVoid*)&gDb_ctSetNvParamMvtEndStopC1.i16Def_DeltaArmBottomEndStopSlowThres, (TVoid*)&gDb_ctSetNvParamMvtEndStopC1.ai16Rng_DeltaArmBottomEndStopSlowThres[0], 1628, 8},
    { &gDb_ctSetNvParamMvtEndStopC1.tInf_DeltaArmTopEndStopThres, (TVoid*)&gDb_tNvParamMvtEndStopC1.i16DeltaArmTopEndStopThres, (TVoid*)&gDb_ctSetNvParamMvtEndStopC1.i16Def_DeltaArmTopEndStopThres, (TVoid*)&gDb_ctSetNvParamMvtEndStopC1.ai16Rng_DeltaArmTopEndStopThres[0], 1630, 9},
    { &gDb_ctSetNvParamMvtEndStopC1.tInf_DeltaArmTopEndStopHyst, (TVoid*)&gDb_tNvParamMvtEndStopC1.i16DeltaArmTopEndStopHyst, (TVoid*)&gDb_ctSetNvParamMvtEndStopC1.i16Def_DeltaArmTopEndStopHyst, (TVoid*)&gDb_ctSetNvParamMvtEndStopC1.ai16Rng_DeltaArmTopEndStopHyst[0], 1632, 10},
    { &gDb_ctSetNvParamMvtEndStopC1.tInf_DeltaArmTopEndStopSlowThres, (TVoid*)&gDb_tNvParamMvtEndStopC1.i16DeltaArmTopEndStopSlowThres, (TVoid*)&gDb_ctSetNvParamMvtEndStopC1.i16Def_DeltaArmTopEndStopSlowThres, (TVoid*)&gDb_ctSetNvParamMvtEndStopC1.ai16Rng_DeltaArmTopEndStopSlowThres[0], 1634, 11},
    { &gDb_ctSetNvParamMvtEndStopC1.tInf_FoldedArrowArmThres, (TVoid*)&gDb_tNvParamMvtEndStopC1.i16FoldedArrowArmThres, (TVoid*)&gDb_ctSetNvParamMvtEndStopC1.i16Def_FoldedArrowArmThres, (TVoid*)&gDb_ctSetNvParamMvtEndStopC1.ai16Rng_FoldedArrowArmThres[0], 1636, 12},
    { &gDb_ctSetNvParamMvtEndStopC1.tInf_FoldedArrowArmHyst, (TVoid*)&gDb_tNvParamMvtEndStopC1.i16FoldedArrowArmHyst, (TVoid*)&gDb_ctSetNvParamMvtEndStopC1.i16Def_FoldedArrowArmHyst, (TVoid*)&gDb_ctSetNvParamMvtEndStopC1.ai16Rng_FoldedArrowArmHyst[0], 1638, 13},
    { &gDb_ctSetNvParamMvtEndStopC1.tInf_DeltaArmSlowMvtEndStop, (TVoid*)&gDb_tNvParamMvtEndStopC1.u16DeltaArmSlowMvtEndStop, (TVoid*)&gDb_ctSetNvParamMvtEndStopC1.u16Def_DeltaArmSlowMvtEndStop, (TVoid*)&gDb_ctSetNvParamMvtEndStopC1.au16Rng_DeltaArmSlowMvtEndStop[0], 1640, 14},
    { &gDb_ctSetNvParamMvtEndStopC1.tInf_ArrowArmTopEndStopSlowThres, (TVoid*)&gDb_tNvParamMvtEndStopC1.i16ArrowArmTopEndStopSlowThres, (TVoid*)&gDb_ctSetNvParamMvtEndStopC1.i16Def_ArrowArmTopEndStopSlowThres, (TVoid*)&gDb_ctSetNvParamMvtEndStopC1.ai16Rng_ArrowArmTopEndStopSlowThres[0], 1642, 15},
    { &gDb_ctSetNvParamMvtEndStopC1.tInf_ArrowArmBottomEndStopSlowThres, (TVoid*)&gDb_tNvParamMvtEndStopC1.i16ArrowArmBottomEndStopSlowThres, (TVoid*)&gDb_ctSetNvParamMvtEndStopC1.i16Def_ArrowArmBottomEndStopSlowThres, (TVoid*)&gDb_ctSetNvParamMvtEndStopC1.ai16Rng_ArrowArmBottomEndStopSlowThres[0], 1644, 16},
    { &gDb_ctSetNvParamMvtEndStopC1.tInf_ArrowArmTopEndStopThres, (TVoid*)&gDb_tNvParamMvtEndStopC1.i16ArrowArmTopEndStopThres, (TVoid*)&gDb_ctSetNvParamMvtEndStopC1.i16Def_ArrowArmTopEndStopThres, (TVoid*)&gDb_ctSetNvParamMvtEndStopC1.ai16Rng_ArrowArmTopEndStopThres[0], 1646, 17},
    { &gDb_ctSetNvParamMvtEndStopC1.tInf_ArrowArmSlowMvtDownEndStop, (TVoid*)&gDb_tNvParamMvtEndStopC1.u16ArrowArmSlowMvtDownEndStop, (TVoid*)&gDb_ctSetNvParamMvtEndStopC1.u16Def_ArrowArmSlowMvtDownEndStop, (TVoid*)&gDb_ctSetNvParamMvtEndStopC1.au16Rng_ArrowArmSlowMvtDownEndStop[0], 1648, 18},
    { &gDb_ctSetNvParamMvtEndStopC1.tInf_ArrowArmSlowMvtUpEndStop, (TVoid*)&gDb_tNvParamMvtEndStopC1.u16ArrowArmSlowMvtUpEndStop, (TVoid*)&gDb_ctSetNvParamMvtEndStopC1.u16Def_ArrowArmSlowMvtUpEndStop, (TVoid*)&gDb_ctSetNvParamMvtEndStopC1.au16Rng_ArrowArmSlowMvtUpEndStop[0], 1650, 19},
    { &gDb_ctSetNvParamMvtEndStopC1.tInf_TelescopSlowMvtFoldedEndStop, (TVoid*)&gDb_tNvParamMvtEndStopC1.u16TelescopSlowMvtFoldedEndStop, (TVoid*)&gDb_ctSetNvParamMvtEndStopC1.u16Def_TelescopSlowMvtFoldedEndStop, (TVoid*)&gDb_ctSetNvParamMvtEndStopC1.au16Rng_TelescopSlowMvtFoldedEndStop[0], 1652, 20},
    { &gDb_ctSetNvParamMvtEndStopC1.tInf_TelescopePerfOutLimit, (TVoid*)&gDb_tNvParamMvtEndStopC1.u16TelescopePerfOutLimit, (TVoid*)&gDb_ctSetNvParamMvtEndStopC1.u16Def_TelescopePerfOutLimit, (TVoid*)&gDb_ctSetNvParamMvtEndStopC1.au16Rng_TelescopePerfOutLimit[0], 1654, 21},
    { &gDb_ctSetNvParamMvtEndStopC1.tInf_TelescopePerfOutLimitHyst, (TVoid*)&gDb_tNvParamMvtEndStopC1.u16TelescopePerfOutLimitHyst, (TVoid*)&gDb_ctSetNvParamMvtEndStopC1.u16Def_TelescopePerfOutLimitHyst, (TVoid*)&gDb_ctSetNvParamMvtEndStopC1.au16Rng_TelescopePerfOutLimitHyst[0], 1656, 22},
    { &gDb_ctSetNvParamMvtEndStopC1.tInf_TelescopePerfOutLimitSlowThres, (TVoid*)&gDb_tNvParamMvtEndStopC1.u16TelescopePerfOutLimitSlowThres, (TVoid*)&gDb_ctSetNvParamMvtEndStopC1.u16Def_TelescopePerfOutLimitSlowThres, (TVoid*)&gDb_ctSetNvParamMvtEndStopC1.au16Rng_TelescopePerfOutLimitSlowThres[0], 1658, 23}
};

const TDbVarTabNvm gDb_catVarTabNvParamAutoStopC1[8] =
{    //!< *cptInf *vpVal *cvpDataRang *cvpDataDef cu16Adr cu16ValuePos
    { &gDb_ctSetNvParamAutoStopC1.tInf_TurretRearCenterPos, (TVoid*)&gDb_tNvParamAutoStopC1.i16TurretRearCenterPos, (TVoid*)&gDb_ctSetNvParamAutoStopC1.i16Def_TurretRearCenterPos, (TVoid*)&gDb_ctSetNvParamAutoStopC1.ai16Rng_TurretRearCenterPos[0], 1812, 0},
    { &gDb_ctSetNvParamAutoStopC1.tInf_TurretFrontPositiveCenterPos, (TVoid*)&gDb_tNvParamAutoStopC1.i16TurretFrontPositiveCenterPos, (TVoid*)&gDb_ctSetNvParamAutoStopC1.i16Def_TurretFrontPositiveCenterPos, (TVoid*)&gDb_ctSetNvParamAutoStopC1.ai16Rng_TurretFrontPositiveCenterPos[0], 1814, 1},
    { &gDb_ctSetNvParamAutoStopC1.tInf_TurretFrontNegativeCenterPos, (TVoid*)&gDb_tNvParamAutoStopC1.i16TurretFrontNegativeCenterPos, (TVoid*)&gDb_ctSetNvParamAutoStopC1.i16Def_TurretFrontNegativeCenterPos, (TVoid*)&gDb_ctSetNvParamAutoStopC1.ai16Rng_TurretFrontNegativeCenterPos[0], 1816, 2},
    { &gDb_ctSetNvParamAutoStopC1.tInf_TurretCenterZoneWindow, (TVoid*)&gDb_tNvParamAutoStopC1.i16TurretCenterZoneWindow, (TVoid*)&gDb_ctSetNvParamAutoStopC1.i16Def_TurretCenterZoneWindow, (TVoid*)&gDb_ctSetNvParamAutoStopC1.ai16Rng_TurretCenterZoneWindow[0], 1818, 3},
    { &gDb_ctSetNvParamAutoStopC1.tInf_TurretCenterZoneWindowHyst, (TVoid*)&gDb_tNvParamAutoStopC1.i16TurretCenterZoneWindowHyst, (TVoid*)&gDb_ctSetNvParamAutoStopC1.i16Def_TurretCenterZoneWindowHyst, (TVoid*)&gDb_ctSetNvParamAutoStopC1.ai16Rng_TurretCenterZoneWindowHyst[0], 1820, 4},
    { &gDb_ctSetNvParamAutoStopC1.tInf_TurretCenterZoneSlowThres, (TVoid*)&gDb_tNvParamAutoStopC1.i16TurretCenterZoneSlowThres, (TVoid*)&gDb_ctSetNvParamAutoStopC1.i16Def_TurretCenterZoneSlowThres, (TVoid*)&gDb_ctSetNvParamAutoStopC1.ai16Rng_TurretCenterZoneSlowThres[0], 1822, 5},
    { &gDb_ctSetNvParamAutoStopC1.tInf_TurretCenterZoneWindowLeft, (TVoid*)&gDb_tNvParamAutoStopC1.i16TurretCenterZoneWindowLeft, (TVoid*)&gDb_ctSetNvParamAutoStopC1.i16Def_TurretCenterZoneWindowLeft, (TVoid*)&gDb_ctSetNvParamAutoStopC1.ai16Rng_TurretCenterZoneWindowLeft[0], 1824, 6},
    { &gDb_ctSetNvParamAutoStopC1.tInf_TurretCenterZoneWindowRight, (TVoid*)&gDb_tNvParamAutoStopC1.i16TurretCenterZoneWindowRight, (TVoid*)&gDb_ctSetNvParamAutoStopC1.i16Def_TurretCenterZoneWindowRight, (TVoid*)&gDb_ctSetNvParamAutoStopC1.ai16Rng_TurretCenterZoneWindowRight[0], 1826, 7}
};

const TDbVarTabRam gDb_catVarTabRamAutoStopC1[18] =
{    //!< *cptInf *vpVal *cvpDataDef 
    { &gDb_ctSetRamAutoStopC1.tInf_StopBasketRotation, (TVoid*)&gDb_tRamAutoStopC1.boStopBasketRotation, (TVoid*)&gDb_ctSetRamAutoStopC1.boDef_StopBasketRotation, (TVoid*)&gDb_ctSetRamAutoStopC1.aboRng_StopBasketRotation[0]},
    { &gDb_ctSetRamAutoStopC1.tInf_StopTurretRotation, (TVoid*)&gDb_tRamAutoStopC1.boStopTurretRotation, (TVoid*)&gDb_ctSetRamAutoStopC1.boDef_StopTurretRotation, (TVoid*)&gDb_ctSetRamAutoStopC1.aboRng_StopTurretRotation[0]},
    { &gDb_ctSetRamAutoStopC1.tInf_ReduceSpeedRotTurretClockwise, (TVoid*)&gDb_tRamAutoStopC1.boReduceSpeedRotTurretClockwise, (TVoid*)&gDb_ctSetRamAutoStopC1.boDef_ReduceSpeedRotTurretClockwise, (TVoid*)&gDb_ctSetRamAutoStopC1.aboRng_ReduceSpeedRotTurretClockwise[0]},
    { &gDb_ctSetRamAutoStopC1.tInf_ReduceSpeedRotTurretCounterClock, (TVoid*)&gDb_tRamAutoStopC1.boReduceSpeedRotTurretCounterClock, (TVoid*)&gDb_ctSetRamAutoStopC1.boDef_ReduceSpeedRotTurretCounterClock, (TVoid*)&gDb_ctSetRamAutoStopC1.aboRng_ReduceSpeedRotTurretCounterClock[0]},
    { &gDb_ctSetRamAutoStopC1.tInf_TurrentInCenterPos, (TVoid*)&gDb_tRamAutoStopC1.boTurrentInCenterPos, (TVoid*)&gDb_ctSetRamAutoStopC1.boDef_TurrentInCenterPos, (TVoid*)&gDb_ctSetRamAutoStopC1.aboRng_TurrentInCenterPos[0]},
    { &gDb_ctSetRamAutoStopC1.tInf_EnableSimuMode, (TVoid*)&gDb_tRamAutoStopC1.boEnableSimuMode, (TVoid*)&gDb_ctSetRamAutoStopC1.boDef_EnableSimuMode, (TVoid*)&gDb_ctSetRamAutoStopC1.aboRng_EnableSimuMode[0]},
    { &gDb_ctSetRamAutoStopC1.tInf_TestBasketLeftSideSensor, (TVoid*)&gDb_tRamAutoStopC1.boTestBasketLeftSideSensor, (TVoid*)&gDb_ctSetRamAutoStopC1.boDef_TestBasketLeftSideSensor, (TVoid*)&gDb_ctSetRamAutoStopC1.aboRng_TestBasketLeftSideSensor[0]},
    { &gDb_ctSetRamAutoStopC1.tInf_TestBasketRightSideSensor, (TVoid*)&gDb_tRamAutoStopC1.boTestBasketRightSideSensor, (TVoid*)&gDb_ctSetRamAutoStopC1.boDef_TestBasketRightSideSensor, (TVoid*)&gDb_ctSetRamAutoStopC1.aboRng_TestBasketRightSideSensor[0]},
    { &gDb_ctSetRamAutoStopC1.tInf_TestBasketRotCmdEnabled, (TVoid*)&gDb_tRamAutoStopC1.boTestBasketRotCmdEnabled, (TVoid*)&gDb_ctSetRamAutoStopC1.boDef_TestBasketRotCmdEnabled, (TVoid*)&gDb_ctSetRamAutoStopC1.aboRng_TestBasketRotCmdEnabled[0]},
    { &gDb_ctSetRamAutoStopC1.tInf_TestTurretAngularPosition, (TVoid*)&gDb_tRamAutoStopC1.i16TestTurretAngularPosition, (TVoid*)&gDb_ctSetRamAutoStopC1.i16Def_TestTurretAngularPosition, (TVoid*)&gDb_ctSetRamAutoStopC1.ai16Rng_TestTurretAngularPosition[0]},
    { &gDb_ctSetRamAutoStopC1.tInf_TestTurretRotCmdEnabled, (TVoid*)&gDb_tRamAutoStopC1.boTestTurretRotCmdEnabled, (TVoid*)&gDb_ctSetRamAutoStopC1.boDef_TestTurretRotCmdEnabled, (TVoid*)&gDb_ctSetRamAutoStopC1.aboRng_TestTurretRotCmdEnabled[0]},
    { &gDb_ctSetRamAutoStopC1.tInf_TurretInRearCenterPos, (TVoid*)&gDb_tRamAutoStopC1.boTurretInRearCenterPos, (TVoid*)&gDb_ctSetRamAutoStopC1.boDef_TurretInRearCenterPos, (TVoid*)&gDb_ctSetRamAutoStopC1.aboRng_TurretInRearCenterPos[0]},
    { &gDb_ctSetRamAutoStopC1.tInf_TurretInFrontPositiveCenterPos, (TVoid*)&gDb_tRamAutoStopC1.boTurretInFrontPositiveCenterPos, (TVoid*)&gDb_ctSetRamAutoStopC1.boDef_TurretInFrontPositiveCenterPos, (TVoid*)&gDb_ctSetRamAutoStopC1.aboRng_TurretInFrontPositiveCenterPos[0]},
    { &gDb_ctSetRamAutoStopC1.tInf_TurretInFrontNegativeCenterPos, (TVoid*)&gDb_tRamAutoStopC1.boTurretInFrontNegativeCenterPos, (TVoid*)&gDb_ctSetRamAutoStopC1.boDef_TurretInFrontNegativeCenterPos, (TVoid*)&gDb_ctSetRamAutoStopC1.aboRng_TurretInFrontNegativeCenterPos[0]},
    { &gDb_ctSetRamAutoStopC1.tInf_BasketInCentrerPos, (TVoid*)&gDb_tRamAutoStopC1.boBasketInCentrerPos, (TVoid*)&gDb_ctSetRamAutoStopC1.boDef_BasketInCentrerPos, (TVoid*)&gDb_ctSetRamAutoStopC1.aboRng_BasketInCentrerPos[0]},
    { &gDb_ctSetRamAutoStopC1.tInf_TurretRotationCmdEnabled, (TVoid*)&gDb_tRamAutoStopC1.boTurretRotationCmdEnabled, (TVoid*)&gDb_ctSetRamAutoStopC1.boDef_TurretRotationCmdEnabled, (TVoid*)&gDb_ctSetRamAutoStopC1.aboRng_TurretRotationCmdEnabled[0]},
    { &gDb_ctSetRamAutoStopC1.tInf_CounterStopTurretRotationDebug, (TVoid*)&gDb_tRamAutoStopC1.u8CounterStopTurretRotationDebug, (TVoid*)&gDb_ctSetRamAutoStopC1.u8Def_CounterStopTurretRotationDebug, (TVoid*)&gDb_ctSetRamAutoStopC1.au8Rng_CounterStopTurretRotationDebug[0]},
    { &gDb_ctSetRamAutoStopC1.tInf_CounterNoStopTurretRotationDebug, (TVoid*)&gDb_tRamAutoStopC1.u8CounterNoStopTurretRotationDebug, (TVoid*)&gDb_ctSetRamAutoStopC1.u8Def_CounterNoStopTurretRotationDebug, (TVoid*)&gDb_ctSetRamAutoStopC1.au8Rng_CounterNoStopTurretRotationDebug[0]}
};

const TDbVarTabRam gDb_catVarTabRamMastMeasureC1[23] =
{    //!< *cptInf *vpVal *cvpDataDef 
    { &gDb_ctSetRamMastMeasureC1.tInf_Fonction_Active, (TVoid*)&gDb_tRamMastMeasureC1.boFonction_Active, (TVoid*)&gDb_ctSetRamMastMeasureC1.boDef_Fonction_Active, (TVoid*)&gDb_ctSetRamMastMeasureC1.aboRng_Fonction_Active[0]},
    { &gDb_ctSetRamMastMeasureC1.tInf_Commande_Neutre, (TVoid*)&gDb_tRamMastMeasureC1.boCommande_Neutre, (TVoid*)&gDb_ctSetRamMastMeasureC1.boDef_Commande_Neutre, (TVoid*)&gDb_ctSetRamMastMeasureC1.aboRng_Commande_Neutre[0]},
    { &gDb_ctSetRamMastMeasureC1.tInf_Authorize_Driving, (TVoid*)&gDb_tRamMastMeasureC1.boAuthorize_Driving, (TVoid*)&gDb_ctSetRamMastMeasureC1.boDef_Authorize_Driving, (TVoid*)&gDb_ctSetRamMastMeasureC1.aboRng_Authorize_Driving[0]},
    { &gDb_ctSetRamMastMeasureC1.tInf_Folded_Position_Mast, (TVoid*)&gDb_tRamMastMeasureC1.boFolded_Position_Mast, (TVoid*)&gDb_ctSetRamMastMeasureC1.boDef_Folded_Position_Mast, (TVoid*)&gDb_ctSetRamMastMeasureC1.aboRng_Folded_Position_Mast[0]},
    { &gDb_ctSetRamMastMeasureC1.tInf_Stop_Movement_By_Mast, (TVoid*)&gDb_tRamMastMeasureC1.boStop_Movement_By_Mast, (TVoid*)&gDb_ctSetRamMastMeasureC1.boDef_Stop_Movement_By_Mast, (TVoid*)&gDb_ctSetRamMastMeasureC1.aboRng_Stop_Movement_By_Mast[0]},
    { &gDb_ctSetRamMastMeasureC1.tInf_RazDistanceTraveledButton, (TVoid*)&gDb_tRamMastMeasureC1.boRazDistanceTraveledButton, (TVoid*)&gDb_ctSetRamMastMeasureC1.boDef_RazDistanceTraveledButton, (TVoid*)&gDb_ctSetRamMastMeasureC1.aboRng_RazDistanceTraveledButton[0]},
    { &gDb_ctSetRamMastMeasureC1.tInf_DistanceTraveledMm, (TVoid*)&gDb_tRamMastMeasureC1.i32DistanceTraveledMm, (TVoid*)&gDb_ctSetRamMastMeasureC1.i32Def_DistanceTraveledMm, (TVoid*)&gDb_ctSetRamMastMeasureC1.ai32Rng_DistanceTraveledMm[0]},
    { &gDb_ctSetRamMastMeasureC1.tInf_DeltaMinMaxEncodeurValue, (TVoid*)&gDb_tRamMastMeasureC1.u32DeltaMinMaxEncodeurValue, (TVoid*)&gDb_ctSetRamMastMeasureC1.u32Def_DeltaMinMaxEncodeurValue, (TVoid*)&gDb_ctSetRamMastMeasureC1.au32Rng_DeltaMinMaxEncodeurValue[0]},
    { &gDb_ctSetRamMastMeasureC1.tInf_EncodeurMastCentimeterOffset, (TVoid*)&gDb_tRamMastMeasureC1.u16EncodeurMastCentimeterOffset, (TVoid*)&gDb_ctSetRamMastMeasureC1.u16Def_EncodeurMastCentimeterOffset, (TVoid*)&gDb_ctSetRamMastMeasureC1.au16Rng_EncodeurMastCentimeterOffset[0]},
    { &gDb_ctSetRamMastMeasureC1.tInf_EncodeurMastMeasureCentimeter, (TVoid*)&gDb_tRamMastMeasureC1.u16EncodeurMastMeasureCentimeter, (TVoid*)&gDb_ctSetRamMastMeasureC1.u16Def_EncodeurMastMeasureCentimeter, (TVoid*)&gDb_ctSetRamMastMeasureC1.au16Rng_EncodeurMastMeasureCentimeter[0]},
    { &gDb_ctSetRamMastMeasureC1.tInf_NoMovementIsDuringAndNeutralCmd, (TVoid*)&gDb_tRamMastMeasureC1.boNoMovementIsDuringAndNeutralCmd, (TVoid*)&gDb_ctSetRamMastMeasureC1.boDef_NoMovementIsDuringAndNeutralCmd, (TVoid*)&gDb_ctSetRamMastMeasureC1.aboRng_NoMovementIsDuringAndNeutralCmd[0]},
    { &gDb_ctSetRamMastMeasureC1.tInf_ScalingJoyMatTelescope, (TVoid*)&gDb_tRamMastMeasureC1.i16ScalingJoyMatTelescope, (TVoid*)&gDb_ctSetRamMastMeasureC1.i16Def_ScalingJoyMatTelescope, (TVoid*)&gDb_ctSetRamMastMeasureC1.ai16Rng_ScalingJoyMatTelescope[0]},
    { &gDb_ctSetRamMastMeasureC1.tInf_TimeWithMastNotFolded, (TVoid*)&gDb_tRamMastMeasureC1.u32TimeWithMastNotFolded, (TVoid*)&gDb_ctSetRamMastMeasureC1.u32Def_TimeWithMastNotFolded, (TVoid*)&gDb_ctSetRamMastMeasureC1.au32Rng_TimeWithMastNotFolded[0]},
    { &gDb_ctSetRamMastMeasureC1.tInf_DownAxleOscillantForMast, (TVoid*)&gDb_tRamMastMeasureC1.boDownAxleOscillantForMast, (TVoid*)&gDb_ctSetRamMastMeasureC1.boDef_DownAxleOscillantForMast, (TVoid*)&gDb_ctSetRamMastMeasureC1.aboRng_DownAxleOscillantForMast[0]},
    { &gDb_ctSetRamMastMeasureC1.tInf_VisibleDistanceTraveledMat, (TVoid*)&gDb_tRamMastMeasureC1.boVisibleDistanceTraveledMat, (TVoid*)&gDb_ctSetRamMastMeasureC1.boDef_VisibleDistanceTraveledMat, (TVoid*)&gDb_ctSetRamMastMeasureC1.aboRng_VisibleDistanceTraveledMat[0]},
    { &gDb_ctSetRamMastMeasureC1.tInf_MastInUpperPosition, (TVoid*)&gDb_tRamMastMeasureC1.boMastInUpperPosition, (TVoid*)&gDb_ctSetRamMastMeasureC1.boDef_MastInUpperPosition, (TVoid*)&gDb_ctSetRamMastMeasureC1.aboRng_MastInUpperPosition[0]},
    { &gDb_ctSetRamMastMeasureC1.tInf_MastPanthoInFoldedPosition, (TVoid*)&gDb_tRamMastMeasureC1.boMastPanthoInFoldedPosition, (TVoid*)&gDb_ctSetRamMastMeasureC1.boDef_MastPanthoInFoldedPosition, (TVoid*)&gDb_ctSetRamMastMeasureC1.aboRng_MastPanthoInFoldedPosition[0]},
    { &gDb_ctSetRamMastMeasureC1.tInf_ValveInDownPosition, (TVoid*)&gDb_tRamMastMeasureC1.boValveInDownPosition, (TVoid*)&gDb_ctSetRamMastMeasureC1.boDef_ValveInDownPosition, (TVoid*)&gDb_ctSetRamMastMeasureC1.aboRng_ValveInDownPosition[0]},
    { &gDb_ctSetRamMastMeasureC1.tInf_PostInterdictionMastSNCF, (TVoid*)&gDb_tRamMastMeasureC1.boPostInterdictionMastSNCF, (TVoid*)&gDb_ctSetRamMastMeasureC1.boDef_PostInterdictionMastSNCF, (TVoid*)&gDb_ctSetRamMastMeasureC1.aboRng_PostInterdictionMastSNCF[0]},
    { &gDb_ctSetRamMastMeasureC1.tInf_MemoFirstValidCycleMast, (TVoid*)&gDb_tRamMastMeasureC1.boMemoFirstValidCycleMast, (TVoid*)&gDb_ctSetRamMastMeasureC1.boDef_MemoFirstValidCycleMast, (TVoid*)&gDb_ctSetRamMastMeasureC1.aboRng_MemoFirstValidCycleMast[0]},
    { &gDb_ctSetRamMastMeasureC1.tInf_ContactMastAutorisationOfMvts, (TVoid*)&gDb_tRamMastMeasureC1.boContactMastAutorisationOfMvts, (TVoid*)&gDb_ctSetRamMastMeasureC1.boDef_ContactMastAutorisationOfMvts, (TVoid*)&gDb_ctSetRamMastMeasureC1.aboRng_ContactMastAutorisationOfMvts[0]},
    { &gDb_ctSetRamMastMeasureC1.tInf_InterdictionOfNacelleTurretPost, (TVoid*)&gDb_tRamMastMeasureC1.boInterdictionOfNacelleTurretPost, (TVoid*)&gDb_ctSetRamMastMeasureC1.boDef_InterdictionOfNacelleTurretPost, (TVoid*)&gDb_ctSetRamMastMeasureC1.aboRng_InterdictionOfNacelleTurretPost[0]},
    { &gDb_ctSetRamMastMeasureC1.tInf_PictoWarningFirstValidCycleMast, (TVoid*)&gDb_tRamMastMeasureC1.boPictoWarningFirstValidCycleMast, (TVoid*)&gDb_ctSetRamMastMeasureC1.boDef_PictoWarningFirstValidCycleMast, (TVoid*)&gDb_ctSetRamMastMeasureC1.aboRng_PictoWarningFirstValidCycleMast[0]}
};

const TDbVarTabNvm gDb_catVarTabNvParamMastC1[8] =
{    //!< *cptInf *vpVal *cvpDataRang *cvpDataDef cu16Adr cu16ValuePos
    { &gDb_ctSetNvParamMastC1.tInf_Offset_Mast_Centimeter, (TVoid*)&gDb_tNvParamMastC1.i16Offset_Mast_Centimeter, (TVoid*)&gDb_ctSetNvParamMastC1.i16Def_Offset_Mast_Centimeter, (TVoid*)&gDb_ctSetNvParamMastC1.ai16Rng_Offset_Mast_Centimeter[0], 2012, 0},
    { &gDb_ctSetNvParamMastC1.tInf_FoldedMastThres, (TVoid*)&gDb_tNvParamMastC1.i16FoldedMastThres, (TVoid*)&gDb_ctSetNvParamMastC1.i16Def_FoldedMastThres, (TVoid*)&gDb_ctSetNvParamMastC1.ai16Rng_FoldedMastThres[0], 2014, 1},
    { &gDb_ctSetNvParamMastC1.tInf_FoldedMastHyst, (TVoid*)&gDb_tNvParamMastC1.i16FoldedMastHyst, (TVoid*)&gDb_ctSetNvParamMastC1.i16Def_FoldedMastHyst, (TVoid*)&gDb_ctSetNvParamMastC1.ai16Rng_FoldedMastHyst[0], 2016, 2},
    { &gDb_ctSetNvParamMastC1.tInf_MinValueEncodeurMast, (TVoid*)&gDb_tNvParamMastC1.u32MinValueEncodeurMast, (TVoid*)&gDb_ctSetNvParamMastC1.u32Def_MinValueEncodeurMast, (TVoid*)&gDb_ctSetNvParamMastC1.au32Rng_MinValueEncodeurMast[0], 2018, 3},
    { &gDb_ctSetNvParamMastC1.tInf_MaxValueEncodeurMast, (TVoid*)&gDb_tNvParamMastC1.u32MaxValueEncodeurMast, (TVoid*)&gDb_ctSetNvParamMastC1.u32Def_MaxValueEncodeurMast, (TVoid*)&gDb_ctSetNvParamMastC1.au32Rng_MaxValueEncodeurMast[0], 2022, 4},
    { &gDb_ctSetNvParamMastC1.tInf_MinCentimeterEncodeurMast, (TVoid*)&gDb_tNvParamMastC1.u16MinCentimeterEncodeurMast, (TVoid*)&gDb_ctSetNvParamMastC1.u16Def_MinCentimeterEncodeurMast, (TVoid*)&gDb_ctSetNvParamMastC1.au16Rng_MinCentimeterEncodeurMast[0], 2026, 5},
    { &gDb_ctSetNvParamMastC1.tInf_MaxCentimeterEncodeurMast, (TVoid*)&gDb_tNvParamMastC1.u16MaxCentimeterEncodeurMast, (TVoid*)&gDb_ctSetNvParamMastC1.u16Def_MaxCentimeterEncodeurMast, (TVoid*)&gDb_ctSetNvParamMastC1.au16Rng_MaxCentimeterEncodeurMast[0], 2028, 6},
    { &gDb_ctSetNvParamMastC1.tInf_MastDisplayRefreshCycleTime, (TVoid*)&gDb_tNvParamMastC1.u32MastDisplayRefreshCycleTime, (TVoid*)&gDb_ctSetNvParamMastC1.u32Def_MastDisplayRefreshCycleTime, (TVoid*)&gDb_ctSetNvParamMastC1.au32Rng_MastDisplayRefreshCycleTime[0], 2030, 7}
};

const TDbVarTabRam gDb_catVarTabRamEvision7C1[16] =
{    //!< *cptInf *vpVal *cvpDataDef 
    { &gDb_ctSetRamEvision7C1.tInf_gActivateMeasuringMast, (TVoid*)&gDb_tRamEvision7C1.bogActivateMeasuringMast, (TVoid*)&gDb_ctSetRamEvision7C1.boDef_gActivateMeasuringMast, (TVoid*)&gDb_ctSetRamEvision7C1.aboRng_gActivateMeasuringMast[0]},
    { &gDb_ctSetRamEvision7C1.tInf_gButtonCalibMinMastMeasure, (TVoid*)&gDb_tRamEvision7C1.bogButtonCalibMinMastMeasure, (TVoid*)&gDb_ctSetRamEvision7C1.boDef_gButtonCalibMinMastMeasure, (TVoid*)&gDb_ctSetRamEvision7C1.aboRng_gButtonCalibMinMastMeasure[0]},
    { &gDb_ctSetRamEvision7C1.tInf_gButtonCalibMaxMastMeasure, (TVoid*)&gDb_tRamEvision7C1.bogButtonCalibMaxMastMeasure, (TVoid*)&gDb_ctSetRamEvision7C1.boDef_gButtonCalibMaxMastMeasure, (TVoid*)&gDb_ctSetRamEvision7C1.aboRng_gButtonCalibMaxMastMeasure[0]},
    { &gDb_ctSetRamEvision7C1.tInf_SavePosEncodeurMastMeasureButton, (TVoid*)&gDb_tRamEvision7C1.boSavePosEncodeurMastMeasureButton, (TVoid*)&gDb_ctSetRamEvision7C1.boDef_SavePosEncodeurMastMeasureButton, (TVoid*)&gDb_ctSetRamEvision7C1.aboRng_SavePosEncodeurMastMeasureButton[0]},
    { &gDb_ctSetRamEvision7C1.tInf_RazDistanceTraveledMastMeasure, (TVoid*)&gDb_tRamEvision7C1.boRazDistanceTraveledMastMeasure, (TVoid*)&gDb_ctSetRamEvision7C1.boDef_RazDistanceTraveledMastMeasure, (TVoid*)&gDb_ctSetRamEvision7C1.aboRng_RazDistanceTraveledMastMeasure[0]},
    { &gDb_ctSetRamEvision7C1.tInf_gSerialNumber, (TVoid*)&gDb_tRamEvision7C1.bogSerialNumber, (TVoid*)&gDb_ctSetRamEvision7C1.boDef_gSerialNumber, (TVoid*)&gDb_ctSetRamEvision7C1.aboRng_gSerialNumber[0]},
    { &gDb_ctSetRamEvision7C1.tInf_gBPBasketValidate, (TVoid*)&gDb_tRamEvision7C1.bogBPBasketValidate, (TVoid*)&gDb_ctSetRamEvision7C1.boDef_gBPBasketValidate, (TVoid*)&gDb_ctSetRamEvision7C1.aboRng_gBPBasketValidate[0]},
    { &gDb_ctSetRamEvision7C1.tInf_gKeyFilterOverload, (TVoid*)&gDb_tRamEvision7C1.bogKeyFilterOverload, (TVoid*)&gDb_ctSetRamEvision7C1.boDef_gKeyFilterOverload, (TVoid*)&gDb_ctSetRamEvision7C1.aboRng_gKeyFilterOverload[0]},
    { &gDb_ctSetRamEvision7C1.tInf_gKeyNextMode, (TVoid*)&gDb_tRamEvision7C1.bogKeyNextMode, (TVoid*)&gDb_ctSetRamEvision7C1.boDef_gKeyNextMode, (TVoid*)&gDb_ctSetRamEvision7C1.aboRng_gKeyNextMode[0]},
    { &gDb_ctSetRamEvision7C1.tInf_gKeyPrevMode, (TVoid*)&gDb_tRamEvision7C1.bogKeyPrevMode, (TVoid*)&gDb_ctSetRamEvision7C1.boDef_gKeyPrevMode, (TVoid*)&gDb_ctSetRamEvision7C1.aboRng_gKeyPrevMode[0]},
    { &gDb_ctSetRamEvision7C1.tInf_gKeySignalDanger, (TVoid*)&gDb_tRamEvision7C1.bogKeySignalDanger, (TVoid*)&gDb_ctSetRamEvision7C1.boDef_gKeySignalDanger, (TVoid*)&gDb_ctSetRamEvision7C1.aboRng_gKeySignalDanger[0]},
    { &gDb_ctSetRamEvision7C1.tInf_gKeyFlashLightON, (TVoid*)&gDb_tRamEvision7C1.bogKeyFlashLightON, (TVoid*)&gDb_ctSetRamEvision7C1.boDef_gKeyFlashLightON, (TVoid*)&gDb_ctSetRamEvision7C1.aboRng_gKeyFlashLightON[0]},
    { &gDb_ctSetRamEvision7C1.tInf_gKeyCalibMastMin, (TVoid*)&gDb_tRamEvision7C1.bogKeyCalibMastMin, (TVoid*)&gDb_ctSetRamEvision7C1.boDef_gKeyCalibMastMin, (TVoid*)&gDb_ctSetRamEvision7C1.aboRng_gKeyCalibMastMin[0]},
    { &gDb_ctSetRamEvision7C1.tInf_gKeyCalibMastMax, (TVoid*)&gDb_tRamEvision7C1.bogKeyCalibMastMax, (TVoid*)&gDb_ctSetRamEvision7C1.boDef_gKeyCalibMastMax, (TVoid*)&gDb_ctSetRamEvision7C1.aboRng_gKeyCalibMastMax[0]},
    { &gDb_ctSetRamEvision7C1.tInf_gKeyCalibMastValid, (TVoid*)&gDb_tRamEvision7C1.bogKeyCalibMastValid, (TVoid*)&gDb_ctSetRamEvision7C1.boDef_gKeyCalibMastValid, (TVoid*)&gDb_ctSetRamEvision7C1.aboRng_gKeyCalibMastValid[0]},
    { &gDb_ctSetRamEvision7C1.tInf_gKeyGeneratorActivate, (TVoid*)&gDb_tRamEvision7C1.bogKeyGeneratorActivate, (TVoid*)&gDb_ctSetRamEvision7C1.boDef_gKeyGeneratorActivate, (TVoid*)&gDb_ctSetRamEvision7C1.aboRng_gKeyGeneratorActivate[0]}
};

const TDbVarTabNvm gDb_catVarTabNvParamAlarmC1[18] =
{    //!< *cptInf *vpVal *cvpDataRang *cvpDataDef cu16Adr cu16ValuePos
    { &gDb_ctSetNvParamAlarmC1.tInf_BypassPressureThres, (TVoid*)&gDb_tNvParamAlarmC1.i16BypassPressureThres, (TVoid*)&gDb_ctSetNvParamAlarmC1.i16Def_BypassPressureThres, (TVoid*)&gDb_ctSetNvParamAlarmC1.ai16Rng_BypassPressureThres[0], 2212, 0},
    { &gDb_ctSetNvParamAlarmC1.tInf_TelescopeInToleranceInductive, (TVoid*)&gDb_tNvParamAlarmC1.i16TelescopeInToleranceInductive, (TVoid*)&gDb_ctSetNvParamAlarmC1.i16Def_TelescopeInToleranceInductive, (TVoid*)&gDb_ctSetNvParamAlarmC1.ai16Rng_TelescopeInToleranceInductive[0], 2214, 1},
    { &gDb_ctSetNvParamAlarmC1.tInf_TelescopeToleranceNoMovement, (TVoid*)&gDb_tNvParamAlarmC1.i16TelescopeToleranceNoMovement, (TVoid*)&gDb_ctSetNvParamAlarmC1.i16Def_TelescopeToleranceNoMovement, (TVoid*)&gDb_ctSetNvParamAlarmC1.ai16Rng_TelescopeToleranceNoMovement[0], 2216, 2},
    { &gDb_ctSetNvParamAlarmC1.tInf_TelescopeToleranceChannels, (TVoid*)&gDb_tNvParamAlarmC1.i16TelescopeToleranceChannels, (TVoid*)&gDb_ctSetNvParamAlarmC1.i16Def_TelescopeToleranceChannels, (TVoid*)&gDb_ctSetNvParamAlarmC1.ai16Rng_TelescopeToleranceChannels[0], 2218, 3},
    { &gDb_ctSetNvParamAlarmC1.tInf_AlternatorRegimeMaxThres, (TVoid*)&gDb_tNvParamAlarmC1.i32AlternatorRegimeMaxThres, (TVoid*)&gDb_ctSetNvParamAlarmC1.i32Def_AlternatorRegimeMaxThres, (TVoid*)&gDb_ctSetNvParamAlarmC1.ai32Rng_AlternatorRegimeMaxThres[0], 2220, 4},
    { &gDb_ctSetNvParamAlarmC1.tInf_BatteryVoltageMinThres, (TVoid*)&gDb_tNvParamAlarmC1.u16BatteryVoltageMinThres, (TVoid*)&gDb_ctSetNvParamAlarmC1.u16Def_BatteryVoltageMinThres, (TVoid*)&gDb_ctSetNvParamAlarmC1.au16Rng_BatteryVoltageMinThres[0], 2224, 5},
    { &gDb_ctSetNvParamAlarmC1.tInf_MinAlarmJoyDeltaArmPrctBat, (TVoid*)&gDb_tNvParamAlarmC1.u8MinAlarmJoyDeltaArmPrctBat, (TVoid*)&gDb_ctSetNvParamAlarmC1.u8Def_MinAlarmJoyDeltaArmPrctBat, (TVoid*)&gDb_ctSetNvParamAlarmC1.au8Rng_MinAlarmJoyDeltaArmPrctBat[0], 2226, 6},
    { &gDb_ctSetNvParamAlarmC1.tInf_MaxAlarmJoyDeltaArmPrctBat, (TVoid*)&gDb_tNvParamAlarmC1.u8MaxAlarmJoyDeltaArmPrctBat, (TVoid*)&gDb_ctSetNvParamAlarmC1.u8Def_MaxAlarmJoyDeltaArmPrctBat, (TVoid*)&gDb_ctSetNvParamAlarmC1.au8Rng_MaxAlarmJoyDeltaArmPrctBat[0], 2227, 7},
    { &gDb_ctSetNvParamAlarmC1.tInf_MinAlarmJoyArrowArmPrctBat, (TVoid*)&gDb_tNvParamAlarmC1.u8MinAlarmJoyArrowArmPrctBat, (TVoid*)&gDb_ctSetNvParamAlarmC1.u8Def_MinAlarmJoyArrowArmPrctBat, (TVoid*)&gDb_ctSetNvParamAlarmC1.au8Rng_MinAlarmJoyArrowArmPrctBat[0], 2228, 8},
    { &gDb_ctSetNvParamAlarmC1.tInf_MaxAlarmJoyArrowArmPrctBat, (TVoid*)&gDb_tNvParamAlarmC1.u8MaxAlarmJoyArrowArmPrctBat, (TVoid*)&gDb_ctSetNvParamAlarmC1.u8Def_MaxAlarmJoyArrowArmPrctBat, (TVoid*)&gDb_ctSetNvParamAlarmC1.au8Rng_MaxAlarmJoyArrowArmPrctBat[0], 2229, 9},
    { &gDb_ctSetNvParamAlarmC1.tInf_MinAlarmJoyTelescopeArmPrctBat, (TVoid*)&gDb_tNvParamAlarmC1.u8MinAlarmJoyTelescopeArmPrctBat, (TVoid*)&gDb_ctSetNvParamAlarmC1.u8Def_MinAlarmJoyTelescopeArmPrctBat, (TVoid*)&gDb_ctSetNvParamAlarmC1.au8Rng_MinAlarmJoyTelescopeArmPrctBat[0], 2230, 10},
    { &gDb_ctSetNvParamAlarmC1.tInf_MaxAlarmJoyTelescopeArmPrctBat, (TVoid*)&gDb_tNvParamAlarmC1.u8MaxAlarmJoyTelescopeArmPrctBat, (TVoid*)&gDb_ctSetNvParamAlarmC1.u8Def_MaxAlarmJoyTelescopeArmPrctBat, (TVoid*)&gDb_ctSetNvParamAlarmC1.au8Rng_MaxAlarmJoyTelescopeArmPrctBat[0], 2231, 11},
    { &gDb_ctSetNvParamAlarmC1.tInf_MinAlarmJoyRotTurretArmPrctBat, (TVoid*)&gDb_tNvParamAlarmC1.u8MinAlarmJoyRotTurretArmPrctBat, (TVoid*)&gDb_ctSetNvParamAlarmC1.u8Def_MinAlarmJoyRotTurretArmPrctBat, (TVoid*)&gDb_ctSetNvParamAlarmC1.au8Rng_MinAlarmJoyRotTurretArmPrctBat[0], 2232, 12},
    { &gDb_ctSetNvParamAlarmC1.tInf_MaxAlarmJoyRotTurretArmPrctBat, (TVoid*)&gDb_tNvParamAlarmC1.u8MaxAlarmJoyRotTurretArmPrctBat, (TVoid*)&gDb_ctSetNvParamAlarmC1.u8Def_MaxAlarmJoyRotTurretArmPrctBat, (TVoid*)&gDb_ctSetNvParamAlarmC1.au8Rng_MaxAlarmJoyRotTurretArmPrctBat[0], 2233, 13},
    { &gDb_ctSetNvParamAlarmC1.tInf_MinAlarmJoyAdvancementPrctBat, (TVoid*)&gDb_tNvParamAlarmC1.u8MinAlarmJoyAdvancementPrctBat, (TVoid*)&gDb_ctSetNvParamAlarmC1.u8Def_MinAlarmJoyAdvancementPrctBat, (TVoid*)&gDb_ctSetNvParamAlarmC1.au8Rng_MinAlarmJoyAdvancementPrctBat[0], 2234, 14},
    { &gDb_ctSetNvParamAlarmC1.tInf_MaxAlarmJoyAdvancementPrctBat, (TVoid*)&gDb_tNvParamAlarmC1.u8MaxAlarmJoyAdvancementPrctBat, (TVoid*)&gDb_ctSetNvParamAlarmC1.u8Def_MaxAlarmJoyAdvancementPrctBat, (TVoid*)&gDb_ctSetNvParamAlarmC1.au8Rng_MaxAlarmJoyAdvancementPrctBat[0], 2235, 15},
    { &gDb_ctSetNvParamAlarmC1.tInf_TimeBypassFault, (TVoid*)&gDb_tNvParamAlarmC1.u16TimeBypassFault, (TVoid*)&gDb_ctSetNvParamAlarmC1.u16Def_TimeBypassFault, (TVoid*)&gDb_ctSetNvParamAlarmC1.au16Rng_TimeBypassFault[0], 2236, 16},
    { &gDb_ctSetNvParamAlarmC1.tInf_cptTimeTestBypassMax, (TVoid*)&gDb_tNvParamAlarmC1.u16cptTimeTestBypassMax, (TVoid*)&gDb_ctSetNvParamAlarmC1.u16Def_cptTimeTestBypassMax, (TVoid*)&gDb_ctSetNvParamAlarmC1.au16Rng_cptTimeTestBypassMax[0], 2238, 17}
};

const TDbVarTabRam gDb_catVarTabRamEcuC1RcvFailluresFromC0[10] =
{    //!< *cptInf *vpVal *cvpDataDef 
    { &gDb_ctSetRamEcuC1RcvFailluresFromC0.tInf_Dm_Swi_Dbl_NcNo_Inc_FrameRot, (TVoid*)&gDb_tRamEcuC1RcvFailluresFromC0.boDm_Swi_Dbl_NcNo_Inc_FrameRot, (TVoid*)&gDb_ctSetRamEcuC1RcvFailluresFromC0.boDef_Dm_Swi_Dbl_NcNo_Inc_FrameRot, (TVoid*)&gDb_ctSetRamEcuC1RcvFailluresFromC0.aboRng_Dm_Swi_Dbl_NcNo_Inc_FrameRot[0]},
    { &gDb_ctSetRamEcuC1RcvFailluresFromC0.tInf_Dm_Turret_Sensor_Fault, (TVoid*)&gDb_tRamEcuC1RcvFailluresFromC0.boDm_Turret_Sensor_Fault, (TVoid*)&gDb_ctSetRamEcuC1RcvFailluresFromC0.boDef_Dm_Turret_Sensor_Fault, (TVoid*)&gDb_ctSetRamEcuC1RcvFailluresFromC0.aboRng_Dm_Turret_Sensor_Fault[0]},
    { &gDb_ctSetRamEcuC1RcvFailluresFromC0.tInf_EvParkBrakeAxleOscillantFault, (TVoid*)&gDb_tRamEcuC1RcvFailluresFromC0.boEvParkBrakeAxleOscillantFault, (TVoid*)&gDb_ctSetRamEcuC1RcvFailluresFromC0.boDef_EvParkBrakeAxleOscillantFault, (TVoid*)&gDb_ctSetRamEcuC1RcvFailluresFromC0.aboRng_EvParkBrakeAxleOscillantFault[0]},
    { &gDb_ctSetRamEcuC1RcvFailluresFromC0.tInf_EvParkBrakeAxleFixeFault, (TVoid*)&gDb_tRamEcuC1RcvFailluresFromC0.boEvParkBrakeAxleFixeFault, (TVoid*)&gDb_ctSetRamEcuC1RcvFailluresFromC0.boDef_EvParkBrakeAxleFixeFault, (TVoid*)&gDb_ctSetRamEcuC1RcvFailluresFromC0.aboRng_EvParkBrakeAxleFixeFault[0]},
    { &gDb_ctSetRamEcuC1RcvFailluresFromC0.tInf_EvServiceBrakeAxleOscillantFault, (TVoid*)&gDb_tRamEcuC1RcvFailluresFromC0.boEvServiceBrakeAxleOscillantFault, (TVoid*)&gDb_ctSetRamEcuC1RcvFailluresFromC0.boDef_EvServiceBrakeAxleOscillantFault, (TVoid*)&gDb_ctSetRamEcuC1RcvFailluresFromC0.aboRng_EvServiceBrakeAxleOscillantFault[0]},
    { &gDb_ctSetRamEcuC1RcvFailluresFromC0.tInf_EvServiceBrakeAxleFixeFault, (TVoid*)&gDb_tRamEcuC1RcvFailluresFromC0.boEvServiceBrakeAxleFixeFault, (TVoid*)&gDb_ctSetRamEcuC1RcvFailluresFromC0.boDef_EvServiceBrakeAxleFixeFault, (TVoid*)&gDb_ctSetRamEcuC1RcvFailluresFromC0.aboRng_EvServiceBrakeAxleFixeFault[0]},
    { &gDb_ctSetRamEcuC1RcvFailluresFromC0.tInf_EvServiceBrakeTrackFault, (TVoid*)&gDb_tRamEcuC1RcvFailluresFromC0.boEvServiceBrakeTrackFault, (TVoid*)&gDb_ctSetRamEcuC1RcvFailluresFromC0.boDef_EvServiceBrakeTrackFault, (TVoid*)&gDb_ctSetRamEcuC1RcvFailluresFromC0.aboRng_EvServiceBrakeTrackFault[0]},
    { &gDb_ctSetRamEcuC1RcvFailluresFromC0.tInf_Rm_Com_Can_Radio_Loss, (TVoid*)&gDb_tRamEcuC1RcvFailluresFromC0.boRm_Com_Can_Radio_Loss, (TVoid*)&gDb_ctSetRamEcuC1RcvFailluresFromC0.boDef_Rm_Com_Can_Radio_Loss, (TVoid*)&gDb_ctSetRamEcuC1RcvFailluresFromC0.aboRng_Rm_Com_Can_Radio_Loss[0]},
    { &gDb_ctSetRamEcuC1RcvFailluresFromC0.tInf_Ev2ndParkBrakeAxleFixeFault, (TVoid*)&gDb_tRamEcuC1RcvFailluresFromC0.boEv2ndParkBrakeAxleFixeFault, (TVoid*)&gDb_ctSetRamEcuC1RcvFailluresFromC0.boDef_Ev2ndParkBrakeAxleFixeFault, (TVoid*)&gDb_ctSetRamEcuC1RcvFailluresFromC0.aboRng_Ev2ndParkBrakeAxleFixeFault[0]},
    { &gDb_ctSetRamEcuC1RcvFailluresFromC0.tInf_Ev2ndParkBrakeAxleOsciFault, (TVoid*)&gDb_tRamEcuC1RcvFailluresFromC0.boEv2ndParkBrakeAxleOsciFault, (TVoid*)&gDb_ctSetRamEcuC1RcvFailluresFromC0.boDef_Ev2ndParkBrakeAxleOsciFault, (TVoid*)&gDb_ctSetRamEcuC1RcvFailluresFromC0.aboRng_Ev2ndParkBrakeAxleOsciFault[0]}
};

const TDbVarTabRam gDb_catVarTabRamData4C1RcvFromC0[27] =
{    //!< *cptInf *vpVal *cvpDataDef 
    { &gDb_ctSetRamData4C1RcvFromC0.tInf_StopAggravantMovements, (TVoid*)&gDb_tRamData4C1RcvFromC0.boStopAggravantMovements, (TVoid*)&gDb_ctSetRamData4C1RcvFromC0.boDef_StopAggravantMovements, (TVoid*)&gDb_ctSetRamData4C1RcvFromC0.aboRng_StopAggravantMovements[0]},
    { &gDb_ctSetRamData4C1RcvFromC0.tInf_TurretPostorRadoPostOn, (TVoid*)&gDb_tRamData4C1RcvFromC0.boTurretPostorRadoPostOn, (TVoid*)&gDb_ctSetRamData4C1RcvFromC0.boDef_TurretPostorRadoPostOn, (TVoid*)&gDb_ctSetRamData4C1RcvFromC0.aboRng_TurretPostorRadoPostOn[0]},
    { &gDb_ctSetRamData4C1RcvFromC0.tInf_MotorAccelerated, (TVoid*)&gDb_tRamData4C1RcvFromC0.boMotorAccelerated, (TVoid*)&gDb_ctSetRamData4C1RcvFromC0.boDef_MotorAccelerated, (TVoid*)&gDb_ctSetRamData4C1RcvFromC0.aboRng_MotorAccelerated[0]},
    { &gDb_ctSetRamData4C1RcvFromC0.tInf_RadioPostSelectorOn, (TVoid*)&gDb_tRamData4C1RcvFromC0.boRadioPostSelectorOn, (TVoid*)&gDb_ctSetRamData4C1RcvFromC0.boDef_RadioPostSelectorOn, (TVoid*)&gDb_ctSetRamData4C1RcvFromC0.aboRng_RadioPostSelectorOn[0]},
    { &gDb_ctSetRamData4C1RcvFromC0.tInf_SlopeHighWithWorkOnCrawler, (TVoid*)&gDb_tRamData4C1RcvFromC0.boSlopeHighWithWorkOnCrawler, (TVoid*)&gDb_ctSetRamData4C1RcvFromC0.boDef_SlopeHighWithWorkOnCrawler, (TVoid*)&gDb_ctSetRamData4C1RcvFromC0.aboRng_SlopeHighWithWorkOnCrawler[0]},
    { &gDb_ctSetRamData4C1RcvFromC0.tInf_ErrorActiveOnC0, (TVoid*)&gDb_tRamData4C1RcvFromC0.boErrorActiveOnC0, (TVoid*)&gDb_ctSetRamData4C1RcvFromC0.boDef_ErrorActiveOnC0, (TVoid*)&gDb_ctSetRamData4C1RcvFromC0.aboRng_ErrorActiveOnC0[0]},
    { &gDb_ctSetRamData4C1RcvFromC0.tInf_RailWorkMultiLaneMode, (TVoid*)&gDb_tRamData4C1RcvFromC0.boRailWorkMultiLaneMode, (TVoid*)&gDb_ctSetRamData4C1RcvFromC0.boDef_RailWorkMultiLaneMode, (TVoid*)&gDb_ctSetRamData4C1RcvFromC0.aboRng_RailWorkMultiLaneMode[0]},
    { &gDb_ctSetRamData4C1RcvFromC0.tInf_TestFrance, (TVoid*)&gDb_tRamData4C1RcvFromC0.boTestFrance, (TVoid*)&gDb_ctSetRamData4C1RcvFromC0.boDef_TestFrance, (TVoid*)&gDb_ctSetRamData4C1RcvFromC0.aboRng_TestFrance[0]},
    { &gDb_ctSetRamData4C1RcvFromC0.tInf_WhiteLightAV15746Command, (TVoid*)&gDb_tRamData4C1RcvFromC0.boWhiteLightAV15746Command, (TVoid*)&gDb_ctSetRamData4C1RcvFromC0.boDef_WhiteLightAV15746Command, (TVoid*)&gDb_ctSetRamData4C1RcvFromC0.aboRng_WhiteLightAV15746Command[0]},
    { &gDb_ctSetRamData4C1RcvFromC0.tInf_WhiteLightAr15746Command, (TVoid*)&gDb_tRamData4C1RcvFromC0.boWhiteLightAr15746Command, (TVoid*)&gDb_ctSetRamData4C1RcvFromC0.boDef_WhiteLightAr15746Command, (TVoid*)&gDb_ctSetRamData4C1RcvFromC0.aboRng_WhiteLightAr15746Command[0]},
    { &gDb_ctSetRamData4C1RcvFromC0.tInf_Signal_9, (TVoid*)&gDb_tRamData4C1RcvFromC0.i16Signal_9, (TVoid*)&gDb_ctSetRamData4C1RcvFromC0.i16Def_Signal_9, (TVoid*)&gDb_ctSetRamData4C1RcvFromC0.ai16Rng_Signal_9[0]},
    { &gDb_ctSetRamData4C1RcvFromC0.tInf_Signal_10, (TVoid*)&gDb_tRamData4C1RcvFromC0.i16Signal_10, (TVoid*)&gDb_ctSetRamData4C1RcvFromC0.i16Def_Signal_10, (TVoid*)&gDb_ctSetRamData4C1RcvFromC0.ai16Rng_Signal_10[0]},
    { &gDb_ctSetRamData4C1RcvFromC0.tInf_Signal_11, (TVoid*)&gDb_tRamData4C1RcvFromC0.i16Signal_11, (TVoid*)&gDb_ctSetRamData4C1RcvFromC0.i16Def_Signal_11, (TVoid*)&gDb_ctSetRamData4C1RcvFromC0.ai16Rng_Signal_11[0]},
    { &gDb_ctSetRamData4C1RcvFromC0.tInf_AddPerformanceFunc, (TVoid*)&gDb_tRamData4C1RcvFromC0.boAddPerformanceFunc, (TVoid*)&gDb_ctSetRamData4C1RcvFromC0.boDef_AddPerformanceFunc, (TVoid*)&gDb_ctSetRamData4C1RcvFromC0.aboRng_AddPerformanceFunc[0]},
    { &gDb_ctSetRamData4C1RcvFromC0.tInf_SlopeCaseLess2Deg, (TVoid*)&gDb_tRamData4C1RcvFromC0.boSlopeCaseLess2Deg, (TVoid*)&gDb_ctSetRamData4C1RcvFromC0.boDef_SlopeCaseLess2Deg, (TVoid*)&gDb_ctSetRamData4C1RcvFromC0.aboRng_SlopeCaseLess2Deg[0]},
    { &gDb_ctSetRamData4C1RcvFromC0.tInf_SlopeCaseLess4Deg, (TVoid*)&gDb_tRamData4C1RcvFromC0.boSlopeCaseLess4Deg, (TVoid*)&gDb_ctSetRamData4C1RcvFromC0.boDef_SlopeCaseLess4Deg, (TVoid*)&gDb_ctSetRamData4C1RcvFromC0.aboRng_SlopeCaseLess4Deg[0]},
    { &gDb_ctSetRamData4C1RcvFromC0.tInf_SlopeCaseLess6Deg, (TVoid*)&gDb_tRamData4C1RcvFromC0.boSlopeCaseLess6Deg, (TVoid*)&gDb_ctSetRamData4C1RcvFromC0.boDef_SlopeCaseLess6Deg, (TVoid*)&gDb_ctSetRamData4C1RcvFromC0.aboRng_SlopeCaseLess6Deg[0]},
    { &gDb_ctSetRamData4C1RcvFromC0.tInf_SlopeCaseHigher6Deg, (TVoid*)&gDb_tRamData4C1RcvFromC0.boSlopeCaseHigher6Deg, (TVoid*)&gDb_ctSetRamData4C1RcvFromC0.boDef_SlopeCaseHigher6Deg, (TVoid*)&gDb_ctSetRamData4C1RcvFromC0.aboRng_SlopeCaseHigher6Deg[0]},
    { &gDb_ctSetRamData4C1RcvFromC0.tInf_TurretInSpeedZone2Deg, (TVoid*)&gDb_tRamData4C1RcvFromC0.boTurretInSpeedZone2Deg, (TVoid*)&gDb_ctSetRamData4C1RcvFromC0.boDef_TurretInSpeedZone2Deg, (TVoid*)&gDb_ctSetRamData4C1RcvFromC0.aboRng_TurretInSpeedZone2Deg[0]},
    { &gDb_ctSetRamData4C1RcvFromC0.tInf_TurretInSpeedZone4Deg, (TVoid*)&gDb_tRamData4C1RcvFromC0.boTurretInSpeedZone4Deg, (TVoid*)&gDb_ctSetRamData4C1RcvFromC0.boDef_TurretInSpeedZone4Deg, (TVoid*)&gDb_ctSetRamData4C1RcvFromC0.aboRng_TurretInSpeedZone4Deg[0]},
    { &gDb_ctSetRamData4C1RcvFromC0.tInf_TurretInSpeedZone2DegForBasket, (TVoid*)&gDb_tRamData4C1RcvFromC0.boTurretInSpeedZone2DegForBasket, (TVoid*)&gDb_ctSetRamData4C1RcvFromC0.boDef_TurretInSpeedZone2DegForBasket, (TVoid*)&gDb_ctSetRamData4C1RcvFromC0.aboRng_TurretInSpeedZone2DegForBasket[0]},
    { &gDb_ctSetRamData4C1RcvFromC0.tInf_SelectedControlPost, (TVoid*)&gDb_tRamData4C1RcvFromC0.eSelectedControlPost, (TVoid*)&gDb_ctSetRamData4C1RcvFromC0.eDef_SelectedControlPost, (TVoid*)&gDb_ctSetRamData4C1RcvFromC0.aeRng_SelectedControlPost[0]},
    { &gDb_ctSetRamData4C1RcvFromC0.tInf_UpMastSensorNC, (TVoid*)&gDb_tRamData4C1RcvFromC0.boUpMastSensorNC, (TVoid*)&gDb_ctSetRamData4C1RcvFromC0.boDef_UpMastSensorNC, (TVoid*)&gDb_ctSetRamData4C1RcvFromC0.aboRng_UpMastSensorNC[0]},
    { &gDb_ctSetRamData4C1RcvFromC0.tInf_ValveInDownPositionSensor, (TVoid*)&gDb_tRamData4C1RcvFromC0.boValveInDownPositionSensor, (TVoid*)&gDb_ctSetRamData4C1RcvFromC0.boDef_ValveInDownPositionSensor, (TVoid*)&gDb_ctSetRamData4C1RcvFromC0.aboRng_ValveInDownPositionSensor[0]},
    { &gDb_ctSetRamData4C1RcvFromC0.tInf_MeasuringMastSensorFolded, (TVoid*)&gDb_tRamData4C1RcvFromC0.boMeasuringMastSensorFolded, (TVoid*)&gDb_ctSetRamData4C1RcvFromC0.boDef_MeasuringMastSensorFolded, (TVoid*)&gDb_ctSetRamData4C1RcvFromC0.aboRng_MeasuringMastSensorFolded[0]},
    { &gDb_ctSetRamData4C1RcvFromC0.tInf_PresenceSensorPlate, (TVoid*)&gDb_tRamData4C1RcvFromC0.boPresenceSensorPlate, (TVoid*)&gDb_ctSetRamData4C1RcvFromC0.boDef_PresenceSensorPlate, (TVoid*)&gDb_ctSetRamData4C1RcvFromC0.aboRng_PresenceSensorPlate[0]},
    { &gDb_ctSetRamData4C1RcvFromC0.tInf_RecoveryReductionRatio, (TVoid*)&gDb_tRamData4C1RcvFromC0.u8RecoveryReductionRatio, (TVoid*)&gDb_ctSetRamData4C1RcvFromC0.u8Def_RecoveryReductionRatio, (TVoid*)&gDb_ctSetRamData4C1RcvFromC0.au8Rng_RecoveryReductionRatio[0]}
};

const TDbVarTabRam gDb_catVarTabRamGeneralNeotecC1[51] =
{    //!< *cptInf *vpVal *cvpDataDef 
    { &gDb_ctSetRamGeneralNeotecC1.tInf_RamGeneralNeotecC1_1, (TVoid*)&gDb_tRamGeneralNeotecC1.boRamGeneralNeotecC1_1, (TVoid*)&gDb_ctSetRamGeneralNeotecC1.boDef_RamGeneralNeotecC1_1, (TVoid*)&gDb_ctSetRamGeneralNeotecC1.aboRng_RamGeneralNeotecC1_1[0]},
    { &gDb_ctSetRamGeneralNeotecC1.tInf_RamGeneralNeotecC1_1_1, (TVoid*)&gDb_tRamGeneralNeotecC1.boRamGeneralNeotecC1_1_1, (TVoid*)&gDb_ctSetRamGeneralNeotecC1.boDef_RamGeneralNeotecC1_1_1, (TVoid*)&gDb_ctSetRamGeneralNeotecC1.aboRng_RamGeneralNeotecC1_1_1[0]},
    { &gDb_ctSetRamGeneralNeotecC1.tInf_RamGeneralNeotecC1_1_2, (TVoid*)&gDb_tRamGeneralNeotecC1.boRamGeneralNeotecC1_1_2, (TVoid*)&gDb_ctSetRamGeneralNeotecC1.boDef_RamGeneralNeotecC1_1_2, (TVoid*)&gDb_ctSetRamGeneralNeotecC1.aboRng_RamGeneralNeotecC1_1_2[0]},
    { &gDb_ctSetRamGeneralNeotecC1.tInf_RamGeneralNeotecC1_1_3, (TVoid*)&gDb_tRamGeneralNeotecC1.boRamGeneralNeotecC1_1_3, (TVoid*)&gDb_ctSetRamGeneralNeotecC1.boDef_RamGeneralNeotecC1_1_3, (TVoid*)&gDb_ctSetRamGeneralNeotecC1.aboRng_RamGeneralNeotecC1_1_3[0]},
    { &gDb_ctSetRamGeneralNeotecC1.tInf_RamGeneralNeotecC1_1_4, (TVoid*)&gDb_tRamGeneralNeotecC1.boRamGeneralNeotecC1_1_4, (TVoid*)&gDb_ctSetRamGeneralNeotecC1.boDef_RamGeneralNeotecC1_1_4, (TVoid*)&gDb_ctSetRamGeneralNeotecC1.aboRng_RamGeneralNeotecC1_1_4[0]},
    { &gDb_ctSetRamGeneralNeotecC1.tInf_RamGeneralNeotecC1_1_5, (TVoid*)&gDb_tRamGeneralNeotecC1.boRamGeneralNeotecC1_1_5, (TVoid*)&gDb_ctSetRamGeneralNeotecC1.boDef_RamGeneralNeotecC1_1_5, (TVoid*)&gDb_ctSetRamGeneralNeotecC1.aboRng_RamGeneralNeotecC1_1_5[0]},
    { &gDb_ctSetRamGeneralNeotecC1.tInf_RamGeneralNeotecC1_1_6, (TVoid*)&gDb_tRamGeneralNeotecC1.boRamGeneralNeotecC1_1_6, (TVoid*)&gDb_ctSetRamGeneralNeotecC1.boDef_RamGeneralNeotecC1_1_6, (TVoid*)&gDb_ctSetRamGeneralNeotecC1.aboRng_RamGeneralNeotecC1_1_6[0]},
    { &gDb_ctSetRamGeneralNeotecC1.tInf_RamGeneralNeotecC1_1_7, (TVoid*)&gDb_tRamGeneralNeotecC1.boRamGeneralNeotecC1_1_7, (TVoid*)&gDb_ctSetRamGeneralNeotecC1.boDef_RamGeneralNeotecC1_1_7, (TVoid*)&gDb_ctSetRamGeneralNeotecC1.aboRng_RamGeneralNeotecC1_1_7[0]},
    { &gDb_ctSetRamGeneralNeotecC1.tInf_RamGeneralNeotecC1_1_8, (TVoid*)&gDb_tRamGeneralNeotecC1.boRamGeneralNeotecC1_1_8, (TVoid*)&gDb_ctSetRamGeneralNeotecC1.boDef_RamGeneralNeotecC1_1_8, (TVoid*)&gDb_ctSetRamGeneralNeotecC1.aboRng_RamGeneralNeotecC1_1_8[0]},
    { &gDb_ctSetRamGeneralNeotecC1.tInf_RamGeneralNeotecC1_1_9, (TVoid*)&gDb_tRamGeneralNeotecC1.boRamGeneralNeotecC1_1_9, (TVoid*)&gDb_ctSetRamGeneralNeotecC1.boDef_RamGeneralNeotecC1_1_9, (TVoid*)&gDb_ctSetRamGeneralNeotecC1.aboRng_RamGeneralNeotecC1_1_9[0]},
    { &gDb_ctSetRamGeneralNeotecC1.tInf_RamGeneralNeotecC1_1_10, (TVoid*)&gDb_tRamGeneralNeotecC1.boRamGeneralNeotecC1_1_10, (TVoid*)&gDb_ctSetRamGeneralNeotecC1.boDef_RamGeneralNeotecC1_1_10, (TVoid*)&gDb_ctSetRamGeneralNeotecC1.aboRng_RamGeneralNeotecC1_1_10[0]},
    { &gDb_ctSetRamGeneralNeotecC1.tInf_RamGeneralNeotecC1_1_11, (TVoid*)&gDb_tRamGeneralNeotecC1.boRamGeneralNeotecC1_1_11, (TVoid*)&gDb_ctSetRamGeneralNeotecC1.boDef_RamGeneralNeotecC1_1_11, (TVoid*)&gDb_ctSetRamGeneralNeotecC1.aboRng_RamGeneralNeotecC1_1_11[0]},
    { &gDb_ctSetRamGeneralNeotecC1.tInf_RamGeneralNeotecC1_1_12, (TVoid*)&gDb_tRamGeneralNeotecC1.boRamGeneralNeotecC1_1_12, (TVoid*)&gDb_ctSetRamGeneralNeotecC1.boDef_RamGeneralNeotecC1_1_12, (TVoid*)&gDb_ctSetRamGeneralNeotecC1.aboRng_RamGeneralNeotecC1_1_12[0]},
    { &gDb_ctSetRamGeneralNeotecC1.tInf_RamGeneralNeotecC1_1_13, (TVoid*)&gDb_tRamGeneralNeotecC1.boRamGeneralNeotecC1_1_13, (TVoid*)&gDb_ctSetRamGeneralNeotecC1.boDef_RamGeneralNeotecC1_1_13, (TVoid*)&gDb_ctSetRamGeneralNeotecC1.aboRng_RamGeneralNeotecC1_1_13[0]},
    { &gDb_ctSetRamGeneralNeotecC1.tInf_RamGeneralNeotecC1_1_14, (TVoid*)&gDb_tRamGeneralNeotecC1.boRamGeneralNeotecC1_1_14, (TVoid*)&gDb_ctSetRamGeneralNeotecC1.boDef_RamGeneralNeotecC1_1_14, (TVoid*)&gDb_ctSetRamGeneralNeotecC1.aboRng_RamGeneralNeotecC1_1_14[0]},
    { &gDb_ctSetRamGeneralNeotecC1.tInf_RamGeneralNeotecC1_1_15, (TVoid*)&gDb_tRamGeneralNeotecC1.boRamGeneralNeotecC1_1_15, (TVoid*)&gDb_ctSetRamGeneralNeotecC1.boDef_RamGeneralNeotecC1_1_15, (TVoid*)&gDb_ctSetRamGeneralNeotecC1.aboRng_RamGeneralNeotecC1_1_15[0]},
    { &gDb_ctSetRamGeneralNeotecC1.tInf_RamGeneralNeotecC1_2, (TVoid*)&gDb_tRamGeneralNeotecC1.u8RamGeneralNeotecC1_2, (TVoid*)&gDb_ctSetRamGeneralNeotecC1.u8Def_RamGeneralNeotecC1_2, (TVoid*)&gDb_ctSetRamGeneralNeotecC1.au8Rng_RamGeneralNeotecC1_2[0]},
    { &gDb_ctSetRamGeneralNeotecC1.tInf_RamGeneralNeotecC1_2_1, (TVoid*)&gDb_tRamGeneralNeotecC1.u8RamGeneralNeotecC1_2_1, (TVoid*)&gDb_ctSetRamGeneralNeotecC1.u8Def_RamGeneralNeotecC1_2_1, (TVoid*)&gDb_ctSetRamGeneralNeotecC1.au8Rng_RamGeneralNeotecC1_2_1[0]},
    { &gDb_ctSetRamGeneralNeotecC1.tInf_RamGeneralNeotecC1_2_2, (TVoid*)&gDb_tRamGeneralNeotecC1.u8RamGeneralNeotecC1_2_2, (TVoid*)&gDb_ctSetRamGeneralNeotecC1.u8Def_RamGeneralNeotecC1_2_2, (TVoid*)&gDb_ctSetRamGeneralNeotecC1.au8Rng_RamGeneralNeotecC1_2_2[0]},
    { &gDb_ctSetRamGeneralNeotecC1.tInf_RamGeneralNeotecC1_2_3, (TVoid*)&gDb_tRamGeneralNeotecC1.u8RamGeneralNeotecC1_2_3, (TVoid*)&gDb_ctSetRamGeneralNeotecC1.u8Def_RamGeneralNeotecC1_2_3, (TVoid*)&gDb_ctSetRamGeneralNeotecC1.au8Rng_RamGeneralNeotecC1_2_3[0]},
    { &gDb_ctSetRamGeneralNeotecC1.tInf_RamGeneralNeotecC1_2_4, (TVoid*)&gDb_tRamGeneralNeotecC1.u8RamGeneralNeotecC1_2_4, (TVoid*)&gDb_ctSetRamGeneralNeotecC1.u8Def_RamGeneralNeotecC1_2_4, (TVoid*)&gDb_ctSetRamGeneralNeotecC1.au8Rng_RamGeneralNeotecC1_2_4[0]},
    { &gDb_ctSetRamGeneralNeotecC1.tInf_RamGeneralNeotecC1_2_5, (TVoid*)&gDb_tRamGeneralNeotecC1.u8RamGeneralNeotecC1_2_5, (TVoid*)&gDb_ctSetRamGeneralNeotecC1.u8Def_RamGeneralNeotecC1_2_5, (TVoid*)&gDb_ctSetRamGeneralNeotecC1.au8Rng_RamGeneralNeotecC1_2_5[0]},
    { &gDb_ctSetRamGeneralNeotecC1.tInf_RamGeneralNeotecC1_3, (TVoid*)&gDb_tRamGeneralNeotecC1.u16RamGeneralNeotecC1_3, (TVoid*)&gDb_ctSetRamGeneralNeotecC1.u16Def_RamGeneralNeotecC1_3, (TVoid*)&gDb_ctSetRamGeneralNeotecC1.au16Rng_RamGeneralNeotecC1_3[0]},
    { &gDb_ctSetRamGeneralNeotecC1.tInf_RamGeneralNeotecC1_3_1, (TVoid*)&gDb_tRamGeneralNeotecC1.u16RamGeneralNeotecC1_3_1, (TVoid*)&gDb_ctSetRamGeneralNeotecC1.u16Def_RamGeneralNeotecC1_3_1, (TVoid*)&gDb_ctSetRamGeneralNeotecC1.au16Rng_RamGeneralNeotecC1_3_1[0]},
    { &gDb_ctSetRamGeneralNeotecC1.tInf_RamGeneralNeotecC1_3_2, (TVoid*)&gDb_tRamGeneralNeotecC1.u16RamGeneralNeotecC1_3_2, (TVoid*)&gDb_ctSetRamGeneralNeotecC1.u16Def_RamGeneralNeotecC1_3_2, (TVoid*)&gDb_ctSetRamGeneralNeotecC1.au16Rng_RamGeneralNeotecC1_3_2[0]},
    { &gDb_ctSetRamGeneralNeotecC1.tInf_RamGeneralNeotecC1_3_3, (TVoid*)&gDb_tRamGeneralNeotecC1.u16RamGeneralNeotecC1_3_3, (TVoid*)&gDb_ctSetRamGeneralNeotecC1.u16Def_RamGeneralNeotecC1_3_3, (TVoid*)&gDb_ctSetRamGeneralNeotecC1.au16Rng_RamGeneralNeotecC1_3_3[0]},
    { &gDb_ctSetRamGeneralNeotecC1.tInf_RamGeneralNeotecC1_3_4, (TVoid*)&gDb_tRamGeneralNeotecC1.u16RamGeneralNeotecC1_3_4, (TVoid*)&gDb_ctSetRamGeneralNeotecC1.u16Def_RamGeneralNeotecC1_3_4, (TVoid*)&gDb_ctSetRamGeneralNeotecC1.au16Rng_RamGeneralNeotecC1_3_4[0]},
    { &gDb_ctSetRamGeneralNeotecC1.tInf_RamGeneralNeotecC1_3_5, (TVoid*)&gDb_tRamGeneralNeotecC1.u16RamGeneralNeotecC1_3_5, (TVoid*)&gDb_ctSetRamGeneralNeotecC1.u16Def_RamGeneralNeotecC1_3_5, (TVoid*)&gDb_ctSetRamGeneralNeotecC1.au16Rng_RamGeneralNeotecC1_3_5[0]},
    { &gDb_ctSetRamGeneralNeotecC1.tInf_RamGeneralNeotecC1_3_6, (TVoid*)&gDb_tRamGeneralNeotecC1.u16RamGeneralNeotecC1_3_6, (TVoid*)&gDb_ctSetRamGeneralNeotecC1.u16Def_RamGeneralNeotecC1_3_6, (TVoid*)&gDb_ctSetRamGeneralNeotecC1.au16Rng_RamGeneralNeotecC1_3_6[0]},
    { &gDb_ctSetRamGeneralNeotecC1.tInf_RamGeneralNeotecC1_3_7, (TVoid*)&gDb_tRamGeneralNeotecC1.u16RamGeneralNeotecC1_3_7, (TVoid*)&gDb_ctSetRamGeneralNeotecC1.u16Def_RamGeneralNeotecC1_3_7, (TVoid*)&gDb_ctSetRamGeneralNeotecC1.au16Rng_RamGeneralNeotecC1_3_7[0]},
    { &gDb_ctSetRamGeneralNeotecC1.tInf_RamGeneralNeotecC1_3_8, (TVoid*)&gDb_tRamGeneralNeotecC1.u16RamGeneralNeotecC1_3_8, (TVoid*)&gDb_ctSetRamGeneralNeotecC1.u16Def_RamGeneralNeotecC1_3_8, (TVoid*)&gDb_ctSetRamGeneralNeotecC1.au16Rng_RamGeneralNeotecC1_3_8[0]},
    { &gDb_ctSetRamGeneralNeotecC1.tInf_RamGeneralNeotecC1_4, (TVoid*)&gDb_tRamGeneralNeotecC1.i16RamGeneralNeotecC1_4, (TVoid*)&gDb_ctSetRamGeneralNeotecC1.i16Def_RamGeneralNeotecC1_4, (TVoid*)&gDb_ctSetRamGeneralNeotecC1.ai16Rng_RamGeneralNeotecC1_4[0]},
    { &gDb_ctSetRamGeneralNeotecC1.tInf_RamGeneralNeotecC1_4_1, (TVoid*)&gDb_tRamGeneralNeotecC1.i16RamGeneralNeotecC1_4_1, (TVoid*)&gDb_ctSetRamGeneralNeotecC1.i16Def_RamGeneralNeotecC1_4_1, (TVoid*)&gDb_ctSetRamGeneralNeotecC1.ai16Rng_RamGeneralNeotecC1_4_1[0]},
    { &gDb_ctSetRamGeneralNeotecC1.tInf_RamGeneralNeotecC1_4_2, (TVoid*)&gDb_tRamGeneralNeotecC1.i16RamGeneralNeotecC1_4_2, (TVoid*)&gDb_ctSetRamGeneralNeotecC1.i16Def_RamGeneralNeotecC1_4_2, (TVoid*)&gDb_ctSetRamGeneralNeotecC1.ai16Rng_RamGeneralNeotecC1_4_2[0]},
    { &gDb_ctSetRamGeneralNeotecC1.tInf_RamGeneralNeotecC1_4_3, (TVoid*)&gDb_tRamGeneralNeotecC1.i16RamGeneralNeotecC1_4_3, (TVoid*)&gDb_ctSetRamGeneralNeotecC1.i16Def_RamGeneralNeotecC1_4_3, (TVoid*)&gDb_ctSetRamGeneralNeotecC1.ai16Rng_RamGeneralNeotecC1_4_3[0]},
    { &gDb_ctSetRamGeneralNeotecC1.tInf_RamGeneralNeotecC1_4_4, (TVoid*)&gDb_tRamGeneralNeotecC1.i16RamGeneralNeotecC1_4_4, (TVoid*)&gDb_ctSetRamGeneralNeotecC1.i16Def_RamGeneralNeotecC1_4_4, (TVoid*)&gDb_ctSetRamGeneralNeotecC1.ai16Rng_RamGeneralNeotecC1_4_4[0]},
    { &gDb_ctSetRamGeneralNeotecC1.tInf_RamGeneralNeotecC1_4_5, (TVoid*)&gDb_tRamGeneralNeotecC1.i16RamGeneralNeotecC1_4_5, (TVoid*)&gDb_ctSetRamGeneralNeotecC1.i16Def_RamGeneralNeotecC1_4_5, (TVoid*)&gDb_ctSetRamGeneralNeotecC1.ai16Rng_RamGeneralNeotecC1_4_5[0]},
    { &gDb_ctSetRamGeneralNeotecC1.tInf_RamGeneralNeotecC1_4_6, (TVoid*)&gDb_tRamGeneralNeotecC1.i16RamGeneralNeotecC1_4_6, (TVoid*)&gDb_ctSetRamGeneralNeotecC1.i16Def_RamGeneralNeotecC1_4_6, (TVoid*)&gDb_ctSetRamGeneralNeotecC1.ai16Rng_RamGeneralNeotecC1_4_6[0]},
    { &gDb_ctSetRamGeneralNeotecC1.tInf_RamGeneralNeotecC1_4_7, (TVoid*)&gDb_tRamGeneralNeotecC1.i16RamGeneralNeotecC1_4_7, (TVoid*)&gDb_ctSetRamGeneralNeotecC1.i16Def_RamGeneralNeotecC1_4_7, (TVoid*)&gDb_ctSetRamGeneralNeotecC1.ai16Rng_RamGeneralNeotecC1_4_7[0]},
    { &gDb_ctSetRamGeneralNeotecC1.tInf_RamGeneralNeotecC1_4_8, (TVoid*)&gDb_tRamGeneralNeotecC1.i16RamGeneralNeotecC1_4_8, (TVoid*)&gDb_ctSetRamGeneralNeotecC1.i16Def_RamGeneralNeotecC1_4_8, (TVoid*)&gDb_ctSetRamGeneralNeotecC1.ai16Rng_RamGeneralNeotecC1_4_8[0]},
    { &gDb_ctSetRamGeneralNeotecC1.tInf_WaterTempJ1939, (TVoid*)&gDb_tRamGeneralNeotecC1.i16WaterTempJ1939, (TVoid*)&gDb_ctSetRamGeneralNeotecC1.i16Def_WaterTempJ1939, (TVoid*)&gDb_ctSetRamGeneralNeotecC1.ai16Rng_WaterTempJ1939[0]},
    { &gDb_ctSetRamGeneralNeotecC1.tInf_OilPressureJ1939, (TVoid*)&gDb_tRamGeneralNeotecC1.u16OilPressureJ1939, (TVoid*)&gDb_ctSetRamGeneralNeotecC1.u16Def_OilPressureJ1939, (TVoid*)&gDb_ctSetRamGeneralNeotecC1.au16Rng_OilPressureJ1939[0]},
    { &gDb_ctSetRamGeneralNeotecC1.tInf_MotorSpeedJ1939, (TVoid*)&gDb_tRamGeneralNeotecC1.u16MotorSpeedJ1939, (TVoid*)&gDb_ctSetRamGeneralNeotecC1.u16Def_MotorSpeedJ1939, (TVoid*)&gDb_ctSetRamGeneralNeotecC1.au16Rng_MotorSpeedJ1939[0]},
    { &gDb_ctSetRamGeneralNeotecC1.tInf_AlternatorCurentJ1939, (TVoid*)&gDb_tRamGeneralNeotecC1.i32AlternatorCurentJ1939, (TVoid*)&gDb_ctSetRamGeneralNeotecC1.i32Def_AlternatorCurentJ1939, (TVoid*)&gDb_ctSetRamGeneralNeotecC1.ai32Rng_AlternatorCurentJ1939[0]},
    { &gDb_ctSetRamGeneralNeotecC1.tInf_MotorStateJ1939, (TVoid*)&gDb_tRamGeneralNeotecC1.eMotorStateJ1939, (TVoid*)&gDb_ctSetRamGeneralNeotecC1.eDef_MotorStateJ1939, (TVoid*)&gDb_ctSetRamGeneralNeotecC1.aeRng_MotorStateJ1939[0]},
    { &gDb_ctSetRamGeneralNeotecC1.tInf_PowerBatterie, (TVoid*)&gDb_tRamGeneralNeotecC1.i16PowerBatterie, (TVoid*)&gDb_ctSetRamGeneralNeotecC1.i16Def_PowerBatterie, (TVoid*)&gDb_ctSetRamGeneralNeotecC1.ai16Rng_PowerBatterie[0]},
    { &gDb_ctSetRamGeneralNeotecC1.tInf_MotorSpeedCmdJ1939, (TVoid*)&gDb_tRamGeneralNeotecC1.u16MotorSpeedCmdJ1939, (TVoid*)&gDb_ctSetRamGeneralNeotecC1.u16Def_MotorSpeedCmdJ1939, (TVoid*)&gDb_ctSetRamGeneralNeotecC1.au16Rng_MotorSpeedCmdJ1939[0]},
    { &gDb_ctSetRamGeneralNeotecC1.tInf_OverrideControlModeCmdJ1939, (TVoid*)&gDb_tRamGeneralNeotecC1.u8OverrideControlModeCmdJ1939, (TVoid*)&gDb_ctSetRamGeneralNeotecC1.u8Def_OverrideControlModeCmdJ1939, (TVoid*)&gDb_ctSetRamGeneralNeotecC1.au8Rng_OverrideControlModeCmdJ1939[0]},
    { &gDb_ctSetRamGeneralNeotecC1.tInf_HighPressureOilJ1939, (TVoid*)&gDb_tRamGeneralNeotecC1.eHighPressureOilJ1939, (TVoid*)&gDb_ctSetRamGeneralNeotecC1.eDef_HighPressureOilJ1939, (TVoid*)&gDb_ctSetRamGeneralNeotecC1.aeRng_HighPressureOilJ1939[0]},
    { &gDb_ctSetRamGeneralNeotecC1.tInf_WarmingActiveJ1939, (TVoid*)&gDb_tRamGeneralNeotecC1.eWarmingActiveJ1939, (TVoid*)&gDb_ctSetRamGeneralNeotecC1.eDef_WarmingActiveJ1939, (TVoid*)&gDb_ctSetRamGeneralNeotecC1.aeRng_WarmingActiveJ1939[0]},
    { &gDb_ctSetRamGeneralNeotecC1.tInf_StopMotorJ1939, (TVoid*)&gDb_tRamGeneralNeotecC1.eStopMotorJ1939, (TVoid*)&gDb_ctSetRamGeneralNeotecC1.eDef_StopMotorJ1939, (TVoid*)&gDb_ctSetRamGeneralNeotecC1.aeRng_StopMotorJ1939[0]}
};

const TDbVarTabNvm gDb_catVarTabNvParamGreenEffC1[12] =
{    //!< *cptInf *vpVal *cvpDataRang *cvpDataDef cu16Adr cu16ValuePos
    { &gDb_ctSetNvParamGreenEffC1.tInf_REGEN_SOC_FULL, (TVoid*)&gDb_tNvParamGreenEffC1.u16REGEN_SOC_FULL, (TVoid*)&gDb_ctSetNvParamGreenEffC1.u16Def_REGEN_SOC_FULL, (TVoid*)&gDb_ctSetNvParamGreenEffC1.au16Rng_REGEN_SOC_FULL[0], 2312, 0},
    { &gDb_ctSetNvParamGreenEffC1.tInf_REGEN_SOC_MAX, (TVoid*)&gDb_tNvParamGreenEffC1.u16REGEN_SOC_MAX, (TVoid*)&gDb_ctSetNvParamGreenEffC1.u16Def_REGEN_SOC_MAX, (TVoid*)&gDb_ctSetNvParamGreenEffC1.au16Rng_REGEN_SOC_MAX[0], 2314, 1},
    { &gDb_ctSetNvParamGreenEffC1.tInf_REGEN_HYST_SOC_MAX, (TVoid*)&gDb_tNvParamGreenEffC1.u16REGEN_HYST_SOC_MAX, (TVoid*)&gDb_ctSetNvParamGreenEffC1.u16Def_REGEN_HYST_SOC_MAX, (TVoid*)&gDb_ctSetNvParamGreenEffC1.au16Rng_REGEN_HYST_SOC_MAX[0], 2316, 2},
    { &gDb_ctSetNvParamGreenEffC1.tInf_NBR_REGEN_SOC_ALARM, (TVoid*)&gDb_tNvParamGreenEffC1.u16NBR_REGEN_SOC_ALARM, (TVoid*)&gDb_ctSetNvParamGreenEffC1.u16Def_NBR_REGEN_SOC_ALARM, (TVoid*)&gDb_ctSetNvParamGreenEffC1.au16Rng_NBR_REGEN_SOC_ALARM[0], 2318, 3},
    { &gDb_ctSetNvParamGreenEffC1.tInf_NBR_REGEN_SOC_OVERED, (TVoid*)&gDb_tNvParamGreenEffC1.u16NBR_REGEN_SOC_OVERED, (TVoid*)&gDb_ctSetNvParamGreenEffC1.u16Def_NBR_REGEN_SOC_OVERED, (TVoid*)&gDb_ctSetNvParamGreenEffC1.au16Rng_NBR_REGEN_SOC_OVERED[0], 2320, 4},
    { &gDb_ctSetNvParamGreenEffC1.tInf_ELECTRIC_MOTOR_RPM_MAX, (TVoid*)&gDb_tNvParamGreenEffC1.u16ELECTRIC_MOTOR_RPM_MAX, (TVoid*)&gDb_ctSetNvParamGreenEffC1.u16Def_ELECTRIC_MOTOR_RPM_MAX, (TVoid*)&gDb_ctSetNvParamGreenEffC1.au16Rng_ELECTRIC_MOTOR_RPM_MAX[0], 2322, 5},
    { &gDb_ctSetNvParamGreenEffC1.tInf_ELECTRIC_MOTOR_RPM_MIN, (TVoid*)&gDb_tNvParamGreenEffC1.u16ELECTRIC_MOTOR_RPM_MIN, (TVoid*)&gDb_ctSetNvParamGreenEffC1.u16Def_ELECTRIC_MOTOR_RPM_MIN, (TVoid*)&gDb_ctSetNvParamGreenEffC1.au16Rng_ELECTRIC_MOTOR_RPM_MIN[0], 2324, 6},
    { &gDb_ctSetNvParamGreenEffC1.tInf_ELECTRIC_MOTOR_RPM_PVG, (TVoid*)&gDb_tNvParamGreenEffC1.u16ELECTRIC_MOTOR_RPM_PVG, (TVoid*)&gDb_ctSetNvParamGreenEffC1.u16Def_ELECTRIC_MOTOR_RPM_PVG, (TVoid*)&gDb_ctSetNvParamGreenEffC1.au16Rng_ELECTRIC_MOTOR_RPM_PVG[0], 2326, 7},
    { &gDb_ctSetNvParamGreenEffC1.tInf_ELECTRIC_MOTOR_RPM_TOR, (TVoid*)&gDb_tNvParamGreenEffC1.u16ELECTRIC_MOTOR_RPM_TOR, (TVoid*)&gDb_ctSetNvParamGreenEffC1.u16Def_ELECTRIC_MOTOR_RPM_TOR, (TVoid*)&gDb_ctSetNvParamGreenEffC1.au16Rng_ELECTRIC_MOTOR_RPM_TOR[0], 2328, 8},
    { &gDb_ctSetNvParamGreenEffC1.tInf_ELECTRIC_MOTOR_COLD_OIL_TEMP, (TVoid*)&gDb_tNvParamGreenEffC1.i16ELECTRIC_MOTOR_COLD_OIL_TEMP, (TVoid*)&gDb_ctSetNvParamGreenEffC1.i16Def_ELECTRIC_MOTOR_COLD_OIL_TEMP, (TVoid*)&gDb_ctSetNvParamGreenEffC1.ai16Rng_ELECTRIC_MOTOR_COLD_OIL_TEMP[0], 2330, 9},
    { &gDb_ctSetNvParamGreenEffC1.tInf_BATTERY_CAPACITY_AMP_HOUR, (TVoid*)&gDb_tNvParamGreenEffC1.u16BATTERY_CAPACITY_AMP_HOUR, (TVoid*)&gDb_ctSetNvParamGreenEffC1.u16Def_BATTERY_CAPACITY_AMP_HOUR, (TVoid*)&gDb_ctSetNvParamGreenEffC1.au16Rng_BATTERY_CAPACITY_AMP_HOUR[0], 2332, 10},
    { &gDb_ctSetNvParamGreenEffC1.tInf_NbElementRemainingRegenTime, (TVoid*)&gDb_tNvParamGreenEffC1.u8NbElementRemainingRegenTime, (TVoid*)&gDb_ctSetNvParamGreenEffC1.u8Def_NbElementRemainingRegenTime, (TVoid*)&gDb_ctSetNvParamGreenEffC1.au8Rng_NbElementRemainingRegenTime[0], 2334, 11}
};

const TDbVarTabRam gDb_catVarTabRamGreenEffC1[21] =
{    //!< *cptInf *vpVal *cvpDataDef 
    { &gDb_ctSetRamGreenEffC1.tInf_AlarmCptNbrRegenFinish, (TVoid*)&gDb_tRamGreenEffC1.boAlarmCptNbrRegenFinish, (TVoid*)&gDb_ctSetRamGreenEffC1.boDef_AlarmCptNbrRegenFinish, (TVoid*)&gDb_ctSetRamGreenEffC1.aboRng_AlarmCptNbrRegenFinish[0]},
    { &gDb_ctSetRamGreenEffC1.tInf_ElectricMotorForbidden, (TVoid*)&gDb_tRamGreenEffC1.boElectricMotorForbidden, (TVoid*)&gDb_ctSetRamGreenEffC1.boDef_ElectricMotorForbidden, (TVoid*)&gDb_ctSetRamGreenEffC1.aboRng_ElectricMotorForbidden[0]},
    { &gDb_ctSetRamGreenEffC1.tInf_ColdOilTankTemperature, (TVoid*)&gDb_tRamGreenEffC1.boColdOilTankTemperature, (TVoid*)&gDb_ctSetRamGreenEffC1.boDef_ColdOilTankTemperature, (TVoid*)&gDb_ctSetRamGreenEffC1.aboRng_ColdOilTankTemperature[0]},
    { &gDb_ctSetRamGreenEffC1.tInf_RpmMvtsElectricMode, (TVoid*)&gDb_tRamGreenEffC1.i16RpmMvtsElectricMode, (TVoid*)&gDb_ctSetRamGreenEffC1.i16Def_RpmMvtsElectricMode, (TVoid*)&gDb_ctSetRamGreenEffC1.ai16Rng_RpmMvtsElectricMode[0]},
    { &gDb_ctSetRamGreenEffC1.tInf_RpmTransRailElectricMode, (TVoid*)&gDb_tRamGreenEffC1.i16RpmTransRailElectricMode, (TVoid*)&gDb_ctSetRamGreenEffC1.i16Def_RpmTransRailElectricMode, (TVoid*)&gDb_ctSetRamGreenEffC1.ai16Rng_RpmTransRailElectricMode[0]},
    { &gDb_ctSetRamGreenEffC1.tInf_RpmOilTankTemp, (TVoid*)&gDb_tRamGreenEffC1.i16RpmOilTankTemp, (TVoid*)&gDb_ctSetRamGreenEffC1.i16Def_RpmOilTankTemp, (TVoid*)&gDb_ctSetRamGreenEffC1.ai16Rng_RpmOilTankTemp[0]},
    { &gDb_ctSetRamGreenEffC1.tInf_RpmMotorElectric, (TVoid*)&gDb_tRamGreenEffC1.i16RpmMotorElectric, (TVoid*)&gDb_ctSetRamGreenEffC1.i16Def_RpmMotorElectric, (TVoid*)&gDb_ctSetRamGreenEffC1.ai16Rng_RpmMotorElectric[0]},
    { &gDb_ctSetRamGreenEffC1.tInf_GeneratorOn, (TVoid*)&gDb_tRamGreenEffC1.boGeneratorOn, (TVoid*)&gDb_ctSetRamGreenEffC1.boDef_GeneratorOn, (TVoid*)&gDb_ctSetRamGreenEffC1.aboRng_GeneratorOn[0]},
    { &gDb_ctSetRamGreenEffC1.tInf_AutoModeActivate, (TVoid*)&gDb_tRamGreenEffC1.boAutoModeActivate, (TVoid*)&gDb_ctSetRamGreenEffC1.boDef_AutoModeActivate, (TVoid*)&gDb_ctSetRamGreenEffC1.aboRng_AutoModeActivate[0]},
    { &gDb_ctSetRamGreenEffC1.tInf_SilenceModeActivate, (TVoid*)&gDb_tRamGreenEffC1.boSilenceModeActivate, (TVoid*)&gDb_ctSetRamGreenEffC1.boDef_SilenceModeActivate, (TVoid*)&gDb_ctSetRamGreenEffC1.aboRng_SilenceModeActivate[0]},
    { &gDb_ctSetRamGreenEffC1.tInf_ForcingModeActivate, (TVoid*)&gDb_tRamGreenEffC1.boForcingModeActivate, (TVoid*)&gDb_ctSetRamGreenEffC1.boDef_ForcingModeActivate, (TVoid*)&gDb_ctSetRamGreenEffC1.aboRng_ForcingModeActivate[0]},
    { &gDb_ctSetRamGreenEffC1.tInf_ForcingRegenlow, (TVoid*)&gDb_tRamGreenEffC1.boForcingRegenlow, (TVoid*)&gDb_ctSetRamGreenEffC1.boDef_ForcingRegenlow, (TVoid*)&gDb_ctSetRamGreenEffC1.aboRng_ForcingRegenlow[0]},
    { &gDb_ctSetRamGreenEffC1.tInf_ForcingRegenHigh, (TVoid*)&gDb_tRamGreenEffC1.boForcingRegenHigh, (TVoid*)&gDb_ctSetRamGreenEffC1.boDef_ForcingRegenHigh, (TVoid*)&gDb_ctSetRamGreenEffC1.aboRng_ForcingRegenHigh[0]},
    { &gDb_ctSetRamGreenEffC1.tInf_RemainingRegenTimeAverage, (TVoid*)&gDb_tRamGreenEffC1.u16RemainingRegenTimeAverage, (TVoid*)&gDb_ctSetRamGreenEffC1.u16Def_RemainingRegenTimeAverage, (TVoid*)&gDb_ctSetRamGreenEffC1.au16Rng_RemainingRegenTimeAverage[0]},
    { &gDb_ctSetRamGreenEffC1.tInf_AskReloadWithGenerator, (TVoid*)&gDb_tRamGreenEffC1.boAskReloadWithGenerator, (TVoid*)&gDb_ctSetRamGreenEffC1.boDef_AskReloadWithGenerator, (TVoid*)&gDb_ctSetRamGreenEffC1.aboRng_AskReloadWithGenerator[0]},
    { &gDb_ctSetRamGreenEffC1.tInf_ReloadWithGeneratorOn, (TVoid*)&gDb_tRamGreenEffC1.boReloadWithGeneratorOn, (TVoid*)&gDb_ctSetRamGreenEffC1.boDef_ReloadWithGeneratorOn, (TVoid*)&gDb_ctSetRamGreenEffC1.aboRng_ReloadWithGeneratorOn[0]},
    { &gDb_ctSetRamGreenEffC1.tInf_SocStopRegen, (TVoid*)&gDb_tRamGreenEffC1.boSocStopRegen, (TVoid*)&gDb_ctSetRamGreenEffC1.boDef_SocStopRegen, (TVoid*)&gDb_ctSetRamGreenEffC1.aboRng_SocStopRegen[0]},
    { &gDb_ctSetRamGreenEffC1.tInf_TotalRegenHours, (TVoid*)&gDb_tRamGreenEffC1.u16TotalRegenHours, (TVoid*)&gDb_ctSetRamGreenEffC1.u16Def_TotalRegenHours, (TVoid*)&gDb_ctSetRamGreenEffC1.au16Rng_TotalRegenHours[0]},
    { &gDb_ctSetRamGreenEffC1.tInf_PictoColdOilTankTemperature, (TVoid*)&gDb_tRamGreenEffC1.boPictoColdOilTankTemperature, (TVoid*)&gDb_ctSetRamGreenEffC1.boDef_PictoColdOilTankTemperature, (TVoid*)&gDb_ctSetRamGreenEffC1.aboRng_PictoColdOilTankTemperature[0]},
    { &gDb_ctSetRamGreenEffC1.tInf_TotalElectricHours, (TVoid*)&gDb_tRamGreenEffC1.u16TotalElectricHours, (TVoid*)&gDb_ctSetRamGreenEffC1.u16Def_TotalElectricHours, (TVoid*)&gDb_ctSetRamGreenEffC1.au16Rng_TotalElectricHours[0]},
    { &gDb_ctSetRamGreenEffC1.tInf_PictoRecoveryReductionRatio, (TVoid*)&gDb_tRamGreenEffC1.boPictoRecoveryReductionRatio, (TVoid*)&gDb_ctSetRamGreenEffC1.boDef_PictoRecoveryReductionRatio, (TVoid*)&gDb_ctSetRamGreenEffC1.aboRng_PictoRecoveryReductionRatio[0]}
};

// Database Entry --------------------------------------------------------------------------------

const TDbRoot gDb_ctRoot = 
{
    2,                                                      //u8VersMajor - [NUM] Database Versionnumber Major
    1,                                                      //u8VerMinor - [NUM] Database Versionnumber Minor
    3880367188U,                                            //u32DbmCheckNo - [NUM] Database Check-Number
    32,                                                     //u8ListMax - [NUM] Count of Lists
    &gDb_catList[0]                                         //pctListTab - [STC] Pointer to the first list entry
};

// Database List's -------------------------------------------------------------------------------

const TDbList gDb_catList[32] = 
{
    {
    //!< ** General List Setting
        "RamEcuInputsC1",                                   //!< achName[16]
        DB_RAM_ECU,                                         //!< u8ListClass - [DEF] RAM/NVMEM
        DB_RAM,                                             //!< u8ListType  - [DEF] RAM/NVMEM
        0,                                                  //!< u8ListIdx - List Index
        61,                                                 //!< u16VarMax - [NUM] Max Variable
        61,                                                 //!< u16NumValues - [NUM] Number of addressable values in list(counting each array value)
        120,                                                //!< u16ShadowBytes - [NUM] need Shadow RAM in Byte
        1280U,                                              //!< u32Password - [NUM] DbList unique key
        &gDb_tRamEcuInputsC1.tListRoot,                     //!< cptListRoot - [NUM] ListRoot
    //!< ** RAM General Setting
        &gDb_catVarTabRamEcuInputsC1[0],                    //!< cptRamVarTab - [STC] Pointer of RAM
        DB_SINGLE,                                          //!< u8RamMode - [DEF] Single/Double
        TRUE,                                               //!< boRamCrc - [DEF] with CRC
    //!< ** NVMEM General Setting
        NULL,                                               //!< cptNvmVarTab - [STC] Pointer of NVMEM
        1,                                                  //!< u8NvmDfltSet;             - [NUM] Count of Maximal Default Sets
        0,                                                  //!< u16NvmDfltParamIdx;       - [NUM] Dflt Param Idx for the Default Sets
        0,                                                  //!< u16NvmFlashParamIdx;      - [NUM] Flash Param Idx for the Flash Sets
        1,                                                  //!< u8NvmLoadDfltSetChaParIdx - [NUM] Dflt Param Idx has change - load that default set
        1,                                                  //!< u8NvmLoadDfltSetFoundErr  - [NUM] List Error is there - load that default set
        TRUE,                                               //!< boNvmLoadFlashChaParIdx   - [NUM] Flash Param Idx has change - load that Flash Setting
        TRUE,                                               //!< boNvmLoadFlashFoundErr    - [NUM] List Error is there - load that Flash Setting
        TRUE,                                               //!< boNvmLoadFlashChaFlaSet   - [NUM] Flash Setting has change - load that Flash Setting
        FALSE,                                              //!< boNvmValueRangeCheck   - [NUM] List Range Check
        DB_SINGLE,                                          //!< u8NvmNvmListMode - [DEF] Single/Double
        TRUE,                                               //!< boNvmCrc - [DEF] with CRC
        0,                                                  //!< u16NvmAutoStartAdr - [NUM] Autostart Adr
        0,                                                  //!< u16NvmHeadAddr - [NUM] - only for NVMEM
    //!< ** Error (RAM/NvMem)
        { //!< List Error definition
            { //!< RAM Error
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT0_NOT,                               //!< u8ErrCat
                ACC_ALL_NO,                                 //!< u16ErrAccLevel
                0,                                          //!< u32ErrNum
                FMI_NONE,                                   //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            },
            { //!<  NVMEM Load
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT0_NOT,                               //!< u8ErrCat
                ACC_ALL_NO,                                 //!< u16ErrAccLevel
                0,                                          //!< u32ErrNum
                FMI_NONE,                                   //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            },
            { //!< NVMEM Store
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT0_NOT,                               //!< u8ErrCat
                ACC_ALL_NO,                                 //!< u16ErrAccLevel
                0,                                          //!< u32ErrNum
                FMI_NONE,                                   //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            },
            { //!<  NVMEM Backup
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT0_NOT,                               //!< u8ErrCat
                ACC_ALL_NO,                                 //!< u16ErrAccLevel
                0,                                          //!< u32ErrNum
                FMI_NONE,                                   //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            }
        }
    },
    {
    //!< ** General List Setting
        "RamEcuOutputsC1",                                  //!< achName[16]
        DB_RAM_ECU,                                         //!< u8ListClass - [DEF] RAM/NVMEM
        DB_RAM,                                             //!< u8ListType  - [DEF] RAM/NVMEM
        1,                                                  //!< u8ListIdx - List Index
        93,                                                 //!< u16VarMax - [NUM] Max Variable
        93,                                                 //!< u16NumValues - [NUM] Number of addressable values in list(counting each array value)
        135,                                                //!< u16ShadowBytes - [NUM] need Shadow RAM in Byte
        990U,                                               //!< u32Password - [NUM] DbList unique key
        &gDb_tRamEcuOutputsC1.tListRoot,                    //!< cptListRoot - [NUM] ListRoot
    //!< ** RAM General Setting
        &gDb_catVarTabRamEcuOutputsC1[0],                   //!< cptRamVarTab - [STC] Pointer of RAM
        DB_SINGLE,                                          //!< u8RamMode - [DEF] Single/Double
        TRUE,                                               //!< boRamCrc - [DEF] with CRC
    //!< ** NVMEM General Setting
        NULL,                                               //!< cptNvmVarTab - [STC] Pointer of NVMEM
        1,                                                  //!< u8NvmDfltSet;             - [NUM] Count of Maximal Default Sets
        0,                                                  //!< u16NvmDfltParamIdx;       - [NUM] Dflt Param Idx for the Default Sets
        0,                                                  //!< u16NvmFlashParamIdx;      - [NUM] Flash Param Idx for the Flash Sets
        1,                                                  //!< u8NvmLoadDfltSetChaParIdx - [NUM] Dflt Param Idx has change - load that default set
        1,                                                  //!< u8NvmLoadDfltSetFoundErr  - [NUM] List Error is there - load that default set
        TRUE,                                               //!< boNvmLoadFlashChaParIdx   - [NUM] Flash Param Idx has change - load that Flash Setting
        TRUE,                                               //!< boNvmLoadFlashFoundErr    - [NUM] List Error is there - load that Flash Setting
        TRUE,                                               //!< boNvmLoadFlashChaFlaSet   - [NUM] Flash Setting has change - load that Flash Setting
        FALSE,                                              //!< boNvmValueRangeCheck   - [NUM] List Range Check
        DB_SINGLE,                                          //!< u8NvmNvmListMode - [DEF] Single/Double
        TRUE,                                               //!< boNvmCrc - [DEF] with CRC
        0,                                                  //!< u16NvmAutoStartAdr - [NUM] Autostart Adr
        0,                                                  //!< u16NvmHeadAddr - [NUM] - only for NVMEM
    //!< ** Error (RAM/NvMem)
        { //!< List Error definition
            { //!< RAM Error
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT0_NOT,                               //!< u8ErrCat
                ACC_ALL_NO,                                 //!< u16ErrAccLevel
                0,                                          //!< u32ErrNum
                FMI_NONE,                                   //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            },
            { //!<  NVMEM Load
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT0_NOT,                               //!< u8ErrCat
                ACC_ALL_NO,                                 //!< u16ErrAccLevel
                0,                                          //!< u32ErrNum
                FMI_NONE,                                   //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            },
            { //!< NVMEM Store
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT0_NOT,                               //!< u8ErrCat
                ACC_ALL_NO,                                 //!< u16ErrAccLevel
                0,                                          //!< u32ErrNum
                FMI_NONE,                                   //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            },
            { //!<  NVMEM Backup
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT0_NOT,                               //!< u8ErrCat
                ACC_ALL_NO,                                 //!< u16ErrAccLevel
                0,                                          //!< u32ErrNum
                FMI_NONE,                                   //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            }
        }
    },
    {
    //!< ** General List Setting
        "RamGeneralC1",                                     //!< achName[16]
        DB_RAM_ECU,                                         //!< u8ListClass - [DEF] RAM/NVMEM
        DB_RAM,                                             //!< u8ListType  - [DEF] RAM/NVMEM
        2,                                                  //!< u8ListIdx - List Index
        46,                                                 //!< u16VarMax - [NUM] Max Variable
        50,                                                 //!< u16NumValues - [NUM] Number of addressable values in list(counting each array value)
        79,                                                 //!< u16ShadowBytes - [NUM] need Shadow RAM in Byte
        690U,                                               //!< u32Password - [NUM] DbList unique key
        &gDb_tRamGeneralC1.tListRoot,                       //!< cptListRoot - [NUM] ListRoot
    //!< ** RAM General Setting
        &gDb_catVarTabRamGeneralC1[0],                      //!< cptRamVarTab - [STC] Pointer of RAM
        DB_SINGLE,                                          //!< u8RamMode - [DEF] Single/Double
        TRUE,                                               //!< boRamCrc - [DEF] with CRC
    //!< ** NVMEM General Setting
        NULL,                                               //!< cptNvmVarTab - [STC] Pointer of NVMEM
        1,                                                  //!< u8NvmDfltSet;             - [NUM] Count of Maximal Default Sets
        0,                                                  //!< u16NvmDfltParamIdx;       - [NUM] Dflt Param Idx for the Default Sets
        0,                                                  //!< u16NvmFlashParamIdx;      - [NUM] Flash Param Idx for the Flash Sets
        1,                                                  //!< u8NvmLoadDfltSetChaParIdx - [NUM] Dflt Param Idx has change - load that default set
        1,                                                  //!< u8NvmLoadDfltSetFoundErr  - [NUM] List Error is there - load that default set
        TRUE,                                               //!< boNvmLoadFlashChaParIdx   - [NUM] Flash Param Idx has change - load that Flash Setting
        TRUE,                                               //!< boNvmLoadFlashFoundErr    - [NUM] List Error is there - load that Flash Setting
        TRUE,                                               //!< boNvmLoadFlashChaFlaSet   - [NUM] Flash Setting has change - load that Flash Setting
        FALSE,                                              //!< boNvmValueRangeCheck   - [NUM] List Range Check
        DB_SINGLE,                                          //!< u8NvmNvmListMode - [DEF] Single/Double
        TRUE,                                               //!< boNvmCrc - [DEF] with CRC
        0,                                                  //!< u16NvmAutoStartAdr - [NUM] Autostart Adr
        0,                                                  //!< u16NvmHeadAddr - [NUM] - only for NVMEM
    //!< ** Error (RAM/NvMem)
        { //!< List Error definition
            { //!< RAM Error
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT0_NOT,                               //!< u8ErrCat
                ACC_ALL_NO,                                 //!< u16ErrAccLevel
                0,                                          //!< u32ErrNum
                FMI_NONE,                                   //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            },
            { //!<  NVMEM Load
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT0_NOT,                               //!< u8ErrCat
                ACC_ALL_NO,                                 //!< u16ErrAccLevel
                0,                                          //!< u32ErrNum
                FMI_NONE,                                   //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            },
            { //!< NVMEM Store
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT0_NOT,                               //!< u8ErrCat
                ACC_ALL_NO,                                 //!< u16ErrAccLevel
                0,                                          //!< u32ErrNum
                FMI_NONE,                                   //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            },
            { //!<  NVMEM Backup
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT0_NOT,                               //!< u8ErrCat
                ACC_ALL_NO,                                 //!< u16ErrAccLevel
                0,                                          //!< u32ErrNum
                FMI_NONE,                                   //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            }
        }
    },
    {
    //!< ** General List Setting
        "NvOptionsC1",                                      //!< achName[16]
        DB_NVM_OPT,                                         //!< u8ListClass - [DEF] RAM/NVMEM
        DB_NVMEM,                                           //!< u8ListType  - [DEF] RAM/NVMEM
        3,                                                  //!< u8ListIdx - List Index
        13,                                                 //!< u16VarMax - [NUM] Max Variable
        13,                                                 //!< u16NumValues - [NUM] Number of addressable values in list(counting each array value)
        13,                                                 //!< u16ShadowBytes - [NUM] need Shadow RAM in Byte
        13U,                                                //!< u32Password - [NUM] DbList unique key
        &gDb_tNvOptionsC1.tListRoot,                        //!< cptListRoot - [NUM] ListRoot
    //!< ** RAM General Setting
        NULL,                                               //!< cptRamVarTab - [STC] Pointer of RAM
        DB_SINGLE,                                          //!< u8RamMode - [DEF] Single/Double
        TRUE,                                               //!< boRamCrc - [DEF] with CRC
    //!< ** NVMEM General Setting
        &gDb_catVarTabNvOptionsC1[0],                       //!< cptNvmVarTab - [STC] Pointer of NVMEM
        1,                                                  //!< u8NvmDfltSet;             - [NUM] Count of Maximal Default Sets
        0,                                                  //!< u16NvmDfltParamIdx;       - [NUM] Dflt Param Idx for the Default Sets
        0,                                                  //!< u16NvmFlashParamIdx;      - [NUM] Flash Param Idx for the Flash Sets
        1,                                                  //!< u8NvmLoadDfltSetChaParIdx - [NUM] Dflt Param Idx has change - load that default set
        1,                                                  //!< u8NvmLoadDfltSetFoundErr  - [NUM] List Error is there - load that default set
        TRUE,                                               //!< boNvmLoadFlashChaParIdx   - [NUM] Flash Param Idx has change - load that Flash Setting
        TRUE,                                               //!< boNvmLoadFlashFoundErr    - [NUM] List Error is there - load that Flash Setting
        TRUE,                                               //!< boNvmLoadFlashChaFlaSet   - [NUM] Flash Setting has change - load that Flash Setting
        FALSE,                                              //!< boNvmValueRangeCheck   - [NUM] List Range Check
        DB_DOUBLE,                                          //!< u8NvmNvmListMode - [DEF] Single/Double
        TRUE,                                               //!< boNvmCrc - [DEF] with CRC
        0,                                                  //!< u16NvmAutoStartAdr - [NUM] Autostart Adr
        2400,                                               //!< u16NvmDoubleStartAdr - [NUM] - List Double Start Adr
    //!< ** Error (RAM/NvMem)
        { //!< List Error definition
            { //!< RAM Error
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT0_NOT,                               //!< u8ErrCat
                ACC_ALL_NO,                                 //!< u16ErrAccLevel
                0,                                          //!< u32ErrNum
                FMI_NONE,                                   //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            },
            { //!<  NVMEM Load
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT5_MAL,                               //!< u8ErrCat
                0xAAAA,                                     //!< u16ErrAccLevel
                15941,                                      //!< u32ErrNum
                FMI_31_CONDITION_EXISTS,                    //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            },
            { //!< NVMEM Store
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT5_MAL,                               //!< u8ErrCat
                0xAAAA,                                     //!< u16ErrAccLevel
                15942,                                      //!< u32ErrNum
                FMI_31_CONDITION_EXISTS,                    //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            },
            { //!<  NVMEM Backup
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT5_MAL,                               //!< u8ErrCat
                0xAAAA,                                     //!< u16ErrAccLevel
                15943,                                      //!< u32ErrNum
                FMI_31_CONDITION_EXISTS,                    //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            }
        }
    },
    {
    //!< ** General List Setting
        "NvMemoryC1",                                       //!< achName[16]
        DB_NVM_MEM,                                         //!< u8ListClass - [DEF] RAM/NVMEM
        DB_NVMEM,                                           //!< u8ListType  - [DEF] RAM/NVMEM
        4,                                                  //!< u8ListIdx - List Index
        20,                                                 //!< u16VarMax - [NUM] Max Variable
        20,                                                 //!< u16NumValues - [NUM] Number of addressable values in list(counting each array value)
        33,                                                 //!< u16ShadowBytes - [NUM] need Shadow RAM in Byte
        263U,                                               //!< u32Password - [NUM] DbList unique key
        &gDb_tNvMemoryC1.tListRoot,                         //!< cptListRoot - [NUM] ListRoot
    //!< ** RAM General Setting
        NULL,                                               //!< cptRamVarTab - [STC] Pointer of RAM
        DB_SINGLE,                                          //!< u8RamMode - [DEF] Single/Double
        FALSE,                                              //!< boRamCrc - [DEF] with CRC
    //!< ** NVMEM General Setting
        &gDb_catVarTabNvMemoryC1[0],                        //!< cptNvmVarTab - [STC] Pointer of NVMEM
        1,                                                  //!< u8NvmDfltSet;             - [NUM] Count of Maximal Default Sets
        0,                                                  //!< u16NvmDfltParamIdx;       - [NUM] Dflt Param Idx for the Default Sets
        0,                                                  //!< u16NvmFlashParamIdx;      - [NUM] Flash Param Idx for the Flash Sets
        1,                                                  //!< u8NvmLoadDfltSetChaParIdx - [NUM] Dflt Param Idx has change - load that default set
        1,                                                  //!< u8NvmLoadDfltSetFoundErr  - [NUM] List Error is there - load that default set
        TRUE,                                               //!< boNvmLoadFlashChaParIdx   - [NUM] Flash Param Idx has change - load that Flash Setting
        TRUE,                                               //!< boNvmLoadFlashFoundErr    - [NUM] List Error is there - load that Flash Setting
        TRUE,                                               //!< boNvmLoadFlashChaFlaSet   - [NUM] Flash Setting has change - load that Flash Setting
        FALSE,                                              //!< boNvmValueRangeCheck   - [NUM] List Range Check
        DB_DOUBLE,                                          //!< u8NvmNvmListMode - [DEF] Single/Double
        TRUE,                                               //!< boNvmCrc - [DEF] with CRC
        200,                                                //!< u16NvmAutoStartAdr - [NUM] Autostart Adr
        2600,                                               //!< u16NvmDoubleStartAdr - [NUM] - List Double Start Adr
    //!< ** Error (RAM/NvMem)
        { //!< List Error definition
            { //!< RAM Error
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT0_NOT,                               //!< u8ErrCat
                ACC_ALL_NO,                                 //!< u16ErrAccLevel
                0,                                          //!< u32ErrNum
                FMI_NONE,                                   //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            },
            { //!<  NVMEM Load
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT5_MAL,                               //!< u8ErrCat
                0xAAAA,                                     //!< u16ErrAccLevel
                15944,                                      //!< u32ErrNum
                FMI_31_CONDITION_EXISTS,                    //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            },
            { //!< NVMEM Store
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT5_MAL,                               //!< u8ErrCat
                0xAAAA,                                     //!< u16ErrAccLevel
                15945,                                      //!< u32ErrNum
                FMI_31_CONDITION_EXISTS,                    //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            },
            { //!<  NVMEM Backup
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT5_MAL,                               //!< u8ErrCat
                0xAAAA,                                     //!< u16ErrAccLevel
                15946,                                      //!< u32ErrNum
                FMI_31_CONDITION_EXISTS,                    //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            }
        }
    },
    {
    //!< ** General List Setting
        "NvParametersC1",                                   //!< achName[16]
        DB_NVM_PAR,                                         //!< u8ListClass - [DEF] RAM/NVMEM
        DB_NVMEM,                                           //!< u8ListType  - [DEF] RAM/NVMEM
        5,                                                  //!< u8ListIdx - List Index
        210,                                                //!< u16VarMax - [NUM] Max Variable
        242,                                                //!< u16NumValues - [NUM] Number of addressable values in list(counting each array value)
        402,                                                //!< u16ShadowBytes - [NUM] need Shadow RAM in Byte
        4468U,                                              //!< u32Password - [NUM] DbList unique key
        &gDb_tNvParametersC1.tListRoot,                     //!< cptListRoot - [NUM] ListRoot
    //!< ** RAM General Setting
        NULL,                                               //!< cptRamVarTab - [STC] Pointer of RAM
        DB_SINGLE,                                          //!< u8RamMode - [DEF] Single/Double
        TRUE,                                               //!< boRamCrc - [DEF] with CRC
    //!< ** NVMEM General Setting
        &gDb_catVarTabNvParametersC1[0],                    //!< cptNvmVarTab - [STC] Pointer of NVMEM
        1,                                                  //!< u8NvmDfltSet;             - [NUM] Count of Maximal Default Sets
        0,                                                  //!< u16NvmDfltParamIdx;       - [NUM] Dflt Param Idx for the Default Sets
        0,                                                  //!< u16NvmFlashParamIdx;      - [NUM] Flash Param Idx for the Flash Sets
        1,                                                  //!< u8NvmLoadDfltSetChaParIdx - [NUM] Dflt Param Idx has change - load that default set
        1,                                                  //!< u8NvmLoadDfltSetFoundErr  - [NUM] List Error is there - load that default set
        TRUE,                                               //!< boNvmLoadFlashChaParIdx   - [NUM] Flash Param Idx has change - load that Flash Setting
        FALSE,                                              //!< boNvmLoadFlashFoundErr    - [NUM] List Error is there - load that Flash Setting
        TRUE,                                               //!< boNvmLoadFlashChaFlaSet   - [NUM] Flash Setting has change - load that Flash Setting
        FALSE,                                              //!< boNvmValueRangeCheck   - [NUM] List Range Check
        DB_DOUBLE,                                          //!< u8NvmNvmListMode - [DEF] Single/Double
        TRUE,                                               //!< boNvmCrc - [DEF] with CRC
        400,                                                //!< u16NvmAutoStartAdr - [NUM] Autostart Adr
        2800,                                               //!< u16NvmDoubleStartAdr - [NUM] - List Double Start Adr
    //!< ** Error (RAM/NvMem)
        { //!< List Error definition
            { //!< RAM Error
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT0_NOT,                               //!< u8ErrCat
                ACC_ALL_NO,                                 //!< u16ErrAccLevel
                0,                                          //!< u32ErrNum
                FMI_NONE,                                   //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            },
            { //!<  NVMEM Load
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT5_MAL,                               //!< u8ErrCat
                0xAAAA,                                     //!< u16ErrAccLevel
                15951,                                      //!< u32ErrNum
                FMI_31_CONDITION_EXISTS,                    //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            },
            { //!< NVMEM Store
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT5_MAL,                               //!< u8ErrCat
                0xAAAA,                                     //!< u16ErrAccLevel
                15952,                                      //!< u32ErrNum
                FMI_31_CONDITION_EXISTS,                    //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            },
            { //!<  NVMEM Backup
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT5_MAL,                               //!< u8ErrCat
                0xAAAA,                                     //!< u16ErrAccLevel
                15953,                                      //!< u32ErrNum
                FMI_31_CONDITION_EXISTS,                    //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            }
        }
    },
    {
    //!< ** General List Setting
        "NvCalibrationC1",                                  //!< achName[16]
        DB_NVM_CAL,                                         //!< u8ListClass - [DEF] RAM/NVMEM
        DB_NVMEM,                                           //!< u8ListType  - [DEF] RAM/NVMEM
        6,                                                  //!< u8ListIdx - List Index
        30,                                                 //!< u16VarMax - [NUM] Max Variable
        52,                                                 //!< u16NumValues - [NUM] Number of addressable values in list(counting each array value)
        104,                                                //!< u16ShadowBytes - [NUM] need Shadow RAM in Byte
        736U,                                               //!< u32Password - [NUM] DbList unique key
        &gDb_tNvCalibrationC1.tListRoot,                    //!< cptListRoot - [NUM] ListRoot
    //!< ** RAM General Setting
        NULL,                                               //!< cptRamVarTab - [STC] Pointer of RAM
        DB_SINGLE,                                          //!< u8RamMode - [DEF] Single/Double
        TRUE,                                               //!< boRamCrc - [DEF] with CRC
    //!< ** NVMEM General Setting
        &gDb_catVarTabNvCalibrationC1[0],                   //!< cptNvmVarTab - [STC] Pointer of NVMEM
        1,                                                  //!< u8NvmDfltSet;             - [NUM] Count of Maximal Default Sets
        0,                                                  //!< u16NvmDfltParamIdx;       - [NUM] Dflt Param Idx for the Default Sets
        0,                                                  //!< u16NvmFlashParamIdx;      - [NUM] Flash Param Idx for the Flash Sets
        1,                                                  //!< u8NvmLoadDfltSetChaParIdx - [NUM] Dflt Param Idx has change - load that default set
        1,                                                  //!< u8NvmLoadDfltSetFoundErr  - [NUM] List Error is there - load that default set
        TRUE,                                               //!< boNvmLoadFlashChaParIdx   - [NUM] Flash Param Idx has change - load that Flash Setting
        TRUE,                                               //!< boNvmLoadFlashFoundErr    - [NUM] List Error is there - load that Flash Setting
        TRUE,                                               //!< boNvmLoadFlashChaFlaSet   - [NUM] Flash Setting has change - load that Flash Setting
        FALSE,                                              //!< boNvmValueRangeCheck   - [NUM] List Range Check
        DB_DOUBLE,                                          //!< u8NvmNvmListMode - [DEF] Single/Double
        TRUE,                                               //!< boNvmCrc - [DEF] with CRC
        1000,                                               //!< u16NvmAutoStartAdr - [NUM] Autostart Adr
        3400,                                               //!< u16NvmDoubleStartAdr - [NUM] - List Double Start Adr
    //!< ** Error (RAM/NvMem)
        { //!< List Error definition
            { //!< RAM Error
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT0_NOT,                               //!< u8ErrCat
                ACC_ALL_NO,                                 //!< u16ErrAccLevel
                0,                                          //!< u32ErrNum
                FMI_NONE,                                   //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            },
            { //!<  NVMEM Load
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT5_MAL,                               //!< u8ErrCat
                0xAAAA,                                     //!< u16ErrAccLevel
                15954,                                      //!< u32ErrNum
                FMI_31_CONDITION_EXISTS,                    //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            },
            { //!< NVMEM Store
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT5_MAL,                               //!< u8ErrCat
                0xAAAA,                                     //!< u16ErrAccLevel
                15955,                                      //!< u32ErrNum
                FMI_31_CONDITION_EXISTS,                    //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            },
            { //!<  NVMEM Backup
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT5_MAL,                               //!< u8ErrCat
                0xAAAA,                                     //!< u16ErrAccLevel
                15956,                                      //!< u32ErrNum
                FMI_31_CONDITION_EXISTS,                    //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            }
        }
    },
    {
    //!< ** General List Setting
        "Ram48XsInputsC1",                                  //!< achName[16]
        DB_RAM_ECU,                                         //!< u8ListClass - [DEF] RAM/NVMEM
        DB_RAM,                                             //!< u8ListType  - [DEF] RAM/NVMEM
        7,                                                  //!< u8ListIdx - List Index
        56,                                                 //!< u16VarMax - [NUM] Max Variable
        56,                                                 //!< u16NumValues - [NUM] Number of addressable values in list(counting each array value)
        81,                                                 //!< u16ShadowBytes - [NUM] need Shadow RAM in Byte
        640U,                                               //!< u32Password - [NUM] DbList unique key
        &gDb_tRam48XsInputsC1.tListRoot,                    //!< cptListRoot - [NUM] ListRoot
    //!< ** RAM General Setting
        &gDb_catVarTabRam48XsInputsC1[0],                   //!< cptRamVarTab - [STC] Pointer of RAM
        DB_SINGLE,                                          //!< u8RamMode - [DEF] Single/Double
        TRUE,                                               //!< boRamCrc - [DEF] with CRC
    //!< ** NVMEM General Setting
        NULL,                                               //!< cptNvmVarTab - [STC] Pointer of NVMEM
        1,                                                  //!< u8NvmDfltSet;             - [NUM] Count of Maximal Default Sets
        0,                                                  //!< u16NvmDfltParamIdx;       - [NUM] Dflt Param Idx for the Default Sets
        0,                                                  //!< u16NvmFlashParamIdx;      - [NUM] Flash Param Idx for the Flash Sets
        1,                                                  //!< u8NvmLoadDfltSetChaParIdx - [NUM] Dflt Param Idx has change - load that default set
        1,                                                  //!< u8NvmLoadDfltSetFoundErr  - [NUM] List Error is there - load that default set
        TRUE,                                               //!< boNvmLoadFlashChaParIdx   - [NUM] Flash Param Idx has change - load that Flash Setting
        TRUE,                                               //!< boNvmLoadFlashFoundErr    - [NUM] List Error is there - load that Flash Setting
        TRUE,                                               //!< boNvmLoadFlashChaFlaSet   - [NUM] Flash Setting has change - load that Flash Setting
        FALSE,                                              //!< boNvmValueRangeCheck   - [NUM] List Range Check
        DB_SINGLE,                                          //!< u8NvmNvmListMode - [DEF] Single/Double
        TRUE,                                               //!< boNvmCrc - [DEF] with CRC
        0,                                                  //!< u16NvmAutoStartAdr - [NUM] Autostart Adr
        0,                                                  //!< u16NvmHeadAddr - [NUM] - only for NVMEM
    //!< ** Error (RAM/NvMem)
        { //!< List Error definition
            { //!< RAM Error
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT0_NOT,                               //!< u8ErrCat
                ACC_ALL_NO,                                 //!< u16ErrAccLevel
                0,                                          //!< u32ErrNum
                FMI_NONE,                                   //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            },
            { //!<  NVMEM Load
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT0_NOT,                               //!< u8ErrCat
                ACC_ALL_NO,                                 //!< u16ErrAccLevel
                0,                                          //!< u32ErrNum
                FMI_NONE,                                   //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            },
            { //!< NVMEM Store
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT0_NOT,                               //!< u8ErrCat
                ACC_ALL_NO,                                 //!< u16ErrAccLevel
                0,                                          //!< u32ErrNum
                FMI_NONE,                                   //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            },
            { //!<  NVMEM Backup
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT0_NOT,                               //!< u8ErrCat
                ACC_ALL_NO,                                 //!< u16ErrAccLevel
                0,                                          //!< u32ErrNum
                FMI_NONE,                                   //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            }
        }
    },
    {
    //!< ** General List Setting
        "RamRcvRadioCmdC1",                                 //!< achName[16]
        DB_RAM_ECU,                                         //!< u8ListClass - [DEF] RAM/NVMEM
        DB_RAM,                                             //!< u8ListType  - [DEF] RAM/NVMEM
        8,                                                  //!< u8ListIdx - List Index
        11,                                                 //!< u16VarMax - [NUM] Max Variable
        11,                                                 //!< u16NumValues - [NUM] Number of addressable values in list(counting each array value)
        11,                                                 //!< u16ShadowBytes - [NUM] need Shadow RAM in Byte
        11U,                                                //!< u32Password - [NUM] DbList unique key
        &gDb_tRamRcvRadioCmdC1.tListRoot,                   //!< cptListRoot - [NUM] ListRoot
    //!< ** RAM General Setting
        &gDb_catVarTabRamRcvRadioCmdC1[0],                  //!< cptRamVarTab - [STC] Pointer of RAM
        DB_SINGLE,                                          //!< u8RamMode - [DEF] Single/Double
        TRUE,                                               //!< boRamCrc - [DEF] with CRC
    //!< ** NVMEM General Setting
        NULL,                                               //!< cptNvmVarTab - [STC] Pointer of NVMEM
        1,                                                  //!< u8NvmDfltSet;             - [NUM] Count of Maximal Default Sets
        0,                                                  //!< u16NvmDfltParamIdx;       - [NUM] Dflt Param Idx for the Default Sets
        0,                                                  //!< u16NvmFlashParamIdx;      - [NUM] Flash Param Idx for the Flash Sets
        1,                                                  //!< u8NvmLoadDfltSetChaParIdx - [NUM] Dflt Param Idx has change - load that default set
        1,                                                  //!< u8NvmLoadDfltSetFoundErr  - [NUM] List Error is there - load that default set
        TRUE,                                               //!< boNvmLoadFlashChaParIdx   - [NUM] Flash Param Idx has change - load that Flash Setting
        TRUE,                                               //!< boNvmLoadFlashFoundErr    - [NUM] List Error is there - load that Flash Setting
        TRUE,                                               //!< boNvmLoadFlashChaFlaSet   - [NUM] Flash Setting has change - load that Flash Setting
        FALSE,                                              //!< boNvmValueRangeCheck   - [NUM] List Range Check
        DB_SINGLE,                                          //!< u8NvmNvmListMode - [DEF] Single/Double
        TRUE,                                               //!< boNvmCrc - [DEF] with CRC
        0,                                                  //!< u16NvmAutoStartAdr - [NUM] Autostart Adr
        0,                                                  //!< u16NvmHeadAddr - [NUM] - only for NVMEM
    //!< ** Error (RAM/NvMem)
        { //!< List Error definition
            { //!< RAM Error
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT0_NOT,                               //!< u8ErrCat
                ACC_ALL_NO,                                 //!< u16ErrAccLevel
                0,                                          //!< u32ErrNum
                FMI_NONE,                                   //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            },
            { //!<  NVMEM Load
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT0_NOT,                               //!< u8ErrCat
                ACC_ALL_NO,                                 //!< u16ErrAccLevel
                0,                                          //!< u32ErrNum
                FMI_NONE,                                   //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            },
            { //!< NVMEM Store
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT0_NOT,                               //!< u8ErrCat
                ACC_ALL_NO,                                 //!< u16ErrAccLevel
                0,                                          //!< u32ErrNum
                FMI_NONE,                                   //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            },
            { //!<  NVMEM Backup
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT0_NOT,                               //!< u8ErrCat
                ACC_ALL_NO,                                 //!< u16ErrAccLevel
                0,                                          //!< u32ErrNum
                FMI_NONE,                                   //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            }
        }
    },
    {
    //!< ** General List Setting
        "RamLimitMoveC1",                                   //!< achName[16]
        DB_RAM_ECU,                                         //!< u8ListClass - [DEF] RAM/NVMEM
        DB_RAM,                                             //!< u8ListType  - [DEF] RAM/NVMEM
        9,                                                  //!< u8ListIdx - List Index
        14,                                                 //!< u16VarMax - [NUM] Max Variable
        14,                                                 //!< u16NumValues - [NUM] Number of addressable values in list(counting each array value)
        14,                                                 //!< u16ShadowBytes - [NUM] need Shadow RAM in Byte
        14U,                                                //!< u32Password - [NUM] DbList unique key
        &gDb_tRamLimitMoveC1.tListRoot,                     //!< cptListRoot - [NUM] ListRoot
    //!< ** RAM General Setting
        &gDb_catVarTabRamLimitMoveC1[0],                    //!< cptRamVarTab - [STC] Pointer of RAM
        DB_SINGLE,                                          //!< u8RamMode - [DEF] Single/Double
        TRUE,                                               //!< boRamCrc - [DEF] with CRC
    //!< ** NVMEM General Setting
        NULL,                                               //!< cptNvmVarTab - [STC] Pointer of NVMEM
        1,                                                  //!< u8NvmDfltSet;             - [NUM] Count of Maximal Default Sets
        0,                                                  //!< u16NvmDfltParamIdx;       - [NUM] Dflt Param Idx for the Default Sets
        0,                                                  //!< u16NvmFlashParamIdx;      - [NUM] Flash Param Idx for the Flash Sets
        1,                                                  //!< u8NvmLoadDfltSetChaParIdx - [NUM] Dflt Param Idx has change - load that default set
        1,                                                  //!< u8NvmLoadDfltSetFoundErr  - [NUM] List Error is there - load that default set
        TRUE,                                               //!< boNvmLoadFlashChaParIdx   - [NUM] Flash Param Idx has change - load that Flash Setting
        TRUE,                                               //!< boNvmLoadFlashFoundErr    - [NUM] List Error is there - load that Flash Setting
        TRUE,                                               //!< boNvmLoadFlashChaFlaSet   - [NUM] Flash Setting has change - load that Flash Setting
        FALSE,                                              //!< boNvmValueRangeCheck   - [NUM] List Range Check
        DB_SINGLE,                                          //!< u8NvmNvmListMode - [DEF] Single/Double
        TRUE,                                               //!< boNvmCrc - [DEF] with CRC
        0,                                                  //!< u16NvmAutoStartAdr - [NUM] Autostart Adr
        0,                                                  //!< u16NvmHeadAddr - [NUM] - only for NVMEM
    //!< ** Error (RAM/NvMem)
        { //!< List Error definition
            { //!< RAM Error
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT0_NOT,                               //!< u8ErrCat
                ACC_ALL_NO,                                 //!< u16ErrAccLevel
                0,                                          //!< u32ErrNum
                FMI_NONE,                                   //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            },
            { //!<  NVMEM Load
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT0_NOT,                               //!< u8ErrCat
                ACC_ALL_NO,                                 //!< u16ErrAccLevel
                0,                                          //!< u32ErrNum
                FMI_NONE,                                   //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            },
            { //!< NVMEM Store
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT0_NOT,                               //!< u8ErrCat
                ACC_ALL_NO,                                 //!< u16ErrAccLevel
                0,                                          //!< u32ErrNum
                FMI_NONE,                                   //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            },
            { //!<  NVMEM Backup
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT0_NOT,                               //!< u8ErrCat
                ACC_ALL_NO,                                 //!< u16ErrAccLevel
                0,                                          //!< u32ErrNum
                FMI_NONE,                                   //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            }
        }
    },
    {
    //!< ** General List Setting
        "NvParamMotorC1",                                   //!< achName[16]
        DB_NVM_PAR,                                         //!< u8ListClass - [DEF] RAM/NVMEM
        DB_NVMEM,                                           //!< u8ListType  - [DEF] RAM/NVMEM
        10,                                                 //!< u8ListIdx - List Index
        13,                                                 //!< u16VarMax - [NUM] Max Variable
        13,                                                 //!< u16NumValues - [NUM] Number of addressable values in list(counting each array value)
        29,                                                 //!< u16ShadowBytes - [NUM] need Shadow RAM in Byte
        308U,                                               //!< u32Password - [NUM] DbList unique key
        &gDb_tNvParamMotorC1.tListRoot,                     //!< cptListRoot - [NUM] ListRoot
    //!< ** RAM General Setting
        NULL,                                               //!< cptRamVarTab - [STC] Pointer of RAM
        DB_SINGLE,                                          //!< u8RamMode - [DEF] Single/Double
        TRUE,                                               //!< boRamCrc - [DEF] with CRC
    //!< ** NVMEM General Setting
        &gDb_catVarTabNvParamMotorC1[0],                    //!< cptNvmVarTab - [STC] Pointer of NVMEM
        1,                                                  //!< u8NvmDfltSet;             - [NUM] Count of Maximal Default Sets
        0,                                                  //!< u16NvmDfltParamIdx;       - [NUM] Dflt Param Idx for the Default Sets
        0,                                                  //!< u16NvmFlashParamIdx;      - [NUM] Flash Param Idx for the Flash Sets
        1,                                                  //!< u8NvmLoadDfltSetChaParIdx - [NUM] Dflt Param Idx has change - load that default set
        1,                                                  //!< u8NvmLoadDfltSetFoundErr  - [NUM] List Error is there - load that default set
        TRUE,                                               //!< boNvmLoadFlashChaParIdx   - [NUM] Flash Param Idx has change - load that Flash Setting
        FALSE,                                              //!< boNvmLoadFlashFoundErr    - [NUM] List Error is there - load that Flash Setting
        TRUE,                                               //!< boNvmLoadFlashChaFlaSet   - [NUM] Flash Setting has change - load that Flash Setting
        FALSE,                                              //!< boNvmValueRangeCheck   - [NUM] List Range Check
        DB_DOUBLE,                                          //!< u8NvmNvmListMode - [DEF] Single/Double
        TRUE,                                               //!< boNvmCrc - [DEF] with CRC
        1200,                                               //!< u16NvmAutoStartAdr - [NUM] Autostart Adr
        3600,                                               //!< u16NvmDoubleStartAdr - [NUM] - List Double Start Adr
    //!< ** Error (RAM/NvMem)
        { //!< List Error definition
            { //!< RAM Error
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT0_NOT,                               //!< u8ErrCat
                ACC_ALL_NO,                                 //!< u16ErrAccLevel
                0,                                          //!< u32ErrNum
                FMI_NONE,                                   //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            },
            { //!<  NVMEM Load
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT5_MAL,                               //!< u8ErrCat
                0xAAAA,                                     //!< u16ErrAccLevel
                15975,                                      //!< u32ErrNum
                FMI_31_CONDITION_EXISTS,                    //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            },
            { //!< NVMEM Store
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT5_MAL,                               //!< u8ErrCat
                0xAAAA,                                     //!< u16ErrAccLevel
                15976,                                      //!< u32ErrNum
                FMI_31_CONDITION_EXISTS,                    //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            },
            { //!<  NVMEM Backup
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT5_MAL,                               //!< u8ErrCat
                0xAAAA,                                     //!< u16ErrAccLevel
                15977,                                      //!< u32ErrNum
                FMI_31_CONDITION_EXISTS,                    //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            }
        }
    },
    {
    //!< ** General List Setting
        "Ram48XsOutputsC1",                                 //!< achName[16]
        DB_RAM_ECU,                                         //!< u8ListClass - [DEF] RAM/NVMEM
        DB_RAM,                                             //!< u8ListType  - [DEF] RAM/NVMEM
        11,                                                 //!< u8ListIdx - List Index
        23,                                                 //!< u16VarMax - [NUM] Max Variable
        23,                                                 //!< u16NumValues - [NUM] Number of addressable values in list(counting each array value)
        34,                                                 //!< u16ShadowBytes - [NUM] need Shadow RAM in Byte
        244U,                                               //!< u32Password - [NUM] DbList unique key
        &gDb_tRam48XsOutputsC1.tListRoot,                   //!< cptListRoot - [NUM] ListRoot
    //!< ** RAM General Setting
        &gDb_catVarTabRam48XsOutputsC1[0],                  //!< cptRamVarTab - [STC] Pointer of RAM
        DB_SINGLE,                                          //!< u8RamMode - [DEF] Single/Double
        TRUE,                                               //!< boRamCrc - [DEF] with CRC
    //!< ** NVMEM General Setting
        NULL,                                               //!< cptNvmVarTab - [STC] Pointer of NVMEM
        1,                                                  //!< u8NvmDfltSet;             - [NUM] Count of Maximal Default Sets
        0,                                                  //!< u16NvmDfltParamIdx;       - [NUM] Dflt Param Idx for the Default Sets
        0,                                                  //!< u16NvmFlashParamIdx;      - [NUM] Flash Param Idx for the Flash Sets
        1,                                                  //!< u8NvmLoadDfltSetChaParIdx - [NUM] Dflt Param Idx has change - load that default set
        1,                                                  //!< u8NvmLoadDfltSetFoundErr  - [NUM] List Error is there - load that default set
        TRUE,                                               //!< boNvmLoadFlashChaParIdx   - [NUM] Flash Param Idx has change - load that Flash Setting
        TRUE,                                               //!< boNvmLoadFlashFoundErr    - [NUM] List Error is there - load that Flash Setting
        TRUE,                                               //!< boNvmLoadFlashChaFlaSet   - [NUM] Flash Setting has change - load that Flash Setting
        FALSE,                                              //!< boNvmValueRangeCheck   - [NUM] List Range Check
        DB_SINGLE,                                          //!< u8NvmNvmListMode - [DEF] Single/Double
        TRUE,                                               //!< boNvmCrc - [DEF] with CRC
        0,                                                  //!< u16NvmAutoStartAdr - [NUM] Autostart Adr
        0,                                                  //!< u16NvmHeadAddr - [NUM] - only for NVMEM
    //!< ** Error (RAM/NvMem)
        { //!< List Error definition
            { //!< RAM Error
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT0_NOT,                               //!< u8ErrCat
                ACC_ALL_NO,                                 //!< u16ErrAccLevel
                0,                                          //!< u32ErrNum
                FMI_NONE,                                   //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            },
            { //!<  NVMEM Load
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT0_NOT,                               //!< u8ErrCat
                ACC_ALL_NO,                                 //!< u16ErrAccLevel
                0,                                          //!< u32ErrNum
                FMI_NONE,                                   //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            },
            { //!< NVMEM Store
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT0_NOT,                               //!< u8ErrCat
                ACC_ALL_NO,                                 //!< u16ErrAccLevel
                0,                                          //!< u32ErrNum
                FMI_NONE,                                   //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            },
            { //!<  NVMEM Backup
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT0_NOT,                               //!< u8ErrCat
                ACC_ALL_NO,                                 //!< u16ErrAccLevel
                0,                                          //!< u32ErrNum
                FMI_NONE,                                   //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            }
        }
    },
    {
    //!< ** General List Setting
        "RamEcuC1RcvFromC0",                                //!< achName[16]
        DB_RAM_ECU,                                         //!< u8ListClass - [DEF] RAM/NVMEM
        DB_RAM,                                             //!< u8ListType  - [DEF] RAM/NVMEM
        12,                                                 //!< u8ListIdx - List Index
        41,                                                 //!< u16VarMax - [NUM] Max Variable
        41,                                                 //!< u16NumValues - [NUM] Number of addressable values in list(counting each array value)
        55,                                                 //!< u16ShadowBytes - [NUM] need Shadow RAM in Byte
        277U,                                               //!< u32Password - [NUM] DbList unique key
        &gDb_tRamEcuC1RcvFromC0.tListRoot,                  //!< cptListRoot - [NUM] ListRoot
    //!< ** RAM General Setting
        &gDb_catVarTabRamEcuC1RcvFromC0[0],                 //!< cptRamVarTab - [STC] Pointer of RAM
        DB_SINGLE,                                          //!< u8RamMode - [DEF] Single/Double
        TRUE,                                               //!< boRamCrc - [DEF] with CRC
    //!< ** NVMEM General Setting
        NULL,                                               //!< cptNvmVarTab - [STC] Pointer of NVMEM
        1,                                                  //!< u8NvmDfltSet;             - [NUM] Count of Maximal Default Sets
        0,                                                  //!< u16NvmDfltParamIdx;       - [NUM] Dflt Param Idx for the Default Sets
        0,                                                  //!< u16NvmFlashParamIdx;      - [NUM] Flash Param Idx for the Flash Sets
        1,                                                  //!< u8NvmLoadDfltSetChaParIdx - [NUM] Dflt Param Idx has change - load that default set
        1,                                                  //!< u8NvmLoadDfltSetFoundErr  - [NUM] List Error is there - load that default set
        TRUE,                                               //!< boNvmLoadFlashChaParIdx   - [NUM] Flash Param Idx has change - load that Flash Setting
        TRUE,                                               //!< boNvmLoadFlashFoundErr    - [NUM] List Error is there - load that Flash Setting
        TRUE,                                               //!< boNvmLoadFlashChaFlaSet   - [NUM] Flash Setting has change - load that Flash Setting
        FALSE,                                              //!< boNvmValueRangeCheck   - [NUM] List Range Check
        DB_SINGLE,                                          //!< u8NvmNvmListMode - [DEF] Single/Double
        TRUE,                                               //!< boNvmCrc - [DEF] with CRC
        0,                                                  //!< u16NvmAutoStartAdr - [NUM] Autostart Adr
        0,                                                  //!< u16NvmHeadAddr - [NUM] - only for NVMEM
    //!< ** Error (RAM/NvMem)
        { //!< List Error definition
            { //!< RAM Error
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT0_NOT,                               //!< u8ErrCat
                ACC_ALL_NO,                                 //!< u16ErrAccLevel
                0,                                          //!< u32ErrNum
                FMI_NONE,                                   //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            },
            { //!<  NVMEM Load
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT0_NOT,                               //!< u8ErrCat
                ACC_ALL_NO,                                 //!< u16ErrAccLevel
                0,                                          //!< u32ErrNum
                FMI_NONE,                                   //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            },
            { //!< NVMEM Store
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT0_NOT,                               //!< u8ErrCat
                ACC_ALL_NO,                                 //!< u16ErrAccLevel
                0,                                          //!< u32ErrNum
                FMI_NONE,                                   //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            },
            { //!<  NVMEM Backup
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT0_NOT,                               //!< u8ErrCat
                ACC_ALL_NO,                                 //!< u16ErrAccLevel
                0,                                          //!< u32ErrNum
                FMI_NONE,                                   //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            }
        }
    },
    {
    //!< ** General List Setting
        "RamEcuEvision7C1",                                 //!< achName[16]
        DB_RAM_ECU,                                         //!< u8ListClass - [DEF] RAM/NVMEM
        DB_RAM,                                             //!< u8ListType  - [DEF] RAM/NVMEM
        13,                                                 //!< u8ListIdx - List Index
        41,                                                 //!< u16VarMax - [NUM] Max Variable
        41,                                                 //!< u16NumValues - [NUM] Number of addressable values in list(counting each array value)
        42,                                                 //!< u16ShadowBytes - [NUM] need Shadow RAM in Byte
        98U,                                                //!< u32Password - [NUM] DbList unique key
        &gDb_tRamEcuEvision7C1.tListRoot,                   //!< cptListRoot - [NUM] ListRoot
    //!< ** RAM General Setting
        &gDb_catVarTabRamEcuEvision7C1[0],                  //!< cptRamVarTab - [STC] Pointer of RAM
        DB_SINGLE,                                          //!< u8RamMode - [DEF] Single/Double
        TRUE,                                               //!< boRamCrc - [DEF] with CRC
    //!< ** NVMEM General Setting
        NULL,                                               //!< cptNvmVarTab - [STC] Pointer of NVMEM
        1,                                                  //!< u8NvmDfltSet;             - [NUM] Count of Maximal Default Sets
        0,                                                  //!< u16NvmDfltParamIdx;       - [NUM] Dflt Param Idx for the Default Sets
        0,                                                  //!< u16NvmFlashParamIdx;      - [NUM] Flash Param Idx for the Flash Sets
        1,                                                  //!< u8NvmLoadDfltSetChaParIdx - [NUM] Dflt Param Idx has change - load that default set
        1,                                                  //!< u8NvmLoadDfltSetFoundErr  - [NUM] List Error is there - load that default set
        TRUE,                                               //!< boNvmLoadFlashChaParIdx   - [NUM] Flash Param Idx has change - load that Flash Setting
        TRUE,                                               //!< boNvmLoadFlashFoundErr    - [NUM] List Error is there - load that Flash Setting
        TRUE,                                               //!< boNvmLoadFlashChaFlaSet   - [NUM] Flash Setting has change - load that Flash Setting
        FALSE,                                              //!< boNvmValueRangeCheck   - [NUM] List Range Check
        DB_SINGLE,                                          //!< u8NvmNvmListMode - [DEF] Single/Double
        TRUE,                                               //!< boNvmCrc - [DEF] with CRC
        0,                                                  //!< u16NvmAutoStartAdr - [NUM] Autostart Adr
        0,                                                  //!< u16NvmHeadAddr - [NUM] - only for NVMEM
    //!< ** Error (RAM/NvMem)
        { //!< List Error definition
            { //!< RAM Error
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT0_NOT,                               //!< u8ErrCat
                ACC_ALL_NO,                                 //!< u16ErrAccLevel
                0,                                          //!< u32ErrNum
                FMI_NONE,                                   //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            },
            { //!<  NVMEM Load
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT0_NOT,                               //!< u8ErrCat
                ACC_ALL_NO,                                 //!< u16ErrAccLevel
                0,                                          //!< u32ErrNum
                FMI_NONE,                                   //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            },
            { //!< NVMEM Store
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT0_NOT,                               //!< u8ErrCat
                ACC_ALL_NO,                                 //!< u16ErrAccLevel
                0,                                          //!< u32ErrNum
                FMI_NONE,                                   //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            },
            { //!<  NVMEM Backup
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT0_NOT,                               //!< u8ErrCat
                ACC_ALL_NO,                                 //!< u16ErrAccLevel
                0,                                          //!< u32ErrNum
                FMI_NONE,                                   //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            }
        }
    },
    {
    //!< ** General List Setting
        "RamEvision4C1",                                    //!< achName[16]
        DB_RAM_ECU,                                         //!< u8ListClass - [DEF] RAM/NVMEM
        DB_RAM,                                             //!< u8ListType  - [DEF] RAM/NVMEM
        14,                                                 //!< u8ListIdx - List Index
        29,                                                 //!< u16VarMax - [NUM] Max Variable
        29,                                                 //!< u16NumValues - [NUM] Number of addressable values in list(counting each array value)
        29,                                                 //!< u16ShadowBytes - [NUM] need Shadow RAM in Byte
        83U,                                                //!< u32Password - [NUM] DbList unique key
        &gDb_tRamEvision4C1.tListRoot,                      //!< cptListRoot - [NUM] ListRoot
    //!< ** RAM General Setting
        &gDb_catVarTabRamEvision4C1[0],                     //!< cptRamVarTab - [STC] Pointer of RAM
        DB_SINGLE,                                          //!< u8RamMode - [DEF] Single/Double
        TRUE,                                               //!< boRamCrc - [DEF] with CRC
    //!< ** NVMEM General Setting
        NULL,                                               //!< cptNvmVarTab - [STC] Pointer of NVMEM
        1,                                                  //!< u8NvmDfltSet;             - [NUM] Count of Maximal Default Sets
        0,                                                  //!< u16NvmDfltParamIdx;       - [NUM] Dflt Param Idx for the Default Sets
        0,                                                  //!< u16NvmFlashParamIdx;      - [NUM] Flash Param Idx for the Flash Sets
        1,                                                  //!< u8NvmLoadDfltSetChaParIdx - [NUM] Dflt Param Idx has change - load that default set
        1,                                                  //!< u8NvmLoadDfltSetFoundErr  - [NUM] List Error is there - load that default set
        TRUE,                                               //!< boNvmLoadFlashChaParIdx   - [NUM] Flash Param Idx has change - load that Flash Setting
        TRUE,                                               //!< boNvmLoadFlashFoundErr    - [NUM] List Error is there - load that Flash Setting
        TRUE,                                               //!< boNvmLoadFlashChaFlaSet   - [NUM] Flash Setting has change - load that Flash Setting
        FALSE,                                              //!< boNvmValueRangeCheck   - [NUM] List Range Check
        DB_SINGLE,                                          //!< u8NvmNvmListMode - [DEF] Single/Double
        TRUE,                                               //!< boNvmCrc - [DEF] with CRC
        0,                                                  //!< u16NvmAutoStartAdr - [NUM] Autostart Adr
        0,                                                  //!< u16NvmHeadAddr - [NUM] - only for NVMEM
    //!< ** Error (RAM/NvMem)
        { //!< List Error definition
            { //!< RAM Error
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT0_NOT,                               //!< u8ErrCat
                ACC_ALL_NO,                                 //!< u16ErrAccLevel
                0,                                          //!< u32ErrNum
                FMI_NONE,                                   //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            },
            { //!<  NVMEM Load
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT0_NOT,                               //!< u8ErrCat
                ACC_ALL_NO,                                 //!< u16ErrAccLevel
                0,                                          //!< u32ErrNum
                FMI_NONE,                                   //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            },
            { //!< NVMEM Store
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT0_NOT,                               //!< u8ErrCat
                ACC_ALL_NO,                                 //!< u16ErrAccLevel
                0,                                          //!< u32ErrNum
                FMI_NONE,                                   //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            },
            { //!<  NVMEM Backup
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT0_NOT,                               //!< u8ErrCat
                ACC_ALL_NO,                                 //!< u16ErrAccLevel
                0,                                          //!< u32ErrNum
                FMI_NONE,                                   //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            }
        }
    },
    {
    //!< ** General List Setting
        "RamEcuCaliCmdC1",                                  //!< achName[16]
        DB_RAM_ECU,                                         //!< u8ListClass - [DEF] RAM/NVMEM
        DB_RAM,                                             //!< u8ListType  - [DEF] RAM/NVMEM
        15,                                                 //!< u8ListIdx - List Index
        7,                                                  //!< u16VarMax - [NUM] Max Variable
        7,                                                  //!< u16NumValues - [NUM] Number of addressable values in list(counting each array value)
        7,                                                  //!< u16ShadowBytes - [NUM] need Shadow RAM in Byte
        7U,                                                 //!< u32Password - [NUM] DbList unique key
        &gDb_tRamEcuCaliCmdC1.tListRoot,                    //!< cptListRoot - [NUM] ListRoot
    //!< ** RAM General Setting
        &gDb_catVarTabRamEcuCaliCmdC1[0],                   //!< cptRamVarTab - [STC] Pointer of RAM
        DB_SINGLE,                                          //!< u8RamMode - [DEF] Single/Double
        TRUE,                                               //!< boRamCrc - [DEF] with CRC
    //!< ** NVMEM General Setting
        NULL,                                               //!< cptNvmVarTab - [STC] Pointer of NVMEM
        1,                                                  //!< u8NvmDfltSet;             - [NUM] Count of Maximal Default Sets
        0,                                                  //!< u16NvmDfltParamIdx;       - [NUM] Dflt Param Idx for the Default Sets
        0,                                                  //!< u16NvmFlashParamIdx;      - [NUM] Flash Param Idx for the Flash Sets
        1,                                                  //!< u8NvmLoadDfltSetChaParIdx - [NUM] Dflt Param Idx has change - load that default set
        1,                                                  //!< u8NvmLoadDfltSetFoundErr  - [NUM] List Error is there - load that default set
        TRUE,                                               //!< boNvmLoadFlashChaParIdx   - [NUM] Flash Param Idx has change - load that Flash Setting
        TRUE,                                               //!< boNvmLoadFlashFoundErr    - [NUM] List Error is there - load that Flash Setting
        TRUE,                                               //!< boNvmLoadFlashChaFlaSet   - [NUM] Flash Setting has change - load that Flash Setting
        FALSE,                                              //!< boNvmValueRangeCheck   - [NUM] List Range Check
        DB_SINGLE,                                          //!< u8NvmNvmListMode - [DEF] Single/Double
        TRUE,                                               //!< boNvmCrc - [DEF] with CRC
        0,                                                  //!< u16NvmAutoStartAdr - [NUM] Autostart Adr
        0,                                                  //!< u16NvmHeadAddr - [NUM] - only for NVMEM
    //!< ** Error (RAM/NvMem)
        { //!< List Error definition
            { //!< RAM Error
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT0_NOT,                               //!< u8ErrCat
                ACC_ALL_NO,                                 //!< u16ErrAccLevel
                0,                                          //!< u32ErrNum
                FMI_NONE,                                   //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            },
            { //!<  NVMEM Load
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT0_NOT,                               //!< u8ErrCat
                ACC_ALL_NO,                                 //!< u16ErrAccLevel
                0,                                          //!< u32ErrNum
                FMI_NONE,                                   //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            },
            { //!< NVMEM Store
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT0_NOT,                               //!< u8ErrCat
                ACC_ALL_NO,                                 //!< u16ErrAccLevel
                0,                                          //!< u32ErrNum
                FMI_NONE,                                   //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            },
            { //!<  NVMEM Backup
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT0_NOT,                               //!< u8ErrCat
                ACC_ALL_NO,                                 //!< u16ErrAccLevel
                0,                                          //!< u32ErrNum
                FMI_NONE,                                   //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            }
        }
    },
    {
    //!< ** General List Setting
        "NvParamLimitWorkEnvelopeC1",                       //!< achName[16]
        DB_NVM_PAR,                                         //!< u8ListClass - [DEF] RAM/NVMEM
        DB_NVMEM,                                           //!< u8ListType  - [DEF] RAM/NVMEM
        16,                                                 //!< u8ListIdx - List Index
        24,                                                 //!< u16VarMax - [NUM] Max Variable
        56,                                                 //!< u16NumValues - [NUM] Number of addressable values in list(counting each array value)
        111,                                                //!< u16ShadowBytes - [NUM] need Shadow RAM in Byte
        580U,                                               //!< u32Password - [NUM] DbList unique key
        &gDb_tNvParamLimitWorkEnvelopeC1.tListRoot,         //!< cptListRoot - [NUM] ListRoot
    //!< ** RAM General Setting
        NULL,                                               //!< cptRamVarTab - [STC] Pointer of RAM
        DB_SINGLE,                                          //!< u8RamMode - [DEF] Single/Double
        TRUE,                                               //!< boRamCrc - [DEF] with CRC
    //!< ** NVMEM General Setting
        &gDb_catVarTabNvParamLimitWorkEnvelopeC1[0],        //!< cptNvmVarTab - [STC] Pointer of NVMEM
        1,                                                  //!< u8NvmDfltSet;             - [NUM] Count of Maximal Default Sets
        0,                                                  //!< u16NvmDfltParamIdx;       - [NUM] Dflt Param Idx for the Default Sets
        0,                                                  //!< u16NvmFlashParamIdx;      - [NUM] Flash Param Idx for the Flash Sets
        1,                                                  //!< u8NvmLoadDfltSetChaParIdx - [NUM] Dflt Param Idx has change - load that default set
        1,                                                  //!< u8NvmLoadDfltSetFoundErr  - [NUM] List Error is there - load that default set
        TRUE,                                               //!< boNvmLoadFlashChaParIdx   - [NUM] Flash Param Idx has change - load that Flash Setting
        FALSE,                                              //!< boNvmLoadFlashFoundErr    - [NUM] List Error is there - load that Flash Setting
        TRUE,                                               //!< boNvmLoadFlashChaFlaSet   - [NUM] Flash Setting has change - load that Flash Setting
        FALSE,                                              //!< boNvmValueRangeCheck   - [NUM] List Range Check
        DB_DOUBLE,                                          //!< u8NvmNvmListMode - [DEF] Single/Double
        TRUE,                                               //!< boNvmCrc - [DEF] with CRC
        1400,                                               //!< u16NvmAutoStartAdr - [NUM] Autostart Adr
        3800,                                               //!< u16NvmDoubleStartAdr - [NUM] - List Double Start Adr
    //!< ** Error (RAM/NvMem)
        { //!< List Error definition
            { //!< RAM Error
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT0_NOT,                               //!< u8ErrCat
                ACC_ALL_NO,                                 //!< u16ErrAccLevel
                0,                                          //!< u32ErrNum
                FMI_NONE,                                   //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            },
            { //!<  NVMEM Load
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT5_MAL,                               //!< u8ErrCat
                0xAAAA,                                     //!< u16ErrAccLevel
                16057,                                      //!< u32ErrNum
                FMI_31_CONDITION_EXISTS,                    //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            },
            { //!< NVMEM Store
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT5_MAL,                               //!< u8ErrCat
                0xAAAA,                                     //!< u16ErrAccLevel
                16058,                                      //!< u32ErrNum
                FMI_31_CONDITION_EXISTS,                    //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            },
            { //!<  NVMEM Backup
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT5_MAL,                               //!< u8ErrCat
                0xAAAA,                                     //!< u16ErrAccLevel
                16060,                                      //!< u32ErrNum
                FMI_31_CONDITION_EXISTS,                    //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            }
        }
    },
    {
    //!< ** General List Setting
        "RamLimitWorkEnvelopeC1",                           //!< achName[16]
        DB_RAM_ECU,                                         //!< u8ListClass - [DEF] RAM/NVMEM
        DB_RAM,                                             //!< u8ListType  - [DEF] RAM/NVMEM
        17,                                                 //!< u8ListIdx - List Index
        20,                                                 //!< u16VarMax - [NUM] Max Variable
        20,                                                 //!< u16NumValues - [NUM] Number of addressable values in list(counting each array value)
        27,                                                 //!< u16ShadowBytes - [NUM] need Shadow RAM in Byte
        153U,                                               //!< u32Password - [NUM] DbList unique key
        &gDb_tRamLimitWorkEnvelopeC1.tListRoot,             //!< cptListRoot - [NUM] ListRoot
    //!< ** RAM General Setting
        &gDb_catVarTabRamLimitWorkEnvelopeC1[0],            //!< cptRamVarTab - [STC] Pointer of RAM
        DB_SINGLE,                                          //!< u8RamMode - [DEF] Single/Double
        TRUE,                                               //!< boRamCrc - [DEF] with CRC
    //!< ** NVMEM General Setting
        NULL,                                               //!< cptNvmVarTab - [STC] Pointer of NVMEM
        1,                                                  //!< u8NvmDfltSet;             - [NUM] Count of Maximal Default Sets
        0,                                                  //!< u16NvmDfltParamIdx;       - [NUM] Dflt Param Idx for the Default Sets
        0,                                                  //!< u16NvmFlashParamIdx;      - [NUM] Flash Param Idx for the Flash Sets
        1,                                                  //!< u8NvmLoadDfltSetChaParIdx - [NUM] Dflt Param Idx has change - load that default set
        1,                                                  //!< u8NvmLoadDfltSetFoundErr  - [NUM] List Error is there - load that default set
        TRUE,                                               //!< boNvmLoadFlashChaParIdx   - [NUM] Flash Param Idx has change - load that Flash Setting
        TRUE,                                               //!< boNvmLoadFlashFoundErr    - [NUM] List Error is there - load that Flash Setting
        TRUE,                                               //!< boNvmLoadFlashChaFlaSet   - [NUM] Flash Setting has change - load that Flash Setting
        FALSE,                                              //!< boNvmValueRangeCheck   - [NUM] List Range Check
        DB_SINGLE,                                          //!< u8NvmNvmListMode - [DEF] Single/Double
        TRUE,                                               //!< boNvmCrc - [DEF] with CRC
        0,                                                  //!< u16NvmAutoStartAdr - [NUM] Autostart Adr
        0,                                                  //!< u16NvmHeadAddr - [NUM] - only for NVMEM
    //!< ** Error (RAM/NvMem)
        { //!< List Error definition
            { //!< RAM Error
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT0_NOT,                               //!< u8ErrCat
                ACC_ALL_NO,                                 //!< u16ErrAccLevel
                0,                                          //!< u32ErrNum
                FMI_NONE,                                   //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            },
            { //!<  NVMEM Load
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT0_NOT,                               //!< u8ErrCat
                ACC_ALL_NO,                                 //!< u16ErrAccLevel
                0,                                          //!< u32ErrNum
                FMI_NONE,                                   //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            },
            { //!< NVMEM Store
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT0_NOT,                               //!< u8ErrCat
                ACC_ALL_NO,                                 //!< u16ErrAccLevel
                0,                                          //!< u32ErrNum
                FMI_NONE,                                   //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            },
            { //!<  NVMEM Backup
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT0_NOT,                               //!< u8ErrCat
                ACC_ALL_NO,                                 //!< u16ErrAccLevel
                0,                                          //!< u32ErrNum
                FMI_NONE,                                   //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            }
        }
    },
    {
    //!< ** General List Setting
        "RamTelescopeCanC1",                                //!< achName[16]
        DB_RAM_ECU,                                         //!< u8ListClass - [DEF] RAM/NVMEM
        DB_RAM,                                             //!< u8ListType  - [DEF] RAM/NVMEM
        18,                                                 //!< u8ListIdx - List Index
        7,                                                  //!< u16VarMax - [NUM] Max Variable
        7,                                                  //!< u16NumValues - [NUM] Number of addressable values in list(counting each array value)
        11,                                                 //!< u16ShadowBytes - [NUM] need Shadow RAM in Byte
        140U,                                               //!< u32Password - [NUM] DbList unique key
        &gDb_tRamTelescopeCanC1.tListRoot,                  //!< cptListRoot - [NUM] ListRoot
    //!< ** RAM General Setting
        &gDb_catVarTabRamTelescopeCanC1[0],                 //!< cptRamVarTab - [STC] Pointer of RAM
        DB_SINGLE,                                          //!< u8RamMode - [DEF] Single/Double
        TRUE,                                               //!< boRamCrc - [DEF] with CRC
    //!< ** NVMEM General Setting
        NULL,                                               //!< cptNvmVarTab - [STC] Pointer of NVMEM
        1,                                                  //!< u8NvmDfltSet;             - [NUM] Count of Maximal Default Sets
        0,                                                  //!< u16NvmDfltParamIdx;       - [NUM] Dflt Param Idx for the Default Sets
        0,                                                  //!< u16NvmFlashParamIdx;      - [NUM] Flash Param Idx for the Flash Sets
        1,                                                  //!< u8NvmLoadDfltSetChaParIdx - [NUM] Dflt Param Idx has change - load that default set
        1,                                                  //!< u8NvmLoadDfltSetFoundErr  - [NUM] List Error is there - load that default set
        TRUE,                                               //!< boNvmLoadFlashChaParIdx   - [NUM] Flash Param Idx has change - load that Flash Setting
        TRUE,                                               //!< boNvmLoadFlashFoundErr    - [NUM] List Error is there - load that Flash Setting
        TRUE,                                               //!< boNvmLoadFlashChaFlaSet   - [NUM] Flash Setting has change - load that Flash Setting
        FALSE,                                              //!< boNvmValueRangeCheck   - [NUM] List Range Check
        DB_SINGLE,                                          //!< u8NvmNvmListMode - [DEF] Single/Double
        TRUE,                                               //!< boNvmCrc - [DEF] with CRC
        0,                                                  //!< u16NvmAutoStartAdr - [NUM] Autostart Adr
        0,                                                  //!< u16NvmHeadAddr - [NUM] - only for NVMEM
    //!< ** Error (RAM/NvMem)
        { //!< List Error definition
            { //!< RAM Error
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT0_NOT,                               //!< u8ErrCat
                ACC_ALL_NO,                                 //!< u16ErrAccLevel
                0,                                          //!< u32ErrNum
                FMI_NONE,                                   //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            },
            { //!<  NVMEM Load
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT0_NOT,                               //!< u8ErrCat
                ACC_ALL_NO,                                 //!< u16ErrAccLevel
                0,                                          //!< u32ErrNum
                FMI_NONE,                                   //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            },
            { //!< NVMEM Store
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT0_NOT,                               //!< u8ErrCat
                ACC_ALL_NO,                                 //!< u16ErrAccLevel
                0,                                          //!< u32ErrNum
                FMI_NONE,                                   //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            },
            { //!<  NVMEM Backup
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT0_NOT,                               //!< u8ErrCat
                ACC_ALL_NO,                                 //!< u16ErrAccLevel
                0,                                          //!< u32ErrNum
                FMI_NONE,                                   //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            }
        }
    },
    {
    //!< ** General List Setting
        "RamMvtEndStopC1",                                  //!< achName[16]
        DB_RAM_ECU,                                         //!< u8ListClass - [DEF] RAM/NVMEM
        DB_RAM,                                             //!< u8ListType  - [DEF] RAM/NVMEM
        19,                                                 //!< u8ListIdx - List Index
        19,                                                 //!< u16VarMax - [NUM] Max Variable
        19,                                                 //!< u16NumValues - [NUM] Number of addressable values in list(counting each array value)
        21,                                                 //!< u16ShadowBytes - [NUM] need Shadow RAM in Byte
        71U,                                                //!< u32Password - [NUM] DbList unique key
        &gDb_tRamMvtEndStopC1.tListRoot,                    //!< cptListRoot - [NUM] ListRoot
    //!< ** RAM General Setting
        &gDb_catVarTabRamMvtEndStopC1[0],                   //!< cptRamVarTab - [STC] Pointer of RAM
        DB_SINGLE,                                          //!< u8RamMode - [DEF] Single/Double
        TRUE,                                               //!< boRamCrc - [DEF] with CRC
    //!< ** NVMEM General Setting
        NULL,                                               //!< cptNvmVarTab - [STC] Pointer of NVMEM
        1,                                                  //!< u8NvmDfltSet;             - [NUM] Count of Maximal Default Sets
        0,                                                  //!< u16NvmDfltParamIdx;       - [NUM] Dflt Param Idx for the Default Sets
        0,                                                  //!< u16NvmFlashParamIdx;      - [NUM] Flash Param Idx for the Flash Sets
        1,                                                  //!< u8NvmLoadDfltSetChaParIdx - [NUM] Dflt Param Idx has change - load that default set
        1,                                                  //!< u8NvmLoadDfltSetFoundErr  - [NUM] List Error is there - load that default set
        TRUE,                                               //!< boNvmLoadFlashChaParIdx   - [NUM] Flash Param Idx has change - load that Flash Setting
        TRUE,                                               //!< boNvmLoadFlashFoundErr    - [NUM] List Error is there - load that Flash Setting
        TRUE,                                               //!< boNvmLoadFlashChaFlaSet   - [NUM] Flash Setting has change - load that Flash Setting
        FALSE,                                              //!< boNvmValueRangeCheck   - [NUM] List Range Check
        DB_SINGLE,                                          //!< u8NvmNvmListMode - [DEF] Single/Double
        TRUE,                                               //!< boNvmCrc - [DEF] with CRC
        0,                                                  //!< u16NvmAutoStartAdr - [NUM] Autostart Adr
        0,                                                  //!< u16NvmHeadAddr - [NUM] - only for NVMEM
    //!< ** Error (RAM/NvMem)
        { //!< List Error definition
            { //!< RAM Error
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT0_NOT,                               //!< u8ErrCat
                ACC_ALL_NO,                                 //!< u16ErrAccLevel
                0,                                          //!< u32ErrNum
                FMI_NONE,                                   //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            },
            { //!<  NVMEM Load
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT0_NOT,                               //!< u8ErrCat
                ACC_ALL_NO,                                 //!< u16ErrAccLevel
                0,                                          //!< u32ErrNum
                FMI_NONE,                                   //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            },
            { //!< NVMEM Store
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT0_NOT,                               //!< u8ErrCat
                ACC_ALL_NO,                                 //!< u16ErrAccLevel
                0,                                          //!< u32ErrNum
                FMI_NONE,                                   //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            },
            { //!<  NVMEM Backup
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT0_NOT,                               //!< u8ErrCat
                ACC_ALL_NO,                                 //!< u16ErrAccLevel
                0,                                          //!< u32ErrNum
                FMI_NONE,                                   //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            }
        }
    },
    {
    //!< ** General List Setting
        "NvParamMvtEndStopC1",                              //!< achName[16]
        DB_NVM_PAR,                                         //!< u8ListClass - [DEF] RAM/NVMEM
        DB_NVMEM,                                           //!< u8ListType  - [DEF] RAM/NVMEM
        20,                                                 //!< u8ListIdx - List Index
        24,                                                 //!< u16VarMax - [NUM] Max Variable
        24,                                                 //!< u16NumValues - [NUM] Number of addressable values in list(counting each array value)
        48,                                                 //!< u16ShadowBytes - [NUM] need Shadow RAM in Byte
        543U,                                               //!< u32Password - [NUM] DbList unique key
        &gDb_tNvParamMvtEndStopC1.tListRoot,                //!< cptListRoot - [NUM] ListRoot
    //!< ** RAM General Setting
        NULL,                                               //!< cptRamVarTab - [STC] Pointer of RAM
        DB_SINGLE,                                          //!< u8RamMode - [DEF] Single/Double
        TRUE,                                               //!< boRamCrc - [DEF] with CRC
    //!< ** NVMEM General Setting
        &gDb_catVarTabNvParamMvtEndStopC1[0],               //!< cptNvmVarTab - [STC] Pointer of NVMEM
        1,                                                  //!< u8NvmDfltSet;             - [NUM] Count of Maximal Default Sets
        0,                                                  //!< u16NvmDfltParamIdx;       - [NUM] Dflt Param Idx for the Default Sets
        0,                                                  //!< u16NvmFlashParamIdx;      - [NUM] Flash Param Idx for the Flash Sets
        1,                                                  //!< u8NvmLoadDfltSetChaParIdx - [NUM] Dflt Param Idx has change - load that default set
        1,                                                  //!< u8NvmLoadDfltSetFoundErr  - [NUM] List Error is there - load that default set
        TRUE,                                               //!< boNvmLoadFlashChaParIdx   - [NUM] Flash Param Idx has change - load that Flash Setting
        FALSE,                                              //!< boNvmLoadFlashFoundErr    - [NUM] List Error is there - load that Flash Setting
        TRUE,                                               //!< boNvmLoadFlashChaFlaSet   - [NUM] Flash Setting has change - load that Flash Setting
        FALSE,                                              //!< boNvmValueRangeCheck   - [NUM] List Range Check
        DB_DOUBLE,                                          //!< u8NvmNvmListMode - [DEF] Single/Double
        TRUE,                                               //!< boNvmCrc - [DEF] with CRC
        1600,                                               //!< u16NvmAutoStartAdr - [NUM] Autostart Adr
        4000,                                               //!< u16NvmDoubleStartAdr - [NUM] - List Double Start Adr
    //!< ** Error (RAM/NvMem)
        { //!< List Error definition
            { //!< RAM Error
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT0_NOT,                               //!< u8ErrCat
                ACC_ALL_NO,                                 //!< u16ErrAccLevel
                0,                                          //!< u32ErrNum
                FMI_NONE,                                   //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            },
            { //!<  NVMEM Load
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT5_MAL,                               //!< u8ErrCat
                0xAAAA,                                     //!< u16ErrAccLevel
                16122,                                      //!< u32ErrNum
                FMI_31_CONDITION_EXISTS,                    //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            },
            { //!< NVMEM Store
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT5_MAL,                               //!< u8ErrCat
                0xAAAA,                                     //!< u16ErrAccLevel
                16124,                                      //!< u32ErrNum
                FMI_31_CONDITION_EXISTS,                    //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            },
            { //!<  NVMEM Backup
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT5_MAL,                               //!< u8ErrCat
                0xAAAA,                                     //!< u16ErrAccLevel
                16125,                                      //!< u32ErrNum
                FMI_31_CONDITION_EXISTS,                    //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            }
        }
    },
    {
    //!< ** General List Setting
        "NvParamAutoStopC1",                                //!< achName[16]
        DB_NVM_PAR,                                         //!< u8ListClass - [DEF] RAM/NVMEM
        DB_NVMEM,                                           //!< u8ListType  - [DEF] RAM/NVMEM
        21,                                                 //!< u8ListIdx - List Index
        8,                                                  //!< u16VarMax - [NUM] Max Variable
        8,                                                  //!< u16NumValues - [NUM] Number of addressable values in list(counting each array value)
        16,                                                 //!< u16ShadowBytes - [NUM] need Shadow RAM in Byte
        166U,                                               //!< u32Password - [NUM] DbList unique key
        &gDb_tNvParamAutoStopC1.tListRoot,                  //!< cptListRoot - [NUM] ListRoot
    //!< ** RAM General Setting
        NULL,                                               //!< cptRamVarTab - [STC] Pointer of RAM
        DB_SINGLE,                                          //!< u8RamMode - [DEF] Single/Double
        TRUE,                                               //!< boRamCrc - [DEF] with CRC
    //!< ** NVMEM General Setting
        &gDb_catVarTabNvParamAutoStopC1[0],                 //!< cptNvmVarTab - [STC] Pointer of NVMEM
        1,                                                  //!< u8NvmDfltSet;             - [NUM] Count of Maximal Default Sets
        0,                                                  //!< u16NvmDfltParamIdx;       - [NUM] Dflt Param Idx for the Default Sets
        0,                                                  //!< u16NvmFlashParamIdx;      - [NUM] Flash Param Idx for the Flash Sets
        1,                                                  //!< u8NvmLoadDfltSetChaParIdx - [NUM] Dflt Param Idx has change - load that default set
        1,                                                  //!< u8NvmLoadDfltSetFoundErr  - [NUM] List Error is there - load that default set
        TRUE,                                               //!< boNvmLoadFlashChaParIdx   - [NUM] Flash Param Idx has change - load that Flash Setting
        FALSE,                                              //!< boNvmLoadFlashFoundErr    - [NUM] List Error is there - load that Flash Setting
        TRUE,                                               //!< boNvmLoadFlashChaFlaSet   - [NUM] Flash Setting has change - load that Flash Setting
        FALSE,                                              //!< boNvmValueRangeCheck   - [NUM] List Range Check
        DB_DOUBLE,                                          //!< u8NvmNvmListMode - [DEF] Single/Double
        TRUE,                                               //!< boNvmCrc - [DEF] with CRC
        1800,                                               //!< u16NvmAutoStartAdr - [NUM] Autostart Adr
        4200,                                               //!< u16NvmDoubleStartAdr - [NUM] - List Double Start Adr
    //!< ** Error (RAM/NvMem)
        { //!< List Error definition
            { //!< RAM Error
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT0_NOT,                               //!< u8ErrCat
                ACC_ALL_NO,                                 //!< u16ErrAccLevel
                0,                                          //!< u32ErrNum
                FMI_NONE,                                   //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            },
            { //!<  NVMEM Load
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT5_MAL,                               //!< u8ErrCat
                0xAAAA,                                     //!< u16ErrAccLevel
                16129,                                      //!< u32ErrNum
                FMI_31_CONDITION_EXISTS,                    //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            },
            { //!< NVMEM Store
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT5_MAL,                               //!< u8ErrCat
                0xAAAA,                                     //!< u16ErrAccLevel
                16130,                                      //!< u32ErrNum
                FMI_31_CONDITION_EXISTS,                    //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            },
            { //!<  NVMEM Backup
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT5_MAL,                               //!< u8ErrCat
                0xAAAA,                                     //!< u16ErrAccLevel
                16131,                                      //!< u32ErrNum
                FMI_31_CONDITION_EXISTS,                    //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            }
        }
    },
    {
    //!< ** General List Setting
        "RamAutoStopC1",                                    //!< achName[16]
        DB_RAM_ECU,                                         //!< u8ListClass - [DEF] RAM/NVMEM
        DB_RAM,                                             //!< u8ListType  - [DEF] RAM/NVMEM
        22,                                                 //!< u8ListIdx - List Index
        18,                                                 //!< u16VarMax - [NUM] Max Variable
        18,                                                 //!< u16NumValues - [NUM] Number of addressable values in list(counting each array value)
        19,                                                 //!< u16ShadowBytes - [NUM] need Shadow RAM in Byte
        74U,                                                //!< u32Password - [NUM] DbList unique key
        &gDb_tRamAutoStopC1.tListRoot,                      //!< cptListRoot - [NUM] ListRoot
    //!< ** RAM General Setting
        &gDb_catVarTabRamAutoStopC1[0],                     //!< cptRamVarTab - [STC] Pointer of RAM
        DB_SINGLE,                                          //!< u8RamMode - [DEF] Single/Double
        TRUE,                                               //!< boRamCrc - [DEF] with CRC
    //!< ** NVMEM General Setting
        NULL,                                               //!< cptNvmVarTab - [STC] Pointer of NVMEM
        1,                                                  //!< u8NvmDfltSet;             - [NUM] Count of Maximal Default Sets
        0,                                                  //!< u16NvmDfltParamIdx;       - [NUM] Dflt Param Idx for the Default Sets
        0,                                                  //!< u16NvmFlashParamIdx;      - [NUM] Flash Param Idx for the Flash Sets
        1,                                                  //!< u8NvmLoadDfltSetChaParIdx - [NUM] Dflt Param Idx has change - load that default set
        1,                                                  //!< u8NvmLoadDfltSetFoundErr  - [NUM] List Error is there - load that default set
        TRUE,                                               //!< boNvmLoadFlashChaParIdx   - [NUM] Flash Param Idx has change - load that Flash Setting
        TRUE,                                               //!< boNvmLoadFlashFoundErr    - [NUM] List Error is there - load that Flash Setting
        TRUE,                                               //!< boNvmLoadFlashChaFlaSet   - [NUM] Flash Setting has change - load that Flash Setting
        FALSE,                                              //!< boNvmValueRangeCheck   - [NUM] List Range Check
        DB_SINGLE,                                          //!< u8NvmNvmListMode - [DEF] Single/Double
        TRUE,                                               //!< boNvmCrc - [DEF] with CRC
        0,                                                  //!< u16NvmAutoStartAdr - [NUM] Autostart Adr
        0,                                                  //!< u16NvmHeadAddr - [NUM] - only for NVMEM
    //!< ** Error (RAM/NvMem)
        { //!< List Error definition
            { //!< RAM Error
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT0_NOT,                               //!< u8ErrCat
                ACC_ALL_NO,                                 //!< u16ErrAccLevel
                0,                                          //!< u32ErrNum
                FMI_NONE,                                   //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            },
            { //!<  NVMEM Load
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT0_NOT,                               //!< u8ErrCat
                ACC_ALL_NO,                                 //!< u16ErrAccLevel
                0,                                          //!< u32ErrNum
                FMI_NONE,                                   //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            },
            { //!< NVMEM Store
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT0_NOT,                               //!< u8ErrCat
                ACC_ALL_NO,                                 //!< u16ErrAccLevel
                0,                                          //!< u32ErrNum
                FMI_NONE,                                   //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            },
            { //!<  NVMEM Backup
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT0_NOT,                               //!< u8ErrCat
                ACC_ALL_NO,                                 //!< u16ErrAccLevel
                0,                                          //!< u32ErrNum
                FMI_NONE,                                   //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            }
        }
    },
    {
    //!< ** General List Setting
        "RamMastMeasureC1",                                 //!< achName[16]
        DB_RAM_ECU,                                         //!< u8ListClass - [DEF] RAM/NVMEM
        DB_RAM,                                             //!< u8ListType  - [DEF] RAM/NVMEM
        23,                                                 //!< u8ListIdx - List Index
        23,                                                 //!< u16VarMax - [NUM] Max Variable
        23,                                                 //!< u16NumValues - [NUM] Number of addressable values in list(counting each array value)
        35,                                                 //!< u16ShadowBytes - [NUM] need Shadow RAM in Byte
        160U,                                               //!< u32Password - [NUM] DbList unique key
        &gDb_tRamMastMeasureC1.tListRoot,                   //!< cptListRoot - [NUM] ListRoot
    //!< ** RAM General Setting
        &gDb_catVarTabRamMastMeasureC1[0],                  //!< cptRamVarTab - [STC] Pointer of RAM
        DB_SINGLE,                                          //!< u8RamMode - [DEF] Single/Double
        TRUE,                                               //!< boRamCrc - [DEF] with CRC
    //!< ** NVMEM General Setting
        NULL,                                               //!< cptNvmVarTab - [STC] Pointer of NVMEM
        1,                                                  //!< u8NvmDfltSet;             - [NUM] Count of Maximal Default Sets
        0,                                                  //!< u16NvmDfltParamIdx;       - [NUM] Dflt Param Idx for the Default Sets
        0,                                                  //!< u16NvmFlashParamIdx;      - [NUM] Flash Param Idx for the Flash Sets
        1,                                                  //!< u8NvmLoadDfltSetChaParIdx - [NUM] Dflt Param Idx has change - load that default set
        1,                                                  //!< u8NvmLoadDfltSetFoundErr  - [NUM] List Error is there - load that default set
        TRUE,                                               //!< boNvmLoadFlashChaParIdx   - [NUM] Flash Param Idx has change - load that Flash Setting
        TRUE,                                               //!< boNvmLoadFlashFoundErr    - [NUM] List Error is there - load that Flash Setting
        TRUE,                                               //!< boNvmLoadFlashChaFlaSet   - [NUM] Flash Setting has change - load that Flash Setting
        FALSE,                                              //!< boNvmValueRangeCheck   - [NUM] List Range Check
        DB_SINGLE,                                          //!< u8NvmNvmListMode - [DEF] Single/Double
        TRUE,                                               //!< boNvmCrc - [DEF] with CRC
        0,                                                  //!< u16NvmAutoStartAdr - [NUM] Autostart Adr
        0,                                                  //!< u16NvmHeadAddr - [NUM] - only for NVMEM
    //!< ** Error (RAM/NvMem)
        { //!< List Error definition
            { //!< RAM Error
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT0_NOT,                               //!< u8ErrCat
                ACC_ALL_NO,                                 //!< u16ErrAccLevel
                0,                                          //!< u32ErrNum
                FMI_NONE,                                   //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            },
            { //!<  NVMEM Load
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT0_NOT,                               //!< u8ErrCat
                ACC_ALL_NO,                                 //!< u16ErrAccLevel
                0,                                          //!< u32ErrNum
                FMI_NONE,                                   //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            },
            { //!< NVMEM Store
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT0_NOT,                               //!< u8ErrCat
                ACC_ALL_NO,                                 //!< u16ErrAccLevel
                0,                                          //!< u32ErrNum
                FMI_NONE,                                   //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            },
            { //!<  NVMEM Backup
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT0_NOT,                               //!< u8ErrCat
                ACC_ALL_NO,                                 //!< u16ErrAccLevel
                0,                                          //!< u32ErrNum
                FMI_NONE,                                   //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            }
        }
    },
    {
    //!< ** General List Setting
        "NvParamMastC1",                                    //!< achName[16]
        DB_NVM_PAR,                                         //!< u8ListClass - [DEF] RAM/NVMEM
        DB_NVMEM,                                           //!< u8ListType  - [DEF] RAM/NVMEM
        24,                                                 //!< u8ListIdx - List Index
        8,                                                  //!< u16VarMax - [NUM] Max Variable
        8,                                                  //!< u16NumValues - [NUM] Number of addressable values in list(counting each array value)
        22,                                                 //!< u16ShadowBytes - [NUM] need Shadow RAM in Byte
        191U,                                               //!< u32Password - [NUM] DbList unique key
        &gDb_tNvParamMastC1.tListRoot,                      //!< cptListRoot - [NUM] ListRoot
    //!< ** RAM General Setting
        NULL,                                               //!< cptRamVarTab - [STC] Pointer of RAM
        DB_SINGLE,                                          //!< u8RamMode - [DEF] Single/Double
        TRUE,                                               //!< boRamCrc - [DEF] with CRC
    //!< ** NVMEM General Setting
        &gDb_catVarTabNvParamMastC1[0],                     //!< cptNvmVarTab - [STC] Pointer of NVMEM
        1,                                                  //!< u8NvmDfltSet;             - [NUM] Count of Maximal Default Sets
        0,                                                  //!< u16NvmDfltParamIdx;       - [NUM] Dflt Param Idx for the Default Sets
        0,                                                  //!< u16NvmFlashParamIdx;      - [NUM] Flash Param Idx for the Flash Sets
        1,                                                  //!< u8NvmLoadDfltSetChaParIdx - [NUM] Dflt Param Idx has change - load that default set
        1,                                                  //!< u8NvmLoadDfltSetFoundErr  - [NUM] List Error is there - load that default set
        TRUE,                                               //!< boNvmLoadFlashChaParIdx   - [NUM] Flash Param Idx has change - load that Flash Setting
        FALSE,                                              //!< boNvmLoadFlashFoundErr    - [NUM] List Error is there - load that Flash Setting
        TRUE,                                               //!< boNvmLoadFlashChaFlaSet   - [NUM] Flash Setting has change - load that Flash Setting
        FALSE,                                              //!< boNvmValueRangeCheck   - [NUM] List Range Check
        DB_DOUBLE,                                          //!< u8NvmNvmListMode - [DEF] Single/Double
        TRUE,                                               //!< boNvmCrc - [DEF] with CRC
        2000,                                               //!< u16NvmAutoStartAdr - [NUM] Autostart Adr
        4400,                                               //!< u16NvmDoubleStartAdr - [NUM] - List Double Start Adr
    //!< ** Error (RAM/NvMem)
        { //!< List Error definition
            { //!< RAM Error
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT0_NOT,                               //!< u8ErrCat
                ACC_ALL_NO,                                 //!< u16ErrAccLevel
                0,                                          //!< u32ErrNum
                FMI_NONE,                                   //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            },
            { //!<  NVMEM Load
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT5_MAL,                               //!< u8ErrCat
                0xAAAA,                                     //!< u16ErrAccLevel
                16137,                                      //!< u32ErrNum
                FMI_31_CONDITION_EXISTS,                    //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            },
            { //!< NVMEM Store
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT5_MAL,                               //!< u8ErrCat
                0xAAAA,                                     //!< u16ErrAccLevel
                16142,                                      //!< u32ErrNum
                FMI_31_CONDITION_EXISTS,                    //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            },
            { //!<  NVMEM Backup
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT5_MAL,                               //!< u8ErrCat
                0xAAAA,                                     //!< u16ErrAccLevel
                16144,                                      //!< u32ErrNum
                FMI_31_CONDITION_EXISTS,                    //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            }
        }
    },
    {
    //!< ** General List Setting
        "RamEvision7C1",                                    //!< achName[16]
        DB_RAM_ECU,                                         //!< u8ListClass - [DEF] RAM/NVMEM
        DB_RAM,                                             //!< u8ListType  - [DEF] RAM/NVMEM
        25,                                                 //!< u8ListIdx - List Index
        16,                                                 //!< u16VarMax - [NUM] Max Variable
        16,                                                 //!< u16NumValues - [NUM] Number of addressable values in list(counting each array value)
        16,                                                 //!< u16ShadowBytes - [NUM] need Shadow RAM in Byte
        16U,                                                //!< u32Password - [NUM] DbList unique key
        &gDb_tRamEvision7C1.tListRoot,                      //!< cptListRoot - [NUM] ListRoot
    //!< ** RAM General Setting
        &gDb_catVarTabRamEvision7C1[0],                     //!< cptRamVarTab - [STC] Pointer of RAM
        DB_SINGLE,                                          //!< u8RamMode - [DEF] Single/Double
        TRUE,                                               //!< boRamCrc - [DEF] with CRC
    //!< ** NVMEM General Setting
        NULL,                                               //!< cptNvmVarTab - [STC] Pointer of NVMEM
        1,                                                  //!< u8NvmDfltSet;             - [NUM] Count of Maximal Default Sets
        0,                                                  //!< u16NvmDfltParamIdx;       - [NUM] Dflt Param Idx for the Default Sets
        0,                                                  //!< u16NvmFlashParamIdx;      - [NUM] Flash Param Idx for the Flash Sets
        1,                                                  //!< u8NvmLoadDfltSetChaParIdx - [NUM] Dflt Param Idx has change - load that default set
        1,                                                  //!< u8NvmLoadDfltSetFoundErr  - [NUM] List Error is there - load that default set
        TRUE,                                               //!< boNvmLoadFlashChaParIdx   - [NUM] Flash Param Idx has change - load that Flash Setting
        TRUE,                                               //!< boNvmLoadFlashFoundErr    - [NUM] List Error is there - load that Flash Setting
        TRUE,                                               //!< boNvmLoadFlashChaFlaSet   - [NUM] Flash Setting has change - load that Flash Setting
        FALSE,                                              //!< boNvmValueRangeCheck   - [NUM] List Range Check
        DB_SINGLE,                                          //!< u8NvmNvmListMode - [DEF] Single/Double
        TRUE,                                               //!< boNvmCrc - [DEF] with CRC
        0,                                                  //!< u16NvmAutoStartAdr - [NUM] Autostart Adr
        0,                                                  //!< u16NvmHeadAddr - [NUM] - only for NVMEM
    //!< ** Error (RAM/NvMem)
        { //!< List Error definition
            { //!< RAM Error
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT0_NOT,                               //!< u8ErrCat
                ACC_ALL_NO,                                 //!< u16ErrAccLevel
                0,                                          //!< u32ErrNum
                FMI_NONE,                                   //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            },
            { //!<  NVMEM Load
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT0_NOT,                               //!< u8ErrCat
                ACC_ALL_NO,                                 //!< u16ErrAccLevel
                0,                                          //!< u32ErrNum
                FMI_NONE,                                   //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            },
            { //!< NVMEM Store
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT0_NOT,                               //!< u8ErrCat
                ACC_ALL_NO,                                 //!< u16ErrAccLevel
                0,                                          //!< u32ErrNum
                FMI_NONE,                                   //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            },
            { //!<  NVMEM Backup
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT0_NOT,                               //!< u8ErrCat
                ACC_ALL_NO,                                 //!< u16ErrAccLevel
                0,                                          //!< u32ErrNum
                FMI_NONE,                                   //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            }
        }
    },
    {
    //!< ** General List Setting
        "NvParamAlarmC1",                                   //!< achName[16]
        DB_NVM_PAR,                                         //!< u8ListClass - [DEF] RAM/NVMEM
        DB_NVMEM,                                           //!< u8ListType  - [DEF] RAM/NVMEM
        26,                                                 //!< u8ListIdx - List Index
        18,                                                 //!< u16VarMax - [NUM] Max Variable
        18,                                                 //!< u16NumValues - [NUM] Number of addressable values in list(counting each array value)
        28,                                                 //!< u16ShadowBytes - [NUM] need Shadow RAM in Byte
        381U,                                               //!< u32Password - [NUM] DbList unique key
        &gDb_tNvParamAlarmC1.tListRoot,                     //!< cptListRoot - [NUM] ListRoot
    //!< ** RAM General Setting
        NULL,                                               //!< cptRamVarTab - [STC] Pointer of RAM
        DB_SINGLE,                                          //!< u8RamMode - [DEF] Single/Double
        TRUE,                                               //!< boRamCrc - [DEF] with CRC
    //!< ** NVMEM General Setting
        &gDb_catVarTabNvParamAlarmC1[0],                    //!< cptNvmVarTab - [STC] Pointer of NVMEM
        1,                                                  //!< u8NvmDfltSet;             - [NUM] Count of Maximal Default Sets
        0,                                                  //!< u16NvmDfltParamIdx;       - [NUM] Dflt Param Idx for the Default Sets
        0,                                                  //!< u16NvmFlashParamIdx;      - [NUM] Flash Param Idx for the Flash Sets
        1,                                                  //!< u8NvmLoadDfltSetChaParIdx - [NUM] Dflt Param Idx has change - load that default set
        1,                                                  //!< u8NvmLoadDfltSetFoundErr  - [NUM] List Error is there - load that default set
        TRUE,                                               //!< boNvmLoadFlashChaParIdx   - [NUM] Flash Param Idx has change - load that Flash Setting
        FALSE,                                              //!< boNvmLoadFlashFoundErr    - [NUM] List Error is there - load that Flash Setting
        TRUE,                                               //!< boNvmLoadFlashChaFlaSet   - [NUM] Flash Setting has change - load that Flash Setting
        FALSE,                                              //!< boNvmValueRangeCheck   - [NUM] List Range Check
        DB_DOUBLE,                                          //!< u8NvmNvmListMode - [DEF] Single/Double
        TRUE,                                               //!< boNvmCrc - [DEF] with CRC
        2200,                                               //!< u16NvmAutoStartAdr - [NUM] Autostart Adr
        4600,                                               //!< u16NvmDoubleStartAdr - [NUM] - List Double Start Adr
    //!< ** Error (RAM/NvMem)
        { //!< List Error definition
            { //!< RAM Error
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT0_NOT,                               //!< u8ErrCat
                ACC_ALL_NO,                                 //!< u16ErrAccLevel
                0,                                          //!< u32ErrNum
                FMI_NONE,                                   //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            },
            { //!<  NVMEM Load
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT5_MAL,                               //!< u8ErrCat
                0xAAAA,                                     //!< u16ErrAccLevel
                16244,                                      //!< u32ErrNum
                FMI_31_CONDITION_EXISTS,                    //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            },
            { //!< NVMEM Store
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT5_MAL,                               //!< u8ErrCat
                0xAAAA,                                     //!< u16ErrAccLevel
                16245,                                      //!< u32ErrNum
                FMI_31_CONDITION_EXISTS,                    //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            },
            { //!<  NVMEM Backup
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT5_MAL,                               //!< u8ErrCat
                0xAAAA,                                     //!< u16ErrAccLevel
                16246,                                      //!< u32ErrNum
                FMI_31_CONDITION_EXISTS,                    //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            }
        }
    },
    {
    //!< ** General List Setting
        "RamEcuC1RcvFailluresFromC0",                       //!< achName[16]
        DB_RAM_ECU,                                         //!< u8ListClass - [DEF] RAM/NVMEM
        DB_RAM,                                             //!< u8ListType  - [DEF] RAM/NVMEM
        27,                                                 //!< u8ListIdx - List Index
        10,                                                 //!< u16VarMax - [NUM] Max Variable
        10,                                                 //!< u16NumValues - [NUM] Number of addressable values in list(counting each array value)
        10,                                                 //!< u16ShadowBytes - [NUM] need Shadow RAM in Byte
        10U,                                                //!< u32Password - [NUM] DbList unique key
        &gDb_tRamEcuC1RcvFailluresFromC0.tListRoot,         //!< cptListRoot - [NUM] ListRoot
    //!< ** RAM General Setting
        &gDb_catVarTabRamEcuC1RcvFailluresFromC0[0],        //!< cptRamVarTab - [STC] Pointer of RAM
        DB_SINGLE,                                          //!< u8RamMode - [DEF] Single/Double
        TRUE,                                               //!< boRamCrc - [DEF] with CRC
    //!< ** NVMEM General Setting
        NULL,                                               //!< cptNvmVarTab - [STC] Pointer of NVMEM
        1,                                                  //!< u8NvmDfltSet;             - [NUM] Count of Maximal Default Sets
        0,                                                  //!< u16NvmDfltParamIdx;       - [NUM] Dflt Param Idx for the Default Sets
        0,                                                  //!< u16NvmFlashParamIdx;      - [NUM] Flash Param Idx for the Flash Sets
        1,                                                  //!< u8NvmLoadDfltSetChaParIdx - [NUM] Dflt Param Idx has change - load that default set
        1,                                                  //!< u8NvmLoadDfltSetFoundErr  - [NUM] List Error is there - load that default set
        TRUE,                                               //!< boNvmLoadFlashChaParIdx   - [NUM] Flash Param Idx has change - load that Flash Setting
        TRUE,                                               //!< boNvmLoadFlashFoundErr    - [NUM] List Error is there - load that Flash Setting
        TRUE,                                               //!< boNvmLoadFlashChaFlaSet   - [NUM] Flash Setting has change - load that Flash Setting
        FALSE,                                              //!< boNvmValueRangeCheck   - [NUM] List Range Check
        DB_SINGLE,                                          //!< u8NvmNvmListMode - [DEF] Single/Double
        TRUE,                                               //!< boNvmCrc - [DEF] with CRC
        0,                                                  //!< u16NvmAutoStartAdr - [NUM] Autostart Adr
        0,                                                  //!< u16NvmHeadAddr - [NUM] - only for NVMEM
    //!< ** Error (RAM/NvMem)
        { //!< List Error definition
            { //!< RAM Error
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT0_NOT,                               //!< u8ErrCat
                ACC_ALL_NO,                                 //!< u16ErrAccLevel
                0,                                          //!< u32ErrNum
                FMI_NONE,                                   //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            },
            { //!<  NVMEM Load
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT0_NOT,                               //!< u8ErrCat
                ACC_ALL_NO,                                 //!< u16ErrAccLevel
                0,                                          //!< u32ErrNum
                FMI_NONE,                                   //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            },
            { //!< NVMEM Store
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT0_NOT,                               //!< u8ErrCat
                ACC_ALL_NO,                                 //!< u16ErrAccLevel
                0,                                          //!< u32ErrNum
                FMI_NONE,                                   //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            },
            { //!<  NVMEM Backup
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT0_NOT,                               //!< u8ErrCat
                ACC_ALL_NO,                                 //!< u16ErrAccLevel
                0,                                          //!< u32ErrNum
                FMI_NONE,                                   //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            }
        }
    },
    {
    //!< ** General List Setting
        "RamData4C1RcvFromC0",                              //!< achName[16]
        DB_RAM_ECU,                                         //!< u8ListClass - [DEF] RAM/NVMEM
        DB_RAM,                                             //!< u8ListType  - [DEF] RAM/NVMEM
        28,                                                 //!< u8ListIdx - List Index
        27,                                                 //!< u16VarMax - [NUM] Max Variable
        27,                                                 //!< u16NumValues - [NUM] Number of addressable values in list(counting each array value)
        31,                                                 //!< u16ShadowBytes - [NUM] need Shadow RAM in Byte
        128U,                                               //!< u32Password - [NUM] DbList unique key
        &gDb_tRamData4C1RcvFromC0.tListRoot,                //!< cptListRoot - [NUM] ListRoot
    //!< ** RAM General Setting
        &gDb_catVarTabRamData4C1RcvFromC0[0],               //!< cptRamVarTab - [STC] Pointer of RAM
        DB_SINGLE,                                          //!< u8RamMode - [DEF] Single/Double
        TRUE,                                               //!< boRamCrc - [DEF] with CRC
    //!< ** NVMEM General Setting
        NULL,                                               //!< cptNvmVarTab - [STC] Pointer of NVMEM
        1,                                                  //!< u8NvmDfltSet;             - [NUM] Count of Maximal Default Sets
        0,                                                  //!< u16NvmDfltParamIdx;       - [NUM] Dflt Param Idx for the Default Sets
        0,                                                  //!< u16NvmFlashParamIdx;      - [NUM] Flash Param Idx for the Flash Sets
        1,                                                  //!< u8NvmLoadDfltSetChaParIdx - [NUM] Dflt Param Idx has change - load that default set
        1,                                                  //!< u8NvmLoadDfltSetFoundErr  - [NUM] List Error is there - load that default set
        TRUE,                                               //!< boNvmLoadFlashChaParIdx   - [NUM] Flash Param Idx has change - load that Flash Setting
        TRUE,                                               //!< boNvmLoadFlashFoundErr    - [NUM] List Error is there - load that Flash Setting
        TRUE,                                               //!< boNvmLoadFlashChaFlaSet   - [NUM] Flash Setting has change - load that Flash Setting
        FALSE,                                              //!< boNvmValueRangeCheck   - [NUM] List Range Check
        DB_SINGLE,                                          //!< u8NvmNvmListMode - [DEF] Single/Double
        TRUE,                                               //!< boNvmCrc - [DEF] with CRC
        0,                                                  //!< u16NvmAutoStartAdr - [NUM] Autostart Adr
        0,                                                  //!< u16NvmHeadAddr - [NUM] - only for NVMEM
    //!< ** Error (RAM/NvMem)
        { //!< List Error definition
            { //!< RAM Error
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT0_NOT,                               //!< u8ErrCat
                ACC_ALL_NO,                                 //!< u16ErrAccLevel
                0,                                          //!< u32ErrNum
                FMI_NONE,                                   //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            },
            { //!<  NVMEM Load
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT0_NOT,                               //!< u8ErrCat
                ACC_ALL_NO,                                 //!< u16ErrAccLevel
                0,                                          //!< u32ErrNum
                FMI_NONE,                                   //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            },
            { //!< NVMEM Store
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT0_NOT,                               //!< u8ErrCat
                ACC_ALL_NO,                                 //!< u16ErrAccLevel
                0,                                          //!< u32ErrNum
                FMI_NONE,                                   //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            },
            { //!<  NVMEM Backup
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT0_NOT,                               //!< u8ErrCat
                ACC_ALL_NO,                                 //!< u16ErrAccLevel
                0,                                          //!< u32ErrNum
                FMI_NONE,                                   //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            }
        }
    },
    {
    //!< ** General List Setting
        "RamGeneralNeotecC1",                               //!< achName[16]
        DB_RAM_ECU,                                         //!< u8ListClass - [DEF] RAM/NVMEM
        DB_RAM,                                             //!< u8ListType  - [DEF] RAM/NVMEM
        29,                                                 //!< u8ListIdx - List Index
        51,                                                 //!< u16VarMax - [NUM] Max Variable
        51,                                                 //!< u16NumValues - [NUM] Number of addressable values in list(counting each array value)
        81,                                                 //!< u16ShadowBytes - [NUM] need Shadow RAM in Byte
        804U,                                               //!< u32Password - [NUM] DbList unique key
        &gDb_tRamGeneralNeotecC1.tListRoot,                 //!< cptListRoot - [NUM] ListRoot
    //!< ** RAM General Setting
        &gDb_catVarTabRamGeneralNeotecC1[0],                //!< cptRamVarTab - [STC] Pointer of RAM
        DB_SINGLE,                                          //!< u8RamMode - [DEF] Single/Double
        TRUE,                                               //!< boRamCrc - [DEF] with CRC
    //!< ** NVMEM General Setting
        NULL,                                               //!< cptNvmVarTab - [STC] Pointer of NVMEM
        1,                                                  //!< u8NvmDfltSet;             - [NUM] Count of Maximal Default Sets
        0,                                                  //!< u16NvmDfltParamIdx;       - [NUM] Dflt Param Idx for the Default Sets
        0,                                                  //!< u16NvmFlashParamIdx;      - [NUM] Flash Param Idx for the Flash Sets
        1,                                                  //!< u8NvmLoadDfltSetChaParIdx - [NUM] Dflt Param Idx has change - load that default set
        1,                                                  //!< u8NvmLoadDfltSetFoundErr  - [NUM] List Error is there - load that default set
        TRUE,                                               //!< boNvmLoadFlashChaParIdx   - [NUM] Flash Param Idx has change - load that Flash Setting
        TRUE,                                               //!< boNvmLoadFlashFoundErr    - [NUM] List Error is there - load that Flash Setting
        TRUE,                                               //!< boNvmLoadFlashChaFlaSet   - [NUM] Flash Setting has change - load that Flash Setting
        FALSE,                                              //!< boNvmValueRangeCheck   - [NUM] List Range Check
        DB_SINGLE,                                          //!< u8NvmNvmListMode - [DEF] Single/Double
        TRUE,                                               //!< boNvmCrc - [DEF] with CRC
        0,                                                  //!< u16NvmAutoStartAdr - [NUM] Autostart Adr
        0,                                                  //!< u16NvmHeadAddr - [NUM] - only for NVMEM
    //!< ** Error (RAM/NvMem)
        { //!< List Error definition
            { //!< RAM Error
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT0_NOT,                               //!< u8ErrCat
                ACC_ALL_NO,                                 //!< u16ErrAccLevel
                0,                                          //!< u32ErrNum
                FMI_NONE,                                   //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            },
            { //!<  NVMEM Load
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT0_NOT,                               //!< u8ErrCat
                ACC_ALL_NO,                                 //!< u16ErrAccLevel
                0,                                          //!< u32ErrNum
                FMI_NONE,                                   //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            },
            { //!< NVMEM Store
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT0_NOT,                               //!< u8ErrCat
                ACC_ALL_NO,                                 //!< u16ErrAccLevel
                0,                                          //!< u32ErrNum
                FMI_NONE,                                   //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            },
            { //!<  NVMEM Backup
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT0_NOT,                               //!< u8ErrCat
                ACC_ALL_NO,                                 //!< u16ErrAccLevel
                0,                                          //!< u32ErrNum
                FMI_NONE,                                   //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            }
        }
    },
    {
    //!< ** General List Setting
        "NvParamGreenEffC1",                                //!< achName[16]
        DB_NVM_PAR,                                         //!< u8ListClass - [DEF] RAM/NVMEM
        DB_NVMEM,                                           //!< u8ListType  - [DEF] RAM/NVMEM
        30,                                                 //!< u8ListIdx - List Index
        12,                                                 //!< u16VarMax - [NUM] Max Variable
        12,                                                 //!< u16NumValues - [NUM] Number of addressable values in list(counting each array value)
        23,                                                 //!< u16ShadowBytes - [NUM] need Shadow RAM in Byte
        280U,                                               //!< u32Password - [NUM] DbList unique key
        &gDb_tNvParamGreenEffC1.tListRoot,                  //!< cptListRoot - [NUM] ListRoot
    //!< ** RAM General Setting
        NULL,                                               //!< cptRamVarTab - [STC] Pointer of RAM
        DB_SINGLE,                                          //!< u8RamMode - [DEF] Single/Double
        TRUE,                                               //!< boRamCrc - [DEF] with CRC
    //!< ** NVMEM General Setting
        &gDb_catVarTabNvParamGreenEffC1[0],                 //!< cptNvmVarTab - [STC] Pointer of NVMEM
        1,                                                  //!< u8NvmDfltSet;             - [NUM] Count of Maximal Default Sets
        0,                                                  //!< u16NvmDfltParamIdx;       - [NUM] Dflt Param Idx for the Default Sets
        0,                                                  //!< u16NvmFlashParamIdx;      - [NUM] Flash Param Idx for the Flash Sets
        1,                                                  //!< u8NvmLoadDfltSetChaParIdx - [NUM] Dflt Param Idx has change - load that default set
        1,                                                  //!< u8NvmLoadDfltSetFoundErr  - [NUM] List Error is there - load that default set
        TRUE,                                               //!< boNvmLoadFlashChaParIdx   - [NUM] Flash Param Idx has change - load that Flash Setting
        FALSE,                                              //!< boNvmLoadFlashFoundErr    - [NUM] List Error is there - load that Flash Setting
        TRUE,                                               //!< boNvmLoadFlashChaFlaSet   - [NUM] Flash Setting has change - load that Flash Setting
        FALSE,                                              //!< boNvmValueRangeCheck   - [NUM] List Range Check
        DB_DOUBLE,                                          //!< u8NvmNvmListMode - [DEF] Single/Double
        TRUE,                                               //!< boNvmCrc - [DEF] with CRC
        2300,                                               //!< u16NvmAutoStartAdr - [NUM] Autostart Adr
        4800,                                               //!< u16NvmDoubleStartAdr - [NUM] - List Double Start Adr
    //!< ** Error (RAM/NvMem)
        { //!< List Error definition
            { //!< RAM Error
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT0_NOT,                               //!< u8ErrCat
                ACC_ALL_NO,                                 //!< u16ErrAccLevel
                0,                                          //!< u32ErrNum
                FMI_NONE,                                   //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            },
            { //!<  NVMEM Load
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT0_NOT,                               //!< u8ErrCat
                0xAAAA,                                     //!< u16ErrAccLevel
                1356,                                       //!< u32ErrNum
                FMI_31_CONDITION_EXISTS,                    //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            },
            { //!< NVMEM Store
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT0_NOT,                               //!< u8ErrCat
                0xAAAA,                                     //!< u16ErrAccLevel
                1357,                                       //!< u32ErrNum
                FMI_31_CONDITION_EXISTS,                    //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            },
            { //!<  NVMEM Backup
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT0_NOT,                               //!< u8ErrCat
                0xAAAA,                                     //!< u16ErrAccLevel
                1358,                                       //!< u32ErrNum
                FMI_31_CONDITION_EXISTS,                    //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            }
        }
    },
    {
    //!< ** General List Setting
        "RamGreenEffC1",                                    //!< achName[16]
        DB_RAM_ECU,                                         //!< u8ListClass - [DEF] RAM/NVMEM
        DB_RAM,                                             //!< u8ListType  - [DEF] RAM/NVMEM
        31,                                                 //!< u8ListIdx - List Index
        21,                                                 //!< u16VarMax - [NUM] Max Variable
        21,                                                 //!< u16NumValues - [NUM] Number of addressable values in list(counting each array value)
        28,                                                 //!< u16ShadowBytes - [NUM] need Shadow RAM in Byte
        175U,                                               //!< u32Password - [NUM] DbList unique key
        &gDb_tRamGreenEffC1.tListRoot,                      //!< cptListRoot - [NUM] ListRoot
    //!< ** RAM General Setting
        &gDb_catVarTabRamGreenEffC1[0],                     //!< cptRamVarTab - [STC] Pointer of RAM
        DB_SINGLE,                                          //!< u8RamMode - [DEF] Single/Double
        FALSE,                                              //!< boRamCrc - [DEF] with CRC
    //!< ** NVMEM General Setting
        NULL,                                               //!< cptNvmVarTab - [STC] Pointer of NVMEM
        1,                                                  //!< u8NvmDfltSet;             - [NUM] Count of Maximal Default Sets
        0,                                                  //!< u16NvmDfltParamIdx;       - [NUM] Dflt Param Idx for the Default Sets
        0,                                                  //!< u16NvmFlashParamIdx;      - [NUM] Flash Param Idx for the Flash Sets
        1,                                                  //!< u8NvmLoadDfltSetChaParIdx - [NUM] Dflt Param Idx has change - load that default set
        1,                                                  //!< u8NvmLoadDfltSetFoundErr  - [NUM] List Error is there - load that default set
        TRUE,                                               //!< boNvmLoadFlashChaParIdx   - [NUM] Flash Param Idx has change - load that Flash Setting
        TRUE,                                               //!< boNvmLoadFlashFoundErr    - [NUM] List Error is there - load that Flash Setting
        TRUE,                                               //!< boNvmLoadFlashChaFlaSet   - [NUM] Flash Setting has change - load that Flash Setting
        FALSE,                                              //!< boNvmValueRangeCheck   - [NUM] List Range Check
        DB_SINGLE,                                          //!< u8NvmNvmListMode - [DEF] Single/Double
        FALSE,                                              //!< boNvmCrc - [DEF] with CRC
        0,                                                  //!< u16NvmAutoStartAdr - [NUM] Autostart Adr
        0,                                                  //!< u16NvmHeadAddr - [NUM] - only for NVMEM
    //!< ** Error (RAM/NvMem)
        { //!< List Error definition
            { //!< RAM Error
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT0_NOT,                               //!< u8ErrCat
                ACC_ALL_NO,                                 //!< u16ErrAccLevel
                0,                                          //!< u32ErrNum
                FMI_NONE,                                   //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            },
            { //!<  NVMEM Load
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT0_NOT,                               //!< u8ErrCat
                ACC_ALL_NO,                                 //!< u16ErrAccLevel
                0,                                          //!< u32ErrNum
                FMI_NONE,                                   //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            },
            { //!< NVMEM Store
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT0_NOT,                               //!< u8ErrCat
                ACC_ALL_NO,                                 //!< u16ErrAccLevel
                0,                                          //!< u32ErrNum
                FMI_NONE,                                   //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            },
            { //!<  NVMEM Backup
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT0_NOT,                               //!< u8ErrCat
                ACC_ALL_NO,                                 //!< u16ErrAccLevel
                0,                                          //!< u32ErrNum
                FMI_NONE,                                   //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            }
        }
    }
};

