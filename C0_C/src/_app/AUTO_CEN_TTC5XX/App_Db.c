//**************************************************************************************************
//! @crc        2852915406
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

TDbRamEcuInputsC0 gDb_tRamEcuInputsC0 =
{
    {DB_LIST_DFLT,{{{0,0,0,0,0,0},{0,0}},{0,FALSE,0,0,FALSE,FALSE,FALSE},{0,0,0,0,0,0}},{0,(TVoid*)&gDb_catList[0],{NULL,0},DB_STAMP}}, //!< tListRoot
    BI3_UNDEF,                                              //!< bi3PressureBlockOscillationState
    I16_UNDEF,                                              //!< i16PressureBlockOscillationValue
    U16_UNDEF,                                              //!< u16PressureBlockOscillationRawValue
    BI3_UNDEF,                                              //!< bi3PressureBrakeSensorState
    I16_UNDEF,                                              //!< i16PressureBrakeSensorValue
    U16_UNDEF,                                              //!< u16PressureBrakeSensorRawValue
    BI3_UNDEF,                                              //!< bi3TemperatureTransmissionState
    I16_UNDEF,                                              //!< i16TemperatureTransmissionValue
    U16_UNDEF,                                              //!< u16TemperatureTransmissionRawValue
    GE_DI_OFF,                                              //!< eFaultPvgLeftTrakState
    U16_UNDEF,                                              //!< u16FaultPvgLeftTrakRawValue
    GE_DI_OFF,                                              //!< eFaultPvgRightTrakState
    U16_UNDEF,                                              //!< u16FaultPvgRightTrakRawValue
    GE_DI_OFF,                                              //!< eDownAxleOscillantState
    U16_UNDEF,                                              //!< u16DownAxleOscillantRawValuePin0
    U16_UNDEF,                                              //!< u16DownAxleOscillantRawValuePin1
    GE_DI_OFF,                                              //!< eDownAxleFixeState
    U16_UNDEF,                                              //!< u16DownAxleFixeRawValuePin0
    U16_UNDEF,                                              //!< u16DownAxleFixeRawValuePin1
    GE_DI_OFF,                                              //!< eUpAxleOscillantState
    U16_UNDEF,                                              //!< u16UpAxleOscillantRawValue
    GE_DI_OFF,                                              //!< eUpAxleFixeState
    U16_UNDEF,                                              //!< u16UpAxleFixeRawValue
    GE_DI_OFF,                                              //!< eFrameRotationSensor1State
    U16_UNDEF,                                              //!< u16FrameRotationSensor1RawValuePin0
    U16_UNDEF,                                              //!< u16FrameRotationSensor1RawValuePin1
    GE_DI_OFF,                                              //!< eRailHookSensorState
    U16_UNDEF,                                              //!< u16RailHookSensorRawValue
    GE_DI_OFF,                                              //!< eInductiveRailSensorState
    U16_UNDEF,                                              //!< u16InductiveRailSensorRawValue
    GE_DI_OFF,                                              //!< eCenteredTurretState
    U16_UNDEF,                                              //!< u16CenteredTurretRawValue
    GE_DI_OFF,                                              //!< eWorkKeyTrackSideState
    U16_UNDEF,                                              //!< u16WorkKeyTrackSideRawValue
    GE_DI_OFF,                                              //!< eFrameRotationSensor2State
    U16_UNDEF,                                              //!< u16FrameRotationSensor2RawValuePin0
    U16_UNDEF,                                              //!< u16FrameRotationSensor2RawValuePin1
    GE_DI_OFF,                                              //!< eWorkKeyBilateralState
    U16_UNDEF,                                              //!< u16WorkKeyBilateralRawValue
    GE_DI_OFF,                                              //!< eWorkKeyCentredState
    U16_UNDEF,                                              //!< u16WorkKeyCentredRawValue
    GE_DI_OFF,                                              //!< eAbutmentTurretTrackSideState
    U16_UNDEF,                                              //!< u16AbutmentTurretTrackSideRaw
    GE_DI_OFF,                                              //!< eAbutmentTurretCentredSideState
    U16_UNDEF,                                              //!< u16AbutmentTurretCentredSideRaw
    GE_DI_OFF,                                              //!< eOscillantAxleSpeedSensorDirState
    U16_UNDEF,                                              //!< u16OscillantAxleSpeedSensorDirRaw
    GE_DI_OFF,                                              //!< eFixeAxleSpeedSensorDirState
    U16_UNDEF,                                              //!< u16FixeAxleSpeedSensorDirRaw
    GE_DI_OFF,                                              //!< eTrailerGacheState
    U16_UNDEF,                                              //!< u16TrailerGacheRawValue
    GE_DI_OFF,                                              //!< eMeasuringMastSensorFoldedState
    U16_UNDEF,                                              //!< u16MeasuringMastSensorFoldedRaw
    I32_UNDEF,                                              //!< i32OscillantAxleFrequency
    I32_UNDEF,                                              //!< i32FixeAxleFrequency
    GE_DI_OFF,                                              //!< eAruRadio1ContactState
    U16_UNDEF,                                              //!< u16AruRadio1ContactRawValue
    GE_DI_OFF,                                              //!< eAruRadio2ContactState
    U16_UNDEF,                                              //!< u16AruRadio2ContactRawValue
    GE_DI_OFF,                                              //!< eAru1ContactState
    I16_UNDEF,                                              //!< u16Aru1ContactRawValue
    GE_DI_OFF,                                              //!< eAru2ContactState
    U16_MIN,                                                //!< u16Aru2ContactRawValue
    GE_DI_OFF,                                              //!< eStarterMotorState
    U16_UNDEF,                                              //!< u16StarterMotorRawValue
    GE_DI_OFF,                                              //!< eAutorisationHighSpeedKeyState
    U16_UNDEF,                                              //!< u16AutorisationHighSpeedKeyRawValue
    BI3_UNDEF,                                              //!< bi3ElectricPumpPressureState
    I16_UNDEF,                                              //!< i16ElectricPumpPressureValue
    U16_UNDEF,                                              //!< u16ElectricPumpPressureRawValue
    GE_DI_OFF,                                              //!< eUpMastSensorNCState
    U16_UNDEF,                                              //!< u16UpMastSensorNCRawValue
    GE_DI_OFF,                                              //!< eValveInDownPositionSensorState
    U16_UNDEF                                               //!< u16ValveInDownPositionSensorValue
};

TDbRamEcuOutputsC0 gDb_tRamEcuOutputsC0 =
{
    {DB_LIST_DFLT,{{{0,0,0,0,0,0},{0,0}},{0,FALSE,0,0,FALSE,FALSE,FALSE},{0,0,0,0,0,0}},{1,(TVoid*)&gDb_catList[1],{NULL,0},DB_STAMP}}, //!< tListRoot
    FALSE,                                                  //!< boEvDeflectorTransmissionCommand
    GE_DIG_ERROR,                                           //!< eEvDeflectorTransmissionValue
    FALSE,                                                  //!< boEvUpMeasuringMastCommand
    GE_DIG_ERROR,                                           //!< eEvUpMeasuringMastValue
    FALSE,                                                  //!< boEvDownMeasuringMastCommand
    GE_DIG_ERROR,                                           //!< eEvDownMeasuringMastValue
    FALSE,                                                  //!< boEvServiceBrakeTrackCommand
    GE_DIG_ERROR,                                           //!< eEvServiceBrakeTrackValue
    FALSE,                                                  //!< boEvPowerReductionCommand
    GE_DIG_ERROR,                                           //!< eEvPowerReductionValue
    FALSE,                                                  //!< boEvFrameRotation1Command
    GE_DIG_ERROR,                                           //!< eEvFrameRotation1Value
    FALSE,                                                  //!< boEvFrameRotation2Command
    GE_DIG_ERROR,                                           //!< eEvFrameRotation2Value
    FALSE,                                                  //!< boSupplyRadioReceiverCommand
    GE_DIG_ERROR,                                           //!< eSupplyRadioReceiverValue
    FALSE,                                                  //!< boBuzzerLynxMovingMachineCommand
    GE_DIG_ERROR,                                           //!< eBuzzerLynxMovingMachineValue
    FALSE,                                                  //!< boWhiteLightsTrailerCommand
    GE_DIG_ERROR,                                           //!< eWhiteLightsTrailerValue
    FALSE,                                                  //!< boRedLightsTrailerCommand
    GE_DIG_ERROR,                                           //!< eRedLightsTrailerValue
    FALSE,                                                  //!< boWhiteLightAVGCommand
    GE_DIG_ERROR,                                           //!< eWhiteLightAVGValue
    FALSE,                                                  //!< boWhiteLightAVDCommand
    GE_DIG_ERROR,                                           //!< eWhiteLightAVDValue
    FALSE,                                                  //!< boRedLightAVGCommand
    GE_DIG_ERROR,                                           //!< eRedLightAVGValue
    FALSE,                                                  //!< boRedLightAVDCommand
    GE_DIG_ERROR,                                           //!< eRedLightAVDValue
    FALSE,                                                  //!< boWhiteLightARGCommand
    GE_DIG_ERROR,                                           //!< eWhiteLightARGValue
    FALSE,                                                  //!< boWhiteLightARDCommand
    GE_DIG_ERROR,                                           //!< eWhiteLightARDValue
    FALSE,                                                  //!< boRedLightARGCommand
    GE_DIG_ERROR,                                           //!< eRedLightARGValue
    FALSE,                                                  //!< boRedLightARDCommand
    GE_DIG_ERROR,                                           //!< eRedLightARDValue
    FALSE,                                                  //!< boSupllyPvgLeftTrackCommand
    GE_DIG_ERROR,                                           //!< eSupllyPvgLeftTrackValue
    FALSE,                                                  //!< boSupllyPvgRightTrackCommand
    GE_DIG_ERROR,                                           //!< eSupllyPvgRightTrackValue
    GE_DIG_ERROR,                                           //!< eEvUnBlockOscillationAxleState
    FALSE,                                                  //!< boEvUnBlockOscillationAxleCmdBool
    GE_DIG_ERROR,                                           //!< eEvUpAxleOscillantState
    FALSE,                                                  //!< boEvUpAxleOscillantCommandBool
    GE_DIG_ERROR,                                           //!< eEvDownAxleOscillantState
    FALSE,                                                  //!< boEvDownAxleOscillantCommandBool
    GE_DIG_ERROR,                                           //!< eEvUpAxleFixeState
    FALSE,                                                  //!< boEvUpAxleFixeCommandBool
    GE_DIG_ERROR,                                           //!< eEvDownAxleFixeState
    FALSE,                                                  //!< boEvDownAxleFixeCommandBool
    GE_DIG_ERROR,                                           //!< eEvParkBrakeAxleOscillantState
    FALSE,                                                  //!< boEvParkBrakeAxleOscillantCmdBool
    GE_DIG_ERROR,                                           //!< eEvParkBrakeAxleFixeState
    FALSE,                                                  //!< boEvParkBrakeAxleFixeCmdBool
    GE_DIG_ERROR,                                           //!< eEvServiceBrakeAxleOscillantState
    FALSE,                                                  //!< boEvServiceBrakeAxleOsciCmdBool
    GE_DIG_ERROR,                                           //!< eEvServiceBrakeAxleFixeState
    FALSE,                                                  //!< boEvServiceBrakeAxleFixeCmdBool
    GE_DIG_ERROR,                                           //!< eKlaxonNeotecState
    FALSE,                                                  //!< boKlaxonNeotecCmdBool
    GE_PRO_ERROR,                                           //!< eForwardPumpState
    U16_MIN,                                                //!< u16ForwardPumpCommand
    U16_MIN,                                                //!< u16ForwardPumpCurrent
    GE_PRO_ERROR,                                           //!< eBackwardPumpState
    U16_MIN,                                                //!< u16BackwardPumpCommand
    U16_MIN,                                                //!< u16BackwardPumpCurrent
    U16_MIN,                                                //!< u16PvgLeftTrackCommand
    U16_MIN,                                                //!< u16PvgLeftTrackVoltage
    U16_MIN,                                                //!< u16PvgRightTrackCommand
    U16_MIN,                                                //!< u16PvgRightTrackVoltage
    FALSE,                                                  //!< boSupplyAnaSensorsCommand
    GE_DIG_ERROR,                                           //!< eSupplyAnaSensorsValue
    FALSE,                                                  //!< boPvgLeftTrackLowsideCommand
    GE_DIG_ERROR,                                           //!< ePvgLeftTrackLowsideValue
    FALSE,                                                  //!< boPvgRightTrackLowsideCommand
    GE_DIG_ERROR,                                           //!< ePvgRightTrackLowsideValue
    FALSE,                                                  //!< boReturnLowSideEvForwardPumpCmd
    GE_DIG_ERROR,                                           //!< eReturnLowSideEvForwardPumpState
    FALSE,                                                  //!< boReturnLowSideEvBackwardPumpCmd
    GE_DIG_ERROR,                                           //!< eReturnLowSideEvBackwardPumpState
    FALSE,                                                  //!< boNeonLightsCmd
    GE_DIG_UNDEF,                                           //!< eNeonLightsValue
    GE_DIG_UNDEF,                                           //!< eEv2DeflectorTransmissionValue
    FALSE,                                                  //!< boCoolingRelayCommand
    GE_DIG_UNDEF,                                           //!< eCoolingRelayState
    FALSE,                                                  //!< boEv2ndParkBrakeAxleFixe
    FALSE,                                                  //!< boEv2ndParkBrakeAxleOsci
    GE_DIG_ERROR,                                           //!< eEv2ndParkBrakeAxleFixeState
    GE_DIG_ERROR,                                           //!< eEv2ndParkBrakeAxleOsciState
    U16_MIN,                                                //!< u16PvgTransRailElectricCmd
    U16_MIN,                                                //!< u16PvgTransRailElectricVoltage
    FALSE,                                                  //!< boSupllyPvgTransRailElectricCmd
    GE_DIG_ERROR,                                           //!< eSupllyPvgTransRailElectricState
    FALSE,                                                  //!< boEvDevRailElectricModeCmd
    GE_DIG_ERROR,                                           //!< eEvDevRailElectricModeState
    FALSE,                                                  //!< boRelayCutOffVariatorElectricCmd
    GE_DIG_ERROR,                                           //!< eRelayCutOffVariatorElectricState
    FALSE,                                                  //!< boRelayEnableBatteryCmd
    GE_DIG_ERROR                                            //!< eRelayEnableBatteryState
};

TDbRamGeneralC0 gDb_tRamGeneralC0 =
{
    {DB_LIST_DFLT,{{{0,0,0,0,0,0},{0,0}},{0,FALSE,0,0,FALSE,FALSE,FALSE},{0,0,0,0,0,0}},{2,(TVoid*)&gDb_catList[2],{NULL,0},DB_STAMP}}, //!< tListRoot
    U8_MIN,                                                 //!< u8LifeByte
    GE_RUNNING,                                             //!< eWatchdogState
    0,                                                      //!< u16EcuVoltage
    GE_NO_OFFRAIL_MODE,                                     //!< eOffRailMode
    GE_NO_SPEED_MAX_RAIL_MODE,                              //!< eRailSpeedMode
    0,                                                      //!< i16OutputLutLeftManipulator
    0,                                                      //!< i16OutputLutLeftTrackPvg
    0,                                                      //!< i16OutputLutRightManipulator
    0,                                                      //!< i16OutputLutRightTrackPvg
    0,                                                      //!< i16OutputLutJoystickAdvanceRail
    0,                                                      //!< i16OutputLutForwardPumpTransmission
    0,                                                      //!< i16OutputLutBackwardPumpTransm
    0,                                                      //!< i16ConsigneForwardPumpTransmPercent
    0,                                                      //!< i16LastJoystickAdvanceValue
    0,                                                      //!< i16JoystickAdvanceScalingValue
    GE_DEFINE_BRAKE,                                        //!< eStateServiceBrakeRail
    FALSE,                                                  //!< boEnableStartTimerServiceBrake
    0,                                                      //!< u16SpeedMotorCommandTest
    FALSE,                                                  //!< boForceSilentModeMotorTest
    0,                                                      //!< u16AngularSensorTest
    0,                                                      //!< u16SpeedAxleSensor
    U32_MIN,                                                //!< u32AverageTimeCycle
    U32_MIN,                                                //!< u32MaxTimeCycle
    FALSE,                                                  //!< boFirstTranslationReleaseParkBrake
    TRUE,                                                   //!< boAutorizeUpAxleOscillant
    TRUE,                                                   //!< boAutorizeDownAxleOscillant
    TRUE,                                                   //!< boAutorizeUpAxlefixe
    TRUE,                                                   //!< boAutorizeDownAxlefixe
    FALSE,                                                  //!< boEngineOn
    FALSE,                                                  //!< boTranslationMovementIsSolicited
    GE_STOP_RAIL_DIR,                                       //!< eRailTranslationDirection
    FALSE,                                                  //!< boSetConditionAruRadioAlarm
    I16_UNDEF,                                              //!< i16JoystickAdvanceSetpointAfterRamp
    FALSE,                                                  //!< boStabilizedStop
    FALSE,                                                  //!< boEmergencyBrake
    FALSE,                                                  //!< boEmergencyServiceBrakeTimerDone
    FALSE,                                                  //!< boStoppedMachineUnblkOsciTimerDone
    I16_UNDEF,                                              //!< i16OutLutLeftManipulatorAfterRamp
    I16_UNDEF,                                              //!< i16OutLutRightManipulatorAfterRamp
    U16_UNDEF,                                              //!< u16DeltaBeetweenLeftRightPvgCrawler
    I16_UNDEF,                                              //!< i16ConsigneLeftPvgTrack
    I16_UNDEF,                                              //!< i16ConsigneRightPvgTrack
    U8_UNDEF,                                               //!< u8BrakeWithoutGachetteOrPedal
    0,                                                      //!< u16AruRadioAlarmCounter
    FALSE,                                                  //!< boRedLightARGBasketCmd
    FALSE,                                                  //!< boWhiteLightARGBasketCmd
    FALSE,                                                  //!< boPortillonLadderClose
    FALSE,                                                  //!< boTestEvision
    GE_NEU_JOY,                                             //!< ePosJoystickAdvance
    GE_NEU_JOY,                                             //!< eRetainPosJoyAdvanceUntilBrake
    FALSE,                                                  //!< boAuthorizeForwardCrawler
    FALSE,                                                  //!< boAuthorizeBackwardCrawler
    I16_UNDEF,                                              //!< i16ReturnValueUartInit
    FALSE,                                                  //!< boAuthorizeTransRailMovement
    0,                                                      //!< u16EvForwardTrackConsigne
    0,                                                      //!< u16EvForwardRailConsigne
    0U,                                                     //!< u32EngineTimeSecond
    0,                                                      //!< boRamGeneralNeotecC0_1
    0,                                                      //!< boRamGeneralNeotecC0_1_1
    0,                                                      //!< boRamGeneralNeotecC0_1_2
    0,                                                      //!< boRamGeneralNeotecC0_1_3
    0,                                                      //!< boRamGeneralNeotecC0_1_4
    0,                                                      //!< boRamGeneralNeotecC0_1_5
    0,                                                      //!< boRamGeneralNeotecC0_1_6
    0,                                                      //!< boRamGeneralNeotecC0_1_7
    0,                                                      //!< boRamGeneralNeotecC0_1_8
    0,                                                      //!< boRamGeneralNeotecC0_1_9
    0,                                                      //!< boRamGeneralNeotecC0_1_10
    0,                                                      //!< boRamGeneralNeotecC0_1_11
    0,                                                      //!< boRamGeneralNeotecC0_1_12
    0,                                                      //!< boRamGeneralNeotecC0_1_13
    0,                                                      //!< boRamGeneralNeotecC0_1_14
    0,                                                      //!< boRamGeneralNeotecC0_1_15
    0,                                                      //!< u8RamGeneralNeotecC0_2
    0,                                                      //!< u8RamGeneralNeotecC0_2_1
    0,                                                      //!< u8RamGeneralNeotecC0_2_2
    0,                                                      //!< u8RamGeneralNeotecC0_2_3
    0,                                                      //!< u8RamGeneralNeotecC0_2_4
    0,                                                      //!< u8RamGeneralNeotecC0_2_5
    0,                                                      //!< u16RamGeneralNeotecC0_3
    0,                                                      //!< u16RamGeneralNeotecC0_3_1
    0,                                                      //!< u16RamGeneralNeotecC0_3_2
    0,                                                      //!< u16RamGeneralNeotecC0_3_3
    0,                                                      //!< u16RamGeneralNeotecC0_3_4
    0,                                                      //!< u16RamGeneralNeotecC0_3_5
    0,                                                      //!< u16RamGeneralNeotecC0_3_6
    0,                                                      //!< u16RamGeneralNeotecC0_3_7
    0,                                                      //!< u16RamGeneralNeotecC0_3_8
    0,                                                      //!< i16RamGeneralNeotecC0_4
    0,                                                      //!< i16RamGeneralNeotecC0_4_1
    0,                                                      //!< i16RamGeneralNeotecC0_4_2
    0,                                                      //!< i16RamGeneralNeotecC0_4_3
    0,                                                      //!< i16RamGeneralNeotecC0_4_4
    0,                                                      //!< i16RamGeneralNeotecC0_4_5
    0,                                                      //!< i16RamGeneralNeotecC0_4_6
    0,                                                      //!< i16RamGeneralNeotecC0_4_7
    0,                                                      //!< i16RamGeneralNeotecC0_4_8
    FALSE,                                                  //!< boRedLightARDBasketCmd
    FALSE,                                                  //!< boWhiteLightARDBasketCmd
    FALSE,                                                  //!< boActiveFailure
    0,                                                      //!< u8ReductionPumpRail
    0,                                                      //!< u8ReductionPumpTrack
    FALSE,                                                  //!< boActiveWhiteLights15746
    FALSE,                                                  //!< boWhiteLightAv15746Command
    FALSE,                                                  //!< boWhiteLightAr15746Command
    FALSE,                                                  //!< boTestElectricalIO
    FALSE,                                                  //!< boSendEventDataloggerMessage
    FALSE,                                                  //!< boSlopeModeFromC1
    FALSE,                                                  //!< boBlinkLow
    0U,                                                     //!< u32TotalDistance
    FALSE,                                                  //!< boRunningStable48XS
    FALSE,                                                  //!< boAlarmHydTempRailActive
    FALSE,                                                  //!< boAlarmHydTempCrawlerActive
    0,                                                      //!< u16FaultyValue
    0,                                                      //!< u8DeviceNum
    0,                                                      //!< u8ErrorCode
    FALSE                                                   //!< boEngineRunningStable
};

TDbNvOptionsC0 gDb_tNvOptionsC0 =
{
    {DB_LIST_DFLT,{{{0,0,0,0,0,0},{0,0}},{0,FALSE,0,0,FALSE,FALSE,FALSE},{0,0,0,0,0,0}},{3,(TVoid*)&gDb_catList[3],{NULL,0},DB_STAMP}}, //!< tListRoot
    FALSE,                                                  //!< boConfigHollandaise
    FALSE,                                                  //!< boPortillon
    FALSE,                                                  //!< boLadder
    FALSE,                                                  //!< boMeasuringMat
    FALSE,                                                  //!< boIncliBasketHighSectorForAcesSite
    FALSE,                                                  //!< boBasketCenteredForAccesSite
    FALSE,                                                  //!< boMastDigitalDisplay
    FALSE,                                                  //!< boAutorisationWorkKeyPresent
    FALSE,                                                  //!< boSecondParkBrakeActive
    TRUE,                                                   //!< boAddPerformanceFunc
    FALSE,                                                  //!< boBasketTurretLimitation
    FALSE                                                   //!< boPresenceSensorPlate
};

TDbNvMemoryC0 gDb_tNvMemoryC0 =
{
    {DB_LIST_DFLT,{{{0,0,0,0,0,0},{0,0}},{0,FALSE,0,0,FALSE,FALSE,FALSE},{0,0,0,0,0,0}},{4,(TVoid*)&gDb_catList[4],{NULL,0},DB_STAMP}}, //!< tListRoot
    0,                                                      //!< u16NCycleBrakePerform
    0,                                                      //!< u8LightMode
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
    0L,                                                     //!< i32gDistanceTraveledMeasureMast
    0,                                                      //!< u16NCycle2ndParkBrakePerform
    0,                                                      //!< u16gTotalDistanceMsb
    0                                                       //!< u16gTotalDistanceLsb
};

TDbNvParametersC0 gDb_tNvParametersC0 =
{
    {DB_LIST_DFLT,{{{0,0,0,0,0,0},{0,0}},{0,FALSE,0,0,FALSE,FALSE,FALSE},{0,0,0,0,0,0}},{5,(TVoid*)&gDb_catList[5],{NULL,0},DB_STAMP}}, //!< tListRoot
    75,                                                     //!< u16LimitTresholdAngleRadioControl
    5,                                                      //!< u16TresholdMinimalSpeedParkBrake
    8,                                                      //!< u16TresholdMinimalSpeedServiceBrake
    0,                                                      //!< u8AdditionnalPourcentFwardPumpCmd
    20,                                                     //!< u8AddPrctFwardPumpSilentModeMotor
    60,                                                     //!< u8NodeIdRadioCommand
    8,                                                      //!< u8DeadZoneJoystickRotationTurret
    350U,                                                   //!< u32ServiceAxleBrakeTimeBeforeBrake
    2000U,                                                  //!< u32ServiceBrakeOffrailTime
    1000,                                                   //!< u16EngineOffCurEvForwardPump
    3000,                                                   //!< u16MinCurEvForwardPump
    1100,                                                   //!< u16StopCurEvForwardPump
    1000,                                                   //!< u16EngineOffCurEvBackwardPump
    3000,                                                   //!< u16MinCurEvBackwardPump
    1100,                                                   //!< u16StopCurEvBackwardPump
    52,                                                     //!< u8PosNeutralJoyAdvancement
    400,                                                    //!< u16PidGpEvForwardPump
    50,                                                     //!< u16PidTiEvForwardPump
    0,                                                      //!< u16PidTdEvForwardPump
    400,                                                    //!< u16PidGpEvBackwardPump
    50,                                                     //!< u16PidTiEvBackwardPump
    0,                                                      //!< u16PidTdEvBackwardPump
    250,                                                    //!< i16OutCharPosPressureBlockOscil
    0,                                                      //!< i16OutCharNeuPressureBlockOscil
    0,                                                      //!< i16OutCharNegPressureBlockOscil
    250,                                                    //!< i16OutCharPosPressureBrake
    0,                                                      //!< i16OutCharNeuPressureBrake
    0,                                                      //!< i16OutCharNegPressureBrake
    150,                                                    //!< i16OutCharPosTempTransmission
    -50,                                                    //!< i16OutCharNeuTempTransmission
    -50,                                                    //!< i16OutCharNegTempTransmission
    4000,                                                   //!< i16MinConsigneEvForwardRail
    11150,                                                  //!< i16MaxConsigneEvForwardRail
    4000,                                                   //!< i16MinConsigneEvBackwardRail
    11150,                                                  //!< i16MaxConsigneEvBackwardRail
    {1000, 1000, 1000, 1000},                               //!< au16TimeRampEvAdvancementRail
    4000,                                                   //!< i16MinConsigneEvForwardCrawler
    11150,                                                  //!< i16MaxConsigneEvForwardCrawler
    {100, 100},                                             //!< au16EvForwardCrawlerAdvanceRampRatio
    500,                                                    //!< u16TresholdRegimeMotorParkBrake
    55,                                                     //!< u8MinPvgLeftTrackAv
    75,                                                     //!< u8MaxPvgLeftTrackAv
    45,                                                     //!< u8MinPvgLeftTrackAr
    25,                                                     //!< u8MaxPvgLeftTrackAr
    55,                                                     //!< u8MinPvgRightTrackAv
    75,                                                     //!< u8MaxPvgRightTrackAv
    45,                                                     //!< u8MinPvgRightTrackAr
    25,                                                     //!< u8MaxPvgRightTrackAr
    {200, 200, 200, 200},                                   //!< au16TimeRampLeftTrack
    {200, 200, 200, 200},                                   //!< au16TimeRampRightTrack
    20000U,                                                 //!< u32TimeStabilizedStopDetection
    10L,                                                    //!< i32TresholdLowSpeedStabilizedStop
    5000U,                                                  //!< u32TimeEmergencyServiceBrake
    10000U,                                                 //!< u32TimeStoppedMachineUnblockOscAxle
    0L,                                                     //!< i32TresholdLowSpeedUnblockOsciAxle
    5000,                                                   //!< u16GapMaxPvgCrawlerAdvancement
    5000,                                                   //!< u16GapMaxInvertedPvgCrawler
    2500,                                                   //!< u16TresholdAnaToBoForInputs48Xs
    250,                                                    //!< u16InMinJoystickAdvance
    750,                                                    //!< u16InMaxJoystickAdvance
    1,                                                      //!< u16SpeedMiniTresholdServiceBrake
    10,                                                     //!< u8NbElementAverageSlopeTransAngle
    10,                                                     //!< u8NbElementAverageSlopeLongAngle
    5,                                                      //!< u8DeadZoneJoystickRailAdvancement
    10,                                                     //!< u8NbElementAverageSlopeTransAngle2
    10,                                                     //!< u8NbElementAverageSlopeLongAngle2
    0,                                                      //!< boNvParametersC0_1
    0,                                                      //!< boNvParametersC0_2
    0,                                                      //!< boNvParametersC0_3
    0,                                                      //!< boNvParametersC0_4
    0,                                                      //!< boNvParametersC0_5
    0,                                                      //!< u8NvParametersC0_6
    0,                                                      //!< u8NvParametersC0_7
    0,                                                      //!< u8NvParametersC0_8
    0,                                                      //!< u8NvParametersC0_9
    0,                                                      //!< u16NvParametersC0_10
    0,                                                      //!< u16NvParametersC0_11
    0,                                                      //!< u16NvParametersC0_12
    0,                                                      //!< u16NvParametersC0_13
    0,                                                      //!< i16NvParametersC0_14
    0,                                                      //!< i16NvParametersC0_15
    0,                                                      //!< i16NvParametersC0_16
    0,                                                      //!< i16NvParametersC0_17
    0,                                                      //!< i16ThreshotothydraulicTemperature
    600,                                                    //!< i16TimeforCoolerOn
    25,                                                     //!< u16TimeFaultPressureReducCrawler
    2500,                                                   //!< i16RailJoyRatioTwoSpeedFault
    200U,                                                   //!< u32TimeoutSdoRequestTime
    38,                                                     //!< i16PeriodBlinkoffWhiteLight
    5,                                                      //!< u16CptNeutralJoystickMax
    50,                                                     //!< u16StopMotorMGmax
    0,                                                      //!< i16TurretRearPosExtLowSpeedTresh
    0,                                                      //!< i16TurretRearNegExtLowSpeedTresh
    0,                                                      //!< u16NbOfFileParameters
    0,                                                      //!< u8VersionMajor
    0,                                                      //!< u8VersionMinior
    0,                                                      //!< u8VersionPatch
    0,                                                      //!< u8VersionCustom
    4000,                                                   //!< i16OutCharPosElectricPumpPressure
    0,                                                      //!< i16OutCharNeuElectricPumpPressure
    0                                                       //!< i16OutCharNegElectricPumpPressure
};

TDbNvCalibrationC0 gDb_tNvCalibrationC0 =
{
    {DB_LIST_DFLT,{{{0,0,0,0,0,0},{0,0}},{0,FALSE,0,0,FALSE,FALSE,FALSE},{0,0,0,0,0,0}},{6,(TVoid*)&gDb_catList[6],{NULL,0},DB_STAMP}}, //!< tListRoot
    2,                                                      //!< u8ManipulatorLeftMaxPointLut
    {0, 255},                                               //!< ai16ManipulatorLeftXValue
    {0, 10000},                                             //!< ai16ManipulatorLeftYValue
    2,                                                      //!< u8ManipulatorRightMaxPointLut
    {0, 255},                                               //!< ai16ManipulatorRightXValue
    {0, 10000},                                             //!< ai16ManipulatorRightYValue
    2,                                                      //!< u8LeftTrackPvgMaxPointLut
    {100, 100},                                             //!< au16LeftTrackPvgRampRatio
    {0, 0, 10000},                                          //!< ai16RangeValueOfLeftTrackPvgRamp
    {100, 100},                                             //!< au16RightTrackPvgRampRatio
    {0, 0, 10000},                                          //!< ai16RangeValueOfRightTrackPvgRamp
    2,                                                      //!< u8ForwardPumpTransmisMaxPointLut
    {0, 10000},                                             //!< ai16ForwardPumpTransmissionXValue
    {0, 20000},                                             //!< ai16ForwardPumpTransmissionYValue
    2,                                                      //!< u8BackwardPumpTransmisMaxPointLut
    {0, 10000},                                             //!< ai16BackwardPumpTransmissionXValue
    {0, 20000},                                             //!< ai16BackwardPumpTransmissionYValue
    {100, 100},                                             //!< au16ForwardPumpTransmissionRampRatio
    {0, 0, 20000},                                          //!< ai16RangeValueForwardPumpTransRamp
    {100, 100},                                             //!< au16BackwardPumpTransmissionRampRtio
    {0, 0, 20000},                                          //!< ai16RangeValueBackwardPumpTransRamp
    0U,                                                     //!< u32EncodeurTurretOffset
    0,                                                      //!< i16SlopeLongOffset
    0,                                                      //!< i16SlopeTransOffset
    0,                                                      //!< i16SlopeLongOffset2
    0,                                                      //!< i16SlopeTransOffset2
    0U,                                                     //!< u32EncodeurTurretOffset2
    0,                                                      //!< u16EncodeurTurretMsb1
    0,                                                      //!< u16EncodeurTurretMsb2
    0,                                                      //!< u16EncodeurTurretLsb1
    0                                                       //!< u16EncodeurTurretLsb2
};

TDbRam48XsInputsC0 gDb_tRam48XsInputsC0 =
{
    {DB_LIST_DFLT,{{{0,0,0,0,0,0},{0,0}},{0,FALSE,0,0,FALSE,FALSE,FALSE},{0,0,0,0,0,0}},{7,(TVoid*)&gDb_catList[7],{NULL,0},DB_STAMP}}, //!< tListRoot
    FALSE,                                                  //!< boUpInclinaisonBasketButton
    U16_MIN,                                                //!< u16UpInclinaisonBasketButtonValue
    FALSE,                                                  //!< boDownInclinaisonBasketButton
    U16_MIN,                                                //!< u16DownInclinaisonBasketButtonValue
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
    U16_MIN,                                                //!< u16SafetyManSystem
    U16_MIN,                                                //!< u16DeltaArmAxisJoystick
    U16_MIN,                                                //!< u16ArrowArmAxisJoystick
    U16_MIN,                                                //!< u16TelescopeArmAxisJoysitck
    U16_MIN,                                                //!< u16RotationTurretAxisJoystick
    U16_MIN,                                                //!< u16AdvanceAxisJoystick
    FALSE,                                                  //!< boRearmementSafetyManSystem
    U16_MIN,                                                //!< u16RearmementSafetyManSystemVal
    FALSE,                                                  //!< boAbutementNacelleTrackSide
    U16_MIN,                                                //!< u16AbutementNacelleTrackSideVal
    FALSE,                                                  //!< boAbutementNacelleCenteredSide
    U16_MIN,                                                //!< u16AbutementNacelleCenteredSideVal
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
    U16_MIN                                                 //!< u16BatterieVoltage48Xs
};

TDbRam48XsOutputsC0 gDb_tRam48XsOutputsC0 =
{
    {DB_LIST_DFLT,{{{0,0,0,0,0,0},{0,0}},{0,FALSE,0,0,FALSE,FALSE,FALSE},{0,0,0,0,0,0}},{8,(TVoid*)&gDb_catList[8],{NULL,0},DB_STAMP}}, //!< tListRoot
    FALSE,                                                  //!< boWhiteLightsCommand
    GE_DIG_ERROR,                                           //!< eWhiteLightsValue
    FALSE,                                                  //!< boRedLightsCommand
    GE_DIG_ERROR,                                           //!< eRedLightsValue
    FALSE,                                                  //!< boWorkLightCommand
    GE_DIG_ERROR,                                           //!< eWorkLightValue
    FALSE,                                                  //!< boBuzzerCommand
    GE_DIG_ERROR,                                           //!< eBuzzerValue
    GE_IO_E_UNKNOWN,                                        //!< eMotorDefaultLightErrSta
    GE_IO_E_UNKNOWN,                                        //!< eOverloadLightErrSta
    GE_IO_E_UNKNOWN,                                        //!< eBuzzerErrSta
    GE_IO_E_UNKNOWN,                                        //!< eGasOilLightErrSta
    GE_IO_E_UNKNOWN,                                        //!< eDeversDefaultLightErrSta
    GE_IO_E_UNKNOWN,                                        //!< eRedLightARDErrSta
    GE_IO_E_UNKNOWN,                                        //!< eWhiteLightARDErrSta
    GE_IO_E_UNKNOWN,                                        //!< eWarmingLightErrSta
    GE_IO_E_UNKNOWN,                                        //!< eRedLightARGErrSta
    GE_IO_E_UNKNOWN                                         //!< eWhiteLightARGErrSta
};

TDbRamEcuInputRadioControl gDb_tRamEcuInputRadioControl =
{
    {DB_LIST_DFLT,{{{0,0,0,0,0,0},{0,0}},{0,FALSE,0,0,FALSE,FALSE,FALSE},{0,0,0,0,0,0}},{9,(TVoid*)&gDb_catList[9],{NULL,0},DB_STAMP}}, //!< tListRoot
    GE_BOOT_UP,                                             //!< eStateRadioControl
    U8_UNDEF,                                               //!< u8LeftManipulator
    U8_UNDEF,                                               //!< u8RightManipulator
    GE_ERROR,                                               //!< eLeftManipulatorPosition
    GE_ERROR,                                               //!< eRightManipulatorPosition
    FALSE,                                                  //!< boUpAxleArFixe
    FALSE,                                                  //!< boDownAxleArFixe
    FALSE,                                                  //!< boUpAxleAvOscillant
    FALSE,                                                  //!< boDownAxleAvOscillant
    FALSE,                                                  //!< boRotationFrameCtClkwise
    FALSE,                                                  //!< boRotationFrameClkwise
    FALSE,                                                  //!< boSelectorRotTurret
    FALSE,                                                  //!< boSelectorPendular
    FALSE,                                                  //!< boRadioCommandConnect
    FALSE,                                                  //!< boUpPendularOrRotCtClkTurret
    FALSE,                                                  //!< boDownPendularOrRotClkTurret
    FALSE,                                                  //!< boStartRadioCommand
    FALSE,                                                  //!< boStopRadioCommand
    FALSE,                                                  //!< boForcingAdvanceTrack
    FALSE                                                   //!< boKlaxonCommand
};

TDbRamCanSensorC0 gDb_tRamCanSensorC0 =
{
    {DB_LIST_DFLT,{{{0,0,0,0,0,0},{0,0}},{0,FALSE,0,0,FALSE,FALSE,FALSE},{0,0,0,0,0,0}},{10,(TVoid*)&gDb_catList[10],{NULL,0},DB_STAMP}}, //!< tListRoot
    I16_UNDEF,                                              //!< u32EncodeurTurret1AngleRaw
    I16_UNDEF,                                              //!< i16EncodeurTurret1Angle
    I16_UNDEF,                                              //!< u32EncodeurTurret2AngleRaw
    I16_UNDEF,                                              //!< i16EncodeurTurret2Angle
    I16_UNDEF,                                              //!< i16SlopeLongAngleSensor1
    I16_UNDEF,                                              //!< i16SlopeTransAngleSensor1
    I16_UNDEF,                                              //!< i16SlopeLongAngleValue
    I16_UNDEF,                                              //!< i16SlopeTransAngleValue
    U8_UNDEF,                                               //!< u8StateHeartBeatDeversSensor
    U8_UNDEF,                                               //!< u8StateHeartBeatEncodeurTurret1
    U16_UNDEF,                                              //!< u16SelectedSlopeAngle
    U32_UNDEF,                                              //!< u32EncodeurMastMeasureRaw
    U16_UNDEF,                                              //!< u16EncodeurMastMeasureCentimeter
    I16_UNDEF,                                              //!< i16SlopeLongAngleSensor2
    I16_UNDEF,                                              //!< i16SlopeTransAngleSensor2
    U8_UNDEF,                                               //!< u8SlopeAlarm1
    U8_UNDEF,                                               //!< u8SlopeAlarm2
    I16_UNDEF,                                              //!< i16SlopeLongAngleValue2
    I16_UNDEF,                                              //!< i16SlopeTransAngleValue2
    U16_UNDEF,                                              //!< u16ErrorCodeEncodeurTurret1
    U16_UNDEF,                                              //!< u16ErrorRegisterEncodeurTurret1
    U16_UNDEF,                                              //!< u16ErrorCodeEncodeurTurret2
    U16_UNDEF,                                              //!< u16ErrorRegisterEncodeurTurret2
    U16_UNDEF,                                              //!< u16ErrorCodeMastMeasure
    U16_UNDEF,                                              //!< u16ErrorRegisterMastMeasure
    U8_MIN,                                                 //!< u8StateHeartBeatDeversSensor2
    FALSE,                                                  //!< boTimeoutSdoReqDetectedEncdTurret1
    FALSE,                                                  //!< boTimeoutSdoReqDetectedEncdTurret2
    0U,                                                     //!< u32EncodeurTurretOffset
    0U                                                      //!< u32EncodeurTurretOffset2
};

TDbRamEvision7C0 gDb_tRamEvision7C0 =
{
    {DB_LIST_DFLT,{{{0,0,0,0,0,0},{0,0}},{0,FALSE,0,0,FALSE,FALSE,FALSE},{0,0,0,0,0,0}},{11,(TVoid*)&gDb_catList[11],{NULL,0},DB_STAMP}}, //!< tListRoot
    FALSE,                                                  //!< boLoginStatus
    FALSE,                                                  //!< boAllowMovementNacelle
    FALSE,                                                  //!< bogBreak_Parking_On_Off
    FALSE,                                                  //!< bogBreak_Faillure_On_Off
    FALSE,                                                  //!< bogTurretInCenter
    FALSE,                                                  //!< bogTurretSectorInCenter
    FALSE,                                                  //!< bogVehiculeTrainMode
    FALSE,                                                  //!< bogIncoherenceLateralStopAndKey
    FALSE,                                                  //!< bogWorkMode
    FALSE,                                                  //!< bogSafetyElectricPump
    FALSE,                                                  //!< bogDownhill150mm
    FALSE,                                                  //!< bogTrainModeAllow
    FALSE,                                                  //!< bogBrakeTestService
    FALSE,                                                  //!< bogBrakePressureFault
    FALSE,                                                  //!< bogActivateMeasuringMast
    FALSE,                                                  //!< bogAutoMovementDirectionLight
    FALSE,                                                  //!< bogBackRailwayAxleLowPosition
    FALSE,                                                  //!< bogFrontRailwayAxleLowPosition
    FALSE,                                                  //!< bogBackRailwayAxleServiceBrake
    FALSE,                                                  //!< bogFrontRailwayAxleServiceBrake
    FALSE,                                                  //!< bogBackRailwayAxleParkBrake
    FALSE,                                                  //!< bogFrontRailwayAxleParkBrake
    FALSE,                                                  //!< bogStatusFrontLeftTrainBrakeTest
    FALSE,                                                  //!< bogStatusFrontRightTrainBrakeTest
    FALSE,                                                  //!< bogStatusBackLeftTrainBrakeTest
    FALSE,                                                  //!< bogStatusBackRightTrainBrakeTest
    FALSE,                                                  //!< bogAlarmAru
    U16_UNDEF,                                              //!< u16gEngine_Use_Time
    U16_UNDEF,                                              //!< u16gEngine_RPM
    U16_UNDEF,                                              //!< u16gVehiculeSpeed
    U8_UNDEF,                                               //!< u8gLateralizationStop
    U8_UNDEF,                                               //!< u8gKeySelector
    U8_UNDEF,                                               //!< u8gFrontSpeedRailWayAxle
    U8_UNDEF,                                               //!< u8gBackSpeedRailWayAxle
    FALSE,                                                  //!< bogButtonCalibTurretEncoder
    FALSE,                                                  //!< bogOffTrackTestBrakeActivated
    FALSE,                                                  //!< bogOffTrackRunInBrakeActivated
    FALSE,                                                  //!< bogOsciServiceBrakeSelect
    FALSE,                                                  //!< bogFixedServiceBrakeSelect
    FALSE,                                                  //!< bogBothServiceBrakeSelect
    FALSE,                                                  //!< bogOsciParkBrakeSelect
    FALSE,                                                  //!< bogFixedParkBrakeSelect
    FALSE,                                                  //!< bogBothParkBrakeSelect
    FALSE,                                                  //!< bogOsciServiceRunInBrakeSelect
    FALSE,                                                  //!< bogFixedServiceRunInBrakeSelect
    FALSE,                                                  //!< bogBothServiceRunInBrakeSelect
    FALSE,                                                  //!< bogTestBrakePageActive
    FALSE,                                                  //!< bogBreakInBrakePageActive
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
    FALSE,                                                  //!< bogKeyGeneratorActivate
    FALSE,                                                  //!< bogRazDistanceTraveledMastMeasure
    FALSE,                                                  //!< bogKeyWhiteLights15746
    FALSE,                                                  //!< bogOsci2ndParkBrakeSelect
    FALSE,                                                  //!< bogFixe2ndParkBrakeSelect
    FALSE                                                   //!< bogKeyRazController
};

TDbRamEcuC0RcvFromC1 gDb_tRamEcuC0RcvFromC1 =
{
    {DB_LIST_DFLT,{{{0,0,0,0,0,0},{0,0}},{0,FALSE,0,0,FALSE,FALSE,FALSE},{0,0,0,0,0,0}},{12,(TVoid*)&gDb_catList[12],{NULL,0},DB_STAMP}}, //!< tListRoot
    GE_DI_ERROR,                                            //!< eC1TurretPostSelector
    GE_DI_ERROR,                                            //!< eC1RadioPostSelector
    GE_DI_ERROR,                                            //!< eC1NacellePostSelector
    FALSE,                                                  //!< boUpAxleOscillantCommand
    FALSE,                                                  //!< boDownAxleOscillantCommand
    FALSE,                                                  //!< boUpAxleFixeCommand
    FALSE,                                                  //!< boDownAxleFixeCommand
    I32_UNDEF,                                              //!< i32RegimeMotorAlternatorRpm
    FALSE,                                                  //!< boEntryTelescopeFdcSensor
    FALSE,                                                  //!< boDeltaArmFoldedSensor
    FALSE,                                                  //!< boBoomArmFoldedSensor
    FALSE,                                                  //!< boDeltaArmInLowerZone
    I16_UNDEF,                                              //!< i16ArrowArmAngularSensor
    FALSE,                                                  //!< boTurretInRearCenterPos
    FALSE,                                                  //!< boTurretInFrontCenterPos
    FALSE,                                                  //!< boFoldedDeltaArmZone
    FALSE,                                                  //!< boFoldedArrowArmZone
    FALSE,                                                  //!< boNoMovementIsDuring
    I16_UNDEF,                                              //!< i16DeltaArmAngularSensor
    FALSE,                                                  //!< boFoldedMastMeasure
    I16_UNDEF,                                              //!< i16Transmission1Pressure
    I16_UNDEF,                                              //!< i16Transmission2Pressure
    GE_DI_UNDEF,                                            //!< eActiveHelpState
    FALSE,                                                  //!< boBasketInCentrerPos
    FALSE,                                                  //!< boStopAllMovementsNacellePost
    U16_UNDEF,                                              //!< u16EncodeurMastMeasureCentimeter
    FALSE,                                                  //!< boMastMeasureFonctionActive
    FALSE,                                                  //!< boOutOfRangeTransmissionPressure
    FALSE,                                                  //!< boBeacon
    FALSE,                                                  //!< boMotorOn
    FALSE,                                                  //!< boFaultLenghtSensor
    FALSE,                                                  //!< boTurretSensorsFailures
    FALSE,                                                  //!< boOptionWhiteLight15746
    FALSE,                                                  //!< boSafeManSystem
    FALSE,                                                  //!< boSlopeModeFromC1
    FALSE,                                                  //!< boColdOilTankTemperature
    FALSE,                                                  //!< boElectricMotorForbidden
    0,                                                      //!< i16RpmMotorElectric
    0,                                                      //!< i16OilTankTemperatureValue
    FALSE,                                                  //!< boSocStopRegen
    FALSE,                                                  //!< boGeneratorOn
    FALSE,                                                  //!< boEvDevMvtsCmd
    FALSE,                                                  //!< boTestElectricalFromC1
    FALSE,                                                  //!< boAutoModeActivate
    FALSE,                                                  //!< boSilenceModeActivate
    FALSE,                                                  //!< boForcingRegenlow
    FALSE,                                                  //!< boForcingRegenHigh
    FALSE,                                                  //!< boEvBypassCommand
    0                                                       //!< i16MotorspeedCmdJ1939
};

TDbRamEcuCaliCmdC0 gDb_tRamEcuCaliCmdC0 =
{
    {DB_LIST_DFLT,{{{0,0,0,0,0,0},{0,0}},{0,FALSE,0,0,FALSE,FALSE,FALSE},{0,0,0,0,0,0}},{13,(TVoid*)&gDb_catList[13],{NULL,0},DB_STAMP}}, //!< tListRoot
    FALSE,                                                  //!< boCalibTurretAngle
    FALSE,                                                  //!< boCalibTurretAngleIntermedaireBool
    FALSE,                                                  //!< boCalibSlopeLong
    FALSE,                                                  //!< boCalibSlopeTrans
    FALSE                                                   //!< boSavedCalibrationListC0
};

TDbNvParamSpeedMaxRail gDb_tNvParamSpeedMaxRail =
{
    {DB_LIST_DFLT,{{{0,0,0,0,0,0},{0,0}},{0,FALSE,0,0,FALSE,FALSE,FALSE},{0,0,0,0,0,0}},{14,(TVoid*)&gDb_catList[14],{NULL,0},DB_STAMP}}, //!< tListRoot
    10000,                                                  //!< i16AccesSiteSpeedForward
    8000,                                                   //!< i16HighSpeedForward
    6000,                                                   //!< i16LowSpeedForward
    4000,                                                   //!< i16LowSpeedBrakeTestForward
    10,                                                     //!< i16HighSpeedSlopeTresholdAbs
    2,                                                      //!< i16HighSpeedSlopeTresholdHystRel
    20,                                                     //!< i16LowSpeedSlopeTresholdAbs
    2,                                                      //!< i16LowSpeedSlopeTresholdHystRel
    300,                                                    //!< i16TurretLowSpeedTresholdRel
    10,                                                     //!< i16TurretLowSpeedTresholdHyst
    0,                                                      //!< i16TurretRearCenterPos
    1800,                                                   //!< i16TurretFrontPositiveCenterPos
    -1800,                                                  //!< i16TurretFrontNegativeCenterPos
    17,                                                     //!< u16LimitSpeedAccesSiteSpeed
    10,                                                     //!< u16LimitSpeedHighSpeed
    5,                                                      //!< u16LimitSpeedLowSpeed
    3,                                                      //!< u16LimitSpeedLowSpeedBrakeTest
    10000,                                                  //!< i16AccesSiteSpeedBackward
    8000,                                                   //!< i16HighSpeedBackward
    6000,                                                   //!< i16LowSpeedBackward
    4000,                                                   //!< i16LowSpeedBrakeTestBackward
    4000,                                                   //!< i16TestBrakeSpeedForward
    4000,                                                   //!< i16TestBrakeSpeedBackward
    5000,                                                   //!< i16BreakeInBrakeSpeedForward
    5000,                                                   //!< i16BreakeInBrakeSpeedBackward
    100,                                                    //!< i16ArmSpeedRailHyst
    500,                                                    //!< i16ArmLowSectorBasketFaultThres
    4500,                                                   //!< i16ArmLowZoneForLowSpeed
    0,                                                      //!< i16TurretRearNegLowSpeedTreshold
    0,                                                      //!< i16TurretRearPosLowSpeedTreshold
    20,                                                     //!< u16Performance2DegSlopeThres
    40,                                                     //!< u16Performance4DegSlopeThres
    60,                                                     //!< u16Performance6DegSlopeThres
    1,                                                      //!< u16PerformanceDegSlopeHyst
    1,                                                      //!< i16TurretPerfLowSpeedHystHigh
    700,                                                    //!< i16TurretPerformLowSpeed2Deg
    1350,                                                   //!< i16TurretPerformLowSpeedBasketRot2
    150,                                                    //!< i16TurretPerformLowSpeed4Deg
    400,                                                    //!< i16TurretPerfLowSpeedBasketRot4Deg
    0,                                                      //!< i16TurretPerformLowSpeed6Deg
    150,                                                    //!< i16TurretPerfLowSpeedBasketRot6Deg
    0,                                                      //!< u16PreventLimitSpeedAccesSiteSpeed
    0,                                                      //!< u16PreventLimitSpeedHighSpeed
    0,                                                      //!< u16PreventLimitSpeedLowSpeed
    0                                                       //!< u16PreventSpeedLowSpeedBrakeTest
};

TDbRamSpeedMaxRail gDb_tRamSpeedMaxRail =
{
    {DB_LIST_DFLT,{{{0,0,0,0,0,0},{0,0}},{0,FALSE,0,0,FALSE,FALSE,FALSE},{0,0,0,0,0,0}},{15,(TVoid*)&gDb_catList[15],{NULL,0},DB_STAMP}}, //!< tListRoot
    FALSE,                                                  //!< boSlopeOverHighSpeedTresh
    FALSE,                                                  //!< boSlopeLowerLowSpeedTresh
    FALSE,                                                  //!< boTurretInLowSpeedRearZone
    FALSE,                                                  //!< boTurretInLowSpeedPosFrontZone
    FALSE,                                                  //!< boTurretInLowSpeedNegFrontZone
    FALSE,                                                  //!< boTurretInLowSpeedZone
    FALSE,                                                  //!< boEnableSimuMode
    0,                                                      //!< u16SimuDevers
    0,                                                      //!< i16SimuTurretAngle
    FALSE,                                                  //!< boSimuAuthorizationWorkKey
    GE_DI_OFF,                                              //!< eSimuAbutmentTurretCentred
    GE_DI_OFF,                                              //!< eSimuWorkKeyCentred
    FALSE,                                                  //!< boSimuTelescopeEntry
    FALSE,                                                  //!< boSimuDeltaArmFoldedSensor
    FALSE,                                                  //!< boSimuDeltaArmFoldedZone
    FALSE,                                                  //!< boSimuArrowArmFoldedSensor
    FALSE,                                                  //!< boSimuArrowArmFoldedZone
    FALSE,                                                  //!< boSimuNacelleBasketLeftSideSensor1
    FALSE,                                                  //!< boSimuNacelleBasketLeftSideSensor2
    FALSE,                                                  //!< boSimuNacelleBasketRighSideSensor1
    FALSE,                                                  //!< boSimuNacelleBasketRighSideSensor2
    FALSE,                                                  //!< boSimuHighSectorPlateSensor
    GE_NO_SPEED_MAX_RAIL_MODE,                              //!< eRailSpeedMaxMode
    FALSE,                                                  //!< boSimuDeltaArmInLowerZone
    FALSE,                                                  //!< boSimuTurretInRearCenterPos
    FALSE,                                                  //!< boSimuTurretInFrontCenterPos
    FALSE,                                                  //!< boLimitSpeedAccesSiteSpeedExceeded
    FALSE,                                                  //!< boLimitSpeedHighSpeedExceeded
    FALSE,                                                  //!< boLimitSpeedLowSpeedExceeded
    FALSE,                                                  //!< boLimitSpeedLowSpeedBrakeTestExced
    FALSE,                                                  //!< boLitmitSpeedExceeded
    FALSE,                                                  //!< boKinematicTrainAllow
    FALSE,                                                  //!< boSlopeCaseLess2Deg
    FALSE,                                                  //!< boSlopeCaseLess4Deg
    FALSE,                                                  //!< boSlopeCaseLess6Deg
    FALSE,                                                  //!< boSlopeCaseHigher6Deg
    FALSE,                                                  //!< boTurretInSpeedZone2Deg
    FALSE,                                                  //!< boTurretInSpeedZone4Deg
    FALSE,                                                  //!< boTurretInSpeedZone6Deg
    FALSE,                                                  //!< boTurretInSpeedZone2DegForBasket
    FALSE,                                                  //!< boTurretInSpeedZone4DegForBasket
    FALSE,                                                  //!< boTurretInSpeedZone6DegForBasket
    FALSE,                                                  //!< boPreventLimitSpeedAccesSiteSpeed
    FALSE,                                                  //!< boPreventLimitSpeedHighSpeed
    FALSE,                                                  //!< boPreventLimitSpeedLowSpeed
    FALSE,                                                  //!< boPreventLimitLowSpeedBrakeTest
    FALSE,                                                  //!< boPreventLimitSpeedExceeding
    FALSE                                                   //!< boAuthoriseGlobalLowSpeed
};

TDbNvParamBrakeTest gDb_tNvParamBrakeTest =
{
    {DB_LIST_DFLT,{{{0,0,0,0,0,0},{0,0}},{0,FALSE,0,0,FALSE,FALSE,FALSE},{0,0,0,0,0,0}},{16,(TVoid*)&gDb_catList[16],{NULL,0},DB_STAMP}}, //!< tListRoot
    50,                                                     //!< u16NCycleNeedBrakeTest
    10,                                                     //!< u16NCyclesBrakeCritical
    100,                                                    //!< u16SpeedMinTreshIncrBrakeCycles
    1500,                                                   //!< u16PressureOsciServiceBrakeTresh
    2000,                                                   //!< u16PressureFixeServiceBrakeTresh
    1600,                                                   //!< u16PressureOsciParkingBrakeTresh
    2100,                                                   //!< u16PressureFixeParkingBrakeTresh
    5000,                                                   //!< u16TimeOsciSerivceBrakeMs
    10000,                                                  //!< u16TimeFixeSerivceBrakeMs
    7000,                                                   //!< u16TimeOsciParkingBrakeMs
    15000,                                                  //!< u16TimeFixeParkingBrakeMs
    300,                                                    //!< u16SpeedMinBrakeTestRunning
    3000U,                                                  //!< u32ValidCondiEnableTestBrakeTime
    100,                                                    //!< u8NbElementDeltaTransmPressure
    0,                                                      //!< u16NCycleNeed2ndParkBrake
    0,                                                      //!< u16NCycles2ndBrakeCritical
    0,                                                      //!< u16TimeOsci2ndParkingBrakeMs
    0,                                                      //!< u16TimeFixe2ndParkingBrakeMs
    0,                                                      //!< u16ThresCpt2ndParkBrake
    0                                                       //!< u16MinThresholdActive2ndParkBrake
};

TDbRamBrakeTest gDb_tRamBrakeTest =
{
    {DB_LIST_DFLT,{{{0,0,0,0,0,0},{0,0}},{0,FALSE,0,0,FALSE,FALSE,FALSE},{0,0,0,0,0,0}},{17,(TVoid*)&gDb_catList[17],{NULL,0},DB_STAMP}}, //!< tListRoot
    FALSE,                                                  //!< boForbidCameraDisplay
    0,                                                      //!< u16PressureEfficiencyRate
    GE_NO_BRAKE,                                            //!< eBrakeTestSelected
    FALSE,                                                  //!< boNeedTestBrake
    FALSE,                                                  //!< boCycleBrakeOverCriticalNumber
    FALSE,                                                  //!< boUpPositionAxles
    FALSE,                                                  //!< boDownPositionAxles
    FALSE,                                                  //!< boIncoherencePosAxleAndTestMode
    FALSE,                                                  //!< boTestBrakeInOffrailMode
    FALSE,                                                  //!< boBrakeTestRunning
    FALSE,                                                  //!< boValidBrakeTest
    FALSE,                                                  //!< boEnableIncrementCycleBrakePerform
    FALSE,                                                  //!< boValidOsciServiceBrakeTest
    FALSE,                                                  //!< boValidFixeServiceBrakeTest
    FALSE,                                                  //!< boValidOsciParkingBrakeTest
    FALSE,                                                  //!< boValidFixeParkingBrakeTest
    FALSE,                                                  //!< boSimuOsciServiceBrakeSelect
    FALSE,                                                  //!< boSimuFixeServiceBrakeSelect
    FALSE,                                                  //!< boSimuOsciParkBrakeSelect
    FALSE,                                                  //!< boSimuFixeParkBrakeSelect
    FALSE,                                                  //!< boSimu2ServiceBrakesSelect
    FALSE,                                                  //!< boSimu2ParkBrakesSelect
    GE_NEU_JOY,                                             //!< eRetainPosJoyAdvance
    GE_NEU_JOY,                                             //!< eAcutalPosJoyAdvance
    FALSE,                                                  //!< boForceOsciServiceBrake
    FALSE,                                                  //!< boForceFixeServiceBrake
    FALSE,                                                  //!< boForceOsciParkBrake
    FALSE,                                                  //!< boForceFixeParkBrake
    FALSE,                                                  //!< boStopMovementByBrakeTest
    FALSE,                                                  //!< boAuthorizeTransaltionRail
    I16_UNDEF,                                              //!< i16DeltaTransmissionPressure
    FALSE,                                                  //!< boValidConditionEnableTestBrake
    FALSE,                                                  //!< boTimeOutValidCondition
    0,                                                      //!< u8PourcentCycleBrake
    FALSE,                                                  //!< boForce2ndParkBrakeFixe
    FALSE,                                                  //!< boForce2ndParkBrakeOsci
    FALSE,                                                  //!< boValidOsci2ndParkBrakeTest
    FALSE,                                                  //!< boValidFixe2ndParkBrakeTest
    0,                                                      //!< u8PourcentCycle2ndParkBrake
    FALSE,                                                  //!< boNeedTest2ndParkBrake
    FALSE,                                                  //!< boCycle2ndParkBrakeCritical
    FALSE,                                                  //!< boAddParkBrakeActive
    FALSE                                                   //!< boParkBrake2ndPressureActive
};

TDbNvParamRailWorkSafetyC0 gDb_tNvParamRailWorkSafetyC0 =
{
    {DB_LIST_DFLT,{{{0,0,0,0,0,0},{0,0}},{0,FALSE,0,0,FALSE,FALSE,FALSE},{0,0,0,0,0,0}},{18,(TVoid*)&gDb_catList[18],{NULL,0},DB_STAMP}}, //!< tListRoot
    -900,                                                   //!< i16MinTurretAngleConsistALO
    2700,                                                   //!< i16MaxTurretAngleConsistALO
    -900,                                                   //!< i16MinTurretAngleConsistMultilane
    900,                                                    //!< i16MaxTurretAngleConsistMultilane
    250,                                                    //!< i16ALOTurretRearZoneThres
    10,                                                     //!< i16ALOTurretRearZoneHyst
    50,                                                     //!< i16ALOTurretRearZoneSlowThres
    1550,                                                   //!< i16ALOTurretFrontZoneThres
    -10,                                                    //!< i16ALOTurretFrontZoneHyst
    -50,                                                    //!< i16ALOTurretFrontZoneSlowThres
    5000,                                                   //!< i16ALOArrowLowerZoneThres
    100,                                                    //!< i16ALOArrowLowerZoneHyst
    500,                                                    //!< i16ALOArrowLowerZoneSlowThres
    10,                                                     //!< i16ALOTurretRearEndStopThres
    10,                                                     //!< i16ALOTurretRearEndStopHyst
    50,                                                     //!< i16ALOTurretRearEndStopSlowThres
    1790,                                                   //!< i16ALOTurretFrontEndStopThres
    -10,                                                    //!< i16ALOTurretFrontEndStopHyst
    -50,                                                    //!< i16ALOTurretFrontEndStopSlowThres
    20,                                                     //!< i16ALOTurretRearZoneStopThres
    10,                                                     //!< i16ALOTurretRearZoneStopHyst
    -20,                                                    //!< i16ALOTurretFrontZoneStopThres
    -10,                                                    //!< i16ALOTurretFrontZoneStopHyst
    200,                                                    //!< i16ALOArrowLowerZoneStopThres
    100                                                     //!< i16ALOArrowLowerZoneStopHyst
};

TDbRamRailWorkSafetyC0 gDb_tRamRailWorkSafetyC0 =
{
    {DB_LIST_DFLT,{{{0,0,0,0,0,0},{0,0}},{0,FALSE,0,0,FALSE,FALSE,FALSE},{0,0,0,0,0,0}},{19,(TVoid*)&gDb_catList[19],{NULL,0},DB_STAMP}}, //!< tListRoot
    GE_NO_RAIL_WORK_MODE,                                   //!< eRailWorkMode
    FALSE,                                                  //!< boWrongTurretAbutBilateralMode
    FALSE,                                                  //!< boWrongTurretAbutMultilaneMode
    FALSE,                                                  //!< boWrongTurretAbutALOMode
    FALSE,                                                  //!< boWrongBasketAbutBilateralMode
    FALSE,                                                  //!< boWrongBasketAbutMultilaneMode
    FALSE,                                                  //!< boWrongBasketAbutALOMode
    FALSE,                                                  //!< boWrongAbutments
    FALSE,                                                  //!< boWrongTurretPosMultilaneMode
    FALSE,                                                  //!< boWrongBasketPosMultilaneMode
    FALSE,                                                  //!< boWrongTurretPosALOMode
    FALSE,                                                  //!< boWrongPosition
    FALSE,                                                  //!< boReduceSpeedRotTurretClockwise
    FALSE,                                                  //!< boReduceSpeedRotTurretCounterClock
    FALSE,                                                  //!< boReduceSpeedArrowArmDown
    FALSE,                                                  //!< boStopRotTurretClockwise
    FALSE,                                                  //!< boStopRotTurretCounterClockwise
    FALSE,                                                  //!< boStopRotBasketClockwise
    FALSE,                                                  //!< boStopRotBasketCounterClockwise
    FALSE,                                                  //!< boStopArrowArmDown
    FALSE,                                                  //!< boStopTelescopeOut
    FALSE,                                                  //!< boTurretInRearZone
    FALSE,                                                  //!< boTurretInFrontZone
    FALSE,                                                  //!< boArrowArmInLowerZone
    FALSE,                                                  //!< boTestFranceConfig
    FALSE,                                                  //!< boTestAbutementBasketTrackSide
    FALSE,                                                  //!< boTestAbutementBasketCenteredSide
    FALSE,                                                  //!< boTestBasketLeftSideSensor
    FALSE,                                                  //!< boTestBasketRightSideSensor
    FALSE,                                                  //!< boTestTelescopInSensor
    0,                                                      //!< i16TestTurretAngularPosition
    0,                                                      //!< i16TestArrowArmAngularPosition
    GE_NO_RAIL_WORK_MODE                                    //!< eAbutmentWorkMode
};

TDbRamTransportPosC0 gDb_tRamTransportPosC0 =
{
    {DB_LIST_DFLT,{{{0,0,0,0,0,0},{0,0}},{0,FALSE,0,0,FALSE,FALSE,FALSE},{0,0,0,0,0,0}},{20,(TVoid*)&gDb_catList[20],{NULL,0},DB_STAMP}}, //!< tListRoot
    FALSE,                                                  //!< boDeltaOffRailTransportZone
    FALSE,                                                  //!< boArrowOffRailTransportZone
    GE_NO_TRANSPORT_POSITION                                //!< eTransportPosition
};

TDbNvParamTransportPosC0 gDb_tNvParamTransportPosC0 =
{
    {DB_LIST_DFLT,{{{0,0,0,0,0,0},{0,0}},{0,FALSE,0,0,FALSE,FALSE,FALSE},{0,0,0,0,0,0}},{21,(TVoid*)&gDb_catList[21],{NULL,0},DB_STAMP}}, //!< tListRoot
    1000,                                                   //!< i16DeltaArmTres
    100,                                                    //!< i16DeltaArmHyst
    0,                                                      //!< i16ArrowArmThres
    100,                                                    //!< i16ArrowArmHyst
    300                                                     //!< i16TurretAngleThres
};

TDbRamBreakInBrakeC0 gDb_tRamBreakInBrakeC0 =
{
    {DB_LIST_DFLT,{{{0,0,0,0,0,0},{0,0}},{0,FALSE,0,0,FALSE,FALSE,FALSE},{0,0,0,0,0,0}},{22,(TVoid*)&gDb_catList[22],{NULL,0},DB_STAMP}}, //!< tListRoot
    FALSE,                                                  //!< boBreakInBrakeOffRailMode
    FALSE,                                                  //!< boForceOsciServiceBrake
    FALSE,                                                  //!< boForceFixeServiceBrake
    FALSE,                                                  //!< boForceOsciParkBrake
    FALSE,                                                  //!< boForceFixeParkBrake
    FALSE,                                                  //!< boStopMovementByBreakInBrake
    FALSE,                                                  //!< boIncoherencePosAxleAndTestMode
    0,                                                      //!< u16AdvancementPeriod
    FALSE,                                                  //!< boBreakInBrakeRunning
    FALSE,                                                  //!< boSimuOsciServiceBrakeSelect
    FALSE,                                                  //!< boSimuFixeServiceBrakeSelect
    FALSE,                                                  //!< boSimu2ServiceBrakesSelect
    FALSE,                                                  //!< boAuthorizeTransRailByBreakInBrake
    GE_NO_BRAKE,                                            //!< eServiceBrakeSelected
    0,                                                      //!< u16AdvancementPeriodMs10
    FALSE,                                                  //!< boOsciServiceBrakinBrakeOn
    FALSE,                                                  //!< boFixeServiceBrakinBrakeOn
    FALSE                                                   //!< boBothServiceBrakinBrakeOn
};

TDbRamSelectControlPost gDb_tRamSelectControlPost =
{
    {DB_LIST_DFLT,{{{0,0,0,0,0,0},{0,0}},{0,FALSE,0,0,FALSE,FALSE,FALSE},{0,0,0,0,0,0}},{23,(TVoid*)&gDb_catList[23],{NULL,0},DB_STAMP}}, //!< tListRoot
    GE_POST_NO_POST,                                        //!< eSelectedControlPost
    FALSE,                                                  //!< boEnableBuzzer
    FALSE,                                                  //!< boSlopeIsLow
    FALSE,                                                  //!< boSlopeIsHigh
    FALSE,                                                  //!< boAllNacelleCommandsDisabled
    FALSE,                                                  //!< boAllRadioCommandsDisabled
    FALSE,                                                  //!< boAllTurretCommandsDisabled
    0,                                                      //!< i16SimuSlope
    FALSE,                                                  //!< boAllConsigneAdvancementDisabled
    FALSE                                                   //!< boAuthorizedRadioElementsPosition
};

TDbNvParamSelectControlPost gDb_tNvParamSelectControlPost =
{
    {DB_LIST_DFLT,{{{0,0,0,0,0,0},{0,0}},{0,FALSE,0,0,FALSE,FALSE,FALSE},{0,0,0,0,0,0}},{24,(TVoid*)&gDb_catList[24],{NULL,0},DB_STAMP}}, //!< tListRoot
    40,                                                     //!< i16SlopeLowThresAbs
    5,                                                      //!< i16SlopeLowHystRel
    50,                                                     //!< i16SlopeHighThresAbs
    -5,                                                     //!< i16SlopeHighHystRel
    250                                                     //!< u16SlopeCrawlerMaxTres
};

TDbRamEvision4C0 gDb_tRamEvision4C0 =
{
    {DB_LIST_DFLT,{{{0,0,0,0,0,0},{0,0}},{0,FALSE,0,0,FALSE,FALSE,FALSE},{0,0,0,0,0,0}},{25,(TVoid*)&gDb_catList[25],{NULL,0},DB_STAMP}}, //!< tListRoot
    0,                                                      //!< u8LifeByte
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
    FALSE                                                   //!< bogKeySlopeTrReset
};

TDbNvParamAlarmC0 gDb_tNvParamAlarmC0 =
{
    {DB_LIST_DFLT,{{{0,0,0,0,0,0},{0,0}},{0,FALSE,0,0,FALSE,FALSE,FALSE},{0,0,0,0,0,0}},{26,(TVoid*)&gDb_catList[26],{NULL,0},DB_STAMP}}, //!< tListRoot
    0,                                                      //!< u16TempTrackOverFaultThres
    0,                                                      //!< u16TempRailOverFaultThres
    0,                                                      //!< u16TempTrackOverAlarmThres
    0,                                                      //!< u16TempRailOverAlarmThres
    0,                                                      //!< u16SpeedSensorsToleranceThres
    0,                                                      //!< u16SlopeLongToleranceThres
    50,                                                     //!< u16BlockOscillationAxlePressure
    150,                                                    //!< u16UnblockOscillationAxlePressure
    0,                                                      //!< u16MinServiceBrakeFaultPressure
    500,                                                    //!< u16MaxServiceBrakeFaultPressure
    0,                                                      //!< u16SlopeTransToleranceThres
    0,                                                      //!< i16MinTransPressureWithoutHook
    0,                                                      //!< u16TurretSensorToleranceThres
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
    0,                                                      //!< u16HystTempTrans
    0,                                                      //!< u8ReduceTrackSpeedPercent
    100,                                                    //!< u16CptPressureBrakeFaultMax
    0,                                                      //!< boBypassAlarmActiveC0
    25,                                                     //!< u16TimeBypassFault
    350,                                                    //!< i16AU_THER_PRESSION_DEF_TRANS
    50,                                                     //!< i16AU_ELEC_PRESSION_DEF_DMC
    150,                                                    //!< u16cptTimeDetectPumpTransMax
    150                                                     //!< u16cptTimeDetectPvgTransMax
};

TDbRamEcuAlarmC0 gDb_tRamEcuAlarmC0 =
{
    {DB_LIST_DFLT,{{{0,0,0,0,0,0},{0,0}},{0,FALSE,0,0,FALSE,FALSE,FALSE},{0,0,0,0,0,0}},{27,(TVoid*)&gDb_catList[27],{NULL,0},DB_STAMP}}, //!< tListRoot
    FALSE,                                                  //!< boRamEcuAlarmC0_1
    FALSE,                                                  //!< boFaultPumpTrans
    FALSE,                                                  //!< boTimeDetectPumpTrans
    FALSE,                                                  //!< boMemFaultThermicPumpTrans
    FALSE,                                                  //!< boFaultPvgTransElectric
    FALSE,                                                  //!< boTimeDetectPvgTrans
    FALSE,                                                  //!< boMemFaultDMCTransElectric
    FALSE                                                   //!< boFaultThermicPumpOrElecticDmc
};

TDbRamEcuC0RcvFailluresFromC1 gDb_tRamEcuC0RcvFailluresFromC1 =
{
    {DB_LIST_DFLT,{{{0,0,0,0,0,0},{0,0}},{0,FALSE,0,0,FALSE,FALSE,FALSE},{0,0,0,0,0,0}},{28,(TVoid*)&gDb_catList[28],{NULL,0},DB_STAMP}}, //!< tListRoot
    FALSE,                                                  //!< boDm_Inc_Pos_Folded_Delta_Arrow
    FALSE,                                                  //!< boDm_Active_Help
    FALSE,                                                  //!< boDm_Ev_Bypass_Fault
    FALSE,                                                  //!< boOutOfRangeTransmissionPressure
    FALSE                                                   //!< boDm_Overload_Detected_By_C1
};

TDbRamMastDisplayMeasureC0 gDb_tRamMastDisplayMeasureC0 =
{
    {DB_LIST_DFLT,{{{0,0,0,0,0,0},{0,0}},{0,FALSE,0,0,FALSE,FALSE,FALSE},{0,0,0,0,0,0}},{29,(TVoid*)&gDb_catList[29],{NULL,0},DB_STAMP}}, //!< tListRoot
    0,                                                      //!< u16ErrorCodeInit
    0,                                                      //!< u16ErrorCodeWrite
    0,                                                      //!< u16RetDataBytesSent
    0,                                                      //!< u8DisplayedDigit1
    0,                                                      //!< u8DisplayedDigit2
    0,                                                      //!< u8DisplayedDigit3
    0,                                                      //!< u8DisplayedDigit4
    {0, 0, 0, 0, 0, 0, 0, 0}                                //!< au8SentDataArray
};

TDbNvParamMastDisplayC0 gDb_tNvParamMastDisplayC0 =
{
    {DB_LIST_DFLT,{{{0,0,0,0,0,0},{0,0}},{0,FALSE,0,0,FALSE,FALSE,FALSE},{0,0,0,0,0,0}},{30,(TVoid*)&gDb_catList[30],{NULL,0},DB_STAMP}}, //!< tListRoot
    500U                                                    //!< u32MastDisplayRefreshCycleTime
};

TDbRamData4C0RcvFromC1 gDb_tRamData4C0RcvFromC1 =
{
    {DB_LIST_DFLT,{{{0,0,0,0,0,0},{0,0}},{0,FALSE,0,0,FALSE,FALSE,FALSE},{0,0,0,0,0,0}},{31,(TVoid*)&gDb_catList[31],{NULL,0},DB_STAMP}}, //!< tListRoot
    FALSE,                                                  //!< boNoMovementRunning
    FALSE,                                                  //!< boStopMoveLimitEnvelop
    FALSE,                                                  //!< boTransmissionPressureFault
    FALSE,                                                  //!< boLynxOnAllMvts
    FALSE,                                                  //!< boSignal_4
    FALSE,                                                  //!< boSignal_5
    FALSE,                                                  //!< boSignal_6
    FALSE,                                                  //!< boSignal_7
    0,                                                      //!< u8Signal_8
    0,                                                      //!< i16BypassPressureSensorValue
    0,                                                      //!< i16Signal_10
    0,                                                      //!< i16Signal_11
    FALSE,                                                  //!< boPerformAutoriseTransArrow
    FALSE,                                                  //!< boValidTelescopeSectorSlope
    FALSE,                                                  //!< boValidTelescopeFirstSectorSlope
    FALSE,                                                  //!< boPostInterdictionMastSNCF
    FALSE,                                                  //!< boInterdictOfNacelTurretPost
    FALSE                                                   //!< boMastPanthoFoldedSNCF
};

TDbNvParamGreenEffC0 gDb_tNvParamGreenEffC0 =
{
    {DB_LIST_DFLT,{{{0,0,0,0,0,0},{0,0}},{0,FALSE,0,0,FALSE,FALSE,FALSE},{0,0,0,0,0,0}},{32,(TVoid*)&gDb_catList[32],{NULL,0},DB_STAMP}}, //!< tListRoot
    75,                                                     //!< u8MaxPvgTransRailElectricAv
    25,                                                     //!< u8MaxPvgTransRailElectricAr
    55,                                                     //!< u8MinPvgTransRailElectricAv
    45,                                                     //!< u8MinPvgTransRailElectricAr
    2000,                                                   //!< u16TransRailElectricRampTimeAcc
    1000,                                                   //!< u16TransRailElectricRampTimeDec
    10000,                                                  //!< u16TransRailElectricRampTimeStop
    2450,                                                   //!< u16ElectricPumpPressureMax
    200,                                                    //!< u16ElectricPumpPressureHyst
    3450,                                                   //!< u16ELECTRIC_MOTOR_RPM_TRANS_MAX
    800,                                                    //!< u16ELECTRIC_MOTOR_RPM_TRANS_MIN
    60,                                                     //!< u8MIN_PVG_TRANS_HIGH_50
    40,                                                     //!< u8MIN_PVG_TRANS_LOW_50
    100,                                                    //!< u16RAMP_TIME_REGEN_THERMIC
    1700,                                                   //!< u16RegenPumpPressureMax
    2000,                                                   //!< u16RegenPumpPressureReset
    0,                                                      //!< u16CURRENT_RESET_REGEN_THERMIC
    350,                                                    //!< u16CURRENT_MIN_REGEN_THERMIC
    1200,                                                   //!< u16CURRENT_MAX_REGEN_THERMIC
    3000,                                                   //!< u16CURRENT_DRIVE_LIMIT_ELECTRIC
    15,                                                     //!< u8BATTERY_LOW_LEVEL_SOC
    12500,                                                  //!< u16MinVoltageDcConverter
    500,                                                    //!< u16NbrCycleFaultDcConverter
    1300,                                                   //!< i16REGEN_BRAKE_RPM_MODE_AUTO
    1300,                                                   //!< i16REGEN_BRAKE_TORQUE_MODE_AUTO
    3200,                                                   //!< i16REGEN_BRAKE_RPM_MODE_HIGH
    3200,                                                   //!< i16REGEN_BRAKE_TORQUE_MODE_HIGH
    100,                                                    //!< u8NbrSamplesAverageRpm
    2000,                                                   //!< i16RegenPumpPressureHyst
    -200,                                                   //!< i16RegenBrakeTorqueFromPressurCoefK
    1300                                                    //!< i16RegenBrakeTorqueFromPressurRange
};

TDbRamGreenEffC0 gDb_tRamGreenEffC0 =
{
    {DB_LIST_DFLT,{{{0,0,0,0,0,0},{0,0}},{0,FALSE,0,0,FALSE,FALSE,FALSE},{0,0,0,0,0,0}},{33,(TVoid*)&gDb_catList[33],{NULL,0},DB_STAMP}}, //!< tListRoot
    FALSE,                                                  //!< boAutorizeTransRailElectric
    6000,                                                   //!< i16PvgTransRailElectricConsigne
    FALSE,                                                  //!< boElectricPumpPressureExceeded
    FALSE,                                                  //!< boStopRampPvgTransRailElectric
    FALSE,                                                  //!< boTransRailElectricRampOngoing
    FALSE,                                                  //!< boTransRailThermiqueRampOngoing
    0,                                                      //!< i16RpmPvgTransRail
    FALSE,                                                  //!< boPictoReloadBatteryImpossible
    FALSE,                                                  //!< boBatteryLowLevel
    FALSE,                                                  //!< boElectricPumpPressureMaxRegen
    FALSE,                                                  //!< boElectricPumpPressureResetRegen
    FALSE,                                                  //!< boAutorizeRazController
    FALSE,                                                  //!< boVoltageDcConverterFault
    FALSE,                                                  //!< boBattErrorCode1
    FALSE                                                   //!< boPictoAskResartController
};

TDbRamFlashBatteryC0 gDb_tRamFlashBatteryC0 =
{
    {DB_LIST_DFLT,{{{0,0,0,0,0,0},{0,0}},{0,FALSE,0,0,FALSE,FALSE,FALSE},{0,0,0,0,0,0}},{34,(TVoid*)&gDb_catList[34],{NULL,0},DB_STAMP}}, //!< tListRoot
    0,                                                      //!< i16Ibatt_ist
    0,                                                      //!< u16Vbatt_ist
    0,                                                      //!< u8Batt_Soc
    0,                                                      //!< u8Batt_PowerReductionRatio
    0,                                                      //!< u8Batt_RecoveryReductionRatio
    0,                                                      //!< u8Batt_ErrorCode1
    0,                                                      //!< u8Batt_ErrorValue1
    FALSE                                                   //!< boBatt_RegenAuthorized
};

TDbRamDMC_C0 gDb_tRamDMC_C0 =
{
    {DB_LIST_DFLT,{{{0,0,0,0,0,0},{0,0}},{0,FALSE,0,0,FALSE,FALSE,FALSE},{0,0,0,0,0,0}},{35,(TVoid*)&gDb_catList[35],{NULL,0},DB_STAMP}}, //!< tListRoot
    0,                                                      //!< u16DC_RpmRequest
    0,                                                      //!< u16DC_AI2_StaticBrakeTorqueLimit
    0,                                                      //!< u16DC_GeneratorRegenBattCurLimit
    FALSE,                                                  //!< boDC_ForwardByte6Bit0
    FALSE,                                                  //!< boDC_BackwardByte6Bit1
    FALSE,                                                  //!< boDC_FootSwitchByte6Bit2
    FALSE,                                                  //!< boDC_InterlockByt6Bit3
    FALSE,                                                  //!< boDC_RegenEnableByte6Bit6
    0,                                                      //!< u8DC_RollOverCount
    0,                                                      //!< u16BCL_HMI_DriveBattCurLimit
    0,                                                      //!< u16BCL_HMI_RegenBattCurLimit
    0,                                                      //!< u16BCL_HMI_BattSOC
    0,                                                      //!< u8BCL_RollOverCount
    0,                                                      //!< i16MS_ActualSpeedRpm
    0,                                                      //!< i16MS_BattCur
    0,                                                      //!< u8MS_RollOverCount
    0,                                                      //!< u8MS_FaultCode
    0,                                                      //!< u16MS_FaultSubCode
    0,                                                      //!< i16DS_MotorCur
    0,                                                      //!< u8DS_DriveStatusIndicator
    0,                                                      //!< u8DS_SpeedLimitIndicator
    0,                                                      //!< i16DS_ActualTorque
    0,                                                      //!< u8DS_TorqueLimitIndicator
    0,                                                      //!< u8DS_RollOverCount
    0,                                                      //!< i8CS_ControlerTemp
    0,                                                      //!< i8CS_MotorTemp
    0,                                                      //!< u8CS_MotorLimitIndicator
    0,                                                      //!< u8CS_RollOverCount
    0,                                                      //!< u16CS_BattVoltage
    0,                                                      //!< u8CS_BattDischargeIndicatorValue
    FALSE,                                                  //!< boWaitingHeartbeat
    FALSE,                                                  //!< boTimeOutDmcHeartbeat
    0,                                                      //!< u8DmcHeartbeat
    FALSE,                                                  //!< boPowerOnOkDmc
    FALSE,                                                  //!< boOperationnalDmc
    FALSE,                                                  //!< boGoToOperationnal
    FALSE,                                                  //!< boNewGoToOperationnal
    FALSE,                                                  //!< boSendCommandNMT
    0,                                                      //!< i16StepRazDmc
    FALSE,                                                  //!< boCommandRazDmcOnGoing
    FALSE,                                                  //!< boDig4InputCommandSTO
    FALSE,                                                  //!< boActiveFaultRazDmc
    FALSE                                                   //!< boActiveFaultDmc
};

//List Set-Struct---------------------------------------------------------------------------------

const TDbSetRamEcuInputsC0 gDb_ctSetRamEcuInputsC0=
{
    {0xffff, 0, TBIT3, DB_VAR},                             //!< tInf_PressureBlockOscillationState
    {BI3_MIN, BI3_MAX},                                     //!< abi3Rng_PressureBlockOscillationState[2]
    BI3_UNDEF,                                              //!< bi3Def_PressureBlockOscillationState
    {0xffff, 1, TINT16, DB_VAR},                            //!< tInf_PressureBlockOscillationValue
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_PressureBlockOscillationValue[2]
    I16_UNDEF,                                              //!< i16Def_PressureBlockOscillationValue
    {0xffff, 2, TUINT16, DB_VAR},                           //!< tInf_PressureBlockOscillationRawValue
    {U16_MIN, U16_MAX},                                     //!< au16Rng_PressureBlockOscillationRawValue[2]
    U16_UNDEF,                                              //!< u16Def_PressureBlockOscillationRawValue
    {0xffff, 3, TBIT3, DB_VAR},                             //!< tInf_PressureBrakeSensorState
    {BI3_MIN, BI3_MAX},                                     //!< abi3Rng_PressureBrakeSensorState[2]
    BI3_UNDEF,                                              //!< bi3Def_PressureBrakeSensorState
    {0xffff, 4, TINT16, DB_VAR},                            //!< tInf_PressureBrakeSensorValue
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_PressureBrakeSensorValue[2]
    I16_UNDEF,                                              //!< i16Def_PressureBrakeSensorValue
    {0xffff, 5, TUINT16, DB_VAR},                           //!< tInf_PressureBrakeSensorRawValue
    {U16_MIN, U16_MAX},                                     //!< au16Rng_PressureBrakeSensorRawValue[2]
    U16_UNDEF,                                              //!< u16Def_PressureBrakeSensorRawValue
    {0xffff, 6, TBIT3, DB_VAR},                             //!< tInf_TemperatureTransmissionState
    {BI3_MIN, BI3_MAX},                                     //!< abi3Rng_TemperatureTransmissionState[2]
    BI3_UNDEF,                                              //!< bi3Def_TemperatureTransmissionState
    {0xffff, 7, TINT16, DB_VAR},                            //!< tInf_TemperatureTransmissionValue
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_TemperatureTransmissionValue[2]
    I16_UNDEF,                                              //!< i16Def_TemperatureTransmissionValue
    {0xffff, 8, TUINT16, DB_VAR},                           //!< tInf_TemperatureTransmissionRawValue
    {U16_MIN, U16_MAX},                                     //!< au16Rng_TemperatureTransmissionRawValue[2]
    U16_UNDEF,                                              //!< u16Def_TemperatureTransmissionRawValue
    {0xffff, 9, EDISTATE_TYPE, DB_VAR},                     //!< tInf_FaultPvgLeftTrakState
    {GE_DI_OFF, GE_DI_UNDEF},                               //!< aeRng_FaultPvgLeftTrakState[2]
    GE_DI_OFF,                                              //!< eDef_FaultPvgLeftTrakState
    {0xffff, 10, TUINT16, DB_VAR},                          //!< tInf_FaultPvgLeftTrakRawValue
    {U16_MIN, U16_MAX},                                     //!< au16Rng_FaultPvgLeftTrakRawValue[2]
    U16_UNDEF,                                              //!< u16Def_FaultPvgLeftTrakRawValue
    {0xffff, 12, EDISTATE_TYPE, DB_VAR},                    //!< tInf_FaultPvgRightTrakState
    {GE_DI_OFF, GE_DI_UNDEF},                               //!< aeRng_FaultPvgRightTrakState[2]
    GE_DI_OFF,                                              //!< eDef_FaultPvgRightTrakState
    {0xffff, 14, TUINT16, DB_VAR},                          //!< tInf_FaultPvgRightTrakRawValue
    {U16_MIN, U16_MAX},                                     //!< au16Rng_FaultPvgRightTrakRawValue[2]
    U16_UNDEF,                                              //!< u16Def_FaultPvgRightTrakRawValue
    {0xffff, 15, EDISTATE_TYPE, DB_VAR},                    //!< tInf_DownAxleOscillantState
    {GE_DI_OFF, GE_DI_UNDEF},                               //!< aeRng_DownAxleOscillantState[2]
    GE_DI_OFF,                                              //!< eDef_DownAxleOscillantState
    {0xffff, 16, TUINT16, DB_VAR},                          //!< tInf_DownAxleOscillantRawValuePin0
    {U16_MIN, U16_MAX},                                     //!< au16Rng_DownAxleOscillantRawValuePin0[2]
    U16_UNDEF,                                              //!< u16Def_DownAxleOscillantRawValuePin0
    {0xffff, 1351, TUINT16, DB_VAR},                        //!< tInf_DownAxleOscillantRawValuePin1
    {U16_MIN, U16_MAX},                                     //!< au16Rng_DownAxleOscillantRawValuePin1[2]
    U16_UNDEF,                                              //!< u16Def_DownAxleOscillantRawValuePin1
    {0xffff, 17, EDISTATE_TYPE, DB_VAR},                    //!< tInf_DownAxleFixeState
    {GE_DI_OFF, GE_DI_UNDEF},                               //!< aeRng_DownAxleFixeState[2]
    GE_DI_OFF,                                              //!< eDef_DownAxleFixeState
    {0xffff, 18, TUINT16, DB_VAR},                          //!< tInf_DownAxleFixeRawValuePin0
    {U16_MIN, U16_MAX},                                     //!< au16Rng_DownAxleFixeRawValuePin0[2]
    U16_UNDEF,                                              //!< u16Def_DownAxleFixeRawValuePin0
    {0xffff, 1352, TUINT16, DB_VAR},                        //!< tInf_DownAxleFixeRawValuePin1
    {U16_MIN, U16_MAX},                                     //!< au16Rng_DownAxleFixeRawValuePin1[2]
    U16_UNDEF,                                              //!< u16Def_DownAxleFixeRawValuePin1
    {0xffff, 19, EDISTATE_TYPE, DB_VAR},                    //!< tInf_UpAxleOscillantState
    {GE_DI_OFF, GE_DI_UNDEF},                               //!< aeRng_UpAxleOscillantState[2]
    GE_DI_OFF,                                              //!< eDef_UpAxleOscillantState
    {0xffff, 20, TUINT16, DB_VAR},                          //!< tInf_UpAxleOscillantRawValue
    {U16_MIN, U16_MAX},                                     //!< au16Rng_UpAxleOscillantRawValue[2]
    U16_UNDEF,                                              //!< u16Def_UpAxleOscillantRawValue
    {0xffff, 21, EDISTATE_TYPE, DB_VAR},                    //!< tInf_UpAxleFixeState
    {GE_DI_OFF, GE_DI_UNDEF},                               //!< aeRng_UpAxleFixeState[2]
    GE_DI_OFF,                                              //!< eDef_UpAxleFixeState
    {0xffff, 22, TUINT16, DB_VAR},                          //!< tInf_UpAxleFixeRawValue
    {U16_MIN, U16_MAX},                                     //!< au16Rng_UpAxleFixeRawValue[2]
    U16_UNDEF,                                              //!< u16Def_UpAxleFixeRawValue
    {0xffff, 23, EDISTATE_TYPE, DB_VAR},                    //!< tInf_FrameRotationSensor1State
    {GE_DI_OFF, GE_DI_UNDEF},                               //!< aeRng_FrameRotationSensor1State[2]
    GE_DI_OFF,                                              //!< eDef_FrameRotationSensor1State
    {0xffff, 24, TUINT16, DB_VAR},                          //!< tInf_FrameRotationSensor1RawValuePin0
    {U16_MIN, U16_MAX},                                     //!< au16Rng_FrameRotationSensor1RawValuePin0[2]
    U16_UNDEF,                                              //!< u16Def_FrameRotationSensor1RawValuePin0
    {0xffff, 475, TUINT16, DB_VAR},                         //!< tInf_FrameRotationSensor1RawValuePin1
    {U16_MIN, U16_MAX},                                     //!< au16Rng_FrameRotationSensor1RawValuePin1[2]
    U16_UNDEF,                                              //!< u16Def_FrameRotationSensor1RawValuePin1
    {0xffff, 25, EDISTATE_TYPE, DB_VAR},                    //!< tInf_RailHookSensorState
    {GE_DI_OFF, GE_DI_UNDEF},                               //!< aeRng_RailHookSensorState[2]
    GE_DI_OFF,                                              //!< eDef_RailHookSensorState
    {0xffff, 26, TUINT16, DB_VAR},                          //!< tInf_RailHookSensorRawValue
    {U16_MIN, U16_MAX},                                     //!< au16Rng_RailHookSensorRawValue[2]
    U16_UNDEF,                                              //!< u16Def_RailHookSensorRawValue
    {0xffff, 27, EDISTATE_TYPE, DB_VAR},                    //!< tInf_InductiveRailSensorState
    {GE_DI_OFF, GE_DI_UNDEF},                               //!< aeRng_InductiveRailSensorState[2]
    GE_DI_OFF,                                              //!< eDef_InductiveRailSensorState
    {0xffff, 28, TUINT16, DB_VAR},                          //!< tInf_InductiveRailSensorRawValue
    {U16_MIN, U16_MAX},                                     //!< au16Rng_InductiveRailSensorRawValue[2]
    U16_UNDEF,                                              //!< u16Def_InductiveRailSensorRawValue
    {0xffff, 29, EDISTATE_TYPE, DB_VAR},                    //!< tInf_CenteredTurretState
    {GE_DI_OFF, GE_DI_UNDEF},                               //!< aeRng_CenteredTurretState[2]
    GE_DI_OFF,                                              //!< eDef_CenteredTurretState
    {0xffff, 30, TUINT16, DB_VAR},                          //!< tInf_CenteredTurretRawValue
    {U16_MIN, U16_MAX},                                     //!< au16Rng_CenteredTurretRawValue[2]
    U16_UNDEF,                                              //!< u16Def_CenteredTurretRawValue
    {0xffff, 31, EDISTATE_TYPE, DB_VAR},                    //!< tInf_WorkKeyTrackSideState
    {GE_DI_OFF, GE_DI_UNDEF},                               //!< aeRng_WorkKeyTrackSideState[2]
    GE_DI_OFF,                                              //!< eDef_WorkKeyTrackSideState
    {0xffff, 32, TUINT16, DB_VAR},                          //!< tInf_WorkKeyTrackSideRawValue
    {U16_MIN, U16_MAX},                                     //!< au16Rng_WorkKeyTrackSideRawValue[2]
    U16_UNDEF,                                              //!< u16Def_WorkKeyTrackSideRawValue
    {0xffff, 33, EDISTATE_TYPE, DB_VAR},                    //!< tInf_FrameRotationSensor2State
    {GE_DI_OFF, GE_DI_UNDEF},                               //!< aeRng_FrameRotationSensor2State[2]
    GE_DI_OFF,                                              //!< eDef_FrameRotationSensor2State
    {0xffff, 34, TUINT16, DB_VAR},                          //!< tInf_FrameRotationSensor2RawValuePin0
    {U16_MIN, U16_MAX},                                     //!< au16Rng_FrameRotationSensor2RawValuePin0[2]
    U16_UNDEF,                                              //!< u16Def_FrameRotationSensor2RawValuePin0
    {0xffff, 474, TUINT16, DB_VAR},                         //!< tInf_FrameRotationSensor2RawValuePin1
    {U16_MIN, U16_MAX},                                     //!< au16Rng_FrameRotationSensor2RawValuePin1[2]
    U16_UNDEF,                                              //!< u16Def_FrameRotationSensor2RawValuePin1
    {0xffff, 35, EDISTATE_TYPE, DB_VAR},                    //!< tInf_WorkKeyBilateralState
    {GE_DI_OFF, GE_DI_UNDEF},                               //!< aeRng_WorkKeyBilateralState[2]
    GE_DI_OFF,                                              //!< eDef_WorkKeyBilateralState
    {0xffff, 36, TUINT16, DB_VAR},                          //!< tInf_WorkKeyBilateralRawValue
    {U16_MIN, U16_MAX},                                     //!< au16Rng_WorkKeyBilateralRawValue[2]
    U16_UNDEF,                                              //!< u16Def_WorkKeyBilateralRawValue
    {0xffff, 37, EDISTATE_TYPE, DB_VAR},                    //!< tInf_WorkKeyCentredState
    {GE_DI_OFF, GE_DI_UNDEF},                               //!< aeRng_WorkKeyCentredState[2]
    GE_DI_OFF,                                              //!< eDef_WorkKeyCentredState
    {0xffff, 38, TUINT16, DB_VAR},                          //!< tInf_WorkKeyCentredRawValue
    {U16_MIN, U16_MAX},                                     //!< au16Rng_WorkKeyCentredRawValue[2]
    U16_UNDEF,                                              //!< u16Def_WorkKeyCentredRawValue
    {0xffff, 39, EDISTATE_TYPE, DB_VAR},                    //!< tInf_AbutmentTurretTrackSideState
    {GE_DI_OFF, GE_DI_UNDEF},                               //!< aeRng_AbutmentTurretTrackSideState[2]
    GE_DI_OFF,                                              //!< eDef_AbutmentTurretTrackSideState
    {0xffff, 40, TUINT16, DB_VAR},                          //!< tInf_AbutmentTurretTrackSideRaw
    {U16_MIN, U16_MAX},                                     //!< au16Rng_AbutmentTurretTrackSideRaw[2]
    U16_UNDEF,                                              //!< u16Def_AbutmentTurretTrackSideRaw
    {0xffff, 43, EDISTATE_TYPE, DB_VAR},                    //!< tInf_AbutmentTurretCentredSideState
    {GE_DI_OFF, GE_DI_UNDEF},                               //!< aeRng_AbutmentTurretCentredSideState[2]
    GE_DI_OFF,                                              //!< eDef_AbutmentTurretCentredSideState
    {0xffff, 44, TUINT16, DB_VAR},                          //!< tInf_AbutmentTurretCentredSideRaw
    {U16_MIN, U16_MAX},                                     //!< au16Rng_AbutmentTurretCentredSideRaw[2]
    U16_UNDEF,                                              //!< u16Def_AbutmentTurretCentredSideRaw
    {0xffff, 45, EDISTATE_TYPE, DB_VAR},                    //!< tInf_OscillantAxleSpeedSensorDirState
    {GE_DI_OFF, GE_DI_UNDEF},                               //!< aeRng_OscillantAxleSpeedSensorDirState[2]
    GE_DI_OFF,                                              //!< eDef_OscillantAxleSpeedSensorDirState
    {0xffff, 46, TUINT16, DB_VAR},                          //!< tInf_OscillantAxleSpeedSensorDirRaw
    {U16_MIN, U16_MAX},                                     //!< au16Rng_OscillantAxleSpeedSensorDirRaw[2]
    U16_UNDEF,                                              //!< u16Def_OscillantAxleSpeedSensorDirRaw
    {0xffff, 47, EDISTATE_TYPE, DB_VAR},                    //!< tInf_FixeAxleSpeedSensorDirState
    {GE_DI_OFF, GE_DI_UNDEF},                               //!< aeRng_FixeAxleSpeedSensorDirState[2]
    GE_DI_OFF,                                              //!< eDef_FixeAxleSpeedSensorDirState
    {0xffff, 48, TUINT16, DB_VAR},                          //!< tInf_FixeAxleSpeedSensorDirRaw
    {U16_MIN, U16_MAX},                                     //!< au16Rng_FixeAxleSpeedSensorDirRaw[2]
    U16_UNDEF,                                              //!< u16Def_FixeAxleSpeedSensorDirRaw
    {0xffff, 49, EDISTATE_TYPE, DB_VAR},                    //!< tInf_TrailerGacheState
    {GE_DI_OFF, GE_DI_UNDEF},                               //!< aeRng_TrailerGacheState[2]
    GE_DI_OFF,                                              //!< eDef_TrailerGacheState
    {0xffff, 50, TUINT16, DB_VAR},                          //!< tInf_TrailerGacheRawValue
    {U16_MIN, U16_MAX},                                     //!< au16Rng_TrailerGacheRawValue[2]
    U16_UNDEF,                                              //!< u16Def_TrailerGacheRawValue
    {0xffff, 51, EDISTATE_TYPE, DB_VAR},                    //!< tInf_MeasuringMastSensorFoldedState
    {GE_DI_OFF, GE_DI_UNDEF},                               //!< aeRng_MeasuringMastSensorFoldedState[2]
    GE_DI_OFF,                                              //!< eDef_MeasuringMastSensorFoldedState
    {0xffff, 52, TUINT16, DB_VAR},                          //!< tInf_MeasuringMastSensorFoldedRaw
    {U16_MIN, U16_MAX},                                     //!< au16Rng_MeasuringMastSensorFoldedRaw[2]
    U16_UNDEF,                                              //!< u16Def_MeasuringMastSensorFoldedRaw
    {0xffff, 175, TINT32, DB_VAR},                          //!< tInf_OscillantAxleFrequency
    {I32_MIN, I32_MAX},                                     //!< ai32Rng_OscillantAxleFrequency[2]
    I32_UNDEF,                                              //!< i32Def_OscillantAxleFrequency
    {0xffff, 176, TINT32, DB_VAR},                          //!< tInf_FixeAxleFrequency
    {I32_MIN, I32_MAX},                                     //!< ai32Rng_FixeAxleFrequency[2]
    I32_UNDEF,                                              //!< i32Def_FixeAxleFrequency
    {0xffff, 441, EDISTATE_TYPE, DB_VAR},                   //!< tInf_AruRadio1ContactState
    {GE_DI_OFF, GE_DI_UNDEF},                               //!< aeRng_AruRadio1ContactState[2]
    GE_DI_OFF,                                              //!< eDef_AruRadio1ContactState
    {0xffff, 576, TUINT16, DB_VAR},                         //!< tInf_AruRadio1ContactRawValue
    {U16_MIN, U16_MAX},                                     //!< au16Rng_AruRadio1ContactRawValue[2]
    U16_UNDEF,                                              //!< u16Def_AruRadio1ContactRawValue
    {0xffff, 578, EDISTATE_TYPE, DB_VAR},                   //!< tInf_AruRadio2ContactState
    {GE_DI_OFF, GE_DI_UNDEF},                               //!< aeRng_AruRadio2ContactState[2]
    GE_DI_OFF,                                              //!< eDef_AruRadio2ContactState
    {0xffff, 580, TUINT16, DB_VAR},                         //!< tInf_AruRadio2ContactRawValue
    {U16_MIN, U16_MAX},                                     //!< au16Rng_AruRadio2ContactRawValue[2]
    U16_UNDEF,                                              //!< u16Def_AruRadio2ContactRawValue
    {0xffff, 581, EDISTATE_TYPE, DB_VAR},                   //!< tInf_Aru1ContactState
    {GE_DI_OFF, GE_DI_UNDEF},                               //!< aeRng_Aru1ContactState[2]
    GE_DI_OFF,                                              //!< eDef_Aru1ContactState
    {0xffff, 582, TUINT16, DB_VAR},                         //!< tInf_Aru1ContactRawValue
    {U16_MIN, U16_MAX},                                     //!< au16Rng_Aru1ContactRawValue[2]
    I16_UNDEF,                                              //!< u16Def_Aru1ContactRawValue
    {0xffff, 584, EDISTATE_TYPE, DB_VAR},                   //!< tInf_Aru2ContactState
    {GE_DI_OFF, GE_DI_UNDEF},                               //!< aeRng_Aru2ContactState[2]
    GE_DI_OFF,                                              //!< eDef_Aru2ContactState
    {0xffff, 99, TUINT16, DB_VAR},                          //!< tInf_Aru2ContactRawValue
    {U16_MIN, U16_MAX},                                     //!< au16Rng_Aru2ContactRawValue[2]
    U16_MIN,                                                //!< u16Def_Aru2ContactRawValue
    {0xffff, 1580, EDISTATE_TYPE, DB_VAR},                  //!< tInf_StarterMotorState
    {GE_DI_OFF, GE_DI_UNDEF},                               //!< aeRng_StarterMotorState[2]
    GE_DI_OFF,                                              //!< eDef_StarterMotorState
    {0xffff, 1581, TUINT16, DB_VAR},                        //!< tInf_StarterMotorRawValue
    {U16_MIN, U16_MAX},                                     //!< au16Rng_StarterMotorRawValue[2]
    U16_UNDEF,                                              //!< u16Def_StarterMotorRawValue
    {0xffff, 1835, EDISTATE_TYPE, DB_VAR},                  //!< tInf_AutorisationHighSpeedKeyState
    {GE_DI_OFF, GE_DI_UNDEF},                               //!< aeRng_AutorisationHighSpeedKeyState[2]
    GE_DI_OFF,                                              //!< eDef_AutorisationHighSpeedKeyState
    {0xffff, 1836, TUINT16, DB_VAR},                        //!< tInf_AutorisationHighSpeedKeyRawValue
    {U16_MIN, U16_MAX},                                     //!< au16Rng_AutorisationHighSpeedKeyRawValue[2]
    U16_UNDEF,                                              //!< u16Def_AutorisationHighSpeedKeyRawValue
    {0xffff, 1876, TBIT3, DB_VAR},                          //!< tInf_ElectricPumpPressureState
    {BI3_MIN, BI3_MAX},                                     //!< abi3Rng_ElectricPumpPressureState[2]
    BI3_UNDEF,                                              //!< bi3Def_ElectricPumpPressureState
    {0xffff, 1877, TINT16, DB_VAR},                         //!< tInf_ElectricPumpPressureValue
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_ElectricPumpPressureValue[2]
    I16_UNDEF,                                              //!< i16Def_ElectricPumpPressureValue
    {0xffff, 1878, TUINT16, DB_VAR},                        //!< tInf_ElectricPumpPressureRawValue
    {U16_MIN, U16_MAX},                                     //!< au16Rng_ElectricPumpPressureRawValue[2]
    U16_UNDEF,                                              //!< u16Def_ElectricPumpPressureRawValue
    {0xffff, 2119, EDISTATE_TYPE, DB_VAR},                  //!< tInf_UpMastSensorNCState
    {GE_DI_OFF, GE_DI_UNDEF},                               //!< aeRng_UpMastSensorNCState[2]
    GE_DI_OFF,                                              //!< eDef_UpMastSensorNCState
    {0xffff, 2120, TUINT16, DB_VAR},                        //!< tInf_UpMastSensorNCRawValue
    {U16_MIN, U16_MAX},                                     //!< au16Rng_UpMastSensorNCRawValue[2]
    U16_UNDEF,                                              //!< u16Def_UpMastSensorNCRawValue
    {0xffff, 2121, EDISTATE_TYPE, DB_VAR},                  //!< tInf_ValveInDownPositionSensorState
    {GE_DI_OFF, GE_DI_UNDEF},                               //!< aeRng_ValveInDownPositionSensorState[2]
    GE_DI_OFF,                                              //!< eDef_ValveInDownPositionSensorState
    {0xffff, 2122, TUINT16, DB_VAR},                        //!< tInf_ValveInDownPositionSensorValue
    {U16_MIN, U16_MAX},                                     //!< au16Rng_ValveInDownPositionSensorValue[2]
    U16_UNDEF                                               //!< u16Def_ValveInDownPositionSensorValue
};

const TDbSetRamEcuOutputsC0 gDb_ctSetRamEcuOutputsC0=
{
    {0xffff, 53, TBOOLEAN, DB_VAR},                         //!< tInf_EvDeflectorTransmissionCommand
    {FALSE, TRUE},                                          //!< aboRng_EvDeflectorTransmissionCommand[2]
    FALSE,                                                  //!< boDef_EvDeflectorTransmissionCommand
    {0xffff, 54, EDIGSTATUS_TYPE, DB_VAR},                  //!< tInf_EvDeflectorTransmissionValue
    {GE_DIG_OFF, GE_DIG_UNDEF},                             //!< aeRng_EvDeflectorTransmissionValue[2]
    GE_DIG_ERROR,                                           //!< eDef_EvDeflectorTransmissionValue
    {0xffff, 55, TBOOLEAN, DB_VAR},                         //!< tInf_EvUpMeasuringMastCommand
    {FALSE, TRUE},                                          //!< aboRng_EvUpMeasuringMastCommand[2]
    FALSE,                                                  //!< boDef_EvUpMeasuringMastCommand
    {0xffff, 56, EDIGSTATUS_TYPE, DB_VAR},                  //!< tInf_EvUpMeasuringMastValue
    {GE_DIG_OFF, GE_DIG_UNDEF},                             //!< aeRng_EvUpMeasuringMastValue[2]
    GE_DIG_ERROR,                                           //!< eDef_EvUpMeasuringMastValue
    {0xffff, 57, TBOOLEAN, DB_VAR},                         //!< tInf_EvDownMeasuringMastCommand
    {FALSE, TRUE},                                          //!< aboRng_EvDownMeasuringMastCommand[2]
    FALSE,                                                  //!< boDef_EvDownMeasuringMastCommand
    {0xffff, 58, EDIGSTATUS_TYPE, DB_VAR},                  //!< tInf_EvDownMeasuringMastValue
    {GE_DIG_OFF, GE_DIG_UNDEF},                             //!< aeRng_EvDownMeasuringMastValue[2]
    GE_DIG_ERROR,                                           //!< eDef_EvDownMeasuringMastValue
    {0xffff, 59, TBOOLEAN, DB_VAR},                         //!< tInf_EvServiceBrakeTrackCommand
    {FALSE, TRUE},                                          //!< aboRng_EvServiceBrakeTrackCommand[2]
    FALSE,                                                  //!< boDef_EvServiceBrakeTrackCommand
    {0xffff, 60, EDIGSTATUS_TYPE, DB_VAR},                  //!< tInf_EvServiceBrakeTrackValue
    {GE_DIG_OFF, GE_DIG_UNDEF},                             //!< aeRng_EvServiceBrakeTrackValue[2]
    GE_DIG_ERROR,                                           //!< eDef_EvServiceBrakeTrackValue
    {0xffff, 61, TBOOLEAN, DB_VAR},                         //!< tInf_EvPowerReductionCommand
    {FALSE, TRUE},                                          //!< aboRng_EvPowerReductionCommand[2]
    FALSE,                                                  //!< boDef_EvPowerReductionCommand
    {0xffff, 62, EDIGSTATUS_TYPE, DB_VAR},                  //!< tInf_EvPowerReductionValue
    {GE_DIG_OFF, GE_DIG_UNDEF},                             //!< aeRng_EvPowerReductionValue[2]
    GE_DIG_ERROR,                                           //!< eDef_EvPowerReductionValue
    {0xffff, 63, TBOOLEAN, DB_VAR},                         //!< tInf_EvFrameRotation1Command
    {FALSE, TRUE},                                          //!< aboRng_EvFrameRotation1Command[2]
    FALSE,                                                  //!< boDef_EvFrameRotation1Command
    {0xffff, 64, EDIGSTATUS_TYPE, DB_VAR},                  //!< tInf_EvFrameRotation1Value
    {GE_DIG_OFF, GE_DIG_UNDEF},                             //!< aeRng_EvFrameRotation1Value[2]
    GE_DIG_ERROR,                                           //!< eDef_EvFrameRotation1Value
    {0xffff, 65, TBOOLEAN, DB_VAR},                         //!< tInf_EvFrameRotation2Command
    {FALSE, TRUE},                                          //!< aboRng_EvFrameRotation2Command[2]
    FALSE,                                                  //!< boDef_EvFrameRotation2Command
    {0xffff, 66, EDIGSTATUS_TYPE, DB_VAR},                  //!< tInf_EvFrameRotation2Value
    {GE_DIG_OFF, GE_DIG_UNDEF},                             //!< aeRng_EvFrameRotation2Value[2]
    GE_DIG_ERROR,                                           //!< eDef_EvFrameRotation2Value
    {0xffff, 67, TBOOLEAN, DB_VAR},                         //!< tInf_SupplyRadioReceiverCommand
    {FALSE, TRUE},                                          //!< aboRng_SupplyRadioReceiverCommand[2]
    FALSE,                                                  //!< boDef_SupplyRadioReceiverCommand
    {0xffff, 68, EDIGSTATUS_TYPE, DB_VAR},                  //!< tInf_SupplyRadioReceiverValue
    {GE_DIG_OFF, GE_DIG_UNDEF},                             //!< aeRng_SupplyRadioReceiverValue[2]
    GE_DIG_ERROR,                                           //!< eDef_SupplyRadioReceiverValue
    {0xffff, 69, TBOOLEAN, DB_VAR},                         //!< tInf_BuzzerLynxMovingMachineCommand
    {FALSE, TRUE},                                          //!< aboRng_BuzzerLynxMovingMachineCommand[2]
    FALSE,                                                  //!< boDef_BuzzerLynxMovingMachineCommand
    {0xffff, 70, EDIGSTATUS_TYPE, DB_VAR},                  //!< tInf_BuzzerLynxMovingMachineValue
    {GE_DIG_OFF, GE_DIG_UNDEF},                             //!< aeRng_BuzzerLynxMovingMachineValue[2]
    GE_DIG_ERROR,                                           //!< eDef_BuzzerLynxMovingMachineValue
    {0xffff, 71, TBOOLEAN, DB_VAR},                         //!< tInf_WhiteLightsTrailerCommand
    {FALSE, TRUE},                                          //!< aboRng_WhiteLightsTrailerCommand[2]
    FALSE,                                                  //!< boDef_WhiteLightsTrailerCommand
    {0xffff, 72, EDIGSTATUS_TYPE, DB_VAR},                  //!< tInf_WhiteLightsTrailerValue
    {GE_DIG_OFF, GE_DIG_UNDEF},                             //!< aeRng_WhiteLightsTrailerValue[2]
    GE_DIG_ERROR,                                           //!< eDef_WhiteLightsTrailerValue
    {0xffff, 73, TBOOLEAN, DB_VAR},                         //!< tInf_RedLightsTrailerCommand
    {FALSE, TRUE},                                          //!< aboRng_RedLightsTrailerCommand[2]
    FALSE,                                                  //!< boDef_RedLightsTrailerCommand
    {0xffff, 74, EDIGSTATUS_TYPE, DB_VAR},                  //!< tInf_RedLightsTrailerValue
    {GE_DIG_OFF, GE_DIG_UNDEF},                             //!< aeRng_RedLightsTrailerValue[2]
    GE_DIG_ERROR,                                           //!< eDef_RedLightsTrailerValue
    {0xffff, 75, TBOOLEAN, DB_VAR},                         //!< tInf_WhiteLightAVGCommand
    {FALSE, TRUE},                                          //!< aboRng_WhiteLightAVGCommand[2]
    FALSE,                                                  //!< boDef_WhiteLightAVGCommand
    {0xffff, 76, EDIGSTATUS_TYPE, DB_VAR},                  //!< tInf_WhiteLightAVGValue
    {GE_DIG_OFF, GE_DIG_UNDEF},                             //!< aeRng_WhiteLightAVGValue[2]
    GE_DIG_ERROR,                                           //!< eDef_WhiteLightAVGValue
    {0xffff, 77, TBOOLEAN, DB_VAR},                         //!< tInf_WhiteLightAVDCommand
    {FALSE, TRUE},                                          //!< aboRng_WhiteLightAVDCommand[2]
    FALSE,                                                  //!< boDef_WhiteLightAVDCommand
    {0xffff, 78, EDIGSTATUS_TYPE, DB_VAR},                  //!< tInf_WhiteLightAVDValue
    {GE_DIG_OFF, GE_DIG_UNDEF},                             //!< aeRng_WhiteLightAVDValue[2]
    GE_DIG_ERROR,                                           //!< eDef_WhiteLightAVDValue
    {0xffff, 79, TBOOLEAN, DB_VAR},                         //!< tInf_RedLightAVGCommand
    {FALSE, TRUE},                                          //!< aboRng_RedLightAVGCommand[2]
    FALSE,                                                  //!< boDef_RedLightAVGCommand
    {0xffff, 80, EDIGSTATUS_TYPE, DB_VAR},                  //!< tInf_RedLightAVGValue
    {GE_DIG_OFF, GE_DIG_UNDEF},                             //!< aeRng_RedLightAVGValue[2]
    GE_DIG_ERROR,                                           //!< eDef_RedLightAVGValue
    {0xffff, 81, TBOOLEAN, DB_VAR},                         //!< tInf_RedLightAVDCommand
    {FALSE, TRUE},                                          //!< aboRng_RedLightAVDCommand[2]
    FALSE,                                                  //!< boDef_RedLightAVDCommand
    {0xffff, 82, EDIGSTATUS_TYPE, DB_VAR},                  //!< tInf_RedLightAVDValue
    {GE_DIG_OFF, GE_DIG_UNDEF},                             //!< aeRng_RedLightAVDValue[2]
    GE_DIG_ERROR,                                           //!< eDef_RedLightAVDValue
    {0xffff, 83, TBOOLEAN, DB_VAR},                         //!< tInf_WhiteLightARGCommand
    {FALSE, TRUE},                                          //!< aboRng_WhiteLightARGCommand[2]
    FALSE,                                                  //!< boDef_WhiteLightARGCommand
    {0xffff, 84, EDIGSTATUS_TYPE, DB_VAR},                  //!< tInf_WhiteLightARGValue
    {GE_DIG_OFF, GE_DIG_UNDEF},                             //!< aeRng_WhiteLightARGValue[2]
    GE_DIG_ERROR,                                           //!< eDef_WhiteLightARGValue
    {0xffff, 85, TBOOLEAN, DB_VAR},                         //!< tInf_WhiteLightARDCommand
    {FALSE, TRUE},                                          //!< aboRng_WhiteLightARDCommand[2]
    FALSE,                                                  //!< boDef_WhiteLightARDCommand
    {0xffff, 86, EDIGSTATUS_TYPE, DB_VAR},                  //!< tInf_WhiteLightARDValue
    {GE_DIG_OFF, GE_DIG_UNDEF},                             //!< aeRng_WhiteLightARDValue[2]
    GE_DIG_ERROR,                                           //!< eDef_WhiteLightARDValue
    {0xffff, 87, TBOOLEAN, DB_VAR},                         //!< tInf_RedLightARGCommand
    {FALSE, TRUE},                                          //!< aboRng_RedLightARGCommand[2]
    FALSE,                                                  //!< boDef_RedLightARGCommand
    {0xffff, 88, EDIGSTATUS_TYPE, DB_VAR},                  //!< tInf_RedLightARGValue
    {GE_DIG_OFF, GE_DIG_UNDEF},                             //!< aeRng_RedLightARGValue[2]
    GE_DIG_ERROR,                                           //!< eDef_RedLightARGValue
    {0xffff, 89, TBOOLEAN, DB_VAR},                         //!< tInf_RedLightARDCommand
    {FALSE, TRUE},                                          //!< aboRng_RedLightARDCommand[2]
    FALSE,                                                  //!< boDef_RedLightARDCommand
    {0xffff, 90, EDIGSTATUS_TYPE, DB_VAR},                  //!< tInf_RedLightARDValue
    {GE_DIG_OFF, GE_DIG_UNDEF},                             //!< aeRng_RedLightARDValue[2]
    GE_DIG_ERROR,                                           //!< eDef_RedLightARDValue
    {0xffff, 91, TBOOLEAN, DB_VAR},                         //!< tInf_SupllyPvgLeftTrackCommand
    {FALSE, TRUE},                                          //!< aboRng_SupllyPvgLeftTrackCommand[2]
    FALSE,                                                  //!< boDef_SupllyPvgLeftTrackCommand
    {0xffff, 92, EDIGSTATUS_TYPE, DB_VAR},                  //!< tInf_SupllyPvgLeftTrackValue
    {GE_DIG_OFF, GE_DIG_UNDEF},                             //!< aeRng_SupllyPvgLeftTrackValue[2]
    GE_DIG_ERROR,                                           //!< eDef_SupllyPvgLeftTrackValue
    {0xffff, 93, TBOOLEAN, DB_VAR},                         //!< tInf_SupllyPvgRightTrackCommand
    {FALSE, TRUE},                                          //!< aboRng_SupllyPvgRightTrackCommand[2]
    FALSE,                                                  //!< boDef_SupllyPvgRightTrackCommand
    {0xffff, 94, EDIGSTATUS_TYPE, DB_VAR},                  //!< tInf_SupllyPvgRightTrackValue
    {GE_DIG_OFF, GE_DIG_UNDEF},                             //!< aeRng_SupllyPvgRightTrackValue[2]
    GE_DIG_ERROR,                                           //!< eDef_SupllyPvgRightTrackValue
    {0xffff, 95, EDIGSTATUS_TYPE, DB_VAR},                  //!< tInf_EvUnBlockOscillationAxleState
    {GE_DIG_OFF, GE_DIG_UNDEF},                             //!< aeRng_EvUnBlockOscillationAxleState[2]
    GE_DIG_ERROR,                                           //!< eDef_EvUnBlockOscillationAxleState
    {0xffff, 251, TBOOLEAN, DB_VAR},                        //!< tInf_EvUnBlockOscillationAxleCmdBool
    {FALSE, TRUE},                                          //!< aboRng_EvUnBlockOscillationAxleCmdBool[2]
    FALSE,                                                  //!< boDef_EvUnBlockOscillationAxleCmdBool
    {0xffff, 98, EDIGSTATUS_TYPE, DB_VAR},                  //!< tInf_EvUpAxleOscillantState
    {GE_DIG_OFF, GE_DIG_UNDEF},                             //!< aeRng_EvUpAxleOscillantState[2]
    GE_DIG_ERROR,                                           //!< eDef_EvUpAxleOscillantState
    {0xffff, 132, TBOOLEAN, DB_VAR},                        //!< tInf_EvUpAxleOscillantCommandBool
    {FALSE, TRUE},                                          //!< aboRng_EvUpAxleOscillantCommandBool[2]
    FALSE,                                                  //!< boDef_EvUpAxleOscillantCommandBool
    {0xffff, 101, EDIGSTATUS_TYPE, DB_VAR},                 //!< tInf_EvDownAxleOscillantState
    {GE_DIG_OFF, GE_DIG_UNDEF},                             //!< aeRng_EvDownAxleOscillantState[2]
    GE_DIG_ERROR,                                           //!< eDef_EvDownAxleOscillantState
    {0xffff, 134, TBOOLEAN, DB_VAR},                        //!< tInf_EvDownAxleOscillantCommandBool
    {FALSE, TRUE},                                          //!< aboRng_EvDownAxleOscillantCommandBool[2]
    FALSE,                                                  //!< boDef_EvDownAxleOscillantCommandBool
    {0xffff, 104, EDIGSTATUS_TYPE, DB_VAR},                 //!< tInf_EvUpAxleFixeState
    {GE_DIG_OFF, GE_DIG_UNDEF},                             //!< aeRng_EvUpAxleFixeState[2]
    GE_DIG_ERROR,                                           //!< eDef_EvUpAxleFixeState
    {0xffff, 136, TBOOLEAN, DB_VAR},                        //!< tInf_EvUpAxleFixeCommandBool
    {FALSE, TRUE},                                          //!< aboRng_EvUpAxleFixeCommandBool[2]
    FALSE,                                                  //!< boDef_EvUpAxleFixeCommandBool
    {0xffff, 107, EDIGSTATUS_TYPE, DB_VAR},                 //!< tInf_EvDownAxleFixeState
    {GE_DIG_OFF, GE_DIG_UNDEF},                             //!< aeRng_EvDownAxleFixeState[2]
    GE_DIG_ERROR,                                           //!< eDef_EvDownAxleFixeState
    {0xffff, 138, TBOOLEAN, DB_VAR},                        //!< tInf_EvDownAxleFixeCommandBool
    {FALSE, TRUE},                                          //!< aboRng_EvDownAxleFixeCommandBool[2]
    FALSE,                                                  //!< boDef_EvDownAxleFixeCommandBool
    {0xffff, 110, EDIGSTATUS_TYPE, DB_VAR},                 //!< tInf_EvParkBrakeAxleOscillantState
    {GE_DIG_OFF, GE_DIG_UNDEF},                             //!< aeRng_EvParkBrakeAxleOscillantState[2]
    GE_DIG_ERROR,                                           //!< eDef_EvParkBrakeAxleOscillantState
    {0xffff, 252, TBOOLEAN, DB_VAR},                        //!< tInf_EvParkBrakeAxleOscillantCmdBool
    {FALSE, TRUE},                                          //!< aboRng_EvParkBrakeAxleOscillantCmdBool[2]
    FALSE,                                                  //!< boDef_EvParkBrakeAxleOscillantCmdBool
    {0xffff, 113, EDIGSTATUS_TYPE, DB_VAR},                 //!< tInf_EvParkBrakeAxleFixeState
    {GE_DIG_OFF, GE_DIG_UNDEF},                             //!< aeRng_EvParkBrakeAxleFixeState[2]
    GE_DIG_ERROR,                                           //!< eDef_EvParkBrakeAxleFixeState
    {0xffff, 253, TBOOLEAN, DB_VAR},                        //!< tInf_EvParkBrakeAxleFixeCmdBool
    {FALSE, TRUE},                                          //!< aboRng_EvParkBrakeAxleFixeCmdBool[2]
    FALSE,                                                  //!< boDef_EvParkBrakeAxleFixeCmdBool
    {0xffff, 116, EDIGSTATUS_TYPE, DB_VAR},                 //!< tInf_EvServiceBrakeAxleOscillantState
    {GE_DIG_OFF, GE_DIG_UNDEF},                             //!< aeRng_EvServiceBrakeAxleOscillantState[2]
    GE_DIG_ERROR,                                           //!< eDef_EvServiceBrakeAxleOscillantState
    {0xffff, 128, TBOOLEAN, DB_VAR},                        //!< tInf_EvServiceBrakeAxleOsciCmdBool
    {FALSE, TRUE},                                          //!< aboRng_EvServiceBrakeAxleOsciCmdBool[2]
    FALSE,                                                  //!< boDef_EvServiceBrakeAxleOsciCmdBool
    {0xffff, 119, EDIGSTATUS_TYPE, DB_VAR},                 //!< tInf_EvServiceBrakeAxleFixeState
    {GE_DIG_OFF, GE_DIG_UNDEF},                             //!< aeRng_EvServiceBrakeAxleFixeState[2]
    GE_DIG_ERROR,                                           //!< eDef_EvServiceBrakeAxleFixeState
    {0xffff, 130, TBOOLEAN, DB_VAR},                        //!< tInf_EvServiceBrakeAxleFixeCmdBool
    {FALSE, TRUE},                                          //!< aboRng_EvServiceBrakeAxleFixeCmdBool[2]
    FALSE,                                                  //!< boDef_EvServiceBrakeAxleFixeCmdBool
    {0xffff, 122, EDIGSTATUS_TYPE, DB_VAR},                 //!< tInf_KlaxonNeotecState
    {GE_DIG_OFF, GE_DIG_UNDEF},                             //!< aeRng_KlaxonNeotecState[2]
    GE_DIG_ERROR,                                           //!< eDef_KlaxonNeotecState
    {0xffff, 254, TBOOLEAN, DB_VAR},                        //!< tInf_KlaxonNeotecCmdBool
    {FALSE, TRUE},                                          //!< aboRng_KlaxonNeotecCmdBool[2]
    FALSE,                                                  //!< boDef_KlaxonNeotecCmdBool
    {0xffff, 354, EPROSTATUS_TYPE, DB_VAR},                 //!< tInf_ForwardPumpState
    {GE_PRO_OFF, GE_PRO_MIN_DUTY_CYCLE},                    //!< aeRng_ForwardPumpState[2]
    GE_PRO_ERROR,                                           //!< eDef_ForwardPumpState
    {0xffff, 362, TUINT16, DB_VAR},                         //!< tInf_ForwardPumpCommand
    {U16_MIN, U16_MAX},                                     //!< au16Rng_ForwardPumpCommand[2]
    U16_MIN,                                                //!< u16Def_ForwardPumpCommand
    {0xffff, 371, TUINT16, DB_VAR},                         //!< tInf_ForwardPumpCurrent
    {U16_MIN, U16_MAX},                                     //!< au16Rng_ForwardPumpCurrent[2]
    U16_MIN,                                                //!< u16Def_ForwardPumpCurrent
    {0xffff, 372, EPROSTATUS_TYPE, DB_VAR},                 //!< tInf_BackwardPumpState
    {GE_PRO_OFF, GE_PRO_MIN_DUTY_CYCLE},                    //!< aeRng_BackwardPumpState[2]
    GE_PRO_ERROR,                                           //!< eDef_BackwardPumpState
    {0xffff, 373, TUINT16, DB_VAR},                         //!< tInf_BackwardPumpCommand
    {U16_MIN, U16_MAX},                                     //!< au16Rng_BackwardPumpCommand[2]
    U16_MIN,                                                //!< u16Def_BackwardPumpCommand
    {0xffff, 374, TUINT16, DB_VAR},                         //!< tInf_BackwardPumpCurrent
    {U16_MIN, U16_MAX},                                     //!< au16Rng_BackwardPumpCurrent[2]
    U16_MIN,                                                //!< u16Def_BackwardPumpCurrent
    {0xffff, 347, TUINT16, DB_VAR},                         //!< tInf_PvgLeftTrackCommand
    {U16_MIN, U16_MAX},                                     //!< au16Rng_PvgLeftTrackCommand[2]
    U16_MIN,                                                //!< u16Def_PvgLeftTrackCommand
    {0xffff, 348, TUINT16, DB_VAR},                         //!< tInf_PvgLeftTrackVoltage
    {U16_MIN, U16_MAX},                                     //!< au16Rng_PvgLeftTrackVoltage[2]
    U16_MIN,                                                //!< u16Def_PvgLeftTrackVoltage
    {0xffff, 349, TUINT16, DB_VAR},                         //!< tInf_PvgRightTrackCommand
    {U16_MIN, U16_MAX},                                     //!< au16Rng_PvgRightTrackCommand[2]
    U16_MIN,                                                //!< u16Def_PvgRightTrackCommand
    {0xffff, 350, TUINT16, DB_VAR},                         //!< tInf_PvgRightTrackVoltage
    {U16_MIN, U16_MAX},                                     //!< au16Rng_PvgRightTrackVoltage[2]
    U16_MIN,                                                //!< u16Def_PvgRightTrackVoltage
    {0xffff, 249, TBOOLEAN, DB_VAR},                        //!< tInf_SupplyAnaSensorsCommand
    {FALSE, TRUE},                                          //!< aboRng_SupplyAnaSensorsCommand[2]
    FALSE,                                                  //!< boDef_SupplyAnaSensorsCommand
    {0xffff, 250, EDIGSTATUS_TYPE, DB_VAR},                 //!< tInf_SupplyAnaSensorsValue
    {GE_DIG_OFF, GE_DIG_UNDEF},                             //!< aeRng_SupplyAnaSensorsValue[2]
    GE_DIG_ERROR,                                           //!< eDef_SupplyAnaSensorsValue
    {0xffff, 41, TBOOLEAN, DB_VAR},                         //!< tInf_PvgLeftTrackLowsideCommand
    {FALSE, TRUE},                                          //!< aboRng_PvgLeftTrackLowsideCommand[2]
    FALSE,                                                  //!< boDef_PvgLeftTrackLowsideCommand
    {0xffff, 42, EDIGSTATUS_TYPE, DB_VAR},                  //!< tInf_PvgLeftTrackLowsideValue
    {GE_DIG_OFF, GE_DIG_UNDEF},                             //!< aeRng_PvgLeftTrackLowsideValue[2]
    GE_DIG_ERROR,                                           //!< eDef_PvgLeftTrackLowsideValue
    {0xffff, 472, TBOOLEAN, DB_VAR},                        //!< tInf_PvgRightTrackLowsideCommand
    {FALSE, TRUE},                                          //!< aboRng_PvgRightTrackLowsideCommand[2]
    FALSE,                                                  //!< boDef_PvgRightTrackLowsideCommand
    {0xffff, 473, EDIGSTATUS_TYPE, DB_VAR},                 //!< tInf_PvgRightTrackLowsideValue
    {GE_DIG_OFF, GE_DIG_UNDEF},                             //!< aeRng_PvgRightTrackLowsideValue[2]
    GE_DIG_ERROR,                                           //!< eDef_PvgRightTrackLowsideValue
    {0xffff, 595, TBOOLEAN, DB_VAR},                        //!< tInf_ReturnLowSideEvForwardPumpCmd
    {FALSE, TRUE},                                          //!< aboRng_ReturnLowSideEvForwardPumpCmd[2]
    FALSE,                                                  //!< boDef_ReturnLowSideEvForwardPumpCmd
    {0xffff, 596, EDIGSTATUS_TYPE, DB_VAR},                 //!< tInf_ReturnLowSideEvForwardPumpState
    {GE_DIG_OFF, GE_DIG_UNDEF},                             //!< aeRng_ReturnLowSideEvForwardPumpState[2]
    GE_DIG_ERROR,                                           //!< eDef_ReturnLowSideEvForwardPumpState
    {0xffff, 597, TBOOLEAN, DB_VAR},                        //!< tInf_ReturnLowSideEvBackwardPumpCmd
    {FALSE, TRUE},                                          //!< aboRng_ReturnLowSideEvBackwardPumpCmd[2]
    FALSE,                                                  //!< boDef_ReturnLowSideEvBackwardPumpCmd
    {0xffff, 598, EDIGSTATUS_TYPE, DB_VAR},                 //!< tInf_ReturnLowSideEvBackwardPumpState
    {GE_DIG_OFF, GE_DIG_UNDEF},                             //!< aeRng_ReturnLowSideEvBackwardPumpState[2]
    GE_DIG_ERROR,                                           //!< eDef_ReturnLowSideEvBackwardPumpState
    {0xffff, 1126, TBOOLEAN, DB_VAR},                       //!< tInf_NeonLightsCmd
    {FALSE, TRUE},                                          //!< aboRng_NeonLightsCmd[2]
    FALSE,                                                  //!< boDef_NeonLightsCmd
    {0xffff, 1127, EDIGSTATUS_TYPE, DB_VAR},                //!< tInf_NeonLightsValue
    {GE_DIG_OFF, GE_DIG_UNDEF},                             //!< aeRng_NeonLightsValue[2]
    GE_DIG_UNDEF,                                           //!< eDef_NeonLightsValue
    {0xffff, 1132, EDIGSTATUS_TYPE, DB_VAR},                //!< tInf_Ev2DeflectorTransmissionValue
    {GE_DIG_OFF, GE_DIG_UNDEF},                             //!< aeRng_Ev2DeflectorTransmissionValue[2]
    GE_DIG_UNDEF,                                           //!< eDef_Ev2DeflectorTransmissionValue
    {0xffff, 1559, TBOOLEAN, DB_VAR},                       //!< tInf_CoolingRelayCommand
    {FALSE, TRUE},                                          //!< aboRng_CoolingRelayCommand[2]
    FALSE,                                                  //!< boDef_CoolingRelayCommand
    {0xffff, 1560, EDIGSTATUS_TYPE, DB_VAR},                //!< tInf_CoolingRelayState
    {GE_DIG_OFF, GE_DIG_UNDEF},                             //!< aeRng_CoolingRelayState[2]
    GE_DIG_UNDEF,                                           //!< eDef_CoolingRelayState
    {0xffff, 1800, TBOOLEAN, DB_VAR},                       //!< tInf_Ev2ndParkBrakeAxleFixe
    {FALSE, TRUE},                                          //!< aboRng_Ev2ndParkBrakeAxleFixe[2]
    FALSE,                                                  //!< boDef_Ev2ndParkBrakeAxleFixe
    {0xffff, 1801, TBOOLEAN, DB_VAR},                       //!< tInf_Ev2ndParkBrakeAxleOsci
    {FALSE, TRUE},                                          //!< aboRng_Ev2ndParkBrakeAxleOsci[2]
    FALSE,                                                  //!< boDef_Ev2ndParkBrakeAxleOsci
    {0xffff, 120, EDIGSTATUS_TYPE, DB_VAR},                 //!< tInf_Ev2ndParkBrakeAxleFixeState
    {GE_DIG_OFF, GE_DIG_UNDEF},                             //!< aeRng_Ev2ndParkBrakeAxleFixeState[2]
    GE_DIG_ERROR,                                           //!< eDef_Ev2ndParkBrakeAxleFixeState
    {0xffff, 273, EDIGSTATUS_TYPE, DB_VAR},                 //!< tInf_Ev2ndParkBrakeAxleOsciState
    {GE_DIG_OFF, GE_DIG_UNDEF},                             //!< aeRng_Ev2ndParkBrakeAxleOsciState[2]
    GE_DIG_ERROR,                                           //!< eDef_Ev2ndParkBrakeAxleOsciState
    {0xffff, 1896, TUINT16, DB_VAR},                        //!< tInf_PvgTransRailElectricCmd
    {U16_MIN, U16_MAX},                                     //!< au16Rng_PvgTransRailElectricCmd[2]
    U16_MIN,                                                //!< u16Def_PvgTransRailElectricCmd
    {0xffff, 1910, TUINT16, DB_VAR},                        //!< tInf_PvgTransRailElectricVoltage
    {U16_MIN, U16_MAX},                                     //!< au16Rng_PvgTransRailElectricVoltage[2]
    U16_MIN,                                                //!< u16Def_PvgTransRailElectricVoltage
    {0xffff, 1897, TBOOLEAN, DB_VAR},                       //!< tInf_SupllyPvgTransRailElectricCmd
    {FALSE, TRUE},                                          //!< aboRng_SupllyPvgTransRailElectricCmd[2]
    FALSE,                                                  //!< boDef_SupllyPvgTransRailElectricCmd
    {0xffff, 1911, EDIGSTATUS_TYPE, DB_VAR},                //!< tInf_SupllyPvgTransRailElectricState
    {GE_DIG_OFF, GE_DIG_UNDEF},                             //!< aeRng_SupllyPvgTransRailElectricState[2]
    GE_DIG_ERROR,                                           //!< eDef_SupllyPvgTransRailElectricState
    {0xffff, 1898, TBOOLEAN, DB_VAR},                       //!< tInf_EvDevRailElectricModeCmd
    {FALSE, TRUE},                                          //!< aboRng_EvDevRailElectricModeCmd[2]
    FALSE,                                                  //!< boDef_EvDevRailElectricModeCmd
    {0xffff, 1899, EDIGSTATUS_TYPE, DB_VAR},                //!< tInf_EvDevRailElectricModeState
    {GE_DIG_OFF, GE_DIG_UNDEF},                             //!< aeRng_EvDevRailElectricModeState[2]
    GE_DIG_ERROR,                                           //!< eDef_EvDevRailElectricModeState
    {0xffff, 1900, TBOOLEAN, DB_VAR},                       //!< tInf_RelayCutOffVariatorElectricCmd
    {FALSE, TRUE},                                          //!< aboRng_RelayCutOffVariatorElectricCmd[2]
    FALSE,                                                  //!< boDef_RelayCutOffVariatorElectricCmd
    {0xffff, 1901, EDIGSTATUS_TYPE, DB_VAR},                //!< tInf_RelayCutOffVariatorElectricState
    {GE_DIG_OFF, GE_DIG_UNDEF},                             //!< aeRng_RelayCutOffVariatorElectricState[2]
    GE_DIG_ERROR,                                           //!< eDef_RelayCutOffVariatorElectricState
    {0xffff, 1920, TBOOLEAN, DB_VAR},                       //!< tInf_RelayEnableBatteryCmd
    {FALSE, TRUE},                                          //!< aboRng_RelayEnableBatteryCmd[2]
    FALSE,                                                  //!< boDef_RelayEnableBatteryCmd
    {0xffff, 1921, EDIGSTATUS_TYPE, DB_VAR},                //!< tInf_RelayEnableBatteryState
    {GE_DIG_OFF, GE_DIG_UNDEF},                             //!< aeRng_RelayEnableBatteryState[2]
    GE_DIG_ERROR                                            //!< eDef_RelayEnableBatteryState
};

const TDbSetRamGeneralC0 gDb_ctSetRamGeneralC0=
{
    {0xffff, 177, TUINT8, DB_VAR},                          //!< tInf_LifeByte
    {U8_MIN, U8_MAX},                                       //!< au8Rng_LifeByte[2]
    U8_MIN,                                                 //!< u8Def_LifeByte
    {0xffff, 178, EWDSTATE_TYPE, DB_VAR},                   //!< tInf_WatchdogState
    {GE_RUNNING, GE_TRIGGERED},                             //!< aeRng_WatchdogState[2]
    GE_RUNNING,                                             //!< eDef_WatchdogState
    {0xffff, 485, TUINT16, DB_VAR},                         //!< tInf_EcuVoltage
    {U16_MIN, U16_MAX},                                     //!< au16Rng_EcuVoltage[2]
    0,                                                      //!< u16Def_EcuVoltage
    {0xffff, 398, EOFFRAILMODE_TYPE, DB_VAR},               //!< tInf_OffRailMode
    {GE_NO_OFFRAIL_MODE, GE_WORSHOP_OFFRAIL_MODE},          //!< aeRng_OffRailMode[2]
    GE_NO_OFFRAIL_MODE,                                     //!< eDef_OffRailMode
    {0xffff, 428, ERAILSPEEDMODE_TYPE, DB_VAR},             //!< tInf_RailSpeedMode
    {GE_NO_SPEED_MAX_RAIL_MODE, GE_BREAK_IN_BRAKE_SPEED_RUNNING},//!< aeRng_RailSpeedMode[2]
    GE_NO_SPEED_MAX_RAIL_MODE,                              //!< eDef_RailSpeedMode
    {0xffff, 345, TINT16, DB_VAR},                          //!< tInf_OutputLutLeftManipulator
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_OutputLutLeftManipulator[2]
    0,                                                      //!< i16Def_OutputLutLeftManipulator
    {0xffff, 343, TINT16, DB_VAR},                          //!< tInf_OutputLutLeftTrackPvg
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_OutputLutLeftTrackPvg[2]
    0,                                                      //!< i16Def_OutputLutLeftTrackPvg
    {0xffff, 351, TINT16, DB_VAR},                          //!< tInf_OutputLutRightManipulator
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_OutputLutRightManipulator[2]
    0,                                                      //!< i16Def_OutputLutRightManipulator
    {0xffff, 352, TINT16, DB_VAR},                          //!< tInf_OutputLutRightTrackPvg
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_OutputLutRightTrackPvg[2]
    0,                                                      //!< i16Def_OutputLutRightTrackPvg
    {0xffff, 376, TINT16, DB_VAR},                          //!< tInf_OutputLutJoystickAdvanceRail
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_OutputLutJoystickAdvanceRail[2]
    0,                                                      //!< i16Def_OutputLutJoystickAdvanceRail
    {0xffff, 377, TINT16, DB_VAR},                          //!< tInf_OutputLutForwardPumpTransmission
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_OutputLutForwardPumpTransmission[2]
    0,                                                      //!< i16Def_OutputLutForwardPumpTransmission
    {0xffff, 382, TINT16, DB_VAR},                          //!< tInf_OutputLutBackwardPumpTransm
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_OutputLutBackwardPumpTransm[2]
    0,                                                      //!< i16Def_OutputLutBackwardPumpTransm
    {0xffff, 357, TINT16, DB_VAR},                          //!< tInf_ConsigneForwardPumpTransmPercent
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_ConsigneForwardPumpTransmPercent[2]
    0,                                                      //!< i16Def_ConsigneForwardPumpTransmPercent
    {0xffff, 430, TINT16, DB_VAR},                          //!< tInf_LastJoystickAdvanceValue
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_LastJoystickAdvanceValue[2]
    0,                                                      //!< i16Def_LastJoystickAdvanceValue
    {0xffff, 363, TINT16, DB_VAR},                          //!< tInf_JoystickAdvanceScalingValue
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_JoystickAdvanceScalingValue[2]
    0,                                                      //!< i16Def_JoystickAdvanceScalingValue
    {0xffff, 433, ESTATESERVICEBRAKERAIL_TYPE, DB_VAR},     //!< tInf_StateServiceBrakeRail
    {GE_DEFINE_BRAKE, GE_AR_SERVICE_BRAKE},                 //!< aeRng_StateServiceBrakeRail[2]
    GE_DEFINE_BRAKE,                                        //!< eDef_StateServiceBrakeRail
    {0xffff, 434, TBOOLEAN, DB_VAR},                        //!< tInf_EnableStartTimerServiceBrake
    {FALSE, TRUE},                                          //!< aboRng_EnableStartTimerServiceBrake[2]
    FALSE,                                                  //!< boDef_EnableStartTimerServiceBrake
    {0xffff, 375, TUINT16, DB_VAR},                         //!< tInf_SpeedMotorCommandTest
    {U16_MIN, U16_MAX},                                     //!< au16Rng_SpeedMotorCommandTest[2]
    0,                                                      //!< u16Def_SpeedMotorCommandTest
    {0xffff, 399, TBOOLEAN, DB_VAR},                        //!< tInf_ForceSilentModeMotorTest
    {FALSE, TRUE},                                          //!< aboRng_ForceSilentModeMotorTest[2]
    FALSE,                                                  //!< boDef_ForceSilentModeMotorTest
    {0xffff, 400, TUINT16, DB_VAR},                         //!< tInf_AngularSensorTest
    {U16_MIN, U16_MAX},                                     //!< au16Rng_AngularSensorTest[2]
    0,                                                      //!< u16Def_AngularSensorTest
    {0xffff, 126, TUINT16, DB_VAR},                         //!< tInf_SpeedAxleSensor
    {U16_MIN, U16_MAX},                                     //!< au16Rng_SpeedAxleSensor[2]
    0,                                                      //!< u16Def_SpeedAxleSensor
    {0xffff, 446, TUINT32, DB_VAR},                         //!< tInf_AverageTimeCycle
    {U32_MIN, U32_MAX},                                     //!< au32Rng_AverageTimeCycle[2]
    U32_MIN,                                                //!< u32Def_AverageTimeCycle
    {0xffff, 447, TUINT32, DB_VAR},                         //!< tInf_MaxTimeCycle
    {U32_MIN, U32_MAX},                                     //!< au32Rng_MaxTimeCycle[2]
    U32_MIN,                                                //!< u32Def_MaxTimeCycle
    {0xffff, 460, TBOOLEAN, DB_VAR},                        //!< tInf_FirstTranslationReleaseParkBrake
    {FALSE, TRUE},                                          //!< aboRng_FirstTranslationReleaseParkBrake[2]
    FALSE,                                                  //!< boDef_FirstTranslationReleaseParkBrake
    {0xffff, 461, TBOOLEAN, DB_VAR},                        //!< tInf_AutorizeUpAxleOscillant
    {FALSE, TRUE},                                          //!< aboRng_AutorizeUpAxleOscillant[2]
    TRUE,                                                   //!< boDef_AutorizeUpAxleOscillant
    {0xffff, 462, TBOOLEAN, DB_VAR},                        //!< tInf_AutorizeDownAxleOscillant
    {FALSE, TRUE},                                          //!< aboRng_AutorizeDownAxleOscillant[2]
    TRUE,                                                   //!< boDef_AutorizeDownAxleOscillant
    {0xffff, 463, TBOOLEAN, DB_VAR},                        //!< tInf_AutorizeUpAxlefixe
    {FALSE, TRUE},                                          //!< aboRng_AutorizeUpAxlefixe[2]
    TRUE,                                                   //!< boDef_AutorizeUpAxlefixe
    {0xffff, 464, TBOOLEAN, DB_VAR},                        //!< tInf_AutorizeDownAxlefixe
    {FALSE, TRUE},                                          //!< aboRng_AutorizeDownAxlefixe[2]
    TRUE,                                                   //!< boDef_AutorizeDownAxlefixe
    {0xffff, 465, TBOOLEAN, DB_VAR},                        //!< tInf_EngineOn
    {FALSE, TRUE},                                          //!< aboRng_EngineOn[2]
    FALSE,                                                  //!< boDef_EngineOn
    {0xffff, 111, TBOOLEAN, DB_VAR},                        //!< tInf_TranslationMovementIsSolicited
    {FALSE, TRUE},                                          //!< aboRng_TranslationMovementIsSolicited[2]
    FALSE,                                                  //!< boDef_TranslationMovementIsSolicited
    {0xffff, 124, ERAILTRANSLATIONDIRECTION_TYPE, DB_VAR},  //!< tInf_RailTranslationDirection
    {GE_AV_RAIL_DIR, GE_STOP_RAIL_DIR},                     //!< aeRng_RailTranslationDirection[2]
    GE_STOP_RAIL_DIR,                                       //!< eDef_RailTranslationDirection
    {0xffff, 302, TBOOLEAN, DB_VAR},                        //!< tInf_SetConditionAruRadioAlarm
    {FALSE, TRUE},                                          //!< aboRng_SetConditionAruRadioAlarm[2]
    FALSE,                                                  //!< boDef_SetConditionAruRadioAlarm
    {0xffff, 652, TINT16, DB_VAR},                          //!< tInf_JoystickAdvanceSetpointAfterRamp
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_JoystickAdvanceSetpointAfterRamp[2]
    I16_UNDEF,                                              //!< i16Def_JoystickAdvanceSetpointAfterRamp
    {0xffff, 661, TBOOLEAN, DB_VAR},                        //!< tInf_StabilizedStop
    {FALSE, TRUE},                                          //!< aboRng_StabilizedStop[2]
    FALSE,                                                  //!< boDef_StabilizedStop
    {0xffff, 662, TBOOLEAN, DB_VAR},                        //!< tInf_EmergencyBrake
    {FALSE, TRUE},                                          //!< aboRng_EmergencyBrake[2]
    FALSE,                                                  //!< boDef_EmergencyBrake
    {0xffff, 735, TBOOLEAN, DB_VAR},                        //!< tInf_EmergencyServiceBrakeTimerDone
    {FALSE, TRUE},                                          //!< aboRng_EmergencyServiceBrakeTimerDone[2]
    FALSE,                                                  //!< boDef_EmergencyServiceBrakeTimerDone
    {0xffff, 664, TBOOLEAN, DB_VAR},                        //!< tInf_StoppedMachineUnblkOsciTimerDone
    {FALSE, TRUE},                                          //!< aboRng_StoppedMachineUnblkOsciTimerDone[2]
    FALSE,                                                  //!< boDef_StoppedMachineUnblkOsciTimerDone
    {0xffff, 891, TINT16, DB_VAR},                          //!< tInf_OutLutLeftManipulatorAfterRamp
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_OutLutLeftManipulatorAfterRamp[2]
    I16_UNDEF,                                              //!< i16Def_OutLutLeftManipulatorAfterRamp
    {0xffff, 892, TINT16, DB_VAR},                          //!< tInf_OutLutRightManipulatorAfterRamp
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_OutLutRightManipulatorAfterRamp[2]
    I16_UNDEF,                                              //!< i16Def_OutLutRightManipulatorAfterRamp
    {0xffff, 487, TUINT16, DB_VAR},                         //!< tInf_DeltaBeetweenLeftRightPvgCrawler
    {U16_MIN, U16_MAX},                                     //!< au16Rng_DeltaBeetweenLeftRightPvgCrawler[2]
    U16_UNDEF,                                              //!< u16Def_DeltaBeetweenLeftRightPvgCrawler
    {0xffff, 894, TINT16, DB_VAR},                          //!< tInf_ConsigneLeftPvgTrack
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_ConsigneLeftPvgTrack[2]
    I16_UNDEF,                                              //!< i16Def_ConsigneLeftPvgTrack
    {0xffff, 895, TINT16, DB_VAR},                          //!< tInf_ConsigneRightPvgTrack
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_ConsigneRightPvgTrack[2]
    I16_UNDEF,                                              //!< i16Def_ConsigneRightPvgTrack
    {0xffff, 982, TUINT8, DB_VAR},                          //!< tInf_BrakeWithoutGachetteOrPedal
    {U8_MIN, U8_MAX},                                       //!< au8Rng_BrakeWithoutGachetteOrPedal[2]
    U8_UNDEF,                                               //!< u8Def_BrakeWithoutGachetteOrPedal
    {0xffff, 983, TUINT16, DB_VAR},                         //!< tInf_AruRadioAlarmCounter
    {U16_MIN, U16_MAX},                                     //!< au16Rng_AruRadioAlarmCounter[2]
    0,                                                      //!< u16Def_AruRadioAlarmCounter
    {0xffff, 1092, TBOOLEAN, DB_VAR},                       //!< tInf_RedLightARGBasketCmd
    {FALSE, TRUE},                                          //!< aboRng_RedLightARGBasketCmd[2]
    FALSE,                                                  //!< boDef_RedLightARGBasketCmd
    {0xffff, 1093, TBOOLEAN, DB_VAR},                       //!< tInf_WhiteLightARGBasketCmd
    {FALSE, TRUE},                                          //!< aboRng_WhiteLightARGBasketCmd[2]
    FALSE,                                                  //!< boDef_WhiteLightARGBasketCmd
    {0xffff, 1102, TBOOLEAN, DB_VAR},                       //!< tInf_PortillonLadderClose
    {FALSE, TRUE},                                          //!< aboRng_PortillonLadderClose[2]
    FALSE,                                                  //!< boDef_PortillonLadderClose
    {0xffff, 1159, TBOOLEAN, DB_VAR},                       //!< tInf_TestEvision
    {FALSE, TRUE},                                          //!< aboRng_TestEvision[2]
    FALSE,                                                  //!< boDef_TestEvision
    {0xffff, 1162, EPOSJOY_TYPE, DB_VAR},                   //!< tInf_PosJoystickAdvance
    {GE_AV_JOY, GE_AR_JOY},                                 //!< aeRng_PosJoystickAdvance[2]
    GE_NEU_JOY,                                             //!< eDef_PosJoystickAdvance
    {0xffff, 1163, EPOSJOY_TYPE, DB_VAR},                   //!< tInf_RetainPosJoyAdvanceUntilBrake
    {GE_AV_JOY, GE_AR_JOY},                                 //!< aeRng_RetainPosJoyAdvanceUntilBrake[2]
    GE_NEU_JOY,                                             //!< eDef_RetainPosJoyAdvanceUntilBrake
    {0xffff, 1259, TBOOLEAN, DB_VAR},                       //!< tInf_AuthorizeForwardCrawler
    {FALSE, TRUE},                                          //!< aboRng_AuthorizeForwardCrawler[2]
    FALSE,                                                  //!< boDef_AuthorizeForwardCrawler
    {0xffff, 1260, TBOOLEAN, DB_VAR},                       //!< tInf_AuthorizeBackwardCrawler
    {FALSE, TRUE},                                          //!< aboRng_AuthorizeBackwardCrawler[2]
    FALSE,                                                  //!< boDef_AuthorizeBackwardCrawler
    {0xffff, 1290, TINT16, DB_VAR},                         //!< tInf_ReturnValueUartInit
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_ReturnValueUartInit[2]
    I16_UNDEF,                                              //!< i16Def_ReturnValueUartInit
    {0xffff, 1350, TBOOLEAN, DB_VAR},                       //!< tInf_AuthorizeTransRailMovement
    {FALSE, TRUE},                                          //!< aboRng_AuthorizeTransRailMovement[2]
    FALSE,                                                  //!< boDef_AuthorizeTransRailMovement
    {0xffff, 1400, TUINT16, DB_VAR},                        //!< tInf_EvForwardTrackConsigne
    {U16_MIN, U16_MAX},                                     //!< au16Rng_EvForwardTrackConsigne[2]
    0,                                                      //!< u16Def_EvForwardTrackConsigne
    {0xffff, 1402, TUINT16, DB_VAR},                        //!< tInf_EvForwardRailConsigne
    {U16_MIN, U16_MAX},                                     //!< au16Rng_EvForwardRailConsigne[2]
    0,                                                      //!< u16Def_EvForwardRailConsigne
    {0xffff, 1405, TUINT32, DB_VAR},                        //!< tInf_EngineTimeSecond
    {U32_MIN, U32_MAX},                                     //!< au32Rng_EngineTimeSecond[2]
    0U,                                                     //!< u32Def_EngineTimeSecond
    {0xffff, 1677, TBOOLEAN, DB_VAR},                       //!< tInf_RamGeneralNeotecC0_1
    {FALSE, TRUE},                                          //!< aboRng_RamGeneralNeotecC0_1[2]
    0,                                                      //!< boDef_RamGeneralNeotecC0_1
    {0xffff, 1678, TBOOLEAN, DB_VAR},                       //!< tInf_RamGeneralNeotecC0_1_1
    {FALSE, TRUE},                                          //!< aboRng_RamGeneralNeotecC0_1_1[2]
    0,                                                      //!< boDef_RamGeneralNeotecC0_1_1
    {0xffff, 1679, TBOOLEAN, DB_VAR},                       //!< tInf_RamGeneralNeotecC0_1_2
    {FALSE, TRUE},                                          //!< aboRng_RamGeneralNeotecC0_1_2[2]
    0,                                                      //!< boDef_RamGeneralNeotecC0_1_2
    {0xffff, 1680, TBOOLEAN, DB_VAR},                       //!< tInf_RamGeneralNeotecC0_1_3
    {FALSE, TRUE},                                          //!< aboRng_RamGeneralNeotecC0_1_3[2]
    0,                                                      //!< boDef_RamGeneralNeotecC0_1_3
    {0xffff, 1681, TBOOLEAN, DB_VAR},                       //!< tInf_RamGeneralNeotecC0_1_4
    {FALSE, TRUE},                                          //!< aboRng_RamGeneralNeotecC0_1_4[2]
    0,                                                      //!< boDef_RamGeneralNeotecC0_1_4
    {0xffff, 1682, TBOOLEAN, DB_VAR},                       //!< tInf_RamGeneralNeotecC0_1_5
    {FALSE, TRUE},                                          //!< aboRng_RamGeneralNeotecC0_1_5[2]
    0,                                                      //!< boDef_RamGeneralNeotecC0_1_5
    {0xffff, 1683, TBOOLEAN, DB_VAR},                       //!< tInf_RamGeneralNeotecC0_1_6
    {FALSE, TRUE},                                          //!< aboRng_RamGeneralNeotecC0_1_6[2]
    0,                                                      //!< boDef_RamGeneralNeotecC0_1_6
    {0xffff, 1684, TBOOLEAN, DB_VAR},                       //!< tInf_RamGeneralNeotecC0_1_7
    {FALSE, TRUE},                                          //!< aboRng_RamGeneralNeotecC0_1_7[2]
    0,                                                      //!< boDef_RamGeneralNeotecC0_1_7
    {0xffff, 1685, TBOOLEAN, DB_VAR},                       //!< tInf_RamGeneralNeotecC0_1_8
    {FALSE, TRUE},                                          //!< aboRng_RamGeneralNeotecC0_1_8[2]
    0,                                                      //!< boDef_RamGeneralNeotecC0_1_8
    {0xffff, 1686, TBOOLEAN, DB_VAR},                       //!< tInf_RamGeneralNeotecC0_1_9
    {FALSE, TRUE},                                          //!< aboRng_RamGeneralNeotecC0_1_9[2]
    0,                                                      //!< boDef_RamGeneralNeotecC0_1_9
    {0xffff, 1687, TBOOLEAN, DB_VAR},                       //!< tInf_RamGeneralNeotecC0_1_10
    {FALSE, TRUE},                                          //!< aboRng_RamGeneralNeotecC0_1_10[2]
    0,                                                      //!< boDef_RamGeneralNeotecC0_1_10
    {0xffff, 1688, TBOOLEAN, DB_VAR},                       //!< tInf_RamGeneralNeotecC0_1_11
    {FALSE, TRUE},                                          //!< aboRng_RamGeneralNeotecC0_1_11[2]
    0,                                                      //!< boDef_RamGeneralNeotecC0_1_11
    {0xffff, 1689, TBOOLEAN, DB_VAR},                       //!< tInf_RamGeneralNeotecC0_1_12
    {FALSE, TRUE},                                          //!< aboRng_RamGeneralNeotecC0_1_12[2]
    0,                                                      //!< boDef_RamGeneralNeotecC0_1_12
    {0xffff, 1690, TBOOLEAN, DB_VAR},                       //!< tInf_RamGeneralNeotecC0_1_13
    {FALSE, TRUE},                                          //!< aboRng_RamGeneralNeotecC0_1_13[2]
    0,                                                      //!< boDef_RamGeneralNeotecC0_1_13
    {0xffff, 1691, TBOOLEAN, DB_VAR},                       //!< tInf_RamGeneralNeotecC0_1_14
    {FALSE, TRUE},                                          //!< aboRng_RamGeneralNeotecC0_1_14[2]
    0,                                                      //!< boDef_RamGeneralNeotecC0_1_14
    {0xffff, 1692, TBOOLEAN, DB_VAR},                       //!< tInf_RamGeneralNeotecC0_1_15
    {FALSE, TRUE},                                          //!< aboRng_RamGeneralNeotecC0_1_15[2]
    0,                                                      //!< boDef_RamGeneralNeotecC0_1_15
    {0xffff, 1693, TUINT8, DB_VAR},                         //!< tInf_RamGeneralNeotecC0_2
    {U8_MIN, U8_MAX},                                       //!< au8Rng_RamGeneralNeotecC0_2[2]
    0,                                                      //!< u8Def_RamGeneralNeotecC0_2
    {0xffff, 1694, TUINT8, DB_VAR},                         //!< tInf_RamGeneralNeotecC0_2_1
    {U8_MIN, U8_MAX},                                       //!< au8Rng_RamGeneralNeotecC0_2_1[2]
    0,                                                      //!< u8Def_RamGeneralNeotecC0_2_1
    {0xffff, 1695, TUINT8, DB_VAR},                         //!< tInf_RamGeneralNeotecC0_2_2
    {U8_MIN, U8_MAX},                                       //!< au8Rng_RamGeneralNeotecC0_2_2[2]
    0,                                                      //!< u8Def_RamGeneralNeotecC0_2_2
    {0xffff, 1696, TUINT8, DB_VAR},                         //!< tInf_RamGeneralNeotecC0_2_3
    {U8_MIN, U8_MAX},                                       //!< au8Rng_RamGeneralNeotecC0_2_3[2]
    0,                                                      //!< u8Def_RamGeneralNeotecC0_2_3
    {0xffff, 1697, TUINT8, DB_VAR},                         //!< tInf_RamGeneralNeotecC0_2_4
    {U8_MIN, U8_MAX},                                       //!< au8Rng_RamGeneralNeotecC0_2_4[2]
    0,                                                      //!< u8Def_RamGeneralNeotecC0_2_4
    {0xffff, 1698, TUINT8, DB_VAR},                         //!< tInf_RamGeneralNeotecC0_2_5
    {U8_MIN, U8_MAX},                                       //!< au8Rng_RamGeneralNeotecC0_2_5[2]
    0,                                                      //!< u8Def_RamGeneralNeotecC0_2_5
    {0xffff, 1699, TUINT16, DB_VAR},                        //!< tInf_RamGeneralNeotecC0_3
    {U16_MIN, U16_MAX},                                     //!< au16Rng_RamGeneralNeotecC0_3[2]
    0,                                                      //!< u16Def_RamGeneralNeotecC0_3
    {0xffff, 1700, TUINT16, DB_VAR},                        //!< tInf_RamGeneralNeotecC0_3_1
    {U16_MIN, U16_MAX},                                     //!< au16Rng_RamGeneralNeotecC0_3_1[2]
    0,                                                      //!< u16Def_RamGeneralNeotecC0_3_1
    {0xffff, 1701, TUINT16, DB_VAR},                        //!< tInf_RamGeneralNeotecC0_3_2
    {U16_MIN, U16_MAX},                                     //!< au16Rng_RamGeneralNeotecC0_3_2[2]
    0,                                                      //!< u16Def_RamGeneralNeotecC0_3_2
    {0xffff, 1702, TUINT16, DB_VAR},                        //!< tInf_RamGeneralNeotecC0_3_3
    {U16_MIN, U16_MAX},                                     //!< au16Rng_RamGeneralNeotecC0_3_3[2]
    0,                                                      //!< u16Def_RamGeneralNeotecC0_3_3
    {0xffff, 1703, TUINT16, DB_VAR},                        //!< tInf_RamGeneralNeotecC0_3_4
    {U16_MIN, U16_MAX},                                     //!< au16Rng_RamGeneralNeotecC0_3_4[2]
    0,                                                      //!< u16Def_RamGeneralNeotecC0_3_4
    {0xffff, 1704, TUINT16, DB_VAR},                        //!< tInf_RamGeneralNeotecC0_3_5
    {U16_MIN, U16_MAX},                                     //!< au16Rng_RamGeneralNeotecC0_3_5[2]
    0,                                                      //!< u16Def_RamGeneralNeotecC0_3_5
    {0xffff, 1705, TUINT16, DB_VAR},                        //!< tInf_RamGeneralNeotecC0_3_6
    {U16_MIN, U16_MAX},                                     //!< au16Rng_RamGeneralNeotecC0_3_6[2]
    0,                                                      //!< u16Def_RamGeneralNeotecC0_3_6
    {0xffff, 1706, TUINT16, DB_VAR},                        //!< tInf_RamGeneralNeotecC0_3_7
    {U16_MIN, U16_MAX},                                     //!< au16Rng_RamGeneralNeotecC0_3_7[2]
    0,                                                      //!< u16Def_RamGeneralNeotecC0_3_7
    {0xffff, 1707, TUINT16, DB_VAR},                        //!< tInf_RamGeneralNeotecC0_3_8
    {U16_MIN, U16_MAX},                                     //!< au16Rng_RamGeneralNeotecC0_3_8[2]
    0,                                                      //!< u16Def_RamGeneralNeotecC0_3_8
    {0xffff, 1708, TINT16, DB_VAR},                         //!< tInf_RamGeneralNeotecC0_4
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_RamGeneralNeotecC0_4[2]
    0,                                                      //!< i16Def_RamGeneralNeotecC0_4
    {0xffff, 1709, TINT16, DB_VAR},                         //!< tInf_RamGeneralNeotecC0_4_1
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_RamGeneralNeotecC0_4_1[2]
    0,                                                      //!< i16Def_RamGeneralNeotecC0_4_1
    {0xffff, 1710, TINT16, DB_VAR},                         //!< tInf_RamGeneralNeotecC0_4_2
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_RamGeneralNeotecC0_4_2[2]
    0,                                                      //!< i16Def_RamGeneralNeotecC0_4_2
    {0xffff, 1711, TINT16, DB_VAR},                         //!< tInf_RamGeneralNeotecC0_4_3
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_RamGeneralNeotecC0_4_3[2]
    0,                                                      //!< i16Def_RamGeneralNeotecC0_4_3
    {0xffff, 1712, TINT16, DB_VAR},                         //!< tInf_RamGeneralNeotecC0_4_4
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_RamGeneralNeotecC0_4_4[2]
    0,                                                      //!< i16Def_RamGeneralNeotecC0_4_4
    {0xffff, 1713, TINT16, DB_VAR},                         //!< tInf_RamGeneralNeotecC0_4_5
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_RamGeneralNeotecC0_4_5[2]
    0,                                                      //!< i16Def_RamGeneralNeotecC0_4_5
    {0xffff, 1714, TINT16, DB_VAR},                         //!< tInf_RamGeneralNeotecC0_4_6
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_RamGeneralNeotecC0_4_6[2]
    0,                                                      //!< i16Def_RamGeneralNeotecC0_4_6
    {0xffff, 1715, TINT16, DB_VAR},                         //!< tInf_RamGeneralNeotecC0_4_7
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_RamGeneralNeotecC0_4_7[2]
    0,                                                      //!< i16Def_RamGeneralNeotecC0_4_7
    {0xffff, 1716, TINT16, DB_VAR},                         //!< tInf_RamGeneralNeotecC0_4_8
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_RamGeneralNeotecC0_4_8[2]
    0,                                                      //!< i16Def_RamGeneralNeotecC0_4_8
    {0xffff, 1584, TBOOLEAN, DB_VAR},                       //!< tInf_RedLightARDBasketCmd
    {FALSE, TRUE},                                          //!< aboRng_RedLightARDBasketCmd[2]
    FALSE,                                                  //!< boDef_RedLightARDBasketCmd
    {0xffff, 1585, TBOOLEAN, DB_VAR},                       //!< tInf_WhiteLightARDBasketCmd
    {FALSE, TRUE},                                          //!< aboRng_WhiteLightARDBasketCmd[2]
    FALSE,                                                  //!< boDef_WhiteLightARDBasketCmd
    {0xffff, 1605, TBOOLEAN, DB_VAR},                       //!< tInf_ActiveFailure
    {FALSE, TRUE},                                          //!< aboRng_ActiveFailure[2]
    FALSE,                                                  //!< boDef_ActiveFailure
    {0xffff, 1749, TUINT8, DB_VAR},                         //!< tInf_ReductionPumpRail
    {U8_MIN, U8_MAX},                                       //!< au8Rng_ReductionPumpRail[2]
    0,                                                      //!< u8Def_ReductionPumpRail
    {0xffff, 1752, TUINT8, DB_VAR},                         //!< tInf_ReductionPumpTrack
    {U8_MIN, U8_MAX},                                       //!< au8Rng_ReductionPumpTrack[2]
    0,                                                      //!< u8Def_ReductionPumpTrack
    {0xffff, 1761, TBOOLEAN, DB_VAR},                       //!< tInf_ActiveWhiteLights15746
    {FALSE, TRUE},                                          //!< aboRng_ActiveWhiteLights15746[2]
    FALSE,                                                  //!< boDef_ActiveWhiteLights15746
    {0xffff, 1762, TBOOLEAN, DB_VAR},                       //!< tInf_WhiteLightAv15746Command
    {FALSE, TRUE},                                          //!< aboRng_WhiteLightAv15746Command[2]
    FALSE,                                                  //!< boDef_WhiteLightAv15746Command
    {0xffff, 1763, TBOOLEAN, DB_VAR},                       //!< tInf_WhiteLightAr15746Command
    {FALSE, TRUE},                                          //!< aboRng_WhiteLightAr15746Command[2]
    FALSE,                                                  //!< boDef_WhiteLightAr15746Command
    {0xffff, 1781, TBOOLEAN, DB_VAR},                       //!< tInf_TestElectricalIO
    {FALSE, TRUE},                                          //!< aboRng_TestElectricalIO[2]
    FALSE,                                                  //!< boDef_TestElectricalIO
    {0xffff, 1793, TBOOLEAN, DB_VAR},                       //!< tInf_SendEventDataloggerMessage
    {FALSE, TRUE},                                          //!< aboRng_SendEventDataloggerMessage[2]
    FALSE,                                                  //!< boDef_SendEventDataloggerMessage
    {0xffff, 1812, TBOOLEAN, DB_VAR},                       //!< tInf_SlopeModeFromC1
    {FALSE, TRUE},                                          //!< aboRng_SlopeModeFromC1[2]
    FALSE,                                                  //!< boDef_SlopeModeFromC1
    {0xffff, 1978, TBOOLEAN, DB_VAR},                       //!< tInf_BlinkLow
    {FALSE, TRUE},                                          //!< aboRng_BlinkLow[2]
    FALSE,                                                  //!< boDef_BlinkLow
    {0xffff, 1995, TUINT32, DB_VAR},                        //!< tInf_TotalDistance
    {U32_MIN, U32_MAX},                                     //!< au32Rng_TotalDistance[2]
    0U,                                                     //!< u32Def_TotalDistance
    {0xffff, 2011, TBOOLEAN, DB_VAR},                       //!< tInf_RunningStable48XS
    {FALSE, TRUE},                                          //!< aboRng_RunningStable48XS[2]
    FALSE,                                                  //!< boDef_RunningStable48XS
    {0xffff, 1602, TBOOLEAN, DB_VAR},                       //!< tInf_AlarmHydTempRailActive
    {FALSE, TRUE},                                          //!< aboRng_AlarmHydTempRailActive[2]
    FALSE,                                                  //!< boDef_AlarmHydTempRailActive
    {0xffff, 2129, TBOOLEAN, DB_VAR},                       //!< tInf_AlarmHydTempCrawlerActive
    {FALSE, TRUE},                                          //!< aboRng_AlarmHydTempCrawlerActive[2]
    FALSE,                                                  //!< boDef_AlarmHydTempCrawlerActive
    {0xffff, 2131, TUINT16, DB_VAR},                        //!< tInf_FaultyValue
    {U16_MIN, U16_MAX},                                     //!< au16Rng_FaultyValue[2]
    0,                                                      //!< u16Def_FaultyValue
    {0xffff, 2133, TUINT8, DB_VAR},                         //!< tInf_DeviceNum
    {U8_MIN, U8_MAX},                                       //!< au8Rng_DeviceNum[2]
    0,                                                      //!< u8Def_DeviceNum
    {0xffff, 2134, TUINT8, DB_VAR},                         //!< tInf_ErrorCode
    {U8_MIN, U8_MAX},                                       //!< au8Rng_ErrorCode[2]
    0,                                                      //!< u8Def_ErrorCode
    {0xffff, 2151, TBOOLEAN, DB_VAR},                       //!< tInf_EngineRunningStable
    {FALSE, TRUE},                                          //!< aboRng_EngineRunningStable[2]
    FALSE                                                   //!< boDef_EngineRunningStable
};

const TDbSetNvOptionsC0 gDb_ctSetNvOptionsC0=
{
    {0xffff, 579, TBOOLEAN, DB_VAR},                        //!< tInf_ConfigHollandaise
    {FALSE, TRUE},                                          //!< aboRng_ConfigHollandaise[2]
    FALSE,                                                  //!< boDef_ConfigHollandaise
    {0xffff, 1098, TBOOLEAN, DB_VAR},                       //!< tInf_Portillon
    {FALSE, TRUE},                                          //!< aboRng_Portillon[2]
    FALSE,                                                  //!< boDef_Portillon
    {0xffff, 1099, TBOOLEAN, DB_VAR},                       //!< tInf_Ladder
    {FALSE, TRUE},                                          //!< aboRng_Ladder[2]
    FALSE,                                                  //!< boDef_Ladder
    {0xffff, 1081, TBOOLEAN, DB_VAR},                       //!< tInf_MeasuringMat
    {FALSE, TRUE},                                          //!< aboRng_MeasuringMat[2]
    FALSE,                                                  //!< boDef_MeasuringMat
    {0xffff, 958, TBOOLEAN, DB_VAR},                        //!< tInf_IncliBasketHighSectorForAcesSite
    {FALSE, TRUE},                                          //!< aboRng_IncliBasketHighSectorForAcesSite[2]
    FALSE,                                                  //!< boDef_IncliBasketHighSectorForAcesSite
    {0xffff, 1082, TBOOLEAN, DB_VAR},                       //!< tInf_BasketCenteredForAccesSite
    {FALSE, TRUE},                                          //!< aboRng_BasketCenteredForAccesSite[2]
    FALSE,                                                  //!< boDef_BasketCenteredForAccesSite
    {0xffff, 1399, TBOOLEAN, DB_VAR},                       //!< tInf_MastDigitalDisplay
    {FALSE, TRUE},                                          //!< aboRng_MastDigitalDisplay[2]
    FALSE,                                                  //!< boDef_MastDigitalDisplay
    {0xffff, 1779, TBOOLEAN, DB_VAR},                       //!< tInf_AutorisationWorkKeyPresent
    {FALSE, TRUE},                                          //!< aboRng_AutorisationWorkKeyPresent[2]
    FALSE,                                                  //!< boDef_AutorisationWorkKeyPresent
    {0xffff, 1817, TBOOLEAN, DB_VAR},                       //!< tInf_SecondParkBrakeActive
    {FALSE, TRUE},                                          //!< aboRng_SecondParkBrakeActive[2]
    FALSE,                                                  //!< boDef_SecondParkBrakeActive
    {0xffff, 2022, TBOOLEAN, DB_VAR},                       //!< tInf_AddPerformanceFunc
    {FALSE, TRUE},                                          //!< aboRng_AddPerformanceFunc[2]
    TRUE,                                                   //!< boDef_AddPerformanceFunc
    {0xffff, 2127, TBOOLEAN, DB_VAR},                       //!< tInf_BasketTurretLimitation
    {FALSE, TRUE},                                          //!< aboRng_BasketTurretLimitation[2]
    FALSE,                                                  //!< boDef_BasketTurretLimitation
    {0xffff, 2128, TBOOLEAN, DB_VAR},                       //!< tInf_PresenceSensorPlate
    {FALSE, TRUE},                                          //!< aboRng_PresenceSensorPlate[2]
    FALSE                                                   //!< boDef_PresenceSensorPlate
};

const TDbSetNvMemoryC0 gDb_ctSetNvMemoryC0=
{
    {0xffff, 1258, TUINT16, DB_VAR},                        //!< tInf_NCycleBrakePerform
    {U16_MIN, U16_MAX},                                     //!< au16Rng_NCycleBrakePerform[2]
    0,                                                      //!< u16Def_NCycleBrakePerform
    {0xffff, 1469, TUINT8, DB_VAR},                         //!< tInf_LightMode
    {U8_MIN, U8_MAX},                                       //!< au8Rng_LightMode[2]
    0,                                                      //!< u8Def_LightMode
    {0xffff, 1482, TUINT8, DB_VAR},                         //!< tInf_VarMemory1
    {U8_MIN, U8_MAX},                                       //!< au8Rng_VarMemory1[2]
    0,                                                      //!< u8Def_VarMemory1
    {0xffff, 1484, TUINT8, DB_VAR},                         //!< tInf_VarMemory2
    {U8_MIN, U8_MAX},                                       //!< au8Rng_VarMemory2[2]
    0,                                                      //!< u8Def_VarMemory2
    {0xffff, 1485, TUINT8, DB_VAR},                         //!< tInf_VarMemory3
    {U8_MIN, U8_MAX},                                       //!< au8Rng_VarMemory3[2]
    0,                                                      //!< u8Def_VarMemory3
    {0xffff, 1486, TUINT16, DB_VAR},                        //!< tInf_VarMemory4
    {U16_MIN, U16_MAX},                                     //!< au16Rng_VarMemory4[2]
    0,                                                      //!< u16Def_VarMemory4
    {0xffff, 1487, TUINT16, DB_VAR},                        //!< tInf_VarMemory5
    {U16_MIN, U16_MAX},                                     //!< au16Rng_VarMemory5[2]
    0,                                                      //!< u16Def_VarMemory5
    {0xffff, 1488, TUINT16, DB_VAR},                        //!< tInf_VarMemory6
    {U16_MIN, U16_MAX},                                     //!< au16Rng_VarMemory6[2]
    0,                                                      //!< u16Def_VarMemory6
    {0xffff, 1489, TINT16, DB_VAR},                         //!< tInf_VarMemory7
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_VarMemory7[2]
    0,                                                      //!< i16Def_VarMemory7
    {0xffff, 1490, TINT16, DB_VAR},                         //!< tInf_VarMemory8
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_VarMemory8[2]
    0,                                                      //!< i16Def_VarMemory8
    {0xffff, 1491, TINT16, DB_VAR},                         //!< tInf_VarMemory9
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_VarMemory9[2]
    0,                                                      //!< i16Def_VarMemory9
    {0xffff, 1483, TBOOLEAN, DB_VAR},                       //!< tInf_VarMemory10
    {FALSE, TRUE},                                          //!< aboRng_VarMemory10[2]
    FALSE,                                                  //!< boDef_VarMemory10
    {0xffff, 1492, TBOOLEAN, DB_VAR},                       //!< tInf_VarMemory11
    {FALSE, TRUE},                                          //!< aboRng_VarMemory11[2]
    FALSE,                                                  //!< boDef_VarMemory11
    {0xffff, 1493, TBOOLEAN, DB_VAR},                       //!< tInf_VarMemory12
    {FALSE, TRUE},                                          //!< aboRng_VarMemory12[2]
    FALSE,                                                  //!< boDef_VarMemory12
    {0xffff, 1494, TBOOLEAN, DB_VAR},                       //!< tInf_VarMemory13
    {FALSE, TRUE},                                          //!< aboRng_VarMemory13[2]
    FALSE,                                                  //!< boDef_VarMemory13
    {0xffff, 1495, TBOOLEAN, DB_VAR},                       //!< tInf_VarMemory14
    {FALSE, TRUE},                                          //!< aboRng_VarMemory14[2]
    FALSE,                                                  //!< boDef_VarMemory14
    {0xffff, 1592, TINT32, DB_VAR},                         //!< tInf_gDistanceTraveledMeasureMast
    {I32_MIN, I32_MAX},                                     //!< ai32Rng_gDistanceTraveledMeasureMast[2]
    0L,                                                     //!< i32Def_gDistanceTraveledMeasureMast
    {0xffff, 1809, TUINT16, DB_VAR},                        //!< tInf_NCycle2ndParkBrakePerform
    {U16_MIN, U16_MAX},                                     //!< au16Rng_NCycle2ndParkBrakePerform[2]
    0,                                                      //!< u16Def_NCycle2ndParkBrakePerform
    {0xffff, 1993, TUINT16, DB_VAR},                        //!< tInf_gTotalDistanceMsb
    {U16_MIN, U16_MAX},                                     //!< au16Rng_gTotalDistanceMsb[2]
    0,                                                      //!< u16Def_gTotalDistanceMsb
    {0xffff, 1994, TUINT16, DB_VAR},                        //!< tInf_gTotalDistanceLsb
    {U16_MIN, U16_MAX},                                     //!< au16Rng_gTotalDistanceLsb[2]
    0                                                       //!< u16Def_gTotalDistanceLsb
};

const TDbSetNvParametersC0 gDb_ctSetNvParametersC0=
{
    {0xfff4, 361, TUINT16, DB_VAR},                         //!< tInf_LimitTresholdAngleRadioControl
    {U16_MIN, U16_MAX},                                     //!< au16Rng_LimitTresholdAngleRadioControl[2]
    75,                                                     //!< u16Def_LimitTresholdAngleRadioControl
    {0xfff4, 383, TUINT16, DB_VAR},                         //!< tInf_TresholdMinimalSpeedParkBrake
    {U16_MIN, U16_MAX},                                     //!< au16Rng_TresholdMinimalSpeedParkBrake[2]
    5,                                                      //!< u16Def_TresholdMinimalSpeedParkBrake
    {0xfff4, 364, TUINT16, DB_VAR},                         //!< tInf_TresholdMinimalSpeedServiceBrake
    {U16_MIN, U16_MAX},                                     //!< au16Rng_TresholdMinimalSpeedServiceBrake[2]
    8,                                                      //!< u16Def_TresholdMinimalSpeedServiceBrake
    {0xfff4, 355, TUINT8, DB_VAR},                          //!< tInf_AdditionnalPourcentFwardPumpCmd
    {0, 100},                                               //!< au8Rng_AdditionnalPourcentFwardPumpCmd[2]
    0,                                                      //!< u8Def_AdditionnalPourcentFwardPumpCmd
    {0xfff4, 356, TUINT8, DB_VAR},                          //!< tInf_AddPrctFwardPumpSilentModeMotor
    {0, 100},                                               //!< au8Rng_AddPrctFwardPumpSilentModeMotor[2]
    20,                                                     //!< u8Def_AddPrctFwardPumpSilentModeMotor
    {0xfff4, 476, TUINT8, DB_VAR},                          //!< tInf_NodeIdRadioCommand
    {U8_MIN, U8_MAX},                                       //!< au8Rng_NodeIdRadioCommand[2]
    60,                                                     //!< u8Def_NodeIdRadioCommand
    {0xfff4, 524, TUINT8, DB_VAR},                          //!< tInf_DeadZoneJoystickRotationTurret
    {0, 100},                                               //!< au8Rng_DeadZoneJoystickRotationTurret[2]
    8,                                                      //!< u8Def_DeadZoneJoystickRotationTurret
    {0xfff4, 673, TUINT32, DB_VAR},                         //!< tInf_ServiceAxleBrakeTimeBeforeBrake
    {U32_MIN, U32_MAX},                                     //!< au32Rng_ServiceAxleBrakeTimeBeforeBrake[2]
    350U,                                                   //!< u32Def_ServiceAxleBrakeTimeBeforeBrake
    {0xfff4, 674, TUINT32, DB_VAR},                         //!< tInf_ServiceBrakeOffrailTime
    {U32_MIN, U32_MAX},                                     //!< au32Rng_ServiceBrakeOffrailTime[2]
    2000U,                                                  //!< u32Def_ServiceBrakeOffrailTime
    {0xfff4, 435, TUINT16, DB_VAR},                         //!< tInf_EngineOffCurEvForwardPump
    {U16_MIN, U16_MAX},                                     //!< au16Rng_EngineOffCurEvForwardPump[2]
    1000,                                                   //!< u16Def_EngineOffCurEvForwardPump
    {0xfff4, 583, TUINT16, DB_VAR},                         //!< tInf_MinCurEvForwardPump
    {U16_MIN, U16_MAX},                                     //!< au16Rng_MinCurEvForwardPump[2]
    3000,                                                   //!< u16Def_MinCurEvForwardPump
    {0xfff4, 585, TUINT16, DB_VAR},                         //!< tInf_StopCurEvForwardPump
    {U16_MIN, U16_MAX},                                     //!< au16Rng_StopCurEvForwardPump[2]
    1100,                                                   //!< u16Def_StopCurEvForwardPump
    {0xfff4, 675, TUINT16, DB_VAR},                         //!< tInf_EngineOffCurEvBackwardPump
    {U16_MIN, U16_MAX},                                     //!< au16Rng_EngineOffCurEvBackwardPump[2]
    1000,                                                   //!< u16Def_EngineOffCurEvBackwardPump
    {0xfff4, 676, TUINT16, DB_VAR},                         //!< tInf_MinCurEvBackwardPump
    {U16_MIN, U16_MAX},                                     //!< au16Rng_MinCurEvBackwardPump[2]
    3000,                                                   //!< u16Def_MinCurEvBackwardPump
    {0xfff4, 677, TUINT16, DB_VAR},                         //!< tInf_StopCurEvBackwardPump
    {U16_MIN, U16_MAX},                                     //!< au16Rng_StopCurEvBackwardPump[2]
    1100,                                                   //!< u16Def_StopCurEvBackwardPump
    {0xfff4, 427, TUINT8, DB_VAR},                          //!< tInf_PosNeutralJoyAdvancement
    {U8_MIN, U8_MAX},                                       //!< au8Rng_PosNeutralJoyAdvancement[2]
    52,                                                     //!< u8Def_PosNeutralJoyAdvancement
    {0xfff4, 408, TUINT16, DB_VAR},                         //!< tInf_PidGpEvForwardPump
    {U16_MIN, U16_MAX},                                     //!< au16Rng_PidGpEvForwardPump[2]
    400,                                                    //!< u16Def_PidGpEvForwardPump
    {0xfff4, 409, TUINT16, DB_VAR},                         //!< tInf_PidTiEvForwardPump
    {U16_MIN, U16_MAX},                                     //!< au16Rng_PidTiEvForwardPump[2]
    50,                                                     //!< u16Def_PidTiEvForwardPump
    {0xfff4, 410, TUINT16, DB_VAR},                         //!< tInf_PidTdEvForwardPump
    {U16_MIN, U16_MAX},                                     //!< au16Rng_PidTdEvForwardPump[2]
    0,                                                      //!< u16Def_PidTdEvForwardPump
    {0xfff4, 429, TUINT16, DB_VAR},                         //!< tInf_PidGpEvBackwardPump
    {U16_MIN, U16_MAX},                                     //!< au16Rng_PidGpEvBackwardPump[2]
    400,                                                    //!< u16Def_PidGpEvBackwardPump
    {0xfff4, 431, TUINT16, DB_VAR},                         //!< tInf_PidTiEvBackwardPump
    {U16_MIN, U16_MAX},                                     //!< au16Rng_PidTiEvBackwardPump[2]
    50,                                                     //!< u16Def_PidTiEvBackwardPump
    {0xfff4, 436, TUINT16, DB_VAR},                         //!< tInf_PidTdEvBackwardPump
    {U16_MIN, U16_MAX},                                     //!< au16Rng_PidTdEvBackwardPump[2]
    0,                                                      //!< u16Def_PidTdEvBackwardPump
    {0xfff4, 769, TINT16, DB_VAR},                          //!< tInf_OutCharPosPressureBlockOscil
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_OutCharPosPressureBlockOscil[2]
    250,                                                    //!< i16Def_OutCharPosPressureBlockOscil
    {0xfff4, 770, TINT16, DB_VAR},                          //!< tInf_OutCharNeuPressureBlockOscil
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_OutCharNeuPressureBlockOscil[2]
    0,                                                      //!< i16Def_OutCharNeuPressureBlockOscil
    {0xfff4, 771, TINT16, DB_VAR},                          //!< tInf_OutCharNegPressureBlockOscil
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_OutCharNegPressureBlockOscil[2]
    0,                                                      //!< i16Def_OutCharNegPressureBlockOscil
    {0xfff4, 772, TINT16, DB_VAR},                          //!< tInf_OutCharPosPressureBrake
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_OutCharPosPressureBrake[2]
    250,                                                    //!< i16Def_OutCharPosPressureBrake
    {0xfff4, 773, TINT16, DB_VAR},                          //!< tInf_OutCharNeuPressureBrake
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_OutCharNeuPressureBrake[2]
    0,                                                      //!< i16Def_OutCharNeuPressureBrake
    {0xfff4, 774, TINT16, DB_VAR},                          //!< tInf_OutCharNegPressureBrake
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_OutCharNegPressureBrake[2]
    0,                                                      //!< i16Def_OutCharNegPressureBrake
    {0xfff4, 775, TINT16, DB_VAR},                          //!< tInf_OutCharPosTempTransmission
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_OutCharPosTempTransmission[2]
    150,                                                    //!< i16Def_OutCharPosTempTransmission
    {0xfff4, 776, TINT16, DB_VAR},                          //!< tInf_OutCharNeuTempTransmission
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_OutCharNeuTempTransmission[2]
    -50,                                                    //!< i16Def_OutCharNeuTempTransmission
    {0xfff4, 777, TINT16, DB_VAR},                          //!< tInf_OutCharNegTempTransmission
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_OutCharNegTempTransmission[2]
    -50,                                                    //!< i16Def_OutCharNegTempTransmission
    {0xfff4, 423, TINT16, DB_VAR},                          //!< tInf_MinConsigneEvForwardRail
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_MinConsigneEvForwardRail[2]
    4000,                                                   //!< i16Def_MinConsigneEvForwardRail
    {0xfff4, 457, TINT16, DB_VAR},                          //!< tInf_MaxConsigneEvForwardRail
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_MaxConsigneEvForwardRail[2]
    11150,                                                  //!< i16Def_MaxConsigneEvForwardRail
    {0xfff4, 539, TINT16, DB_VAR},                          //!< tInf_MinConsigneEvBackwardRail
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_MinConsigneEvBackwardRail[2]
    4000,                                                   //!< i16Def_MinConsigneEvBackwardRail
    {0xfff4, 540, TINT16, DB_VAR},                          //!< tInf_MaxConsigneEvBackwardRail
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_MaxConsigneEvBackwardRail[2]
    11150,                                                  //!< i16Def_MaxConsigneEvBackwardRail
    {0xfff4, 893, TUINT16, 4},                              //!< tInf_TimeRampEvAdvancementRail
    {
        { U16_MIN, U16_MAX },                               //!< aau16Rng_TimeRampEvAdvancementRail[0][2]
        { U16_MIN, U16_MAX },                               //!< aau16Rng_TimeRampEvAdvancementRail[1][2]
        { U16_MIN, U16_MAX },                               //!< aau16Rng_TimeRampEvAdvancementRail[2][2]
        { U16_MIN, U16_MAX }                                //!< aau16Rng_TimeRampEvAdvancementRail[3][2]
    },
    {1000, 1000, 1000, 1000},                               //!< au16Def_TimeRampEvAdvancementRail[4]
    {0xfff4, 856, TINT16, DB_VAR},                          //!< tInf_MinConsigneEvForwardCrawler
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_MinConsigneEvForwardCrawler[2]
    4000,                                                   //!< i16Def_MinConsigneEvForwardCrawler
    {0xfff4, 857, TINT16, DB_VAR},                          //!< tInf_MaxConsigneEvForwardCrawler
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_MaxConsigneEvForwardCrawler[2]
    11150,                                                  //!< i16Def_MaxConsigneEvForwardCrawler
    {0xfff4, 651, TUINT16, 2},                              //!< tInf_EvForwardCrawlerAdvanceRampRatio
    {
        { U16_MIN, U16_MAX },                               //!< aau16Rng_EvForwardCrawlerAdvanceRampRatio[0][2]
        { U16_MIN, U16_MAX }                                //!< aau16Rng_EvForwardCrawlerAdvanceRampRatio[1][2]
    },
    {100, 100},                                             //!< au16Def_EvForwardCrawlerAdvanceRampRatio[2]
    {0xfff4, 654, TUINT16, DB_VAR},                         //!< tInf_TresholdRegimeMotorParkBrake
    {U16_MIN, U16_MAX},                                     //!< au16Rng_TresholdRegimeMotorParkBrake[2]
    500,                                                    //!< u16Def_TresholdRegimeMotorParkBrake
    {0xfff4, 655, TUINT8, DB_VAR},                          //!< tInf_MinPvgLeftTrackAv
    {U8_MIN, U8_MAX},                                       //!< au8Rng_MinPvgLeftTrackAv[2]
    55,                                                     //!< u8Def_MinPvgLeftTrackAv
    {0xfff4, 656, TUINT8, DB_VAR},                          //!< tInf_MaxPvgLeftTrackAv
    {U8_MIN, U8_MAX},                                       //!< au8Rng_MaxPvgLeftTrackAv[2]
    75,                                                     //!< u8Def_MaxPvgLeftTrackAv
    {0xfff4, 657, TUINT8, DB_VAR},                          //!< tInf_MinPvgLeftTrackAr
    {U8_MIN, U8_MAX},                                       //!< au8Rng_MinPvgLeftTrackAr[2]
    45,                                                     //!< u8Def_MinPvgLeftTrackAr
    {0xfff4, 658, TUINT8, DB_VAR},                          //!< tInf_MaxPvgLeftTrackAr
    {U8_MIN, U8_MAX},                                       //!< au8Rng_MaxPvgLeftTrackAr[2]
    25,                                                     //!< u8Def_MaxPvgLeftTrackAr
    {0xfff4, 858, TUINT8, DB_VAR},                          //!< tInf_MinPvgRightTrackAv
    {U8_MIN, U8_MAX},                                       //!< au8Rng_MinPvgRightTrackAv[2]
    55,                                                     //!< u8Def_MinPvgRightTrackAv
    {0xfff4, 859, TUINT8, DB_VAR},                          //!< tInf_MaxPvgRightTrackAv
    {U8_MIN, U8_MAX},                                       //!< au8Rng_MaxPvgRightTrackAv[2]
    75,                                                     //!< u8Def_MaxPvgRightTrackAv
    {0xfff4, 860, TUINT8, DB_VAR},                          //!< tInf_MinPvgRightTrackAr
    {U8_MIN, U8_MAX},                                       //!< au8Rng_MinPvgRightTrackAr[2]
    45,                                                     //!< u8Def_MinPvgRightTrackAr
    {0xfff4, 861, TUINT8, DB_VAR},                          //!< tInf_MaxPvgRightTrackAr
    {U8_MIN, U8_MAX},                                       //!< au8Rng_MaxPvgRightTrackAr[2]
    25,                                                     //!< u8Def_MaxPvgRightTrackAr
    {0xfff4, 659, TUINT16, 4},                              //!< tInf_TimeRampLeftTrack
    {
        { U16_MIN, U16_MAX },                               //!< aau16Rng_TimeRampLeftTrack[0][2]
        { U16_MIN, U16_MAX },                               //!< aau16Rng_TimeRampLeftTrack[1][2]
        { U16_MIN, U16_MAX },                               //!< aau16Rng_TimeRampLeftTrack[2][2]
        { U16_MIN, U16_MAX }                                //!< aau16Rng_TimeRampLeftTrack[3][2]
    },
    {200, 200, 200, 200},                                   //!< au16Def_TimeRampLeftTrack[4]
    {0xfff4, 862, TUINT16, 4},                              //!< tInf_TimeRampRightTrack
    {
        { U16_MIN, U16_MAX },                               //!< aau16Rng_TimeRampRightTrack[0][2]
        { U16_MIN, U16_MAX },                               //!< aau16Rng_TimeRampRightTrack[1][2]
        { U16_MIN, U16_MAX },                               //!< aau16Rng_TimeRampRightTrack[2][2]
        { U16_MIN, U16_MAX }                                //!< aau16Rng_TimeRampRightTrack[3][2]
    },
    {200, 200, 200, 200},                                   //!< au16Def_TimeRampRightTrack[4]
    {0xfff4, 432, TUINT32, DB_VAR},                         //!< tInf_TimeStabilizedStopDetection
    {U32_MIN, U32_MAX},                                     //!< au32Rng_TimeStabilizedStopDetection[2]
    20000U,                                                 //!< u32Def_TimeStabilizedStopDetection
    {0xfff4, 755, TINT32, DB_VAR},                          //!< tInf_TresholdLowSpeedStabilizedStop
    {I32_MIN, I32_MAX},                                     //!< ai32Rng_TresholdLowSpeedStabilizedStop[2]
    10L,                                                    //!< i32Def_TresholdLowSpeedStabilizedStop
    {0xfff4, 663, TUINT32, DB_VAR},                         //!< tInf_TimeEmergencyServiceBrake
    {U32_MIN, U32_MAX},                                     //!< au32Rng_TimeEmergencyServiceBrake[2]
    5000U,                                                  //!< u32Def_TimeEmergencyServiceBrake
    {0xfff4, 426, TUINT32, DB_VAR},                         //!< tInf_TimeStoppedMachineUnblockOscAxle
    {U32_MIN, U32_MAX},                                     //!< au32Rng_TimeStoppedMachineUnblockOscAxle[2]
    10000U,                                                 //!< u32Def_TimeStoppedMachineUnblockOscAxle
    {0xfff4, 665, TINT32, DB_VAR},                          //!< tInf_TresholdLowSpeedUnblockOsciAxle
    {I32_MIN, I32_MAX},                                     //!< ai32Rng_TresholdLowSpeedUnblockOsciAxle[2]
    0L,                                                     //!< i32Def_TresholdLowSpeedUnblockOsciAxle
    {0xfff4, 486, TUINT16, DB_VAR},                         //!< tInf_GapMaxPvgCrawlerAdvancement
    {0, 20000},                                             //!< au16Rng_GapMaxPvgCrawlerAdvancement[2]
    5000,                                                   //!< u16Def_GapMaxPvgCrawlerAdvancement
    {0xfff4, 1261, TUINT16, DB_VAR},                        //!< tInf_GapMaxInvertedPvgCrawler
    {0, 20000},                                             //!< au16Rng_GapMaxInvertedPvgCrawler[2]
    5000,                                                   //!< u16Def_GapMaxInvertedPvgCrawler
    {0xfff4, 966, TUINT16, DB_VAR},                         //!< tInf_TresholdAnaToBoForInputs48Xs
    {U16_MIN, U16_MAX},                                     //!< au16Rng_TresholdAnaToBoForInputs48Xs[2]
    2500,                                                   //!< u16Def_TresholdAnaToBoForInputs48Xs
    {0xfff4, 984, TUINT16, DB_VAR},                         //!< tInf_InMinJoystickAdvance
    {U16_MIN, U16_MAX},                                     //!< au16Rng_InMinJoystickAdvance[2]
    250,                                                    //!< u16Def_InMinJoystickAdvance
    {0xfff4, 1078, TUINT16, DB_VAR},                        //!< tInf_InMaxJoystickAdvance
    {U16_MIN, U16_MAX},                                     //!< au16Rng_InMaxJoystickAdvance[2]
    750,                                                    //!< u16Def_InMaxJoystickAdvance
    {0xfff4, 1164, TUINT16, DB_VAR},                        //!< tInf_SpeedMiniTresholdServiceBrake
    {U16_MIN, U16_MAX},                                     //!< au16Rng_SpeedMiniTresholdServiceBrake[2]
    1,                                                      //!< u16Def_SpeedMiniTresholdServiceBrake
    {0xfff4, 1403, TUINT8, DB_VAR},                         //!< tInf_NbElementAverageSlopeTransAngle
    {U8_MIN, U8_MAX},                                       //!< au8Rng_NbElementAverageSlopeTransAngle[2]
    10,                                                     //!< u8Def_NbElementAverageSlopeTransAngle
    {0xfff4, 1404, TUINT8, DB_VAR},                         //!< tInf_NbElementAverageSlopeLongAngle
    {U8_MIN, U8_MAX},                                       //!< au8Rng_NbElementAverageSlopeLongAngle[2]
    10,                                                     //!< u8Def_NbElementAverageSlopeLongAngle
    {0xfff4, 1408, TUINT8, DB_VAR},                         //!< tInf_DeadZoneJoystickRailAdvancement
    {U8_MIN, U8_MAX},                                       //!< au8Rng_DeadZoneJoystickRailAdvancement[2]
    5,                                                      //!< u8Def_DeadZoneJoystickRailAdvancement
    {0xfff4, 1448, TUINT8, DB_VAR},                         //!< tInf_NbElementAverageSlopeTransAngle2
    {U8_MIN, U8_MAX},                                       //!< au8Rng_NbElementAverageSlopeTransAngle2[2]
    10,                                                     //!< u8Def_NbElementAverageSlopeTransAngle2
    {0xfff4, 1449, TUINT8, DB_VAR},                         //!< tInf_NbElementAverageSlopeLongAngle2
    {U8_MIN, U8_MAX},                                       //!< au8Rng_NbElementAverageSlopeLongAngle2[2]
    10,                                                     //!< u8Def_NbElementAverageSlopeLongAngle2
    {0xfff4, 1496, TBOOLEAN, DB_VAR},                       //!< tInf_NvParametersC0_1
    {FALSE, TRUE},                                          //!< aboRng_NvParametersC0_1[2]
    0,                                                      //!< boDef_NvParametersC0_1
    {0xfff4, 1511, TBOOLEAN, DB_VAR},                       //!< tInf_NvParametersC0_2
    {FALSE, TRUE},                                          //!< aboRng_NvParametersC0_2[2]
    0,                                                      //!< boDef_NvParametersC0_2
    {0xfff4, 1512, TBOOLEAN, DB_VAR},                       //!< tInf_NvParametersC0_3
    {FALSE, TRUE},                                          //!< aboRng_NvParametersC0_3[2]
    0,                                                      //!< boDef_NvParametersC0_3
    {0xfff4, 1513, TBOOLEAN, DB_VAR},                       //!< tInf_NvParametersC0_4
    {FALSE, TRUE},                                          //!< aboRng_NvParametersC0_4[2]
    0,                                                      //!< boDef_NvParametersC0_4
    {0xfff4, 1514, TBOOLEAN, DB_VAR},                       //!< tInf_NvParametersC0_5
    {FALSE, TRUE},                                          //!< aboRng_NvParametersC0_5[2]
    0,                                                      //!< boDef_NvParametersC0_5
    {0xfff4, 1515, TUINT8, DB_VAR},                         //!< tInf_NvParametersC0_6
    {U8_MIN, U8_MAX},                                       //!< au8Rng_NvParametersC0_6[2]
    0,                                                      //!< u8Def_NvParametersC0_6
    {0xfff4, 1516, TUINT8, DB_VAR},                         //!< tInf_NvParametersC0_7
    {U8_MIN, U8_MAX},                                       //!< au8Rng_NvParametersC0_7[2]
    0,                                                      //!< u8Def_NvParametersC0_7
    {0xfff4, 1517, TUINT8, DB_VAR},                         //!< tInf_NvParametersC0_8
    {U8_MIN, U8_MAX},                                       //!< au8Rng_NvParametersC0_8[2]
    0,                                                      //!< u8Def_NvParametersC0_8
    {0xfff4, 1518, TUINT8, DB_VAR},                         //!< tInf_NvParametersC0_9
    {U8_MIN, U8_MAX},                                       //!< au8Rng_NvParametersC0_9[2]
    0,                                                      //!< u8Def_NvParametersC0_9
    {0xfff4, 1519, TUINT16, DB_VAR},                        //!< tInf_NvParametersC0_10
    {U16_MIN, U16_MAX},                                     //!< au16Rng_NvParametersC0_10[2]
    0,                                                      //!< u16Def_NvParametersC0_10
    {0xfff4, 1520, TUINT16, DB_VAR},                        //!< tInf_NvParametersC0_11
    {U16_MIN, U16_MAX},                                     //!< au16Rng_NvParametersC0_11[2]
    0,                                                      //!< u16Def_NvParametersC0_11
    {0xfff4, 1521, TUINT16, DB_VAR},                        //!< tInf_NvParametersC0_12
    {U16_MIN, U16_MAX},                                     //!< au16Rng_NvParametersC0_12[2]
    0,                                                      //!< u16Def_NvParametersC0_12
    {0xfff4, 1522, TUINT16, DB_VAR},                        //!< tInf_NvParametersC0_13
    {U16_MIN, U16_MAX},                                     //!< au16Rng_NvParametersC0_13[2]
    0,                                                      //!< u16Def_NvParametersC0_13
    {0xfff4, 1523, TINT16, DB_VAR},                         //!< tInf_NvParametersC0_14
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_NvParametersC0_14[2]
    0,                                                      //!< i16Def_NvParametersC0_14
    {0xfff4, 1524, TINT16, DB_VAR},                         //!< tInf_NvParametersC0_15
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_NvParametersC0_15[2]
    0,                                                      //!< i16Def_NvParametersC0_15
    {0xfff4, 1525, TINT16, DB_VAR},                         //!< tInf_NvParametersC0_16
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_NvParametersC0_16[2]
    0,                                                      //!< i16Def_NvParametersC0_16
    {0xfff4, 1526, TINT16, DB_VAR},                         //!< tInf_NvParametersC0_17
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_NvParametersC0_17[2]
    0,                                                      //!< i16Def_NvParametersC0_17
    {0xfff4, 1561, TINT16, DB_VAR},                         //!< tInf_ThreshotothydraulicTemperature
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_ThreshotothydraulicTemperature[2]
    0,                                                      //!< i16Def_ThreshotothydraulicTemperature
    {0xfff4, 1562, TINT16, DB_VAR},                         //!< tInf_TimeforCoolerOn
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_TimeforCoolerOn[2]
    600,                                                    //!< i16Def_TimeforCoolerOn
    {0xfff4, 1597, TUINT16, DB_VAR},                        //!< tInf_TimeFaultPressureReducCrawler
    {U16_MIN, U16_MAX},                                     //!< au16Rng_TimeFaultPressureReducCrawler[2]
    25,                                                     //!< u16Def_TimeFaultPressureReducCrawler
    {0xfff4, 1598, TINT16, DB_VAR},                         //!< tInf_RailJoyRatioTwoSpeedFault
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_RailJoyRatioTwoSpeedFault[2]
    2500,                                                   //!< i16Def_RailJoyRatioTwoSpeedFault
    {0xfff4, 1795, TUINT32, DB_VAR},                        //!< tInf_TimeoutSdoRequestTime
    {U32_MIN, U32_MAX},                                     //!< au32Rng_TimeoutSdoRequestTime[2]
    200U,                                                   //!< u32Def_TimeoutSdoRequestTime
    {0xfff4, 1783, TINT16, DB_VAR},                         //!< tInf_PeriodBlinkoffWhiteLight
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_PeriodBlinkoffWhiteLight[2]
    38,                                                     //!< i16Def_PeriodBlinkoffWhiteLight
    {0xfff4, 1820, TUINT16, DB_VAR},                        //!< tInf_CptNeutralJoystickMax
    {U16_MIN, U16_MAX},                                     //!< au16Rng_CptNeutralJoystickMax[2]
    5,                                                      //!< u16Def_CptNeutralJoystickMax
    {0xfff4, 1821, TUINT16, DB_VAR},                        //!< tInf_StopMotorMGmax
    {U16_MIN, U16_MAX},                                     //!< au16Rng_StopMotorMGmax[2]
    50,                                                     //!< u16Def_StopMotorMGmax
    {0xfff4, 1822, TINT16, DB_VAR},                         //!< tInf_TurretRearPosExtLowSpeedTresh
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_TurretRearPosExtLowSpeedTresh[2]
    0,                                                      //!< i16Def_TurretRearPosExtLowSpeedTresh
    {0xfff4, 1823, TINT16, DB_VAR},                         //!< tInf_TurretRearNegExtLowSpeedTresh
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_TurretRearNegExtLowSpeedTresh[2]
    0,                                                      //!< i16Def_TurretRearNegExtLowSpeedTresh
    {0xffff, 1837, TUINT16, DB_VAR},                        //!< tInf_NbOfFileParameters
    {U16_MIN, U16_MAX},                                     //!< au16Rng_NbOfFileParameters[2]
    0,                                                      //!< u16Def_NbOfFileParameters
    {0xffff, 1842, TUINT8, DB_VAR},                         //!< tInf_VersionMajor
    {U8_MIN, U8_MAX},                                       //!< au8Rng_VersionMajor[2]
    0,                                                      //!< u8Def_VersionMajor
    {0xffff, 1843, TUINT8, DB_VAR},                         //!< tInf_VersionMinior
    {U8_MIN, U8_MAX},                                       //!< au8Rng_VersionMinior[2]
    0,                                                      //!< u8Def_VersionMinior
    {0xffff, 1844, TUINT8, DB_VAR},                         //!< tInf_VersionPatch
    {U8_MIN, U8_MAX},                                       //!< au8Rng_VersionPatch[2]
    0,                                                      //!< u8Def_VersionPatch
    {0xffff, 1845, TUINT8, DB_VAR},                         //!< tInf_VersionCustom
    {U8_MIN, U8_MAX},                                       //!< au8Rng_VersionCustom[2]
    0,                                                      //!< u8Def_VersionCustom
    {0xfff4, 1879, TINT16, DB_VAR},                         //!< tInf_OutCharPosElectricPumpPressure
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_OutCharPosElectricPumpPressure[2]
    4000,                                                   //!< i16Def_OutCharPosElectricPumpPressure
    {0xfff4, 1880, TINT16, DB_VAR},                         //!< tInf_OutCharNeuElectricPumpPressure
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_OutCharNeuElectricPumpPressure[2]
    0,                                                      //!< i16Def_OutCharNeuElectricPumpPressure
    {0xfff4, 1881, TINT16, DB_VAR},                         //!< tInf_OutCharNegElectricPumpPressure
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_OutCharNegElectricPumpPressure[2]
    0                                                       //!< i16Def_OutCharNegElectricPumpPressure
};

const TDbSetNvCalibrationC0 gDb_ctSetNvCalibrationC0=
{
    {0xffff, 335, TUINT8, DB_VAR},                          //!< tInf_ManipulatorLeftMaxPointLut
    {U8_MIN, U8_MAX},                                       //!< au8Rng_ManipulatorLeftMaxPointLut[2]
    2,                                                      //!< u8Def_ManipulatorLeftMaxPointLut
    {0xffff, 336, TINT16, 2},                               //!< tInf_ManipulatorLeftXValue
    {
        { I16_MIN, I16_MAX },                               //!< aai16Rng_ManipulatorLeftXValue[0][2]
        { I16_MIN, I16_MAX }                                //!< aai16Rng_ManipulatorLeftXValue[1][2]
    },
    {0, 255},                                               //!< ai16Def_ManipulatorLeftXValue[2]
    {0xffff, 337, TINT16, 2},                               //!< tInf_ManipulatorLeftYValue
    {
        { I16_MIN, I16_MAX },                               //!< aai16Rng_ManipulatorLeftYValue[0][2]
        { I16_MIN, I16_MAX }                                //!< aai16Rng_ManipulatorLeftYValue[1][2]
    },
    {0, 10000},                                             //!< ai16Def_ManipulatorLeftYValue[2]
    {0xffff, 340, TUINT8, DB_VAR},                          //!< tInf_ManipulatorRightMaxPointLut
    {U8_MIN, U8_MAX},                                       //!< au8Rng_ManipulatorRightMaxPointLut[2]
    2,                                                      //!< u8Def_ManipulatorRightMaxPointLut
    {0xffff, 341, TINT16, 2},                               //!< tInf_ManipulatorRightXValue
    {
        { I16_MIN, I16_MAX },                               //!< aai16Rng_ManipulatorRightXValue[0][2]
        { I16_MIN, I16_MAX }                                //!< aai16Rng_ManipulatorRightXValue[1][2]
    },
    {0, 255},                                               //!< ai16Def_ManipulatorRightXValue[2]
    {0xffff, 342, TINT16, 2},                               //!< tInf_ManipulatorRightYValue
    {
        { I16_MIN, I16_MAX },                               //!< aai16Rng_ManipulatorRightYValue[0][2]
        { I16_MIN, I16_MAX }                                //!< aai16Rng_ManipulatorRightYValue[1][2]
    },
    {0, 10000},                                             //!< ai16Def_ManipulatorRightYValue[2]
    {0xffff, 346, TUINT8, DB_VAR},                          //!< tInf_LeftTrackPvgMaxPointLut
    {U8_MIN, U8_MAX},                                       //!< au8Rng_LeftTrackPvgMaxPointLut[2]
    2,                                                      //!< u8Def_LeftTrackPvgMaxPointLut
    {0xffff, 338, TUINT16, 2},                              //!< tInf_LeftTrackPvgRampRatio
    {
        { U16_MIN, U16_MAX },                               //!< aau16Rng_LeftTrackPvgRampRatio[0][2]
        { U16_MIN, U16_MAX }                                //!< aau16Rng_LeftTrackPvgRampRatio[1][2]
    },
    {100, 100},                                             //!< au16Def_LeftTrackPvgRampRatio[2]
    {0xffff, 344, TINT16, 3},                               //!< tInf_RangeValueOfLeftTrackPvgRamp
    {
        { I16_MIN, I16_MAX },                               //!< aai16Rng_RangeValueOfLeftTrackPvgRamp[0][2]
        { I16_MIN, I16_MAX },                               //!< aai16Rng_RangeValueOfLeftTrackPvgRamp[1][2]
        { I16_MIN, I16_MAX }                                //!< aai16Rng_RangeValueOfLeftTrackPvgRamp[2][2]
    },
    {0, 0, 10000},                                          //!< ai16Def_RangeValueOfLeftTrackPvgRamp[3]
    {0xffff, 339, TUINT16, 2},                              //!< tInf_RightTrackPvgRampRatio
    {
        { U16_MIN, U16_MAX },                               //!< aau16Rng_RightTrackPvgRampRatio[0][2]
        { U16_MIN, U16_MAX }                                //!< aau16Rng_RightTrackPvgRampRatio[1][2]
    },
    {100, 100},                                             //!< au16Def_RightTrackPvgRampRatio[2]
    {0xffff, 353, TINT16, 3},                               //!< tInf_RangeValueOfRightTrackPvgRamp
    {
        { I16_MIN, I16_MAX },                               //!< aai16Rng_RangeValueOfRightTrackPvgRamp[0][2]
        { I16_MIN, I16_MAX },                               //!< aai16Rng_RangeValueOfRightTrackPvgRamp[1][2]
        { I16_MIN, I16_MAX }                                //!< aai16Rng_RangeValueOfRightTrackPvgRamp[2][2]
    },
    {0, 0, 10000},                                          //!< ai16Def_RangeValueOfRightTrackPvgRamp[3]
    {0xffff, 365, TUINT8, DB_VAR},                          //!< tInf_ForwardPumpTransmisMaxPointLut
    {U8_MIN, U8_MAX},                                       //!< au8Rng_ForwardPumpTransmisMaxPointLut[2]
    2,                                                      //!< u8Def_ForwardPumpTransmisMaxPointLut
    {0xffff, 366, TINT16, 2},                               //!< tInf_ForwardPumpTransmissionXValue
    {
        { I16_MIN, I16_MAX },                               //!< aai16Rng_ForwardPumpTransmissionXValue[0][2]
        { I16_MIN, I16_MAX }                                //!< aai16Rng_ForwardPumpTransmissionXValue[1][2]
    },
    {0, 10000},                                             //!< ai16Def_ForwardPumpTransmissionXValue[2]
    {0xffff, 367, TINT16, 2},                               //!< tInf_ForwardPumpTransmissionYValue
    {
        { I16_MIN, I16_MAX },                               //!< aai16Rng_ForwardPumpTransmissionYValue[0][2]
        { I16_MIN, I16_MAX }                                //!< aai16Rng_ForwardPumpTransmissionYValue[1][2]
    },
    {0, 20000},                                             //!< ai16Def_ForwardPumpTransmissionYValue[2]
    {0xffff, 368, TUINT8, DB_VAR},                          //!< tInf_BackwardPumpTransmisMaxPointLut
    {U8_MIN, U8_MAX},                                       //!< au8Rng_BackwardPumpTransmisMaxPointLut[2]
    2,                                                      //!< u8Def_BackwardPumpTransmisMaxPointLut
    {0xffff, 369, TINT16, 2},                               //!< tInf_BackwardPumpTransmissionXValue
    {
        { I16_MIN, I16_MAX },                               //!< aai16Rng_BackwardPumpTransmissionXValue[0][2]
        { I16_MIN, I16_MAX }                                //!< aai16Rng_BackwardPumpTransmissionXValue[1][2]
    },
    {0, 10000},                                             //!< ai16Def_BackwardPumpTransmissionXValue[2]
    {0xffff, 370, TINT16, 2},                               //!< tInf_BackwardPumpTransmissionYValue
    {
        { I16_MIN, I16_MAX },                               //!< aai16Rng_BackwardPumpTransmissionYValue[0][2]
        { I16_MIN, I16_MAX }                                //!< aai16Rng_BackwardPumpTransmissionYValue[1][2]
    },
    {0, 20000},                                             //!< ai16Def_BackwardPumpTransmissionYValue[2]
    {0xffff, 378, TUINT16, 2},                              //!< tInf_ForwardPumpTransmissionRampRatio
    {
        { U16_MIN, U16_MAX },                               //!< aau16Rng_ForwardPumpTransmissionRampRatio[0][2]
        { U16_MIN, U16_MAX }                                //!< aau16Rng_ForwardPumpTransmissionRampRatio[1][2]
    },
    {100, 100},                                             //!< au16Def_ForwardPumpTransmissionRampRatio[2]
    {0xffff, 379, TINT16, 3},                               //!< tInf_RangeValueForwardPumpTransRamp
    {
        { I16_MIN, I16_MAX },                               //!< aai16Rng_RangeValueForwardPumpTransRamp[0][2]
        { I16_MIN, I16_MAX },                               //!< aai16Rng_RangeValueForwardPumpTransRamp[1][2]
        { I16_MIN, I16_MAX }                                //!< aai16Rng_RangeValueForwardPumpTransRamp[2][2]
    },
    {0, 0, 20000},                                          //!< ai16Def_RangeValueForwardPumpTransRamp[3]
    {0xffff, 380, TUINT16, 2},                              //!< tInf_BackwardPumpTransmissionRampRtio
    {
        { U16_MIN, U16_MAX },                               //!< aau16Rng_BackwardPumpTransmissionRampRtio[0][2]
        { U16_MIN, U16_MAX }                                //!< aau16Rng_BackwardPumpTransmissionRampRtio[1][2]
    },
    {100, 100},                                             //!< au16Def_BackwardPumpTransmissionRampRtio[2]
    {0xffff, 381, TINT16, 3},                               //!< tInf_RangeValueBackwardPumpTransRamp
    {
        { I16_MIN, I16_MAX },                               //!< aai16Rng_RangeValueBackwardPumpTransRamp[0][2]
        { I16_MIN, I16_MAX },                               //!< aai16Rng_RangeValueBackwardPumpTransRamp[1][2]
        { I16_MIN, I16_MAX }                                //!< aai16Rng_RangeValueBackwardPumpTransRamp[2][2]
    },
    {0, 0, 20000},                                          //!< ai16Def_RangeValueBackwardPumpTransRamp[3]
    {0xffff, 411, TUINT32, DB_VAR},                         //!< tInf_EncodeurTurretOffset
    {U32_MIN, U32_MAX},                                     //!< au32Rng_EncodeurTurretOffset[2]
    0U,                                                     //!< u32Def_EncodeurTurretOffset
    {0xffff, 914, TINT16, DB_VAR},                          //!< tInf_SlopeLongOffset
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_SlopeLongOffset[2]
    0,                                                      //!< i16Def_SlopeLongOffset
    {0xffff, 915, TINT16, DB_VAR},                          //!< tInf_SlopeTransOffset
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_SlopeTransOffset[2]
    0,                                                      //!< i16Def_SlopeTransOffset
    {0xffff, 1446, TINT16, DB_VAR},                         //!< tInf_SlopeLongOffset2
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_SlopeLongOffset2[2]
    0,                                                      //!< i16Def_SlopeLongOffset2
    {0xffff, 1447, TINT16, DB_VAR},                         //!< tInf_SlopeTransOffset2
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_SlopeTransOffset2[2]
    0,                                                      //!< i16Def_SlopeTransOffset2
    {0xffff, 1470, TUINT32, DB_VAR},                        //!< tInf_EncodeurTurretOffset2
    {U32_MIN, U32_MAX},                                     //!< au32Rng_EncodeurTurretOffset2[2]
    0U,                                                     //!< u32Def_EncodeurTurretOffset2
    {0xffff, 1989, TUINT16, DB_VAR},                        //!< tInf_EncodeurTurretMsb1
    {U16_MIN, U16_MAX},                                     //!< au16Rng_EncodeurTurretMsb1[2]
    0,                                                      //!< u16Def_EncodeurTurretMsb1
    {0xffff, 1990, TUINT16, DB_VAR},                        //!< tInf_EncodeurTurretMsb2
    {U16_MIN, U16_MAX},                                     //!< au16Rng_EncodeurTurretMsb2[2]
    0,                                                      //!< u16Def_EncodeurTurretMsb2
    {0xffff, 1991, TUINT16, DB_VAR},                        //!< tInf_EncodeurTurretLsb1
    {U16_MIN, U16_MAX},                                     //!< au16Rng_EncodeurTurretLsb1[2]
    0,                                                      //!< u16Def_EncodeurTurretLsb1
    {0xffff, 1992, TUINT16, DB_VAR},                        //!< tInf_EncodeurTurretLsb2
    {U16_MIN, U16_MAX},                                     //!< au16Rng_EncodeurTurretLsb2[2]
    0                                                       //!< u16Def_EncodeurTurretLsb2
};

const TDbSetRam48XsInputsC0 gDb_ctSetRam48XsInputsC0=
{
    {0xffff, 96, TBOOLEAN, DB_VAR},                         //!< tInf_UpInclinaisonBasketButton
    {FALSE, TRUE},                                          //!< aboRng_UpInclinaisonBasketButton[2]
    FALSE,                                                  //!< boDef_UpInclinaisonBasketButton
    {0xffff, 97, TUINT16, DB_VAR},                          //!< tInf_UpInclinaisonBasketButtonValue
    {U16_MIN, U16_MAX},                                     //!< au16Rng_UpInclinaisonBasketButtonValue[2]
    U16_MIN,                                                //!< u16Def_UpInclinaisonBasketButtonValue
    {0xffff, 106, TBOOLEAN, DB_VAR},                        //!< tInf_DownInclinaisonBasketButton
    {FALSE, TRUE},                                          //!< aboRng_DownInclinaisonBasketButton[2]
    FALSE,                                                  //!< boDef_DownInclinaisonBasketButton
    {0xffff, 108, TUINT16, DB_VAR},                         //!< tInf_DownInclinaisonBasketButtonValue
    {U16_MIN, U16_MAX},                                     //!< au16Rng_DownInclinaisonBasketButtonValue[2]
    U16_MIN,                                                //!< u16Def_DownInclinaisonBasketButtonValue
    {0xffff, 125, TBOOLEAN, DB_VAR},                        //!< tInf_UpPendularButton
    {FALSE, TRUE},                                          //!< aboRng_UpPendularButton[2]
    FALSE,                                                  //!< boDef_UpPendularButton
    {0xffff, 127, TUINT16, DB_VAR},                         //!< tInf_UpPendularButtonValue
    {U16_MIN, U16_MAX},                                     //!< au16Rng_UpPendularButtonValue[2]
    U16_MIN,                                                //!< u16Def_UpPendularButtonValue
    {0xffff, 129, TBOOLEAN, DB_VAR},                        //!< tInf_DownPendularButton
    {FALSE, TRUE},                                          //!< aboRng_DownPendularButton[2]
    FALSE,                                                  //!< boDef_DownPendularButton
    {0xffff, 131, TUINT16, DB_VAR},                         //!< tInf_DownPendularButtonValue
    {U16_MIN, U16_MAX},                                     //!< au16Rng_DownPendularButtonValue[2]
    U16_MIN,                                                //!< u16Def_DownPendularButtonValue
    {0xffff, 133, TBOOLEAN, DB_VAR},                        //!< tInf_RotationCtClockwiseBasketButton
    {FALSE, TRUE},                                          //!< aboRng_RotationCtClockwiseBasketButton[2]
    FALSE,                                                  //!< boDef_RotationCtClockwiseBasketButton
    {0xffff, 135, TUINT16, DB_VAR},                         //!< tInf_RotCtClockwiseBasketButtonVal
    {U16_MIN, U16_MAX},                                     //!< au16Rng_RotCtClockwiseBasketButtonVal[2]
    U16_MIN,                                                //!< u16Def_RotCtClockwiseBasketButtonVal
    {0xffff, 137, TBOOLEAN, DB_VAR},                        //!< tInf_RotationClockwiseBasketButton
    {FALSE, TRUE},                                          //!< aboRng_RotationClockwiseBasketButton[2]
    FALSE,                                                  //!< boDef_RotationClockwiseBasketButton
    {0xffff, 139, TUINT16, DB_VAR},                         //!< tInf_RotationClockwiseBasketButtonVal
    {U16_MIN, U16_MAX},                                     //!< au16Rng_RotationClockwiseBasketButtonVal[2]
    U16_MIN,                                                //!< u16Def_RotationClockwiseBasketButtonVal
    {0xffff, 141, TBOOLEAN, DB_VAR},                        //!< tInf_Overload1
    {FALSE, TRUE},                                          //!< aboRng_Overload1[2]
    FALSE,                                                  //!< boDef_Overload1
    {0xffff, 143, TUINT16, DB_VAR},                         //!< tInf_Overload1Value
    {U16_MIN, U16_MAX},                                     //!< au16Rng_Overload1Value[2]
    U16_MIN,                                                //!< u16Def_Overload1Value
    {0xffff, 145, TBOOLEAN, DB_VAR},                        //!< tInf_Overload2
    {FALSE, TRUE},                                          //!< aboRng_Overload2[2]
    FALSE,                                                  //!< boDef_Overload2
    {0xffff, 147, TUINT16, DB_VAR},                         //!< tInf_Overload2Value
    {U16_MIN, U16_MAX},                                     //!< au16Rng_Overload2Value[2]
    U16_MIN,                                                //!< u16Def_Overload2Value
    {0xffff, 149, TBOOLEAN, DB_VAR},                        //!< tInf_NacelleBasketRightSideSensor1
    {FALSE, TRUE},                                          //!< aboRng_NacelleBasketRightSideSensor1[2]
    FALSE,                                                  //!< boDef_NacelleBasketRightSideSensor1
    {0xffff, 151, TUINT16, DB_VAR},                         //!< tInf_NacelleBasketRightSideSensor1Val
    {U16_MIN, U16_MAX},                                     //!< au16Rng_NacelleBasketRightSideSensor1Val[2]
    U16_MIN,                                                //!< u16Def_NacelleBasketRightSideSensor1Val
    {0xffff, 152, TBOOLEAN, DB_VAR},                        //!< tInf_NacelleBasketRightSideSensor2
    {FALSE, TRUE},                                          //!< aboRng_NacelleBasketRightSideSensor2[2]
    FALSE,                                                  //!< boDef_NacelleBasketRightSideSensor2
    {0xffff, 153, TUINT16, DB_VAR},                         //!< tInf_NacelleBasketRightSideSensor2Val
    {U16_MIN, U16_MAX},                                     //!< au16Rng_NacelleBasketRightSideSensor2Val[2]
    U16_MIN,                                                //!< u16Def_NacelleBasketRightSideSensor2Val
    {0xffff, 154, TBOOLEAN, DB_VAR},                        //!< tInf_NacelleBasketLeftSideSensor1
    {FALSE, TRUE},                                          //!< aboRng_NacelleBasketLeftSideSensor1[2]
    FALSE,                                                  //!< boDef_NacelleBasketLeftSideSensor1
    {0xffff, 155, TUINT16, DB_VAR},                         //!< tInf_NacelleBasketLeftSideSensor1Val
    {U16_MIN, U16_MAX},                                     //!< au16Rng_NacelleBasketLeftSideSensor1Val[2]
    U16_MIN,                                                //!< u16Def_NacelleBasketLeftSideSensor1Val
    {0xffff, 156, TBOOLEAN, DB_VAR},                        //!< tInf_NacelleBasketLeftSideSensor2
    {FALSE, TRUE},                                          //!< aboRng_NacelleBasketLeftSideSensor2[2]
    FALSE,                                                  //!< boDef_NacelleBasketLeftSideSensor2
    {0xffff, 157, TUINT16, DB_VAR},                         //!< tInf_NacelleBasketLeftSideSensor2Val
    {U16_MIN, U16_MAX},                                     //!< au16Rng_NacelleBasketLeftSideSensor2Val[2]
    U16_MIN,                                                //!< u16Def_NacelleBasketLeftSideSensor2Val
    {0xffff, 158, TBOOLEAN, DB_VAR},                        //!< tInf_LowSectorPendularSensor
    {FALSE, TRUE},                                          //!< aboRng_LowSectorPendularSensor[2]
    FALSE,                                                  //!< boDef_LowSectorPendularSensor
    {0xffff, 159, TUINT16, DB_VAR},                         //!< tInf_LowSectorPendularSensorVal
    {U16_MIN, U16_MAX},                                     //!< au16Rng_LowSectorPendularSensorVal[2]
    U16_MIN,                                                //!< u16Def_LowSectorPendularSensorVal
    {0xffff, 160, TBOOLEAN, DB_VAR},                        //!< tInf_HighSectorPlateSensor
    {FALSE, TRUE},                                          //!< aboRng_HighSectorPlateSensor[2]
    FALSE,                                                  //!< boDef_HighSectorPlateSensor
    {0xffff, 161, TUINT16, DB_VAR},                         //!< tInf_HighSectorPlateSensorVal
    {U16_MIN, U16_MAX},                                     //!< au16Rng_HighSectorPlateSensorVal[2]
    U16_MIN,                                                //!< u16Def_HighSectorPlateSensorVal
    {0xffff, 162, TBOOLEAN, DB_VAR},                        //!< tInf_FoldedLadderSensor
    {FALSE, TRUE},                                          //!< aboRng_FoldedLadderSensor[2]
    FALSE,                                                  //!< boDef_FoldedLadderSensor
    {0xffff, 163, TUINT16, DB_VAR},                         //!< tInf_FoldedLadderSensorVal
    {U16_MIN, U16_MAX},                                     //!< au16Rng_FoldedLadderSensorVal[2]
    U16_MIN,                                                //!< u16Def_FoldedLadderSensorVal
    {0xffff, 164, TUINT16, DB_VAR},                         //!< tInf_SafetyManSystem
    {U16_MIN, U16_MAX},                                     //!< au16Rng_SafetyManSystem[2]
    U16_MIN,                                                //!< u16Def_SafetyManSystem
    {0xffff, 165, TUINT16, DB_VAR},                         //!< tInf_DeltaArmAxisJoystick
    {U16_MIN, U16_MAX},                                     //!< au16Rng_DeltaArmAxisJoystick[2]
    U16_MIN,                                                //!< u16Def_DeltaArmAxisJoystick
    {0xffff, 166, TUINT16, DB_VAR},                         //!< tInf_ArrowArmAxisJoystick
    {U16_MIN, U16_MAX},                                     //!< au16Rng_ArrowArmAxisJoystick[2]
    U16_MIN,                                                //!< u16Def_ArrowArmAxisJoystick
    {0xffff, 439, TUINT16, DB_VAR},                         //!< tInf_TelescopeArmAxisJoysitck
    {U16_MIN, U16_MAX},                                     //!< au16Rng_TelescopeArmAxisJoysitck[2]
    U16_MIN,                                                //!< u16Def_TelescopeArmAxisJoysitck
    {0xffff, 959, TUINT16, DB_VAR},                         //!< tInf_RotationTurretAxisJoystick
    {U16_MIN, U16_MAX},                                     //!< au16Rng_RotationTurretAxisJoystick[2]
    U16_MIN,                                                //!< u16Def_RotationTurretAxisJoystick
    {0xffff, 960, TUINT16, DB_VAR},                         //!< tInf_AdvanceAxisJoystick
    {U16_MIN, U16_MAX},                                     //!< au16Rng_AdvanceAxisJoystick[2]
    U16_MIN,                                                //!< u16Def_AdvanceAxisJoystick
    {0xffff, 961, TBOOLEAN, DB_VAR},                        //!< tInf_RearmementSafetyManSystem
    {FALSE, TRUE},                                          //!< aboRng_RearmementSafetyManSystem[2]
    FALSE,                                                  //!< boDef_RearmementSafetyManSystem
    {0xffff, 962, TUINT16, DB_VAR},                         //!< tInf_RearmementSafetyManSystemVal
    {U16_MIN, U16_MAX},                                     //!< au16Rng_RearmementSafetyManSystemVal[2]
    U16_MIN,                                                //!< u16Def_RearmementSafetyManSystemVal
    {0xffff, 963, TBOOLEAN, DB_VAR},                        //!< tInf_AbutementNacelleTrackSide
    {FALSE, TRUE},                                          //!< aboRng_AbutementNacelleTrackSide[2]
    FALSE,                                                  //!< boDef_AbutementNacelleTrackSide
    {0xffff, 964, TUINT16, DB_VAR},                         //!< tInf_AbutementNacelleTrackSideVal
    {U16_MIN, U16_MAX},                                     //!< au16Rng_AbutementNacelleTrackSideVal[2]
    U16_MIN,                                                //!< u16Def_AbutementNacelleTrackSideVal
    {0xffff, 965, TBOOLEAN, DB_VAR},                        //!< tInf_AbutementNacelleCenteredSide
    {FALSE, TRUE},                                          //!< aboRng_AbutementNacelleCenteredSide[2]
    FALSE,                                                  //!< boDef_AbutementNacelleCenteredSide
    {0xffff, 1037, TUINT16, DB_VAR},                        //!< tInf_AbutementNacelleCenteredSideVal
    {U16_MIN, U16_MAX},                                     //!< au16Rng_AbutementNacelleCenteredSideVal[2]
    U16_MIN,                                                //!< u16Def_AbutementNacelleCenteredSideVal
    {0xffff, 1038, TBOOLEAN, DB_VAR},                       //!< tInf_DeltaArmJystckCenteredTelescope
    {FALSE, TRUE},                                          //!< aboRng_DeltaArmJystckCenteredTelescope[2]
    FALSE,                                                  //!< boDef_DeltaArmJystckCenteredTelescope
    {0xffff, 1039, TBOOLEAN, DB_VAR},                       //!< tInf_ArrowJoystickCenteredTurret
    {FALSE, TRUE},                                          //!< aboRng_ArrowJoystickCenteredTurret[2]
    FALSE,                                                  //!< boDef_ArrowJoystickCenteredTurret
    {0xffff, 1040, TBOOLEAN, DB_VAR},                       //!< tInf_CenteredAdvanceJoystick
    {FALSE, TRUE},                                          //!< aboRng_CenteredAdvanceJoystick[2]
    FALSE,                                                  //!< boDef_CenteredAdvanceJoystick
    {0xffff, 1100, TBOOLEAN, DB_VAR},                       //!< tInf_DeadManPedal
    {FALSE, TRUE},                                          //!< aboRng_DeadManPedal[2]
    FALSE,                                                  //!< boDef_DeadManPedal
    {0xffff, 1101, TBOOLEAN, DB_VAR},                       //!< tInf_PressenceInNacelleSensor1
    {FALSE, TRUE},                                          //!< aboRng_PressenceInNacelleSensor1[2]
    FALSE,                                                  //!< boDef_PressenceInNacelleSensor1
    {0xffff, 1304, TBOOLEAN, DB_VAR},                       //!< tInf_PressenceInNacelleSensor2
    {FALSE, TRUE},                                          //!< aboRng_PressenceInNacelleSensor2[2]
    FALSE,                                                  //!< boDef_PressenceInNacelleSensor2
    {0xffff, 1305, TBOOLEAN, DB_VAR},                       //!< tInf_Gachette
    {FALSE, TRUE},                                          //!< aboRng_Gachette[2]
    FALSE,                                                  //!< boDef_Gachette
    {0xffff, 1306, TBOOLEAN, DB_VAR},                       //!< tInf_Klaxon
    {FALSE, TRUE},                                          //!< aboRng_Klaxon[2]
    FALSE,                                                  //!< boDef_Klaxon
    {0xffff, 1307, TBOOLEAN, DB_VAR},                       //!< tInf_StopMotorButton
    {FALSE, TRUE},                                          //!< aboRng_StopMotorButton[2]
    FALSE,                                                  //!< boDef_StopMotorButton
    {0xffff, 1308, TBOOLEAN, DB_VAR},                       //!< tInf_AuthorizationWorkKey
    {FALSE, TRUE},                                          //!< aboRng_AuthorizationWorkKey[2]
    FALSE,                                                  //!< boDef_AuthorizationWorkKey
    {0xffff, 1309, TBOOLEAN, DB_VAR},                       //!< tInf_EtallonnageJoystickButton
    {FALSE, TRUE},                                          //!< aboRng_EtallonnageJoystickButton[2]
    FALSE,                                                  //!< boDef_EtallonnageJoystickButton
    {0xffff, 1310, TBOOLEAN, DB_VAR},                       //!< tInf_ClosePortillonSensor
    {FALSE, TRUE},                                          //!< aboRng_ClosePortillonSensor[2]
    FALSE,                                                  //!< boDef_ClosePortillonSensor
    {0xffff, 1311, TUINT8, DB_VAR},                         //!< tInf_Hearbeat48Xs
    {U8_MIN, U8_MAX},                                       //!< au8Rng_Hearbeat48Xs[2]
    U8_MIN,                                                 //!< u8Def_Hearbeat48Xs
    {0xffff, 1312, TUINT16, DB_VAR},                        //!< tInf_BatterieVoltage48Xs
    {U16_MIN, U16_MAX},                                     //!< au16Rng_BatterieVoltage48Xs[2]
    U16_MIN                                                 //!< u16Def_BatterieVoltage48Xs
};

const TDbSetRam48XsOutputsC0 gDb_ctSetRam48XsOutputsC0=
{
    {0xffff, 167, TBOOLEAN, DB_VAR},                        //!< tInf_WhiteLightsCommand
    {FALSE, TRUE},                                          //!< aboRng_WhiteLightsCommand[2]
    FALSE,                                                  //!< boDef_WhiteLightsCommand
    {0xffff, 168, EDIGSTATUS_TYPE, DB_VAR},                 //!< tInf_WhiteLightsValue
    {GE_DIG_OFF, GE_DIG_UNDEF},                             //!< aeRng_WhiteLightsValue[2]
    GE_DIG_ERROR,                                           //!< eDef_WhiteLightsValue
    {0xffff, 169, TBOOLEAN, DB_VAR},                        //!< tInf_RedLightsCommand
    {FALSE, TRUE},                                          //!< aboRng_RedLightsCommand[2]
    FALSE,                                                  //!< boDef_RedLightsCommand
    {0xffff, 170, EDIGSTATUS_TYPE, DB_VAR},                 //!< tInf_RedLightsValue
    {GE_DIG_OFF, GE_DIG_UNDEF},                             //!< aeRng_RedLightsValue[2]
    GE_DIG_ERROR,                                           //!< eDef_RedLightsValue
    {0xffff, 171, TBOOLEAN, DB_VAR},                        //!< tInf_WorkLightCommand
    {FALSE, TRUE},                                          //!< aboRng_WorkLightCommand[2]
    FALSE,                                                  //!< boDef_WorkLightCommand
    {0xffff, 172, EDIGSTATUS_TYPE, DB_VAR},                 //!< tInf_WorkLightValue
    {GE_DIG_OFF, GE_DIG_UNDEF},                             //!< aeRng_WorkLightValue[2]
    GE_DIG_ERROR,                                           //!< eDef_WorkLightValue
    {0xffff, 173, TBOOLEAN, DB_VAR},                        //!< tInf_BuzzerCommand
    {FALSE, TRUE},                                          //!< aboRng_BuzzerCommand[2]
    FALSE,                                                  //!< boDef_BuzzerCommand
    {0xffff, 174, EDIGSTATUS_TYPE, DB_VAR},                 //!< tInf_BuzzerValue
    {GE_DIG_OFF, GE_DIG_UNDEF},                             //!< aeRng_BuzzerValue[2]
    GE_DIG_ERROR,                                           //!< eDef_BuzzerValue
    {0xffff, 1572, EERRORSTATUS48XS_TYPE, DB_VAR},          //!< tInf_MotorDefaultLightErrSta
    {GE_IO_E_OK, GE_IO_E_DO_DIAG_NOT_FINISHED},             //!< aeRng_MotorDefaultLightErrSta[2]
    GE_IO_E_UNKNOWN,                                        //!< eDef_MotorDefaultLightErrSta
    {0xffff, 1573, EERRORSTATUS48XS_TYPE, DB_VAR},          //!< tInf_OverloadLightErrSta
    {GE_IO_E_OK, GE_IO_E_DO_DIAG_NOT_FINISHED},             //!< aeRng_OverloadLightErrSta[2]
    GE_IO_E_UNKNOWN,                                        //!< eDef_OverloadLightErrSta
    {0xffff, 1722, EERRORSTATUS48XS_TYPE, DB_VAR},          //!< tInf_BuzzerErrSta
    {GE_IO_E_OK, GE_IO_E_DO_DIAG_NOT_FINISHED},             //!< aeRng_BuzzerErrSta[2]
    GE_IO_E_UNKNOWN,                                        //!< eDef_BuzzerErrSta
    {0xffff, 1724, EERRORSTATUS48XS_TYPE, DB_VAR},          //!< tInf_GasOilLightErrSta
    {GE_IO_E_OK, GE_IO_E_DO_DIAG_NOT_FINISHED},             //!< aeRng_GasOilLightErrSta[2]
    GE_IO_E_UNKNOWN,                                        //!< eDef_GasOilLightErrSta
    {0xffff, 1723, EERRORSTATUS48XS_TYPE, DB_VAR},          //!< tInf_DeversDefaultLightErrSta
    {GE_IO_E_OK, GE_IO_E_DO_DIAG_NOT_FINISHED},             //!< aeRng_DeversDefaultLightErrSta[2]
    GE_IO_E_UNKNOWN,                                        //!< eDef_DeversDefaultLightErrSta
    {0xffff, 1726, EERRORSTATUS48XS_TYPE, DB_VAR},          //!< tInf_RedLightARDErrSta
    {GE_IO_E_OK, GE_IO_E_DO_DIAG_NOT_FINISHED},             //!< aeRng_RedLightARDErrSta[2]
    GE_IO_E_UNKNOWN,                                        //!< eDef_RedLightARDErrSta
    {0xffff, 1725, EERRORSTATUS48XS_TYPE, DB_VAR},          //!< tInf_WhiteLightARDErrSta
    {GE_IO_E_OK, GE_IO_E_DO_DIAG_NOT_FINISHED},             //!< aeRng_WhiteLightARDErrSta[2]
    GE_IO_E_UNKNOWN,                                        //!< eDef_WhiteLightARDErrSta
    {0xffff, 1574, EERRORSTATUS48XS_TYPE, DB_VAR},          //!< tInf_WarmingLightErrSta
    {GE_IO_E_OK, GE_IO_E_DO_DIAG_NOT_FINISHED},             //!< aeRng_WarmingLightErrSta[2]
    GE_IO_E_UNKNOWN,                                        //!< eDef_WarmingLightErrSta
    {0xffff, 1745, EERRORSTATUS48XS_TYPE, DB_VAR},          //!< tInf_RedLightARGErrSta
    {GE_IO_E_OK, GE_IO_E_DO_DIAG_NOT_FINISHED},             //!< aeRng_RedLightARGErrSta[2]
    GE_IO_E_UNKNOWN,                                        //!< eDef_RedLightARGErrSta
    {0xffff, 1746, EERRORSTATUS48XS_TYPE, DB_VAR},          //!< tInf_WhiteLightARGErrSta
    {GE_IO_E_OK, GE_IO_E_DO_DIAG_NOT_FINISHED},             //!< aeRng_WhiteLightARGErrSta[2]
    GE_IO_E_UNKNOWN                                         //!< eDef_WhiteLightARGErrSta
};

const TDbSetRamEcuInputRadioControl gDb_ctSetRamEcuInputRadioControl=
{
    {0xffff, 358, ESTATEHEARTBEAT_TYPE, DB_VAR},            //!< tInf_StateRadioControl
    {GE_BOOT_UP, GE_PRE_OPERATIONAL},                       //!< aeRng_StateRadioControl[2]
    GE_BOOT_UP,                                             //!< eDef_StateRadioControl
    {0xffff, 360, TUINT8, DB_VAR},                          //!< tInf_LeftManipulator
    {U8_MIN, U8_MAX},                                       //!< au8Rng_LeftManipulator[2]
    U8_UNDEF,                                               //!< u8Def_LeftManipulator
    {0xffff, 385, TUINT8, DB_VAR},                          //!< tInf_RightManipulator
    {U8_MIN, U8_MAX},                                       //!< au8Rng_RightManipulator[2]
    U8_UNDEF,                                               //!< u8Def_RightManipulator
    {0xffff, 386, EMANIPULATORPOSITION_TYPE, DB_VAR},       //!< tInf_LeftManipulatorPosition
    {GE_NEUTRAL, GE_ERROR},                                 //!< aeRng_LeftManipulatorPosition[2]
    GE_ERROR,                                               //!< eDef_LeftManipulatorPosition
    {0xffff, 387, EMANIPULATORPOSITION_TYPE, DB_VAR},       //!< tInf_RightManipulatorPosition
    {GE_NEUTRAL, GE_ERROR},                                 //!< aeRng_RightManipulatorPosition[2]
    GE_ERROR,                                               //!< eDef_RightManipulatorPosition
    {0xffff, 388, TBOOLEAN, DB_VAR},                        //!< tInf_UpAxleArFixe
    {FALSE, TRUE},                                          //!< aboRng_UpAxleArFixe[2]
    FALSE,                                                  //!< boDef_UpAxleArFixe
    {0xffff, 389, TBOOLEAN, DB_VAR},                        //!< tInf_DownAxleArFixe
    {FALSE, TRUE},                                          //!< aboRng_DownAxleArFixe[2]
    FALSE,                                                  //!< boDef_DownAxleArFixe
    {0xffff, 390, TBOOLEAN, DB_VAR},                        //!< tInf_UpAxleAvOscillant
    {FALSE, TRUE},                                          //!< aboRng_UpAxleAvOscillant[2]
    FALSE,                                                  //!< boDef_UpAxleAvOscillant
    {0xffff, 391, TBOOLEAN, DB_VAR},                        //!< tInf_DownAxleAvOscillant
    {FALSE, TRUE},                                          //!< aboRng_DownAxleAvOscillant[2]
    FALSE,                                                  //!< boDef_DownAxleAvOscillant
    {0xffff, 392, TBOOLEAN, DB_VAR},                        //!< tInf_RotationFrameCtClkwise
    {FALSE, TRUE},                                          //!< aboRng_RotationFrameCtClkwise[2]
    FALSE,                                                  //!< boDef_RotationFrameCtClkwise
    {0xffff, 393, TBOOLEAN, DB_VAR},                        //!< tInf_RotationFrameClkwise
    {FALSE, TRUE},                                          //!< aboRng_RotationFrameClkwise[2]
    FALSE,                                                  //!< boDef_RotationFrameClkwise
    {0xffff, 394, TBOOLEAN, DB_VAR},                        //!< tInf_SelectorRotTurret
    {FALSE, TRUE},                                          //!< aboRng_SelectorRotTurret[2]
    FALSE,                                                  //!< boDef_SelectorRotTurret
    {0xffff, 395, TBOOLEAN, DB_VAR},                        //!< tInf_SelectorPendular
    {FALSE, TRUE},                                          //!< aboRng_SelectorPendular[2]
    FALSE,                                                  //!< boDef_SelectorPendular
    {0xffff, 396, TBOOLEAN, DB_VAR},                        //!< tInf_RadioCommandConnect
    {FALSE, TRUE},                                          //!< aboRng_RadioCommandConnect[2]
    FALSE,                                                  //!< boDef_RadioCommandConnect
    {0xffff, 289, TBOOLEAN, DB_VAR},                        //!< tInf_UpPendularOrRotCtClkTurret
    {FALSE, TRUE},                                          //!< aboRng_UpPendularOrRotCtClkTurret[2]
    FALSE,                                                  //!< boDef_UpPendularOrRotCtClkTurret
    {0xffff, 290, TBOOLEAN, DB_VAR},                        //!< tInf_DownPendularOrRotClkTurret
    {FALSE, TRUE},                                          //!< aboRng_DownPendularOrRotClkTurret[2]
    FALSE,                                                  //!< boDef_DownPendularOrRotClkTurret
    {0xffff, 117, TBOOLEAN, DB_VAR},                        //!< tInf_StartRadioCommand
    {FALSE, TRUE},                                          //!< aboRng_StartRadioCommand[2]
    FALSE,                                                  //!< boDef_StartRadioCommand
    {0xffff, 118, TBOOLEAN, DB_VAR},                        //!< tInf_StopRadioCommand
    {FALSE, TRUE},                                          //!< aboRng_StopRadioCommand[2]
    FALSE,                                                  //!< boDef_StopRadioCommand
    {0xffff, 307, TBOOLEAN, DB_VAR},                        //!< tInf_ForcingAdvanceTrack
    {FALSE, TRUE},                                          //!< aboRng_ForcingAdvanceTrack[2]
    FALSE,                                                  //!< boDef_ForcingAdvanceTrack
    {0xffff, 308, TBOOLEAN, DB_VAR},                        //!< tInf_KlaxonCommand
    {FALSE, TRUE},                                          //!< aboRng_KlaxonCommand[2]
    FALSE                                                   //!< boDef_KlaxonCommand
};

const TDbSetRamCanSensorC0 gDb_ctSetRamCanSensorC0=
{
    {0xffff, 601, TUINT32, DB_VAR},                         //!< tInf_EncodeurTurret1AngleRaw
    {U32_MIN, U32_MAX},                                     //!< au32Rng_EncodeurTurret1AngleRaw[2]
    I16_UNDEF,                                              //!< u32Def_EncodeurTurret1AngleRaw
    {0xffff, 666, TINT16, DB_VAR},                          //!< tInf_EncodeurTurret1Angle
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_EncodeurTurret1Angle[2]
    I16_UNDEF,                                              //!< i16Def_EncodeurTurret1Angle
    {0xffff, 603, TUINT32, DB_VAR},                         //!< tInf_EncodeurTurret2AngleRaw
    {U32_MIN, U32_MAX},                                     //!< au32Rng_EncodeurTurret2AngleRaw[2]
    I16_UNDEF,                                              //!< u32Def_EncodeurTurret2AngleRaw
    {0xffff, 691, TINT16, DB_VAR},                          //!< tInf_EncodeurTurret2Angle
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_EncodeurTurret2Angle[2]
    I16_UNDEF,                                              //!< i16Def_EncodeurTurret2Angle
    {0xffff, 604, TINT16, DB_VAR},                          //!< tInf_SlopeLongAngleSensor1
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_SlopeLongAngleSensor1[2]
    I16_UNDEF,                                              //!< i16Def_SlopeLongAngleSensor1
    {0xffff, 605, TINT16, DB_VAR},                          //!< tInf_SlopeTransAngleSensor1
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_SlopeTransAngleSensor1[2]
    I16_UNDEF,                                              //!< i16Def_SlopeTransAngleSensor1
    {0xffff, 918, TINT16, DB_VAR},                          //!< tInf_SlopeLongAngleValue
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_SlopeLongAngleValue[2]
    I16_UNDEF,                                              //!< i16Def_SlopeLongAngleValue
    {0xffff, 919, TINT16, DB_VAR},                          //!< tInf_SlopeTransAngleValue
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_SlopeTransAngleValue[2]
    I16_UNDEF,                                              //!< i16Def_SlopeTransAngleValue
    {0xffff, 753, TUINT8, DB_VAR},                          //!< tInf_StateHeartBeatDeversSensor
    {U8_MIN, U8_MAX},                                       //!< au8Rng_StateHeartBeatDeversSensor[2]
    U8_UNDEF,                                               //!< u8Def_StateHeartBeatDeversSensor
    {0xffff, 754, TUINT8, DB_VAR},                          //!< tInf_StateHeartBeatEncodeurTurret1
    {U8_MIN, U8_MAX},                                       //!< au8Rng_StateHeartBeatEncodeurTurret1[2]
    U8_UNDEF,                                               //!< u8Def_StateHeartBeatEncodeurTurret1
    {0xffff, 943, TUINT16, DB_VAR},                         //!< tInf_SelectedSlopeAngle
    {U16_MIN, U16_MAX},                                     //!< au16Rng_SelectedSlopeAngle[2]
    U16_UNDEF,                                              //!< u16Def_SelectedSlopeAngle
    {0xffff, 1181, TUINT32, DB_VAR},                        //!< tInf_EncodeurMastMeasureRaw
    {U32_MIN, U32_MAX},                                     //!< au32Rng_EncodeurMastMeasureRaw[2]
    U32_UNDEF,                                              //!< u32Def_EncodeurMastMeasureRaw
    {0xffff, 1182, TUINT16, DB_VAR},                        //!< tInf_EncodeurMastMeasureCentimeter
    {U16_MIN, U16_MAX},                                     //!< au16Rng_EncodeurMastMeasureCentimeter[2]
    U16_UNDEF,                                              //!< u16Def_EncodeurMastMeasureCentimeter
    {0xffff, 1355, TINT16, DB_VAR},                         //!< tInf_SlopeLongAngleSensor2
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_SlopeLongAngleSensor2[2]
    I16_UNDEF,                                              //!< i16Def_SlopeLongAngleSensor2
    {0xffff, 1356, TINT16, DB_VAR},                         //!< tInf_SlopeTransAngleSensor2
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_SlopeTransAngleSensor2[2]
    I16_UNDEF,                                              //!< i16Def_SlopeTransAngleSensor2
    {0xffff, 1357, TUINT8, DB_VAR},                         //!< tInf_SlopeAlarm1
    {U8_MIN, U8_MAX},                                       //!< au8Rng_SlopeAlarm1[2]
    U8_UNDEF,                                               //!< u8Def_SlopeAlarm1
    {0xffff, 1358, TUINT8, DB_VAR},                         //!< tInf_SlopeAlarm2
    {U8_MIN, U8_MAX},                                       //!< au8Rng_SlopeAlarm2[2]
    U8_UNDEF,                                               //!< u8Def_SlopeAlarm2
    {0xffff, 1450, TINT16, DB_VAR},                         //!< tInf_SlopeLongAngleValue2
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_SlopeLongAngleValue2[2]
    I16_UNDEF,                                              //!< i16Def_SlopeLongAngleValue2
    {0xffff, 1451, TINT16, DB_VAR},                         //!< tInf_SlopeTransAngleValue2
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_SlopeTransAngleValue2[2]
    I16_UNDEF,                                              //!< i16Def_SlopeTransAngleValue2
    {0xffff, 1471, TUINT16, DB_VAR},                        //!< tInf_ErrorCodeEncodeurTurret1
    {U16_MIN, U16_MAX},                                     //!< au16Rng_ErrorCodeEncodeurTurret1[2]
    U16_UNDEF,                                              //!< u16Def_ErrorCodeEncodeurTurret1
    {0xffff, 1472, TUINT16, DB_VAR},                        //!< tInf_ErrorRegisterEncodeurTurret1
    {U16_MIN, U16_MAX},                                     //!< au16Rng_ErrorRegisterEncodeurTurret1[2]
    U16_UNDEF,                                              //!< u16Def_ErrorRegisterEncodeurTurret1
    {0xffff, 1473, TUINT16, DB_VAR},                        //!< tInf_ErrorCodeEncodeurTurret2
    {U16_MIN, U16_MAX},                                     //!< au16Rng_ErrorCodeEncodeurTurret2[2]
    U16_UNDEF,                                              //!< u16Def_ErrorCodeEncodeurTurret2
    {0xffff, 1474, TUINT16, DB_VAR},                        //!< tInf_ErrorRegisterEncodeurTurret2
    {U16_MIN, U16_MAX},                                     //!< au16Rng_ErrorRegisterEncodeurTurret2[2]
    U16_UNDEF,                                              //!< u16Def_ErrorRegisterEncodeurTurret2
    {0xffff, 1475, TUINT16, DB_VAR},                        //!< tInf_ErrorCodeMastMeasure
    {U16_MIN, U16_MAX},                                     //!< au16Rng_ErrorCodeMastMeasure[2]
    U16_UNDEF,                                              //!< u16Def_ErrorCodeMastMeasure
    {0xffff, 1476, TUINT16, DB_VAR},                        //!< tInf_ErrorRegisterMastMeasure
    {U16_MIN, U16_MAX},                                     //!< au16Rng_ErrorRegisterMastMeasure[2]
    U16_UNDEF,                                              //!< u16Def_ErrorRegisterMastMeasure
    {0xffff, 1579, TUINT8, DB_VAR},                         //!< tInf_StateHeartBeatDeversSensor2
    {U8_MIN, U8_MAX},                                       //!< au8Rng_StateHeartBeatDeversSensor2[2]
    U8_MIN,                                                 //!< u8Def_StateHeartBeatDeversSensor2
    {0xffff, 1796, TBOOLEAN, DB_VAR},                       //!< tInf_TimeoutSdoReqDetectedEncdTurret1
    {FALSE, TRUE},                                          //!< aboRng_TimeoutSdoReqDetectedEncdTurret1[2]
    FALSE,                                                  //!< boDef_TimeoutSdoReqDetectedEncdTurret1
    {0xffff, 1797, TBOOLEAN, DB_VAR},                       //!< tInf_TimeoutSdoReqDetectedEncdTurret2
    {FALSE, TRUE},                                          //!< aboRng_TimeoutSdoReqDetectedEncdTurret2[2]
    FALSE,                                                  //!< boDef_TimeoutSdoReqDetectedEncdTurret2
    {0xffff, 1997, TUINT32, DB_VAR},                        //!< tInf_EncodeurTurretOffset
    {U32_MIN, U32_MAX},                                     //!< au32Rng_EncodeurTurretOffset[2]
    0U,                                                     //!< u32Def_EncodeurTurretOffset
    {0xffff, 1998, TUINT32, DB_VAR},                        //!< tInf_EncodeurTurretOffset2
    {U32_MIN, U32_MAX},                                     //!< au32Rng_EncodeurTurretOffset2[2]
    0U                                                      //!< u32Def_EncodeurTurretOffset2
};

const TDbSetRamEvision7C0 gDb_ctSetRamEvision7C0=
{
    {0xffff, 606, TBOOLEAN, DB_VAR},                        //!< tInf_LoginStatus
    {FALSE, TRUE},                                          //!< aboRng_LoginStatus[2]
    FALSE,                                                  //!< boDef_LoginStatus
    {0xffff, 105, TBOOLEAN, DB_VAR},                        //!< tInf_AllowMovementNacelle
    {FALSE, TRUE},                                          //!< aboRng_AllowMovementNacelle[2]
    FALSE,                                                  //!< boDef_AllowMovementNacelle
    {0xffff, 314, TBOOLEAN, DB_VAR},                        //!< tInf_gBreak_Parking_On_Off
    {FALSE, TRUE},                                          //!< aboRng_gBreak_Parking_On_Off[2]
    FALSE,                                                  //!< boDef_gBreak_Parking_On_Off
    {0xffff, 610, TBOOLEAN, DB_VAR},                        //!< tInf_gBreak_Faillure_On_Off
    {FALSE, TRUE},                                          //!< aboRng_gBreak_Faillure_On_Off[2]
    FALSE,                                                  //!< boDef_gBreak_Faillure_On_Off
    {0xffff, 612, TBOOLEAN, DB_VAR},                        //!< tInf_gTurretInCenter
    {FALSE, TRUE},                                          //!< aboRng_gTurretInCenter[2]
    FALSE,                                                  //!< boDef_gTurretInCenter
    {0xffff, 611, TBOOLEAN, DB_VAR},                        //!< tInf_gTurretSectorInCenter
    {FALSE, TRUE},                                          //!< aboRng_gTurretSectorInCenter[2]
    FALSE,                                                  //!< boDef_gTurretSectorInCenter
    {0xffff, 613, TBOOLEAN, DB_VAR},                        //!< tInf_gVehiculeTrainMode
    {FALSE, TRUE},                                          //!< aboRng_gVehiculeTrainMode[2]
    FALSE,                                                  //!< boDef_gVehiculeTrainMode
    {0xffff, 614, TBOOLEAN, DB_VAR},                        //!< tInf_gIncoherenceLateralStopAndKey
    {FALSE, TRUE},                                          //!< aboRng_gIncoherenceLateralStopAndKey[2]
    FALSE,                                                  //!< boDef_gIncoherenceLateralStopAndKey
    {0xffff, 615, TBOOLEAN, DB_VAR},                        //!< tInf_gWorkMode
    {FALSE, TRUE},                                          //!< aboRng_gWorkMode[2]
    FALSE,                                                  //!< boDef_gWorkMode
    {0xffff, 616, TBOOLEAN, DB_VAR},                        //!< tInf_gSafetyElectricPump
    {FALSE, TRUE},                                          //!< aboRng_gSafetyElectricPump[2]
    FALSE,                                                  //!< boDef_gSafetyElectricPump
    {0xffff, 617, TBOOLEAN, DB_VAR},                        //!< tInf_gDownhill150mm
    {FALSE, TRUE},                                          //!< aboRng_gDownhill150mm[2]
    FALSE,                                                  //!< boDef_gDownhill150mm
    {0xffff, 618, TBOOLEAN, DB_VAR},                        //!< tInf_gTrainModeAllow
    {FALSE, TRUE},                                          //!< aboRng_gTrainModeAllow[2]
    FALSE,                                                  //!< boDef_gTrainModeAllow
    {0xffff, 619, TBOOLEAN, DB_VAR},                        //!< tInf_gBrakeTestService
    {FALSE, TRUE},                                          //!< aboRng_gBrakeTestService[2]
    FALSE,                                                  //!< boDef_gBrakeTestService
    {0xffff, 620, TBOOLEAN, DB_VAR},                        //!< tInf_gBrakePressureFault
    {FALSE, TRUE},                                          //!< aboRng_gBrakePressureFault[2]
    FALSE,                                                  //!< boDef_gBrakePressureFault
    {0xffff, 621, TBOOLEAN, DB_VAR},                        //!< tInf_gActivateMeasuringMast
    {FALSE, TRUE},                                          //!< aboRng_gActivateMeasuringMast[2]
    FALSE,                                                  //!< boDef_gActivateMeasuringMast
    {0xffff, 622, TBOOLEAN, DB_VAR},                        //!< tInf_gAutoMovementDirectionLight
    {FALSE, TRUE},                                          //!< aboRng_gAutoMovementDirectionLight[2]
    FALSE,                                                  //!< boDef_gAutoMovementDirectionLight
    {0xffff, 623, TBOOLEAN, DB_VAR},                        //!< tInf_gBackRailwayAxleLowPosition
    {FALSE, TRUE},                                          //!< aboRng_gBackRailwayAxleLowPosition[2]
    FALSE,                                                  //!< boDef_gBackRailwayAxleLowPosition
    {0xffff, 624, TBOOLEAN, DB_VAR},                        //!< tInf_gFrontRailwayAxleLowPosition
    {FALSE, TRUE},                                          //!< aboRng_gFrontRailwayAxleLowPosition[2]
    FALSE,                                                  //!< boDef_gFrontRailwayAxleLowPosition
    {0xffff, 625, TBOOLEAN, DB_VAR},                        //!< tInf_gBackRailwayAxleServiceBrake
    {FALSE, TRUE},                                          //!< aboRng_gBackRailwayAxleServiceBrake[2]
    FALSE,                                                  //!< boDef_gBackRailwayAxleServiceBrake
    {0xffff, 626, TBOOLEAN, DB_VAR},                        //!< tInf_gFrontRailwayAxleServiceBrake
    {FALSE, TRUE},                                          //!< aboRng_gFrontRailwayAxleServiceBrake[2]
    FALSE,                                                  //!< boDef_gFrontRailwayAxleServiceBrake
    {0xffff, 627, TBOOLEAN, DB_VAR},                        //!< tInf_gBackRailwayAxleParkBrake
    {FALSE, TRUE},                                          //!< aboRng_gBackRailwayAxleParkBrake[2]
    FALSE,                                                  //!< boDef_gBackRailwayAxleParkBrake
    {0xffff, 628, TBOOLEAN, DB_VAR},                        //!< tInf_gFrontRailwayAxleParkBrake
    {FALSE, TRUE},                                          //!< aboRng_gFrontRailwayAxleParkBrake[2]
    FALSE,                                                  //!< boDef_gFrontRailwayAxleParkBrake
    {0xffff, 629, TBOOLEAN, DB_VAR},                        //!< tInf_gStatusFrontLeftTrainBrakeTest
    {FALSE, TRUE},                                          //!< aboRng_gStatusFrontLeftTrainBrakeTest[2]
    FALSE,                                                  //!< boDef_gStatusFrontLeftTrainBrakeTest
    {0xffff, 630, TBOOLEAN, DB_VAR},                        //!< tInf_gStatusFrontRightTrainBrakeTest
    {FALSE, TRUE},                                          //!< aboRng_gStatusFrontRightTrainBrakeTest[2]
    FALSE,                                                  //!< boDef_gStatusFrontRightTrainBrakeTest
    {0xffff, 631, TBOOLEAN, DB_VAR},                        //!< tInf_gStatusBackLeftTrainBrakeTest
    {FALSE, TRUE},                                          //!< aboRng_gStatusBackLeftTrainBrakeTest[2]
    FALSE,                                                  //!< boDef_gStatusBackLeftTrainBrakeTest
    {0xffff, 632, TBOOLEAN, DB_VAR},                        //!< tInf_gStatusBackRightTrainBrakeTest
    {FALSE, TRUE},                                          //!< aboRng_gStatusBackRightTrainBrakeTest[2]
    FALSE,                                                  //!< boDef_gStatusBackRightTrainBrakeTest
    {0xffff, 586, TBOOLEAN, DB_VAR},                        //!< tInf_gAlarmAru
    {FALSE, TRUE},                                          //!< aboRng_gAlarmAru[2]
    FALSE,                                                  //!< boDef_gAlarmAru
    {0xffff, 684, TUINT16, DB_VAR},                         //!< tInf_gEngine_Use_Time
    {U16_MIN, U16_MAX},                                     //!< au16Rng_gEngine_Use_Time[2]
    U16_UNDEF,                                              //!< u16Def_gEngine_Use_Time
    {0xffff, 685, TUINT16, DB_VAR},                         //!< tInf_gEngine_RPM
    {U16_MIN, U16_MAX},                                     //!< au16Rng_gEngine_RPM[2]
    U16_UNDEF,                                              //!< u16Def_gEngine_RPM
    {0xffff, 686, TUINT16, DB_VAR},                         //!< tInf_gVehiculeSpeed
    {U16_MIN, U16_MAX},                                     //!< au16Rng_gVehiculeSpeed[2]
    U16_UNDEF,                                              //!< u16Def_gVehiculeSpeed
    {0xffff, 687, TUINT8, DB_VAR},                          //!< tInf_gLateralizationStop
    {U8_MIN, U8_MAX},                                       //!< au8Rng_gLateralizationStop[2]
    U8_UNDEF,                                               //!< u8Def_gLateralizationStop
    {0xffff, 688, TUINT8, DB_VAR},                          //!< tInf_gKeySelector
    {U8_MIN, U8_MAX},                                       //!< au8Rng_gKeySelector[2]
    U8_UNDEF,                                               //!< u8Def_gKeySelector
    {0xffff, 689, TUINT8, DB_VAR},                          //!< tInf_gFrontSpeedRailWayAxle
    {U8_MIN, U8_MAX},                                       //!< au8Rng_gFrontSpeedRailWayAxle[2]
    U8_UNDEF,                                               //!< u8Def_gFrontSpeedRailWayAxle
    {0xffff, 690, TUINT8, DB_VAR},                          //!< tInf_gBackSpeedRailWayAxle
    {U8_MIN, U8_MAX},                                       //!< au8Rng_gBackSpeedRailWayAxle[2]
    U8_UNDEF,                                               //!< u8Def_gBackSpeedRailWayAxle
    {0xffff, 939, TBOOLEAN, DB_VAR},                        //!< tInf_gButtonCalibTurretEncoder
    {FALSE, TRUE},                                          //!< aboRng_gButtonCalibTurretEncoder[2]
    FALSE,                                                  //!< boDef_gButtonCalibTurretEncoder
    {0xffff, 1277, TBOOLEAN, DB_VAR},                       //!< tInf_gOffTrackTestBrakeActivated
    {FALSE, TRUE},                                          //!< aboRng_gOffTrackTestBrakeActivated[2]
    FALSE,                                                  //!< boDef_gOffTrackTestBrakeActivated
    {0xffff, 1278, TBOOLEAN, DB_VAR},                       //!< tInf_gOffTrackRunInBrakeActivated
    {FALSE, TRUE},                                          //!< aboRng_gOffTrackRunInBrakeActivated[2]
    FALSE,                                                  //!< boDef_gOffTrackRunInBrakeActivated
    {0xffff, 1279, TBOOLEAN, DB_VAR},                       //!< tInf_gOsciServiceBrakeSelect
    {FALSE, TRUE},                                          //!< aboRng_gOsciServiceBrakeSelect[2]
    FALSE,                                                  //!< boDef_gOsciServiceBrakeSelect
    {0xffff, 1280, TBOOLEAN, DB_VAR},                       //!< tInf_gFixedServiceBrakeSelect
    {FALSE, TRUE},                                          //!< aboRng_gFixedServiceBrakeSelect[2]
    FALSE,                                                  //!< boDef_gFixedServiceBrakeSelect
    {0xffff, 1281, TBOOLEAN, DB_VAR},                       //!< tInf_gBothServiceBrakeSelect
    {FALSE, TRUE},                                          //!< aboRng_gBothServiceBrakeSelect[2]
    FALSE,                                                  //!< boDef_gBothServiceBrakeSelect
    {0xffff, 1282, TBOOLEAN, DB_VAR},                       //!< tInf_gOsciParkBrakeSelect
    {FALSE, TRUE},                                          //!< aboRng_gOsciParkBrakeSelect[2]
    FALSE,                                                  //!< boDef_gOsciParkBrakeSelect
    {0xffff, 1283, TBOOLEAN, DB_VAR},                       //!< tInf_gFixedParkBrakeSelect
    {FALSE, TRUE},                                          //!< aboRng_gFixedParkBrakeSelect[2]
    FALSE,                                                  //!< boDef_gFixedParkBrakeSelect
    {0xffff, 1284, TBOOLEAN, DB_VAR},                       //!< tInf_gBothParkBrakeSelect
    {FALSE, TRUE},                                          //!< aboRng_gBothParkBrakeSelect[2]
    FALSE,                                                  //!< boDef_gBothParkBrakeSelect
    {0xffff, 1285, TBOOLEAN, DB_VAR},                       //!< tInf_gOsciServiceRunInBrakeSelect
    {FALSE, TRUE},                                          //!< aboRng_gOsciServiceRunInBrakeSelect[2]
    FALSE,                                                  //!< boDef_gOsciServiceRunInBrakeSelect
    {0xffff, 1286, TBOOLEAN, DB_VAR},                       //!< tInf_gFixedServiceRunInBrakeSelect
    {FALSE, TRUE},                                          //!< aboRng_gFixedServiceRunInBrakeSelect[2]
    FALSE,                                                  //!< boDef_gFixedServiceRunInBrakeSelect
    {0xffff, 1287, TBOOLEAN, DB_VAR},                       //!< tInf_gBothServiceRunInBrakeSelect
    {FALSE, TRUE},                                          //!< aboRng_gBothServiceRunInBrakeSelect[2]
    FALSE,                                                  //!< boDef_gBothServiceRunInBrakeSelect
    {0xffff, 1364, TBOOLEAN, DB_VAR},                       //!< tInf_gTestBrakePageActive
    {FALSE, TRUE},                                          //!< aboRng_gTestBrakePageActive[2]
    FALSE,                                                  //!< boDef_gTestBrakePageActive
    {0xffff, 1371, TBOOLEAN, DB_VAR},                       //!< tInf_gBreakInBrakePageActive
    {FALSE, TRUE},                                          //!< aboRng_gBreakInBrakePageActive[2]
    FALSE,                                                  //!< boDef_gBreakInBrakePageActive
    {0xffff, 1409, TBOOLEAN, DB_VAR},                       //!< tInf_gSerialNumber
    {FALSE, TRUE},                                          //!< aboRng_gSerialNumber[2]
    FALSE,                                                  //!< boDef_gSerialNumber
    {0xffff, 1411, TBOOLEAN, DB_VAR},                       //!< tInf_gBPBasketValidate
    {FALSE, TRUE},                                          //!< aboRng_gBPBasketValidate[2]
    FALSE,                                                  //!< boDef_gBPBasketValidate
    {0xffff, 1412, TBOOLEAN, DB_VAR},                       //!< tInf_gKeyFilterOverload
    {FALSE, TRUE},                                          //!< aboRng_gKeyFilterOverload[2]
    FALSE,                                                  //!< boDef_gKeyFilterOverload
    {0xffff, 1413, TBOOLEAN, DB_VAR},                       //!< tInf_gKeyNextMode
    {FALSE, TRUE},                                          //!< aboRng_gKeyNextMode[2]
    FALSE,                                                  //!< boDef_gKeyNextMode
    {0xffff, 1414, TBOOLEAN, DB_VAR},                       //!< tInf_gKeyPrevMode
    {FALSE, TRUE},                                          //!< aboRng_gKeyPrevMode[2]
    FALSE,                                                  //!< boDef_gKeyPrevMode
    {0xffff, 1415, TBOOLEAN, DB_VAR},                       //!< tInf_gKeySignalDanger
    {FALSE, TRUE},                                          //!< aboRng_gKeySignalDanger[2]
    FALSE,                                                  //!< boDef_gKeySignalDanger
    {0xffff, 1416, TBOOLEAN, DB_VAR},                       //!< tInf_gKeyFlashLightON
    {FALSE, TRUE},                                          //!< aboRng_gKeyFlashLightON[2]
    FALSE,                                                  //!< boDef_gKeyFlashLightON
    {0xffff, 1417, TBOOLEAN, DB_VAR},                       //!< tInf_gKeyCalibMastMin
    {FALSE, TRUE},                                          //!< aboRng_gKeyCalibMastMin[2]
    FALSE,                                                  //!< boDef_gKeyCalibMastMin
    {0xffff, 1418, TBOOLEAN, DB_VAR},                       //!< tInf_gKeyCalibMastMax
    {FALSE, TRUE},                                          //!< aboRng_gKeyCalibMastMax[2]
    FALSE,                                                  //!< boDef_gKeyCalibMastMax
    {0xffff, 1410, TBOOLEAN, DB_VAR},                       //!< tInf_gKeyCalibMastValid
    {FALSE, TRUE},                                          //!< aboRng_gKeyCalibMastValid[2]
    FALSE,                                                  //!< boDef_gKeyCalibMastValid
    {0xffff, 1552, TBOOLEAN, DB_VAR},                       //!< tInf_gKeyGeneratorActivate
    {FALSE, TRUE},                                          //!< aboRng_gKeyGeneratorActivate[2]
    FALSE,                                                  //!< boDef_gKeyGeneratorActivate
    {0xffff, 1593, TBOOLEAN, DB_VAR},                       //!< tInf_gRazDistanceTraveledMastMeasure
    {FALSE, TRUE},                                          //!< aboRng_gRazDistanceTraveledMastMeasure[2]
    FALSE,                                                  //!< boDef_gRazDistanceTraveledMastMeasure
    {0xffff, 1760, TBOOLEAN, DB_VAR},                       //!< tInf_gKeyWhiteLights15746
    {FALSE, TRUE},                                          //!< aboRng_gKeyWhiteLights15746[2]
    FALSE,                                                  //!< boDef_gKeyWhiteLights15746
    {0xffff, 1810, TBOOLEAN, DB_VAR},                       //!< tInf_gOsci2ndParkBrakeSelect
    {FALSE, TRUE},                                          //!< aboRng_gOsci2ndParkBrakeSelect[2]
    FALSE,                                                  //!< boDef_gOsci2ndParkBrakeSelect
    {0xffff, 1811, TBOOLEAN, DB_VAR},                       //!< tInf_gFixe2ndParkBrakeSelect
    {FALSE, TRUE},                                          //!< aboRng_gFixe2ndParkBrakeSelect[2]
    FALSE,                                                  //!< boDef_gFixe2ndParkBrakeSelect
    {0xffff, 1566, TBOOLEAN, DB_VAR},                       //!< tInf_gKeyRazController
    {FALSE, TRUE},                                          //!< aboRng_gKeyRazController[2]
    FALSE                                                   //!< boDef_gKeyRazController
};

const TDbSetRamEcuC0RcvFromC1 gDb_ctSetRamEcuC0RcvFromC1=
{
    {0xffff, 100, EDISTATE_TYPE, DB_VAR},                   //!< tInf_C1TurretPostSelector
    {GE_DI_OFF, GE_DI_UNDEF},                               //!< aeRng_C1TurretPostSelector[2]
    GE_DI_ERROR,                                            //!< eDef_C1TurretPostSelector
    {0xffff, 102, EDISTATE_TYPE, DB_VAR},                   //!< tInf_C1RadioPostSelector
    {GE_DI_OFF, GE_DI_UNDEF},                               //!< aeRng_C1RadioPostSelector[2]
    GE_DI_ERROR,                                            //!< eDef_C1RadioPostSelector
    {0xffff, 103, EDISTATE_TYPE, DB_VAR},                   //!< tInf_C1NacellePostSelector
    {GE_DI_OFF, GE_DI_UNDEF},                               //!< aeRng_C1NacellePostSelector[2]
    GE_DI_ERROR,                                            //!< eDef_C1NacellePostSelector
    {0xffff, 647, TBOOLEAN, DB_VAR},                        //!< tInf_UpAxleOscillantCommand
    {FALSE, TRUE},                                          //!< aboRng_UpAxleOscillantCommand[2]
    FALSE,                                                  //!< boDef_UpAxleOscillantCommand
    {0xffff, 648, TBOOLEAN, DB_VAR},                        //!< tInf_DownAxleOscillantCommand
    {FALSE, TRUE},                                          //!< aboRng_DownAxleOscillantCommand[2]
    FALSE,                                                  //!< boDef_DownAxleOscillantCommand
    {0xffff, 649, TBOOLEAN, DB_VAR},                        //!< tInf_UpAxleFixeCommand
    {FALSE, TRUE},                                          //!< aboRng_UpAxleFixeCommand[2]
    FALSE,                                                  //!< boDef_UpAxleFixeCommand
    {0xffff, 650, TBOOLEAN, DB_VAR},                        //!< tInf_DownAxleFixeCommand
    {FALSE, TRUE},                                          //!< aboRng_DownAxleFixeCommand[2]
    FALSE,                                                  //!< boDef_DownAxleFixeCommand
    {0xffff, 653, TINT32, DB_VAR},                          //!< tInf_RegimeMotorAlternatorRpm
    {I32_MIN, I32_MAX},                                     //!< ai32Rng_RegimeMotorAlternatorRpm[2]
    I32_UNDEF,                                              //!< i32Def_RegimeMotorAlternatorRpm
    {0xffff, 950, TBOOLEAN, DB_VAR},                        //!< tInf_EntryTelescopeFdcSensor
    {FALSE, TRUE},                                          //!< aboRng_EntryTelescopeFdcSensor[2]
    FALSE,                                                  //!< boDef_EntryTelescopeFdcSensor
    {0xffff, 947, TBOOLEAN, DB_VAR},                        //!< tInf_DeltaArmFoldedSensor
    {FALSE, TRUE},                                          //!< aboRng_DeltaArmFoldedSensor[2]
    FALSE,                                                  //!< boDef_DeltaArmFoldedSensor
    {0xffff, 948, TBOOLEAN, DB_VAR},                        //!< tInf_BoomArmFoldedSensor
    {FALSE, TRUE},                                          //!< aboRng_BoomArmFoldedSensor[2]
    FALSE,                                                  //!< boDef_BoomArmFoldedSensor
    {0xffff, 949, TBOOLEAN, DB_VAR},                        //!< tInf_DeltaArmInLowerZone
    {FALSE, TRUE},                                          //!< aboRng_DeltaArmInLowerZone[2]
    FALSE,                                                  //!< boDef_DeltaArmInLowerZone
    {0xffff, 1042, TINT16, DB_VAR},                         //!< tInf_ArrowArmAngularSensor
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_ArrowArmAngularSensor[2]
    I16_UNDEF,                                              //!< i16Def_ArrowArmAngularSensor
    {0xffff, 1124, TBOOLEAN, DB_VAR},                       //!< tInf_TurretInRearCenterPos
    {FALSE, TRUE},                                          //!< aboRng_TurretInRearCenterPos[2]
    FALSE,                                                  //!< boDef_TurretInRearCenterPos
    {0xffff, 1125, TBOOLEAN, DB_VAR},                       //!< tInf_TurretInFrontCenterPos
    {FALSE, TRUE},                                          //!< aboRng_TurretInFrontCenterPos[2]
    FALSE,                                                  //!< boDef_TurretInFrontCenterPos
    {0xffff, 1154, TBOOLEAN, DB_VAR},                       //!< tInf_FoldedDeltaArmZone
    {FALSE, TRUE},                                          //!< aboRng_FoldedDeltaArmZone[2]
    FALSE,                                                  //!< boDef_FoldedDeltaArmZone
    {0xffff, 1155, TBOOLEAN, DB_VAR},                       //!< tInf_FoldedArrowArmZone
    {FALSE, TRUE},                                          //!< aboRng_FoldedArrowArmZone[2]
    FALSE,                                                  //!< boDef_FoldedArrowArmZone
    {0xffff, 1180, TBOOLEAN, DB_VAR},                       //!< tInf_NoMovementIsDuring
    {FALSE, TRUE},                                          //!< aboRng_NoMovementIsDuring[2]
    FALSE,                                                  //!< boDef_NoMovementIsDuring
    {0xffff, 1177, TINT16, DB_VAR},                         //!< tInf_DeltaArmAngularSensor
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_DeltaArmAngularSensor[2]
    I16_UNDEF,                                              //!< i16Def_DeltaArmAngularSensor
    {0xffff, 1210, TBOOLEAN, DB_VAR},                       //!< tInf_FoldedMastMeasure
    {FALSE, TRUE},                                          //!< aboRng_FoldedMastMeasure[2]
    FALSE,                                                  //!< boDef_FoldedMastMeasure
    {0xffff, 1268, TINT16, DB_VAR},                         //!< tInf_Transmission1Pressure
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_Transmission1Pressure[2]
    I16_UNDEF,                                              //!< i16Def_Transmission1Pressure
    {0xffff, 1275, TINT16, DB_VAR},                         //!< tInf_Transmission2Pressure
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_Transmission2Pressure[2]
    I16_UNDEF,                                              //!< i16Def_Transmission2Pressure
    {0xffff, 1328, EDISTATE_TYPE, DB_VAR},                  //!< tInf_ActiveHelpState
    {GE_DI_OFF, GE_DI_UNDEF},                               //!< aeRng_ActiveHelpState[2]
    GE_DI_UNDEF,                                            //!< eDef_ActiveHelpState
    {0xffff, 1330, TBOOLEAN, DB_VAR},                       //!< tInf_BasketInCentrerPos
    {FALSE, TRUE},                                          //!< aboRng_BasketInCentrerPos[2]
    FALSE,                                                  //!< boDef_BasketInCentrerPos
    {0xffff, 1262, TBOOLEAN, DB_VAR},                       //!< tInf_StopAllMovementsNacellePost
    {FALSE, TRUE},                                          //!< aboRng_StopAllMovementsNacellePost[2]
    FALSE,                                                  //!< boDef_StopAllMovementsNacellePost
    {0xffff, 1339, TUINT16, DB_VAR},                        //!< tInf_EncodeurMastMeasureCentimeter
    {U16_MIN, U16_MAX},                                     //!< au16Rng_EncodeurMastMeasureCentimeter[2]
    U16_UNDEF,                                              //!< u16Def_EncodeurMastMeasureCentimeter
    {0xffff, 1401, TBOOLEAN, DB_VAR},                       //!< tInf_MastMeasureFonctionActive
    {FALSE, TRUE},                                          //!< aboRng_MastMeasureFonctionActive[2]
    FALSE,                                                  //!< boDef_MastMeasureFonctionActive
    {0xffff, 1340, TBOOLEAN, DB_VAR},                       //!< tInf_OutOfRangeTransmissionPressure
    {FALSE, TRUE},                                          //!< aboRng_OutOfRangeTransmissionPressure[2]
    FALSE,                                                  //!< boDef_OutOfRangeTransmissionPressure
    {0xffff, 1789, TBOOLEAN, DB_VAR},                       //!< tInf_Beacon
    {FALSE, TRUE},                                          //!< aboRng_Beacon[2]
    FALSE,                                                  //!< boDef_Beacon
    {0xffff, 1790, TBOOLEAN, DB_VAR},                       //!< tInf_MotorOn
    {FALSE, TRUE},                                          //!< aboRng_MotorOn[2]
    FALSE,                                                  //!< boDef_MotorOn
    {0xffff, 1791, TBOOLEAN, DB_VAR},                       //!< tInf_FaultLenghtSensor
    {FALSE, TRUE},                                          //!< aboRng_FaultLenghtSensor[2]
    FALSE,                                                  //!< boDef_FaultLenghtSensor
    {0xffff, 1792, TBOOLEAN, DB_VAR},                       //!< tInf_TurretSensorsFailures
    {FALSE, TRUE},                                          //!< aboRng_TurretSensorsFailures[2]
    FALSE,                                                  //!< boDef_TurretSensorsFailures
    {0xffff, 1798, TBOOLEAN, DB_VAR},                       //!< tInf_OptionWhiteLight15746
    {FALSE, TRUE},                                          //!< aboRng_OptionWhiteLight15746[2]
    FALSE,                                                  //!< boDef_OptionWhiteLight15746
    {0xffff, 1799, TBOOLEAN, DB_VAR},                       //!< tInf_SafeManSystem
    {FALSE, TRUE},                                          //!< aboRng_SafeManSystem[2]
    FALSE,                                                  //!< boDef_SafeManSystem
    {0xffff, 1830, TBOOLEAN, DB_VAR},                       //!< tInf_SlopeModeFromC1
    {FALSE, TRUE},                                          //!< aboRng_SlopeModeFromC1[2]
    FALSE,                                                  //!< boDef_SlopeModeFromC1
    {0xffff, 1907, TBOOLEAN, DB_VAR},                       //!< tInf_ColdOilTankTemperature
    {FALSE, TRUE},                                          //!< aboRng_ColdOilTankTemperature[2]
    FALSE,                                                  //!< boDef_ColdOilTankTemperature
    {0xffff, 1908, TBOOLEAN, DB_VAR},                       //!< tInf_ElectricMotorForbidden
    {FALSE, TRUE},                                          //!< aboRng_ElectricMotorForbidden[2]
    FALSE,                                                  //!< boDef_ElectricMotorForbidden
    {0xffff, 1909, TINT16, DB_VAR},                         //!< tInf_RpmMotorElectric
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_RpmMotorElectric[2]
    0,                                                      //!< i16Def_RpmMotorElectric
    {0xffff, 1973, TINT16, DB_VAR},                         //!< tInf_OilTankTemperatureValue
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_OilTankTemperatureValue[2]
    0,                                                      //!< i16Def_OilTankTemperatureValue
    {0xffff, 2001, TBOOLEAN, DB_VAR},                       //!< tInf_SocStopRegen
    {FALSE, TRUE},                                          //!< aboRng_SocStopRegen[2]
    FALSE,                                                  //!< boDef_SocStopRegen
    {0xffff, 2013, TBOOLEAN, DB_VAR},                       //!< tInf_GeneratorOn
    {FALSE, TRUE},                                          //!< aboRng_GeneratorOn[2]
    FALSE,                                                  //!< boDef_GeneratorOn
    {0xffff, 2014, TBOOLEAN, DB_VAR},                       //!< tInf_EvDevMvtsCmd
    {FALSE, TRUE},                                          //!< aboRng_EvDevMvtsCmd[2]
    FALSE,                                                  //!< boDef_EvDevMvtsCmd
    {0xffff, 2057, TBOOLEAN, DB_VAR},                       //!< tInf_TestElectricalFromC1
    {FALSE, TRUE},                                          //!< aboRng_TestElectricalFromC1[2]
    FALSE,                                                  //!< boDef_TestElectricalFromC1
    {0xffff, 2103, TBOOLEAN, DB_VAR},                       //!< tInf_AutoModeActivate
    {FALSE, TRUE},                                          //!< aboRng_AutoModeActivate[2]
    FALSE,                                                  //!< boDef_AutoModeActivate
    {0xffff, 2104, TBOOLEAN, DB_VAR},                       //!< tInf_SilenceModeActivate
    {FALSE, TRUE},                                          //!< aboRng_SilenceModeActivate[2]
    FALSE,                                                  //!< boDef_SilenceModeActivate
    {0xffff, 2105, TBOOLEAN, DB_VAR},                       //!< tInf_ForcingRegenlow
    {FALSE, TRUE},                                          //!< aboRng_ForcingRegenlow[2]
    FALSE,                                                  //!< boDef_ForcingRegenlow
    {0xffff, 2106, TBOOLEAN, DB_VAR},                       //!< tInf_ForcingRegenHigh
    {FALSE, TRUE},                                          //!< aboRng_ForcingRegenHigh[2]
    FALSE,                                                  //!< boDef_ForcingRegenHigh
    {0xffff, 2135, TBOOLEAN, DB_VAR},                       //!< tInf_EvBypassCommand
    {FALSE, TRUE},                                          //!< aboRng_EvBypassCommand[2]
    FALSE,                                                  //!< boDef_EvBypassCommand
    {0xffff, 2136, TINT16, DB_VAR},                         //!< tInf_MotorspeedCmdJ1939
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_MotorspeedCmdJ1939[2]
    0                                                       //!< i16Def_MotorspeedCmdJ1939
};

const TDbSetRamEcuCaliCmdC0 gDb_ctSetRamEcuCaliCmdC0=
{
    {0xffff, 756, TBOOLEAN, DB_VAR},                        //!< tInf_CalibTurretAngle
    {FALSE, TRUE},                                          //!< aboRng_CalibTurretAngle[2]
    FALSE,                                                  //!< boDef_CalibTurretAngle
    {0xffff, 967, TBOOLEAN, DB_VAR},                        //!< tInf_CalibTurretAngleIntermedaireBool
    {FALSE, TRUE},                                          //!< aboRng_CalibTurretAngleIntermedaireBool[2]
    FALSE,                                                  //!< boDef_CalibTurretAngleIntermedaireBool
    {0xffff, 916, TBOOLEAN, DB_VAR},                        //!< tInf_CalibSlopeLong
    {FALSE, TRUE},                                          //!< aboRng_CalibSlopeLong[2]
    FALSE,                                                  //!< boDef_CalibSlopeLong
    {0xffff, 917, TBOOLEAN, DB_VAR},                        //!< tInf_CalibSlopeTrans
    {FALSE, TRUE},                                          //!< aboRng_CalibSlopeTrans[2]
    FALSE,                                                  //!< boDef_CalibSlopeTrans
    {0xffff, 760, TBOOLEAN, DB_VAR},                        //!< tInf_SavedCalibrationListC0
    {FALSE, TRUE},                                          //!< aboRng_SavedCalibrationListC0[2]
    FALSE                                                   //!< boDef_SavedCalibrationListC0
};

const TDbSetNvParamSpeedMaxRail gDb_ctSetNvParamSpeedMaxRail=
{
    {0xfff4, 940, TINT16, DB_VAR},                          //!< tInf_AccesSiteSpeedForward
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_AccesSiteSpeedForward[2]
    10000,                                                  //!< i16Def_AccesSiteSpeedForward
    {0xfff4, 941, TINT16, DB_VAR},                          //!< tInf_HighSpeedForward
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_HighSpeedForward[2]
    8000,                                                   //!< i16Def_HighSpeedForward
    {0xfff4, 942, TINT16, DB_VAR},                          //!< tInf_LowSpeedForward
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_LowSpeedForward[2]
    6000,                                                   //!< i16Def_LowSpeedForward
    {0xfff4, 1211, TINT16, DB_VAR},                         //!< tInf_LowSpeedBrakeTestForward
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_LowSpeedBrakeTestForward[2]
    4000,                                                   //!< i16Def_LowSpeedBrakeTestForward
    {0xfff4, 944, TINT16, DB_VAR},                          //!< tInf_HighSpeedSlopeTresholdAbs
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_HighSpeedSlopeTresholdAbs[2]
    10,                                                     //!< i16Def_HighSpeedSlopeTresholdAbs
    {0xfff4, 1080, TINT16, DB_VAR},                         //!< tInf_HighSpeedSlopeTresholdHystRel
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_HighSpeedSlopeTresholdHystRel[2]
    2,                                                      //!< i16Def_HighSpeedSlopeTresholdHystRel
    {0xfff4, 945, TINT16, DB_VAR},                          //!< tInf_LowSpeedSlopeTresholdAbs
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_LowSpeedSlopeTresholdAbs[2]
    20,                                                     //!< i16Def_LowSpeedSlopeTresholdAbs
    {0xfff4, 1079, TINT16, DB_VAR},                         //!< tInf_LowSpeedSlopeTresholdHystRel
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_LowSpeedSlopeTresholdHystRel[2]
    2,                                                      //!< i16Def_LowSpeedSlopeTresholdHystRel
    {0xfff4, 951, TINT16, DB_VAR},                          //!< tInf_TurretLowSpeedTresholdRel
    {0, 900},                                               //!< ai16Rng_TurretLowSpeedTresholdRel[2]
    300,                                                    //!< i16Def_TurretLowSpeedTresholdRel
    {0xfff4, 952, TINT16, DB_VAR},                          //!< tInf_TurretLowSpeedTresholdHyst
    {0, 900},                                               //!< ai16Rng_TurretLowSpeedTresholdHyst[2]
    10,                                                     //!< i16Def_TurretLowSpeedTresholdHyst
    {0xfff4, 1134, TINT16, DB_VAR},                         //!< tInf_TurretRearCenterPos
    {-100, 100},                                            //!< ai16Rng_TurretRearCenterPos[2]
    0,                                                      //!< i16Def_TurretRearCenterPos
    {0xfff4, 1135, TINT16, DB_VAR},                         //!< tInf_TurretFrontPositiveCenterPos
    {1700, 1900},                                           //!< ai16Rng_TurretFrontPositiveCenterPos[2]
    1800,                                                   //!< i16Def_TurretFrontPositiveCenterPos
    {0xfff4, 1136, TINT16, DB_VAR},                         //!< tInf_TurretFrontNegativeCenterPos
    {-1900, -1700},                                         //!< ai16Rng_TurretFrontNegativeCenterPos[2]
    -1800,                                                  //!< i16Def_TurretFrontNegativeCenterPos
    {0xfff4, 445, TUINT16, DB_VAR},                         //!< tInf_LimitSpeedAccesSiteSpeed
    {U16_MIN, U16_MAX},                                     //!< au16Rng_LimitSpeedAccesSiteSpeed[2]
    17,                                                     //!< u16Def_LimitSpeedAccesSiteSpeed
    {0xfff4, 1331, TUINT16, DB_VAR},                        //!< tInf_LimitSpeedHighSpeed
    {U16_MIN, U16_MAX},                                     //!< au16Rng_LimitSpeedHighSpeed[2]
    10,                                                     //!< u16Def_LimitSpeedHighSpeed
    {0xfff4, 1332, TUINT16, DB_VAR},                        //!< tInf_LimitSpeedLowSpeed
    {U16_MIN, U16_MAX},                                     //!< au16Rng_LimitSpeedLowSpeed[2]
    5,                                                      //!< u16Def_LimitSpeedLowSpeed
    {0xfff4, 1333, TUINT16, DB_VAR},                        //!< tInf_LimitSpeedLowSpeedBrakeTest
    {U16_MIN, U16_MAX},                                     //!< au16Rng_LimitSpeedLowSpeedBrakeTest[2]
    3,                                                      //!< u16Def_LimitSpeedLowSpeedBrakeTest
    {0xfff4, 1365, TINT16, DB_VAR},                         //!< tInf_AccesSiteSpeedBackward
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_AccesSiteSpeedBackward[2]
    10000,                                                  //!< i16Def_AccesSiteSpeedBackward
    {0xfff4, 1366, TINT16, DB_VAR},                         //!< tInf_HighSpeedBackward
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_HighSpeedBackward[2]
    8000,                                                   //!< i16Def_HighSpeedBackward
    {0xfff4, 1367, TINT16, DB_VAR},                         //!< tInf_LowSpeedBackward
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_LowSpeedBackward[2]
    6000,                                                   //!< i16Def_LowSpeedBackward
    {0xfff4, 1368, TINT16, DB_VAR},                         //!< tInf_LowSpeedBrakeTestBackward
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_LowSpeedBrakeTestBackward[2]
    4000,                                                   //!< i16Def_LowSpeedBrakeTestBackward
    {0xfff4, 1372, TINT16, DB_VAR},                         //!< tInf_TestBrakeSpeedForward
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_TestBrakeSpeedForward[2]
    4000,                                                   //!< i16Def_TestBrakeSpeedForward
    {0xfff4, 1373, TINT16, DB_VAR},                         //!< tInf_TestBrakeSpeedBackward
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_TestBrakeSpeedBackward[2]
    4000,                                                   //!< i16Def_TestBrakeSpeedBackward
    {0xfff4, 1377, TINT16, DB_VAR},                         //!< tInf_BreakeInBrakeSpeedForward
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_BreakeInBrakeSpeedForward[2]
    5000,                                                   //!< i16Def_BreakeInBrakeSpeedForward
    {0xfff4, 1378, TINT16, DB_VAR},                         //!< tInf_BreakeInBrakeSpeedBackward
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_BreakeInBrakeSpeedBackward[2]
    5000,                                                   //!< i16Def_BreakeInBrakeSpeedBackward
    {0xfff4, 1599, TINT16, DB_VAR},                         //!< tInf_ArmSpeedRailHyst
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_ArmSpeedRailHyst[2]
    100,                                                    //!< i16Def_ArmSpeedRailHyst
    {0xfff4, 1600, TINT16, DB_VAR},                         //!< tInf_ArmLowSectorBasketFaultThres
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_ArmLowSectorBasketFaultThres[2]
    500,                                                    //!< i16Def_ArmLowSectorBasketFaultThres
    {0xfff4, 1601, TINT16, DB_VAR},                         //!< tInf_ArmLowZoneForLowSpeed
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_ArmLowZoneForLowSpeed[2]
    4500,                                                   //!< i16Def_ArmLowZoneForLowSpeed
    {0xfff4, 1623, TINT16, DB_VAR},                         //!< tInf_TurretRearNegLowSpeedTreshold
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_TurretRearNegLowSpeedTreshold[2]
    0,                                                      //!< i16Def_TurretRearNegLowSpeedTreshold
    {0xfff4, 1624, TINT16, DB_VAR},                         //!< tInf_TurretRearPosLowSpeedTreshold
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_TurretRearPosLowSpeedTreshold[2]
    0,                                                      //!< i16Def_TurretRearPosLowSpeedTreshold
    {0xffff, 2023, TUINT16, DB_VAR},                        //!< tInf_Performance2DegSlopeThres
    {U16_MIN, U16_MAX},                                     //!< au16Rng_Performance2DegSlopeThres[2]
    20,                                                     //!< u16Def_Performance2DegSlopeThres
    {0xffff, 2024, TUINT16, DB_VAR},                        //!< tInf_Performance4DegSlopeThres
    {U16_MIN, U16_MAX},                                     //!< au16Rng_Performance4DegSlopeThres[2]
    40,                                                     //!< u16Def_Performance4DegSlopeThres
    {0xffff, 2025, TUINT16, DB_VAR},                        //!< tInf_Performance6DegSlopeThres
    {U16_MIN, U16_MAX},                                     //!< au16Rng_Performance6DegSlopeThres[2]
    60,                                                     //!< u16Def_Performance6DegSlopeThres
    {0xffff, 2026, TUINT16, DB_VAR},                        //!< tInf_PerformanceDegSlopeHyst
    {U16_MIN, U16_MAX},                                     //!< au16Rng_PerformanceDegSlopeHyst[2]
    1,                                                      //!< u16Def_PerformanceDegSlopeHyst
    {0xffff, 2027, TINT16, DB_VAR},                         //!< tInf_TurretPerfLowSpeedHystHigh
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_TurretPerfLowSpeedHystHigh[2]
    1,                                                      //!< i16Def_TurretPerfLowSpeedHystHigh
    {0xffff, 2028, TINT16, DB_VAR},                         //!< tInf_TurretPerformLowSpeed2Deg
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_TurretPerformLowSpeed2Deg[2]
    700,                                                    //!< i16Def_TurretPerformLowSpeed2Deg
    {0xffff, 2029, TINT16, DB_VAR},                         //!< tInf_TurretPerformLowSpeedBasketRot2
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_TurretPerformLowSpeedBasketRot2[2]
    1350,                                                   //!< i16Def_TurretPerformLowSpeedBasketRot2
    {0xffff, 2030, TINT16, DB_VAR},                         //!< tInf_TurretPerformLowSpeed4Deg
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_TurretPerformLowSpeed4Deg[2]
    150,                                                    //!< i16Def_TurretPerformLowSpeed4Deg
    {0xffff, 2031, TINT16, DB_VAR},                         //!< tInf_TurretPerfLowSpeedBasketRot4Deg
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_TurretPerfLowSpeedBasketRot4Deg[2]
    400,                                                    //!< i16Def_TurretPerfLowSpeedBasketRot4Deg
    {0xffff, 2032, TINT16, DB_VAR},                         //!< tInf_TurretPerformLowSpeed6Deg
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_TurretPerformLowSpeed6Deg[2]
    0,                                                      //!< i16Def_TurretPerformLowSpeed6Deg
    {0xffff, 2033, TINT16, DB_VAR},                         //!< tInf_TurretPerfLowSpeedBasketRot6Deg
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_TurretPerfLowSpeedBasketRot6Deg[2]
    150,                                                    //!< i16Def_TurretPerfLowSpeedBasketRot6Deg
    {0xffff, 2034, TUINT16, DB_VAR},                        //!< tInf_PreventLimitSpeedAccesSiteSpeed
    {U16_MIN, U16_MAX},                                     //!< au16Rng_PreventLimitSpeedAccesSiteSpeed[2]
    0,                                                      //!< u16Def_PreventLimitSpeedAccesSiteSpeed
    {0xffff, 2035, TUINT16, DB_VAR},                        //!< tInf_PreventLimitSpeedHighSpeed
    {U16_MIN, U16_MAX},                                     //!< au16Rng_PreventLimitSpeedHighSpeed[2]
    0,                                                      //!< u16Def_PreventLimitSpeedHighSpeed
    {0xffff, 2036, TUINT16, DB_VAR},                        //!< tInf_PreventLimitSpeedLowSpeed
    {U16_MIN, U16_MAX},                                     //!< au16Rng_PreventLimitSpeedLowSpeed[2]
    0,                                                      //!< u16Def_PreventLimitSpeedLowSpeed
    {0xffff, 2037, TUINT16, DB_VAR},                        //!< tInf_PreventSpeedLowSpeedBrakeTest
    {U16_MIN, U16_MAX},                                     //!< au16Rng_PreventSpeedLowSpeedBrakeTest[2]
    0                                                       //!< u16Def_PreventSpeedLowSpeedBrakeTest
};

const TDbSetRamSpeedMaxRail gDb_ctSetRamSpeedMaxRail=
{
    {0xffff, 946, TBOOLEAN, DB_VAR},                        //!< tInf_SlopeOverHighSpeedTresh
    {FALSE, TRUE},                                          //!< aboRng_SlopeOverHighSpeedTresh[2]
    FALSE,                                                  //!< boDef_SlopeOverHighSpeedTresh
    {0xffff, 953, TBOOLEAN, DB_VAR},                        //!< tInf_SlopeLowerLowSpeedTresh
    {FALSE, TRUE},                                          //!< aboRng_SlopeLowerLowSpeedTresh[2]
    FALSE,                                                  //!< boDef_SlopeLowerLowSpeedTresh
    {0xffff, 954, TBOOLEAN, DB_VAR},                        //!< tInf_TurretInLowSpeedRearZone
    {FALSE, TRUE},                                          //!< aboRng_TurretInLowSpeedRearZone[2]
    FALSE,                                                  //!< boDef_TurretInLowSpeedRearZone
    {0xffff, 955, TBOOLEAN, DB_VAR},                        //!< tInf_TurretInLowSpeedPosFrontZone
    {FALSE, TRUE},                                          //!< aboRng_TurretInLowSpeedPosFrontZone[2]
    FALSE,                                                  //!< boDef_TurretInLowSpeedPosFrontZone
    {0xffff, 956, TBOOLEAN, DB_VAR},                        //!< tInf_TurretInLowSpeedNegFrontZone
    {FALSE, TRUE},                                          //!< aboRng_TurretInLowSpeedNegFrontZone[2]
    FALSE,                                                  //!< boDef_TurretInLowSpeedNegFrontZone
    {0xffff, 957, TBOOLEAN, DB_VAR},                        //!< tInf_TurretInLowSpeedZone
    {FALSE, TRUE},                                          //!< aboRng_TurretInLowSpeedZone[2]
    FALSE,                                                  //!< boDef_TurretInLowSpeedZone
    {0xffff, 1137, TBOOLEAN, DB_VAR},                       //!< tInf_EnableSimuMode
    {FALSE, TRUE},                                          //!< aboRng_EnableSimuMode[2]
    FALSE,                                                  //!< boDef_EnableSimuMode
    {0xffff, 1138, TUINT16, DB_VAR},                        //!< tInf_SimuDevers
    {U16_MIN, U16_MAX},                                     //!< au16Rng_SimuDevers[2]
    0,                                                      //!< u16Def_SimuDevers
    {0xffff, 1139, TINT16, DB_VAR},                         //!< tInf_SimuTurretAngle
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_SimuTurretAngle[2]
    0,                                                      //!< i16Def_SimuTurretAngle
    {0xffff, 1140, TBOOLEAN, DB_VAR},                       //!< tInf_SimuAuthorizationWorkKey
    {FALSE, TRUE},                                          //!< aboRng_SimuAuthorizationWorkKey[2]
    FALSE,                                                  //!< boDef_SimuAuthorizationWorkKey
    {0xffff, 1141, EDISTATE_TYPE, DB_VAR},                  //!< tInf_SimuAbutmentTurretCentred
    {GE_DI_OFF, GE_DI_UNDEF},                               //!< aeRng_SimuAbutmentTurretCentred[2]
    GE_DI_OFF,                                              //!< eDef_SimuAbutmentTurretCentred
    {0xffff, 1142, EDISTATE_TYPE, DB_VAR},                  //!< tInf_SimuWorkKeyCentred
    {GE_DI_OFF, GE_DI_UNDEF},                               //!< aeRng_SimuWorkKeyCentred[2]
    GE_DI_OFF,                                              //!< eDef_SimuWorkKeyCentred
    {0xffff, 1143, TBOOLEAN, DB_VAR},                       //!< tInf_SimuTelescopeEntry
    {FALSE, TRUE},                                          //!< aboRng_SimuTelescopeEntry[2]
    FALSE,                                                  //!< boDef_SimuTelescopeEntry
    {0xffff, 1144, TBOOLEAN, DB_VAR},                       //!< tInf_SimuDeltaArmFoldedSensor
    {FALSE, TRUE},                                          //!< aboRng_SimuDeltaArmFoldedSensor[2]
    FALSE,                                                  //!< boDef_SimuDeltaArmFoldedSensor
    {0xffff, 1145, TBOOLEAN, DB_VAR},                       //!< tInf_SimuDeltaArmFoldedZone
    {FALSE, TRUE},                                          //!< aboRng_SimuDeltaArmFoldedZone[2]
    FALSE,                                                  //!< boDef_SimuDeltaArmFoldedZone
    {0xffff, 1146, TBOOLEAN, DB_VAR},                       //!< tInf_SimuArrowArmFoldedSensor
    {FALSE, TRUE},                                          //!< aboRng_SimuArrowArmFoldedSensor[2]
    FALSE,                                                  //!< boDef_SimuArrowArmFoldedSensor
    {0xffff, 1147, TBOOLEAN, DB_VAR},                       //!< tInf_SimuArrowArmFoldedZone
    {FALSE, TRUE},                                          //!< aboRng_SimuArrowArmFoldedZone[2]
    FALSE,                                                  //!< boDef_SimuArrowArmFoldedZone
    {0xffff, 1148, TBOOLEAN, DB_VAR},                       //!< tInf_SimuNacelleBasketLeftSideSensor1
    {FALSE, TRUE},                                          //!< aboRng_SimuNacelleBasketLeftSideSensor1[2]
    FALSE,                                                  //!< boDef_SimuNacelleBasketLeftSideSensor1
    {0xffff, 1149, TBOOLEAN, DB_VAR},                       //!< tInf_SimuNacelleBasketLeftSideSensor2
    {FALSE, TRUE},                                          //!< aboRng_SimuNacelleBasketLeftSideSensor2[2]
    FALSE,                                                  //!< boDef_SimuNacelleBasketLeftSideSensor2
    {0xffff, 1150, TBOOLEAN, DB_VAR},                       //!< tInf_SimuNacelleBasketRighSideSensor1
    {FALSE, TRUE},                                          //!< aboRng_SimuNacelleBasketRighSideSensor1[2]
    FALSE,                                                  //!< boDef_SimuNacelleBasketRighSideSensor1
    {0xffff, 1151, TBOOLEAN, DB_VAR},                       //!< tInf_SimuNacelleBasketRighSideSensor2
    {FALSE, TRUE},                                          //!< aboRng_SimuNacelleBasketRighSideSensor2[2]
    FALSE,                                                  //!< boDef_SimuNacelleBasketRighSideSensor2
    {0xffff, 1152, TBOOLEAN, DB_VAR},                       //!< tInf_SimuHighSectorPlateSensor
    {FALSE, TRUE},                                          //!< aboRng_SimuHighSectorPlateSensor[2]
    FALSE,                                                  //!< boDef_SimuHighSectorPlateSensor
    {0xffff, 1153, ERAILSPEEDMODE_TYPE, DB_VAR},            //!< tInf_RailSpeedMaxMode
    {GE_NO_SPEED_MAX_RAIL_MODE, GE_BREAK_IN_BRAKE_SPEED_RUNNING},//!< aeRng_RailSpeedMaxMode[2]
    GE_NO_SPEED_MAX_RAIL_MODE,                              //!< eDef_RailSpeedMaxMode
    {0xffff, 1156, TBOOLEAN, DB_VAR},                       //!< tInf_SimuDeltaArmInLowerZone
    {FALSE, TRUE},                                          //!< aboRng_SimuDeltaArmInLowerZone[2]
    FALSE,                                                  //!< boDef_SimuDeltaArmInLowerZone
    {0xffff, 1157, TBOOLEAN, DB_VAR},                       //!< tInf_SimuTurretInRearCenterPos
    {FALSE, TRUE},                                          //!< aboRng_SimuTurretInRearCenterPos[2]
    FALSE,                                                  //!< boDef_SimuTurretInRearCenterPos
    {0xffff, 1158, TBOOLEAN, DB_VAR},                       //!< tInf_SimuTurretInFrontCenterPos
    {FALSE, TRUE},                                          //!< aboRng_SimuTurretInFrontCenterPos[2]
    FALSE,                                                  //!< boDef_SimuTurretInFrontCenterPos
    {0xffff, 1334, TBOOLEAN, DB_VAR},                       //!< tInf_LimitSpeedAccesSiteSpeedExceeded
    {FALSE, TRUE},                                          //!< aboRng_LimitSpeedAccesSiteSpeedExceeded[2]
    FALSE,                                                  //!< boDef_LimitSpeedAccesSiteSpeedExceeded
    {0xffff, 1335, TBOOLEAN, DB_VAR},                       //!< tInf_LimitSpeedHighSpeedExceeded
    {FALSE, TRUE},                                          //!< aboRng_LimitSpeedHighSpeedExceeded[2]
    FALSE,                                                  //!< boDef_LimitSpeedHighSpeedExceeded
    {0xffff, 1336, TBOOLEAN, DB_VAR},                       //!< tInf_LimitSpeedLowSpeedExceeded
    {FALSE, TRUE},                                          //!< aboRng_LimitSpeedLowSpeedExceeded[2]
    FALSE,                                                  //!< boDef_LimitSpeedLowSpeedExceeded
    {0xffff, 1337, TBOOLEAN, DB_VAR},                       //!< tInf_LimitSpeedLowSpeedBrakeTestExced
    {FALSE, TRUE},                                          //!< aboRng_LimitSpeedLowSpeedBrakeTestExced[2]
    FALSE,                                                  //!< boDef_LimitSpeedLowSpeedBrakeTestExced
    {0xffff, 1338, TBOOLEAN, DB_VAR},                       //!< tInf_LitmitSpeedExceeded
    {FALSE, TRUE},                                          //!< aboRng_LitmitSpeedExceeded[2]
    FALSE,                                                  //!< boDef_LitmitSpeedExceeded
    {0xffff, 1604, TBOOLEAN, DB_VAR},                       //!< tInf_KinematicTrainAllow
    {FALSE, TRUE},                                          //!< aboRng_KinematicTrainAllow[2]
    FALSE,                                                  //!< boDef_KinematicTrainAllow
    {0xffff, 2038, TBOOLEAN, DB_VAR},                       //!< tInf_SlopeCaseLess2Deg
    {FALSE, TRUE},                                          //!< aboRng_SlopeCaseLess2Deg[2]
    FALSE,                                                  //!< boDef_SlopeCaseLess2Deg
    {0xffff, 2039, TBOOLEAN, DB_VAR},                       //!< tInf_SlopeCaseLess4Deg
    {FALSE, TRUE},                                          //!< aboRng_SlopeCaseLess4Deg[2]
    FALSE,                                                  //!< boDef_SlopeCaseLess4Deg
    {0xffff, 2040, TBOOLEAN, DB_VAR},                       //!< tInf_SlopeCaseLess6Deg
    {FALSE, TRUE},                                          //!< aboRng_SlopeCaseLess6Deg[2]
    FALSE,                                                  //!< boDef_SlopeCaseLess6Deg
    {0xffff, 2041, TBOOLEAN, DB_VAR},                       //!< tInf_SlopeCaseHigher6Deg
    {FALSE, TRUE},                                          //!< aboRng_SlopeCaseHigher6Deg[2]
    FALSE,                                                  //!< boDef_SlopeCaseHigher6Deg
    {0xffff, 2042, TBOOLEAN, DB_VAR},                       //!< tInf_TurretInSpeedZone2Deg
    {FALSE, TRUE},                                          //!< aboRng_TurretInSpeedZone2Deg[2]
    FALSE,                                                  //!< boDef_TurretInSpeedZone2Deg
    {0xffff, 2043, TBOOLEAN, DB_VAR},                       //!< tInf_TurretInSpeedZone4Deg
    {FALSE, TRUE},                                          //!< aboRng_TurretInSpeedZone4Deg[2]
    FALSE,                                                  //!< boDef_TurretInSpeedZone4Deg
    {0xffff, 2044, TBOOLEAN, DB_VAR},                       //!< tInf_TurretInSpeedZone6Deg
    {FALSE, TRUE},                                          //!< aboRng_TurretInSpeedZone6Deg[2]
    FALSE,                                                  //!< boDef_TurretInSpeedZone6Deg
    {0xffff, 2045, TBOOLEAN, DB_VAR},                       //!< tInf_TurretInSpeedZone2DegForBasket
    {FALSE, TRUE},                                          //!< aboRng_TurretInSpeedZone2DegForBasket[2]
    FALSE,                                                  //!< boDef_TurretInSpeedZone2DegForBasket
    {0xffff, 2046, TBOOLEAN, DB_VAR},                       //!< tInf_TurretInSpeedZone4DegForBasket
    {FALSE, TRUE},                                          //!< aboRng_TurretInSpeedZone4DegForBasket[2]
    FALSE,                                                  //!< boDef_TurretInSpeedZone4DegForBasket
    {0xffff, 2047, TBOOLEAN, DB_VAR},                       //!< tInf_TurretInSpeedZone6DegForBasket
    {FALSE, TRUE},                                          //!< aboRng_TurretInSpeedZone6DegForBasket[2]
    FALSE,                                                  //!< boDef_TurretInSpeedZone6DegForBasket
    {0xffff, 2048, TBOOLEAN, DB_VAR},                       //!< tInf_PreventLimitSpeedAccesSiteSpeed
    {FALSE, TRUE},                                          //!< aboRng_PreventLimitSpeedAccesSiteSpeed[2]
    FALSE,                                                  //!< boDef_PreventLimitSpeedAccesSiteSpeed
    {0xffff, 2049, TBOOLEAN, DB_VAR},                       //!< tInf_PreventLimitSpeedHighSpeed
    {FALSE, TRUE},                                          //!< aboRng_PreventLimitSpeedHighSpeed[2]
    FALSE,                                                  //!< boDef_PreventLimitSpeedHighSpeed
    {0xffff, 2050, TBOOLEAN, DB_VAR},                       //!< tInf_PreventLimitSpeedLowSpeed
    {FALSE, TRUE},                                          //!< aboRng_PreventLimitSpeedLowSpeed[2]
    FALSE,                                                  //!< boDef_PreventLimitSpeedLowSpeed
    {0xffff, 2051, TBOOLEAN, DB_VAR},                       //!< tInf_PreventLimitLowSpeedBrakeTest
    {FALSE, TRUE},                                          //!< aboRng_PreventLimitLowSpeedBrakeTest[2]
    FALSE,                                                  //!< boDef_PreventLimitLowSpeedBrakeTest
    {0xffff, 2052, TBOOLEAN, DB_VAR},                       //!< tInf_PreventLimitSpeedExceeding
    {FALSE, TRUE},                                          //!< aboRng_PreventLimitSpeedExceeding[2]
    FALSE,                                                  //!< boDef_PreventLimitSpeedExceeding
    {0xffff, 2053, TBOOLEAN, DB_VAR},                       //!< tInf_AuthoriseGlobalLowSpeed
    {FALSE, TRUE},                                          //!< aboRng_AuthoriseGlobalLowSpeed[2]
    FALSE                                                   //!< boDef_AuthoriseGlobalLowSpeed
};

const TDbSetNvParamBrakeTest gDb_ctSetNvParamBrakeTest=
{
    {0xfff4, 979, TUINT16, DB_VAR},                         //!< tInf_NCycleNeedBrakeTest
    {U16_MIN, U16_MAX},                                     //!< au16Rng_NCycleNeedBrakeTest[2]
    50,                                                     //!< u16Def_NCycleNeedBrakeTest
    {0xfff4, 968, TUINT16, DB_VAR},                         //!< tInf_NCyclesBrakeCritical
    {U16_MIN, U16_MAX},                                     //!< au16Rng_NCyclesBrakeCritical[2]
    10,                                                     //!< u16Def_NCyclesBrakeCritical
    {0xfff4, 969, TUINT16, DB_VAR},                         //!< tInf_SpeedMinTreshIncrBrakeCycles
    {U16_MIN, U16_MAX},                                     //!< au16Rng_SpeedMinTreshIncrBrakeCycles[2]
    100,                                                    //!< u16Def_SpeedMinTreshIncrBrakeCycles
    {0xfff4, 970, TUINT16, DB_VAR},                         //!< tInf_PressureOsciServiceBrakeTresh
    {U16_MIN, U16_MAX},                                     //!< au16Rng_PressureOsciServiceBrakeTresh[2]
    1500,                                                   //!< u16Def_PressureOsciServiceBrakeTresh
    {0xfff4, 971, TUINT16, DB_VAR},                         //!< tInf_PressureFixeServiceBrakeTresh
    {U16_MIN, U16_MAX},                                     //!< au16Rng_PressureFixeServiceBrakeTresh[2]
    2000,                                                   //!< u16Def_PressureFixeServiceBrakeTresh
    {0xfff4, 973, TUINT16, DB_VAR},                         //!< tInf_PressureOsciParkingBrakeTresh
    {U16_MIN, U16_MAX},                                     //!< au16Rng_PressureOsciParkingBrakeTresh[2]
    1600,                                                   //!< u16Def_PressureOsciParkingBrakeTresh
    {0xfff4, 974, TUINT16, DB_VAR},                         //!< tInf_PressureFixeParkingBrakeTresh
    {U16_MIN, U16_MAX},                                     //!< au16Rng_PressureFixeParkingBrakeTresh[2]
    2100,                                                   //!< u16Def_PressureFixeParkingBrakeTresh
    {0xfff4, 975, TUINT16, DB_VAR},                         //!< tInf_TimeOsciSerivceBrakeMs
    {U16_MIN, U16_MAX},                                     //!< au16Rng_TimeOsciSerivceBrakeMs[2]
    5000,                                                   //!< u16Def_TimeOsciSerivceBrakeMs
    {0xfff4, 972, TUINT16, DB_VAR},                         //!< tInf_TimeFixeSerivceBrakeMs
    {U16_MIN, U16_MAX},                                     //!< au16Rng_TimeFixeSerivceBrakeMs[2]
    10000,                                                  //!< u16Def_TimeFixeSerivceBrakeMs
    {0xfff4, 976, TUINT16, DB_VAR},                         //!< tInf_TimeOsciParkingBrakeMs
    {U16_MIN, U16_MAX},                                     //!< au16Rng_TimeOsciParkingBrakeMs[2]
    7000,                                                   //!< u16Def_TimeOsciParkingBrakeMs
    {0xfff4, 977, TUINT16, DB_VAR},                         //!< tInf_TimeFixeParkingBrakeMs
    {U16_MIN, U16_MAX},                                     //!< au16Rng_TimeFixeParkingBrakeMs[2]
    15000,                                                  //!< u16Def_TimeFixeParkingBrakeMs
    {0xfff4, 978, TUINT16, DB_VAR},                         //!< tInf_SpeedMinBrakeTestRunning
    {U16_MIN, U16_MAX},                                     //!< au16Rng_SpeedMinBrakeTestRunning[2]
    300,                                                    //!< u16Def_SpeedMinBrakeTestRunning
    {0xfff4, 1374, TUINT32, DB_VAR},                        //!< tInf_ValidCondiEnableTestBrakeTime
    {U32_MIN, U32_MAX},                                     //!< au32Rng_ValidCondiEnableTestBrakeTime[2]
    3000U,                                                  //!< u32Def_ValidCondiEnableTestBrakeTime
    {0xfff4, 1603, TUINT8, DB_VAR},                         //!< tInf_NbElementDeltaTransmPressure
    {U8_MIN, U8_MAX},                                       //!< au8Rng_NbElementDeltaTransmPressure[2]
    100,                                                    //!< u8Def_NbElementDeltaTransmPressure
    {0xfff4, 1813, TUINT16, DB_VAR},                        //!< tInf_NCycleNeed2ndParkBrake
    {U16_MIN, U16_MAX},                                     //!< au16Rng_NCycleNeed2ndParkBrake[2]
    0,                                                      //!< u16Def_NCycleNeed2ndParkBrake
    {0xfff4, 1814, TUINT16, DB_VAR},                        //!< tInf_NCycles2ndBrakeCritical
    {U16_MIN, U16_MAX},                                     //!< au16Rng_NCycles2ndBrakeCritical[2]
    0,                                                      //!< u16Def_NCycles2ndBrakeCritical
    {0xfff4, 1815, TUINT16, DB_VAR},                        //!< tInf_TimeOsci2ndParkingBrakeMs
    {U16_MIN, U16_MAX},                                     //!< au16Rng_TimeOsci2ndParkingBrakeMs[2]
    0,                                                      //!< u16Def_TimeOsci2ndParkingBrakeMs
    {0xfff4, 1816, TUINT16, DB_VAR},                        //!< tInf_TimeFixe2ndParkingBrakeMs
    {U16_MIN, U16_MAX},                                     //!< au16Rng_TimeFixe2ndParkingBrakeMs[2]
    0,                                                      //!< u16Def_TimeFixe2ndParkingBrakeMs
    {0xffff, 2019, TUINT16, DB_VAR},                        //!< tInf_ThresCpt2ndParkBrake
    {U16_MIN, U16_MAX},                                     //!< au16Rng_ThresCpt2ndParkBrake[2]
    0,                                                      //!< u16Def_ThresCpt2ndParkBrake
    {0xffff, 2018, TUINT16, DB_VAR},                        //!< tInf_MinThresholdActive2ndParkBrake
    {U16_MIN, U16_MAX},                                     //!< au16Rng_MinThresholdActive2ndParkBrake[2]
    0                                                       //!< u16Def_MinThresholdActive2ndParkBrake
};

const TDbSetRamBrakeTest gDb_ctSetRamBrakeTest=
{
    {0xffff, 980, TBOOLEAN, DB_VAR},                        //!< tInf_ForbidCameraDisplay
    {FALSE, TRUE},                                          //!< aboRng_ForbidCameraDisplay[2]
    FALSE,                                                  //!< boDef_ForbidCameraDisplay
    {0xffff, 981, TUINT16, DB_VAR},                         //!< tInf_PressureEfficiencyRate
    {U16_MIN, U16_MAX},                                     //!< au16Rng_PressureEfficiencyRate[2]
    0,                                                      //!< u16Def_PressureEfficiencyRate
    {0xffff, 1230, EBRAKETESTSELECTED_TYPE, DB_VAR},        //!< tInf_BrakeTestSelected
    {GE_OSCI_SERVICE_BRAKE, GE_OSCI_2ND_PARKING_BRAKE},     //!< aeRng_BrakeTestSelected[2]
    GE_NO_BRAKE,                                            //!< eDef_BrakeTestSelected
    {0xffff, 1231, TBOOLEAN, DB_VAR},                       //!< tInf_NeedTestBrake
    {FALSE, TRUE},                                          //!< aboRng_NeedTestBrake[2]
    FALSE,                                                  //!< boDef_NeedTestBrake
    {0xffff, 1232, TBOOLEAN, DB_VAR},                       //!< tInf_CycleBrakeOverCriticalNumber
    {FALSE, TRUE},                                          //!< aboRng_CycleBrakeOverCriticalNumber[2]
    FALSE,                                                  //!< boDef_CycleBrakeOverCriticalNumber
    {0xffff, 1233, TBOOLEAN, DB_VAR},                       //!< tInf_UpPositionAxles
    {FALSE, TRUE},                                          //!< aboRng_UpPositionAxles[2]
    FALSE,                                                  //!< boDef_UpPositionAxles
    {0xffff, 1234, TBOOLEAN, DB_VAR},                       //!< tInf_DownPositionAxles
    {FALSE, TRUE},                                          //!< aboRng_DownPositionAxles[2]
    FALSE,                                                  //!< boDef_DownPositionAxles
    {0xffff, 1235, TBOOLEAN, DB_VAR},                       //!< tInf_IncoherencePosAxleAndTestMode
    {FALSE, TRUE},                                          //!< aboRng_IncoherencePosAxleAndTestMode[2]
    FALSE,                                                  //!< boDef_IncoherencePosAxleAndTestMode
    {0xffff, 1236, TBOOLEAN, DB_VAR},                       //!< tInf_TestBrakeInOffrailMode
    {FALSE, TRUE},                                          //!< aboRng_TestBrakeInOffrailMode[2]
    FALSE,                                                  //!< boDef_TestBrakeInOffrailMode
    {0xffff, 1237, TBOOLEAN, DB_VAR},                       //!< tInf_BrakeTestRunning
    {FALSE, TRUE},                                          //!< aboRng_BrakeTestRunning[2]
    FALSE,                                                  //!< boDef_BrakeTestRunning
    {0xffff, 1238, TBOOLEAN, DB_VAR},                       //!< tInf_ValidBrakeTest
    {FALSE, TRUE},                                          //!< aboRng_ValidBrakeTest[2]
    FALSE,                                                  //!< boDef_ValidBrakeTest
    {0xffff, 1239, TBOOLEAN, DB_VAR},                       //!< tInf_EnableIncrementCycleBrakePerform
    {FALSE, TRUE},                                          //!< aboRng_EnableIncrementCycleBrakePerform[2]
    FALSE,                                                  //!< boDef_EnableIncrementCycleBrakePerform
    {0xffff, 1240, TBOOLEAN, DB_VAR},                       //!< tInf_ValidOsciServiceBrakeTest
    {FALSE, TRUE},                                          //!< aboRng_ValidOsciServiceBrakeTest[2]
    FALSE,                                                  //!< boDef_ValidOsciServiceBrakeTest
    {0xffff, 1241, TBOOLEAN, DB_VAR},                       //!< tInf_ValidFixeServiceBrakeTest
    {FALSE, TRUE},                                          //!< aboRng_ValidFixeServiceBrakeTest[2]
    FALSE,                                                  //!< boDef_ValidFixeServiceBrakeTest
    {0xffff, 1242, TBOOLEAN, DB_VAR},                       //!< tInf_ValidOsciParkingBrakeTest
    {FALSE, TRUE},                                          //!< aboRng_ValidOsciParkingBrakeTest[2]
    FALSE,                                                  //!< boDef_ValidOsciParkingBrakeTest
    {0xffff, 1243, TBOOLEAN, DB_VAR},                       //!< tInf_ValidFixeParkingBrakeTest
    {FALSE, TRUE},                                          //!< aboRng_ValidFixeParkingBrakeTest[2]
    FALSE,                                                  //!< boDef_ValidFixeParkingBrakeTest
    {0xffff, 1244, TBOOLEAN, DB_VAR},                       //!< tInf_SimuOsciServiceBrakeSelect
    {FALSE, TRUE},                                          //!< aboRng_SimuOsciServiceBrakeSelect[2]
    FALSE,                                                  //!< boDef_SimuOsciServiceBrakeSelect
    {0xffff, 1245, TBOOLEAN, DB_VAR},                       //!< tInf_SimuFixeServiceBrakeSelect
    {FALSE, TRUE},                                          //!< aboRng_SimuFixeServiceBrakeSelect[2]
    FALSE,                                                  //!< boDef_SimuFixeServiceBrakeSelect
    {0xffff, 1246, TBOOLEAN, DB_VAR},                       //!< tInf_SimuOsciParkBrakeSelect
    {FALSE, TRUE},                                          //!< aboRng_SimuOsciParkBrakeSelect[2]
    FALSE,                                                  //!< boDef_SimuOsciParkBrakeSelect
    {0xffff, 1247, TBOOLEAN, DB_VAR},                       //!< tInf_SimuFixeParkBrakeSelect
    {FALSE, TRUE},                                          //!< aboRng_SimuFixeParkBrakeSelect[2]
    FALSE,                                                  //!< boDef_SimuFixeParkBrakeSelect
    {0xffff, 1248, TBOOLEAN, DB_VAR},                       //!< tInf_Simu2ServiceBrakesSelect
    {FALSE, TRUE},                                          //!< aboRng_Simu2ServiceBrakesSelect[2]
    FALSE,                                                  //!< boDef_Simu2ServiceBrakesSelect
    {0xffff, 1249, TBOOLEAN, DB_VAR},                       //!< tInf_Simu2ParkBrakesSelect
    {FALSE, TRUE},                                          //!< aboRng_Simu2ParkBrakesSelect[2]
    FALSE,                                                  //!< boDef_Simu2ParkBrakesSelect
    {0xffff, 1250, EPOSJOY_TYPE, DB_VAR},                   //!< tInf_RetainPosJoyAdvance
    {GE_AV_JOY, GE_AR_JOY},                                 //!< aeRng_RetainPosJoyAdvance[2]
    GE_NEU_JOY,                                             //!< eDef_RetainPosJoyAdvance
    {0xffff, 1251, EPOSJOY_TYPE, DB_VAR},                   //!< tInf_AcutalPosJoyAdvance
    {GE_AV_JOY, GE_AR_JOY},                                 //!< aeRng_AcutalPosJoyAdvance[2]
    GE_NEU_JOY,                                             //!< eDef_AcutalPosJoyAdvance
    {0xffff, 1252, TBOOLEAN, DB_VAR},                       //!< tInf_ForceOsciServiceBrake
    {FALSE, TRUE},                                          //!< aboRng_ForceOsciServiceBrake[2]
    FALSE,                                                  //!< boDef_ForceOsciServiceBrake
    {0xffff, 1253, TBOOLEAN, DB_VAR},                       //!< tInf_ForceFixeServiceBrake
    {FALSE, TRUE},                                          //!< aboRng_ForceFixeServiceBrake[2]
    FALSE,                                                  //!< boDef_ForceFixeServiceBrake
    {0xffff, 1254, TBOOLEAN, DB_VAR},                       //!< tInf_ForceOsciParkBrake
    {FALSE, TRUE},                                          //!< aboRng_ForceOsciParkBrake[2]
    FALSE,                                                  //!< boDef_ForceOsciParkBrake
    {0xffff, 1255, TBOOLEAN, DB_VAR},                       //!< tInf_ForceFixeParkBrake
    {FALSE, TRUE},                                          //!< aboRng_ForceFixeParkBrake[2]
    FALSE,                                                  //!< boDef_ForceFixeParkBrake
    {0xffff, 1256, TBOOLEAN, DB_VAR},                       //!< tInf_StopMovementByBrakeTest
    {FALSE, TRUE},                                          //!< aboRng_StopMovementByBrakeTest[2]
    FALSE,                                                  //!< boDef_StopMovementByBrakeTest
    {0xffff, 1257, TBOOLEAN, DB_VAR},                       //!< tInf_AuthorizeTransaltionRail
    {FALSE, TRUE},                                          //!< aboRng_AuthorizeTransaltionRail[2]
    FALSE,                                                  //!< boDef_AuthorizeTransaltionRail
    {0xffff, 1276, TINT16, DB_VAR},                         //!< tInf_DeltaTransmissionPressure
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_DeltaTransmissionPressure[2]
    I16_UNDEF,                                              //!< i16Def_DeltaTransmissionPressure
    {0xffff, 1375, TBOOLEAN, DB_VAR},                       //!< tInf_ValidConditionEnableTestBrake
    {FALSE, TRUE},                                          //!< aboRng_ValidConditionEnableTestBrake[2]
    FALSE,                                                  //!< boDef_ValidConditionEnableTestBrake
    {0xffff, 1376, TBOOLEAN, DB_VAR},                       //!< tInf_TimeOutValidCondition
    {FALSE, TRUE},                                          //!< aboRng_TimeOutValidCondition[2]
    FALSE,                                                  //!< boDef_TimeOutValidCondition
    {0xffff, 1753, TUINT8, DB_VAR},                         //!< tInf_PourcentCycleBrake
    {U8_MIN, U8_MAX},                                       //!< au8Rng_PourcentCycleBrake[2]
    0,                                                      //!< u8Def_PourcentCycleBrake
    {0xffff, 1802, TBOOLEAN, DB_VAR},                       //!< tInf_Force2ndParkBrakeFixe
    {FALSE, TRUE},                                          //!< aboRng_Force2ndParkBrakeFixe[2]
    FALSE,                                                  //!< boDef_Force2ndParkBrakeFixe
    {0xffff, 1803, TBOOLEAN, DB_VAR},                       //!< tInf_Force2ndParkBrakeOsci
    {FALSE, TRUE},                                          //!< aboRng_Force2ndParkBrakeOsci[2]
    FALSE,                                                  //!< boDef_Force2ndParkBrakeOsci
    {0xffff, 1804, TBOOLEAN, DB_VAR},                       //!< tInf_ValidOsci2ndParkBrakeTest
    {FALSE, TRUE},                                          //!< aboRng_ValidOsci2ndParkBrakeTest[2]
    FALSE,                                                  //!< boDef_ValidOsci2ndParkBrakeTest
    {0xffff, 1805, TBOOLEAN, DB_VAR},                       //!< tInf_ValidFixe2ndParkBrakeTest
    {FALSE, TRUE},                                          //!< aboRng_ValidFixe2ndParkBrakeTest[2]
    FALSE,                                                  //!< boDef_ValidFixe2ndParkBrakeTest
    {0xffff, 1806, TUINT8, DB_VAR},                         //!< tInf_PourcentCycle2ndParkBrake
    {U8_MIN, U8_MAX},                                       //!< au8Rng_PourcentCycle2ndParkBrake[2]
    0,                                                      //!< u8Def_PourcentCycle2ndParkBrake
    {0xffff, 1807, TBOOLEAN, DB_VAR},                       //!< tInf_NeedTest2ndParkBrake
    {FALSE, TRUE},                                          //!< aboRng_NeedTest2ndParkBrake[2]
    FALSE,                                                  //!< boDef_NeedTest2ndParkBrake
    {0xffff, 1808, TBOOLEAN, DB_VAR},                       //!< tInf_Cycle2ndParkBrakeCritical
    {FALSE, TRUE},                                          //!< aboRng_Cycle2ndParkBrakeCritical[2]
    FALSE,                                                  //!< boDef_Cycle2ndParkBrakeCritical
    {0xffff, 2020, TBOOLEAN, DB_VAR},                       //!< tInf_AddParkBrakeActive
    {FALSE, TRUE},                                          //!< aboRng_AddParkBrakeActive[2]
    FALSE,                                                  //!< boDef_AddParkBrakeActive
    {0xffff, 2021, TBOOLEAN, DB_VAR},                       //!< tInf_ParkBrake2ndPressureActive
    {FALSE, TRUE},                                          //!< aboRng_ParkBrake2ndPressureActive[2]
    FALSE                                                   //!< boDef_ParkBrake2ndPressureActive
};

const TDbSetNvParamRailWorkSafetyC0 gDb_ctSetNvParamRailWorkSafetyC0=
{
    {0xfff4, 985, TINT16, DB_VAR},                          //!< tInf_MinTurretAngleConsistALO
    {-3600, 0},                                             //!< ai16Rng_MinTurretAngleConsistALO[2]
    -900,                                                   //!< i16Def_MinTurretAngleConsistALO
    {0xfff4, 986, TINT16, DB_VAR},                          //!< tInf_MaxTurretAngleConsistALO
    {0, 3600},                                              //!< ai16Rng_MaxTurretAngleConsistALO[2]
    2700,                                                   //!< i16Def_MaxTurretAngleConsistALO
    {0xfff4, 1018, TINT16, DB_VAR},                         //!< tInf_MinTurretAngleConsistMultilane
    {-3600, 0},                                             //!< ai16Rng_MinTurretAngleConsistMultilane[2]
    -900,                                                   //!< i16Def_MinTurretAngleConsistMultilane
    {0xfff4, 1019, TINT16, DB_VAR},                         //!< tInf_MaxTurretAngleConsistMultilane
    {0, 3600},                                              //!< ai16Rng_MaxTurretAngleConsistMultilane[2]
    900,                                                    //!< i16Def_MaxTurretAngleConsistMultilane
    {0xfff4, 1020, TINT16, DB_VAR},                         //!< tInf_ALOTurretRearZoneThres
    {0, 900},                                               //!< ai16Rng_ALOTurretRearZoneThres[2]
    250,                                                    //!< i16Def_ALOTurretRearZoneThres
    {0xfff4, 1021, TINT16, DB_VAR},                         //!< tInf_ALOTurretRearZoneHyst
    {0, 900},                                               //!< ai16Rng_ALOTurretRearZoneHyst[2]
    10,                                                     //!< i16Def_ALOTurretRearZoneHyst
    {0xfff4, 1022, TINT16, DB_VAR},                         //!< tInf_ALOTurretRearZoneSlowThres
    {0, 900},                                               //!< ai16Rng_ALOTurretRearZoneSlowThres[2]
    50,                                                     //!< i16Def_ALOTurretRearZoneSlowThres
    {0xfff4, 1023, TINT16, DB_VAR},                         //!< tInf_ALOTurretFrontZoneThres
    {900, 1800},                                            //!< ai16Rng_ALOTurretFrontZoneThres[2]
    1550,                                                   //!< i16Def_ALOTurretFrontZoneThres
    {0xfff4, 1024, TINT16, DB_VAR},                         //!< tInf_ALOTurretFrontZoneHyst
    {-900, 0},                                              //!< ai16Rng_ALOTurretFrontZoneHyst[2]
    -10,                                                    //!< i16Def_ALOTurretFrontZoneHyst
    {0xfff4, 1025, TINT16, DB_VAR},                         //!< tInf_ALOTurretFrontZoneSlowThres
    {-900, 0},                                              //!< ai16Rng_ALOTurretFrontZoneSlowThres[2]
    -50,                                                    //!< i16Def_ALOTurretFrontZoneSlowThres
    {0xfff4, 1026, TINT16, DB_VAR},                         //!< tInf_ALOArrowLowerZoneThres
    {0, 18000},                                             //!< ai16Rng_ALOArrowLowerZoneThres[2]
    5000,                                                   //!< i16Def_ALOArrowLowerZoneThres
    {0xfff4, 1027, TINT16, DB_VAR},                         //!< tInf_ALOArrowLowerZoneHyst
    {0, 18000},                                             //!< ai16Rng_ALOArrowLowerZoneHyst[2]
    100,                                                    //!< i16Def_ALOArrowLowerZoneHyst
    {0xfff4, 1028, TINT16, DB_VAR},                         //!< tInf_ALOArrowLowerZoneSlowThres
    {0, 18000},                                             //!< ai16Rng_ALOArrowLowerZoneSlowThres[2]
    500,                                                    //!< i16Def_ALOArrowLowerZoneSlowThres
    {0xfff4, 412, TINT16, DB_VAR},                          //!< tInf_ALOTurretRearEndStopThres
    {-1900, 1900},                                          //!< ai16Rng_ALOTurretRearEndStopThres[2]
    10,                                                     //!< i16Def_ALOTurretRearEndStopThres
    {0xfff4, 413, TINT16, DB_VAR},                          //!< tInf_ALOTurretRearEndStopHyst
    {0, 900},                                               //!< ai16Rng_ALOTurretRearEndStopHyst[2]
    10,                                                     //!< i16Def_ALOTurretRearEndStopHyst
    {0xfff4, 424, TINT16, DB_VAR},                          //!< tInf_ALOTurretRearEndStopSlowThres
    {0, 900},                                               //!< ai16Rng_ALOTurretRearEndStopSlowThres[2]
    50,                                                     //!< i16Def_ALOTurretRearEndStopSlowThres
    {0xfff4, 600, TINT16, DB_VAR},                          //!< tInf_ALOTurretFrontEndStopThres
    {-1900, 1900},                                          //!< ai16Rng_ALOTurretFrontEndStopThres[2]
    1790,                                                   //!< i16Def_ALOTurretFrontEndStopThres
    {0xfff4, 602, TINT16, DB_VAR},                          //!< tInf_ALOTurretFrontEndStopHyst
    {-900, 0},                                              //!< ai16Rng_ALOTurretFrontEndStopHyst[2]
    -10,                                                    //!< i16Def_ALOTurretFrontEndStopHyst
    {0xfff4, 1041, TINT16, DB_VAR},                         //!< tInf_ALOTurretFrontEndStopSlowThres
    {-900, 0},                                              //!< ai16Rng_ALOTurretFrontEndStopSlowThres[2]
    -50,                                                    //!< i16Def_ALOTurretFrontEndStopSlowThres
    {0xfff4, 1086, TINT16, DB_VAR},                         //!< tInf_ALOTurretRearZoneStopThres
    {0, 900},                                               //!< ai16Rng_ALOTurretRearZoneStopThres[2]
    20,                                                     //!< i16Def_ALOTurretRearZoneStopThres
    {0xfff4, 1087, TINT16, DB_VAR},                         //!< tInf_ALOTurretRearZoneStopHyst
    {0, 900},                                               //!< ai16Rng_ALOTurretRearZoneStopHyst[2]
    10,                                                     //!< i16Def_ALOTurretRearZoneStopHyst
    {0xfff4, 1088, TINT16, DB_VAR},                         //!< tInf_ALOTurretFrontZoneStopThres
    {-900, 0},                                              //!< ai16Rng_ALOTurretFrontZoneStopThres[2]
    -20,                                                    //!< i16Def_ALOTurretFrontZoneStopThres
    {0xfff4, 1089, TINT16, DB_VAR},                         //!< tInf_ALOTurretFrontZoneStopHyst
    {-900, 0},                                              //!< ai16Rng_ALOTurretFrontZoneStopHyst[2]
    -10,                                                    //!< i16Def_ALOTurretFrontZoneStopHyst
    {0xfff4, 1090, TINT16, DB_VAR},                         //!< tInf_ALOArrowLowerZoneStopThres
    {0, 18000},                                             //!< ai16Rng_ALOArrowLowerZoneStopThres[2]
    200,                                                    //!< i16Def_ALOArrowLowerZoneStopThres
    {0xfff4, 1091, TINT16, DB_VAR},                         //!< tInf_ALOArrowLowerZoneStopHyst
    {0, 18000},                                             //!< ai16Rng_ALOArrowLowerZoneStopHyst[2]
    100                                                     //!< i16Def_ALOArrowLowerZoneStopHyst
};

const TDbSetRamRailWorkSafetyC0 gDb_ctSetRamRailWorkSafetyC0=
{
    {0xffff, 987, ERAILWORKMODE_TYPE, DB_VAR},              //!< tInf_RailWorkMode
    {GE_NO_RAIL_WORK_MODE, GE_MULTILANE_MODE},              //!< aeRng_RailWorkMode[2]
    GE_NO_RAIL_WORK_MODE,                                   //!< eDef_RailWorkMode
    {0xffff, 988, TBOOLEAN, DB_VAR},                        //!< tInf_WrongTurretAbutBilateralMode
    {FALSE, TRUE},                                          //!< aboRng_WrongTurretAbutBilateralMode[2]
    FALSE,                                                  //!< boDef_WrongTurretAbutBilateralMode
    {0xffff, 989, TBOOLEAN, DB_VAR},                        //!< tInf_WrongTurretAbutMultilaneMode
    {FALSE, TRUE},                                          //!< aboRng_WrongTurretAbutMultilaneMode[2]
    FALSE,                                                  //!< boDef_WrongTurretAbutMultilaneMode
    {0xffff, 990, TBOOLEAN, DB_VAR},                        //!< tInf_WrongTurretAbutALOMode
    {FALSE, TRUE},                                          //!< aboRng_WrongTurretAbutALOMode[2]
    FALSE,                                                  //!< boDef_WrongTurretAbutALOMode
    {0xffff, 991, TBOOLEAN, DB_VAR},                        //!< tInf_WrongBasketAbutBilateralMode
    {FALSE, TRUE},                                          //!< aboRng_WrongBasketAbutBilateralMode[2]
    FALSE,                                                  //!< boDef_WrongBasketAbutBilateralMode
    {0xffff, 992, TBOOLEAN, DB_VAR},                        //!< tInf_WrongBasketAbutMultilaneMode
    {FALSE, TRUE},                                          //!< aboRng_WrongBasketAbutMultilaneMode[2]
    FALSE,                                                  //!< boDef_WrongBasketAbutMultilaneMode
    {0xffff, 993, TBOOLEAN, DB_VAR},                        //!< tInf_WrongBasketAbutALOMode
    {FALSE, TRUE},                                          //!< aboRng_WrongBasketAbutALOMode[2]
    FALSE,                                                  //!< boDef_WrongBasketAbutALOMode
    {0xffff, 994, TBOOLEAN, DB_VAR},                        //!< tInf_WrongAbutments
    {FALSE, TRUE},                                          //!< aboRng_WrongAbutments[2]
    FALSE,                                                  //!< boDef_WrongAbutments
    {0xffff, 995, TBOOLEAN, DB_VAR},                        //!< tInf_WrongTurretPosMultilaneMode
    {FALSE, TRUE},                                          //!< aboRng_WrongTurretPosMultilaneMode[2]
    FALSE,                                                  //!< boDef_WrongTurretPosMultilaneMode
    {0xffff, 996, TBOOLEAN, DB_VAR},                        //!< tInf_WrongBasketPosMultilaneMode
    {FALSE, TRUE},                                          //!< aboRng_WrongBasketPosMultilaneMode[2]
    FALSE,                                                  //!< boDef_WrongBasketPosMultilaneMode
    {0xffff, 997, TBOOLEAN, DB_VAR},                        //!< tInf_WrongTurretPosALOMode
    {FALSE, TRUE},                                          //!< aboRng_WrongTurretPosALOMode[2]
    FALSE,                                                  //!< boDef_WrongTurretPosALOMode
    {0xffff, 998, TBOOLEAN, DB_VAR},                        //!< tInf_WrongPosition
    {FALSE, TRUE},                                          //!< aboRng_WrongPosition[2]
    FALSE,                                                  //!< boDef_WrongPosition
    {0xffff, 999, TBOOLEAN, DB_VAR},                        //!< tInf_ReduceSpeedRotTurretClockwise
    {FALSE, TRUE},                                          //!< aboRng_ReduceSpeedRotTurretClockwise[2]
    FALSE,                                                  //!< boDef_ReduceSpeedRotTurretClockwise
    {0xffff, 1000, TBOOLEAN, DB_VAR},                       //!< tInf_ReduceSpeedRotTurretCounterClock
    {FALSE, TRUE},                                          //!< aboRng_ReduceSpeedRotTurretCounterClock[2]
    FALSE,                                                  //!< boDef_ReduceSpeedRotTurretCounterClock
    {0xffff, 1001, TBOOLEAN, DB_VAR},                       //!< tInf_ReduceSpeedArrowArmDown
    {FALSE, TRUE},                                          //!< aboRng_ReduceSpeedArrowArmDown[2]
    FALSE,                                                  //!< boDef_ReduceSpeedArrowArmDown
    {0xffff, 1002, TBOOLEAN, DB_VAR},                       //!< tInf_StopRotTurretClockwise
    {FALSE, TRUE},                                          //!< aboRng_StopRotTurretClockwise[2]
    FALSE,                                                  //!< boDef_StopRotTurretClockwise
    {0xffff, 1003, TBOOLEAN, DB_VAR},                       //!< tInf_StopRotTurretCounterClockwise
    {FALSE, TRUE},                                          //!< aboRng_StopRotTurretCounterClockwise[2]
    FALSE,                                                  //!< boDef_StopRotTurretCounterClockwise
    {0xffff, 1004, TBOOLEAN, DB_VAR},                       //!< tInf_StopRotBasketClockwise
    {FALSE, TRUE},                                          //!< aboRng_StopRotBasketClockwise[2]
    FALSE,                                                  //!< boDef_StopRotBasketClockwise
    {0xffff, 1005, TBOOLEAN, DB_VAR},                       //!< tInf_StopRotBasketCounterClockwise
    {FALSE, TRUE},                                          //!< aboRng_StopRotBasketCounterClockwise[2]
    FALSE,                                                  //!< boDef_StopRotBasketCounterClockwise
    {0xffff, 1006, TBOOLEAN, DB_VAR},                       //!< tInf_StopArrowArmDown
    {FALSE, TRUE},                                          //!< aboRng_StopArrowArmDown[2]
    FALSE,                                                  //!< boDef_StopArrowArmDown
    {0xffff, 1007, TBOOLEAN, DB_VAR},                       //!< tInf_StopTelescopeOut
    {FALSE, TRUE},                                          //!< aboRng_StopTelescopeOut[2]
    FALSE,                                                  //!< boDef_StopTelescopeOut
    {0xffff, 1008, TBOOLEAN, DB_VAR},                       //!< tInf_TurretInRearZone
    {FALSE, TRUE},                                          //!< aboRng_TurretInRearZone[2]
    FALSE,                                                  //!< boDef_TurretInRearZone
    {0xffff, 1009, TBOOLEAN, DB_VAR},                       //!< tInf_TurretInFrontZone
    {FALSE, TRUE},                                          //!< aboRng_TurretInFrontZone[2]
    FALSE,                                                  //!< boDef_TurretInFrontZone
    {0xffff, 1010, TBOOLEAN, DB_VAR},                       //!< tInf_ArrowArmInLowerZone
    {FALSE, TRUE},                                          //!< aboRng_ArrowArmInLowerZone[2]
    FALSE,                                                  //!< boDef_ArrowArmInLowerZone
    {0xffff, 1029, TBOOLEAN, DB_VAR},                       //!< tInf_TestFranceConfig
    {FALSE, TRUE},                                          //!< aboRng_TestFranceConfig[2]
    FALSE,                                                  //!< boDef_TestFranceConfig
    {0xffff, 1030, TBOOLEAN, DB_VAR},                       //!< tInf_TestAbutementBasketTrackSide
    {FALSE, TRUE},                                          //!< aboRng_TestAbutementBasketTrackSide[2]
    FALSE,                                                  //!< boDef_TestAbutementBasketTrackSide
    {0xffff, 1031, TBOOLEAN, DB_VAR},                       //!< tInf_TestAbutementBasketCenteredSide
    {FALSE, TRUE},                                          //!< aboRng_TestAbutementBasketCenteredSide[2]
    FALSE,                                                  //!< boDef_TestAbutementBasketCenteredSide
    {0xffff, 1032, TBOOLEAN, DB_VAR},                       //!< tInf_TestBasketLeftSideSensor
    {FALSE, TRUE},                                          //!< aboRng_TestBasketLeftSideSensor[2]
    FALSE,                                                  //!< boDef_TestBasketLeftSideSensor
    {0xffff, 1033, TBOOLEAN, DB_VAR},                       //!< tInf_TestBasketRightSideSensor
    {FALSE, TRUE},                                          //!< aboRng_TestBasketRightSideSensor[2]
    FALSE,                                                  //!< boDef_TestBasketRightSideSensor
    {0xffff, 1034, TBOOLEAN, DB_VAR},                       //!< tInf_TestTelescopInSensor
    {FALSE, TRUE},                                          //!< aboRng_TestTelescopInSensor[2]
    FALSE,                                                  //!< boDef_TestTelescopInSensor
    {0xffff, 1035, TINT16, DB_VAR},                         //!< tInf_TestTurretAngularPosition
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_TestTurretAngularPosition[2]
    0,                                                      //!< i16Def_TestTurretAngularPosition
    {0xffff, 1036, TINT16, DB_VAR},                         //!< tInf_TestArrowArmAngularPosition
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_TestArrowArmAngularPosition[2]
    0,                                                      //!< i16Def_TestArrowArmAngularPosition
    {0xffff, 1056, ERAILWORKMODE_TYPE, DB_VAR},             //!< tInf_AbutmentWorkMode
    {GE_NO_RAIL_WORK_MODE, GE_MULTILANE_MODE},              //!< aeRng_AbutmentWorkMode[2]
    GE_NO_RAIL_WORK_MODE                                    //!< eDef_AbutmentWorkMode
};

const TDbSetRamTransportPosC0 gDb_ctSetRamTransportPosC0=
{
    {0xffff, 1174, TBOOLEAN, DB_VAR},                       //!< tInf_DeltaOffRailTransportZone
    {FALSE, TRUE},                                          //!< aboRng_DeltaOffRailTransportZone[2]
    FALSE,                                                  //!< boDef_DeltaOffRailTransportZone
    {0xffff, 1228, TBOOLEAN, DB_VAR},                       //!< tInf_ArrowOffRailTransportZone
    {FALSE, TRUE},                                          //!< aboRng_ArrowOffRailTransportZone[2]
    FALSE,                                                  //!< boDef_ArrowOffRailTransportZone
    {0xffff, 1229, ETRANSPORTPOSITION_TYPE, DB_VAR},        //!< tInf_TransportPosition
    {GE_NO_TRANSPORT_POSITION, GE_RAIL_TRANSPORT_POSITION}, //!< aeRng_TransportPosition[2]
    GE_NO_TRANSPORT_POSITION                                //!< eDef_TransportPosition
};

const TDbSetNvParamTransportPosC0 gDb_ctSetNvParamTransportPosC0=
{
    {0xfff4, 1175, TINT16, DB_VAR},                         //!< tInf_DeltaArmTres
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_DeltaArmTres[2]
    1000,                                                   //!< i16Def_DeltaArmTres
    {0xfff4, 1176, TINT16, DB_VAR},                         //!< tInf_DeltaArmHyst
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_DeltaArmHyst[2]
    100,                                                    //!< i16Def_DeltaArmHyst
    {0xfff4, 1263, TINT16, DB_VAR},                         //!< tInf_ArrowArmThres
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_ArrowArmThres[2]
    0,                                                      //!< i16Def_ArrowArmThres
    {0xfff4, 1264, TINT16, DB_VAR},                         //!< tInf_ArrowArmHyst
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_ArrowArmHyst[2]
    100,                                                    //!< i16Def_ArrowArmHyst
    {0xfff4, 1361, TINT16, DB_VAR},                         //!< tInf_TurretAngleThres
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_TurretAngleThres[2]
    300                                                     //!< i16Def_TurretAngleThres
};

const TDbSetRamBreakInBrakeC0 gDb_ctSetRamBreakInBrakeC0=
{
    {0xffff, 1133, TBOOLEAN, DB_VAR},                       //!< tInf_BreakInBrakeOffRailMode
    {FALSE, TRUE},                                          //!< aboRng_BreakInBrakeOffRailMode[2]
    FALSE,                                                  //!< boDef_BreakInBrakeOffRailMode
    {0xffff, 1214, TBOOLEAN, DB_VAR},                       //!< tInf_ForceOsciServiceBrake
    {FALSE, TRUE},                                          //!< aboRng_ForceOsciServiceBrake[2]
    FALSE,                                                  //!< boDef_ForceOsciServiceBrake
    {0xffff, 1215, TBOOLEAN, DB_VAR},                       //!< tInf_ForceFixeServiceBrake
    {FALSE, TRUE},                                          //!< aboRng_ForceFixeServiceBrake[2]
    FALSE,                                                  //!< boDef_ForceFixeServiceBrake
    {0xffff, 1216, TBOOLEAN, DB_VAR},                       //!< tInf_ForceOsciParkBrake
    {FALSE, TRUE},                                          //!< aboRng_ForceOsciParkBrake[2]
    FALSE,                                                  //!< boDef_ForceOsciParkBrake
    {0xffff, 1217, TBOOLEAN, DB_VAR},                       //!< tInf_ForceFixeParkBrake
    {FALSE, TRUE},                                          //!< aboRng_ForceFixeParkBrake[2]
    FALSE,                                                  //!< boDef_ForceFixeParkBrake
    {0xffff, 1218, TBOOLEAN, DB_VAR},                       //!< tInf_StopMovementByBreakInBrake
    {FALSE, TRUE},                                          //!< aboRng_StopMovementByBreakInBrake[2]
    FALSE,                                                  //!< boDef_StopMovementByBreakInBrake
    {0xffff, 1219, TBOOLEAN, DB_VAR},                       //!< tInf_IncoherencePosAxleAndTestMode
    {FALSE, TRUE},                                          //!< aboRng_IncoherencePosAxleAndTestMode[2]
    FALSE,                                                  //!< boDef_IncoherencePosAxleAndTestMode
    {0xffff, 1220, TUINT16, DB_VAR},                        //!< tInf_AdvancementPeriod
    {U16_MIN, U16_MAX},                                     //!< au16Rng_AdvancementPeriod[2]
    0,                                                      //!< u16Def_AdvancementPeriod
    {0xffff, 1221, TBOOLEAN, DB_VAR},                       //!< tInf_BreakInBrakeRunning
    {FALSE, TRUE},                                          //!< aboRng_BreakInBrakeRunning[2]
    FALSE,                                                  //!< boDef_BreakInBrakeRunning
    {0xffff, 1222, TBOOLEAN, DB_VAR},                       //!< tInf_SimuOsciServiceBrakeSelect
    {FALSE, TRUE},                                          //!< aboRng_SimuOsciServiceBrakeSelect[2]
    FALSE,                                                  //!< boDef_SimuOsciServiceBrakeSelect
    {0xffff, 1223, TBOOLEAN, DB_VAR},                       //!< tInf_SimuFixeServiceBrakeSelect
    {FALSE, TRUE},                                          //!< aboRng_SimuFixeServiceBrakeSelect[2]
    FALSE,                                                  //!< boDef_SimuFixeServiceBrakeSelect
    {0xffff, 1224, TBOOLEAN, DB_VAR},                       //!< tInf_Simu2ServiceBrakesSelect
    {FALSE, TRUE},                                          //!< aboRng_Simu2ServiceBrakesSelect[2]
    FALSE,                                                  //!< boDef_Simu2ServiceBrakesSelect
    {0xffff, 1225, TBOOLEAN, DB_VAR},                       //!< tInf_AuthorizeTransRailByBreakInBrake
    {FALSE, TRUE},                                          //!< aboRng_AuthorizeTransRailByBreakInBrake[2]
    FALSE,                                                  //!< boDef_AuthorizeTransRailByBreakInBrake
    {0xffff, 1226, EBRAKETESTSELECTED_TYPE, DB_VAR},        //!< tInf_ServiceBrakeSelected
    {GE_OSCI_SERVICE_BRAKE, GE_OSCI_2ND_PARKING_BRAKE},     //!< aeRng_ServiceBrakeSelected[2]
    GE_NO_BRAKE,                                            //!< eDef_ServiceBrakeSelected
    {0xffff, 1227, TUINT16, DB_VAR},                        //!< tInf_AdvancementPeriodMs10
    {U16_MIN, U16_MAX},                                     //!< au16Rng_AdvancementPeriodMs10[2]
    0,                                                      //!< u16Def_AdvancementPeriodMs10
    {0xffff, 1614, TBOOLEAN, DB_VAR},                       //!< tInf_OsciServiceBrakinBrakeOn
    {FALSE, TRUE},                                          //!< aboRng_OsciServiceBrakinBrakeOn[2]
    FALSE,                                                  //!< boDef_OsciServiceBrakinBrakeOn
    {0xffff, 1615, TBOOLEAN, DB_VAR},                       //!< tInf_FixeServiceBrakinBrakeOn
    {FALSE, TRUE},                                          //!< aboRng_FixeServiceBrakinBrakeOn[2]
    FALSE,                                                  //!< boDef_FixeServiceBrakinBrakeOn
    {0xffff, 1616, TBOOLEAN, DB_VAR},                       //!< tInf_BothServiceBrakinBrakeOn
    {FALSE, TRUE},                                          //!< aboRng_BothServiceBrakinBrakeOn[2]
    FALSE                                                   //!< boDef_BothServiceBrakinBrakeOn
};

const TDbSetRamSelectControlPost gDb_ctSetRamSelectControlPost=
{
    {0xffff, 1292, ECONTROLPOST_TYPE, DB_VAR},              //!< tInf_SelectedControlPost
    {GE_POST_NO_POST, GE_POST_TURRET},                      //!< aeRng_SelectedControlPost[2]
    GE_POST_NO_POST,                                        //!< eDef_SelectedControlPost
    {0xffff, 1293, TBOOLEAN, DB_VAR},                       //!< tInf_EnableBuzzer
    {FALSE, TRUE},                                          //!< aboRng_EnableBuzzer[2]
    FALSE,                                                  //!< boDef_EnableBuzzer
    {0xffff, 1294, TBOOLEAN, DB_VAR},                       //!< tInf_SlopeIsLow
    {FALSE, TRUE},                                          //!< aboRng_SlopeIsLow[2]
    FALSE,                                                  //!< boDef_SlopeIsLow
    {0xffff, 1295, TBOOLEAN, DB_VAR},                       //!< tInf_SlopeIsHigh
    {FALSE, TRUE},                                          //!< aboRng_SlopeIsHigh[2]
    FALSE,                                                  //!< boDef_SlopeIsHigh
    {0xffff, 1296, TBOOLEAN, DB_VAR},                       //!< tInf_AllNacelleCommandsDisabled
    {FALSE, TRUE},                                          //!< aboRng_AllNacelleCommandsDisabled[2]
    FALSE,                                                  //!< boDef_AllNacelleCommandsDisabled
    {0xffff, 1297, TBOOLEAN, DB_VAR},                       //!< tInf_AllRadioCommandsDisabled
    {FALSE, TRUE},                                          //!< aboRng_AllRadioCommandsDisabled[2]
    FALSE,                                                  //!< boDef_AllRadioCommandsDisabled
    {0xffff, 1298, TBOOLEAN, DB_VAR},                       //!< tInf_AllTurretCommandsDisabled
    {FALSE, TRUE},                                          //!< aboRng_AllTurretCommandsDisabled[2]
    FALSE,                                                  //!< boDef_AllTurretCommandsDisabled
    {0xffff, 1299, TINT16, DB_VAR},                         //!< tInf_SimuSlope
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_SimuSlope[2]
    0,                                                      //!< i16Def_SimuSlope
    {0xffff, 1363, TBOOLEAN, DB_VAR},                       //!< tInf_AllConsigneAdvancementDisabled
    {FALSE, TRUE},                                          //!< aboRng_AllConsigneAdvancementDisabled[2]
    FALSE,                                                  //!< boDef_AllConsigneAdvancementDisabled
    {0xffff, 1387, TBOOLEAN, DB_VAR},                       //!< tInf_AuthorizedRadioElementsPosition
    {FALSE, TRUE},                                          //!< aboRng_AuthorizedRadioElementsPosition[2]
    FALSE                                                   //!< boDef_AuthorizedRadioElementsPosition
};

const TDbSetNvParamSelectControlPost gDb_ctSetNvParamSelectControlPost=
{
    {0xfff4, 1300, TINT16, DB_VAR},                         //!< tInf_SlopeLowThresAbs
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_SlopeLowThresAbs[2]
    40,                                                     //!< i16Def_SlopeLowThresAbs
    {0xfff4, 1301, TINT16, DB_VAR},                         //!< tInf_SlopeLowHystRel
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_SlopeLowHystRel[2]
    5,                                                      //!< i16Def_SlopeLowHystRel
    {0xfff4, 1302, TINT16, DB_VAR},                         //!< tInf_SlopeHighThresAbs
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_SlopeHighThresAbs[2]
    50,                                                     //!< i16Def_SlopeHighThresAbs
    {0xfff4, 1303, TINT16, DB_VAR},                         //!< tInf_SlopeHighHystRel
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_SlopeHighHystRel[2]
    -5,                                                     //!< i16Def_SlopeHighHystRel
    {0xfff4, 1596, TUINT16, DB_VAR},                        //!< tInf_SlopeCrawlerMaxTres
    {U16_MIN, U16_MAX},                                     //!< au16Rng_SlopeCrawlerMaxTres[2]
    250                                                     //!< u16Def_SlopeCrawlerMaxTres
};

const TDbSetRamEvision4C0 gDb_ctSetRamEvision4C0=
{
    {0xffff, 1313, TUINT8, DB_VAR},                         //!< tInf_LifeByte
    {U8_MIN, U8_MAX},                                       //!< au8Rng_LifeByte[2]
    0,                                                      //!< u8Def_LifeByte
    {0xffff, 1314, TBOOLEAN, DB_VAR},                       //!< tInf_gDelta_Arm_Move_Up
    {FALSE, TRUE},                                          //!< aboRng_gDelta_Arm_Move_Up[2]
    FALSE,                                                  //!< boDef_gDelta_Arm_Move_Up
    {0xffff, 1315, TBOOLEAN, DB_VAR},                       //!< tInf_gDelta_Arm_Move_Down
    {FALSE, TRUE},                                          //!< aboRng_gDelta_Arm_Move_Down[2]
    FALSE,                                                  //!< boDef_gDelta_Arm_Move_Down
    {0xffff, 1316, TBOOLEAN, DB_VAR},                       //!< tInf_gArrow_Move_Up
    {FALSE, TRUE},                                          //!< aboRng_gArrow_Move_Up[2]
    FALSE,                                                  //!< boDef_gArrow_Move_Up
    {0xffff, 1317, TBOOLEAN, DB_VAR},                       //!< tInf_gArrow_Move_Down
    {FALSE, TRUE},                                          //!< aboRng_gArrow_Move_Down[2]
    FALSE,                                                  //!< boDef_gArrow_Move_Down
    {0xffff, 1318, TBOOLEAN, DB_VAR},                       //!< tInf_gPendular_Move_Up
    {FALSE, TRUE},                                          //!< aboRng_gPendular_Move_Up[2]
    FALSE,                                                  //!< boDef_gPendular_Move_Up
    {0xffff, 1319, TBOOLEAN, DB_VAR},                       //!< tInf_gPendular_Move_Down
    {FALSE, TRUE},                                          //!< aboRng_gPendular_Move_Down[2]
    FALSE,                                                  //!< boDef_gPendular_Move_Down
    {0xffff, 1320, TBOOLEAN, DB_VAR},                       //!< tInf_gTelescope_Move_Out
    {FALSE, TRUE},                                          //!< aboRng_gTelescope_Move_Out[2]
    FALSE,                                                  //!< boDef_gTelescope_Move_Out
    {0xffff, 1321, TBOOLEAN, DB_VAR},                       //!< tInf_gTelescope_Move_In
    {FALSE, TRUE},                                          //!< aboRng_gTelescope_Move_In[2]
    FALSE,                                                  //!< boDef_gTelescope_Move_In
    {0xffff, 1322, TBOOLEAN, DB_VAR},                       //!< tInf_gBasket_Inclinaison_Move_Up
    {FALSE, TRUE},                                          //!< aboRng_gBasket_Inclinaison_Move_Up[2]
    FALSE,                                                  //!< boDef_gBasket_Inclinaison_Move_Up
    {0xffff, 1323, TBOOLEAN, DB_VAR},                       //!< tInf_gBasket_Inclinaison_Move_Down
    {FALSE, TRUE},                                          //!< aboRng_gBasket_Inclinaison_Move_Down[2]
    FALSE,                                                  //!< boDef_gBasket_Inclinaison_Move_Down
    {0xffff, 1324, TBOOLEAN, DB_VAR},                       //!< tInf_gTurret_Rotate_ClockWise
    {FALSE, TRUE},                                          //!< aboRng_gTurret_Rotate_ClockWise[2]
    FALSE,                                                  //!< boDef_gTurret_Rotate_ClockWise
    {0xffff, 1325, TBOOLEAN, DB_VAR},                       //!< tInf_gTurret_Rotate_Counter_ClockWise
    {FALSE, TRUE},                                          //!< aboRng_gTurret_Rotate_Counter_ClockWise[2]
    FALSE,                                                  //!< boDef_gTurret_Rotate_Counter_ClockWise
    {0xffff, 1326, TBOOLEAN, DB_VAR},                       //!< tInf_gBasket_Rotate_ClockWise
    {FALSE, TRUE},                                          //!< aboRng_gBasket_Rotate_ClockWise[2]
    FALSE,                                                  //!< boDef_gBasket_Rotate_ClockWise
    {0xffff, 1327, TBOOLEAN, DB_VAR},                       //!< tInf_gBasket_Rotate_Counter_ClockWise
    {FALSE, TRUE},                                          //!< aboRng_gBasket_Rotate_Counter_ClockWise[2]
    FALSE,                                                  //!< boDef_gBasket_Rotate_Counter_ClockWise
    {0xffff, 1438, TBOOLEAN, DB_VAR},                       //!< tInf_gKeyRpmSelect
    {FALSE, TRUE},                                          //!< aboRng_gKeyRpmSelect[2]
    FALSE,                                                  //!< boDef_gKeyRpmSelect
    {0xffff, 1439, TBOOLEAN, DB_VAR},                       //!< tInf_gKeyRpmOff
    {FALSE, TRUE},                                          //!< aboRng_gKeyRpmOff[2]
    FALSE,                                                  //!< boDef_gKeyRpmOff
    {0xffff, 1440, TBOOLEAN, DB_VAR},                       //!< tInf_gForcingWhiteRaillight
    {FALSE, TRUE},                                          //!< aboRng_gForcingWhiteRaillight[2]
    FALSE,                                                  //!< boDef_gForcingWhiteRaillight
    {0xffff, 1441, TBOOLEAN, DB_VAR},                       //!< tInf_gForcingNeons
    {FALSE, TRUE},                                          //!< aboRng_gForcingNeons[2]
    FALSE,                                                  //!< boDef_gForcingNeons
    {0xffff, 1442, TBOOLEAN, DB_VAR},                       //!< tInf_gKeyCalibMin
    {FALSE, TRUE},                                          //!< aboRng_gKeyCalibMin[2]
    FALSE,                                                  //!< boDef_gKeyCalibMin
    {0xffff, 1443, TBOOLEAN, DB_VAR},                       //!< tInf_gKeyCalibMax
    {FALSE, TRUE},                                          //!< aboRng_gKeyCalibMax[2]
    FALSE,                                                  //!< boDef_gKeyCalibMax
    {0xffff, 1444, TBOOLEAN, DB_VAR},                       //!< tInf_gKeyCalibValid
    {FALSE, TRUE},                                          //!< aboRng_gKeyCalibValid[2]
    FALSE,                                                  //!< boDef_gKeyCalibValid
    {0xffff, 1445, TUINT8, DB_VAR},                         //!< tInf_gElementChoice
    {U8_MIN, U8_MAX},                                       //!< au8Rng_gElementChoice[2]
    U8_MIN,                                                 //!< u8Def_gElementChoice
    {0xffff, 1554, TBOOLEAN, DB_VAR},                       //!< tInf_gKeyCalibMax2
    {FALSE, TRUE},                                          //!< aboRng_gKeyCalibMax2[2]
    FALSE,                                                  //!< boDef_gKeyCalibMax2
    {0xffff, 1555, TBOOLEAN, DB_VAR},                       //!< tInf_gKeySlopeLgReset
    {FALSE, TRUE},                                          //!< aboRng_gKeySlopeLgReset[2]
    FALSE,                                                  //!< boDef_gKeySlopeLgReset
    {0xffff, 1556, TBOOLEAN, DB_VAR},                       //!< tInf_gKeySlopeTrReset
    {FALSE, TRUE},                                          //!< aboRng_gKeySlopeTrReset[2]
    FALSE                                                   //!< boDef_gKeySlopeTrReset
};

const TDbSetNvParamAlarmC0 gDb_ctSetNvParamAlarmC0=
{
    {0xfff4, 215, TUINT16, DB_VAR},                         //!< tInf_TempTrackOverFaultThres
    {U16_MIN, U16_MAX},                                     //!< au16Rng_TempTrackOverFaultThres[2]
    0,                                                      //!< u16Def_TempTrackOverFaultThres
    {0xfff4, 218, TUINT16, DB_VAR},                         //!< tInf_TempRailOverFaultThres
    {U16_MIN, U16_MAX},                                     //!< au16Rng_TempRailOverFaultThres[2]
    0,                                                      //!< u16Def_TempRailOverFaultThres
    {0xfff4, 221, TUINT16, DB_VAR},                         //!< tInf_TempTrackOverAlarmThres
    {U16_MIN, U16_MAX},                                     //!< au16Rng_TempTrackOverAlarmThres[2]
    0,                                                      //!< u16Def_TempTrackOverAlarmThres
    {0xfff4, 224, TUINT16, DB_VAR},                         //!< tInf_TempRailOverAlarmThres
    {U16_MIN, U16_MAX},                                     //!< au16Rng_TempRailOverAlarmThres[2]
    0,                                                      //!< u16Def_TempRailOverAlarmThres
    {0xfff4, 1291, TUINT16, DB_VAR},                        //!< tInf_SpeedSensorsToleranceThres
    {U16_MIN, U16_MAX},                                     //!< au16Rng_SpeedSensorsToleranceThres[2]
    0,                                                      //!< u16Def_SpeedSensorsToleranceThres
    {0xfff4, 1354, TUINT16, DB_VAR},                        //!< tInf_SlopeLongToleranceThres
    {U16_MIN, U16_MAX},                                     //!< au16Rng_SlopeLongToleranceThres[2]
    0,                                                      //!< u16Def_SlopeLongToleranceThres
    {0xfff4, 1380, TUINT16, DB_VAR},                        //!< tInf_BlockOscillationAxlePressure
    {U16_MIN, U16_MAX},                                     //!< au16Rng_BlockOscillationAxlePressure[2]
    50,                                                     //!< u16Def_BlockOscillationAxlePressure
    {0xfff4, 1381, TUINT16, DB_VAR},                        //!< tInf_UnblockOscillationAxlePressure
    {U16_MIN, U16_MAX},                                     //!< au16Rng_UnblockOscillationAxlePressure[2]
    150,                                                    //!< u16Def_UnblockOscillationAxlePressure
    {0xfff4, 1384, TUINT16, DB_VAR},                        //!< tInf_MinServiceBrakeFaultPressure
    {U16_MIN, U16_MAX},                                     //!< au16Rng_MinServiceBrakeFaultPressure[2]
    0,                                                      //!< u16Def_MinServiceBrakeFaultPressure
    {0xfff4, 1385, TUINT16, DB_VAR},                        //!< tInf_MaxServiceBrakeFaultPressure
    {U16_MIN, U16_MAX},                                     //!< au16Rng_MaxServiceBrakeFaultPressure[2]
    500,                                                    //!< u16Def_MaxServiceBrakeFaultPressure
    {0xfff4, 1452, TUINT16, DB_VAR},                        //!< tInf_SlopeTransToleranceThres
    {U16_MIN, U16_MAX},                                     //!< au16Rng_SlopeTransToleranceThres[2]
    0,                                                      //!< u16Def_SlopeTransToleranceThres
    {0xfff4, 1455, TINT16, DB_VAR},                         //!< tInf_MinTransPressureWithoutHook
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_MinTransPressureWithoutHook[2]
    0,                                                      //!< i16Def_MinTransPressureWithoutHook
    {0xfff4, 1477, TUINT16, DB_VAR},                        //!< tInf_TurretSensorToleranceThres
    {U16_MIN, U16_MAX},                                     //!< au16Rng_TurretSensorToleranceThres[2]
    0,                                                      //!< u16Def_TurretSensorToleranceThres
    {0xfff4, 1735, TUINT8, DB_VAR},                         //!< tInf_MinAlarmJoyDeltaArmPrctBat
    {0, 100},                                               //!< au8Rng_MinAlarmJoyDeltaArmPrctBat[2]
    15,                                                     //!< u8Def_MinAlarmJoyDeltaArmPrctBat
    {0xfff4, 1736, TUINT8, DB_VAR},                         //!< tInf_MaxAlarmJoyDeltaArmPrctBat
    {0, 100},                                               //!< au8Rng_MaxAlarmJoyDeltaArmPrctBat[2]
    85,                                                     //!< u8Def_MaxAlarmJoyDeltaArmPrctBat
    {0xfff4, 1737, TUINT8, DB_VAR},                         //!< tInf_MinAlarmJoyArrowArmPrctBat
    {0, 100},                                               //!< au8Rng_MinAlarmJoyArrowArmPrctBat[2]
    15,                                                     //!< u8Def_MinAlarmJoyArrowArmPrctBat
    {0xfff4, 1738, TUINT8, DB_VAR},                         //!< tInf_MaxAlarmJoyArrowArmPrctBat
    {0, 100},                                               //!< au8Rng_MaxAlarmJoyArrowArmPrctBat[2]
    85,                                                     //!< u8Def_MaxAlarmJoyArrowArmPrctBat
    {0xfff4, 1739, TUINT8, DB_VAR},                         //!< tInf_MinAlarmJoyTelescopeArmPrctBat
    {0, 100},                                               //!< au8Rng_MinAlarmJoyTelescopeArmPrctBat[2]
    15,                                                     //!< u8Def_MinAlarmJoyTelescopeArmPrctBat
    {0xfff4, 1740, TUINT8, DB_VAR},                         //!< tInf_MaxAlarmJoyTelescopeArmPrctBat
    {0, 100},                                               //!< au8Rng_MaxAlarmJoyTelescopeArmPrctBat[2]
    85,                                                     //!< u8Def_MaxAlarmJoyTelescopeArmPrctBat
    {0xfff4, 1741, TUINT8, DB_VAR},                         //!< tInf_MinAlarmJoyRotTurretArmPrctBat
    {0, 100},                                               //!< au8Rng_MinAlarmJoyRotTurretArmPrctBat[2]
    15,                                                     //!< u8Def_MinAlarmJoyRotTurretArmPrctBat
    {0xfff4, 1742, TUINT8, DB_VAR},                         //!< tInf_MaxAlarmJoyRotTurretArmPrctBat
    {0, 100},                                               //!< au8Rng_MaxAlarmJoyRotTurretArmPrctBat[2]
    85,                                                     //!< u8Def_MaxAlarmJoyRotTurretArmPrctBat
    {0xfff4, 1743, TUINT8, DB_VAR},                         //!< tInf_MinAlarmJoyAdvancementPrctBat
    {0, 100},                                               //!< au8Rng_MinAlarmJoyAdvancementPrctBat[2]
    15,                                                     //!< u8Def_MinAlarmJoyAdvancementPrctBat
    {0xfff4, 1744, TUINT8, DB_VAR},                         //!< tInf_MaxAlarmJoyAdvancementPrctBat
    {0, 100},                                               //!< au8Rng_MaxAlarmJoyAdvancementPrctBat[2]
    85,                                                     //!< u8Def_MaxAlarmJoyAdvancementPrctBat
    {0xfff4, 1594, TUINT16, DB_VAR},                        //!< tInf_HystTempTrans
    {U16_MIN, U16_MAX},                                     //!< au16Rng_HystTempTrans[2]
    0,                                                      //!< u16Def_HystTempTrans
    {0xfff4, 1595, TUINT8, DB_VAR},                         //!< tInf_ReduceTrackSpeedPercent
    {U8_MIN, U8_MAX},                                       //!< au8Rng_ReduceTrackSpeedPercent[2]
    0,                                                      //!< u8Def_ReduceTrackSpeedPercent
    {0xfff4, 1818, TUINT16, DB_VAR},                        //!< tInf_CptPressureBrakeFaultMax
    {U16_MIN, U16_MAX},                                     //!< au16Rng_CptPressureBrakeFaultMax[2]
    100,                                                    //!< u16Def_CptPressureBrakeFaultMax
    {0xfff4, 1819, TBOOLEAN, DB_VAR},                       //!< tInf_BypassAlarmActiveC0
    {FALSE, TRUE},                                          //!< aboRng_BypassAlarmActiveC0[2]
    0,                                                      //!< boDef_BypassAlarmActiveC0
    {0xffff, 2006, TUINT16, DB_VAR},                        //!< tInf_TimeBypassFault
    {U16_MIN, U16_MAX},                                     //!< au16Rng_TimeBypassFault[2]
    25,                                                     //!< u16Def_TimeBypassFault
    {0xffff, 2142, TINT16, DB_VAR},                         //!< tInf_AU_THER_PRESSION_DEF_TRANS
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_AU_THER_PRESSION_DEF_TRANS[2]
    350,                                                    //!< i16Def_AU_THER_PRESSION_DEF_TRANS
    {0xffff, 2146, TINT16, DB_VAR},                         //!< tInf_AU_ELEC_PRESSION_DEF_DMC
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_AU_ELEC_PRESSION_DEF_DMC[2]
    50,                                                     //!< i16Def_AU_ELEC_PRESSION_DEF_DMC
    {0xffff, 2147, TUINT16, DB_VAR},                        //!< tInf_cptTimeDetectPumpTransMax
    {U16_MIN, U16_MAX},                                     //!< au16Rng_cptTimeDetectPumpTransMax[2]
    150,                                                    //!< u16Def_cptTimeDetectPumpTransMax
    {0xffff, 2148, TUINT16, DB_VAR},                        //!< tInf_cptTimeDetectPvgTransMax
    {U16_MIN, U16_MAX},                                     //!< au16Rng_cptTimeDetectPvgTransMax[2]
    150                                                     //!< u16Def_cptTimeDetectPvgTransMax
};

const TDbSetRamEcuAlarmC0 gDb_ctSetRamEcuAlarmC0=
{
    {0xffff, 1382, TBOOLEAN, DB_VAR},                       //!< tInf_RamEcuAlarmC0_1
    {FALSE, TRUE},                                          //!< aboRng_RamEcuAlarmC0_1[2]
    FALSE,                                                  //!< boDef_RamEcuAlarmC0_1
    {0xffff, 2200, TBOOLEAN, DB_VAR},                       //!< tInf_FaultPumpTrans
    {FALSE, TRUE},                                          //!< aboRng_FaultPumpTrans[2]
    FALSE,                                                  //!< boDef_FaultPumpTrans
    {0xffff, 2201, TBOOLEAN, DB_VAR},                       //!< tInf_TimeDetectPumpTrans
    {FALSE, TRUE},                                          //!< aboRng_TimeDetectPumpTrans[2]
    FALSE,                                                  //!< boDef_TimeDetectPumpTrans
    {0xffff, 2202, TBOOLEAN, DB_VAR},                       //!< tInf_MemFaultThermicPumpTrans
    {FALSE, TRUE},                                          //!< aboRng_MemFaultThermicPumpTrans[2]
    FALSE,                                                  //!< boDef_MemFaultThermicPumpTrans
    {0xffff, 2203, TBOOLEAN, DB_VAR},                       //!< tInf_FaultPvgTransElectric
    {FALSE, TRUE},                                          //!< aboRng_FaultPvgTransElectric[2]
    FALSE,                                                  //!< boDef_FaultPvgTransElectric
    {0xffff, 2204, TBOOLEAN, DB_VAR},                       //!< tInf_TimeDetectPvgTrans
    {FALSE, TRUE},                                          //!< aboRng_TimeDetectPvgTrans[2]
    FALSE,                                                  //!< boDef_TimeDetectPvgTrans
    {0xffff, 2205, TBOOLEAN, DB_VAR},                       //!< tInf_MemFaultDMCTransElectric
    {FALSE, TRUE},                                          //!< aboRng_MemFaultDMCTransElectric[2]
    FALSE,                                                  //!< boDef_MemFaultDMCTransElectric
    {0xffff, 2206, TBOOLEAN, DB_VAR},                       //!< tInf_FaultThermicPumpOrElecticDmc
    {FALSE, TRUE},                                          //!< aboRng_FaultThermicPumpOrElecticDmc[2]
    FALSE                                                   //!< boDef_FaultThermicPumpOrElecticDmc
};

const TDbSetRamEcuC0RcvFailluresFromC1 gDb_ctSetRamEcuC0RcvFailluresFromC1=
{
    {0xffff, 1353, TBOOLEAN, DB_VAR},                       //!< tInf_Dm_Inc_Pos_Folded_Delta_Arrow
    {FALSE, TRUE},                                          //!< aboRng_Dm_Inc_Pos_Folded_Delta_Arrow[2]
    FALSE,                                                  //!< boDef_Dm_Inc_Pos_Folded_Delta_Arrow
    {0xffff, 1359, TBOOLEAN, DB_VAR},                       //!< tInf_Dm_Active_Help
    {FALSE, TRUE},                                          //!< aboRng_Dm_Active_Help[2]
    FALSE,                                                  //!< boDef_Dm_Active_Help
    {0xffff, 1379, TBOOLEAN, DB_VAR},                       //!< tInf_Dm_Ev_Bypass_Fault
    {FALSE, TRUE},                                          //!< aboRng_Dm_Ev_Bypass_Fault[2]
    FALSE,                                                  //!< boDef_Dm_Ev_Bypass_Fault
    {0xffff, 1456, TBOOLEAN, DB_VAR},                       //!< tInf_OutOfRangeTransmissionPressure
    {FALSE, TRUE},                                          //!< aboRng_OutOfRangeTransmissionPressure[2]
    FALSE,                                                  //!< boDef_OutOfRangeTransmissionPressure
    {0xffff, 1527, TBOOLEAN, DB_VAR},                       //!< tInf_Dm_Overload_Detected_By_C1
    {FALSE, TRUE},                                          //!< aboRng_Dm_Overload_Detected_By_C1[2]
    FALSE                                                   //!< boDef_Dm_Overload_Detected_By_C1
};

const TDbSetRamMastDisplayMeasureC0 gDb_ctSetRamMastDisplayMeasureC0=
{
    {0xffff, 1390, TUINT16, DB_VAR},                        //!< tInf_ErrorCodeInit
    {U16_MIN, U16_MAX},                                     //!< au16Rng_ErrorCodeInit[2]
    0,                                                      //!< u16Def_ErrorCodeInit
    {0xffff, 1391, TUINT16, DB_VAR},                        //!< tInf_ErrorCodeWrite
    {U16_MIN, U16_MAX},                                     //!< au16Rng_ErrorCodeWrite[2]
    0,                                                      //!< u16Def_ErrorCodeWrite
    {0xffff, 1392, TUINT16, DB_VAR},                        //!< tInf_RetDataBytesSent
    {U16_MIN, U16_MAX},                                     //!< au16Rng_RetDataBytesSent[2]
    0,                                                      //!< u16Def_RetDataBytesSent
    {0xffff, 1393, TUINT8, DB_VAR},                         //!< tInf_DisplayedDigit1
    {U8_MIN, U8_MAX},                                       //!< au8Rng_DisplayedDigit1[2]
    0,                                                      //!< u8Def_DisplayedDigit1
    {0xffff, 1394, TUINT8, DB_VAR},                         //!< tInf_DisplayedDigit2
    {U8_MIN, U8_MAX},                                       //!< au8Rng_DisplayedDigit2[2]
    0,                                                      //!< u8Def_DisplayedDigit2
    {0xffff, 1395, TUINT8, DB_VAR},                         //!< tInf_DisplayedDigit3
    {U8_MIN, U8_MAX},                                       //!< au8Rng_DisplayedDigit3[2]
    0,                                                      //!< u8Def_DisplayedDigit3
    {0xffff, 1396, TUINT8, DB_VAR},                         //!< tInf_DisplayedDigit4
    {U8_MIN, U8_MAX},                                       //!< au8Rng_DisplayedDigit4[2]
    0,                                                      //!< u8Def_DisplayedDigit4
    {0xffff, 1397, TUINT8, 8},                              //!< tInf_SentDataArray
    {
        { U8_MIN, U8_MAX },                                 //!< aau8Rng_SentDataArray[0][2]
        { U8_MIN, U8_MAX },                                 //!< aau8Rng_SentDataArray[1][2]
        { U8_MIN, U8_MAX },                                 //!< aau8Rng_SentDataArray[2][2]
        { U8_MIN, U8_MAX },                                 //!< aau8Rng_SentDataArray[3][2]
        { U8_MIN, U8_MAX },                                 //!< aau8Rng_SentDataArray[4][2]
        { U8_MIN, U8_MAX },                                 //!< aau8Rng_SentDataArray[5][2]
        { U8_MIN, U8_MAX },                                 //!< aau8Rng_SentDataArray[6][2]
        { U8_MIN, U8_MAX }                                  //!< aau8Rng_SentDataArray[7][2]
    },
    {0, 0, 0, 0, 0, 0, 0, 0}                                //!< au8Def_SentDataArray[8]
};

const TDbSetNvParamMastDisplayC0 gDb_ctSetNvParamMastDisplayC0=
{
    {0xfff4, 1398, TUINT32, DB_VAR},                        //!< tInf_MastDisplayRefreshCycleTime
    {U32_MIN, U32_MAX},                                     //!< au32Rng_MastDisplayRefreshCycleTime[2]
    500U                                                    //!< u32Def_MastDisplayRefreshCycleTime
};

const TDbSetRamData4C0RcvFromC1 gDb_ctSetRamData4C0RcvFromC1=
{
    {0xffff, 1457, TBOOLEAN, DB_VAR},                       //!< tInf_NoMovementRunning
    {FALSE, TRUE},                                          //!< aboRng_NoMovementRunning[2]
    FALSE,                                                  //!< boDef_NoMovementRunning
    {0xffff, 1459, TBOOLEAN, DB_VAR},                       //!< tInf_StopMoveLimitEnvelop
    {FALSE, TRUE},                                          //!< aboRng_StopMoveLimitEnvelop[2]
    FALSE,                                                  //!< boDef_StopMoveLimitEnvelop
    {0xffff, 1460, TBOOLEAN, DB_VAR},                       //!< tInf_TransmissionPressureFault
    {FALSE, TRUE},                                          //!< aboRng_TransmissionPressureFault[2]
    FALSE,                                                  //!< boDef_TransmissionPressureFault
    {0xffff, 1461, TBOOLEAN, DB_VAR},                       //!< tInf_LynxOnAllMvts
    {FALSE, TRUE},                                          //!< aboRng_LynxOnAllMvts[2]
    FALSE,                                                  //!< boDef_LynxOnAllMvts
    {0xffff, 1462, TBOOLEAN, DB_VAR},                       //!< tInf_Signal_4
    {FALSE, TRUE},                                          //!< aboRng_Signal_4[2]
    FALSE,                                                  //!< boDef_Signal_4
    {0xffff, 1463, TBOOLEAN, DB_VAR},                       //!< tInf_Signal_5
    {FALSE, TRUE},                                          //!< aboRng_Signal_5[2]
    FALSE,                                                  //!< boDef_Signal_5
    {0xffff, 1464, TBOOLEAN, DB_VAR},                       //!< tInf_Signal_6
    {FALSE, TRUE},                                          //!< aboRng_Signal_6[2]
    FALSE,                                                  //!< boDef_Signal_6
    {0xffff, 1465, TBOOLEAN, DB_VAR},                       //!< tInf_Signal_7
    {FALSE, TRUE},                                          //!< aboRng_Signal_7[2]
    FALSE,                                                  //!< boDef_Signal_7
    {0xffff, 1466, TUINT8, DB_VAR},                         //!< tInf_Signal_8
    {U8_MIN, U8_MAX},                                       //!< au8Rng_Signal_8[2]
    0,                                                      //!< u8Def_Signal_8
    {0xffff, 1458, TINT16, DB_VAR},                         //!< tInf_BypassPressureSensorValue
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_BypassPressureSensorValue[2]
    0,                                                      //!< i16Def_BypassPressureSensorValue
    {0xffff, 1467, TINT16, DB_VAR},                         //!< tInf_Signal_10
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_Signal_10[2]
    0,                                                      //!< i16Def_Signal_10
    {0xffff, 1468, TINT16, DB_VAR},                         //!< tInf_Signal_11
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_Signal_11[2]
    0,                                                      //!< i16Def_Signal_11
    {0xffff, 2054, TBOOLEAN, DB_VAR},                       //!< tInf_PerformAutoriseTransArrow
    {FALSE, TRUE},                                          //!< aboRng_PerformAutoriseTransArrow[2]
    FALSE,                                                  //!< boDef_PerformAutoriseTransArrow
    {0xffff, 2055, TBOOLEAN, DB_VAR},                       //!< tInf_ValidTelescopeSectorSlope
    {FALSE, TRUE},                                          //!< aboRng_ValidTelescopeSectorSlope[2]
    FALSE,                                                  //!< boDef_ValidTelescopeSectorSlope
    {0xffff, 2056, TBOOLEAN, DB_VAR},                       //!< tInf_ValidTelescopeFirstSectorSlope
    {FALSE, TRUE},                                          //!< aboRng_ValidTelescopeFirstSectorSlope[2]
    FALSE,                                                  //!< boDef_ValidTelescopeFirstSectorSlope
    {0xffff, 2123, TBOOLEAN, DB_VAR},                       //!< tInf_PostInterdictionMastSNCF
    {FALSE, TRUE},                                          //!< aboRng_PostInterdictionMastSNCF[2]
    FALSE,                                                  //!< boDef_PostInterdictionMastSNCF
    {0xffff, 2124, TBOOLEAN, DB_VAR},                       //!< tInf_InterdictOfNacelTurretPost
    {FALSE, TRUE},                                          //!< aboRng_InterdictOfNacelTurretPost[2]
    FALSE,                                                  //!< boDef_InterdictOfNacelTurretPost
    {0xffff, 2137, TBOOLEAN, DB_VAR},                       //!< tInf_MastPanthoFoldedSNCF
    {FALSE, TRUE},                                          //!< aboRng_MastPanthoFoldedSNCF[2]
    FALSE                                                   //!< boDef_MastPanthoFoldedSNCF
};

const TDbSetNvParamGreenEffC0 gDb_ctSetNvParamGreenEffC0=
{
    {0xffff, 1872, TUINT8, DB_VAR},                         //!< tInf_MaxPvgTransRailElectricAv
    {U8_MIN, U8_MAX},                                       //!< au8Rng_MaxPvgTransRailElectricAv[2]
    75,                                                     //!< u8Def_MaxPvgTransRailElectricAv
    {0xffff, 1882, TUINT8, DB_VAR},                         //!< tInf_MaxPvgTransRailElectricAr
    {U8_MIN, U8_MAX},                                       //!< au8Rng_MaxPvgTransRailElectricAr[2]
    25,                                                     //!< u8Def_MaxPvgTransRailElectricAr
    {0xffff, 1883, TUINT8, DB_VAR},                         //!< tInf_MinPvgTransRailElectricAv
    {U8_MIN, U8_MAX},                                       //!< au8Rng_MinPvgTransRailElectricAv[2]
    55,                                                     //!< u8Def_MinPvgTransRailElectricAv
    {0xffff, 1884, TUINT8, DB_VAR},                         //!< tInf_MinPvgTransRailElectricAr
    {U8_MIN, U8_MAX},                                       //!< au8Rng_MinPvgTransRailElectricAr[2]
    45,                                                     //!< u8Def_MinPvgTransRailElectricAr
    {0xffff, 1885, TUINT16, DB_VAR},                        //!< tInf_TransRailElectricRampTimeAcc
    {U16_MIN, U16_MAX},                                     //!< au16Rng_TransRailElectricRampTimeAcc[2]
    2000,                                                   //!< u16Def_TransRailElectricRampTimeAcc
    {0xffff, 1886, TUINT16, DB_VAR},                        //!< tInf_TransRailElectricRampTimeDec
    {U16_MIN, U16_MAX},                                     //!< au16Rng_TransRailElectricRampTimeDec[2]
    1000,                                                   //!< u16Def_TransRailElectricRampTimeDec
    {0xffff, 1887, TUINT16, DB_VAR},                        //!< tInf_TransRailElectricRampTimeStop
    {U16_MIN, U16_MAX},                                     //!< au16Rng_TransRailElectricRampTimeStop[2]
    10000,                                                  //!< u16Def_TransRailElectricRampTimeStop
    {0xffff, 1888, TUINT16, DB_VAR},                        //!< tInf_ElectricPumpPressureMax
    {U16_MIN, U16_MAX},                                     //!< au16Rng_ElectricPumpPressureMax[2]
    2450,                                                   //!< u16Def_ElectricPumpPressureMax
    {0xffff, 1889, TUINT16, DB_VAR},                        //!< tInf_ElectricPumpPressureHyst
    {U16_MIN, U16_MAX},                                     //!< au16Rng_ElectricPumpPressureHyst[2]
    200,                                                    //!< u16Def_ElectricPumpPressureHyst
    {0xffff, 1912, TUINT16, DB_VAR},                        //!< tInf_ELECTRIC_MOTOR_RPM_TRANS_MAX
    {U16_MIN, U16_MAX},                                     //!< au16Rng_ELECTRIC_MOTOR_RPM_TRANS_MAX[2]
    3450,                                                   //!< u16Def_ELECTRIC_MOTOR_RPM_TRANS_MAX
    {0xffff, 1913, TUINT16, DB_VAR},                        //!< tInf_ELECTRIC_MOTOR_RPM_TRANS_MIN
    {U16_MIN, U16_MAX},                                     //!< au16Rng_ELECTRIC_MOTOR_RPM_TRANS_MIN[2]
    800,                                                    //!< u16Def_ELECTRIC_MOTOR_RPM_TRANS_MIN
    {0xffff, 1914, TUINT8, DB_VAR},                         //!< tInf_MIN_PVG_TRANS_HIGH_50
    {U8_MIN, U8_MAX},                                       //!< au8Rng_MIN_PVG_TRANS_HIGH_50[2]
    60,                                                     //!< u8Def_MIN_PVG_TRANS_HIGH_50
    {0xffff, 1915, TUINT8, DB_VAR},                         //!< tInf_MIN_PVG_TRANS_LOW_50
    {U8_MIN, U8_MAX},                                       //!< au8Rng_MIN_PVG_TRANS_LOW_50[2]
    40,                                                     //!< u8Def_MIN_PVG_TRANS_LOW_50
    {0xffff, 1918, TUINT16, DB_VAR},                        //!< tInf_RAMP_TIME_REGEN_THERMIC
    {U16_MIN, U16_MAX},                                     //!< au16Rng_RAMP_TIME_REGEN_THERMIC[2]
    100,                                                    //!< u16Def_RAMP_TIME_REGEN_THERMIC
    {0xffff, 1951, TUINT16, DB_VAR},                        //!< tInf_RegenPumpPressureMax
    {U16_MIN, U16_MAX},                                     //!< au16Rng_RegenPumpPressureMax[2]
    1700,                                                   //!< u16Def_RegenPumpPressureMax
    {0xffff, 1952, TUINT16, DB_VAR},                        //!< tInf_RegenPumpPressureReset
    {U16_MIN, U16_MAX},                                     //!< au16Rng_RegenPumpPressureReset[2]
    2000,                                                   //!< u16Def_RegenPumpPressureReset
    {0xffff, 2130, TUINT16, DB_VAR},                        //!< tInf_CURRENT_RESET_REGEN_THERMIC
    {U16_MIN, U16_MAX},                                     //!< au16Rng_CURRENT_RESET_REGEN_THERMIC[2]
    0,                                                      //!< u16Def_CURRENT_RESET_REGEN_THERMIC
    {0xffff, 1916, TUINT16, DB_VAR},                        //!< tInf_CURRENT_MIN_REGEN_THERMIC
    {U16_MIN, U16_MAX},                                     //!< au16Rng_CURRENT_MIN_REGEN_THERMIC[2]
    350,                                                    //!< u16Def_CURRENT_MIN_REGEN_THERMIC
    {0xffff, 1953, TUINT16, DB_VAR},                        //!< tInf_CURRENT_MAX_REGEN_THERMIC
    {U16_MIN, U16_MAX},                                     //!< au16Rng_CURRENT_MAX_REGEN_THERMIC[2]
    1200,                                                   //!< u16Def_CURRENT_MAX_REGEN_THERMIC
    {0xffff, 1954, TUINT16, DB_VAR},                        //!< tInf_CURRENT_DRIVE_LIMIT_ELECTRIC
    {U16_MIN, U16_MAX},                                     //!< au16Rng_CURRENT_DRIVE_LIMIT_ELECTRIC[2]
    3000,                                                   //!< u16Def_CURRENT_DRIVE_LIMIT_ELECTRIC
    {0xffff, 1957, TUINT8, DB_VAR},                         //!< tInf_BATTERY_LOW_LEVEL_SOC
    {U8_MIN, U8_MAX},                                       //!< au8Rng_BATTERY_LOW_LEVEL_SOC[2]
    15,                                                     //!< u8Def_BATTERY_LOW_LEVEL_SOC
    {0xffff, 1979, TUINT16, DB_VAR},                        //!< tInf_MinVoltageDcConverter
    {U16_MIN, U16_MAX},                                     //!< au16Rng_MinVoltageDcConverter[2]
    12500,                                                  //!< u16Def_MinVoltageDcConverter
    {0xffff, 1983, TUINT16, DB_VAR},                        //!< tInf_NbrCycleFaultDcConverter
    {U16_MIN, U16_MAX},                                     //!< au16Rng_NbrCycleFaultDcConverter[2]
    500,                                                    //!< u16Def_NbrCycleFaultDcConverter
    {0xffff, 1577, TINT16, DB_VAR},                         //!< tInf_REGEN_BRAKE_RPM_MODE_AUTO
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_REGEN_BRAKE_RPM_MODE_AUTO[2]
    1300,                                                   //!< i16Def_REGEN_BRAKE_RPM_MODE_AUTO
    {0xffff, 2100, TINT16, DB_VAR},                         //!< tInf_REGEN_BRAKE_TORQUE_MODE_AUTO
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_REGEN_BRAKE_TORQUE_MODE_AUTO[2]
    1300,                                                   //!< i16Def_REGEN_BRAKE_TORQUE_MODE_AUTO
    {0xffff, 2101, TINT16, DB_VAR},                         //!< tInf_REGEN_BRAKE_RPM_MODE_HIGH
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_REGEN_BRAKE_RPM_MODE_HIGH[2]
    3200,                                                   //!< i16Def_REGEN_BRAKE_RPM_MODE_HIGH
    {0xffff, 2102, TINT16, DB_VAR},                         //!< tInf_REGEN_BRAKE_TORQUE_MODE_HIGH
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_REGEN_BRAKE_TORQUE_MODE_HIGH[2]
    3200,                                                   //!< i16Def_REGEN_BRAKE_TORQUE_MODE_HIGH
    {0xffff, 2132, TUINT8, DB_VAR},                         //!< tInf_NbrSamplesAverageRpm
    {U8_MIN, U8_MAX},                                       //!< au8Rng_NbrSamplesAverageRpm[2]
    100,                                                    //!< u8Def_NbrSamplesAverageRpm
    {0xffff, 2139, TINT16, DB_VAR},                         //!< tInf_RegenPumpPressureHyst
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_RegenPumpPressureHyst[2]
    2000,                                                   //!< i16Def_RegenPumpPressureHyst
    {0xffff, 2140, TINT16, DB_VAR},                         //!< tInf_RegenBrakeTorqueFromPressurCoefK
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_RegenBrakeTorqueFromPressurCoefK[2]
    -200,                                                   //!< i16Def_RegenBrakeTorqueFromPressurCoefK
    {0xffff, 2141, TINT16, DB_VAR},                         //!< tInf_RegenBrakeTorqueFromPressurRange
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_RegenBrakeTorqueFromPressurRange[2]
    1300                                                    //!< i16Def_RegenBrakeTorqueFromPressurRange
};

const TDbSetRamGreenEffC0 gDb_ctSetRamGreenEffC0=
{
    {0xffff, 1890, TBOOLEAN, DB_VAR},                       //!< tInf_AutorizeTransRailElectric
    {FALSE, TRUE},                                          //!< aboRng_AutorizeTransRailElectric[2]
    FALSE,                                                  //!< boDef_AutorizeTransRailElectric
    {0xffff, 1891, TINT16, DB_VAR},                         //!< tInf_PvgTransRailElectricConsigne
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_PvgTransRailElectricConsigne[2]
    6000,                                                   //!< i16Def_PvgTransRailElectricConsigne
    {0xffff, 1892, TBOOLEAN, DB_VAR},                       //!< tInf_ElectricPumpPressureExceeded
    {FALSE, TRUE},                                          //!< aboRng_ElectricPumpPressureExceeded[2]
    FALSE,                                                  //!< boDef_ElectricPumpPressureExceeded
    {0xffff, 1893, TBOOLEAN, DB_VAR},                       //!< tInf_StopRampPvgTransRailElectric
    {FALSE, TRUE},                                          //!< aboRng_StopRampPvgTransRailElectric[2]
    FALSE,                                                  //!< boDef_StopRampPvgTransRailElectric
    {0xffff, 1894, TBOOLEAN, DB_VAR},                       //!< tInf_TransRailElectricRampOngoing
    {FALSE, TRUE},                                          //!< aboRng_TransRailElectricRampOngoing[2]
    FALSE,                                                  //!< boDef_TransRailElectricRampOngoing
    {0xffff, 1895, TBOOLEAN, DB_VAR},                       //!< tInf_TransRailThermiqueRampOngoing
    {FALSE, TRUE},                                          //!< aboRng_TransRailThermiqueRampOngoing[2]
    FALSE,                                                  //!< boDef_TransRailThermiqueRampOngoing
    {0xffff, 1919, TINT16, DB_VAR},                         //!< tInf_RpmPvgTransRail
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_RpmPvgTransRail[2]
    0,                                                      //!< i16Def_RpmPvgTransRail
    {0xffff, 1959, TBOOLEAN, DB_VAR},                       //!< tInf_PictoReloadBatteryImpossible
    {FALSE, TRUE},                                          //!< aboRng_PictoReloadBatteryImpossible[2]
    FALSE,                                                  //!< boDef_PictoReloadBatteryImpossible
    {0xffff, 1960, TBOOLEAN, DB_VAR},                       //!< tInf_BatteryLowLevel
    {FALSE, TRUE},                                          //!< aboRng_BatteryLowLevel[2]
    FALSE,                                                  //!< boDef_BatteryLowLevel
    {0xffff, 1961, TBOOLEAN, DB_VAR},                       //!< tInf_ElectricPumpPressureMaxRegen
    {FALSE, TRUE},                                          //!< aboRng_ElectricPumpPressureMaxRegen[2]
    FALSE,                                                  //!< boDef_ElectricPumpPressureMaxRegen
    {0xffff, 1962, TBOOLEAN, DB_VAR},                       //!< tInf_ElectricPumpPressureResetRegen
    {FALSE, TRUE},                                          //!< aboRng_ElectricPumpPressureResetRegen[2]
    FALSE,                                                  //!< boDef_ElectricPumpPressureResetRegen
    {0xffff, 1963, TBOOLEAN, DB_VAR},                       //!< tInf_AutorizeRazController
    {FALSE, TRUE},                                          //!< aboRng_AutorizeRazController[2]
    FALSE,                                                  //!< boDef_AutorizeRazController
    {0xffff, 1980, TBOOLEAN, DB_VAR},                       //!< tInf_VoltageDcConverterFault
    {FALSE, TRUE},                                          //!< aboRng_VoltageDcConverterFault[2]
    FALSE,                                                  //!< boDef_VoltageDcConverterFault
    {0xffff, 1981, TBOOLEAN, DB_VAR},                       //!< tInf_BattErrorCode1
    {FALSE, TRUE},                                          //!< aboRng_BattErrorCode1[2]
    FALSE,                                                  //!< boDef_BattErrorCode1
    {0xffff, 2015, TBOOLEAN, DB_VAR},                       //!< tInf_PictoAskResartController
    {FALSE, TRUE},                                          //!< aboRng_PictoAskResartController[2]
    FALSE                                                   //!< boDef_PictoAskResartController
};

const TDbSetRamFlashBatteryC0 gDb_ctSetRamFlashBatteryC0=
{
    {0xffff, 1926, TINT16, DB_VAR},                         //!< tInf_Ibatt_ist
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_Ibatt_ist[2]
    0,                                                      //!< i16Def_Ibatt_ist
    {0xffff, 1927, TUINT16, DB_VAR},                        //!< tInf_Vbatt_ist
    {U16_MIN, U16_MAX},                                     //!< au16Rng_Vbatt_ist[2]
    0,                                                      //!< u16Def_Vbatt_ist
    {0xffff, 1928, TUINT8, DB_VAR},                         //!< tInf_Batt_Soc
    {U8_MIN, U8_MAX},                                       //!< au8Rng_Batt_Soc[2]
    0,                                                      //!< u8Def_Batt_Soc
    {0xffff, 1929, TUINT8, DB_VAR},                         //!< tInf_Batt_PowerReductionRatio
    {U8_MIN, U8_MAX},                                       //!< au8Rng_Batt_PowerReductionRatio[2]
    0,                                                      //!< u8Def_Batt_PowerReductionRatio
    {0xffff, 1930, TUINT8, DB_VAR},                         //!< tInf_Batt_RecoveryReductionRatio
    {U8_MIN, U8_MAX},                                       //!< au8Rng_Batt_RecoveryReductionRatio[2]
    0,                                                      //!< u8Def_Batt_RecoveryReductionRatio
    {0xffff, 1931, TUINT8, DB_VAR},                         //!< tInf_Batt_ErrorCode1
    {U8_MIN, U8_MAX},                                       //!< au8Rng_Batt_ErrorCode1[2]
    0,                                                      //!< u8Def_Batt_ErrorCode1
    {0xffff, 1932, TUINT8, DB_VAR},                         //!< tInf_Batt_ErrorValue1
    {U8_MIN, U8_MAX},                                       //!< au8Rng_Batt_ErrorValue1[2]
    0,                                                      //!< u8Def_Batt_ErrorValue1
    {0xffff, 1933, TBOOLEAN, DB_VAR},                       //!< tInf_Batt_RegenAuthorized
    {FALSE, TRUE},                                          //!< aboRng_Batt_RegenAuthorized[2]
    FALSE                                                   //!< boDef_Batt_RegenAuthorized
};

const TDbSetRamDMC_C0 gDb_ctSetRamDMC_C0=
{
    {0xffff, 1861, TUINT16, DB_VAR},                        //!< tInf_DC_RpmRequest
    {U16_MIN, U16_MAX},                                     //!< au16Rng_DC_RpmRequest[2]
    0,                                                      //!< u16Def_DC_RpmRequest
    {0xffff, 1917, TUINT16, DB_VAR},                        //!< tInf_DC_AI2_StaticBrakeTorqueLimit
    {U16_MIN, U16_MAX},                                     //!< au16Rng_DC_AI2_StaticBrakeTorqueLimit[2]
    0,                                                      //!< u16Def_DC_AI2_StaticBrakeTorqueLimit
    {0xffff, 1934, TUINT16, DB_VAR},                        //!< tInf_DC_GeneratorRegenBattCurLimit
    {U16_MIN, U16_MAX},                                     //!< au16Rng_DC_GeneratorRegenBattCurLimit[2]
    0,                                                      //!< u16Def_DC_GeneratorRegenBattCurLimit
    {0xffff, 1935, TBOOLEAN, DB_VAR},                       //!< tInf_DC_ForwardByte6Bit0
    {FALSE, TRUE},                                          //!< aboRng_DC_ForwardByte6Bit0[2]
    FALSE,                                                  //!< boDef_DC_ForwardByte6Bit0
    {0xffff, 1936, TBOOLEAN, DB_VAR},                       //!< tInf_DC_BackwardByte6Bit1
    {FALSE, TRUE},                                          //!< aboRng_DC_BackwardByte6Bit1[2]
    FALSE,                                                  //!< boDef_DC_BackwardByte6Bit1
    {0xffff, 1937, TBOOLEAN, DB_VAR},                       //!< tInf_DC_FootSwitchByte6Bit2
    {FALSE, TRUE},                                          //!< aboRng_DC_FootSwitchByte6Bit2[2]
    FALSE,                                                  //!< boDef_DC_FootSwitchByte6Bit2
    {0xffff, 1938, TBOOLEAN, DB_VAR},                       //!< tInf_DC_InterlockByt6Bit3
    {FALSE, TRUE},                                          //!< aboRng_DC_InterlockByt6Bit3[2]
    FALSE,                                                  //!< boDef_DC_InterlockByt6Bit3
    {0xffff, 1939, TBOOLEAN, DB_VAR},                       //!< tInf_DC_RegenEnableByte6Bit6
    {FALSE, TRUE},                                          //!< aboRng_DC_RegenEnableByte6Bit6[2]
    FALSE,                                                  //!< boDef_DC_RegenEnableByte6Bit6
    {0xffff, 1940, TUINT8, DB_VAR},                         //!< tInf_DC_RollOverCount
    {U8_MIN, U8_MAX},                                       //!< au8Rng_DC_RollOverCount[2]
    0,                                                      //!< u8Def_DC_RollOverCount
    {0xffff, 1941, TUINT16, DB_VAR},                        //!< tInf_BCL_HMI_DriveBattCurLimit
    {U16_MIN, U16_MAX},                                     //!< au16Rng_BCL_HMI_DriveBattCurLimit[2]
    0,                                                      //!< u16Def_BCL_HMI_DriveBattCurLimit
    {0xffff, 1942, TUINT16, DB_VAR},                        //!< tInf_BCL_HMI_RegenBattCurLimit
    {U16_MIN, U16_MAX},                                     //!< au16Rng_BCL_HMI_RegenBattCurLimit[2]
    0,                                                      //!< u16Def_BCL_HMI_RegenBattCurLimit
    {0xffff, 1943, TUINT16, DB_VAR},                        //!< tInf_BCL_HMI_BattSOC
    {U16_MIN, U16_MAX},                                     //!< au16Rng_BCL_HMI_BattSOC[2]
    0,                                                      //!< u16Def_BCL_HMI_BattSOC
    {0xffff, 1944, TUINT8, DB_VAR},                         //!< tInf_BCL_RollOverCount
    {U8_MIN, U8_MAX},                                       //!< au8Rng_BCL_RollOverCount[2]
    0,                                                      //!< u8Def_BCL_RollOverCount
    {0xffff, 1945, TINT16, DB_VAR},                         //!< tInf_MS_ActualSpeedRpm
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_MS_ActualSpeedRpm[2]
    0,                                                      //!< i16Def_MS_ActualSpeedRpm
    {0xffff, 1946, TINT16, DB_VAR},                         //!< tInf_MS_BattCur
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_MS_BattCur[2]
    0,                                                      //!< i16Def_MS_BattCur
    {0xffff, 1947, TUINT8, DB_VAR},                         //!< tInf_MS_RollOverCount
    {U8_MIN, U8_MAX},                                       //!< au8Rng_MS_RollOverCount[2]
    0,                                                      //!< u8Def_MS_RollOverCount
    {0xffff, 1948, TUINT8, DB_VAR},                         //!< tInf_MS_FaultCode
    {U8_MIN, U8_MAX},                                       //!< au8Rng_MS_FaultCode[2]
    0,                                                      //!< u8Def_MS_FaultCode
    {0xffff, 1964, TUINT16, DB_VAR},                        //!< tInf_MS_FaultSubCode
    {U16_MIN, U16_MAX},                                     //!< au16Rng_MS_FaultSubCode[2]
    0,                                                      //!< u16Def_MS_FaultSubCode
    {0xffff, 1982, TINT16, DB_VAR},                         //!< tInf_DS_MotorCur
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_DS_MotorCur[2]
    0,                                                      //!< i16Def_DS_MotorCur
    {0xffff, 1984, TUINT8, DB_VAR},                         //!< tInf_DS_DriveStatusIndicator
    {U8_MIN, U8_MAX},                                       //!< au8Rng_DS_DriveStatusIndicator[2]
    0,                                                      //!< u8Def_DS_DriveStatusIndicator
    {0xffff, 1985, TUINT8, DB_VAR},                         //!< tInf_DS_SpeedLimitIndicator
    {U8_MIN, U8_MAX},                                       //!< au8Rng_DS_SpeedLimitIndicator[2]
    0,                                                      //!< u8Def_DS_SpeedLimitIndicator
    {0xffff, 1986, TINT16, DB_VAR},                         //!< tInf_DS_ActualTorque
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_DS_ActualTorque[2]
    0,                                                      //!< i16Def_DS_ActualTorque
    {0xffff, 1987, TUINT8, DB_VAR},                         //!< tInf_DS_TorqueLimitIndicator
    {U8_MIN, U8_MAX},                                       //!< au8Rng_DS_TorqueLimitIndicator[2]
    0,                                                      //!< u8Def_DS_TorqueLimitIndicator
    {0xffff, 1988, TUINT8, DB_VAR},                         //!< tInf_DS_RollOverCount
    {U8_MIN, U8_MAX},                                       //!< au8Rng_DS_RollOverCount[2]
    0,                                                      //!< u8Def_DS_RollOverCount
    {0xffff, 2080, TINT8, DB_VAR},                          //!< tInf_CS_ControlerTemp
    {I8_MIN, I8_MAX},                                       //!< ai8Rng_CS_ControlerTemp[2]
    0,                                                      //!< i8Def_CS_ControlerTemp
    {0xffff, 2081, TINT8, DB_VAR},                          //!< tInf_CS_MotorTemp
    {I8_MIN, I8_MAX},                                       //!< ai8Rng_CS_MotorTemp[2]
    0,                                                      //!< i8Def_CS_MotorTemp
    {0xffff, 2082, TUINT8, DB_VAR},                         //!< tInf_CS_MotorLimitIndicator
    {U8_MIN, U8_MAX},                                       //!< au8Rng_CS_MotorLimitIndicator[2]
    0,                                                      //!< u8Def_CS_MotorLimitIndicator
    {0xffff, 2083, TUINT8, DB_VAR},                         //!< tInf_CS_RollOverCount
    {U8_MIN, U8_MAX},                                       //!< au8Rng_CS_RollOverCount[2]
    0,                                                      //!< u8Def_CS_RollOverCount
    {0xffff, 2084, TUINT16, DB_VAR},                        //!< tInf_CS_BattVoltage
    {U16_MIN, U16_MAX},                                     //!< au16Rng_CS_BattVoltage[2]
    0,                                                      //!< u16Def_CS_BattVoltage
    {0xffff, 2085, TUINT8, DB_VAR},                         //!< tInf_CS_BattDischargeIndicatorValue
    {U8_MIN, U8_MAX},                                       //!< au8Rng_CS_BattDischargeIndicatorValue[2]
    0,                                                      //!< u8Def_CS_BattDischargeIndicatorValue
    {0xffff, 2086, TBOOLEAN, DB_VAR},                       //!< tInf_WaitingHeartbeat
    {FALSE, TRUE},                                          //!< aboRng_WaitingHeartbeat[2]
    FALSE,                                                  //!< boDef_WaitingHeartbeat
    {0xffff, 2087, TBOOLEAN, DB_VAR},                       //!< tInf_TimeOutDmcHeartbeat
    {FALSE, TRUE},                                          //!< aboRng_TimeOutDmcHeartbeat[2]
    FALSE,                                                  //!< boDef_TimeOutDmcHeartbeat
    {0xffff, 2088, TUINT8, DB_VAR},                         //!< tInf_DmcHeartbeat
    {U8_MIN, U8_MAX},                                       //!< au8Rng_DmcHeartbeat[2]
    0,                                                      //!< u8Def_DmcHeartbeat
    {0xffff, 2089, TBOOLEAN, DB_VAR},                       //!< tInf_PowerOnOkDmc
    {FALSE, TRUE},                                          //!< aboRng_PowerOnOkDmc[2]
    FALSE,                                                  //!< boDef_PowerOnOkDmc
    {0xffff, 2090, TBOOLEAN, DB_VAR},                       //!< tInf_OperationnalDmc
    {FALSE, TRUE},                                          //!< aboRng_OperationnalDmc[2]
    FALSE,                                                  //!< boDef_OperationnalDmc
    {0xffff, 2091, TBOOLEAN, DB_VAR},                       //!< tInf_GoToOperationnal
    {FALSE, TRUE},                                          //!< aboRng_GoToOperationnal[2]
    FALSE,                                                  //!< boDef_GoToOperationnal
    {0xffff, 2092, TBOOLEAN, DB_VAR},                       //!< tInf_NewGoToOperationnal
    {FALSE, TRUE},                                          //!< aboRng_NewGoToOperationnal[2]
    FALSE,                                                  //!< boDef_NewGoToOperationnal
    {0xffff, 2093, TBOOLEAN, DB_VAR},                       //!< tInf_SendCommandNMT
    {FALSE, TRUE},                                          //!< aboRng_SendCommandNMT[2]
    FALSE,                                                  //!< boDef_SendCommandNMT
    {0xffff, 2094, TINT16, DB_VAR},                         //!< tInf_StepRazDmc
    {I16_MIN, I16_MAX},                                     //!< ai16Rng_StepRazDmc[2]
    0,                                                      //!< i16Def_StepRazDmc
    {0xffff, 2095, TBOOLEAN, DB_VAR},                       //!< tInf_CommandRazDmcOnGoing
    {FALSE, TRUE},                                          //!< aboRng_CommandRazDmcOnGoing[2]
    FALSE,                                                  //!< boDef_CommandRazDmcOnGoing
    {0xffff, 2096, TBOOLEAN, DB_VAR},                       //!< tInf_Dig4InputCommandSTO
    {FALSE, TRUE},                                          //!< aboRng_Dig4InputCommandSTO[2]
    FALSE,                                                  //!< boDef_Dig4InputCommandSTO
    {0xffff, 2097, TBOOLEAN, DB_VAR},                       //!< tInf_ActiveFaultRazDmc
    {FALSE, TRUE},                                          //!< aboRng_ActiveFaultRazDmc[2]
    FALSE,                                                  //!< boDef_ActiveFaultRazDmc
    {0xffff, 2098, TBOOLEAN, DB_VAR},                       //!< tInf_ActiveFaultDmc
    {FALSE, TRUE},                                          //!< aboRng_ActiveFaultDmc[2]
    FALSE                                                   //!< boDef_ActiveFaultDmc
};

// LIST-TABEL ------------------------------------------------------------------------------------


const TDbVarTabRam gDb_catVarTabRamEcuInputsC0[74] =
{    //!< *cptInf *vpVal *cvpDataDef 
    { &gDb_ctSetRamEcuInputsC0.tInf_PressureBlockOscillationState, (TVoid*)&gDb_tRamEcuInputsC0.bi3PressureBlockOscillationState, (TVoid*)&gDb_ctSetRamEcuInputsC0.bi3Def_PressureBlockOscillationState, (TVoid*)&gDb_ctSetRamEcuInputsC0.abi3Rng_PressureBlockOscillationState[0]},
    { &gDb_ctSetRamEcuInputsC0.tInf_PressureBlockOscillationValue, (TVoid*)&gDb_tRamEcuInputsC0.i16PressureBlockOscillationValue, (TVoid*)&gDb_ctSetRamEcuInputsC0.i16Def_PressureBlockOscillationValue, (TVoid*)&gDb_ctSetRamEcuInputsC0.ai16Rng_PressureBlockOscillationValue[0]},
    { &gDb_ctSetRamEcuInputsC0.tInf_PressureBlockOscillationRawValue, (TVoid*)&gDb_tRamEcuInputsC0.u16PressureBlockOscillationRawValue, (TVoid*)&gDb_ctSetRamEcuInputsC0.u16Def_PressureBlockOscillationRawValue, (TVoid*)&gDb_ctSetRamEcuInputsC0.au16Rng_PressureBlockOscillationRawValue[0]},
    { &gDb_ctSetRamEcuInputsC0.tInf_PressureBrakeSensorState, (TVoid*)&gDb_tRamEcuInputsC0.bi3PressureBrakeSensorState, (TVoid*)&gDb_ctSetRamEcuInputsC0.bi3Def_PressureBrakeSensorState, (TVoid*)&gDb_ctSetRamEcuInputsC0.abi3Rng_PressureBrakeSensorState[0]},
    { &gDb_ctSetRamEcuInputsC0.tInf_PressureBrakeSensorValue, (TVoid*)&gDb_tRamEcuInputsC0.i16PressureBrakeSensorValue, (TVoid*)&gDb_ctSetRamEcuInputsC0.i16Def_PressureBrakeSensorValue, (TVoid*)&gDb_ctSetRamEcuInputsC0.ai16Rng_PressureBrakeSensorValue[0]},
    { &gDb_ctSetRamEcuInputsC0.tInf_PressureBrakeSensorRawValue, (TVoid*)&gDb_tRamEcuInputsC0.u16PressureBrakeSensorRawValue, (TVoid*)&gDb_ctSetRamEcuInputsC0.u16Def_PressureBrakeSensorRawValue, (TVoid*)&gDb_ctSetRamEcuInputsC0.au16Rng_PressureBrakeSensorRawValue[0]},
    { &gDb_ctSetRamEcuInputsC0.tInf_TemperatureTransmissionState, (TVoid*)&gDb_tRamEcuInputsC0.bi3TemperatureTransmissionState, (TVoid*)&gDb_ctSetRamEcuInputsC0.bi3Def_TemperatureTransmissionState, (TVoid*)&gDb_ctSetRamEcuInputsC0.abi3Rng_TemperatureTransmissionState[0]},
    { &gDb_ctSetRamEcuInputsC0.tInf_TemperatureTransmissionValue, (TVoid*)&gDb_tRamEcuInputsC0.i16TemperatureTransmissionValue, (TVoid*)&gDb_ctSetRamEcuInputsC0.i16Def_TemperatureTransmissionValue, (TVoid*)&gDb_ctSetRamEcuInputsC0.ai16Rng_TemperatureTransmissionValue[0]},
    { &gDb_ctSetRamEcuInputsC0.tInf_TemperatureTransmissionRawValue, (TVoid*)&gDb_tRamEcuInputsC0.u16TemperatureTransmissionRawValue, (TVoid*)&gDb_ctSetRamEcuInputsC0.u16Def_TemperatureTransmissionRawValue, (TVoid*)&gDb_ctSetRamEcuInputsC0.au16Rng_TemperatureTransmissionRawValue[0]},
    { &gDb_ctSetRamEcuInputsC0.tInf_FaultPvgLeftTrakState, (TVoid*)&gDb_tRamEcuInputsC0.eFaultPvgLeftTrakState, (TVoid*)&gDb_ctSetRamEcuInputsC0.eDef_FaultPvgLeftTrakState, (TVoid*)&gDb_ctSetRamEcuInputsC0.aeRng_FaultPvgLeftTrakState[0]},
    { &gDb_ctSetRamEcuInputsC0.tInf_FaultPvgLeftTrakRawValue, (TVoid*)&gDb_tRamEcuInputsC0.u16FaultPvgLeftTrakRawValue, (TVoid*)&gDb_ctSetRamEcuInputsC0.u16Def_FaultPvgLeftTrakRawValue, (TVoid*)&gDb_ctSetRamEcuInputsC0.au16Rng_FaultPvgLeftTrakRawValue[0]},
    { &gDb_ctSetRamEcuInputsC0.tInf_FaultPvgRightTrakState, (TVoid*)&gDb_tRamEcuInputsC0.eFaultPvgRightTrakState, (TVoid*)&gDb_ctSetRamEcuInputsC0.eDef_FaultPvgRightTrakState, (TVoid*)&gDb_ctSetRamEcuInputsC0.aeRng_FaultPvgRightTrakState[0]},
    { &gDb_ctSetRamEcuInputsC0.tInf_FaultPvgRightTrakRawValue, (TVoid*)&gDb_tRamEcuInputsC0.u16FaultPvgRightTrakRawValue, (TVoid*)&gDb_ctSetRamEcuInputsC0.u16Def_FaultPvgRightTrakRawValue, (TVoid*)&gDb_ctSetRamEcuInputsC0.au16Rng_FaultPvgRightTrakRawValue[0]},
    { &gDb_ctSetRamEcuInputsC0.tInf_DownAxleOscillantState, (TVoid*)&gDb_tRamEcuInputsC0.eDownAxleOscillantState, (TVoid*)&gDb_ctSetRamEcuInputsC0.eDef_DownAxleOscillantState, (TVoid*)&gDb_ctSetRamEcuInputsC0.aeRng_DownAxleOscillantState[0]},
    { &gDb_ctSetRamEcuInputsC0.tInf_DownAxleOscillantRawValuePin0, (TVoid*)&gDb_tRamEcuInputsC0.u16DownAxleOscillantRawValuePin0, (TVoid*)&gDb_ctSetRamEcuInputsC0.u16Def_DownAxleOscillantRawValuePin0, (TVoid*)&gDb_ctSetRamEcuInputsC0.au16Rng_DownAxleOscillantRawValuePin0[0]},
    { &gDb_ctSetRamEcuInputsC0.tInf_DownAxleOscillantRawValuePin1, (TVoid*)&gDb_tRamEcuInputsC0.u16DownAxleOscillantRawValuePin1, (TVoid*)&gDb_ctSetRamEcuInputsC0.u16Def_DownAxleOscillantRawValuePin1, (TVoid*)&gDb_ctSetRamEcuInputsC0.au16Rng_DownAxleOscillantRawValuePin1[0]},
    { &gDb_ctSetRamEcuInputsC0.tInf_DownAxleFixeState, (TVoid*)&gDb_tRamEcuInputsC0.eDownAxleFixeState, (TVoid*)&gDb_ctSetRamEcuInputsC0.eDef_DownAxleFixeState, (TVoid*)&gDb_ctSetRamEcuInputsC0.aeRng_DownAxleFixeState[0]},
    { &gDb_ctSetRamEcuInputsC0.tInf_DownAxleFixeRawValuePin0, (TVoid*)&gDb_tRamEcuInputsC0.u16DownAxleFixeRawValuePin0, (TVoid*)&gDb_ctSetRamEcuInputsC0.u16Def_DownAxleFixeRawValuePin0, (TVoid*)&gDb_ctSetRamEcuInputsC0.au16Rng_DownAxleFixeRawValuePin0[0]},
    { &gDb_ctSetRamEcuInputsC0.tInf_DownAxleFixeRawValuePin1, (TVoid*)&gDb_tRamEcuInputsC0.u16DownAxleFixeRawValuePin1, (TVoid*)&gDb_ctSetRamEcuInputsC0.u16Def_DownAxleFixeRawValuePin1, (TVoid*)&gDb_ctSetRamEcuInputsC0.au16Rng_DownAxleFixeRawValuePin1[0]},
    { &gDb_ctSetRamEcuInputsC0.tInf_UpAxleOscillantState, (TVoid*)&gDb_tRamEcuInputsC0.eUpAxleOscillantState, (TVoid*)&gDb_ctSetRamEcuInputsC0.eDef_UpAxleOscillantState, (TVoid*)&gDb_ctSetRamEcuInputsC0.aeRng_UpAxleOscillantState[0]},
    { &gDb_ctSetRamEcuInputsC0.tInf_UpAxleOscillantRawValue, (TVoid*)&gDb_tRamEcuInputsC0.u16UpAxleOscillantRawValue, (TVoid*)&gDb_ctSetRamEcuInputsC0.u16Def_UpAxleOscillantRawValue, (TVoid*)&gDb_ctSetRamEcuInputsC0.au16Rng_UpAxleOscillantRawValue[0]},
    { &gDb_ctSetRamEcuInputsC0.tInf_UpAxleFixeState, (TVoid*)&gDb_tRamEcuInputsC0.eUpAxleFixeState, (TVoid*)&gDb_ctSetRamEcuInputsC0.eDef_UpAxleFixeState, (TVoid*)&gDb_ctSetRamEcuInputsC0.aeRng_UpAxleFixeState[0]},
    { &gDb_ctSetRamEcuInputsC0.tInf_UpAxleFixeRawValue, (TVoid*)&gDb_tRamEcuInputsC0.u16UpAxleFixeRawValue, (TVoid*)&gDb_ctSetRamEcuInputsC0.u16Def_UpAxleFixeRawValue, (TVoid*)&gDb_ctSetRamEcuInputsC0.au16Rng_UpAxleFixeRawValue[0]},
    { &gDb_ctSetRamEcuInputsC0.tInf_FrameRotationSensor1State, (TVoid*)&gDb_tRamEcuInputsC0.eFrameRotationSensor1State, (TVoid*)&gDb_ctSetRamEcuInputsC0.eDef_FrameRotationSensor1State, (TVoid*)&gDb_ctSetRamEcuInputsC0.aeRng_FrameRotationSensor1State[0]},
    { &gDb_ctSetRamEcuInputsC0.tInf_FrameRotationSensor1RawValuePin0, (TVoid*)&gDb_tRamEcuInputsC0.u16FrameRotationSensor1RawValuePin0, (TVoid*)&gDb_ctSetRamEcuInputsC0.u16Def_FrameRotationSensor1RawValuePin0, (TVoid*)&gDb_ctSetRamEcuInputsC0.au16Rng_FrameRotationSensor1RawValuePin0[0]},
    { &gDb_ctSetRamEcuInputsC0.tInf_FrameRotationSensor1RawValuePin1, (TVoid*)&gDb_tRamEcuInputsC0.u16FrameRotationSensor1RawValuePin1, (TVoid*)&gDb_ctSetRamEcuInputsC0.u16Def_FrameRotationSensor1RawValuePin1, (TVoid*)&gDb_ctSetRamEcuInputsC0.au16Rng_FrameRotationSensor1RawValuePin1[0]},
    { &gDb_ctSetRamEcuInputsC0.tInf_RailHookSensorState, (TVoid*)&gDb_tRamEcuInputsC0.eRailHookSensorState, (TVoid*)&gDb_ctSetRamEcuInputsC0.eDef_RailHookSensorState, (TVoid*)&gDb_ctSetRamEcuInputsC0.aeRng_RailHookSensorState[0]},
    { &gDb_ctSetRamEcuInputsC0.tInf_RailHookSensorRawValue, (TVoid*)&gDb_tRamEcuInputsC0.u16RailHookSensorRawValue, (TVoid*)&gDb_ctSetRamEcuInputsC0.u16Def_RailHookSensorRawValue, (TVoid*)&gDb_ctSetRamEcuInputsC0.au16Rng_RailHookSensorRawValue[0]},
    { &gDb_ctSetRamEcuInputsC0.tInf_InductiveRailSensorState, (TVoid*)&gDb_tRamEcuInputsC0.eInductiveRailSensorState, (TVoid*)&gDb_ctSetRamEcuInputsC0.eDef_InductiveRailSensorState, (TVoid*)&gDb_ctSetRamEcuInputsC0.aeRng_InductiveRailSensorState[0]},
    { &gDb_ctSetRamEcuInputsC0.tInf_InductiveRailSensorRawValue, (TVoid*)&gDb_tRamEcuInputsC0.u16InductiveRailSensorRawValue, (TVoid*)&gDb_ctSetRamEcuInputsC0.u16Def_InductiveRailSensorRawValue, (TVoid*)&gDb_ctSetRamEcuInputsC0.au16Rng_InductiveRailSensorRawValue[0]},
    { &gDb_ctSetRamEcuInputsC0.tInf_CenteredTurretState, (TVoid*)&gDb_tRamEcuInputsC0.eCenteredTurretState, (TVoid*)&gDb_ctSetRamEcuInputsC0.eDef_CenteredTurretState, (TVoid*)&gDb_ctSetRamEcuInputsC0.aeRng_CenteredTurretState[0]},
    { &gDb_ctSetRamEcuInputsC0.tInf_CenteredTurretRawValue, (TVoid*)&gDb_tRamEcuInputsC0.u16CenteredTurretRawValue, (TVoid*)&gDb_ctSetRamEcuInputsC0.u16Def_CenteredTurretRawValue, (TVoid*)&gDb_ctSetRamEcuInputsC0.au16Rng_CenteredTurretRawValue[0]},
    { &gDb_ctSetRamEcuInputsC0.tInf_WorkKeyTrackSideState, (TVoid*)&gDb_tRamEcuInputsC0.eWorkKeyTrackSideState, (TVoid*)&gDb_ctSetRamEcuInputsC0.eDef_WorkKeyTrackSideState, (TVoid*)&gDb_ctSetRamEcuInputsC0.aeRng_WorkKeyTrackSideState[0]},
    { &gDb_ctSetRamEcuInputsC0.tInf_WorkKeyTrackSideRawValue, (TVoid*)&gDb_tRamEcuInputsC0.u16WorkKeyTrackSideRawValue, (TVoid*)&gDb_ctSetRamEcuInputsC0.u16Def_WorkKeyTrackSideRawValue, (TVoid*)&gDb_ctSetRamEcuInputsC0.au16Rng_WorkKeyTrackSideRawValue[0]},
    { &gDb_ctSetRamEcuInputsC0.tInf_FrameRotationSensor2State, (TVoid*)&gDb_tRamEcuInputsC0.eFrameRotationSensor2State, (TVoid*)&gDb_ctSetRamEcuInputsC0.eDef_FrameRotationSensor2State, (TVoid*)&gDb_ctSetRamEcuInputsC0.aeRng_FrameRotationSensor2State[0]},
    { &gDb_ctSetRamEcuInputsC0.tInf_FrameRotationSensor2RawValuePin0, (TVoid*)&gDb_tRamEcuInputsC0.u16FrameRotationSensor2RawValuePin0, (TVoid*)&gDb_ctSetRamEcuInputsC0.u16Def_FrameRotationSensor2RawValuePin0, (TVoid*)&gDb_ctSetRamEcuInputsC0.au16Rng_FrameRotationSensor2RawValuePin0[0]},
    { &gDb_ctSetRamEcuInputsC0.tInf_FrameRotationSensor2RawValuePin1, (TVoid*)&gDb_tRamEcuInputsC0.u16FrameRotationSensor2RawValuePin1, (TVoid*)&gDb_ctSetRamEcuInputsC0.u16Def_FrameRotationSensor2RawValuePin1, (TVoid*)&gDb_ctSetRamEcuInputsC0.au16Rng_FrameRotationSensor2RawValuePin1[0]},
    { &gDb_ctSetRamEcuInputsC0.tInf_WorkKeyBilateralState, (TVoid*)&gDb_tRamEcuInputsC0.eWorkKeyBilateralState, (TVoid*)&gDb_ctSetRamEcuInputsC0.eDef_WorkKeyBilateralState, (TVoid*)&gDb_ctSetRamEcuInputsC0.aeRng_WorkKeyBilateralState[0]},
    { &gDb_ctSetRamEcuInputsC0.tInf_WorkKeyBilateralRawValue, (TVoid*)&gDb_tRamEcuInputsC0.u16WorkKeyBilateralRawValue, (TVoid*)&gDb_ctSetRamEcuInputsC0.u16Def_WorkKeyBilateralRawValue, (TVoid*)&gDb_ctSetRamEcuInputsC0.au16Rng_WorkKeyBilateralRawValue[0]},
    { &gDb_ctSetRamEcuInputsC0.tInf_WorkKeyCentredState, (TVoid*)&gDb_tRamEcuInputsC0.eWorkKeyCentredState, (TVoid*)&gDb_ctSetRamEcuInputsC0.eDef_WorkKeyCentredState, (TVoid*)&gDb_ctSetRamEcuInputsC0.aeRng_WorkKeyCentredState[0]},
    { &gDb_ctSetRamEcuInputsC0.tInf_WorkKeyCentredRawValue, (TVoid*)&gDb_tRamEcuInputsC0.u16WorkKeyCentredRawValue, (TVoid*)&gDb_ctSetRamEcuInputsC0.u16Def_WorkKeyCentredRawValue, (TVoid*)&gDb_ctSetRamEcuInputsC0.au16Rng_WorkKeyCentredRawValue[0]},
    { &gDb_ctSetRamEcuInputsC0.tInf_AbutmentTurretTrackSideState, (TVoid*)&gDb_tRamEcuInputsC0.eAbutmentTurretTrackSideState, (TVoid*)&gDb_ctSetRamEcuInputsC0.eDef_AbutmentTurretTrackSideState, (TVoid*)&gDb_ctSetRamEcuInputsC0.aeRng_AbutmentTurretTrackSideState[0]},
    { &gDb_ctSetRamEcuInputsC0.tInf_AbutmentTurretTrackSideRaw, (TVoid*)&gDb_tRamEcuInputsC0.u16AbutmentTurretTrackSideRaw, (TVoid*)&gDb_ctSetRamEcuInputsC0.u16Def_AbutmentTurretTrackSideRaw, (TVoid*)&gDb_ctSetRamEcuInputsC0.au16Rng_AbutmentTurretTrackSideRaw[0]},
    { &gDb_ctSetRamEcuInputsC0.tInf_AbutmentTurretCentredSideState, (TVoid*)&gDb_tRamEcuInputsC0.eAbutmentTurretCentredSideState, (TVoid*)&gDb_ctSetRamEcuInputsC0.eDef_AbutmentTurretCentredSideState, (TVoid*)&gDb_ctSetRamEcuInputsC0.aeRng_AbutmentTurretCentredSideState[0]},
    { &gDb_ctSetRamEcuInputsC0.tInf_AbutmentTurretCentredSideRaw, (TVoid*)&gDb_tRamEcuInputsC0.u16AbutmentTurretCentredSideRaw, (TVoid*)&gDb_ctSetRamEcuInputsC0.u16Def_AbutmentTurretCentredSideRaw, (TVoid*)&gDb_ctSetRamEcuInputsC0.au16Rng_AbutmentTurretCentredSideRaw[0]},
    { &gDb_ctSetRamEcuInputsC0.tInf_OscillantAxleSpeedSensorDirState, (TVoid*)&gDb_tRamEcuInputsC0.eOscillantAxleSpeedSensorDirState, (TVoid*)&gDb_ctSetRamEcuInputsC0.eDef_OscillantAxleSpeedSensorDirState, (TVoid*)&gDb_ctSetRamEcuInputsC0.aeRng_OscillantAxleSpeedSensorDirState[0]},
    { &gDb_ctSetRamEcuInputsC0.tInf_OscillantAxleSpeedSensorDirRaw, (TVoid*)&gDb_tRamEcuInputsC0.u16OscillantAxleSpeedSensorDirRaw, (TVoid*)&gDb_ctSetRamEcuInputsC0.u16Def_OscillantAxleSpeedSensorDirRaw, (TVoid*)&gDb_ctSetRamEcuInputsC0.au16Rng_OscillantAxleSpeedSensorDirRaw[0]},
    { &gDb_ctSetRamEcuInputsC0.tInf_FixeAxleSpeedSensorDirState, (TVoid*)&gDb_tRamEcuInputsC0.eFixeAxleSpeedSensorDirState, (TVoid*)&gDb_ctSetRamEcuInputsC0.eDef_FixeAxleSpeedSensorDirState, (TVoid*)&gDb_ctSetRamEcuInputsC0.aeRng_FixeAxleSpeedSensorDirState[0]},
    { &gDb_ctSetRamEcuInputsC0.tInf_FixeAxleSpeedSensorDirRaw, (TVoid*)&gDb_tRamEcuInputsC0.u16FixeAxleSpeedSensorDirRaw, (TVoid*)&gDb_ctSetRamEcuInputsC0.u16Def_FixeAxleSpeedSensorDirRaw, (TVoid*)&gDb_ctSetRamEcuInputsC0.au16Rng_FixeAxleSpeedSensorDirRaw[0]},
    { &gDb_ctSetRamEcuInputsC0.tInf_TrailerGacheState, (TVoid*)&gDb_tRamEcuInputsC0.eTrailerGacheState, (TVoid*)&gDb_ctSetRamEcuInputsC0.eDef_TrailerGacheState, (TVoid*)&gDb_ctSetRamEcuInputsC0.aeRng_TrailerGacheState[0]},
    { &gDb_ctSetRamEcuInputsC0.tInf_TrailerGacheRawValue, (TVoid*)&gDb_tRamEcuInputsC0.u16TrailerGacheRawValue, (TVoid*)&gDb_ctSetRamEcuInputsC0.u16Def_TrailerGacheRawValue, (TVoid*)&gDb_ctSetRamEcuInputsC0.au16Rng_TrailerGacheRawValue[0]},
    { &gDb_ctSetRamEcuInputsC0.tInf_MeasuringMastSensorFoldedState, (TVoid*)&gDb_tRamEcuInputsC0.eMeasuringMastSensorFoldedState, (TVoid*)&gDb_ctSetRamEcuInputsC0.eDef_MeasuringMastSensorFoldedState, (TVoid*)&gDb_ctSetRamEcuInputsC0.aeRng_MeasuringMastSensorFoldedState[0]},
    { &gDb_ctSetRamEcuInputsC0.tInf_MeasuringMastSensorFoldedRaw, (TVoid*)&gDb_tRamEcuInputsC0.u16MeasuringMastSensorFoldedRaw, (TVoid*)&gDb_ctSetRamEcuInputsC0.u16Def_MeasuringMastSensorFoldedRaw, (TVoid*)&gDb_ctSetRamEcuInputsC0.au16Rng_MeasuringMastSensorFoldedRaw[0]},
    { &gDb_ctSetRamEcuInputsC0.tInf_OscillantAxleFrequency, (TVoid*)&gDb_tRamEcuInputsC0.i32OscillantAxleFrequency, (TVoid*)&gDb_ctSetRamEcuInputsC0.i32Def_OscillantAxleFrequency, (TVoid*)&gDb_ctSetRamEcuInputsC0.ai32Rng_OscillantAxleFrequency[0]},
    { &gDb_ctSetRamEcuInputsC0.tInf_FixeAxleFrequency, (TVoid*)&gDb_tRamEcuInputsC0.i32FixeAxleFrequency, (TVoid*)&gDb_ctSetRamEcuInputsC0.i32Def_FixeAxleFrequency, (TVoid*)&gDb_ctSetRamEcuInputsC0.ai32Rng_FixeAxleFrequency[0]},
    { &gDb_ctSetRamEcuInputsC0.tInf_AruRadio1ContactState, (TVoid*)&gDb_tRamEcuInputsC0.eAruRadio1ContactState, (TVoid*)&gDb_ctSetRamEcuInputsC0.eDef_AruRadio1ContactState, (TVoid*)&gDb_ctSetRamEcuInputsC0.aeRng_AruRadio1ContactState[0]},
    { &gDb_ctSetRamEcuInputsC0.tInf_AruRadio1ContactRawValue, (TVoid*)&gDb_tRamEcuInputsC0.u16AruRadio1ContactRawValue, (TVoid*)&gDb_ctSetRamEcuInputsC0.u16Def_AruRadio1ContactRawValue, (TVoid*)&gDb_ctSetRamEcuInputsC0.au16Rng_AruRadio1ContactRawValue[0]},
    { &gDb_ctSetRamEcuInputsC0.tInf_AruRadio2ContactState, (TVoid*)&gDb_tRamEcuInputsC0.eAruRadio2ContactState, (TVoid*)&gDb_ctSetRamEcuInputsC0.eDef_AruRadio2ContactState, (TVoid*)&gDb_ctSetRamEcuInputsC0.aeRng_AruRadio2ContactState[0]},
    { &gDb_ctSetRamEcuInputsC0.tInf_AruRadio2ContactRawValue, (TVoid*)&gDb_tRamEcuInputsC0.u16AruRadio2ContactRawValue, (TVoid*)&gDb_ctSetRamEcuInputsC0.u16Def_AruRadio2ContactRawValue, (TVoid*)&gDb_ctSetRamEcuInputsC0.au16Rng_AruRadio2ContactRawValue[0]},
    { &gDb_ctSetRamEcuInputsC0.tInf_Aru1ContactState, (TVoid*)&gDb_tRamEcuInputsC0.eAru1ContactState, (TVoid*)&gDb_ctSetRamEcuInputsC0.eDef_Aru1ContactState, (TVoid*)&gDb_ctSetRamEcuInputsC0.aeRng_Aru1ContactState[0]},
    { &gDb_ctSetRamEcuInputsC0.tInf_Aru1ContactRawValue, (TVoid*)&gDb_tRamEcuInputsC0.u16Aru1ContactRawValue, (TVoid*)&gDb_ctSetRamEcuInputsC0.u16Def_Aru1ContactRawValue, (TVoid*)&gDb_ctSetRamEcuInputsC0.au16Rng_Aru1ContactRawValue[0]},
    { &gDb_ctSetRamEcuInputsC0.tInf_Aru2ContactState, (TVoid*)&gDb_tRamEcuInputsC0.eAru2ContactState, (TVoid*)&gDb_ctSetRamEcuInputsC0.eDef_Aru2ContactState, (TVoid*)&gDb_ctSetRamEcuInputsC0.aeRng_Aru2ContactState[0]},
    { &gDb_ctSetRamEcuInputsC0.tInf_Aru2ContactRawValue, (TVoid*)&gDb_tRamEcuInputsC0.u16Aru2ContactRawValue, (TVoid*)&gDb_ctSetRamEcuInputsC0.u16Def_Aru2ContactRawValue, (TVoid*)&gDb_ctSetRamEcuInputsC0.au16Rng_Aru2ContactRawValue[0]},
    { &gDb_ctSetRamEcuInputsC0.tInf_StarterMotorState, (TVoid*)&gDb_tRamEcuInputsC0.eStarterMotorState, (TVoid*)&gDb_ctSetRamEcuInputsC0.eDef_StarterMotorState, (TVoid*)&gDb_ctSetRamEcuInputsC0.aeRng_StarterMotorState[0]},
    { &gDb_ctSetRamEcuInputsC0.tInf_StarterMotorRawValue, (TVoid*)&gDb_tRamEcuInputsC0.u16StarterMotorRawValue, (TVoid*)&gDb_ctSetRamEcuInputsC0.u16Def_StarterMotorRawValue, (TVoid*)&gDb_ctSetRamEcuInputsC0.au16Rng_StarterMotorRawValue[0]},
    { &gDb_ctSetRamEcuInputsC0.tInf_AutorisationHighSpeedKeyState, (TVoid*)&gDb_tRamEcuInputsC0.eAutorisationHighSpeedKeyState, (TVoid*)&gDb_ctSetRamEcuInputsC0.eDef_AutorisationHighSpeedKeyState, (TVoid*)&gDb_ctSetRamEcuInputsC0.aeRng_AutorisationHighSpeedKeyState[0]},
    { &gDb_ctSetRamEcuInputsC0.tInf_AutorisationHighSpeedKeyRawValue, (TVoid*)&gDb_tRamEcuInputsC0.u16AutorisationHighSpeedKeyRawValue, (TVoid*)&gDb_ctSetRamEcuInputsC0.u16Def_AutorisationHighSpeedKeyRawValue, (TVoid*)&gDb_ctSetRamEcuInputsC0.au16Rng_AutorisationHighSpeedKeyRawValue[0]},
    { &gDb_ctSetRamEcuInputsC0.tInf_ElectricPumpPressureState, (TVoid*)&gDb_tRamEcuInputsC0.bi3ElectricPumpPressureState, (TVoid*)&gDb_ctSetRamEcuInputsC0.bi3Def_ElectricPumpPressureState, (TVoid*)&gDb_ctSetRamEcuInputsC0.abi3Rng_ElectricPumpPressureState[0]},
    { &gDb_ctSetRamEcuInputsC0.tInf_ElectricPumpPressureValue, (TVoid*)&gDb_tRamEcuInputsC0.i16ElectricPumpPressureValue, (TVoid*)&gDb_ctSetRamEcuInputsC0.i16Def_ElectricPumpPressureValue, (TVoid*)&gDb_ctSetRamEcuInputsC0.ai16Rng_ElectricPumpPressureValue[0]},
    { &gDb_ctSetRamEcuInputsC0.tInf_ElectricPumpPressureRawValue, (TVoid*)&gDb_tRamEcuInputsC0.u16ElectricPumpPressureRawValue, (TVoid*)&gDb_ctSetRamEcuInputsC0.u16Def_ElectricPumpPressureRawValue, (TVoid*)&gDb_ctSetRamEcuInputsC0.au16Rng_ElectricPumpPressureRawValue[0]},
    { &gDb_ctSetRamEcuInputsC0.tInf_UpMastSensorNCState, (TVoid*)&gDb_tRamEcuInputsC0.eUpMastSensorNCState, (TVoid*)&gDb_ctSetRamEcuInputsC0.eDef_UpMastSensorNCState, (TVoid*)&gDb_ctSetRamEcuInputsC0.aeRng_UpMastSensorNCState[0]},
    { &gDb_ctSetRamEcuInputsC0.tInf_UpMastSensorNCRawValue, (TVoid*)&gDb_tRamEcuInputsC0.u16UpMastSensorNCRawValue, (TVoid*)&gDb_ctSetRamEcuInputsC0.u16Def_UpMastSensorNCRawValue, (TVoid*)&gDb_ctSetRamEcuInputsC0.au16Rng_UpMastSensorNCRawValue[0]},
    { &gDb_ctSetRamEcuInputsC0.tInf_ValveInDownPositionSensorState, (TVoid*)&gDb_tRamEcuInputsC0.eValveInDownPositionSensorState, (TVoid*)&gDb_ctSetRamEcuInputsC0.eDef_ValveInDownPositionSensorState, (TVoid*)&gDb_ctSetRamEcuInputsC0.aeRng_ValveInDownPositionSensorState[0]},
    { &gDb_ctSetRamEcuInputsC0.tInf_ValveInDownPositionSensorValue, (TVoid*)&gDb_tRamEcuInputsC0.u16ValveInDownPositionSensorValue, (TVoid*)&gDb_ctSetRamEcuInputsC0.u16Def_ValveInDownPositionSensorValue, (TVoid*)&gDb_ctSetRamEcuInputsC0.au16Rng_ValveInDownPositionSensorValue[0]}
};

const TDbVarTabRam gDb_catVarTabRamEcuOutputsC0[101] =
{    //!< *cptInf *vpVal *cvpDataDef 
    { &gDb_ctSetRamEcuOutputsC0.tInf_EvDeflectorTransmissionCommand, (TVoid*)&gDb_tRamEcuOutputsC0.boEvDeflectorTransmissionCommand, (TVoid*)&gDb_ctSetRamEcuOutputsC0.boDef_EvDeflectorTransmissionCommand, (TVoid*)&gDb_ctSetRamEcuOutputsC0.aboRng_EvDeflectorTransmissionCommand[0]},
    { &gDb_ctSetRamEcuOutputsC0.tInf_EvDeflectorTransmissionValue, (TVoid*)&gDb_tRamEcuOutputsC0.eEvDeflectorTransmissionValue, (TVoid*)&gDb_ctSetRamEcuOutputsC0.eDef_EvDeflectorTransmissionValue, (TVoid*)&gDb_ctSetRamEcuOutputsC0.aeRng_EvDeflectorTransmissionValue[0]},
    { &gDb_ctSetRamEcuOutputsC0.tInf_EvUpMeasuringMastCommand, (TVoid*)&gDb_tRamEcuOutputsC0.boEvUpMeasuringMastCommand, (TVoid*)&gDb_ctSetRamEcuOutputsC0.boDef_EvUpMeasuringMastCommand, (TVoid*)&gDb_ctSetRamEcuOutputsC0.aboRng_EvUpMeasuringMastCommand[0]},
    { &gDb_ctSetRamEcuOutputsC0.tInf_EvUpMeasuringMastValue, (TVoid*)&gDb_tRamEcuOutputsC0.eEvUpMeasuringMastValue, (TVoid*)&gDb_ctSetRamEcuOutputsC0.eDef_EvUpMeasuringMastValue, (TVoid*)&gDb_ctSetRamEcuOutputsC0.aeRng_EvUpMeasuringMastValue[0]},
    { &gDb_ctSetRamEcuOutputsC0.tInf_EvDownMeasuringMastCommand, (TVoid*)&gDb_tRamEcuOutputsC0.boEvDownMeasuringMastCommand, (TVoid*)&gDb_ctSetRamEcuOutputsC0.boDef_EvDownMeasuringMastCommand, (TVoid*)&gDb_ctSetRamEcuOutputsC0.aboRng_EvDownMeasuringMastCommand[0]},
    { &gDb_ctSetRamEcuOutputsC0.tInf_EvDownMeasuringMastValue, (TVoid*)&gDb_tRamEcuOutputsC0.eEvDownMeasuringMastValue, (TVoid*)&gDb_ctSetRamEcuOutputsC0.eDef_EvDownMeasuringMastValue, (TVoid*)&gDb_ctSetRamEcuOutputsC0.aeRng_EvDownMeasuringMastValue[0]},
    { &gDb_ctSetRamEcuOutputsC0.tInf_EvServiceBrakeTrackCommand, (TVoid*)&gDb_tRamEcuOutputsC0.boEvServiceBrakeTrackCommand, (TVoid*)&gDb_ctSetRamEcuOutputsC0.boDef_EvServiceBrakeTrackCommand, (TVoid*)&gDb_ctSetRamEcuOutputsC0.aboRng_EvServiceBrakeTrackCommand[0]},
    { &gDb_ctSetRamEcuOutputsC0.tInf_EvServiceBrakeTrackValue, (TVoid*)&gDb_tRamEcuOutputsC0.eEvServiceBrakeTrackValue, (TVoid*)&gDb_ctSetRamEcuOutputsC0.eDef_EvServiceBrakeTrackValue, (TVoid*)&gDb_ctSetRamEcuOutputsC0.aeRng_EvServiceBrakeTrackValue[0]},
    { &gDb_ctSetRamEcuOutputsC0.tInf_EvPowerReductionCommand, (TVoid*)&gDb_tRamEcuOutputsC0.boEvPowerReductionCommand, (TVoid*)&gDb_ctSetRamEcuOutputsC0.boDef_EvPowerReductionCommand, (TVoid*)&gDb_ctSetRamEcuOutputsC0.aboRng_EvPowerReductionCommand[0]},
    { &gDb_ctSetRamEcuOutputsC0.tInf_EvPowerReductionValue, (TVoid*)&gDb_tRamEcuOutputsC0.eEvPowerReductionValue, (TVoid*)&gDb_ctSetRamEcuOutputsC0.eDef_EvPowerReductionValue, (TVoid*)&gDb_ctSetRamEcuOutputsC0.aeRng_EvPowerReductionValue[0]},
    { &gDb_ctSetRamEcuOutputsC0.tInf_EvFrameRotation1Command, (TVoid*)&gDb_tRamEcuOutputsC0.boEvFrameRotation1Command, (TVoid*)&gDb_ctSetRamEcuOutputsC0.boDef_EvFrameRotation1Command, (TVoid*)&gDb_ctSetRamEcuOutputsC0.aboRng_EvFrameRotation1Command[0]},
    { &gDb_ctSetRamEcuOutputsC0.tInf_EvFrameRotation1Value, (TVoid*)&gDb_tRamEcuOutputsC0.eEvFrameRotation1Value, (TVoid*)&gDb_ctSetRamEcuOutputsC0.eDef_EvFrameRotation1Value, (TVoid*)&gDb_ctSetRamEcuOutputsC0.aeRng_EvFrameRotation1Value[0]},
    { &gDb_ctSetRamEcuOutputsC0.tInf_EvFrameRotation2Command, (TVoid*)&gDb_tRamEcuOutputsC0.boEvFrameRotation2Command, (TVoid*)&gDb_ctSetRamEcuOutputsC0.boDef_EvFrameRotation2Command, (TVoid*)&gDb_ctSetRamEcuOutputsC0.aboRng_EvFrameRotation2Command[0]},
    { &gDb_ctSetRamEcuOutputsC0.tInf_EvFrameRotation2Value, (TVoid*)&gDb_tRamEcuOutputsC0.eEvFrameRotation2Value, (TVoid*)&gDb_ctSetRamEcuOutputsC0.eDef_EvFrameRotation2Value, (TVoid*)&gDb_ctSetRamEcuOutputsC0.aeRng_EvFrameRotation2Value[0]},
    { &gDb_ctSetRamEcuOutputsC0.tInf_SupplyRadioReceiverCommand, (TVoid*)&gDb_tRamEcuOutputsC0.boSupplyRadioReceiverCommand, (TVoid*)&gDb_ctSetRamEcuOutputsC0.boDef_SupplyRadioReceiverCommand, (TVoid*)&gDb_ctSetRamEcuOutputsC0.aboRng_SupplyRadioReceiverCommand[0]},
    { &gDb_ctSetRamEcuOutputsC0.tInf_SupplyRadioReceiverValue, (TVoid*)&gDb_tRamEcuOutputsC0.eSupplyRadioReceiverValue, (TVoid*)&gDb_ctSetRamEcuOutputsC0.eDef_SupplyRadioReceiverValue, (TVoid*)&gDb_ctSetRamEcuOutputsC0.aeRng_SupplyRadioReceiverValue[0]},
    { &gDb_ctSetRamEcuOutputsC0.tInf_BuzzerLynxMovingMachineCommand, (TVoid*)&gDb_tRamEcuOutputsC0.boBuzzerLynxMovingMachineCommand, (TVoid*)&gDb_ctSetRamEcuOutputsC0.boDef_BuzzerLynxMovingMachineCommand, (TVoid*)&gDb_ctSetRamEcuOutputsC0.aboRng_BuzzerLynxMovingMachineCommand[0]},
    { &gDb_ctSetRamEcuOutputsC0.tInf_BuzzerLynxMovingMachineValue, (TVoid*)&gDb_tRamEcuOutputsC0.eBuzzerLynxMovingMachineValue, (TVoid*)&gDb_ctSetRamEcuOutputsC0.eDef_BuzzerLynxMovingMachineValue, (TVoid*)&gDb_ctSetRamEcuOutputsC0.aeRng_BuzzerLynxMovingMachineValue[0]},
    { &gDb_ctSetRamEcuOutputsC0.tInf_WhiteLightsTrailerCommand, (TVoid*)&gDb_tRamEcuOutputsC0.boWhiteLightsTrailerCommand, (TVoid*)&gDb_ctSetRamEcuOutputsC0.boDef_WhiteLightsTrailerCommand, (TVoid*)&gDb_ctSetRamEcuOutputsC0.aboRng_WhiteLightsTrailerCommand[0]},
    { &gDb_ctSetRamEcuOutputsC0.tInf_WhiteLightsTrailerValue, (TVoid*)&gDb_tRamEcuOutputsC0.eWhiteLightsTrailerValue, (TVoid*)&gDb_ctSetRamEcuOutputsC0.eDef_WhiteLightsTrailerValue, (TVoid*)&gDb_ctSetRamEcuOutputsC0.aeRng_WhiteLightsTrailerValue[0]},
    { &gDb_ctSetRamEcuOutputsC0.tInf_RedLightsTrailerCommand, (TVoid*)&gDb_tRamEcuOutputsC0.boRedLightsTrailerCommand, (TVoid*)&gDb_ctSetRamEcuOutputsC0.boDef_RedLightsTrailerCommand, (TVoid*)&gDb_ctSetRamEcuOutputsC0.aboRng_RedLightsTrailerCommand[0]},
    { &gDb_ctSetRamEcuOutputsC0.tInf_RedLightsTrailerValue, (TVoid*)&gDb_tRamEcuOutputsC0.eRedLightsTrailerValue, (TVoid*)&gDb_ctSetRamEcuOutputsC0.eDef_RedLightsTrailerValue, (TVoid*)&gDb_ctSetRamEcuOutputsC0.aeRng_RedLightsTrailerValue[0]},
    { &gDb_ctSetRamEcuOutputsC0.tInf_WhiteLightAVGCommand, (TVoid*)&gDb_tRamEcuOutputsC0.boWhiteLightAVGCommand, (TVoid*)&gDb_ctSetRamEcuOutputsC0.boDef_WhiteLightAVGCommand, (TVoid*)&gDb_ctSetRamEcuOutputsC0.aboRng_WhiteLightAVGCommand[0]},
    { &gDb_ctSetRamEcuOutputsC0.tInf_WhiteLightAVGValue, (TVoid*)&gDb_tRamEcuOutputsC0.eWhiteLightAVGValue, (TVoid*)&gDb_ctSetRamEcuOutputsC0.eDef_WhiteLightAVGValue, (TVoid*)&gDb_ctSetRamEcuOutputsC0.aeRng_WhiteLightAVGValue[0]},
    { &gDb_ctSetRamEcuOutputsC0.tInf_WhiteLightAVDCommand, (TVoid*)&gDb_tRamEcuOutputsC0.boWhiteLightAVDCommand, (TVoid*)&gDb_ctSetRamEcuOutputsC0.boDef_WhiteLightAVDCommand, (TVoid*)&gDb_ctSetRamEcuOutputsC0.aboRng_WhiteLightAVDCommand[0]},
    { &gDb_ctSetRamEcuOutputsC0.tInf_WhiteLightAVDValue, (TVoid*)&gDb_tRamEcuOutputsC0.eWhiteLightAVDValue, (TVoid*)&gDb_ctSetRamEcuOutputsC0.eDef_WhiteLightAVDValue, (TVoid*)&gDb_ctSetRamEcuOutputsC0.aeRng_WhiteLightAVDValue[0]},
    { &gDb_ctSetRamEcuOutputsC0.tInf_RedLightAVGCommand, (TVoid*)&gDb_tRamEcuOutputsC0.boRedLightAVGCommand, (TVoid*)&gDb_ctSetRamEcuOutputsC0.boDef_RedLightAVGCommand, (TVoid*)&gDb_ctSetRamEcuOutputsC0.aboRng_RedLightAVGCommand[0]},
    { &gDb_ctSetRamEcuOutputsC0.tInf_RedLightAVGValue, (TVoid*)&gDb_tRamEcuOutputsC0.eRedLightAVGValue, (TVoid*)&gDb_ctSetRamEcuOutputsC0.eDef_RedLightAVGValue, (TVoid*)&gDb_ctSetRamEcuOutputsC0.aeRng_RedLightAVGValue[0]},
    { &gDb_ctSetRamEcuOutputsC0.tInf_RedLightAVDCommand, (TVoid*)&gDb_tRamEcuOutputsC0.boRedLightAVDCommand, (TVoid*)&gDb_ctSetRamEcuOutputsC0.boDef_RedLightAVDCommand, (TVoid*)&gDb_ctSetRamEcuOutputsC0.aboRng_RedLightAVDCommand[0]},
    { &gDb_ctSetRamEcuOutputsC0.tInf_RedLightAVDValue, (TVoid*)&gDb_tRamEcuOutputsC0.eRedLightAVDValue, (TVoid*)&gDb_ctSetRamEcuOutputsC0.eDef_RedLightAVDValue, (TVoid*)&gDb_ctSetRamEcuOutputsC0.aeRng_RedLightAVDValue[0]},
    { &gDb_ctSetRamEcuOutputsC0.tInf_WhiteLightARGCommand, (TVoid*)&gDb_tRamEcuOutputsC0.boWhiteLightARGCommand, (TVoid*)&gDb_ctSetRamEcuOutputsC0.boDef_WhiteLightARGCommand, (TVoid*)&gDb_ctSetRamEcuOutputsC0.aboRng_WhiteLightARGCommand[0]},
    { &gDb_ctSetRamEcuOutputsC0.tInf_WhiteLightARGValue, (TVoid*)&gDb_tRamEcuOutputsC0.eWhiteLightARGValue, (TVoid*)&gDb_ctSetRamEcuOutputsC0.eDef_WhiteLightARGValue, (TVoid*)&gDb_ctSetRamEcuOutputsC0.aeRng_WhiteLightARGValue[0]},
    { &gDb_ctSetRamEcuOutputsC0.tInf_WhiteLightARDCommand, (TVoid*)&gDb_tRamEcuOutputsC0.boWhiteLightARDCommand, (TVoid*)&gDb_ctSetRamEcuOutputsC0.boDef_WhiteLightARDCommand, (TVoid*)&gDb_ctSetRamEcuOutputsC0.aboRng_WhiteLightARDCommand[0]},
    { &gDb_ctSetRamEcuOutputsC0.tInf_WhiteLightARDValue, (TVoid*)&gDb_tRamEcuOutputsC0.eWhiteLightARDValue, (TVoid*)&gDb_ctSetRamEcuOutputsC0.eDef_WhiteLightARDValue, (TVoid*)&gDb_ctSetRamEcuOutputsC0.aeRng_WhiteLightARDValue[0]},
    { &gDb_ctSetRamEcuOutputsC0.tInf_RedLightARGCommand, (TVoid*)&gDb_tRamEcuOutputsC0.boRedLightARGCommand, (TVoid*)&gDb_ctSetRamEcuOutputsC0.boDef_RedLightARGCommand, (TVoid*)&gDb_ctSetRamEcuOutputsC0.aboRng_RedLightARGCommand[0]},
    { &gDb_ctSetRamEcuOutputsC0.tInf_RedLightARGValue, (TVoid*)&gDb_tRamEcuOutputsC0.eRedLightARGValue, (TVoid*)&gDb_ctSetRamEcuOutputsC0.eDef_RedLightARGValue, (TVoid*)&gDb_ctSetRamEcuOutputsC0.aeRng_RedLightARGValue[0]},
    { &gDb_ctSetRamEcuOutputsC0.tInf_RedLightARDCommand, (TVoid*)&gDb_tRamEcuOutputsC0.boRedLightARDCommand, (TVoid*)&gDb_ctSetRamEcuOutputsC0.boDef_RedLightARDCommand, (TVoid*)&gDb_ctSetRamEcuOutputsC0.aboRng_RedLightARDCommand[0]},
    { &gDb_ctSetRamEcuOutputsC0.tInf_RedLightARDValue, (TVoid*)&gDb_tRamEcuOutputsC0.eRedLightARDValue, (TVoid*)&gDb_ctSetRamEcuOutputsC0.eDef_RedLightARDValue, (TVoid*)&gDb_ctSetRamEcuOutputsC0.aeRng_RedLightARDValue[0]},
    { &gDb_ctSetRamEcuOutputsC0.tInf_SupllyPvgLeftTrackCommand, (TVoid*)&gDb_tRamEcuOutputsC0.boSupllyPvgLeftTrackCommand, (TVoid*)&gDb_ctSetRamEcuOutputsC0.boDef_SupllyPvgLeftTrackCommand, (TVoid*)&gDb_ctSetRamEcuOutputsC0.aboRng_SupllyPvgLeftTrackCommand[0]},
    { &gDb_ctSetRamEcuOutputsC0.tInf_SupllyPvgLeftTrackValue, (TVoid*)&gDb_tRamEcuOutputsC0.eSupllyPvgLeftTrackValue, (TVoid*)&gDb_ctSetRamEcuOutputsC0.eDef_SupllyPvgLeftTrackValue, (TVoid*)&gDb_ctSetRamEcuOutputsC0.aeRng_SupllyPvgLeftTrackValue[0]},
    { &gDb_ctSetRamEcuOutputsC0.tInf_SupllyPvgRightTrackCommand, (TVoid*)&gDb_tRamEcuOutputsC0.boSupllyPvgRightTrackCommand, (TVoid*)&gDb_ctSetRamEcuOutputsC0.boDef_SupllyPvgRightTrackCommand, (TVoid*)&gDb_ctSetRamEcuOutputsC0.aboRng_SupllyPvgRightTrackCommand[0]},
    { &gDb_ctSetRamEcuOutputsC0.tInf_SupllyPvgRightTrackValue, (TVoid*)&gDb_tRamEcuOutputsC0.eSupllyPvgRightTrackValue, (TVoid*)&gDb_ctSetRamEcuOutputsC0.eDef_SupllyPvgRightTrackValue, (TVoid*)&gDb_ctSetRamEcuOutputsC0.aeRng_SupllyPvgRightTrackValue[0]},
    { &gDb_ctSetRamEcuOutputsC0.tInf_EvUnBlockOscillationAxleState, (TVoid*)&gDb_tRamEcuOutputsC0.eEvUnBlockOscillationAxleState, (TVoid*)&gDb_ctSetRamEcuOutputsC0.eDef_EvUnBlockOscillationAxleState, (TVoid*)&gDb_ctSetRamEcuOutputsC0.aeRng_EvUnBlockOscillationAxleState[0]},
    { &gDb_ctSetRamEcuOutputsC0.tInf_EvUnBlockOscillationAxleCmdBool, (TVoid*)&gDb_tRamEcuOutputsC0.boEvUnBlockOscillationAxleCmdBool, (TVoid*)&gDb_ctSetRamEcuOutputsC0.boDef_EvUnBlockOscillationAxleCmdBool, (TVoid*)&gDb_ctSetRamEcuOutputsC0.aboRng_EvUnBlockOscillationAxleCmdBool[0]},
    { &gDb_ctSetRamEcuOutputsC0.tInf_EvUpAxleOscillantState, (TVoid*)&gDb_tRamEcuOutputsC0.eEvUpAxleOscillantState, (TVoid*)&gDb_ctSetRamEcuOutputsC0.eDef_EvUpAxleOscillantState, (TVoid*)&gDb_ctSetRamEcuOutputsC0.aeRng_EvUpAxleOscillantState[0]},
    { &gDb_ctSetRamEcuOutputsC0.tInf_EvUpAxleOscillantCommandBool, (TVoid*)&gDb_tRamEcuOutputsC0.boEvUpAxleOscillantCommandBool, (TVoid*)&gDb_ctSetRamEcuOutputsC0.boDef_EvUpAxleOscillantCommandBool, (TVoid*)&gDb_ctSetRamEcuOutputsC0.aboRng_EvUpAxleOscillantCommandBool[0]},
    { &gDb_ctSetRamEcuOutputsC0.tInf_EvDownAxleOscillantState, (TVoid*)&gDb_tRamEcuOutputsC0.eEvDownAxleOscillantState, (TVoid*)&gDb_ctSetRamEcuOutputsC0.eDef_EvDownAxleOscillantState, (TVoid*)&gDb_ctSetRamEcuOutputsC0.aeRng_EvDownAxleOscillantState[0]},
    { &gDb_ctSetRamEcuOutputsC0.tInf_EvDownAxleOscillantCommandBool, (TVoid*)&gDb_tRamEcuOutputsC0.boEvDownAxleOscillantCommandBool, (TVoid*)&gDb_ctSetRamEcuOutputsC0.boDef_EvDownAxleOscillantCommandBool, (TVoid*)&gDb_ctSetRamEcuOutputsC0.aboRng_EvDownAxleOscillantCommandBool[0]},
    { &gDb_ctSetRamEcuOutputsC0.tInf_EvUpAxleFixeState, (TVoid*)&gDb_tRamEcuOutputsC0.eEvUpAxleFixeState, (TVoid*)&gDb_ctSetRamEcuOutputsC0.eDef_EvUpAxleFixeState, (TVoid*)&gDb_ctSetRamEcuOutputsC0.aeRng_EvUpAxleFixeState[0]},
    { &gDb_ctSetRamEcuOutputsC0.tInf_EvUpAxleFixeCommandBool, (TVoid*)&gDb_tRamEcuOutputsC0.boEvUpAxleFixeCommandBool, (TVoid*)&gDb_ctSetRamEcuOutputsC0.boDef_EvUpAxleFixeCommandBool, (TVoid*)&gDb_ctSetRamEcuOutputsC0.aboRng_EvUpAxleFixeCommandBool[0]},
    { &gDb_ctSetRamEcuOutputsC0.tInf_EvDownAxleFixeState, (TVoid*)&gDb_tRamEcuOutputsC0.eEvDownAxleFixeState, (TVoid*)&gDb_ctSetRamEcuOutputsC0.eDef_EvDownAxleFixeState, (TVoid*)&gDb_ctSetRamEcuOutputsC0.aeRng_EvDownAxleFixeState[0]},
    { &gDb_ctSetRamEcuOutputsC0.tInf_EvDownAxleFixeCommandBool, (TVoid*)&gDb_tRamEcuOutputsC0.boEvDownAxleFixeCommandBool, (TVoid*)&gDb_ctSetRamEcuOutputsC0.boDef_EvDownAxleFixeCommandBool, (TVoid*)&gDb_ctSetRamEcuOutputsC0.aboRng_EvDownAxleFixeCommandBool[0]},
    { &gDb_ctSetRamEcuOutputsC0.tInf_EvParkBrakeAxleOscillantState, (TVoid*)&gDb_tRamEcuOutputsC0.eEvParkBrakeAxleOscillantState, (TVoid*)&gDb_ctSetRamEcuOutputsC0.eDef_EvParkBrakeAxleOscillantState, (TVoid*)&gDb_ctSetRamEcuOutputsC0.aeRng_EvParkBrakeAxleOscillantState[0]},
    { &gDb_ctSetRamEcuOutputsC0.tInf_EvParkBrakeAxleOscillantCmdBool, (TVoid*)&gDb_tRamEcuOutputsC0.boEvParkBrakeAxleOscillantCmdBool, (TVoid*)&gDb_ctSetRamEcuOutputsC0.boDef_EvParkBrakeAxleOscillantCmdBool, (TVoid*)&gDb_ctSetRamEcuOutputsC0.aboRng_EvParkBrakeAxleOscillantCmdBool[0]},
    { &gDb_ctSetRamEcuOutputsC0.tInf_EvParkBrakeAxleFixeState, (TVoid*)&gDb_tRamEcuOutputsC0.eEvParkBrakeAxleFixeState, (TVoid*)&gDb_ctSetRamEcuOutputsC0.eDef_EvParkBrakeAxleFixeState, (TVoid*)&gDb_ctSetRamEcuOutputsC0.aeRng_EvParkBrakeAxleFixeState[0]},
    { &gDb_ctSetRamEcuOutputsC0.tInf_EvParkBrakeAxleFixeCmdBool, (TVoid*)&gDb_tRamEcuOutputsC0.boEvParkBrakeAxleFixeCmdBool, (TVoid*)&gDb_ctSetRamEcuOutputsC0.boDef_EvParkBrakeAxleFixeCmdBool, (TVoid*)&gDb_ctSetRamEcuOutputsC0.aboRng_EvParkBrakeAxleFixeCmdBool[0]},
    { &gDb_ctSetRamEcuOutputsC0.tInf_EvServiceBrakeAxleOscillantState, (TVoid*)&gDb_tRamEcuOutputsC0.eEvServiceBrakeAxleOscillantState, (TVoid*)&gDb_ctSetRamEcuOutputsC0.eDef_EvServiceBrakeAxleOscillantState, (TVoid*)&gDb_ctSetRamEcuOutputsC0.aeRng_EvServiceBrakeAxleOscillantState[0]},
    { &gDb_ctSetRamEcuOutputsC0.tInf_EvServiceBrakeAxleOsciCmdBool, (TVoid*)&gDb_tRamEcuOutputsC0.boEvServiceBrakeAxleOsciCmdBool, (TVoid*)&gDb_ctSetRamEcuOutputsC0.boDef_EvServiceBrakeAxleOsciCmdBool, (TVoid*)&gDb_ctSetRamEcuOutputsC0.aboRng_EvServiceBrakeAxleOsciCmdBool[0]},
    { &gDb_ctSetRamEcuOutputsC0.tInf_EvServiceBrakeAxleFixeState, (TVoid*)&gDb_tRamEcuOutputsC0.eEvServiceBrakeAxleFixeState, (TVoid*)&gDb_ctSetRamEcuOutputsC0.eDef_EvServiceBrakeAxleFixeState, (TVoid*)&gDb_ctSetRamEcuOutputsC0.aeRng_EvServiceBrakeAxleFixeState[0]},
    { &gDb_ctSetRamEcuOutputsC0.tInf_EvServiceBrakeAxleFixeCmdBool, (TVoid*)&gDb_tRamEcuOutputsC0.boEvServiceBrakeAxleFixeCmdBool, (TVoid*)&gDb_ctSetRamEcuOutputsC0.boDef_EvServiceBrakeAxleFixeCmdBool, (TVoid*)&gDb_ctSetRamEcuOutputsC0.aboRng_EvServiceBrakeAxleFixeCmdBool[0]},
    { &gDb_ctSetRamEcuOutputsC0.tInf_KlaxonNeotecState, (TVoid*)&gDb_tRamEcuOutputsC0.eKlaxonNeotecState, (TVoid*)&gDb_ctSetRamEcuOutputsC0.eDef_KlaxonNeotecState, (TVoid*)&gDb_ctSetRamEcuOutputsC0.aeRng_KlaxonNeotecState[0]},
    { &gDb_ctSetRamEcuOutputsC0.tInf_KlaxonNeotecCmdBool, (TVoid*)&gDb_tRamEcuOutputsC0.boKlaxonNeotecCmdBool, (TVoid*)&gDb_ctSetRamEcuOutputsC0.boDef_KlaxonNeotecCmdBool, (TVoid*)&gDb_ctSetRamEcuOutputsC0.aboRng_KlaxonNeotecCmdBool[0]},
    { &gDb_ctSetRamEcuOutputsC0.tInf_ForwardPumpState, (TVoid*)&gDb_tRamEcuOutputsC0.eForwardPumpState, (TVoid*)&gDb_ctSetRamEcuOutputsC0.eDef_ForwardPumpState, (TVoid*)&gDb_ctSetRamEcuOutputsC0.aeRng_ForwardPumpState[0]},
    { &gDb_ctSetRamEcuOutputsC0.tInf_ForwardPumpCommand, (TVoid*)&gDb_tRamEcuOutputsC0.u16ForwardPumpCommand, (TVoid*)&gDb_ctSetRamEcuOutputsC0.u16Def_ForwardPumpCommand, (TVoid*)&gDb_ctSetRamEcuOutputsC0.au16Rng_ForwardPumpCommand[0]},
    { &gDb_ctSetRamEcuOutputsC0.tInf_ForwardPumpCurrent, (TVoid*)&gDb_tRamEcuOutputsC0.u16ForwardPumpCurrent, (TVoid*)&gDb_ctSetRamEcuOutputsC0.u16Def_ForwardPumpCurrent, (TVoid*)&gDb_ctSetRamEcuOutputsC0.au16Rng_ForwardPumpCurrent[0]},
    { &gDb_ctSetRamEcuOutputsC0.tInf_BackwardPumpState, (TVoid*)&gDb_tRamEcuOutputsC0.eBackwardPumpState, (TVoid*)&gDb_ctSetRamEcuOutputsC0.eDef_BackwardPumpState, (TVoid*)&gDb_ctSetRamEcuOutputsC0.aeRng_BackwardPumpState[0]},
    { &gDb_ctSetRamEcuOutputsC0.tInf_BackwardPumpCommand, (TVoid*)&gDb_tRamEcuOutputsC0.u16BackwardPumpCommand, (TVoid*)&gDb_ctSetRamEcuOutputsC0.u16Def_BackwardPumpCommand, (TVoid*)&gDb_ctSetRamEcuOutputsC0.au16Rng_BackwardPumpCommand[0]},
    { &gDb_ctSetRamEcuOutputsC0.tInf_BackwardPumpCurrent, (TVoid*)&gDb_tRamEcuOutputsC0.u16BackwardPumpCurrent, (TVoid*)&gDb_ctSetRamEcuOutputsC0.u16Def_BackwardPumpCurrent, (TVoid*)&gDb_ctSetRamEcuOutputsC0.au16Rng_BackwardPumpCurrent[0]},
    { &gDb_ctSetRamEcuOutputsC0.tInf_PvgLeftTrackCommand, (TVoid*)&gDb_tRamEcuOutputsC0.u16PvgLeftTrackCommand, (TVoid*)&gDb_ctSetRamEcuOutputsC0.u16Def_PvgLeftTrackCommand, (TVoid*)&gDb_ctSetRamEcuOutputsC0.au16Rng_PvgLeftTrackCommand[0]},
    { &gDb_ctSetRamEcuOutputsC0.tInf_PvgLeftTrackVoltage, (TVoid*)&gDb_tRamEcuOutputsC0.u16PvgLeftTrackVoltage, (TVoid*)&gDb_ctSetRamEcuOutputsC0.u16Def_PvgLeftTrackVoltage, (TVoid*)&gDb_ctSetRamEcuOutputsC0.au16Rng_PvgLeftTrackVoltage[0]},
    { &gDb_ctSetRamEcuOutputsC0.tInf_PvgRightTrackCommand, (TVoid*)&gDb_tRamEcuOutputsC0.u16PvgRightTrackCommand, (TVoid*)&gDb_ctSetRamEcuOutputsC0.u16Def_PvgRightTrackCommand, (TVoid*)&gDb_ctSetRamEcuOutputsC0.au16Rng_PvgRightTrackCommand[0]},
    { &gDb_ctSetRamEcuOutputsC0.tInf_PvgRightTrackVoltage, (TVoid*)&gDb_tRamEcuOutputsC0.u16PvgRightTrackVoltage, (TVoid*)&gDb_ctSetRamEcuOutputsC0.u16Def_PvgRightTrackVoltage, (TVoid*)&gDb_ctSetRamEcuOutputsC0.au16Rng_PvgRightTrackVoltage[0]},
    { &gDb_ctSetRamEcuOutputsC0.tInf_SupplyAnaSensorsCommand, (TVoid*)&gDb_tRamEcuOutputsC0.boSupplyAnaSensorsCommand, (TVoid*)&gDb_ctSetRamEcuOutputsC0.boDef_SupplyAnaSensorsCommand, (TVoid*)&gDb_ctSetRamEcuOutputsC0.aboRng_SupplyAnaSensorsCommand[0]},
    { &gDb_ctSetRamEcuOutputsC0.tInf_SupplyAnaSensorsValue, (TVoid*)&gDb_tRamEcuOutputsC0.eSupplyAnaSensorsValue, (TVoid*)&gDb_ctSetRamEcuOutputsC0.eDef_SupplyAnaSensorsValue, (TVoid*)&gDb_ctSetRamEcuOutputsC0.aeRng_SupplyAnaSensorsValue[0]},
    { &gDb_ctSetRamEcuOutputsC0.tInf_PvgLeftTrackLowsideCommand, (TVoid*)&gDb_tRamEcuOutputsC0.boPvgLeftTrackLowsideCommand, (TVoid*)&gDb_ctSetRamEcuOutputsC0.boDef_PvgLeftTrackLowsideCommand, (TVoid*)&gDb_ctSetRamEcuOutputsC0.aboRng_PvgLeftTrackLowsideCommand[0]},
    { &gDb_ctSetRamEcuOutputsC0.tInf_PvgLeftTrackLowsideValue, (TVoid*)&gDb_tRamEcuOutputsC0.ePvgLeftTrackLowsideValue, (TVoid*)&gDb_ctSetRamEcuOutputsC0.eDef_PvgLeftTrackLowsideValue, (TVoid*)&gDb_ctSetRamEcuOutputsC0.aeRng_PvgLeftTrackLowsideValue[0]},
    { &gDb_ctSetRamEcuOutputsC0.tInf_PvgRightTrackLowsideCommand, (TVoid*)&gDb_tRamEcuOutputsC0.boPvgRightTrackLowsideCommand, (TVoid*)&gDb_ctSetRamEcuOutputsC0.boDef_PvgRightTrackLowsideCommand, (TVoid*)&gDb_ctSetRamEcuOutputsC0.aboRng_PvgRightTrackLowsideCommand[0]},
    { &gDb_ctSetRamEcuOutputsC0.tInf_PvgRightTrackLowsideValue, (TVoid*)&gDb_tRamEcuOutputsC0.ePvgRightTrackLowsideValue, (TVoid*)&gDb_ctSetRamEcuOutputsC0.eDef_PvgRightTrackLowsideValue, (TVoid*)&gDb_ctSetRamEcuOutputsC0.aeRng_PvgRightTrackLowsideValue[0]},
    { &gDb_ctSetRamEcuOutputsC0.tInf_ReturnLowSideEvForwardPumpCmd, (TVoid*)&gDb_tRamEcuOutputsC0.boReturnLowSideEvForwardPumpCmd, (TVoid*)&gDb_ctSetRamEcuOutputsC0.boDef_ReturnLowSideEvForwardPumpCmd, (TVoid*)&gDb_ctSetRamEcuOutputsC0.aboRng_ReturnLowSideEvForwardPumpCmd[0]},
    { &gDb_ctSetRamEcuOutputsC0.tInf_ReturnLowSideEvForwardPumpState, (TVoid*)&gDb_tRamEcuOutputsC0.eReturnLowSideEvForwardPumpState, (TVoid*)&gDb_ctSetRamEcuOutputsC0.eDef_ReturnLowSideEvForwardPumpState, (TVoid*)&gDb_ctSetRamEcuOutputsC0.aeRng_ReturnLowSideEvForwardPumpState[0]},
    { &gDb_ctSetRamEcuOutputsC0.tInf_ReturnLowSideEvBackwardPumpCmd, (TVoid*)&gDb_tRamEcuOutputsC0.boReturnLowSideEvBackwardPumpCmd, (TVoid*)&gDb_ctSetRamEcuOutputsC0.boDef_ReturnLowSideEvBackwardPumpCmd, (TVoid*)&gDb_ctSetRamEcuOutputsC0.aboRng_ReturnLowSideEvBackwardPumpCmd[0]},
    { &gDb_ctSetRamEcuOutputsC0.tInf_ReturnLowSideEvBackwardPumpState, (TVoid*)&gDb_tRamEcuOutputsC0.eReturnLowSideEvBackwardPumpState, (TVoid*)&gDb_ctSetRamEcuOutputsC0.eDef_ReturnLowSideEvBackwardPumpState, (TVoid*)&gDb_ctSetRamEcuOutputsC0.aeRng_ReturnLowSideEvBackwardPumpState[0]},
    { &gDb_ctSetRamEcuOutputsC0.tInf_NeonLightsCmd, (TVoid*)&gDb_tRamEcuOutputsC0.boNeonLightsCmd, (TVoid*)&gDb_ctSetRamEcuOutputsC0.boDef_NeonLightsCmd, (TVoid*)&gDb_ctSetRamEcuOutputsC0.aboRng_NeonLightsCmd[0]},
    { &gDb_ctSetRamEcuOutputsC0.tInf_NeonLightsValue, (TVoid*)&gDb_tRamEcuOutputsC0.eNeonLightsValue, (TVoid*)&gDb_ctSetRamEcuOutputsC0.eDef_NeonLightsValue, (TVoid*)&gDb_ctSetRamEcuOutputsC0.aeRng_NeonLightsValue[0]},
    { &gDb_ctSetRamEcuOutputsC0.tInf_Ev2DeflectorTransmissionValue, (TVoid*)&gDb_tRamEcuOutputsC0.eEv2DeflectorTransmissionValue, (TVoid*)&gDb_ctSetRamEcuOutputsC0.eDef_Ev2DeflectorTransmissionValue, (TVoid*)&gDb_ctSetRamEcuOutputsC0.aeRng_Ev2DeflectorTransmissionValue[0]},
    { &gDb_ctSetRamEcuOutputsC0.tInf_CoolingRelayCommand, (TVoid*)&gDb_tRamEcuOutputsC0.boCoolingRelayCommand, (TVoid*)&gDb_ctSetRamEcuOutputsC0.boDef_CoolingRelayCommand, (TVoid*)&gDb_ctSetRamEcuOutputsC0.aboRng_CoolingRelayCommand[0]},
    { &gDb_ctSetRamEcuOutputsC0.tInf_CoolingRelayState, (TVoid*)&gDb_tRamEcuOutputsC0.eCoolingRelayState, (TVoid*)&gDb_ctSetRamEcuOutputsC0.eDef_CoolingRelayState, (TVoid*)&gDb_ctSetRamEcuOutputsC0.aeRng_CoolingRelayState[0]},
    { &gDb_ctSetRamEcuOutputsC0.tInf_Ev2ndParkBrakeAxleFixe, (TVoid*)&gDb_tRamEcuOutputsC0.boEv2ndParkBrakeAxleFixe, (TVoid*)&gDb_ctSetRamEcuOutputsC0.boDef_Ev2ndParkBrakeAxleFixe, (TVoid*)&gDb_ctSetRamEcuOutputsC0.aboRng_Ev2ndParkBrakeAxleFixe[0]},
    { &gDb_ctSetRamEcuOutputsC0.tInf_Ev2ndParkBrakeAxleOsci, (TVoid*)&gDb_tRamEcuOutputsC0.boEv2ndParkBrakeAxleOsci, (TVoid*)&gDb_ctSetRamEcuOutputsC0.boDef_Ev2ndParkBrakeAxleOsci, (TVoid*)&gDb_ctSetRamEcuOutputsC0.aboRng_Ev2ndParkBrakeAxleOsci[0]},
    { &gDb_ctSetRamEcuOutputsC0.tInf_Ev2ndParkBrakeAxleFixeState, (TVoid*)&gDb_tRamEcuOutputsC0.eEv2ndParkBrakeAxleFixeState, (TVoid*)&gDb_ctSetRamEcuOutputsC0.eDef_Ev2ndParkBrakeAxleFixeState, (TVoid*)&gDb_ctSetRamEcuOutputsC0.aeRng_Ev2ndParkBrakeAxleFixeState[0]},
    { &gDb_ctSetRamEcuOutputsC0.tInf_Ev2ndParkBrakeAxleOsciState, (TVoid*)&gDb_tRamEcuOutputsC0.eEv2ndParkBrakeAxleOsciState, (TVoid*)&gDb_ctSetRamEcuOutputsC0.eDef_Ev2ndParkBrakeAxleOsciState, (TVoid*)&gDb_ctSetRamEcuOutputsC0.aeRng_Ev2ndParkBrakeAxleOsciState[0]},
    { &gDb_ctSetRamEcuOutputsC0.tInf_PvgTransRailElectricCmd, (TVoid*)&gDb_tRamEcuOutputsC0.u16PvgTransRailElectricCmd, (TVoid*)&gDb_ctSetRamEcuOutputsC0.u16Def_PvgTransRailElectricCmd, (TVoid*)&gDb_ctSetRamEcuOutputsC0.au16Rng_PvgTransRailElectricCmd[0]},
    { &gDb_ctSetRamEcuOutputsC0.tInf_PvgTransRailElectricVoltage, (TVoid*)&gDb_tRamEcuOutputsC0.u16PvgTransRailElectricVoltage, (TVoid*)&gDb_ctSetRamEcuOutputsC0.u16Def_PvgTransRailElectricVoltage, (TVoid*)&gDb_ctSetRamEcuOutputsC0.au16Rng_PvgTransRailElectricVoltage[0]},
    { &gDb_ctSetRamEcuOutputsC0.tInf_SupllyPvgTransRailElectricCmd, (TVoid*)&gDb_tRamEcuOutputsC0.boSupllyPvgTransRailElectricCmd, (TVoid*)&gDb_ctSetRamEcuOutputsC0.boDef_SupllyPvgTransRailElectricCmd, (TVoid*)&gDb_ctSetRamEcuOutputsC0.aboRng_SupllyPvgTransRailElectricCmd[0]},
    { &gDb_ctSetRamEcuOutputsC0.tInf_SupllyPvgTransRailElectricState, (TVoid*)&gDb_tRamEcuOutputsC0.eSupllyPvgTransRailElectricState, (TVoid*)&gDb_ctSetRamEcuOutputsC0.eDef_SupllyPvgTransRailElectricState, (TVoid*)&gDb_ctSetRamEcuOutputsC0.aeRng_SupllyPvgTransRailElectricState[0]},
    { &gDb_ctSetRamEcuOutputsC0.tInf_EvDevRailElectricModeCmd, (TVoid*)&gDb_tRamEcuOutputsC0.boEvDevRailElectricModeCmd, (TVoid*)&gDb_ctSetRamEcuOutputsC0.boDef_EvDevRailElectricModeCmd, (TVoid*)&gDb_ctSetRamEcuOutputsC0.aboRng_EvDevRailElectricModeCmd[0]},
    { &gDb_ctSetRamEcuOutputsC0.tInf_EvDevRailElectricModeState, (TVoid*)&gDb_tRamEcuOutputsC0.eEvDevRailElectricModeState, (TVoid*)&gDb_ctSetRamEcuOutputsC0.eDef_EvDevRailElectricModeState, (TVoid*)&gDb_ctSetRamEcuOutputsC0.aeRng_EvDevRailElectricModeState[0]},
    { &gDb_ctSetRamEcuOutputsC0.tInf_RelayCutOffVariatorElectricCmd, (TVoid*)&gDb_tRamEcuOutputsC0.boRelayCutOffVariatorElectricCmd, (TVoid*)&gDb_ctSetRamEcuOutputsC0.boDef_RelayCutOffVariatorElectricCmd, (TVoid*)&gDb_ctSetRamEcuOutputsC0.aboRng_RelayCutOffVariatorElectricCmd[0]},
    { &gDb_ctSetRamEcuOutputsC0.tInf_RelayCutOffVariatorElectricState, (TVoid*)&gDb_tRamEcuOutputsC0.eRelayCutOffVariatorElectricState, (TVoid*)&gDb_ctSetRamEcuOutputsC0.eDef_RelayCutOffVariatorElectricState, (TVoid*)&gDb_ctSetRamEcuOutputsC0.aeRng_RelayCutOffVariatorElectricState[0]},
    { &gDb_ctSetRamEcuOutputsC0.tInf_RelayEnableBatteryCmd, (TVoid*)&gDb_tRamEcuOutputsC0.boRelayEnableBatteryCmd, (TVoid*)&gDb_ctSetRamEcuOutputsC0.boDef_RelayEnableBatteryCmd, (TVoid*)&gDb_ctSetRamEcuOutputsC0.aboRng_RelayEnableBatteryCmd[0]},
    { &gDb_ctSetRamEcuOutputsC0.tInf_RelayEnableBatteryState, (TVoid*)&gDb_tRamEcuOutputsC0.eRelayEnableBatteryState, (TVoid*)&gDb_ctSetRamEcuOutputsC0.eDef_RelayEnableBatteryState, (TVoid*)&gDb_ctSetRamEcuOutputsC0.aeRng_RelayEnableBatteryState[0]}
};

const TDbVarTabRam gDb_catVarTabRamGeneralC0[117] =
{    //!< *cptInf *vpVal *cvpDataDef 
    { &gDb_ctSetRamGeneralC0.tInf_LifeByte, (TVoid*)&gDb_tRamGeneralC0.u8LifeByte, (TVoid*)&gDb_ctSetRamGeneralC0.u8Def_LifeByte, (TVoid*)&gDb_ctSetRamGeneralC0.au8Rng_LifeByte[0]},
    { &gDb_ctSetRamGeneralC0.tInf_WatchdogState, (TVoid*)&gDb_tRamGeneralC0.eWatchdogState, (TVoid*)&gDb_ctSetRamGeneralC0.eDef_WatchdogState, (TVoid*)&gDb_ctSetRamGeneralC0.aeRng_WatchdogState[0]},
    { &gDb_ctSetRamGeneralC0.tInf_EcuVoltage, (TVoid*)&gDb_tRamGeneralC0.u16EcuVoltage, (TVoid*)&gDb_ctSetRamGeneralC0.u16Def_EcuVoltage, (TVoid*)&gDb_ctSetRamGeneralC0.au16Rng_EcuVoltage[0]},
    { &gDb_ctSetRamGeneralC0.tInf_OffRailMode, (TVoid*)&gDb_tRamGeneralC0.eOffRailMode, (TVoid*)&gDb_ctSetRamGeneralC0.eDef_OffRailMode, (TVoid*)&gDb_ctSetRamGeneralC0.aeRng_OffRailMode[0]},
    { &gDb_ctSetRamGeneralC0.tInf_RailSpeedMode, (TVoid*)&gDb_tRamGeneralC0.eRailSpeedMode, (TVoid*)&gDb_ctSetRamGeneralC0.eDef_RailSpeedMode, (TVoid*)&gDb_ctSetRamGeneralC0.aeRng_RailSpeedMode[0]},
    { &gDb_ctSetRamGeneralC0.tInf_OutputLutLeftManipulator, (TVoid*)&gDb_tRamGeneralC0.i16OutputLutLeftManipulator, (TVoid*)&gDb_ctSetRamGeneralC0.i16Def_OutputLutLeftManipulator, (TVoid*)&gDb_ctSetRamGeneralC0.ai16Rng_OutputLutLeftManipulator[0]},
    { &gDb_ctSetRamGeneralC0.tInf_OutputLutLeftTrackPvg, (TVoid*)&gDb_tRamGeneralC0.i16OutputLutLeftTrackPvg, (TVoid*)&gDb_ctSetRamGeneralC0.i16Def_OutputLutLeftTrackPvg, (TVoid*)&gDb_ctSetRamGeneralC0.ai16Rng_OutputLutLeftTrackPvg[0]},
    { &gDb_ctSetRamGeneralC0.tInf_OutputLutRightManipulator, (TVoid*)&gDb_tRamGeneralC0.i16OutputLutRightManipulator, (TVoid*)&gDb_ctSetRamGeneralC0.i16Def_OutputLutRightManipulator, (TVoid*)&gDb_ctSetRamGeneralC0.ai16Rng_OutputLutRightManipulator[0]},
    { &gDb_ctSetRamGeneralC0.tInf_OutputLutRightTrackPvg, (TVoid*)&gDb_tRamGeneralC0.i16OutputLutRightTrackPvg, (TVoid*)&gDb_ctSetRamGeneralC0.i16Def_OutputLutRightTrackPvg, (TVoid*)&gDb_ctSetRamGeneralC0.ai16Rng_OutputLutRightTrackPvg[0]},
    { &gDb_ctSetRamGeneralC0.tInf_OutputLutJoystickAdvanceRail, (TVoid*)&gDb_tRamGeneralC0.i16OutputLutJoystickAdvanceRail, (TVoid*)&gDb_ctSetRamGeneralC0.i16Def_OutputLutJoystickAdvanceRail, (TVoid*)&gDb_ctSetRamGeneralC0.ai16Rng_OutputLutJoystickAdvanceRail[0]},
    { &gDb_ctSetRamGeneralC0.tInf_OutputLutForwardPumpTransmission, (TVoid*)&gDb_tRamGeneralC0.i16OutputLutForwardPumpTransmission, (TVoid*)&gDb_ctSetRamGeneralC0.i16Def_OutputLutForwardPumpTransmission, (TVoid*)&gDb_ctSetRamGeneralC0.ai16Rng_OutputLutForwardPumpTransmission[0]},
    { &gDb_ctSetRamGeneralC0.tInf_OutputLutBackwardPumpTransm, (TVoid*)&gDb_tRamGeneralC0.i16OutputLutBackwardPumpTransm, (TVoid*)&gDb_ctSetRamGeneralC0.i16Def_OutputLutBackwardPumpTransm, (TVoid*)&gDb_ctSetRamGeneralC0.ai16Rng_OutputLutBackwardPumpTransm[0]},
    { &gDb_ctSetRamGeneralC0.tInf_ConsigneForwardPumpTransmPercent, (TVoid*)&gDb_tRamGeneralC0.i16ConsigneForwardPumpTransmPercent, (TVoid*)&gDb_ctSetRamGeneralC0.i16Def_ConsigneForwardPumpTransmPercent, (TVoid*)&gDb_ctSetRamGeneralC0.ai16Rng_ConsigneForwardPumpTransmPercent[0]},
    { &gDb_ctSetRamGeneralC0.tInf_LastJoystickAdvanceValue, (TVoid*)&gDb_tRamGeneralC0.i16LastJoystickAdvanceValue, (TVoid*)&gDb_ctSetRamGeneralC0.i16Def_LastJoystickAdvanceValue, (TVoid*)&gDb_ctSetRamGeneralC0.ai16Rng_LastJoystickAdvanceValue[0]},
    { &gDb_ctSetRamGeneralC0.tInf_JoystickAdvanceScalingValue, (TVoid*)&gDb_tRamGeneralC0.i16JoystickAdvanceScalingValue, (TVoid*)&gDb_ctSetRamGeneralC0.i16Def_JoystickAdvanceScalingValue, (TVoid*)&gDb_ctSetRamGeneralC0.ai16Rng_JoystickAdvanceScalingValue[0]},
    { &gDb_ctSetRamGeneralC0.tInf_StateServiceBrakeRail, (TVoid*)&gDb_tRamGeneralC0.eStateServiceBrakeRail, (TVoid*)&gDb_ctSetRamGeneralC0.eDef_StateServiceBrakeRail, (TVoid*)&gDb_ctSetRamGeneralC0.aeRng_StateServiceBrakeRail[0]},
    { &gDb_ctSetRamGeneralC0.tInf_EnableStartTimerServiceBrake, (TVoid*)&gDb_tRamGeneralC0.boEnableStartTimerServiceBrake, (TVoid*)&gDb_ctSetRamGeneralC0.boDef_EnableStartTimerServiceBrake, (TVoid*)&gDb_ctSetRamGeneralC0.aboRng_EnableStartTimerServiceBrake[0]},
    { &gDb_ctSetRamGeneralC0.tInf_SpeedMotorCommandTest, (TVoid*)&gDb_tRamGeneralC0.u16SpeedMotorCommandTest, (TVoid*)&gDb_ctSetRamGeneralC0.u16Def_SpeedMotorCommandTest, (TVoid*)&gDb_ctSetRamGeneralC0.au16Rng_SpeedMotorCommandTest[0]},
    { &gDb_ctSetRamGeneralC0.tInf_ForceSilentModeMotorTest, (TVoid*)&gDb_tRamGeneralC0.boForceSilentModeMotorTest, (TVoid*)&gDb_ctSetRamGeneralC0.boDef_ForceSilentModeMotorTest, (TVoid*)&gDb_ctSetRamGeneralC0.aboRng_ForceSilentModeMotorTest[0]},
    { &gDb_ctSetRamGeneralC0.tInf_AngularSensorTest, (TVoid*)&gDb_tRamGeneralC0.u16AngularSensorTest, (TVoid*)&gDb_ctSetRamGeneralC0.u16Def_AngularSensorTest, (TVoid*)&gDb_ctSetRamGeneralC0.au16Rng_AngularSensorTest[0]},
    { &gDb_ctSetRamGeneralC0.tInf_SpeedAxleSensor, (TVoid*)&gDb_tRamGeneralC0.u16SpeedAxleSensor, (TVoid*)&gDb_ctSetRamGeneralC0.u16Def_SpeedAxleSensor, (TVoid*)&gDb_ctSetRamGeneralC0.au16Rng_SpeedAxleSensor[0]},
    { &gDb_ctSetRamGeneralC0.tInf_AverageTimeCycle, (TVoid*)&gDb_tRamGeneralC0.u32AverageTimeCycle, (TVoid*)&gDb_ctSetRamGeneralC0.u32Def_AverageTimeCycle, (TVoid*)&gDb_ctSetRamGeneralC0.au32Rng_AverageTimeCycle[0]},
    { &gDb_ctSetRamGeneralC0.tInf_MaxTimeCycle, (TVoid*)&gDb_tRamGeneralC0.u32MaxTimeCycle, (TVoid*)&gDb_ctSetRamGeneralC0.u32Def_MaxTimeCycle, (TVoid*)&gDb_ctSetRamGeneralC0.au32Rng_MaxTimeCycle[0]},
    { &gDb_ctSetRamGeneralC0.tInf_FirstTranslationReleaseParkBrake, (TVoid*)&gDb_tRamGeneralC0.boFirstTranslationReleaseParkBrake, (TVoid*)&gDb_ctSetRamGeneralC0.boDef_FirstTranslationReleaseParkBrake, (TVoid*)&gDb_ctSetRamGeneralC0.aboRng_FirstTranslationReleaseParkBrake[0]},
    { &gDb_ctSetRamGeneralC0.tInf_AutorizeUpAxleOscillant, (TVoid*)&gDb_tRamGeneralC0.boAutorizeUpAxleOscillant, (TVoid*)&gDb_ctSetRamGeneralC0.boDef_AutorizeUpAxleOscillant, (TVoid*)&gDb_ctSetRamGeneralC0.aboRng_AutorizeUpAxleOscillant[0]},
    { &gDb_ctSetRamGeneralC0.tInf_AutorizeDownAxleOscillant, (TVoid*)&gDb_tRamGeneralC0.boAutorizeDownAxleOscillant, (TVoid*)&gDb_ctSetRamGeneralC0.boDef_AutorizeDownAxleOscillant, (TVoid*)&gDb_ctSetRamGeneralC0.aboRng_AutorizeDownAxleOscillant[0]},
    { &gDb_ctSetRamGeneralC0.tInf_AutorizeUpAxlefixe, (TVoid*)&gDb_tRamGeneralC0.boAutorizeUpAxlefixe, (TVoid*)&gDb_ctSetRamGeneralC0.boDef_AutorizeUpAxlefixe, (TVoid*)&gDb_ctSetRamGeneralC0.aboRng_AutorizeUpAxlefixe[0]},
    { &gDb_ctSetRamGeneralC0.tInf_AutorizeDownAxlefixe, (TVoid*)&gDb_tRamGeneralC0.boAutorizeDownAxlefixe, (TVoid*)&gDb_ctSetRamGeneralC0.boDef_AutorizeDownAxlefixe, (TVoid*)&gDb_ctSetRamGeneralC0.aboRng_AutorizeDownAxlefixe[0]},
    { &gDb_ctSetRamGeneralC0.tInf_EngineOn, (TVoid*)&gDb_tRamGeneralC0.boEngineOn, (TVoid*)&gDb_ctSetRamGeneralC0.boDef_EngineOn, (TVoid*)&gDb_ctSetRamGeneralC0.aboRng_EngineOn[0]},
    { &gDb_ctSetRamGeneralC0.tInf_TranslationMovementIsSolicited, (TVoid*)&gDb_tRamGeneralC0.boTranslationMovementIsSolicited, (TVoid*)&gDb_ctSetRamGeneralC0.boDef_TranslationMovementIsSolicited, (TVoid*)&gDb_ctSetRamGeneralC0.aboRng_TranslationMovementIsSolicited[0]},
    { &gDb_ctSetRamGeneralC0.tInf_RailTranslationDirection, (TVoid*)&gDb_tRamGeneralC0.eRailTranslationDirection, (TVoid*)&gDb_ctSetRamGeneralC0.eDef_RailTranslationDirection, (TVoid*)&gDb_ctSetRamGeneralC0.aeRng_RailTranslationDirection[0]},
    { &gDb_ctSetRamGeneralC0.tInf_SetConditionAruRadioAlarm, (TVoid*)&gDb_tRamGeneralC0.boSetConditionAruRadioAlarm, (TVoid*)&gDb_ctSetRamGeneralC0.boDef_SetConditionAruRadioAlarm, (TVoid*)&gDb_ctSetRamGeneralC0.aboRng_SetConditionAruRadioAlarm[0]},
    { &gDb_ctSetRamGeneralC0.tInf_JoystickAdvanceSetpointAfterRamp, (TVoid*)&gDb_tRamGeneralC0.i16JoystickAdvanceSetpointAfterRamp, (TVoid*)&gDb_ctSetRamGeneralC0.i16Def_JoystickAdvanceSetpointAfterRamp, (TVoid*)&gDb_ctSetRamGeneralC0.ai16Rng_JoystickAdvanceSetpointAfterRamp[0]},
    { &gDb_ctSetRamGeneralC0.tInf_StabilizedStop, (TVoid*)&gDb_tRamGeneralC0.boStabilizedStop, (TVoid*)&gDb_ctSetRamGeneralC0.boDef_StabilizedStop, (TVoid*)&gDb_ctSetRamGeneralC0.aboRng_StabilizedStop[0]},
    { &gDb_ctSetRamGeneralC0.tInf_EmergencyBrake, (TVoid*)&gDb_tRamGeneralC0.boEmergencyBrake, (TVoid*)&gDb_ctSetRamGeneralC0.boDef_EmergencyBrake, (TVoid*)&gDb_ctSetRamGeneralC0.aboRng_EmergencyBrake[0]},
    { &gDb_ctSetRamGeneralC0.tInf_EmergencyServiceBrakeTimerDone, (TVoid*)&gDb_tRamGeneralC0.boEmergencyServiceBrakeTimerDone, (TVoid*)&gDb_ctSetRamGeneralC0.boDef_EmergencyServiceBrakeTimerDone, (TVoid*)&gDb_ctSetRamGeneralC0.aboRng_EmergencyServiceBrakeTimerDone[0]},
    { &gDb_ctSetRamGeneralC0.tInf_StoppedMachineUnblkOsciTimerDone, (TVoid*)&gDb_tRamGeneralC0.boStoppedMachineUnblkOsciTimerDone, (TVoid*)&gDb_ctSetRamGeneralC0.boDef_StoppedMachineUnblkOsciTimerDone, (TVoid*)&gDb_ctSetRamGeneralC0.aboRng_StoppedMachineUnblkOsciTimerDone[0]},
    { &gDb_ctSetRamGeneralC0.tInf_OutLutLeftManipulatorAfterRamp, (TVoid*)&gDb_tRamGeneralC0.i16OutLutLeftManipulatorAfterRamp, (TVoid*)&gDb_ctSetRamGeneralC0.i16Def_OutLutLeftManipulatorAfterRamp, (TVoid*)&gDb_ctSetRamGeneralC0.ai16Rng_OutLutLeftManipulatorAfterRamp[0]},
    { &gDb_ctSetRamGeneralC0.tInf_OutLutRightManipulatorAfterRamp, (TVoid*)&gDb_tRamGeneralC0.i16OutLutRightManipulatorAfterRamp, (TVoid*)&gDb_ctSetRamGeneralC0.i16Def_OutLutRightManipulatorAfterRamp, (TVoid*)&gDb_ctSetRamGeneralC0.ai16Rng_OutLutRightManipulatorAfterRamp[0]},
    { &gDb_ctSetRamGeneralC0.tInf_DeltaBeetweenLeftRightPvgCrawler, (TVoid*)&gDb_tRamGeneralC0.u16DeltaBeetweenLeftRightPvgCrawler, (TVoid*)&gDb_ctSetRamGeneralC0.u16Def_DeltaBeetweenLeftRightPvgCrawler, (TVoid*)&gDb_ctSetRamGeneralC0.au16Rng_DeltaBeetweenLeftRightPvgCrawler[0]},
    { &gDb_ctSetRamGeneralC0.tInf_ConsigneLeftPvgTrack, (TVoid*)&gDb_tRamGeneralC0.i16ConsigneLeftPvgTrack, (TVoid*)&gDb_ctSetRamGeneralC0.i16Def_ConsigneLeftPvgTrack, (TVoid*)&gDb_ctSetRamGeneralC0.ai16Rng_ConsigneLeftPvgTrack[0]},
    { &gDb_ctSetRamGeneralC0.tInf_ConsigneRightPvgTrack, (TVoid*)&gDb_tRamGeneralC0.i16ConsigneRightPvgTrack, (TVoid*)&gDb_ctSetRamGeneralC0.i16Def_ConsigneRightPvgTrack, (TVoid*)&gDb_ctSetRamGeneralC0.ai16Rng_ConsigneRightPvgTrack[0]},
    { &gDb_ctSetRamGeneralC0.tInf_BrakeWithoutGachetteOrPedal, (TVoid*)&gDb_tRamGeneralC0.u8BrakeWithoutGachetteOrPedal, (TVoid*)&gDb_ctSetRamGeneralC0.u8Def_BrakeWithoutGachetteOrPedal, (TVoid*)&gDb_ctSetRamGeneralC0.au8Rng_BrakeWithoutGachetteOrPedal[0]},
    { &gDb_ctSetRamGeneralC0.tInf_AruRadioAlarmCounter, (TVoid*)&gDb_tRamGeneralC0.u16AruRadioAlarmCounter, (TVoid*)&gDb_ctSetRamGeneralC0.u16Def_AruRadioAlarmCounter, (TVoid*)&gDb_ctSetRamGeneralC0.au16Rng_AruRadioAlarmCounter[0]},
    { &gDb_ctSetRamGeneralC0.tInf_RedLightARGBasketCmd, (TVoid*)&gDb_tRamGeneralC0.boRedLightARGBasketCmd, (TVoid*)&gDb_ctSetRamGeneralC0.boDef_RedLightARGBasketCmd, (TVoid*)&gDb_ctSetRamGeneralC0.aboRng_RedLightARGBasketCmd[0]},
    { &gDb_ctSetRamGeneralC0.tInf_WhiteLightARGBasketCmd, (TVoid*)&gDb_tRamGeneralC0.boWhiteLightARGBasketCmd, (TVoid*)&gDb_ctSetRamGeneralC0.boDef_WhiteLightARGBasketCmd, (TVoid*)&gDb_ctSetRamGeneralC0.aboRng_WhiteLightARGBasketCmd[0]},
    { &gDb_ctSetRamGeneralC0.tInf_PortillonLadderClose, (TVoid*)&gDb_tRamGeneralC0.boPortillonLadderClose, (TVoid*)&gDb_ctSetRamGeneralC0.boDef_PortillonLadderClose, (TVoid*)&gDb_ctSetRamGeneralC0.aboRng_PortillonLadderClose[0]},
    { &gDb_ctSetRamGeneralC0.tInf_TestEvision, (TVoid*)&gDb_tRamGeneralC0.boTestEvision, (TVoid*)&gDb_ctSetRamGeneralC0.boDef_TestEvision, (TVoid*)&gDb_ctSetRamGeneralC0.aboRng_TestEvision[0]},
    { &gDb_ctSetRamGeneralC0.tInf_PosJoystickAdvance, (TVoid*)&gDb_tRamGeneralC0.ePosJoystickAdvance, (TVoid*)&gDb_ctSetRamGeneralC0.eDef_PosJoystickAdvance, (TVoid*)&gDb_ctSetRamGeneralC0.aeRng_PosJoystickAdvance[0]},
    { &gDb_ctSetRamGeneralC0.tInf_RetainPosJoyAdvanceUntilBrake, (TVoid*)&gDb_tRamGeneralC0.eRetainPosJoyAdvanceUntilBrake, (TVoid*)&gDb_ctSetRamGeneralC0.eDef_RetainPosJoyAdvanceUntilBrake, (TVoid*)&gDb_ctSetRamGeneralC0.aeRng_RetainPosJoyAdvanceUntilBrake[0]},
    { &gDb_ctSetRamGeneralC0.tInf_AuthorizeForwardCrawler, (TVoid*)&gDb_tRamGeneralC0.boAuthorizeForwardCrawler, (TVoid*)&gDb_ctSetRamGeneralC0.boDef_AuthorizeForwardCrawler, (TVoid*)&gDb_ctSetRamGeneralC0.aboRng_AuthorizeForwardCrawler[0]},
    { &gDb_ctSetRamGeneralC0.tInf_AuthorizeBackwardCrawler, (TVoid*)&gDb_tRamGeneralC0.boAuthorizeBackwardCrawler, (TVoid*)&gDb_ctSetRamGeneralC0.boDef_AuthorizeBackwardCrawler, (TVoid*)&gDb_ctSetRamGeneralC0.aboRng_AuthorizeBackwardCrawler[0]},
    { &gDb_ctSetRamGeneralC0.tInf_ReturnValueUartInit, (TVoid*)&gDb_tRamGeneralC0.i16ReturnValueUartInit, (TVoid*)&gDb_ctSetRamGeneralC0.i16Def_ReturnValueUartInit, (TVoid*)&gDb_ctSetRamGeneralC0.ai16Rng_ReturnValueUartInit[0]},
    { &gDb_ctSetRamGeneralC0.tInf_AuthorizeTransRailMovement, (TVoid*)&gDb_tRamGeneralC0.boAuthorizeTransRailMovement, (TVoid*)&gDb_ctSetRamGeneralC0.boDef_AuthorizeTransRailMovement, (TVoid*)&gDb_ctSetRamGeneralC0.aboRng_AuthorizeTransRailMovement[0]},
    { &gDb_ctSetRamGeneralC0.tInf_EvForwardTrackConsigne, (TVoid*)&gDb_tRamGeneralC0.u16EvForwardTrackConsigne, (TVoid*)&gDb_ctSetRamGeneralC0.u16Def_EvForwardTrackConsigne, (TVoid*)&gDb_ctSetRamGeneralC0.au16Rng_EvForwardTrackConsigne[0]},
    { &gDb_ctSetRamGeneralC0.tInf_EvForwardRailConsigne, (TVoid*)&gDb_tRamGeneralC0.u16EvForwardRailConsigne, (TVoid*)&gDb_ctSetRamGeneralC0.u16Def_EvForwardRailConsigne, (TVoid*)&gDb_ctSetRamGeneralC0.au16Rng_EvForwardRailConsigne[0]},
    { &gDb_ctSetRamGeneralC0.tInf_EngineTimeSecond, (TVoid*)&gDb_tRamGeneralC0.u32EngineTimeSecond, (TVoid*)&gDb_ctSetRamGeneralC0.u32Def_EngineTimeSecond, (TVoid*)&gDb_ctSetRamGeneralC0.au32Rng_EngineTimeSecond[0]},
    { &gDb_ctSetRamGeneralC0.tInf_RamGeneralNeotecC0_1, (TVoid*)&gDb_tRamGeneralC0.boRamGeneralNeotecC0_1, (TVoid*)&gDb_ctSetRamGeneralC0.boDef_RamGeneralNeotecC0_1, (TVoid*)&gDb_ctSetRamGeneralC0.aboRng_RamGeneralNeotecC0_1[0]},
    { &gDb_ctSetRamGeneralC0.tInf_RamGeneralNeotecC0_1_1, (TVoid*)&gDb_tRamGeneralC0.boRamGeneralNeotecC0_1_1, (TVoid*)&gDb_ctSetRamGeneralC0.boDef_RamGeneralNeotecC0_1_1, (TVoid*)&gDb_ctSetRamGeneralC0.aboRng_RamGeneralNeotecC0_1_1[0]},
    { &gDb_ctSetRamGeneralC0.tInf_RamGeneralNeotecC0_1_2, (TVoid*)&gDb_tRamGeneralC0.boRamGeneralNeotecC0_1_2, (TVoid*)&gDb_ctSetRamGeneralC0.boDef_RamGeneralNeotecC0_1_2, (TVoid*)&gDb_ctSetRamGeneralC0.aboRng_RamGeneralNeotecC0_1_2[0]},
    { &gDb_ctSetRamGeneralC0.tInf_RamGeneralNeotecC0_1_3, (TVoid*)&gDb_tRamGeneralC0.boRamGeneralNeotecC0_1_3, (TVoid*)&gDb_ctSetRamGeneralC0.boDef_RamGeneralNeotecC0_1_3, (TVoid*)&gDb_ctSetRamGeneralC0.aboRng_RamGeneralNeotecC0_1_3[0]},
    { &gDb_ctSetRamGeneralC0.tInf_RamGeneralNeotecC0_1_4, (TVoid*)&gDb_tRamGeneralC0.boRamGeneralNeotecC0_1_4, (TVoid*)&gDb_ctSetRamGeneralC0.boDef_RamGeneralNeotecC0_1_4, (TVoid*)&gDb_ctSetRamGeneralC0.aboRng_RamGeneralNeotecC0_1_4[0]},
    { &gDb_ctSetRamGeneralC0.tInf_RamGeneralNeotecC0_1_5, (TVoid*)&gDb_tRamGeneralC0.boRamGeneralNeotecC0_1_5, (TVoid*)&gDb_ctSetRamGeneralC0.boDef_RamGeneralNeotecC0_1_5, (TVoid*)&gDb_ctSetRamGeneralC0.aboRng_RamGeneralNeotecC0_1_5[0]},
    { &gDb_ctSetRamGeneralC0.tInf_RamGeneralNeotecC0_1_6, (TVoid*)&gDb_tRamGeneralC0.boRamGeneralNeotecC0_1_6, (TVoid*)&gDb_ctSetRamGeneralC0.boDef_RamGeneralNeotecC0_1_6, (TVoid*)&gDb_ctSetRamGeneralC0.aboRng_RamGeneralNeotecC0_1_6[0]},
    { &gDb_ctSetRamGeneralC0.tInf_RamGeneralNeotecC0_1_7, (TVoid*)&gDb_tRamGeneralC0.boRamGeneralNeotecC0_1_7, (TVoid*)&gDb_ctSetRamGeneralC0.boDef_RamGeneralNeotecC0_1_7, (TVoid*)&gDb_ctSetRamGeneralC0.aboRng_RamGeneralNeotecC0_1_7[0]},
    { &gDb_ctSetRamGeneralC0.tInf_RamGeneralNeotecC0_1_8, (TVoid*)&gDb_tRamGeneralC0.boRamGeneralNeotecC0_1_8, (TVoid*)&gDb_ctSetRamGeneralC0.boDef_RamGeneralNeotecC0_1_8, (TVoid*)&gDb_ctSetRamGeneralC0.aboRng_RamGeneralNeotecC0_1_8[0]},
    { &gDb_ctSetRamGeneralC0.tInf_RamGeneralNeotecC0_1_9, (TVoid*)&gDb_tRamGeneralC0.boRamGeneralNeotecC0_1_9, (TVoid*)&gDb_ctSetRamGeneralC0.boDef_RamGeneralNeotecC0_1_9, (TVoid*)&gDb_ctSetRamGeneralC0.aboRng_RamGeneralNeotecC0_1_9[0]},
    { &gDb_ctSetRamGeneralC0.tInf_RamGeneralNeotecC0_1_10, (TVoid*)&gDb_tRamGeneralC0.boRamGeneralNeotecC0_1_10, (TVoid*)&gDb_ctSetRamGeneralC0.boDef_RamGeneralNeotecC0_1_10, (TVoid*)&gDb_ctSetRamGeneralC0.aboRng_RamGeneralNeotecC0_1_10[0]},
    { &gDb_ctSetRamGeneralC0.tInf_RamGeneralNeotecC0_1_11, (TVoid*)&gDb_tRamGeneralC0.boRamGeneralNeotecC0_1_11, (TVoid*)&gDb_ctSetRamGeneralC0.boDef_RamGeneralNeotecC0_1_11, (TVoid*)&gDb_ctSetRamGeneralC0.aboRng_RamGeneralNeotecC0_1_11[0]},
    { &gDb_ctSetRamGeneralC0.tInf_RamGeneralNeotecC0_1_12, (TVoid*)&gDb_tRamGeneralC0.boRamGeneralNeotecC0_1_12, (TVoid*)&gDb_ctSetRamGeneralC0.boDef_RamGeneralNeotecC0_1_12, (TVoid*)&gDb_ctSetRamGeneralC0.aboRng_RamGeneralNeotecC0_1_12[0]},
    { &gDb_ctSetRamGeneralC0.tInf_RamGeneralNeotecC0_1_13, (TVoid*)&gDb_tRamGeneralC0.boRamGeneralNeotecC0_1_13, (TVoid*)&gDb_ctSetRamGeneralC0.boDef_RamGeneralNeotecC0_1_13, (TVoid*)&gDb_ctSetRamGeneralC0.aboRng_RamGeneralNeotecC0_1_13[0]},
    { &gDb_ctSetRamGeneralC0.tInf_RamGeneralNeotecC0_1_14, (TVoid*)&gDb_tRamGeneralC0.boRamGeneralNeotecC0_1_14, (TVoid*)&gDb_ctSetRamGeneralC0.boDef_RamGeneralNeotecC0_1_14, (TVoid*)&gDb_ctSetRamGeneralC0.aboRng_RamGeneralNeotecC0_1_14[0]},
    { &gDb_ctSetRamGeneralC0.tInf_RamGeneralNeotecC0_1_15, (TVoid*)&gDb_tRamGeneralC0.boRamGeneralNeotecC0_1_15, (TVoid*)&gDb_ctSetRamGeneralC0.boDef_RamGeneralNeotecC0_1_15, (TVoid*)&gDb_ctSetRamGeneralC0.aboRng_RamGeneralNeotecC0_1_15[0]},
    { &gDb_ctSetRamGeneralC0.tInf_RamGeneralNeotecC0_2, (TVoid*)&gDb_tRamGeneralC0.u8RamGeneralNeotecC0_2, (TVoid*)&gDb_ctSetRamGeneralC0.u8Def_RamGeneralNeotecC0_2, (TVoid*)&gDb_ctSetRamGeneralC0.au8Rng_RamGeneralNeotecC0_2[0]},
    { &gDb_ctSetRamGeneralC0.tInf_RamGeneralNeotecC0_2_1, (TVoid*)&gDb_tRamGeneralC0.u8RamGeneralNeotecC0_2_1, (TVoid*)&gDb_ctSetRamGeneralC0.u8Def_RamGeneralNeotecC0_2_1, (TVoid*)&gDb_ctSetRamGeneralC0.au8Rng_RamGeneralNeotecC0_2_1[0]},
    { &gDb_ctSetRamGeneralC0.tInf_RamGeneralNeotecC0_2_2, (TVoid*)&gDb_tRamGeneralC0.u8RamGeneralNeotecC0_2_2, (TVoid*)&gDb_ctSetRamGeneralC0.u8Def_RamGeneralNeotecC0_2_2, (TVoid*)&gDb_ctSetRamGeneralC0.au8Rng_RamGeneralNeotecC0_2_2[0]},
    { &gDb_ctSetRamGeneralC0.tInf_RamGeneralNeotecC0_2_3, (TVoid*)&gDb_tRamGeneralC0.u8RamGeneralNeotecC0_2_3, (TVoid*)&gDb_ctSetRamGeneralC0.u8Def_RamGeneralNeotecC0_2_3, (TVoid*)&gDb_ctSetRamGeneralC0.au8Rng_RamGeneralNeotecC0_2_3[0]},
    { &gDb_ctSetRamGeneralC0.tInf_RamGeneralNeotecC0_2_4, (TVoid*)&gDb_tRamGeneralC0.u8RamGeneralNeotecC0_2_4, (TVoid*)&gDb_ctSetRamGeneralC0.u8Def_RamGeneralNeotecC0_2_4, (TVoid*)&gDb_ctSetRamGeneralC0.au8Rng_RamGeneralNeotecC0_2_4[0]},
    { &gDb_ctSetRamGeneralC0.tInf_RamGeneralNeotecC0_2_5, (TVoid*)&gDb_tRamGeneralC0.u8RamGeneralNeotecC0_2_5, (TVoid*)&gDb_ctSetRamGeneralC0.u8Def_RamGeneralNeotecC0_2_5, (TVoid*)&gDb_ctSetRamGeneralC0.au8Rng_RamGeneralNeotecC0_2_5[0]},
    { &gDb_ctSetRamGeneralC0.tInf_RamGeneralNeotecC0_3, (TVoid*)&gDb_tRamGeneralC0.u16RamGeneralNeotecC0_3, (TVoid*)&gDb_ctSetRamGeneralC0.u16Def_RamGeneralNeotecC0_3, (TVoid*)&gDb_ctSetRamGeneralC0.au16Rng_RamGeneralNeotecC0_3[0]},
    { &gDb_ctSetRamGeneralC0.tInf_RamGeneralNeotecC0_3_1, (TVoid*)&gDb_tRamGeneralC0.u16RamGeneralNeotecC0_3_1, (TVoid*)&gDb_ctSetRamGeneralC0.u16Def_RamGeneralNeotecC0_3_1, (TVoid*)&gDb_ctSetRamGeneralC0.au16Rng_RamGeneralNeotecC0_3_1[0]},
    { &gDb_ctSetRamGeneralC0.tInf_RamGeneralNeotecC0_3_2, (TVoid*)&gDb_tRamGeneralC0.u16RamGeneralNeotecC0_3_2, (TVoid*)&gDb_ctSetRamGeneralC0.u16Def_RamGeneralNeotecC0_3_2, (TVoid*)&gDb_ctSetRamGeneralC0.au16Rng_RamGeneralNeotecC0_3_2[0]},
    { &gDb_ctSetRamGeneralC0.tInf_RamGeneralNeotecC0_3_3, (TVoid*)&gDb_tRamGeneralC0.u16RamGeneralNeotecC0_3_3, (TVoid*)&gDb_ctSetRamGeneralC0.u16Def_RamGeneralNeotecC0_3_3, (TVoid*)&gDb_ctSetRamGeneralC0.au16Rng_RamGeneralNeotecC0_3_3[0]},
    { &gDb_ctSetRamGeneralC0.tInf_RamGeneralNeotecC0_3_4, (TVoid*)&gDb_tRamGeneralC0.u16RamGeneralNeotecC0_3_4, (TVoid*)&gDb_ctSetRamGeneralC0.u16Def_RamGeneralNeotecC0_3_4, (TVoid*)&gDb_ctSetRamGeneralC0.au16Rng_RamGeneralNeotecC0_3_4[0]},
    { &gDb_ctSetRamGeneralC0.tInf_RamGeneralNeotecC0_3_5, (TVoid*)&gDb_tRamGeneralC0.u16RamGeneralNeotecC0_3_5, (TVoid*)&gDb_ctSetRamGeneralC0.u16Def_RamGeneralNeotecC0_3_5, (TVoid*)&gDb_ctSetRamGeneralC0.au16Rng_RamGeneralNeotecC0_3_5[0]},
    { &gDb_ctSetRamGeneralC0.tInf_RamGeneralNeotecC0_3_6, (TVoid*)&gDb_tRamGeneralC0.u16RamGeneralNeotecC0_3_6, (TVoid*)&gDb_ctSetRamGeneralC0.u16Def_RamGeneralNeotecC0_3_6, (TVoid*)&gDb_ctSetRamGeneralC0.au16Rng_RamGeneralNeotecC0_3_6[0]},
    { &gDb_ctSetRamGeneralC0.tInf_RamGeneralNeotecC0_3_7, (TVoid*)&gDb_tRamGeneralC0.u16RamGeneralNeotecC0_3_7, (TVoid*)&gDb_ctSetRamGeneralC0.u16Def_RamGeneralNeotecC0_3_7, (TVoid*)&gDb_ctSetRamGeneralC0.au16Rng_RamGeneralNeotecC0_3_7[0]},
    { &gDb_ctSetRamGeneralC0.tInf_RamGeneralNeotecC0_3_8, (TVoid*)&gDb_tRamGeneralC0.u16RamGeneralNeotecC0_3_8, (TVoid*)&gDb_ctSetRamGeneralC0.u16Def_RamGeneralNeotecC0_3_8, (TVoid*)&gDb_ctSetRamGeneralC0.au16Rng_RamGeneralNeotecC0_3_8[0]},
    { &gDb_ctSetRamGeneralC0.tInf_RamGeneralNeotecC0_4, (TVoid*)&gDb_tRamGeneralC0.i16RamGeneralNeotecC0_4, (TVoid*)&gDb_ctSetRamGeneralC0.i16Def_RamGeneralNeotecC0_4, (TVoid*)&gDb_ctSetRamGeneralC0.ai16Rng_RamGeneralNeotecC0_4[0]},
    { &gDb_ctSetRamGeneralC0.tInf_RamGeneralNeotecC0_4_1, (TVoid*)&gDb_tRamGeneralC0.i16RamGeneralNeotecC0_4_1, (TVoid*)&gDb_ctSetRamGeneralC0.i16Def_RamGeneralNeotecC0_4_1, (TVoid*)&gDb_ctSetRamGeneralC0.ai16Rng_RamGeneralNeotecC0_4_1[0]},
    { &gDb_ctSetRamGeneralC0.tInf_RamGeneralNeotecC0_4_2, (TVoid*)&gDb_tRamGeneralC0.i16RamGeneralNeotecC0_4_2, (TVoid*)&gDb_ctSetRamGeneralC0.i16Def_RamGeneralNeotecC0_4_2, (TVoid*)&gDb_ctSetRamGeneralC0.ai16Rng_RamGeneralNeotecC0_4_2[0]},
    { &gDb_ctSetRamGeneralC0.tInf_RamGeneralNeotecC0_4_3, (TVoid*)&gDb_tRamGeneralC0.i16RamGeneralNeotecC0_4_3, (TVoid*)&gDb_ctSetRamGeneralC0.i16Def_RamGeneralNeotecC0_4_3, (TVoid*)&gDb_ctSetRamGeneralC0.ai16Rng_RamGeneralNeotecC0_4_3[0]},
    { &gDb_ctSetRamGeneralC0.tInf_RamGeneralNeotecC0_4_4, (TVoid*)&gDb_tRamGeneralC0.i16RamGeneralNeotecC0_4_4, (TVoid*)&gDb_ctSetRamGeneralC0.i16Def_RamGeneralNeotecC0_4_4, (TVoid*)&gDb_ctSetRamGeneralC0.ai16Rng_RamGeneralNeotecC0_4_4[0]},
    { &gDb_ctSetRamGeneralC0.tInf_RamGeneralNeotecC0_4_5, (TVoid*)&gDb_tRamGeneralC0.i16RamGeneralNeotecC0_4_5, (TVoid*)&gDb_ctSetRamGeneralC0.i16Def_RamGeneralNeotecC0_4_5, (TVoid*)&gDb_ctSetRamGeneralC0.ai16Rng_RamGeneralNeotecC0_4_5[0]},
    { &gDb_ctSetRamGeneralC0.tInf_RamGeneralNeotecC0_4_6, (TVoid*)&gDb_tRamGeneralC0.i16RamGeneralNeotecC0_4_6, (TVoid*)&gDb_ctSetRamGeneralC0.i16Def_RamGeneralNeotecC0_4_6, (TVoid*)&gDb_ctSetRamGeneralC0.ai16Rng_RamGeneralNeotecC0_4_6[0]},
    { &gDb_ctSetRamGeneralC0.tInf_RamGeneralNeotecC0_4_7, (TVoid*)&gDb_tRamGeneralC0.i16RamGeneralNeotecC0_4_7, (TVoid*)&gDb_ctSetRamGeneralC0.i16Def_RamGeneralNeotecC0_4_7, (TVoid*)&gDb_ctSetRamGeneralC0.ai16Rng_RamGeneralNeotecC0_4_7[0]},
    { &gDb_ctSetRamGeneralC0.tInf_RamGeneralNeotecC0_4_8, (TVoid*)&gDb_tRamGeneralC0.i16RamGeneralNeotecC0_4_8, (TVoid*)&gDb_ctSetRamGeneralC0.i16Def_RamGeneralNeotecC0_4_8, (TVoid*)&gDb_ctSetRamGeneralC0.ai16Rng_RamGeneralNeotecC0_4_8[0]},
    { &gDb_ctSetRamGeneralC0.tInf_RedLightARDBasketCmd, (TVoid*)&gDb_tRamGeneralC0.boRedLightARDBasketCmd, (TVoid*)&gDb_ctSetRamGeneralC0.boDef_RedLightARDBasketCmd, (TVoid*)&gDb_ctSetRamGeneralC0.aboRng_RedLightARDBasketCmd[0]},
    { &gDb_ctSetRamGeneralC0.tInf_WhiteLightARDBasketCmd, (TVoid*)&gDb_tRamGeneralC0.boWhiteLightARDBasketCmd, (TVoid*)&gDb_ctSetRamGeneralC0.boDef_WhiteLightARDBasketCmd, (TVoid*)&gDb_ctSetRamGeneralC0.aboRng_WhiteLightARDBasketCmd[0]},
    { &gDb_ctSetRamGeneralC0.tInf_ActiveFailure, (TVoid*)&gDb_tRamGeneralC0.boActiveFailure, (TVoid*)&gDb_ctSetRamGeneralC0.boDef_ActiveFailure, (TVoid*)&gDb_ctSetRamGeneralC0.aboRng_ActiveFailure[0]},
    { &gDb_ctSetRamGeneralC0.tInf_ReductionPumpRail, (TVoid*)&gDb_tRamGeneralC0.u8ReductionPumpRail, (TVoid*)&gDb_ctSetRamGeneralC0.u8Def_ReductionPumpRail, (TVoid*)&gDb_ctSetRamGeneralC0.au8Rng_ReductionPumpRail[0]},
    { &gDb_ctSetRamGeneralC0.tInf_ReductionPumpTrack, (TVoid*)&gDb_tRamGeneralC0.u8ReductionPumpTrack, (TVoid*)&gDb_ctSetRamGeneralC0.u8Def_ReductionPumpTrack, (TVoid*)&gDb_ctSetRamGeneralC0.au8Rng_ReductionPumpTrack[0]},
    { &gDb_ctSetRamGeneralC0.tInf_ActiveWhiteLights15746, (TVoid*)&gDb_tRamGeneralC0.boActiveWhiteLights15746, (TVoid*)&gDb_ctSetRamGeneralC0.boDef_ActiveWhiteLights15746, (TVoid*)&gDb_ctSetRamGeneralC0.aboRng_ActiveWhiteLights15746[0]},
    { &gDb_ctSetRamGeneralC0.tInf_WhiteLightAv15746Command, (TVoid*)&gDb_tRamGeneralC0.boWhiteLightAv15746Command, (TVoid*)&gDb_ctSetRamGeneralC0.boDef_WhiteLightAv15746Command, (TVoid*)&gDb_ctSetRamGeneralC0.aboRng_WhiteLightAv15746Command[0]},
    { &gDb_ctSetRamGeneralC0.tInf_WhiteLightAr15746Command, (TVoid*)&gDb_tRamGeneralC0.boWhiteLightAr15746Command, (TVoid*)&gDb_ctSetRamGeneralC0.boDef_WhiteLightAr15746Command, (TVoid*)&gDb_ctSetRamGeneralC0.aboRng_WhiteLightAr15746Command[0]},
    { &gDb_ctSetRamGeneralC0.tInf_TestElectricalIO, (TVoid*)&gDb_tRamGeneralC0.boTestElectricalIO, (TVoid*)&gDb_ctSetRamGeneralC0.boDef_TestElectricalIO, (TVoid*)&gDb_ctSetRamGeneralC0.aboRng_TestElectricalIO[0]},
    { &gDb_ctSetRamGeneralC0.tInf_SendEventDataloggerMessage, (TVoid*)&gDb_tRamGeneralC0.boSendEventDataloggerMessage, (TVoid*)&gDb_ctSetRamGeneralC0.boDef_SendEventDataloggerMessage, (TVoid*)&gDb_ctSetRamGeneralC0.aboRng_SendEventDataloggerMessage[0]},
    { &gDb_ctSetRamGeneralC0.tInf_SlopeModeFromC1, (TVoid*)&gDb_tRamGeneralC0.boSlopeModeFromC1, (TVoid*)&gDb_ctSetRamGeneralC0.boDef_SlopeModeFromC1, (TVoid*)&gDb_ctSetRamGeneralC0.aboRng_SlopeModeFromC1[0]},
    { &gDb_ctSetRamGeneralC0.tInf_BlinkLow, (TVoid*)&gDb_tRamGeneralC0.boBlinkLow, (TVoid*)&gDb_ctSetRamGeneralC0.boDef_BlinkLow, (TVoid*)&gDb_ctSetRamGeneralC0.aboRng_BlinkLow[0]},
    { &gDb_ctSetRamGeneralC0.tInf_TotalDistance, (TVoid*)&gDb_tRamGeneralC0.u32TotalDistance, (TVoid*)&gDb_ctSetRamGeneralC0.u32Def_TotalDistance, (TVoid*)&gDb_ctSetRamGeneralC0.au32Rng_TotalDistance[0]},
    { &gDb_ctSetRamGeneralC0.tInf_RunningStable48XS, (TVoid*)&gDb_tRamGeneralC0.boRunningStable48XS, (TVoid*)&gDb_ctSetRamGeneralC0.boDef_RunningStable48XS, (TVoid*)&gDb_ctSetRamGeneralC0.aboRng_RunningStable48XS[0]},
    { &gDb_ctSetRamGeneralC0.tInf_AlarmHydTempRailActive, (TVoid*)&gDb_tRamGeneralC0.boAlarmHydTempRailActive, (TVoid*)&gDb_ctSetRamGeneralC0.boDef_AlarmHydTempRailActive, (TVoid*)&gDb_ctSetRamGeneralC0.aboRng_AlarmHydTempRailActive[0]},
    { &gDb_ctSetRamGeneralC0.tInf_AlarmHydTempCrawlerActive, (TVoid*)&gDb_tRamGeneralC0.boAlarmHydTempCrawlerActive, (TVoid*)&gDb_ctSetRamGeneralC0.boDef_AlarmHydTempCrawlerActive, (TVoid*)&gDb_ctSetRamGeneralC0.aboRng_AlarmHydTempCrawlerActive[0]},
    { &gDb_ctSetRamGeneralC0.tInf_FaultyValue, (TVoid*)&gDb_tRamGeneralC0.u16FaultyValue, (TVoid*)&gDb_ctSetRamGeneralC0.u16Def_FaultyValue, (TVoid*)&gDb_ctSetRamGeneralC0.au16Rng_FaultyValue[0]},
    { &gDb_ctSetRamGeneralC0.tInf_DeviceNum, (TVoid*)&gDb_tRamGeneralC0.u8DeviceNum, (TVoid*)&gDb_ctSetRamGeneralC0.u8Def_DeviceNum, (TVoid*)&gDb_ctSetRamGeneralC0.au8Rng_DeviceNum[0]},
    { &gDb_ctSetRamGeneralC0.tInf_ErrorCode, (TVoid*)&gDb_tRamGeneralC0.u8ErrorCode, (TVoid*)&gDb_ctSetRamGeneralC0.u8Def_ErrorCode, (TVoid*)&gDb_ctSetRamGeneralC0.au8Rng_ErrorCode[0]},
    { &gDb_ctSetRamGeneralC0.tInf_EngineRunningStable, (TVoid*)&gDb_tRamGeneralC0.boEngineRunningStable, (TVoid*)&gDb_ctSetRamGeneralC0.boDef_EngineRunningStable, (TVoid*)&gDb_ctSetRamGeneralC0.aboRng_EngineRunningStable[0]}
};

const TDbVarTabNvm gDb_catVarTabNvOptionsC0[12] =
{    //!< *cptInf *vpVal *cvpDataRang *cvpDataDef cu16Adr cu16ValuePos
    { &gDb_ctSetNvOptionsC0.tInf_ConfigHollandaise, (TVoid*)&gDb_tNvOptionsC0.boConfigHollandaise, (TVoid*)&gDb_ctSetNvOptionsC0.boDef_ConfigHollandaise, (TVoid*)&gDb_ctSetNvOptionsC0.aboRng_ConfigHollandaise[0], 12, 0},
    { &gDb_ctSetNvOptionsC0.tInf_Portillon, (TVoid*)&gDb_tNvOptionsC0.boPortillon, (TVoid*)&gDb_ctSetNvOptionsC0.boDef_Portillon, (TVoid*)&gDb_ctSetNvOptionsC0.aboRng_Portillon[0], 13, 1},
    { &gDb_ctSetNvOptionsC0.tInf_Ladder, (TVoid*)&gDb_tNvOptionsC0.boLadder, (TVoid*)&gDb_ctSetNvOptionsC0.boDef_Ladder, (TVoid*)&gDb_ctSetNvOptionsC0.aboRng_Ladder[0], 14, 2},
    { &gDb_ctSetNvOptionsC0.tInf_MeasuringMat, (TVoid*)&gDb_tNvOptionsC0.boMeasuringMat, (TVoid*)&gDb_ctSetNvOptionsC0.boDef_MeasuringMat, (TVoid*)&gDb_ctSetNvOptionsC0.aboRng_MeasuringMat[0], 15, 3},
    { &gDb_ctSetNvOptionsC0.tInf_IncliBasketHighSectorForAcesSite, (TVoid*)&gDb_tNvOptionsC0.boIncliBasketHighSectorForAcesSite, (TVoid*)&gDb_ctSetNvOptionsC0.boDef_IncliBasketHighSectorForAcesSite, (TVoid*)&gDb_ctSetNvOptionsC0.aboRng_IncliBasketHighSectorForAcesSite[0], 16, 4},
    { &gDb_ctSetNvOptionsC0.tInf_BasketCenteredForAccesSite, (TVoid*)&gDb_tNvOptionsC0.boBasketCenteredForAccesSite, (TVoid*)&gDb_ctSetNvOptionsC0.boDef_BasketCenteredForAccesSite, (TVoid*)&gDb_ctSetNvOptionsC0.aboRng_BasketCenteredForAccesSite[0], 17, 5},
    { &gDb_ctSetNvOptionsC0.tInf_MastDigitalDisplay, (TVoid*)&gDb_tNvOptionsC0.boMastDigitalDisplay, (TVoid*)&gDb_ctSetNvOptionsC0.boDef_MastDigitalDisplay, (TVoid*)&gDb_ctSetNvOptionsC0.aboRng_MastDigitalDisplay[0], 18, 6},
    { &gDb_ctSetNvOptionsC0.tInf_AutorisationWorkKeyPresent, (TVoid*)&gDb_tNvOptionsC0.boAutorisationWorkKeyPresent, (TVoid*)&gDb_ctSetNvOptionsC0.boDef_AutorisationWorkKeyPresent, (TVoid*)&gDb_ctSetNvOptionsC0.aboRng_AutorisationWorkKeyPresent[0], 19, 7},
    { &gDb_ctSetNvOptionsC0.tInf_SecondParkBrakeActive, (TVoid*)&gDb_tNvOptionsC0.boSecondParkBrakeActive, (TVoid*)&gDb_ctSetNvOptionsC0.boDef_SecondParkBrakeActive, (TVoid*)&gDb_ctSetNvOptionsC0.aboRng_SecondParkBrakeActive[0], 20, 8},
    { &gDb_ctSetNvOptionsC0.tInf_AddPerformanceFunc, (TVoid*)&gDb_tNvOptionsC0.boAddPerformanceFunc, (TVoid*)&gDb_ctSetNvOptionsC0.boDef_AddPerformanceFunc, (TVoid*)&gDb_ctSetNvOptionsC0.aboRng_AddPerformanceFunc[0], 21, 9},
    { &gDb_ctSetNvOptionsC0.tInf_BasketTurretLimitation, (TVoid*)&gDb_tNvOptionsC0.boBasketTurretLimitation, (TVoid*)&gDb_ctSetNvOptionsC0.boDef_BasketTurretLimitation, (TVoid*)&gDb_ctSetNvOptionsC0.aboRng_BasketTurretLimitation[0], 22, 10},
    { &gDb_ctSetNvOptionsC0.tInf_PresenceSensorPlate, (TVoid*)&gDb_tNvOptionsC0.boPresenceSensorPlate, (TVoid*)&gDb_ctSetNvOptionsC0.boDef_PresenceSensorPlate, (TVoid*)&gDb_ctSetNvOptionsC0.aboRng_PresenceSensorPlate[0], 23, 11}
};

const TDbVarTabNvm gDb_catVarTabNvMemoryC0[20] =
{    //!< *cptInf *vpVal *cvpDataRang *cvpDataDef cu16Adr cu16ValuePos
    { &gDb_ctSetNvMemoryC0.tInf_NCycleBrakePerform, (TVoid*)&gDb_tNvMemoryC0.u16NCycleBrakePerform, (TVoid*)&gDb_ctSetNvMemoryC0.u16Def_NCycleBrakePerform, (TVoid*)&gDb_ctSetNvMemoryC0.au16Rng_NCycleBrakePerform[0], 212, 0},
    { &gDb_ctSetNvMemoryC0.tInf_LightMode, (TVoid*)&gDb_tNvMemoryC0.u8LightMode, (TVoid*)&gDb_ctSetNvMemoryC0.u8Def_LightMode, (TVoid*)&gDb_ctSetNvMemoryC0.au8Rng_LightMode[0], 214, 1},
    { &gDb_ctSetNvMemoryC0.tInf_VarMemory1, (TVoid*)&gDb_tNvMemoryC0.u8VarMemory1, (TVoid*)&gDb_ctSetNvMemoryC0.u8Def_VarMemory1, (TVoid*)&gDb_ctSetNvMemoryC0.au8Rng_VarMemory1[0], 215, 2},
    { &gDb_ctSetNvMemoryC0.tInf_VarMemory2, (TVoid*)&gDb_tNvMemoryC0.u8VarMemory2, (TVoid*)&gDb_ctSetNvMemoryC0.u8Def_VarMemory2, (TVoid*)&gDb_ctSetNvMemoryC0.au8Rng_VarMemory2[0], 216, 3},
    { &gDb_ctSetNvMemoryC0.tInf_VarMemory3, (TVoid*)&gDb_tNvMemoryC0.u8VarMemory3, (TVoid*)&gDb_ctSetNvMemoryC0.u8Def_VarMemory3, (TVoid*)&gDb_ctSetNvMemoryC0.au8Rng_VarMemory3[0], 217, 4},
    { &gDb_ctSetNvMemoryC0.tInf_VarMemory4, (TVoid*)&gDb_tNvMemoryC0.u16VarMemory4, (TVoid*)&gDb_ctSetNvMemoryC0.u16Def_VarMemory4, (TVoid*)&gDb_ctSetNvMemoryC0.au16Rng_VarMemory4[0], 218, 5},
    { &gDb_ctSetNvMemoryC0.tInf_VarMemory5, (TVoid*)&gDb_tNvMemoryC0.u16VarMemory5, (TVoid*)&gDb_ctSetNvMemoryC0.u16Def_VarMemory5, (TVoid*)&gDb_ctSetNvMemoryC0.au16Rng_VarMemory5[0], 220, 6},
    { &gDb_ctSetNvMemoryC0.tInf_VarMemory6, (TVoid*)&gDb_tNvMemoryC0.u16VarMemory6, (TVoid*)&gDb_ctSetNvMemoryC0.u16Def_VarMemory6, (TVoid*)&gDb_ctSetNvMemoryC0.au16Rng_VarMemory6[0], 222, 7},
    { &gDb_ctSetNvMemoryC0.tInf_VarMemory7, (TVoid*)&gDb_tNvMemoryC0.i16VarMemory7, (TVoid*)&gDb_ctSetNvMemoryC0.i16Def_VarMemory7, (TVoid*)&gDb_ctSetNvMemoryC0.ai16Rng_VarMemory7[0], 224, 8},
    { &gDb_ctSetNvMemoryC0.tInf_VarMemory8, (TVoid*)&gDb_tNvMemoryC0.i16VarMemory8, (TVoid*)&gDb_ctSetNvMemoryC0.i16Def_VarMemory8, (TVoid*)&gDb_ctSetNvMemoryC0.ai16Rng_VarMemory8[0], 226, 9},
    { &gDb_ctSetNvMemoryC0.tInf_VarMemory9, (TVoid*)&gDb_tNvMemoryC0.i16VarMemory9, (TVoid*)&gDb_ctSetNvMemoryC0.i16Def_VarMemory9, (TVoid*)&gDb_ctSetNvMemoryC0.ai16Rng_VarMemory9[0], 228, 10},
    { &gDb_ctSetNvMemoryC0.tInf_VarMemory10, (TVoid*)&gDb_tNvMemoryC0.boVarMemory10, (TVoid*)&gDb_ctSetNvMemoryC0.boDef_VarMemory10, (TVoid*)&gDb_ctSetNvMemoryC0.aboRng_VarMemory10[0], 230, 11},
    { &gDb_ctSetNvMemoryC0.tInf_VarMemory11, (TVoid*)&gDb_tNvMemoryC0.boVarMemory11, (TVoid*)&gDb_ctSetNvMemoryC0.boDef_VarMemory11, (TVoid*)&gDb_ctSetNvMemoryC0.aboRng_VarMemory11[0], 231, 12},
    { &gDb_ctSetNvMemoryC0.tInf_VarMemory12, (TVoid*)&gDb_tNvMemoryC0.boVarMemory12, (TVoid*)&gDb_ctSetNvMemoryC0.boDef_VarMemory12, (TVoid*)&gDb_ctSetNvMemoryC0.aboRng_VarMemory12[0], 232, 13},
    { &gDb_ctSetNvMemoryC0.tInf_VarMemory13, (TVoid*)&gDb_tNvMemoryC0.boVarMemory13, (TVoid*)&gDb_ctSetNvMemoryC0.boDef_VarMemory13, (TVoid*)&gDb_ctSetNvMemoryC0.aboRng_VarMemory13[0], 233, 14},
    { &gDb_ctSetNvMemoryC0.tInf_VarMemory14, (TVoid*)&gDb_tNvMemoryC0.boVarMemory14, (TVoid*)&gDb_ctSetNvMemoryC0.boDef_VarMemory14, (TVoid*)&gDb_ctSetNvMemoryC0.aboRng_VarMemory14[0], 234, 15},
    { &gDb_ctSetNvMemoryC0.tInf_gDistanceTraveledMeasureMast, (TVoid*)&gDb_tNvMemoryC0.i32gDistanceTraveledMeasureMast, (TVoid*)&gDb_ctSetNvMemoryC0.i32Def_gDistanceTraveledMeasureMast, (TVoid*)&gDb_ctSetNvMemoryC0.ai32Rng_gDistanceTraveledMeasureMast[0], 235, 16},
    { &gDb_ctSetNvMemoryC0.tInf_NCycle2ndParkBrakePerform, (TVoid*)&gDb_tNvMemoryC0.u16NCycle2ndParkBrakePerform, (TVoid*)&gDb_ctSetNvMemoryC0.u16Def_NCycle2ndParkBrakePerform, (TVoid*)&gDb_ctSetNvMemoryC0.au16Rng_NCycle2ndParkBrakePerform[0], 239, 17},
    { &gDb_ctSetNvMemoryC0.tInf_gTotalDistanceMsb, (TVoid*)&gDb_tNvMemoryC0.u16gTotalDistanceMsb, (TVoid*)&gDb_ctSetNvMemoryC0.u16Def_gTotalDistanceMsb, (TVoid*)&gDb_ctSetNvMemoryC0.au16Rng_gTotalDistanceMsb[0], 241, 18},
    { &gDb_ctSetNvMemoryC0.tInf_gTotalDistanceLsb, (TVoid*)&gDb_tNvMemoryC0.u16gTotalDistanceLsb, (TVoid*)&gDb_ctSetNvMemoryC0.u16Def_gTotalDistanceLsb, (TVoid*)&gDb_ctSetNvMemoryC0.au16Rng_gTotalDistanceLsb[0], 243, 19}
};

const TDbVarTabNvm gDb_catVarTabNvParametersC0[101] =
{    //!< *cptInf *vpVal *cvpDataRang *cvpDataDef cu16Adr cu16ValuePos
    { &gDb_ctSetNvParametersC0.tInf_LimitTresholdAngleRadioControl, (TVoid*)&gDb_tNvParametersC0.u16LimitTresholdAngleRadioControl, (TVoid*)&gDb_ctSetNvParametersC0.u16Def_LimitTresholdAngleRadioControl, (TVoid*)&gDb_ctSetNvParametersC0.au16Rng_LimitTresholdAngleRadioControl[0], 412, 0},
    { &gDb_ctSetNvParametersC0.tInf_TresholdMinimalSpeedParkBrake, (TVoid*)&gDb_tNvParametersC0.u16TresholdMinimalSpeedParkBrake, (TVoid*)&gDb_ctSetNvParametersC0.u16Def_TresholdMinimalSpeedParkBrake, (TVoid*)&gDb_ctSetNvParametersC0.au16Rng_TresholdMinimalSpeedParkBrake[0], 414, 1},
    { &gDb_ctSetNvParametersC0.tInf_TresholdMinimalSpeedServiceBrake, (TVoid*)&gDb_tNvParametersC0.u16TresholdMinimalSpeedServiceBrake, (TVoid*)&gDb_ctSetNvParametersC0.u16Def_TresholdMinimalSpeedServiceBrake, (TVoid*)&gDb_ctSetNvParametersC0.au16Rng_TresholdMinimalSpeedServiceBrake[0], 416, 2},
    { &gDb_ctSetNvParametersC0.tInf_AdditionnalPourcentFwardPumpCmd, (TVoid*)&gDb_tNvParametersC0.u8AdditionnalPourcentFwardPumpCmd, (TVoid*)&gDb_ctSetNvParametersC0.u8Def_AdditionnalPourcentFwardPumpCmd, (TVoid*)&gDb_ctSetNvParametersC0.au8Rng_AdditionnalPourcentFwardPumpCmd[0], 418, 3},
    { &gDb_ctSetNvParametersC0.tInf_AddPrctFwardPumpSilentModeMotor, (TVoid*)&gDb_tNvParametersC0.u8AddPrctFwardPumpSilentModeMotor, (TVoid*)&gDb_ctSetNvParametersC0.u8Def_AddPrctFwardPumpSilentModeMotor, (TVoid*)&gDb_ctSetNvParametersC0.au8Rng_AddPrctFwardPumpSilentModeMotor[0], 419, 4},
    { &gDb_ctSetNvParametersC0.tInf_NodeIdRadioCommand, (TVoid*)&gDb_tNvParametersC0.u8NodeIdRadioCommand, (TVoid*)&gDb_ctSetNvParametersC0.u8Def_NodeIdRadioCommand, (TVoid*)&gDb_ctSetNvParametersC0.au8Rng_NodeIdRadioCommand[0], 420, 5},
    { &gDb_ctSetNvParametersC0.tInf_DeadZoneJoystickRotationTurret, (TVoid*)&gDb_tNvParametersC0.u8DeadZoneJoystickRotationTurret, (TVoid*)&gDb_ctSetNvParametersC0.u8Def_DeadZoneJoystickRotationTurret, (TVoid*)&gDb_ctSetNvParametersC0.au8Rng_DeadZoneJoystickRotationTurret[0], 421, 6},
    { &gDb_ctSetNvParametersC0.tInf_ServiceAxleBrakeTimeBeforeBrake, (TVoid*)&gDb_tNvParametersC0.u32ServiceAxleBrakeTimeBeforeBrake, (TVoid*)&gDb_ctSetNvParametersC0.u32Def_ServiceAxleBrakeTimeBeforeBrake, (TVoid*)&gDb_ctSetNvParametersC0.au32Rng_ServiceAxleBrakeTimeBeforeBrake[0], 422, 7},
    { &gDb_ctSetNvParametersC0.tInf_ServiceBrakeOffrailTime, (TVoid*)&gDb_tNvParametersC0.u32ServiceBrakeOffrailTime, (TVoid*)&gDb_ctSetNvParametersC0.u32Def_ServiceBrakeOffrailTime, (TVoid*)&gDb_ctSetNvParametersC0.au32Rng_ServiceBrakeOffrailTime[0], 426, 8},
    { &gDb_ctSetNvParametersC0.tInf_EngineOffCurEvForwardPump, (TVoid*)&gDb_tNvParametersC0.u16EngineOffCurEvForwardPump, (TVoid*)&gDb_ctSetNvParametersC0.u16Def_EngineOffCurEvForwardPump, (TVoid*)&gDb_ctSetNvParametersC0.au16Rng_EngineOffCurEvForwardPump[0], 430, 9},
    { &gDb_ctSetNvParametersC0.tInf_MinCurEvForwardPump, (TVoid*)&gDb_tNvParametersC0.u16MinCurEvForwardPump, (TVoid*)&gDb_ctSetNvParametersC0.u16Def_MinCurEvForwardPump, (TVoid*)&gDb_ctSetNvParametersC0.au16Rng_MinCurEvForwardPump[0], 432, 10},
    { &gDb_ctSetNvParametersC0.tInf_StopCurEvForwardPump, (TVoid*)&gDb_tNvParametersC0.u16StopCurEvForwardPump, (TVoid*)&gDb_ctSetNvParametersC0.u16Def_StopCurEvForwardPump, (TVoid*)&gDb_ctSetNvParametersC0.au16Rng_StopCurEvForwardPump[0], 434, 11},
    { &gDb_ctSetNvParametersC0.tInf_EngineOffCurEvBackwardPump, (TVoid*)&gDb_tNvParametersC0.u16EngineOffCurEvBackwardPump, (TVoid*)&gDb_ctSetNvParametersC0.u16Def_EngineOffCurEvBackwardPump, (TVoid*)&gDb_ctSetNvParametersC0.au16Rng_EngineOffCurEvBackwardPump[0], 436, 12},
    { &gDb_ctSetNvParametersC0.tInf_MinCurEvBackwardPump, (TVoid*)&gDb_tNvParametersC0.u16MinCurEvBackwardPump, (TVoid*)&gDb_ctSetNvParametersC0.u16Def_MinCurEvBackwardPump, (TVoid*)&gDb_ctSetNvParametersC0.au16Rng_MinCurEvBackwardPump[0], 438, 13},
    { &gDb_ctSetNvParametersC0.tInf_StopCurEvBackwardPump, (TVoid*)&gDb_tNvParametersC0.u16StopCurEvBackwardPump, (TVoid*)&gDb_ctSetNvParametersC0.u16Def_StopCurEvBackwardPump, (TVoid*)&gDb_ctSetNvParametersC0.au16Rng_StopCurEvBackwardPump[0], 440, 14},
    { &gDb_ctSetNvParametersC0.tInf_PosNeutralJoyAdvancement, (TVoid*)&gDb_tNvParametersC0.u8PosNeutralJoyAdvancement, (TVoid*)&gDb_ctSetNvParametersC0.u8Def_PosNeutralJoyAdvancement, (TVoid*)&gDb_ctSetNvParametersC0.au8Rng_PosNeutralJoyAdvancement[0], 442, 15},
    { &gDb_ctSetNvParametersC0.tInf_PidGpEvForwardPump, (TVoid*)&gDb_tNvParametersC0.u16PidGpEvForwardPump, (TVoid*)&gDb_ctSetNvParametersC0.u16Def_PidGpEvForwardPump, (TVoid*)&gDb_ctSetNvParametersC0.au16Rng_PidGpEvForwardPump[0], 443, 16},
    { &gDb_ctSetNvParametersC0.tInf_PidTiEvForwardPump, (TVoid*)&gDb_tNvParametersC0.u16PidTiEvForwardPump, (TVoid*)&gDb_ctSetNvParametersC0.u16Def_PidTiEvForwardPump, (TVoid*)&gDb_ctSetNvParametersC0.au16Rng_PidTiEvForwardPump[0], 445, 17},
    { &gDb_ctSetNvParametersC0.tInf_PidTdEvForwardPump, (TVoid*)&gDb_tNvParametersC0.u16PidTdEvForwardPump, (TVoid*)&gDb_ctSetNvParametersC0.u16Def_PidTdEvForwardPump, (TVoid*)&gDb_ctSetNvParametersC0.au16Rng_PidTdEvForwardPump[0], 447, 18},
    { &gDb_ctSetNvParametersC0.tInf_PidGpEvBackwardPump, (TVoid*)&gDb_tNvParametersC0.u16PidGpEvBackwardPump, (TVoid*)&gDb_ctSetNvParametersC0.u16Def_PidGpEvBackwardPump, (TVoid*)&gDb_ctSetNvParametersC0.au16Rng_PidGpEvBackwardPump[0], 449, 19},
    { &gDb_ctSetNvParametersC0.tInf_PidTiEvBackwardPump, (TVoid*)&gDb_tNvParametersC0.u16PidTiEvBackwardPump, (TVoid*)&gDb_ctSetNvParametersC0.u16Def_PidTiEvBackwardPump, (TVoid*)&gDb_ctSetNvParametersC0.au16Rng_PidTiEvBackwardPump[0], 451, 20},
    { &gDb_ctSetNvParametersC0.tInf_PidTdEvBackwardPump, (TVoid*)&gDb_tNvParametersC0.u16PidTdEvBackwardPump, (TVoid*)&gDb_ctSetNvParametersC0.u16Def_PidTdEvBackwardPump, (TVoid*)&gDb_ctSetNvParametersC0.au16Rng_PidTdEvBackwardPump[0], 453, 21},
    { &gDb_ctSetNvParametersC0.tInf_OutCharPosPressureBlockOscil, (TVoid*)&gDb_tNvParametersC0.i16OutCharPosPressureBlockOscil, (TVoid*)&gDb_ctSetNvParametersC0.i16Def_OutCharPosPressureBlockOscil, (TVoid*)&gDb_ctSetNvParametersC0.ai16Rng_OutCharPosPressureBlockOscil[0], 455, 22},
    { &gDb_ctSetNvParametersC0.tInf_OutCharNeuPressureBlockOscil, (TVoid*)&gDb_tNvParametersC0.i16OutCharNeuPressureBlockOscil, (TVoid*)&gDb_ctSetNvParametersC0.i16Def_OutCharNeuPressureBlockOscil, (TVoid*)&gDb_ctSetNvParametersC0.ai16Rng_OutCharNeuPressureBlockOscil[0], 457, 23},
    { &gDb_ctSetNvParametersC0.tInf_OutCharNegPressureBlockOscil, (TVoid*)&gDb_tNvParametersC0.i16OutCharNegPressureBlockOscil, (TVoid*)&gDb_ctSetNvParametersC0.i16Def_OutCharNegPressureBlockOscil, (TVoid*)&gDb_ctSetNvParametersC0.ai16Rng_OutCharNegPressureBlockOscil[0], 459, 24},
    { &gDb_ctSetNvParametersC0.tInf_OutCharPosPressureBrake, (TVoid*)&gDb_tNvParametersC0.i16OutCharPosPressureBrake, (TVoid*)&gDb_ctSetNvParametersC0.i16Def_OutCharPosPressureBrake, (TVoid*)&gDb_ctSetNvParametersC0.ai16Rng_OutCharPosPressureBrake[0], 461, 25},
    { &gDb_ctSetNvParametersC0.tInf_OutCharNeuPressureBrake, (TVoid*)&gDb_tNvParametersC0.i16OutCharNeuPressureBrake, (TVoid*)&gDb_ctSetNvParametersC0.i16Def_OutCharNeuPressureBrake, (TVoid*)&gDb_ctSetNvParametersC0.ai16Rng_OutCharNeuPressureBrake[0], 463, 26},
    { &gDb_ctSetNvParametersC0.tInf_OutCharNegPressureBrake, (TVoid*)&gDb_tNvParametersC0.i16OutCharNegPressureBrake, (TVoid*)&gDb_ctSetNvParametersC0.i16Def_OutCharNegPressureBrake, (TVoid*)&gDb_ctSetNvParametersC0.ai16Rng_OutCharNegPressureBrake[0], 465, 27},
    { &gDb_ctSetNvParametersC0.tInf_OutCharPosTempTransmission, (TVoid*)&gDb_tNvParametersC0.i16OutCharPosTempTransmission, (TVoid*)&gDb_ctSetNvParametersC0.i16Def_OutCharPosTempTransmission, (TVoid*)&gDb_ctSetNvParametersC0.ai16Rng_OutCharPosTempTransmission[0], 467, 28},
    { &gDb_ctSetNvParametersC0.tInf_OutCharNeuTempTransmission, (TVoid*)&gDb_tNvParametersC0.i16OutCharNeuTempTransmission, (TVoid*)&gDb_ctSetNvParametersC0.i16Def_OutCharNeuTempTransmission, (TVoid*)&gDb_ctSetNvParametersC0.ai16Rng_OutCharNeuTempTransmission[0], 469, 29},
    { &gDb_ctSetNvParametersC0.tInf_OutCharNegTempTransmission, (TVoid*)&gDb_tNvParametersC0.i16OutCharNegTempTransmission, (TVoid*)&gDb_ctSetNvParametersC0.i16Def_OutCharNegTempTransmission, (TVoid*)&gDb_ctSetNvParametersC0.ai16Rng_OutCharNegTempTransmission[0], 471, 30},
    { &gDb_ctSetNvParametersC0.tInf_MinConsigneEvForwardRail, (TVoid*)&gDb_tNvParametersC0.i16MinConsigneEvForwardRail, (TVoid*)&gDb_ctSetNvParametersC0.i16Def_MinConsigneEvForwardRail, (TVoid*)&gDb_ctSetNvParametersC0.ai16Rng_MinConsigneEvForwardRail[0], 473, 31},
    { &gDb_ctSetNvParametersC0.tInf_MaxConsigneEvForwardRail, (TVoid*)&gDb_tNvParametersC0.i16MaxConsigneEvForwardRail, (TVoid*)&gDb_ctSetNvParametersC0.i16Def_MaxConsigneEvForwardRail, (TVoid*)&gDb_ctSetNvParametersC0.ai16Rng_MaxConsigneEvForwardRail[0], 475, 32},
    { &gDb_ctSetNvParametersC0.tInf_MinConsigneEvBackwardRail, (TVoid*)&gDb_tNvParametersC0.i16MinConsigneEvBackwardRail, (TVoid*)&gDb_ctSetNvParametersC0.i16Def_MinConsigneEvBackwardRail, (TVoid*)&gDb_ctSetNvParametersC0.ai16Rng_MinConsigneEvBackwardRail[0], 477, 33},
    { &gDb_ctSetNvParametersC0.tInf_MaxConsigneEvBackwardRail, (TVoid*)&gDb_tNvParametersC0.i16MaxConsigneEvBackwardRail, (TVoid*)&gDb_ctSetNvParametersC0.i16Def_MaxConsigneEvBackwardRail, (TVoid*)&gDb_ctSetNvParametersC0.ai16Rng_MaxConsigneEvBackwardRail[0], 479, 34},
    { &gDb_ctSetNvParametersC0.tInf_TimeRampEvAdvancementRail, (TVoid*)&gDb_tNvParametersC0.au16TimeRampEvAdvancementRail[0], (TVoid*)&gDb_ctSetNvParametersC0.au16Def_TimeRampEvAdvancementRail[0], (TVoid*)&gDb_ctSetNvParametersC0.aau16Rng_TimeRampEvAdvancementRail[0][0], 481, 35},
    { &gDb_ctSetNvParametersC0.tInf_MinConsigneEvForwardCrawler, (TVoid*)&gDb_tNvParametersC0.i16MinConsigneEvForwardCrawler, (TVoid*)&gDb_ctSetNvParametersC0.i16Def_MinConsigneEvForwardCrawler, (TVoid*)&gDb_ctSetNvParametersC0.ai16Rng_MinConsigneEvForwardCrawler[0], 489, 39},
    { &gDb_ctSetNvParametersC0.tInf_MaxConsigneEvForwardCrawler, (TVoid*)&gDb_tNvParametersC0.i16MaxConsigneEvForwardCrawler, (TVoid*)&gDb_ctSetNvParametersC0.i16Def_MaxConsigneEvForwardCrawler, (TVoid*)&gDb_ctSetNvParametersC0.ai16Rng_MaxConsigneEvForwardCrawler[0], 491, 40},
    { &gDb_ctSetNvParametersC0.tInf_EvForwardCrawlerAdvanceRampRatio, (TVoid*)&gDb_tNvParametersC0.au16EvForwardCrawlerAdvanceRampRatio[0], (TVoid*)&gDb_ctSetNvParametersC0.au16Def_EvForwardCrawlerAdvanceRampRatio[0], (TVoid*)&gDb_ctSetNvParametersC0.aau16Rng_EvForwardCrawlerAdvanceRampRatio[0][0], 493, 41},
    { &gDb_ctSetNvParametersC0.tInf_TresholdRegimeMotorParkBrake, (TVoid*)&gDb_tNvParametersC0.u16TresholdRegimeMotorParkBrake, (TVoid*)&gDb_ctSetNvParametersC0.u16Def_TresholdRegimeMotorParkBrake, (TVoid*)&gDb_ctSetNvParametersC0.au16Rng_TresholdRegimeMotorParkBrake[0], 497, 43},
    { &gDb_ctSetNvParametersC0.tInf_MinPvgLeftTrackAv, (TVoid*)&gDb_tNvParametersC0.u8MinPvgLeftTrackAv, (TVoid*)&gDb_ctSetNvParametersC0.u8Def_MinPvgLeftTrackAv, (TVoid*)&gDb_ctSetNvParametersC0.au8Rng_MinPvgLeftTrackAv[0], 499, 44},
    { &gDb_ctSetNvParametersC0.tInf_MaxPvgLeftTrackAv, (TVoid*)&gDb_tNvParametersC0.u8MaxPvgLeftTrackAv, (TVoid*)&gDb_ctSetNvParametersC0.u8Def_MaxPvgLeftTrackAv, (TVoid*)&gDb_ctSetNvParametersC0.au8Rng_MaxPvgLeftTrackAv[0], 500, 45},
    { &gDb_ctSetNvParametersC0.tInf_MinPvgLeftTrackAr, (TVoid*)&gDb_tNvParametersC0.u8MinPvgLeftTrackAr, (TVoid*)&gDb_ctSetNvParametersC0.u8Def_MinPvgLeftTrackAr, (TVoid*)&gDb_ctSetNvParametersC0.au8Rng_MinPvgLeftTrackAr[0], 501, 46},
    { &gDb_ctSetNvParametersC0.tInf_MaxPvgLeftTrackAr, (TVoid*)&gDb_tNvParametersC0.u8MaxPvgLeftTrackAr, (TVoid*)&gDb_ctSetNvParametersC0.u8Def_MaxPvgLeftTrackAr, (TVoid*)&gDb_ctSetNvParametersC0.au8Rng_MaxPvgLeftTrackAr[0], 502, 47},
    { &gDb_ctSetNvParametersC0.tInf_MinPvgRightTrackAv, (TVoid*)&gDb_tNvParametersC0.u8MinPvgRightTrackAv, (TVoid*)&gDb_ctSetNvParametersC0.u8Def_MinPvgRightTrackAv, (TVoid*)&gDb_ctSetNvParametersC0.au8Rng_MinPvgRightTrackAv[0], 503, 48},
    { &gDb_ctSetNvParametersC0.tInf_MaxPvgRightTrackAv, (TVoid*)&gDb_tNvParametersC0.u8MaxPvgRightTrackAv, (TVoid*)&gDb_ctSetNvParametersC0.u8Def_MaxPvgRightTrackAv, (TVoid*)&gDb_ctSetNvParametersC0.au8Rng_MaxPvgRightTrackAv[0], 504, 49},
    { &gDb_ctSetNvParametersC0.tInf_MinPvgRightTrackAr, (TVoid*)&gDb_tNvParametersC0.u8MinPvgRightTrackAr, (TVoid*)&gDb_ctSetNvParametersC0.u8Def_MinPvgRightTrackAr, (TVoid*)&gDb_ctSetNvParametersC0.au8Rng_MinPvgRightTrackAr[0], 505, 50},
    { &gDb_ctSetNvParametersC0.tInf_MaxPvgRightTrackAr, (TVoid*)&gDb_tNvParametersC0.u8MaxPvgRightTrackAr, (TVoid*)&gDb_ctSetNvParametersC0.u8Def_MaxPvgRightTrackAr, (TVoid*)&gDb_ctSetNvParametersC0.au8Rng_MaxPvgRightTrackAr[0], 506, 51},
    { &gDb_ctSetNvParametersC0.tInf_TimeRampLeftTrack, (TVoid*)&gDb_tNvParametersC0.au16TimeRampLeftTrack[0], (TVoid*)&gDb_ctSetNvParametersC0.au16Def_TimeRampLeftTrack[0], (TVoid*)&gDb_ctSetNvParametersC0.aau16Rng_TimeRampLeftTrack[0][0], 507, 52},
    { &gDb_ctSetNvParametersC0.tInf_TimeRampRightTrack, (TVoid*)&gDb_tNvParametersC0.au16TimeRampRightTrack[0], (TVoid*)&gDb_ctSetNvParametersC0.au16Def_TimeRampRightTrack[0], (TVoid*)&gDb_ctSetNvParametersC0.aau16Rng_TimeRampRightTrack[0][0], 515, 56},
    { &gDb_ctSetNvParametersC0.tInf_TimeStabilizedStopDetection, (TVoid*)&gDb_tNvParametersC0.u32TimeStabilizedStopDetection, (TVoid*)&gDb_ctSetNvParametersC0.u32Def_TimeStabilizedStopDetection, (TVoid*)&gDb_ctSetNvParametersC0.au32Rng_TimeStabilizedStopDetection[0], 523, 60},
    { &gDb_ctSetNvParametersC0.tInf_TresholdLowSpeedStabilizedStop, (TVoid*)&gDb_tNvParametersC0.i32TresholdLowSpeedStabilizedStop, (TVoid*)&gDb_ctSetNvParametersC0.i32Def_TresholdLowSpeedStabilizedStop, (TVoid*)&gDb_ctSetNvParametersC0.ai32Rng_TresholdLowSpeedStabilizedStop[0], 527, 61},
    { &gDb_ctSetNvParametersC0.tInf_TimeEmergencyServiceBrake, (TVoid*)&gDb_tNvParametersC0.u32TimeEmergencyServiceBrake, (TVoid*)&gDb_ctSetNvParametersC0.u32Def_TimeEmergencyServiceBrake, (TVoid*)&gDb_ctSetNvParametersC0.au32Rng_TimeEmergencyServiceBrake[0], 531, 62},
    { &gDb_ctSetNvParametersC0.tInf_TimeStoppedMachineUnblockOscAxle, (TVoid*)&gDb_tNvParametersC0.u32TimeStoppedMachineUnblockOscAxle, (TVoid*)&gDb_ctSetNvParametersC0.u32Def_TimeStoppedMachineUnblockOscAxle, (TVoid*)&gDb_ctSetNvParametersC0.au32Rng_TimeStoppedMachineUnblockOscAxle[0], 535, 63},
    { &gDb_ctSetNvParametersC0.tInf_TresholdLowSpeedUnblockOsciAxle, (TVoid*)&gDb_tNvParametersC0.i32TresholdLowSpeedUnblockOsciAxle, (TVoid*)&gDb_ctSetNvParametersC0.i32Def_TresholdLowSpeedUnblockOsciAxle, (TVoid*)&gDb_ctSetNvParametersC0.ai32Rng_TresholdLowSpeedUnblockOsciAxle[0], 539, 64},
    { &gDb_ctSetNvParametersC0.tInf_GapMaxPvgCrawlerAdvancement, (TVoid*)&gDb_tNvParametersC0.u16GapMaxPvgCrawlerAdvancement, (TVoid*)&gDb_ctSetNvParametersC0.u16Def_GapMaxPvgCrawlerAdvancement, (TVoid*)&gDb_ctSetNvParametersC0.au16Rng_GapMaxPvgCrawlerAdvancement[0], 543, 65},
    { &gDb_ctSetNvParametersC0.tInf_GapMaxInvertedPvgCrawler, (TVoid*)&gDb_tNvParametersC0.u16GapMaxInvertedPvgCrawler, (TVoid*)&gDb_ctSetNvParametersC0.u16Def_GapMaxInvertedPvgCrawler, (TVoid*)&gDb_ctSetNvParametersC0.au16Rng_GapMaxInvertedPvgCrawler[0], 545, 66},
    { &gDb_ctSetNvParametersC0.tInf_TresholdAnaToBoForInputs48Xs, (TVoid*)&gDb_tNvParametersC0.u16TresholdAnaToBoForInputs48Xs, (TVoid*)&gDb_ctSetNvParametersC0.u16Def_TresholdAnaToBoForInputs48Xs, (TVoid*)&gDb_ctSetNvParametersC0.au16Rng_TresholdAnaToBoForInputs48Xs[0], 547, 67},
    { &gDb_ctSetNvParametersC0.tInf_InMinJoystickAdvance, (TVoid*)&gDb_tNvParametersC0.u16InMinJoystickAdvance, (TVoid*)&gDb_ctSetNvParametersC0.u16Def_InMinJoystickAdvance, (TVoid*)&gDb_ctSetNvParametersC0.au16Rng_InMinJoystickAdvance[0], 549, 68},
    { &gDb_ctSetNvParametersC0.tInf_InMaxJoystickAdvance, (TVoid*)&gDb_tNvParametersC0.u16InMaxJoystickAdvance, (TVoid*)&gDb_ctSetNvParametersC0.u16Def_InMaxJoystickAdvance, (TVoid*)&gDb_ctSetNvParametersC0.au16Rng_InMaxJoystickAdvance[0], 551, 69},
    { &gDb_ctSetNvParametersC0.tInf_SpeedMiniTresholdServiceBrake, (TVoid*)&gDb_tNvParametersC0.u16SpeedMiniTresholdServiceBrake, (TVoid*)&gDb_ctSetNvParametersC0.u16Def_SpeedMiniTresholdServiceBrake, (TVoid*)&gDb_ctSetNvParametersC0.au16Rng_SpeedMiniTresholdServiceBrake[0], 553, 70},
    { &gDb_ctSetNvParametersC0.tInf_NbElementAverageSlopeTransAngle, (TVoid*)&gDb_tNvParametersC0.u8NbElementAverageSlopeTransAngle, (TVoid*)&gDb_ctSetNvParametersC0.u8Def_NbElementAverageSlopeTransAngle, (TVoid*)&gDb_ctSetNvParametersC0.au8Rng_NbElementAverageSlopeTransAngle[0], 555, 71},
    { &gDb_ctSetNvParametersC0.tInf_NbElementAverageSlopeLongAngle, (TVoid*)&gDb_tNvParametersC0.u8NbElementAverageSlopeLongAngle, (TVoid*)&gDb_ctSetNvParametersC0.u8Def_NbElementAverageSlopeLongAngle, (TVoid*)&gDb_ctSetNvParametersC0.au8Rng_NbElementAverageSlopeLongAngle[0], 556, 72},
    { &gDb_ctSetNvParametersC0.tInf_DeadZoneJoystickRailAdvancement, (TVoid*)&gDb_tNvParametersC0.u8DeadZoneJoystickRailAdvancement, (TVoid*)&gDb_ctSetNvParametersC0.u8Def_DeadZoneJoystickRailAdvancement, (TVoid*)&gDb_ctSetNvParametersC0.au8Rng_DeadZoneJoystickRailAdvancement[0], 557, 73},
    { &gDb_ctSetNvParametersC0.tInf_NbElementAverageSlopeTransAngle2, (TVoid*)&gDb_tNvParametersC0.u8NbElementAverageSlopeTransAngle2, (TVoid*)&gDb_ctSetNvParametersC0.u8Def_NbElementAverageSlopeTransAngle2, (TVoid*)&gDb_ctSetNvParametersC0.au8Rng_NbElementAverageSlopeTransAngle2[0], 558, 74},
    { &gDb_ctSetNvParametersC0.tInf_NbElementAverageSlopeLongAngle2, (TVoid*)&gDb_tNvParametersC0.u8NbElementAverageSlopeLongAngle2, (TVoid*)&gDb_ctSetNvParametersC0.u8Def_NbElementAverageSlopeLongAngle2, (TVoid*)&gDb_ctSetNvParametersC0.au8Rng_NbElementAverageSlopeLongAngle2[0], 559, 75},
    { &gDb_ctSetNvParametersC0.tInf_NvParametersC0_1, (TVoid*)&gDb_tNvParametersC0.boNvParametersC0_1, (TVoid*)&gDb_ctSetNvParametersC0.boDef_NvParametersC0_1, (TVoid*)&gDb_ctSetNvParametersC0.aboRng_NvParametersC0_1[0], 560, 76},
    { &gDb_ctSetNvParametersC0.tInf_NvParametersC0_2, (TVoid*)&gDb_tNvParametersC0.boNvParametersC0_2, (TVoid*)&gDb_ctSetNvParametersC0.boDef_NvParametersC0_2, (TVoid*)&gDb_ctSetNvParametersC0.aboRng_NvParametersC0_2[0], 561, 77},
    { &gDb_ctSetNvParametersC0.tInf_NvParametersC0_3, (TVoid*)&gDb_tNvParametersC0.boNvParametersC0_3, (TVoid*)&gDb_ctSetNvParametersC0.boDef_NvParametersC0_3, (TVoid*)&gDb_ctSetNvParametersC0.aboRng_NvParametersC0_3[0], 562, 78},
    { &gDb_ctSetNvParametersC0.tInf_NvParametersC0_4, (TVoid*)&gDb_tNvParametersC0.boNvParametersC0_4, (TVoid*)&gDb_ctSetNvParametersC0.boDef_NvParametersC0_4, (TVoid*)&gDb_ctSetNvParametersC0.aboRng_NvParametersC0_4[0], 563, 79},
    { &gDb_ctSetNvParametersC0.tInf_NvParametersC0_5, (TVoid*)&gDb_tNvParametersC0.boNvParametersC0_5, (TVoid*)&gDb_ctSetNvParametersC0.boDef_NvParametersC0_5, (TVoid*)&gDb_ctSetNvParametersC0.aboRng_NvParametersC0_5[0], 564, 80},
    { &gDb_ctSetNvParametersC0.tInf_NvParametersC0_6, (TVoid*)&gDb_tNvParametersC0.u8NvParametersC0_6, (TVoid*)&gDb_ctSetNvParametersC0.u8Def_NvParametersC0_6, (TVoid*)&gDb_ctSetNvParametersC0.au8Rng_NvParametersC0_6[0], 565, 81},
    { &gDb_ctSetNvParametersC0.tInf_NvParametersC0_7, (TVoid*)&gDb_tNvParametersC0.u8NvParametersC0_7, (TVoid*)&gDb_ctSetNvParametersC0.u8Def_NvParametersC0_7, (TVoid*)&gDb_ctSetNvParametersC0.au8Rng_NvParametersC0_7[0], 566, 82},
    { &gDb_ctSetNvParametersC0.tInf_NvParametersC0_8, (TVoid*)&gDb_tNvParametersC0.u8NvParametersC0_8, (TVoid*)&gDb_ctSetNvParametersC0.u8Def_NvParametersC0_8, (TVoid*)&gDb_ctSetNvParametersC0.au8Rng_NvParametersC0_8[0], 567, 83},
    { &gDb_ctSetNvParametersC0.tInf_NvParametersC0_9, (TVoid*)&gDb_tNvParametersC0.u8NvParametersC0_9, (TVoid*)&gDb_ctSetNvParametersC0.u8Def_NvParametersC0_9, (TVoid*)&gDb_ctSetNvParametersC0.au8Rng_NvParametersC0_9[0], 568, 84},
    { &gDb_ctSetNvParametersC0.tInf_NvParametersC0_10, (TVoid*)&gDb_tNvParametersC0.u16NvParametersC0_10, (TVoid*)&gDb_ctSetNvParametersC0.u16Def_NvParametersC0_10, (TVoid*)&gDb_ctSetNvParametersC0.au16Rng_NvParametersC0_10[0], 569, 85},
    { &gDb_ctSetNvParametersC0.tInf_NvParametersC0_11, (TVoid*)&gDb_tNvParametersC0.u16NvParametersC0_11, (TVoid*)&gDb_ctSetNvParametersC0.u16Def_NvParametersC0_11, (TVoid*)&gDb_ctSetNvParametersC0.au16Rng_NvParametersC0_11[0], 571, 86},
    { &gDb_ctSetNvParametersC0.tInf_NvParametersC0_12, (TVoid*)&gDb_tNvParametersC0.u16NvParametersC0_12, (TVoid*)&gDb_ctSetNvParametersC0.u16Def_NvParametersC0_12, (TVoid*)&gDb_ctSetNvParametersC0.au16Rng_NvParametersC0_12[0], 573, 87},
    { &gDb_ctSetNvParametersC0.tInf_NvParametersC0_13, (TVoid*)&gDb_tNvParametersC0.u16NvParametersC0_13, (TVoid*)&gDb_ctSetNvParametersC0.u16Def_NvParametersC0_13, (TVoid*)&gDb_ctSetNvParametersC0.au16Rng_NvParametersC0_13[0], 575, 88},
    { &gDb_ctSetNvParametersC0.tInf_NvParametersC0_14, (TVoid*)&gDb_tNvParametersC0.i16NvParametersC0_14, (TVoid*)&gDb_ctSetNvParametersC0.i16Def_NvParametersC0_14, (TVoid*)&gDb_ctSetNvParametersC0.ai16Rng_NvParametersC0_14[0], 577, 89},
    { &gDb_ctSetNvParametersC0.tInf_NvParametersC0_15, (TVoid*)&gDb_tNvParametersC0.i16NvParametersC0_15, (TVoid*)&gDb_ctSetNvParametersC0.i16Def_NvParametersC0_15, (TVoid*)&gDb_ctSetNvParametersC0.ai16Rng_NvParametersC0_15[0], 579, 90},
    { &gDb_ctSetNvParametersC0.tInf_NvParametersC0_16, (TVoid*)&gDb_tNvParametersC0.i16NvParametersC0_16, (TVoid*)&gDb_ctSetNvParametersC0.i16Def_NvParametersC0_16, (TVoid*)&gDb_ctSetNvParametersC0.ai16Rng_NvParametersC0_16[0], 581, 91},
    { &gDb_ctSetNvParametersC0.tInf_NvParametersC0_17, (TVoid*)&gDb_tNvParametersC0.i16NvParametersC0_17, (TVoid*)&gDb_ctSetNvParametersC0.i16Def_NvParametersC0_17, (TVoid*)&gDb_ctSetNvParametersC0.ai16Rng_NvParametersC0_17[0], 583, 92},
    { &gDb_ctSetNvParametersC0.tInf_ThreshotothydraulicTemperature, (TVoid*)&gDb_tNvParametersC0.i16ThreshotothydraulicTemperature, (TVoid*)&gDb_ctSetNvParametersC0.i16Def_ThreshotothydraulicTemperature, (TVoid*)&gDb_ctSetNvParametersC0.ai16Rng_ThreshotothydraulicTemperature[0], 585, 93},
    { &gDb_ctSetNvParametersC0.tInf_TimeforCoolerOn, (TVoid*)&gDb_tNvParametersC0.i16TimeforCoolerOn, (TVoid*)&gDb_ctSetNvParametersC0.i16Def_TimeforCoolerOn, (TVoid*)&gDb_ctSetNvParametersC0.ai16Rng_TimeforCoolerOn[0], 587, 94},
    { &gDb_ctSetNvParametersC0.tInf_TimeFaultPressureReducCrawler, (TVoid*)&gDb_tNvParametersC0.u16TimeFaultPressureReducCrawler, (TVoid*)&gDb_ctSetNvParametersC0.u16Def_TimeFaultPressureReducCrawler, (TVoid*)&gDb_ctSetNvParametersC0.au16Rng_TimeFaultPressureReducCrawler[0], 589, 95},
    { &gDb_ctSetNvParametersC0.tInf_RailJoyRatioTwoSpeedFault, (TVoid*)&gDb_tNvParametersC0.i16RailJoyRatioTwoSpeedFault, (TVoid*)&gDb_ctSetNvParametersC0.i16Def_RailJoyRatioTwoSpeedFault, (TVoid*)&gDb_ctSetNvParametersC0.ai16Rng_RailJoyRatioTwoSpeedFault[0], 591, 96},
    { &gDb_ctSetNvParametersC0.tInf_TimeoutSdoRequestTime, (TVoid*)&gDb_tNvParametersC0.u32TimeoutSdoRequestTime, (TVoid*)&gDb_ctSetNvParametersC0.u32Def_TimeoutSdoRequestTime, (TVoid*)&gDb_ctSetNvParametersC0.au32Rng_TimeoutSdoRequestTime[0], 593, 97},
    { &gDb_ctSetNvParametersC0.tInf_PeriodBlinkoffWhiteLight, (TVoid*)&gDb_tNvParametersC0.i16PeriodBlinkoffWhiteLight, (TVoid*)&gDb_ctSetNvParametersC0.i16Def_PeriodBlinkoffWhiteLight, (TVoid*)&gDb_ctSetNvParametersC0.ai16Rng_PeriodBlinkoffWhiteLight[0], 597, 98},
    { &gDb_ctSetNvParametersC0.tInf_CptNeutralJoystickMax, (TVoid*)&gDb_tNvParametersC0.u16CptNeutralJoystickMax, (TVoid*)&gDb_ctSetNvParametersC0.u16Def_CptNeutralJoystickMax, (TVoid*)&gDb_ctSetNvParametersC0.au16Rng_CptNeutralJoystickMax[0], 599, 99},
    { &gDb_ctSetNvParametersC0.tInf_StopMotorMGmax, (TVoid*)&gDb_tNvParametersC0.u16StopMotorMGmax, (TVoid*)&gDb_ctSetNvParametersC0.u16Def_StopMotorMGmax, (TVoid*)&gDb_ctSetNvParametersC0.au16Rng_StopMotorMGmax[0], 601, 100},
    { &gDb_ctSetNvParametersC0.tInf_TurretRearPosExtLowSpeedTresh, (TVoid*)&gDb_tNvParametersC0.i16TurretRearPosExtLowSpeedTresh, (TVoid*)&gDb_ctSetNvParametersC0.i16Def_TurretRearPosExtLowSpeedTresh, (TVoid*)&gDb_ctSetNvParametersC0.ai16Rng_TurretRearPosExtLowSpeedTresh[0], 603, 101},
    { &gDb_ctSetNvParametersC0.tInf_TurretRearNegExtLowSpeedTresh, (TVoid*)&gDb_tNvParametersC0.i16TurretRearNegExtLowSpeedTresh, (TVoid*)&gDb_ctSetNvParametersC0.i16Def_TurretRearNegExtLowSpeedTresh, (TVoid*)&gDb_ctSetNvParametersC0.ai16Rng_TurretRearNegExtLowSpeedTresh[0], 605, 102},
    { &gDb_ctSetNvParametersC0.tInf_NbOfFileParameters, (TVoid*)&gDb_tNvParametersC0.u16NbOfFileParameters, (TVoid*)&gDb_ctSetNvParametersC0.u16Def_NbOfFileParameters, (TVoid*)&gDb_ctSetNvParametersC0.au16Rng_NbOfFileParameters[0], 607, 103},
    { &gDb_ctSetNvParametersC0.tInf_VersionMajor, (TVoid*)&gDb_tNvParametersC0.u8VersionMajor, (TVoid*)&gDb_ctSetNvParametersC0.u8Def_VersionMajor, (TVoid*)&gDb_ctSetNvParametersC0.au8Rng_VersionMajor[0], 609, 104},
    { &gDb_ctSetNvParametersC0.tInf_VersionMinior, (TVoid*)&gDb_tNvParametersC0.u8VersionMinior, (TVoid*)&gDb_ctSetNvParametersC0.u8Def_VersionMinior, (TVoid*)&gDb_ctSetNvParametersC0.au8Rng_VersionMinior[0], 610, 105},
    { &gDb_ctSetNvParametersC0.tInf_VersionPatch, (TVoid*)&gDb_tNvParametersC0.u8VersionPatch, (TVoid*)&gDb_ctSetNvParametersC0.u8Def_VersionPatch, (TVoid*)&gDb_ctSetNvParametersC0.au8Rng_VersionPatch[0], 611, 106},
    { &gDb_ctSetNvParametersC0.tInf_VersionCustom, (TVoid*)&gDb_tNvParametersC0.u8VersionCustom, (TVoid*)&gDb_ctSetNvParametersC0.u8Def_VersionCustom, (TVoid*)&gDb_ctSetNvParametersC0.au8Rng_VersionCustom[0], 612, 107},
    { &gDb_ctSetNvParametersC0.tInf_OutCharPosElectricPumpPressure, (TVoid*)&gDb_tNvParametersC0.i16OutCharPosElectricPumpPressure, (TVoid*)&gDb_ctSetNvParametersC0.i16Def_OutCharPosElectricPumpPressure, (TVoid*)&gDb_ctSetNvParametersC0.ai16Rng_OutCharPosElectricPumpPressure[0], 613, 108},
    { &gDb_ctSetNvParametersC0.tInf_OutCharNeuElectricPumpPressure, (TVoid*)&gDb_tNvParametersC0.i16OutCharNeuElectricPumpPressure, (TVoid*)&gDb_ctSetNvParametersC0.i16Def_OutCharNeuElectricPumpPressure, (TVoid*)&gDb_ctSetNvParametersC0.ai16Rng_OutCharNeuElectricPumpPressure[0], 615, 109},
    { &gDb_ctSetNvParametersC0.tInf_OutCharNegElectricPumpPressure, (TVoid*)&gDb_tNvParametersC0.i16OutCharNegElectricPumpPressure, (TVoid*)&gDb_ctSetNvParametersC0.i16Def_OutCharNegElectricPumpPressure, (TVoid*)&gDb_ctSetNvParametersC0.ai16Rng_OutCharNegElectricPumpPressure[0], 617, 110}
};

const TDbVarTabNvm gDb_catVarTabNvCalibrationC0[31] =
{    //!< *cptInf *vpVal *cvpDataRang *cvpDataDef cu16Adr cu16ValuePos
    { &gDb_ctSetNvCalibrationC0.tInf_ManipulatorLeftMaxPointLut, (TVoid*)&gDb_tNvCalibrationC0.u8ManipulatorLeftMaxPointLut, (TVoid*)&gDb_ctSetNvCalibrationC0.u8Def_ManipulatorLeftMaxPointLut, (TVoid*)&gDb_ctSetNvCalibrationC0.au8Rng_ManipulatorLeftMaxPointLut[0], 712, 0},
    { &gDb_ctSetNvCalibrationC0.tInf_ManipulatorLeftXValue, (TVoid*)&gDb_tNvCalibrationC0.ai16ManipulatorLeftXValue[0], (TVoid*)&gDb_ctSetNvCalibrationC0.ai16Def_ManipulatorLeftXValue[0], (TVoid*)&gDb_ctSetNvCalibrationC0.aai16Rng_ManipulatorLeftXValue[0][0], 713, 1},
    { &gDb_ctSetNvCalibrationC0.tInf_ManipulatorLeftYValue, (TVoid*)&gDb_tNvCalibrationC0.ai16ManipulatorLeftYValue[0], (TVoid*)&gDb_ctSetNvCalibrationC0.ai16Def_ManipulatorLeftYValue[0], (TVoid*)&gDb_ctSetNvCalibrationC0.aai16Rng_ManipulatorLeftYValue[0][0], 717, 3},
    { &gDb_ctSetNvCalibrationC0.tInf_ManipulatorRightMaxPointLut, (TVoid*)&gDb_tNvCalibrationC0.u8ManipulatorRightMaxPointLut, (TVoid*)&gDb_ctSetNvCalibrationC0.u8Def_ManipulatorRightMaxPointLut, (TVoid*)&gDb_ctSetNvCalibrationC0.au8Rng_ManipulatorRightMaxPointLut[0], 721, 5},
    { &gDb_ctSetNvCalibrationC0.tInf_ManipulatorRightXValue, (TVoid*)&gDb_tNvCalibrationC0.ai16ManipulatorRightXValue[0], (TVoid*)&gDb_ctSetNvCalibrationC0.ai16Def_ManipulatorRightXValue[0], (TVoid*)&gDb_ctSetNvCalibrationC0.aai16Rng_ManipulatorRightXValue[0][0], 722, 6},
    { &gDb_ctSetNvCalibrationC0.tInf_ManipulatorRightYValue, (TVoid*)&gDb_tNvCalibrationC0.ai16ManipulatorRightYValue[0], (TVoid*)&gDb_ctSetNvCalibrationC0.ai16Def_ManipulatorRightYValue[0], (TVoid*)&gDb_ctSetNvCalibrationC0.aai16Rng_ManipulatorRightYValue[0][0], 726, 8},
    { &gDb_ctSetNvCalibrationC0.tInf_LeftTrackPvgMaxPointLut, (TVoid*)&gDb_tNvCalibrationC0.u8LeftTrackPvgMaxPointLut, (TVoid*)&gDb_ctSetNvCalibrationC0.u8Def_LeftTrackPvgMaxPointLut, (TVoid*)&gDb_ctSetNvCalibrationC0.au8Rng_LeftTrackPvgMaxPointLut[0], 730, 10},
    { &gDb_ctSetNvCalibrationC0.tInf_LeftTrackPvgRampRatio, (TVoid*)&gDb_tNvCalibrationC0.au16LeftTrackPvgRampRatio[0], (TVoid*)&gDb_ctSetNvCalibrationC0.au16Def_LeftTrackPvgRampRatio[0], (TVoid*)&gDb_ctSetNvCalibrationC0.aau16Rng_LeftTrackPvgRampRatio[0][0], 731, 11},
    { &gDb_ctSetNvCalibrationC0.tInf_RangeValueOfLeftTrackPvgRamp, (TVoid*)&gDb_tNvCalibrationC0.ai16RangeValueOfLeftTrackPvgRamp[0], (TVoid*)&gDb_ctSetNvCalibrationC0.ai16Def_RangeValueOfLeftTrackPvgRamp[0], (TVoid*)&gDb_ctSetNvCalibrationC0.aai16Rng_RangeValueOfLeftTrackPvgRamp[0][0], 735, 13},
    { &gDb_ctSetNvCalibrationC0.tInf_RightTrackPvgRampRatio, (TVoid*)&gDb_tNvCalibrationC0.au16RightTrackPvgRampRatio[0], (TVoid*)&gDb_ctSetNvCalibrationC0.au16Def_RightTrackPvgRampRatio[0], (TVoid*)&gDb_ctSetNvCalibrationC0.aau16Rng_RightTrackPvgRampRatio[0][0], 741, 16},
    { &gDb_ctSetNvCalibrationC0.tInf_RangeValueOfRightTrackPvgRamp, (TVoid*)&gDb_tNvCalibrationC0.ai16RangeValueOfRightTrackPvgRamp[0], (TVoid*)&gDb_ctSetNvCalibrationC0.ai16Def_RangeValueOfRightTrackPvgRamp[0], (TVoid*)&gDb_ctSetNvCalibrationC0.aai16Rng_RangeValueOfRightTrackPvgRamp[0][0], 745, 18},
    { &gDb_ctSetNvCalibrationC0.tInf_ForwardPumpTransmisMaxPointLut, (TVoid*)&gDb_tNvCalibrationC0.u8ForwardPumpTransmisMaxPointLut, (TVoid*)&gDb_ctSetNvCalibrationC0.u8Def_ForwardPumpTransmisMaxPointLut, (TVoid*)&gDb_ctSetNvCalibrationC0.au8Rng_ForwardPumpTransmisMaxPointLut[0], 751, 21},
    { &gDb_ctSetNvCalibrationC0.tInf_ForwardPumpTransmissionXValue, (TVoid*)&gDb_tNvCalibrationC0.ai16ForwardPumpTransmissionXValue[0], (TVoid*)&gDb_ctSetNvCalibrationC0.ai16Def_ForwardPumpTransmissionXValue[0], (TVoid*)&gDb_ctSetNvCalibrationC0.aai16Rng_ForwardPumpTransmissionXValue[0][0], 752, 22},
    { &gDb_ctSetNvCalibrationC0.tInf_ForwardPumpTransmissionYValue, (TVoid*)&gDb_tNvCalibrationC0.ai16ForwardPumpTransmissionYValue[0], (TVoid*)&gDb_ctSetNvCalibrationC0.ai16Def_ForwardPumpTransmissionYValue[0], (TVoid*)&gDb_ctSetNvCalibrationC0.aai16Rng_ForwardPumpTransmissionYValue[0][0], 756, 24},
    { &gDb_ctSetNvCalibrationC0.tInf_BackwardPumpTransmisMaxPointLut, (TVoid*)&gDb_tNvCalibrationC0.u8BackwardPumpTransmisMaxPointLut, (TVoid*)&gDb_ctSetNvCalibrationC0.u8Def_BackwardPumpTransmisMaxPointLut, (TVoid*)&gDb_ctSetNvCalibrationC0.au8Rng_BackwardPumpTransmisMaxPointLut[0], 760, 26},
    { &gDb_ctSetNvCalibrationC0.tInf_BackwardPumpTransmissionXValue, (TVoid*)&gDb_tNvCalibrationC0.ai16BackwardPumpTransmissionXValue[0], (TVoid*)&gDb_ctSetNvCalibrationC0.ai16Def_BackwardPumpTransmissionXValue[0], (TVoid*)&gDb_ctSetNvCalibrationC0.aai16Rng_BackwardPumpTransmissionXValue[0][0], 761, 27},
    { &gDb_ctSetNvCalibrationC0.tInf_BackwardPumpTransmissionYValue, (TVoid*)&gDb_tNvCalibrationC0.ai16BackwardPumpTransmissionYValue[0], (TVoid*)&gDb_ctSetNvCalibrationC0.ai16Def_BackwardPumpTransmissionYValue[0], (TVoid*)&gDb_ctSetNvCalibrationC0.aai16Rng_BackwardPumpTransmissionYValue[0][0], 765, 29},
    { &gDb_ctSetNvCalibrationC0.tInf_ForwardPumpTransmissionRampRatio, (TVoid*)&gDb_tNvCalibrationC0.au16ForwardPumpTransmissionRampRatio[0], (TVoid*)&gDb_ctSetNvCalibrationC0.au16Def_ForwardPumpTransmissionRampRatio[0], (TVoid*)&gDb_ctSetNvCalibrationC0.aau16Rng_ForwardPumpTransmissionRampRatio[0][0], 769, 31},
    { &gDb_ctSetNvCalibrationC0.tInf_RangeValueForwardPumpTransRamp, (TVoid*)&gDb_tNvCalibrationC0.ai16RangeValueForwardPumpTransRamp[0], (TVoid*)&gDb_ctSetNvCalibrationC0.ai16Def_RangeValueForwardPumpTransRamp[0], (TVoid*)&gDb_ctSetNvCalibrationC0.aai16Rng_RangeValueForwardPumpTransRamp[0][0], 773, 33},
    { &gDb_ctSetNvCalibrationC0.tInf_BackwardPumpTransmissionRampRtio, (TVoid*)&gDb_tNvCalibrationC0.au16BackwardPumpTransmissionRampRtio[0], (TVoid*)&gDb_ctSetNvCalibrationC0.au16Def_BackwardPumpTransmissionRampRtio[0], (TVoid*)&gDb_ctSetNvCalibrationC0.aau16Rng_BackwardPumpTransmissionRampRtio[0][0], 779, 36},
    { &gDb_ctSetNvCalibrationC0.tInf_RangeValueBackwardPumpTransRamp, (TVoid*)&gDb_tNvCalibrationC0.ai16RangeValueBackwardPumpTransRamp[0], (TVoid*)&gDb_ctSetNvCalibrationC0.ai16Def_RangeValueBackwardPumpTransRamp[0], (TVoid*)&gDb_ctSetNvCalibrationC0.aai16Rng_RangeValueBackwardPumpTransRamp[0][0], 783, 38},
    { &gDb_ctSetNvCalibrationC0.tInf_EncodeurTurretOffset, (TVoid*)&gDb_tNvCalibrationC0.u32EncodeurTurretOffset, (TVoid*)&gDb_ctSetNvCalibrationC0.u32Def_EncodeurTurretOffset, (TVoid*)&gDb_ctSetNvCalibrationC0.au32Rng_EncodeurTurretOffset[0], 789, 41},
    { &gDb_ctSetNvCalibrationC0.tInf_SlopeLongOffset, (TVoid*)&gDb_tNvCalibrationC0.i16SlopeLongOffset, (TVoid*)&gDb_ctSetNvCalibrationC0.i16Def_SlopeLongOffset, (TVoid*)&gDb_ctSetNvCalibrationC0.ai16Rng_SlopeLongOffset[0], 793, 42},
    { &gDb_ctSetNvCalibrationC0.tInf_SlopeTransOffset, (TVoid*)&gDb_tNvCalibrationC0.i16SlopeTransOffset, (TVoid*)&gDb_ctSetNvCalibrationC0.i16Def_SlopeTransOffset, (TVoid*)&gDb_ctSetNvCalibrationC0.ai16Rng_SlopeTransOffset[0], 795, 43},
    { &gDb_ctSetNvCalibrationC0.tInf_SlopeLongOffset2, (TVoid*)&gDb_tNvCalibrationC0.i16SlopeLongOffset2, (TVoid*)&gDb_ctSetNvCalibrationC0.i16Def_SlopeLongOffset2, (TVoid*)&gDb_ctSetNvCalibrationC0.ai16Rng_SlopeLongOffset2[0], 797, 44},
    { &gDb_ctSetNvCalibrationC0.tInf_SlopeTransOffset2, (TVoid*)&gDb_tNvCalibrationC0.i16SlopeTransOffset2, (TVoid*)&gDb_ctSetNvCalibrationC0.i16Def_SlopeTransOffset2, (TVoid*)&gDb_ctSetNvCalibrationC0.ai16Rng_SlopeTransOffset2[0], 799, 45},
    { &gDb_ctSetNvCalibrationC0.tInf_EncodeurTurretOffset2, (TVoid*)&gDb_tNvCalibrationC0.u32EncodeurTurretOffset2, (TVoid*)&gDb_ctSetNvCalibrationC0.u32Def_EncodeurTurretOffset2, (TVoid*)&gDb_ctSetNvCalibrationC0.au32Rng_EncodeurTurretOffset2[0], 801, 46},
    { &gDb_ctSetNvCalibrationC0.tInf_EncodeurTurretMsb1, (TVoid*)&gDb_tNvCalibrationC0.u16EncodeurTurretMsb1, (TVoid*)&gDb_ctSetNvCalibrationC0.u16Def_EncodeurTurretMsb1, (TVoid*)&gDb_ctSetNvCalibrationC0.au16Rng_EncodeurTurretMsb1[0], 805, 47},
    { &gDb_ctSetNvCalibrationC0.tInf_EncodeurTurretMsb2, (TVoid*)&gDb_tNvCalibrationC0.u16EncodeurTurretMsb2, (TVoid*)&gDb_ctSetNvCalibrationC0.u16Def_EncodeurTurretMsb2, (TVoid*)&gDb_ctSetNvCalibrationC0.au16Rng_EncodeurTurretMsb2[0], 807, 48},
    { &gDb_ctSetNvCalibrationC0.tInf_EncodeurTurretLsb1, (TVoid*)&gDb_tNvCalibrationC0.u16EncodeurTurretLsb1, (TVoid*)&gDb_ctSetNvCalibrationC0.u16Def_EncodeurTurretLsb1, (TVoid*)&gDb_ctSetNvCalibrationC0.au16Rng_EncodeurTurretLsb1[0], 809, 49},
    { &gDb_ctSetNvCalibrationC0.tInf_EncodeurTurretLsb2, (TVoid*)&gDb_tNvCalibrationC0.u16EncodeurTurretLsb2, (TVoid*)&gDb_ctSetNvCalibrationC0.u16Def_EncodeurTurretLsb2, (TVoid*)&gDb_ctSetNvCalibrationC0.au16Rng_EncodeurTurretLsb2[0], 811, 50}
};

const TDbVarTabRam gDb_catVarTabRam48XsInputsC0[56] =
{    //!< *cptInf *vpVal *cvpDataDef 
    { &gDb_ctSetRam48XsInputsC0.tInf_UpInclinaisonBasketButton, (TVoid*)&gDb_tRam48XsInputsC0.boUpInclinaisonBasketButton, (TVoid*)&gDb_ctSetRam48XsInputsC0.boDef_UpInclinaisonBasketButton, (TVoid*)&gDb_ctSetRam48XsInputsC0.aboRng_UpInclinaisonBasketButton[0]},
    { &gDb_ctSetRam48XsInputsC0.tInf_UpInclinaisonBasketButtonValue, (TVoid*)&gDb_tRam48XsInputsC0.u16UpInclinaisonBasketButtonValue, (TVoid*)&gDb_ctSetRam48XsInputsC0.u16Def_UpInclinaisonBasketButtonValue, (TVoid*)&gDb_ctSetRam48XsInputsC0.au16Rng_UpInclinaisonBasketButtonValue[0]},
    { &gDb_ctSetRam48XsInputsC0.tInf_DownInclinaisonBasketButton, (TVoid*)&gDb_tRam48XsInputsC0.boDownInclinaisonBasketButton, (TVoid*)&gDb_ctSetRam48XsInputsC0.boDef_DownInclinaisonBasketButton, (TVoid*)&gDb_ctSetRam48XsInputsC0.aboRng_DownInclinaisonBasketButton[0]},
    { &gDb_ctSetRam48XsInputsC0.tInf_DownInclinaisonBasketButtonValue, (TVoid*)&gDb_tRam48XsInputsC0.u16DownInclinaisonBasketButtonValue, (TVoid*)&gDb_ctSetRam48XsInputsC0.u16Def_DownInclinaisonBasketButtonValue, (TVoid*)&gDb_ctSetRam48XsInputsC0.au16Rng_DownInclinaisonBasketButtonValue[0]},
    { &gDb_ctSetRam48XsInputsC0.tInf_UpPendularButton, (TVoid*)&gDb_tRam48XsInputsC0.boUpPendularButton, (TVoid*)&gDb_ctSetRam48XsInputsC0.boDef_UpPendularButton, (TVoid*)&gDb_ctSetRam48XsInputsC0.aboRng_UpPendularButton[0]},
    { &gDb_ctSetRam48XsInputsC0.tInf_UpPendularButtonValue, (TVoid*)&gDb_tRam48XsInputsC0.u16UpPendularButtonValue, (TVoid*)&gDb_ctSetRam48XsInputsC0.u16Def_UpPendularButtonValue, (TVoid*)&gDb_ctSetRam48XsInputsC0.au16Rng_UpPendularButtonValue[0]},
    { &gDb_ctSetRam48XsInputsC0.tInf_DownPendularButton, (TVoid*)&gDb_tRam48XsInputsC0.boDownPendularButton, (TVoid*)&gDb_ctSetRam48XsInputsC0.boDef_DownPendularButton, (TVoid*)&gDb_ctSetRam48XsInputsC0.aboRng_DownPendularButton[0]},
    { &gDb_ctSetRam48XsInputsC0.tInf_DownPendularButtonValue, (TVoid*)&gDb_tRam48XsInputsC0.u16DownPendularButtonValue, (TVoid*)&gDb_ctSetRam48XsInputsC0.u16Def_DownPendularButtonValue, (TVoid*)&gDb_ctSetRam48XsInputsC0.au16Rng_DownPendularButtonValue[0]},
    { &gDb_ctSetRam48XsInputsC0.tInf_RotationCtClockwiseBasketButton, (TVoid*)&gDb_tRam48XsInputsC0.boRotationCtClockwiseBasketButton, (TVoid*)&gDb_ctSetRam48XsInputsC0.boDef_RotationCtClockwiseBasketButton, (TVoid*)&gDb_ctSetRam48XsInputsC0.aboRng_RotationCtClockwiseBasketButton[0]},
    { &gDb_ctSetRam48XsInputsC0.tInf_RotCtClockwiseBasketButtonVal, (TVoid*)&gDb_tRam48XsInputsC0.u16RotCtClockwiseBasketButtonVal, (TVoid*)&gDb_ctSetRam48XsInputsC0.u16Def_RotCtClockwiseBasketButtonVal, (TVoid*)&gDb_ctSetRam48XsInputsC0.au16Rng_RotCtClockwiseBasketButtonVal[0]},
    { &gDb_ctSetRam48XsInputsC0.tInf_RotationClockwiseBasketButton, (TVoid*)&gDb_tRam48XsInputsC0.boRotationClockwiseBasketButton, (TVoid*)&gDb_ctSetRam48XsInputsC0.boDef_RotationClockwiseBasketButton, (TVoid*)&gDb_ctSetRam48XsInputsC0.aboRng_RotationClockwiseBasketButton[0]},
    { &gDb_ctSetRam48XsInputsC0.tInf_RotationClockwiseBasketButtonVal, (TVoid*)&gDb_tRam48XsInputsC0.u16RotationClockwiseBasketButtonVal, (TVoid*)&gDb_ctSetRam48XsInputsC0.u16Def_RotationClockwiseBasketButtonVal, (TVoid*)&gDb_ctSetRam48XsInputsC0.au16Rng_RotationClockwiseBasketButtonVal[0]},
    { &gDb_ctSetRam48XsInputsC0.tInf_Overload1, (TVoid*)&gDb_tRam48XsInputsC0.boOverload1, (TVoid*)&gDb_ctSetRam48XsInputsC0.boDef_Overload1, (TVoid*)&gDb_ctSetRam48XsInputsC0.aboRng_Overload1[0]},
    { &gDb_ctSetRam48XsInputsC0.tInf_Overload1Value, (TVoid*)&gDb_tRam48XsInputsC0.u16Overload1Value, (TVoid*)&gDb_ctSetRam48XsInputsC0.u16Def_Overload1Value, (TVoid*)&gDb_ctSetRam48XsInputsC0.au16Rng_Overload1Value[0]},
    { &gDb_ctSetRam48XsInputsC0.tInf_Overload2, (TVoid*)&gDb_tRam48XsInputsC0.boOverload2, (TVoid*)&gDb_ctSetRam48XsInputsC0.boDef_Overload2, (TVoid*)&gDb_ctSetRam48XsInputsC0.aboRng_Overload2[0]},
    { &gDb_ctSetRam48XsInputsC0.tInf_Overload2Value, (TVoid*)&gDb_tRam48XsInputsC0.u16Overload2Value, (TVoid*)&gDb_ctSetRam48XsInputsC0.u16Def_Overload2Value, (TVoid*)&gDb_ctSetRam48XsInputsC0.au16Rng_Overload2Value[0]},
    { &gDb_ctSetRam48XsInputsC0.tInf_NacelleBasketRightSideSensor1, (TVoid*)&gDb_tRam48XsInputsC0.boNacelleBasketRightSideSensor1, (TVoid*)&gDb_ctSetRam48XsInputsC0.boDef_NacelleBasketRightSideSensor1, (TVoid*)&gDb_ctSetRam48XsInputsC0.aboRng_NacelleBasketRightSideSensor1[0]},
    { &gDb_ctSetRam48XsInputsC0.tInf_NacelleBasketRightSideSensor1Val, (TVoid*)&gDb_tRam48XsInputsC0.u16NacelleBasketRightSideSensor1Val, (TVoid*)&gDb_ctSetRam48XsInputsC0.u16Def_NacelleBasketRightSideSensor1Val, (TVoid*)&gDb_ctSetRam48XsInputsC0.au16Rng_NacelleBasketRightSideSensor1Val[0]},
    { &gDb_ctSetRam48XsInputsC0.tInf_NacelleBasketRightSideSensor2, (TVoid*)&gDb_tRam48XsInputsC0.boNacelleBasketRightSideSensor2, (TVoid*)&gDb_ctSetRam48XsInputsC0.boDef_NacelleBasketRightSideSensor2, (TVoid*)&gDb_ctSetRam48XsInputsC0.aboRng_NacelleBasketRightSideSensor2[0]},
    { &gDb_ctSetRam48XsInputsC0.tInf_NacelleBasketRightSideSensor2Val, (TVoid*)&gDb_tRam48XsInputsC0.u16NacelleBasketRightSideSensor2Val, (TVoid*)&gDb_ctSetRam48XsInputsC0.u16Def_NacelleBasketRightSideSensor2Val, (TVoid*)&gDb_ctSetRam48XsInputsC0.au16Rng_NacelleBasketRightSideSensor2Val[0]},
    { &gDb_ctSetRam48XsInputsC0.tInf_NacelleBasketLeftSideSensor1, (TVoid*)&gDb_tRam48XsInputsC0.boNacelleBasketLeftSideSensor1, (TVoid*)&gDb_ctSetRam48XsInputsC0.boDef_NacelleBasketLeftSideSensor1, (TVoid*)&gDb_ctSetRam48XsInputsC0.aboRng_NacelleBasketLeftSideSensor1[0]},
    { &gDb_ctSetRam48XsInputsC0.tInf_NacelleBasketLeftSideSensor1Val, (TVoid*)&gDb_tRam48XsInputsC0.u16NacelleBasketLeftSideSensor1Val, (TVoid*)&gDb_ctSetRam48XsInputsC0.u16Def_NacelleBasketLeftSideSensor1Val, (TVoid*)&gDb_ctSetRam48XsInputsC0.au16Rng_NacelleBasketLeftSideSensor1Val[0]},
    { &gDb_ctSetRam48XsInputsC0.tInf_NacelleBasketLeftSideSensor2, (TVoid*)&gDb_tRam48XsInputsC0.boNacelleBasketLeftSideSensor2, (TVoid*)&gDb_ctSetRam48XsInputsC0.boDef_NacelleBasketLeftSideSensor2, (TVoid*)&gDb_ctSetRam48XsInputsC0.aboRng_NacelleBasketLeftSideSensor2[0]},
    { &gDb_ctSetRam48XsInputsC0.tInf_NacelleBasketLeftSideSensor2Val, (TVoid*)&gDb_tRam48XsInputsC0.u16NacelleBasketLeftSideSensor2Val, (TVoid*)&gDb_ctSetRam48XsInputsC0.u16Def_NacelleBasketLeftSideSensor2Val, (TVoid*)&gDb_ctSetRam48XsInputsC0.au16Rng_NacelleBasketLeftSideSensor2Val[0]},
    { &gDb_ctSetRam48XsInputsC0.tInf_LowSectorPendularSensor, (TVoid*)&gDb_tRam48XsInputsC0.boLowSectorPendularSensor, (TVoid*)&gDb_ctSetRam48XsInputsC0.boDef_LowSectorPendularSensor, (TVoid*)&gDb_ctSetRam48XsInputsC0.aboRng_LowSectorPendularSensor[0]},
    { &gDb_ctSetRam48XsInputsC0.tInf_LowSectorPendularSensorVal, (TVoid*)&gDb_tRam48XsInputsC0.u16LowSectorPendularSensorVal, (TVoid*)&gDb_ctSetRam48XsInputsC0.u16Def_LowSectorPendularSensorVal, (TVoid*)&gDb_ctSetRam48XsInputsC0.au16Rng_LowSectorPendularSensorVal[0]},
    { &gDb_ctSetRam48XsInputsC0.tInf_HighSectorPlateSensor, (TVoid*)&gDb_tRam48XsInputsC0.boHighSectorPlateSensor, (TVoid*)&gDb_ctSetRam48XsInputsC0.boDef_HighSectorPlateSensor, (TVoid*)&gDb_ctSetRam48XsInputsC0.aboRng_HighSectorPlateSensor[0]},
    { &gDb_ctSetRam48XsInputsC0.tInf_HighSectorPlateSensorVal, (TVoid*)&gDb_tRam48XsInputsC0.u16HighSectorPlateSensorVal, (TVoid*)&gDb_ctSetRam48XsInputsC0.u16Def_HighSectorPlateSensorVal, (TVoid*)&gDb_ctSetRam48XsInputsC0.au16Rng_HighSectorPlateSensorVal[0]},
    { &gDb_ctSetRam48XsInputsC0.tInf_FoldedLadderSensor, (TVoid*)&gDb_tRam48XsInputsC0.boFoldedLadderSensor, (TVoid*)&gDb_ctSetRam48XsInputsC0.boDef_FoldedLadderSensor, (TVoid*)&gDb_ctSetRam48XsInputsC0.aboRng_FoldedLadderSensor[0]},
    { &gDb_ctSetRam48XsInputsC0.tInf_FoldedLadderSensorVal, (TVoid*)&gDb_tRam48XsInputsC0.u16FoldedLadderSensorVal, (TVoid*)&gDb_ctSetRam48XsInputsC0.u16Def_FoldedLadderSensorVal, (TVoid*)&gDb_ctSetRam48XsInputsC0.au16Rng_FoldedLadderSensorVal[0]},
    { &gDb_ctSetRam48XsInputsC0.tInf_SafetyManSystem, (TVoid*)&gDb_tRam48XsInputsC0.u16SafetyManSystem, (TVoid*)&gDb_ctSetRam48XsInputsC0.u16Def_SafetyManSystem, (TVoid*)&gDb_ctSetRam48XsInputsC0.au16Rng_SafetyManSystem[0]},
    { &gDb_ctSetRam48XsInputsC0.tInf_DeltaArmAxisJoystick, (TVoid*)&gDb_tRam48XsInputsC0.u16DeltaArmAxisJoystick, (TVoid*)&gDb_ctSetRam48XsInputsC0.u16Def_DeltaArmAxisJoystick, (TVoid*)&gDb_ctSetRam48XsInputsC0.au16Rng_DeltaArmAxisJoystick[0]},
    { &gDb_ctSetRam48XsInputsC0.tInf_ArrowArmAxisJoystick, (TVoid*)&gDb_tRam48XsInputsC0.u16ArrowArmAxisJoystick, (TVoid*)&gDb_ctSetRam48XsInputsC0.u16Def_ArrowArmAxisJoystick, (TVoid*)&gDb_ctSetRam48XsInputsC0.au16Rng_ArrowArmAxisJoystick[0]},
    { &gDb_ctSetRam48XsInputsC0.tInf_TelescopeArmAxisJoysitck, (TVoid*)&gDb_tRam48XsInputsC0.u16TelescopeArmAxisJoysitck, (TVoid*)&gDb_ctSetRam48XsInputsC0.u16Def_TelescopeArmAxisJoysitck, (TVoid*)&gDb_ctSetRam48XsInputsC0.au16Rng_TelescopeArmAxisJoysitck[0]},
    { &gDb_ctSetRam48XsInputsC0.tInf_RotationTurretAxisJoystick, (TVoid*)&gDb_tRam48XsInputsC0.u16RotationTurretAxisJoystick, (TVoid*)&gDb_ctSetRam48XsInputsC0.u16Def_RotationTurretAxisJoystick, (TVoid*)&gDb_ctSetRam48XsInputsC0.au16Rng_RotationTurretAxisJoystick[0]},
    { &gDb_ctSetRam48XsInputsC0.tInf_AdvanceAxisJoystick, (TVoid*)&gDb_tRam48XsInputsC0.u16AdvanceAxisJoystick, (TVoid*)&gDb_ctSetRam48XsInputsC0.u16Def_AdvanceAxisJoystick, (TVoid*)&gDb_ctSetRam48XsInputsC0.au16Rng_AdvanceAxisJoystick[0]},
    { &gDb_ctSetRam48XsInputsC0.tInf_RearmementSafetyManSystem, (TVoid*)&gDb_tRam48XsInputsC0.boRearmementSafetyManSystem, (TVoid*)&gDb_ctSetRam48XsInputsC0.boDef_RearmementSafetyManSystem, (TVoid*)&gDb_ctSetRam48XsInputsC0.aboRng_RearmementSafetyManSystem[0]},
    { &gDb_ctSetRam48XsInputsC0.tInf_RearmementSafetyManSystemVal, (TVoid*)&gDb_tRam48XsInputsC0.u16RearmementSafetyManSystemVal, (TVoid*)&gDb_ctSetRam48XsInputsC0.u16Def_RearmementSafetyManSystemVal, (TVoid*)&gDb_ctSetRam48XsInputsC0.au16Rng_RearmementSafetyManSystemVal[0]},
    { &gDb_ctSetRam48XsInputsC0.tInf_AbutementNacelleTrackSide, (TVoid*)&gDb_tRam48XsInputsC0.boAbutementNacelleTrackSide, (TVoid*)&gDb_ctSetRam48XsInputsC0.boDef_AbutementNacelleTrackSide, (TVoid*)&gDb_ctSetRam48XsInputsC0.aboRng_AbutementNacelleTrackSide[0]},
    { &gDb_ctSetRam48XsInputsC0.tInf_AbutementNacelleTrackSideVal, (TVoid*)&gDb_tRam48XsInputsC0.u16AbutementNacelleTrackSideVal, (TVoid*)&gDb_ctSetRam48XsInputsC0.u16Def_AbutementNacelleTrackSideVal, (TVoid*)&gDb_ctSetRam48XsInputsC0.au16Rng_AbutementNacelleTrackSideVal[0]},
    { &gDb_ctSetRam48XsInputsC0.tInf_AbutementNacelleCenteredSide, (TVoid*)&gDb_tRam48XsInputsC0.boAbutementNacelleCenteredSide, (TVoid*)&gDb_ctSetRam48XsInputsC0.boDef_AbutementNacelleCenteredSide, (TVoid*)&gDb_ctSetRam48XsInputsC0.aboRng_AbutementNacelleCenteredSide[0]},
    { &gDb_ctSetRam48XsInputsC0.tInf_AbutementNacelleCenteredSideVal, (TVoid*)&gDb_tRam48XsInputsC0.u16AbutementNacelleCenteredSideVal, (TVoid*)&gDb_ctSetRam48XsInputsC0.u16Def_AbutementNacelleCenteredSideVal, (TVoid*)&gDb_ctSetRam48XsInputsC0.au16Rng_AbutementNacelleCenteredSideVal[0]},
    { &gDb_ctSetRam48XsInputsC0.tInf_DeltaArmJystckCenteredTelescope, (TVoid*)&gDb_tRam48XsInputsC0.boDeltaArmJystckCenteredTelescope, (TVoid*)&gDb_ctSetRam48XsInputsC0.boDef_DeltaArmJystckCenteredTelescope, (TVoid*)&gDb_ctSetRam48XsInputsC0.aboRng_DeltaArmJystckCenteredTelescope[0]},
    { &gDb_ctSetRam48XsInputsC0.tInf_ArrowJoystickCenteredTurret, (TVoid*)&gDb_tRam48XsInputsC0.boArrowJoystickCenteredTurret, (TVoid*)&gDb_ctSetRam48XsInputsC0.boDef_ArrowJoystickCenteredTurret, (TVoid*)&gDb_ctSetRam48XsInputsC0.aboRng_ArrowJoystickCenteredTurret[0]},
    { &gDb_ctSetRam48XsInputsC0.tInf_CenteredAdvanceJoystick, (TVoid*)&gDb_tRam48XsInputsC0.boCenteredAdvanceJoystick, (TVoid*)&gDb_ctSetRam48XsInputsC0.boDef_CenteredAdvanceJoystick, (TVoid*)&gDb_ctSetRam48XsInputsC0.aboRng_CenteredAdvanceJoystick[0]},
    { &gDb_ctSetRam48XsInputsC0.tInf_DeadManPedal, (TVoid*)&gDb_tRam48XsInputsC0.boDeadManPedal, (TVoid*)&gDb_ctSetRam48XsInputsC0.boDef_DeadManPedal, (TVoid*)&gDb_ctSetRam48XsInputsC0.aboRng_DeadManPedal[0]},
    { &gDb_ctSetRam48XsInputsC0.tInf_PressenceInNacelleSensor1, (TVoid*)&gDb_tRam48XsInputsC0.boPressenceInNacelleSensor1, (TVoid*)&gDb_ctSetRam48XsInputsC0.boDef_PressenceInNacelleSensor1, (TVoid*)&gDb_ctSetRam48XsInputsC0.aboRng_PressenceInNacelleSensor1[0]},
    { &gDb_ctSetRam48XsInputsC0.tInf_PressenceInNacelleSensor2, (TVoid*)&gDb_tRam48XsInputsC0.boPressenceInNacelleSensor2, (TVoid*)&gDb_ctSetRam48XsInputsC0.boDef_PressenceInNacelleSensor2, (TVoid*)&gDb_ctSetRam48XsInputsC0.aboRng_PressenceInNacelleSensor2[0]},
    { &gDb_ctSetRam48XsInputsC0.tInf_Gachette, (TVoid*)&gDb_tRam48XsInputsC0.boGachette, (TVoid*)&gDb_ctSetRam48XsInputsC0.boDef_Gachette, (TVoid*)&gDb_ctSetRam48XsInputsC0.aboRng_Gachette[0]},
    { &gDb_ctSetRam48XsInputsC0.tInf_Klaxon, (TVoid*)&gDb_tRam48XsInputsC0.boKlaxon, (TVoid*)&gDb_ctSetRam48XsInputsC0.boDef_Klaxon, (TVoid*)&gDb_ctSetRam48XsInputsC0.aboRng_Klaxon[0]},
    { &gDb_ctSetRam48XsInputsC0.tInf_StopMotorButton, (TVoid*)&gDb_tRam48XsInputsC0.boStopMotorButton, (TVoid*)&gDb_ctSetRam48XsInputsC0.boDef_StopMotorButton, (TVoid*)&gDb_ctSetRam48XsInputsC0.aboRng_StopMotorButton[0]},
    { &gDb_ctSetRam48XsInputsC0.tInf_AuthorizationWorkKey, (TVoid*)&gDb_tRam48XsInputsC0.boAuthorizationWorkKey, (TVoid*)&gDb_ctSetRam48XsInputsC0.boDef_AuthorizationWorkKey, (TVoid*)&gDb_ctSetRam48XsInputsC0.aboRng_AuthorizationWorkKey[0]},
    { &gDb_ctSetRam48XsInputsC0.tInf_EtallonnageJoystickButton, (TVoid*)&gDb_tRam48XsInputsC0.boEtallonnageJoystickButton, (TVoid*)&gDb_ctSetRam48XsInputsC0.boDef_EtallonnageJoystickButton, (TVoid*)&gDb_ctSetRam48XsInputsC0.aboRng_EtallonnageJoystickButton[0]},
    { &gDb_ctSetRam48XsInputsC0.tInf_ClosePortillonSensor, (TVoid*)&gDb_tRam48XsInputsC0.boClosePortillonSensor, (TVoid*)&gDb_ctSetRam48XsInputsC0.boDef_ClosePortillonSensor, (TVoid*)&gDb_ctSetRam48XsInputsC0.aboRng_ClosePortillonSensor[0]},
    { &gDb_ctSetRam48XsInputsC0.tInf_Hearbeat48Xs, (TVoid*)&gDb_tRam48XsInputsC0.u8Hearbeat48Xs, (TVoid*)&gDb_ctSetRam48XsInputsC0.u8Def_Hearbeat48Xs, (TVoid*)&gDb_ctSetRam48XsInputsC0.au8Rng_Hearbeat48Xs[0]},
    { &gDb_ctSetRam48XsInputsC0.tInf_BatterieVoltage48Xs, (TVoid*)&gDb_tRam48XsInputsC0.u16BatterieVoltage48Xs, (TVoid*)&gDb_ctSetRam48XsInputsC0.u16Def_BatterieVoltage48Xs, (TVoid*)&gDb_ctSetRam48XsInputsC0.au16Rng_BatterieVoltage48Xs[0]}
};

const TDbVarTabRam gDb_catVarTabRam48XsOutputsC0[18] =
{    //!< *cptInf *vpVal *cvpDataDef 
    { &gDb_ctSetRam48XsOutputsC0.tInf_WhiteLightsCommand, (TVoid*)&gDb_tRam48XsOutputsC0.boWhiteLightsCommand, (TVoid*)&gDb_ctSetRam48XsOutputsC0.boDef_WhiteLightsCommand, (TVoid*)&gDb_ctSetRam48XsOutputsC0.aboRng_WhiteLightsCommand[0]},
    { &gDb_ctSetRam48XsOutputsC0.tInf_WhiteLightsValue, (TVoid*)&gDb_tRam48XsOutputsC0.eWhiteLightsValue, (TVoid*)&gDb_ctSetRam48XsOutputsC0.eDef_WhiteLightsValue, (TVoid*)&gDb_ctSetRam48XsOutputsC0.aeRng_WhiteLightsValue[0]},
    { &gDb_ctSetRam48XsOutputsC0.tInf_RedLightsCommand, (TVoid*)&gDb_tRam48XsOutputsC0.boRedLightsCommand, (TVoid*)&gDb_ctSetRam48XsOutputsC0.boDef_RedLightsCommand, (TVoid*)&gDb_ctSetRam48XsOutputsC0.aboRng_RedLightsCommand[0]},
    { &gDb_ctSetRam48XsOutputsC0.tInf_RedLightsValue, (TVoid*)&gDb_tRam48XsOutputsC0.eRedLightsValue, (TVoid*)&gDb_ctSetRam48XsOutputsC0.eDef_RedLightsValue, (TVoid*)&gDb_ctSetRam48XsOutputsC0.aeRng_RedLightsValue[0]},
    { &gDb_ctSetRam48XsOutputsC0.tInf_WorkLightCommand, (TVoid*)&gDb_tRam48XsOutputsC0.boWorkLightCommand, (TVoid*)&gDb_ctSetRam48XsOutputsC0.boDef_WorkLightCommand, (TVoid*)&gDb_ctSetRam48XsOutputsC0.aboRng_WorkLightCommand[0]},
    { &gDb_ctSetRam48XsOutputsC0.tInf_WorkLightValue, (TVoid*)&gDb_tRam48XsOutputsC0.eWorkLightValue, (TVoid*)&gDb_ctSetRam48XsOutputsC0.eDef_WorkLightValue, (TVoid*)&gDb_ctSetRam48XsOutputsC0.aeRng_WorkLightValue[0]},
    { &gDb_ctSetRam48XsOutputsC0.tInf_BuzzerCommand, (TVoid*)&gDb_tRam48XsOutputsC0.boBuzzerCommand, (TVoid*)&gDb_ctSetRam48XsOutputsC0.boDef_BuzzerCommand, (TVoid*)&gDb_ctSetRam48XsOutputsC0.aboRng_BuzzerCommand[0]},
    { &gDb_ctSetRam48XsOutputsC0.tInf_BuzzerValue, (TVoid*)&gDb_tRam48XsOutputsC0.eBuzzerValue, (TVoid*)&gDb_ctSetRam48XsOutputsC0.eDef_BuzzerValue, (TVoid*)&gDb_ctSetRam48XsOutputsC0.aeRng_BuzzerValue[0]},
    { &gDb_ctSetRam48XsOutputsC0.tInf_MotorDefaultLightErrSta, (TVoid*)&gDb_tRam48XsOutputsC0.eMotorDefaultLightErrSta, (TVoid*)&gDb_ctSetRam48XsOutputsC0.eDef_MotorDefaultLightErrSta, (TVoid*)&gDb_ctSetRam48XsOutputsC0.aeRng_MotorDefaultLightErrSta[0]},
    { &gDb_ctSetRam48XsOutputsC0.tInf_OverloadLightErrSta, (TVoid*)&gDb_tRam48XsOutputsC0.eOverloadLightErrSta, (TVoid*)&gDb_ctSetRam48XsOutputsC0.eDef_OverloadLightErrSta, (TVoid*)&gDb_ctSetRam48XsOutputsC0.aeRng_OverloadLightErrSta[0]},
    { &gDb_ctSetRam48XsOutputsC0.tInf_BuzzerErrSta, (TVoid*)&gDb_tRam48XsOutputsC0.eBuzzerErrSta, (TVoid*)&gDb_ctSetRam48XsOutputsC0.eDef_BuzzerErrSta, (TVoid*)&gDb_ctSetRam48XsOutputsC0.aeRng_BuzzerErrSta[0]},
    { &gDb_ctSetRam48XsOutputsC0.tInf_GasOilLightErrSta, (TVoid*)&gDb_tRam48XsOutputsC0.eGasOilLightErrSta, (TVoid*)&gDb_ctSetRam48XsOutputsC0.eDef_GasOilLightErrSta, (TVoid*)&gDb_ctSetRam48XsOutputsC0.aeRng_GasOilLightErrSta[0]},
    { &gDb_ctSetRam48XsOutputsC0.tInf_DeversDefaultLightErrSta, (TVoid*)&gDb_tRam48XsOutputsC0.eDeversDefaultLightErrSta, (TVoid*)&gDb_ctSetRam48XsOutputsC0.eDef_DeversDefaultLightErrSta, (TVoid*)&gDb_ctSetRam48XsOutputsC0.aeRng_DeversDefaultLightErrSta[0]},
    { &gDb_ctSetRam48XsOutputsC0.tInf_RedLightARDErrSta, (TVoid*)&gDb_tRam48XsOutputsC0.eRedLightARDErrSta, (TVoid*)&gDb_ctSetRam48XsOutputsC0.eDef_RedLightARDErrSta, (TVoid*)&gDb_ctSetRam48XsOutputsC0.aeRng_RedLightARDErrSta[0]},
    { &gDb_ctSetRam48XsOutputsC0.tInf_WhiteLightARDErrSta, (TVoid*)&gDb_tRam48XsOutputsC0.eWhiteLightARDErrSta, (TVoid*)&gDb_ctSetRam48XsOutputsC0.eDef_WhiteLightARDErrSta, (TVoid*)&gDb_ctSetRam48XsOutputsC0.aeRng_WhiteLightARDErrSta[0]},
    { &gDb_ctSetRam48XsOutputsC0.tInf_WarmingLightErrSta, (TVoid*)&gDb_tRam48XsOutputsC0.eWarmingLightErrSta, (TVoid*)&gDb_ctSetRam48XsOutputsC0.eDef_WarmingLightErrSta, (TVoid*)&gDb_ctSetRam48XsOutputsC0.aeRng_WarmingLightErrSta[0]},
    { &gDb_ctSetRam48XsOutputsC0.tInf_RedLightARGErrSta, (TVoid*)&gDb_tRam48XsOutputsC0.eRedLightARGErrSta, (TVoid*)&gDb_ctSetRam48XsOutputsC0.eDef_RedLightARGErrSta, (TVoid*)&gDb_ctSetRam48XsOutputsC0.aeRng_RedLightARGErrSta[0]},
    { &gDb_ctSetRam48XsOutputsC0.tInf_WhiteLightARGErrSta, (TVoid*)&gDb_tRam48XsOutputsC0.eWhiteLightARGErrSta, (TVoid*)&gDb_ctSetRam48XsOutputsC0.eDef_WhiteLightARGErrSta, (TVoid*)&gDb_ctSetRam48XsOutputsC0.aeRng_WhiteLightARGErrSta[0]}
};

const TDbVarTabRam gDb_catVarTabRamEcuInputRadioControl[20] =
{    //!< *cptInf *vpVal *cvpDataDef 
    { &gDb_ctSetRamEcuInputRadioControl.tInf_StateRadioControl, (TVoid*)&gDb_tRamEcuInputRadioControl.eStateRadioControl, (TVoid*)&gDb_ctSetRamEcuInputRadioControl.eDef_StateRadioControl, (TVoid*)&gDb_ctSetRamEcuInputRadioControl.aeRng_StateRadioControl[0]},
    { &gDb_ctSetRamEcuInputRadioControl.tInf_LeftManipulator, (TVoid*)&gDb_tRamEcuInputRadioControl.u8LeftManipulator, (TVoid*)&gDb_ctSetRamEcuInputRadioControl.u8Def_LeftManipulator, (TVoid*)&gDb_ctSetRamEcuInputRadioControl.au8Rng_LeftManipulator[0]},
    { &gDb_ctSetRamEcuInputRadioControl.tInf_RightManipulator, (TVoid*)&gDb_tRamEcuInputRadioControl.u8RightManipulator, (TVoid*)&gDb_ctSetRamEcuInputRadioControl.u8Def_RightManipulator, (TVoid*)&gDb_ctSetRamEcuInputRadioControl.au8Rng_RightManipulator[0]},
    { &gDb_ctSetRamEcuInputRadioControl.tInf_LeftManipulatorPosition, (TVoid*)&gDb_tRamEcuInputRadioControl.eLeftManipulatorPosition, (TVoid*)&gDb_ctSetRamEcuInputRadioControl.eDef_LeftManipulatorPosition, (TVoid*)&gDb_ctSetRamEcuInputRadioControl.aeRng_LeftManipulatorPosition[0]},
    { &gDb_ctSetRamEcuInputRadioControl.tInf_RightManipulatorPosition, (TVoid*)&gDb_tRamEcuInputRadioControl.eRightManipulatorPosition, (TVoid*)&gDb_ctSetRamEcuInputRadioControl.eDef_RightManipulatorPosition, (TVoid*)&gDb_ctSetRamEcuInputRadioControl.aeRng_RightManipulatorPosition[0]},
    { &gDb_ctSetRamEcuInputRadioControl.tInf_UpAxleArFixe, (TVoid*)&gDb_tRamEcuInputRadioControl.boUpAxleArFixe, (TVoid*)&gDb_ctSetRamEcuInputRadioControl.boDef_UpAxleArFixe, (TVoid*)&gDb_ctSetRamEcuInputRadioControl.aboRng_UpAxleArFixe[0]},
    { &gDb_ctSetRamEcuInputRadioControl.tInf_DownAxleArFixe, (TVoid*)&gDb_tRamEcuInputRadioControl.boDownAxleArFixe, (TVoid*)&gDb_ctSetRamEcuInputRadioControl.boDef_DownAxleArFixe, (TVoid*)&gDb_ctSetRamEcuInputRadioControl.aboRng_DownAxleArFixe[0]},
    { &gDb_ctSetRamEcuInputRadioControl.tInf_UpAxleAvOscillant, (TVoid*)&gDb_tRamEcuInputRadioControl.boUpAxleAvOscillant, (TVoid*)&gDb_ctSetRamEcuInputRadioControl.boDef_UpAxleAvOscillant, (TVoid*)&gDb_ctSetRamEcuInputRadioControl.aboRng_UpAxleAvOscillant[0]},
    { &gDb_ctSetRamEcuInputRadioControl.tInf_DownAxleAvOscillant, (TVoid*)&gDb_tRamEcuInputRadioControl.boDownAxleAvOscillant, (TVoid*)&gDb_ctSetRamEcuInputRadioControl.boDef_DownAxleAvOscillant, (TVoid*)&gDb_ctSetRamEcuInputRadioControl.aboRng_DownAxleAvOscillant[0]},
    { &gDb_ctSetRamEcuInputRadioControl.tInf_RotationFrameCtClkwise, (TVoid*)&gDb_tRamEcuInputRadioControl.boRotationFrameCtClkwise, (TVoid*)&gDb_ctSetRamEcuInputRadioControl.boDef_RotationFrameCtClkwise, (TVoid*)&gDb_ctSetRamEcuInputRadioControl.aboRng_RotationFrameCtClkwise[0]},
    { &gDb_ctSetRamEcuInputRadioControl.tInf_RotationFrameClkwise, (TVoid*)&gDb_tRamEcuInputRadioControl.boRotationFrameClkwise, (TVoid*)&gDb_ctSetRamEcuInputRadioControl.boDef_RotationFrameClkwise, (TVoid*)&gDb_ctSetRamEcuInputRadioControl.aboRng_RotationFrameClkwise[0]},
    { &gDb_ctSetRamEcuInputRadioControl.tInf_SelectorRotTurret, (TVoid*)&gDb_tRamEcuInputRadioControl.boSelectorRotTurret, (TVoid*)&gDb_ctSetRamEcuInputRadioControl.boDef_SelectorRotTurret, (TVoid*)&gDb_ctSetRamEcuInputRadioControl.aboRng_SelectorRotTurret[0]},
    { &gDb_ctSetRamEcuInputRadioControl.tInf_SelectorPendular, (TVoid*)&gDb_tRamEcuInputRadioControl.boSelectorPendular, (TVoid*)&gDb_ctSetRamEcuInputRadioControl.boDef_SelectorPendular, (TVoid*)&gDb_ctSetRamEcuInputRadioControl.aboRng_SelectorPendular[0]},
    { &gDb_ctSetRamEcuInputRadioControl.tInf_RadioCommandConnect, (TVoid*)&gDb_tRamEcuInputRadioControl.boRadioCommandConnect, (TVoid*)&gDb_ctSetRamEcuInputRadioControl.boDef_RadioCommandConnect, (TVoid*)&gDb_ctSetRamEcuInputRadioControl.aboRng_RadioCommandConnect[0]},
    { &gDb_ctSetRamEcuInputRadioControl.tInf_UpPendularOrRotCtClkTurret, (TVoid*)&gDb_tRamEcuInputRadioControl.boUpPendularOrRotCtClkTurret, (TVoid*)&gDb_ctSetRamEcuInputRadioControl.boDef_UpPendularOrRotCtClkTurret, (TVoid*)&gDb_ctSetRamEcuInputRadioControl.aboRng_UpPendularOrRotCtClkTurret[0]},
    { &gDb_ctSetRamEcuInputRadioControl.tInf_DownPendularOrRotClkTurret, (TVoid*)&gDb_tRamEcuInputRadioControl.boDownPendularOrRotClkTurret, (TVoid*)&gDb_ctSetRamEcuInputRadioControl.boDef_DownPendularOrRotClkTurret, (TVoid*)&gDb_ctSetRamEcuInputRadioControl.aboRng_DownPendularOrRotClkTurret[0]},
    { &gDb_ctSetRamEcuInputRadioControl.tInf_StartRadioCommand, (TVoid*)&gDb_tRamEcuInputRadioControl.boStartRadioCommand, (TVoid*)&gDb_ctSetRamEcuInputRadioControl.boDef_StartRadioCommand, (TVoid*)&gDb_ctSetRamEcuInputRadioControl.aboRng_StartRadioCommand[0]},
    { &gDb_ctSetRamEcuInputRadioControl.tInf_StopRadioCommand, (TVoid*)&gDb_tRamEcuInputRadioControl.boStopRadioCommand, (TVoid*)&gDb_ctSetRamEcuInputRadioControl.boDef_StopRadioCommand, (TVoid*)&gDb_ctSetRamEcuInputRadioControl.aboRng_StopRadioCommand[0]},
    { &gDb_ctSetRamEcuInputRadioControl.tInf_ForcingAdvanceTrack, (TVoid*)&gDb_tRamEcuInputRadioControl.boForcingAdvanceTrack, (TVoid*)&gDb_ctSetRamEcuInputRadioControl.boDef_ForcingAdvanceTrack, (TVoid*)&gDb_ctSetRamEcuInputRadioControl.aboRng_ForcingAdvanceTrack[0]},
    { &gDb_ctSetRamEcuInputRadioControl.tInf_KlaxonCommand, (TVoid*)&gDb_tRamEcuInputRadioControl.boKlaxonCommand, (TVoid*)&gDb_ctSetRamEcuInputRadioControl.boDef_KlaxonCommand, (TVoid*)&gDb_ctSetRamEcuInputRadioControl.aboRng_KlaxonCommand[0]}
};

const TDbVarTabRam gDb_catVarTabRamCanSensorC0[30] =
{    //!< *cptInf *vpVal *cvpDataDef 
    { &gDb_ctSetRamCanSensorC0.tInf_EncodeurTurret1AngleRaw, (TVoid*)&gDb_tRamCanSensorC0.u32EncodeurTurret1AngleRaw, (TVoid*)&gDb_ctSetRamCanSensorC0.u32Def_EncodeurTurret1AngleRaw, (TVoid*)&gDb_ctSetRamCanSensorC0.au32Rng_EncodeurTurret1AngleRaw[0]},
    { &gDb_ctSetRamCanSensorC0.tInf_EncodeurTurret1Angle, (TVoid*)&gDb_tRamCanSensorC0.i16EncodeurTurret1Angle, (TVoid*)&gDb_ctSetRamCanSensorC0.i16Def_EncodeurTurret1Angle, (TVoid*)&gDb_ctSetRamCanSensorC0.ai16Rng_EncodeurTurret1Angle[0]},
    { &gDb_ctSetRamCanSensorC0.tInf_EncodeurTurret2AngleRaw, (TVoid*)&gDb_tRamCanSensorC0.u32EncodeurTurret2AngleRaw, (TVoid*)&gDb_ctSetRamCanSensorC0.u32Def_EncodeurTurret2AngleRaw, (TVoid*)&gDb_ctSetRamCanSensorC0.au32Rng_EncodeurTurret2AngleRaw[0]},
    { &gDb_ctSetRamCanSensorC0.tInf_EncodeurTurret2Angle, (TVoid*)&gDb_tRamCanSensorC0.i16EncodeurTurret2Angle, (TVoid*)&gDb_ctSetRamCanSensorC0.i16Def_EncodeurTurret2Angle, (TVoid*)&gDb_ctSetRamCanSensorC0.ai16Rng_EncodeurTurret2Angle[0]},
    { &gDb_ctSetRamCanSensorC0.tInf_SlopeLongAngleSensor1, (TVoid*)&gDb_tRamCanSensorC0.i16SlopeLongAngleSensor1, (TVoid*)&gDb_ctSetRamCanSensorC0.i16Def_SlopeLongAngleSensor1, (TVoid*)&gDb_ctSetRamCanSensorC0.ai16Rng_SlopeLongAngleSensor1[0]},
    { &gDb_ctSetRamCanSensorC0.tInf_SlopeTransAngleSensor1, (TVoid*)&gDb_tRamCanSensorC0.i16SlopeTransAngleSensor1, (TVoid*)&gDb_ctSetRamCanSensorC0.i16Def_SlopeTransAngleSensor1, (TVoid*)&gDb_ctSetRamCanSensorC0.ai16Rng_SlopeTransAngleSensor1[0]},
    { &gDb_ctSetRamCanSensorC0.tInf_SlopeLongAngleValue, (TVoid*)&gDb_tRamCanSensorC0.i16SlopeLongAngleValue, (TVoid*)&gDb_ctSetRamCanSensorC0.i16Def_SlopeLongAngleValue, (TVoid*)&gDb_ctSetRamCanSensorC0.ai16Rng_SlopeLongAngleValue[0]},
    { &gDb_ctSetRamCanSensorC0.tInf_SlopeTransAngleValue, (TVoid*)&gDb_tRamCanSensorC0.i16SlopeTransAngleValue, (TVoid*)&gDb_ctSetRamCanSensorC0.i16Def_SlopeTransAngleValue, (TVoid*)&gDb_ctSetRamCanSensorC0.ai16Rng_SlopeTransAngleValue[0]},
    { &gDb_ctSetRamCanSensorC0.tInf_StateHeartBeatDeversSensor, (TVoid*)&gDb_tRamCanSensorC0.u8StateHeartBeatDeversSensor, (TVoid*)&gDb_ctSetRamCanSensorC0.u8Def_StateHeartBeatDeversSensor, (TVoid*)&gDb_ctSetRamCanSensorC0.au8Rng_StateHeartBeatDeversSensor[0]},
    { &gDb_ctSetRamCanSensorC0.tInf_StateHeartBeatEncodeurTurret1, (TVoid*)&gDb_tRamCanSensorC0.u8StateHeartBeatEncodeurTurret1, (TVoid*)&gDb_ctSetRamCanSensorC0.u8Def_StateHeartBeatEncodeurTurret1, (TVoid*)&gDb_ctSetRamCanSensorC0.au8Rng_StateHeartBeatEncodeurTurret1[0]},
    { &gDb_ctSetRamCanSensorC0.tInf_SelectedSlopeAngle, (TVoid*)&gDb_tRamCanSensorC0.u16SelectedSlopeAngle, (TVoid*)&gDb_ctSetRamCanSensorC0.u16Def_SelectedSlopeAngle, (TVoid*)&gDb_ctSetRamCanSensorC0.au16Rng_SelectedSlopeAngle[0]},
    { &gDb_ctSetRamCanSensorC0.tInf_EncodeurMastMeasureRaw, (TVoid*)&gDb_tRamCanSensorC0.u32EncodeurMastMeasureRaw, (TVoid*)&gDb_ctSetRamCanSensorC0.u32Def_EncodeurMastMeasureRaw, (TVoid*)&gDb_ctSetRamCanSensorC0.au32Rng_EncodeurMastMeasureRaw[0]},
    { &gDb_ctSetRamCanSensorC0.tInf_EncodeurMastMeasureCentimeter, (TVoid*)&gDb_tRamCanSensorC0.u16EncodeurMastMeasureCentimeter, (TVoid*)&gDb_ctSetRamCanSensorC0.u16Def_EncodeurMastMeasureCentimeter, (TVoid*)&gDb_ctSetRamCanSensorC0.au16Rng_EncodeurMastMeasureCentimeter[0]},
    { &gDb_ctSetRamCanSensorC0.tInf_SlopeLongAngleSensor2, (TVoid*)&gDb_tRamCanSensorC0.i16SlopeLongAngleSensor2, (TVoid*)&gDb_ctSetRamCanSensorC0.i16Def_SlopeLongAngleSensor2, (TVoid*)&gDb_ctSetRamCanSensorC0.ai16Rng_SlopeLongAngleSensor2[0]},
    { &gDb_ctSetRamCanSensorC0.tInf_SlopeTransAngleSensor2, (TVoid*)&gDb_tRamCanSensorC0.i16SlopeTransAngleSensor2, (TVoid*)&gDb_ctSetRamCanSensorC0.i16Def_SlopeTransAngleSensor2, (TVoid*)&gDb_ctSetRamCanSensorC0.ai16Rng_SlopeTransAngleSensor2[0]},
    { &gDb_ctSetRamCanSensorC0.tInf_SlopeAlarm1, (TVoid*)&gDb_tRamCanSensorC0.u8SlopeAlarm1, (TVoid*)&gDb_ctSetRamCanSensorC0.u8Def_SlopeAlarm1, (TVoid*)&gDb_ctSetRamCanSensorC0.au8Rng_SlopeAlarm1[0]},
    { &gDb_ctSetRamCanSensorC0.tInf_SlopeAlarm2, (TVoid*)&gDb_tRamCanSensorC0.u8SlopeAlarm2, (TVoid*)&gDb_ctSetRamCanSensorC0.u8Def_SlopeAlarm2, (TVoid*)&gDb_ctSetRamCanSensorC0.au8Rng_SlopeAlarm2[0]},
    { &gDb_ctSetRamCanSensorC0.tInf_SlopeLongAngleValue2, (TVoid*)&gDb_tRamCanSensorC0.i16SlopeLongAngleValue2, (TVoid*)&gDb_ctSetRamCanSensorC0.i16Def_SlopeLongAngleValue2, (TVoid*)&gDb_ctSetRamCanSensorC0.ai16Rng_SlopeLongAngleValue2[0]},
    { &gDb_ctSetRamCanSensorC0.tInf_SlopeTransAngleValue2, (TVoid*)&gDb_tRamCanSensorC0.i16SlopeTransAngleValue2, (TVoid*)&gDb_ctSetRamCanSensorC0.i16Def_SlopeTransAngleValue2, (TVoid*)&gDb_ctSetRamCanSensorC0.ai16Rng_SlopeTransAngleValue2[0]},
    { &gDb_ctSetRamCanSensorC0.tInf_ErrorCodeEncodeurTurret1, (TVoid*)&gDb_tRamCanSensorC0.u16ErrorCodeEncodeurTurret1, (TVoid*)&gDb_ctSetRamCanSensorC0.u16Def_ErrorCodeEncodeurTurret1, (TVoid*)&gDb_ctSetRamCanSensorC0.au16Rng_ErrorCodeEncodeurTurret1[0]},
    { &gDb_ctSetRamCanSensorC0.tInf_ErrorRegisterEncodeurTurret1, (TVoid*)&gDb_tRamCanSensorC0.u16ErrorRegisterEncodeurTurret1, (TVoid*)&gDb_ctSetRamCanSensorC0.u16Def_ErrorRegisterEncodeurTurret1, (TVoid*)&gDb_ctSetRamCanSensorC0.au16Rng_ErrorRegisterEncodeurTurret1[0]},
    { &gDb_ctSetRamCanSensorC0.tInf_ErrorCodeEncodeurTurret2, (TVoid*)&gDb_tRamCanSensorC0.u16ErrorCodeEncodeurTurret2, (TVoid*)&gDb_ctSetRamCanSensorC0.u16Def_ErrorCodeEncodeurTurret2, (TVoid*)&gDb_ctSetRamCanSensorC0.au16Rng_ErrorCodeEncodeurTurret2[0]},
    { &gDb_ctSetRamCanSensorC0.tInf_ErrorRegisterEncodeurTurret2, (TVoid*)&gDb_tRamCanSensorC0.u16ErrorRegisterEncodeurTurret2, (TVoid*)&gDb_ctSetRamCanSensorC0.u16Def_ErrorRegisterEncodeurTurret2, (TVoid*)&gDb_ctSetRamCanSensorC0.au16Rng_ErrorRegisterEncodeurTurret2[0]},
    { &gDb_ctSetRamCanSensorC0.tInf_ErrorCodeMastMeasure, (TVoid*)&gDb_tRamCanSensorC0.u16ErrorCodeMastMeasure, (TVoid*)&gDb_ctSetRamCanSensorC0.u16Def_ErrorCodeMastMeasure, (TVoid*)&gDb_ctSetRamCanSensorC0.au16Rng_ErrorCodeMastMeasure[0]},
    { &gDb_ctSetRamCanSensorC0.tInf_ErrorRegisterMastMeasure, (TVoid*)&gDb_tRamCanSensorC0.u16ErrorRegisterMastMeasure, (TVoid*)&gDb_ctSetRamCanSensorC0.u16Def_ErrorRegisterMastMeasure, (TVoid*)&gDb_ctSetRamCanSensorC0.au16Rng_ErrorRegisterMastMeasure[0]},
    { &gDb_ctSetRamCanSensorC0.tInf_StateHeartBeatDeversSensor2, (TVoid*)&gDb_tRamCanSensorC0.u8StateHeartBeatDeversSensor2, (TVoid*)&gDb_ctSetRamCanSensorC0.u8Def_StateHeartBeatDeversSensor2, (TVoid*)&gDb_ctSetRamCanSensorC0.au8Rng_StateHeartBeatDeversSensor2[0]},
    { &gDb_ctSetRamCanSensorC0.tInf_TimeoutSdoReqDetectedEncdTurret1, (TVoid*)&gDb_tRamCanSensorC0.boTimeoutSdoReqDetectedEncdTurret1, (TVoid*)&gDb_ctSetRamCanSensorC0.boDef_TimeoutSdoReqDetectedEncdTurret1, (TVoid*)&gDb_ctSetRamCanSensorC0.aboRng_TimeoutSdoReqDetectedEncdTurret1[0]},
    { &gDb_ctSetRamCanSensorC0.tInf_TimeoutSdoReqDetectedEncdTurret2, (TVoid*)&gDb_tRamCanSensorC0.boTimeoutSdoReqDetectedEncdTurret2, (TVoid*)&gDb_ctSetRamCanSensorC0.boDef_TimeoutSdoReqDetectedEncdTurret2, (TVoid*)&gDb_ctSetRamCanSensorC0.aboRng_TimeoutSdoReqDetectedEncdTurret2[0]},
    { &gDb_ctSetRamCanSensorC0.tInf_EncodeurTurretOffset, (TVoid*)&gDb_tRamCanSensorC0.u32EncodeurTurretOffset, (TVoid*)&gDb_ctSetRamCanSensorC0.u32Def_EncodeurTurretOffset, (TVoid*)&gDb_ctSetRamCanSensorC0.au32Rng_EncodeurTurretOffset[0]},
    { &gDb_ctSetRamCanSensorC0.tInf_EncodeurTurretOffset2, (TVoid*)&gDb_tRamCanSensorC0.u32EncodeurTurretOffset2, (TVoid*)&gDb_ctSetRamCanSensorC0.u32Def_EncodeurTurretOffset2, (TVoid*)&gDb_ctSetRamCanSensorC0.au32Rng_EncodeurTurretOffset2[0]}
};

const TDbVarTabRam gDb_catVarTabRamEvision7C0[64] =
{    //!< *cptInf *vpVal *cvpDataDef 
    { &gDb_ctSetRamEvision7C0.tInf_LoginStatus, (TVoid*)&gDb_tRamEvision7C0.boLoginStatus, (TVoid*)&gDb_ctSetRamEvision7C0.boDef_LoginStatus, (TVoid*)&gDb_ctSetRamEvision7C0.aboRng_LoginStatus[0]},
    { &gDb_ctSetRamEvision7C0.tInf_AllowMovementNacelle, (TVoid*)&gDb_tRamEvision7C0.boAllowMovementNacelle, (TVoid*)&gDb_ctSetRamEvision7C0.boDef_AllowMovementNacelle, (TVoid*)&gDb_ctSetRamEvision7C0.aboRng_AllowMovementNacelle[0]},
    { &gDb_ctSetRamEvision7C0.tInf_gBreak_Parking_On_Off, (TVoid*)&gDb_tRamEvision7C0.bogBreak_Parking_On_Off, (TVoid*)&gDb_ctSetRamEvision7C0.boDef_gBreak_Parking_On_Off, (TVoid*)&gDb_ctSetRamEvision7C0.aboRng_gBreak_Parking_On_Off[0]},
    { &gDb_ctSetRamEvision7C0.tInf_gBreak_Faillure_On_Off, (TVoid*)&gDb_tRamEvision7C0.bogBreak_Faillure_On_Off, (TVoid*)&gDb_ctSetRamEvision7C0.boDef_gBreak_Faillure_On_Off, (TVoid*)&gDb_ctSetRamEvision7C0.aboRng_gBreak_Faillure_On_Off[0]},
    { &gDb_ctSetRamEvision7C0.tInf_gTurretInCenter, (TVoid*)&gDb_tRamEvision7C0.bogTurretInCenter, (TVoid*)&gDb_ctSetRamEvision7C0.boDef_gTurretInCenter, (TVoid*)&gDb_ctSetRamEvision7C0.aboRng_gTurretInCenter[0]},
    { &gDb_ctSetRamEvision7C0.tInf_gTurretSectorInCenter, (TVoid*)&gDb_tRamEvision7C0.bogTurretSectorInCenter, (TVoid*)&gDb_ctSetRamEvision7C0.boDef_gTurretSectorInCenter, (TVoid*)&gDb_ctSetRamEvision7C0.aboRng_gTurretSectorInCenter[0]},
    { &gDb_ctSetRamEvision7C0.tInf_gVehiculeTrainMode, (TVoid*)&gDb_tRamEvision7C0.bogVehiculeTrainMode, (TVoid*)&gDb_ctSetRamEvision7C0.boDef_gVehiculeTrainMode, (TVoid*)&gDb_ctSetRamEvision7C0.aboRng_gVehiculeTrainMode[0]},
    { &gDb_ctSetRamEvision7C0.tInf_gIncoherenceLateralStopAndKey, (TVoid*)&gDb_tRamEvision7C0.bogIncoherenceLateralStopAndKey, (TVoid*)&gDb_ctSetRamEvision7C0.boDef_gIncoherenceLateralStopAndKey, (TVoid*)&gDb_ctSetRamEvision7C0.aboRng_gIncoherenceLateralStopAndKey[0]},
    { &gDb_ctSetRamEvision7C0.tInf_gWorkMode, (TVoid*)&gDb_tRamEvision7C0.bogWorkMode, (TVoid*)&gDb_ctSetRamEvision7C0.boDef_gWorkMode, (TVoid*)&gDb_ctSetRamEvision7C0.aboRng_gWorkMode[0]},
    { &gDb_ctSetRamEvision7C0.tInf_gSafetyElectricPump, (TVoid*)&gDb_tRamEvision7C0.bogSafetyElectricPump, (TVoid*)&gDb_ctSetRamEvision7C0.boDef_gSafetyElectricPump, (TVoid*)&gDb_ctSetRamEvision7C0.aboRng_gSafetyElectricPump[0]},
    { &gDb_ctSetRamEvision7C0.tInf_gDownhill150mm, (TVoid*)&gDb_tRamEvision7C0.bogDownhill150mm, (TVoid*)&gDb_ctSetRamEvision7C0.boDef_gDownhill150mm, (TVoid*)&gDb_ctSetRamEvision7C0.aboRng_gDownhill150mm[0]},
    { &gDb_ctSetRamEvision7C0.tInf_gTrainModeAllow, (TVoid*)&gDb_tRamEvision7C0.bogTrainModeAllow, (TVoid*)&gDb_ctSetRamEvision7C0.boDef_gTrainModeAllow, (TVoid*)&gDb_ctSetRamEvision7C0.aboRng_gTrainModeAllow[0]},
    { &gDb_ctSetRamEvision7C0.tInf_gBrakeTestService, (TVoid*)&gDb_tRamEvision7C0.bogBrakeTestService, (TVoid*)&gDb_ctSetRamEvision7C0.boDef_gBrakeTestService, (TVoid*)&gDb_ctSetRamEvision7C0.aboRng_gBrakeTestService[0]},
    { &gDb_ctSetRamEvision7C0.tInf_gBrakePressureFault, (TVoid*)&gDb_tRamEvision7C0.bogBrakePressureFault, (TVoid*)&gDb_ctSetRamEvision7C0.boDef_gBrakePressureFault, (TVoid*)&gDb_ctSetRamEvision7C0.aboRng_gBrakePressureFault[0]},
    { &gDb_ctSetRamEvision7C0.tInf_gActivateMeasuringMast, (TVoid*)&gDb_tRamEvision7C0.bogActivateMeasuringMast, (TVoid*)&gDb_ctSetRamEvision7C0.boDef_gActivateMeasuringMast, (TVoid*)&gDb_ctSetRamEvision7C0.aboRng_gActivateMeasuringMast[0]},
    { &gDb_ctSetRamEvision7C0.tInf_gAutoMovementDirectionLight, (TVoid*)&gDb_tRamEvision7C0.bogAutoMovementDirectionLight, (TVoid*)&gDb_ctSetRamEvision7C0.boDef_gAutoMovementDirectionLight, (TVoid*)&gDb_ctSetRamEvision7C0.aboRng_gAutoMovementDirectionLight[0]},
    { &gDb_ctSetRamEvision7C0.tInf_gBackRailwayAxleLowPosition, (TVoid*)&gDb_tRamEvision7C0.bogBackRailwayAxleLowPosition, (TVoid*)&gDb_ctSetRamEvision7C0.boDef_gBackRailwayAxleLowPosition, (TVoid*)&gDb_ctSetRamEvision7C0.aboRng_gBackRailwayAxleLowPosition[0]},
    { &gDb_ctSetRamEvision7C0.tInf_gFrontRailwayAxleLowPosition, (TVoid*)&gDb_tRamEvision7C0.bogFrontRailwayAxleLowPosition, (TVoid*)&gDb_ctSetRamEvision7C0.boDef_gFrontRailwayAxleLowPosition, (TVoid*)&gDb_ctSetRamEvision7C0.aboRng_gFrontRailwayAxleLowPosition[0]},
    { &gDb_ctSetRamEvision7C0.tInf_gBackRailwayAxleServiceBrake, (TVoid*)&gDb_tRamEvision7C0.bogBackRailwayAxleServiceBrake, (TVoid*)&gDb_ctSetRamEvision7C0.boDef_gBackRailwayAxleServiceBrake, (TVoid*)&gDb_ctSetRamEvision7C0.aboRng_gBackRailwayAxleServiceBrake[0]},
    { &gDb_ctSetRamEvision7C0.tInf_gFrontRailwayAxleServiceBrake, (TVoid*)&gDb_tRamEvision7C0.bogFrontRailwayAxleServiceBrake, (TVoid*)&gDb_ctSetRamEvision7C0.boDef_gFrontRailwayAxleServiceBrake, (TVoid*)&gDb_ctSetRamEvision7C0.aboRng_gFrontRailwayAxleServiceBrake[0]},
    { &gDb_ctSetRamEvision7C0.tInf_gBackRailwayAxleParkBrake, (TVoid*)&gDb_tRamEvision7C0.bogBackRailwayAxleParkBrake, (TVoid*)&gDb_ctSetRamEvision7C0.boDef_gBackRailwayAxleParkBrake, (TVoid*)&gDb_ctSetRamEvision7C0.aboRng_gBackRailwayAxleParkBrake[0]},
    { &gDb_ctSetRamEvision7C0.tInf_gFrontRailwayAxleParkBrake, (TVoid*)&gDb_tRamEvision7C0.bogFrontRailwayAxleParkBrake, (TVoid*)&gDb_ctSetRamEvision7C0.boDef_gFrontRailwayAxleParkBrake, (TVoid*)&gDb_ctSetRamEvision7C0.aboRng_gFrontRailwayAxleParkBrake[0]},
    { &gDb_ctSetRamEvision7C0.tInf_gStatusFrontLeftTrainBrakeTest, (TVoid*)&gDb_tRamEvision7C0.bogStatusFrontLeftTrainBrakeTest, (TVoid*)&gDb_ctSetRamEvision7C0.boDef_gStatusFrontLeftTrainBrakeTest, (TVoid*)&gDb_ctSetRamEvision7C0.aboRng_gStatusFrontLeftTrainBrakeTest[0]},
    { &gDb_ctSetRamEvision7C0.tInf_gStatusFrontRightTrainBrakeTest, (TVoid*)&gDb_tRamEvision7C0.bogStatusFrontRightTrainBrakeTest, (TVoid*)&gDb_ctSetRamEvision7C0.boDef_gStatusFrontRightTrainBrakeTest, (TVoid*)&gDb_ctSetRamEvision7C0.aboRng_gStatusFrontRightTrainBrakeTest[0]},
    { &gDb_ctSetRamEvision7C0.tInf_gStatusBackLeftTrainBrakeTest, (TVoid*)&gDb_tRamEvision7C0.bogStatusBackLeftTrainBrakeTest, (TVoid*)&gDb_ctSetRamEvision7C0.boDef_gStatusBackLeftTrainBrakeTest, (TVoid*)&gDb_ctSetRamEvision7C0.aboRng_gStatusBackLeftTrainBrakeTest[0]},
    { &gDb_ctSetRamEvision7C0.tInf_gStatusBackRightTrainBrakeTest, (TVoid*)&gDb_tRamEvision7C0.bogStatusBackRightTrainBrakeTest, (TVoid*)&gDb_ctSetRamEvision7C0.boDef_gStatusBackRightTrainBrakeTest, (TVoid*)&gDb_ctSetRamEvision7C0.aboRng_gStatusBackRightTrainBrakeTest[0]},
    { &gDb_ctSetRamEvision7C0.tInf_gAlarmAru, (TVoid*)&gDb_tRamEvision7C0.bogAlarmAru, (TVoid*)&gDb_ctSetRamEvision7C0.boDef_gAlarmAru, (TVoid*)&gDb_ctSetRamEvision7C0.aboRng_gAlarmAru[0]},
    { &gDb_ctSetRamEvision7C0.tInf_gEngine_Use_Time, (TVoid*)&gDb_tRamEvision7C0.u16gEngine_Use_Time, (TVoid*)&gDb_ctSetRamEvision7C0.u16Def_gEngine_Use_Time, (TVoid*)&gDb_ctSetRamEvision7C0.au16Rng_gEngine_Use_Time[0]},
    { &gDb_ctSetRamEvision7C0.tInf_gEngine_RPM, (TVoid*)&gDb_tRamEvision7C0.u16gEngine_RPM, (TVoid*)&gDb_ctSetRamEvision7C0.u16Def_gEngine_RPM, (TVoid*)&gDb_ctSetRamEvision7C0.au16Rng_gEngine_RPM[0]},
    { &gDb_ctSetRamEvision7C0.tInf_gVehiculeSpeed, (TVoid*)&gDb_tRamEvision7C0.u16gVehiculeSpeed, (TVoid*)&gDb_ctSetRamEvision7C0.u16Def_gVehiculeSpeed, (TVoid*)&gDb_ctSetRamEvision7C0.au16Rng_gVehiculeSpeed[0]},
    { &gDb_ctSetRamEvision7C0.tInf_gLateralizationStop, (TVoid*)&gDb_tRamEvision7C0.u8gLateralizationStop, (TVoid*)&gDb_ctSetRamEvision7C0.u8Def_gLateralizationStop, (TVoid*)&gDb_ctSetRamEvision7C0.au8Rng_gLateralizationStop[0]},
    { &gDb_ctSetRamEvision7C0.tInf_gKeySelector, (TVoid*)&gDb_tRamEvision7C0.u8gKeySelector, (TVoid*)&gDb_ctSetRamEvision7C0.u8Def_gKeySelector, (TVoid*)&gDb_ctSetRamEvision7C0.au8Rng_gKeySelector[0]},
    { &gDb_ctSetRamEvision7C0.tInf_gFrontSpeedRailWayAxle, (TVoid*)&gDb_tRamEvision7C0.u8gFrontSpeedRailWayAxle, (TVoid*)&gDb_ctSetRamEvision7C0.u8Def_gFrontSpeedRailWayAxle, (TVoid*)&gDb_ctSetRamEvision7C0.au8Rng_gFrontSpeedRailWayAxle[0]},
    { &gDb_ctSetRamEvision7C0.tInf_gBackSpeedRailWayAxle, (TVoid*)&gDb_tRamEvision7C0.u8gBackSpeedRailWayAxle, (TVoid*)&gDb_ctSetRamEvision7C0.u8Def_gBackSpeedRailWayAxle, (TVoid*)&gDb_ctSetRamEvision7C0.au8Rng_gBackSpeedRailWayAxle[0]},
    { &gDb_ctSetRamEvision7C0.tInf_gButtonCalibTurretEncoder, (TVoid*)&gDb_tRamEvision7C0.bogButtonCalibTurretEncoder, (TVoid*)&gDb_ctSetRamEvision7C0.boDef_gButtonCalibTurretEncoder, (TVoid*)&gDb_ctSetRamEvision7C0.aboRng_gButtonCalibTurretEncoder[0]},
    { &gDb_ctSetRamEvision7C0.tInf_gOffTrackTestBrakeActivated, (TVoid*)&gDb_tRamEvision7C0.bogOffTrackTestBrakeActivated, (TVoid*)&gDb_ctSetRamEvision7C0.boDef_gOffTrackTestBrakeActivated, (TVoid*)&gDb_ctSetRamEvision7C0.aboRng_gOffTrackTestBrakeActivated[0]},
    { &gDb_ctSetRamEvision7C0.tInf_gOffTrackRunInBrakeActivated, (TVoid*)&gDb_tRamEvision7C0.bogOffTrackRunInBrakeActivated, (TVoid*)&gDb_ctSetRamEvision7C0.boDef_gOffTrackRunInBrakeActivated, (TVoid*)&gDb_ctSetRamEvision7C0.aboRng_gOffTrackRunInBrakeActivated[0]},
    { &gDb_ctSetRamEvision7C0.tInf_gOsciServiceBrakeSelect, (TVoid*)&gDb_tRamEvision7C0.bogOsciServiceBrakeSelect, (TVoid*)&gDb_ctSetRamEvision7C0.boDef_gOsciServiceBrakeSelect, (TVoid*)&gDb_ctSetRamEvision7C0.aboRng_gOsciServiceBrakeSelect[0]},
    { &gDb_ctSetRamEvision7C0.tInf_gFixedServiceBrakeSelect, (TVoid*)&gDb_tRamEvision7C0.bogFixedServiceBrakeSelect, (TVoid*)&gDb_ctSetRamEvision7C0.boDef_gFixedServiceBrakeSelect, (TVoid*)&gDb_ctSetRamEvision7C0.aboRng_gFixedServiceBrakeSelect[0]},
    { &gDb_ctSetRamEvision7C0.tInf_gBothServiceBrakeSelect, (TVoid*)&gDb_tRamEvision7C0.bogBothServiceBrakeSelect, (TVoid*)&gDb_ctSetRamEvision7C0.boDef_gBothServiceBrakeSelect, (TVoid*)&gDb_ctSetRamEvision7C0.aboRng_gBothServiceBrakeSelect[0]},
    { &gDb_ctSetRamEvision7C0.tInf_gOsciParkBrakeSelect, (TVoid*)&gDb_tRamEvision7C0.bogOsciParkBrakeSelect, (TVoid*)&gDb_ctSetRamEvision7C0.boDef_gOsciParkBrakeSelect, (TVoid*)&gDb_ctSetRamEvision7C0.aboRng_gOsciParkBrakeSelect[0]},
    { &gDb_ctSetRamEvision7C0.tInf_gFixedParkBrakeSelect, (TVoid*)&gDb_tRamEvision7C0.bogFixedParkBrakeSelect, (TVoid*)&gDb_ctSetRamEvision7C0.boDef_gFixedParkBrakeSelect, (TVoid*)&gDb_ctSetRamEvision7C0.aboRng_gFixedParkBrakeSelect[0]},
    { &gDb_ctSetRamEvision7C0.tInf_gBothParkBrakeSelect, (TVoid*)&gDb_tRamEvision7C0.bogBothParkBrakeSelect, (TVoid*)&gDb_ctSetRamEvision7C0.boDef_gBothParkBrakeSelect, (TVoid*)&gDb_ctSetRamEvision7C0.aboRng_gBothParkBrakeSelect[0]},
    { &gDb_ctSetRamEvision7C0.tInf_gOsciServiceRunInBrakeSelect, (TVoid*)&gDb_tRamEvision7C0.bogOsciServiceRunInBrakeSelect, (TVoid*)&gDb_ctSetRamEvision7C0.boDef_gOsciServiceRunInBrakeSelect, (TVoid*)&gDb_ctSetRamEvision7C0.aboRng_gOsciServiceRunInBrakeSelect[0]},
    { &gDb_ctSetRamEvision7C0.tInf_gFixedServiceRunInBrakeSelect, (TVoid*)&gDb_tRamEvision7C0.bogFixedServiceRunInBrakeSelect, (TVoid*)&gDb_ctSetRamEvision7C0.boDef_gFixedServiceRunInBrakeSelect, (TVoid*)&gDb_ctSetRamEvision7C0.aboRng_gFixedServiceRunInBrakeSelect[0]},
    { &gDb_ctSetRamEvision7C0.tInf_gBothServiceRunInBrakeSelect, (TVoid*)&gDb_tRamEvision7C0.bogBothServiceRunInBrakeSelect, (TVoid*)&gDb_ctSetRamEvision7C0.boDef_gBothServiceRunInBrakeSelect, (TVoid*)&gDb_ctSetRamEvision7C0.aboRng_gBothServiceRunInBrakeSelect[0]},
    { &gDb_ctSetRamEvision7C0.tInf_gTestBrakePageActive, (TVoid*)&gDb_tRamEvision7C0.bogTestBrakePageActive, (TVoid*)&gDb_ctSetRamEvision7C0.boDef_gTestBrakePageActive, (TVoid*)&gDb_ctSetRamEvision7C0.aboRng_gTestBrakePageActive[0]},
    { &gDb_ctSetRamEvision7C0.tInf_gBreakInBrakePageActive, (TVoid*)&gDb_tRamEvision7C0.bogBreakInBrakePageActive, (TVoid*)&gDb_ctSetRamEvision7C0.boDef_gBreakInBrakePageActive, (TVoid*)&gDb_ctSetRamEvision7C0.aboRng_gBreakInBrakePageActive[0]},
    { &gDb_ctSetRamEvision7C0.tInf_gSerialNumber, (TVoid*)&gDb_tRamEvision7C0.bogSerialNumber, (TVoid*)&gDb_ctSetRamEvision7C0.boDef_gSerialNumber, (TVoid*)&gDb_ctSetRamEvision7C0.aboRng_gSerialNumber[0]},
    { &gDb_ctSetRamEvision7C0.tInf_gBPBasketValidate, (TVoid*)&gDb_tRamEvision7C0.bogBPBasketValidate, (TVoid*)&gDb_ctSetRamEvision7C0.boDef_gBPBasketValidate, (TVoid*)&gDb_ctSetRamEvision7C0.aboRng_gBPBasketValidate[0]},
    { &gDb_ctSetRamEvision7C0.tInf_gKeyFilterOverload, (TVoid*)&gDb_tRamEvision7C0.bogKeyFilterOverload, (TVoid*)&gDb_ctSetRamEvision7C0.boDef_gKeyFilterOverload, (TVoid*)&gDb_ctSetRamEvision7C0.aboRng_gKeyFilterOverload[0]},
    { &gDb_ctSetRamEvision7C0.tInf_gKeyNextMode, (TVoid*)&gDb_tRamEvision7C0.bogKeyNextMode, (TVoid*)&gDb_ctSetRamEvision7C0.boDef_gKeyNextMode, (TVoid*)&gDb_ctSetRamEvision7C0.aboRng_gKeyNextMode[0]},
    { &gDb_ctSetRamEvision7C0.tInf_gKeyPrevMode, (TVoid*)&gDb_tRamEvision7C0.bogKeyPrevMode, (TVoid*)&gDb_ctSetRamEvision7C0.boDef_gKeyPrevMode, (TVoid*)&gDb_ctSetRamEvision7C0.aboRng_gKeyPrevMode[0]},
    { &gDb_ctSetRamEvision7C0.tInf_gKeySignalDanger, (TVoid*)&gDb_tRamEvision7C0.bogKeySignalDanger, (TVoid*)&gDb_ctSetRamEvision7C0.boDef_gKeySignalDanger, (TVoid*)&gDb_ctSetRamEvision7C0.aboRng_gKeySignalDanger[0]},
    { &gDb_ctSetRamEvision7C0.tInf_gKeyFlashLightON, (TVoid*)&gDb_tRamEvision7C0.bogKeyFlashLightON, (TVoid*)&gDb_ctSetRamEvision7C0.boDef_gKeyFlashLightON, (TVoid*)&gDb_ctSetRamEvision7C0.aboRng_gKeyFlashLightON[0]},
    { &gDb_ctSetRamEvision7C0.tInf_gKeyCalibMastMin, (TVoid*)&gDb_tRamEvision7C0.bogKeyCalibMastMin, (TVoid*)&gDb_ctSetRamEvision7C0.boDef_gKeyCalibMastMin, (TVoid*)&gDb_ctSetRamEvision7C0.aboRng_gKeyCalibMastMin[0]},
    { &gDb_ctSetRamEvision7C0.tInf_gKeyCalibMastMax, (TVoid*)&gDb_tRamEvision7C0.bogKeyCalibMastMax, (TVoid*)&gDb_ctSetRamEvision7C0.boDef_gKeyCalibMastMax, (TVoid*)&gDb_ctSetRamEvision7C0.aboRng_gKeyCalibMastMax[0]},
    { &gDb_ctSetRamEvision7C0.tInf_gKeyCalibMastValid, (TVoid*)&gDb_tRamEvision7C0.bogKeyCalibMastValid, (TVoid*)&gDb_ctSetRamEvision7C0.boDef_gKeyCalibMastValid, (TVoid*)&gDb_ctSetRamEvision7C0.aboRng_gKeyCalibMastValid[0]},
    { &gDb_ctSetRamEvision7C0.tInf_gKeyGeneratorActivate, (TVoid*)&gDb_tRamEvision7C0.bogKeyGeneratorActivate, (TVoid*)&gDb_ctSetRamEvision7C0.boDef_gKeyGeneratorActivate, (TVoid*)&gDb_ctSetRamEvision7C0.aboRng_gKeyGeneratorActivate[0]},
    { &gDb_ctSetRamEvision7C0.tInf_gRazDistanceTraveledMastMeasure, (TVoid*)&gDb_tRamEvision7C0.bogRazDistanceTraveledMastMeasure, (TVoid*)&gDb_ctSetRamEvision7C0.boDef_gRazDistanceTraveledMastMeasure, (TVoid*)&gDb_ctSetRamEvision7C0.aboRng_gRazDistanceTraveledMastMeasure[0]},
    { &gDb_ctSetRamEvision7C0.tInf_gKeyWhiteLights15746, (TVoid*)&gDb_tRamEvision7C0.bogKeyWhiteLights15746, (TVoid*)&gDb_ctSetRamEvision7C0.boDef_gKeyWhiteLights15746, (TVoid*)&gDb_ctSetRamEvision7C0.aboRng_gKeyWhiteLights15746[0]},
    { &gDb_ctSetRamEvision7C0.tInf_gOsci2ndParkBrakeSelect, (TVoid*)&gDb_tRamEvision7C0.bogOsci2ndParkBrakeSelect, (TVoid*)&gDb_ctSetRamEvision7C0.boDef_gOsci2ndParkBrakeSelect, (TVoid*)&gDb_ctSetRamEvision7C0.aboRng_gOsci2ndParkBrakeSelect[0]},
    { &gDb_ctSetRamEvision7C0.tInf_gFixe2ndParkBrakeSelect, (TVoid*)&gDb_tRamEvision7C0.bogFixe2ndParkBrakeSelect, (TVoid*)&gDb_ctSetRamEvision7C0.boDef_gFixe2ndParkBrakeSelect, (TVoid*)&gDb_ctSetRamEvision7C0.aboRng_gFixe2ndParkBrakeSelect[0]},
    { &gDb_ctSetRamEvision7C0.tInf_gKeyRazController, (TVoid*)&gDb_tRamEvision7C0.bogKeyRazController, (TVoid*)&gDb_ctSetRamEvision7C0.boDef_gKeyRazController, (TVoid*)&gDb_ctSetRamEvision7C0.aboRng_gKeyRazController[0]}
};

const TDbVarTabRam gDb_catVarTabRamEcuC0RcvFromC1[49] =
{    //!< *cptInf *vpVal *cvpDataDef 
    { &gDb_ctSetRamEcuC0RcvFromC1.tInf_C1TurretPostSelector, (TVoid*)&gDb_tRamEcuC0RcvFromC1.eC1TurretPostSelector, (TVoid*)&gDb_ctSetRamEcuC0RcvFromC1.eDef_C1TurretPostSelector, (TVoid*)&gDb_ctSetRamEcuC0RcvFromC1.aeRng_C1TurretPostSelector[0]},
    { &gDb_ctSetRamEcuC0RcvFromC1.tInf_C1RadioPostSelector, (TVoid*)&gDb_tRamEcuC0RcvFromC1.eC1RadioPostSelector, (TVoid*)&gDb_ctSetRamEcuC0RcvFromC1.eDef_C1RadioPostSelector, (TVoid*)&gDb_ctSetRamEcuC0RcvFromC1.aeRng_C1RadioPostSelector[0]},
    { &gDb_ctSetRamEcuC0RcvFromC1.tInf_C1NacellePostSelector, (TVoid*)&gDb_tRamEcuC0RcvFromC1.eC1NacellePostSelector, (TVoid*)&gDb_ctSetRamEcuC0RcvFromC1.eDef_C1NacellePostSelector, (TVoid*)&gDb_ctSetRamEcuC0RcvFromC1.aeRng_C1NacellePostSelector[0]},
    { &gDb_ctSetRamEcuC0RcvFromC1.tInf_UpAxleOscillantCommand, (TVoid*)&gDb_tRamEcuC0RcvFromC1.boUpAxleOscillantCommand, (TVoid*)&gDb_ctSetRamEcuC0RcvFromC1.boDef_UpAxleOscillantCommand, (TVoid*)&gDb_ctSetRamEcuC0RcvFromC1.aboRng_UpAxleOscillantCommand[0]},
    { &gDb_ctSetRamEcuC0RcvFromC1.tInf_DownAxleOscillantCommand, (TVoid*)&gDb_tRamEcuC0RcvFromC1.boDownAxleOscillantCommand, (TVoid*)&gDb_ctSetRamEcuC0RcvFromC1.boDef_DownAxleOscillantCommand, (TVoid*)&gDb_ctSetRamEcuC0RcvFromC1.aboRng_DownAxleOscillantCommand[0]},
    { &gDb_ctSetRamEcuC0RcvFromC1.tInf_UpAxleFixeCommand, (TVoid*)&gDb_tRamEcuC0RcvFromC1.boUpAxleFixeCommand, (TVoid*)&gDb_ctSetRamEcuC0RcvFromC1.boDef_UpAxleFixeCommand, (TVoid*)&gDb_ctSetRamEcuC0RcvFromC1.aboRng_UpAxleFixeCommand[0]},
    { &gDb_ctSetRamEcuC0RcvFromC1.tInf_DownAxleFixeCommand, (TVoid*)&gDb_tRamEcuC0RcvFromC1.boDownAxleFixeCommand, (TVoid*)&gDb_ctSetRamEcuC0RcvFromC1.boDef_DownAxleFixeCommand, (TVoid*)&gDb_ctSetRamEcuC0RcvFromC1.aboRng_DownAxleFixeCommand[0]},
    { &gDb_ctSetRamEcuC0RcvFromC1.tInf_RegimeMotorAlternatorRpm, (TVoid*)&gDb_tRamEcuC0RcvFromC1.i32RegimeMotorAlternatorRpm, (TVoid*)&gDb_ctSetRamEcuC0RcvFromC1.i32Def_RegimeMotorAlternatorRpm, (TVoid*)&gDb_ctSetRamEcuC0RcvFromC1.ai32Rng_RegimeMotorAlternatorRpm[0]},
    { &gDb_ctSetRamEcuC0RcvFromC1.tInf_EntryTelescopeFdcSensor, (TVoid*)&gDb_tRamEcuC0RcvFromC1.boEntryTelescopeFdcSensor, (TVoid*)&gDb_ctSetRamEcuC0RcvFromC1.boDef_EntryTelescopeFdcSensor, (TVoid*)&gDb_ctSetRamEcuC0RcvFromC1.aboRng_EntryTelescopeFdcSensor[0]},
    { &gDb_ctSetRamEcuC0RcvFromC1.tInf_DeltaArmFoldedSensor, (TVoid*)&gDb_tRamEcuC0RcvFromC1.boDeltaArmFoldedSensor, (TVoid*)&gDb_ctSetRamEcuC0RcvFromC1.boDef_DeltaArmFoldedSensor, (TVoid*)&gDb_ctSetRamEcuC0RcvFromC1.aboRng_DeltaArmFoldedSensor[0]},
    { &gDb_ctSetRamEcuC0RcvFromC1.tInf_BoomArmFoldedSensor, (TVoid*)&gDb_tRamEcuC0RcvFromC1.boBoomArmFoldedSensor, (TVoid*)&gDb_ctSetRamEcuC0RcvFromC1.boDef_BoomArmFoldedSensor, (TVoid*)&gDb_ctSetRamEcuC0RcvFromC1.aboRng_BoomArmFoldedSensor[0]},
    { &gDb_ctSetRamEcuC0RcvFromC1.tInf_DeltaArmInLowerZone, (TVoid*)&gDb_tRamEcuC0RcvFromC1.boDeltaArmInLowerZone, (TVoid*)&gDb_ctSetRamEcuC0RcvFromC1.boDef_DeltaArmInLowerZone, (TVoid*)&gDb_ctSetRamEcuC0RcvFromC1.aboRng_DeltaArmInLowerZone[0]},
    { &gDb_ctSetRamEcuC0RcvFromC1.tInf_ArrowArmAngularSensor, (TVoid*)&gDb_tRamEcuC0RcvFromC1.i16ArrowArmAngularSensor, (TVoid*)&gDb_ctSetRamEcuC0RcvFromC1.i16Def_ArrowArmAngularSensor, (TVoid*)&gDb_ctSetRamEcuC0RcvFromC1.ai16Rng_ArrowArmAngularSensor[0]},
    { &gDb_ctSetRamEcuC0RcvFromC1.tInf_TurretInRearCenterPos, (TVoid*)&gDb_tRamEcuC0RcvFromC1.boTurretInRearCenterPos, (TVoid*)&gDb_ctSetRamEcuC0RcvFromC1.boDef_TurretInRearCenterPos, (TVoid*)&gDb_ctSetRamEcuC0RcvFromC1.aboRng_TurretInRearCenterPos[0]},
    { &gDb_ctSetRamEcuC0RcvFromC1.tInf_TurretInFrontCenterPos, (TVoid*)&gDb_tRamEcuC0RcvFromC1.boTurretInFrontCenterPos, (TVoid*)&gDb_ctSetRamEcuC0RcvFromC1.boDef_TurretInFrontCenterPos, (TVoid*)&gDb_ctSetRamEcuC0RcvFromC1.aboRng_TurretInFrontCenterPos[0]},
    { &gDb_ctSetRamEcuC0RcvFromC1.tInf_FoldedDeltaArmZone, (TVoid*)&gDb_tRamEcuC0RcvFromC1.boFoldedDeltaArmZone, (TVoid*)&gDb_ctSetRamEcuC0RcvFromC1.boDef_FoldedDeltaArmZone, (TVoid*)&gDb_ctSetRamEcuC0RcvFromC1.aboRng_FoldedDeltaArmZone[0]},
    { &gDb_ctSetRamEcuC0RcvFromC1.tInf_FoldedArrowArmZone, (TVoid*)&gDb_tRamEcuC0RcvFromC1.boFoldedArrowArmZone, (TVoid*)&gDb_ctSetRamEcuC0RcvFromC1.boDef_FoldedArrowArmZone, (TVoid*)&gDb_ctSetRamEcuC0RcvFromC1.aboRng_FoldedArrowArmZone[0]},
    { &gDb_ctSetRamEcuC0RcvFromC1.tInf_NoMovementIsDuring, (TVoid*)&gDb_tRamEcuC0RcvFromC1.boNoMovementIsDuring, (TVoid*)&gDb_ctSetRamEcuC0RcvFromC1.boDef_NoMovementIsDuring, (TVoid*)&gDb_ctSetRamEcuC0RcvFromC1.aboRng_NoMovementIsDuring[0]},
    { &gDb_ctSetRamEcuC0RcvFromC1.tInf_DeltaArmAngularSensor, (TVoid*)&gDb_tRamEcuC0RcvFromC1.i16DeltaArmAngularSensor, (TVoid*)&gDb_ctSetRamEcuC0RcvFromC1.i16Def_DeltaArmAngularSensor, (TVoid*)&gDb_ctSetRamEcuC0RcvFromC1.ai16Rng_DeltaArmAngularSensor[0]},
    { &gDb_ctSetRamEcuC0RcvFromC1.tInf_FoldedMastMeasure, (TVoid*)&gDb_tRamEcuC0RcvFromC1.boFoldedMastMeasure, (TVoid*)&gDb_ctSetRamEcuC0RcvFromC1.boDef_FoldedMastMeasure, (TVoid*)&gDb_ctSetRamEcuC0RcvFromC1.aboRng_FoldedMastMeasure[0]},
    { &gDb_ctSetRamEcuC0RcvFromC1.tInf_Transmission1Pressure, (TVoid*)&gDb_tRamEcuC0RcvFromC1.i16Transmission1Pressure, (TVoid*)&gDb_ctSetRamEcuC0RcvFromC1.i16Def_Transmission1Pressure, (TVoid*)&gDb_ctSetRamEcuC0RcvFromC1.ai16Rng_Transmission1Pressure[0]},
    { &gDb_ctSetRamEcuC0RcvFromC1.tInf_Transmission2Pressure, (TVoid*)&gDb_tRamEcuC0RcvFromC1.i16Transmission2Pressure, (TVoid*)&gDb_ctSetRamEcuC0RcvFromC1.i16Def_Transmission2Pressure, (TVoid*)&gDb_ctSetRamEcuC0RcvFromC1.ai16Rng_Transmission2Pressure[0]},
    { &gDb_ctSetRamEcuC0RcvFromC1.tInf_ActiveHelpState, (TVoid*)&gDb_tRamEcuC0RcvFromC1.eActiveHelpState, (TVoid*)&gDb_ctSetRamEcuC0RcvFromC1.eDef_ActiveHelpState, (TVoid*)&gDb_ctSetRamEcuC0RcvFromC1.aeRng_ActiveHelpState[0]},
    { &gDb_ctSetRamEcuC0RcvFromC1.tInf_BasketInCentrerPos, (TVoid*)&gDb_tRamEcuC0RcvFromC1.boBasketInCentrerPos, (TVoid*)&gDb_ctSetRamEcuC0RcvFromC1.boDef_BasketInCentrerPos, (TVoid*)&gDb_ctSetRamEcuC0RcvFromC1.aboRng_BasketInCentrerPos[0]},
    { &gDb_ctSetRamEcuC0RcvFromC1.tInf_StopAllMovementsNacellePost, (TVoid*)&gDb_tRamEcuC0RcvFromC1.boStopAllMovementsNacellePost, (TVoid*)&gDb_ctSetRamEcuC0RcvFromC1.boDef_StopAllMovementsNacellePost, (TVoid*)&gDb_ctSetRamEcuC0RcvFromC1.aboRng_StopAllMovementsNacellePost[0]},
    { &gDb_ctSetRamEcuC0RcvFromC1.tInf_EncodeurMastMeasureCentimeter, (TVoid*)&gDb_tRamEcuC0RcvFromC1.u16EncodeurMastMeasureCentimeter, (TVoid*)&gDb_ctSetRamEcuC0RcvFromC1.u16Def_EncodeurMastMeasureCentimeter, (TVoid*)&gDb_ctSetRamEcuC0RcvFromC1.au16Rng_EncodeurMastMeasureCentimeter[0]},
    { &gDb_ctSetRamEcuC0RcvFromC1.tInf_MastMeasureFonctionActive, (TVoid*)&gDb_tRamEcuC0RcvFromC1.boMastMeasureFonctionActive, (TVoid*)&gDb_ctSetRamEcuC0RcvFromC1.boDef_MastMeasureFonctionActive, (TVoid*)&gDb_ctSetRamEcuC0RcvFromC1.aboRng_MastMeasureFonctionActive[0]},
    { &gDb_ctSetRamEcuC0RcvFromC1.tInf_OutOfRangeTransmissionPressure, (TVoid*)&gDb_tRamEcuC0RcvFromC1.boOutOfRangeTransmissionPressure, (TVoid*)&gDb_ctSetRamEcuC0RcvFromC1.boDef_OutOfRangeTransmissionPressure, (TVoid*)&gDb_ctSetRamEcuC0RcvFromC1.aboRng_OutOfRangeTransmissionPressure[0]},
    { &gDb_ctSetRamEcuC0RcvFromC1.tInf_Beacon, (TVoid*)&gDb_tRamEcuC0RcvFromC1.boBeacon, (TVoid*)&gDb_ctSetRamEcuC0RcvFromC1.boDef_Beacon, (TVoid*)&gDb_ctSetRamEcuC0RcvFromC1.aboRng_Beacon[0]},
    { &gDb_ctSetRamEcuC0RcvFromC1.tInf_MotorOn, (TVoid*)&gDb_tRamEcuC0RcvFromC1.boMotorOn, (TVoid*)&gDb_ctSetRamEcuC0RcvFromC1.boDef_MotorOn, (TVoid*)&gDb_ctSetRamEcuC0RcvFromC1.aboRng_MotorOn[0]},
    { &gDb_ctSetRamEcuC0RcvFromC1.tInf_FaultLenghtSensor, (TVoid*)&gDb_tRamEcuC0RcvFromC1.boFaultLenghtSensor, (TVoid*)&gDb_ctSetRamEcuC0RcvFromC1.boDef_FaultLenghtSensor, (TVoid*)&gDb_ctSetRamEcuC0RcvFromC1.aboRng_FaultLenghtSensor[0]},
    { &gDb_ctSetRamEcuC0RcvFromC1.tInf_TurretSensorsFailures, (TVoid*)&gDb_tRamEcuC0RcvFromC1.boTurretSensorsFailures, (TVoid*)&gDb_ctSetRamEcuC0RcvFromC1.boDef_TurretSensorsFailures, (TVoid*)&gDb_ctSetRamEcuC0RcvFromC1.aboRng_TurretSensorsFailures[0]},
    { &gDb_ctSetRamEcuC0RcvFromC1.tInf_OptionWhiteLight15746, (TVoid*)&gDb_tRamEcuC0RcvFromC1.boOptionWhiteLight15746, (TVoid*)&gDb_ctSetRamEcuC0RcvFromC1.boDef_OptionWhiteLight15746, (TVoid*)&gDb_ctSetRamEcuC0RcvFromC1.aboRng_OptionWhiteLight15746[0]},
    { &gDb_ctSetRamEcuC0RcvFromC1.tInf_SafeManSystem, (TVoid*)&gDb_tRamEcuC0RcvFromC1.boSafeManSystem, (TVoid*)&gDb_ctSetRamEcuC0RcvFromC1.boDef_SafeManSystem, (TVoid*)&gDb_ctSetRamEcuC0RcvFromC1.aboRng_SafeManSystem[0]},
    { &gDb_ctSetRamEcuC0RcvFromC1.tInf_SlopeModeFromC1, (TVoid*)&gDb_tRamEcuC0RcvFromC1.boSlopeModeFromC1, (TVoid*)&gDb_ctSetRamEcuC0RcvFromC1.boDef_SlopeModeFromC1, (TVoid*)&gDb_ctSetRamEcuC0RcvFromC1.aboRng_SlopeModeFromC1[0]},
    { &gDb_ctSetRamEcuC0RcvFromC1.tInf_ColdOilTankTemperature, (TVoid*)&gDb_tRamEcuC0RcvFromC1.boColdOilTankTemperature, (TVoid*)&gDb_ctSetRamEcuC0RcvFromC1.boDef_ColdOilTankTemperature, (TVoid*)&gDb_ctSetRamEcuC0RcvFromC1.aboRng_ColdOilTankTemperature[0]},
    { &gDb_ctSetRamEcuC0RcvFromC1.tInf_ElectricMotorForbidden, (TVoid*)&gDb_tRamEcuC0RcvFromC1.boElectricMotorForbidden, (TVoid*)&gDb_ctSetRamEcuC0RcvFromC1.boDef_ElectricMotorForbidden, (TVoid*)&gDb_ctSetRamEcuC0RcvFromC1.aboRng_ElectricMotorForbidden[0]},
    { &gDb_ctSetRamEcuC0RcvFromC1.tInf_RpmMotorElectric, (TVoid*)&gDb_tRamEcuC0RcvFromC1.i16RpmMotorElectric, (TVoid*)&gDb_ctSetRamEcuC0RcvFromC1.i16Def_RpmMotorElectric, (TVoid*)&gDb_ctSetRamEcuC0RcvFromC1.ai16Rng_RpmMotorElectric[0]},
    { &gDb_ctSetRamEcuC0RcvFromC1.tInf_OilTankTemperatureValue, (TVoid*)&gDb_tRamEcuC0RcvFromC1.i16OilTankTemperatureValue, (TVoid*)&gDb_ctSetRamEcuC0RcvFromC1.i16Def_OilTankTemperatureValue, (TVoid*)&gDb_ctSetRamEcuC0RcvFromC1.ai16Rng_OilTankTemperatureValue[0]},
    { &gDb_ctSetRamEcuC0RcvFromC1.tInf_SocStopRegen, (TVoid*)&gDb_tRamEcuC0RcvFromC1.boSocStopRegen, (TVoid*)&gDb_ctSetRamEcuC0RcvFromC1.boDef_SocStopRegen, (TVoid*)&gDb_ctSetRamEcuC0RcvFromC1.aboRng_SocStopRegen[0]},
    { &gDb_ctSetRamEcuC0RcvFromC1.tInf_GeneratorOn, (TVoid*)&gDb_tRamEcuC0RcvFromC1.boGeneratorOn, (TVoid*)&gDb_ctSetRamEcuC0RcvFromC1.boDef_GeneratorOn, (TVoid*)&gDb_ctSetRamEcuC0RcvFromC1.aboRng_GeneratorOn[0]},
    { &gDb_ctSetRamEcuC0RcvFromC1.tInf_EvDevMvtsCmd, (TVoid*)&gDb_tRamEcuC0RcvFromC1.boEvDevMvtsCmd, (TVoid*)&gDb_ctSetRamEcuC0RcvFromC1.boDef_EvDevMvtsCmd, (TVoid*)&gDb_ctSetRamEcuC0RcvFromC1.aboRng_EvDevMvtsCmd[0]},
    { &gDb_ctSetRamEcuC0RcvFromC1.tInf_TestElectricalFromC1, (TVoid*)&gDb_tRamEcuC0RcvFromC1.boTestElectricalFromC1, (TVoid*)&gDb_ctSetRamEcuC0RcvFromC1.boDef_TestElectricalFromC1, (TVoid*)&gDb_ctSetRamEcuC0RcvFromC1.aboRng_TestElectricalFromC1[0]},
    { &gDb_ctSetRamEcuC0RcvFromC1.tInf_AutoModeActivate, (TVoid*)&gDb_tRamEcuC0RcvFromC1.boAutoModeActivate, (TVoid*)&gDb_ctSetRamEcuC0RcvFromC1.boDef_AutoModeActivate, (TVoid*)&gDb_ctSetRamEcuC0RcvFromC1.aboRng_AutoModeActivate[0]},
    { &gDb_ctSetRamEcuC0RcvFromC1.tInf_SilenceModeActivate, (TVoid*)&gDb_tRamEcuC0RcvFromC1.boSilenceModeActivate, (TVoid*)&gDb_ctSetRamEcuC0RcvFromC1.boDef_SilenceModeActivate, (TVoid*)&gDb_ctSetRamEcuC0RcvFromC1.aboRng_SilenceModeActivate[0]},
    { &gDb_ctSetRamEcuC0RcvFromC1.tInf_ForcingRegenlow, (TVoid*)&gDb_tRamEcuC0RcvFromC1.boForcingRegenlow, (TVoid*)&gDb_ctSetRamEcuC0RcvFromC1.boDef_ForcingRegenlow, (TVoid*)&gDb_ctSetRamEcuC0RcvFromC1.aboRng_ForcingRegenlow[0]},
    { &gDb_ctSetRamEcuC0RcvFromC1.tInf_ForcingRegenHigh, (TVoid*)&gDb_tRamEcuC0RcvFromC1.boForcingRegenHigh, (TVoid*)&gDb_ctSetRamEcuC0RcvFromC1.boDef_ForcingRegenHigh, (TVoid*)&gDb_ctSetRamEcuC0RcvFromC1.aboRng_ForcingRegenHigh[0]},
    { &gDb_ctSetRamEcuC0RcvFromC1.tInf_EvBypassCommand, (TVoid*)&gDb_tRamEcuC0RcvFromC1.boEvBypassCommand, (TVoid*)&gDb_ctSetRamEcuC0RcvFromC1.boDef_EvBypassCommand, (TVoid*)&gDb_ctSetRamEcuC0RcvFromC1.aboRng_EvBypassCommand[0]},
    { &gDb_ctSetRamEcuC0RcvFromC1.tInf_MotorspeedCmdJ1939, (TVoid*)&gDb_tRamEcuC0RcvFromC1.i16MotorspeedCmdJ1939, (TVoid*)&gDb_ctSetRamEcuC0RcvFromC1.i16Def_MotorspeedCmdJ1939, (TVoid*)&gDb_ctSetRamEcuC0RcvFromC1.ai16Rng_MotorspeedCmdJ1939[0]}
};

const TDbVarTabRam gDb_catVarTabRamEcuCaliCmdC0[5] =
{    //!< *cptInf *vpVal *cvpDataDef 
    { &gDb_ctSetRamEcuCaliCmdC0.tInf_CalibTurretAngle, (TVoid*)&gDb_tRamEcuCaliCmdC0.boCalibTurretAngle, (TVoid*)&gDb_ctSetRamEcuCaliCmdC0.boDef_CalibTurretAngle, (TVoid*)&gDb_ctSetRamEcuCaliCmdC0.aboRng_CalibTurretAngle[0]},
    { &gDb_ctSetRamEcuCaliCmdC0.tInf_CalibTurretAngleIntermedaireBool, (TVoid*)&gDb_tRamEcuCaliCmdC0.boCalibTurretAngleIntermedaireBool, (TVoid*)&gDb_ctSetRamEcuCaliCmdC0.boDef_CalibTurretAngleIntermedaireBool, (TVoid*)&gDb_ctSetRamEcuCaliCmdC0.aboRng_CalibTurretAngleIntermedaireBool[0]},
    { &gDb_ctSetRamEcuCaliCmdC0.tInf_CalibSlopeLong, (TVoid*)&gDb_tRamEcuCaliCmdC0.boCalibSlopeLong, (TVoid*)&gDb_ctSetRamEcuCaliCmdC0.boDef_CalibSlopeLong, (TVoid*)&gDb_ctSetRamEcuCaliCmdC0.aboRng_CalibSlopeLong[0]},
    { &gDb_ctSetRamEcuCaliCmdC0.tInf_CalibSlopeTrans, (TVoid*)&gDb_tRamEcuCaliCmdC0.boCalibSlopeTrans, (TVoid*)&gDb_ctSetRamEcuCaliCmdC0.boDef_CalibSlopeTrans, (TVoid*)&gDb_ctSetRamEcuCaliCmdC0.aboRng_CalibSlopeTrans[0]},
    { &gDb_ctSetRamEcuCaliCmdC0.tInf_SavedCalibrationListC0, (TVoid*)&gDb_tRamEcuCaliCmdC0.boSavedCalibrationListC0, (TVoid*)&gDb_ctSetRamEcuCaliCmdC0.boDef_SavedCalibrationListC0, (TVoid*)&gDb_ctSetRamEcuCaliCmdC0.aboRng_SavedCalibrationListC0[0]}
};

const TDbVarTabNvm gDb_catVarTabNvParamSpeedMaxRail[45] =
{    //!< *cptInf *vpVal *cvpDataRang *cvpDataDef cu16Adr cu16ValuePos
    { &gDb_ctSetNvParamSpeedMaxRail.tInf_AccesSiteSpeedForward, (TVoid*)&gDb_tNvParamSpeedMaxRail.i16AccesSiteSpeedForward, (TVoid*)&gDb_ctSetNvParamSpeedMaxRail.i16Def_AccesSiteSpeedForward, (TVoid*)&gDb_ctSetNvParamSpeedMaxRail.ai16Rng_AccesSiteSpeedForward[0], 912, 0},
    { &gDb_ctSetNvParamSpeedMaxRail.tInf_HighSpeedForward, (TVoid*)&gDb_tNvParamSpeedMaxRail.i16HighSpeedForward, (TVoid*)&gDb_ctSetNvParamSpeedMaxRail.i16Def_HighSpeedForward, (TVoid*)&gDb_ctSetNvParamSpeedMaxRail.ai16Rng_HighSpeedForward[0], 914, 1},
    { &gDb_ctSetNvParamSpeedMaxRail.tInf_LowSpeedForward, (TVoid*)&gDb_tNvParamSpeedMaxRail.i16LowSpeedForward, (TVoid*)&gDb_ctSetNvParamSpeedMaxRail.i16Def_LowSpeedForward, (TVoid*)&gDb_ctSetNvParamSpeedMaxRail.ai16Rng_LowSpeedForward[0], 916, 2},
    { &gDb_ctSetNvParamSpeedMaxRail.tInf_LowSpeedBrakeTestForward, (TVoid*)&gDb_tNvParamSpeedMaxRail.i16LowSpeedBrakeTestForward, (TVoid*)&gDb_ctSetNvParamSpeedMaxRail.i16Def_LowSpeedBrakeTestForward, (TVoid*)&gDb_ctSetNvParamSpeedMaxRail.ai16Rng_LowSpeedBrakeTestForward[0], 918, 3},
    { &gDb_ctSetNvParamSpeedMaxRail.tInf_HighSpeedSlopeTresholdAbs, (TVoid*)&gDb_tNvParamSpeedMaxRail.i16HighSpeedSlopeTresholdAbs, (TVoid*)&gDb_ctSetNvParamSpeedMaxRail.i16Def_HighSpeedSlopeTresholdAbs, (TVoid*)&gDb_ctSetNvParamSpeedMaxRail.ai16Rng_HighSpeedSlopeTresholdAbs[0], 920, 4},
    { &gDb_ctSetNvParamSpeedMaxRail.tInf_HighSpeedSlopeTresholdHystRel, (TVoid*)&gDb_tNvParamSpeedMaxRail.i16HighSpeedSlopeTresholdHystRel, (TVoid*)&gDb_ctSetNvParamSpeedMaxRail.i16Def_HighSpeedSlopeTresholdHystRel, (TVoid*)&gDb_ctSetNvParamSpeedMaxRail.ai16Rng_HighSpeedSlopeTresholdHystRel[0], 922, 5},
    { &gDb_ctSetNvParamSpeedMaxRail.tInf_LowSpeedSlopeTresholdAbs, (TVoid*)&gDb_tNvParamSpeedMaxRail.i16LowSpeedSlopeTresholdAbs, (TVoid*)&gDb_ctSetNvParamSpeedMaxRail.i16Def_LowSpeedSlopeTresholdAbs, (TVoid*)&gDb_ctSetNvParamSpeedMaxRail.ai16Rng_LowSpeedSlopeTresholdAbs[0], 924, 6},
    { &gDb_ctSetNvParamSpeedMaxRail.tInf_LowSpeedSlopeTresholdHystRel, (TVoid*)&gDb_tNvParamSpeedMaxRail.i16LowSpeedSlopeTresholdHystRel, (TVoid*)&gDb_ctSetNvParamSpeedMaxRail.i16Def_LowSpeedSlopeTresholdHystRel, (TVoid*)&gDb_ctSetNvParamSpeedMaxRail.ai16Rng_LowSpeedSlopeTresholdHystRel[0], 926, 7},
    { &gDb_ctSetNvParamSpeedMaxRail.tInf_TurretLowSpeedTresholdRel, (TVoid*)&gDb_tNvParamSpeedMaxRail.i16TurretLowSpeedTresholdRel, (TVoid*)&gDb_ctSetNvParamSpeedMaxRail.i16Def_TurretLowSpeedTresholdRel, (TVoid*)&gDb_ctSetNvParamSpeedMaxRail.ai16Rng_TurretLowSpeedTresholdRel[0], 928, 8},
    { &gDb_ctSetNvParamSpeedMaxRail.tInf_TurretLowSpeedTresholdHyst, (TVoid*)&gDb_tNvParamSpeedMaxRail.i16TurretLowSpeedTresholdHyst, (TVoid*)&gDb_ctSetNvParamSpeedMaxRail.i16Def_TurretLowSpeedTresholdHyst, (TVoid*)&gDb_ctSetNvParamSpeedMaxRail.ai16Rng_TurretLowSpeedTresholdHyst[0], 930, 9},
    { &gDb_ctSetNvParamSpeedMaxRail.tInf_TurretRearCenterPos, (TVoid*)&gDb_tNvParamSpeedMaxRail.i16TurretRearCenterPos, (TVoid*)&gDb_ctSetNvParamSpeedMaxRail.i16Def_TurretRearCenterPos, (TVoid*)&gDb_ctSetNvParamSpeedMaxRail.ai16Rng_TurretRearCenterPos[0], 932, 10},
    { &gDb_ctSetNvParamSpeedMaxRail.tInf_TurretFrontPositiveCenterPos, (TVoid*)&gDb_tNvParamSpeedMaxRail.i16TurretFrontPositiveCenterPos, (TVoid*)&gDb_ctSetNvParamSpeedMaxRail.i16Def_TurretFrontPositiveCenterPos, (TVoid*)&gDb_ctSetNvParamSpeedMaxRail.ai16Rng_TurretFrontPositiveCenterPos[0], 934, 11},
    { &gDb_ctSetNvParamSpeedMaxRail.tInf_TurretFrontNegativeCenterPos, (TVoid*)&gDb_tNvParamSpeedMaxRail.i16TurretFrontNegativeCenterPos, (TVoid*)&gDb_ctSetNvParamSpeedMaxRail.i16Def_TurretFrontNegativeCenterPos, (TVoid*)&gDb_ctSetNvParamSpeedMaxRail.ai16Rng_TurretFrontNegativeCenterPos[0], 936, 12},
    { &gDb_ctSetNvParamSpeedMaxRail.tInf_LimitSpeedAccesSiteSpeed, (TVoid*)&gDb_tNvParamSpeedMaxRail.u16LimitSpeedAccesSiteSpeed, (TVoid*)&gDb_ctSetNvParamSpeedMaxRail.u16Def_LimitSpeedAccesSiteSpeed, (TVoid*)&gDb_ctSetNvParamSpeedMaxRail.au16Rng_LimitSpeedAccesSiteSpeed[0], 938, 13},
    { &gDb_ctSetNvParamSpeedMaxRail.tInf_LimitSpeedHighSpeed, (TVoid*)&gDb_tNvParamSpeedMaxRail.u16LimitSpeedHighSpeed, (TVoid*)&gDb_ctSetNvParamSpeedMaxRail.u16Def_LimitSpeedHighSpeed, (TVoid*)&gDb_ctSetNvParamSpeedMaxRail.au16Rng_LimitSpeedHighSpeed[0], 940, 14},
    { &gDb_ctSetNvParamSpeedMaxRail.tInf_LimitSpeedLowSpeed, (TVoid*)&gDb_tNvParamSpeedMaxRail.u16LimitSpeedLowSpeed, (TVoid*)&gDb_ctSetNvParamSpeedMaxRail.u16Def_LimitSpeedLowSpeed, (TVoid*)&gDb_ctSetNvParamSpeedMaxRail.au16Rng_LimitSpeedLowSpeed[0], 942, 15},
    { &gDb_ctSetNvParamSpeedMaxRail.tInf_LimitSpeedLowSpeedBrakeTest, (TVoid*)&gDb_tNvParamSpeedMaxRail.u16LimitSpeedLowSpeedBrakeTest, (TVoid*)&gDb_ctSetNvParamSpeedMaxRail.u16Def_LimitSpeedLowSpeedBrakeTest, (TVoid*)&gDb_ctSetNvParamSpeedMaxRail.au16Rng_LimitSpeedLowSpeedBrakeTest[0], 944, 16},
    { &gDb_ctSetNvParamSpeedMaxRail.tInf_AccesSiteSpeedBackward, (TVoid*)&gDb_tNvParamSpeedMaxRail.i16AccesSiteSpeedBackward, (TVoid*)&gDb_ctSetNvParamSpeedMaxRail.i16Def_AccesSiteSpeedBackward, (TVoid*)&gDb_ctSetNvParamSpeedMaxRail.ai16Rng_AccesSiteSpeedBackward[0], 946, 17},
    { &gDb_ctSetNvParamSpeedMaxRail.tInf_HighSpeedBackward, (TVoid*)&gDb_tNvParamSpeedMaxRail.i16HighSpeedBackward, (TVoid*)&gDb_ctSetNvParamSpeedMaxRail.i16Def_HighSpeedBackward, (TVoid*)&gDb_ctSetNvParamSpeedMaxRail.ai16Rng_HighSpeedBackward[0], 948, 18},
    { &gDb_ctSetNvParamSpeedMaxRail.tInf_LowSpeedBackward, (TVoid*)&gDb_tNvParamSpeedMaxRail.i16LowSpeedBackward, (TVoid*)&gDb_ctSetNvParamSpeedMaxRail.i16Def_LowSpeedBackward, (TVoid*)&gDb_ctSetNvParamSpeedMaxRail.ai16Rng_LowSpeedBackward[0], 950, 19},
    { &gDb_ctSetNvParamSpeedMaxRail.tInf_LowSpeedBrakeTestBackward, (TVoid*)&gDb_tNvParamSpeedMaxRail.i16LowSpeedBrakeTestBackward, (TVoid*)&gDb_ctSetNvParamSpeedMaxRail.i16Def_LowSpeedBrakeTestBackward, (TVoid*)&gDb_ctSetNvParamSpeedMaxRail.ai16Rng_LowSpeedBrakeTestBackward[0], 952, 20},
    { &gDb_ctSetNvParamSpeedMaxRail.tInf_TestBrakeSpeedForward, (TVoid*)&gDb_tNvParamSpeedMaxRail.i16TestBrakeSpeedForward, (TVoid*)&gDb_ctSetNvParamSpeedMaxRail.i16Def_TestBrakeSpeedForward, (TVoid*)&gDb_ctSetNvParamSpeedMaxRail.ai16Rng_TestBrakeSpeedForward[0], 954, 21},
    { &gDb_ctSetNvParamSpeedMaxRail.tInf_TestBrakeSpeedBackward, (TVoid*)&gDb_tNvParamSpeedMaxRail.i16TestBrakeSpeedBackward, (TVoid*)&gDb_ctSetNvParamSpeedMaxRail.i16Def_TestBrakeSpeedBackward, (TVoid*)&gDb_ctSetNvParamSpeedMaxRail.ai16Rng_TestBrakeSpeedBackward[0], 956, 22},
    { &gDb_ctSetNvParamSpeedMaxRail.tInf_BreakeInBrakeSpeedForward, (TVoid*)&gDb_tNvParamSpeedMaxRail.i16BreakeInBrakeSpeedForward, (TVoid*)&gDb_ctSetNvParamSpeedMaxRail.i16Def_BreakeInBrakeSpeedForward, (TVoid*)&gDb_ctSetNvParamSpeedMaxRail.ai16Rng_BreakeInBrakeSpeedForward[0], 958, 23},
    { &gDb_ctSetNvParamSpeedMaxRail.tInf_BreakeInBrakeSpeedBackward, (TVoid*)&gDb_tNvParamSpeedMaxRail.i16BreakeInBrakeSpeedBackward, (TVoid*)&gDb_ctSetNvParamSpeedMaxRail.i16Def_BreakeInBrakeSpeedBackward, (TVoid*)&gDb_ctSetNvParamSpeedMaxRail.ai16Rng_BreakeInBrakeSpeedBackward[0], 960, 24},
    { &gDb_ctSetNvParamSpeedMaxRail.tInf_ArmSpeedRailHyst, (TVoid*)&gDb_tNvParamSpeedMaxRail.i16ArmSpeedRailHyst, (TVoid*)&gDb_ctSetNvParamSpeedMaxRail.i16Def_ArmSpeedRailHyst, (TVoid*)&gDb_ctSetNvParamSpeedMaxRail.ai16Rng_ArmSpeedRailHyst[0], 962, 25},
    { &gDb_ctSetNvParamSpeedMaxRail.tInf_ArmLowSectorBasketFaultThres, (TVoid*)&gDb_tNvParamSpeedMaxRail.i16ArmLowSectorBasketFaultThres, (TVoid*)&gDb_ctSetNvParamSpeedMaxRail.i16Def_ArmLowSectorBasketFaultThres, (TVoid*)&gDb_ctSetNvParamSpeedMaxRail.ai16Rng_ArmLowSectorBasketFaultThres[0], 964, 26},
    { &gDb_ctSetNvParamSpeedMaxRail.tInf_ArmLowZoneForLowSpeed, (TVoid*)&gDb_tNvParamSpeedMaxRail.i16ArmLowZoneForLowSpeed, (TVoid*)&gDb_ctSetNvParamSpeedMaxRail.i16Def_ArmLowZoneForLowSpeed, (TVoid*)&gDb_ctSetNvParamSpeedMaxRail.ai16Rng_ArmLowZoneForLowSpeed[0], 966, 27},
    { &gDb_ctSetNvParamSpeedMaxRail.tInf_TurretRearNegLowSpeedTreshold, (TVoid*)&gDb_tNvParamSpeedMaxRail.i16TurretRearNegLowSpeedTreshold, (TVoid*)&gDb_ctSetNvParamSpeedMaxRail.i16Def_TurretRearNegLowSpeedTreshold, (TVoid*)&gDb_ctSetNvParamSpeedMaxRail.ai16Rng_TurretRearNegLowSpeedTreshold[0], 968, 28},
    { &gDb_ctSetNvParamSpeedMaxRail.tInf_TurretRearPosLowSpeedTreshold, (TVoid*)&gDb_tNvParamSpeedMaxRail.i16TurretRearPosLowSpeedTreshold, (TVoid*)&gDb_ctSetNvParamSpeedMaxRail.i16Def_TurretRearPosLowSpeedTreshold, (TVoid*)&gDb_ctSetNvParamSpeedMaxRail.ai16Rng_TurretRearPosLowSpeedTreshold[0], 970, 29},
    { &gDb_ctSetNvParamSpeedMaxRail.tInf_Performance2DegSlopeThres, (TVoid*)&gDb_tNvParamSpeedMaxRail.u16Performance2DegSlopeThres, (TVoid*)&gDb_ctSetNvParamSpeedMaxRail.u16Def_Performance2DegSlopeThres, (TVoid*)&gDb_ctSetNvParamSpeedMaxRail.au16Rng_Performance2DegSlopeThres[0], 972, 30},
    { &gDb_ctSetNvParamSpeedMaxRail.tInf_Performance4DegSlopeThres, (TVoid*)&gDb_tNvParamSpeedMaxRail.u16Performance4DegSlopeThres, (TVoid*)&gDb_ctSetNvParamSpeedMaxRail.u16Def_Performance4DegSlopeThres, (TVoid*)&gDb_ctSetNvParamSpeedMaxRail.au16Rng_Performance4DegSlopeThres[0], 974, 31},
    { &gDb_ctSetNvParamSpeedMaxRail.tInf_Performance6DegSlopeThres, (TVoid*)&gDb_tNvParamSpeedMaxRail.u16Performance6DegSlopeThres, (TVoid*)&gDb_ctSetNvParamSpeedMaxRail.u16Def_Performance6DegSlopeThres, (TVoid*)&gDb_ctSetNvParamSpeedMaxRail.au16Rng_Performance6DegSlopeThres[0], 976, 32},
    { &gDb_ctSetNvParamSpeedMaxRail.tInf_PerformanceDegSlopeHyst, (TVoid*)&gDb_tNvParamSpeedMaxRail.u16PerformanceDegSlopeHyst, (TVoid*)&gDb_ctSetNvParamSpeedMaxRail.u16Def_PerformanceDegSlopeHyst, (TVoid*)&gDb_ctSetNvParamSpeedMaxRail.au16Rng_PerformanceDegSlopeHyst[0], 978, 33},
    { &gDb_ctSetNvParamSpeedMaxRail.tInf_TurretPerfLowSpeedHystHigh, (TVoid*)&gDb_tNvParamSpeedMaxRail.i16TurretPerfLowSpeedHystHigh, (TVoid*)&gDb_ctSetNvParamSpeedMaxRail.i16Def_TurretPerfLowSpeedHystHigh, (TVoid*)&gDb_ctSetNvParamSpeedMaxRail.ai16Rng_TurretPerfLowSpeedHystHigh[0], 980, 34},
    { &gDb_ctSetNvParamSpeedMaxRail.tInf_TurretPerformLowSpeed2Deg, (TVoid*)&gDb_tNvParamSpeedMaxRail.i16TurretPerformLowSpeed2Deg, (TVoid*)&gDb_ctSetNvParamSpeedMaxRail.i16Def_TurretPerformLowSpeed2Deg, (TVoid*)&gDb_ctSetNvParamSpeedMaxRail.ai16Rng_TurretPerformLowSpeed2Deg[0], 982, 35},
    { &gDb_ctSetNvParamSpeedMaxRail.tInf_TurretPerformLowSpeedBasketRot2, (TVoid*)&gDb_tNvParamSpeedMaxRail.i16TurretPerformLowSpeedBasketRot2, (TVoid*)&gDb_ctSetNvParamSpeedMaxRail.i16Def_TurretPerformLowSpeedBasketRot2, (TVoid*)&gDb_ctSetNvParamSpeedMaxRail.ai16Rng_TurretPerformLowSpeedBasketRot2[0], 984, 36},
    { &gDb_ctSetNvParamSpeedMaxRail.tInf_TurretPerformLowSpeed4Deg, (TVoid*)&gDb_tNvParamSpeedMaxRail.i16TurretPerformLowSpeed4Deg, (TVoid*)&gDb_ctSetNvParamSpeedMaxRail.i16Def_TurretPerformLowSpeed4Deg, (TVoid*)&gDb_ctSetNvParamSpeedMaxRail.ai16Rng_TurretPerformLowSpeed4Deg[0], 986, 37},
    { &gDb_ctSetNvParamSpeedMaxRail.tInf_TurretPerfLowSpeedBasketRot4Deg, (TVoid*)&gDb_tNvParamSpeedMaxRail.i16TurretPerfLowSpeedBasketRot4Deg, (TVoid*)&gDb_ctSetNvParamSpeedMaxRail.i16Def_TurretPerfLowSpeedBasketRot4Deg, (TVoid*)&gDb_ctSetNvParamSpeedMaxRail.ai16Rng_TurretPerfLowSpeedBasketRot4Deg[0], 988, 38},
    { &gDb_ctSetNvParamSpeedMaxRail.tInf_TurretPerformLowSpeed6Deg, (TVoid*)&gDb_tNvParamSpeedMaxRail.i16TurretPerformLowSpeed6Deg, (TVoid*)&gDb_ctSetNvParamSpeedMaxRail.i16Def_TurretPerformLowSpeed6Deg, (TVoid*)&gDb_ctSetNvParamSpeedMaxRail.ai16Rng_TurretPerformLowSpeed6Deg[0], 990, 39},
    { &gDb_ctSetNvParamSpeedMaxRail.tInf_TurretPerfLowSpeedBasketRot6Deg, (TVoid*)&gDb_tNvParamSpeedMaxRail.i16TurretPerfLowSpeedBasketRot6Deg, (TVoid*)&gDb_ctSetNvParamSpeedMaxRail.i16Def_TurretPerfLowSpeedBasketRot6Deg, (TVoid*)&gDb_ctSetNvParamSpeedMaxRail.ai16Rng_TurretPerfLowSpeedBasketRot6Deg[0], 992, 40},
    { &gDb_ctSetNvParamSpeedMaxRail.tInf_PreventLimitSpeedAccesSiteSpeed, (TVoid*)&gDb_tNvParamSpeedMaxRail.u16PreventLimitSpeedAccesSiteSpeed, (TVoid*)&gDb_ctSetNvParamSpeedMaxRail.u16Def_PreventLimitSpeedAccesSiteSpeed, (TVoid*)&gDb_ctSetNvParamSpeedMaxRail.au16Rng_PreventLimitSpeedAccesSiteSpeed[0], 994, 41},
    { &gDb_ctSetNvParamSpeedMaxRail.tInf_PreventLimitSpeedHighSpeed, (TVoid*)&gDb_tNvParamSpeedMaxRail.u16PreventLimitSpeedHighSpeed, (TVoid*)&gDb_ctSetNvParamSpeedMaxRail.u16Def_PreventLimitSpeedHighSpeed, (TVoid*)&gDb_ctSetNvParamSpeedMaxRail.au16Rng_PreventLimitSpeedHighSpeed[0], 996, 42},
    { &gDb_ctSetNvParamSpeedMaxRail.tInf_PreventLimitSpeedLowSpeed, (TVoid*)&gDb_tNvParamSpeedMaxRail.u16PreventLimitSpeedLowSpeed, (TVoid*)&gDb_ctSetNvParamSpeedMaxRail.u16Def_PreventLimitSpeedLowSpeed, (TVoid*)&gDb_ctSetNvParamSpeedMaxRail.au16Rng_PreventLimitSpeedLowSpeed[0], 998, 43},
    { &gDb_ctSetNvParamSpeedMaxRail.tInf_PreventSpeedLowSpeedBrakeTest, (TVoid*)&gDb_tNvParamSpeedMaxRail.u16PreventSpeedLowSpeedBrakeTest, (TVoid*)&gDb_ctSetNvParamSpeedMaxRail.u16Def_PreventSpeedLowSpeedBrakeTest, (TVoid*)&gDb_ctSetNvParamSpeedMaxRail.au16Rng_PreventSpeedLowSpeedBrakeTest[0], 1000, 44}
};

const TDbVarTabRam gDb_catVarTabRamSpeedMaxRail[48] =
{    //!< *cptInf *vpVal *cvpDataDef 
    { &gDb_ctSetRamSpeedMaxRail.tInf_SlopeOverHighSpeedTresh, (TVoid*)&gDb_tRamSpeedMaxRail.boSlopeOverHighSpeedTresh, (TVoid*)&gDb_ctSetRamSpeedMaxRail.boDef_SlopeOverHighSpeedTresh, (TVoid*)&gDb_ctSetRamSpeedMaxRail.aboRng_SlopeOverHighSpeedTresh[0]},
    { &gDb_ctSetRamSpeedMaxRail.tInf_SlopeLowerLowSpeedTresh, (TVoid*)&gDb_tRamSpeedMaxRail.boSlopeLowerLowSpeedTresh, (TVoid*)&gDb_ctSetRamSpeedMaxRail.boDef_SlopeLowerLowSpeedTresh, (TVoid*)&gDb_ctSetRamSpeedMaxRail.aboRng_SlopeLowerLowSpeedTresh[0]},
    { &gDb_ctSetRamSpeedMaxRail.tInf_TurretInLowSpeedRearZone, (TVoid*)&gDb_tRamSpeedMaxRail.boTurretInLowSpeedRearZone, (TVoid*)&gDb_ctSetRamSpeedMaxRail.boDef_TurretInLowSpeedRearZone, (TVoid*)&gDb_ctSetRamSpeedMaxRail.aboRng_TurretInLowSpeedRearZone[0]},
    { &gDb_ctSetRamSpeedMaxRail.tInf_TurretInLowSpeedPosFrontZone, (TVoid*)&gDb_tRamSpeedMaxRail.boTurretInLowSpeedPosFrontZone, (TVoid*)&gDb_ctSetRamSpeedMaxRail.boDef_TurretInLowSpeedPosFrontZone, (TVoid*)&gDb_ctSetRamSpeedMaxRail.aboRng_TurretInLowSpeedPosFrontZone[0]},
    { &gDb_ctSetRamSpeedMaxRail.tInf_TurretInLowSpeedNegFrontZone, (TVoid*)&gDb_tRamSpeedMaxRail.boTurretInLowSpeedNegFrontZone, (TVoid*)&gDb_ctSetRamSpeedMaxRail.boDef_TurretInLowSpeedNegFrontZone, (TVoid*)&gDb_ctSetRamSpeedMaxRail.aboRng_TurretInLowSpeedNegFrontZone[0]},
    { &gDb_ctSetRamSpeedMaxRail.tInf_TurretInLowSpeedZone, (TVoid*)&gDb_tRamSpeedMaxRail.boTurretInLowSpeedZone, (TVoid*)&gDb_ctSetRamSpeedMaxRail.boDef_TurretInLowSpeedZone, (TVoid*)&gDb_ctSetRamSpeedMaxRail.aboRng_TurretInLowSpeedZone[0]},
    { &gDb_ctSetRamSpeedMaxRail.tInf_EnableSimuMode, (TVoid*)&gDb_tRamSpeedMaxRail.boEnableSimuMode, (TVoid*)&gDb_ctSetRamSpeedMaxRail.boDef_EnableSimuMode, (TVoid*)&gDb_ctSetRamSpeedMaxRail.aboRng_EnableSimuMode[0]},
    { &gDb_ctSetRamSpeedMaxRail.tInf_SimuDevers, (TVoid*)&gDb_tRamSpeedMaxRail.u16SimuDevers, (TVoid*)&gDb_ctSetRamSpeedMaxRail.u16Def_SimuDevers, (TVoid*)&gDb_ctSetRamSpeedMaxRail.au16Rng_SimuDevers[0]},
    { &gDb_ctSetRamSpeedMaxRail.tInf_SimuTurretAngle, (TVoid*)&gDb_tRamSpeedMaxRail.i16SimuTurretAngle, (TVoid*)&gDb_ctSetRamSpeedMaxRail.i16Def_SimuTurretAngle, (TVoid*)&gDb_ctSetRamSpeedMaxRail.ai16Rng_SimuTurretAngle[0]},
    { &gDb_ctSetRamSpeedMaxRail.tInf_SimuAuthorizationWorkKey, (TVoid*)&gDb_tRamSpeedMaxRail.boSimuAuthorizationWorkKey, (TVoid*)&gDb_ctSetRamSpeedMaxRail.boDef_SimuAuthorizationWorkKey, (TVoid*)&gDb_ctSetRamSpeedMaxRail.aboRng_SimuAuthorizationWorkKey[0]},
    { &gDb_ctSetRamSpeedMaxRail.tInf_SimuAbutmentTurretCentred, (TVoid*)&gDb_tRamSpeedMaxRail.eSimuAbutmentTurretCentred, (TVoid*)&gDb_ctSetRamSpeedMaxRail.eDef_SimuAbutmentTurretCentred, (TVoid*)&gDb_ctSetRamSpeedMaxRail.aeRng_SimuAbutmentTurretCentred[0]},
    { &gDb_ctSetRamSpeedMaxRail.tInf_SimuWorkKeyCentred, (TVoid*)&gDb_tRamSpeedMaxRail.eSimuWorkKeyCentred, (TVoid*)&gDb_ctSetRamSpeedMaxRail.eDef_SimuWorkKeyCentred, (TVoid*)&gDb_ctSetRamSpeedMaxRail.aeRng_SimuWorkKeyCentred[0]},
    { &gDb_ctSetRamSpeedMaxRail.tInf_SimuTelescopeEntry, (TVoid*)&gDb_tRamSpeedMaxRail.boSimuTelescopeEntry, (TVoid*)&gDb_ctSetRamSpeedMaxRail.boDef_SimuTelescopeEntry, (TVoid*)&gDb_ctSetRamSpeedMaxRail.aboRng_SimuTelescopeEntry[0]},
    { &gDb_ctSetRamSpeedMaxRail.tInf_SimuDeltaArmFoldedSensor, (TVoid*)&gDb_tRamSpeedMaxRail.boSimuDeltaArmFoldedSensor, (TVoid*)&gDb_ctSetRamSpeedMaxRail.boDef_SimuDeltaArmFoldedSensor, (TVoid*)&gDb_ctSetRamSpeedMaxRail.aboRng_SimuDeltaArmFoldedSensor[0]},
    { &gDb_ctSetRamSpeedMaxRail.tInf_SimuDeltaArmFoldedZone, (TVoid*)&gDb_tRamSpeedMaxRail.boSimuDeltaArmFoldedZone, (TVoid*)&gDb_ctSetRamSpeedMaxRail.boDef_SimuDeltaArmFoldedZone, (TVoid*)&gDb_ctSetRamSpeedMaxRail.aboRng_SimuDeltaArmFoldedZone[0]},
    { &gDb_ctSetRamSpeedMaxRail.tInf_SimuArrowArmFoldedSensor, (TVoid*)&gDb_tRamSpeedMaxRail.boSimuArrowArmFoldedSensor, (TVoid*)&gDb_ctSetRamSpeedMaxRail.boDef_SimuArrowArmFoldedSensor, (TVoid*)&gDb_ctSetRamSpeedMaxRail.aboRng_SimuArrowArmFoldedSensor[0]},
    { &gDb_ctSetRamSpeedMaxRail.tInf_SimuArrowArmFoldedZone, (TVoid*)&gDb_tRamSpeedMaxRail.boSimuArrowArmFoldedZone, (TVoid*)&gDb_ctSetRamSpeedMaxRail.boDef_SimuArrowArmFoldedZone, (TVoid*)&gDb_ctSetRamSpeedMaxRail.aboRng_SimuArrowArmFoldedZone[0]},
    { &gDb_ctSetRamSpeedMaxRail.tInf_SimuNacelleBasketLeftSideSensor1, (TVoid*)&gDb_tRamSpeedMaxRail.boSimuNacelleBasketLeftSideSensor1, (TVoid*)&gDb_ctSetRamSpeedMaxRail.boDef_SimuNacelleBasketLeftSideSensor1, (TVoid*)&gDb_ctSetRamSpeedMaxRail.aboRng_SimuNacelleBasketLeftSideSensor1[0]},
    { &gDb_ctSetRamSpeedMaxRail.tInf_SimuNacelleBasketLeftSideSensor2, (TVoid*)&gDb_tRamSpeedMaxRail.boSimuNacelleBasketLeftSideSensor2, (TVoid*)&gDb_ctSetRamSpeedMaxRail.boDef_SimuNacelleBasketLeftSideSensor2, (TVoid*)&gDb_ctSetRamSpeedMaxRail.aboRng_SimuNacelleBasketLeftSideSensor2[0]},
    { &gDb_ctSetRamSpeedMaxRail.tInf_SimuNacelleBasketRighSideSensor1, (TVoid*)&gDb_tRamSpeedMaxRail.boSimuNacelleBasketRighSideSensor1, (TVoid*)&gDb_ctSetRamSpeedMaxRail.boDef_SimuNacelleBasketRighSideSensor1, (TVoid*)&gDb_ctSetRamSpeedMaxRail.aboRng_SimuNacelleBasketRighSideSensor1[0]},
    { &gDb_ctSetRamSpeedMaxRail.tInf_SimuNacelleBasketRighSideSensor2, (TVoid*)&gDb_tRamSpeedMaxRail.boSimuNacelleBasketRighSideSensor2, (TVoid*)&gDb_ctSetRamSpeedMaxRail.boDef_SimuNacelleBasketRighSideSensor2, (TVoid*)&gDb_ctSetRamSpeedMaxRail.aboRng_SimuNacelleBasketRighSideSensor2[0]},
    { &gDb_ctSetRamSpeedMaxRail.tInf_SimuHighSectorPlateSensor, (TVoid*)&gDb_tRamSpeedMaxRail.boSimuHighSectorPlateSensor, (TVoid*)&gDb_ctSetRamSpeedMaxRail.boDef_SimuHighSectorPlateSensor, (TVoid*)&gDb_ctSetRamSpeedMaxRail.aboRng_SimuHighSectorPlateSensor[0]},
    { &gDb_ctSetRamSpeedMaxRail.tInf_RailSpeedMaxMode, (TVoid*)&gDb_tRamSpeedMaxRail.eRailSpeedMaxMode, (TVoid*)&gDb_ctSetRamSpeedMaxRail.eDef_RailSpeedMaxMode, (TVoid*)&gDb_ctSetRamSpeedMaxRail.aeRng_RailSpeedMaxMode[0]},
    { &gDb_ctSetRamSpeedMaxRail.tInf_SimuDeltaArmInLowerZone, (TVoid*)&gDb_tRamSpeedMaxRail.boSimuDeltaArmInLowerZone, (TVoid*)&gDb_ctSetRamSpeedMaxRail.boDef_SimuDeltaArmInLowerZone, (TVoid*)&gDb_ctSetRamSpeedMaxRail.aboRng_SimuDeltaArmInLowerZone[0]},
    { &gDb_ctSetRamSpeedMaxRail.tInf_SimuTurretInRearCenterPos, (TVoid*)&gDb_tRamSpeedMaxRail.boSimuTurretInRearCenterPos, (TVoid*)&gDb_ctSetRamSpeedMaxRail.boDef_SimuTurretInRearCenterPos, (TVoid*)&gDb_ctSetRamSpeedMaxRail.aboRng_SimuTurretInRearCenterPos[0]},
    { &gDb_ctSetRamSpeedMaxRail.tInf_SimuTurretInFrontCenterPos, (TVoid*)&gDb_tRamSpeedMaxRail.boSimuTurretInFrontCenterPos, (TVoid*)&gDb_ctSetRamSpeedMaxRail.boDef_SimuTurretInFrontCenterPos, (TVoid*)&gDb_ctSetRamSpeedMaxRail.aboRng_SimuTurretInFrontCenterPos[0]},
    { &gDb_ctSetRamSpeedMaxRail.tInf_LimitSpeedAccesSiteSpeedExceeded, (TVoid*)&gDb_tRamSpeedMaxRail.boLimitSpeedAccesSiteSpeedExceeded, (TVoid*)&gDb_ctSetRamSpeedMaxRail.boDef_LimitSpeedAccesSiteSpeedExceeded, (TVoid*)&gDb_ctSetRamSpeedMaxRail.aboRng_LimitSpeedAccesSiteSpeedExceeded[0]},
    { &gDb_ctSetRamSpeedMaxRail.tInf_LimitSpeedHighSpeedExceeded, (TVoid*)&gDb_tRamSpeedMaxRail.boLimitSpeedHighSpeedExceeded, (TVoid*)&gDb_ctSetRamSpeedMaxRail.boDef_LimitSpeedHighSpeedExceeded, (TVoid*)&gDb_ctSetRamSpeedMaxRail.aboRng_LimitSpeedHighSpeedExceeded[0]},
    { &gDb_ctSetRamSpeedMaxRail.tInf_LimitSpeedLowSpeedExceeded, (TVoid*)&gDb_tRamSpeedMaxRail.boLimitSpeedLowSpeedExceeded, (TVoid*)&gDb_ctSetRamSpeedMaxRail.boDef_LimitSpeedLowSpeedExceeded, (TVoid*)&gDb_ctSetRamSpeedMaxRail.aboRng_LimitSpeedLowSpeedExceeded[0]},
    { &gDb_ctSetRamSpeedMaxRail.tInf_LimitSpeedLowSpeedBrakeTestExced, (TVoid*)&gDb_tRamSpeedMaxRail.boLimitSpeedLowSpeedBrakeTestExced, (TVoid*)&gDb_ctSetRamSpeedMaxRail.boDef_LimitSpeedLowSpeedBrakeTestExced, (TVoid*)&gDb_ctSetRamSpeedMaxRail.aboRng_LimitSpeedLowSpeedBrakeTestExced[0]},
    { &gDb_ctSetRamSpeedMaxRail.tInf_LitmitSpeedExceeded, (TVoid*)&gDb_tRamSpeedMaxRail.boLitmitSpeedExceeded, (TVoid*)&gDb_ctSetRamSpeedMaxRail.boDef_LitmitSpeedExceeded, (TVoid*)&gDb_ctSetRamSpeedMaxRail.aboRng_LitmitSpeedExceeded[0]},
    { &gDb_ctSetRamSpeedMaxRail.tInf_KinematicTrainAllow, (TVoid*)&gDb_tRamSpeedMaxRail.boKinematicTrainAllow, (TVoid*)&gDb_ctSetRamSpeedMaxRail.boDef_KinematicTrainAllow, (TVoid*)&gDb_ctSetRamSpeedMaxRail.aboRng_KinematicTrainAllow[0]},
    { &gDb_ctSetRamSpeedMaxRail.tInf_SlopeCaseLess2Deg, (TVoid*)&gDb_tRamSpeedMaxRail.boSlopeCaseLess2Deg, (TVoid*)&gDb_ctSetRamSpeedMaxRail.boDef_SlopeCaseLess2Deg, (TVoid*)&gDb_ctSetRamSpeedMaxRail.aboRng_SlopeCaseLess2Deg[0]},
    { &gDb_ctSetRamSpeedMaxRail.tInf_SlopeCaseLess4Deg, (TVoid*)&gDb_tRamSpeedMaxRail.boSlopeCaseLess4Deg, (TVoid*)&gDb_ctSetRamSpeedMaxRail.boDef_SlopeCaseLess4Deg, (TVoid*)&gDb_ctSetRamSpeedMaxRail.aboRng_SlopeCaseLess4Deg[0]},
    { &gDb_ctSetRamSpeedMaxRail.tInf_SlopeCaseLess6Deg, (TVoid*)&gDb_tRamSpeedMaxRail.boSlopeCaseLess6Deg, (TVoid*)&gDb_ctSetRamSpeedMaxRail.boDef_SlopeCaseLess6Deg, (TVoid*)&gDb_ctSetRamSpeedMaxRail.aboRng_SlopeCaseLess6Deg[0]},
    { &gDb_ctSetRamSpeedMaxRail.tInf_SlopeCaseHigher6Deg, (TVoid*)&gDb_tRamSpeedMaxRail.boSlopeCaseHigher6Deg, (TVoid*)&gDb_ctSetRamSpeedMaxRail.boDef_SlopeCaseHigher6Deg, (TVoid*)&gDb_ctSetRamSpeedMaxRail.aboRng_SlopeCaseHigher6Deg[0]},
    { &gDb_ctSetRamSpeedMaxRail.tInf_TurretInSpeedZone2Deg, (TVoid*)&gDb_tRamSpeedMaxRail.boTurretInSpeedZone2Deg, (TVoid*)&gDb_ctSetRamSpeedMaxRail.boDef_TurretInSpeedZone2Deg, (TVoid*)&gDb_ctSetRamSpeedMaxRail.aboRng_TurretInSpeedZone2Deg[0]},
    { &gDb_ctSetRamSpeedMaxRail.tInf_TurretInSpeedZone4Deg, (TVoid*)&gDb_tRamSpeedMaxRail.boTurretInSpeedZone4Deg, (TVoid*)&gDb_ctSetRamSpeedMaxRail.boDef_TurretInSpeedZone4Deg, (TVoid*)&gDb_ctSetRamSpeedMaxRail.aboRng_TurretInSpeedZone4Deg[0]},
    { &gDb_ctSetRamSpeedMaxRail.tInf_TurretInSpeedZone6Deg, (TVoid*)&gDb_tRamSpeedMaxRail.boTurretInSpeedZone6Deg, (TVoid*)&gDb_ctSetRamSpeedMaxRail.boDef_TurretInSpeedZone6Deg, (TVoid*)&gDb_ctSetRamSpeedMaxRail.aboRng_TurretInSpeedZone6Deg[0]},
    { &gDb_ctSetRamSpeedMaxRail.tInf_TurretInSpeedZone2DegForBasket, (TVoid*)&gDb_tRamSpeedMaxRail.boTurretInSpeedZone2DegForBasket, (TVoid*)&gDb_ctSetRamSpeedMaxRail.boDef_TurretInSpeedZone2DegForBasket, (TVoid*)&gDb_ctSetRamSpeedMaxRail.aboRng_TurretInSpeedZone2DegForBasket[0]},
    { &gDb_ctSetRamSpeedMaxRail.tInf_TurretInSpeedZone4DegForBasket, (TVoid*)&gDb_tRamSpeedMaxRail.boTurretInSpeedZone4DegForBasket, (TVoid*)&gDb_ctSetRamSpeedMaxRail.boDef_TurretInSpeedZone4DegForBasket, (TVoid*)&gDb_ctSetRamSpeedMaxRail.aboRng_TurretInSpeedZone4DegForBasket[0]},
    { &gDb_ctSetRamSpeedMaxRail.tInf_TurretInSpeedZone6DegForBasket, (TVoid*)&gDb_tRamSpeedMaxRail.boTurretInSpeedZone6DegForBasket, (TVoid*)&gDb_ctSetRamSpeedMaxRail.boDef_TurretInSpeedZone6DegForBasket, (TVoid*)&gDb_ctSetRamSpeedMaxRail.aboRng_TurretInSpeedZone6DegForBasket[0]},
    { &gDb_ctSetRamSpeedMaxRail.tInf_PreventLimitSpeedAccesSiteSpeed, (TVoid*)&gDb_tRamSpeedMaxRail.boPreventLimitSpeedAccesSiteSpeed, (TVoid*)&gDb_ctSetRamSpeedMaxRail.boDef_PreventLimitSpeedAccesSiteSpeed, (TVoid*)&gDb_ctSetRamSpeedMaxRail.aboRng_PreventLimitSpeedAccesSiteSpeed[0]},
    { &gDb_ctSetRamSpeedMaxRail.tInf_PreventLimitSpeedHighSpeed, (TVoid*)&gDb_tRamSpeedMaxRail.boPreventLimitSpeedHighSpeed, (TVoid*)&gDb_ctSetRamSpeedMaxRail.boDef_PreventLimitSpeedHighSpeed, (TVoid*)&gDb_ctSetRamSpeedMaxRail.aboRng_PreventLimitSpeedHighSpeed[0]},
    { &gDb_ctSetRamSpeedMaxRail.tInf_PreventLimitSpeedLowSpeed, (TVoid*)&gDb_tRamSpeedMaxRail.boPreventLimitSpeedLowSpeed, (TVoid*)&gDb_ctSetRamSpeedMaxRail.boDef_PreventLimitSpeedLowSpeed, (TVoid*)&gDb_ctSetRamSpeedMaxRail.aboRng_PreventLimitSpeedLowSpeed[0]},
    { &gDb_ctSetRamSpeedMaxRail.tInf_PreventLimitLowSpeedBrakeTest, (TVoid*)&gDb_tRamSpeedMaxRail.boPreventLimitLowSpeedBrakeTest, (TVoid*)&gDb_ctSetRamSpeedMaxRail.boDef_PreventLimitLowSpeedBrakeTest, (TVoid*)&gDb_ctSetRamSpeedMaxRail.aboRng_PreventLimitLowSpeedBrakeTest[0]},
    { &gDb_ctSetRamSpeedMaxRail.tInf_PreventLimitSpeedExceeding, (TVoid*)&gDb_tRamSpeedMaxRail.boPreventLimitSpeedExceeding, (TVoid*)&gDb_ctSetRamSpeedMaxRail.boDef_PreventLimitSpeedExceeding, (TVoid*)&gDb_ctSetRamSpeedMaxRail.aboRng_PreventLimitSpeedExceeding[0]},
    { &gDb_ctSetRamSpeedMaxRail.tInf_AuthoriseGlobalLowSpeed, (TVoid*)&gDb_tRamSpeedMaxRail.boAuthoriseGlobalLowSpeed, (TVoid*)&gDb_ctSetRamSpeedMaxRail.boDef_AuthoriseGlobalLowSpeed, (TVoid*)&gDb_ctSetRamSpeedMaxRail.aboRng_AuthoriseGlobalLowSpeed[0]}
};

const TDbVarTabNvm gDb_catVarTabNvParamBrakeTest[20] =
{    //!< *cptInf *vpVal *cvpDataRang *cvpDataDef cu16Adr cu16ValuePos
    { &gDb_ctSetNvParamBrakeTest.tInf_NCycleNeedBrakeTest, (TVoid*)&gDb_tNvParamBrakeTest.u16NCycleNeedBrakeTest, (TVoid*)&gDb_ctSetNvParamBrakeTest.u16Def_NCycleNeedBrakeTest, (TVoid*)&gDb_ctSetNvParamBrakeTest.au16Rng_NCycleNeedBrakeTest[0], 1062, 0},
    { &gDb_ctSetNvParamBrakeTest.tInf_NCyclesBrakeCritical, (TVoid*)&gDb_tNvParamBrakeTest.u16NCyclesBrakeCritical, (TVoid*)&gDb_ctSetNvParamBrakeTest.u16Def_NCyclesBrakeCritical, (TVoid*)&gDb_ctSetNvParamBrakeTest.au16Rng_NCyclesBrakeCritical[0], 1064, 1},
    { &gDb_ctSetNvParamBrakeTest.tInf_SpeedMinTreshIncrBrakeCycles, (TVoid*)&gDb_tNvParamBrakeTest.u16SpeedMinTreshIncrBrakeCycles, (TVoid*)&gDb_ctSetNvParamBrakeTest.u16Def_SpeedMinTreshIncrBrakeCycles, (TVoid*)&gDb_ctSetNvParamBrakeTest.au16Rng_SpeedMinTreshIncrBrakeCycles[0], 1066, 2},
    { &gDb_ctSetNvParamBrakeTest.tInf_PressureOsciServiceBrakeTresh, (TVoid*)&gDb_tNvParamBrakeTest.u16PressureOsciServiceBrakeTresh, (TVoid*)&gDb_ctSetNvParamBrakeTest.u16Def_PressureOsciServiceBrakeTresh, (TVoid*)&gDb_ctSetNvParamBrakeTest.au16Rng_PressureOsciServiceBrakeTresh[0], 1068, 3},
    { &gDb_ctSetNvParamBrakeTest.tInf_PressureFixeServiceBrakeTresh, (TVoid*)&gDb_tNvParamBrakeTest.u16PressureFixeServiceBrakeTresh, (TVoid*)&gDb_ctSetNvParamBrakeTest.u16Def_PressureFixeServiceBrakeTresh, (TVoid*)&gDb_ctSetNvParamBrakeTest.au16Rng_PressureFixeServiceBrakeTresh[0], 1070, 4},
    { &gDb_ctSetNvParamBrakeTest.tInf_PressureOsciParkingBrakeTresh, (TVoid*)&gDb_tNvParamBrakeTest.u16PressureOsciParkingBrakeTresh, (TVoid*)&gDb_ctSetNvParamBrakeTest.u16Def_PressureOsciParkingBrakeTresh, (TVoid*)&gDb_ctSetNvParamBrakeTest.au16Rng_PressureOsciParkingBrakeTresh[0], 1072, 5},
    { &gDb_ctSetNvParamBrakeTest.tInf_PressureFixeParkingBrakeTresh, (TVoid*)&gDb_tNvParamBrakeTest.u16PressureFixeParkingBrakeTresh, (TVoid*)&gDb_ctSetNvParamBrakeTest.u16Def_PressureFixeParkingBrakeTresh, (TVoid*)&gDb_ctSetNvParamBrakeTest.au16Rng_PressureFixeParkingBrakeTresh[0], 1074, 6},
    { &gDb_ctSetNvParamBrakeTest.tInf_TimeOsciSerivceBrakeMs, (TVoid*)&gDb_tNvParamBrakeTest.u16TimeOsciSerivceBrakeMs, (TVoid*)&gDb_ctSetNvParamBrakeTest.u16Def_TimeOsciSerivceBrakeMs, (TVoid*)&gDb_ctSetNvParamBrakeTest.au16Rng_TimeOsciSerivceBrakeMs[0], 1076, 7},
    { &gDb_ctSetNvParamBrakeTest.tInf_TimeFixeSerivceBrakeMs, (TVoid*)&gDb_tNvParamBrakeTest.u16TimeFixeSerivceBrakeMs, (TVoid*)&gDb_ctSetNvParamBrakeTest.u16Def_TimeFixeSerivceBrakeMs, (TVoid*)&gDb_ctSetNvParamBrakeTest.au16Rng_TimeFixeSerivceBrakeMs[0], 1078, 8},
    { &gDb_ctSetNvParamBrakeTest.tInf_TimeOsciParkingBrakeMs, (TVoid*)&gDb_tNvParamBrakeTest.u16TimeOsciParkingBrakeMs, (TVoid*)&gDb_ctSetNvParamBrakeTest.u16Def_TimeOsciParkingBrakeMs, (TVoid*)&gDb_ctSetNvParamBrakeTest.au16Rng_TimeOsciParkingBrakeMs[0], 1080, 9},
    { &gDb_ctSetNvParamBrakeTest.tInf_TimeFixeParkingBrakeMs, (TVoid*)&gDb_tNvParamBrakeTest.u16TimeFixeParkingBrakeMs, (TVoid*)&gDb_ctSetNvParamBrakeTest.u16Def_TimeFixeParkingBrakeMs, (TVoid*)&gDb_ctSetNvParamBrakeTest.au16Rng_TimeFixeParkingBrakeMs[0], 1082, 10},
    { &gDb_ctSetNvParamBrakeTest.tInf_SpeedMinBrakeTestRunning, (TVoid*)&gDb_tNvParamBrakeTest.u16SpeedMinBrakeTestRunning, (TVoid*)&gDb_ctSetNvParamBrakeTest.u16Def_SpeedMinBrakeTestRunning, (TVoid*)&gDb_ctSetNvParamBrakeTest.au16Rng_SpeedMinBrakeTestRunning[0], 1084, 11},
    { &gDb_ctSetNvParamBrakeTest.tInf_ValidCondiEnableTestBrakeTime, (TVoid*)&gDb_tNvParamBrakeTest.u32ValidCondiEnableTestBrakeTime, (TVoid*)&gDb_ctSetNvParamBrakeTest.u32Def_ValidCondiEnableTestBrakeTime, (TVoid*)&gDb_ctSetNvParamBrakeTest.au32Rng_ValidCondiEnableTestBrakeTime[0], 1086, 12},
    { &gDb_ctSetNvParamBrakeTest.tInf_NbElementDeltaTransmPressure, (TVoid*)&gDb_tNvParamBrakeTest.u8NbElementDeltaTransmPressure, (TVoid*)&gDb_ctSetNvParamBrakeTest.u8Def_NbElementDeltaTransmPressure, (TVoid*)&gDb_ctSetNvParamBrakeTest.au8Rng_NbElementDeltaTransmPressure[0], 1090, 13},
    { &gDb_ctSetNvParamBrakeTest.tInf_NCycleNeed2ndParkBrake, (TVoid*)&gDb_tNvParamBrakeTest.u16NCycleNeed2ndParkBrake, (TVoid*)&gDb_ctSetNvParamBrakeTest.u16Def_NCycleNeed2ndParkBrake, (TVoid*)&gDb_ctSetNvParamBrakeTest.au16Rng_NCycleNeed2ndParkBrake[0], 1091, 14},
    { &gDb_ctSetNvParamBrakeTest.tInf_NCycles2ndBrakeCritical, (TVoid*)&gDb_tNvParamBrakeTest.u16NCycles2ndBrakeCritical, (TVoid*)&gDb_ctSetNvParamBrakeTest.u16Def_NCycles2ndBrakeCritical, (TVoid*)&gDb_ctSetNvParamBrakeTest.au16Rng_NCycles2ndBrakeCritical[0], 1093, 15},
    { &gDb_ctSetNvParamBrakeTest.tInf_TimeOsci2ndParkingBrakeMs, (TVoid*)&gDb_tNvParamBrakeTest.u16TimeOsci2ndParkingBrakeMs, (TVoid*)&gDb_ctSetNvParamBrakeTest.u16Def_TimeOsci2ndParkingBrakeMs, (TVoid*)&gDb_ctSetNvParamBrakeTest.au16Rng_TimeOsci2ndParkingBrakeMs[0], 1095, 16},
    { &gDb_ctSetNvParamBrakeTest.tInf_TimeFixe2ndParkingBrakeMs, (TVoid*)&gDb_tNvParamBrakeTest.u16TimeFixe2ndParkingBrakeMs, (TVoid*)&gDb_ctSetNvParamBrakeTest.u16Def_TimeFixe2ndParkingBrakeMs, (TVoid*)&gDb_ctSetNvParamBrakeTest.au16Rng_TimeFixe2ndParkingBrakeMs[0], 1097, 17},
    { &gDb_ctSetNvParamBrakeTest.tInf_ThresCpt2ndParkBrake, (TVoid*)&gDb_tNvParamBrakeTest.u16ThresCpt2ndParkBrake, (TVoid*)&gDb_ctSetNvParamBrakeTest.u16Def_ThresCpt2ndParkBrake, (TVoid*)&gDb_ctSetNvParamBrakeTest.au16Rng_ThresCpt2ndParkBrake[0], 1099, 18},
    { &gDb_ctSetNvParamBrakeTest.tInf_MinThresholdActive2ndParkBrake, (TVoid*)&gDb_tNvParamBrakeTest.u16MinThresholdActive2ndParkBrake, (TVoid*)&gDb_ctSetNvParamBrakeTest.u16Def_MinThresholdActive2ndParkBrake, (TVoid*)&gDb_ctSetNvParamBrakeTest.au16Rng_MinThresholdActive2ndParkBrake[0], 1101, 19}
};

const TDbVarTabRam gDb_catVarTabRamBrakeTest[43] =
{    //!< *cptInf *vpVal *cvpDataDef 
    { &gDb_ctSetRamBrakeTest.tInf_ForbidCameraDisplay, (TVoid*)&gDb_tRamBrakeTest.boForbidCameraDisplay, (TVoid*)&gDb_ctSetRamBrakeTest.boDef_ForbidCameraDisplay, (TVoid*)&gDb_ctSetRamBrakeTest.aboRng_ForbidCameraDisplay[0]},
    { &gDb_ctSetRamBrakeTest.tInf_PressureEfficiencyRate, (TVoid*)&gDb_tRamBrakeTest.u16PressureEfficiencyRate, (TVoid*)&gDb_ctSetRamBrakeTest.u16Def_PressureEfficiencyRate, (TVoid*)&gDb_ctSetRamBrakeTest.au16Rng_PressureEfficiencyRate[0]},
    { &gDb_ctSetRamBrakeTest.tInf_BrakeTestSelected, (TVoid*)&gDb_tRamBrakeTest.eBrakeTestSelected, (TVoid*)&gDb_ctSetRamBrakeTest.eDef_BrakeTestSelected, (TVoid*)&gDb_ctSetRamBrakeTest.aeRng_BrakeTestSelected[0]},
    { &gDb_ctSetRamBrakeTest.tInf_NeedTestBrake, (TVoid*)&gDb_tRamBrakeTest.boNeedTestBrake, (TVoid*)&gDb_ctSetRamBrakeTest.boDef_NeedTestBrake, (TVoid*)&gDb_ctSetRamBrakeTest.aboRng_NeedTestBrake[0]},
    { &gDb_ctSetRamBrakeTest.tInf_CycleBrakeOverCriticalNumber, (TVoid*)&gDb_tRamBrakeTest.boCycleBrakeOverCriticalNumber, (TVoid*)&gDb_ctSetRamBrakeTest.boDef_CycleBrakeOverCriticalNumber, (TVoid*)&gDb_ctSetRamBrakeTest.aboRng_CycleBrakeOverCriticalNumber[0]},
    { &gDb_ctSetRamBrakeTest.tInf_UpPositionAxles, (TVoid*)&gDb_tRamBrakeTest.boUpPositionAxles, (TVoid*)&gDb_ctSetRamBrakeTest.boDef_UpPositionAxles, (TVoid*)&gDb_ctSetRamBrakeTest.aboRng_UpPositionAxles[0]},
    { &gDb_ctSetRamBrakeTest.tInf_DownPositionAxles, (TVoid*)&gDb_tRamBrakeTest.boDownPositionAxles, (TVoid*)&gDb_ctSetRamBrakeTest.boDef_DownPositionAxles, (TVoid*)&gDb_ctSetRamBrakeTest.aboRng_DownPositionAxles[0]},
    { &gDb_ctSetRamBrakeTest.tInf_IncoherencePosAxleAndTestMode, (TVoid*)&gDb_tRamBrakeTest.boIncoherencePosAxleAndTestMode, (TVoid*)&gDb_ctSetRamBrakeTest.boDef_IncoherencePosAxleAndTestMode, (TVoid*)&gDb_ctSetRamBrakeTest.aboRng_IncoherencePosAxleAndTestMode[0]},
    { &gDb_ctSetRamBrakeTest.tInf_TestBrakeInOffrailMode, (TVoid*)&gDb_tRamBrakeTest.boTestBrakeInOffrailMode, (TVoid*)&gDb_ctSetRamBrakeTest.boDef_TestBrakeInOffrailMode, (TVoid*)&gDb_ctSetRamBrakeTest.aboRng_TestBrakeInOffrailMode[0]},
    { &gDb_ctSetRamBrakeTest.tInf_BrakeTestRunning, (TVoid*)&gDb_tRamBrakeTest.boBrakeTestRunning, (TVoid*)&gDb_ctSetRamBrakeTest.boDef_BrakeTestRunning, (TVoid*)&gDb_ctSetRamBrakeTest.aboRng_BrakeTestRunning[0]},
    { &gDb_ctSetRamBrakeTest.tInf_ValidBrakeTest, (TVoid*)&gDb_tRamBrakeTest.boValidBrakeTest, (TVoid*)&gDb_ctSetRamBrakeTest.boDef_ValidBrakeTest, (TVoid*)&gDb_ctSetRamBrakeTest.aboRng_ValidBrakeTest[0]},
    { &gDb_ctSetRamBrakeTest.tInf_EnableIncrementCycleBrakePerform, (TVoid*)&gDb_tRamBrakeTest.boEnableIncrementCycleBrakePerform, (TVoid*)&gDb_ctSetRamBrakeTest.boDef_EnableIncrementCycleBrakePerform, (TVoid*)&gDb_ctSetRamBrakeTest.aboRng_EnableIncrementCycleBrakePerform[0]},
    { &gDb_ctSetRamBrakeTest.tInf_ValidOsciServiceBrakeTest, (TVoid*)&gDb_tRamBrakeTest.boValidOsciServiceBrakeTest, (TVoid*)&gDb_ctSetRamBrakeTest.boDef_ValidOsciServiceBrakeTest, (TVoid*)&gDb_ctSetRamBrakeTest.aboRng_ValidOsciServiceBrakeTest[0]},
    { &gDb_ctSetRamBrakeTest.tInf_ValidFixeServiceBrakeTest, (TVoid*)&gDb_tRamBrakeTest.boValidFixeServiceBrakeTest, (TVoid*)&gDb_ctSetRamBrakeTest.boDef_ValidFixeServiceBrakeTest, (TVoid*)&gDb_ctSetRamBrakeTest.aboRng_ValidFixeServiceBrakeTest[0]},
    { &gDb_ctSetRamBrakeTest.tInf_ValidOsciParkingBrakeTest, (TVoid*)&gDb_tRamBrakeTest.boValidOsciParkingBrakeTest, (TVoid*)&gDb_ctSetRamBrakeTest.boDef_ValidOsciParkingBrakeTest, (TVoid*)&gDb_ctSetRamBrakeTest.aboRng_ValidOsciParkingBrakeTest[0]},
    { &gDb_ctSetRamBrakeTest.tInf_ValidFixeParkingBrakeTest, (TVoid*)&gDb_tRamBrakeTest.boValidFixeParkingBrakeTest, (TVoid*)&gDb_ctSetRamBrakeTest.boDef_ValidFixeParkingBrakeTest, (TVoid*)&gDb_ctSetRamBrakeTest.aboRng_ValidFixeParkingBrakeTest[0]},
    { &gDb_ctSetRamBrakeTest.tInf_SimuOsciServiceBrakeSelect, (TVoid*)&gDb_tRamBrakeTest.boSimuOsciServiceBrakeSelect, (TVoid*)&gDb_ctSetRamBrakeTest.boDef_SimuOsciServiceBrakeSelect, (TVoid*)&gDb_ctSetRamBrakeTest.aboRng_SimuOsciServiceBrakeSelect[0]},
    { &gDb_ctSetRamBrakeTest.tInf_SimuFixeServiceBrakeSelect, (TVoid*)&gDb_tRamBrakeTest.boSimuFixeServiceBrakeSelect, (TVoid*)&gDb_ctSetRamBrakeTest.boDef_SimuFixeServiceBrakeSelect, (TVoid*)&gDb_ctSetRamBrakeTest.aboRng_SimuFixeServiceBrakeSelect[0]},
    { &gDb_ctSetRamBrakeTest.tInf_SimuOsciParkBrakeSelect, (TVoid*)&gDb_tRamBrakeTest.boSimuOsciParkBrakeSelect, (TVoid*)&gDb_ctSetRamBrakeTest.boDef_SimuOsciParkBrakeSelect, (TVoid*)&gDb_ctSetRamBrakeTest.aboRng_SimuOsciParkBrakeSelect[0]},
    { &gDb_ctSetRamBrakeTest.tInf_SimuFixeParkBrakeSelect, (TVoid*)&gDb_tRamBrakeTest.boSimuFixeParkBrakeSelect, (TVoid*)&gDb_ctSetRamBrakeTest.boDef_SimuFixeParkBrakeSelect, (TVoid*)&gDb_ctSetRamBrakeTest.aboRng_SimuFixeParkBrakeSelect[0]},
    { &gDb_ctSetRamBrakeTest.tInf_Simu2ServiceBrakesSelect, (TVoid*)&gDb_tRamBrakeTest.boSimu2ServiceBrakesSelect, (TVoid*)&gDb_ctSetRamBrakeTest.boDef_Simu2ServiceBrakesSelect, (TVoid*)&gDb_ctSetRamBrakeTest.aboRng_Simu2ServiceBrakesSelect[0]},
    { &gDb_ctSetRamBrakeTest.tInf_Simu2ParkBrakesSelect, (TVoid*)&gDb_tRamBrakeTest.boSimu2ParkBrakesSelect, (TVoid*)&gDb_ctSetRamBrakeTest.boDef_Simu2ParkBrakesSelect, (TVoid*)&gDb_ctSetRamBrakeTest.aboRng_Simu2ParkBrakesSelect[0]},
    { &gDb_ctSetRamBrakeTest.tInf_RetainPosJoyAdvance, (TVoid*)&gDb_tRamBrakeTest.eRetainPosJoyAdvance, (TVoid*)&gDb_ctSetRamBrakeTest.eDef_RetainPosJoyAdvance, (TVoid*)&gDb_ctSetRamBrakeTest.aeRng_RetainPosJoyAdvance[0]},
    { &gDb_ctSetRamBrakeTest.tInf_AcutalPosJoyAdvance, (TVoid*)&gDb_tRamBrakeTest.eAcutalPosJoyAdvance, (TVoid*)&gDb_ctSetRamBrakeTest.eDef_AcutalPosJoyAdvance, (TVoid*)&gDb_ctSetRamBrakeTest.aeRng_AcutalPosJoyAdvance[0]},
    { &gDb_ctSetRamBrakeTest.tInf_ForceOsciServiceBrake, (TVoid*)&gDb_tRamBrakeTest.boForceOsciServiceBrake, (TVoid*)&gDb_ctSetRamBrakeTest.boDef_ForceOsciServiceBrake, (TVoid*)&gDb_ctSetRamBrakeTest.aboRng_ForceOsciServiceBrake[0]},
    { &gDb_ctSetRamBrakeTest.tInf_ForceFixeServiceBrake, (TVoid*)&gDb_tRamBrakeTest.boForceFixeServiceBrake, (TVoid*)&gDb_ctSetRamBrakeTest.boDef_ForceFixeServiceBrake, (TVoid*)&gDb_ctSetRamBrakeTest.aboRng_ForceFixeServiceBrake[0]},
    { &gDb_ctSetRamBrakeTest.tInf_ForceOsciParkBrake, (TVoid*)&gDb_tRamBrakeTest.boForceOsciParkBrake, (TVoid*)&gDb_ctSetRamBrakeTest.boDef_ForceOsciParkBrake, (TVoid*)&gDb_ctSetRamBrakeTest.aboRng_ForceOsciParkBrake[0]},
    { &gDb_ctSetRamBrakeTest.tInf_ForceFixeParkBrake, (TVoid*)&gDb_tRamBrakeTest.boForceFixeParkBrake, (TVoid*)&gDb_ctSetRamBrakeTest.boDef_ForceFixeParkBrake, (TVoid*)&gDb_ctSetRamBrakeTest.aboRng_ForceFixeParkBrake[0]},
    { &gDb_ctSetRamBrakeTest.tInf_StopMovementByBrakeTest, (TVoid*)&gDb_tRamBrakeTest.boStopMovementByBrakeTest, (TVoid*)&gDb_ctSetRamBrakeTest.boDef_StopMovementByBrakeTest, (TVoid*)&gDb_ctSetRamBrakeTest.aboRng_StopMovementByBrakeTest[0]},
    { &gDb_ctSetRamBrakeTest.tInf_AuthorizeTransaltionRail, (TVoid*)&gDb_tRamBrakeTest.boAuthorizeTransaltionRail, (TVoid*)&gDb_ctSetRamBrakeTest.boDef_AuthorizeTransaltionRail, (TVoid*)&gDb_ctSetRamBrakeTest.aboRng_AuthorizeTransaltionRail[0]},
    { &gDb_ctSetRamBrakeTest.tInf_DeltaTransmissionPressure, (TVoid*)&gDb_tRamBrakeTest.i16DeltaTransmissionPressure, (TVoid*)&gDb_ctSetRamBrakeTest.i16Def_DeltaTransmissionPressure, (TVoid*)&gDb_ctSetRamBrakeTest.ai16Rng_DeltaTransmissionPressure[0]},
    { &gDb_ctSetRamBrakeTest.tInf_ValidConditionEnableTestBrake, (TVoid*)&gDb_tRamBrakeTest.boValidConditionEnableTestBrake, (TVoid*)&gDb_ctSetRamBrakeTest.boDef_ValidConditionEnableTestBrake, (TVoid*)&gDb_ctSetRamBrakeTest.aboRng_ValidConditionEnableTestBrake[0]},
    { &gDb_ctSetRamBrakeTest.tInf_TimeOutValidCondition, (TVoid*)&gDb_tRamBrakeTest.boTimeOutValidCondition, (TVoid*)&gDb_ctSetRamBrakeTest.boDef_TimeOutValidCondition, (TVoid*)&gDb_ctSetRamBrakeTest.aboRng_TimeOutValidCondition[0]},
    { &gDb_ctSetRamBrakeTest.tInf_PourcentCycleBrake, (TVoid*)&gDb_tRamBrakeTest.u8PourcentCycleBrake, (TVoid*)&gDb_ctSetRamBrakeTest.u8Def_PourcentCycleBrake, (TVoid*)&gDb_ctSetRamBrakeTest.au8Rng_PourcentCycleBrake[0]},
    { &gDb_ctSetRamBrakeTest.tInf_Force2ndParkBrakeFixe, (TVoid*)&gDb_tRamBrakeTest.boForce2ndParkBrakeFixe, (TVoid*)&gDb_ctSetRamBrakeTest.boDef_Force2ndParkBrakeFixe, (TVoid*)&gDb_ctSetRamBrakeTest.aboRng_Force2ndParkBrakeFixe[0]},
    { &gDb_ctSetRamBrakeTest.tInf_Force2ndParkBrakeOsci, (TVoid*)&gDb_tRamBrakeTest.boForce2ndParkBrakeOsci, (TVoid*)&gDb_ctSetRamBrakeTest.boDef_Force2ndParkBrakeOsci, (TVoid*)&gDb_ctSetRamBrakeTest.aboRng_Force2ndParkBrakeOsci[0]},
    { &gDb_ctSetRamBrakeTest.tInf_ValidOsci2ndParkBrakeTest, (TVoid*)&gDb_tRamBrakeTest.boValidOsci2ndParkBrakeTest, (TVoid*)&gDb_ctSetRamBrakeTest.boDef_ValidOsci2ndParkBrakeTest, (TVoid*)&gDb_ctSetRamBrakeTest.aboRng_ValidOsci2ndParkBrakeTest[0]},
    { &gDb_ctSetRamBrakeTest.tInf_ValidFixe2ndParkBrakeTest, (TVoid*)&gDb_tRamBrakeTest.boValidFixe2ndParkBrakeTest, (TVoid*)&gDb_ctSetRamBrakeTest.boDef_ValidFixe2ndParkBrakeTest, (TVoid*)&gDb_ctSetRamBrakeTest.aboRng_ValidFixe2ndParkBrakeTest[0]},
    { &gDb_ctSetRamBrakeTest.tInf_PourcentCycle2ndParkBrake, (TVoid*)&gDb_tRamBrakeTest.u8PourcentCycle2ndParkBrake, (TVoid*)&gDb_ctSetRamBrakeTest.u8Def_PourcentCycle2ndParkBrake, (TVoid*)&gDb_ctSetRamBrakeTest.au8Rng_PourcentCycle2ndParkBrake[0]},
    { &gDb_ctSetRamBrakeTest.tInf_NeedTest2ndParkBrake, (TVoid*)&gDb_tRamBrakeTest.boNeedTest2ndParkBrake, (TVoid*)&gDb_ctSetRamBrakeTest.boDef_NeedTest2ndParkBrake, (TVoid*)&gDb_ctSetRamBrakeTest.aboRng_NeedTest2ndParkBrake[0]},
    { &gDb_ctSetRamBrakeTest.tInf_Cycle2ndParkBrakeCritical, (TVoid*)&gDb_tRamBrakeTest.boCycle2ndParkBrakeCritical, (TVoid*)&gDb_ctSetRamBrakeTest.boDef_Cycle2ndParkBrakeCritical, (TVoid*)&gDb_ctSetRamBrakeTest.aboRng_Cycle2ndParkBrakeCritical[0]},
    { &gDb_ctSetRamBrakeTest.tInf_AddParkBrakeActive, (TVoid*)&gDb_tRamBrakeTest.boAddParkBrakeActive, (TVoid*)&gDb_ctSetRamBrakeTest.boDef_AddParkBrakeActive, (TVoid*)&gDb_ctSetRamBrakeTest.aboRng_AddParkBrakeActive[0]},
    { &gDb_ctSetRamBrakeTest.tInf_ParkBrake2ndPressureActive, (TVoid*)&gDb_tRamBrakeTest.boParkBrake2ndPressureActive, (TVoid*)&gDb_ctSetRamBrakeTest.boDef_ParkBrake2ndPressureActive, (TVoid*)&gDb_ctSetRamBrakeTest.aboRng_ParkBrake2ndPressureActive[0]}
};

const TDbVarTabNvm gDb_catVarTabNvParamRailWorkSafetyC0[25] =
{    //!< *cptInf *vpVal *cvpDataRang *cvpDataDef cu16Adr cu16ValuePos
    { &gDb_ctSetNvParamRailWorkSafetyC0.tInf_MinTurretAngleConsistALO, (TVoid*)&gDb_tNvParamRailWorkSafetyC0.i16MinTurretAngleConsistALO, (TVoid*)&gDb_ctSetNvParamRailWorkSafetyC0.i16Def_MinTurretAngleConsistALO, (TVoid*)&gDb_ctSetNvParamRailWorkSafetyC0.ai16Rng_MinTurretAngleConsistALO[0], 1212, 0},
    { &gDb_ctSetNvParamRailWorkSafetyC0.tInf_MaxTurretAngleConsistALO, (TVoid*)&gDb_tNvParamRailWorkSafetyC0.i16MaxTurretAngleConsistALO, (TVoid*)&gDb_ctSetNvParamRailWorkSafetyC0.i16Def_MaxTurretAngleConsistALO, (TVoid*)&gDb_ctSetNvParamRailWorkSafetyC0.ai16Rng_MaxTurretAngleConsistALO[0], 1214, 1},
    { &gDb_ctSetNvParamRailWorkSafetyC0.tInf_MinTurretAngleConsistMultilane, (TVoid*)&gDb_tNvParamRailWorkSafetyC0.i16MinTurretAngleConsistMultilane, (TVoid*)&gDb_ctSetNvParamRailWorkSafetyC0.i16Def_MinTurretAngleConsistMultilane, (TVoid*)&gDb_ctSetNvParamRailWorkSafetyC0.ai16Rng_MinTurretAngleConsistMultilane[0], 1216, 2},
    { &gDb_ctSetNvParamRailWorkSafetyC0.tInf_MaxTurretAngleConsistMultilane, (TVoid*)&gDb_tNvParamRailWorkSafetyC0.i16MaxTurretAngleConsistMultilane, (TVoid*)&gDb_ctSetNvParamRailWorkSafetyC0.i16Def_MaxTurretAngleConsistMultilane, (TVoid*)&gDb_ctSetNvParamRailWorkSafetyC0.ai16Rng_MaxTurretAngleConsistMultilane[0], 1218, 3},
    { &gDb_ctSetNvParamRailWorkSafetyC0.tInf_ALOTurretRearZoneThres, (TVoid*)&gDb_tNvParamRailWorkSafetyC0.i16ALOTurretRearZoneThres, (TVoid*)&gDb_ctSetNvParamRailWorkSafetyC0.i16Def_ALOTurretRearZoneThres, (TVoid*)&gDb_ctSetNvParamRailWorkSafetyC0.ai16Rng_ALOTurretRearZoneThres[0], 1220, 4},
    { &gDb_ctSetNvParamRailWorkSafetyC0.tInf_ALOTurretRearZoneHyst, (TVoid*)&gDb_tNvParamRailWorkSafetyC0.i16ALOTurretRearZoneHyst, (TVoid*)&gDb_ctSetNvParamRailWorkSafetyC0.i16Def_ALOTurretRearZoneHyst, (TVoid*)&gDb_ctSetNvParamRailWorkSafetyC0.ai16Rng_ALOTurretRearZoneHyst[0], 1222, 5},
    { &gDb_ctSetNvParamRailWorkSafetyC0.tInf_ALOTurretRearZoneSlowThres, (TVoid*)&gDb_tNvParamRailWorkSafetyC0.i16ALOTurretRearZoneSlowThres, (TVoid*)&gDb_ctSetNvParamRailWorkSafetyC0.i16Def_ALOTurretRearZoneSlowThres, (TVoid*)&gDb_ctSetNvParamRailWorkSafetyC0.ai16Rng_ALOTurretRearZoneSlowThres[0], 1224, 6},
    { &gDb_ctSetNvParamRailWorkSafetyC0.tInf_ALOTurretFrontZoneThres, (TVoid*)&gDb_tNvParamRailWorkSafetyC0.i16ALOTurretFrontZoneThres, (TVoid*)&gDb_ctSetNvParamRailWorkSafetyC0.i16Def_ALOTurretFrontZoneThres, (TVoid*)&gDb_ctSetNvParamRailWorkSafetyC0.ai16Rng_ALOTurretFrontZoneThres[0], 1226, 7},
    { &gDb_ctSetNvParamRailWorkSafetyC0.tInf_ALOTurretFrontZoneHyst, (TVoid*)&gDb_tNvParamRailWorkSafetyC0.i16ALOTurretFrontZoneHyst, (TVoid*)&gDb_ctSetNvParamRailWorkSafetyC0.i16Def_ALOTurretFrontZoneHyst, (TVoid*)&gDb_ctSetNvParamRailWorkSafetyC0.ai16Rng_ALOTurretFrontZoneHyst[0], 1228, 8},
    { &gDb_ctSetNvParamRailWorkSafetyC0.tInf_ALOTurretFrontZoneSlowThres, (TVoid*)&gDb_tNvParamRailWorkSafetyC0.i16ALOTurretFrontZoneSlowThres, (TVoid*)&gDb_ctSetNvParamRailWorkSafetyC0.i16Def_ALOTurretFrontZoneSlowThres, (TVoid*)&gDb_ctSetNvParamRailWorkSafetyC0.ai16Rng_ALOTurretFrontZoneSlowThres[0], 1230, 9},
    { &gDb_ctSetNvParamRailWorkSafetyC0.tInf_ALOArrowLowerZoneThres, (TVoid*)&gDb_tNvParamRailWorkSafetyC0.i16ALOArrowLowerZoneThres, (TVoid*)&gDb_ctSetNvParamRailWorkSafetyC0.i16Def_ALOArrowLowerZoneThres, (TVoid*)&gDb_ctSetNvParamRailWorkSafetyC0.ai16Rng_ALOArrowLowerZoneThres[0], 1232, 10},
    { &gDb_ctSetNvParamRailWorkSafetyC0.tInf_ALOArrowLowerZoneHyst, (TVoid*)&gDb_tNvParamRailWorkSafetyC0.i16ALOArrowLowerZoneHyst, (TVoid*)&gDb_ctSetNvParamRailWorkSafetyC0.i16Def_ALOArrowLowerZoneHyst, (TVoid*)&gDb_ctSetNvParamRailWorkSafetyC0.ai16Rng_ALOArrowLowerZoneHyst[0], 1234, 11},
    { &gDb_ctSetNvParamRailWorkSafetyC0.tInf_ALOArrowLowerZoneSlowThres, (TVoid*)&gDb_tNvParamRailWorkSafetyC0.i16ALOArrowLowerZoneSlowThres, (TVoid*)&gDb_ctSetNvParamRailWorkSafetyC0.i16Def_ALOArrowLowerZoneSlowThres, (TVoid*)&gDb_ctSetNvParamRailWorkSafetyC0.ai16Rng_ALOArrowLowerZoneSlowThres[0], 1236, 12},
    { &gDb_ctSetNvParamRailWorkSafetyC0.tInf_ALOTurretRearEndStopThres, (TVoid*)&gDb_tNvParamRailWorkSafetyC0.i16ALOTurretRearEndStopThres, (TVoid*)&gDb_ctSetNvParamRailWorkSafetyC0.i16Def_ALOTurretRearEndStopThres, (TVoid*)&gDb_ctSetNvParamRailWorkSafetyC0.ai16Rng_ALOTurretRearEndStopThres[0], 1238, 13},
    { &gDb_ctSetNvParamRailWorkSafetyC0.tInf_ALOTurretRearEndStopHyst, (TVoid*)&gDb_tNvParamRailWorkSafetyC0.i16ALOTurretRearEndStopHyst, (TVoid*)&gDb_ctSetNvParamRailWorkSafetyC0.i16Def_ALOTurretRearEndStopHyst, (TVoid*)&gDb_ctSetNvParamRailWorkSafetyC0.ai16Rng_ALOTurretRearEndStopHyst[0], 1240, 14},
    { &gDb_ctSetNvParamRailWorkSafetyC0.tInf_ALOTurretRearEndStopSlowThres, (TVoid*)&gDb_tNvParamRailWorkSafetyC0.i16ALOTurretRearEndStopSlowThres, (TVoid*)&gDb_ctSetNvParamRailWorkSafetyC0.i16Def_ALOTurretRearEndStopSlowThres, (TVoid*)&gDb_ctSetNvParamRailWorkSafetyC0.ai16Rng_ALOTurretRearEndStopSlowThres[0], 1242, 15},
    { &gDb_ctSetNvParamRailWorkSafetyC0.tInf_ALOTurretFrontEndStopThres, (TVoid*)&gDb_tNvParamRailWorkSafetyC0.i16ALOTurretFrontEndStopThres, (TVoid*)&gDb_ctSetNvParamRailWorkSafetyC0.i16Def_ALOTurretFrontEndStopThres, (TVoid*)&gDb_ctSetNvParamRailWorkSafetyC0.ai16Rng_ALOTurretFrontEndStopThres[0], 1244, 16},
    { &gDb_ctSetNvParamRailWorkSafetyC0.tInf_ALOTurretFrontEndStopHyst, (TVoid*)&gDb_tNvParamRailWorkSafetyC0.i16ALOTurretFrontEndStopHyst, (TVoid*)&gDb_ctSetNvParamRailWorkSafetyC0.i16Def_ALOTurretFrontEndStopHyst, (TVoid*)&gDb_ctSetNvParamRailWorkSafetyC0.ai16Rng_ALOTurretFrontEndStopHyst[0], 1246, 17},
    { &gDb_ctSetNvParamRailWorkSafetyC0.tInf_ALOTurretFrontEndStopSlowThres, (TVoid*)&gDb_tNvParamRailWorkSafetyC0.i16ALOTurretFrontEndStopSlowThres, (TVoid*)&gDb_ctSetNvParamRailWorkSafetyC0.i16Def_ALOTurretFrontEndStopSlowThres, (TVoid*)&gDb_ctSetNvParamRailWorkSafetyC0.ai16Rng_ALOTurretFrontEndStopSlowThres[0], 1248, 18},
    { &gDb_ctSetNvParamRailWorkSafetyC0.tInf_ALOTurretRearZoneStopThres, (TVoid*)&gDb_tNvParamRailWorkSafetyC0.i16ALOTurretRearZoneStopThres, (TVoid*)&gDb_ctSetNvParamRailWorkSafetyC0.i16Def_ALOTurretRearZoneStopThres, (TVoid*)&gDb_ctSetNvParamRailWorkSafetyC0.ai16Rng_ALOTurretRearZoneStopThres[0], 1250, 19},
    { &gDb_ctSetNvParamRailWorkSafetyC0.tInf_ALOTurretRearZoneStopHyst, (TVoid*)&gDb_tNvParamRailWorkSafetyC0.i16ALOTurretRearZoneStopHyst, (TVoid*)&gDb_ctSetNvParamRailWorkSafetyC0.i16Def_ALOTurretRearZoneStopHyst, (TVoid*)&gDb_ctSetNvParamRailWorkSafetyC0.ai16Rng_ALOTurretRearZoneStopHyst[0], 1252, 20},
    { &gDb_ctSetNvParamRailWorkSafetyC0.tInf_ALOTurretFrontZoneStopThres, (TVoid*)&gDb_tNvParamRailWorkSafetyC0.i16ALOTurretFrontZoneStopThres, (TVoid*)&gDb_ctSetNvParamRailWorkSafetyC0.i16Def_ALOTurretFrontZoneStopThres, (TVoid*)&gDb_ctSetNvParamRailWorkSafetyC0.ai16Rng_ALOTurretFrontZoneStopThres[0], 1254, 21},
    { &gDb_ctSetNvParamRailWorkSafetyC0.tInf_ALOTurretFrontZoneStopHyst, (TVoid*)&gDb_tNvParamRailWorkSafetyC0.i16ALOTurretFrontZoneStopHyst, (TVoid*)&gDb_ctSetNvParamRailWorkSafetyC0.i16Def_ALOTurretFrontZoneStopHyst, (TVoid*)&gDb_ctSetNvParamRailWorkSafetyC0.ai16Rng_ALOTurretFrontZoneStopHyst[0], 1256, 22},
    { &gDb_ctSetNvParamRailWorkSafetyC0.tInf_ALOArrowLowerZoneStopThres, (TVoid*)&gDb_tNvParamRailWorkSafetyC0.i16ALOArrowLowerZoneStopThres, (TVoid*)&gDb_ctSetNvParamRailWorkSafetyC0.i16Def_ALOArrowLowerZoneStopThres, (TVoid*)&gDb_ctSetNvParamRailWorkSafetyC0.ai16Rng_ALOArrowLowerZoneStopThres[0], 1258, 23},
    { &gDb_ctSetNvParamRailWorkSafetyC0.tInf_ALOArrowLowerZoneStopHyst, (TVoid*)&gDb_tNvParamRailWorkSafetyC0.i16ALOArrowLowerZoneStopHyst, (TVoid*)&gDb_ctSetNvParamRailWorkSafetyC0.i16Def_ALOArrowLowerZoneStopHyst, (TVoid*)&gDb_ctSetNvParamRailWorkSafetyC0.ai16Rng_ALOArrowLowerZoneStopHyst[0], 1260, 24}
};

const TDbVarTabRam gDb_catVarTabRamRailWorkSafetyC0[33] =
{    //!< *cptInf *vpVal *cvpDataDef 
    { &gDb_ctSetRamRailWorkSafetyC0.tInf_RailWorkMode, (TVoid*)&gDb_tRamRailWorkSafetyC0.eRailWorkMode, (TVoid*)&gDb_ctSetRamRailWorkSafetyC0.eDef_RailWorkMode, (TVoid*)&gDb_ctSetRamRailWorkSafetyC0.aeRng_RailWorkMode[0]},
    { &gDb_ctSetRamRailWorkSafetyC0.tInf_WrongTurretAbutBilateralMode, (TVoid*)&gDb_tRamRailWorkSafetyC0.boWrongTurretAbutBilateralMode, (TVoid*)&gDb_ctSetRamRailWorkSafetyC0.boDef_WrongTurretAbutBilateralMode, (TVoid*)&gDb_ctSetRamRailWorkSafetyC0.aboRng_WrongTurretAbutBilateralMode[0]},
    { &gDb_ctSetRamRailWorkSafetyC0.tInf_WrongTurretAbutMultilaneMode, (TVoid*)&gDb_tRamRailWorkSafetyC0.boWrongTurretAbutMultilaneMode, (TVoid*)&gDb_ctSetRamRailWorkSafetyC0.boDef_WrongTurretAbutMultilaneMode, (TVoid*)&gDb_ctSetRamRailWorkSafetyC0.aboRng_WrongTurretAbutMultilaneMode[0]},
    { &gDb_ctSetRamRailWorkSafetyC0.tInf_WrongTurretAbutALOMode, (TVoid*)&gDb_tRamRailWorkSafetyC0.boWrongTurretAbutALOMode, (TVoid*)&gDb_ctSetRamRailWorkSafetyC0.boDef_WrongTurretAbutALOMode, (TVoid*)&gDb_ctSetRamRailWorkSafetyC0.aboRng_WrongTurretAbutALOMode[0]},
    { &gDb_ctSetRamRailWorkSafetyC0.tInf_WrongBasketAbutBilateralMode, (TVoid*)&gDb_tRamRailWorkSafetyC0.boWrongBasketAbutBilateralMode, (TVoid*)&gDb_ctSetRamRailWorkSafetyC0.boDef_WrongBasketAbutBilateralMode, (TVoid*)&gDb_ctSetRamRailWorkSafetyC0.aboRng_WrongBasketAbutBilateralMode[0]},
    { &gDb_ctSetRamRailWorkSafetyC0.tInf_WrongBasketAbutMultilaneMode, (TVoid*)&gDb_tRamRailWorkSafetyC0.boWrongBasketAbutMultilaneMode, (TVoid*)&gDb_ctSetRamRailWorkSafetyC0.boDef_WrongBasketAbutMultilaneMode, (TVoid*)&gDb_ctSetRamRailWorkSafetyC0.aboRng_WrongBasketAbutMultilaneMode[0]},
    { &gDb_ctSetRamRailWorkSafetyC0.tInf_WrongBasketAbutALOMode, (TVoid*)&gDb_tRamRailWorkSafetyC0.boWrongBasketAbutALOMode, (TVoid*)&gDb_ctSetRamRailWorkSafetyC0.boDef_WrongBasketAbutALOMode, (TVoid*)&gDb_ctSetRamRailWorkSafetyC0.aboRng_WrongBasketAbutALOMode[0]},
    { &gDb_ctSetRamRailWorkSafetyC0.tInf_WrongAbutments, (TVoid*)&gDb_tRamRailWorkSafetyC0.boWrongAbutments, (TVoid*)&gDb_ctSetRamRailWorkSafetyC0.boDef_WrongAbutments, (TVoid*)&gDb_ctSetRamRailWorkSafetyC0.aboRng_WrongAbutments[0]},
    { &gDb_ctSetRamRailWorkSafetyC0.tInf_WrongTurretPosMultilaneMode, (TVoid*)&gDb_tRamRailWorkSafetyC0.boWrongTurretPosMultilaneMode, (TVoid*)&gDb_ctSetRamRailWorkSafetyC0.boDef_WrongTurretPosMultilaneMode, (TVoid*)&gDb_ctSetRamRailWorkSafetyC0.aboRng_WrongTurretPosMultilaneMode[0]},
    { &gDb_ctSetRamRailWorkSafetyC0.tInf_WrongBasketPosMultilaneMode, (TVoid*)&gDb_tRamRailWorkSafetyC0.boWrongBasketPosMultilaneMode, (TVoid*)&gDb_ctSetRamRailWorkSafetyC0.boDef_WrongBasketPosMultilaneMode, (TVoid*)&gDb_ctSetRamRailWorkSafetyC0.aboRng_WrongBasketPosMultilaneMode[0]},
    { &gDb_ctSetRamRailWorkSafetyC0.tInf_WrongTurretPosALOMode, (TVoid*)&gDb_tRamRailWorkSafetyC0.boWrongTurretPosALOMode, (TVoid*)&gDb_ctSetRamRailWorkSafetyC0.boDef_WrongTurretPosALOMode, (TVoid*)&gDb_ctSetRamRailWorkSafetyC0.aboRng_WrongTurretPosALOMode[0]},
    { &gDb_ctSetRamRailWorkSafetyC0.tInf_WrongPosition, (TVoid*)&gDb_tRamRailWorkSafetyC0.boWrongPosition, (TVoid*)&gDb_ctSetRamRailWorkSafetyC0.boDef_WrongPosition, (TVoid*)&gDb_ctSetRamRailWorkSafetyC0.aboRng_WrongPosition[0]},
    { &gDb_ctSetRamRailWorkSafetyC0.tInf_ReduceSpeedRotTurretClockwise, (TVoid*)&gDb_tRamRailWorkSafetyC0.boReduceSpeedRotTurretClockwise, (TVoid*)&gDb_ctSetRamRailWorkSafetyC0.boDef_ReduceSpeedRotTurretClockwise, (TVoid*)&gDb_ctSetRamRailWorkSafetyC0.aboRng_ReduceSpeedRotTurretClockwise[0]},
    { &gDb_ctSetRamRailWorkSafetyC0.tInf_ReduceSpeedRotTurretCounterClock, (TVoid*)&gDb_tRamRailWorkSafetyC0.boReduceSpeedRotTurretCounterClock, (TVoid*)&gDb_ctSetRamRailWorkSafetyC0.boDef_ReduceSpeedRotTurretCounterClock, (TVoid*)&gDb_ctSetRamRailWorkSafetyC0.aboRng_ReduceSpeedRotTurretCounterClock[0]},
    { &gDb_ctSetRamRailWorkSafetyC0.tInf_ReduceSpeedArrowArmDown, (TVoid*)&gDb_tRamRailWorkSafetyC0.boReduceSpeedArrowArmDown, (TVoid*)&gDb_ctSetRamRailWorkSafetyC0.boDef_ReduceSpeedArrowArmDown, (TVoid*)&gDb_ctSetRamRailWorkSafetyC0.aboRng_ReduceSpeedArrowArmDown[0]},
    { &gDb_ctSetRamRailWorkSafetyC0.tInf_StopRotTurretClockwise, (TVoid*)&gDb_tRamRailWorkSafetyC0.boStopRotTurretClockwise, (TVoid*)&gDb_ctSetRamRailWorkSafetyC0.boDef_StopRotTurretClockwise, (TVoid*)&gDb_ctSetRamRailWorkSafetyC0.aboRng_StopRotTurretClockwise[0]},
    { &gDb_ctSetRamRailWorkSafetyC0.tInf_StopRotTurretCounterClockwise, (TVoid*)&gDb_tRamRailWorkSafetyC0.boStopRotTurretCounterClockwise, (TVoid*)&gDb_ctSetRamRailWorkSafetyC0.boDef_StopRotTurretCounterClockwise, (TVoid*)&gDb_ctSetRamRailWorkSafetyC0.aboRng_StopRotTurretCounterClockwise[0]},
    { &gDb_ctSetRamRailWorkSafetyC0.tInf_StopRotBasketClockwise, (TVoid*)&gDb_tRamRailWorkSafetyC0.boStopRotBasketClockwise, (TVoid*)&gDb_ctSetRamRailWorkSafetyC0.boDef_StopRotBasketClockwise, (TVoid*)&gDb_ctSetRamRailWorkSafetyC0.aboRng_StopRotBasketClockwise[0]},
    { &gDb_ctSetRamRailWorkSafetyC0.tInf_StopRotBasketCounterClockwise, (TVoid*)&gDb_tRamRailWorkSafetyC0.boStopRotBasketCounterClockwise, (TVoid*)&gDb_ctSetRamRailWorkSafetyC0.boDef_StopRotBasketCounterClockwise, (TVoid*)&gDb_ctSetRamRailWorkSafetyC0.aboRng_StopRotBasketCounterClockwise[0]},
    { &gDb_ctSetRamRailWorkSafetyC0.tInf_StopArrowArmDown, (TVoid*)&gDb_tRamRailWorkSafetyC0.boStopArrowArmDown, (TVoid*)&gDb_ctSetRamRailWorkSafetyC0.boDef_StopArrowArmDown, (TVoid*)&gDb_ctSetRamRailWorkSafetyC0.aboRng_StopArrowArmDown[0]},
    { &gDb_ctSetRamRailWorkSafetyC0.tInf_StopTelescopeOut, (TVoid*)&gDb_tRamRailWorkSafetyC0.boStopTelescopeOut, (TVoid*)&gDb_ctSetRamRailWorkSafetyC0.boDef_StopTelescopeOut, (TVoid*)&gDb_ctSetRamRailWorkSafetyC0.aboRng_StopTelescopeOut[0]},
    { &gDb_ctSetRamRailWorkSafetyC0.tInf_TurretInRearZone, (TVoid*)&gDb_tRamRailWorkSafetyC0.boTurretInRearZone, (TVoid*)&gDb_ctSetRamRailWorkSafetyC0.boDef_TurretInRearZone, (TVoid*)&gDb_ctSetRamRailWorkSafetyC0.aboRng_TurretInRearZone[0]},
    { &gDb_ctSetRamRailWorkSafetyC0.tInf_TurretInFrontZone, (TVoid*)&gDb_tRamRailWorkSafetyC0.boTurretInFrontZone, (TVoid*)&gDb_ctSetRamRailWorkSafetyC0.boDef_TurretInFrontZone, (TVoid*)&gDb_ctSetRamRailWorkSafetyC0.aboRng_TurretInFrontZone[0]},
    { &gDb_ctSetRamRailWorkSafetyC0.tInf_ArrowArmInLowerZone, (TVoid*)&gDb_tRamRailWorkSafetyC0.boArrowArmInLowerZone, (TVoid*)&gDb_ctSetRamRailWorkSafetyC0.boDef_ArrowArmInLowerZone, (TVoid*)&gDb_ctSetRamRailWorkSafetyC0.aboRng_ArrowArmInLowerZone[0]},
    { &gDb_ctSetRamRailWorkSafetyC0.tInf_TestFranceConfig, (TVoid*)&gDb_tRamRailWorkSafetyC0.boTestFranceConfig, (TVoid*)&gDb_ctSetRamRailWorkSafetyC0.boDef_TestFranceConfig, (TVoid*)&gDb_ctSetRamRailWorkSafetyC0.aboRng_TestFranceConfig[0]},
    { &gDb_ctSetRamRailWorkSafetyC0.tInf_TestAbutementBasketTrackSide, (TVoid*)&gDb_tRamRailWorkSafetyC0.boTestAbutementBasketTrackSide, (TVoid*)&gDb_ctSetRamRailWorkSafetyC0.boDef_TestAbutementBasketTrackSide, (TVoid*)&gDb_ctSetRamRailWorkSafetyC0.aboRng_TestAbutementBasketTrackSide[0]},
    { &gDb_ctSetRamRailWorkSafetyC0.tInf_TestAbutementBasketCenteredSide, (TVoid*)&gDb_tRamRailWorkSafetyC0.boTestAbutementBasketCenteredSide, (TVoid*)&gDb_ctSetRamRailWorkSafetyC0.boDef_TestAbutementBasketCenteredSide, (TVoid*)&gDb_ctSetRamRailWorkSafetyC0.aboRng_TestAbutementBasketCenteredSide[0]},
    { &gDb_ctSetRamRailWorkSafetyC0.tInf_TestBasketLeftSideSensor, (TVoid*)&gDb_tRamRailWorkSafetyC0.boTestBasketLeftSideSensor, (TVoid*)&gDb_ctSetRamRailWorkSafetyC0.boDef_TestBasketLeftSideSensor, (TVoid*)&gDb_ctSetRamRailWorkSafetyC0.aboRng_TestBasketLeftSideSensor[0]},
    { &gDb_ctSetRamRailWorkSafetyC0.tInf_TestBasketRightSideSensor, (TVoid*)&gDb_tRamRailWorkSafetyC0.boTestBasketRightSideSensor, (TVoid*)&gDb_ctSetRamRailWorkSafetyC0.boDef_TestBasketRightSideSensor, (TVoid*)&gDb_ctSetRamRailWorkSafetyC0.aboRng_TestBasketRightSideSensor[0]},
    { &gDb_ctSetRamRailWorkSafetyC0.tInf_TestTelescopInSensor, (TVoid*)&gDb_tRamRailWorkSafetyC0.boTestTelescopInSensor, (TVoid*)&gDb_ctSetRamRailWorkSafetyC0.boDef_TestTelescopInSensor, (TVoid*)&gDb_ctSetRamRailWorkSafetyC0.aboRng_TestTelescopInSensor[0]},
    { &gDb_ctSetRamRailWorkSafetyC0.tInf_TestTurretAngularPosition, (TVoid*)&gDb_tRamRailWorkSafetyC0.i16TestTurretAngularPosition, (TVoid*)&gDb_ctSetRamRailWorkSafetyC0.i16Def_TestTurretAngularPosition, (TVoid*)&gDb_ctSetRamRailWorkSafetyC0.ai16Rng_TestTurretAngularPosition[0]},
    { &gDb_ctSetRamRailWorkSafetyC0.tInf_TestArrowArmAngularPosition, (TVoid*)&gDb_tRamRailWorkSafetyC0.i16TestArrowArmAngularPosition, (TVoid*)&gDb_ctSetRamRailWorkSafetyC0.i16Def_TestArrowArmAngularPosition, (TVoid*)&gDb_ctSetRamRailWorkSafetyC0.ai16Rng_TestArrowArmAngularPosition[0]},
    { &gDb_ctSetRamRailWorkSafetyC0.tInf_AbutmentWorkMode, (TVoid*)&gDb_tRamRailWorkSafetyC0.eAbutmentWorkMode, (TVoid*)&gDb_ctSetRamRailWorkSafetyC0.eDef_AbutmentWorkMode, (TVoid*)&gDb_ctSetRamRailWorkSafetyC0.aeRng_AbutmentWorkMode[0]}
};

const TDbVarTabRam gDb_catVarTabRamTransportPosC0[3] =
{    //!< *cptInf *vpVal *cvpDataDef 
    { &gDb_ctSetRamTransportPosC0.tInf_DeltaOffRailTransportZone, (TVoid*)&gDb_tRamTransportPosC0.boDeltaOffRailTransportZone, (TVoid*)&gDb_ctSetRamTransportPosC0.boDef_DeltaOffRailTransportZone, (TVoid*)&gDb_ctSetRamTransportPosC0.aboRng_DeltaOffRailTransportZone[0]},
    { &gDb_ctSetRamTransportPosC0.tInf_ArrowOffRailTransportZone, (TVoid*)&gDb_tRamTransportPosC0.boArrowOffRailTransportZone, (TVoid*)&gDb_ctSetRamTransportPosC0.boDef_ArrowOffRailTransportZone, (TVoid*)&gDb_ctSetRamTransportPosC0.aboRng_ArrowOffRailTransportZone[0]},
    { &gDb_ctSetRamTransportPosC0.tInf_TransportPosition, (TVoid*)&gDb_tRamTransportPosC0.eTransportPosition, (TVoid*)&gDb_ctSetRamTransportPosC0.eDef_TransportPosition, (TVoid*)&gDb_ctSetRamTransportPosC0.aeRng_TransportPosition[0]}
};

const TDbVarTabNvm gDb_catVarTabNvParamTransportPosC0[5] =
{    //!< *cptInf *vpVal *cvpDataRang *cvpDataDef cu16Adr cu16ValuePos
    { &gDb_ctSetNvParamTransportPosC0.tInf_DeltaArmTres, (TVoid*)&gDb_tNvParamTransportPosC0.i16DeltaArmTres, (TVoid*)&gDb_ctSetNvParamTransportPosC0.i16Def_DeltaArmTres, (TVoid*)&gDb_ctSetNvParamTransportPosC0.ai16Rng_DeltaArmTres[0], 1412, 0},
    { &gDb_ctSetNvParamTransportPosC0.tInf_DeltaArmHyst, (TVoid*)&gDb_tNvParamTransportPosC0.i16DeltaArmHyst, (TVoid*)&gDb_ctSetNvParamTransportPosC0.i16Def_DeltaArmHyst, (TVoid*)&gDb_ctSetNvParamTransportPosC0.ai16Rng_DeltaArmHyst[0], 1414, 1},
    { &gDb_ctSetNvParamTransportPosC0.tInf_ArrowArmThres, (TVoid*)&gDb_tNvParamTransportPosC0.i16ArrowArmThres, (TVoid*)&gDb_ctSetNvParamTransportPosC0.i16Def_ArrowArmThres, (TVoid*)&gDb_ctSetNvParamTransportPosC0.ai16Rng_ArrowArmThres[0], 1416, 2},
    { &gDb_ctSetNvParamTransportPosC0.tInf_ArrowArmHyst, (TVoid*)&gDb_tNvParamTransportPosC0.i16ArrowArmHyst, (TVoid*)&gDb_ctSetNvParamTransportPosC0.i16Def_ArrowArmHyst, (TVoid*)&gDb_ctSetNvParamTransportPosC0.ai16Rng_ArrowArmHyst[0], 1418, 3},
    { &gDb_ctSetNvParamTransportPosC0.tInf_TurretAngleThres, (TVoid*)&gDb_tNvParamTransportPosC0.i16TurretAngleThres, (TVoid*)&gDb_ctSetNvParamTransportPosC0.i16Def_TurretAngleThres, (TVoid*)&gDb_ctSetNvParamTransportPosC0.ai16Rng_TurretAngleThres[0], 1420, 4}
};

const TDbVarTabRam gDb_catVarTabRamBreakInBrakeC0[18] =
{    //!< *cptInf *vpVal *cvpDataDef 
    { &gDb_ctSetRamBreakInBrakeC0.tInf_BreakInBrakeOffRailMode, (TVoid*)&gDb_tRamBreakInBrakeC0.boBreakInBrakeOffRailMode, (TVoid*)&gDb_ctSetRamBreakInBrakeC0.boDef_BreakInBrakeOffRailMode, (TVoid*)&gDb_ctSetRamBreakInBrakeC0.aboRng_BreakInBrakeOffRailMode[0]},
    { &gDb_ctSetRamBreakInBrakeC0.tInf_ForceOsciServiceBrake, (TVoid*)&gDb_tRamBreakInBrakeC0.boForceOsciServiceBrake, (TVoid*)&gDb_ctSetRamBreakInBrakeC0.boDef_ForceOsciServiceBrake, (TVoid*)&gDb_ctSetRamBreakInBrakeC0.aboRng_ForceOsciServiceBrake[0]},
    { &gDb_ctSetRamBreakInBrakeC0.tInf_ForceFixeServiceBrake, (TVoid*)&gDb_tRamBreakInBrakeC0.boForceFixeServiceBrake, (TVoid*)&gDb_ctSetRamBreakInBrakeC0.boDef_ForceFixeServiceBrake, (TVoid*)&gDb_ctSetRamBreakInBrakeC0.aboRng_ForceFixeServiceBrake[0]},
    { &gDb_ctSetRamBreakInBrakeC0.tInf_ForceOsciParkBrake, (TVoid*)&gDb_tRamBreakInBrakeC0.boForceOsciParkBrake, (TVoid*)&gDb_ctSetRamBreakInBrakeC0.boDef_ForceOsciParkBrake, (TVoid*)&gDb_ctSetRamBreakInBrakeC0.aboRng_ForceOsciParkBrake[0]},
    { &gDb_ctSetRamBreakInBrakeC0.tInf_ForceFixeParkBrake, (TVoid*)&gDb_tRamBreakInBrakeC0.boForceFixeParkBrake, (TVoid*)&gDb_ctSetRamBreakInBrakeC0.boDef_ForceFixeParkBrake, (TVoid*)&gDb_ctSetRamBreakInBrakeC0.aboRng_ForceFixeParkBrake[0]},
    { &gDb_ctSetRamBreakInBrakeC0.tInf_StopMovementByBreakInBrake, (TVoid*)&gDb_tRamBreakInBrakeC0.boStopMovementByBreakInBrake, (TVoid*)&gDb_ctSetRamBreakInBrakeC0.boDef_StopMovementByBreakInBrake, (TVoid*)&gDb_ctSetRamBreakInBrakeC0.aboRng_StopMovementByBreakInBrake[0]},
    { &gDb_ctSetRamBreakInBrakeC0.tInf_IncoherencePosAxleAndTestMode, (TVoid*)&gDb_tRamBreakInBrakeC0.boIncoherencePosAxleAndTestMode, (TVoid*)&gDb_ctSetRamBreakInBrakeC0.boDef_IncoherencePosAxleAndTestMode, (TVoid*)&gDb_ctSetRamBreakInBrakeC0.aboRng_IncoherencePosAxleAndTestMode[0]},
    { &gDb_ctSetRamBreakInBrakeC0.tInf_AdvancementPeriod, (TVoid*)&gDb_tRamBreakInBrakeC0.u16AdvancementPeriod, (TVoid*)&gDb_ctSetRamBreakInBrakeC0.u16Def_AdvancementPeriod, (TVoid*)&gDb_ctSetRamBreakInBrakeC0.au16Rng_AdvancementPeriod[0]},
    { &gDb_ctSetRamBreakInBrakeC0.tInf_BreakInBrakeRunning, (TVoid*)&gDb_tRamBreakInBrakeC0.boBreakInBrakeRunning, (TVoid*)&gDb_ctSetRamBreakInBrakeC0.boDef_BreakInBrakeRunning, (TVoid*)&gDb_ctSetRamBreakInBrakeC0.aboRng_BreakInBrakeRunning[0]},
    { &gDb_ctSetRamBreakInBrakeC0.tInf_SimuOsciServiceBrakeSelect, (TVoid*)&gDb_tRamBreakInBrakeC0.boSimuOsciServiceBrakeSelect, (TVoid*)&gDb_ctSetRamBreakInBrakeC0.boDef_SimuOsciServiceBrakeSelect, (TVoid*)&gDb_ctSetRamBreakInBrakeC0.aboRng_SimuOsciServiceBrakeSelect[0]},
    { &gDb_ctSetRamBreakInBrakeC0.tInf_SimuFixeServiceBrakeSelect, (TVoid*)&gDb_tRamBreakInBrakeC0.boSimuFixeServiceBrakeSelect, (TVoid*)&gDb_ctSetRamBreakInBrakeC0.boDef_SimuFixeServiceBrakeSelect, (TVoid*)&gDb_ctSetRamBreakInBrakeC0.aboRng_SimuFixeServiceBrakeSelect[0]},
    { &gDb_ctSetRamBreakInBrakeC0.tInf_Simu2ServiceBrakesSelect, (TVoid*)&gDb_tRamBreakInBrakeC0.boSimu2ServiceBrakesSelect, (TVoid*)&gDb_ctSetRamBreakInBrakeC0.boDef_Simu2ServiceBrakesSelect, (TVoid*)&gDb_ctSetRamBreakInBrakeC0.aboRng_Simu2ServiceBrakesSelect[0]},
    { &gDb_ctSetRamBreakInBrakeC0.tInf_AuthorizeTransRailByBreakInBrake, (TVoid*)&gDb_tRamBreakInBrakeC0.boAuthorizeTransRailByBreakInBrake, (TVoid*)&gDb_ctSetRamBreakInBrakeC0.boDef_AuthorizeTransRailByBreakInBrake, (TVoid*)&gDb_ctSetRamBreakInBrakeC0.aboRng_AuthorizeTransRailByBreakInBrake[0]},
    { &gDb_ctSetRamBreakInBrakeC0.tInf_ServiceBrakeSelected, (TVoid*)&gDb_tRamBreakInBrakeC0.eServiceBrakeSelected, (TVoid*)&gDb_ctSetRamBreakInBrakeC0.eDef_ServiceBrakeSelected, (TVoid*)&gDb_ctSetRamBreakInBrakeC0.aeRng_ServiceBrakeSelected[0]},
    { &gDb_ctSetRamBreakInBrakeC0.tInf_AdvancementPeriodMs10, (TVoid*)&gDb_tRamBreakInBrakeC0.u16AdvancementPeriodMs10, (TVoid*)&gDb_ctSetRamBreakInBrakeC0.u16Def_AdvancementPeriodMs10, (TVoid*)&gDb_ctSetRamBreakInBrakeC0.au16Rng_AdvancementPeriodMs10[0]},
    { &gDb_ctSetRamBreakInBrakeC0.tInf_OsciServiceBrakinBrakeOn, (TVoid*)&gDb_tRamBreakInBrakeC0.boOsciServiceBrakinBrakeOn, (TVoid*)&gDb_ctSetRamBreakInBrakeC0.boDef_OsciServiceBrakinBrakeOn, (TVoid*)&gDb_ctSetRamBreakInBrakeC0.aboRng_OsciServiceBrakinBrakeOn[0]},
    { &gDb_ctSetRamBreakInBrakeC0.tInf_FixeServiceBrakinBrakeOn, (TVoid*)&gDb_tRamBreakInBrakeC0.boFixeServiceBrakinBrakeOn, (TVoid*)&gDb_ctSetRamBreakInBrakeC0.boDef_FixeServiceBrakinBrakeOn, (TVoid*)&gDb_ctSetRamBreakInBrakeC0.aboRng_FixeServiceBrakinBrakeOn[0]},
    { &gDb_ctSetRamBreakInBrakeC0.tInf_BothServiceBrakinBrakeOn, (TVoid*)&gDb_tRamBreakInBrakeC0.boBothServiceBrakinBrakeOn, (TVoid*)&gDb_ctSetRamBreakInBrakeC0.boDef_BothServiceBrakinBrakeOn, (TVoid*)&gDb_ctSetRamBreakInBrakeC0.aboRng_BothServiceBrakinBrakeOn[0]}
};

const TDbVarTabRam gDb_catVarTabRamSelectControlPost[10] =
{    //!< *cptInf *vpVal *cvpDataDef 
    { &gDb_ctSetRamSelectControlPost.tInf_SelectedControlPost, (TVoid*)&gDb_tRamSelectControlPost.eSelectedControlPost, (TVoid*)&gDb_ctSetRamSelectControlPost.eDef_SelectedControlPost, (TVoid*)&gDb_ctSetRamSelectControlPost.aeRng_SelectedControlPost[0]},
    { &gDb_ctSetRamSelectControlPost.tInf_EnableBuzzer, (TVoid*)&gDb_tRamSelectControlPost.boEnableBuzzer, (TVoid*)&gDb_ctSetRamSelectControlPost.boDef_EnableBuzzer, (TVoid*)&gDb_ctSetRamSelectControlPost.aboRng_EnableBuzzer[0]},
    { &gDb_ctSetRamSelectControlPost.tInf_SlopeIsLow, (TVoid*)&gDb_tRamSelectControlPost.boSlopeIsLow, (TVoid*)&gDb_ctSetRamSelectControlPost.boDef_SlopeIsLow, (TVoid*)&gDb_ctSetRamSelectControlPost.aboRng_SlopeIsLow[0]},
    { &gDb_ctSetRamSelectControlPost.tInf_SlopeIsHigh, (TVoid*)&gDb_tRamSelectControlPost.boSlopeIsHigh, (TVoid*)&gDb_ctSetRamSelectControlPost.boDef_SlopeIsHigh, (TVoid*)&gDb_ctSetRamSelectControlPost.aboRng_SlopeIsHigh[0]},
    { &gDb_ctSetRamSelectControlPost.tInf_AllNacelleCommandsDisabled, (TVoid*)&gDb_tRamSelectControlPost.boAllNacelleCommandsDisabled, (TVoid*)&gDb_ctSetRamSelectControlPost.boDef_AllNacelleCommandsDisabled, (TVoid*)&gDb_ctSetRamSelectControlPost.aboRng_AllNacelleCommandsDisabled[0]},
    { &gDb_ctSetRamSelectControlPost.tInf_AllRadioCommandsDisabled, (TVoid*)&gDb_tRamSelectControlPost.boAllRadioCommandsDisabled, (TVoid*)&gDb_ctSetRamSelectControlPost.boDef_AllRadioCommandsDisabled, (TVoid*)&gDb_ctSetRamSelectControlPost.aboRng_AllRadioCommandsDisabled[0]},
    { &gDb_ctSetRamSelectControlPost.tInf_AllTurretCommandsDisabled, (TVoid*)&gDb_tRamSelectControlPost.boAllTurretCommandsDisabled, (TVoid*)&gDb_ctSetRamSelectControlPost.boDef_AllTurretCommandsDisabled, (TVoid*)&gDb_ctSetRamSelectControlPost.aboRng_AllTurretCommandsDisabled[0]},
    { &gDb_ctSetRamSelectControlPost.tInf_SimuSlope, (TVoid*)&gDb_tRamSelectControlPost.i16SimuSlope, (TVoid*)&gDb_ctSetRamSelectControlPost.i16Def_SimuSlope, (TVoid*)&gDb_ctSetRamSelectControlPost.ai16Rng_SimuSlope[0]},
    { &gDb_ctSetRamSelectControlPost.tInf_AllConsigneAdvancementDisabled, (TVoid*)&gDb_tRamSelectControlPost.boAllConsigneAdvancementDisabled, (TVoid*)&gDb_ctSetRamSelectControlPost.boDef_AllConsigneAdvancementDisabled, (TVoid*)&gDb_ctSetRamSelectControlPost.aboRng_AllConsigneAdvancementDisabled[0]},
    { &gDb_ctSetRamSelectControlPost.tInf_AuthorizedRadioElementsPosition, (TVoid*)&gDb_tRamSelectControlPost.boAuthorizedRadioElementsPosition, (TVoid*)&gDb_ctSetRamSelectControlPost.boDef_AuthorizedRadioElementsPosition, (TVoid*)&gDb_ctSetRamSelectControlPost.aboRng_AuthorizedRadioElementsPosition[0]}
};

const TDbVarTabNvm gDb_catVarTabNvParamSelectControlPost[5] =
{    //!< *cptInf *vpVal *cvpDataRang *cvpDataDef cu16Adr cu16ValuePos
    { &gDb_ctSetNvParamSelectControlPost.tInf_SlopeLowThresAbs, (TVoid*)&gDb_tNvParamSelectControlPost.i16SlopeLowThresAbs, (TVoid*)&gDb_ctSetNvParamSelectControlPost.i16Def_SlopeLowThresAbs, (TVoid*)&gDb_ctSetNvParamSelectControlPost.ai16Rng_SlopeLowThresAbs[0], 1612, 0},
    { &gDb_ctSetNvParamSelectControlPost.tInf_SlopeLowHystRel, (TVoid*)&gDb_tNvParamSelectControlPost.i16SlopeLowHystRel, (TVoid*)&gDb_ctSetNvParamSelectControlPost.i16Def_SlopeLowHystRel, (TVoid*)&gDb_ctSetNvParamSelectControlPost.ai16Rng_SlopeLowHystRel[0], 1614, 1},
    { &gDb_ctSetNvParamSelectControlPost.tInf_SlopeHighThresAbs, (TVoid*)&gDb_tNvParamSelectControlPost.i16SlopeHighThresAbs, (TVoid*)&gDb_ctSetNvParamSelectControlPost.i16Def_SlopeHighThresAbs, (TVoid*)&gDb_ctSetNvParamSelectControlPost.ai16Rng_SlopeHighThresAbs[0], 1616, 2},
    { &gDb_ctSetNvParamSelectControlPost.tInf_SlopeHighHystRel, (TVoid*)&gDb_tNvParamSelectControlPost.i16SlopeHighHystRel, (TVoid*)&gDb_ctSetNvParamSelectControlPost.i16Def_SlopeHighHystRel, (TVoid*)&gDb_ctSetNvParamSelectControlPost.ai16Rng_SlopeHighHystRel[0], 1618, 3},
    { &gDb_ctSetNvParamSelectControlPost.tInf_SlopeCrawlerMaxTres, (TVoid*)&gDb_tNvParamSelectControlPost.u16SlopeCrawlerMaxTres, (TVoid*)&gDb_ctSetNvParamSelectControlPost.u16Def_SlopeCrawlerMaxTres, (TVoid*)&gDb_ctSetNvParamSelectControlPost.au16Rng_SlopeCrawlerMaxTres[0], 1620, 4}
};

const TDbVarTabRam gDb_catVarTabRamEvision4C0[26] =
{    //!< *cptInf *vpVal *cvpDataDef 
    { &gDb_ctSetRamEvision4C0.tInf_LifeByte, (TVoid*)&gDb_tRamEvision4C0.u8LifeByte, (TVoid*)&gDb_ctSetRamEvision4C0.u8Def_LifeByte, (TVoid*)&gDb_ctSetRamEvision4C0.au8Rng_LifeByte[0]},
    { &gDb_ctSetRamEvision4C0.tInf_gDelta_Arm_Move_Up, (TVoid*)&gDb_tRamEvision4C0.bogDelta_Arm_Move_Up, (TVoid*)&gDb_ctSetRamEvision4C0.boDef_gDelta_Arm_Move_Up, (TVoid*)&gDb_ctSetRamEvision4C0.aboRng_gDelta_Arm_Move_Up[0]},
    { &gDb_ctSetRamEvision4C0.tInf_gDelta_Arm_Move_Down, (TVoid*)&gDb_tRamEvision4C0.bogDelta_Arm_Move_Down, (TVoid*)&gDb_ctSetRamEvision4C0.boDef_gDelta_Arm_Move_Down, (TVoid*)&gDb_ctSetRamEvision4C0.aboRng_gDelta_Arm_Move_Down[0]},
    { &gDb_ctSetRamEvision4C0.tInf_gArrow_Move_Up, (TVoid*)&gDb_tRamEvision4C0.bogArrow_Move_Up, (TVoid*)&gDb_ctSetRamEvision4C0.boDef_gArrow_Move_Up, (TVoid*)&gDb_ctSetRamEvision4C0.aboRng_gArrow_Move_Up[0]},
    { &gDb_ctSetRamEvision4C0.tInf_gArrow_Move_Down, (TVoid*)&gDb_tRamEvision4C0.bogArrow_Move_Down, (TVoid*)&gDb_ctSetRamEvision4C0.boDef_gArrow_Move_Down, (TVoid*)&gDb_ctSetRamEvision4C0.aboRng_gArrow_Move_Down[0]},
    { &gDb_ctSetRamEvision4C0.tInf_gPendular_Move_Up, (TVoid*)&gDb_tRamEvision4C0.bogPendular_Move_Up, (TVoid*)&gDb_ctSetRamEvision4C0.boDef_gPendular_Move_Up, (TVoid*)&gDb_ctSetRamEvision4C0.aboRng_gPendular_Move_Up[0]},
    { &gDb_ctSetRamEvision4C0.tInf_gPendular_Move_Down, (TVoid*)&gDb_tRamEvision4C0.bogPendular_Move_Down, (TVoid*)&gDb_ctSetRamEvision4C0.boDef_gPendular_Move_Down, (TVoid*)&gDb_ctSetRamEvision4C0.aboRng_gPendular_Move_Down[0]},
    { &gDb_ctSetRamEvision4C0.tInf_gTelescope_Move_Out, (TVoid*)&gDb_tRamEvision4C0.bogTelescope_Move_Out, (TVoid*)&gDb_ctSetRamEvision4C0.boDef_gTelescope_Move_Out, (TVoid*)&gDb_ctSetRamEvision4C0.aboRng_gTelescope_Move_Out[0]},
    { &gDb_ctSetRamEvision4C0.tInf_gTelescope_Move_In, (TVoid*)&gDb_tRamEvision4C0.bogTelescope_Move_In, (TVoid*)&gDb_ctSetRamEvision4C0.boDef_gTelescope_Move_In, (TVoid*)&gDb_ctSetRamEvision4C0.aboRng_gTelescope_Move_In[0]},
    { &gDb_ctSetRamEvision4C0.tInf_gBasket_Inclinaison_Move_Up, (TVoid*)&gDb_tRamEvision4C0.bogBasket_Inclinaison_Move_Up, (TVoid*)&gDb_ctSetRamEvision4C0.boDef_gBasket_Inclinaison_Move_Up, (TVoid*)&gDb_ctSetRamEvision4C0.aboRng_gBasket_Inclinaison_Move_Up[0]},
    { &gDb_ctSetRamEvision4C0.tInf_gBasket_Inclinaison_Move_Down, (TVoid*)&gDb_tRamEvision4C0.bogBasket_Inclinaison_Move_Down, (TVoid*)&gDb_ctSetRamEvision4C0.boDef_gBasket_Inclinaison_Move_Down, (TVoid*)&gDb_ctSetRamEvision4C0.aboRng_gBasket_Inclinaison_Move_Down[0]},
    { &gDb_ctSetRamEvision4C0.tInf_gTurret_Rotate_ClockWise, (TVoid*)&gDb_tRamEvision4C0.bogTurret_Rotate_ClockWise, (TVoid*)&gDb_ctSetRamEvision4C0.boDef_gTurret_Rotate_ClockWise, (TVoid*)&gDb_ctSetRamEvision4C0.aboRng_gTurret_Rotate_ClockWise[0]},
    { &gDb_ctSetRamEvision4C0.tInf_gTurret_Rotate_Counter_ClockWise, (TVoid*)&gDb_tRamEvision4C0.bogTurret_Rotate_Counter_ClockWise, (TVoid*)&gDb_ctSetRamEvision4C0.boDef_gTurret_Rotate_Counter_ClockWise, (TVoid*)&gDb_ctSetRamEvision4C0.aboRng_gTurret_Rotate_Counter_ClockWise[0]},
    { &gDb_ctSetRamEvision4C0.tInf_gBasket_Rotate_ClockWise, (TVoid*)&gDb_tRamEvision4C0.bogBasket_Rotate_ClockWise, (TVoid*)&gDb_ctSetRamEvision4C0.boDef_gBasket_Rotate_ClockWise, (TVoid*)&gDb_ctSetRamEvision4C0.aboRng_gBasket_Rotate_ClockWise[0]},
    { &gDb_ctSetRamEvision4C0.tInf_gBasket_Rotate_Counter_ClockWise, (TVoid*)&gDb_tRamEvision4C0.bogBasket_Rotate_Counter_ClockWise, (TVoid*)&gDb_ctSetRamEvision4C0.boDef_gBasket_Rotate_Counter_ClockWise, (TVoid*)&gDb_ctSetRamEvision4C0.aboRng_gBasket_Rotate_Counter_ClockWise[0]},
    { &gDb_ctSetRamEvision4C0.tInf_gKeyRpmSelect, (TVoid*)&gDb_tRamEvision4C0.bogKeyRpmSelect, (TVoid*)&gDb_ctSetRamEvision4C0.boDef_gKeyRpmSelect, (TVoid*)&gDb_ctSetRamEvision4C0.aboRng_gKeyRpmSelect[0]},
    { &gDb_ctSetRamEvision4C0.tInf_gKeyRpmOff, (TVoid*)&gDb_tRamEvision4C0.bogKeyRpmOff, (TVoid*)&gDb_ctSetRamEvision4C0.boDef_gKeyRpmOff, (TVoid*)&gDb_ctSetRamEvision4C0.aboRng_gKeyRpmOff[0]},
    { &gDb_ctSetRamEvision4C0.tInf_gForcingWhiteRaillight, (TVoid*)&gDb_tRamEvision4C0.bogForcingWhiteRaillight, (TVoid*)&gDb_ctSetRamEvision4C0.boDef_gForcingWhiteRaillight, (TVoid*)&gDb_ctSetRamEvision4C0.aboRng_gForcingWhiteRaillight[0]},
    { &gDb_ctSetRamEvision4C0.tInf_gForcingNeons, (TVoid*)&gDb_tRamEvision4C0.bogForcingNeons, (TVoid*)&gDb_ctSetRamEvision4C0.boDef_gForcingNeons, (TVoid*)&gDb_ctSetRamEvision4C0.aboRng_gForcingNeons[0]},
    { &gDb_ctSetRamEvision4C0.tInf_gKeyCalibMin, (TVoid*)&gDb_tRamEvision4C0.bogKeyCalibMin, (TVoid*)&gDb_ctSetRamEvision4C0.boDef_gKeyCalibMin, (TVoid*)&gDb_ctSetRamEvision4C0.aboRng_gKeyCalibMin[0]},
    { &gDb_ctSetRamEvision4C0.tInf_gKeyCalibMax, (TVoid*)&gDb_tRamEvision4C0.bogKeyCalibMax, (TVoid*)&gDb_ctSetRamEvision4C0.boDef_gKeyCalibMax, (TVoid*)&gDb_ctSetRamEvision4C0.aboRng_gKeyCalibMax[0]},
    { &gDb_ctSetRamEvision4C0.tInf_gKeyCalibValid, (TVoid*)&gDb_tRamEvision4C0.bogKeyCalibValid, (TVoid*)&gDb_ctSetRamEvision4C0.boDef_gKeyCalibValid, (TVoid*)&gDb_ctSetRamEvision4C0.aboRng_gKeyCalibValid[0]},
    { &gDb_ctSetRamEvision4C0.tInf_gElementChoice, (TVoid*)&gDb_tRamEvision4C0.u8gElementChoice, (TVoid*)&gDb_ctSetRamEvision4C0.u8Def_gElementChoice, (TVoid*)&gDb_ctSetRamEvision4C0.au8Rng_gElementChoice[0]},
    { &gDb_ctSetRamEvision4C0.tInf_gKeyCalibMax2, (TVoid*)&gDb_tRamEvision4C0.bogKeyCalibMax2, (TVoid*)&gDb_ctSetRamEvision4C0.boDef_gKeyCalibMax2, (TVoid*)&gDb_ctSetRamEvision4C0.aboRng_gKeyCalibMax2[0]},
    { &gDb_ctSetRamEvision4C0.tInf_gKeySlopeLgReset, (TVoid*)&gDb_tRamEvision4C0.bogKeySlopeLgReset, (TVoid*)&gDb_ctSetRamEvision4C0.boDef_gKeySlopeLgReset, (TVoid*)&gDb_ctSetRamEvision4C0.aboRng_gKeySlopeLgReset[0]},
    { &gDb_ctSetRamEvision4C0.tInf_gKeySlopeTrReset, (TVoid*)&gDb_tRamEvision4C0.bogKeySlopeTrReset, (TVoid*)&gDb_ctSetRamEvision4C0.boDef_gKeySlopeTrReset, (TVoid*)&gDb_ctSetRamEvision4C0.aboRng_gKeySlopeTrReset[0]}
};

const TDbVarTabNvm gDb_catVarTabNvParamAlarmC0[32] =
{    //!< *cptInf *vpVal *cvpDataRang *cvpDataDef cu16Adr cu16ValuePos
    { &gDb_ctSetNvParamAlarmC0.tInf_TempTrackOverFaultThres, (TVoid*)&gDb_tNvParamAlarmC0.u16TempTrackOverFaultThres, (TVoid*)&gDb_ctSetNvParamAlarmC0.u16Def_TempTrackOverFaultThres, (TVoid*)&gDb_ctSetNvParamAlarmC0.au16Rng_TempTrackOverFaultThres[0], 1812, 0},
    { &gDb_ctSetNvParamAlarmC0.tInf_TempRailOverFaultThres, (TVoid*)&gDb_tNvParamAlarmC0.u16TempRailOverFaultThres, (TVoid*)&gDb_ctSetNvParamAlarmC0.u16Def_TempRailOverFaultThres, (TVoid*)&gDb_ctSetNvParamAlarmC0.au16Rng_TempRailOverFaultThres[0], 1814, 1},
    { &gDb_ctSetNvParamAlarmC0.tInf_TempTrackOverAlarmThres, (TVoid*)&gDb_tNvParamAlarmC0.u16TempTrackOverAlarmThres, (TVoid*)&gDb_ctSetNvParamAlarmC0.u16Def_TempTrackOverAlarmThres, (TVoid*)&gDb_ctSetNvParamAlarmC0.au16Rng_TempTrackOverAlarmThres[0], 1816, 2},
    { &gDb_ctSetNvParamAlarmC0.tInf_TempRailOverAlarmThres, (TVoid*)&gDb_tNvParamAlarmC0.u16TempRailOverAlarmThres, (TVoid*)&gDb_ctSetNvParamAlarmC0.u16Def_TempRailOverAlarmThres, (TVoid*)&gDb_ctSetNvParamAlarmC0.au16Rng_TempRailOverAlarmThres[0], 1818, 3},
    { &gDb_ctSetNvParamAlarmC0.tInf_SpeedSensorsToleranceThres, (TVoid*)&gDb_tNvParamAlarmC0.u16SpeedSensorsToleranceThres, (TVoid*)&gDb_ctSetNvParamAlarmC0.u16Def_SpeedSensorsToleranceThres, (TVoid*)&gDb_ctSetNvParamAlarmC0.au16Rng_SpeedSensorsToleranceThres[0], 1820, 4},
    { &gDb_ctSetNvParamAlarmC0.tInf_SlopeLongToleranceThres, (TVoid*)&gDb_tNvParamAlarmC0.u16SlopeLongToleranceThres, (TVoid*)&gDb_ctSetNvParamAlarmC0.u16Def_SlopeLongToleranceThres, (TVoid*)&gDb_ctSetNvParamAlarmC0.au16Rng_SlopeLongToleranceThres[0], 1822, 5},
    { &gDb_ctSetNvParamAlarmC0.tInf_BlockOscillationAxlePressure, (TVoid*)&gDb_tNvParamAlarmC0.u16BlockOscillationAxlePressure, (TVoid*)&gDb_ctSetNvParamAlarmC0.u16Def_BlockOscillationAxlePressure, (TVoid*)&gDb_ctSetNvParamAlarmC0.au16Rng_BlockOscillationAxlePressure[0], 1824, 6},
    { &gDb_ctSetNvParamAlarmC0.tInf_UnblockOscillationAxlePressure, (TVoid*)&gDb_tNvParamAlarmC0.u16UnblockOscillationAxlePressure, (TVoid*)&gDb_ctSetNvParamAlarmC0.u16Def_UnblockOscillationAxlePressure, (TVoid*)&gDb_ctSetNvParamAlarmC0.au16Rng_UnblockOscillationAxlePressure[0], 1826, 7},
    { &gDb_ctSetNvParamAlarmC0.tInf_MinServiceBrakeFaultPressure, (TVoid*)&gDb_tNvParamAlarmC0.u16MinServiceBrakeFaultPressure, (TVoid*)&gDb_ctSetNvParamAlarmC0.u16Def_MinServiceBrakeFaultPressure, (TVoid*)&gDb_ctSetNvParamAlarmC0.au16Rng_MinServiceBrakeFaultPressure[0], 1828, 8},
    { &gDb_ctSetNvParamAlarmC0.tInf_MaxServiceBrakeFaultPressure, (TVoid*)&gDb_tNvParamAlarmC0.u16MaxServiceBrakeFaultPressure, (TVoid*)&gDb_ctSetNvParamAlarmC0.u16Def_MaxServiceBrakeFaultPressure, (TVoid*)&gDb_ctSetNvParamAlarmC0.au16Rng_MaxServiceBrakeFaultPressure[0], 1830, 9},
    { &gDb_ctSetNvParamAlarmC0.tInf_SlopeTransToleranceThres, (TVoid*)&gDb_tNvParamAlarmC0.u16SlopeTransToleranceThres, (TVoid*)&gDb_ctSetNvParamAlarmC0.u16Def_SlopeTransToleranceThres, (TVoid*)&gDb_ctSetNvParamAlarmC0.au16Rng_SlopeTransToleranceThres[0], 1832, 10},
    { &gDb_ctSetNvParamAlarmC0.tInf_MinTransPressureWithoutHook, (TVoid*)&gDb_tNvParamAlarmC0.i16MinTransPressureWithoutHook, (TVoid*)&gDb_ctSetNvParamAlarmC0.i16Def_MinTransPressureWithoutHook, (TVoid*)&gDb_ctSetNvParamAlarmC0.ai16Rng_MinTransPressureWithoutHook[0], 1834, 11},
    { &gDb_ctSetNvParamAlarmC0.tInf_TurretSensorToleranceThres, (TVoid*)&gDb_tNvParamAlarmC0.u16TurretSensorToleranceThres, (TVoid*)&gDb_ctSetNvParamAlarmC0.u16Def_TurretSensorToleranceThres, (TVoid*)&gDb_ctSetNvParamAlarmC0.au16Rng_TurretSensorToleranceThres[0], 1836, 12},
    { &gDb_ctSetNvParamAlarmC0.tInf_MinAlarmJoyDeltaArmPrctBat, (TVoid*)&gDb_tNvParamAlarmC0.u8MinAlarmJoyDeltaArmPrctBat, (TVoid*)&gDb_ctSetNvParamAlarmC0.u8Def_MinAlarmJoyDeltaArmPrctBat, (TVoid*)&gDb_ctSetNvParamAlarmC0.au8Rng_MinAlarmJoyDeltaArmPrctBat[0], 1838, 13},
    { &gDb_ctSetNvParamAlarmC0.tInf_MaxAlarmJoyDeltaArmPrctBat, (TVoid*)&gDb_tNvParamAlarmC0.u8MaxAlarmJoyDeltaArmPrctBat, (TVoid*)&gDb_ctSetNvParamAlarmC0.u8Def_MaxAlarmJoyDeltaArmPrctBat, (TVoid*)&gDb_ctSetNvParamAlarmC0.au8Rng_MaxAlarmJoyDeltaArmPrctBat[0], 1839, 14},
    { &gDb_ctSetNvParamAlarmC0.tInf_MinAlarmJoyArrowArmPrctBat, (TVoid*)&gDb_tNvParamAlarmC0.u8MinAlarmJoyArrowArmPrctBat, (TVoid*)&gDb_ctSetNvParamAlarmC0.u8Def_MinAlarmJoyArrowArmPrctBat, (TVoid*)&gDb_ctSetNvParamAlarmC0.au8Rng_MinAlarmJoyArrowArmPrctBat[0], 1840, 15},
    { &gDb_ctSetNvParamAlarmC0.tInf_MaxAlarmJoyArrowArmPrctBat, (TVoid*)&gDb_tNvParamAlarmC0.u8MaxAlarmJoyArrowArmPrctBat, (TVoid*)&gDb_ctSetNvParamAlarmC0.u8Def_MaxAlarmJoyArrowArmPrctBat, (TVoid*)&gDb_ctSetNvParamAlarmC0.au8Rng_MaxAlarmJoyArrowArmPrctBat[0], 1841, 16},
    { &gDb_ctSetNvParamAlarmC0.tInf_MinAlarmJoyTelescopeArmPrctBat, (TVoid*)&gDb_tNvParamAlarmC0.u8MinAlarmJoyTelescopeArmPrctBat, (TVoid*)&gDb_ctSetNvParamAlarmC0.u8Def_MinAlarmJoyTelescopeArmPrctBat, (TVoid*)&gDb_ctSetNvParamAlarmC0.au8Rng_MinAlarmJoyTelescopeArmPrctBat[0], 1842, 17},
    { &gDb_ctSetNvParamAlarmC0.tInf_MaxAlarmJoyTelescopeArmPrctBat, (TVoid*)&gDb_tNvParamAlarmC0.u8MaxAlarmJoyTelescopeArmPrctBat, (TVoid*)&gDb_ctSetNvParamAlarmC0.u8Def_MaxAlarmJoyTelescopeArmPrctBat, (TVoid*)&gDb_ctSetNvParamAlarmC0.au8Rng_MaxAlarmJoyTelescopeArmPrctBat[0], 1843, 18},
    { &gDb_ctSetNvParamAlarmC0.tInf_MinAlarmJoyRotTurretArmPrctBat, (TVoid*)&gDb_tNvParamAlarmC0.u8MinAlarmJoyRotTurretArmPrctBat, (TVoid*)&gDb_ctSetNvParamAlarmC0.u8Def_MinAlarmJoyRotTurretArmPrctBat, (TVoid*)&gDb_ctSetNvParamAlarmC0.au8Rng_MinAlarmJoyRotTurretArmPrctBat[0], 1844, 19},
    { &gDb_ctSetNvParamAlarmC0.tInf_MaxAlarmJoyRotTurretArmPrctBat, (TVoid*)&gDb_tNvParamAlarmC0.u8MaxAlarmJoyRotTurretArmPrctBat, (TVoid*)&gDb_ctSetNvParamAlarmC0.u8Def_MaxAlarmJoyRotTurretArmPrctBat, (TVoid*)&gDb_ctSetNvParamAlarmC0.au8Rng_MaxAlarmJoyRotTurretArmPrctBat[0], 1845, 20},
    { &gDb_ctSetNvParamAlarmC0.tInf_MinAlarmJoyAdvancementPrctBat, (TVoid*)&gDb_tNvParamAlarmC0.u8MinAlarmJoyAdvancementPrctBat, (TVoid*)&gDb_ctSetNvParamAlarmC0.u8Def_MinAlarmJoyAdvancementPrctBat, (TVoid*)&gDb_ctSetNvParamAlarmC0.au8Rng_MinAlarmJoyAdvancementPrctBat[0], 1846, 21},
    { &gDb_ctSetNvParamAlarmC0.tInf_MaxAlarmJoyAdvancementPrctBat, (TVoid*)&gDb_tNvParamAlarmC0.u8MaxAlarmJoyAdvancementPrctBat, (TVoid*)&gDb_ctSetNvParamAlarmC0.u8Def_MaxAlarmJoyAdvancementPrctBat, (TVoid*)&gDb_ctSetNvParamAlarmC0.au8Rng_MaxAlarmJoyAdvancementPrctBat[0], 1847, 22},
    { &gDb_ctSetNvParamAlarmC0.tInf_HystTempTrans, (TVoid*)&gDb_tNvParamAlarmC0.u16HystTempTrans, (TVoid*)&gDb_ctSetNvParamAlarmC0.u16Def_HystTempTrans, (TVoid*)&gDb_ctSetNvParamAlarmC0.au16Rng_HystTempTrans[0], 1848, 23},
    { &gDb_ctSetNvParamAlarmC0.tInf_ReduceTrackSpeedPercent, (TVoid*)&gDb_tNvParamAlarmC0.u8ReduceTrackSpeedPercent, (TVoid*)&gDb_ctSetNvParamAlarmC0.u8Def_ReduceTrackSpeedPercent, (TVoid*)&gDb_ctSetNvParamAlarmC0.au8Rng_ReduceTrackSpeedPercent[0], 1850, 24},
    { &gDb_ctSetNvParamAlarmC0.tInf_CptPressureBrakeFaultMax, (TVoid*)&gDb_tNvParamAlarmC0.u16CptPressureBrakeFaultMax, (TVoid*)&gDb_ctSetNvParamAlarmC0.u16Def_CptPressureBrakeFaultMax, (TVoid*)&gDb_ctSetNvParamAlarmC0.au16Rng_CptPressureBrakeFaultMax[0], 1851, 25},
    { &gDb_ctSetNvParamAlarmC0.tInf_BypassAlarmActiveC0, (TVoid*)&gDb_tNvParamAlarmC0.boBypassAlarmActiveC0, (TVoid*)&gDb_ctSetNvParamAlarmC0.boDef_BypassAlarmActiveC0, (TVoid*)&gDb_ctSetNvParamAlarmC0.aboRng_BypassAlarmActiveC0[0], 1853, 26},
    { &gDb_ctSetNvParamAlarmC0.tInf_TimeBypassFault, (TVoid*)&gDb_tNvParamAlarmC0.u16TimeBypassFault, (TVoid*)&gDb_ctSetNvParamAlarmC0.u16Def_TimeBypassFault, (TVoid*)&gDb_ctSetNvParamAlarmC0.au16Rng_TimeBypassFault[0], 1854, 27},
    { &gDb_ctSetNvParamAlarmC0.tInf_AU_THER_PRESSION_DEF_TRANS, (TVoid*)&gDb_tNvParamAlarmC0.i16AU_THER_PRESSION_DEF_TRANS, (TVoid*)&gDb_ctSetNvParamAlarmC0.i16Def_AU_THER_PRESSION_DEF_TRANS, (TVoid*)&gDb_ctSetNvParamAlarmC0.ai16Rng_AU_THER_PRESSION_DEF_TRANS[0], 1856, 28},
    { &gDb_ctSetNvParamAlarmC0.tInf_AU_ELEC_PRESSION_DEF_DMC, (TVoid*)&gDb_tNvParamAlarmC0.i16AU_ELEC_PRESSION_DEF_DMC, (TVoid*)&gDb_ctSetNvParamAlarmC0.i16Def_AU_ELEC_PRESSION_DEF_DMC, (TVoid*)&gDb_ctSetNvParamAlarmC0.ai16Rng_AU_ELEC_PRESSION_DEF_DMC[0], 1858, 29},
    { &gDb_ctSetNvParamAlarmC0.tInf_cptTimeDetectPumpTransMax, (TVoid*)&gDb_tNvParamAlarmC0.u16cptTimeDetectPumpTransMax, (TVoid*)&gDb_ctSetNvParamAlarmC0.u16Def_cptTimeDetectPumpTransMax, (TVoid*)&gDb_ctSetNvParamAlarmC0.au16Rng_cptTimeDetectPumpTransMax[0], 1860, 30},
    { &gDb_ctSetNvParamAlarmC0.tInf_cptTimeDetectPvgTransMax, (TVoid*)&gDb_tNvParamAlarmC0.u16cptTimeDetectPvgTransMax, (TVoid*)&gDb_ctSetNvParamAlarmC0.u16Def_cptTimeDetectPvgTransMax, (TVoid*)&gDb_ctSetNvParamAlarmC0.au16Rng_cptTimeDetectPvgTransMax[0], 1862, 31}
};

const TDbVarTabRam gDb_catVarTabRamEcuAlarmC0[8] =
{    //!< *cptInf *vpVal *cvpDataDef 
    { &gDb_ctSetRamEcuAlarmC0.tInf_RamEcuAlarmC0_1, (TVoid*)&gDb_tRamEcuAlarmC0.boRamEcuAlarmC0_1, (TVoid*)&gDb_ctSetRamEcuAlarmC0.boDef_RamEcuAlarmC0_1, (TVoid*)&gDb_ctSetRamEcuAlarmC0.aboRng_RamEcuAlarmC0_1[0]},
    { &gDb_ctSetRamEcuAlarmC0.tInf_FaultPumpTrans, (TVoid*)&gDb_tRamEcuAlarmC0.boFaultPumpTrans, (TVoid*)&gDb_ctSetRamEcuAlarmC0.boDef_FaultPumpTrans, (TVoid*)&gDb_ctSetRamEcuAlarmC0.aboRng_FaultPumpTrans[0]},
    { &gDb_ctSetRamEcuAlarmC0.tInf_TimeDetectPumpTrans, (TVoid*)&gDb_tRamEcuAlarmC0.boTimeDetectPumpTrans, (TVoid*)&gDb_ctSetRamEcuAlarmC0.boDef_TimeDetectPumpTrans, (TVoid*)&gDb_ctSetRamEcuAlarmC0.aboRng_TimeDetectPumpTrans[0]},
    { &gDb_ctSetRamEcuAlarmC0.tInf_MemFaultThermicPumpTrans, (TVoid*)&gDb_tRamEcuAlarmC0.boMemFaultThermicPumpTrans, (TVoid*)&gDb_ctSetRamEcuAlarmC0.boDef_MemFaultThermicPumpTrans, (TVoid*)&gDb_ctSetRamEcuAlarmC0.aboRng_MemFaultThermicPumpTrans[0]},
    { &gDb_ctSetRamEcuAlarmC0.tInf_FaultPvgTransElectric, (TVoid*)&gDb_tRamEcuAlarmC0.boFaultPvgTransElectric, (TVoid*)&gDb_ctSetRamEcuAlarmC0.boDef_FaultPvgTransElectric, (TVoid*)&gDb_ctSetRamEcuAlarmC0.aboRng_FaultPvgTransElectric[0]},
    { &gDb_ctSetRamEcuAlarmC0.tInf_TimeDetectPvgTrans, (TVoid*)&gDb_tRamEcuAlarmC0.boTimeDetectPvgTrans, (TVoid*)&gDb_ctSetRamEcuAlarmC0.boDef_TimeDetectPvgTrans, (TVoid*)&gDb_ctSetRamEcuAlarmC0.aboRng_TimeDetectPvgTrans[0]},
    { &gDb_ctSetRamEcuAlarmC0.tInf_MemFaultDMCTransElectric, (TVoid*)&gDb_tRamEcuAlarmC0.boMemFaultDMCTransElectric, (TVoid*)&gDb_ctSetRamEcuAlarmC0.boDef_MemFaultDMCTransElectric, (TVoid*)&gDb_ctSetRamEcuAlarmC0.aboRng_MemFaultDMCTransElectric[0]},
    { &gDb_ctSetRamEcuAlarmC0.tInf_FaultThermicPumpOrElecticDmc, (TVoid*)&gDb_tRamEcuAlarmC0.boFaultThermicPumpOrElecticDmc, (TVoid*)&gDb_ctSetRamEcuAlarmC0.boDef_FaultThermicPumpOrElecticDmc, (TVoid*)&gDb_ctSetRamEcuAlarmC0.aboRng_FaultThermicPumpOrElecticDmc[0]}
};

const TDbVarTabRam gDb_catVarTabRamEcuC0RcvFailluresFromC1[5] =
{    //!< *cptInf *vpVal *cvpDataDef 
    { &gDb_ctSetRamEcuC0RcvFailluresFromC1.tInf_Dm_Inc_Pos_Folded_Delta_Arrow, (TVoid*)&gDb_tRamEcuC0RcvFailluresFromC1.boDm_Inc_Pos_Folded_Delta_Arrow, (TVoid*)&gDb_ctSetRamEcuC0RcvFailluresFromC1.boDef_Dm_Inc_Pos_Folded_Delta_Arrow, (TVoid*)&gDb_ctSetRamEcuC0RcvFailluresFromC1.aboRng_Dm_Inc_Pos_Folded_Delta_Arrow[0]},
    { &gDb_ctSetRamEcuC0RcvFailluresFromC1.tInf_Dm_Active_Help, (TVoid*)&gDb_tRamEcuC0RcvFailluresFromC1.boDm_Active_Help, (TVoid*)&gDb_ctSetRamEcuC0RcvFailluresFromC1.boDef_Dm_Active_Help, (TVoid*)&gDb_ctSetRamEcuC0RcvFailluresFromC1.aboRng_Dm_Active_Help[0]},
    { &gDb_ctSetRamEcuC0RcvFailluresFromC1.tInf_Dm_Ev_Bypass_Fault, (TVoid*)&gDb_tRamEcuC0RcvFailluresFromC1.boDm_Ev_Bypass_Fault, (TVoid*)&gDb_ctSetRamEcuC0RcvFailluresFromC1.boDef_Dm_Ev_Bypass_Fault, (TVoid*)&gDb_ctSetRamEcuC0RcvFailluresFromC1.aboRng_Dm_Ev_Bypass_Fault[0]},
    { &gDb_ctSetRamEcuC0RcvFailluresFromC1.tInf_OutOfRangeTransmissionPressure, (TVoid*)&gDb_tRamEcuC0RcvFailluresFromC1.boOutOfRangeTransmissionPressure, (TVoid*)&gDb_ctSetRamEcuC0RcvFailluresFromC1.boDef_OutOfRangeTransmissionPressure, (TVoid*)&gDb_ctSetRamEcuC0RcvFailluresFromC1.aboRng_OutOfRangeTransmissionPressure[0]},
    { &gDb_ctSetRamEcuC0RcvFailluresFromC1.tInf_Dm_Overload_Detected_By_C1, (TVoid*)&gDb_tRamEcuC0RcvFailluresFromC1.boDm_Overload_Detected_By_C1, (TVoid*)&gDb_ctSetRamEcuC0RcvFailluresFromC1.boDef_Dm_Overload_Detected_By_C1, (TVoid*)&gDb_ctSetRamEcuC0RcvFailluresFromC1.aboRng_Dm_Overload_Detected_By_C1[0]}
};

const TDbVarTabRam gDb_catVarTabRamMastDisplayMeasureC0[8] =
{    //!< *cptInf *vpVal *cvpDataDef 
    { &gDb_ctSetRamMastDisplayMeasureC0.tInf_ErrorCodeInit, (TVoid*)&gDb_tRamMastDisplayMeasureC0.u16ErrorCodeInit, (TVoid*)&gDb_ctSetRamMastDisplayMeasureC0.u16Def_ErrorCodeInit, (TVoid*)&gDb_ctSetRamMastDisplayMeasureC0.au16Rng_ErrorCodeInit[0]},
    { &gDb_ctSetRamMastDisplayMeasureC0.tInf_ErrorCodeWrite, (TVoid*)&gDb_tRamMastDisplayMeasureC0.u16ErrorCodeWrite, (TVoid*)&gDb_ctSetRamMastDisplayMeasureC0.u16Def_ErrorCodeWrite, (TVoid*)&gDb_ctSetRamMastDisplayMeasureC0.au16Rng_ErrorCodeWrite[0]},
    { &gDb_ctSetRamMastDisplayMeasureC0.tInf_RetDataBytesSent, (TVoid*)&gDb_tRamMastDisplayMeasureC0.u16RetDataBytesSent, (TVoid*)&gDb_ctSetRamMastDisplayMeasureC0.u16Def_RetDataBytesSent, (TVoid*)&gDb_ctSetRamMastDisplayMeasureC0.au16Rng_RetDataBytesSent[0]},
    { &gDb_ctSetRamMastDisplayMeasureC0.tInf_DisplayedDigit1, (TVoid*)&gDb_tRamMastDisplayMeasureC0.u8DisplayedDigit1, (TVoid*)&gDb_ctSetRamMastDisplayMeasureC0.u8Def_DisplayedDigit1, (TVoid*)&gDb_ctSetRamMastDisplayMeasureC0.au8Rng_DisplayedDigit1[0]},
    { &gDb_ctSetRamMastDisplayMeasureC0.tInf_DisplayedDigit2, (TVoid*)&gDb_tRamMastDisplayMeasureC0.u8DisplayedDigit2, (TVoid*)&gDb_ctSetRamMastDisplayMeasureC0.u8Def_DisplayedDigit2, (TVoid*)&gDb_ctSetRamMastDisplayMeasureC0.au8Rng_DisplayedDigit2[0]},
    { &gDb_ctSetRamMastDisplayMeasureC0.tInf_DisplayedDigit3, (TVoid*)&gDb_tRamMastDisplayMeasureC0.u8DisplayedDigit3, (TVoid*)&gDb_ctSetRamMastDisplayMeasureC0.u8Def_DisplayedDigit3, (TVoid*)&gDb_ctSetRamMastDisplayMeasureC0.au8Rng_DisplayedDigit3[0]},
    { &gDb_ctSetRamMastDisplayMeasureC0.tInf_DisplayedDigit4, (TVoid*)&gDb_tRamMastDisplayMeasureC0.u8DisplayedDigit4, (TVoid*)&gDb_ctSetRamMastDisplayMeasureC0.u8Def_DisplayedDigit4, (TVoid*)&gDb_ctSetRamMastDisplayMeasureC0.au8Rng_DisplayedDigit4[0]},
    { &gDb_ctSetRamMastDisplayMeasureC0.tInf_SentDataArray, (TVoid*)&gDb_tRamMastDisplayMeasureC0.au8SentDataArray[0], (TVoid*)&gDb_ctSetRamMastDisplayMeasureC0.au8Def_SentDataArray[0], (TVoid*)&gDb_ctSetRamMastDisplayMeasureC0.aau8Rng_SentDataArray[0][0]}
};

const TDbVarTabNvm gDb_catVarTabNvParamMastDisplayC0[1] =
{    //!< *cptInf *vpVal *cvpDataRang *cvpDataDef cu16Adr cu16ValuePos
    { &gDb_ctSetNvParamMastDisplayC0.tInf_MastDisplayRefreshCycleTime, (TVoid*)&gDb_tNvParamMastDisplayC0.u32MastDisplayRefreshCycleTime, (TVoid*)&gDb_ctSetNvParamMastDisplayC0.u32Def_MastDisplayRefreshCycleTime, (TVoid*)&gDb_ctSetNvParamMastDisplayC0.au32Rng_MastDisplayRefreshCycleTime[0], 2012, 0}
};

const TDbVarTabRam gDb_catVarTabRamData4C0RcvFromC1[18] =
{    //!< *cptInf *vpVal *cvpDataDef 
    { &gDb_ctSetRamData4C0RcvFromC1.tInf_NoMovementRunning, (TVoid*)&gDb_tRamData4C0RcvFromC1.boNoMovementRunning, (TVoid*)&gDb_ctSetRamData4C0RcvFromC1.boDef_NoMovementRunning, (TVoid*)&gDb_ctSetRamData4C0RcvFromC1.aboRng_NoMovementRunning[0]},
    { &gDb_ctSetRamData4C0RcvFromC1.tInf_StopMoveLimitEnvelop, (TVoid*)&gDb_tRamData4C0RcvFromC1.boStopMoveLimitEnvelop, (TVoid*)&gDb_ctSetRamData4C0RcvFromC1.boDef_StopMoveLimitEnvelop, (TVoid*)&gDb_ctSetRamData4C0RcvFromC1.aboRng_StopMoveLimitEnvelop[0]},
    { &gDb_ctSetRamData4C0RcvFromC1.tInf_TransmissionPressureFault, (TVoid*)&gDb_tRamData4C0RcvFromC1.boTransmissionPressureFault, (TVoid*)&gDb_ctSetRamData4C0RcvFromC1.boDef_TransmissionPressureFault, (TVoid*)&gDb_ctSetRamData4C0RcvFromC1.aboRng_TransmissionPressureFault[0]},
    { &gDb_ctSetRamData4C0RcvFromC1.tInf_LynxOnAllMvts, (TVoid*)&gDb_tRamData4C0RcvFromC1.boLynxOnAllMvts, (TVoid*)&gDb_ctSetRamData4C0RcvFromC1.boDef_LynxOnAllMvts, (TVoid*)&gDb_ctSetRamData4C0RcvFromC1.aboRng_LynxOnAllMvts[0]},
    { &gDb_ctSetRamData4C0RcvFromC1.tInf_Signal_4, (TVoid*)&gDb_tRamData4C0RcvFromC1.boSignal_4, (TVoid*)&gDb_ctSetRamData4C0RcvFromC1.boDef_Signal_4, (TVoid*)&gDb_ctSetRamData4C0RcvFromC1.aboRng_Signal_4[0]},
    { &gDb_ctSetRamData4C0RcvFromC1.tInf_Signal_5, (TVoid*)&gDb_tRamData4C0RcvFromC1.boSignal_5, (TVoid*)&gDb_ctSetRamData4C0RcvFromC1.boDef_Signal_5, (TVoid*)&gDb_ctSetRamData4C0RcvFromC1.aboRng_Signal_5[0]},
    { &gDb_ctSetRamData4C0RcvFromC1.tInf_Signal_6, (TVoid*)&gDb_tRamData4C0RcvFromC1.boSignal_6, (TVoid*)&gDb_ctSetRamData4C0RcvFromC1.boDef_Signal_6, (TVoid*)&gDb_ctSetRamData4C0RcvFromC1.aboRng_Signal_6[0]},
    { &gDb_ctSetRamData4C0RcvFromC1.tInf_Signal_7, (TVoid*)&gDb_tRamData4C0RcvFromC1.boSignal_7, (TVoid*)&gDb_ctSetRamData4C0RcvFromC1.boDef_Signal_7, (TVoid*)&gDb_ctSetRamData4C0RcvFromC1.aboRng_Signal_7[0]},
    { &gDb_ctSetRamData4C0RcvFromC1.tInf_Signal_8, (TVoid*)&gDb_tRamData4C0RcvFromC1.u8Signal_8, (TVoid*)&gDb_ctSetRamData4C0RcvFromC1.u8Def_Signal_8, (TVoid*)&gDb_ctSetRamData4C0RcvFromC1.au8Rng_Signal_8[0]},
    { &gDb_ctSetRamData4C0RcvFromC1.tInf_BypassPressureSensorValue, (TVoid*)&gDb_tRamData4C0RcvFromC1.i16BypassPressureSensorValue, (TVoid*)&gDb_ctSetRamData4C0RcvFromC1.i16Def_BypassPressureSensorValue, (TVoid*)&gDb_ctSetRamData4C0RcvFromC1.ai16Rng_BypassPressureSensorValue[0]},
    { &gDb_ctSetRamData4C0RcvFromC1.tInf_Signal_10, (TVoid*)&gDb_tRamData4C0RcvFromC1.i16Signal_10, (TVoid*)&gDb_ctSetRamData4C0RcvFromC1.i16Def_Signal_10, (TVoid*)&gDb_ctSetRamData4C0RcvFromC1.ai16Rng_Signal_10[0]},
    { &gDb_ctSetRamData4C0RcvFromC1.tInf_Signal_11, (TVoid*)&gDb_tRamData4C0RcvFromC1.i16Signal_11, (TVoid*)&gDb_ctSetRamData4C0RcvFromC1.i16Def_Signal_11, (TVoid*)&gDb_ctSetRamData4C0RcvFromC1.ai16Rng_Signal_11[0]},
    { &gDb_ctSetRamData4C0RcvFromC1.tInf_PerformAutoriseTransArrow, (TVoid*)&gDb_tRamData4C0RcvFromC1.boPerformAutoriseTransArrow, (TVoid*)&gDb_ctSetRamData4C0RcvFromC1.boDef_PerformAutoriseTransArrow, (TVoid*)&gDb_ctSetRamData4C0RcvFromC1.aboRng_PerformAutoriseTransArrow[0]},
    { &gDb_ctSetRamData4C0RcvFromC1.tInf_ValidTelescopeSectorSlope, (TVoid*)&gDb_tRamData4C0RcvFromC1.boValidTelescopeSectorSlope, (TVoid*)&gDb_ctSetRamData4C0RcvFromC1.boDef_ValidTelescopeSectorSlope, (TVoid*)&gDb_ctSetRamData4C0RcvFromC1.aboRng_ValidTelescopeSectorSlope[0]},
    { &gDb_ctSetRamData4C0RcvFromC1.tInf_ValidTelescopeFirstSectorSlope, (TVoid*)&gDb_tRamData4C0RcvFromC1.boValidTelescopeFirstSectorSlope, (TVoid*)&gDb_ctSetRamData4C0RcvFromC1.boDef_ValidTelescopeFirstSectorSlope, (TVoid*)&gDb_ctSetRamData4C0RcvFromC1.aboRng_ValidTelescopeFirstSectorSlope[0]},
    { &gDb_ctSetRamData4C0RcvFromC1.tInf_PostInterdictionMastSNCF, (TVoid*)&gDb_tRamData4C0RcvFromC1.boPostInterdictionMastSNCF, (TVoid*)&gDb_ctSetRamData4C0RcvFromC1.boDef_PostInterdictionMastSNCF, (TVoid*)&gDb_ctSetRamData4C0RcvFromC1.aboRng_PostInterdictionMastSNCF[0]},
    { &gDb_ctSetRamData4C0RcvFromC1.tInf_InterdictOfNacelTurretPost, (TVoid*)&gDb_tRamData4C0RcvFromC1.boInterdictOfNacelTurretPost, (TVoid*)&gDb_ctSetRamData4C0RcvFromC1.boDef_InterdictOfNacelTurretPost, (TVoid*)&gDb_ctSetRamData4C0RcvFromC1.aboRng_InterdictOfNacelTurretPost[0]},
    { &gDb_ctSetRamData4C0RcvFromC1.tInf_MastPanthoFoldedSNCF, (TVoid*)&gDb_tRamData4C0RcvFromC1.boMastPanthoFoldedSNCF, (TVoid*)&gDb_ctSetRamData4C0RcvFromC1.boDef_MastPanthoFoldedSNCF, (TVoid*)&gDb_ctSetRamData4C0RcvFromC1.aboRng_MastPanthoFoldedSNCF[0]}
};

const TDbVarTabNvm gDb_catVarTabNvParamGreenEffC0[31] =
{    //!< *cptInf *vpVal *cvpDataRang *cvpDataDef cu16Adr cu16ValuePos
    { &gDb_ctSetNvParamGreenEffC0.tInf_MaxPvgTransRailElectricAv, (TVoid*)&gDb_tNvParamGreenEffC0.u8MaxPvgTransRailElectricAv, (TVoid*)&gDb_ctSetNvParamGreenEffC0.u8Def_MaxPvgTransRailElectricAv, (TVoid*)&gDb_ctSetNvParamGreenEffC0.au8Rng_MaxPvgTransRailElectricAv[0], 2212, 0},
    { &gDb_ctSetNvParamGreenEffC0.tInf_MaxPvgTransRailElectricAr, (TVoid*)&gDb_tNvParamGreenEffC0.u8MaxPvgTransRailElectricAr, (TVoid*)&gDb_ctSetNvParamGreenEffC0.u8Def_MaxPvgTransRailElectricAr, (TVoid*)&gDb_ctSetNvParamGreenEffC0.au8Rng_MaxPvgTransRailElectricAr[0], 2213, 1},
    { &gDb_ctSetNvParamGreenEffC0.tInf_MinPvgTransRailElectricAv, (TVoid*)&gDb_tNvParamGreenEffC0.u8MinPvgTransRailElectricAv, (TVoid*)&gDb_ctSetNvParamGreenEffC0.u8Def_MinPvgTransRailElectricAv, (TVoid*)&gDb_ctSetNvParamGreenEffC0.au8Rng_MinPvgTransRailElectricAv[0], 2214, 2},
    { &gDb_ctSetNvParamGreenEffC0.tInf_MinPvgTransRailElectricAr, (TVoid*)&gDb_tNvParamGreenEffC0.u8MinPvgTransRailElectricAr, (TVoid*)&gDb_ctSetNvParamGreenEffC0.u8Def_MinPvgTransRailElectricAr, (TVoid*)&gDb_ctSetNvParamGreenEffC0.au8Rng_MinPvgTransRailElectricAr[0], 2215, 3},
    { &gDb_ctSetNvParamGreenEffC0.tInf_TransRailElectricRampTimeAcc, (TVoid*)&gDb_tNvParamGreenEffC0.u16TransRailElectricRampTimeAcc, (TVoid*)&gDb_ctSetNvParamGreenEffC0.u16Def_TransRailElectricRampTimeAcc, (TVoid*)&gDb_ctSetNvParamGreenEffC0.au16Rng_TransRailElectricRampTimeAcc[0], 2216, 4},
    { &gDb_ctSetNvParamGreenEffC0.tInf_TransRailElectricRampTimeDec, (TVoid*)&gDb_tNvParamGreenEffC0.u16TransRailElectricRampTimeDec, (TVoid*)&gDb_ctSetNvParamGreenEffC0.u16Def_TransRailElectricRampTimeDec, (TVoid*)&gDb_ctSetNvParamGreenEffC0.au16Rng_TransRailElectricRampTimeDec[0], 2218, 5},
    { &gDb_ctSetNvParamGreenEffC0.tInf_TransRailElectricRampTimeStop, (TVoid*)&gDb_tNvParamGreenEffC0.u16TransRailElectricRampTimeStop, (TVoid*)&gDb_ctSetNvParamGreenEffC0.u16Def_TransRailElectricRampTimeStop, (TVoid*)&gDb_ctSetNvParamGreenEffC0.au16Rng_TransRailElectricRampTimeStop[0], 2220, 6},
    { &gDb_ctSetNvParamGreenEffC0.tInf_ElectricPumpPressureMax, (TVoid*)&gDb_tNvParamGreenEffC0.u16ElectricPumpPressureMax, (TVoid*)&gDb_ctSetNvParamGreenEffC0.u16Def_ElectricPumpPressureMax, (TVoid*)&gDb_ctSetNvParamGreenEffC0.au16Rng_ElectricPumpPressureMax[0], 2222, 7},
    { &gDb_ctSetNvParamGreenEffC0.tInf_ElectricPumpPressureHyst, (TVoid*)&gDb_tNvParamGreenEffC0.u16ElectricPumpPressureHyst, (TVoid*)&gDb_ctSetNvParamGreenEffC0.u16Def_ElectricPumpPressureHyst, (TVoid*)&gDb_ctSetNvParamGreenEffC0.au16Rng_ElectricPumpPressureHyst[0], 2224, 8},
    { &gDb_ctSetNvParamGreenEffC0.tInf_ELECTRIC_MOTOR_RPM_TRANS_MAX, (TVoid*)&gDb_tNvParamGreenEffC0.u16ELECTRIC_MOTOR_RPM_TRANS_MAX, (TVoid*)&gDb_ctSetNvParamGreenEffC0.u16Def_ELECTRIC_MOTOR_RPM_TRANS_MAX, (TVoid*)&gDb_ctSetNvParamGreenEffC0.au16Rng_ELECTRIC_MOTOR_RPM_TRANS_MAX[0], 2226, 9},
    { &gDb_ctSetNvParamGreenEffC0.tInf_ELECTRIC_MOTOR_RPM_TRANS_MIN, (TVoid*)&gDb_tNvParamGreenEffC0.u16ELECTRIC_MOTOR_RPM_TRANS_MIN, (TVoid*)&gDb_ctSetNvParamGreenEffC0.u16Def_ELECTRIC_MOTOR_RPM_TRANS_MIN, (TVoid*)&gDb_ctSetNvParamGreenEffC0.au16Rng_ELECTRIC_MOTOR_RPM_TRANS_MIN[0], 2228, 10},
    { &gDb_ctSetNvParamGreenEffC0.tInf_MIN_PVG_TRANS_HIGH_50, (TVoid*)&gDb_tNvParamGreenEffC0.u8MIN_PVG_TRANS_HIGH_50, (TVoid*)&gDb_ctSetNvParamGreenEffC0.u8Def_MIN_PVG_TRANS_HIGH_50, (TVoid*)&gDb_ctSetNvParamGreenEffC0.au8Rng_MIN_PVG_TRANS_HIGH_50[0], 2230, 11},
    { &gDb_ctSetNvParamGreenEffC0.tInf_MIN_PVG_TRANS_LOW_50, (TVoid*)&gDb_tNvParamGreenEffC0.u8MIN_PVG_TRANS_LOW_50, (TVoid*)&gDb_ctSetNvParamGreenEffC0.u8Def_MIN_PVG_TRANS_LOW_50, (TVoid*)&gDb_ctSetNvParamGreenEffC0.au8Rng_MIN_PVG_TRANS_LOW_50[0], 2231, 12},
    { &gDb_ctSetNvParamGreenEffC0.tInf_RAMP_TIME_REGEN_THERMIC, (TVoid*)&gDb_tNvParamGreenEffC0.u16RAMP_TIME_REGEN_THERMIC, (TVoid*)&gDb_ctSetNvParamGreenEffC0.u16Def_RAMP_TIME_REGEN_THERMIC, (TVoid*)&gDb_ctSetNvParamGreenEffC0.au16Rng_RAMP_TIME_REGEN_THERMIC[0], 2232, 13},
    { &gDb_ctSetNvParamGreenEffC0.tInf_RegenPumpPressureMax, (TVoid*)&gDb_tNvParamGreenEffC0.u16RegenPumpPressureMax, (TVoid*)&gDb_ctSetNvParamGreenEffC0.u16Def_RegenPumpPressureMax, (TVoid*)&gDb_ctSetNvParamGreenEffC0.au16Rng_RegenPumpPressureMax[0], 2234, 14},
    { &gDb_ctSetNvParamGreenEffC0.tInf_RegenPumpPressureReset, (TVoid*)&gDb_tNvParamGreenEffC0.u16RegenPumpPressureReset, (TVoid*)&gDb_ctSetNvParamGreenEffC0.u16Def_RegenPumpPressureReset, (TVoid*)&gDb_ctSetNvParamGreenEffC0.au16Rng_RegenPumpPressureReset[0], 2236, 15},
    { &gDb_ctSetNvParamGreenEffC0.tInf_CURRENT_RESET_REGEN_THERMIC, (TVoid*)&gDb_tNvParamGreenEffC0.u16CURRENT_RESET_REGEN_THERMIC, (TVoid*)&gDb_ctSetNvParamGreenEffC0.u16Def_CURRENT_RESET_REGEN_THERMIC, (TVoid*)&gDb_ctSetNvParamGreenEffC0.au16Rng_CURRENT_RESET_REGEN_THERMIC[0], 2238, 16},
    { &gDb_ctSetNvParamGreenEffC0.tInf_CURRENT_MIN_REGEN_THERMIC, (TVoid*)&gDb_tNvParamGreenEffC0.u16CURRENT_MIN_REGEN_THERMIC, (TVoid*)&gDb_ctSetNvParamGreenEffC0.u16Def_CURRENT_MIN_REGEN_THERMIC, (TVoid*)&gDb_ctSetNvParamGreenEffC0.au16Rng_CURRENT_MIN_REGEN_THERMIC[0], 2240, 17},
    { &gDb_ctSetNvParamGreenEffC0.tInf_CURRENT_MAX_REGEN_THERMIC, (TVoid*)&gDb_tNvParamGreenEffC0.u16CURRENT_MAX_REGEN_THERMIC, (TVoid*)&gDb_ctSetNvParamGreenEffC0.u16Def_CURRENT_MAX_REGEN_THERMIC, (TVoid*)&gDb_ctSetNvParamGreenEffC0.au16Rng_CURRENT_MAX_REGEN_THERMIC[0], 2242, 18},
    { &gDb_ctSetNvParamGreenEffC0.tInf_CURRENT_DRIVE_LIMIT_ELECTRIC, (TVoid*)&gDb_tNvParamGreenEffC0.u16CURRENT_DRIVE_LIMIT_ELECTRIC, (TVoid*)&gDb_ctSetNvParamGreenEffC0.u16Def_CURRENT_DRIVE_LIMIT_ELECTRIC, (TVoid*)&gDb_ctSetNvParamGreenEffC0.au16Rng_CURRENT_DRIVE_LIMIT_ELECTRIC[0], 2244, 19},
    { &gDb_ctSetNvParamGreenEffC0.tInf_BATTERY_LOW_LEVEL_SOC, (TVoid*)&gDb_tNvParamGreenEffC0.u8BATTERY_LOW_LEVEL_SOC, (TVoid*)&gDb_ctSetNvParamGreenEffC0.u8Def_BATTERY_LOW_LEVEL_SOC, (TVoid*)&gDb_ctSetNvParamGreenEffC0.au8Rng_BATTERY_LOW_LEVEL_SOC[0], 2246, 20},
    { &gDb_ctSetNvParamGreenEffC0.tInf_MinVoltageDcConverter, (TVoid*)&gDb_tNvParamGreenEffC0.u16MinVoltageDcConverter, (TVoid*)&gDb_ctSetNvParamGreenEffC0.u16Def_MinVoltageDcConverter, (TVoid*)&gDb_ctSetNvParamGreenEffC0.au16Rng_MinVoltageDcConverter[0], 2247, 21},
    { &gDb_ctSetNvParamGreenEffC0.tInf_NbrCycleFaultDcConverter, (TVoid*)&gDb_tNvParamGreenEffC0.u16NbrCycleFaultDcConverter, (TVoid*)&gDb_ctSetNvParamGreenEffC0.u16Def_NbrCycleFaultDcConverter, (TVoid*)&gDb_ctSetNvParamGreenEffC0.au16Rng_NbrCycleFaultDcConverter[0], 2249, 22},
    { &gDb_ctSetNvParamGreenEffC0.tInf_REGEN_BRAKE_RPM_MODE_AUTO, (TVoid*)&gDb_tNvParamGreenEffC0.i16REGEN_BRAKE_RPM_MODE_AUTO, (TVoid*)&gDb_ctSetNvParamGreenEffC0.i16Def_REGEN_BRAKE_RPM_MODE_AUTO, (TVoid*)&gDb_ctSetNvParamGreenEffC0.ai16Rng_REGEN_BRAKE_RPM_MODE_AUTO[0], 2251, 23},
    { &gDb_ctSetNvParamGreenEffC0.tInf_REGEN_BRAKE_TORQUE_MODE_AUTO, (TVoid*)&gDb_tNvParamGreenEffC0.i16REGEN_BRAKE_TORQUE_MODE_AUTO, (TVoid*)&gDb_ctSetNvParamGreenEffC0.i16Def_REGEN_BRAKE_TORQUE_MODE_AUTO, (TVoid*)&gDb_ctSetNvParamGreenEffC0.ai16Rng_REGEN_BRAKE_TORQUE_MODE_AUTO[0], 2253, 24},
    { &gDb_ctSetNvParamGreenEffC0.tInf_REGEN_BRAKE_RPM_MODE_HIGH, (TVoid*)&gDb_tNvParamGreenEffC0.i16REGEN_BRAKE_RPM_MODE_HIGH, (TVoid*)&gDb_ctSetNvParamGreenEffC0.i16Def_REGEN_BRAKE_RPM_MODE_HIGH, (TVoid*)&gDb_ctSetNvParamGreenEffC0.ai16Rng_REGEN_BRAKE_RPM_MODE_HIGH[0], 2255, 25},
    { &gDb_ctSetNvParamGreenEffC0.tInf_REGEN_BRAKE_TORQUE_MODE_HIGH, (TVoid*)&gDb_tNvParamGreenEffC0.i16REGEN_BRAKE_TORQUE_MODE_HIGH, (TVoid*)&gDb_ctSetNvParamGreenEffC0.i16Def_REGEN_BRAKE_TORQUE_MODE_HIGH, (TVoid*)&gDb_ctSetNvParamGreenEffC0.ai16Rng_REGEN_BRAKE_TORQUE_MODE_HIGH[0], 2257, 26},
    { &gDb_ctSetNvParamGreenEffC0.tInf_NbrSamplesAverageRpm, (TVoid*)&gDb_tNvParamGreenEffC0.u8NbrSamplesAverageRpm, (TVoid*)&gDb_ctSetNvParamGreenEffC0.u8Def_NbrSamplesAverageRpm, (TVoid*)&gDb_ctSetNvParamGreenEffC0.au8Rng_NbrSamplesAverageRpm[0], 2259, 27},
    { &gDb_ctSetNvParamGreenEffC0.tInf_RegenPumpPressureHyst, (TVoid*)&gDb_tNvParamGreenEffC0.i16RegenPumpPressureHyst, (TVoid*)&gDb_ctSetNvParamGreenEffC0.i16Def_RegenPumpPressureHyst, (TVoid*)&gDb_ctSetNvParamGreenEffC0.ai16Rng_RegenPumpPressureHyst[0], 2260, 28},
    { &gDb_ctSetNvParamGreenEffC0.tInf_RegenBrakeTorqueFromPressurCoefK, (TVoid*)&gDb_tNvParamGreenEffC0.i16RegenBrakeTorqueFromPressurCoefK, (TVoid*)&gDb_ctSetNvParamGreenEffC0.i16Def_RegenBrakeTorqueFromPressurCoefK, (TVoid*)&gDb_ctSetNvParamGreenEffC0.ai16Rng_RegenBrakeTorqueFromPressurCoefK[0], 2262, 29},
    { &gDb_ctSetNvParamGreenEffC0.tInf_RegenBrakeTorqueFromPressurRange, (TVoid*)&gDb_tNvParamGreenEffC0.i16RegenBrakeTorqueFromPressurRange, (TVoid*)&gDb_ctSetNvParamGreenEffC0.i16Def_RegenBrakeTorqueFromPressurRange, (TVoid*)&gDb_ctSetNvParamGreenEffC0.ai16Rng_RegenBrakeTorqueFromPressurRange[0], 2264, 30}
};

const TDbVarTabRam gDb_catVarTabRamGreenEffC0[15] =
{    //!< *cptInf *vpVal *cvpDataDef 
    { &gDb_ctSetRamGreenEffC0.tInf_AutorizeTransRailElectric, (TVoid*)&gDb_tRamGreenEffC0.boAutorizeTransRailElectric, (TVoid*)&gDb_ctSetRamGreenEffC0.boDef_AutorizeTransRailElectric, (TVoid*)&gDb_ctSetRamGreenEffC0.aboRng_AutorizeTransRailElectric[0]},
    { &gDb_ctSetRamGreenEffC0.tInf_PvgTransRailElectricConsigne, (TVoid*)&gDb_tRamGreenEffC0.i16PvgTransRailElectricConsigne, (TVoid*)&gDb_ctSetRamGreenEffC0.i16Def_PvgTransRailElectricConsigne, (TVoid*)&gDb_ctSetRamGreenEffC0.ai16Rng_PvgTransRailElectricConsigne[0]},
    { &gDb_ctSetRamGreenEffC0.tInf_ElectricPumpPressureExceeded, (TVoid*)&gDb_tRamGreenEffC0.boElectricPumpPressureExceeded, (TVoid*)&gDb_ctSetRamGreenEffC0.boDef_ElectricPumpPressureExceeded, (TVoid*)&gDb_ctSetRamGreenEffC0.aboRng_ElectricPumpPressureExceeded[0]},
    { &gDb_ctSetRamGreenEffC0.tInf_StopRampPvgTransRailElectric, (TVoid*)&gDb_tRamGreenEffC0.boStopRampPvgTransRailElectric, (TVoid*)&gDb_ctSetRamGreenEffC0.boDef_StopRampPvgTransRailElectric, (TVoid*)&gDb_ctSetRamGreenEffC0.aboRng_StopRampPvgTransRailElectric[0]},
    { &gDb_ctSetRamGreenEffC0.tInf_TransRailElectricRampOngoing, (TVoid*)&gDb_tRamGreenEffC0.boTransRailElectricRampOngoing, (TVoid*)&gDb_ctSetRamGreenEffC0.boDef_TransRailElectricRampOngoing, (TVoid*)&gDb_ctSetRamGreenEffC0.aboRng_TransRailElectricRampOngoing[0]},
    { &gDb_ctSetRamGreenEffC0.tInf_TransRailThermiqueRampOngoing, (TVoid*)&gDb_tRamGreenEffC0.boTransRailThermiqueRampOngoing, (TVoid*)&gDb_ctSetRamGreenEffC0.boDef_TransRailThermiqueRampOngoing, (TVoid*)&gDb_ctSetRamGreenEffC0.aboRng_TransRailThermiqueRampOngoing[0]},
    { &gDb_ctSetRamGreenEffC0.tInf_RpmPvgTransRail, (TVoid*)&gDb_tRamGreenEffC0.i16RpmPvgTransRail, (TVoid*)&gDb_ctSetRamGreenEffC0.i16Def_RpmPvgTransRail, (TVoid*)&gDb_ctSetRamGreenEffC0.ai16Rng_RpmPvgTransRail[0]},
    { &gDb_ctSetRamGreenEffC0.tInf_PictoReloadBatteryImpossible, (TVoid*)&gDb_tRamGreenEffC0.boPictoReloadBatteryImpossible, (TVoid*)&gDb_ctSetRamGreenEffC0.boDef_PictoReloadBatteryImpossible, (TVoid*)&gDb_ctSetRamGreenEffC0.aboRng_PictoReloadBatteryImpossible[0]},
    { &gDb_ctSetRamGreenEffC0.tInf_BatteryLowLevel, (TVoid*)&gDb_tRamGreenEffC0.boBatteryLowLevel, (TVoid*)&gDb_ctSetRamGreenEffC0.boDef_BatteryLowLevel, (TVoid*)&gDb_ctSetRamGreenEffC0.aboRng_BatteryLowLevel[0]},
    { &gDb_ctSetRamGreenEffC0.tInf_ElectricPumpPressureMaxRegen, (TVoid*)&gDb_tRamGreenEffC0.boElectricPumpPressureMaxRegen, (TVoid*)&gDb_ctSetRamGreenEffC0.boDef_ElectricPumpPressureMaxRegen, (TVoid*)&gDb_ctSetRamGreenEffC0.aboRng_ElectricPumpPressureMaxRegen[0]},
    { &gDb_ctSetRamGreenEffC0.tInf_ElectricPumpPressureResetRegen, (TVoid*)&gDb_tRamGreenEffC0.boElectricPumpPressureResetRegen, (TVoid*)&gDb_ctSetRamGreenEffC0.boDef_ElectricPumpPressureResetRegen, (TVoid*)&gDb_ctSetRamGreenEffC0.aboRng_ElectricPumpPressureResetRegen[0]},
    { &gDb_ctSetRamGreenEffC0.tInf_AutorizeRazController, (TVoid*)&gDb_tRamGreenEffC0.boAutorizeRazController, (TVoid*)&gDb_ctSetRamGreenEffC0.boDef_AutorizeRazController, (TVoid*)&gDb_ctSetRamGreenEffC0.aboRng_AutorizeRazController[0]},
    { &gDb_ctSetRamGreenEffC0.tInf_VoltageDcConverterFault, (TVoid*)&gDb_tRamGreenEffC0.boVoltageDcConverterFault, (TVoid*)&gDb_ctSetRamGreenEffC0.boDef_VoltageDcConverterFault, (TVoid*)&gDb_ctSetRamGreenEffC0.aboRng_VoltageDcConverterFault[0]},
    { &gDb_ctSetRamGreenEffC0.tInf_BattErrorCode1, (TVoid*)&gDb_tRamGreenEffC0.boBattErrorCode1, (TVoid*)&gDb_ctSetRamGreenEffC0.boDef_BattErrorCode1, (TVoid*)&gDb_ctSetRamGreenEffC0.aboRng_BattErrorCode1[0]},
    { &gDb_ctSetRamGreenEffC0.tInf_PictoAskResartController, (TVoid*)&gDb_tRamGreenEffC0.boPictoAskResartController, (TVoid*)&gDb_ctSetRamGreenEffC0.boDef_PictoAskResartController, (TVoid*)&gDb_ctSetRamGreenEffC0.aboRng_PictoAskResartController[0]}
};

const TDbVarTabRam gDb_catVarTabRamFlashBatteryC0[8] =
{    //!< *cptInf *vpVal *cvpDataDef 
    { &gDb_ctSetRamFlashBatteryC0.tInf_Ibatt_ist, (TVoid*)&gDb_tRamFlashBatteryC0.i16Ibatt_ist, (TVoid*)&gDb_ctSetRamFlashBatteryC0.i16Def_Ibatt_ist, (TVoid*)&gDb_ctSetRamFlashBatteryC0.ai16Rng_Ibatt_ist[0]},
    { &gDb_ctSetRamFlashBatteryC0.tInf_Vbatt_ist, (TVoid*)&gDb_tRamFlashBatteryC0.u16Vbatt_ist, (TVoid*)&gDb_ctSetRamFlashBatteryC0.u16Def_Vbatt_ist, (TVoid*)&gDb_ctSetRamFlashBatteryC0.au16Rng_Vbatt_ist[0]},
    { &gDb_ctSetRamFlashBatteryC0.tInf_Batt_Soc, (TVoid*)&gDb_tRamFlashBatteryC0.u8Batt_Soc, (TVoid*)&gDb_ctSetRamFlashBatteryC0.u8Def_Batt_Soc, (TVoid*)&gDb_ctSetRamFlashBatteryC0.au8Rng_Batt_Soc[0]},
    { &gDb_ctSetRamFlashBatteryC0.tInf_Batt_PowerReductionRatio, (TVoid*)&gDb_tRamFlashBatteryC0.u8Batt_PowerReductionRatio, (TVoid*)&gDb_ctSetRamFlashBatteryC0.u8Def_Batt_PowerReductionRatio, (TVoid*)&gDb_ctSetRamFlashBatteryC0.au8Rng_Batt_PowerReductionRatio[0]},
    { &gDb_ctSetRamFlashBatteryC0.tInf_Batt_RecoveryReductionRatio, (TVoid*)&gDb_tRamFlashBatteryC0.u8Batt_RecoveryReductionRatio, (TVoid*)&gDb_ctSetRamFlashBatteryC0.u8Def_Batt_RecoveryReductionRatio, (TVoid*)&gDb_ctSetRamFlashBatteryC0.au8Rng_Batt_RecoveryReductionRatio[0]},
    { &gDb_ctSetRamFlashBatteryC0.tInf_Batt_ErrorCode1, (TVoid*)&gDb_tRamFlashBatteryC0.u8Batt_ErrorCode1, (TVoid*)&gDb_ctSetRamFlashBatteryC0.u8Def_Batt_ErrorCode1, (TVoid*)&gDb_ctSetRamFlashBatteryC0.au8Rng_Batt_ErrorCode1[0]},
    { &gDb_ctSetRamFlashBatteryC0.tInf_Batt_ErrorValue1, (TVoid*)&gDb_tRamFlashBatteryC0.u8Batt_ErrorValue1, (TVoid*)&gDb_ctSetRamFlashBatteryC0.u8Def_Batt_ErrorValue1, (TVoid*)&gDb_ctSetRamFlashBatteryC0.au8Rng_Batt_ErrorValue1[0]},
    { &gDb_ctSetRamFlashBatteryC0.tInf_Batt_RegenAuthorized, (TVoid*)&gDb_tRamFlashBatteryC0.boBatt_RegenAuthorized, (TVoid*)&gDb_ctSetRamFlashBatteryC0.boDef_Batt_RegenAuthorized, (TVoid*)&gDb_ctSetRamFlashBatteryC0.aboRng_Batt_RegenAuthorized[0]}
};

const TDbVarTabRam gDb_catVarTabRamDMC_C0[43] =
{    //!< *cptInf *vpVal *cvpDataDef 
    { &gDb_ctSetRamDMC_C0.tInf_DC_RpmRequest, (TVoid*)&gDb_tRamDMC_C0.u16DC_RpmRequest, (TVoid*)&gDb_ctSetRamDMC_C0.u16Def_DC_RpmRequest, (TVoid*)&gDb_ctSetRamDMC_C0.au16Rng_DC_RpmRequest[0]},
    { &gDb_ctSetRamDMC_C0.tInf_DC_AI2_StaticBrakeTorqueLimit, (TVoid*)&gDb_tRamDMC_C0.u16DC_AI2_StaticBrakeTorqueLimit, (TVoid*)&gDb_ctSetRamDMC_C0.u16Def_DC_AI2_StaticBrakeTorqueLimit, (TVoid*)&gDb_ctSetRamDMC_C0.au16Rng_DC_AI2_StaticBrakeTorqueLimit[0]},
    { &gDb_ctSetRamDMC_C0.tInf_DC_GeneratorRegenBattCurLimit, (TVoid*)&gDb_tRamDMC_C0.u16DC_GeneratorRegenBattCurLimit, (TVoid*)&gDb_ctSetRamDMC_C0.u16Def_DC_GeneratorRegenBattCurLimit, (TVoid*)&gDb_ctSetRamDMC_C0.au16Rng_DC_GeneratorRegenBattCurLimit[0]},
    { &gDb_ctSetRamDMC_C0.tInf_DC_ForwardByte6Bit0, (TVoid*)&gDb_tRamDMC_C0.boDC_ForwardByte6Bit0, (TVoid*)&gDb_ctSetRamDMC_C0.boDef_DC_ForwardByte6Bit0, (TVoid*)&gDb_ctSetRamDMC_C0.aboRng_DC_ForwardByte6Bit0[0]},
    { &gDb_ctSetRamDMC_C0.tInf_DC_BackwardByte6Bit1, (TVoid*)&gDb_tRamDMC_C0.boDC_BackwardByte6Bit1, (TVoid*)&gDb_ctSetRamDMC_C0.boDef_DC_BackwardByte6Bit1, (TVoid*)&gDb_ctSetRamDMC_C0.aboRng_DC_BackwardByte6Bit1[0]},
    { &gDb_ctSetRamDMC_C0.tInf_DC_FootSwitchByte6Bit2, (TVoid*)&gDb_tRamDMC_C0.boDC_FootSwitchByte6Bit2, (TVoid*)&gDb_ctSetRamDMC_C0.boDef_DC_FootSwitchByte6Bit2, (TVoid*)&gDb_ctSetRamDMC_C0.aboRng_DC_FootSwitchByte6Bit2[0]},
    { &gDb_ctSetRamDMC_C0.tInf_DC_InterlockByt6Bit3, (TVoid*)&gDb_tRamDMC_C0.boDC_InterlockByt6Bit3, (TVoid*)&gDb_ctSetRamDMC_C0.boDef_DC_InterlockByt6Bit3, (TVoid*)&gDb_ctSetRamDMC_C0.aboRng_DC_InterlockByt6Bit3[0]},
    { &gDb_ctSetRamDMC_C0.tInf_DC_RegenEnableByte6Bit6, (TVoid*)&gDb_tRamDMC_C0.boDC_RegenEnableByte6Bit6, (TVoid*)&gDb_ctSetRamDMC_C0.boDef_DC_RegenEnableByte6Bit6, (TVoid*)&gDb_ctSetRamDMC_C0.aboRng_DC_RegenEnableByte6Bit6[0]},
    { &gDb_ctSetRamDMC_C0.tInf_DC_RollOverCount, (TVoid*)&gDb_tRamDMC_C0.u8DC_RollOverCount, (TVoid*)&gDb_ctSetRamDMC_C0.u8Def_DC_RollOverCount, (TVoid*)&gDb_ctSetRamDMC_C0.au8Rng_DC_RollOverCount[0]},
    { &gDb_ctSetRamDMC_C0.tInf_BCL_HMI_DriveBattCurLimit, (TVoid*)&gDb_tRamDMC_C0.u16BCL_HMI_DriveBattCurLimit, (TVoid*)&gDb_ctSetRamDMC_C0.u16Def_BCL_HMI_DriveBattCurLimit, (TVoid*)&gDb_ctSetRamDMC_C0.au16Rng_BCL_HMI_DriveBattCurLimit[0]},
    { &gDb_ctSetRamDMC_C0.tInf_BCL_HMI_RegenBattCurLimit, (TVoid*)&gDb_tRamDMC_C0.u16BCL_HMI_RegenBattCurLimit, (TVoid*)&gDb_ctSetRamDMC_C0.u16Def_BCL_HMI_RegenBattCurLimit, (TVoid*)&gDb_ctSetRamDMC_C0.au16Rng_BCL_HMI_RegenBattCurLimit[0]},
    { &gDb_ctSetRamDMC_C0.tInf_BCL_HMI_BattSOC, (TVoid*)&gDb_tRamDMC_C0.u16BCL_HMI_BattSOC, (TVoid*)&gDb_ctSetRamDMC_C0.u16Def_BCL_HMI_BattSOC, (TVoid*)&gDb_ctSetRamDMC_C0.au16Rng_BCL_HMI_BattSOC[0]},
    { &gDb_ctSetRamDMC_C0.tInf_BCL_RollOverCount, (TVoid*)&gDb_tRamDMC_C0.u8BCL_RollOverCount, (TVoid*)&gDb_ctSetRamDMC_C0.u8Def_BCL_RollOverCount, (TVoid*)&gDb_ctSetRamDMC_C0.au8Rng_BCL_RollOverCount[0]},
    { &gDb_ctSetRamDMC_C0.tInf_MS_ActualSpeedRpm, (TVoid*)&gDb_tRamDMC_C0.i16MS_ActualSpeedRpm, (TVoid*)&gDb_ctSetRamDMC_C0.i16Def_MS_ActualSpeedRpm, (TVoid*)&gDb_ctSetRamDMC_C0.ai16Rng_MS_ActualSpeedRpm[0]},
    { &gDb_ctSetRamDMC_C0.tInf_MS_BattCur, (TVoid*)&gDb_tRamDMC_C0.i16MS_BattCur, (TVoid*)&gDb_ctSetRamDMC_C0.i16Def_MS_BattCur, (TVoid*)&gDb_ctSetRamDMC_C0.ai16Rng_MS_BattCur[0]},
    { &gDb_ctSetRamDMC_C0.tInf_MS_RollOverCount, (TVoid*)&gDb_tRamDMC_C0.u8MS_RollOverCount, (TVoid*)&gDb_ctSetRamDMC_C0.u8Def_MS_RollOverCount, (TVoid*)&gDb_ctSetRamDMC_C0.au8Rng_MS_RollOverCount[0]},
    { &gDb_ctSetRamDMC_C0.tInf_MS_FaultCode, (TVoid*)&gDb_tRamDMC_C0.u8MS_FaultCode, (TVoid*)&gDb_ctSetRamDMC_C0.u8Def_MS_FaultCode, (TVoid*)&gDb_ctSetRamDMC_C0.au8Rng_MS_FaultCode[0]},
    { &gDb_ctSetRamDMC_C0.tInf_MS_FaultSubCode, (TVoid*)&gDb_tRamDMC_C0.u16MS_FaultSubCode, (TVoid*)&gDb_ctSetRamDMC_C0.u16Def_MS_FaultSubCode, (TVoid*)&gDb_ctSetRamDMC_C0.au16Rng_MS_FaultSubCode[0]},
    { &gDb_ctSetRamDMC_C0.tInf_DS_MotorCur, (TVoid*)&gDb_tRamDMC_C0.i16DS_MotorCur, (TVoid*)&gDb_ctSetRamDMC_C0.i16Def_DS_MotorCur, (TVoid*)&gDb_ctSetRamDMC_C0.ai16Rng_DS_MotorCur[0]},
    { &gDb_ctSetRamDMC_C0.tInf_DS_DriveStatusIndicator, (TVoid*)&gDb_tRamDMC_C0.u8DS_DriveStatusIndicator, (TVoid*)&gDb_ctSetRamDMC_C0.u8Def_DS_DriveStatusIndicator, (TVoid*)&gDb_ctSetRamDMC_C0.au8Rng_DS_DriveStatusIndicator[0]},
    { &gDb_ctSetRamDMC_C0.tInf_DS_SpeedLimitIndicator, (TVoid*)&gDb_tRamDMC_C0.u8DS_SpeedLimitIndicator, (TVoid*)&gDb_ctSetRamDMC_C0.u8Def_DS_SpeedLimitIndicator, (TVoid*)&gDb_ctSetRamDMC_C0.au8Rng_DS_SpeedLimitIndicator[0]},
    { &gDb_ctSetRamDMC_C0.tInf_DS_ActualTorque, (TVoid*)&gDb_tRamDMC_C0.i16DS_ActualTorque, (TVoid*)&gDb_ctSetRamDMC_C0.i16Def_DS_ActualTorque, (TVoid*)&gDb_ctSetRamDMC_C0.ai16Rng_DS_ActualTorque[0]},
    { &gDb_ctSetRamDMC_C0.tInf_DS_TorqueLimitIndicator, (TVoid*)&gDb_tRamDMC_C0.u8DS_TorqueLimitIndicator, (TVoid*)&gDb_ctSetRamDMC_C0.u8Def_DS_TorqueLimitIndicator, (TVoid*)&gDb_ctSetRamDMC_C0.au8Rng_DS_TorqueLimitIndicator[0]},
    { &gDb_ctSetRamDMC_C0.tInf_DS_RollOverCount, (TVoid*)&gDb_tRamDMC_C0.u8DS_RollOverCount, (TVoid*)&gDb_ctSetRamDMC_C0.u8Def_DS_RollOverCount, (TVoid*)&gDb_ctSetRamDMC_C0.au8Rng_DS_RollOverCount[0]},
    { &gDb_ctSetRamDMC_C0.tInf_CS_ControlerTemp, (TVoid*)&gDb_tRamDMC_C0.i8CS_ControlerTemp, (TVoid*)&gDb_ctSetRamDMC_C0.i8Def_CS_ControlerTemp, (TVoid*)&gDb_ctSetRamDMC_C0.ai8Rng_CS_ControlerTemp[0]},
    { &gDb_ctSetRamDMC_C0.tInf_CS_MotorTemp, (TVoid*)&gDb_tRamDMC_C0.i8CS_MotorTemp, (TVoid*)&gDb_ctSetRamDMC_C0.i8Def_CS_MotorTemp, (TVoid*)&gDb_ctSetRamDMC_C0.ai8Rng_CS_MotorTemp[0]},
    { &gDb_ctSetRamDMC_C0.tInf_CS_MotorLimitIndicator, (TVoid*)&gDb_tRamDMC_C0.u8CS_MotorLimitIndicator, (TVoid*)&gDb_ctSetRamDMC_C0.u8Def_CS_MotorLimitIndicator, (TVoid*)&gDb_ctSetRamDMC_C0.au8Rng_CS_MotorLimitIndicator[0]},
    { &gDb_ctSetRamDMC_C0.tInf_CS_RollOverCount, (TVoid*)&gDb_tRamDMC_C0.u8CS_RollOverCount, (TVoid*)&gDb_ctSetRamDMC_C0.u8Def_CS_RollOverCount, (TVoid*)&gDb_ctSetRamDMC_C0.au8Rng_CS_RollOverCount[0]},
    { &gDb_ctSetRamDMC_C0.tInf_CS_BattVoltage, (TVoid*)&gDb_tRamDMC_C0.u16CS_BattVoltage, (TVoid*)&gDb_ctSetRamDMC_C0.u16Def_CS_BattVoltage, (TVoid*)&gDb_ctSetRamDMC_C0.au16Rng_CS_BattVoltage[0]},
    { &gDb_ctSetRamDMC_C0.tInf_CS_BattDischargeIndicatorValue, (TVoid*)&gDb_tRamDMC_C0.u8CS_BattDischargeIndicatorValue, (TVoid*)&gDb_ctSetRamDMC_C0.u8Def_CS_BattDischargeIndicatorValue, (TVoid*)&gDb_ctSetRamDMC_C0.au8Rng_CS_BattDischargeIndicatorValue[0]},
    { &gDb_ctSetRamDMC_C0.tInf_WaitingHeartbeat, (TVoid*)&gDb_tRamDMC_C0.boWaitingHeartbeat, (TVoid*)&gDb_ctSetRamDMC_C0.boDef_WaitingHeartbeat, (TVoid*)&gDb_ctSetRamDMC_C0.aboRng_WaitingHeartbeat[0]},
    { &gDb_ctSetRamDMC_C0.tInf_TimeOutDmcHeartbeat, (TVoid*)&gDb_tRamDMC_C0.boTimeOutDmcHeartbeat, (TVoid*)&gDb_ctSetRamDMC_C0.boDef_TimeOutDmcHeartbeat, (TVoid*)&gDb_ctSetRamDMC_C0.aboRng_TimeOutDmcHeartbeat[0]},
    { &gDb_ctSetRamDMC_C0.tInf_DmcHeartbeat, (TVoid*)&gDb_tRamDMC_C0.u8DmcHeartbeat, (TVoid*)&gDb_ctSetRamDMC_C0.u8Def_DmcHeartbeat, (TVoid*)&gDb_ctSetRamDMC_C0.au8Rng_DmcHeartbeat[0]},
    { &gDb_ctSetRamDMC_C0.tInf_PowerOnOkDmc, (TVoid*)&gDb_tRamDMC_C0.boPowerOnOkDmc, (TVoid*)&gDb_ctSetRamDMC_C0.boDef_PowerOnOkDmc, (TVoid*)&gDb_ctSetRamDMC_C0.aboRng_PowerOnOkDmc[0]},
    { &gDb_ctSetRamDMC_C0.tInf_OperationnalDmc, (TVoid*)&gDb_tRamDMC_C0.boOperationnalDmc, (TVoid*)&gDb_ctSetRamDMC_C0.boDef_OperationnalDmc, (TVoid*)&gDb_ctSetRamDMC_C0.aboRng_OperationnalDmc[0]},
    { &gDb_ctSetRamDMC_C0.tInf_GoToOperationnal, (TVoid*)&gDb_tRamDMC_C0.boGoToOperationnal, (TVoid*)&gDb_ctSetRamDMC_C0.boDef_GoToOperationnal, (TVoid*)&gDb_ctSetRamDMC_C0.aboRng_GoToOperationnal[0]},
    { &gDb_ctSetRamDMC_C0.tInf_NewGoToOperationnal, (TVoid*)&gDb_tRamDMC_C0.boNewGoToOperationnal, (TVoid*)&gDb_ctSetRamDMC_C0.boDef_NewGoToOperationnal, (TVoid*)&gDb_ctSetRamDMC_C0.aboRng_NewGoToOperationnal[0]},
    { &gDb_ctSetRamDMC_C0.tInf_SendCommandNMT, (TVoid*)&gDb_tRamDMC_C0.boSendCommandNMT, (TVoid*)&gDb_ctSetRamDMC_C0.boDef_SendCommandNMT, (TVoid*)&gDb_ctSetRamDMC_C0.aboRng_SendCommandNMT[0]},
    { &gDb_ctSetRamDMC_C0.tInf_StepRazDmc, (TVoid*)&gDb_tRamDMC_C0.i16StepRazDmc, (TVoid*)&gDb_ctSetRamDMC_C0.i16Def_StepRazDmc, (TVoid*)&gDb_ctSetRamDMC_C0.ai16Rng_StepRazDmc[0]},
    { &gDb_ctSetRamDMC_C0.tInf_CommandRazDmcOnGoing, (TVoid*)&gDb_tRamDMC_C0.boCommandRazDmcOnGoing, (TVoid*)&gDb_ctSetRamDMC_C0.boDef_CommandRazDmcOnGoing, (TVoid*)&gDb_ctSetRamDMC_C0.aboRng_CommandRazDmcOnGoing[0]},
    { &gDb_ctSetRamDMC_C0.tInf_Dig4InputCommandSTO, (TVoid*)&gDb_tRamDMC_C0.boDig4InputCommandSTO, (TVoid*)&gDb_ctSetRamDMC_C0.boDef_Dig4InputCommandSTO, (TVoid*)&gDb_ctSetRamDMC_C0.aboRng_Dig4InputCommandSTO[0]},
    { &gDb_ctSetRamDMC_C0.tInf_ActiveFaultRazDmc, (TVoid*)&gDb_tRamDMC_C0.boActiveFaultRazDmc, (TVoid*)&gDb_ctSetRamDMC_C0.boDef_ActiveFaultRazDmc, (TVoid*)&gDb_ctSetRamDMC_C0.aboRng_ActiveFaultRazDmc[0]},
    { &gDb_ctSetRamDMC_C0.tInf_ActiveFaultDmc, (TVoid*)&gDb_tRamDMC_C0.boActiveFaultDmc, (TVoid*)&gDb_ctSetRamDMC_C0.boDef_ActiveFaultDmc, (TVoid*)&gDb_ctSetRamDMC_C0.aboRng_ActiveFaultDmc[0]}
};

// Database Entry --------------------------------------------------------------------------------

const TDbRoot gDb_ctRoot = 
{
    2,                                                      //u8VersMajor - [NUM] Database Versionnumber Major
    1,                                                      //u8VerMinor - [NUM] Database Versionnumber Minor
    1988377983U,                                            //u32DbmCheckNo - [NUM] Database Check-Number
    36,                                                     //u8ListMax - [NUM] Count of Lists
    &gDb_catList[0]                                         //pctListTab - [STC] Pointer to the first list entry
};

// Database List's -------------------------------------------------------------------------------

const TDbList gDb_catList[36] = 
{
    {
    //!< ** General List Setting
        "RamEcuInputsC0",                                   //!< achName[16]
        DB_RAM_ECU,                                         //!< u8ListClass - [DEF] RAM/NVMEM
        DB_RAM,                                             //!< u8ListType  - [DEF] RAM/NVMEM
        0,                                                  //!< u8ListIdx - List Index
        74,                                                 //!< u16VarMax - [NUM] Max Variable
        74,                                                 //!< u16NumValues - [NUM] Number of addressable values in list(counting each array value)
        148,                                                //!< u16ShadowBytes - [NUM] need Shadow RAM in Byte
        1660U,                                              //!< u32Password - [NUM] DbList unique key
        &gDb_tRamEcuInputsC0.tListRoot,                     //!< cptListRoot - [NUM] ListRoot
    //!< ** RAM General Setting
        &gDb_catVarTabRamEcuInputsC0[0],                    //!< cptRamVarTab - [STC] Pointer of RAM
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
        "RamEcuOutputsC0",                                  //!< achName[16]
        DB_RAM_ECU,                                         //!< u8ListClass - [DEF] RAM/NVMEM
        DB_RAM,                                             //!< u8ListType  - [DEF] RAM/NVMEM
        1,                                                  //!< u8ListIdx - List Index
        101,                                                //!< u16VarMax - [NUM] Max Variable
        101,                                                //!< u16NumValues - [NUM] Number of addressable values in list(counting each array value)
        158,                                                //!< u16ShadowBytes - [NUM] need Shadow RAM in Byte
        1328U,                                              //!< u32Password - [NUM] DbList unique key
        &gDb_tRamEcuOutputsC0.tListRoot,                    //!< cptListRoot - [NUM] ListRoot
    //!< ** RAM General Setting
        &gDb_catVarTabRamEcuOutputsC0[0],                   //!< cptRamVarTab - [STC] Pointer of RAM
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
        "RamGeneralC0",                                     //!< achName[16]
        DB_RAM_ECU,                                         //!< u8ListClass - [DEF] RAM/NVMEM
        DB_RAM,                                             //!< u8ListType  - [DEF] RAM/NVMEM
        2,                                                  //!< u8ListIdx - List Index
        117,                                                //!< u16VarMax - [NUM] Max Variable
        117,                                                //!< u16NumValues - [NUM] Number of addressable values in list(counting each array value)
        179,                                                //!< u16ShadowBytes - [NUM] need Shadow RAM in Byte
        1539U,                                              //!< u32Password - [NUM] DbList unique key
        &gDb_tRamGeneralC0.tListRoot,                       //!< cptListRoot - [NUM] ListRoot
    //!< ** RAM General Setting
        &gDb_catVarTabRamGeneralC0[0],                      //!< cptRamVarTab - [STC] Pointer of RAM
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
        "NvOptionsC0",                                      //!< achName[16]
        DB_NVM_OPT,                                         //!< u8ListClass - [DEF] RAM/NVMEM
        DB_NVMEM,                                           //!< u8ListType  - [DEF] RAM/NVMEM
        3,                                                  //!< u8ListIdx - List Index
        12,                                                 //!< u16VarMax - [NUM] Max Variable
        12,                                                 //!< u16NumValues - [NUM] Number of addressable values in list(counting each array value)
        12,                                                 //!< u16ShadowBytes - [NUM] need Shadow RAM in Byte
        12U,                                                //!< u32Password - [NUM] DbList unique key
        &gDb_tNvOptionsC0.tListRoot,                        //!< cptListRoot - [NUM] ListRoot
    //!< ** RAM General Setting
        NULL,                                               //!< cptRamVarTab - [STC] Pointer of RAM
        DB_SINGLE,                                          //!< u8RamMode - [DEF] Single/Double
        TRUE,                                               //!< boRamCrc - [DEF] with CRC
    //!< ** NVMEM General Setting
        &gDb_catVarTabNvOptionsC0[0],                       //!< cptNvmVarTab - [STC] Pointer of NVMEM
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
                15926,                                      //!< u32ErrNum
                FMI_31_CONDITION_EXISTS,                    //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            },
            { //!< NVMEM Store
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT5_MAL,                               //!< u8ErrCat
                0xAAAA,                                     //!< u16ErrAccLevel
                15927,                                      //!< u32ErrNum
                FMI_31_CONDITION_EXISTS,                    //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            },
            { //!<  NVMEM Backup
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT5_MAL,                               //!< u8ErrCat
                0xAAAA,                                     //!< u16ErrAccLevel
                1203,                                       //!< u32ErrNum
                FMI_31_CONDITION_EXISTS,                    //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            }
        }
    },
    {
    //!< ** General List Setting
        "NvMemoryC0",                                       //!< achName[16]
        DB_NVM_MEM,                                         //!< u8ListClass - [DEF] RAM/NVMEM
        DB_NVMEM,                                           //!< u8ListType  - [DEF] RAM/NVMEM
        4,                                                  //!< u8ListIdx - List Index
        20,                                                 //!< u16VarMax - [NUM] Max Variable
        20,                                                 //!< u16NumValues - [NUM] Number of addressable values in list(counting each array value)
        33,                                                 //!< u16ShadowBytes - [NUM] need Shadow RAM in Byte
        332U,                                               //!< u32Password - [NUM] DbList unique key
        &gDb_tNvMemoryC0.tListRoot,                         //!< cptListRoot - [NUM] ListRoot
    //!< ** RAM General Setting
        NULL,                                               //!< cptRamVarTab - [STC] Pointer of RAM
        DB_SINGLE,                                          //!< u8RamMode - [DEF] Single/Double
        TRUE,                                               //!< boRamCrc - [DEF] with CRC
    //!< ** NVMEM General Setting
        &gDb_catVarTabNvMemoryC0[0],                        //!< cptNvmVarTab - [STC] Pointer of NVMEM
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
                15928,                                      //!< u32ErrNum
                FMI_31_CONDITION_EXISTS,                    //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            },
            { //!< NVMEM Store
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT5_MAL,                               //!< u8ErrCat
                0xAAAA,                                     //!< u16ErrAccLevel
                15929,                                      //!< u32ErrNum
                FMI_31_CONDITION_EXISTS,                    //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            },
            { //!<  NVMEM Backup
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT5_MAL,                               //!< u8ErrCat
                0xAAAA,                                     //!< u16ErrAccLevel
                15930,                                      //!< u32ErrNum
                FMI_31_CONDITION_EXISTS,                    //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            }
        }
    },
    {
    //!< ** General List Setting
        "NvParametersC0",                                   //!< achName[16]
        DB_NVM_PAR,                                         //!< u8ListClass - [DEF] RAM/NVMEM
        DB_NVMEM,                                           //!< u8ListType  - [DEF] RAM/NVMEM
        5,                                                  //!< u8ListIdx - List Index
        101,                                                //!< u16VarMax - [NUM] Max Variable
        111,                                                //!< u16NumValues - [NUM] Number of addressable values in list(counting each array value)
        207,                                                //!< u16ShadowBytes - [NUM] need Shadow RAM in Byte
        2186U,                                              //!< u32Password - [NUM] DbList unique key
        &gDb_tNvParametersC0.tListRoot,                     //!< cptListRoot - [NUM] ListRoot
    //!< ** RAM General Setting
        NULL,                                               //!< cptRamVarTab - [STC] Pointer of RAM
        DB_SINGLE,                                          //!< u8RamMode - [DEF] Single/Double
        TRUE,                                               //!< boRamCrc - [DEF] with CRC
    //!< ** NVMEM General Setting
        &gDb_catVarTabNvParametersC0[0],                    //!< cptNvmVarTab - [STC] Pointer of NVMEM
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
                15931,                                      //!< u32ErrNum
                FMI_31_CONDITION_EXISTS,                    //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            },
            { //!< NVMEM Store
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT5_MAL,                               //!< u8ErrCat
                0xAAAA,                                     //!< u16ErrAccLevel
                15932,                                      //!< u32ErrNum
                FMI_31_CONDITION_EXISTS,                    //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            },
            { //!<  NVMEM Backup
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT5_MAL,                               //!< u8ErrCat
                0xAAAA,                                     //!< u16ErrAccLevel
                15933,                                      //!< u32ErrNum
                FMI_31_CONDITION_EXISTS,                    //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            }
        }
    },
    {
    //!< ** General List Setting
        "NvCalibrationC0",                                  //!< achName[16]
        DB_NVM_CAL,                                         //!< u8ListClass - [DEF] RAM/NVMEM
        DB_NVMEM,                                           //!< u8ListType  - [DEF] RAM/NVMEM
        6,                                                  //!< u8ListIdx - List Index
        31,                                                 //!< u16VarMax - [NUM] Max Variable
        51,                                                 //!< u16NumValues - [NUM] Number of addressable values in list(counting each array value)
        101,                                                //!< u16ShadowBytes - [NUM] need Shadow RAM in Byte
        729U,                                               //!< u32Password - [NUM] DbList unique key
        &gDb_tNvCalibrationC0.tListRoot,                    //!< cptListRoot - [NUM] ListRoot
    //!< ** RAM General Setting
        NULL,                                               //!< cptRamVarTab - [STC] Pointer of RAM
        DB_SINGLE,                                          //!< u8RamMode - [DEF] Single/Double
        TRUE,                                               //!< boRamCrc - [DEF] with CRC
    //!< ** NVMEM General Setting
        &gDb_catVarTabNvCalibrationC0[0],                   //!< cptNvmVarTab - [STC] Pointer of NVMEM
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
        700,                                                //!< u16NvmAutoStartAdr - [NUM] Autostart Adr
        3100,                                               //!< u16NvmDoubleStartAdr - [NUM] - List Double Start Adr
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
                15934,                                      //!< u32ErrNum
                FMI_31_CONDITION_EXISTS,                    //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            },
            { //!< NVMEM Store
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT5_MAL,                               //!< u8ErrCat
                0xAAAA,                                     //!< u16ErrAccLevel
                15935,                                      //!< u32ErrNum
                FMI_31_CONDITION_EXISTS,                    //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            },
            { //!<  NVMEM Backup
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT5_MAL,                               //!< u8ErrCat
                0xAAAA,                                     //!< u16ErrAccLevel
                15936,                                      //!< u32ErrNum
                FMI_31_CONDITION_EXISTS,                    //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            }
        }
    },
    {
    //!< ** General List Setting
        "Ram48XsInputsC0",                                  //!< achName[16]
        DB_RAM_ECU,                                         //!< u8ListClass - [DEF] RAM/NVMEM
        DB_RAM,                                             //!< u8ListType  - [DEF] RAM/NVMEM
        7,                                                  //!< u8ListIdx - List Index
        56,                                                 //!< u16VarMax - [NUM] Max Variable
        56,                                                 //!< u16NumValues - [NUM] Number of addressable values in list(counting each array value)
        81,                                                 //!< u16ShadowBytes - [NUM] need Shadow RAM in Byte
        640U,                                               //!< u32Password - [NUM] DbList unique key
        &gDb_tRam48XsInputsC0.tListRoot,                    //!< cptListRoot - [NUM] ListRoot
    //!< ** RAM General Setting
        &gDb_catVarTabRam48XsInputsC0[0],                   //!< cptRamVarTab - [STC] Pointer of RAM
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
        "Ram48XsOutputsC0",                                 //!< achName[16]
        DB_RAM_ECU,                                         //!< u8ListClass - [DEF] RAM/NVMEM
        DB_RAM,                                             //!< u8ListType  - [DEF] RAM/NVMEM
        8,                                                  //!< u8ListIdx - List Index
        18,                                                 //!< u16VarMax - [NUM] Max Variable
        18,                                                 //!< u16NumValues - [NUM] Number of addressable values in list(counting each array value)
        32,                                                 //!< u16ShadowBytes - [NUM] need Shadow RAM in Byte
        322U,                                               //!< u32Password - [NUM] DbList unique key
        &gDb_tRam48XsOutputsC0.tListRoot,                   //!< cptListRoot - [NUM] ListRoot
    //!< ** RAM General Setting
        &gDb_catVarTabRam48XsOutputsC0[0],                  //!< cptRamVarTab - [STC] Pointer of RAM
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
        "RamEcuInputRadioControl",                          //!< achName[16]
        DB_RAM_ECU,                                         //!< u8ListClass - [DEF] RAM/NVMEM
        DB_RAM,                                             //!< u8ListType  - [DEF] RAM/NVMEM
        9,                                                  //!< u8ListIdx - List Index
        20,                                                 //!< u16VarMax - [NUM] Max Variable
        20,                                                 //!< u16NumValues - [NUM] Number of addressable values in list(counting each array value)
        23,                                                 //!< u16ShadowBytes - [NUM] need Shadow RAM in Byte
        108U,                                               //!< u32Password - [NUM] DbList unique key
        &gDb_tRamEcuInputRadioControl.tListRoot,            //!< cptListRoot - [NUM] ListRoot
    //!< ** RAM General Setting
        &gDb_catVarTabRamEcuInputRadioControl[0],           //!< cptRamVarTab - [STC] Pointer of RAM
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
        "RamCanSensorC0",                                   //!< achName[16]
        DB_RAM_ECU,                                         //!< u8ListClass - [DEF] RAM/NVMEM
        DB_RAM,                                             //!< u8ListType  - [DEF] RAM/NVMEM
        10,                                                 //!< u8ListIdx - List Index
        30,                                                 //!< u16VarMax - [NUM] Max Variable
        30,                                                 //!< u16NumValues - [NUM] Number of addressable values in list(counting each array value)
        63,                                                 //!< u16ShadowBytes - [NUM] need Shadow RAM in Byte
        665U,                                               //!< u32Password - [NUM] DbList unique key
        &gDb_tRamCanSensorC0.tListRoot,                     //!< cptListRoot - [NUM] ListRoot
    //!< ** RAM General Setting
        &gDb_catVarTabRamCanSensorC0[0],                    //!< cptRamVarTab - [STC] Pointer of RAM
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
        "RamEvision7C0",                                    //!< achName[16]
        DB_RAM_ECU,                                         //!< u8ListClass - [DEF] RAM/NVMEM
        DB_RAM,                                             //!< u8ListType  - [DEF] RAM/NVMEM
        11,                                                 //!< u8ListIdx - List Index
        64,                                                 //!< u16VarMax - [NUM] Max Variable
        64,                                                 //!< u16NumValues - [NUM] Number of addressable values in list(counting each array value)
        67,                                                 //!< u16ShadowBytes - [NUM] need Shadow RAM in Byte
        196U,                                               //!< u32Password - [NUM] DbList unique key
        &gDb_tRamEvision7C0.tListRoot,                      //!< cptListRoot - [NUM] ListRoot
    //!< ** RAM General Setting
        &gDb_catVarTabRamEvision7C0[0],                     //!< cptRamVarTab - [STC] Pointer of RAM
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
        "RamEcuC0RcvFromC1",                                //!< achName[16]
        DB_RAM_ECU,                                         //!< u8ListClass - [DEF] RAM/NVMEM
        DB_RAM,                                             //!< u8ListType  - [DEF] RAM/NVMEM
        12,                                                 //!< u8ListIdx - List Index
        49,                                                 //!< u16VarMax - [NUM] Max Variable
        49,                                                 //!< u16NumValues - [NUM] Number of addressable values in list(counting each array value)
        64,                                                 //!< u16ShadowBytes - [NUM] need Shadow RAM in Byte
        310U,                                               //!< u32Password - [NUM] DbList unique key
        &gDb_tRamEcuC0RcvFromC1.tListRoot,                  //!< cptListRoot - [NUM] ListRoot
    //!< ** RAM General Setting
        &gDb_catVarTabRamEcuC0RcvFromC1[0],                 //!< cptRamVarTab - [STC] Pointer of RAM
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
        "RamEcuCaliCmdC0",                                  //!< achName[16]
        DB_RAM_ECU,                                         //!< u8ListClass - [DEF] RAM/NVMEM
        DB_RAM,                                             //!< u8ListType  - [DEF] RAM/NVMEM
        13,                                                 //!< u8ListIdx - List Index
        5,                                                  //!< u16VarMax - [NUM] Max Variable
        5,                                                  //!< u16NumValues - [NUM] Number of addressable values in list(counting each array value)
        5,                                                  //!< u16ShadowBytes - [NUM] need Shadow RAM in Byte
        5U,                                                 //!< u32Password - [NUM] DbList unique key
        &gDb_tRamEcuCaliCmdC0.tListRoot,                    //!< cptListRoot - [NUM] ListRoot
    //!< ** RAM General Setting
        &gDb_catVarTabRamEcuCaliCmdC0[0],                   //!< cptRamVarTab - [STC] Pointer of RAM
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
        "NvParamSpeedMaxRail",                              //!< achName[16]
        DB_NVM_PAR,                                         //!< u8ListClass - [DEF] RAM/NVMEM
        DB_NVMEM,                                           //!< u8ListType  - [DEF] RAM/NVMEM
        14,                                                 //!< u8ListIdx - List Index
        45,                                                 //!< u16VarMax - [NUM] Max Variable
        45,                                                 //!< u16NumValues - [NUM] Number of addressable values in list(counting each array value)
        90,                                                 //!< u16ShadowBytes - [NUM] need Shadow RAM in Byte
        1014U,                                              //!< u32Password - [NUM] DbList unique key
        &gDb_tNvParamSpeedMaxRail.tListRoot,                //!< cptListRoot - [NUM] ListRoot
    //!< ** RAM General Setting
        NULL,                                               //!< cptRamVarTab - [STC] Pointer of RAM
        DB_SINGLE,                                          //!< u8RamMode - [DEF] Single/Double
        TRUE,                                               //!< boRamCrc - [DEF] with CRC
    //!< ** NVMEM General Setting
        &gDb_catVarTabNvParamSpeedMaxRail[0],               //!< cptNvmVarTab - [STC] Pointer of NVMEM
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
        900,                                                //!< u16NvmAutoStartAdr - [NUM] Autostart Adr
        3300,                                               //!< u16NvmDoubleStartAdr - [NUM] - List Double Start Adr
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
                16071,                                      //!< u32ErrNum
                FMI_31_CONDITION_EXISTS,                    //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            },
            { //!< NVMEM Store
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT5_MAL,                               //!< u8ErrCat
                0xAAAA,                                     //!< u16ErrAccLevel
                16072,                                      //!< u32ErrNum
                FMI_31_CONDITION_EXISTS,                    //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            },
            { //!<  NVMEM Backup
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT5_MAL,                               //!< u8ErrCat
                0xAAAA,                                     //!< u16ErrAccLevel
                16073,                                      //!< u32ErrNum
                FMI_31_CONDITION_EXISTS,                    //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            }
        }
    },
    {
    //!< ** General List Setting
        "RamSpeedMaxRail",                                  //!< achName[16]
        DB_RAM_ECU,                                         //!< u8ListClass - [DEF] RAM/NVMEM
        DB_RAM,                                             //!< u8ListType  - [DEF] RAM/NVMEM
        15,                                                 //!< u8ListIdx - List Index
        48,                                                 //!< u16VarMax - [NUM] Max Variable
        48,                                                 //!< u16NumValues - [NUM] Number of addressable values in list(counting each array value)
        53,                                                 //!< u16ShadowBytes - [NUM] need Shadow RAM in Byte
        175U,                                               //!< u32Password - [NUM] DbList unique key
        &gDb_tRamSpeedMaxRail.tListRoot,                    //!< cptListRoot - [NUM] ListRoot
    //!< ** RAM General Setting
        &gDb_catVarTabRamSpeedMaxRail[0],                   //!< cptRamVarTab - [STC] Pointer of RAM
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
        "NvParamBrakeTest",                                 //!< achName[16]
        DB_NVM_PAR,                                         //!< u8ListClass - [DEF] RAM/NVMEM
        DB_NVMEM,                                           //!< u8ListType  - [DEF] RAM/NVMEM
        16,                                                 //!< u8ListIdx - List Index
        20,                                                 //!< u16VarMax - [NUM] Max Variable
        20,                                                 //!< u16NumValues - [NUM] Number of addressable values in list(counting each array value)
        41,                                                 //!< u16ShadowBytes - [NUM] need Shadow RAM in Byte
        468U,                                               //!< u32Password - [NUM] DbList unique key
        &gDb_tNvParamBrakeTest.tListRoot,                   //!< cptListRoot - [NUM] ListRoot
    //!< ** RAM General Setting
        NULL,                                               //!< cptRamVarTab - [STC] Pointer of RAM
        DB_SINGLE,                                          //!< u8RamMode - [DEF] Single/Double
        TRUE,                                               //!< boRamCrc - [DEF] with CRC
    //!< ** NVMEM General Setting
        &gDb_catVarTabNvParamBrakeTest[0],                  //!< cptNvmVarTab - [STC] Pointer of NVMEM
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
        1050,                                               //!< u16NvmAutoStartAdr - [NUM] Autostart Adr
        3450,                                               //!< u16NvmDoubleStartAdr - [NUM] - List Double Start Adr
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
                16087,                                      //!< u32ErrNum
                FMI_31_CONDITION_EXISTS,                    //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            },
            { //!< NVMEM Store
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT5_MAL,                               //!< u8ErrCat
                0xAAAA,                                     //!< u16ErrAccLevel
                16088,                                      //!< u32ErrNum
                FMI_31_CONDITION_EXISTS,                    //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            },
            { //!<  NVMEM Backup
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT5_MAL,                               //!< u8ErrCat
                0xAAAA,                                     //!< u16ErrAccLevel
                16090,                                      //!< u32ErrNum
                FMI_31_CONDITION_EXISTS,                    //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            }
        }
    },
    {
    //!< ** General List Setting
        "RamBrakeTest",                                     //!< achName[16]
        DB_RAM_ECU,                                         //!< u8ListClass - [DEF] RAM/NVMEM
        DB_RAM,                                             //!< u8ListType  - [DEF] RAM/NVMEM
        17,                                                 //!< u8ListIdx - List Index
        43,                                                 //!< u16VarMax - [NUM] Max Variable
        43,                                                 //!< u16NumValues - [NUM] Number of addressable values in list(counting each array value)
        48,                                                 //!< u16ShadowBytes - [NUM] need Shadow RAM in Byte
        196U,                                               //!< u32Password - [NUM] DbList unique key
        &gDb_tRamBrakeTest.tListRoot,                       //!< cptListRoot - [NUM] ListRoot
    //!< ** RAM General Setting
        &gDb_catVarTabRamBrakeTest[0],                      //!< cptRamVarTab - [STC] Pointer of RAM
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
        "NvParamRailWorkSafetyC0",                          //!< achName[16]
        DB_NVM_PAR,                                         //!< u8ListClass - [DEF] RAM/NVMEM
        DB_NVMEM,                                           //!< u8ListType  - [DEF] RAM/NVMEM
        18,                                                 //!< u8ListIdx - List Index
        25,                                                 //!< u16VarMax - [NUM] Max Variable
        25,                                                 //!< u16NumValues - [NUM] Number of addressable values in list(counting each array value)
        50,                                                 //!< u16ShadowBytes - [NUM] need Shadow RAM in Byte
        540U,                                               //!< u32Password - [NUM] DbList unique key
        &gDb_tNvParamRailWorkSafetyC0.tListRoot,            //!< cptListRoot - [NUM] ListRoot
    //!< ** RAM General Setting
        NULL,                                               //!< cptRamVarTab - [STC] Pointer of RAM
        DB_SINGLE,                                          //!< u8RamMode - [DEF] Single/Double
        FALSE,                                              //!< boRamCrc - [DEF] with CRC
    //!< ** NVMEM General Setting
        &gDb_catVarTabNvParamRailWorkSafetyC0[0],           //!< cptNvmVarTab - [STC] Pointer of NVMEM
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
                16099,                                      //!< u32ErrNum
                FMI_31_CONDITION_EXISTS,                    //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            },
            { //!< NVMEM Store
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT5_MAL,                               //!< u8ErrCat
                0xAAAA,                                     //!< u16ErrAccLevel
                16100,                                      //!< u32ErrNum
                FMI_31_CONDITION_EXISTS,                    //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            },
            { //!<  NVMEM Backup
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT5_MAL,                               //!< u8ErrCat
                0xAAAA,                                     //!< u16ErrAccLevel
                16101,                                      //!< u32ErrNum
                FMI_31_CONDITION_EXISTS,                    //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            }
        }
    },
    {
    //!< ** General List Setting
        "RamRailWorkSafetyC0",                              //!< achName[16]
        DB_RAM_ECU,                                         //!< u8ListClass - [DEF] RAM/NVMEM
        DB_RAM,                                             //!< u8ListType  - [DEF] RAM/NVMEM
        19,                                                 //!< u8ListIdx - List Index
        33,                                                 //!< u16VarMax - [NUM] Max Variable
        33,                                                 //!< u16NumValues - [NUM] Number of addressable values in list(counting each array value)
        37,                                                 //!< u16ShadowBytes - [NUM] need Shadow RAM in Byte
        107U,                                               //!< u32Password - [NUM] DbList unique key
        &gDb_tRamRailWorkSafetyC0.tListRoot,                //!< cptListRoot - [NUM] ListRoot
    //!< ** RAM General Setting
        &gDb_catVarTabRamRailWorkSafetyC0[0],               //!< cptRamVarTab - [STC] Pointer of RAM
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
    },
    {
    //!< ** General List Setting
        "RamTransportPosC0",                                //!< achName[16]
        DB_RAM_ECU,                                         //!< u8ListClass - [DEF] RAM/NVMEM
        DB_RAM,                                             //!< u8ListType  - [DEF] RAM/NVMEM
        20,                                                 //!< u8ListIdx - List Index
        3,                                                  //!< u16VarMax - [NUM] Max Variable
        3,                                                  //!< u16NumValues - [NUM] Number of addressable values in list(counting each array value)
        4,                                                  //!< u16ShadowBytes - [NUM] need Shadow RAM in Byte
        34U,                                                //!< u32Password - [NUM] DbList unique key
        &gDb_tRamTransportPosC0.tListRoot,                  //!< cptListRoot - [NUM] ListRoot
    //!< ** RAM General Setting
        &gDb_catVarTabRamTransportPosC0[0],                 //!< cptRamVarTab - [STC] Pointer of RAM
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
        "NvParamTransportPosC0",                            //!< achName[16]
        DB_NVM_PAR,                                         //!< u8ListClass - [DEF] RAM/NVMEM
        DB_NVMEM,                                           //!< u8ListType  - [DEF] RAM/NVMEM
        21,                                                 //!< u8ListIdx - List Index
        5,                                                  //!< u16VarMax - [NUM] Max Variable
        5,                                                  //!< u16NumValues - [NUM] Number of addressable values in list(counting each array value)
        10,                                                 //!< u16ShadowBytes - [NUM] need Shadow RAM in Byte
        100U,                                               //!< u32Password - [NUM] DbList unique key
        &gDb_tNvParamTransportPosC0.tListRoot,              //!< cptListRoot - [NUM] ListRoot
    //!< ** RAM General Setting
        NULL,                                               //!< cptRamVarTab - [STC] Pointer of RAM
        DB_SINGLE,                                          //!< u8RamMode - [DEF] Single/Double
        TRUE,                                               //!< boRamCrc - [DEF] with CRC
    //!< ** NVMEM General Setting
        &gDb_catVarTabNvParamTransportPosC0[0],             //!< cptNvmVarTab - [STC] Pointer of NVMEM
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
                16152,                                      //!< u32ErrNum
                FMI_31_CONDITION_EXISTS,                    //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            },
            { //!< NVMEM Store
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT5_MAL,                               //!< u8ErrCat
                0xAAAA,                                     //!< u16ErrAccLevel
                16154,                                      //!< u32ErrNum
                FMI_31_CONDITION_EXISTS,                    //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            },
            { //!<  NVMEM Backup
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT5_MAL,                               //!< u8ErrCat
                0xAAAA,                                     //!< u16ErrAccLevel
                16155,                                      //!< u32ErrNum
                FMI_31_CONDITION_EXISTS,                    //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            }
        }
    },
    {
    //!< ** General List Setting
        "RamBreakInBrakeC0",                                //!< achName[16]
        DB_RAM_ECU,                                         //!< u8ListClass - [DEF] RAM/NVMEM
        DB_RAM,                                             //!< u8ListType  - [DEF] RAM/NVMEM
        22,                                                 //!< u8ListIdx - List Index
        18,                                                 //!< u16VarMax - [NUM] Max Variable
        18,                                                 //!< u16NumValues - [NUM] Number of addressable values in list(counting each array value)
        21,                                                 //!< u16ShadowBytes - [NUM] need Shadow RAM in Byte
        96U,                                                //!< u32Password - [NUM] DbList unique key
        &gDb_tRamBreakInBrakeC0.tListRoot,                  //!< cptListRoot - [NUM] ListRoot
    //!< ** RAM General Setting
        &gDb_catVarTabRamBreakInBrakeC0[0],                 //!< cptRamVarTab - [STC] Pointer of RAM
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
        "RamSelectControlPost",                             //!< achName[16]
        DB_RAM_ECU,                                         //!< u8ListClass - [DEF] RAM/NVMEM
        DB_RAM,                                             //!< u8ListType  - [DEF] RAM/NVMEM
        23,                                                 //!< u8ListIdx - List Index
        10,                                                 //!< u16VarMax - [NUM] Max Variable
        10,                                                 //!< u16NumValues - [NUM] Number of addressable values in list(counting each array value)
        12,                                                 //!< u16ShadowBytes - [NUM] need Shadow RAM in Byte
        42U,                                                //!< u32Password - [NUM] DbList unique key
        &gDb_tRamSelectControlPost.tListRoot,               //!< cptListRoot - [NUM] ListRoot
    //!< ** RAM General Setting
        &gDb_catVarTabRamSelectControlPost[0],              //!< cptRamVarTab - [STC] Pointer of RAM
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
        "NvParamSelectControlPost",                         //!< achName[16]
        DB_NVM_PAR,                                         //!< u8ListClass - [DEF] RAM/NVMEM
        DB_NVMEM,                                           //!< u8ListType  - [DEF] RAM/NVMEM
        24,                                                 //!< u8ListIdx - List Index
        5,                                                  //!< u16VarMax - [NUM] Max Variable
        5,                                                  //!< u16NumValues - [NUM] Number of addressable values in list(counting each array value)
        10,                                                 //!< u16ShadowBytes - [NUM] need Shadow RAM in Byte
        102U,                                               //!< u32Password - [NUM] DbList unique key
        &gDb_tNvParamSelectControlPost.tListRoot,           //!< cptListRoot - [NUM] ListRoot
    //!< ** RAM General Setting
        NULL,                                               //!< cptRamVarTab - [STC] Pointer of RAM
        DB_SINGLE,                                          //!< u8RamMode - [DEF] Single/Double
        TRUE,                                               //!< boRamCrc - [DEF] with CRC
    //!< ** NVMEM General Setting
        &gDb_catVarTabNvParamSelectControlPost[0],          //!< cptNvmVarTab - [STC] Pointer of NVMEM
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
                16213,                                      //!< u32ErrNum
                FMI_31_CONDITION_EXISTS,                    //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            },
            { //!< NVMEM Store
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT5_MAL,                               //!< u8ErrCat
                0xAAAA,                                     //!< u16ErrAccLevel
                16214,                                      //!< u32ErrNum
                FMI_31_CONDITION_EXISTS,                    //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            },
            { //!<  NVMEM Backup
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT5_MAL,                               //!< u8ErrCat
                0xAAAA,                                     //!< u16ErrAccLevel
                16215,                                      //!< u32ErrNum
                FMI_31_CONDITION_EXISTS,                    //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            }
        }
    },
    {
    //!< ** General List Setting
        "RamEvision4C0",                                    //!< achName[16]
        DB_RAM_ECU,                                         //!< u8ListClass - [DEF] RAM/NVMEM
        DB_RAM,                                             //!< u8ListType  - [DEF] RAM/NVMEM
        25,                                                 //!< u8ListIdx - List Index
        26,                                                 //!< u16VarMax - [NUM] Max Variable
        26,                                                 //!< u16NumValues - [NUM] Number of addressable values in list(counting each array value)
        26,                                                 //!< u16ShadowBytes - [NUM] need Shadow RAM in Byte
        53U,                                                //!< u32Password - [NUM] DbList unique key
        &gDb_tRamEvision4C0.tListRoot,                      //!< cptListRoot - [NUM] ListRoot
    //!< ** RAM General Setting
        &gDb_catVarTabRamEvision4C0[0],                     //!< cptRamVarTab - [STC] Pointer of RAM
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
        "NvParamAlarmC0",                                   //!< achName[16]
        DB_NVM_PAR,                                         //!< u8ListClass - [DEF] RAM/NVMEM
        DB_NVMEM,                                           //!< u8ListType  - [DEF] RAM/NVMEM
        26,                                                 //!< u8ListIdx - List Index
        32,                                                 //!< u16VarMax - [NUM] Max Variable
        32,                                                 //!< u16NumValues - [NUM] Number of addressable values in list(counting each array value)
        52,                                                 //!< u16ShadowBytes - [NUM] need Shadow RAM in Byte
        662U,                                               //!< u32Password - [NUM] DbList unique key
        &gDb_tNvParamAlarmC0.tListRoot,                     //!< cptListRoot - [NUM] ListRoot
    //!< ** RAM General Setting
        NULL,                                               //!< cptRamVarTab - [STC] Pointer of RAM
        DB_SINGLE,                                          //!< u8RamMode - [DEF] Single/Double
        TRUE,                                               //!< boRamCrc - [DEF] with CRC
    //!< ** NVMEM General Setting
        &gDb_catVarTabNvParamAlarmC0[0],                    //!< cptNvmVarTab - [STC] Pointer of NVMEM
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
                16239,                                      //!< u32ErrNum
                FMI_31_CONDITION_EXISTS,                    //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            },
            { //!< NVMEM Store
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT5_MAL,                               //!< u8ErrCat
                0xAAAA,                                     //!< u16ErrAccLevel
                16240,                                      //!< u32ErrNum
                FMI_31_CONDITION_EXISTS,                    //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            },
            { //!<  NVMEM Backup
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT5_MAL,                               //!< u8ErrCat
                0xAAAA,                                     //!< u16ErrAccLevel
                16241,                                      //!< u32ErrNum
                FMI_31_CONDITION_EXISTS,                    //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            }
        }
    },
    {
    //!< ** General List Setting
        "RamEcuAlarmC0",                                    //!< achName[16]
        DB_RAM_ECU,                                         //!< u8ListClass - [DEF] RAM/NVMEM
        DB_RAM,                                             //!< u8ListType  - [DEF] RAM/NVMEM
        27,                                                 //!< u8ListIdx - List Index
        8,                                                  //!< u16VarMax - [NUM] Max Variable
        8,                                                  //!< u16NumValues - [NUM] Number of addressable values in list(counting each array value)
        8,                                                  //!< u16ShadowBytes - [NUM] need Shadow RAM in Byte
        8U,                                                 //!< u32Password - [NUM] DbList unique key
        &gDb_tRamEcuAlarmC0.tListRoot,                      //!< cptListRoot - [NUM] ListRoot
    //!< ** RAM General Setting
        &gDb_catVarTabRamEcuAlarmC0[0],                     //!< cptRamVarTab - [STC] Pointer of RAM
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
        "RamEcuC0RcvFailluresFromC1",                       //!< achName[16]
        DB_RAM_ECU,                                         //!< u8ListClass - [DEF] RAM/NVMEM
        DB_RAM,                                             //!< u8ListType  - [DEF] RAM/NVMEM
        28,                                                 //!< u8ListIdx - List Index
        5,                                                  //!< u16VarMax - [NUM] Max Variable
        5,                                                  //!< u16NumValues - [NUM] Number of addressable values in list(counting each array value)
        5,                                                  //!< u16ShadowBytes - [NUM] need Shadow RAM in Byte
        5U,                                                 //!< u32Password - [NUM] DbList unique key
        &gDb_tRamEcuC0RcvFailluresFromC1.tListRoot,         //!< cptListRoot - [NUM] ListRoot
    //!< ** RAM General Setting
        &gDb_catVarTabRamEcuC0RcvFailluresFromC1[0],        //!< cptRamVarTab - [STC] Pointer of RAM
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
        "RamMastDisplayMeasureC0",                          //!< achName[16]
        DB_RAM_ECU,                                         //!< u8ListClass - [DEF] RAM/NVMEM
        DB_RAM,                                             //!< u8ListType  - [DEF] RAM/NVMEM
        29,                                                 //!< u8ListIdx - List Index
        8,                                                  //!< u16VarMax - [NUM] Max Variable
        15,                                                 //!< u16NumValues - [NUM] Number of addressable values in list(counting each array value)
        18,                                                 //!< u16ShadowBytes - [NUM] need Shadow RAM in Byte
        165U,                                               //!< u32Password - [NUM] DbList unique key
        &gDb_tRamMastDisplayMeasureC0.tListRoot,            //!< cptListRoot - [NUM] ListRoot
    //!< ** RAM General Setting
        &gDb_catVarTabRamMastDisplayMeasureC0[0],           //!< cptRamVarTab - [STC] Pointer of RAM
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
        "NvParamMastDisplayC0",                             //!< achName[16]
        DB_NVM_PAR,                                         //!< u8ListClass - [DEF] RAM/NVMEM
        DB_NVMEM,                                           //!< u8ListType  - [DEF] RAM/NVMEM
        30,                                                 //!< u8ListIdx - List Index
        1,                                                  //!< u16VarMax - [NUM] Max Variable
        1,                                                  //!< u16NumValues - [NUM] Number of addressable values in list(counting each array value)
        4,                                                  //!< u16ShadowBytes - [NUM] need Shadow RAM in Byte
        17U,                                                //!< u32Password - [NUM] DbList unique key
        &gDb_tNvParamMastDisplayC0.tListRoot,               //!< cptListRoot - [NUM] ListRoot
    //!< ** RAM General Setting
        NULL,                                               //!< cptRamVarTab - [STC] Pointer of RAM
        DB_SINGLE,                                          //!< u8RamMode - [DEF] Single/Double
        TRUE,                                               //!< boRamCrc - [DEF] with CRC
    //!< ** NVMEM General Setting
        &gDb_catVarTabNvParamMastDisplayC0[0],              //!< cptNvmVarTab - [STC] Pointer of NVMEM
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
                16264,                                      //!< u32ErrNum
                FMI_31_CONDITION_EXISTS,                    //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            },
            { //!< NVMEM Store
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT5_MAL,                               //!< u8ErrCat
                0xAAAA,                                     //!< u16ErrAccLevel
                16265,                                      //!< u32ErrNum
                FMI_31_CONDITION_EXISTS,                    //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            },
            { //!<  NVMEM Backup
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT5_MAL,                               //!< u8ErrCat
                0xAAAA,                                     //!< u16ErrAccLevel
                16266,                                      //!< u32ErrNum
                FMI_31_CONDITION_EXISTS,                    //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            }
        }
    },
    {
    //!< ** General List Setting
        "RamData4C0RcvFromC1",                              //!< achName[16]
        DB_RAM_ECU,                                         //!< u8ListClass - [DEF] RAM/NVMEM
        DB_RAM,                                             //!< u8ListType  - [DEF] RAM/NVMEM
        31,                                                 //!< u8ListIdx - List Index
        18,                                                 //!< u16VarMax - [NUM] Max Variable
        18,                                                 //!< u16NumValues - [NUM] Number of addressable values in list(counting each array value)
        21,                                                 //!< u16ShadowBytes - [NUM] need Shadow RAM in Byte
        108U,                                               //!< u32Password - [NUM] DbList unique key
        &gDb_tRamData4C0RcvFromC1.tListRoot,                //!< cptListRoot - [NUM] ListRoot
    //!< ** RAM General Setting
        &gDb_catVarTabRamData4C0RcvFromC1[0],               //!< cptRamVarTab - [STC] Pointer of RAM
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
        "NvParamGreenEffC0",                                //!< achName[16]
        DB_NVM_PAR,                                         //!< u8ListClass - [DEF] RAM/NVMEM
        DB_NVMEM,                                           //!< u8ListType  - [DEF] RAM/NVMEM
        32,                                                 //!< u8ListIdx - List Index
        31,                                                 //!< u16VarMax - [NUM] Max Variable
        31,                                                 //!< u16NumValues - [NUM] Number of addressable values in list(counting each array value)
        54,                                                 //!< u16ShadowBytes - [NUM] need Shadow RAM in Byte
        680U,                                               //!< u32Password - [NUM] DbList unique key
        &gDb_tNvParamGreenEffC0.tListRoot,                  //!< cptListRoot - [NUM] ListRoot
    //!< ** RAM General Setting
        NULL,                                               //!< cptRamVarTab - [STC] Pointer of RAM
        DB_SINGLE,                                          //!< u8RamMode - [DEF] Single/Double
        FALSE,                                              //!< boRamCrc - [DEF] with CRC
    //!< ** NVMEM General Setting
        &gDb_catVarTabNvParamGreenEffC0[0],                 //!< cptNvmVarTab - [STC] Pointer of NVMEM
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
                ERR_CAT0_NOT,                               //!< u8ErrCat
                0xAAAA,                                     //!< u16ErrAccLevel
                1371,                                       //!< u32ErrNum
                FMI_31_CONDITION_EXISTS,                    //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            },
            { //!< NVMEM Store
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT0_NOT,                               //!< u8ErrCat
                0xAAAA,                                     //!< u16ErrAccLevel
                1372,                                       //!< u32ErrNum
                FMI_31_CONDITION_EXISTS,                    //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            },
            { //!<  NVMEM Backup
                ERR_TYPE_ERROR,                             //!< u8ErrType
                ERR_CAT0_NOT,                               //!< u8ErrCat
                0xAAAA,                                     //!< u16ErrAccLevel
                1373,                                       //!< u32ErrNum
                FMI_31_CONDITION_EXISTS,                    //!< u8ErrMode
                FMIEX_NONE,                                 //!< u8ErrModeExt
                RM_NONE                                     //!< u8ErrRmi
            }
        }
    },
    {
    //!< ** General List Setting
        "RamGreenEffC0",                                    //!< achName[16]
        DB_RAM_ECU,                                         //!< u8ListClass - [DEF] RAM/NVMEM
        DB_RAM,                                             //!< u8ListType  - [DEF] RAM/NVMEM
        33,                                                 //!< u8ListIdx - List Index
        15,                                                 //!< u16VarMax - [NUM] Max Variable
        15,                                                 //!< u16NumValues - [NUM] Number of addressable values in list(counting each array value)
        17,                                                 //!< u16ShadowBytes - [NUM] need Shadow RAM in Byte
        47U,                                                //!< u32Password - [NUM] DbList unique key
        &gDb_tRamGreenEffC0.tListRoot,                      //!< cptListRoot - [NUM] ListRoot
    //!< ** RAM General Setting
        &gDb_catVarTabRamGreenEffC0[0],                     //!< cptRamVarTab - [STC] Pointer of RAM
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
    },
    {
    //!< ** General List Setting
        "RamFlashBatteryC0",                                //!< achName[16]
        DB_RAM_ECU,                                         //!< u8ListClass - [DEF] RAM/NVMEM
        DB_RAM,                                             //!< u8ListType  - [DEF] RAM/NVMEM
        34,                                                 //!< u8ListIdx - List Index
        8,                                                  //!< u16VarMax - [NUM] Max Variable
        8,                                                  //!< u16NumValues - [NUM] Number of addressable values in list(counting each array value)
        10,                                                 //!< u16ShadowBytes - [NUM] need Shadow RAM in Byte
        132U,                                               //!< u32Password - [NUM] DbList unique key
        &gDb_tRamFlashBatteryC0.tListRoot,                  //!< cptListRoot - [NUM] ListRoot
    //!< ** RAM General Setting
        &gDb_catVarTabRamFlashBatteryC0[0],                 //!< cptRamVarTab - [STC] Pointer of RAM
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
    },
    {
    //!< ** General List Setting
        "RamDMC_C0",                                        //!< achName[16]
        DB_RAM_ECU,                                         //!< u8ListClass - [DEF] RAM/NVMEM
        DB_RAM,                                             //!< u8ListType  - [DEF] RAM/NVMEM
        35,                                                 //!< u8ListIdx - List Index
        43,                                                 //!< u16VarMax - [NUM] Max Variable
        43,                                                 //!< u16NumValues - [NUM] Number of addressable values in list(counting each array value)
        56,                                                 //!< u16ShadowBytes - [NUM] need Shadow RAM in Byte
        610U,                                               //!< u32Password - [NUM] DbList unique key
        &gDb_tRamDMC_C0.tListRoot,                          //!< cptListRoot - [NUM] ListRoot
    //!< ** RAM General Setting
        &gDb_catVarTabRamDMC_C0[0],                         //!< cptRamVarTab - [STC] Pointer of RAM
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

