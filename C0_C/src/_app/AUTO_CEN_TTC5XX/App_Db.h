//**************************************************************************************************
//! @crc        1696085695
//! @file       App_Db.h
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

#ifndef __APP_DB_H__
#define __APP_DB_H__

#include <ItfTypes.h>
#include <ItfCoreDb.h>

#include <App_DefEnu.h>

//RAM interface ----------------------------------------------------------------------------
typedef struct
{
    TDbListRoot tListRoot;
    TBit3 bi3PressureBlockOscillationState;                  //!< [[custom]] Pressure Block Oscillation Sensor State
    TInt16 i16PressureBlockOscillationValue;                 //!< [0.1Bar] Pressure Block Oscillation Sensor Value
    TUint16 u16PressureBlockOscillationRawValue;             //!< [0.1mA] Pressure Block Oscillation Sensor Raw value
    TBit3 bi3PressureBrakeSensorState;                       //!< [[custom]] Pressure Brake Sensor State
    TInt16 i16PressureBrakeSensorValue;                      //!< [0.1Bar] Pressure Brake Sensor Value
    TUint16 u16PressureBrakeSensorRawValue;                  //!< [0.1mA] Pressure Brake Sensor Raw value
    TBit3 bi3TemperatureTransmissionState;                   //!< [[custom]] Temperature Transmission Sensor State
    TInt16 i16TemperatureTransmissionValue;                  //!< [°C] Temperature Transmission Sensor Value
    TUint16 u16TemperatureTransmissionRawValue;              //!< [mV] Temperature Transmission Sensor Raw value
    EDiState eFaultPvgLeftTrakState;                         //!< [[custom]] Fault Pvg Left Trak State
    TUint16 u16FaultPvgLeftTrakRawValue;                     //!< [[custom]] Fault Pvg Left Trak Raw Value
    EDiState eFaultPvgRightTrakState;                        //!< [[custom]] Fault Pvg Right Trak State
    TUint16 u16FaultPvgRightTrakRawValue;                    //!< [mV] Fault Pvg Right Trak Raw value
    EDiState eDownAxleOscillantState;                        //!< [[custom]] Down Axle oscillant State
    TUint16 u16DownAxleOscillantRawValuePin0;                //!< [[custom]] Down Axle oscillant  Raw value pin 0 Nc
    TUint16 u16DownAxleOscillantRawValuePin1;                //!< [[custom]] Down Axle oscillant  Raw value pin 1 No
    EDiState eDownAxleFixeState;                             //!< [[custom]] Down Axle fixe state
    TUint16 u16DownAxleFixeRawValuePin0;                     //!< [[custom]] Down Axle fixe Raw value
    TUint16 u16DownAxleFixeRawValuePin1;                     //!< [[custom]] Down Axle fixe Raw value pin 1 No
    EDiState eUpAxleOscillantState;                          //!< [[custom]] Up Axle oscillant state
    TUint16 u16UpAxleOscillantRawValue;                      //!< [[custom]] Up Axle oscillant value
    EDiState eUpAxleFixeState;                               //!< [[custom]] Up Axle fixe state
    TUint16 u16UpAxleFixeRawValue;                           //!< [[custom]] Up Axle fixe raw value
    EDiState eFrameRotationSensor1State;                     //!< [[custom]] Frame rotation sensor 1 state
    TUint16 u16FrameRotationSensor1RawValuePin0;             //!< [[custom]] Frame rotation sensor 1 raw value
    TUint16 u16FrameRotationSensor1RawValuePin1;             //!< [[custom]] Frame rotation sensor 1 raw value Pin 1
    EDiState eRailHookSensorState;                           //!< [[custom]] Rail hook sensor state
    TUint16 u16RailHookSensorRawValue;                       //!< [[custom]] Rail hook sensor raw value
    EDiState eInductiveRailSensorState;                      //!< [[custom]] Inductive Rail sensor state
    TUint16 u16InductiveRailSensorRawValue;                  //!< [[custom]] Inductive Rail sensor raw value
    EDiState eCenteredTurretState;                           //!< [[custom]] Centered turret state
    TUint16 u16CenteredTurretRawValue;                       //!< [[custom]] Centered turret raw value
    EDiState eWorkKeyTrackSideState;                         //!< [[custom]] Work Key track Side state
    TUint16 u16WorkKeyTrackSideRawValue;                     //!< [[custom]] Work Key track Side raw value
    EDiState eFrameRotationSensor2State;                     //!< [[custom]] Frame rotation sensor 2 state
    TUint16 u16FrameRotationSensor2RawValuePin0;             //!< [[custom]] Frame rotation sensor 2 raw value Pin 0
    TUint16 u16FrameRotationSensor2RawValuePin1;             //!< [[custom]] Frame rotation sensor 2 raw value Pin 1
    EDiState eWorkKeyBilateralState;                         //!< [[custom]] Work Key Bilateral state
    TUint16 u16WorkKeyBilateralRawValue;                     //!< [[custom]] Work Key Bilateral raw value
    EDiState eWorkKeyCentredState;                           //!< [[custom]] Work Key Centred state
    TUint16 u16WorkKeyCentredRawValue;                       //!< [[custom]] Work Key Centred raw value
    EDiState eAbutmentTurretTrackSideState;                  //!< [[custom]] Abutment turret track side state
    TUint16 u16AbutmentTurretTrackSideRaw;                   //!< [[custom]] Abutment turret track side raw value
    EDiState eAbutmentTurretCentredSideState;                //!< [[custom]] Abutment Turret Centred Side state
    TUint16 u16AbutmentTurretCentredSideRaw;                 //!< [[custom]] Abutment Turret Centred Side raw value
    EDiState eOscillantAxleSpeedSensorDirState;              //!< [[custom]] Oscillant Axle Speed Sensor Direction state
    TUint16 u16OscillantAxleSpeedSensorDirRaw;               //!< [[custom]] Oscillant Axle Speed Sensor Direction Raw value
    EDiState eFixeAxleSpeedSensorDirState;                   //!< [[custom]] Fixe Axle Speed Sensor Direction state
    TUint16 u16FixeAxleSpeedSensorDirRaw;                    //!< [[custom]] Fixe Axle Speed Sensor Direction Raw value
    EDiState eTrailerGacheState;                             //!< [[custom]] Trailer gache state
    TUint16 u16TrailerGacheRawValue;                         //!< [[custom]] Trailer gache raw value
    EDiState eMeasuringMastSensorFoldedState;                //!< [[custom]] Measuring mast sensor folded state
    TUint16 u16MeasuringMastSensorFoldedRaw;                 //!< [[custom]] Measuring mast sensor folded raw value
    TInt32 i32OscillantAxleFrequency;                        //!< [[custom]] Oscillant Axle frequency
    TInt32 i32FixeAxleFrequency;                             //!< [[custom]] Fixe Axle frequency
    EDiState eAruRadio1ContactState;                         //!< [[custom]] Aru Radio 1 Contact state
    TUint16 u16AruRadio1ContactRawValue;                     //!< [[custom]] Aru Radio 1 Contact raw value
    EDiState eAruRadio2ContactState;                         //!< [[custom]] Aru Radio 2 Contact state
    TUint16 u16AruRadio2ContactRawValue;                     //!< [[custom]] Aru Radio 2 Contact raw value
    EDiState eAru1ContactState;                              //!< [[custom]] Aru 1 Contact state
    TUint16 u16Aru1ContactRawValue;                          //!< [[custom]] Aru 1 Contact raw value
    EDiState eAru2ContactState;                              //!< [[custom]] Aru 2 Contact state
    TUint16 u16Aru2ContactRawValue;                          //!< [[custom]] Aru 2 contact raw value
    EDiState eStarterMotorState;                             //!< [[custom]] Starter motor state
    TUint16 u16StarterMotorRawValue;                         //!< [[custom]] Starter motor raw value
    EDiState eAutorisationHighSpeedKeyState;                 //!< [[custom]] Autorisation High Speed Key State
    TUint16 u16AutorisationHighSpeedKeyRawValue;             //!< [[custom]] Autorisation High Speed Key Raw Value
    TBit3 bi3ElectricPumpPressureState;                      //!< [[custom]] Electric pump Pressure Sensor State
    TInt16 i16ElectricPumpPressureValue;                     //!< [0.1Bar] Electric pump Pressure Sensor Value
    TUint16 u16ElectricPumpPressureRawValue;                 //!< [0.1mA] Electric pump Pressure Sensor Raw value
    EDiState eUpMastSensorNCState;                           //!< [[custom]] Mast sensor position UP State
    TUint16 u16UpMastSensorNCRawValue;                       //!< [[custom]] Mast sensor position UP Raw Value
    EDiState eValveInDownPositionSensorState;                //!< [[custom]] Hydraulic valve uin down position sensor state
    TUint16 u16ValveInDownPositionSensorValue;               //!< [[custom]] Hydraulic valve uin down position sensor raw value
    EDiState eAxleInMGMode;                                  //!< [[custom]] Axle In MG Mode Sensor
    TUint16 u16AxleInMGModeRawValuePin0;                     //!< [[custom]] Axle In MG Mode Sensor Pin 0 
    TUint16 u16AxleInMGModeRawValuePin1;                     //!< [[custom]] Axle In MG Mode Sensor Pin 1
    EDiState eAxleInSDMode;                                  //!< [[custom]] Axle In SD Mode Sensor
    TUint16 u16AxleInSDModeRawValuePin0;                     //!< [[custom]] Axle In SD Mode Sensor Pin 0
    TUint16 u16AxleInSDModeRawValuePin1;                     //!< [[custom]] Axle In SD Mode Sensor Pin 1
}TDbRamEcuInputsC0;

typedef struct
{
    TDbListRoot tListRoot;
    TBoolean boEvDeflectorTransmissionCommand;               //!< [[custom]] Ev Deflector Transmission command
    EDigStatus eEvDeflectorTransmissionValue;                //!< [[custom]] Ev Deflector Transmission actual value
    TBoolean boEvUpMeasuringMastCommand;                     //!< [[custom]] Ev Up Measuring Mast command
    EDigStatus eEvUpMeasuringMastValue;                      //!< [[custom]] Ev Up Measuring Mast actual value
    TBoolean boEvDownMeasuringMastCommand;                   //!< [[custom]] Ev Down Measuring Mast command
    EDigStatus eEvDownMeasuringMastValue;                    //!< [[custom]] Ev Down Measuring Mast actual value
    TBoolean boEvServiceBrakeTrackCommand;                   //!< [[custom]] Ev Service Brake Track command
    EDigStatus eEvServiceBrakeTrackValue;                    //!< [[custom]] Ev Service Brake Track actual value
    TBoolean boEvPowerReductionCommand;                      //!< [[custom]] Ev Power Reduction command
    EDigStatus eEvPowerReductionValue;                       //!< [[custom]] Ev Power Reduction actual value
    TBoolean boEvFrameRotation1Command;                      //!< [[custom]] Ev Frame Rotation 1 command
    EDigStatus eEvFrameRotation1Value;                       //!< [[custom]] Ev Frame Rotation 1 actual value
    TBoolean boEvFrameRotation2Command;                      //!< [[custom]] Ev Frame Rotation 2 command
    EDigStatus eEvFrameRotation2Value;                       //!< [[custom]] Ev Frame Rotation 2 actual value
    TBoolean boSupplyRadioReceiverCommand;                   //!< [[custom]] Supply Radio Receiver command
    EDigStatus eSupplyRadioReceiverValue;                    //!< [[custom]] Supply Radio Receiver actual value
    TBoolean boBuzzerLynxMovingMachineCommand;               //!< [[custom]] Buzzer Lynx Moving Machine command
    EDigStatus eBuzzerLynxMovingMachineValue;                //!< [[custom]] Buzzer Lynx Moving Machine actual value
    TBoolean boWhiteLightsTrailerCommand;                    //!< [[custom]] White Lights Trailer command
    EDigStatus eWhiteLightsTrailerValue;                     //!< [[custom]] White Lights Trailer actual value
    TBoolean boRedLightsTrailerCommand;                      //!< [[custom]] Red Lights Trailer command
    EDigStatus eRedLightsTrailerValue;                       //!< [[custom]] Red Lights Trailer actual value
    TBoolean boWhiteLightAVGCommand;                         //!< [[custom]] White Light AVG command
    EDigStatus eWhiteLightAVGValue;                          //!< [[custom]] White Light AVG actual value
    TBoolean boWhiteLightAVDCommand;                         //!< [[custom]] White Light AVD command
    EDigStatus eWhiteLightAVDValue;                          //!< [[custom]] White Light AVD actual value
    TBoolean boRedLightAVGCommand;                           //!< [[custom]] Red Light AVG command
    EDigStatus eRedLightAVGValue;                            //!< [[custom]] Red Light AVG actual value
    TBoolean boRedLightAVDCommand;                           //!< [[custom]] Red Light AVD command
    EDigStatus eRedLightAVDValue;                            //!< [[custom]] Red Light AVD actual value
    TBoolean boWhiteLightARGCommand;                         //!< [[custom]] White Light ARG command
    EDigStatus eWhiteLightARGValue;                          //!< [[custom]] White Light ARG actual value
    TBoolean boWhiteLightARDCommand;                         //!< [[custom]] White Light ARD command
    EDigStatus eWhiteLightARDValue;                          //!< [[custom]] White Light ARD actual value
    TBoolean boRedLightARGCommand;                           //!< [[custom]] Red Light ARG command
    EDigStatus eRedLightARGValue;                            //!< [[custom]] Red Light ARG actual value
    TBoolean boRedLightARDCommand;                           //!< [[custom]] Red Light ARD command
    EDigStatus eRedLightARDValue;                            //!< [[custom]] Red Light ARD actual value
    TBoolean boSupllyPvgLeftTrackCommand;                    //!< [[custom]] Suplly Pvg Left Track command
    EDigStatus eSupllyPvgLeftTrackValue;                     //!< [[custom]] Suplly Pvg Left Track actual value
    TBoolean boSupllyPvgRightTrackCommand;                   //!< [[custom]] Suplly Pvg Right Track command
    EDigStatus eSupllyPvgRightTrackValue;                    //!< [[custom]] Suplly Pvg Right Track actual value
    EDigStatus eEvUnBlockOscillationAxleState;               //!< [[custom]] Ev UnBlock Oscillation Axle state
    TBoolean boEvUnBlockOscillationAxleCmdBool;              //!< [[custom]] Ev UnBlock Oscillation Axle command bool
    EDigStatus eEvUpAxleOscillantState;                      //!< [[custom]] Ev Up Axle Oscillant state
    TBoolean boEvUpAxleOscillantCommandBool;                 //!< [[custom]] Ev Up Axle Oscillant Command Bool
    EDigStatus eEvDownAxleOscillantState;                    //!< [[custom]] Ev Down Axle Oscillant  state
    TBoolean boEvDownAxleOscillantCommandBool;               //!< [[custom]] Ev Down Axle Oscillant Command Bool
    EDigStatus eEvUpAxleFixeState;                           //!< [[custom]] Ev Up AxleFixe state
    TBoolean boEvUpAxleFixeCommandBool;                      //!< [[custom]] Ev Up Axle Fixe Command Bool
    EDigStatus eEvDownAxleFixeState;                         //!< [[custom]] Ev Down AxleFixe state
    TBoolean boEvDownAxleFixeCommandBool;                    //!< [[custom]] Ev Down Axle Fixe Command Bool
    EDigStatus eEvParkBrakeAxleOscillantState;               //!< [[custom]] Ev Park Brake Axle Oscillant  state
    TBoolean boEvParkBrakeAxleOscillantCmdBool;              //!< [[custom]] Ev Park Brake Axle Oscillant  command bool
    EDigStatus eEvParkBrakeAxleFixeState;                    //!< [[custom]] Ev Park Brake Axle Fixe state
    TBoolean boEvParkBrakeAxleFixeCmdBool;                   //!< [[custom]] Ev Park Brake Axle Fixe  command bool
    EDigStatus eEvServiceBrakeAxleOscillantState;            //!< [[custom]] Ev Service Brake Axle Oscillant state
    TBoolean boEvServiceBrakeAxleOsciCmdBool;                //!< [[custom]] Ev Service Brake Axle 1 command Bool
    EDigStatus eEvServiceBrakeAxleFixeState;                 //!< [[custom]] Ev Service Brake Axle Fixe state
    TBoolean boEvServiceBrakeAxleFixeCmdBool;                //!< [[custom]] Ev Service Brake Axle 2 command Bool
    EDigStatus eKlaxonNeotecState;                           //!< [[custom]] Klaxon Neotec state
    TBoolean boKlaxonNeotecCmdBool;                          //!< [[custom]] Klaxon Neotec command bool
    EProStatus eForwardPumpState;                            //!< [[custom]] Forward pump state
    TUint16 u16ForwardPumpCommand;                           //!< [[custom]] Forward pump  command
    TUint16 u16ForwardPumpCurrent;                           //!< [[custom]] Forward pump actual current
    EProStatus eBackwardPumpState;                           //!< [[custom]] Backward pump state
    TUint16 u16BackwardPumpCommand;                          //!< [[custom]] Backward pump  command
    TUint16 u16BackwardPumpCurrent;                          //!< [[custom]] Backward pump actual current
    TUint16 u16PvgLeftTrackCommand;                          //!< [[custom]] Pvg left track command
    TUint16 u16PvgLeftTrackVoltage;                          //!< [[custom]] Pvg left track actual voltage
    TUint16 u16PvgRightTrackCommand;                         //!< [[custom]] Pvg right track command
    TUint16 u16PvgRightTrackVoltage;                         //!< [[custom]] Pvg right track actual voltage
    TBoolean boSupplyAnaSensorsCommand;                      //!< [[custom]] Supply Ana Sensors Command
    EDigStatus eSupplyAnaSensorsValue;                       //!< [[custom]] Supply Ana Sensors Value
    TBoolean boPvgLeftTrackLowsideCommand;                   //!< [[custom]] Pvg Left Track Lowside Command
    EDigStatus ePvgLeftTrackLowsideValue;                    //!< [[custom]] Pvg Left Track Lowside Value
    TBoolean boPvgRightTrackLowsideCommand;                  //!< [[custom]] Pvg Right Track Lowside Command
    EDigStatus ePvgRightTrackLowsideValue;                   //!< [[custom]] Pvg Right Track Lowside Value
    TBoolean boReturnLowSideEvForwardPumpCmd;                //!< [[custom]] Return low side Ev Forward Pump command
    EDigStatus eReturnLowSideEvForwardPumpState;             //!< [[custom]] Return low side Ev Forward Pump state
    TBoolean boReturnLowSideEvBackwardPumpCmd;               //!< [[custom]] Return low side Ev Backward Pump command
    EDigStatus eReturnLowSideEvBackwardPumpState;            //!< [[custom]] Return low side Ev Backward Pump state
    TBoolean boNeonLightsCmd;                                //!< [[custom]] Neon Lights command
    EDigStatus eNeonLightsValue;                             //!< [[custom]] Neon Lights value
    EDigStatus eEv2DeflectorTransmissionValue;               //!< [[custom]] Ev 2 Deflector Transmission value
    TBoolean boCoolingRelayCommand;                          //!< [[custom]] Cooling relay command
    EDigStatus eCoolingRelayState;                           //!< [[custom]] Cooling relay state
    TBoolean boEv2ndParkBrakeAxleFixe;                       //!< [[custom]] Sorties d_activation de l_Ev du deuxième frein de parc
    TBoolean boEv2ndParkBrakeAxleOsci;                       //!< [[custom]] Sorties d_activation de l_Ev du deuxième frein de parc
    EDigStatus eEv2ndParkBrakeAxleFixeState;                 //!< [[custom]] Ev 2nd Park Brake Axle Fixe State
    EDigStatus eEv2ndParkBrakeAxleOsciState;                 //!< [[custom]] Ev 2nd Park Brake Axle Osci State
    TUint16 u16PvgTransRailElectricCmd;                      //!< [[custom]] Pvg Translation for Rail Electric Command
    TUint16 u16PvgTransRailElectricVoltage;                  //!< [[custom]] Pvg Translation for Rail Electric Voltage
    TBoolean boSupllyPvgTransRailElectricCmd;                //!< [[custom]] Suplly Pvg Translation for Rail Electric Command
    EDigStatus eSupllyPvgTransRailElectricState;             //!< [[custom]] Suplly Pvg Translation for Rail Electric State
    TBoolean boEvDevRailElectricModeCmd;                     //!< [[custom]] Ev Deviator for Rail Electric Mode Command
    EDigStatus eEvDevRailElectricModeState;                  //!< [[custom]] Ev Deviator for Rail Electric Mode State
    TBoolean boRelayCutOffVariatorElectricCmd;               //!< [[custom]] Relay Cut Off Variator for Electric Command
    EDigStatus eRelayCutOffVariatorElectricState;            //!< [[custom]] Relay Cut Off Variator for Electric State
    TBoolean boRelayEnableBatteryCmd;                        //!< [[custom]] Relay Enable Battery Command
    EDigStatus eRelayEnableBatteryState;                     //!< [[custom]] Relay Enable Battery State
}TDbRamEcuOutputsC0;

typedef struct
{
    TDbListRoot tListRoot;
    TUint8 u8LifeByte;                                       //!< [[custom]] Byte increased each cycle
    EWdState eWatchdogState;                                 //!< [[custom]] Watchdog current state
    TUint16 u16EcuVoltage;                                   //!< [[custom]] Ecu voltage
    EOffRailMode eOffRailMode;                               //!< [[custom]] Off Rail Mode
    ERailSpeedMode eRailSpeedMode;                           //!< [[custom]] Rail Mode
    TInt16 i16OutputLutLeftManipulator;                      //!< [%] Output value Lut of Manipulator left radio control in range -100
    TInt16 i16OutputLutLeftTrackPvg;                         //!< [[custom]] Output value Lut of Left Track Pvg 
    TInt16 i16OutputLutRightManipulator;                     //!< [%] Output value Lut of Manipulator Right radio control in range -10
    TInt16 i16OutputLutRightTrackPvg;                        //!< [[custom]] Output value Lut of Right Track Pvg 
    TInt16 i16OutputLutJoystickAdvanceRail;                  //!< [[custom]] Outût value Lut of Joystick advance Rail translation
    TInt16 i16OutputLutForwardPumpTransmission;              //!< [[custom]] Output Lut  of Forward Pump Transmission
    TInt16 i16OutputLutBackwardPumpTransm;                   //!< [[custom]] Output Lut  of Backward Pump Transmission
    TInt16 i16ConsigneForwardPumpTransmPercent;              //!< [-] Calculate consigne current of Forward Pump transmission on perce
    TInt16 i16LastJoystickAdvanceValue;                      //!< [[custom]] LastJoystickAdvanceValue
    TInt16 i16JoystickAdvanceScalingValue;                   //!< [[custom]] Scaling Value of Joystick advancement
    EStateServiceBrakeRail eStateServiceBrakeRail;           //!< [[custom]] State of service brake rail translation
    TBoolean boEnableStartTimerServiceBrake;                 //!< [[custom]] Enable Start timer for service brake
    TUint16 u16SpeedMotorCommandTest;                        //!< [[custom]] Speed motor command provide by track transaltion
    TBoolean boForceSilentModeMotorTest;                     //!< [[custom]] Force silent mode motor test
    TUint16 u16AngularSensorTest;                            //!< [[custom]] Angular sensor test
    TUint16 u16SpeedAxleSensor;                              //!< [[custom]] Speed axle sensor
    TUint32 u32AverageTimeCycle;                             //!< [[custom]] Average Time cycle
    TUint32 u32MaxTimeCycle;                                 //!< [[custom]] Max time cycle
    TBoolean boFirstTranslationReleaseParkBrake;             //!< [[custom]] First translation for release park brake
    TBoolean boAutorizeUpAxleOscillant;                      //!< [[custom]] Autorize Up Axle Oscillant movement
    TBoolean boAutorizeDownAxleOscillant;                    //!< [[custom]] Autorize Down Axle Oscillant movement
    TBoolean boAutorizeUpAxlefixe;                           //!< [[custom]] Autorize Up Axle fixe movement
    TBoolean boAutorizeDownAxlefixe;                         //!< [[custom]] Autorize Down Axle fixe movement
    TBoolean boEngineOn;                                     //!< [[custom]] Engine On run phase
    TBoolean boTranslationMovementIsSolicited;               //!< [[custom]] Transaltion rail or off rail is solicited , flag send to C1 to 
    ERailTranslationDirection eRailTranslationDirection;     //!< [[custom]] Direction of rail translation (Av Ar Stop)
    TBoolean boSetConditionAruRadioAlarm;                    //!< [[custom]] Set condition to active Aru radio alarm
    TInt16 i16JoystickAdvanceSetpointAfterRamp;              //!< [[custom]] Joystick advance setpoint after ramp
    TBoolean boStabilizedStop;                               //!< [[custom]] Stabilized stop flag to active park brake rail
    TBoolean boEmergencyBrake;                               //!< [[custom]] Emergency brake flag to active sequence of brake
    TBoolean boEmergencyServiceBrakeTimerDone;               //!< [[custom]] Flag when the timer emergency service brake is done
    TBoolean boStoppedMachineUnblkOsciTimerDone;             //!< [[custom]] Flag when the timer stopped machine unblock osciilant axle is do
    TInt16 i16OutLutLeftManipulatorAfterRamp;                //!< [[custom]] Output value Lut of Manipulator left radio control in range -100
    TInt16 i16OutLutRightManipulatorAfterRamp;               //!< [[custom]] Output value Lut of Manipulator right radio control in range -10
    TUint16 u16DeltaBeetweenLeftRightPvgCrawler;             //!< [[custom]] Delta beetwen left and right Pvg crawler advancement
    TInt16 i16ConsigneLeftPvgTrack;                          //!< [[custom]] Consigne left pvg track calcul with delta beetween left and righ
    TInt16 i16ConsigneRightPvgTrack;                         //!< [[custom]] Consigne right pvg track calcul with delta beetween left and rig
    TUint8 u8BrakeWithoutGachetteOrPedal;                    //!< [[custom]] Flag to detect brake when gachette or pedal are released
    TUint16 u16AruRadioAlarmCounter;                         //!< [[custom]] Counter for debug when alarm aru radio is detected
    TBoolean boRedLightARGBasketCmd;                         //!< [[custom]] Red light ARG basket command
    TBoolean boWhiteLightARGBasketCmd;                       //!< [[custom]] White light ARG basket command
    TBoolean boPortillonLadderClose;                         //!< [[custom]] Portilon close and ladder folded
    TBoolean boTestEvision;                                  //!< [[custom]] Test boolean  command to refresh objet evision
    EPosJoy ePosJoystickAdvance;                             //!< [[custom]] Position of joysstick advancment ( AV_JOY, NEU_JOY , AR_JOY)
    EPosJoy eRetainPosJoyAdvanceUntilBrake;                  //!< [[custom]] Retain position of joystick advancement , reset when brake sequ
    TBoolean boAuthorizeForwardCrawler;                      //!< [[custom]] Authorize forward crawler translation
    TBoolean boAuthorizeBackwardCrawler;                     //!< [[custom]] Authorize backward crawler translation
    TInt16 i16ReturnValueUartInit;                           //!< [[custom]] Return value uart init
    TBoolean boAuthorizeTransRailMovement;                   //!< [[custom]] Authorize translation rail movement
    TUint16 u16EvForwardTrackConsigne;                       //!< [[custom]] Ev forward track consigne
    TUint16 u16EvForwardRailConsigne;                        //!< [[custom]] Ev forward rail consigne
    TUint32 u32EngineTimeSecond;                             //!< [[custom]] 
    TBoolean boRamGeneralNeotecC0_1;                         //!< [[custom]] Variable debug Neotec
    TBoolean boRamGeneralNeotecC0_1_1;                       //!< [[custom]] Variable debug Neotec
    TBoolean boRamGeneralNeotecC0_1_2;                       //!< [[custom]] Variable debug Neotec
    TBoolean boRamGeneralNeotecC0_1_3;                       //!< [[custom]] Variable debug Neotec
    TBoolean boRamGeneralNeotecC0_1_4;                       //!< [[custom]] Variable debug Neotec
    TBoolean boRamGeneralNeotecC0_1_5;                       //!< [[custom]] Variable debug Neotec
    TBoolean boRamGeneralNeotecC0_1_6;                       //!< [[custom]] Variable debug Neotec
    TBoolean boRamGeneralNeotecC0_1_7;                       //!< [[custom]] Variable debug Neotec
    TBoolean boRamGeneralNeotecC0_1_8;                       //!< [[custom]] Variable debug Neotec
    TBoolean boRamGeneralNeotecC0_1_9;                       //!< [[custom]] Variable debug Neotec
    TBoolean boRamGeneralNeotecC0_1_10;                      //!< [[custom]] Variable debug Neotec
    TBoolean boRamGeneralNeotecC0_1_11;                      //!< [[custom]] Variable debug Neotec
    TBoolean boRamGeneralNeotecC0_1_12;                      //!< [[custom]] Variable debug Neotec
    TBoolean boRamGeneralNeotecC0_1_13;                      //!< [[custom]] Variable debug Neotec
    TBoolean boRamGeneralNeotecC0_1_14;                      //!< [[custom]] Variable debug Neotec
    TBoolean boRamGeneralNeotecC0_1_15;                      //!< [[custom]] Variable debug Neotec
    TUint8 u8RamGeneralNeotecC0_2;                           //!< [[custom]] Variable debug Neotec
    TUint8 u8RamGeneralNeotecC0_2_1;                         //!< [[custom]] Variable debug Neotec
    TUint8 u8RamGeneralNeotecC0_2_2;                         //!< [[custom]] Variable debug Neotec
    TUint8 u8RamGeneralNeotecC0_2_3;                         //!< [[custom]] Variable debug Neotec
    TUint8 u8RamGeneralNeotecC0_2_4;                         //!< [[custom]] Variable debug Neotec
    TUint8 u8RamGeneralNeotecC0_2_5;                         //!< [[custom]] Variable debug Neotec
    TUint16 u16RamGeneralNeotecC0_3;                         //!< [[custom]] Variable debug Neotec
    TUint16 u16RamGeneralNeotecC0_3_1;                       //!< [[custom]] Variable debug Neotec
    TUint16 u16RamGeneralNeotecC0_3_2;                       //!< [[custom]] Variable debug Neotec
    TUint16 u16RamGeneralNeotecC0_3_3;                       //!< [[custom]] Variable debug Neotec
    TUint16 u16RamGeneralNeotecC0_3_4;                       //!< [[custom]] Variable debug Neotec
    TUint16 u16RamGeneralNeotecC0_3_5;                       //!< [[custom]] Variable debug Neotec
    TUint16 u16RamGeneralNeotecC0_3_6;                       //!< [[custom]] Variable debug Neotec
    TUint16 u16RamGeneralNeotecC0_3_7;                       //!< [[custom]] Variable debug Neotec
    TUint16 u16RamGeneralNeotecC0_3_8;                       //!< [[custom]] Variable debug Neotec
    TInt16 i16RamGeneralNeotecC0_4;                          //!< [[custom]] Variable debug Neotec
    TInt16 i16RamGeneralNeotecC0_4_1;                        //!< [[custom]] Variable debug Neotec
    TInt16 i16RamGeneralNeotecC0_4_2;                        //!< [[custom]] Variable debug Neotec
    TInt16 i16RamGeneralNeotecC0_4_3;                        //!< [[custom]] Variable debug Neotec
    TInt16 i16RamGeneralNeotecC0_4_4;                        //!< [[custom]] Variable debug Neotec
    TInt16 i16RamGeneralNeotecC0_4_5;                        //!< [[custom]] Variable debug Neotec
    TInt16 i16RamGeneralNeotecC0_4_6;                        //!< [[custom]] Variable debug Neotec
    TInt16 i16RamGeneralNeotecC0_4_7;                        //!< [[custom]] Variable debug Neotec
    TInt16 i16RamGeneralNeotecC0_4_8;                        //!< [[custom]] Variable debug Neotec
    TBoolean boRedLightARDBasketCmd;                         //!< [[custom]] Red light ARD basket command
    TBoolean boWhiteLightARDBasketCmd;                       //!< [[custom]] White light ARD basket command
    TBoolean boActiveFailure;                                //!< [[custom]] Active failure is detected
    TUint8 u8ReductionPumpRail;                              //!< [[custom]] Reduction pump rail
    TUint8 u8ReductionPumpTrack;                             //!< [[custom]] Reduction pump track
    TBoolean boActiveWhiteLights15746;                       //!< [[custom]] Active white lights 15746
    TBoolean boWhiteLightAv15746Command;                     //!< [[custom]] White light Av 15746 Cmd
    TBoolean boWhiteLightAr15746Command;                     //!< [[custom]] White light Ar 15746 Cmd
    TBoolean boTestElectricalIO;                             //!< [[custom]] Shunt all logic to test electricall IO
    TBoolean boSendEventDataloggerMessage;                   //!< [[custom]] Send Event Datalogger Message
    TBoolean boSlopeModeFromC1;                              //!< [[custom]] Depend de l_option MG
    TBoolean boBlinkLow;                                     //!< [[custom]] Slow Blinking
    TUint32 u32TotalDistance;                                //!< [[custom]] Total distance
    TBoolean boRunningStable48XS;                            //!< [[custom]] Running Stable 48XS
    TBoolean boAlarmHydTempRailActive;                       //!< [[custom]] Alarm Hydraulic Temperature Rail Active
    TBoolean boAlarmHydTempCrawlerActive;                    //!< [[custom]] Alarm Hydraulic Temperature Crawler Active
    TUint16 u16FaultyValue;                                  //!< [[custom]] Diag Faulty Value
    TUint8 u8DeviceNum;                                      //!< [[custom]] Diag Device Num
    TUint8 u8ErrorCode;                                      //!< [[custom]] Diag Error Code
    TBoolean boEngineRunningStable;                          //!< [[custom]] Engine running stable
    TBoolean boAxlePositionSensorFault;                      //!< [[custom]] Axle Position Sensor Fault
    TBoolean boAxlePositionInMGMode;                         //!< [[custom]] Axle Position In MG Mode
    TBoolean boEvLoadBrakeAccuCmd;                           //!< [[custom]] Ev load brake accumulator send to C1
    TUint8 u8ErrListCntMax;                                  //!< [[custom]] Error list counter
    TBoolean boGlobalAuthorizeTrans;                         //!< [[custom]] Global Authorize Translation on rail
}TDbRamGeneralC0;

typedef struct
{
    TDbListRoot tListRoot;
    TBoolean boConfigHollandaise;                            //!< [[custom]] Select config hollandaise to control light
    TBoolean boPortillon;                                    //!< [[custom]] Portillon is installed on the machine
    TBoolean boLadder;                                       //!< [[custom]] Ladder is installed on the machine
    TBoolean boMeasuringMat;                                 //!< [[custom]] Measuring mat is installed on the machine
    TBoolean boIncliBasketHighSectorForAcesSite;             //!< [[custom]] -SpeedMaxRail Acces Site- Inclinaison Baslet most be in low sect
    TBoolean boBasketCenteredForAccesSite;                   //!< [[custom]] -SpeedMaxRail Acces Site- Basket most be centered for acces site
    TBoolean boMastDigitalDisplay;                           //!< [[custom]] The digital display o the measuring mast is used on this vehicle
    TBoolean boAutorisationWorkKeyPresent;                   //!< [[custom]] Autorisation work key present 
    TBoolean boSecondParkBrakeActive;                        //!< [[custom]] Option d_activation du mode double frein
    TBoolean boAddPerformanceFunc;                           //!< [[custom]] Strukton configuration for new performance machine
    TBoolean boBasketTurretLimitation;                       //!< [[custom]] Basket and turret limited by a mechanical stop
    TBoolean boPresenceSensorPlate;                          //!< [[custom]] Presence of sensor plate
    TBoolean boMachineMountedAxlesMG;                        //!< [[custom]] Machine Mounted with Axles MG
}TDbNvOptionsC0;

typedef struct
{
    TDbListRoot tListRoot;
    TUint16 u16NCycleBrakePerform;                           //!< [[custom]] Number of brake cycle perform
    TUint8 u8LightMode;                                      //!< [[custom]] Light mode
    TUint8 u8VarMemory1;                                     //!< [[custom]] 
    TUint8 u8VarMemory2;                                     //!< [[custom]] 
    TUint8 u8VarMemory3;                                     //!< [[custom]] 
    TUint16 u16VarMemory4;                                   //!< [[custom]] 
    TUint16 u16VarMemory5;                                   //!< [[custom]] 
    TUint16 u16VarMemory6;                                   //!< [[custom]] 
    TInt16 i16VarMemory7;                                    //!< [[custom]] 
    TInt16 i16VarMemory8;                                    //!< [[custom]] 
    TInt16 i16VarMemory9;                                    //!< [[custom]] 
    TBoolean boVarMemory10;                                  //!< [[custom]] 
    TBoolean boVarMemory11;                                  //!< [[custom]] 
    TBoolean boVarMemory12;                                  //!< [[custom]] 
    TBoolean boVarMemory13;                                  //!< [[custom]] 
    TBoolean boVarMemory14;                                  //!< [[custom]] 
    TInt32 i32gDistanceTraveledMeasureMast;                  //!< [[custom]] 
    TUint16 u16NCycle2ndParkBrakePerform;                    //!< [[custom]] Nombres de cycle de frein pour les freins additionnels
    TUint16 u16gTotalDistanceMsb;                            //!< [[custom]] Total Distance Msb
    TUint16 u16gTotalDistanceLsb;                            //!< [[custom]] Total Distance Lsb
}TDbNvMemoryC0;

typedef struct
{
    TDbListRoot tListRoot;
    TUint16 u16LimitTresholdAngleRadioControl;               //!< [°] Limit threshold of angle to stop movement , angular sensor from
    TUint16 u16TresholdMinimalSpeedParkBrake;                //!< [[custom]] Treshold minimal speed to active park brake
    TUint16 u16TresholdMinimalSpeedServiceBrake;             //!< [[custom]] Treshold minimal speed to active service brake
    TUint8 u8AdditionnalPourcentFwardPumpCmd;                //!< [%] Additionnal Pourcent Forward Pump Command
    TUint8 u8AddPrctFwardPumpSilentModeMotor;                //!< [%] Additionnal Pourcent Forward Pump Command when sient mode is act
    TUint8 u8NodeIdRadioCommand;                             //!< [[custom]] Node Id radio command
    TUint8 u8DeadZoneJoystickRotationTurret;                 //!< [[%]] Dead Zone joystick rotation turret
    TUint32 u32ServiceAxleBrakeTimeBeforeBrake;              //!< [[ms]] Timer before 2nd Service Axle brake rail translation
    TUint32 u32ServiceBrakeOffrailTime;                      //!< [[ms]] Time Service Brake Offrail
    TUint16 u16EngineOffCurEvForwardPump;                    //!< [[mA/10]] Ev Forward Pump - PWM output parameters- engine off current
    TUint16 u16MinCurEvForwardPump;                          //!< [[mA/10]] Ev Forward Pump - PWM output parameters- minimal current
    TUint16 u16StopCurEvForwardPump;                         //!< [[mA/10]] Ev Forward Pump - PWM output parameters- stop current 
    TUint16 u16EngineOffCurEvBackwardPump;                   //!< [[mA/10]] Ev Backward Pump - PWM output parameters- engine off current
    TUint16 u16MinCurEvBackwardPump;                         //!< [[mA/10]] Ev Backward Pump - PWM output parameters- minimal current
    TUint16 u16StopCurEvBackwardPump;                        //!< [[mA/10]] Ev Backward Pump - PWM output parameters- stop current 
    TUint8 u8PosNeutralJoyAdvancement;                       //!< [[%]] Position neutral of joystick advancement regarding batterie volt
    TUint16 u16PidGpEvForwardPump;                           //!< [[custom]] PID - Ev Forward Pump - Gp - proportional gain
    TUint16 u16PidTiEvForwardPump;                           //!< [[custom]] PID - Ev Forward Pump - Ti - integration time constant
    TUint16 u16PidTdEvForwardPump;                           //!< [[custom]] PID - Ev Forward Pump - Td - derivation time constant
    TUint16 u16PidGpEvBackwardPump;                          //!< [[custom]] PID - Ev Forward Pump - Gp - proportional gain
    TUint16 u16PidTiEvBackwardPump;                          //!< [[custom]] PID - Ev Forward Pump - Ti - integration time constant
    TUint16 u16PidTdEvBackwardPump;                          //!< [[custom]] PID - Ev Forward Pump - Td - derivation time constant
    TInt16 i16OutCharPosPressureBlockOscil;                  //!< [[Bar]] PressureBlockOscillationSensor - input current - output characte
    TInt16 i16OutCharNeuPressureBlockOscil;                  //!< [[Bar]] PressureBlockOscillationSensor - input current - output characte
    TInt16 i16OutCharNegPressureBlockOscil;                  //!< [[custom]] PressureBlockOscillationSensor - input current - output characte
    TInt16 i16OutCharPosPressureBrake;                       //!< [[Bar]] PressureBrakeSensor - input current - output characteristic - Po
    TInt16 i16OutCharNeuPressureBrake;                       //!< [[Bar]] PressureBrakeSensor - input current - output characteristic - Ne
    TInt16 i16OutCharNegPressureBrake;                       //!< [[custom]] PressureBrakeSensor - input current - output characteristic - Ne
    TInt16 i16OutCharPosTempTransmission;                    //!< [[Bar]] TemperatureTransmissionSensor - input current - output character
    TInt16 i16OutCharNeuTempTransmission;                    //!< [[Bar]] TemperatureTransmissionSensor - input current - output character
    TInt16 i16OutCharNegTempTransmission;                    //!< [[custom]] TemperatureTransmissionSensor - input current - output character
    TInt16 i16MinConsigneEvForwardRail;                      //!< [[mA/10]] Consigne min Ev forward apply with joystick advancement
    TInt16 i16MaxConsigneEvForwardRail;                      //!< [[mA/10]] Consigne max Ev forward apply with joystick advancement
    TInt16 i16MinConsigneEvBackwardRail;                     //!< [[mA/10]] Consigne min Ev backward apply with joystick advancement
    TInt16 i16MaxConsigneEvBackwardRail;                     //!< [[mA/10]] Consigne max Ev backward apply with joystick advancement
    TUint16 au16TimeRampEvAdvancementRail[4];                //!< [[ms]] Time  ramp apply to Ev rail [0] Pos incr time, [1] Pos decr time,[2] Neg incr time , [3] Neg decr time
    TInt16 i16MinConsigneEvForwardCrawler;                   //!< [[mA/10]] Consigne min Ev forward apply for crawler advancement
    TInt16 i16MaxConsigneEvForwardCrawler;                   //!< [[mA/10]] Consigne max Ev forward apply for crawler advancement
    TUint16 au16EvForwardCrawlerAdvanceRampRatio[2];         //!< [[custom]] increase ratio
    TUint16 u16TresholdRegimeMotorParkBrake;                 //!< [[custom]] Park Brake rail - Treshold of regime motor to active park brake 
    TUint8 u8MinPvgLeftTrackAv;                              //!< [[%]] Consigne min Pvg Left Track apply when mapinulator get out neutr
    TUint8 u8MaxPvgLeftTrackAv;                              //!< [[%]] Consigne max Pvg Left Track Av
    TUint8 u8MinPvgLeftTrackAr;                              //!< [[%]] Consigne min Pvg Left Track apply when mapinulator get out neutr
    TUint8 u8MaxPvgLeftTrackAr;                              //!< [[%]] Consigne max Pvg Left Track Ar
    TUint8 u8MinPvgRightTrackAv;                             //!< [[%]] Consigne min Pvg Right Track apply when mapinulator get out neut
    TUint8 u8MaxPvgRightTrackAv;                             //!< [[%]] Consigne max Pvg Right Track Av
    TUint8 u8MinPvgRightTrackAr;                             //!< [[%]] Consigne min Pvg Right Track apply when mapinulator get out neut
    TUint8 u8MaxPvgRightTrackAr;                             //!< [[%]] Consigne max Pvg Right Track Ar
    TUint16 au16TimeRampLeftTrack[4];                        //!< [[ms]] Positive increase time
    TUint16 au16TimeRampRightTrack[4];                       //!< [[ms]] Positive increase time
    TUint32 u32TimeStabilizedStopDetection;                  //!< [[ms]] Time to detect stabilized stop machine
    TInt32 i32TresholdLowSpeedStabilizedStop;                //!< [[custom]] Treshold low spped to start timer to detect stabilized stop mach
    TUint32 u32TimeEmergencyServiceBrake;                    //!< [[ms]] Time before release service brake when emergency brake is detect
    TUint32 u32TimeStoppedMachineUnblockOscAxle;             //!< [[custom]] Time stopped machine to controle unblock oscillation axle
    TInt32 i32TresholdLowSpeedUnblockOsciAxle;               //!< [[custom]] Low treshold speed of oscillation and fixe axle to start timer u
    TUint16 u16GapMaxPvgCrawlerAdvancement;                  //!< [[custom]] Gap max beetween left and right Pvg crawler advancement
    TUint16 u16GapMaxInvertedPvgCrawler;                     //!< [[custom]] Gap max beetween left and right Pvg crawler advancement when man
    TUint16 u16TresholdAnaToBoForInputs48Xs;                 //!< [[custom]] Treshold Ana to bool input from 48xs
    TUint16 u16InMinJoystickAdvance;                         //!< [[%/10]] In min joystick advancement pourcentent by 10 of batterie voltag
    TUint16 u16InMaxJoystickAdvance;                         //!< [[%/10]] In max joystick advancement pourcentent by 10 of batterie voltag
    TUint16 u16SpeedMiniTresholdServiceBrake;                //!< [[custom]] Speed mini treshol to re authorise 
    TUint8 u8NbElementAverageSlopeTransAngle;                //!< [[custom]] Number element for average slope trans angle
    TUint8 u8NbElementAverageSlopeLongAngle;                 //!< [[custom]] Number element for average slope long angle
    TUint8 u8DeadZoneJoystickRailAdvancement;                //!< [[%]] Dead zone joystick rail advancement
    TUint8 u8NbElementAverageSlopeTransAngle2;               //!< [[custom]] Number element for average slope trans angle 2nd channels
    TUint8 u8NbElementAverageSlopeLongAngle2;                //!< [[custom]] Number element for average slope long angle 2nd channels
    TBoolean boNvParametersC0_1;                             //!< [[custom]] Param debug Neotec
    TBoolean boNvParametersC0_2;                             //!< [[custom]] Param debug Neotec
    TBoolean boNvParametersC0_3;                             //!< [[custom]] Param debug Neotec
    TBoolean boNvParametersC0_4;                             //!< [[custom]] Param debug Neotec
    TBoolean boNvParametersC0_5;                             //!< [[custom]] Param debug Neotec
    TUint8 u8NvParametersC0_6;                               //!< [[custom]] Param debug Neotec
    TUint8 u8NvParametersC0_7;                               //!< [[custom]] Param debug Neotec
    TUint8 u8NvParametersC0_8;                               //!< [[custom]] Param debug Neotec
    TUint8 u8NvParametersC0_9;                               //!< [[custom]] Param debug Neotec
    TUint16 u16NvParametersC0_10;                            //!< [[custom]] Param debug Neotec
    TUint16 u16NvParametersC0_11;                            //!< [[custom]] Param debug Neotec
    TUint16 u16NvParametersC0_12;                            //!< [[custom]] Param debug Neotec
    TUint16 u16NvParametersC0_13;                            //!< [[custom]] Param debug Neotec
    TInt16 i16NvParametersC0_14;                             //!< [[custom]] Param debug Neotec
    TInt16 i16NvParametersC0_15;                             //!< [[custom]] Param debug Neotec
    TInt16 i16NvParametersC0_16;                             //!< [[custom]] Param debug Neotec
    TInt16 i16NvParametersC0_17;                             //!< [[custom]] Param debug Neotec
    TInt16 i16ThreshotothydraulicTemperature;                //!< [[°/10]] Treshold hydraulique temperature to control cooling relay
    TInt16 i16TimeforCoolerOn;                               //!< [[s]] Time to control cooler
    TUint16 u16TimeFaultPressureReducCrawler;                //!< [[custom]] Time fault pressure reduction crawler
    TInt16 i16RailJoyRatioTwoSpeedFault;                     //!< [[custom]] Rail joystick ratio two speed fault
    TUint32 u32TimeoutSdoRequestTime;                        //!< [[custom]] Timeout sdo resquest time
    TInt16 i16PeriodBlinkoffWhiteLight;                      //!< [[custom]] Period Blinck off White Light
    TUint16 u16CptNeutralJoystickMax;                        //!< [[Ms]] filtrage et le lissage de la valeur du joystick.
    TUint16 u16StopMotorMGmax;                               //!< [[S]] temporisation de l_AU afin d_attendre la fin des rampes avec un 
    TInt16 i16TurretRearPosExtLowSpeedTresh;                 //!< [[custom]] seuil d_angle tourelle pour la petite vitesse, côté positif
    TInt16 i16TurretRearNegExtLowSpeedTresh;                 //!< [[custom]] seuil d_angle tourelle pour la petite vitesse, côté négatif
    TUint16 u16NbOfFileParameters;                           //!< [[custom]] Number of file parameters
    TUint8 u8VersionMajor;                                   //!< [[custom]] Version Major
    TUint8 u8VersionMinior;                                  //!< [[custom]] Version Minior
    TUint8 u8VersionPatch;                                   //!< [[custom]] Version Patch
    TUint8 u8VersionCustom;                                  //!< [[custom]] Version Custom
    TInt16 i16OutCharPosElectricPumpPressure;                //!< [[Bar]] ElectricPumpPressureSensor - input current - output characterist
    TInt16 i16OutCharNeuElectricPumpPressure;                //!< [[Bar]] ElectricPumpPressureSensor - input current - output characterist
    TInt16 i16OutCharNegElectricPumpPressure;                //!< [[custom]] ElectricPumpPressureSensor - input current - output characterist
    TUint16 u16ThresBrakeAccuPressureMin;                    //!< [[custom]] Threshold of Accumulator Brake pressure minimum
    TUint16 u16ThresBrakeAccuPressureMax;                    //!< [[custom]] Threshold of Accumulator Brake pressure maximum
}TDbNvParametersC0;

typedef struct
{
    TDbListRoot tListRoot;
    TUint8 u8ManipulatorLeftMaxPointLut;                     //!< [[custom]] Max point Lut Manipulator Left radio control
    TInt16 ai16ManipulatorLeftXValue[2];                     //!< [[custom]] Lut array X positive  value for Manipulator Left radio control
    TInt16 ai16ManipulatorLeftYValue[2];                     //!< [[custom]] Lut array Y positive  value for Manipulator Left radio control
    TUint8 u8ManipulatorRightMaxPointLut;                    //!< [[custom]] Max point Lut Manipulator Right radio control
    TInt16 ai16ManipulatorRightXValue[2];                    //!< [[custom]] Lut array X value for Manipulator Right radio control
    TInt16 ai16ManipulatorRightYValue[2];                    //!< [[custom]] Lut array Y value for Manipulator Right radio control
    TUint8 u8LeftTrackPvgMaxPointLut;                        //!< [[custom]] Max point Lut for Left track pvg command
    TUint16 au16LeftTrackPvgRampRatio[2];                    //!< [0.1mV/ms] Increase ratio
    TInt16 ai16RangeValueOfLeftTrackPvgRamp[3];              //!< [[custom]] Initial output value
    TUint16 au16RightTrackPvgRampRatio[2];                   //!< [0.1mV/ms] Increase ratio
    TInt16 ai16RangeValueOfRightTrackPvgRamp[3];             //!< [[custom]] Initial output value
    TUint8 u8ForwardPumpTransmisMaxPointLut;                 //!< [[custom]] Max point Lut Forward pump transmission rail translation
    TInt16 ai16ForwardPumpTransmissionXValue[2];             //!< [[custom]] Lut array X value for Forward pump transmission rail translation
    TInt16 ai16ForwardPumpTransmissionYValue[2];             //!< [[custom]] Lut array Y value for Forward pump transmission rail translation
    TUint8 u8BackwardPumpTransmisMaxPointLut;                //!< [[custom]] Max point Lut Backward pump transmission rail translation
    TInt16 ai16BackwardPumpTransmissionXValue[2];            //!< [[custom]] Lut array X value for Backwardpump transmission rail translation
    TInt16 ai16BackwardPumpTransmissionYValue[2];            //!< [[custom]] Lut array Y value for Backwardpump transmission rail translation
    TUint16 au16ForwardPumpTransmissionRampRatio[2];         //!< [0.1mA/ms] Increase ratio
    TInt16 ai16RangeValueForwardPumpTransRamp[3];            //!< [[custom]] Initial output value
    TUint16 au16BackwardPumpTransmissionRampRtio[2];         //!< [0.1mA/ms] Increase ratio
    TInt16 ai16RangeValueBackwardPumpTransRamp[3];           //!< [[custom]] Initial output value
    TUint32 u32EncodeurTurretOffset;                         //!< [[custom]] Offset apply to calcul angle of turret
    TInt16 i16SlopeLongOffset;                               //!< [[custom]] Slope Long offset to calibrate value of longetude angle
    TInt16 i16SlopeTransOffset;                              //!< [[custom]] Slope Trans offset to calibrate value of transversal angle
    TInt16 i16SlopeLongOffset2;                              //!< [[custom]] Slope Long offset to calibrate value of longetude angle 2nd chan
    TInt16 i16SlopeTransOffset2;                             //!< [[custom]] Slope Trans offset to calibrate value of transversal angle 2nd c
    TUint32 u32EncodeurTurretOffset2;                        //!< [[custom]] Offset apply to calcul angle of turret second channel
    TUint16 u16EncodeurTurretMsb1;                           //!< [[custom]] Encodeur Turret Msb 1
    TUint16 u16EncodeurTurretMsb2;                           //!< [[custom]] Encodeur Turret Msb 2
    TUint16 u16EncodeurTurretLsb1;                           //!< [[custom]] Encodeur Turret Lsb 1
    TUint16 u16EncodeurTurretLsb2;                           //!< [[custom]] Encodeur Turret Lsb 2
}TDbNvCalibrationC0;

typedef struct
{
    TDbListRoot tListRoot;
    TBoolean boUpInclinaisonBasketButton;                    //!< [[custom]] Up  Inclinaison basket button
    TUint16 u16UpInclinaisonBasketButtonValue;               //!< [[custom]] Up  Inclinaison basket  button raw value
    TBoolean boDownInclinaisonBasketButton;                  //!< [[custom]] Down  Inclinaison basket button
    TUint16 u16DownInclinaisonBasketButtonValue;             //!< [[custom]] Down  Inclinaison basket button raw value
    TBoolean boUpPendularButton;                             //!< [[custom]] Up pendular button
    TUint16 u16UpPendularButtonValue;                        //!< [[custom]] Up pendular button raw value
    TBoolean boDownPendularButton;                           //!< [[custom]] Down pendular button
    TUint16 u16DownPendularButtonValue;                      //!< [[custom]] Down pendular button raw value
    TBoolean boRotationCtClockwiseBasketButton;              //!< [[custom]] Counter Clockwise rotation basket button
    TUint16 u16RotCtClockwiseBasketButtonVal;                //!< [[custom]] Counter Clockwise rotation basket button raw value
    TBoolean boRotationClockwiseBasketButton;                //!< [[custom]] Clockwise rotation basket button
    TUint16 u16RotationClockwiseBasketButtonVal;             //!< [[custom]] Clockwise rotation basket button raw value
    TBoolean boOverload1;                                    //!< [[custom]] Overload 1
    TUint16 u16Overload1Value;                               //!< [[custom]] Overload 1 raw value
    TBoolean boOverload2;                                    //!< [[custom]] Overload 2
    TUint16 u16Overload2Value;                               //!< [[custom]] Overload 2 raw value
    TBoolean boNacelleBasketRightSideSensor1;                //!< [[custom]] Nacelle basket right side sensor 1
    TUint16 u16NacelleBasketRightSideSensor1Val;             //!< [[custom]] Nacelle basket right side sensor 1 value
    TBoolean boNacelleBasketRightSideSensor2;                //!< [[custom]] Nacelle basket right side sensor 2 
    TUint16 u16NacelleBasketRightSideSensor2Val;             //!< [[custom]] Nacelle basket right side sensor 2 value
    TBoolean boNacelleBasketLeftSideSensor1;                 //!< [[custom]] Nacelle basket left side sensor 1
    TUint16 u16NacelleBasketLeftSideSensor1Val;              //!< [[custom]] Nacelle basket left side sensor 1 value
    TBoolean boNacelleBasketLeftSideSensor2;                 //!< [[custom]] Nacelle basket left side sensor 2
    TUint16 u16NacelleBasketLeftSideSensor2Val;              //!< [[custom]] Nacelle basket left side sensor 2 value
    TBoolean boLowSectorPendularSensor;                      //!< [[custom]] Low sector pendular sensor
    TUint16 u16LowSectorPendularSensorVal;                   //!< [[custom]] Low sector pendular sensor value
    TBoolean boHighSectorPlateSensor;                        //!< [[custom]] High Sector Plate Sensor
    TUint16 u16HighSectorPlateSensorVal;                     //!< [[custom]] High Sector Plate Sensor value
    TBoolean boFoldedLadderSensor;                           //!< [[custom]] Folded ladder sensor
    TUint16 u16FoldedLadderSensorVal;                        //!< [[custom]] Folded ladder sensor value
    TUint16 u16SafetyManSystem;                              //!< [[custom]] Safety man system value
    TUint16 u16DeltaArmAxisJoystick;                         //!< [[custom]] Delta arm axis joystick value
    TUint16 u16ArrowArmAxisJoystick;                         //!< [[custom]] Arrow arm axis joystick value
    TUint16 u16TelescopeArmAxisJoysitck;                     //!< [[custom]] Telescope arm axis joystick value
    TUint16 u16RotationTurretAxisJoystick;                   //!< [[custom]] Rotation turret axis joystick value
    TUint16 u16AdvanceAxisJoystick;                          //!< [[custom]] Advance axis joystick value
    TBoolean boRearmementSafetyManSystem;                    //!< [[custom]] Rearmement Safety Man System
    TUint16 u16RearmementSafetyManSystemVal;                 //!< [[custom]] Rearmement Safety Man System value
    TBoolean boAbutementNacelleTrackSide;                    //!< [[custom]] Abutement Nacelle Track Side
    TUint16 u16AbutementNacelleTrackSideVal;                 //!< [[custom]] Abutement Nacelle Track Side value
    TBoolean boAbutementNacelleCenteredSide;                 //!< [[custom]] Abutement Nacelle Centered Side
    TUint16 u16AbutementNacelleCenteredSideVal;              //!< [[custom]] Abutement Nacelle Centered Side value
    TBoolean boDeltaArmJystckCenteredTelescope;              //!< [[custom]] Delta arm Joystick value
    TBoolean boArrowJoystickCenteredTurret;                  //!< [[custom]] Arrow Joystick / centered turret value
    TBoolean boCenteredAdvanceJoystick;                      //!< [[custom]] Centered advance joystick value
    TBoolean boDeadManPedal;                                 //!< [[custom]] Dead man pedal value
    TBoolean boPressenceInNacelleSensor1;                    //!< [[custom]] Pressence in nacelle sensor 1 value
    TBoolean boPressenceInNacelleSensor2;                    //!< [[custom]] Pressence in nacelle sensor 2 value
    TBoolean boGachette;                                     //!< [[custom]] Gachette value
    TBoolean boKlaxon;                                       //!< [[custom]] Klaxon value
    TBoolean boStopMotorButton;                              //!< [[custom]] Stop Motor button
    TBoolean boAuthorizationWorkKey;                         //!< [[custom]] Authorization work key value
    TBoolean boEtallonnageJoystickButton;                    //!< [[custom]] Etallonnage Joystick Button
    TBoolean boClosePortillonSensor;                         //!< [[custom]] Close Portillon Sensor
    TUint8 u8Hearbeat48Xs;                                   //!< [[custom]] Heartbeat for slave module 48xs
    TUint16 u16BatterieVoltage48Xs;                          //!< [[custom]] Batterie voltage of module slave 48xs
}TDbRam48XsInputsC0;

typedef struct
{
    TDbListRoot tListRoot;
    TBoolean boWhiteLightsCommand;                           //!< [[custom]] White Lights command
    EDigStatus eWhiteLightsValue;                            //!< [[custom]] White Lights actual value
    TBoolean boRedLightsCommand;                             //!< [[custom]] Red Lights command
    EDigStatus eRedLightsValue;                              //!< [[custom]] Red Lights actual value
    TBoolean boWorkLightCommand;                             //!< [[custom]] Work Light command
    EDigStatus eWorkLightValue;                              //!< [[custom]] Work Light command
    TBoolean boBuzzerCommand;                                //!< [[custom]] Buzzer command
    EDigStatus eBuzzerValue;                                 //!< [[custom]] Buzzer actual value
    EErrorStatus48XS eMotorDefaultLightErrSta;               //!< [[custom]] Error status of Motor Default Light ouput
    EErrorStatus48XS eOverloadLightErrSta;                   //!< [[custom]] Error status of Overload Light ouput
    EErrorStatus48XS eBuzzerErrSta;                          //!< [[custom]] Error status of Buzzer ouput
    EErrorStatus48XS eGasOilLightErrSta;                     //!< [[custom]] Error status of Gas Oil Light ouput
    EErrorStatus48XS eDeversDefaultLightErrSta;              //!< [[custom]] Error status of devers default light ouput
    EErrorStatus48XS eRedLightARDErrSta;                     //!< [[custom]] Error status of Red Light ARD ouput
    EErrorStatus48XS eWhiteLightARDErrSta;                   //!< [[custom]] Error status of White Light ARD light ouput
    EErrorStatus48XS eWarmingLightErrSta;                    //!< [[custom]] Error status of Warming Light ouput
    EErrorStatus48XS eRedLightARGErrSta;                     //!< [[custom]] Error status of Red Light ARG ouput
    EErrorStatus48XS eWhiteLightARGErrSta;                   //!< [[custom]] Error status of White Light ARG light ouput
}TDbRam48XsOutputsC0;

typedef struct
{
    TDbListRoot tListRoot;
    EStateHeartBeat eStateRadioControl;                      //!< [[custom]] State of radio control
    TUint8 u8LeftManipulator;                                //!< [[custom]] Left manipulator
    TUint8 u8RightManipulator;                               //!< [[custom]] Right manipulator
    EManipulatorPosition eLeftManipulatorPosition;           //!< [[custom]] LeftManipulatorPosition
    EManipulatorPosition eRightManipulatorPosition;          //!< [[custom]] RightManipulatorPosition
    TBoolean boUpAxleArFixe;                                 //!< [[custom]] UpAxleArFixe
    TBoolean boDownAxleArFixe;                               //!< [[custom]] DownAxleArFixe
    TBoolean boUpAxleAvOscillant;                            //!< [[custom]] UpAxleAvOscillant
    TBoolean boDownAxleAvOscillant;                          //!< [[custom]] DownAxleAvOscillant
    TBoolean boRotationFrameCtClkwise;                       //!< [[custom]] Rotation frame Coutner clockwise
    TBoolean boRotationFrameClkwise;                         //!< [[custom]] Rotation frame clockwise
    TBoolean boSelectorRotTurret;                            //!< [[custom]] Selector rotation turret
    TBoolean boSelectorPendular;                             //!< [[custom]] Selector pendular
    TBoolean boRadioCommandConnect;                          //!< [[custom]] Radio command connect
    TBoolean boUpPendularOrRotCtClkTurret;                   //!< [[custom]] Up pendular or rotation clockwise turret
    TBoolean boDownPendularOrRotClkTurret;                   //!< [[custom]] down pendular or rotation counter clockwise turret
    TBoolean boStartRadioCommand;                            //!< [[custom]] Start radio command
    TBoolean boStopRadioCommand;                             //!< [[custom]] Stop radio command
    TBoolean boForcingAdvanceTrack;                          //!< [[custom]] Forcing advance track
    TBoolean boKlaxonCommand;                                //!< [[custom]] Klaxon command
}TDbRamEcuInputRadioControl;

typedef struct
{
    TDbListRoot tListRoot;
    TUint32 u32EncodeurTurret1AngleRaw;                      //!< [custom]] Encodeur turret 1 angle raw
    TInt16 i16EncodeurTurret1Angle;                          //!< [[°/10]] Encodeur turret 1 angle with calibration parameters
    TUint32 u32EncodeurTurret2AngleRaw;                      //!< [[custom]] Encodeur turret 2 angle raw
    TInt16 i16EncodeurTurret2Angle;                          //!< [[°/10]] Encodeur turret 2 angle with calibration parameters
    TInt16 i16SlopeLongAngleSensor1;                         //!< [[°/10]] Devers1 X axis angle value
    TInt16 i16SlopeTransAngleSensor1;                        //!< [[°/10]] Devers1 Y axis angle value
    TInt16 i16SlopeLongAngleValue;                           //!< [[°/10]] Slope Long Angle value with calibration offset
    TInt16 i16SlopeTransAngleValue;                          //!< [[°/10]] Slope Trans Angle value with calibration offset
    TUint8 u8StateHeartBeatDeversSensor;                     //!< [[custom]] State heart beat devers sensor
    TUint8 u8StateHeartBeatEncodeurTurret1;                  //!< [[custom]] State heart beat encodeur turret sensor 1
    TUint16 u16SelectedSlopeAngle;                           //!< [[custom]] Selected slope angle
    TUint32 u32EncodeurMastMeasureRaw;                       //!< [[custom]] Encodeur mast measure raw value
    TUint16 u16EncodeurMastMeasureCentimeter;                //!< [[cm]] Encodeur mast measure with calibration parameters in centilmer
    TInt16 i16SlopeLongAngleSensor2;                         //!< [[°/10]] Devers2 X axis angle value
    TInt16 i16SlopeTransAngleSensor2;                        //!< [[°/10]] Devers2 Y axis angle value
    TUint8 u8SlopeAlarm1;                                    //!< [[custom]] Slope Alarm 1 receive by CAN
    TUint8 u8SlopeAlarm2;                                    //!< [[custom]] Slope Alarm 2 receive by CAN
    TInt16 i16SlopeLongAngleValue2;                          //!< [[custom]] Slope Long Angle value with calibration offset 2
    TInt16 i16SlopeTransAngleValue2;                         //!< [[custom]] Slope Trans Angle value with calibration offset 2
    TUint16 u16ErrorCodeEncodeurTurret1;                     //!< [[custom]] Error code form emergency message encodeur turret 1
    TUint16 u16ErrorRegisterEncodeurTurret1;                 //!< [[custom]] Error register form emergency message encodeur turret 1
    TUint16 u16ErrorCodeEncodeurTurret2;                     //!< [[custom]] Error code form emergency message encodeur turret 2
    TUint16 u16ErrorRegisterEncodeurTurret2;                 //!< [[custom]] Error register form emergency message encodeur turret 2
    TUint16 u16ErrorCodeMastMeasure;                         //!< [[custom]] Error code form emergency message mast measure
    TUint16 u16ErrorRegisterMastMeasure;                     //!< [[custom]] Error register form emergency message mast measure
    TUint8 u8StateHeartBeatDeversSensor2;                    //!< [[custom]] State heart beat encodeur turret sensor 2
    TBoolean boTimeoutSdoReqDetectedEncdTurret1;             //!< [[custom]] Timeout Sdo Request Detected Encodeur Turret 1
    TBoolean boTimeoutSdoReqDetectedEncdTurret2;             //!< [[custom]] Timeout Sdo Request Detected Encodeur Turret 2
    TUint32 u32EncodeurTurretOffset;                         //!< [[custom]] Encodeur turret calibrate value
    TUint32 u32EncodeurTurretOffset2;                        //!< [[custom]] Encodeur turret calibrate value 2
}TDbRamCanSensorC0;

typedef struct
{
    TDbListRoot tListRoot;
    TBoolean boLoginStatus;                                  //!< [[custom]] User Log in Status (1=log in)
    TBoolean boAllowMovementNacelle;                         //!< [[custom]] Movement Allow Status
    TBoolean bogBreak_Parking_On_Off;                        //!< [[custom]] Break Parking Status
    TBoolean bogBreak_Faillure_On_Off;                       //!< [[custom]] Break Faillure Status
    TBoolean bogTurretInCenter;                              //!< [[custom]] Turret Sector in Center
    TBoolean bogTurretSectorInCenter;                        //!< [[custom]] Turret Sector in Center
    TBoolean bogVehiculeTrainMode;                           //!< [[custom]] Vehicule in Train Mode (Speed in MPH)
    TBoolean bogIncoherenceLateralStopAndKey;                //!< [[custom]] Incoherence between Lateral Stop and Key selector (A47)
    TBoolean bogWorkMode;                                    //!< [[custom]] 0=Work Mode activate 1=Site Acces Mode  (A4)
    TBoolean bogSafetyElectricPump;                          //!< [[custom]] Safety Electric Pump Activate (A44)
    TBoolean bogDownhill150mm;                               //!< [[custom]] Downhill between 150mm and 200mm (A13)
    TBoolean bogTrainModeAllow;                              //!< [[custom]] Train Mode Allow (A10)
    TBoolean bogBrakeTestService;                            //!< [[custom]] Brake test need to be launch (A22)
    TBoolean bogBrakePressureFault;                          //!< [[custom]] Brake Pressure Fault (A14)
    TBoolean bogActivateMeasuringMast;                       //!< [[custom]] Activate Measuring Mast (A21)
    TBoolean bogAutoMovementDirectionLight;                  //!< [[custom]] Auto Movement Direction Light (A23)
    TBoolean bogBackRailwayAxleLowPosition;                  //!< [[custom]] Back Railway Axle in Low Position (A7)
    TBoolean bogFrontRailwayAxleLowPosition;                 //!< [[custom]] Front Railway Axle in Low Position (A7)
    TBoolean bogBackRailwayAxleServiceBrake;                 //!< [[custom]] Back Railway Axle Service Brake (A25)
    TBoolean bogFrontRailwayAxleServiceBrake;                //!< [[custom]] Front Railway Axle Service Brake (A25)
    TBoolean bogBackRailwayAxleParkBrake;                    //!< [[custom]] Back Railway Axle Park Brake (A26)
    TBoolean bogFrontRailwayAxleParkBrake;                   //!< [[custom]] Front Railway Axle Park Brake (A26) 
    TBoolean bogStatusFrontLeftTrainBrakeTest;               //!< [[custom]] Status of Front Left Train Brake Test (A27)
    TBoolean bogStatusFrontRightTrainBrakeTest;              //!< [[custom]] Status of Front Right Train Brake Test (A27)
    TBoolean bogStatusBackLeftTrainBrakeTest;                //!< [[custom]] Status of Back Left Train Brake Test (A27)
    TBoolean bogStatusBackRightTrainBrakeTest;               //!< [[custom]] Status of Back Left Train Brake Test (A27)
    TBoolean bogAlarmAru;                                    //!< [[custom]] Status of the ARU alarm
    TUint16 u16gEngine_Use_Time;                             //!< [[custom]] Engine use time in hour
    TUint16 u16gEngine_RPM;                                  //!< [[custom]] Engine RPM
    TUint16 u16gVehiculeSpeed;                               //!< [[custom]] Vehicule Speed in Km/h * 100
    TUint8 u8gLateralizationStop;                            //!< [[custom]] Lateralization Stop 1=bi lateralization 2=ALO Work 3=Multiple tr
    TUint8 u8gKeySelector;                                   //!< [[custom]] Key Selector 1=bi lateralization 2=ALO Work 3=Multiple track(A6)
    TUint8 u8gFrontSpeedRailWayAxle;                         //!< [[custom]] Front Speed Railway Axle in Km/h (A24)
    TUint8 u8gBackSpeedRailWayAxle;                          //!< [[custom]] Back Speed Railway Axle in Km/h
    TBoolean bogButtonCalibTurretEncoder;                    //!< [[custom]] Button for the calibration of the turret encoder is pressed
    TBoolean bogOffTrackTestBrakeActivated;                  //!< [[custom]] Status of off track variable on test brake page
    TBoolean bogOffTrackRunInBrakeActivated;                 //!< [[custom]] Status of off track variable on run in process page
    TBoolean bogOsciServiceBrakeSelect;                      //!< [[custom]] Request status of osci service test brake
    TBoolean bogFixedServiceBrakeSelect;                     //!< [[custom]] Request status of fixed service test brake
    TBoolean bogBothServiceBrakeSelect;                      //!< [[custom]] Request status of both service test brake
    TBoolean bogOsciParkBrakeSelect;                         //!< [[custom]] Request status of osci park test brake
    TBoolean bogFixedParkBrakeSelect;                        //!< [[custom]] Request status of fixed park test brake
    TBoolean bogBothParkBrakeSelect;                         //!< [[custom]] Request status of both park test brake
    TBoolean bogOsciServiceRunInBrakeSelect;                 //!< [[custom]] Request status of osci service run in brake
    TBoolean bogFixedServiceRunInBrakeSelect;                //!< [[custom]] Request status of fixed service run in test brake
    TBoolean bogBothServiceRunInBrakeSelect;                 //!< [[custom]] Request status of both service run in test brake
    TBoolean bogTestBrakePageActive;                         //!< [[custom]] Test brake page is active on screen
    TBoolean bogBreakInBrakePageActive;                      //!< [[custom]] break in brake page is active on screen
    TBoolean bogRollingCode;                                 //!< [[custom]] Active rolling code
    TBoolean bogBPBasketValidate;                            //!< [[custom]] BP Basket Validate
    TBoolean bogKeyFilterOverload;                           //!< [[custom]] Key Filter Overload
    TBoolean bogKeyNextMode;                                 //!< [[custom]] Key Next Mode
    TBoolean bogKeyPrevMode;                                 //!< [[custom]] Key Prev Mode
    TBoolean bogKeySignalDanger;                             //!< [[custom]] Key Signal Danger
    TBoolean bogKeyFlashLightON;                             //!< [[custom]] Key Flash Light ON
    TBoolean bogKeyCalibMastMin;                             //!< [[custom]] Key Calib Mast Min
    TBoolean bogKeyCalibMastMax;                             //!< [[custom]] Key Calib Mast Max
    TBoolean bogKeyCalibMastValid;                           //!< [[custom]] KeyCalibMastValid
    TBoolean bogKeyGeneratorActivate;                        //!< [[custom]] Key Generator Activation
    TBoolean bogRazDistanceTraveledMastMeasure;              //!< [[custom]] raz distance travaled mast mesure button
    TBoolean bogKeyWhiteLights15746;                         //!< [[custom]] Key white lights 15746
    TBoolean bogOsci2ndParkBrakeSelect;                      //!< [[custom]] Osci 2nd Park Brake Select
    TBoolean bogFixe2ndParkBrakeSelect;                      //!< [[custom]] Fixe 2nd Park Brake Select
    TBoolean bogKeyRazController;                            //!< [[custom]] RAZ controller Key
}TDbRamEvision7C0;

typedef struct
{
    TDbListRoot tListRoot;
    EDiState eC1TurretPostSelector;                          //!< [[custom]] Turret post selector input C1
    EDiState eC1RadioPostSelector;                           //!< [[custom]] Radio Post Selector input C1
    EDiState eC1NacellePostSelector;                         //!< [[custom]] Nacelle Post Selector input C1
    TBoolean boUpAxleOscillantCommand;                       //!< [[custom]] Up axle oscillant command
    TBoolean boDownAxleOscillantCommand;                     //!< [[custom]] Down axle oscillant command
    TBoolean boUpAxleFixeCommand;                            //!< [[custom]] Up axle Fixe command
    TBoolean boDownAxleFixeCommand;                          //!< [[custom]] Down axle Fixecommand
    TInt32 i32RegimeMotorAlternatorRpm;                      //!< [[custom]] Regime motor alternator rpm
    TBoolean boEntryTelescopeFdcSensor;                      //!< [[custom]] Entry telescope fdc sensor
    TBoolean boDeltaArmFoldedSensor;                         //!< [[custom]] DElta arm folded sensor
    TBoolean boBoomArmFoldedSensor;                          //!< [[custom]] Booom Arm folded sensor
    TBoolean boDeltaArmInLowerZone;                          //!< [[custom]] Delta ram in lower zone
    TInt16 i16ArrowArmAngularSensor;                         //!< [[°/100]] Arrow arm angular sensor value
    TBoolean boTurretInRearCenterPos;                        //!< [[custom]] Turret is in the rear center zone
    TBoolean boTurretInFrontCenterPos;                       //!< [[custom]] Turret is in the front center zone
    TBoolean boFoldedDeltaArmZone;                           //!< [[custom]] Folded delta arm zone detect with analog sensor
    TBoolean boFoldedArrowArmZone;                           //!< [[custom]] Folded arrow arm zone detect with analog sensor
    TBoolean boNoMovementIsDuring;                           //!< [[custom]] No movement is during
    TInt16 i16DeltaArmAngularSensor;                         //!< [[custom]] Delta arm angular sensor value
    TBoolean boFoldedMastMeasure;                            //!< [[custom]] Folded position of mast measure
    TInt16 i16Transmission1Pressure;                         //!< [[custom]] Transmission1 Pressure
    TInt16 i16Transmission2Pressure;                         //!< [[custom]] Transmission2 Pressure
    EDiState eActiveHelpState;                               //!< [[custom]] Active Help state
    TBoolean boBasketInCentrerPos;                           //!< [[custom]] Basket un center position
    TBoolean boStopAllMovementsNacellePost;                  //!< [[custom]] Stop all movements Nacelle post
    TUint16 u16EncodeurMastMeasureCentimeter;                //!< [[custom]] Encodeur Mast measure value in centimer
    TBoolean boMastMeasureFonctionActive;                    //!< [[custom]] Flag when mast measure function is active
    TBoolean boOutOfRangeTransmissionPressure;               //!< [[custom]] Out of range transmission pressure
    TBoolean boBeacon;                                       //!< [[custom]] Commande du gyrophare
    TBoolean boMotorOn;                                      //!< [[custom]] Moteur allumé
    TBoolean boFaultLenghtSensor;                            //!< [[custom]] Alarme du capteur téléscope
    TBoolean boTurretSensorsFailures;                        //!< [[custom]] Alarme sur le capteur tourelle
    TBoolean boOptionWhiteLight15746;                        //!< [[custom]] Option White Light EN15746
    TBoolean boSafeManSystem;                                //!< [[custom]] Safe man system
    TBoolean boSlopeModeFromC1;                              //!< [[custom]] Slope Mode from C1
    TBoolean boColdOilTankTemperature;                       //!< [[custom]] Cold Oil Tank Temperature
    TBoolean boElectricMotorForbidden;                       //!< [[custom]] Electric Motor Forbidden
    TInt16 i16RpmMotorElectric;                              //!< [[custom]] Rpm Electric Motor 
    TInt16 i16OilTankTemperatureValue;                       //!< [[custom]] Oil Tank Temperature 
    TBoolean boSocStopRegen;                                 //!< [[custom]] SOC stop regeneration
    TBoolean boGeneratorOn;                                  //!< [[custom]] Generator ON
    TBoolean boEvDevMvtsCmd;                                 //!< [[custom]] Active EV deviator movements command
    TBoolean boTestElectricalFromC1;                         //!< [[custom]] Test electrical from C1
    TBoolean boAutoModeActivate;                             //!< [[custom]] Automatic Mode Activate
    TBoolean boSilenceModeActivate;                          //!< [[custom]] Silence Mode Activate
    TBoolean boForcingRegenlow;                              //!< [[custom]] Forcing Regeneration low level
    TBoolean boForcingRegenHigh;                             //!< [[custom]] Forcing Regeneration High level
    TBoolean boEvBypassCommand;                              //!< [[custom]] EV Bypass command
    TInt16 i16MotorspeedCmdJ1939;                            //!< [[custom]] Motor speed CMD J1939
}TDbRamEcuC0RcvFromC1;

typedef struct
{
    TDbListRoot tListRoot;
    TBoolean boCalibTurretAngle;                             //!< [[custom]] Command to perform the calibration of turret angle
    TBoolean boCalibTurretAngleIntermedaireBool;             //!< [[custom]] Command to perform the calibration of turret angle intermediaire
    TBoolean boCalibSlopeLong;                               //!< [[custom]] Command to perform the calibration of longetude angle
    TBoolean boCalibSlopeTrans;                              //!< [[custom]] Command to perform the calibration of transversal angle
    TBoolean boSavedCalibrationListC0;                       //!< [[custom]] Command to saved calibration list value on EEPROM
}TDbRamEcuCaliCmdC0;

typedef struct
{
    TDbListRoot tListRoot;
    TInt16 i16AccesSiteSpeedForward;                         //!< [[mA/10]] Acces chantier speed aplly to consigne max EvForward
    TInt16 i16HighSpeedForward;                              //!< [[mA/10]] High speed aplly to consigne max EvForward
    TInt16 i16LowSpeedForward;                               //!< [[mA/10]] Low speed aplly to consigne max EvForward
    TInt16 i16LowSpeedBrakeTestForward;                      //!< [[custom]] Low speed apply to consigne max EvForward when test brake is nee
    TInt16 i16HighSpeedSlopeTresholdAbs;                     //!< [[°/10]] Treshold slope vehicule angle for high speed (absolute)
    TInt16 i16HighSpeedSlopeTresholdHystRel;                 //!< [[°/10]] Hysteresis applied on the slope vehicule angle for high speed (r
    TInt16 i16LowSpeedSlopeTresholdAbs;                      //!< [[°/10]] Treshold slope vehicule angle for low speed (absolute)
    TInt16 i16LowSpeedSlopeTresholdHystRel;                  //!< [[°/10]] Hysteresis applied on the slope vehicule angle for low speed (re
    TInt16 i16TurretLowSpeedTresholdRel;                     //!< [[°/10]] Treshold angle of turret for low speed in (relative to TurretRea
    TInt16 i16TurretLowSpeedTresholdHyst;                    //!< [[°/10]] Hysteresis applied on the Treshold angle of turret for low speed
    TInt16 i16TurretRearCenterPos;                           //!< [[custom]] Rear center position of the turret
    TInt16 i16TurretFrontPositiveCenterPos;                  //!< [[custom]] Front center position of the turret in the positive direction
    TInt16 i16TurretFrontNegativeCenterPos;                  //!< [[custom]] Front center position of the turret in the negative direction
    TUint16 u16LimitSpeedAccesSiteSpeed;                     //!< [[km/h]] Limit speed on mode acces site speed wich trigger emergency brak
    TUint16 u16LimitSpeedHighSpeed;                          //!< [[km/h]] Limit speed on mode highSpeed wich trigger emergency brake
    TUint16 u16LimitSpeedLowSpeed;                           //!< [[km/h]] Limit speed on mode lowSpeed speed wich trigger emergency brake
    TUint16 u16LimitSpeedLowSpeedBrakeTest;                  //!< [[km/h]] Limit speed on mode Low Speed Brake Test wich trigger emergency 
    TInt16 i16AccesSiteSpeedBackward;                        //!< [[custom]] Acces chantier speed aplly to consigne max Backward 
    TInt16 i16HighSpeedBackward;                             //!< [[custom]] High speed aplly to consigne max Backward 
    TInt16 i16LowSpeedBackward;                              //!< [[custom]] Low speed aplly to consigne max Backward 
    TInt16 i16LowSpeedBrakeTestBackward;                     //!< [[custom]] Low speed apply to consigne max EvBackward when test brake is ne
    TInt16 i16TestBrakeSpeedForward;                         //!< [[custom]] Test brake speed apply to consinge max Ev forward
    TInt16 i16TestBrakeSpeedBackward;                        //!< [[custom]] Test brake speed apply to consinge max Ev backward
    TInt16 i16BreakeInBrakeSpeedForward;                     //!< [[custom]] Break in brake speed apply to consinge max Ev forward
    TInt16 i16BreakeInBrakeSpeedBackward;                    //!< [[custom]] Break in brake speed apply to consinge max Ev backward
    TInt16 i16ArmSpeedRailHyst;                              //!< [[custom]] Arm speed rail hysteresis
    TInt16 i16ArmLowSectorBasketFaultThres;                  //!< [[custom]] Arm low sector basket fault treshold
    TInt16 i16ArmLowZoneForLowSpeed;                         //!< [[custom]] Arm low zone for low speed
    TInt16 i16TurretRearNegLowSpeedTreshold;                 //!< [[custom]] Turret rear negatif low speed treshold
    TInt16 i16TurretRearPosLowSpeedTreshold;                 //!< [[custom]] Turret rear positif low speed treshold
    TUint16 u16Performance2DegSlopeThres;                    //!< [[custom]] Slope thres of 2 deg for STRUKTON
    TUint16 u16Performance4DegSlopeThres;                    //!< [[custom]] Slope thres of 4 deg for STRUKTON
    TUint16 u16Performance6DegSlopeThres;                    //!< [[custom]] Slope thres of 6 deg for STRUKTON
    TUint16 u16PerformanceDegSlopeHyst;                      //!< [[custom]] Slope Hyst for measure of slope angle 
    TInt16 i16TurretPerfLowSpeedHystHigh;                    //!< [[custom]] Turret Hyst for sector of turret versus slope angle
    TInt16 i16TurretPerformLowSpeed2Deg;                     //!< [[custom]] Turret Sector for Slope angle below 2 Deg
    TInt16 i16TurretPerformLowSpeedBasketRot2;               //!< [[custom]] Turret Sector for Slope angle below 2 Deg with rotation basket
    TInt16 i16TurretPerformLowSpeed4Deg;                     //!< [[custom]] Turret Sector for Slope angle below 4 Deg
    TInt16 i16TurretPerfLowSpeedBasketRot4Deg;               //!< [[custom]] Turret Sector for Slope angle below 4 Deg with rotation basket
    TInt16 i16TurretPerformLowSpeed6Deg;                     //!< [[custom]] Turret Sector for Slope angle below 6 Deg
    TInt16 i16TurretPerfLowSpeedBasketRot6Deg;               //!< [[custom]] Turret Sector for Slope angle below 6 Deg with rotation basket
    TUint16 u16PreventLimitSpeedAccesSiteSpeed;              //!< [[custom]] Parameters to Prevention for Limit Speed in Acces Site Speed
    TUint16 u16PreventLimitSpeedHighSpeed;                   //!< [[custom]] Parameters to Prevention for Limit Speed in High Speed
    TUint16 u16PreventLimitSpeedLowSpeed;                    //!< [[custom]] Parameters to Prevention for Limit Speed in Low Speed
    TUint16 u16PreventSpeedLowSpeedBrakeTest;                //!< [[custom]] Parameters to Prevention for Speed in Low Speed Brake Test
    TUint16 u16Performance2DegSlopeThresMG;                  //!< [[custom]] Slope thres of 2 deg for MG Machines
    TUint16 u16Performance4DegSlopeThresMG;                  //!< [[custom]] Slope thres of 4 deg for MG Machines
    TUint16 u16Performance6DegSlopeThresMG;                  //!< [[custom]] Slope thres of 6 deg for MG Machines
    TInt16 i16TurretPerformLowSpeed2DegMG;                   //!< [[custom]] Turret Sector for Slope angle below 2 Degree MG
    TInt16 i16TurretPerformLowSpeedBasket2MG;                //!< [[custom]] Turret Sector for Slope angle below 2 Degree with rotation baske
    TInt16 i16TurretPerformLowSpeed4DegMG;                   //!< [[custom]] Turret Sector for Slope angle below 4 Degree MG
    TInt16 i16TurretPerformLowSpeedBasket4MG;                //!< [[custom]] Turret Sector for Slope angle below 4 Degree with rotation baske
    TInt16 i16TurretPerformLowSpeed6DegMG;                   //!< [[custom]] Turret Sector for Slope angle below 6 Degree MG
    TInt16 i16TurretPerformLowSpeedBasket6MG;                //!< [[custom]] Turret Sector for Slope angle below 6 Degree with rotation baske
}TDbNvParamSpeedMaxRail;

typedef struct
{
    TDbListRoot tListRoot;
    TBoolean boSlopeOverHighSpeedTresh;                      //!< [[custom]] Slope is over at high speed treshold (a hysteris is applied on t
    TBoolean boSlopeLowerLowSpeedTresh;                      //!< [[custom]] Slope is lower at low speed treshold (a hysteris is applied on t
    TBoolean boTurretInLowSpeedRearZone;                     //!< [[custom]] Turret angle in low speed rear zone
    TBoolean boTurretInLowSpeedPosFrontZone;                 //!< [[custom]] Turret angle in low speed postiif front zone
    TBoolean boTurretInLowSpeedNegFrontZone;                 //!< [[custom]] Turret angle in low speed negatif front zone
    TBoolean boTurretInLowSpeedZone;                         //!< [[custom]] Turret angle in low speed zone
    TBoolean boEnableSimuMode;                               //!< [[custom]] Enable simulation mode (use the simulation variables instead of 
    TUint16 u16SimuDevers;                                   //!< [[custom]] 
    TInt16 i16SimuTurretAngle;                               //!< [[custom]] 
    TBoolean boSimuAuthorizationWorkKey;                     //!< [[custom]] 
    EDiState eSimuAbutmentTurretCentred;                     //!< [[custom]] 
    EDiState eSimuWorkKeyCentred;                            //!< [[custom]] 
    TBoolean boSimuTelescopeEntry;                           //!< [[custom]] 
    TBoolean boSimuDeltaArmFoldedSensor;                     //!< [[custom]] 
    TBoolean boSimuDeltaArmFoldedZone;                       //!< [[custom]] 
    TBoolean boSimuArrowArmFoldedSensor;                     //!< [[custom]] 
    TBoolean boSimuArrowArmFoldedZone;                       //!< [[custom]] 
    TBoolean boSimuNacelleBasketLeftSideSensor1;             //!< [[custom]] 
    TBoolean boSimuNacelleBasketLeftSideSensor2;             //!< [[custom]] 
    TBoolean boSimuNacelleBasketRighSideSensor1;             //!< [[custom]] 
    TBoolean boSimuNacelleBasketRighSideSensor2;             //!< [[custom]] 
    TBoolean boSimuHighSectorPlateSensor;                    //!< [[custom]] 
    ERailSpeedMode eRailSpeedMaxMode;                        //!< [[custom]] 
    TBoolean boSimuDeltaArmInLowerZone;                      //!< [[custom]] 
    TBoolean boSimuTurretInRearCenterPos;                    //!< [[custom]] 
    TBoolean boSimuTurretInFrontCenterPos;                   //!< [[custom]] 
    TBoolean boLimitSpeedAccesSiteSpeedExceeded;             //!< [[custom]] Flag to detect exceeded of limit speed acces site
    TBoolean boLimitSpeedHighSpeedExceeded;                  //!< [[custom]] Flag to detect exceeded of limit speed high
    TBoolean boLimitSpeedLowSpeedExceeded;                   //!< [[custom]] Flag to detect exceeded of limit speed low speed
    TBoolean boLimitSpeedLowSpeedBrakeTestExced;             //!< [[custom]] Flag to detect exceeded of limit speed speed brake test
    TBoolean boLitmitSpeedExceeded;                          //!< [[custom]] Flag when one Litmit is exceeded
    TBoolean boKinematicTrainAllow;                          //!< [[custom]] Kinematic train allow
    TBoolean boSlopeCaseLess2Deg;                            //!< [[custom]] Case of Slope angle below 2 deg
    TBoolean boSlopeCaseLess4Deg;                            //!< [[custom]] Case of Slope angle below 4 deg
    TBoolean boSlopeCaseLess6Deg;                            //!< [[custom]] Case of Slope angle below 6 deg
    TBoolean boSlopeCaseHigher6Deg;                          //!< [[custom]] Case of Slope angle higher than 6 deg
    TBoolean boTurretInSpeedZone2Deg;                        //!< [[custom]] Turret in Low Speed zone below 2 deg
    TBoolean boTurretInSpeedZone4Deg;                        //!< [[custom]] Turret in Low Speed zone below 4 deg
    TBoolean boTurretInSpeedZone6Deg;                        //!< [[custom]] Turret in Low Speed zone below 6 deg
    TBoolean boTurretInSpeedZone2DegForBasket;               //!< [[custom]] Turret in Low Speed zone below 2 deg with basket rotation
    TBoolean boTurretInSpeedZone4DegForBasket;               //!< [[custom]] Turret in Low Speed zone below 4 deg with basket rotation
    TBoolean boTurretInSpeedZone6DegForBasket;               //!< [[custom]] Turret in Low Speed zone below 6 deg with basket rotation
    TBoolean boPreventLimitSpeedAccesSiteSpeed;              //!< [[custom]] Prevention for Limit Speed Acces Site Speed
    TBoolean boPreventLimitSpeedHighSpeed;                   //!< [[custom]] Prevention for Limit Speed High Speed
    TBoolean boPreventLimitSpeedLowSpeed;                    //!< [[custom]] Prevention for Limit Speed Low Speed
    TBoolean boPreventLimitLowSpeedBrakeTest;                //!< [[custom]] Prevention for Limit Low Speed Brake Test
    TBoolean boPreventLimitSpeedExceeding;                   //!< [[custom]] Prevention exceeding of limit speed
    TBoolean boAuthoriseGlobalLowSpeed;                      //!< [[custom]] Authorize global low speed in add performance function
    TUint16 u16SelectSlopeCase2Deg;                          //!< [[custom]] Selected Case of Slope angle below 2 deg
    TUint16 u16SelectSlopeCase4Deg;                          //!< [[custom]] Selected Case of Slope angle below 4 deg
    TUint16 u16SelectSlopeCase6Deg;                          //!< [[custom]] Selected Case of Slope angle below 6 deg
    TInt16 i16SelectTurretSectorCase2Deg;                    //!< [[custom]] Selected sector for Turret in Low Speed zone below 2 deg
    TInt16 i16SelectTurretSectorCase4Deg;                    //!< [[custom]] Selected sector for Turret in Low Speed zone below 4 deg
    TInt16 i16SelectTurretSectorCase6Deg;                    //!< [[custom]] Selected sector for Turret in Low Speed zone below 6 deg
    TInt16 i16SelectedTurretCase2DegForBasket;               //!< [[custom]] Selected sector for Turret in Low Speed zone below 2 deg with ba
    TInt16 i16SelectedTurretCase4DegForBasket;               //!< [[custom]] Selected sector for Turret in Low Speed zone below 4 deg with ba
    TInt16 i16SelectedTurretCase6DegForBasket;               //!< [[custom]] Selected sector for Turret in Low Speed zone below 6 deg with ba
}TDbRamSpeedMaxRail;

typedef struct
{
    TDbListRoot tListRoot;
    TUint16 u16NCycleNeedBrakeTest;                          //!< [[custom]] N cycles brake need to make a validation brake test
    TUint16 u16NCyclesBrakeCritical;                         //!< [[custom]] N cycles critical , limit speed to 3km/h
    TUint16 u16SpeedMinTreshIncrBrakeCycles;                 //!< [[kmh]] Speed mini treshold to increment brake cycle
    TUint16 u16PressureOsciServiceBrakeTresh;                //!< [[Bar/10]] Pressure treshold for osci service brake 
    TUint16 u16PressureFixeServiceBrakeTresh;                //!< [[Bar/10]] Pressure treshold for fixe service brake 
    TUint16 u16PressureOsciParkingBrakeTresh;                //!< [[Bar/10]] Pressure treshold for osci parking brake
    TUint16 u16PressureFixeParkingBrakeTresh;                //!< [[Bar/10]] Pressure treshold for fixe parking brake
    TUint16 u16TimeOsciSerivceBrakeMs;                       //!< [[ms]] Time for osci service brake valid test
    TUint16 u16TimeFixeSerivceBrakeMs;                       //!< [[ms]] Time for fixe service brake valid test
    TUint16 u16TimeOsciParkingBrakeMs;                       //!< [[ms]] Time for osci parking brake valid test
    TUint16 u16TimeFixeParkingBrakeMs;                       //!< [[ms]] Time for fixe parking brake valid test
    TUint16 u16SpeedMinBrakeTestRunning;                     //!< [[kmh]] Speed mini to brake automatically
    TUint32 u32ValidCondiEnableTestBrakeTime;                //!< [[ms]] Valid condition to enable test brake time
    TUint8 u8NbElementDeltaTransmPressure;                   //!< [[custom]] Number element of delta transmission pressure
    TUint16 u16NCycleNeed2ndParkBrake;                       //!< [[custom]] Seuil maximum de cycle de frein
    TUint16 u16NCycles2ndBrakeCritical;                      //!< [[custom]] 2nd Seuil de dépassement critique
    TUint16 u16TimeOsci2ndParkingBrakeMs;                    //!< [Ms] Temps pour la validation du test frein
    TUint16 u16TimeFixe2ndParkingBrakeMs;                    //!< [Ms] Temps pour la validation du test frein
    TUint16 u16ThresCpt2ndParkBrake;                         //!< [[custom]] Threshold counter 2nd Park Brake
    TUint16 u16MinThresholdActive2ndParkBrake;               //!< [[custom]] Minimum Threshold Active 2nd Park Brake
}TDbNvParamBrakeTest;

typedef struct
{
    TDbListRoot tListRoot;
    TBoolean boForbidCameraDisplay;                          //!< [[custom]] Fordid camera display when brake test is running
    TUint16 u16PressureEfficiencyRate;                       //!< [[custom]] Pressure efficiency rate
    EBrakeTestSelected eBrakeTestSelected;                   //!< [[custom]] Wich brake test selected on screen
    TBoolean boNeedTestBrake;                                //!< [[custom]] Flag when cycle brake perform is over parameters NCycleNeedBrake
    TBoolean boCycleBrakeOverCriticalNumber;                 //!< [[custom]] Flag when cycle brake perform is over critial number of cycle br
    TBoolean boUpPositionAxles;                              //!< [[custom]] Up position of axle
    TBoolean boDownPositionAxles;                            //!< [[custom]] Down position of axle
    TBoolean boIncoherencePosAxleAndTestMode;                //!< [[custom]] Incoherence position axle and test mode in rail or offrail
    TBoolean boTestBrakeInOffrailMode;                       //!< [[custom]] Test brake in rail or offrail mode
    TBoolean boBrakeTestRunning;                             //!< [[custom]] Flag when brake test running
    TBoolean boValidBrakeTest;                               //!< [[custom]] Flag when valid brake test is done
    TBoolean boEnableIncrementCycleBrakePerform;             //!< [[custom]] enable condition to increment cycke brake perform
    TBoolean boValidOsciServiceBrakeTest;                    //!< [[custom]] flag when a valid test brake is operared on oscillant service br
    TBoolean boValidFixeServiceBrakeTest;                    //!< [[custom]] flag when a valid test brake is operared on fixe service brake
    TBoolean boValidOsciParkingBrakeTest;                    //!< [[custom]] flag when a valid test brake is operared on oscillant parking br
    TBoolean boValidFixeParkingBrakeTest;                    //!< [[custom]] flag when a valid test brake is operared on fixe parking brake
    TBoolean boSimuOsciServiceBrakeSelect;                   //!< [[custom]] Simulation osci service breake select on screen
    TBoolean boSimuFixeServiceBrakeSelect;                   //!< [[custom]] Simulation fixe service breake select on screen
    TBoolean boSimuOsciParkBrakeSelect;                      //!< [[custom]] Simulation osci parking breake select on screen
    TBoolean boSimuFixeParkBrakeSelect;                      //!< [[custom]] Simulation fixe parking breake select on screen
    TBoolean boSimu2ServiceBrakesSelect;                     //!< [[custom]] Simulation two service breake select on screen
    TBoolean boSimu2ParkBrakesSelect;                        //!< [[custom]] Simulation two parking breake select on screen
    EPosJoy eRetainPosJoyAdvance;                            //!< [[custom]] Retain postition of joystick advanement
    EPosJoy eAcutalPosJoyAdvance;                            //!< [[custom]] Actual postion of joystick advancement
    TBoolean boForceOsciServiceBrake;                        //!< [[custom]] Force oscillant service brake
    TBoolean boForceFixeServiceBrake;                        //!< [[custom]] Force fixe service brake
    TBoolean boForceOsciParkBrake;                           //!< [[custom]] Force oscillant parking brake
    TBoolean boForceFixeParkBrake;                           //!< [[custom]] Force fixe parking brake
    TBoolean boStopMovementByBrakeTest;                      //!< [[custom]] stop all movement when a brake test
    TBoolean boAuthorizeTransaltionRail;                     //!< [[custom]] Authorize translation rail when nacelle in transport mode and no
    TInt16 i16DeltaTransmissionPressure;                     //!< [[custom]] Delta of transmission 1 and 2 preussre
    TBoolean boValidConditionEnableTestBrake;                //!< [[custom]] Valid condition enable test brake flag
    TBoolean boTimeOutValidCondition;                        //!< [[custom]] Flag when time out of valid condition to enable test brake
    TUint8 u8PourcentCycleBrake;                             //!< [[custom]] Pourcent cycle brake
    TBoolean boForce2ndParkBrakeFixe;                        //!< [[custom]] Activation de l_EV
    TBoolean boForce2ndParkBrakeOsci;                        //!< [[custom]] Activation de l_EV
    TBoolean boValidOsci2ndParkBrakeTest;                    //!< [[custom]] Validation du test frein du frein de parc additionnel sur l_essi
    TBoolean boValidFixe2ndParkBrakeTest;                    //!< [[custom]] Validation du test frein du frein de parc additionnel sur l_essi
    TUint8 u8PourcentCycle2ndParkBrake;                      //!< [[custom]] Variable de conversion du nombres de test frein en pourcentage
    TBoolean boNeedTest2ndParkBrake;                         //!< [[custom]] Variable de dépassement du seuil de test frein
    TBoolean boCycle2ndParkBrakeCritical;                    //!< [[custom]] Variable de dépassement du seuil critique de test frein
    TBoolean boAddParkBrakeActive;                           //!< [[custom]] Additionnal Park Brake Active
    TBoolean boParkBrake2ndPressureActive;                   //!< [[custom]] Park Brake 2nd Pressure Active
}TDbRamBrakeTest;

typedef struct
{
    TDbListRoot tListRoot;
    TInt16 i16MinTurretAngleConsistALO;                      //!< [[°/10]] Minimum allowed turret angle for the consistency check in ALO mo
    TInt16 i16MaxTurretAngleConsistALO;                      //!< [[°/10]] Maximum allowed turret angle for the consistency check in ALO mo
    TInt16 i16MinTurretAngleConsistMultilane;                //!< [[°/10]] Minimum allowed turret angle for the consistency check in multil
    TInt16 i16MaxTurretAngleConsistMultilane;                //!< [[°/10]] Maximum allowed turret angle for the consistency check in multil
    TInt16 i16ALOTurretRearZoneThres;                        //!< [[°/10]] ALO mode - Rear zone threshold of the turret (absolute)
    TInt16 i16ALOTurretRearZoneHyst;                         //!< [[°/10]] ALO mode - Hysteresis applied on the rear zone threshold of the 
    TInt16 i16ALOTurretRearZoneSlowThres;                    //!< [[°/10]] ALO mode - Threshold use to reduce speed before the rear zone of
    TInt16 i16ALOTurretFrontZoneThres;                       //!< [[°/10]] ALO mode - Front zone threshold of the turret (absolute)
    TInt16 i16ALOTurretFrontZoneHyst;                        //!< [[°/10]] ALO mode - Hysteresis applied on the front zone threshold of the
    TInt16 i16ALOTurretFrontZoneSlowThres;                   //!< [[°/10]] ALO mode - Threshold use to reduce speed before the front zone o
    TInt16 i16ALOArrowLowerZoneThres;                        //!< [[°/100]] ALO mode - Threshold of the lower zone of the arrow arm (absolut
    TInt16 i16ALOArrowLowerZoneHyst;                         //!< [[°/100]] ALO mode - Hysteresis applied on the lower zone threshold of the
    TInt16 i16ALOArrowLowerZoneSlowThres;                    //!< [[°/100]] ALO mode - Threshold use to reduce speed before the lower zone o
    TInt16 i16ALOTurretRearEndStopThres;                     //!< [[°/10]] ALO mode - Turret rear end stop threshold (absolute)
    TInt16 i16ALOTurretRearEndStopHyst;                      //!< [[°/10]] ALO mode - Hysteresis applied on the turret rear end stop thresh
    TInt16 i16ALOTurretRearEndStopSlowThres;                 //!< [[°/10]] ALO mode - Threshold use to reduce speed before the rear end sto
    TInt16 i16ALOTurretFrontEndStopThres;                    //!< [[°/10]] ALO mode - Turret rear end stop threshold (absolute)
    TInt16 i16ALOTurretFrontEndStopHyst;                     //!< [[°/10]] ALO mode - Hysteresis applied on the turret rear end stop thresh
    TInt16 i16ALOTurretFrontEndStopSlowThres;                //!< [[°/10]] ALO mode - Threshold use to reduce speed before the rear end sto
    TInt16 i16ALOTurretRearZoneStopThres;                    //!< [[custom]] ALO mode - Threshold use to stop the turret before reaching the 
    TInt16 i16ALOTurretRearZoneStopHyst;                     //!< [[custom]] ALO mode - Hysteresis applied to the rear zone stop threshold of
    TInt16 i16ALOTurretFrontZoneStopThres;                   //!< [[custom]] ALO mode - Threshold use to stop the turret before reaching the 
    TInt16 i16ALOTurretFrontZoneStopHyst;                    //!< [[custom]] ALO mode - Hysteresis applied to the front zone stop threshold o
    TInt16 i16ALOArrowLowerZoneStopThres;                    //!< [[custom]] ALO mode - Threshold use to stop the arrow arm before reaching t
    TInt16 i16ALOArrowLowerZoneStopHyst;                     //!< [[custom]] ALO mode - Hysteresis applied to the lower zone stop threshold o
    TInt16 i16ThresHighSlopeForArrowUp;                      //!< [[custom]] Threshold High Slope For Arrow Up
    TInt16 i16HystHighSlopeForArrowUp;                       //!< [[custom]] Hysteresis High Slope For Arrow Up
}TDbNvParamRailWorkSafetyC0;

typedef struct
{
    TDbListRoot tListRoot;
    ERailWorkMode eRailWorkMode;                             //!< [enum] Rail work mode selected by the key
    TBoolean boWrongTurretAbutBilateralMode;                 //!< [[custom]] Consistency check - wrong turret abutment in bilateral mode
    TBoolean boWrongTurretAbutMultilaneMode;                 //!< [[custom]] Consistency check - wrong turret abutment in multilane mode
    TBoolean boWrongTurretAbutALOMode;                       //!< [[custom]] Consistency check - wrong turret abutment in ALO mode
    TBoolean boWrongBasketAbutBilateralMode;                 //!< [[custom]] Consistency check - wrong basket abutment in bilateral mode (onl
    TBoolean boWrongBasketAbutMultilaneMode;                 //!< [[custom]] Consistency check - wrong basket abutment in multilane mode (onl
    TBoolean boWrongBasketAbutALOMode;                       //!< [[custom]] Consistency check - wrong basket abutment in ALO mode (only for 
    TBoolean boWrongAbutments;                               //!< [[custom]] Consistency check - wrong abutment detected
    TBoolean boWrongTurretPosMultilaneMode;                  //!< [[custom]] Consistency check - wrong turret position in multilane mode
    TBoolean boWrongBasketPosMultilaneMode;                  //!< [[custom]] Consistency check - wrong basket position in multilane mode
    TBoolean boWrongTurretPosALOMode;                        //!< [[custom]] Consistency check - wrong turret position in ALO mode
    TBoolean boWrongPosition;                                //!< [[custom]] Consistency check - wrong position detected
    TBoolean boReduceSpeedRotTurretClockwise;                //!< [[custom]] Reduce the speed of the turret clockwise movement
    TBoolean boReduceSpeedRotTurretCounterClock;             //!< [[custom]] Reduce the speed of the turret counter clockwise movement
    TBoolean boReduceSpeedArrowArmDown;                      //!< [[custom]] Reduce the speed of the arrow arm down movement
    TBoolean boStopRotTurretClockwise;                       //!< [[custom]] Stop the turret clockwise movement
    TBoolean boStopRotTurretCounterClockwise;                //!< [[custom]] Stop the turret counter clockwise movement
    TBoolean boStopRotBasketClockwise;                       //!< [[custom]] Stop the basket clockwise movement
    TBoolean boStopRotBasketCounterClockwise;                //!< [[custom]] Stop the basket counter clockwise movement
    TBoolean boStopArrowArmDown;                             //!< [[custom]] Stop the arrow arm down movement
    TBoolean boStopTelescopeOut;                             //!< [[custom]] Stop the telescope out movement
    TBoolean boTurretInRearZone;                             //!< [[custom]] Turret in the rear zone
    TBoolean boTurretInFrontZone;                            //!< [[custom]] Turret in the front zone
    TBoolean boArrowArmInLowerZone;                          //!< [[custom]] Arrow arm in the lower zone
    TBoolean boTestFranceConfig;                             //!< [[custom]] Test variable for simulation - french version of the vehicle
    TBoolean boTestAbutementBasketTrackSide;                 //!< [[custom]] Test variable for simulation - basket abutment track side
    TBoolean boTestAbutementBasketCenteredSide;              //!< [[custom]] Test variable for simulation - basket abutment centered side
    TBoolean boTestBasketLeftSideSensor;                     //!< [[custom]] Test variable for simulation - basket left side sensor
    TBoolean boTestBasketRightSideSensor;                    //!< [[custom]] Test variable for simulation - basket right side sensor
    TBoolean boTestTelescopInSensor;                         //!< [[custom]] Test variable for simulation - telescop in sensor
    TInt16 i16TestTurretAngularPosition;                     //!< [[°/10]] Test variable for simulation - turret angular position
    TInt16 i16TestArrowArmAngularPosition;                   //!< [[°/10]] Test variable for simulation - arrow arm angular position
    ERailWorkMode eAbutmentWorkMode;                         //!< [enum] Abutment work mode selected by the sensors
    TBoolean boHighSlopeForArrowUp;                          //!< [[custom]] High Slope For Arrow Up
}TDbRamRailWorkSafetyC0;

typedef struct
{
    TDbListRoot tListRoot;
    TBoolean boDeltaOffRailTransportZone;                    //!< [[custom]] 
    TBoolean boArrowOffRailTransportZone;                    //!< [[custom]] 
    ETransportPosition eTransportPosition;                   //!< [[custom]] 
}TDbRamTransportPosC0;

typedef struct
{
    TDbListRoot tListRoot;
    TInt16 i16DeltaArmTres;                                  //!< [[°/100]] Delta arm treshold position for chenillard transport
    TInt16 i16DeltaArmHyst;                                  //!< [[°/100]] Delta arm hysteresis position for chenillard transport
    TInt16 i16ArrowArmThres;                                 //!< [[°/100]] Arrow arm treshold position for off rail transport
    TInt16 i16ArrowArmHyst;                                  //!< [[°/100]] Arrow arm hysteresis position for off rail transport
    TInt16 i16TurretAngleThres;                              //!< [[custom]] Turret angle thresold
}TDbNvParamTransportPosC0;

typedef struct
{
    TDbListRoot tListRoot;
    TBoolean boBreakInBrakeOffRailMode;                      //!< [[custom]] Bouton on screen to seleted the off rail mode for break in brake
    TBoolean boForceOsciServiceBrake;                        //!< [[custom]] Force oscillant service brake
    TBoolean boForceFixeServiceBrake;                        //!< [[custom]] Force fixe service brake
    TBoolean boForceOsciParkBrake;                           //!< [[custom]] Force oscillant parking brake
    TBoolean boForceFixeParkBrake;                           //!< [[custom]] Force fixe parking brake
    TBoolean boStopMovementByBreakInBrake;                   //!< [[custom]] Stop all movement when a break in brake is during
    TBoolean boIncoherencePosAxleAndTestMode;                //!< [[custom]] Incoherence position axle and test mode in rail or offrail
    TUint16 u16AdvancementPeriod;                            //!< [[custom]] Advancement period, reset every new advancement order
    TBoolean boBreakInBrakeRunning;                          //!< [[custom]] Break in brake running
    TBoolean boSimuOsciServiceBrakeSelect;                   //!< [[custom]] Simu oscillant service brake selected on screen
    TBoolean boSimuFixeServiceBrakeSelect;                   //!< [[custom]] Simu fixe service brake selected on screen
    TBoolean boSimu2ServiceBrakesSelect;                     //!< [[custom]] Simu 2 service brakes selected on screen
    TBoolean boAuthorizeTransRailByBreakInBrake;             //!< [[custom]] Authorize transaltion on rail by break in brake
    EBrakeTestSelected eServiceBrakeSelected;                //!< [[custom]] Service brake selected on screen
    TUint16 u16AdvancementPeriodMs10;                        //!< [[custom]] Advacnement period by 10ms
    TBoolean boOsciServiceBrakinBrakeOn;                     //!< [[custom]] Osci service brake in brake On
    TBoolean boFixeServiceBrakinBrakeOn;                     //!< [[custom]] Fixe service brake in brake On
    TBoolean boBothServiceBrakinBrakeOn;                     //!< [[custom]] Both service brake in brake On
}TDbRamBreakInBrakeC0;

typedef struct
{
    TDbListRoot tListRoot;
    EControlPost eSelectedControlPost;                       //!< [-] Post selected to control the vehicle
    TBoolean boEnableBuzzer;                                 //!< [-] Enable the buzzer
    TBoolean boSlopeIsLow;                                   //!< [-] The slope is low
    TBoolean boSlopeIsHigh;                                  //!< [-] The slope is high
    TBoolean boAllNacelleCommandsDisabled;                   //!< [-] All commands of the nacelle post are disabled
    TBoolean boAllRadioCommandsDisabled;                     //!< [-] All commands of the radio command post are disabled
    TBoolean boAllTurretCommandsDisabled;                    //!< [-] All commands of the turret post are disabled
    TInt16 i16SimuSlope;                                     //!< [[°10]] Variable used to simulate the slope angle
    TBoolean boAllConsigneAdvancementDisabled;               //!< [[custom]] All ouput consigne of transaltion rail is disabled
    TBoolean boAuthorizedRadioElementsPosition;              //!< [[custom]] Authorise radio element position
}TDbRamSelectControlPost;

typedef struct
{
    TDbListRoot tListRoot;
    TInt16 i16SlopeLowThresAbs;                              //!< [[°/10]] Threshold use to detect if the slope is low
    TInt16 i16SlopeLowHystRel;                               //!< [[°/10]] Hysteresis applied on the slope low threshold (relative)
    TInt16 i16SlopeHighThresAbs;                             //!< [[°/10]] Threshold use to detect if the slope is high
    TInt16 i16SlopeHighHystRel;                              //!< [[°/10]] Hysteresis applied on the slope high threshold (relative)
    TUint16 u16SlopeCrawlerMaxTres;                          //!< [[custom]] Slope crawler max treshold
}TDbNvParamSelectControlPost;

typedef struct
{
    TDbListRoot tListRoot;
    TUint8 u8LifeByte;                                       //!< [[custom]] Life byte sent to the controllers
    TBoolean bogDelta_Arm_Move_Up;                           //!< [[custom]] Delta arm move up button is pressed
    TBoolean bogDelta_Arm_Move_Down;                         //!< [[custom]] Delta arm move down button is pressed
    TBoolean bogArrow_Move_Up;                               //!< [[custom]] Arrow arm move up button is pressed
    TBoolean bogArrow_Move_Down;                             //!< [[custom]] Arrow arm move down button is pressed
    TBoolean bogPendular_Move_Up;                            //!< [[custom]] Pendular move up button is pressed
    TBoolean bogPendular_Move_Down;                          //!< [[custom]] Pendular move down button is pressed
    TBoolean bogTelescope_Move_Out;                          //!< [[custom]] Telescope move out button is pressed
    TBoolean bogTelescope_Move_In;                           //!< [[custom]] Telescope move in button is pressed
    TBoolean bogBasket_Inclinaison_Move_Up;                  //!< [[custom]] Basket inclinaison move up button is pressed
    TBoolean bogBasket_Inclinaison_Move_Down;                //!< [[custom]] Basket inclinaison move down button is pressed
    TBoolean bogTurret_Rotate_ClockWise;                     //!< [[custom]] Rotate turret clockwise button is pressed
    TBoolean bogTurret_Rotate_Counter_ClockWise;             //!< [[custom]] Rotate turret counter clockwise button is pressed
    TBoolean bogBasket_Rotate_ClockWise;                     //!< [[custom]] Basket rotation move up button is pressed
    TBoolean bogBasket_Rotate_Counter_ClockWise;             //!< [[custom]] Basket rotation move down button is pressed
    TBoolean bogKeyRpmSelect;                                //!< [[custom]] Key RPM Selection level
    TBoolean bogKeyRpmOff;                                   //!< [[custom]] Key Desactivation RPM selection 
    TBoolean bogForcingWhiteRaillight;                       //!< [[custom]] Activation forcing White Rail lights Front and Rear
    TBoolean bogForcingNeons;                                //!< [[custom]] Activation neons
    TBoolean bogKeyCalibMin;                                 //!< [[custom]] Key Calibration Min
    TBoolean bogKeyCalibMax;                                 //!< [[custom]] Key Calibration Max
    TBoolean bogKeyCalibValid;                               //!< [[custom]] Key Calibration Validation
    TUint8 u8gElementChoice;                                 //!< [[custom]] Element choice 1=Telescope; 2=Arrow arm; 3=Delta arm; 4=Turret; 
    TBoolean bogKeyCalibMax2;                                //!< [[custom]] Key Calibration Max (-180°)
    TBoolean bogKeySlopeLgReset;                             //!< [[custom]] Key Slope Longitudinal reset
    TBoolean bogKeySlopeTrReset;                             //!< [[custom]] Key Slope Transversal reset
}TDbRamEvision4C0;

typedef struct
{
    TDbListRoot tListRoot;
    TUint16 u16TempTrackOverFaultThres;                      //!< [[C°/10]] DM_HIGH_HYDRAULIC_TEMP_CRAWLER - Overflow Threshold Fault Temper
    TUint16 u16TempRailOverFaultThres;                       //!< [[C°/10]] DM_HIGH_HYDRAULIC_TEMP_RAIL - Overflow Threshold Fault Temperatu
    TUint16 u16TempTrackOverAlarmThres;                      //!< [[C°/10]] DM_ALARM_HYDRAULIC_TEMP_CRAWLER - Overflow Threshold Alarm Tempe
    TUint16 u16TempRailOverAlarmThres;                       //!< [[C°/10]] DM_ALARM_HYDRAULIC_TEMP_RAIL - Overflow Threshold Alarm Temperat
    TUint16 u16SpeedSensorsToleranceThres;                   //!< [[custom]] DM_ONE_SPEED_SENSOR_FAULT - Tolerenace Threshold both 2 speed se
    TUint16 u16SlopeLongToleranceThres;                      //!< [[°/10]] DM_SLOPE_FAULT - tolerance both 2 chanelles slope long
    TUint16 u16BlockOscillationAxlePressure;                 //!< [[bar/10]] DM_OSCILLANT_CIRCUIT_FAULT - block isccilation axle pressure Thr
    TUint16 u16UnblockOscillationAxlePressure;               //!< [[bar/10]] DM_OSCILLANT_CIRCUIT_FAULT - unblock isccilation axle pressure T
    TUint16 u16MinServiceBrakeFaultPressure;                 //!< [[bar/10]] DM_SERVICE_BRAKE_PRESSURE_FAULT - Min service brake pressure fau
    TUint16 u16MaxServiceBrakeFaultPressure;                 //!< [[bar/10]] DM_SERVICE_BRAKE_PRESSURE_FAULT - Max service brake pressure fau
    TUint16 u16SlopeTransToleranceThres;                     //!< [[custom]] DM_SLOPE_FAULT  - tolerance both 2 chanelles slope long
    TInt16 i16MinTransPressureWithoutHook;                   //!< [[custom]] DM_TRANS_CRAWLER_PRESSURE_HOOK - minimal pressure transmission w
    TUint16 u16TurretSensorToleranceThres;                   //!< [[custom]] DM_TURRET_SENSOR_FAULT  - tolerence trehsold betwen 2 channels o
    TUint8 u8MinAlarmJoyDeltaArmPrctBat;                     //!< [[%]] DM_C0_OUT_OF_RANGE_JOY_DELTA_ARM_48XS - min alarm value of joyti
    TUint8 u8MaxAlarmJoyDeltaArmPrctBat;                     //!< [[%]] DM_C0_OUT_OF_RANGE_JOY_DELTA_ARM_48XS - max alarm value of joyti
    TUint8 u8MinAlarmJoyArrowArmPrctBat;                     //!< [[%]] DM_C0_OUT_OF_RANGE_JOY_ARROW_ARM_48XS - min alarm value of joyti
    TUint8 u8MaxAlarmJoyArrowArmPrctBat;                     //!< [[%]] DM_C0_OUT_OF_RANGE_JOY_ARROW_ARM_48XS - max alarm value of joyti
    TUint8 u8MinAlarmJoyTelescopeArmPrctBat;                 //!< [[%]] DM_C0_OUT_OF_RANGE_JOY_TELESCOPE_ARM_48XS - min alarm value of j
    TUint8 u8MaxAlarmJoyTelescopeArmPrctBat;                 //!< [[%]] DM_C0_OUT_OF_RANGE_JOY_TELESCOPE_ARM_48XS - max alarm value of j
    TUint8 u8MinAlarmJoyRotTurretArmPrctBat;                 //!< [[%]] DM_C0_OUT_OF_RANGE_JOY_ROT_TURRET_ARM_48XS - min alarm value of 
    TUint8 u8MaxAlarmJoyRotTurretArmPrctBat;                 //!< [[%]] DM_C0_OUT_OF_RANGE_JOY_ROT_TURRET_ARM_48XS - max alarm value of 
    TUint8 u8MinAlarmJoyAdvancementPrctBat;                  //!< [[%]] DM_C0_OUT_OF_RANGE_JOY_ADVANCEMENT_48XS - min alarm value of joy
    TUint8 u8MaxAlarmJoyAdvancementPrctBat;                  //!< [[%]] DM_C0_OUT_OF_RANGE_JOY_ADVANCEMENT_48XS - max alarm value of joy
    TUint16 u16HystTempTrans;                                //!< [[custom]] DM_HIGH_HYDRAULIC_TEMP_RAIL - hysteresis treshold temperature
    TUint8 u8ReduceTrackSpeedPercent;                        //!< [[custom]] Reduce track speed when temperature default
    TUint16 u16CptPressureBrakeFaultMax;                     //!< [[custom]] Paramètre à ne jamais mettre à zéro. Utilisation pour le set du 
    TBoolean boBypassAlarmActiveC0;                          //!< [[custom]] Activation de l_alarme de bypass
    TUint16 u16TimeBypassFault;                              //!< [[custom]] Time Bypass Fault
    TInt16 i16AU_THER_PRESSION_DEF_TRANS;                    //!< [[custom]] Threshold of thermic transmission pressure Alarm
    TInt16 i16AU_ELEC_PRESSION_DEF_DMC;                      //!< [[custom]] Threshold of electric transmission pressure Alarm
    TUint16 u16cptTimeDetectPumpTransMax;                    //!< [[custom]] Time detect for the alarm of the Thermic pump on Translation
    TUint16 u16cptTimeDetectPvgTransMax;                     //!< [[custom]] Time detect for the alarm of the Electric pump
}TDbNvParamAlarmC0;

typedef struct
{
    TDbListRoot tListRoot;
    TBoolean boRamEcuAlarmC0_1;                              //!< [[custom]] 
    TBoolean boFaultPumpTrans;                               //!< [[custom]] Fault on thermic pump transmission
    TBoolean boTimeDetectPumpTrans;                          //!< [[custom]] Time to detect the fault on the thermic pump are passed
    TBoolean boMemFaultThermicPumpTrans;                     //!< [[custom]] Active memorisation of the fault on the thermic pump
    TBoolean boFaultPvgTransElectric;                        //!< [[custom]] Fault on electric pump
    TBoolean boTimeDetectPvgTrans;                           //!< [[custom]] Time to detect the fault on the electric pump are passed
    TBoolean boMemFaultDMCTransElectric;                     //!< [[custom]] Active memorisation of the fault on the DMC electric pump
    TBoolean boFaultThermicPumpOrElecticDmc;                 //!< [[custom]] Active fault on thermic or electric pump
}TDbRamEcuAlarmC0;

typedef struct
{
    TDbListRoot tListRoot;
    TBoolean boDm_Inc_Pos_Folded_Delta_Arrow;                //!< [[custom]] 
    TBoolean boDm_Active_Help;                               //!< [[custom]] 
    TBoolean boDm_Ev_Bypass_Fault;                           //!< [[custom]] 
    TBoolean boOutOfRangeTransmissionPressure;               //!< [[custom]] 
    TBoolean boDm_Overload_Detected_By_C1;                   //!< [[custom]] 
}TDbRamEcuC0RcvFailluresFromC1;

typedef struct
{
    TDbListRoot tListRoot;
    TUint16 u16ErrorCodeInit;                                //!< [[custom]] Last error code returned by the UART Init function
    TUint16 u16ErrorCodeWrite;                               //!< [[custom]] Last error code returned by the UART Write function
    TUint16 u16RetDataBytesSent;                             //!< [[custom]] Successfully queued data butes (returned by the UART Write fucnt
    TUint8 u8DisplayedDigit1;                                //!< [[custom]] Displayed digit 1
    TUint8 u8DisplayedDigit2;                                //!< [[custom]] Displayed digit 2
    TUint8 u8DisplayedDigit3;                                //!< [[custom]] Displayed digit 3
    TUint8 u8DisplayedDigit4;                                //!< [[custom]] Displayed digit 4
    TUint8 au8SentDataArray[8];                              //!< [[custom]] Data array given to the UART Write function
}TDbRamMastDisplayMeasureC0;

typedef struct
{
    TDbListRoot tListRoot;
    TUint32 u32MastDisplayRefreshCycleTime;                  //!< [[custom]] Refresh cycle time or the mast digital display ( cycle time of t
}TDbNvParamMastDisplayC0;

typedef struct
{
    TDbListRoot tListRoot;
    TBoolean boNoMovementRunning;                            //!< [[custom]] 
    TBoolean boStopMoveLimitEnvelop;                         //!< [[custom]] 
    TBoolean boTransmissionPressureFault;                    //!< [[custom]] 
    TBoolean boLynxOnAllMvts;                                //!< [[custom]] 
    TBoolean boSignal_4;                                     //!< [[custom]] 
    TBoolean boSignal_5;                                     //!< [[custom]] 
    TBoolean boSignal_6;                                     //!< [[custom]] 
    TBoolean boSignal_7;                                     //!< [[custom]] 
    TUint8 u8Signal_8;                                       //!< [[custom]] 
    TInt16 i16BypassPressureSensorValue;                     //!< [[custom]] 
    TInt16 i16Signal_10;                                     //!< [[custom]] 
    TInt16 i16Signal_11;                                     //!< [[custom]] 
    TBoolean boPerformAutoriseTransArrow;                    //!< [[custom]] Autorisation of translation with unfolded arrow
    TBoolean boValidTelescopeSectorSlope;                    //!< [[custom]] Validation of Telescope sector to translate
    TBoolean boValidTelescopeFirstSectorSlope;               //!< [[custom]] Validation of First Telescope sector to translate
    TBoolean boPostInterdictionMastSNCF;                     //!< [[custom]] All Post interdict fot mast function SNCF
    TBoolean boInterdictOfNacelTurretPost;                   //!< [[custom]] Interdiction of nacelle and turret post
    TBoolean boMastPanthoFoldedSNCF;                         //!< [[custom]] SNCF contact mast in folded position
    TInt16 i16AccuBrakeSensorPressureValue;                  //!< [[custom]] Accumulator Brake Sensor Pressure Value
}TDbRamData4C0RcvFromC1;

typedef struct
{
    TDbListRoot tListRoot;
    TUint8 u8MaxPvgTransRailElectricAv;                      //!< [[custom]] Maximum Pvg Translation Rail on Electric Av
    TUint8 u8MaxPvgTransRailElectricAr;                      //!< [[custom]] Maximum Pvg Translation Rail on Electric Ar
    TUint8 u8MinPvgTransRailElectricAv;                      //!< [[custom]] Minimum Pvg Translation Rail on Electric Av
    TUint8 u8MinPvgTransRailElectricAr;                      //!< [[custom]] Minimum Pvg Translation Rail on Electric Ar
    TUint16 u16TransRailElectricRampTimeAcc;                 //!< [[custom]] Translation on Rail with Electric Ramp Time Accelaration
    TUint16 u16TransRailElectricRampTimeDec;                 //!< [[custom]] Translation on Rail with Electric Ramp Time Deceleration
    TUint16 u16TransRailElectricRampTimeStop;                //!< [[custom]] Translation on Rail with Electric Ramp Time Stop
    TUint16 u16ElectricPumpPressureMax;                      //!< [[custom]] Electric Pump Pressure Maximum
    TUint16 u16ElectricPumpPressureHyst;                     //!< [[custom]] Electric Pump Pressure Hysteresys
    TUint16 u16ELECTRIC_MOTOR_RPM_TRANS_MAX;                 //!< [[custom]] Electric motor maximum Rpm Translation 
    TUint16 u16ELECTRIC_MOTOR_RPM_TRANS_MIN;                 //!< [[custom]] Electric motor minimum Rpm Translation 
    TUint8 u8MIN_PVG_TRANS_HIGH_50;                          //!< [[custom]] Pourcent minimum for transaltion PVG on the high 50 side
    TUint8 u8MIN_PVG_TRANS_LOW_50;                           //!< [[custom]] Pourcent minimum for transaltion PVG on the low 50 side
    TUint16 u16RAMP_TIME_REGEN_THERMIC;                      //!< [[custom]] Ramp time for the thermic regeneration
    TUint16 u16RegenPumpPressureMax;                         //!< [[custom]] Pressure pump Regenration Max
    TUint16 u16RegenPumpPressureReset;                       //!< [[custom]] Pressure pump Regeneration reset
    TUint16 u16CURRENT_RESET_REGEN_THERMIC;                  //!< [[custom]] Current reset regeneration thermic
    TUint16 u16CURRENT_MIN_REGEN_THERMIC;                    //!< [[custom]] Minimum current for the regeneration in thermic mode
    TUint16 u16CURRENT_MAX_REGEN_THERMIC;                    //!< [[custom]] Maximum current for the regeneration in thermic mode
    TUint16 u16CURRENT_DRIVE_LIMIT_ELECTRIC;                 //!< [[custom]] Maximum current for the regeneration in electric mode
    TUint8 u8BATTERY_LOW_LEVEL_SOC;                          //!< [[custom]] Low battery level for SOC
    TUint16 u16MinVoltageDcConverter;                        //!< [[custom]] Minimum voltage Dc Converter
    TUint16 u16NbrCycleFaultDcConverter;                     //!< [[custom]] Number of fault cycle from de DC converter
    TInt16 i16REGEN_BRAKE_RPM_MODE_AUTO;                     //!< [[custom]] RPM regeneration brake auto mode
    TInt16 i16REGEN_BRAKE_TORQUE_MODE_AUTO;                  //!< [[custom]] Torque regeneration brake auto mode
    TInt16 i16REGEN_BRAKE_RPM_MODE_HIGH;                     //!< [[custom]] RPM regeneration brake high mode
    TInt16 i16REGEN_BRAKE_TORQUE_MODE_HIGH;                  //!< [[custom]] Torque regeneration brake high mode
    TUint8 u8NbrSamplesAverageRpm;                           //!< [[custom]] Number of samples average Rpm
    TInt16 i16RegenPumpPressureHyst;                         //!< [[custom]] Regen Pump Pressure Hyst
    TInt16 i16RegenBrakeTorqueFromPressurCoefK;              //!< [[custom]] Regen Brake Torque From Pressur Coef K
    TInt16 i16RegenBrakeTorqueFromPressurRange;              //!< [[custom]] RegenBrakeTorqueFromPressurRange
}TDbNvParamGreenEffC0;

typedef struct
{
    TDbListRoot tListRoot;
    TBoolean boAutorizeTransRailElectric;                    //!< [[custom]] Autorize Translation on Rail with Electric
    TInt16 i16PvgTransRailElectricConsigne;                  //!< [[custom]] Pvg Translation on Rail with Electric Consigne
    TBoolean boElectricPumpPressureExceeded;                 //!< [[custom]] Electric Pump Pressure Exceeded
    TBoolean boStopRampPvgTransRailElectric;                 //!< [[custom]] Stop Ramp Pvg Translation on Rail Electric
    TBoolean boTransRailElectricRampOngoing;                 //!< [[custom]] Translation on Rail Electric Ramp Ongoing
    TBoolean boTransRailThermiqueRampOngoing;                //!< [[custom]] Translation on Rail Thermique Ramp Ongoing
    TInt16 i16RpmPvgTransRail;                               //!< [[custom]] Rpm of Pvg Translation on Rail
    TBoolean boPictoReloadBatteryImpossible;                 //!< [[custom]] Impossible reloaded baterry Pictogramme
    TBoolean boBatteryLowLevel;                              //!< [[custom]] Low level baterry
    TBoolean boElectricPumpPressureMaxRegen;                 //!< [[custom]] Electric pump pressure maximum regeneration
    TBoolean boElectricPumpPressureResetRegen;               //!< [[custom]] Electric pump pressure Reset regeneration
    TBoolean boAutorizeRazController;                        //!< [[custom]] Autorize raz controller
    TBoolean boVoltageDcConverterFault;                      //!< [[custom]] Voltage Dc Converter in Fault
    TBoolean boBattErrorCode1;                               //!< [[custom]] Battery Error Code 1
    TBoolean boPictoAskResartController;                     //!< [[custom]] Picto Ask Resart Controller
}TDbRamGreenEffC0;

typedef struct
{
    TDbListRoot tListRoot;
    TInt16 i16Ibatt_ist;                                     //!< [[custom]] Instant Current Battery
    TUint16 u16Vbatt_ist;                                    //!< [[custom]] Instant Volatage Battery
    TUint8 u8Batt_Soc;                                       //!< [[custom]] load rate battery
    TUint8 u8Batt_PowerReductionRatio;                       //!< [[custom]] Battery Power Reduction Ratio
    TUint8 u8Batt_RecoveryReductionRatio;                    //!< [[custom]] Battery Recovery Reduction Ratio
    TUint8 u8Batt_ErrorCode1;                                //!< [[custom]] Battery Error Code 1
    TUint8 u8Batt_ErrorValue1;                               //!< [[custom]] Battery Error Value 1
    TBoolean boBatt_RegenAuthorized;                         //!< [[custom]] Battery Regeneration Authorized
}TDbRamFlashBatteryC0;

typedef struct
{
    TDbListRoot tListRoot;
    TUint16 u16DC_RpmRequest;                                //!< [[custom]] RPM request
    TUint16 u16DC_AI2_StaticBrakeTorqueLimit;                //!< [[custom]] Generator regeneration speed set point
    TUint16 u16DC_GeneratorRegenBattCurLimit;                //!< [[custom]] Generator regeneration battery current limit
    TBoolean boDC_ForwardByte6Bit0;                          //!< [[custom]] Forward Byte 6 Bit 0
    TBoolean boDC_BackwardByte6Bit1;                         //!< [[custom]] Backward Byte 6 Bit 1
    TBoolean boDC_FootSwitchByte6Bit2;                       //!< [[custom]] FootSwitch Byte 6 Bit 2
    TBoolean boDC_InterlockByt6Bit3;                         //!< [[custom]] Interlock Byte 6 Bit 3
    TBoolean boDC_RegenEnableByte6Bit6;                      //!< [[custom]] Regeneration Enable Byte 6 Bit 6
    TUint8 u8DC_RollOverCount;                               //!< [[custom]] Roll over count
    TUint16 u16BCL_HMI_DriveBattCurLimit;                    //!< [[custom]] Drive battery current limit
    TUint16 u16BCL_HMI_RegenBattCurLimit;                    //!< [[custom]] Regeneration battery Current limit
    TUint16 u16BCL_HMI_BattSOC;                              //!< [[custom]] Battery SOC
    TUint8 u8BCL_RollOverCount;                              //!< [[custom]] Roll over count
    TInt16 i16MS_ActualSpeedRpm;                             //!< [[custom]] Actual speed RPM
    TInt16 i16MS_BattCur;                                    //!< [[custom]] Battery Current
    TUint8 u8MS_RollOverCount;                               //!< [[custom]] Roll over count
    TUint8 u8MS_FaultCode;                                   //!< [[custom]] Fault code
    TUint16 u16MS_FaultSubCode;                              //!< [[custom]] Fault sub code
    TInt16 i16DS_MotorCur;                                   //!< [[custom]] Motor current
    TUint8 u8DS_DriveStatusIndicator;                        //!< [[custom]] Drive status indicator
    TUint8 u8DS_SpeedLimitIndicator;                         //!< [[custom]] Speed limit indicator
    TInt16 i16DS_ActualTorque;                               //!< [[custom]] Actual Torque
    TUint8 u8DS_TorqueLimitIndicator;                        //!< [[custom]] Torque limit Indicator
    TUint8 u8DS_RollOverCount;                               //!< [[custom]] Roll over count
    TInt8 i8CS_ControlerTemp;                                //!< [[custom]] Controler Temperature
    TInt8 i8CS_MotorTemp;                                    //!< [[custom]] Motor Temperature
    TUint8 u8CS_MotorLimitIndicator;                         //!< [[custom]] Motor limit indicator
    TUint8 u8CS_RollOverCount;                               //!< [[custom]] Roll over count
    TUint16 u16CS_BattVoltage;                               //!< [[custom]] Battery Voltage
    TUint8 u8CS_BattDischargeIndicatorValue;                 //!< [[custom]] Battery Discharge indicator
    TBoolean boWaitingHeartbeat;                             //!< [[custom]] Waiting Heartbeat
    TBoolean boTimeOutDmcHeartbeat;                          //!< [[custom]] TimeOut Dmc Heartbeat
    TUint8 u8DmcHeartbeat;                                   //!< [[custom]] Dmc Heartbeat
    TBoolean boPowerOnOkDmc;                                 //!< [[custom]] Power On Ok Dmc
    TBoolean boOperationnalDmc;                              //!< [[custom]] Operationnal Dmc
    TBoolean boGoToOperationnal;                             //!< [[custom]] Go To Operationnal
    TBoolean boNewGoToOperationnal;                          //!< [[custom]] New Go To Operationnal
    TBoolean boSendCommandNMT;                               //!< [[custom]] Send Command NMT
    TInt16 i16StepRazDmc;                                    //!< [[custom]] Step Raz Dmc
    TBoolean boCommandRazDmcOnGoing;                         //!< [[custom]] Command Raz Dmc On Going
    TBoolean boDig4InputCommandSTO;                          //!< [[custom]] Dig4 Input Command STO
    TBoolean boActiveFaultRazDmc;                            //!< [[custom]] Active Fault Raz Dmc
    TBoolean boActiveFaultDmc;                               //!< [[custom]] Active Fault Dmc
}TDbRamDMC_C0;

// constant values -------------------------------------------------------------------------------

typedef struct
{
    TDbVarInf  tInf_PressureBlockOscillationState;
    TBit3 abi3Rng_PressureBlockOscillationState[2];
    TBit3 bi3Def_PressureBlockOscillationState;
    TDbVarInf  tInf_PressureBlockOscillationValue;
    TInt16 ai16Rng_PressureBlockOscillationValue[2];
    TInt16 i16Def_PressureBlockOscillationValue;
    TDbVarInf  tInf_PressureBlockOscillationRawValue;
    TUint16 au16Rng_PressureBlockOscillationRawValue[2];
    TUint16 u16Def_PressureBlockOscillationRawValue;
    TDbVarInf  tInf_PressureBrakeSensorState;
    TBit3 abi3Rng_PressureBrakeSensorState[2];
    TBit3 bi3Def_PressureBrakeSensorState;
    TDbVarInf  tInf_PressureBrakeSensorValue;
    TInt16 ai16Rng_PressureBrakeSensorValue[2];
    TInt16 i16Def_PressureBrakeSensorValue;
    TDbVarInf  tInf_PressureBrakeSensorRawValue;
    TUint16 au16Rng_PressureBrakeSensorRawValue[2];
    TUint16 u16Def_PressureBrakeSensorRawValue;
    TDbVarInf  tInf_TemperatureTransmissionState;
    TBit3 abi3Rng_TemperatureTransmissionState[2];
    TBit3 bi3Def_TemperatureTransmissionState;
    TDbVarInf  tInf_TemperatureTransmissionValue;
    TInt16 ai16Rng_TemperatureTransmissionValue[2];
    TInt16 i16Def_TemperatureTransmissionValue;
    TDbVarInf  tInf_TemperatureTransmissionRawValue;
    TUint16 au16Rng_TemperatureTransmissionRawValue[2];
    TUint16 u16Def_TemperatureTransmissionRawValue;
    TDbVarInf  tInf_FaultPvgLeftTrakState;
    EDiState aeRng_FaultPvgLeftTrakState[2];
    EDiState eDef_FaultPvgLeftTrakState;
    TDbVarInf  tInf_FaultPvgLeftTrakRawValue;
    TUint16 au16Rng_FaultPvgLeftTrakRawValue[2];
    TUint16 u16Def_FaultPvgLeftTrakRawValue;
    TDbVarInf  tInf_FaultPvgRightTrakState;
    EDiState aeRng_FaultPvgRightTrakState[2];
    EDiState eDef_FaultPvgRightTrakState;
    TDbVarInf  tInf_FaultPvgRightTrakRawValue;
    TUint16 au16Rng_FaultPvgRightTrakRawValue[2];
    TUint16 u16Def_FaultPvgRightTrakRawValue;
    TDbVarInf  tInf_DownAxleOscillantState;
    EDiState aeRng_DownAxleOscillantState[2];
    EDiState eDef_DownAxleOscillantState;
    TDbVarInf  tInf_DownAxleOscillantRawValuePin0;
    TUint16 au16Rng_DownAxleOscillantRawValuePin0[2];
    TUint16 u16Def_DownAxleOscillantRawValuePin0;
    TDbVarInf  tInf_DownAxleOscillantRawValuePin1;
    TUint16 au16Rng_DownAxleOscillantRawValuePin1[2];
    TUint16 u16Def_DownAxleOscillantRawValuePin1;
    TDbVarInf  tInf_DownAxleFixeState;
    EDiState aeRng_DownAxleFixeState[2];
    EDiState eDef_DownAxleFixeState;
    TDbVarInf  tInf_DownAxleFixeRawValuePin0;
    TUint16 au16Rng_DownAxleFixeRawValuePin0[2];
    TUint16 u16Def_DownAxleFixeRawValuePin0;
    TDbVarInf  tInf_DownAxleFixeRawValuePin1;
    TUint16 au16Rng_DownAxleFixeRawValuePin1[2];
    TUint16 u16Def_DownAxleFixeRawValuePin1;
    TDbVarInf  tInf_UpAxleOscillantState;
    EDiState aeRng_UpAxleOscillantState[2];
    EDiState eDef_UpAxleOscillantState;
    TDbVarInf  tInf_UpAxleOscillantRawValue;
    TUint16 au16Rng_UpAxleOscillantRawValue[2];
    TUint16 u16Def_UpAxleOscillantRawValue;
    TDbVarInf  tInf_UpAxleFixeState;
    EDiState aeRng_UpAxleFixeState[2];
    EDiState eDef_UpAxleFixeState;
    TDbVarInf  tInf_UpAxleFixeRawValue;
    TUint16 au16Rng_UpAxleFixeRawValue[2];
    TUint16 u16Def_UpAxleFixeRawValue;
    TDbVarInf  tInf_FrameRotationSensor1State;
    EDiState aeRng_FrameRotationSensor1State[2];
    EDiState eDef_FrameRotationSensor1State;
    TDbVarInf  tInf_FrameRotationSensor1RawValuePin0;
    TUint16 au16Rng_FrameRotationSensor1RawValuePin0[2];
    TUint16 u16Def_FrameRotationSensor1RawValuePin0;
    TDbVarInf  tInf_FrameRotationSensor1RawValuePin1;
    TUint16 au16Rng_FrameRotationSensor1RawValuePin1[2];
    TUint16 u16Def_FrameRotationSensor1RawValuePin1;
    TDbVarInf  tInf_RailHookSensorState;
    EDiState aeRng_RailHookSensorState[2];
    EDiState eDef_RailHookSensorState;
    TDbVarInf  tInf_RailHookSensorRawValue;
    TUint16 au16Rng_RailHookSensorRawValue[2];
    TUint16 u16Def_RailHookSensorRawValue;
    TDbVarInf  tInf_InductiveRailSensorState;
    EDiState aeRng_InductiveRailSensorState[2];
    EDiState eDef_InductiveRailSensorState;
    TDbVarInf  tInf_InductiveRailSensorRawValue;
    TUint16 au16Rng_InductiveRailSensorRawValue[2];
    TUint16 u16Def_InductiveRailSensorRawValue;
    TDbVarInf  tInf_CenteredTurretState;
    EDiState aeRng_CenteredTurretState[2];
    EDiState eDef_CenteredTurretState;
    TDbVarInf  tInf_CenteredTurretRawValue;
    TUint16 au16Rng_CenteredTurretRawValue[2];
    TUint16 u16Def_CenteredTurretRawValue;
    TDbVarInf  tInf_WorkKeyTrackSideState;
    EDiState aeRng_WorkKeyTrackSideState[2];
    EDiState eDef_WorkKeyTrackSideState;
    TDbVarInf  tInf_WorkKeyTrackSideRawValue;
    TUint16 au16Rng_WorkKeyTrackSideRawValue[2];
    TUint16 u16Def_WorkKeyTrackSideRawValue;
    TDbVarInf  tInf_FrameRotationSensor2State;
    EDiState aeRng_FrameRotationSensor2State[2];
    EDiState eDef_FrameRotationSensor2State;
    TDbVarInf  tInf_FrameRotationSensor2RawValuePin0;
    TUint16 au16Rng_FrameRotationSensor2RawValuePin0[2];
    TUint16 u16Def_FrameRotationSensor2RawValuePin0;
    TDbVarInf  tInf_FrameRotationSensor2RawValuePin1;
    TUint16 au16Rng_FrameRotationSensor2RawValuePin1[2];
    TUint16 u16Def_FrameRotationSensor2RawValuePin1;
    TDbVarInf  tInf_WorkKeyBilateralState;
    EDiState aeRng_WorkKeyBilateralState[2];
    EDiState eDef_WorkKeyBilateralState;
    TDbVarInf  tInf_WorkKeyBilateralRawValue;
    TUint16 au16Rng_WorkKeyBilateralRawValue[2];
    TUint16 u16Def_WorkKeyBilateralRawValue;
    TDbVarInf  tInf_WorkKeyCentredState;
    EDiState aeRng_WorkKeyCentredState[2];
    EDiState eDef_WorkKeyCentredState;
    TDbVarInf  tInf_WorkKeyCentredRawValue;
    TUint16 au16Rng_WorkKeyCentredRawValue[2];
    TUint16 u16Def_WorkKeyCentredRawValue;
    TDbVarInf  tInf_AbutmentTurretTrackSideState;
    EDiState aeRng_AbutmentTurretTrackSideState[2];
    EDiState eDef_AbutmentTurretTrackSideState;
    TDbVarInf  tInf_AbutmentTurretTrackSideRaw;
    TUint16 au16Rng_AbutmentTurretTrackSideRaw[2];
    TUint16 u16Def_AbutmentTurretTrackSideRaw;
    TDbVarInf  tInf_AbutmentTurretCentredSideState;
    EDiState aeRng_AbutmentTurretCentredSideState[2];
    EDiState eDef_AbutmentTurretCentredSideState;
    TDbVarInf  tInf_AbutmentTurretCentredSideRaw;
    TUint16 au16Rng_AbutmentTurretCentredSideRaw[2];
    TUint16 u16Def_AbutmentTurretCentredSideRaw;
    TDbVarInf  tInf_OscillantAxleSpeedSensorDirState;
    EDiState aeRng_OscillantAxleSpeedSensorDirState[2];
    EDiState eDef_OscillantAxleSpeedSensorDirState;
    TDbVarInf  tInf_OscillantAxleSpeedSensorDirRaw;
    TUint16 au16Rng_OscillantAxleSpeedSensorDirRaw[2];
    TUint16 u16Def_OscillantAxleSpeedSensorDirRaw;
    TDbVarInf  tInf_FixeAxleSpeedSensorDirState;
    EDiState aeRng_FixeAxleSpeedSensorDirState[2];
    EDiState eDef_FixeAxleSpeedSensorDirState;
    TDbVarInf  tInf_FixeAxleSpeedSensorDirRaw;
    TUint16 au16Rng_FixeAxleSpeedSensorDirRaw[2];
    TUint16 u16Def_FixeAxleSpeedSensorDirRaw;
    TDbVarInf  tInf_TrailerGacheState;
    EDiState aeRng_TrailerGacheState[2];
    EDiState eDef_TrailerGacheState;
    TDbVarInf  tInf_TrailerGacheRawValue;
    TUint16 au16Rng_TrailerGacheRawValue[2];
    TUint16 u16Def_TrailerGacheRawValue;
    TDbVarInf  tInf_MeasuringMastSensorFoldedState;
    EDiState aeRng_MeasuringMastSensorFoldedState[2];
    EDiState eDef_MeasuringMastSensorFoldedState;
    TDbVarInf  tInf_MeasuringMastSensorFoldedRaw;
    TUint16 au16Rng_MeasuringMastSensorFoldedRaw[2];
    TUint16 u16Def_MeasuringMastSensorFoldedRaw;
    TDbVarInf  tInf_OscillantAxleFrequency;
    TInt32 ai32Rng_OscillantAxleFrequency[2];
    TInt32 i32Def_OscillantAxleFrequency;
    TDbVarInf  tInf_FixeAxleFrequency;
    TInt32 ai32Rng_FixeAxleFrequency[2];
    TInt32 i32Def_FixeAxleFrequency;
    TDbVarInf  tInf_AruRadio1ContactState;
    EDiState aeRng_AruRadio1ContactState[2];
    EDiState eDef_AruRadio1ContactState;
    TDbVarInf  tInf_AruRadio1ContactRawValue;
    TUint16 au16Rng_AruRadio1ContactRawValue[2];
    TUint16 u16Def_AruRadio1ContactRawValue;
    TDbVarInf  tInf_AruRadio2ContactState;
    EDiState aeRng_AruRadio2ContactState[2];
    EDiState eDef_AruRadio2ContactState;
    TDbVarInf  tInf_AruRadio2ContactRawValue;
    TUint16 au16Rng_AruRadio2ContactRawValue[2];
    TUint16 u16Def_AruRadio2ContactRawValue;
    TDbVarInf  tInf_Aru1ContactState;
    EDiState aeRng_Aru1ContactState[2];
    EDiState eDef_Aru1ContactState;
    TDbVarInf  tInf_Aru1ContactRawValue;
    TUint16 au16Rng_Aru1ContactRawValue[2];
    TUint16 u16Def_Aru1ContactRawValue;
    TDbVarInf  tInf_Aru2ContactState;
    EDiState aeRng_Aru2ContactState[2];
    EDiState eDef_Aru2ContactState;
    TDbVarInf  tInf_Aru2ContactRawValue;
    TUint16 au16Rng_Aru2ContactRawValue[2];
    TUint16 u16Def_Aru2ContactRawValue;
    TDbVarInf  tInf_StarterMotorState;
    EDiState aeRng_StarterMotorState[2];
    EDiState eDef_StarterMotorState;
    TDbVarInf  tInf_StarterMotorRawValue;
    TUint16 au16Rng_StarterMotorRawValue[2];
    TUint16 u16Def_StarterMotorRawValue;
    TDbVarInf  tInf_AutorisationHighSpeedKeyState;
    EDiState aeRng_AutorisationHighSpeedKeyState[2];
    EDiState eDef_AutorisationHighSpeedKeyState;
    TDbVarInf  tInf_AutorisationHighSpeedKeyRawValue;
    TUint16 au16Rng_AutorisationHighSpeedKeyRawValue[2];
    TUint16 u16Def_AutorisationHighSpeedKeyRawValue;
    TDbVarInf  tInf_ElectricPumpPressureState;
    TBit3 abi3Rng_ElectricPumpPressureState[2];
    TBit3 bi3Def_ElectricPumpPressureState;
    TDbVarInf  tInf_ElectricPumpPressureValue;
    TInt16 ai16Rng_ElectricPumpPressureValue[2];
    TInt16 i16Def_ElectricPumpPressureValue;
    TDbVarInf  tInf_ElectricPumpPressureRawValue;
    TUint16 au16Rng_ElectricPumpPressureRawValue[2];
    TUint16 u16Def_ElectricPumpPressureRawValue;
    TDbVarInf  tInf_UpMastSensorNCState;
    EDiState aeRng_UpMastSensorNCState[2];
    EDiState eDef_UpMastSensorNCState;
    TDbVarInf  tInf_UpMastSensorNCRawValue;
    TUint16 au16Rng_UpMastSensorNCRawValue[2];
    TUint16 u16Def_UpMastSensorNCRawValue;
    TDbVarInf  tInf_ValveInDownPositionSensorState;
    EDiState aeRng_ValveInDownPositionSensorState[2];
    EDiState eDef_ValveInDownPositionSensorState;
    TDbVarInf  tInf_ValveInDownPositionSensorValue;
    TUint16 au16Rng_ValveInDownPositionSensorValue[2];
    TUint16 u16Def_ValveInDownPositionSensorValue;
    TDbVarInf  tInf_AxleInMGMode;
    EDiState aeRng_AxleInMGMode[2];
    EDiState eDef_AxleInMGMode;
    TDbVarInf  tInf_AxleInMGModeRawValuePin0;
    TUint16 au16Rng_AxleInMGModeRawValuePin0[2];
    TUint16 u16Def_AxleInMGModeRawValuePin0;
    TDbVarInf  tInf_AxleInMGModeRawValuePin1;
    TUint16 au16Rng_AxleInMGModeRawValuePin1[2];
    TUint16 u16Def_AxleInMGModeRawValuePin1;
    TDbVarInf  tInf_AxleInSDMode;
    EDiState aeRng_AxleInSDMode[2];
    EDiState eDef_AxleInSDMode;
    TDbVarInf  tInf_AxleInSDModeRawValuePin0;
    TUint16 au16Rng_AxleInSDModeRawValuePin0[2];
    TUint16 u16Def_AxleInSDModeRawValuePin0;
    TDbVarInf  tInf_AxleInSDModeRawValuePin1;
    TUint16 au16Rng_AxleInSDModeRawValuePin1[2];
    TUint16 u16Def_AxleInSDModeRawValuePin1;
}TDbSetRamEcuInputsC0;

typedef struct
{
    TDbVarInf  tInf_EvDeflectorTransmissionCommand;
    TBoolean aboRng_EvDeflectorTransmissionCommand[2];
    TBoolean boDef_EvDeflectorTransmissionCommand;
    TDbVarInf  tInf_EvDeflectorTransmissionValue;
    EDigStatus aeRng_EvDeflectorTransmissionValue[2];
    EDigStatus eDef_EvDeflectorTransmissionValue;
    TDbVarInf  tInf_EvUpMeasuringMastCommand;
    TBoolean aboRng_EvUpMeasuringMastCommand[2];
    TBoolean boDef_EvUpMeasuringMastCommand;
    TDbVarInf  tInf_EvUpMeasuringMastValue;
    EDigStatus aeRng_EvUpMeasuringMastValue[2];
    EDigStatus eDef_EvUpMeasuringMastValue;
    TDbVarInf  tInf_EvDownMeasuringMastCommand;
    TBoolean aboRng_EvDownMeasuringMastCommand[2];
    TBoolean boDef_EvDownMeasuringMastCommand;
    TDbVarInf  tInf_EvDownMeasuringMastValue;
    EDigStatus aeRng_EvDownMeasuringMastValue[2];
    EDigStatus eDef_EvDownMeasuringMastValue;
    TDbVarInf  tInf_EvServiceBrakeTrackCommand;
    TBoolean aboRng_EvServiceBrakeTrackCommand[2];
    TBoolean boDef_EvServiceBrakeTrackCommand;
    TDbVarInf  tInf_EvServiceBrakeTrackValue;
    EDigStatus aeRng_EvServiceBrakeTrackValue[2];
    EDigStatus eDef_EvServiceBrakeTrackValue;
    TDbVarInf  tInf_EvPowerReductionCommand;
    TBoolean aboRng_EvPowerReductionCommand[2];
    TBoolean boDef_EvPowerReductionCommand;
    TDbVarInf  tInf_EvPowerReductionValue;
    EDigStatus aeRng_EvPowerReductionValue[2];
    EDigStatus eDef_EvPowerReductionValue;
    TDbVarInf  tInf_EvFrameRotation1Command;
    TBoolean aboRng_EvFrameRotation1Command[2];
    TBoolean boDef_EvFrameRotation1Command;
    TDbVarInf  tInf_EvFrameRotation1Value;
    EDigStatus aeRng_EvFrameRotation1Value[2];
    EDigStatus eDef_EvFrameRotation1Value;
    TDbVarInf  tInf_EvFrameRotation2Command;
    TBoolean aboRng_EvFrameRotation2Command[2];
    TBoolean boDef_EvFrameRotation2Command;
    TDbVarInf  tInf_EvFrameRotation2Value;
    EDigStatus aeRng_EvFrameRotation2Value[2];
    EDigStatus eDef_EvFrameRotation2Value;
    TDbVarInf  tInf_SupplyRadioReceiverCommand;
    TBoolean aboRng_SupplyRadioReceiverCommand[2];
    TBoolean boDef_SupplyRadioReceiverCommand;
    TDbVarInf  tInf_SupplyRadioReceiverValue;
    EDigStatus aeRng_SupplyRadioReceiverValue[2];
    EDigStatus eDef_SupplyRadioReceiverValue;
    TDbVarInf  tInf_BuzzerLynxMovingMachineCommand;
    TBoolean aboRng_BuzzerLynxMovingMachineCommand[2];
    TBoolean boDef_BuzzerLynxMovingMachineCommand;
    TDbVarInf  tInf_BuzzerLynxMovingMachineValue;
    EDigStatus aeRng_BuzzerLynxMovingMachineValue[2];
    EDigStatus eDef_BuzzerLynxMovingMachineValue;
    TDbVarInf  tInf_WhiteLightsTrailerCommand;
    TBoolean aboRng_WhiteLightsTrailerCommand[2];
    TBoolean boDef_WhiteLightsTrailerCommand;
    TDbVarInf  tInf_WhiteLightsTrailerValue;
    EDigStatus aeRng_WhiteLightsTrailerValue[2];
    EDigStatus eDef_WhiteLightsTrailerValue;
    TDbVarInf  tInf_RedLightsTrailerCommand;
    TBoolean aboRng_RedLightsTrailerCommand[2];
    TBoolean boDef_RedLightsTrailerCommand;
    TDbVarInf  tInf_RedLightsTrailerValue;
    EDigStatus aeRng_RedLightsTrailerValue[2];
    EDigStatus eDef_RedLightsTrailerValue;
    TDbVarInf  tInf_WhiteLightAVGCommand;
    TBoolean aboRng_WhiteLightAVGCommand[2];
    TBoolean boDef_WhiteLightAVGCommand;
    TDbVarInf  tInf_WhiteLightAVGValue;
    EDigStatus aeRng_WhiteLightAVGValue[2];
    EDigStatus eDef_WhiteLightAVGValue;
    TDbVarInf  tInf_WhiteLightAVDCommand;
    TBoolean aboRng_WhiteLightAVDCommand[2];
    TBoolean boDef_WhiteLightAVDCommand;
    TDbVarInf  tInf_WhiteLightAVDValue;
    EDigStatus aeRng_WhiteLightAVDValue[2];
    EDigStatus eDef_WhiteLightAVDValue;
    TDbVarInf  tInf_RedLightAVGCommand;
    TBoolean aboRng_RedLightAVGCommand[2];
    TBoolean boDef_RedLightAVGCommand;
    TDbVarInf  tInf_RedLightAVGValue;
    EDigStatus aeRng_RedLightAVGValue[2];
    EDigStatus eDef_RedLightAVGValue;
    TDbVarInf  tInf_RedLightAVDCommand;
    TBoolean aboRng_RedLightAVDCommand[2];
    TBoolean boDef_RedLightAVDCommand;
    TDbVarInf  tInf_RedLightAVDValue;
    EDigStatus aeRng_RedLightAVDValue[2];
    EDigStatus eDef_RedLightAVDValue;
    TDbVarInf  tInf_WhiteLightARGCommand;
    TBoolean aboRng_WhiteLightARGCommand[2];
    TBoolean boDef_WhiteLightARGCommand;
    TDbVarInf  tInf_WhiteLightARGValue;
    EDigStatus aeRng_WhiteLightARGValue[2];
    EDigStatus eDef_WhiteLightARGValue;
    TDbVarInf  tInf_WhiteLightARDCommand;
    TBoolean aboRng_WhiteLightARDCommand[2];
    TBoolean boDef_WhiteLightARDCommand;
    TDbVarInf  tInf_WhiteLightARDValue;
    EDigStatus aeRng_WhiteLightARDValue[2];
    EDigStatus eDef_WhiteLightARDValue;
    TDbVarInf  tInf_RedLightARGCommand;
    TBoolean aboRng_RedLightARGCommand[2];
    TBoolean boDef_RedLightARGCommand;
    TDbVarInf  tInf_RedLightARGValue;
    EDigStatus aeRng_RedLightARGValue[2];
    EDigStatus eDef_RedLightARGValue;
    TDbVarInf  tInf_RedLightARDCommand;
    TBoolean aboRng_RedLightARDCommand[2];
    TBoolean boDef_RedLightARDCommand;
    TDbVarInf  tInf_RedLightARDValue;
    EDigStatus aeRng_RedLightARDValue[2];
    EDigStatus eDef_RedLightARDValue;
    TDbVarInf  tInf_SupllyPvgLeftTrackCommand;
    TBoolean aboRng_SupllyPvgLeftTrackCommand[2];
    TBoolean boDef_SupllyPvgLeftTrackCommand;
    TDbVarInf  tInf_SupllyPvgLeftTrackValue;
    EDigStatus aeRng_SupllyPvgLeftTrackValue[2];
    EDigStatus eDef_SupllyPvgLeftTrackValue;
    TDbVarInf  tInf_SupllyPvgRightTrackCommand;
    TBoolean aboRng_SupllyPvgRightTrackCommand[2];
    TBoolean boDef_SupllyPvgRightTrackCommand;
    TDbVarInf  tInf_SupllyPvgRightTrackValue;
    EDigStatus aeRng_SupllyPvgRightTrackValue[2];
    EDigStatus eDef_SupllyPvgRightTrackValue;
    TDbVarInf  tInf_EvUnBlockOscillationAxleState;
    EDigStatus aeRng_EvUnBlockOscillationAxleState[2];
    EDigStatus eDef_EvUnBlockOscillationAxleState;
    TDbVarInf  tInf_EvUnBlockOscillationAxleCmdBool;
    TBoolean aboRng_EvUnBlockOscillationAxleCmdBool[2];
    TBoolean boDef_EvUnBlockOscillationAxleCmdBool;
    TDbVarInf  tInf_EvUpAxleOscillantState;
    EDigStatus aeRng_EvUpAxleOscillantState[2];
    EDigStatus eDef_EvUpAxleOscillantState;
    TDbVarInf  tInf_EvUpAxleOscillantCommandBool;
    TBoolean aboRng_EvUpAxleOscillantCommandBool[2];
    TBoolean boDef_EvUpAxleOscillantCommandBool;
    TDbVarInf  tInf_EvDownAxleOscillantState;
    EDigStatus aeRng_EvDownAxleOscillantState[2];
    EDigStatus eDef_EvDownAxleOscillantState;
    TDbVarInf  tInf_EvDownAxleOscillantCommandBool;
    TBoolean aboRng_EvDownAxleOscillantCommandBool[2];
    TBoolean boDef_EvDownAxleOscillantCommandBool;
    TDbVarInf  tInf_EvUpAxleFixeState;
    EDigStatus aeRng_EvUpAxleFixeState[2];
    EDigStatus eDef_EvUpAxleFixeState;
    TDbVarInf  tInf_EvUpAxleFixeCommandBool;
    TBoolean aboRng_EvUpAxleFixeCommandBool[2];
    TBoolean boDef_EvUpAxleFixeCommandBool;
    TDbVarInf  tInf_EvDownAxleFixeState;
    EDigStatus aeRng_EvDownAxleFixeState[2];
    EDigStatus eDef_EvDownAxleFixeState;
    TDbVarInf  tInf_EvDownAxleFixeCommandBool;
    TBoolean aboRng_EvDownAxleFixeCommandBool[2];
    TBoolean boDef_EvDownAxleFixeCommandBool;
    TDbVarInf  tInf_EvParkBrakeAxleOscillantState;
    EDigStatus aeRng_EvParkBrakeAxleOscillantState[2];
    EDigStatus eDef_EvParkBrakeAxleOscillantState;
    TDbVarInf  tInf_EvParkBrakeAxleOscillantCmdBool;
    TBoolean aboRng_EvParkBrakeAxleOscillantCmdBool[2];
    TBoolean boDef_EvParkBrakeAxleOscillantCmdBool;
    TDbVarInf  tInf_EvParkBrakeAxleFixeState;
    EDigStatus aeRng_EvParkBrakeAxleFixeState[2];
    EDigStatus eDef_EvParkBrakeAxleFixeState;
    TDbVarInf  tInf_EvParkBrakeAxleFixeCmdBool;
    TBoolean aboRng_EvParkBrakeAxleFixeCmdBool[2];
    TBoolean boDef_EvParkBrakeAxleFixeCmdBool;
    TDbVarInf  tInf_EvServiceBrakeAxleOscillantState;
    EDigStatus aeRng_EvServiceBrakeAxleOscillantState[2];
    EDigStatus eDef_EvServiceBrakeAxleOscillantState;
    TDbVarInf  tInf_EvServiceBrakeAxleOsciCmdBool;
    TBoolean aboRng_EvServiceBrakeAxleOsciCmdBool[2];
    TBoolean boDef_EvServiceBrakeAxleOsciCmdBool;
    TDbVarInf  tInf_EvServiceBrakeAxleFixeState;
    EDigStatus aeRng_EvServiceBrakeAxleFixeState[2];
    EDigStatus eDef_EvServiceBrakeAxleFixeState;
    TDbVarInf  tInf_EvServiceBrakeAxleFixeCmdBool;
    TBoolean aboRng_EvServiceBrakeAxleFixeCmdBool[2];
    TBoolean boDef_EvServiceBrakeAxleFixeCmdBool;
    TDbVarInf  tInf_KlaxonNeotecState;
    EDigStatus aeRng_KlaxonNeotecState[2];
    EDigStatus eDef_KlaxonNeotecState;
    TDbVarInf  tInf_KlaxonNeotecCmdBool;
    TBoolean aboRng_KlaxonNeotecCmdBool[2];
    TBoolean boDef_KlaxonNeotecCmdBool;
    TDbVarInf  tInf_ForwardPumpState;
    EProStatus aeRng_ForwardPumpState[2];
    EProStatus eDef_ForwardPumpState;
    TDbVarInf  tInf_ForwardPumpCommand;
    TUint16 au16Rng_ForwardPumpCommand[2];
    TUint16 u16Def_ForwardPumpCommand;
    TDbVarInf  tInf_ForwardPumpCurrent;
    TUint16 au16Rng_ForwardPumpCurrent[2];
    TUint16 u16Def_ForwardPumpCurrent;
    TDbVarInf  tInf_BackwardPumpState;
    EProStatus aeRng_BackwardPumpState[2];
    EProStatus eDef_BackwardPumpState;
    TDbVarInf  tInf_BackwardPumpCommand;
    TUint16 au16Rng_BackwardPumpCommand[2];
    TUint16 u16Def_BackwardPumpCommand;
    TDbVarInf  tInf_BackwardPumpCurrent;
    TUint16 au16Rng_BackwardPumpCurrent[2];
    TUint16 u16Def_BackwardPumpCurrent;
    TDbVarInf  tInf_PvgLeftTrackCommand;
    TUint16 au16Rng_PvgLeftTrackCommand[2];
    TUint16 u16Def_PvgLeftTrackCommand;
    TDbVarInf  tInf_PvgLeftTrackVoltage;
    TUint16 au16Rng_PvgLeftTrackVoltage[2];
    TUint16 u16Def_PvgLeftTrackVoltage;
    TDbVarInf  tInf_PvgRightTrackCommand;
    TUint16 au16Rng_PvgRightTrackCommand[2];
    TUint16 u16Def_PvgRightTrackCommand;
    TDbVarInf  tInf_PvgRightTrackVoltage;
    TUint16 au16Rng_PvgRightTrackVoltage[2];
    TUint16 u16Def_PvgRightTrackVoltage;
    TDbVarInf  tInf_SupplyAnaSensorsCommand;
    TBoolean aboRng_SupplyAnaSensorsCommand[2];
    TBoolean boDef_SupplyAnaSensorsCommand;
    TDbVarInf  tInf_SupplyAnaSensorsValue;
    EDigStatus aeRng_SupplyAnaSensorsValue[2];
    EDigStatus eDef_SupplyAnaSensorsValue;
    TDbVarInf  tInf_PvgLeftTrackLowsideCommand;
    TBoolean aboRng_PvgLeftTrackLowsideCommand[2];
    TBoolean boDef_PvgLeftTrackLowsideCommand;
    TDbVarInf  tInf_PvgLeftTrackLowsideValue;
    EDigStatus aeRng_PvgLeftTrackLowsideValue[2];
    EDigStatus eDef_PvgLeftTrackLowsideValue;
    TDbVarInf  tInf_PvgRightTrackLowsideCommand;
    TBoolean aboRng_PvgRightTrackLowsideCommand[2];
    TBoolean boDef_PvgRightTrackLowsideCommand;
    TDbVarInf  tInf_PvgRightTrackLowsideValue;
    EDigStatus aeRng_PvgRightTrackLowsideValue[2];
    EDigStatus eDef_PvgRightTrackLowsideValue;
    TDbVarInf  tInf_ReturnLowSideEvForwardPumpCmd;
    TBoolean aboRng_ReturnLowSideEvForwardPumpCmd[2];
    TBoolean boDef_ReturnLowSideEvForwardPumpCmd;
    TDbVarInf  tInf_ReturnLowSideEvForwardPumpState;
    EDigStatus aeRng_ReturnLowSideEvForwardPumpState[2];
    EDigStatus eDef_ReturnLowSideEvForwardPumpState;
    TDbVarInf  tInf_ReturnLowSideEvBackwardPumpCmd;
    TBoolean aboRng_ReturnLowSideEvBackwardPumpCmd[2];
    TBoolean boDef_ReturnLowSideEvBackwardPumpCmd;
    TDbVarInf  tInf_ReturnLowSideEvBackwardPumpState;
    EDigStatus aeRng_ReturnLowSideEvBackwardPumpState[2];
    EDigStatus eDef_ReturnLowSideEvBackwardPumpState;
    TDbVarInf  tInf_NeonLightsCmd;
    TBoolean aboRng_NeonLightsCmd[2];
    TBoolean boDef_NeonLightsCmd;
    TDbVarInf  tInf_NeonLightsValue;
    EDigStatus aeRng_NeonLightsValue[2];
    EDigStatus eDef_NeonLightsValue;
    TDbVarInf  tInf_Ev2DeflectorTransmissionValue;
    EDigStatus aeRng_Ev2DeflectorTransmissionValue[2];
    EDigStatus eDef_Ev2DeflectorTransmissionValue;
    TDbVarInf  tInf_CoolingRelayCommand;
    TBoolean aboRng_CoolingRelayCommand[2];
    TBoolean boDef_CoolingRelayCommand;
    TDbVarInf  tInf_CoolingRelayState;
    EDigStatus aeRng_CoolingRelayState[2];
    EDigStatus eDef_CoolingRelayState;
    TDbVarInf  tInf_Ev2ndParkBrakeAxleFixe;
    TBoolean aboRng_Ev2ndParkBrakeAxleFixe[2];
    TBoolean boDef_Ev2ndParkBrakeAxleFixe;
    TDbVarInf  tInf_Ev2ndParkBrakeAxleOsci;
    TBoolean aboRng_Ev2ndParkBrakeAxleOsci[2];
    TBoolean boDef_Ev2ndParkBrakeAxleOsci;
    TDbVarInf  tInf_Ev2ndParkBrakeAxleFixeState;
    EDigStatus aeRng_Ev2ndParkBrakeAxleFixeState[2];
    EDigStatus eDef_Ev2ndParkBrakeAxleFixeState;
    TDbVarInf  tInf_Ev2ndParkBrakeAxleOsciState;
    EDigStatus aeRng_Ev2ndParkBrakeAxleOsciState[2];
    EDigStatus eDef_Ev2ndParkBrakeAxleOsciState;
    TDbVarInf  tInf_PvgTransRailElectricCmd;
    TUint16 au16Rng_PvgTransRailElectricCmd[2];
    TUint16 u16Def_PvgTransRailElectricCmd;
    TDbVarInf  tInf_PvgTransRailElectricVoltage;
    TUint16 au16Rng_PvgTransRailElectricVoltage[2];
    TUint16 u16Def_PvgTransRailElectricVoltage;
    TDbVarInf  tInf_SupllyPvgTransRailElectricCmd;
    TBoolean aboRng_SupllyPvgTransRailElectricCmd[2];
    TBoolean boDef_SupllyPvgTransRailElectricCmd;
    TDbVarInf  tInf_SupllyPvgTransRailElectricState;
    EDigStatus aeRng_SupllyPvgTransRailElectricState[2];
    EDigStatus eDef_SupllyPvgTransRailElectricState;
    TDbVarInf  tInf_EvDevRailElectricModeCmd;
    TBoolean aboRng_EvDevRailElectricModeCmd[2];
    TBoolean boDef_EvDevRailElectricModeCmd;
    TDbVarInf  tInf_EvDevRailElectricModeState;
    EDigStatus aeRng_EvDevRailElectricModeState[2];
    EDigStatus eDef_EvDevRailElectricModeState;
    TDbVarInf  tInf_RelayCutOffVariatorElectricCmd;
    TBoolean aboRng_RelayCutOffVariatorElectricCmd[2];
    TBoolean boDef_RelayCutOffVariatorElectricCmd;
    TDbVarInf  tInf_RelayCutOffVariatorElectricState;
    EDigStatus aeRng_RelayCutOffVariatorElectricState[2];
    EDigStatus eDef_RelayCutOffVariatorElectricState;
    TDbVarInf  tInf_RelayEnableBatteryCmd;
    TBoolean aboRng_RelayEnableBatteryCmd[2];
    TBoolean boDef_RelayEnableBatteryCmd;
    TDbVarInf  tInf_RelayEnableBatteryState;
    EDigStatus aeRng_RelayEnableBatteryState[2];
    EDigStatus eDef_RelayEnableBatteryState;
}TDbSetRamEcuOutputsC0;

typedef struct
{
    TDbVarInf  tInf_LifeByte;
    TUint8 au8Rng_LifeByte[2];
    TUint8 u8Def_LifeByte;
    TDbVarInf  tInf_WatchdogState;
    EWdState aeRng_WatchdogState[2];
    EWdState eDef_WatchdogState;
    TDbVarInf  tInf_EcuVoltage;
    TUint16 au16Rng_EcuVoltage[2];
    TUint16 u16Def_EcuVoltage;
    TDbVarInf  tInf_OffRailMode;
    EOffRailMode aeRng_OffRailMode[2];
    EOffRailMode eDef_OffRailMode;
    TDbVarInf  tInf_RailSpeedMode;
    ERailSpeedMode aeRng_RailSpeedMode[2];
    ERailSpeedMode eDef_RailSpeedMode;
    TDbVarInf  tInf_OutputLutLeftManipulator;
    TInt16 ai16Rng_OutputLutLeftManipulator[2];
    TInt16 i16Def_OutputLutLeftManipulator;
    TDbVarInf  tInf_OutputLutLeftTrackPvg;
    TInt16 ai16Rng_OutputLutLeftTrackPvg[2];
    TInt16 i16Def_OutputLutLeftTrackPvg;
    TDbVarInf  tInf_OutputLutRightManipulator;
    TInt16 ai16Rng_OutputLutRightManipulator[2];
    TInt16 i16Def_OutputLutRightManipulator;
    TDbVarInf  tInf_OutputLutRightTrackPvg;
    TInt16 ai16Rng_OutputLutRightTrackPvg[2];
    TInt16 i16Def_OutputLutRightTrackPvg;
    TDbVarInf  tInf_OutputLutJoystickAdvanceRail;
    TInt16 ai16Rng_OutputLutJoystickAdvanceRail[2];
    TInt16 i16Def_OutputLutJoystickAdvanceRail;
    TDbVarInf  tInf_OutputLutForwardPumpTransmission;
    TInt16 ai16Rng_OutputLutForwardPumpTransmission[2];
    TInt16 i16Def_OutputLutForwardPumpTransmission;
    TDbVarInf  tInf_OutputLutBackwardPumpTransm;
    TInt16 ai16Rng_OutputLutBackwardPumpTransm[2];
    TInt16 i16Def_OutputLutBackwardPumpTransm;
    TDbVarInf  tInf_ConsigneForwardPumpTransmPercent;
    TInt16 ai16Rng_ConsigneForwardPumpTransmPercent[2];
    TInt16 i16Def_ConsigneForwardPumpTransmPercent;
    TDbVarInf  tInf_LastJoystickAdvanceValue;
    TInt16 ai16Rng_LastJoystickAdvanceValue[2];
    TInt16 i16Def_LastJoystickAdvanceValue;
    TDbVarInf  tInf_JoystickAdvanceScalingValue;
    TInt16 ai16Rng_JoystickAdvanceScalingValue[2];
    TInt16 i16Def_JoystickAdvanceScalingValue;
    TDbVarInf  tInf_StateServiceBrakeRail;
    EStateServiceBrakeRail aeRng_StateServiceBrakeRail[2];
    EStateServiceBrakeRail eDef_StateServiceBrakeRail;
    TDbVarInf  tInf_EnableStartTimerServiceBrake;
    TBoolean aboRng_EnableStartTimerServiceBrake[2];
    TBoolean boDef_EnableStartTimerServiceBrake;
    TDbVarInf  tInf_SpeedMotorCommandTest;
    TUint16 au16Rng_SpeedMotorCommandTest[2];
    TUint16 u16Def_SpeedMotorCommandTest;
    TDbVarInf  tInf_ForceSilentModeMotorTest;
    TBoolean aboRng_ForceSilentModeMotorTest[2];
    TBoolean boDef_ForceSilentModeMotorTest;
    TDbVarInf  tInf_AngularSensorTest;
    TUint16 au16Rng_AngularSensorTest[2];
    TUint16 u16Def_AngularSensorTest;
    TDbVarInf  tInf_SpeedAxleSensor;
    TUint16 au16Rng_SpeedAxleSensor[2];
    TUint16 u16Def_SpeedAxleSensor;
    TDbVarInf  tInf_AverageTimeCycle;
    TUint32 au32Rng_AverageTimeCycle[2];
    TUint32 u32Def_AverageTimeCycle;
    TDbVarInf  tInf_MaxTimeCycle;
    TUint32 au32Rng_MaxTimeCycle[2];
    TUint32 u32Def_MaxTimeCycle;
    TDbVarInf  tInf_FirstTranslationReleaseParkBrake;
    TBoolean aboRng_FirstTranslationReleaseParkBrake[2];
    TBoolean boDef_FirstTranslationReleaseParkBrake;
    TDbVarInf  tInf_AutorizeUpAxleOscillant;
    TBoolean aboRng_AutorizeUpAxleOscillant[2];
    TBoolean boDef_AutorizeUpAxleOscillant;
    TDbVarInf  tInf_AutorizeDownAxleOscillant;
    TBoolean aboRng_AutorizeDownAxleOscillant[2];
    TBoolean boDef_AutorizeDownAxleOscillant;
    TDbVarInf  tInf_AutorizeUpAxlefixe;
    TBoolean aboRng_AutorizeUpAxlefixe[2];
    TBoolean boDef_AutorizeUpAxlefixe;
    TDbVarInf  tInf_AutorizeDownAxlefixe;
    TBoolean aboRng_AutorizeDownAxlefixe[2];
    TBoolean boDef_AutorizeDownAxlefixe;
    TDbVarInf  tInf_EngineOn;
    TBoolean aboRng_EngineOn[2];
    TBoolean boDef_EngineOn;
    TDbVarInf  tInf_TranslationMovementIsSolicited;
    TBoolean aboRng_TranslationMovementIsSolicited[2];
    TBoolean boDef_TranslationMovementIsSolicited;
    TDbVarInf  tInf_RailTranslationDirection;
    ERailTranslationDirection aeRng_RailTranslationDirection[2];
    ERailTranslationDirection eDef_RailTranslationDirection;
    TDbVarInf  tInf_SetConditionAruRadioAlarm;
    TBoolean aboRng_SetConditionAruRadioAlarm[2];
    TBoolean boDef_SetConditionAruRadioAlarm;
    TDbVarInf  tInf_JoystickAdvanceSetpointAfterRamp;
    TInt16 ai16Rng_JoystickAdvanceSetpointAfterRamp[2];
    TInt16 i16Def_JoystickAdvanceSetpointAfterRamp;
    TDbVarInf  tInf_StabilizedStop;
    TBoolean aboRng_StabilizedStop[2];
    TBoolean boDef_StabilizedStop;
    TDbVarInf  tInf_EmergencyBrake;
    TBoolean aboRng_EmergencyBrake[2];
    TBoolean boDef_EmergencyBrake;
    TDbVarInf  tInf_EmergencyServiceBrakeTimerDone;
    TBoolean aboRng_EmergencyServiceBrakeTimerDone[2];
    TBoolean boDef_EmergencyServiceBrakeTimerDone;
    TDbVarInf  tInf_StoppedMachineUnblkOsciTimerDone;
    TBoolean aboRng_StoppedMachineUnblkOsciTimerDone[2];
    TBoolean boDef_StoppedMachineUnblkOsciTimerDone;
    TDbVarInf  tInf_OutLutLeftManipulatorAfterRamp;
    TInt16 ai16Rng_OutLutLeftManipulatorAfterRamp[2];
    TInt16 i16Def_OutLutLeftManipulatorAfterRamp;
    TDbVarInf  tInf_OutLutRightManipulatorAfterRamp;
    TInt16 ai16Rng_OutLutRightManipulatorAfterRamp[2];
    TInt16 i16Def_OutLutRightManipulatorAfterRamp;
    TDbVarInf  tInf_DeltaBeetweenLeftRightPvgCrawler;
    TUint16 au16Rng_DeltaBeetweenLeftRightPvgCrawler[2];
    TUint16 u16Def_DeltaBeetweenLeftRightPvgCrawler;
    TDbVarInf  tInf_ConsigneLeftPvgTrack;
    TInt16 ai16Rng_ConsigneLeftPvgTrack[2];
    TInt16 i16Def_ConsigneLeftPvgTrack;
    TDbVarInf  tInf_ConsigneRightPvgTrack;
    TInt16 ai16Rng_ConsigneRightPvgTrack[2];
    TInt16 i16Def_ConsigneRightPvgTrack;
    TDbVarInf  tInf_BrakeWithoutGachetteOrPedal;
    TUint8 au8Rng_BrakeWithoutGachetteOrPedal[2];
    TUint8 u8Def_BrakeWithoutGachetteOrPedal;
    TDbVarInf  tInf_AruRadioAlarmCounter;
    TUint16 au16Rng_AruRadioAlarmCounter[2];
    TUint16 u16Def_AruRadioAlarmCounter;
    TDbVarInf  tInf_RedLightARGBasketCmd;
    TBoolean aboRng_RedLightARGBasketCmd[2];
    TBoolean boDef_RedLightARGBasketCmd;
    TDbVarInf  tInf_WhiteLightARGBasketCmd;
    TBoolean aboRng_WhiteLightARGBasketCmd[2];
    TBoolean boDef_WhiteLightARGBasketCmd;
    TDbVarInf  tInf_PortillonLadderClose;
    TBoolean aboRng_PortillonLadderClose[2];
    TBoolean boDef_PortillonLadderClose;
    TDbVarInf  tInf_TestEvision;
    TBoolean aboRng_TestEvision[2];
    TBoolean boDef_TestEvision;
    TDbVarInf  tInf_PosJoystickAdvance;
    EPosJoy aeRng_PosJoystickAdvance[2];
    EPosJoy eDef_PosJoystickAdvance;
    TDbVarInf  tInf_RetainPosJoyAdvanceUntilBrake;
    EPosJoy aeRng_RetainPosJoyAdvanceUntilBrake[2];
    EPosJoy eDef_RetainPosJoyAdvanceUntilBrake;
    TDbVarInf  tInf_AuthorizeForwardCrawler;
    TBoolean aboRng_AuthorizeForwardCrawler[2];
    TBoolean boDef_AuthorizeForwardCrawler;
    TDbVarInf  tInf_AuthorizeBackwardCrawler;
    TBoolean aboRng_AuthorizeBackwardCrawler[2];
    TBoolean boDef_AuthorizeBackwardCrawler;
    TDbVarInf  tInf_ReturnValueUartInit;
    TInt16 ai16Rng_ReturnValueUartInit[2];
    TInt16 i16Def_ReturnValueUartInit;
    TDbVarInf  tInf_AuthorizeTransRailMovement;
    TBoolean aboRng_AuthorizeTransRailMovement[2];
    TBoolean boDef_AuthorizeTransRailMovement;
    TDbVarInf  tInf_EvForwardTrackConsigne;
    TUint16 au16Rng_EvForwardTrackConsigne[2];
    TUint16 u16Def_EvForwardTrackConsigne;
    TDbVarInf  tInf_EvForwardRailConsigne;
    TUint16 au16Rng_EvForwardRailConsigne[2];
    TUint16 u16Def_EvForwardRailConsigne;
    TDbVarInf  tInf_EngineTimeSecond;
    TUint32 au32Rng_EngineTimeSecond[2];
    TUint32 u32Def_EngineTimeSecond;
    TDbVarInf  tInf_RamGeneralNeotecC0_1;
    TBoolean aboRng_RamGeneralNeotecC0_1[2];
    TBoolean boDef_RamGeneralNeotecC0_1;
    TDbVarInf  tInf_RamGeneralNeotecC0_1_1;
    TBoolean aboRng_RamGeneralNeotecC0_1_1[2];
    TBoolean boDef_RamGeneralNeotecC0_1_1;
    TDbVarInf  tInf_RamGeneralNeotecC0_1_2;
    TBoolean aboRng_RamGeneralNeotecC0_1_2[2];
    TBoolean boDef_RamGeneralNeotecC0_1_2;
    TDbVarInf  tInf_RamGeneralNeotecC0_1_3;
    TBoolean aboRng_RamGeneralNeotecC0_1_3[2];
    TBoolean boDef_RamGeneralNeotecC0_1_3;
    TDbVarInf  tInf_RamGeneralNeotecC0_1_4;
    TBoolean aboRng_RamGeneralNeotecC0_1_4[2];
    TBoolean boDef_RamGeneralNeotecC0_1_4;
    TDbVarInf  tInf_RamGeneralNeotecC0_1_5;
    TBoolean aboRng_RamGeneralNeotecC0_1_5[2];
    TBoolean boDef_RamGeneralNeotecC0_1_5;
    TDbVarInf  tInf_RamGeneralNeotecC0_1_6;
    TBoolean aboRng_RamGeneralNeotecC0_1_6[2];
    TBoolean boDef_RamGeneralNeotecC0_1_6;
    TDbVarInf  tInf_RamGeneralNeotecC0_1_7;
    TBoolean aboRng_RamGeneralNeotecC0_1_7[2];
    TBoolean boDef_RamGeneralNeotecC0_1_7;
    TDbVarInf  tInf_RamGeneralNeotecC0_1_8;
    TBoolean aboRng_RamGeneralNeotecC0_1_8[2];
    TBoolean boDef_RamGeneralNeotecC0_1_8;
    TDbVarInf  tInf_RamGeneralNeotecC0_1_9;
    TBoolean aboRng_RamGeneralNeotecC0_1_9[2];
    TBoolean boDef_RamGeneralNeotecC0_1_9;
    TDbVarInf  tInf_RamGeneralNeotecC0_1_10;
    TBoolean aboRng_RamGeneralNeotecC0_1_10[2];
    TBoolean boDef_RamGeneralNeotecC0_1_10;
    TDbVarInf  tInf_RamGeneralNeotecC0_1_11;
    TBoolean aboRng_RamGeneralNeotecC0_1_11[2];
    TBoolean boDef_RamGeneralNeotecC0_1_11;
    TDbVarInf  tInf_RamGeneralNeotecC0_1_12;
    TBoolean aboRng_RamGeneralNeotecC0_1_12[2];
    TBoolean boDef_RamGeneralNeotecC0_1_12;
    TDbVarInf  tInf_RamGeneralNeotecC0_1_13;
    TBoolean aboRng_RamGeneralNeotecC0_1_13[2];
    TBoolean boDef_RamGeneralNeotecC0_1_13;
    TDbVarInf  tInf_RamGeneralNeotecC0_1_14;
    TBoolean aboRng_RamGeneralNeotecC0_1_14[2];
    TBoolean boDef_RamGeneralNeotecC0_1_14;
    TDbVarInf  tInf_RamGeneralNeotecC0_1_15;
    TBoolean aboRng_RamGeneralNeotecC0_1_15[2];
    TBoolean boDef_RamGeneralNeotecC0_1_15;
    TDbVarInf  tInf_RamGeneralNeotecC0_2;
    TUint8 au8Rng_RamGeneralNeotecC0_2[2];
    TUint8 u8Def_RamGeneralNeotecC0_2;
    TDbVarInf  tInf_RamGeneralNeotecC0_2_1;
    TUint8 au8Rng_RamGeneralNeotecC0_2_1[2];
    TUint8 u8Def_RamGeneralNeotecC0_2_1;
    TDbVarInf  tInf_RamGeneralNeotecC0_2_2;
    TUint8 au8Rng_RamGeneralNeotecC0_2_2[2];
    TUint8 u8Def_RamGeneralNeotecC0_2_2;
    TDbVarInf  tInf_RamGeneralNeotecC0_2_3;
    TUint8 au8Rng_RamGeneralNeotecC0_2_3[2];
    TUint8 u8Def_RamGeneralNeotecC0_2_3;
    TDbVarInf  tInf_RamGeneralNeotecC0_2_4;
    TUint8 au8Rng_RamGeneralNeotecC0_2_4[2];
    TUint8 u8Def_RamGeneralNeotecC0_2_4;
    TDbVarInf  tInf_RamGeneralNeotecC0_2_5;
    TUint8 au8Rng_RamGeneralNeotecC0_2_5[2];
    TUint8 u8Def_RamGeneralNeotecC0_2_5;
    TDbVarInf  tInf_RamGeneralNeotecC0_3;
    TUint16 au16Rng_RamGeneralNeotecC0_3[2];
    TUint16 u16Def_RamGeneralNeotecC0_3;
    TDbVarInf  tInf_RamGeneralNeotecC0_3_1;
    TUint16 au16Rng_RamGeneralNeotecC0_3_1[2];
    TUint16 u16Def_RamGeneralNeotecC0_3_1;
    TDbVarInf  tInf_RamGeneralNeotecC0_3_2;
    TUint16 au16Rng_RamGeneralNeotecC0_3_2[2];
    TUint16 u16Def_RamGeneralNeotecC0_3_2;
    TDbVarInf  tInf_RamGeneralNeotecC0_3_3;
    TUint16 au16Rng_RamGeneralNeotecC0_3_3[2];
    TUint16 u16Def_RamGeneralNeotecC0_3_3;
    TDbVarInf  tInf_RamGeneralNeotecC0_3_4;
    TUint16 au16Rng_RamGeneralNeotecC0_3_4[2];
    TUint16 u16Def_RamGeneralNeotecC0_3_4;
    TDbVarInf  tInf_RamGeneralNeotecC0_3_5;
    TUint16 au16Rng_RamGeneralNeotecC0_3_5[2];
    TUint16 u16Def_RamGeneralNeotecC0_3_5;
    TDbVarInf  tInf_RamGeneralNeotecC0_3_6;
    TUint16 au16Rng_RamGeneralNeotecC0_3_6[2];
    TUint16 u16Def_RamGeneralNeotecC0_3_6;
    TDbVarInf  tInf_RamGeneralNeotecC0_3_7;
    TUint16 au16Rng_RamGeneralNeotecC0_3_7[2];
    TUint16 u16Def_RamGeneralNeotecC0_3_7;
    TDbVarInf  tInf_RamGeneralNeotecC0_3_8;
    TUint16 au16Rng_RamGeneralNeotecC0_3_8[2];
    TUint16 u16Def_RamGeneralNeotecC0_3_8;
    TDbVarInf  tInf_RamGeneralNeotecC0_4;
    TInt16 ai16Rng_RamGeneralNeotecC0_4[2];
    TInt16 i16Def_RamGeneralNeotecC0_4;
    TDbVarInf  tInf_RamGeneralNeotecC0_4_1;
    TInt16 ai16Rng_RamGeneralNeotecC0_4_1[2];
    TInt16 i16Def_RamGeneralNeotecC0_4_1;
    TDbVarInf  tInf_RamGeneralNeotecC0_4_2;
    TInt16 ai16Rng_RamGeneralNeotecC0_4_2[2];
    TInt16 i16Def_RamGeneralNeotecC0_4_2;
    TDbVarInf  tInf_RamGeneralNeotecC0_4_3;
    TInt16 ai16Rng_RamGeneralNeotecC0_4_3[2];
    TInt16 i16Def_RamGeneralNeotecC0_4_3;
    TDbVarInf  tInf_RamGeneralNeotecC0_4_4;
    TInt16 ai16Rng_RamGeneralNeotecC0_4_4[2];
    TInt16 i16Def_RamGeneralNeotecC0_4_4;
    TDbVarInf  tInf_RamGeneralNeotecC0_4_5;
    TInt16 ai16Rng_RamGeneralNeotecC0_4_5[2];
    TInt16 i16Def_RamGeneralNeotecC0_4_5;
    TDbVarInf  tInf_RamGeneralNeotecC0_4_6;
    TInt16 ai16Rng_RamGeneralNeotecC0_4_6[2];
    TInt16 i16Def_RamGeneralNeotecC0_4_6;
    TDbVarInf  tInf_RamGeneralNeotecC0_4_7;
    TInt16 ai16Rng_RamGeneralNeotecC0_4_7[2];
    TInt16 i16Def_RamGeneralNeotecC0_4_7;
    TDbVarInf  tInf_RamGeneralNeotecC0_4_8;
    TInt16 ai16Rng_RamGeneralNeotecC0_4_8[2];
    TInt16 i16Def_RamGeneralNeotecC0_4_8;
    TDbVarInf  tInf_RedLightARDBasketCmd;
    TBoolean aboRng_RedLightARDBasketCmd[2];
    TBoolean boDef_RedLightARDBasketCmd;
    TDbVarInf  tInf_WhiteLightARDBasketCmd;
    TBoolean aboRng_WhiteLightARDBasketCmd[2];
    TBoolean boDef_WhiteLightARDBasketCmd;
    TDbVarInf  tInf_ActiveFailure;
    TBoolean aboRng_ActiveFailure[2];
    TBoolean boDef_ActiveFailure;
    TDbVarInf  tInf_ReductionPumpRail;
    TUint8 au8Rng_ReductionPumpRail[2];
    TUint8 u8Def_ReductionPumpRail;
    TDbVarInf  tInf_ReductionPumpTrack;
    TUint8 au8Rng_ReductionPumpTrack[2];
    TUint8 u8Def_ReductionPumpTrack;
    TDbVarInf  tInf_ActiveWhiteLights15746;
    TBoolean aboRng_ActiveWhiteLights15746[2];
    TBoolean boDef_ActiveWhiteLights15746;
    TDbVarInf  tInf_WhiteLightAv15746Command;
    TBoolean aboRng_WhiteLightAv15746Command[2];
    TBoolean boDef_WhiteLightAv15746Command;
    TDbVarInf  tInf_WhiteLightAr15746Command;
    TBoolean aboRng_WhiteLightAr15746Command[2];
    TBoolean boDef_WhiteLightAr15746Command;
    TDbVarInf  tInf_TestElectricalIO;
    TBoolean aboRng_TestElectricalIO[2];
    TBoolean boDef_TestElectricalIO;
    TDbVarInf  tInf_SendEventDataloggerMessage;
    TBoolean aboRng_SendEventDataloggerMessage[2];
    TBoolean boDef_SendEventDataloggerMessage;
    TDbVarInf  tInf_SlopeModeFromC1;
    TBoolean aboRng_SlopeModeFromC1[2];
    TBoolean boDef_SlopeModeFromC1;
    TDbVarInf  tInf_BlinkLow;
    TBoolean aboRng_BlinkLow[2];
    TBoolean boDef_BlinkLow;
    TDbVarInf  tInf_TotalDistance;
    TUint32 au32Rng_TotalDistance[2];
    TUint32 u32Def_TotalDistance;
    TDbVarInf  tInf_RunningStable48XS;
    TBoolean aboRng_RunningStable48XS[2];
    TBoolean boDef_RunningStable48XS;
    TDbVarInf  tInf_AlarmHydTempRailActive;
    TBoolean aboRng_AlarmHydTempRailActive[2];
    TBoolean boDef_AlarmHydTempRailActive;
    TDbVarInf  tInf_AlarmHydTempCrawlerActive;
    TBoolean aboRng_AlarmHydTempCrawlerActive[2];
    TBoolean boDef_AlarmHydTempCrawlerActive;
    TDbVarInf  tInf_FaultyValue;
    TUint16 au16Rng_FaultyValue[2];
    TUint16 u16Def_FaultyValue;
    TDbVarInf  tInf_DeviceNum;
    TUint8 au8Rng_DeviceNum[2];
    TUint8 u8Def_DeviceNum;
    TDbVarInf  tInf_ErrorCode;
    TUint8 au8Rng_ErrorCode[2];
    TUint8 u8Def_ErrorCode;
    TDbVarInf  tInf_EngineRunningStable;
    TBoolean aboRng_EngineRunningStable[2];
    TBoolean boDef_EngineRunningStable;
    TDbVarInf  tInf_AxlePositionSensorFault;
    TBoolean aboRng_AxlePositionSensorFault[2];
    TBoolean boDef_AxlePositionSensorFault;
    TDbVarInf  tInf_AxlePositionInMGMode;
    TBoolean aboRng_AxlePositionInMGMode[2];
    TBoolean boDef_AxlePositionInMGMode;
    TDbVarInf  tInf_EvLoadBrakeAccuCmd;
    TBoolean aboRng_EvLoadBrakeAccuCmd[2];
    TBoolean boDef_EvLoadBrakeAccuCmd;
    TDbVarInf  tInf_ErrListCntMax;
    TUint8 au8Rng_ErrListCntMax[2];
    TUint8 u8Def_ErrListCntMax;
    TDbVarInf  tInf_GlobalAuthorizeTrans;
    TBoolean aboRng_GlobalAuthorizeTrans[2];
    TBoolean boDef_GlobalAuthorizeTrans;
}TDbSetRamGeneralC0;

typedef struct
{
    TDbVarInf  tInf_ConfigHollandaise;
    TBoolean aboRng_ConfigHollandaise[2];
    TBoolean boDef_ConfigHollandaise;
    TDbVarInf  tInf_Portillon;
    TBoolean aboRng_Portillon[2];
    TBoolean boDef_Portillon;
    TDbVarInf  tInf_Ladder;
    TBoolean aboRng_Ladder[2];
    TBoolean boDef_Ladder;
    TDbVarInf  tInf_MeasuringMat;
    TBoolean aboRng_MeasuringMat[2];
    TBoolean boDef_MeasuringMat;
    TDbVarInf  tInf_IncliBasketHighSectorForAcesSite;
    TBoolean aboRng_IncliBasketHighSectorForAcesSite[2];
    TBoolean boDef_IncliBasketHighSectorForAcesSite;
    TDbVarInf  tInf_BasketCenteredForAccesSite;
    TBoolean aboRng_BasketCenteredForAccesSite[2];
    TBoolean boDef_BasketCenteredForAccesSite;
    TDbVarInf  tInf_MastDigitalDisplay;
    TBoolean aboRng_MastDigitalDisplay[2];
    TBoolean boDef_MastDigitalDisplay;
    TDbVarInf  tInf_AutorisationWorkKeyPresent;
    TBoolean aboRng_AutorisationWorkKeyPresent[2];
    TBoolean boDef_AutorisationWorkKeyPresent;
    TDbVarInf  tInf_SecondParkBrakeActive;
    TBoolean aboRng_SecondParkBrakeActive[2];
    TBoolean boDef_SecondParkBrakeActive;
    TDbVarInf  tInf_AddPerformanceFunc;
    TBoolean aboRng_AddPerformanceFunc[2];
    TBoolean boDef_AddPerformanceFunc;
    TDbVarInf  tInf_BasketTurretLimitation;
    TBoolean aboRng_BasketTurretLimitation[2];
    TBoolean boDef_BasketTurretLimitation;
    TDbVarInf  tInf_PresenceSensorPlate;
    TBoolean aboRng_PresenceSensorPlate[2];
    TBoolean boDef_PresenceSensorPlate;
    TDbVarInf  tInf_MachineMountedAxlesMG;
    TBoolean aboRng_MachineMountedAxlesMG[2];
    TBoolean boDef_MachineMountedAxlesMG;
}TDbSetNvOptionsC0;

typedef struct
{
    TDbVarInf  tInf_NCycleBrakePerform;
    TUint16 au16Rng_NCycleBrakePerform[2];
    TUint16 u16Def_NCycleBrakePerform;
    TDbVarInf  tInf_LightMode;
    TUint8 au8Rng_LightMode[2];
    TUint8 u8Def_LightMode;
    TDbVarInf  tInf_VarMemory1;
    TUint8 au8Rng_VarMemory1[2];
    TUint8 u8Def_VarMemory1;
    TDbVarInf  tInf_VarMemory2;
    TUint8 au8Rng_VarMemory2[2];
    TUint8 u8Def_VarMemory2;
    TDbVarInf  tInf_VarMemory3;
    TUint8 au8Rng_VarMemory3[2];
    TUint8 u8Def_VarMemory3;
    TDbVarInf  tInf_VarMemory4;
    TUint16 au16Rng_VarMemory4[2];
    TUint16 u16Def_VarMemory4;
    TDbVarInf  tInf_VarMemory5;
    TUint16 au16Rng_VarMemory5[2];
    TUint16 u16Def_VarMemory5;
    TDbVarInf  tInf_VarMemory6;
    TUint16 au16Rng_VarMemory6[2];
    TUint16 u16Def_VarMemory6;
    TDbVarInf  tInf_VarMemory7;
    TInt16 ai16Rng_VarMemory7[2];
    TInt16 i16Def_VarMemory7;
    TDbVarInf  tInf_VarMemory8;
    TInt16 ai16Rng_VarMemory8[2];
    TInt16 i16Def_VarMemory8;
    TDbVarInf  tInf_VarMemory9;
    TInt16 ai16Rng_VarMemory9[2];
    TInt16 i16Def_VarMemory9;
    TDbVarInf  tInf_VarMemory10;
    TBoolean aboRng_VarMemory10[2];
    TBoolean boDef_VarMemory10;
    TDbVarInf  tInf_VarMemory11;
    TBoolean aboRng_VarMemory11[2];
    TBoolean boDef_VarMemory11;
    TDbVarInf  tInf_VarMemory12;
    TBoolean aboRng_VarMemory12[2];
    TBoolean boDef_VarMemory12;
    TDbVarInf  tInf_VarMemory13;
    TBoolean aboRng_VarMemory13[2];
    TBoolean boDef_VarMemory13;
    TDbVarInf  tInf_VarMemory14;
    TBoolean aboRng_VarMemory14[2];
    TBoolean boDef_VarMemory14;
    TDbVarInf  tInf_gDistanceTraveledMeasureMast;
    TInt32 ai32Rng_gDistanceTraveledMeasureMast[2];
    TInt32 i32Def_gDistanceTraveledMeasureMast;
    TDbVarInf  tInf_NCycle2ndParkBrakePerform;
    TUint16 au16Rng_NCycle2ndParkBrakePerform[2];
    TUint16 u16Def_NCycle2ndParkBrakePerform;
    TDbVarInf  tInf_gTotalDistanceMsb;
    TUint16 au16Rng_gTotalDistanceMsb[2];
    TUint16 u16Def_gTotalDistanceMsb;
    TDbVarInf  tInf_gTotalDistanceLsb;
    TUint16 au16Rng_gTotalDistanceLsb[2];
    TUint16 u16Def_gTotalDistanceLsb;
}TDbSetNvMemoryC0;

typedef struct
{
    TDbVarInf  tInf_LimitTresholdAngleRadioControl;
    TUint16 au16Rng_LimitTresholdAngleRadioControl[2];
    TUint16 u16Def_LimitTresholdAngleRadioControl;
    TDbVarInf  tInf_TresholdMinimalSpeedParkBrake;
    TUint16 au16Rng_TresholdMinimalSpeedParkBrake[2];
    TUint16 u16Def_TresholdMinimalSpeedParkBrake;
    TDbVarInf  tInf_TresholdMinimalSpeedServiceBrake;
    TUint16 au16Rng_TresholdMinimalSpeedServiceBrake[2];
    TUint16 u16Def_TresholdMinimalSpeedServiceBrake;
    TDbVarInf  tInf_AdditionnalPourcentFwardPumpCmd;
    TUint8 au8Rng_AdditionnalPourcentFwardPumpCmd[2];
    TUint8 u8Def_AdditionnalPourcentFwardPumpCmd;
    TDbVarInf  tInf_AddPrctFwardPumpSilentModeMotor;
    TUint8 au8Rng_AddPrctFwardPumpSilentModeMotor[2];
    TUint8 u8Def_AddPrctFwardPumpSilentModeMotor;
    TDbVarInf  tInf_NodeIdRadioCommand;
    TUint8 au8Rng_NodeIdRadioCommand[2];
    TUint8 u8Def_NodeIdRadioCommand;
    TDbVarInf  tInf_DeadZoneJoystickRotationTurret;
    TUint8 au8Rng_DeadZoneJoystickRotationTurret[2];
    TUint8 u8Def_DeadZoneJoystickRotationTurret;
    TDbVarInf  tInf_ServiceAxleBrakeTimeBeforeBrake;
    TUint32 au32Rng_ServiceAxleBrakeTimeBeforeBrake[2];
    TUint32 u32Def_ServiceAxleBrakeTimeBeforeBrake;
    TDbVarInf  tInf_ServiceBrakeOffrailTime;
    TUint32 au32Rng_ServiceBrakeOffrailTime[2];
    TUint32 u32Def_ServiceBrakeOffrailTime;
    TDbVarInf  tInf_EngineOffCurEvForwardPump;
    TUint16 au16Rng_EngineOffCurEvForwardPump[2];
    TUint16 u16Def_EngineOffCurEvForwardPump;
    TDbVarInf  tInf_MinCurEvForwardPump;
    TUint16 au16Rng_MinCurEvForwardPump[2];
    TUint16 u16Def_MinCurEvForwardPump;
    TDbVarInf  tInf_StopCurEvForwardPump;
    TUint16 au16Rng_StopCurEvForwardPump[2];
    TUint16 u16Def_StopCurEvForwardPump;
    TDbVarInf  tInf_EngineOffCurEvBackwardPump;
    TUint16 au16Rng_EngineOffCurEvBackwardPump[2];
    TUint16 u16Def_EngineOffCurEvBackwardPump;
    TDbVarInf  tInf_MinCurEvBackwardPump;
    TUint16 au16Rng_MinCurEvBackwardPump[2];
    TUint16 u16Def_MinCurEvBackwardPump;
    TDbVarInf  tInf_StopCurEvBackwardPump;
    TUint16 au16Rng_StopCurEvBackwardPump[2];
    TUint16 u16Def_StopCurEvBackwardPump;
    TDbVarInf  tInf_PosNeutralJoyAdvancement;
    TUint8 au8Rng_PosNeutralJoyAdvancement[2];
    TUint8 u8Def_PosNeutralJoyAdvancement;
    TDbVarInf  tInf_PidGpEvForwardPump;
    TUint16 au16Rng_PidGpEvForwardPump[2];
    TUint16 u16Def_PidGpEvForwardPump;
    TDbVarInf  tInf_PidTiEvForwardPump;
    TUint16 au16Rng_PidTiEvForwardPump[2];
    TUint16 u16Def_PidTiEvForwardPump;
    TDbVarInf  tInf_PidTdEvForwardPump;
    TUint16 au16Rng_PidTdEvForwardPump[2];
    TUint16 u16Def_PidTdEvForwardPump;
    TDbVarInf  tInf_PidGpEvBackwardPump;
    TUint16 au16Rng_PidGpEvBackwardPump[2];
    TUint16 u16Def_PidGpEvBackwardPump;
    TDbVarInf  tInf_PidTiEvBackwardPump;
    TUint16 au16Rng_PidTiEvBackwardPump[2];
    TUint16 u16Def_PidTiEvBackwardPump;
    TDbVarInf  tInf_PidTdEvBackwardPump;
    TUint16 au16Rng_PidTdEvBackwardPump[2];
    TUint16 u16Def_PidTdEvBackwardPump;
    TDbVarInf  tInf_OutCharPosPressureBlockOscil;
    TInt16 ai16Rng_OutCharPosPressureBlockOscil[2];
    TInt16 i16Def_OutCharPosPressureBlockOscil;
    TDbVarInf  tInf_OutCharNeuPressureBlockOscil;
    TInt16 ai16Rng_OutCharNeuPressureBlockOscil[2];
    TInt16 i16Def_OutCharNeuPressureBlockOscil;
    TDbVarInf  tInf_OutCharNegPressureBlockOscil;
    TInt16 ai16Rng_OutCharNegPressureBlockOscil[2];
    TInt16 i16Def_OutCharNegPressureBlockOscil;
    TDbVarInf  tInf_OutCharPosPressureBrake;
    TInt16 ai16Rng_OutCharPosPressureBrake[2];
    TInt16 i16Def_OutCharPosPressureBrake;
    TDbVarInf  tInf_OutCharNeuPressureBrake;
    TInt16 ai16Rng_OutCharNeuPressureBrake[2];
    TInt16 i16Def_OutCharNeuPressureBrake;
    TDbVarInf  tInf_OutCharNegPressureBrake;
    TInt16 ai16Rng_OutCharNegPressureBrake[2];
    TInt16 i16Def_OutCharNegPressureBrake;
    TDbVarInf  tInf_OutCharPosTempTransmission;
    TInt16 ai16Rng_OutCharPosTempTransmission[2];
    TInt16 i16Def_OutCharPosTempTransmission;
    TDbVarInf  tInf_OutCharNeuTempTransmission;
    TInt16 ai16Rng_OutCharNeuTempTransmission[2];
    TInt16 i16Def_OutCharNeuTempTransmission;
    TDbVarInf  tInf_OutCharNegTempTransmission;
    TInt16 ai16Rng_OutCharNegTempTransmission[2];
    TInt16 i16Def_OutCharNegTempTransmission;
    TDbVarInf  tInf_MinConsigneEvForwardRail;
    TInt16 ai16Rng_MinConsigneEvForwardRail[2];
    TInt16 i16Def_MinConsigneEvForwardRail;
    TDbVarInf  tInf_MaxConsigneEvForwardRail;
    TInt16 ai16Rng_MaxConsigneEvForwardRail[2];
    TInt16 i16Def_MaxConsigneEvForwardRail;
    TDbVarInf  tInf_MinConsigneEvBackwardRail;
    TInt16 ai16Rng_MinConsigneEvBackwardRail[2];
    TInt16 i16Def_MinConsigneEvBackwardRail;
    TDbVarInf  tInf_MaxConsigneEvBackwardRail;
    TInt16 ai16Rng_MaxConsigneEvBackwardRail[2];
    TInt16 i16Def_MaxConsigneEvBackwardRail;
    TDbVarInf  tInf_TimeRampEvAdvancementRail;
    TUint16 aau16Rng_TimeRampEvAdvancementRail[4][2];
    TUint16 au16Def_TimeRampEvAdvancementRail[4];
    TDbVarInf  tInf_MinConsigneEvForwardCrawler;
    TInt16 ai16Rng_MinConsigneEvForwardCrawler[2];
    TInt16 i16Def_MinConsigneEvForwardCrawler;
    TDbVarInf  tInf_MaxConsigneEvForwardCrawler;
    TInt16 ai16Rng_MaxConsigneEvForwardCrawler[2];
    TInt16 i16Def_MaxConsigneEvForwardCrawler;
    TDbVarInf  tInf_EvForwardCrawlerAdvanceRampRatio;
    TUint16 aau16Rng_EvForwardCrawlerAdvanceRampRatio[2][2];
    TUint16 au16Def_EvForwardCrawlerAdvanceRampRatio[2];
    TDbVarInf  tInf_TresholdRegimeMotorParkBrake;
    TUint16 au16Rng_TresholdRegimeMotorParkBrake[2];
    TUint16 u16Def_TresholdRegimeMotorParkBrake;
    TDbVarInf  tInf_MinPvgLeftTrackAv;
    TUint8 au8Rng_MinPvgLeftTrackAv[2];
    TUint8 u8Def_MinPvgLeftTrackAv;
    TDbVarInf  tInf_MaxPvgLeftTrackAv;
    TUint8 au8Rng_MaxPvgLeftTrackAv[2];
    TUint8 u8Def_MaxPvgLeftTrackAv;
    TDbVarInf  tInf_MinPvgLeftTrackAr;
    TUint8 au8Rng_MinPvgLeftTrackAr[2];
    TUint8 u8Def_MinPvgLeftTrackAr;
    TDbVarInf  tInf_MaxPvgLeftTrackAr;
    TUint8 au8Rng_MaxPvgLeftTrackAr[2];
    TUint8 u8Def_MaxPvgLeftTrackAr;
    TDbVarInf  tInf_MinPvgRightTrackAv;
    TUint8 au8Rng_MinPvgRightTrackAv[2];
    TUint8 u8Def_MinPvgRightTrackAv;
    TDbVarInf  tInf_MaxPvgRightTrackAv;
    TUint8 au8Rng_MaxPvgRightTrackAv[2];
    TUint8 u8Def_MaxPvgRightTrackAv;
    TDbVarInf  tInf_MinPvgRightTrackAr;
    TUint8 au8Rng_MinPvgRightTrackAr[2];
    TUint8 u8Def_MinPvgRightTrackAr;
    TDbVarInf  tInf_MaxPvgRightTrackAr;
    TUint8 au8Rng_MaxPvgRightTrackAr[2];
    TUint8 u8Def_MaxPvgRightTrackAr;
    TDbVarInf  tInf_TimeRampLeftTrack;
    TUint16 aau16Rng_TimeRampLeftTrack[4][2];
    TUint16 au16Def_TimeRampLeftTrack[4];
    TDbVarInf  tInf_TimeRampRightTrack;
    TUint16 aau16Rng_TimeRampRightTrack[4][2];
    TUint16 au16Def_TimeRampRightTrack[4];
    TDbVarInf  tInf_TimeStabilizedStopDetection;
    TUint32 au32Rng_TimeStabilizedStopDetection[2];
    TUint32 u32Def_TimeStabilizedStopDetection;
    TDbVarInf  tInf_TresholdLowSpeedStabilizedStop;
    TInt32 ai32Rng_TresholdLowSpeedStabilizedStop[2];
    TInt32 i32Def_TresholdLowSpeedStabilizedStop;
    TDbVarInf  tInf_TimeEmergencyServiceBrake;
    TUint32 au32Rng_TimeEmergencyServiceBrake[2];
    TUint32 u32Def_TimeEmergencyServiceBrake;
    TDbVarInf  tInf_TimeStoppedMachineUnblockOscAxle;
    TUint32 au32Rng_TimeStoppedMachineUnblockOscAxle[2];
    TUint32 u32Def_TimeStoppedMachineUnblockOscAxle;
    TDbVarInf  tInf_TresholdLowSpeedUnblockOsciAxle;
    TInt32 ai32Rng_TresholdLowSpeedUnblockOsciAxle[2];
    TInt32 i32Def_TresholdLowSpeedUnblockOsciAxle;
    TDbVarInf  tInf_GapMaxPvgCrawlerAdvancement;
    TUint16 au16Rng_GapMaxPvgCrawlerAdvancement[2];
    TUint16 u16Def_GapMaxPvgCrawlerAdvancement;
    TDbVarInf  tInf_GapMaxInvertedPvgCrawler;
    TUint16 au16Rng_GapMaxInvertedPvgCrawler[2];
    TUint16 u16Def_GapMaxInvertedPvgCrawler;
    TDbVarInf  tInf_TresholdAnaToBoForInputs48Xs;
    TUint16 au16Rng_TresholdAnaToBoForInputs48Xs[2];
    TUint16 u16Def_TresholdAnaToBoForInputs48Xs;
    TDbVarInf  tInf_InMinJoystickAdvance;
    TUint16 au16Rng_InMinJoystickAdvance[2];
    TUint16 u16Def_InMinJoystickAdvance;
    TDbVarInf  tInf_InMaxJoystickAdvance;
    TUint16 au16Rng_InMaxJoystickAdvance[2];
    TUint16 u16Def_InMaxJoystickAdvance;
    TDbVarInf  tInf_SpeedMiniTresholdServiceBrake;
    TUint16 au16Rng_SpeedMiniTresholdServiceBrake[2];
    TUint16 u16Def_SpeedMiniTresholdServiceBrake;
    TDbVarInf  tInf_NbElementAverageSlopeTransAngle;
    TUint8 au8Rng_NbElementAverageSlopeTransAngle[2];
    TUint8 u8Def_NbElementAverageSlopeTransAngle;
    TDbVarInf  tInf_NbElementAverageSlopeLongAngle;
    TUint8 au8Rng_NbElementAverageSlopeLongAngle[2];
    TUint8 u8Def_NbElementAverageSlopeLongAngle;
    TDbVarInf  tInf_DeadZoneJoystickRailAdvancement;
    TUint8 au8Rng_DeadZoneJoystickRailAdvancement[2];
    TUint8 u8Def_DeadZoneJoystickRailAdvancement;
    TDbVarInf  tInf_NbElementAverageSlopeTransAngle2;
    TUint8 au8Rng_NbElementAverageSlopeTransAngle2[2];
    TUint8 u8Def_NbElementAverageSlopeTransAngle2;
    TDbVarInf  tInf_NbElementAverageSlopeLongAngle2;
    TUint8 au8Rng_NbElementAverageSlopeLongAngle2[2];
    TUint8 u8Def_NbElementAverageSlopeLongAngle2;
    TDbVarInf  tInf_NvParametersC0_1;
    TBoolean aboRng_NvParametersC0_1[2];
    TBoolean boDef_NvParametersC0_1;
    TDbVarInf  tInf_NvParametersC0_2;
    TBoolean aboRng_NvParametersC0_2[2];
    TBoolean boDef_NvParametersC0_2;
    TDbVarInf  tInf_NvParametersC0_3;
    TBoolean aboRng_NvParametersC0_3[2];
    TBoolean boDef_NvParametersC0_3;
    TDbVarInf  tInf_NvParametersC0_4;
    TBoolean aboRng_NvParametersC0_4[2];
    TBoolean boDef_NvParametersC0_4;
    TDbVarInf  tInf_NvParametersC0_5;
    TBoolean aboRng_NvParametersC0_5[2];
    TBoolean boDef_NvParametersC0_5;
    TDbVarInf  tInf_NvParametersC0_6;
    TUint8 au8Rng_NvParametersC0_6[2];
    TUint8 u8Def_NvParametersC0_6;
    TDbVarInf  tInf_NvParametersC0_7;
    TUint8 au8Rng_NvParametersC0_7[2];
    TUint8 u8Def_NvParametersC0_7;
    TDbVarInf  tInf_NvParametersC0_8;
    TUint8 au8Rng_NvParametersC0_8[2];
    TUint8 u8Def_NvParametersC0_8;
    TDbVarInf  tInf_NvParametersC0_9;
    TUint8 au8Rng_NvParametersC0_9[2];
    TUint8 u8Def_NvParametersC0_9;
    TDbVarInf  tInf_NvParametersC0_10;
    TUint16 au16Rng_NvParametersC0_10[2];
    TUint16 u16Def_NvParametersC0_10;
    TDbVarInf  tInf_NvParametersC0_11;
    TUint16 au16Rng_NvParametersC0_11[2];
    TUint16 u16Def_NvParametersC0_11;
    TDbVarInf  tInf_NvParametersC0_12;
    TUint16 au16Rng_NvParametersC0_12[2];
    TUint16 u16Def_NvParametersC0_12;
    TDbVarInf  tInf_NvParametersC0_13;
    TUint16 au16Rng_NvParametersC0_13[2];
    TUint16 u16Def_NvParametersC0_13;
    TDbVarInf  tInf_NvParametersC0_14;
    TInt16 ai16Rng_NvParametersC0_14[2];
    TInt16 i16Def_NvParametersC0_14;
    TDbVarInf  tInf_NvParametersC0_15;
    TInt16 ai16Rng_NvParametersC0_15[2];
    TInt16 i16Def_NvParametersC0_15;
    TDbVarInf  tInf_NvParametersC0_16;
    TInt16 ai16Rng_NvParametersC0_16[2];
    TInt16 i16Def_NvParametersC0_16;
    TDbVarInf  tInf_NvParametersC0_17;
    TInt16 ai16Rng_NvParametersC0_17[2];
    TInt16 i16Def_NvParametersC0_17;
    TDbVarInf  tInf_ThreshotothydraulicTemperature;
    TInt16 ai16Rng_ThreshotothydraulicTemperature[2];
    TInt16 i16Def_ThreshotothydraulicTemperature;
    TDbVarInf  tInf_TimeforCoolerOn;
    TInt16 ai16Rng_TimeforCoolerOn[2];
    TInt16 i16Def_TimeforCoolerOn;
    TDbVarInf  tInf_TimeFaultPressureReducCrawler;
    TUint16 au16Rng_TimeFaultPressureReducCrawler[2];
    TUint16 u16Def_TimeFaultPressureReducCrawler;
    TDbVarInf  tInf_RailJoyRatioTwoSpeedFault;
    TInt16 ai16Rng_RailJoyRatioTwoSpeedFault[2];
    TInt16 i16Def_RailJoyRatioTwoSpeedFault;
    TDbVarInf  tInf_TimeoutSdoRequestTime;
    TUint32 au32Rng_TimeoutSdoRequestTime[2];
    TUint32 u32Def_TimeoutSdoRequestTime;
    TDbVarInf  tInf_PeriodBlinkoffWhiteLight;
    TInt16 ai16Rng_PeriodBlinkoffWhiteLight[2];
    TInt16 i16Def_PeriodBlinkoffWhiteLight;
    TDbVarInf  tInf_CptNeutralJoystickMax;
    TUint16 au16Rng_CptNeutralJoystickMax[2];
    TUint16 u16Def_CptNeutralJoystickMax;
    TDbVarInf  tInf_StopMotorMGmax;
    TUint16 au16Rng_StopMotorMGmax[2];
    TUint16 u16Def_StopMotorMGmax;
    TDbVarInf  tInf_TurretRearPosExtLowSpeedTresh;
    TInt16 ai16Rng_TurretRearPosExtLowSpeedTresh[2];
    TInt16 i16Def_TurretRearPosExtLowSpeedTresh;
    TDbVarInf  tInf_TurretRearNegExtLowSpeedTresh;
    TInt16 ai16Rng_TurretRearNegExtLowSpeedTresh[2];
    TInt16 i16Def_TurretRearNegExtLowSpeedTresh;
    TDbVarInf  tInf_NbOfFileParameters;
    TUint16 au16Rng_NbOfFileParameters[2];
    TUint16 u16Def_NbOfFileParameters;
    TDbVarInf  tInf_VersionMajor;
    TUint8 au8Rng_VersionMajor[2];
    TUint8 u8Def_VersionMajor;
    TDbVarInf  tInf_VersionMinior;
    TUint8 au8Rng_VersionMinior[2];
    TUint8 u8Def_VersionMinior;
    TDbVarInf  tInf_VersionPatch;
    TUint8 au8Rng_VersionPatch[2];
    TUint8 u8Def_VersionPatch;
    TDbVarInf  tInf_VersionCustom;
    TUint8 au8Rng_VersionCustom[2];
    TUint8 u8Def_VersionCustom;
    TDbVarInf  tInf_OutCharPosElectricPumpPressure;
    TInt16 ai16Rng_OutCharPosElectricPumpPressure[2];
    TInt16 i16Def_OutCharPosElectricPumpPressure;
    TDbVarInf  tInf_OutCharNeuElectricPumpPressure;
    TInt16 ai16Rng_OutCharNeuElectricPumpPressure[2];
    TInt16 i16Def_OutCharNeuElectricPumpPressure;
    TDbVarInf  tInf_OutCharNegElectricPumpPressure;
    TInt16 ai16Rng_OutCharNegElectricPumpPressure[2];
    TInt16 i16Def_OutCharNegElectricPumpPressure;
    TDbVarInf  tInf_ThresBrakeAccuPressureMin;
    TUint16 au16Rng_ThresBrakeAccuPressureMin[2];
    TUint16 u16Def_ThresBrakeAccuPressureMin;
    TDbVarInf  tInf_ThresBrakeAccuPressureMax;
    TUint16 au16Rng_ThresBrakeAccuPressureMax[2];
    TUint16 u16Def_ThresBrakeAccuPressureMax;
}TDbSetNvParametersC0;

typedef struct
{
    TDbVarInf  tInf_ManipulatorLeftMaxPointLut;
    TUint8 au8Rng_ManipulatorLeftMaxPointLut[2];
    TUint8 u8Def_ManipulatorLeftMaxPointLut;
    TDbVarInf  tInf_ManipulatorLeftXValue;
    TInt16 aai16Rng_ManipulatorLeftXValue[2][2];
    TInt16 ai16Def_ManipulatorLeftXValue[2];
    TDbVarInf  tInf_ManipulatorLeftYValue;
    TInt16 aai16Rng_ManipulatorLeftYValue[2][2];
    TInt16 ai16Def_ManipulatorLeftYValue[2];
    TDbVarInf  tInf_ManipulatorRightMaxPointLut;
    TUint8 au8Rng_ManipulatorRightMaxPointLut[2];
    TUint8 u8Def_ManipulatorRightMaxPointLut;
    TDbVarInf  tInf_ManipulatorRightXValue;
    TInt16 aai16Rng_ManipulatorRightXValue[2][2];
    TInt16 ai16Def_ManipulatorRightXValue[2];
    TDbVarInf  tInf_ManipulatorRightYValue;
    TInt16 aai16Rng_ManipulatorRightYValue[2][2];
    TInt16 ai16Def_ManipulatorRightYValue[2];
    TDbVarInf  tInf_LeftTrackPvgMaxPointLut;
    TUint8 au8Rng_LeftTrackPvgMaxPointLut[2];
    TUint8 u8Def_LeftTrackPvgMaxPointLut;
    TDbVarInf  tInf_LeftTrackPvgRampRatio;
    TUint16 aau16Rng_LeftTrackPvgRampRatio[2][2];
    TUint16 au16Def_LeftTrackPvgRampRatio[2];
    TDbVarInf  tInf_RangeValueOfLeftTrackPvgRamp;
    TInt16 aai16Rng_RangeValueOfLeftTrackPvgRamp[3][2];
    TInt16 ai16Def_RangeValueOfLeftTrackPvgRamp[3];
    TDbVarInf  tInf_RightTrackPvgRampRatio;
    TUint16 aau16Rng_RightTrackPvgRampRatio[2][2];
    TUint16 au16Def_RightTrackPvgRampRatio[2];
    TDbVarInf  tInf_RangeValueOfRightTrackPvgRamp;
    TInt16 aai16Rng_RangeValueOfRightTrackPvgRamp[3][2];
    TInt16 ai16Def_RangeValueOfRightTrackPvgRamp[3];
    TDbVarInf  tInf_ForwardPumpTransmisMaxPointLut;
    TUint8 au8Rng_ForwardPumpTransmisMaxPointLut[2];
    TUint8 u8Def_ForwardPumpTransmisMaxPointLut;
    TDbVarInf  tInf_ForwardPumpTransmissionXValue;
    TInt16 aai16Rng_ForwardPumpTransmissionXValue[2][2];
    TInt16 ai16Def_ForwardPumpTransmissionXValue[2];
    TDbVarInf  tInf_ForwardPumpTransmissionYValue;
    TInt16 aai16Rng_ForwardPumpTransmissionYValue[2][2];
    TInt16 ai16Def_ForwardPumpTransmissionYValue[2];
    TDbVarInf  tInf_BackwardPumpTransmisMaxPointLut;
    TUint8 au8Rng_BackwardPumpTransmisMaxPointLut[2];
    TUint8 u8Def_BackwardPumpTransmisMaxPointLut;
    TDbVarInf  tInf_BackwardPumpTransmissionXValue;
    TInt16 aai16Rng_BackwardPumpTransmissionXValue[2][2];
    TInt16 ai16Def_BackwardPumpTransmissionXValue[2];
    TDbVarInf  tInf_BackwardPumpTransmissionYValue;
    TInt16 aai16Rng_BackwardPumpTransmissionYValue[2][2];
    TInt16 ai16Def_BackwardPumpTransmissionYValue[2];
    TDbVarInf  tInf_ForwardPumpTransmissionRampRatio;
    TUint16 aau16Rng_ForwardPumpTransmissionRampRatio[2][2];
    TUint16 au16Def_ForwardPumpTransmissionRampRatio[2];
    TDbVarInf  tInf_RangeValueForwardPumpTransRamp;
    TInt16 aai16Rng_RangeValueForwardPumpTransRamp[3][2];
    TInt16 ai16Def_RangeValueForwardPumpTransRamp[3];
    TDbVarInf  tInf_BackwardPumpTransmissionRampRtio;
    TUint16 aau16Rng_BackwardPumpTransmissionRampRtio[2][2];
    TUint16 au16Def_BackwardPumpTransmissionRampRtio[2];
    TDbVarInf  tInf_RangeValueBackwardPumpTransRamp;
    TInt16 aai16Rng_RangeValueBackwardPumpTransRamp[3][2];
    TInt16 ai16Def_RangeValueBackwardPumpTransRamp[3];
    TDbVarInf  tInf_EncodeurTurretOffset;
    TUint32 au32Rng_EncodeurTurretOffset[2];
    TUint32 u32Def_EncodeurTurretOffset;
    TDbVarInf  tInf_SlopeLongOffset;
    TInt16 ai16Rng_SlopeLongOffset[2];
    TInt16 i16Def_SlopeLongOffset;
    TDbVarInf  tInf_SlopeTransOffset;
    TInt16 ai16Rng_SlopeTransOffset[2];
    TInt16 i16Def_SlopeTransOffset;
    TDbVarInf  tInf_SlopeLongOffset2;
    TInt16 ai16Rng_SlopeLongOffset2[2];
    TInt16 i16Def_SlopeLongOffset2;
    TDbVarInf  tInf_SlopeTransOffset2;
    TInt16 ai16Rng_SlopeTransOffset2[2];
    TInt16 i16Def_SlopeTransOffset2;
    TDbVarInf  tInf_EncodeurTurretOffset2;
    TUint32 au32Rng_EncodeurTurretOffset2[2];
    TUint32 u32Def_EncodeurTurretOffset2;
    TDbVarInf  tInf_EncodeurTurretMsb1;
    TUint16 au16Rng_EncodeurTurretMsb1[2];
    TUint16 u16Def_EncodeurTurretMsb1;
    TDbVarInf  tInf_EncodeurTurretMsb2;
    TUint16 au16Rng_EncodeurTurretMsb2[2];
    TUint16 u16Def_EncodeurTurretMsb2;
    TDbVarInf  tInf_EncodeurTurretLsb1;
    TUint16 au16Rng_EncodeurTurretLsb1[2];
    TUint16 u16Def_EncodeurTurretLsb1;
    TDbVarInf  tInf_EncodeurTurretLsb2;
    TUint16 au16Rng_EncodeurTurretLsb2[2];
    TUint16 u16Def_EncodeurTurretLsb2;
}TDbSetNvCalibrationC0;

typedef struct
{
    TDbVarInf  tInf_UpInclinaisonBasketButton;
    TBoolean aboRng_UpInclinaisonBasketButton[2];
    TBoolean boDef_UpInclinaisonBasketButton;
    TDbVarInf  tInf_UpInclinaisonBasketButtonValue;
    TUint16 au16Rng_UpInclinaisonBasketButtonValue[2];
    TUint16 u16Def_UpInclinaisonBasketButtonValue;
    TDbVarInf  tInf_DownInclinaisonBasketButton;
    TBoolean aboRng_DownInclinaisonBasketButton[2];
    TBoolean boDef_DownInclinaisonBasketButton;
    TDbVarInf  tInf_DownInclinaisonBasketButtonValue;
    TUint16 au16Rng_DownInclinaisonBasketButtonValue[2];
    TUint16 u16Def_DownInclinaisonBasketButtonValue;
    TDbVarInf  tInf_UpPendularButton;
    TBoolean aboRng_UpPendularButton[2];
    TBoolean boDef_UpPendularButton;
    TDbVarInf  tInf_UpPendularButtonValue;
    TUint16 au16Rng_UpPendularButtonValue[2];
    TUint16 u16Def_UpPendularButtonValue;
    TDbVarInf  tInf_DownPendularButton;
    TBoolean aboRng_DownPendularButton[2];
    TBoolean boDef_DownPendularButton;
    TDbVarInf  tInf_DownPendularButtonValue;
    TUint16 au16Rng_DownPendularButtonValue[2];
    TUint16 u16Def_DownPendularButtonValue;
    TDbVarInf  tInf_RotationCtClockwiseBasketButton;
    TBoolean aboRng_RotationCtClockwiseBasketButton[2];
    TBoolean boDef_RotationCtClockwiseBasketButton;
    TDbVarInf  tInf_RotCtClockwiseBasketButtonVal;
    TUint16 au16Rng_RotCtClockwiseBasketButtonVal[2];
    TUint16 u16Def_RotCtClockwiseBasketButtonVal;
    TDbVarInf  tInf_RotationClockwiseBasketButton;
    TBoolean aboRng_RotationClockwiseBasketButton[2];
    TBoolean boDef_RotationClockwiseBasketButton;
    TDbVarInf  tInf_RotationClockwiseBasketButtonVal;
    TUint16 au16Rng_RotationClockwiseBasketButtonVal[2];
    TUint16 u16Def_RotationClockwiseBasketButtonVal;
    TDbVarInf  tInf_Overload1;
    TBoolean aboRng_Overload1[2];
    TBoolean boDef_Overload1;
    TDbVarInf  tInf_Overload1Value;
    TUint16 au16Rng_Overload1Value[2];
    TUint16 u16Def_Overload1Value;
    TDbVarInf  tInf_Overload2;
    TBoolean aboRng_Overload2[2];
    TBoolean boDef_Overload2;
    TDbVarInf  tInf_Overload2Value;
    TUint16 au16Rng_Overload2Value[2];
    TUint16 u16Def_Overload2Value;
    TDbVarInf  tInf_NacelleBasketRightSideSensor1;
    TBoolean aboRng_NacelleBasketRightSideSensor1[2];
    TBoolean boDef_NacelleBasketRightSideSensor1;
    TDbVarInf  tInf_NacelleBasketRightSideSensor1Val;
    TUint16 au16Rng_NacelleBasketRightSideSensor1Val[2];
    TUint16 u16Def_NacelleBasketRightSideSensor1Val;
    TDbVarInf  tInf_NacelleBasketRightSideSensor2;
    TBoolean aboRng_NacelleBasketRightSideSensor2[2];
    TBoolean boDef_NacelleBasketRightSideSensor2;
    TDbVarInf  tInf_NacelleBasketRightSideSensor2Val;
    TUint16 au16Rng_NacelleBasketRightSideSensor2Val[2];
    TUint16 u16Def_NacelleBasketRightSideSensor2Val;
    TDbVarInf  tInf_NacelleBasketLeftSideSensor1;
    TBoolean aboRng_NacelleBasketLeftSideSensor1[2];
    TBoolean boDef_NacelleBasketLeftSideSensor1;
    TDbVarInf  tInf_NacelleBasketLeftSideSensor1Val;
    TUint16 au16Rng_NacelleBasketLeftSideSensor1Val[2];
    TUint16 u16Def_NacelleBasketLeftSideSensor1Val;
    TDbVarInf  tInf_NacelleBasketLeftSideSensor2;
    TBoolean aboRng_NacelleBasketLeftSideSensor2[2];
    TBoolean boDef_NacelleBasketLeftSideSensor2;
    TDbVarInf  tInf_NacelleBasketLeftSideSensor2Val;
    TUint16 au16Rng_NacelleBasketLeftSideSensor2Val[2];
    TUint16 u16Def_NacelleBasketLeftSideSensor2Val;
    TDbVarInf  tInf_LowSectorPendularSensor;
    TBoolean aboRng_LowSectorPendularSensor[2];
    TBoolean boDef_LowSectorPendularSensor;
    TDbVarInf  tInf_LowSectorPendularSensorVal;
    TUint16 au16Rng_LowSectorPendularSensorVal[2];
    TUint16 u16Def_LowSectorPendularSensorVal;
    TDbVarInf  tInf_HighSectorPlateSensor;
    TBoolean aboRng_HighSectorPlateSensor[2];
    TBoolean boDef_HighSectorPlateSensor;
    TDbVarInf  tInf_HighSectorPlateSensorVal;
    TUint16 au16Rng_HighSectorPlateSensorVal[2];
    TUint16 u16Def_HighSectorPlateSensorVal;
    TDbVarInf  tInf_FoldedLadderSensor;
    TBoolean aboRng_FoldedLadderSensor[2];
    TBoolean boDef_FoldedLadderSensor;
    TDbVarInf  tInf_FoldedLadderSensorVal;
    TUint16 au16Rng_FoldedLadderSensorVal[2];
    TUint16 u16Def_FoldedLadderSensorVal;
    TDbVarInf  tInf_SafetyManSystem;
    TUint16 au16Rng_SafetyManSystem[2];
    TUint16 u16Def_SafetyManSystem;
    TDbVarInf  tInf_DeltaArmAxisJoystick;
    TUint16 au16Rng_DeltaArmAxisJoystick[2];
    TUint16 u16Def_DeltaArmAxisJoystick;
    TDbVarInf  tInf_ArrowArmAxisJoystick;
    TUint16 au16Rng_ArrowArmAxisJoystick[2];
    TUint16 u16Def_ArrowArmAxisJoystick;
    TDbVarInf  tInf_TelescopeArmAxisJoysitck;
    TUint16 au16Rng_TelescopeArmAxisJoysitck[2];
    TUint16 u16Def_TelescopeArmAxisJoysitck;
    TDbVarInf  tInf_RotationTurretAxisJoystick;
    TUint16 au16Rng_RotationTurretAxisJoystick[2];
    TUint16 u16Def_RotationTurretAxisJoystick;
    TDbVarInf  tInf_AdvanceAxisJoystick;
    TUint16 au16Rng_AdvanceAxisJoystick[2];
    TUint16 u16Def_AdvanceAxisJoystick;
    TDbVarInf  tInf_RearmementSafetyManSystem;
    TBoolean aboRng_RearmementSafetyManSystem[2];
    TBoolean boDef_RearmementSafetyManSystem;
    TDbVarInf  tInf_RearmementSafetyManSystemVal;
    TUint16 au16Rng_RearmementSafetyManSystemVal[2];
    TUint16 u16Def_RearmementSafetyManSystemVal;
    TDbVarInf  tInf_AbutementNacelleTrackSide;
    TBoolean aboRng_AbutementNacelleTrackSide[2];
    TBoolean boDef_AbutementNacelleTrackSide;
    TDbVarInf  tInf_AbutementNacelleTrackSideVal;
    TUint16 au16Rng_AbutementNacelleTrackSideVal[2];
    TUint16 u16Def_AbutementNacelleTrackSideVal;
    TDbVarInf  tInf_AbutementNacelleCenteredSide;
    TBoolean aboRng_AbutementNacelleCenteredSide[2];
    TBoolean boDef_AbutementNacelleCenteredSide;
    TDbVarInf  tInf_AbutementNacelleCenteredSideVal;
    TUint16 au16Rng_AbutementNacelleCenteredSideVal[2];
    TUint16 u16Def_AbutementNacelleCenteredSideVal;
    TDbVarInf  tInf_DeltaArmJystckCenteredTelescope;
    TBoolean aboRng_DeltaArmJystckCenteredTelescope[2];
    TBoolean boDef_DeltaArmJystckCenteredTelescope;
    TDbVarInf  tInf_ArrowJoystickCenteredTurret;
    TBoolean aboRng_ArrowJoystickCenteredTurret[2];
    TBoolean boDef_ArrowJoystickCenteredTurret;
    TDbVarInf  tInf_CenteredAdvanceJoystick;
    TBoolean aboRng_CenteredAdvanceJoystick[2];
    TBoolean boDef_CenteredAdvanceJoystick;
    TDbVarInf  tInf_DeadManPedal;
    TBoolean aboRng_DeadManPedal[2];
    TBoolean boDef_DeadManPedal;
    TDbVarInf  tInf_PressenceInNacelleSensor1;
    TBoolean aboRng_PressenceInNacelleSensor1[2];
    TBoolean boDef_PressenceInNacelleSensor1;
    TDbVarInf  tInf_PressenceInNacelleSensor2;
    TBoolean aboRng_PressenceInNacelleSensor2[2];
    TBoolean boDef_PressenceInNacelleSensor2;
    TDbVarInf  tInf_Gachette;
    TBoolean aboRng_Gachette[2];
    TBoolean boDef_Gachette;
    TDbVarInf  tInf_Klaxon;
    TBoolean aboRng_Klaxon[2];
    TBoolean boDef_Klaxon;
    TDbVarInf  tInf_StopMotorButton;
    TBoolean aboRng_StopMotorButton[2];
    TBoolean boDef_StopMotorButton;
    TDbVarInf  tInf_AuthorizationWorkKey;
    TBoolean aboRng_AuthorizationWorkKey[2];
    TBoolean boDef_AuthorizationWorkKey;
    TDbVarInf  tInf_EtallonnageJoystickButton;
    TBoolean aboRng_EtallonnageJoystickButton[2];
    TBoolean boDef_EtallonnageJoystickButton;
    TDbVarInf  tInf_ClosePortillonSensor;
    TBoolean aboRng_ClosePortillonSensor[2];
    TBoolean boDef_ClosePortillonSensor;
    TDbVarInf  tInf_Hearbeat48Xs;
    TUint8 au8Rng_Hearbeat48Xs[2];
    TUint8 u8Def_Hearbeat48Xs;
    TDbVarInf  tInf_BatterieVoltage48Xs;
    TUint16 au16Rng_BatterieVoltage48Xs[2];
    TUint16 u16Def_BatterieVoltage48Xs;
}TDbSetRam48XsInputsC0;

typedef struct
{
    TDbVarInf  tInf_WhiteLightsCommand;
    TBoolean aboRng_WhiteLightsCommand[2];
    TBoolean boDef_WhiteLightsCommand;
    TDbVarInf  tInf_WhiteLightsValue;
    EDigStatus aeRng_WhiteLightsValue[2];
    EDigStatus eDef_WhiteLightsValue;
    TDbVarInf  tInf_RedLightsCommand;
    TBoolean aboRng_RedLightsCommand[2];
    TBoolean boDef_RedLightsCommand;
    TDbVarInf  tInf_RedLightsValue;
    EDigStatus aeRng_RedLightsValue[2];
    EDigStatus eDef_RedLightsValue;
    TDbVarInf  tInf_WorkLightCommand;
    TBoolean aboRng_WorkLightCommand[2];
    TBoolean boDef_WorkLightCommand;
    TDbVarInf  tInf_WorkLightValue;
    EDigStatus aeRng_WorkLightValue[2];
    EDigStatus eDef_WorkLightValue;
    TDbVarInf  tInf_BuzzerCommand;
    TBoolean aboRng_BuzzerCommand[2];
    TBoolean boDef_BuzzerCommand;
    TDbVarInf  tInf_BuzzerValue;
    EDigStatus aeRng_BuzzerValue[2];
    EDigStatus eDef_BuzzerValue;
    TDbVarInf  tInf_MotorDefaultLightErrSta;
    EErrorStatus48XS aeRng_MotorDefaultLightErrSta[2];
    EErrorStatus48XS eDef_MotorDefaultLightErrSta;
    TDbVarInf  tInf_OverloadLightErrSta;
    EErrorStatus48XS aeRng_OverloadLightErrSta[2];
    EErrorStatus48XS eDef_OverloadLightErrSta;
    TDbVarInf  tInf_BuzzerErrSta;
    EErrorStatus48XS aeRng_BuzzerErrSta[2];
    EErrorStatus48XS eDef_BuzzerErrSta;
    TDbVarInf  tInf_GasOilLightErrSta;
    EErrorStatus48XS aeRng_GasOilLightErrSta[2];
    EErrorStatus48XS eDef_GasOilLightErrSta;
    TDbVarInf  tInf_DeversDefaultLightErrSta;
    EErrorStatus48XS aeRng_DeversDefaultLightErrSta[2];
    EErrorStatus48XS eDef_DeversDefaultLightErrSta;
    TDbVarInf  tInf_RedLightARDErrSta;
    EErrorStatus48XS aeRng_RedLightARDErrSta[2];
    EErrorStatus48XS eDef_RedLightARDErrSta;
    TDbVarInf  tInf_WhiteLightARDErrSta;
    EErrorStatus48XS aeRng_WhiteLightARDErrSta[2];
    EErrorStatus48XS eDef_WhiteLightARDErrSta;
    TDbVarInf  tInf_WarmingLightErrSta;
    EErrorStatus48XS aeRng_WarmingLightErrSta[2];
    EErrorStatus48XS eDef_WarmingLightErrSta;
    TDbVarInf  tInf_RedLightARGErrSta;
    EErrorStatus48XS aeRng_RedLightARGErrSta[2];
    EErrorStatus48XS eDef_RedLightARGErrSta;
    TDbVarInf  tInf_WhiteLightARGErrSta;
    EErrorStatus48XS aeRng_WhiteLightARGErrSta[2];
    EErrorStatus48XS eDef_WhiteLightARGErrSta;
}TDbSetRam48XsOutputsC0;

typedef struct
{
    TDbVarInf  tInf_StateRadioControl;
    EStateHeartBeat aeRng_StateRadioControl[2];
    EStateHeartBeat eDef_StateRadioControl;
    TDbVarInf  tInf_LeftManipulator;
    TUint8 au8Rng_LeftManipulator[2];
    TUint8 u8Def_LeftManipulator;
    TDbVarInf  tInf_RightManipulator;
    TUint8 au8Rng_RightManipulator[2];
    TUint8 u8Def_RightManipulator;
    TDbVarInf  tInf_LeftManipulatorPosition;
    EManipulatorPosition aeRng_LeftManipulatorPosition[2];
    EManipulatorPosition eDef_LeftManipulatorPosition;
    TDbVarInf  tInf_RightManipulatorPosition;
    EManipulatorPosition aeRng_RightManipulatorPosition[2];
    EManipulatorPosition eDef_RightManipulatorPosition;
    TDbVarInf  tInf_UpAxleArFixe;
    TBoolean aboRng_UpAxleArFixe[2];
    TBoolean boDef_UpAxleArFixe;
    TDbVarInf  tInf_DownAxleArFixe;
    TBoolean aboRng_DownAxleArFixe[2];
    TBoolean boDef_DownAxleArFixe;
    TDbVarInf  tInf_UpAxleAvOscillant;
    TBoolean aboRng_UpAxleAvOscillant[2];
    TBoolean boDef_UpAxleAvOscillant;
    TDbVarInf  tInf_DownAxleAvOscillant;
    TBoolean aboRng_DownAxleAvOscillant[2];
    TBoolean boDef_DownAxleAvOscillant;
    TDbVarInf  tInf_RotationFrameCtClkwise;
    TBoolean aboRng_RotationFrameCtClkwise[2];
    TBoolean boDef_RotationFrameCtClkwise;
    TDbVarInf  tInf_RotationFrameClkwise;
    TBoolean aboRng_RotationFrameClkwise[2];
    TBoolean boDef_RotationFrameClkwise;
    TDbVarInf  tInf_SelectorRotTurret;
    TBoolean aboRng_SelectorRotTurret[2];
    TBoolean boDef_SelectorRotTurret;
    TDbVarInf  tInf_SelectorPendular;
    TBoolean aboRng_SelectorPendular[2];
    TBoolean boDef_SelectorPendular;
    TDbVarInf  tInf_RadioCommandConnect;
    TBoolean aboRng_RadioCommandConnect[2];
    TBoolean boDef_RadioCommandConnect;
    TDbVarInf  tInf_UpPendularOrRotCtClkTurret;
    TBoolean aboRng_UpPendularOrRotCtClkTurret[2];
    TBoolean boDef_UpPendularOrRotCtClkTurret;
    TDbVarInf  tInf_DownPendularOrRotClkTurret;
    TBoolean aboRng_DownPendularOrRotClkTurret[2];
    TBoolean boDef_DownPendularOrRotClkTurret;
    TDbVarInf  tInf_StartRadioCommand;
    TBoolean aboRng_StartRadioCommand[2];
    TBoolean boDef_StartRadioCommand;
    TDbVarInf  tInf_StopRadioCommand;
    TBoolean aboRng_StopRadioCommand[2];
    TBoolean boDef_StopRadioCommand;
    TDbVarInf  tInf_ForcingAdvanceTrack;
    TBoolean aboRng_ForcingAdvanceTrack[2];
    TBoolean boDef_ForcingAdvanceTrack;
    TDbVarInf  tInf_KlaxonCommand;
    TBoolean aboRng_KlaxonCommand[2];
    TBoolean boDef_KlaxonCommand;
}TDbSetRamEcuInputRadioControl;

typedef struct
{
    TDbVarInf  tInf_EncodeurTurret1AngleRaw;
    TUint32 au32Rng_EncodeurTurret1AngleRaw[2];
    TUint32 u32Def_EncodeurTurret1AngleRaw;
    TDbVarInf  tInf_EncodeurTurret1Angle;
    TInt16 ai16Rng_EncodeurTurret1Angle[2];
    TInt16 i16Def_EncodeurTurret1Angle;
    TDbVarInf  tInf_EncodeurTurret2AngleRaw;
    TUint32 au32Rng_EncodeurTurret2AngleRaw[2];
    TUint32 u32Def_EncodeurTurret2AngleRaw;
    TDbVarInf  tInf_EncodeurTurret2Angle;
    TInt16 ai16Rng_EncodeurTurret2Angle[2];
    TInt16 i16Def_EncodeurTurret2Angle;
    TDbVarInf  tInf_SlopeLongAngleSensor1;
    TInt16 ai16Rng_SlopeLongAngleSensor1[2];
    TInt16 i16Def_SlopeLongAngleSensor1;
    TDbVarInf  tInf_SlopeTransAngleSensor1;
    TInt16 ai16Rng_SlopeTransAngleSensor1[2];
    TInt16 i16Def_SlopeTransAngleSensor1;
    TDbVarInf  tInf_SlopeLongAngleValue;
    TInt16 ai16Rng_SlopeLongAngleValue[2];
    TInt16 i16Def_SlopeLongAngleValue;
    TDbVarInf  tInf_SlopeTransAngleValue;
    TInt16 ai16Rng_SlopeTransAngleValue[2];
    TInt16 i16Def_SlopeTransAngleValue;
    TDbVarInf  tInf_StateHeartBeatDeversSensor;
    TUint8 au8Rng_StateHeartBeatDeversSensor[2];
    TUint8 u8Def_StateHeartBeatDeversSensor;
    TDbVarInf  tInf_StateHeartBeatEncodeurTurret1;
    TUint8 au8Rng_StateHeartBeatEncodeurTurret1[2];
    TUint8 u8Def_StateHeartBeatEncodeurTurret1;
    TDbVarInf  tInf_SelectedSlopeAngle;
    TUint16 au16Rng_SelectedSlopeAngle[2];
    TUint16 u16Def_SelectedSlopeAngle;
    TDbVarInf  tInf_EncodeurMastMeasureRaw;
    TUint32 au32Rng_EncodeurMastMeasureRaw[2];
    TUint32 u32Def_EncodeurMastMeasureRaw;
    TDbVarInf  tInf_EncodeurMastMeasureCentimeter;
    TUint16 au16Rng_EncodeurMastMeasureCentimeter[2];
    TUint16 u16Def_EncodeurMastMeasureCentimeter;
    TDbVarInf  tInf_SlopeLongAngleSensor2;
    TInt16 ai16Rng_SlopeLongAngleSensor2[2];
    TInt16 i16Def_SlopeLongAngleSensor2;
    TDbVarInf  tInf_SlopeTransAngleSensor2;
    TInt16 ai16Rng_SlopeTransAngleSensor2[2];
    TInt16 i16Def_SlopeTransAngleSensor2;
    TDbVarInf  tInf_SlopeAlarm1;
    TUint8 au8Rng_SlopeAlarm1[2];
    TUint8 u8Def_SlopeAlarm1;
    TDbVarInf  tInf_SlopeAlarm2;
    TUint8 au8Rng_SlopeAlarm2[2];
    TUint8 u8Def_SlopeAlarm2;
    TDbVarInf  tInf_SlopeLongAngleValue2;
    TInt16 ai16Rng_SlopeLongAngleValue2[2];
    TInt16 i16Def_SlopeLongAngleValue2;
    TDbVarInf  tInf_SlopeTransAngleValue2;
    TInt16 ai16Rng_SlopeTransAngleValue2[2];
    TInt16 i16Def_SlopeTransAngleValue2;
    TDbVarInf  tInf_ErrorCodeEncodeurTurret1;
    TUint16 au16Rng_ErrorCodeEncodeurTurret1[2];
    TUint16 u16Def_ErrorCodeEncodeurTurret1;
    TDbVarInf  tInf_ErrorRegisterEncodeurTurret1;
    TUint16 au16Rng_ErrorRegisterEncodeurTurret1[2];
    TUint16 u16Def_ErrorRegisterEncodeurTurret1;
    TDbVarInf  tInf_ErrorCodeEncodeurTurret2;
    TUint16 au16Rng_ErrorCodeEncodeurTurret2[2];
    TUint16 u16Def_ErrorCodeEncodeurTurret2;
    TDbVarInf  tInf_ErrorRegisterEncodeurTurret2;
    TUint16 au16Rng_ErrorRegisterEncodeurTurret2[2];
    TUint16 u16Def_ErrorRegisterEncodeurTurret2;
    TDbVarInf  tInf_ErrorCodeMastMeasure;
    TUint16 au16Rng_ErrorCodeMastMeasure[2];
    TUint16 u16Def_ErrorCodeMastMeasure;
    TDbVarInf  tInf_ErrorRegisterMastMeasure;
    TUint16 au16Rng_ErrorRegisterMastMeasure[2];
    TUint16 u16Def_ErrorRegisterMastMeasure;
    TDbVarInf  tInf_StateHeartBeatDeversSensor2;
    TUint8 au8Rng_StateHeartBeatDeversSensor2[2];
    TUint8 u8Def_StateHeartBeatDeversSensor2;
    TDbVarInf  tInf_TimeoutSdoReqDetectedEncdTurret1;
    TBoolean aboRng_TimeoutSdoReqDetectedEncdTurret1[2];
    TBoolean boDef_TimeoutSdoReqDetectedEncdTurret1;
    TDbVarInf  tInf_TimeoutSdoReqDetectedEncdTurret2;
    TBoolean aboRng_TimeoutSdoReqDetectedEncdTurret2[2];
    TBoolean boDef_TimeoutSdoReqDetectedEncdTurret2;
    TDbVarInf  tInf_EncodeurTurretOffset;
    TUint32 au32Rng_EncodeurTurretOffset[2];
    TUint32 u32Def_EncodeurTurretOffset;
    TDbVarInf  tInf_EncodeurTurretOffset2;
    TUint32 au32Rng_EncodeurTurretOffset2[2];
    TUint32 u32Def_EncodeurTurretOffset2;
}TDbSetRamCanSensorC0;

typedef struct
{
    TDbVarInf  tInf_LoginStatus;
    TBoolean aboRng_LoginStatus[2];
    TBoolean boDef_LoginStatus;
    TDbVarInf  tInf_AllowMovementNacelle;
    TBoolean aboRng_AllowMovementNacelle[2];
    TBoolean boDef_AllowMovementNacelle;
    TDbVarInf  tInf_gBreak_Parking_On_Off;
    TBoolean aboRng_gBreak_Parking_On_Off[2];
    TBoolean boDef_gBreak_Parking_On_Off;
    TDbVarInf  tInf_gBreak_Faillure_On_Off;
    TBoolean aboRng_gBreak_Faillure_On_Off[2];
    TBoolean boDef_gBreak_Faillure_On_Off;
    TDbVarInf  tInf_gTurretInCenter;
    TBoolean aboRng_gTurretInCenter[2];
    TBoolean boDef_gTurretInCenter;
    TDbVarInf  tInf_gTurretSectorInCenter;
    TBoolean aboRng_gTurretSectorInCenter[2];
    TBoolean boDef_gTurretSectorInCenter;
    TDbVarInf  tInf_gVehiculeTrainMode;
    TBoolean aboRng_gVehiculeTrainMode[2];
    TBoolean boDef_gVehiculeTrainMode;
    TDbVarInf  tInf_gIncoherenceLateralStopAndKey;
    TBoolean aboRng_gIncoherenceLateralStopAndKey[2];
    TBoolean boDef_gIncoherenceLateralStopAndKey;
    TDbVarInf  tInf_gWorkMode;
    TBoolean aboRng_gWorkMode[2];
    TBoolean boDef_gWorkMode;
    TDbVarInf  tInf_gSafetyElectricPump;
    TBoolean aboRng_gSafetyElectricPump[2];
    TBoolean boDef_gSafetyElectricPump;
    TDbVarInf  tInf_gDownhill150mm;
    TBoolean aboRng_gDownhill150mm[2];
    TBoolean boDef_gDownhill150mm;
    TDbVarInf  tInf_gTrainModeAllow;
    TBoolean aboRng_gTrainModeAllow[2];
    TBoolean boDef_gTrainModeAllow;
    TDbVarInf  tInf_gBrakeTestService;
    TBoolean aboRng_gBrakeTestService[2];
    TBoolean boDef_gBrakeTestService;
    TDbVarInf  tInf_gBrakePressureFault;
    TBoolean aboRng_gBrakePressureFault[2];
    TBoolean boDef_gBrakePressureFault;
    TDbVarInf  tInf_gActivateMeasuringMast;
    TBoolean aboRng_gActivateMeasuringMast[2];
    TBoolean boDef_gActivateMeasuringMast;
    TDbVarInf  tInf_gAutoMovementDirectionLight;
    TBoolean aboRng_gAutoMovementDirectionLight[2];
    TBoolean boDef_gAutoMovementDirectionLight;
    TDbVarInf  tInf_gBackRailwayAxleLowPosition;
    TBoolean aboRng_gBackRailwayAxleLowPosition[2];
    TBoolean boDef_gBackRailwayAxleLowPosition;
    TDbVarInf  tInf_gFrontRailwayAxleLowPosition;
    TBoolean aboRng_gFrontRailwayAxleLowPosition[2];
    TBoolean boDef_gFrontRailwayAxleLowPosition;
    TDbVarInf  tInf_gBackRailwayAxleServiceBrake;
    TBoolean aboRng_gBackRailwayAxleServiceBrake[2];
    TBoolean boDef_gBackRailwayAxleServiceBrake;
    TDbVarInf  tInf_gFrontRailwayAxleServiceBrake;
    TBoolean aboRng_gFrontRailwayAxleServiceBrake[2];
    TBoolean boDef_gFrontRailwayAxleServiceBrake;
    TDbVarInf  tInf_gBackRailwayAxleParkBrake;
    TBoolean aboRng_gBackRailwayAxleParkBrake[2];
    TBoolean boDef_gBackRailwayAxleParkBrake;
    TDbVarInf  tInf_gFrontRailwayAxleParkBrake;
    TBoolean aboRng_gFrontRailwayAxleParkBrake[2];
    TBoolean boDef_gFrontRailwayAxleParkBrake;
    TDbVarInf  tInf_gStatusFrontLeftTrainBrakeTest;
    TBoolean aboRng_gStatusFrontLeftTrainBrakeTest[2];
    TBoolean boDef_gStatusFrontLeftTrainBrakeTest;
    TDbVarInf  tInf_gStatusFrontRightTrainBrakeTest;
    TBoolean aboRng_gStatusFrontRightTrainBrakeTest[2];
    TBoolean boDef_gStatusFrontRightTrainBrakeTest;
    TDbVarInf  tInf_gStatusBackLeftTrainBrakeTest;
    TBoolean aboRng_gStatusBackLeftTrainBrakeTest[2];
    TBoolean boDef_gStatusBackLeftTrainBrakeTest;
    TDbVarInf  tInf_gStatusBackRightTrainBrakeTest;
    TBoolean aboRng_gStatusBackRightTrainBrakeTest[2];
    TBoolean boDef_gStatusBackRightTrainBrakeTest;
    TDbVarInf  tInf_gAlarmAru;
    TBoolean aboRng_gAlarmAru[2];
    TBoolean boDef_gAlarmAru;
    TDbVarInf  tInf_gEngine_Use_Time;
    TUint16 au16Rng_gEngine_Use_Time[2];
    TUint16 u16Def_gEngine_Use_Time;
    TDbVarInf  tInf_gEngine_RPM;
    TUint16 au16Rng_gEngine_RPM[2];
    TUint16 u16Def_gEngine_RPM;
    TDbVarInf  tInf_gVehiculeSpeed;
    TUint16 au16Rng_gVehiculeSpeed[2];
    TUint16 u16Def_gVehiculeSpeed;
    TDbVarInf  tInf_gLateralizationStop;
    TUint8 au8Rng_gLateralizationStop[2];
    TUint8 u8Def_gLateralizationStop;
    TDbVarInf  tInf_gKeySelector;
    TUint8 au8Rng_gKeySelector[2];
    TUint8 u8Def_gKeySelector;
    TDbVarInf  tInf_gFrontSpeedRailWayAxle;
    TUint8 au8Rng_gFrontSpeedRailWayAxle[2];
    TUint8 u8Def_gFrontSpeedRailWayAxle;
    TDbVarInf  tInf_gBackSpeedRailWayAxle;
    TUint8 au8Rng_gBackSpeedRailWayAxle[2];
    TUint8 u8Def_gBackSpeedRailWayAxle;
    TDbVarInf  tInf_gButtonCalibTurretEncoder;
    TBoolean aboRng_gButtonCalibTurretEncoder[2];
    TBoolean boDef_gButtonCalibTurretEncoder;
    TDbVarInf  tInf_gOffTrackTestBrakeActivated;
    TBoolean aboRng_gOffTrackTestBrakeActivated[2];
    TBoolean boDef_gOffTrackTestBrakeActivated;
    TDbVarInf  tInf_gOffTrackRunInBrakeActivated;
    TBoolean aboRng_gOffTrackRunInBrakeActivated[2];
    TBoolean boDef_gOffTrackRunInBrakeActivated;
    TDbVarInf  tInf_gOsciServiceBrakeSelect;
    TBoolean aboRng_gOsciServiceBrakeSelect[2];
    TBoolean boDef_gOsciServiceBrakeSelect;
    TDbVarInf  tInf_gFixedServiceBrakeSelect;
    TBoolean aboRng_gFixedServiceBrakeSelect[2];
    TBoolean boDef_gFixedServiceBrakeSelect;
    TDbVarInf  tInf_gBothServiceBrakeSelect;
    TBoolean aboRng_gBothServiceBrakeSelect[2];
    TBoolean boDef_gBothServiceBrakeSelect;
    TDbVarInf  tInf_gOsciParkBrakeSelect;
    TBoolean aboRng_gOsciParkBrakeSelect[2];
    TBoolean boDef_gOsciParkBrakeSelect;
    TDbVarInf  tInf_gFixedParkBrakeSelect;
    TBoolean aboRng_gFixedParkBrakeSelect[2];
    TBoolean boDef_gFixedParkBrakeSelect;
    TDbVarInf  tInf_gBothParkBrakeSelect;
    TBoolean aboRng_gBothParkBrakeSelect[2];
    TBoolean boDef_gBothParkBrakeSelect;
    TDbVarInf  tInf_gOsciServiceRunInBrakeSelect;
    TBoolean aboRng_gOsciServiceRunInBrakeSelect[2];
    TBoolean boDef_gOsciServiceRunInBrakeSelect;
    TDbVarInf  tInf_gFixedServiceRunInBrakeSelect;
    TBoolean aboRng_gFixedServiceRunInBrakeSelect[2];
    TBoolean boDef_gFixedServiceRunInBrakeSelect;
    TDbVarInf  tInf_gBothServiceRunInBrakeSelect;
    TBoolean aboRng_gBothServiceRunInBrakeSelect[2];
    TBoolean boDef_gBothServiceRunInBrakeSelect;
    TDbVarInf  tInf_gTestBrakePageActive;
    TBoolean aboRng_gTestBrakePageActive[2];
    TBoolean boDef_gTestBrakePageActive;
    TDbVarInf  tInf_gBreakInBrakePageActive;
    TBoolean aboRng_gBreakInBrakePageActive[2];
    TBoolean boDef_gBreakInBrakePageActive;
    TDbVarInf  tInf_gRollingCode;
    TBoolean aboRng_gRollingCode[2];
    TBoolean boDef_gRollingCode;
    TDbVarInf  tInf_gBPBasketValidate;
    TBoolean aboRng_gBPBasketValidate[2];
    TBoolean boDef_gBPBasketValidate;
    TDbVarInf  tInf_gKeyFilterOverload;
    TBoolean aboRng_gKeyFilterOverload[2];
    TBoolean boDef_gKeyFilterOverload;
    TDbVarInf  tInf_gKeyNextMode;
    TBoolean aboRng_gKeyNextMode[2];
    TBoolean boDef_gKeyNextMode;
    TDbVarInf  tInf_gKeyPrevMode;
    TBoolean aboRng_gKeyPrevMode[2];
    TBoolean boDef_gKeyPrevMode;
    TDbVarInf  tInf_gKeySignalDanger;
    TBoolean aboRng_gKeySignalDanger[2];
    TBoolean boDef_gKeySignalDanger;
    TDbVarInf  tInf_gKeyFlashLightON;
    TBoolean aboRng_gKeyFlashLightON[2];
    TBoolean boDef_gKeyFlashLightON;
    TDbVarInf  tInf_gKeyCalibMastMin;
    TBoolean aboRng_gKeyCalibMastMin[2];
    TBoolean boDef_gKeyCalibMastMin;
    TDbVarInf  tInf_gKeyCalibMastMax;
    TBoolean aboRng_gKeyCalibMastMax[2];
    TBoolean boDef_gKeyCalibMastMax;
    TDbVarInf  tInf_gKeyCalibMastValid;
    TBoolean aboRng_gKeyCalibMastValid[2];
    TBoolean boDef_gKeyCalibMastValid;
    TDbVarInf  tInf_gKeyGeneratorActivate;
    TBoolean aboRng_gKeyGeneratorActivate[2];
    TBoolean boDef_gKeyGeneratorActivate;
    TDbVarInf  tInf_gRazDistanceTraveledMastMeasure;
    TBoolean aboRng_gRazDistanceTraveledMastMeasure[2];
    TBoolean boDef_gRazDistanceTraveledMastMeasure;
    TDbVarInf  tInf_gKeyWhiteLights15746;
    TBoolean aboRng_gKeyWhiteLights15746[2];
    TBoolean boDef_gKeyWhiteLights15746;
    TDbVarInf  tInf_gOsci2ndParkBrakeSelect;
    TBoolean aboRng_gOsci2ndParkBrakeSelect[2];
    TBoolean boDef_gOsci2ndParkBrakeSelect;
    TDbVarInf  tInf_gFixe2ndParkBrakeSelect;
    TBoolean aboRng_gFixe2ndParkBrakeSelect[2];
    TBoolean boDef_gFixe2ndParkBrakeSelect;
    TDbVarInf  tInf_gKeyRazController;
    TBoolean aboRng_gKeyRazController[2];
    TBoolean boDef_gKeyRazController;
}TDbSetRamEvision7C0;

typedef struct
{
    TDbVarInf  tInf_C1TurretPostSelector;
    EDiState aeRng_C1TurretPostSelector[2];
    EDiState eDef_C1TurretPostSelector;
    TDbVarInf  tInf_C1RadioPostSelector;
    EDiState aeRng_C1RadioPostSelector[2];
    EDiState eDef_C1RadioPostSelector;
    TDbVarInf  tInf_C1NacellePostSelector;
    EDiState aeRng_C1NacellePostSelector[2];
    EDiState eDef_C1NacellePostSelector;
    TDbVarInf  tInf_UpAxleOscillantCommand;
    TBoolean aboRng_UpAxleOscillantCommand[2];
    TBoolean boDef_UpAxleOscillantCommand;
    TDbVarInf  tInf_DownAxleOscillantCommand;
    TBoolean aboRng_DownAxleOscillantCommand[2];
    TBoolean boDef_DownAxleOscillantCommand;
    TDbVarInf  tInf_UpAxleFixeCommand;
    TBoolean aboRng_UpAxleFixeCommand[2];
    TBoolean boDef_UpAxleFixeCommand;
    TDbVarInf  tInf_DownAxleFixeCommand;
    TBoolean aboRng_DownAxleFixeCommand[2];
    TBoolean boDef_DownAxleFixeCommand;
    TDbVarInf  tInf_RegimeMotorAlternatorRpm;
    TInt32 ai32Rng_RegimeMotorAlternatorRpm[2];
    TInt32 i32Def_RegimeMotorAlternatorRpm;
    TDbVarInf  tInf_EntryTelescopeFdcSensor;
    TBoolean aboRng_EntryTelescopeFdcSensor[2];
    TBoolean boDef_EntryTelescopeFdcSensor;
    TDbVarInf  tInf_DeltaArmFoldedSensor;
    TBoolean aboRng_DeltaArmFoldedSensor[2];
    TBoolean boDef_DeltaArmFoldedSensor;
    TDbVarInf  tInf_BoomArmFoldedSensor;
    TBoolean aboRng_BoomArmFoldedSensor[2];
    TBoolean boDef_BoomArmFoldedSensor;
    TDbVarInf  tInf_DeltaArmInLowerZone;
    TBoolean aboRng_DeltaArmInLowerZone[2];
    TBoolean boDef_DeltaArmInLowerZone;
    TDbVarInf  tInf_ArrowArmAngularSensor;
    TInt16 ai16Rng_ArrowArmAngularSensor[2];
    TInt16 i16Def_ArrowArmAngularSensor;
    TDbVarInf  tInf_TurretInRearCenterPos;
    TBoolean aboRng_TurretInRearCenterPos[2];
    TBoolean boDef_TurretInRearCenterPos;
    TDbVarInf  tInf_TurretInFrontCenterPos;
    TBoolean aboRng_TurretInFrontCenterPos[2];
    TBoolean boDef_TurretInFrontCenterPos;
    TDbVarInf  tInf_FoldedDeltaArmZone;
    TBoolean aboRng_FoldedDeltaArmZone[2];
    TBoolean boDef_FoldedDeltaArmZone;
    TDbVarInf  tInf_FoldedArrowArmZone;
    TBoolean aboRng_FoldedArrowArmZone[2];
    TBoolean boDef_FoldedArrowArmZone;
    TDbVarInf  tInf_NoMovementIsDuring;
    TBoolean aboRng_NoMovementIsDuring[2];
    TBoolean boDef_NoMovementIsDuring;
    TDbVarInf  tInf_DeltaArmAngularSensor;
    TInt16 ai16Rng_DeltaArmAngularSensor[2];
    TInt16 i16Def_DeltaArmAngularSensor;
    TDbVarInf  tInf_FoldedMastMeasure;
    TBoolean aboRng_FoldedMastMeasure[2];
    TBoolean boDef_FoldedMastMeasure;
    TDbVarInf  tInf_Transmission1Pressure;
    TInt16 ai16Rng_Transmission1Pressure[2];
    TInt16 i16Def_Transmission1Pressure;
    TDbVarInf  tInf_Transmission2Pressure;
    TInt16 ai16Rng_Transmission2Pressure[2];
    TInt16 i16Def_Transmission2Pressure;
    TDbVarInf  tInf_ActiveHelpState;
    EDiState aeRng_ActiveHelpState[2];
    EDiState eDef_ActiveHelpState;
    TDbVarInf  tInf_BasketInCentrerPos;
    TBoolean aboRng_BasketInCentrerPos[2];
    TBoolean boDef_BasketInCentrerPos;
    TDbVarInf  tInf_StopAllMovementsNacellePost;
    TBoolean aboRng_StopAllMovementsNacellePost[2];
    TBoolean boDef_StopAllMovementsNacellePost;
    TDbVarInf  tInf_EncodeurMastMeasureCentimeter;
    TUint16 au16Rng_EncodeurMastMeasureCentimeter[2];
    TUint16 u16Def_EncodeurMastMeasureCentimeter;
    TDbVarInf  tInf_MastMeasureFonctionActive;
    TBoolean aboRng_MastMeasureFonctionActive[2];
    TBoolean boDef_MastMeasureFonctionActive;
    TDbVarInf  tInf_OutOfRangeTransmissionPressure;
    TBoolean aboRng_OutOfRangeTransmissionPressure[2];
    TBoolean boDef_OutOfRangeTransmissionPressure;
    TDbVarInf  tInf_Beacon;
    TBoolean aboRng_Beacon[2];
    TBoolean boDef_Beacon;
    TDbVarInf  tInf_MotorOn;
    TBoolean aboRng_MotorOn[2];
    TBoolean boDef_MotorOn;
    TDbVarInf  tInf_FaultLenghtSensor;
    TBoolean aboRng_FaultLenghtSensor[2];
    TBoolean boDef_FaultLenghtSensor;
    TDbVarInf  tInf_TurretSensorsFailures;
    TBoolean aboRng_TurretSensorsFailures[2];
    TBoolean boDef_TurretSensorsFailures;
    TDbVarInf  tInf_OptionWhiteLight15746;
    TBoolean aboRng_OptionWhiteLight15746[2];
    TBoolean boDef_OptionWhiteLight15746;
    TDbVarInf  tInf_SafeManSystem;
    TBoolean aboRng_SafeManSystem[2];
    TBoolean boDef_SafeManSystem;
    TDbVarInf  tInf_SlopeModeFromC1;
    TBoolean aboRng_SlopeModeFromC1[2];
    TBoolean boDef_SlopeModeFromC1;
    TDbVarInf  tInf_ColdOilTankTemperature;
    TBoolean aboRng_ColdOilTankTemperature[2];
    TBoolean boDef_ColdOilTankTemperature;
    TDbVarInf  tInf_ElectricMotorForbidden;
    TBoolean aboRng_ElectricMotorForbidden[2];
    TBoolean boDef_ElectricMotorForbidden;
    TDbVarInf  tInf_RpmMotorElectric;
    TInt16 ai16Rng_RpmMotorElectric[2];
    TInt16 i16Def_RpmMotorElectric;
    TDbVarInf  tInf_OilTankTemperatureValue;
    TInt16 ai16Rng_OilTankTemperatureValue[2];
    TInt16 i16Def_OilTankTemperatureValue;
    TDbVarInf  tInf_SocStopRegen;
    TBoolean aboRng_SocStopRegen[2];
    TBoolean boDef_SocStopRegen;
    TDbVarInf  tInf_GeneratorOn;
    TBoolean aboRng_GeneratorOn[2];
    TBoolean boDef_GeneratorOn;
    TDbVarInf  tInf_EvDevMvtsCmd;
    TBoolean aboRng_EvDevMvtsCmd[2];
    TBoolean boDef_EvDevMvtsCmd;
    TDbVarInf  tInf_TestElectricalFromC1;
    TBoolean aboRng_TestElectricalFromC1[2];
    TBoolean boDef_TestElectricalFromC1;
    TDbVarInf  tInf_AutoModeActivate;
    TBoolean aboRng_AutoModeActivate[2];
    TBoolean boDef_AutoModeActivate;
    TDbVarInf  tInf_SilenceModeActivate;
    TBoolean aboRng_SilenceModeActivate[2];
    TBoolean boDef_SilenceModeActivate;
    TDbVarInf  tInf_ForcingRegenlow;
    TBoolean aboRng_ForcingRegenlow[2];
    TBoolean boDef_ForcingRegenlow;
    TDbVarInf  tInf_ForcingRegenHigh;
    TBoolean aboRng_ForcingRegenHigh[2];
    TBoolean boDef_ForcingRegenHigh;
    TDbVarInf  tInf_EvBypassCommand;
    TBoolean aboRng_EvBypassCommand[2];
    TBoolean boDef_EvBypassCommand;
    TDbVarInf  tInf_MotorspeedCmdJ1939;
    TInt16 ai16Rng_MotorspeedCmdJ1939[2];
    TInt16 i16Def_MotorspeedCmdJ1939;
}TDbSetRamEcuC0RcvFromC1;

typedef struct
{
    TDbVarInf  tInf_CalibTurretAngle;
    TBoolean aboRng_CalibTurretAngle[2];
    TBoolean boDef_CalibTurretAngle;
    TDbVarInf  tInf_CalibTurretAngleIntermedaireBool;
    TBoolean aboRng_CalibTurretAngleIntermedaireBool[2];
    TBoolean boDef_CalibTurretAngleIntermedaireBool;
    TDbVarInf  tInf_CalibSlopeLong;
    TBoolean aboRng_CalibSlopeLong[2];
    TBoolean boDef_CalibSlopeLong;
    TDbVarInf  tInf_CalibSlopeTrans;
    TBoolean aboRng_CalibSlopeTrans[2];
    TBoolean boDef_CalibSlopeTrans;
    TDbVarInf  tInf_SavedCalibrationListC0;
    TBoolean aboRng_SavedCalibrationListC0[2];
    TBoolean boDef_SavedCalibrationListC0;
}TDbSetRamEcuCaliCmdC0;

typedef struct
{
    TDbVarInf  tInf_AccesSiteSpeedForward;
    TInt16 ai16Rng_AccesSiteSpeedForward[2];
    TInt16 i16Def_AccesSiteSpeedForward;
    TDbVarInf  tInf_HighSpeedForward;
    TInt16 ai16Rng_HighSpeedForward[2];
    TInt16 i16Def_HighSpeedForward;
    TDbVarInf  tInf_LowSpeedForward;
    TInt16 ai16Rng_LowSpeedForward[2];
    TInt16 i16Def_LowSpeedForward;
    TDbVarInf  tInf_LowSpeedBrakeTestForward;
    TInt16 ai16Rng_LowSpeedBrakeTestForward[2];
    TInt16 i16Def_LowSpeedBrakeTestForward;
    TDbVarInf  tInf_HighSpeedSlopeTresholdAbs;
    TInt16 ai16Rng_HighSpeedSlopeTresholdAbs[2];
    TInt16 i16Def_HighSpeedSlopeTresholdAbs;
    TDbVarInf  tInf_HighSpeedSlopeTresholdHystRel;
    TInt16 ai16Rng_HighSpeedSlopeTresholdHystRel[2];
    TInt16 i16Def_HighSpeedSlopeTresholdHystRel;
    TDbVarInf  tInf_LowSpeedSlopeTresholdAbs;
    TInt16 ai16Rng_LowSpeedSlopeTresholdAbs[2];
    TInt16 i16Def_LowSpeedSlopeTresholdAbs;
    TDbVarInf  tInf_LowSpeedSlopeTresholdHystRel;
    TInt16 ai16Rng_LowSpeedSlopeTresholdHystRel[2];
    TInt16 i16Def_LowSpeedSlopeTresholdHystRel;
    TDbVarInf  tInf_TurretLowSpeedTresholdRel;
    TInt16 ai16Rng_TurretLowSpeedTresholdRel[2];
    TInt16 i16Def_TurretLowSpeedTresholdRel;
    TDbVarInf  tInf_TurretLowSpeedTresholdHyst;
    TInt16 ai16Rng_TurretLowSpeedTresholdHyst[2];
    TInt16 i16Def_TurretLowSpeedTresholdHyst;
    TDbVarInf  tInf_TurretRearCenterPos;
    TInt16 ai16Rng_TurretRearCenterPos[2];
    TInt16 i16Def_TurretRearCenterPos;
    TDbVarInf  tInf_TurretFrontPositiveCenterPos;
    TInt16 ai16Rng_TurretFrontPositiveCenterPos[2];
    TInt16 i16Def_TurretFrontPositiveCenterPos;
    TDbVarInf  tInf_TurretFrontNegativeCenterPos;
    TInt16 ai16Rng_TurretFrontNegativeCenterPos[2];
    TInt16 i16Def_TurretFrontNegativeCenterPos;
    TDbVarInf  tInf_LimitSpeedAccesSiteSpeed;
    TUint16 au16Rng_LimitSpeedAccesSiteSpeed[2];
    TUint16 u16Def_LimitSpeedAccesSiteSpeed;
    TDbVarInf  tInf_LimitSpeedHighSpeed;
    TUint16 au16Rng_LimitSpeedHighSpeed[2];
    TUint16 u16Def_LimitSpeedHighSpeed;
    TDbVarInf  tInf_LimitSpeedLowSpeed;
    TUint16 au16Rng_LimitSpeedLowSpeed[2];
    TUint16 u16Def_LimitSpeedLowSpeed;
    TDbVarInf  tInf_LimitSpeedLowSpeedBrakeTest;
    TUint16 au16Rng_LimitSpeedLowSpeedBrakeTest[2];
    TUint16 u16Def_LimitSpeedLowSpeedBrakeTest;
    TDbVarInf  tInf_AccesSiteSpeedBackward;
    TInt16 ai16Rng_AccesSiteSpeedBackward[2];
    TInt16 i16Def_AccesSiteSpeedBackward;
    TDbVarInf  tInf_HighSpeedBackward;
    TInt16 ai16Rng_HighSpeedBackward[2];
    TInt16 i16Def_HighSpeedBackward;
    TDbVarInf  tInf_LowSpeedBackward;
    TInt16 ai16Rng_LowSpeedBackward[2];
    TInt16 i16Def_LowSpeedBackward;
    TDbVarInf  tInf_LowSpeedBrakeTestBackward;
    TInt16 ai16Rng_LowSpeedBrakeTestBackward[2];
    TInt16 i16Def_LowSpeedBrakeTestBackward;
    TDbVarInf  tInf_TestBrakeSpeedForward;
    TInt16 ai16Rng_TestBrakeSpeedForward[2];
    TInt16 i16Def_TestBrakeSpeedForward;
    TDbVarInf  tInf_TestBrakeSpeedBackward;
    TInt16 ai16Rng_TestBrakeSpeedBackward[2];
    TInt16 i16Def_TestBrakeSpeedBackward;
    TDbVarInf  tInf_BreakeInBrakeSpeedForward;
    TInt16 ai16Rng_BreakeInBrakeSpeedForward[2];
    TInt16 i16Def_BreakeInBrakeSpeedForward;
    TDbVarInf  tInf_BreakeInBrakeSpeedBackward;
    TInt16 ai16Rng_BreakeInBrakeSpeedBackward[2];
    TInt16 i16Def_BreakeInBrakeSpeedBackward;
    TDbVarInf  tInf_ArmSpeedRailHyst;
    TInt16 ai16Rng_ArmSpeedRailHyst[2];
    TInt16 i16Def_ArmSpeedRailHyst;
    TDbVarInf  tInf_ArmLowSectorBasketFaultThres;
    TInt16 ai16Rng_ArmLowSectorBasketFaultThres[2];
    TInt16 i16Def_ArmLowSectorBasketFaultThres;
    TDbVarInf  tInf_ArmLowZoneForLowSpeed;
    TInt16 ai16Rng_ArmLowZoneForLowSpeed[2];
    TInt16 i16Def_ArmLowZoneForLowSpeed;
    TDbVarInf  tInf_TurretRearNegLowSpeedTreshold;
    TInt16 ai16Rng_TurretRearNegLowSpeedTreshold[2];
    TInt16 i16Def_TurretRearNegLowSpeedTreshold;
    TDbVarInf  tInf_TurretRearPosLowSpeedTreshold;
    TInt16 ai16Rng_TurretRearPosLowSpeedTreshold[2];
    TInt16 i16Def_TurretRearPosLowSpeedTreshold;
    TDbVarInf  tInf_Performance2DegSlopeThres;
    TUint16 au16Rng_Performance2DegSlopeThres[2];
    TUint16 u16Def_Performance2DegSlopeThres;
    TDbVarInf  tInf_Performance4DegSlopeThres;
    TUint16 au16Rng_Performance4DegSlopeThres[2];
    TUint16 u16Def_Performance4DegSlopeThres;
    TDbVarInf  tInf_Performance6DegSlopeThres;
    TUint16 au16Rng_Performance6DegSlopeThres[2];
    TUint16 u16Def_Performance6DegSlopeThres;
    TDbVarInf  tInf_PerformanceDegSlopeHyst;
    TUint16 au16Rng_PerformanceDegSlopeHyst[2];
    TUint16 u16Def_PerformanceDegSlopeHyst;
    TDbVarInf  tInf_TurretPerfLowSpeedHystHigh;
    TInt16 ai16Rng_TurretPerfLowSpeedHystHigh[2];
    TInt16 i16Def_TurretPerfLowSpeedHystHigh;
    TDbVarInf  tInf_TurretPerformLowSpeed2Deg;
    TInt16 ai16Rng_TurretPerformLowSpeed2Deg[2];
    TInt16 i16Def_TurretPerformLowSpeed2Deg;
    TDbVarInf  tInf_TurretPerformLowSpeedBasketRot2;
    TInt16 ai16Rng_TurretPerformLowSpeedBasketRot2[2];
    TInt16 i16Def_TurretPerformLowSpeedBasketRot2;
    TDbVarInf  tInf_TurretPerformLowSpeed4Deg;
    TInt16 ai16Rng_TurretPerformLowSpeed4Deg[2];
    TInt16 i16Def_TurretPerformLowSpeed4Deg;
    TDbVarInf  tInf_TurretPerfLowSpeedBasketRot4Deg;
    TInt16 ai16Rng_TurretPerfLowSpeedBasketRot4Deg[2];
    TInt16 i16Def_TurretPerfLowSpeedBasketRot4Deg;
    TDbVarInf  tInf_TurretPerformLowSpeed6Deg;
    TInt16 ai16Rng_TurretPerformLowSpeed6Deg[2];
    TInt16 i16Def_TurretPerformLowSpeed6Deg;
    TDbVarInf  tInf_TurretPerfLowSpeedBasketRot6Deg;
    TInt16 ai16Rng_TurretPerfLowSpeedBasketRot6Deg[2];
    TInt16 i16Def_TurretPerfLowSpeedBasketRot6Deg;
    TDbVarInf  tInf_PreventLimitSpeedAccesSiteSpeed;
    TUint16 au16Rng_PreventLimitSpeedAccesSiteSpeed[2];
    TUint16 u16Def_PreventLimitSpeedAccesSiteSpeed;
    TDbVarInf  tInf_PreventLimitSpeedHighSpeed;
    TUint16 au16Rng_PreventLimitSpeedHighSpeed[2];
    TUint16 u16Def_PreventLimitSpeedHighSpeed;
    TDbVarInf  tInf_PreventLimitSpeedLowSpeed;
    TUint16 au16Rng_PreventLimitSpeedLowSpeed[2];
    TUint16 u16Def_PreventLimitSpeedLowSpeed;
    TDbVarInf  tInf_PreventSpeedLowSpeedBrakeTest;
    TUint16 au16Rng_PreventSpeedLowSpeedBrakeTest[2];
    TUint16 u16Def_PreventSpeedLowSpeedBrakeTest;
    TDbVarInf  tInf_Performance2DegSlopeThresMG;
    TUint16 au16Rng_Performance2DegSlopeThresMG[2];
    TUint16 u16Def_Performance2DegSlopeThresMG;
    TDbVarInf  tInf_Performance4DegSlopeThresMG;
    TUint16 au16Rng_Performance4DegSlopeThresMG[2];
    TUint16 u16Def_Performance4DegSlopeThresMG;
    TDbVarInf  tInf_Performance6DegSlopeThresMG;
    TUint16 au16Rng_Performance6DegSlopeThresMG[2];
    TUint16 u16Def_Performance6DegSlopeThresMG;
    TDbVarInf  tInf_TurretPerformLowSpeed2DegMG;
    TInt16 ai16Rng_TurretPerformLowSpeed2DegMG[2];
    TInt16 i16Def_TurretPerformLowSpeed2DegMG;
    TDbVarInf  tInf_TurretPerformLowSpeedBasket2MG;
    TInt16 ai16Rng_TurretPerformLowSpeedBasket2MG[2];
    TInt16 i16Def_TurretPerformLowSpeedBasket2MG;
    TDbVarInf  tInf_TurretPerformLowSpeed4DegMG;
    TInt16 ai16Rng_TurretPerformLowSpeed4DegMG[2];
    TInt16 i16Def_TurretPerformLowSpeed4DegMG;
    TDbVarInf  tInf_TurretPerformLowSpeedBasket4MG;
    TInt16 ai16Rng_TurretPerformLowSpeedBasket4MG[2];
    TInt16 i16Def_TurretPerformLowSpeedBasket4MG;
    TDbVarInf  tInf_TurretPerformLowSpeed6DegMG;
    TInt16 ai16Rng_TurretPerformLowSpeed6DegMG[2];
    TInt16 i16Def_TurretPerformLowSpeed6DegMG;
    TDbVarInf  tInf_TurretPerformLowSpeedBasket6MG;
    TInt16 ai16Rng_TurretPerformLowSpeedBasket6MG[2];
    TInt16 i16Def_TurretPerformLowSpeedBasket6MG;
}TDbSetNvParamSpeedMaxRail;

typedef struct
{
    TDbVarInf  tInf_SlopeOverHighSpeedTresh;
    TBoolean aboRng_SlopeOverHighSpeedTresh[2];
    TBoolean boDef_SlopeOverHighSpeedTresh;
    TDbVarInf  tInf_SlopeLowerLowSpeedTresh;
    TBoolean aboRng_SlopeLowerLowSpeedTresh[2];
    TBoolean boDef_SlopeLowerLowSpeedTresh;
    TDbVarInf  tInf_TurretInLowSpeedRearZone;
    TBoolean aboRng_TurretInLowSpeedRearZone[2];
    TBoolean boDef_TurretInLowSpeedRearZone;
    TDbVarInf  tInf_TurretInLowSpeedPosFrontZone;
    TBoolean aboRng_TurretInLowSpeedPosFrontZone[2];
    TBoolean boDef_TurretInLowSpeedPosFrontZone;
    TDbVarInf  tInf_TurretInLowSpeedNegFrontZone;
    TBoolean aboRng_TurretInLowSpeedNegFrontZone[2];
    TBoolean boDef_TurretInLowSpeedNegFrontZone;
    TDbVarInf  tInf_TurretInLowSpeedZone;
    TBoolean aboRng_TurretInLowSpeedZone[2];
    TBoolean boDef_TurretInLowSpeedZone;
    TDbVarInf  tInf_EnableSimuMode;
    TBoolean aboRng_EnableSimuMode[2];
    TBoolean boDef_EnableSimuMode;
    TDbVarInf  tInf_SimuDevers;
    TUint16 au16Rng_SimuDevers[2];
    TUint16 u16Def_SimuDevers;
    TDbVarInf  tInf_SimuTurretAngle;
    TInt16 ai16Rng_SimuTurretAngle[2];
    TInt16 i16Def_SimuTurretAngle;
    TDbVarInf  tInf_SimuAuthorizationWorkKey;
    TBoolean aboRng_SimuAuthorizationWorkKey[2];
    TBoolean boDef_SimuAuthorizationWorkKey;
    TDbVarInf  tInf_SimuAbutmentTurretCentred;
    EDiState aeRng_SimuAbutmentTurretCentred[2];
    EDiState eDef_SimuAbutmentTurretCentred;
    TDbVarInf  tInf_SimuWorkKeyCentred;
    EDiState aeRng_SimuWorkKeyCentred[2];
    EDiState eDef_SimuWorkKeyCentred;
    TDbVarInf  tInf_SimuTelescopeEntry;
    TBoolean aboRng_SimuTelescopeEntry[2];
    TBoolean boDef_SimuTelescopeEntry;
    TDbVarInf  tInf_SimuDeltaArmFoldedSensor;
    TBoolean aboRng_SimuDeltaArmFoldedSensor[2];
    TBoolean boDef_SimuDeltaArmFoldedSensor;
    TDbVarInf  tInf_SimuDeltaArmFoldedZone;
    TBoolean aboRng_SimuDeltaArmFoldedZone[2];
    TBoolean boDef_SimuDeltaArmFoldedZone;
    TDbVarInf  tInf_SimuArrowArmFoldedSensor;
    TBoolean aboRng_SimuArrowArmFoldedSensor[2];
    TBoolean boDef_SimuArrowArmFoldedSensor;
    TDbVarInf  tInf_SimuArrowArmFoldedZone;
    TBoolean aboRng_SimuArrowArmFoldedZone[2];
    TBoolean boDef_SimuArrowArmFoldedZone;
    TDbVarInf  tInf_SimuNacelleBasketLeftSideSensor1;
    TBoolean aboRng_SimuNacelleBasketLeftSideSensor1[2];
    TBoolean boDef_SimuNacelleBasketLeftSideSensor1;
    TDbVarInf  tInf_SimuNacelleBasketLeftSideSensor2;
    TBoolean aboRng_SimuNacelleBasketLeftSideSensor2[2];
    TBoolean boDef_SimuNacelleBasketLeftSideSensor2;
    TDbVarInf  tInf_SimuNacelleBasketRighSideSensor1;
    TBoolean aboRng_SimuNacelleBasketRighSideSensor1[2];
    TBoolean boDef_SimuNacelleBasketRighSideSensor1;
    TDbVarInf  tInf_SimuNacelleBasketRighSideSensor2;
    TBoolean aboRng_SimuNacelleBasketRighSideSensor2[2];
    TBoolean boDef_SimuNacelleBasketRighSideSensor2;
    TDbVarInf  tInf_SimuHighSectorPlateSensor;
    TBoolean aboRng_SimuHighSectorPlateSensor[2];
    TBoolean boDef_SimuHighSectorPlateSensor;
    TDbVarInf  tInf_RailSpeedMaxMode;
    ERailSpeedMode aeRng_RailSpeedMaxMode[2];
    ERailSpeedMode eDef_RailSpeedMaxMode;
    TDbVarInf  tInf_SimuDeltaArmInLowerZone;
    TBoolean aboRng_SimuDeltaArmInLowerZone[2];
    TBoolean boDef_SimuDeltaArmInLowerZone;
    TDbVarInf  tInf_SimuTurretInRearCenterPos;
    TBoolean aboRng_SimuTurretInRearCenterPos[2];
    TBoolean boDef_SimuTurretInRearCenterPos;
    TDbVarInf  tInf_SimuTurretInFrontCenterPos;
    TBoolean aboRng_SimuTurretInFrontCenterPos[2];
    TBoolean boDef_SimuTurretInFrontCenterPos;
    TDbVarInf  tInf_LimitSpeedAccesSiteSpeedExceeded;
    TBoolean aboRng_LimitSpeedAccesSiteSpeedExceeded[2];
    TBoolean boDef_LimitSpeedAccesSiteSpeedExceeded;
    TDbVarInf  tInf_LimitSpeedHighSpeedExceeded;
    TBoolean aboRng_LimitSpeedHighSpeedExceeded[2];
    TBoolean boDef_LimitSpeedHighSpeedExceeded;
    TDbVarInf  tInf_LimitSpeedLowSpeedExceeded;
    TBoolean aboRng_LimitSpeedLowSpeedExceeded[2];
    TBoolean boDef_LimitSpeedLowSpeedExceeded;
    TDbVarInf  tInf_LimitSpeedLowSpeedBrakeTestExced;
    TBoolean aboRng_LimitSpeedLowSpeedBrakeTestExced[2];
    TBoolean boDef_LimitSpeedLowSpeedBrakeTestExced;
    TDbVarInf  tInf_LitmitSpeedExceeded;
    TBoolean aboRng_LitmitSpeedExceeded[2];
    TBoolean boDef_LitmitSpeedExceeded;
    TDbVarInf  tInf_KinematicTrainAllow;
    TBoolean aboRng_KinematicTrainAllow[2];
    TBoolean boDef_KinematicTrainAllow;
    TDbVarInf  tInf_SlopeCaseLess2Deg;
    TBoolean aboRng_SlopeCaseLess2Deg[2];
    TBoolean boDef_SlopeCaseLess2Deg;
    TDbVarInf  tInf_SlopeCaseLess4Deg;
    TBoolean aboRng_SlopeCaseLess4Deg[2];
    TBoolean boDef_SlopeCaseLess4Deg;
    TDbVarInf  tInf_SlopeCaseLess6Deg;
    TBoolean aboRng_SlopeCaseLess6Deg[2];
    TBoolean boDef_SlopeCaseLess6Deg;
    TDbVarInf  tInf_SlopeCaseHigher6Deg;
    TBoolean aboRng_SlopeCaseHigher6Deg[2];
    TBoolean boDef_SlopeCaseHigher6Deg;
    TDbVarInf  tInf_TurretInSpeedZone2Deg;
    TBoolean aboRng_TurretInSpeedZone2Deg[2];
    TBoolean boDef_TurretInSpeedZone2Deg;
    TDbVarInf  tInf_TurretInSpeedZone4Deg;
    TBoolean aboRng_TurretInSpeedZone4Deg[2];
    TBoolean boDef_TurretInSpeedZone4Deg;
    TDbVarInf  tInf_TurretInSpeedZone6Deg;
    TBoolean aboRng_TurretInSpeedZone6Deg[2];
    TBoolean boDef_TurretInSpeedZone6Deg;
    TDbVarInf  tInf_TurretInSpeedZone2DegForBasket;
    TBoolean aboRng_TurretInSpeedZone2DegForBasket[2];
    TBoolean boDef_TurretInSpeedZone2DegForBasket;
    TDbVarInf  tInf_TurretInSpeedZone4DegForBasket;
    TBoolean aboRng_TurretInSpeedZone4DegForBasket[2];
    TBoolean boDef_TurretInSpeedZone4DegForBasket;
    TDbVarInf  tInf_TurretInSpeedZone6DegForBasket;
    TBoolean aboRng_TurretInSpeedZone6DegForBasket[2];
    TBoolean boDef_TurretInSpeedZone6DegForBasket;
    TDbVarInf  tInf_PreventLimitSpeedAccesSiteSpeed;
    TBoolean aboRng_PreventLimitSpeedAccesSiteSpeed[2];
    TBoolean boDef_PreventLimitSpeedAccesSiteSpeed;
    TDbVarInf  tInf_PreventLimitSpeedHighSpeed;
    TBoolean aboRng_PreventLimitSpeedHighSpeed[2];
    TBoolean boDef_PreventLimitSpeedHighSpeed;
    TDbVarInf  tInf_PreventLimitSpeedLowSpeed;
    TBoolean aboRng_PreventLimitSpeedLowSpeed[2];
    TBoolean boDef_PreventLimitSpeedLowSpeed;
    TDbVarInf  tInf_PreventLimitLowSpeedBrakeTest;
    TBoolean aboRng_PreventLimitLowSpeedBrakeTest[2];
    TBoolean boDef_PreventLimitLowSpeedBrakeTest;
    TDbVarInf  tInf_PreventLimitSpeedExceeding;
    TBoolean aboRng_PreventLimitSpeedExceeding[2];
    TBoolean boDef_PreventLimitSpeedExceeding;
    TDbVarInf  tInf_AuthoriseGlobalLowSpeed;
    TBoolean aboRng_AuthoriseGlobalLowSpeed[2];
    TBoolean boDef_AuthoriseGlobalLowSpeed;
    TDbVarInf  tInf_SelectSlopeCase2Deg;
    TUint16 au16Rng_SelectSlopeCase2Deg[2];
    TUint16 u16Def_SelectSlopeCase2Deg;
    TDbVarInf  tInf_SelectSlopeCase4Deg;
    TUint16 au16Rng_SelectSlopeCase4Deg[2];
    TUint16 u16Def_SelectSlopeCase4Deg;
    TDbVarInf  tInf_SelectSlopeCase6Deg;
    TUint16 au16Rng_SelectSlopeCase6Deg[2];
    TUint16 u16Def_SelectSlopeCase6Deg;
    TDbVarInf  tInf_SelectTurretSectorCase2Deg;
    TInt16 ai16Rng_SelectTurretSectorCase2Deg[2];
    TInt16 i16Def_SelectTurretSectorCase2Deg;
    TDbVarInf  tInf_SelectTurretSectorCase4Deg;
    TInt16 ai16Rng_SelectTurretSectorCase4Deg[2];
    TInt16 i16Def_SelectTurretSectorCase4Deg;
    TDbVarInf  tInf_SelectTurretSectorCase6Deg;
    TInt16 ai16Rng_SelectTurretSectorCase6Deg[2];
    TInt16 i16Def_SelectTurretSectorCase6Deg;
    TDbVarInf  tInf_SelectedTurretCase2DegForBasket;
    TInt16 ai16Rng_SelectedTurretCase2DegForBasket[2];
    TInt16 i16Def_SelectedTurretCase2DegForBasket;
    TDbVarInf  tInf_SelectedTurretCase4DegForBasket;
    TInt16 ai16Rng_SelectedTurretCase4DegForBasket[2];
    TInt16 i16Def_SelectedTurretCase4DegForBasket;
    TDbVarInf  tInf_SelectedTurretCase6DegForBasket;
    TInt16 ai16Rng_SelectedTurretCase6DegForBasket[2];
    TInt16 i16Def_SelectedTurretCase6DegForBasket;
}TDbSetRamSpeedMaxRail;

typedef struct
{
    TDbVarInf  tInf_NCycleNeedBrakeTest;
    TUint16 au16Rng_NCycleNeedBrakeTest[2];
    TUint16 u16Def_NCycleNeedBrakeTest;
    TDbVarInf  tInf_NCyclesBrakeCritical;
    TUint16 au16Rng_NCyclesBrakeCritical[2];
    TUint16 u16Def_NCyclesBrakeCritical;
    TDbVarInf  tInf_SpeedMinTreshIncrBrakeCycles;
    TUint16 au16Rng_SpeedMinTreshIncrBrakeCycles[2];
    TUint16 u16Def_SpeedMinTreshIncrBrakeCycles;
    TDbVarInf  tInf_PressureOsciServiceBrakeTresh;
    TUint16 au16Rng_PressureOsciServiceBrakeTresh[2];
    TUint16 u16Def_PressureOsciServiceBrakeTresh;
    TDbVarInf  tInf_PressureFixeServiceBrakeTresh;
    TUint16 au16Rng_PressureFixeServiceBrakeTresh[2];
    TUint16 u16Def_PressureFixeServiceBrakeTresh;
    TDbVarInf  tInf_PressureOsciParkingBrakeTresh;
    TUint16 au16Rng_PressureOsciParkingBrakeTresh[2];
    TUint16 u16Def_PressureOsciParkingBrakeTresh;
    TDbVarInf  tInf_PressureFixeParkingBrakeTresh;
    TUint16 au16Rng_PressureFixeParkingBrakeTresh[2];
    TUint16 u16Def_PressureFixeParkingBrakeTresh;
    TDbVarInf  tInf_TimeOsciSerivceBrakeMs;
    TUint16 au16Rng_TimeOsciSerivceBrakeMs[2];
    TUint16 u16Def_TimeOsciSerivceBrakeMs;
    TDbVarInf  tInf_TimeFixeSerivceBrakeMs;
    TUint16 au16Rng_TimeFixeSerivceBrakeMs[2];
    TUint16 u16Def_TimeFixeSerivceBrakeMs;
    TDbVarInf  tInf_TimeOsciParkingBrakeMs;
    TUint16 au16Rng_TimeOsciParkingBrakeMs[2];
    TUint16 u16Def_TimeOsciParkingBrakeMs;
    TDbVarInf  tInf_TimeFixeParkingBrakeMs;
    TUint16 au16Rng_TimeFixeParkingBrakeMs[2];
    TUint16 u16Def_TimeFixeParkingBrakeMs;
    TDbVarInf  tInf_SpeedMinBrakeTestRunning;
    TUint16 au16Rng_SpeedMinBrakeTestRunning[2];
    TUint16 u16Def_SpeedMinBrakeTestRunning;
    TDbVarInf  tInf_ValidCondiEnableTestBrakeTime;
    TUint32 au32Rng_ValidCondiEnableTestBrakeTime[2];
    TUint32 u32Def_ValidCondiEnableTestBrakeTime;
    TDbVarInf  tInf_NbElementDeltaTransmPressure;
    TUint8 au8Rng_NbElementDeltaTransmPressure[2];
    TUint8 u8Def_NbElementDeltaTransmPressure;
    TDbVarInf  tInf_NCycleNeed2ndParkBrake;
    TUint16 au16Rng_NCycleNeed2ndParkBrake[2];
    TUint16 u16Def_NCycleNeed2ndParkBrake;
    TDbVarInf  tInf_NCycles2ndBrakeCritical;
    TUint16 au16Rng_NCycles2ndBrakeCritical[2];
    TUint16 u16Def_NCycles2ndBrakeCritical;
    TDbVarInf  tInf_TimeOsci2ndParkingBrakeMs;
    TUint16 au16Rng_TimeOsci2ndParkingBrakeMs[2];
    TUint16 u16Def_TimeOsci2ndParkingBrakeMs;
    TDbVarInf  tInf_TimeFixe2ndParkingBrakeMs;
    TUint16 au16Rng_TimeFixe2ndParkingBrakeMs[2];
    TUint16 u16Def_TimeFixe2ndParkingBrakeMs;
    TDbVarInf  tInf_ThresCpt2ndParkBrake;
    TUint16 au16Rng_ThresCpt2ndParkBrake[2];
    TUint16 u16Def_ThresCpt2ndParkBrake;
    TDbVarInf  tInf_MinThresholdActive2ndParkBrake;
    TUint16 au16Rng_MinThresholdActive2ndParkBrake[2];
    TUint16 u16Def_MinThresholdActive2ndParkBrake;
}TDbSetNvParamBrakeTest;

typedef struct
{
    TDbVarInf  tInf_ForbidCameraDisplay;
    TBoolean aboRng_ForbidCameraDisplay[2];
    TBoolean boDef_ForbidCameraDisplay;
    TDbVarInf  tInf_PressureEfficiencyRate;
    TUint16 au16Rng_PressureEfficiencyRate[2];
    TUint16 u16Def_PressureEfficiencyRate;
    TDbVarInf  tInf_BrakeTestSelected;
    EBrakeTestSelected aeRng_BrakeTestSelected[2];
    EBrakeTestSelected eDef_BrakeTestSelected;
    TDbVarInf  tInf_NeedTestBrake;
    TBoolean aboRng_NeedTestBrake[2];
    TBoolean boDef_NeedTestBrake;
    TDbVarInf  tInf_CycleBrakeOverCriticalNumber;
    TBoolean aboRng_CycleBrakeOverCriticalNumber[2];
    TBoolean boDef_CycleBrakeOverCriticalNumber;
    TDbVarInf  tInf_UpPositionAxles;
    TBoolean aboRng_UpPositionAxles[2];
    TBoolean boDef_UpPositionAxles;
    TDbVarInf  tInf_DownPositionAxles;
    TBoolean aboRng_DownPositionAxles[2];
    TBoolean boDef_DownPositionAxles;
    TDbVarInf  tInf_IncoherencePosAxleAndTestMode;
    TBoolean aboRng_IncoherencePosAxleAndTestMode[2];
    TBoolean boDef_IncoherencePosAxleAndTestMode;
    TDbVarInf  tInf_TestBrakeInOffrailMode;
    TBoolean aboRng_TestBrakeInOffrailMode[2];
    TBoolean boDef_TestBrakeInOffrailMode;
    TDbVarInf  tInf_BrakeTestRunning;
    TBoolean aboRng_BrakeTestRunning[2];
    TBoolean boDef_BrakeTestRunning;
    TDbVarInf  tInf_ValidBrakeTest;
    TBoolean aboRng_ValidBrakeTest[2];
    TBoolean boDef_ValidBrakeTest;
    TDbVarInf  tInf_EnableIncrementCycleBrakePerform;
    TBoolean aboRng_EnableIncrementCycleBrakePerform[2];
    TBoolean boDef_EnableIncrementCycleBrakePerform;
    TDbVarInf  tInf_ValidOsciServiceBrakeTest;
    TBoolean aboRng_ValidOsciServiceBrakeTest[2];
    TBoolean boDef_ValidOsciServiceBrakeTest;
    TDbVarInf  tInf_ValidFixeServiceBrakeTest;
    TBoolean aboRng_ValidFixeServiceBrakeTest[2];
    TBoolean boDef_ValidFixeServiceBrakeTest;
    TDbVarInf  tInf_ValidOsciParkingBrakeTest;
    TBoolean aboRng_ValidOsciParkingBrakeTest[2];
    TBoolean boDef_ValidOsciParkingBrakeTest;
    TDbVarInf  tInf_ValidFixeParkingBrakeTest;
    TBoolean aboRng_ValidFixeParkingBrakeTest[2];
    TBoolean boDef_ValidFixeParkingBrakeTest;
    TDbVarInf  tInf_SimuOsciServiceBrakeSelect;
    TBoolean aboRng_SimuOsciServiceBrakeSelect[2];
    TBoolean boDef_SimuOsciServiceBrakeSelect;
    TDbVarInf  tInf_SimuFixeServiceBrakeSelect;
    TBoolean aboRng_SimuFixeServiceBrakeSelect[2];
    TBoolean boDef_SimuFixeServiceBrakeSelect;
    TDbVarInf  tInf_SimuOsciParkBrakeSelect;
    TBoolean aboRng_SimuOsciParkBrakeSelect[2];
    TBoolean boDef_SimuOsciParkBrakeSelect;
    TDbVarInf  tInf_SimuFixeParkBrakeSelect;
    TBoolean aboRng_SimuFixeParkBrakeSelect[2];
    TBoolean boDef_SimuFixeParkBrakeSelect;
    TDbVarInf  tInf_Simu2ServiceBrakesSelect;
    TBoolean aboRng_Simu2ServiceBrakesSelect[2];
    TBoolean boDef_Simu2ServiceBrakesSelect;
    TDbVarInf  tInf_Simu2ParkBrakesSelect;
    TBoolean aboRng_Simu2ParkBrakesSelect[2];
    TBoolean boDef_Simu2ParkBrakesSelect;
    TDbVarInf  tInf_RetainPosJoyAdvance;
    EPosJoy aeRng_RetainPosJoyAdvance[2];
    EPosJoy eDef_RetainPosJoyAdvance;
    TDbVarInf  tInf_AcutalPosJoyAdvance;
    EPosJoy aeRng_AcutalPosJoyAdvance[2];
    EPosJoy eDef_AcutalPosJoyAdvance;
    TDbVarInf  tInf_ForceOsciServiceBrake;
    TBoolean aboRng_ForceOsciServiceBrake[2];
    TBoolean boDef_ForceOsciServiceBrake;
    TDbVarInf  tInf_ForceFixeServiceBrake;
    TBoolean aboRng_ForceFixeServiceBrake[2];
    TBoolean boDef_ForceFixeServiceBrake;
    TDbVarInf  tInf_ForceOsciParkBrake;
    TBoolean aboRng_ForceOsciParkBrake[2];
    TBoolean boDef_ForceOsciParkBrake;
    TDbVarInf  tInf_ForceFixeParkBrake;
    TBoolean aboRng_ForceFixeParkBrake[2];
    TBoolean boDef_ForceFixeParkBrake;
    TDbVarInf  tInf_StopMovementByBrakeTest;
    TBoolean aboRng_StopMovementByBrakeTest[2];
    TBoolean boDef_StopMovementByBrakeTest;
    TDbVarInf  tInf_AuthorizeTransaltionRail;
    TBoolean aboRng_AuthorizeTransaltionRail[2];
    TBoolean boDef_AuthorizeTransaltionRail;
    TDbVarInf  tInf_DeltaTransmissionPressure;
    TInt16 ai16Rng_DeltaTransmissionPressure[2];
    TInt16 i16Def_DeltaTransmissionPressure;
    TDbVarInf  tInf_ValidConditionEnableTestBrake;
    TBoolean aboRng_ValidConditionEnableTestBrake[2];
    TBoolean boDef_ValidConditionEnableTestBrake;
    TDbVarInf  tInf_TimeOutValidCondition;
    TBoolean aboRng_TimeOutValidCondition[2];
    TBoolean boDef_TimeOutValidCondition;
    TDbVarInf  tInf_PourcentCycleBrake;
    TUint8 au8Rng_PourcentCycleBrake[2];
    TUint8 u8Def_PourcentCycleBrake;
    TDbVarInf  tInf_Force2ndParkBrakeFixe;
    TBoolean aboRng_Force2ndParkBrakeFixe[2];
    TBoolean boDef_Force2ndParkBrakeFixe;
    TDbVarInf  tInf_Force2ndParkBrakeOsci;
    TBoolean aboRng_Force2ndParkBrakeOsci[2];
    TBoolean boDef_Force2ndParkBrakeOsci;
    TDbVarInf  tInf_ValidOsci2ndParkBrakeTest;
    TBoolean aboRng_ValidOsci2ndParkBrakeTest[2];
    TBoolean boDef_ValidOsci2ndParkBrakeTest;
    TDbVarInf  tInf_ValidFixe2ndParkBrakeTest;
    TBoolean aboRng_ValidFixe2ndParkBrakeTest[2];
    TBoolean boDef_ValidFixe2ndParkBrakeTest;
    TDbVarInf  tInf_PourcentCycle2ndParkBrake;
    TUint8 au8Rng_PourcentCycle2ndParkBrake[2];
    TUint8 u8Def_PourcentCycle2ndParkBrake;
    TDbVarInf  tInf_NeedTest2ndParkBrake;
    TBoolean aboRng_NeedTest2ndParkBrake[2];
    TBoolean boDef_NeedTest2ndParkBrake;
    TDbVarInf  tInf_Cycle2ndParkBrakeCritical;
    TBoolean aboRng_Cycle2ndParkBrakeCritical[2];
    TBoolean boDef_Cycle2ndParkBrakeCritical;
    TDbVarInf  tInf_AddParkBrakeActive;
    TBoolean aboRng_AddParkBrakeActive[2];
    TBoolean boDef_AddParkBrakeActive;
    TDbVarInf  tInf_ParkBrake2ndPressureActive;
    TBoolean aboRng_ParkBrake2ndPressureActive[2];
    TBoolean boDef_ParkBrake2ndPressureActive;
}TDbSetRamBrakeTest;

typedef struct
{
    TDbVarInf  tInf_MinTurretAngleConsistALO;
    TInt16 ai16Rng_MinTurretAngleConsistALO[2];
    TInt16 i16Def_MinTurretAngleConsistALO;
    TDbVarInf  tInf_MaxTurretAngleConsistALO;
    TInt16 ai16Rng_MaxTurretAngleConsistALO[2];
    TInt16 i16Def_MaxTurretAngleConsistALO;
    TDbVarInf  tInf_MinTurretAngleConsistMultilane;
    TInt16 ai16Rng_MinTurretAngleConsistMultilane[2];
    TInt16 i16Def_MinTurretAngleConsistMultilane;
    TDbVarInf  tInf_MaxTurretAngleConsistMultilane;
    TInt16 ai16Rng_MaxTurretAngleConsistMultilane[2];
    TInt16 i16Def_MaxTurretAngleConsistMultilane;
    TDbVarInf  tInf_ALOTurretRearZoneThres;
    TInt16 ai16Rng_ALOTurretRearZoneThres[2];
    TInt16 i16Def_ALOTurretRearZoneThres;
    TDbVarInf  tInf_ALOTurretRearZoneHyst;
    TInt16 ai16Rng_ALOTurretRearZoneHyst[2];
    TInt16 i16Def_ALOTurretRearZoneHyst;
    TDbVarInf  tInf_ALOTurretRearZoneSlowThres;
    TInt16 ai16Rng_ALOTurretRearZoneSlowThres[2];
    TInt16 i16Def_ALOTurretRearZoneSlowThres;
    TDbVarInf  tInf_ALOTurretFrontZoneThres;
    TInt16 ai16Rng_ALOTurretFrontZoneThres[2];
    TInt16 i16Def_ALOTurretFrontZoneThres;
    TDbVarInf  tInf_ALOTurretFrontZoneHyst;
    TInt16 ai16Rng_ALOTurretFrontZoneHyst[2];
    TInt16 i16Def_ALOTurretFrontZoneHyst;
    TDbVarInf  tInf_ALOTurretFrontZoneSlowThres;
    TInt16 ai16Rng_ALOTurretFrontZoneSlowThres[2];
    TInt16 i16Def_ALOTurretFrontZoneSlowThres;
    TDbVarInf  tInf_ALOArrowLowerZoneThres;
    TInt16 ai16Rng_ALOArrowLowerZoneThres[2];
    TInt16 i16Def_ALOArrowLowerZoneThres;
    TDbVarInf  tInf_ALOArrowLowerZoneHyst;
    TInt16 ai16Rng_ALOArrowLowerZoneHyst[2];
    TInt16 i16Def_ALOArrowLowerZoneHyst;
    TDbVarInf  tInf_ALOArrowLowerZoneSlowThres;
    TInt16 ai16Rng_ALOArrowLowerZoneSlowThres[2];
    TInt16 i16Def_ALOArrowLowerZoneSlowThres;
    TDbVarInf  tInf_ALOTurretRearEndStopThres;
    TInt16 ai16Rng_ALOTurretRearEndStopThres[2];
    TInt16 i16Def_ALOTurretRearEndStopThres;
    TDbVarInf  tInf_ALOTurretRearEndStopHyst;
    TInt16 ai16Rng_ALOTurretRearEndStopHyst[2];
    TInt16 i16Def_ALOTurretRearEndStopHyst;
    TDbVarInf  tInf_ALOTurretRearEndStopSlowThres;
    TInt16 ai16Rng_ALOTurretRearEndStopSlowThres[2];
    TInt16 i16Def_ALOTurretRearEndStopSlowThres;
    TDbVarInf  tInf_ALOTurretFrontEndStopThres;
    TInt16 ai16Rng_ALOTurretFrontEndStopThres[2];
    TInt16 i16Def_ALOTurretFrontEndStopThres;
    TDbVarInf  tInf_ALOTurretFrontEndStopHyst;
    TInt16 ai16Rng_ALOTurretFrontEndStopHyst[2];
    TInt16 i16Def_ALOTurretFrontEndStopHyst;
    TDbVarInf  tInf_ALOTurretFrontEndStopSlowThres;
    TInt16 ai16Rng_ALOTurretFrontEndStopSlowThres[2];
    TInt16 i16Def_ALOTurretFrontEndStopSlowThres;
    TDbVarInf  tInf_ALOTurretRearZoneStopThres;
    TInt16 ai16Rng_ALOTurretRearZoneStopThres[2];
    TInt16 i16Def_ALOTurretRearZoneStopThres;
    TDbVarInf  tInf_ALOTurretRearZoneStopHyst;
    TInt16 ai16Rng_ALOTurretRearZoneStopHyst[2];
    TInt16 i16Def_ALOTurretRearZoneStopHyst;
    TDbVarInf  tInf_ALOTurretFrontZoneStopThres;
    TInt16 ai16Rng_ALOTurretFrontZoneStopThres[2];
    TInt16 i16Def_ALOTurretFrontZoneStopThres;
    TDbVarInf  tInf_ALOTurretFrontZoneStopHyst;
    TInt16 ai16Rng_ALOTurretFrontZoneStopHyst[2];
    TInt16 i16Def_ALOTurretFrontZoneStopHyst;
    TDbVarInf  tInf_ALOArrowLowerZoneStopThres;
    TInt16 ai16Rng_ALOArrowLowerZoneStopThres[2];
    TInt16 i16Def_ALOArrowLowerZoneStopThres;
    TDbVarInf  tInf_ALOArrowLowerZoneStopHyst;
    TInt16 ai16Rng_ALOArrowLowerZoneStopHyst[2];
    TInt16 i16Def_ALOArrowLowerZoneStopHyst;
    TDbVarInf  tInf_ThresHighSlopeForArrowUp;
    TInt16 ai16Rng_ThresHighSlopeForArrowUp[2];
    TInt16 i16Def_ThresHighSlopeForArrowUp;
    TDbVarInf  tInf_HystHighSlopeForArrowUp;
    TInt16 ai16Rng_HystHighSlopeForArrowUp[2];
    TInt16 i16Def_HystHighSlopeForArrowUp;
}TDbSetNvParamRailWorkSafetyC0;

typedef struct
{
    TDbVarInf  tInf_RailWorkMode;
    ERailWorkMode aeRng_RailWorkMode[2];
    ERailWorkMode eDef_RailWorkMode;
    TDbVarInf  tInf_WrongTurretAbutBilateralMode;
    TBoolean aboRng_WrongTurretAbutBilateralMode[2];
    TBoolean boDef_WrongTurretAbutBilateralMode;
    TDbVarInf  tInf_WrongTurretAbutMultilaneMode;
    TBoolean aboRng_WrongTurretAbutMultilaneMode[2];
    TBoolean boDef_WrongTurretAbutMultilaneMode;
    TDbVarInf  tInf_WrongTurretAbutALOMode;
    TBoolean aboRng_WrongTurretAbutALOMode[2];
    TBoolean boDef_WrongTurretAbutALOMode;
    TDbVarInf  tInf_WrongBasketAbutBilateralMode;
    TBoolean aboRng_WrongBasketAbutBilateralMode[2];
    TBoolean boDef_WrongBasketAbutBilateralMode;
    TDbVarInf  tInf_WrongBasketAbutMultilaneMode;
    TBoolean aboRng_WrongBasketAbutMultilaneMode[2];
    TBoolean boDef_WrongBasketAbutMultilaneMode;
    TDbVarInf  tInf_WrongBasketAbutALOMode;
    TBoolean aboRng_WrongBasketAbutALOMode[2];
    TBoolean boDef_WrongBasketAbutALOMode;
    TDbVarInf  tInf_WrongAbutments;
    TBoolean aboRng_WrongAbutments[2];
    TBoolean boDef_WrongAbutments;
    TDbVarInf  tInf_WrongTurretPosMultilaneMode;
    TBoolean aboRng_WrongTurretPosMultilaneMode[2];
    TBoolean boDef_WrongTurretPosMultilaneMode;
    TDbVarInf  tInf_WrongBasketPosMultilaneMode;
    TBoolean aboRng_WrongBasketPosMultilaneMode[2];
    TBoolean boDef_WrongBasketPosMultilaneMode;
    TDbVarInf  tInf_WrongTurretPosALOMode;
    TBoolean aboRng_WrongTurretPosALOMode[2];
    TBoolean boDef_WrongTurretPosALOMode;
    TDbVarInf  tInf_WrongPosition;
    TBoolean aboRng_WrongPosition[2];
    TBoolean boDef_WrongPosition;
    TDbVarInf  tInf_ReduceSpeedRotTurretClockwise;
    TBoolean aboRng_ReduceSpeedRotTurretClockwise[2];
    TBoolean boDef_ReduceSpeedRotTurretClockwise;
    TDbVarInf  tInf_ReduceSpeedRotTurretCounterClock;
    TBoolean aboRng_ReduceSpeedRotTurretCounterClock[2];
    TBoolean boDef_ReduceSpeedRotTurretCounterClock;
    TDbVarInf  tInf_ReduceSpeedArrowArmDown;
    TBoolean aboRng_ReduceSpeedArrowArmDown[2];
    TBoolean boDef_ReduceSpeedArrowArmDown;
    TDbVarInf  tInf_StopRotTurretClockwise;
    TBoolean aboRng_StopRotTurretClockwise[2];
    TBoolean boDef_StopRotTurretClockwise;
    TDbVarInf  tInf_StopRotTurretCounterClockwise;
    TBoolean aboRng_StopRotTurretCounterClockwise[2];
    TBoolean boDef_StopRotTurretCounterClockwise;
    TDbVarInf  tInf_StopRotBasketClockwise;
    TBoolean aboRng_StopRotBasketClockwise[2];
    TBoolean boDef_StopRotBasketClockwise;
    TDbVarInf  tInf_StopRotBasketCounterClockwise;
    TBoolean aboRng_StopRotBasketCounterClockwise[2];
    TBoolean boDef_StopRotBasketCounterClockwise;
    TDbVarInf  tInf_StopArrowArmDown;
    TBoolean aboRng_StopArrowArmDown[2];
    TBoolean boDef_StopArrowArmDown;
    TDbVarInf  tInf_StopTelescopeOut;
    TBoolean aboRng_StopTelescopeOut[2];
    TBoolean boDef_StopTelescopeOut;
    TDbVarInf  tInf_TurretInRearZone;
    TBoolean aboRng_TurretInRearZone[2];
    TBoolean boDef_TurretInRearZone;
    TDbVarInf  tInf_TurretInFrontZone;
    TBoolean aboRng_TurretInFrontZone[2];
    TBoolean boDef_TurretInFrontZone;
    TDbVarInf  tInf_ArrowArmInLowerZone;
    TBoolean aboRng_ArrowArmInLowerZone[2];
    TBoolean boDef_ArrowArmInLowerZone;
    TDbVarInf  tInf_TestFranceConfig;
    TBoolean aboRng_TestFranceConfig[2];
    TBoolean boDef_TestFranceConfig;
    TDbVarInf  tInf_TestAbutementBasketTrackSide;
    TBoolean aboRng_TestAbutementBasketTrackSide[2];
    TBoolean boDef_TestAbutementBasketTrackSide;
    TDbVarInf  tInf_TestAbutementBasketCenteredSide;
    TBoolean aboRng_TestAbutementBasketCenteredSide[2];
    TBoolean boDef_TestAbutementBasketCenteredSide;
    TDbVarInf  tInf_TestBasketLeftSideSensor;
    TBoolean aboRng_TestBasketLeftSideSensor[2];
    TBoolean boDef_TestBasketLeftSideSensor;
    TDbVarInf  tInf_TestBasketRightSideSensor;
    TBoolean aboRng_TestBasketRightSideSensor[2];
    TBoolean boDef_TestBasketRightSideSensor;
    TDbVarInf  tInf_TestTelescopInSensor;
    TBoolean aboRng_TestTelescopInSensor[2];
    TBoolean boDef_TestTelescopInSensor;
    TDbVarInf  tInf_TestTurretAngularPosition;
    TInt16 ai16Rng_TestTurretAngularPosition[2];
    TInt16 i16Def_TestTurretAngularPosition;
    TDbVarInf  tInf_TestArrowArmAngularPosition;
    TInt16 ai16Rng_TestArrowArmAngularPosition[2];
    TInt16 i16Def_TestArrowArmAngularPosition;
    TDbVarInf  tInf_AbutmentWorkMode;
    ERailWorkMode aeRng_AbutmentWorkMode[2];
    ERailWorkMode eDef_AbutmentWorkMode;
    TDbVarInf  tInf_HighSlopeForArrowUp;
    TBoolean aboRng_HighSlopeForArrowUp[2];
    TBoolean boDef_HighSlopeForArrowUp;
}TDbSetRamRailWorkSafetyC0;

typedef struct
{
    TDbVarInf  tInf_DeltaOffRailTransportZone;
    TBoolean aboRng_DeltaOffRailTransportZone[2];
    TBoolean boDef_DeltaOffRailTransportZone;
    TDbVarInf  tInf_ArrowOffRailTransportZone;
    TBoolean aboRng_ArrowOffRailTransportZone[2];
    TBoolean boDef_ArrowOffRailTransportZone;
    TDbVarInf  tInf_TransportPosition;
    ETransportPosition aeRng_TransportPosition[2];
    ETransportPosition eDef_TransportPosition;
}TDbSetRamTransportPosC0;

typedef struct
{
    TDbVarInf  tInf_DeltaArmTres;
    TInt16 ai16Rng_DeltaArmTres[2];
    TInt16 i16Def_DeltaArmTres;
    TDbVarInf  tInf_DeltaArmHyst;
    TInt16 ai16Rng_DeltaArmHyst[2];
    TInt16 i16Def_DeltaArmHyst;
    TDbVarInf  tInf_ArrowArmThres;
    TInt16 ai16Rng_ArrowArmThres[2];
    TInt16 i16Def_ArrowArmThres;
    TDbVarInf  tInf_ArrowArmHyst;
    TInt16 ai16Rng_ArrowArmHyst[2];
    TInt16 i16Def_ArrowArmHyst;
    TDbVarInf  tInf_TurretAngleThres;
    TInt16 ai16Rng_TurretAngleThres[2];
    TInt16 i16Def_TurretAngleThres;
}TDbSetNvParamTransportPosC0;

typedef struct
{
    TDbVarInf  tInf_BreakInBrakeOffRailMode;
    TBoolean aboRng_BreakInBrakeOffRailMode[2];
    TBoolean boDef_BreakInBrakeOffRailMode;
    TDbVarInf  tInf_ForceOsciServiceBrake;
    TBoolean aboRng_ForceOsciServiceBrake[2];
    TBoolean boDef_ForceOsciServiceBrake;
    TDbVarInf  tInf_ForceFixeServiceBrake;
    TBoolean aboRng_ForceFixeServiceBrake[2];
    TBoolean boDef_ForceFixeServiceBrake;
    TDbVarInf  tInf_ForceOsciParkBrake;
    TBoolean aboRng_ForceOsciParkBrake[2];
    TBoolean boDef_ForceOsciParkBrake;
    TDbVarInf  tInf_ForceFixeParkBrake;
    TBoolean aboRng_ForceFixeParkBrake[2];
    TBoolean boDef_ForceFixeParkBrake;
    TDbVarInf  tInf_StopMovementByBreakInBrake;
    TBoolean aboRng_StopMovementByBreakInBrake[2];
    TBoolean boDef_StopMovementByBreakInBrake;
    TDbVarInf  tInf_IncoherencePosAxleAndTestMode;
    TBoolean aboRng_IncoherencePosAxleAndTestMode[2];
    TBoolean boDef_IncoherencePosAxleAndTestMode;
    TDbVarInf  tInf_AdvancementPeriod;
    TUint16 au16Rng_AdvancementPeriod[2];
    TUint16 u16Def_AdvancementPeriod;
    TDbVarInf  tInf_BreakInBrakeRunning;
    TBoolean aboRng_BreakInBrakeRunning[2];
    TBoolean boDef_BreakInBrakeRunning;
    TDbVarInf  tInf_SimuOsciServiceBrakeSelect;
    TBoolean aboRng_SimuOsciServiceBrakeSelect[2];
    TBoolean boDef_SimuOsciServiceBrakeSelect;
    TDbVarInf  tInf_SimuFixeServiceBrakeSelect;
    TBoolean aboRng_SimuFixeServiceBrakeSelect[2];
    TBoolean boDef_SimuFixeServiceBrakeSelect;
    TDbVarInf  tInf_Simu2ServiceBrakesSelect;
    TBoolean aboRng_Simu2ServiceBrakesSelect[2];
    TBoolean boDef_Simu2ServiceBrakesSelect;
    TDbVarInf  tInf_AuthorizeTransRailByBreakInBrake;
    TBoolean aboRng_AuthorizeTransRailByBreakInBrake[2];
    TBoolean boDef_AuthorizeTransRailByBreakInBrake;
    TDbVarInf  tInf_ServiceBrakeSelected;
    EBrakeTestSelected aeRng_ServiceBrakeSelected[2];
    EBrakeTestSelected eDef_ServiceBrakeSelected;
    TDbVarInf  tInf_AdvancementPeriodMs10;
    TUint16 au16Rng_AdvancementPeriodMs10[2];
    TUint16 u16Def_AdvancementPeriodMs10;
    TDbVarInf  tInf_OsciServiceBrakinBrakeOn;
    TBoolean aboRng_OsciServiceBrakinBrakeOn[2];
    TBoolean boDef_OsciServiceBrakinBrakeOn;
    TDbVarInf  tInf_FixeServiceBrakinBrakeOn;
    TBoolean aboRng_FixeServiceBrakinBrakeOn[2];
    TBoolean boDef_FixeServiceBrakinBrakeOn;
    TDbVarInf  tInf_BothServiceBrakinBrakeOn;
    TBoolean aboRng_BothServiceBrakinBrakeOn[2];
    TBoolean boDef_BothServiceBrakinBrakeOn;
}TDbSetRamBreakInBrakeC0;

typedef struct
{
    TDbVarInf  tInf_SelectedControlPost;
    EControlPost aeRng_SelectedControlPost[2];
    EControlPost eDef_SelectedControlPost;
    TDbVarInf  tInf_EnableBuzzer;
    TBoolean aboRng_EnableBuzzer[2];
    TBoolean boDef_EnableBuzzer;
    TDbVarInf  tInf_SlopeIsLow;
    TBoolean aboRng_SlopeIsLow[2];
    TBoolean boDef_SlopeIsLow;
    TDbVarInf  tInf_SlopeIsHigh;
    TBoolean aboRng_SlopeIsHigh[2];
    TBoolean boDef_SlopeIsHigh;
    TDbVarInf  tInf_AllNacelleCommandsDisabled;
    TBoolean aboRng_AllNacelleCommandsDisabled[2];
    TBoolean boDef_AllNacelleCommandsDisabled;
    TDbVarInf  tInf_AllRadioCommandsDisabled;
    TBoolean aboRng_AllRadioCommandsDisabled[2];
    TBoolean boDef_AllRadioCommandsDisabled;
    TDbVarInf  tInf_AllTurretCommandsDisabled;
    TBoolean aboRng_AllTurretCommandsDisabled[2];
    TBoolean boDef_AllTurretCommandsDisabled;
    TDbVarInf  tInf_SimuSlope;
    TInt16 ai16Rng_SimuSlope[2];
    TInt16 i16Def_SimuSlope;
    TDbVarInf  tInf_AllConsigneAdvancementDisabled;
    TBoolean aboRng_AllConsigneAdvancementDisabled[2];
    TBoolean boDef_AllConsigneAdvancementDisabled;
    TDbVarInf  tInf_AuthorizedRadioElementsPosition;
    TBoolean aboRng_AuthorizedRadioElementsPosition[2];
    TBoolean boDef_AuthorizedRadioElementsPosition;
}TDbSetRamSelectControlPost;

typedef struct
{
    TDbVarInf  tInf_SlopeLowThresAbs;
    TInt16 ai16Rng_SlopeLowThresAbs[2];
    TInt16 i16Def_SlopeLowThresAbs;
    TDbVarInf  tInf_SlopeLowHystRel;
    TInt16 ai16Rng_SlopeLowHystRel[2];
    TInt16 i16Def_SlopeLowHystRel;
    TDbVarInf  tInf_SlopeHighThresAbs;
    TInt16 ai16Rng_SlopeHighThresAbs[2];
    TInt16 i16Def_SlopeHighThresAbs;
    TDbVarInf  tInf_SlopeHighHystRel;
    TInt16 ai16Rng_SlopeHighHystRel[2];
    TInt16 i16Def_SlopeHighHystRel;
    TDbVarInf  tInf_SlopeCrawlerMaxTres;
    TUint16 au16Rng_SlopeCrawlerMaxTres[2];
    TUint16 u16Def_SlopeCrawlerMaxTres;
}TDbSetNvParamSelectControlPost;

typedef struct
{
    TDbVarInf  tInf_LifeByte;
    TUint8 au8Rng_LifeByte[2];
    TUint8 u8Def_LifeByte;
    TDbVarInf  tInf_gDelta_Arm_Move_Up;
    TBoolean aboRng_gDelta_Arm_Move_Up[2];
    TBoolean boDef_gDelta_Arm_Move_Up;
    TDbVarInf  tInf_gDelta_Arm_Move_Down;
    TBoolean aboRng_gDelta_Arm_Move_Down[2];
    TBoolean boDef_gDelta_Arm_Move_Down;
    TDbVarInf  tInf_gArrow_Move_Up;
    TBoolean aboRng_gArrow_Move_Up[2];
    TBoolean boDef_gArrow_Move_Up;
    TDbVarInf  tInf_gArrow_Move_Down;
    TBoolean aboRng_gArrow_Move_Down[2];
    TBoolean boDef_gArrow_Move_Down;
    TDbVarInf  tInf_gPendular_Move_Up;
    TBoolean aboRng_gPendular_Move_Up[2];
    TBoolean boDef_gPendular_Move_Up;
    TDbVarInf  tInf_gPendular_Move_Down;
    TBoolean aboRng_gPendular_Move_Down[2];
    TBoolean boDef_gPendular_Move_Down;
    TDbVarInf  tInf_gTelescope_Move_Out;
    TBoolean aboRng_gTelescope_Move_Out[2];
    TBoolean boDef_gTelescope_Move_Out;
    TDbVarInf  tInf_gTelescope_Move_In;
    TBoolean aboRng_gTelescope_Move_In[2];
    TBoolean boDef_gTelescope_Move_In;
    TDbVarInf  tInf_gBasket_Inclinaison_Move_Up;
    TBoolean aboRng_gBasket_Inclinaison_Move_Up[2];
    TBoolean boDef_gBasket_Inclinaison_Move_Up;
    TDbVarInf  tInf_gBasket_Inclinaison_Move_Down;
    TBoolean aboRng_gBasket_Inclinaison_Move_Down[2];
    TBoolean boDef_gBasket_Inclinaison_Move_Down;
    TDbVarInf  tInf_gTurret_Rotate_ClockWise;
    TBoolean aboRng_gTurret_Rotate_ClockWise[2];
    TBoolean boDef_gTurret_Rotate_ClockWise;
    TDbVarInf  tInf_gTurret_Rotate_Counter_ClockWise;
    TBoolean aboRng_gTurret_Rotate_Counter_ClockWise[2];
    TBoolean boDef_gTurret_Rotate_Counter_ClockWise;
    TDbVarInf  tInf_gBasket_Rotate_ClockWise;
    TBoolean aboRng_gBasket_Rotate_ClockWise[2];
    TBoolean boDef_gBasket_Rotate_ClockWise;
    TDbVarInf  tInf_gBasket_Rotate_Counter_ClockWise;
    TBoolean aboRng_gBasket_Rotate_Counter_ClockWise[2];
    TBoolean boDef_gBasket_Rotate_Counter_ClockWise;
    TDbVarInf  tInf_gKeyRpmSelect;
    TBoolean aboRng_gKeyRpmSelect[2];
    TBoolean boDef_gKeyRpmSelect;
    TDbVarInf  tInf_gKeyRpmOff;
    TBoolean aboRng_gKeyRpmOff[2];
    TBoolean boDef_gKeyRpmOff;
    TDbVarInf  tInf_gForcingWhiteRaillight;
    TBoolean aboRng_gForcingWhiteRaillight[2];
    TBoolean boDef_gForcingWhiteRaillight;
    TDbVarInf  tInf_gForcingNeons;
    TBoolean aboRng_gForcingNeons[2];
    TBoolean boDef_gForcingNeons;
    TDbVarInf  tInf_gKeyCalibMin;
    TBoolean aboRng_gKeyCalibMin[2];
    TBoolean boDef_gKeyCalibMin;
    TDbVarInf  tInf_gKeyCalibMax;
    TBoolean aboRng_gKeyCalibMax[2];
    TBoolean boDef_gKeyCalibMax;
    TDbVarInf  tInf_gKeyCalibValid;
    TBoolean aboRng_gKeyCalibValid[2];
    TBoolean boDef_gKeyCalibValid;
    TDbVarInf  tInf_gElementChoice;
    TUint8 au8Rng_gElementChoice[2];
    TUint8 u8Def_gElementChoice;
    TDbVarInf  tInf_gKeyCalibMax2;
    TBoolean aboRng_gKeyCalibMax2[2];
    TBoolean boDef_gKeyCalibMax2;
    TDbVarInf  tInf_gKeySlopeLgReset;
    TBoolean aboRng_gKeySlopeLgReset[2];
    TBoolean boDef_gKeySlopeLgReset;
    TDbVarInf  tInf_gKeySlopeTrReset;
    TBoolean aboRng_gKeySlopeTrReset[2];
    TBoolean boDef_gKeySlopeTrReset;
}TDbSetRamEvision4C0;

typedef struct
{
    TDbVarInf  tInf_TempTrackOverFaultThres;
    TUint16 au16Rng_TempTrackOverFaultThres[2];
    TUint16 u16Def_TempTrackOverFaultThres;
    TDbVarInf  tInf_TempRailOverFaultThres;
    TUint16 au16Rng_TempRailOverFaultThres[2];
    TUint16 u16Def_TempRailOverFaultThres;
    TDbVarInf  tInf_TempTrackOverAlarmThres;
    TUint16 au16Rng_TempTrackOverAlarmThres[2];
    TUint16 u16Def_TempTrackOverAlarmThres;
    TDbVarInf  tInf_TempRailOverAlarmThres;
    TUint16 au16Rng_TempRailOverAlarmThres[2];
    TUint16 u16Def_TempRailOverAlarmThres;
    TDbVarInf  tInf_SpeedSensorsToleranceThres;
    TUint16 au16Rng_SpeedSensorsToleranceThres[2];
    TUint16 u16Def_SpeedSensorsToleranceThres;
    TDbVarInf  tInf_SlopeLongToleranceThres;
    TUint16 au16Rng_SlopeLongToleranceThres[2];
    TUint16 u16Def_SlopeLongToleranceThres;
    TDbVarInf  tInf_BlockOscillationAxlePressure;
    TUint16 au16Rng_BlockOscillationAxlePressure[2];
    TUint16 u16Def_BlockOscillationAxlePressure;
    TDbVarInf  tInf_UnblockOscillationAxlePressure;
    TUint16 au16Rng_UnblockOscillationAxlePressure[2];
    TUint16 u16Def_UnblockOscillationAxlePressure;
    TDbVarInf  tInf_MinServiceBrakeFaultPressure;
    TUint16 au16Rng_MinServiceBrakeFaultPressure[2];
    TUint16 u16Def_MinServiceBrakeFaultPressure;
    TDbVarInf  tInf_MaxServiceBrakeFaultPressure;
    TUint16 au16Rng_MaxServiceBrakeFaultPressure[2];
    TUint16 u16Def_MaxServiceBrakeFaultPressure;
    TDbVarInf  tInf_SlopeTransToleranceThres;
    TUint16 au16Rng_SlopeTransToleranceThres[2];
    TUint16 u16Def_SlopeTransToleranceThres;
    TDbVarInf  tInf_MinTransPressureWithoutHook;
    TInt16 ai16Rng_MinTransPressureWithoutHook[2];
    TInt16 i16Def_MinTransPressureWithoutHook;
    TDbVarInf  tInf_TurretSensorToleranceThres;
    TUint16 au16Rng_TurretSensorToleranceThres[2];
    TUint16 u16Def_TurretSensorToleranceThres;
    TDbVarInf  tInf_MinAlarmJoyDeltaArmPrctBat;
    TUint8 au8Rng_MinAlarmJoyDeltaArmPrctBat[2];
    TUint8 u8Def_MinAlarmJoyDeltaArmPrctBat;
    TDbVarInf  tInf_MaxAlarmJoyDeltaArmPrctBat;
    TUint8 au8Rng_MaxAlarmJoyDeltaArmPrctBat[2];
    TUint8 u8Def_MaxAlarmJoyDeltaArmPrctBat;
    TDbVarInf  tInf_MinAlarmJoyArrowArmPrctBat;
    TUint8 au8Rng_MinAlarmJoyArrowArmPrctBat[2];
    TUint8 u8Def_MinAlarmJoyArrowArmPrctBat;
    TDbVarInf  tInf_MaxAlarmJoyArrowArmPrctBat;
    TUint8 au8Rng_MaxAlarmJoyArrowArmPrctBat[2];
    TUint8 u8Def_MaxAlarmJoyArrowArmPrctBat;
    TDbVarInf  tInf_MinAlarmJoyTelescopeArmPrctBat;
    TUint8 au8Rng_MinAlarmJoyTelescopeArmPrctBat[2];
    TUint8 u8Def_MinAlarmJoyTelescopeArmPrctBat;
    TDbVarInf  tInf_MaxAlarmJoyTelescopeArmPrctBat;
    TUint8 au8Rng_MaxAlarmJoyTelescopeArmPrctBat[2];
    TUint8 u8Def_MaxAlarmJoyTelescopeArmPrctBat;
    TDbVarInf  tInf_MinAlarmJoyRotTurretArmPrctBat;
    TUint8 au8Rng_MinAlarmJoyRotTurretArmPrctBat[2];
    TUint8 u8Def_MinAlarmJoyRotTurretArmPrctBat;
    TDbVarInf  tInf_MaxAlarmJoyRotTurretArmPrctBat;
    TUint8 au8Rng_MaxAlarmJoyRotTurretArmPrctBat[2];
    TUint8 u8Def_MaxAlarmJoyRotTurretArmPrctBat;
    TDbVarInf  tInf_MinAlarmJoyAdvancementPrctBat;
    TUint8 au8Rng_MinAlarmJoyAdvancementPrctBat[2];
    TUint8 u8Def_MinAlarmJoyAdvancementPrctBat;
    TDbVarInf  tInf_MaxAlarmJoyAdvancementPrctBat;
    TUint8 au8Rng_MaxAlarmJoyAdvancementPrctBat[2];
    TUint8 u8Def_MaxAlarmJoyAdvancementPrctBat;
    TDbVarInf  tInf_HystTempTrans;
    TUint16 au16Rng_HystTempTrans[2];
    TUint16 u16Def_HystTempTrans;
    TDbVarInf  tInf_ReduceTrackSpeedPercent;
    TUint8 au8Rng_ReduceTrackSpeedPercent[2];
    TUint8 u8Def_ReduceTrackSpeedPercent;
    TDbVarInf  tInf_CptPressureBrakeFaultMax;
    TUint16 au16Rng_CptPressureBrakeFaultMax[2];
    TUint16 u16Def_CptPressureBrakeFaultMax;
    TDbVarInf  tInf_BypassAlarmActiveC0;
    TBoolean aboRng_BypassAlarmActiveC0[2];
    TBoolean boDef_BypassAlarmActiveC0;
    TDbVarInf  tInf_TimeBypassFault;
    TUint16 au16Rng_TimeBypassFault[2];
    TUint16 u16Def_TimeBypassFault;
    TDbVarInf  tInf_AU_THER_PRESSION_DEF_TRANS;
    TInt16 ai16Rng_AU_THER_PRESSION_DEF_TRANS[2];
    TInt16 i16Def_AU_THER_PRESSION_DEF_TRANS;
    TDbVarInf  tInf_AU_ELEC_PRESSION_DEF_DMC;
    TInt16 ai16Rng_AU_ELEC_PRESSION_DEF_DMC[2];
    TInt16 i16Def_AU_ELEC_PRESSION_DEF_DMC;
    TDbVarInf  tInf_cptTimeDetectPumpTransMax;
    TUint16 au16Rng_cptTimeDetectPumpTransMax[2];
    TUint16 u16Def_cptTimeDetectPumpTransMax;
    TDbVarInf  tInf_cptTimeDetectPvgTransMax;
    TUint16 au16Rng_cptTimeDetectPvgTransMax[2];
    TUint16 u16Def_cptTimeDetectPvgTransMax;
}TDbSetNvParamAlarmC0;

typedef struct
{
    TDbVarInf  tInf_RamEcuAlarmC0_1;
    TBoolean aboRng_RamEcuAlarmC0_1[2];
    TBoolean boDef_RamEcuAlarmC0_1;
    TDbVarInf  tInf_FaultPumpTrans;
    TBoolean aboRng_FaultPumpTrans[2];
    TBoolean boDef_FaultPumpTrans;
    TDbVarInf  tInf_TimeDetectPumpTrans;
    TBoolean aboRng_TimeDetectPumpTrans[2];
    TBoolean boDef_TimeDetectPumpTrans;
    TDbVarInf  tInf_MemFaultThermicPumpTrans;
    TBoolean aboRng_MemFaultThermicPumpTrans[2];
    TBoolean boDef_MemFaultThermicPumpTrans;
    TDbVarInf  tInf_FaultPvgTransElectric;
    TBoolean aboRng_FaultPvgTransElectric[2];
    TBoolean boDef_FaultPvgTransElectric;
    TDbVarInf  tInf_TimeDetectPvgTrans;
    TBoolean aboRng_TimeDetectPvgTrans[2];
    TBoolean boDef_TimeDetectPvgTrans;
    TDbVarInf  tInf_MemFaultDMCTransElectric;
    TBoolean aboRng_MemFaultDMCTransElectric[2];
    TBoolean boDef_MemFaultDMCTransElectric;
    TDbVarInf  tInf_FaultThermicPumpOrElecticDmc;
    TBoolean aboRng_FaultThermicPumpOrElecticDmc[2];
    TBoolean boDef_FaultThermicPumpOrElecticDmc;
}TDbSetRamEcuAlarmC0;

typedef struct
{
    TDbVarInf  tInf_Dm_Inc_Pos_Folded_Delta_Arrow;
    TBoolean aboRng_Dm_Inc_Pos_Folded_Delta_Arrow[2];
    TBoolean boDef_Dm_Inc_Pos_Folded_Delta_Arrow;
    TDbVarInf  tInf_Dm_Active_Help;
    TBoolean aboRng_Dm_Active_Help[2];
    TBoolean boDef_Dm_Active_Help;
    TDbVarInf  tInf_Dm_Ev_Bypass_Fault;
    TBoolean aboRng_Dm_Ev_Bypass_Fault[2];
    TBoolean boDef_Dm_Ev_Bypass_Fault;
    TDbVarInf  tInf_OutOfRangeTransmissionPressure;
    TBoolean aboRng_OutOfRangeTransmissionPressure[2];
    TBoolean boDef_OutOfRangeTransmissionPressure;
    TDbVarInf  tInf_Dm_Overload_Detected_By_C1;
    TBoolean aboRng_Dm_Overload_Detected_By_C1[2];
    TBoolean boDef_Dm_Overload_Detected_By_C1;
}TDbSetRamEcuC0RcvFailluresFromC1;

typedef struct
{
    TDbVarInf  tInf_ErrorCodeInit;
    TUint16 au16Rng_ErrorCodeInit[2];
    TUint16 u16Def_ErrorCodeInit;
    TDbVarInf  tInf_ErrorCodeWrite;
    TUint16 au16Rng_ErrorCodeWrite[2];
    TUint16 u16Def_ErrorCodeWrite;
    TDbVarInf  tInf_RetDataBytesSent;
    TUint16 au16Rng_RetDataBytesSent[2];
    TUint16 u16Def_RetDataBytesSent;
    TDbVarInf  tInf_DisplayedDigit1;
    TUint8 au8Rng_DisplayedDigit1[2];
    TUint8 u8Def_DisplayedDigit1;
    TDbVarInf  tInf_DisplayedDigit2;
    TUint8 au8Rng_DisplayedDigit2[2];
    TUint8 u8Def_DisplayedDigit2;
    TDbVarInf  tInf_DisplayedDigit3;
    TUint8 au8Rng_DisplayedDigit3[2];
    TUint8 u8Def_DisplayedDigit3;
    TDbVarInf  tInf_DisplayedDigit4;
    TUint8 au8Rng_DisplayedDigit4[2];
    TUint8 u8Def_DisplayedDigit4;
    TDbVarInf  tInf_SentDataArray;
    TUint8 aau8Rng_SentDataArray[8][2];
    TUint8 au8Def_SentDataArray[8];
}TDbSetRamMastDisplayMeasureC0;

typedef struct
{
    TDbVarInf  tInf_MastDisplayRefreshCycleTime;
    TUint32 au32Rng_MastDisplayRefreshCycleTime[2];
    TUint32 u32Def_MastDisplayRefreshCycleTime;
}TDbSetNvParamMastDisplayC0;

typedef struct
{
    TDbVarInf  tInf_NoMovementRunning;
    TBoolean aboRng_NoMovementRunning[2];
    TBoolean boDef_NoMovementRunning;
    TDbVarInf  tInf_StopMoveLimitEnvelop;
    TBoolean aboRng_StopMoveLimitEnvelop[2];
    TBoolean boDef_StopMoveLimitEnvelop;
    TDbVarInf  tInf_TransmissionPressureFault;
    TBoolean aboRng_TransmissionPressureFault[2];
    TBoolean boDef_TransmissionPressureFault;
    TDbVarInf  tInf_LynxOnAllMvts;
    TBoolean aboRng_LynxOnAllMvts[2];
    TBoolean boDef_LynxOnAllMvts;
    TDbVarInf  tInf_Signal_4;
    TBoolean aboRng_Signal_4[2];
    TBoolean boDef_Signal_4;
    TDbVarInf  tInf_Signal_5;
    TBoolean aboRng_Signal_5[2];
    TBoolean boDef_Signal_5;
    TDbVarInf  tInf_Signal_6;
    TBoolean aboRng_Signal_6[2];
    TBoolean boDef_Signal_6;
    TDbVarInf  tInf_Signal_7;
    TBoolean aboRng_Signal_7[2];
    TBoolean boDef_Signal_7;
    TDbVarInf  tInf_Signal_8;
    TUint8 au8Rng_Signal_8[2];
    TUint8 u8Def_Signal_8;
    TDbVarInf  tInf_BypassPressureSensorValue;
    TInt16 ai16Rng_BypassPressureSensorValue[2];
    TInt16 i16Def_BypassPressureSensorValue;
    TDbVarInf  tInf_Signal_10;
    TInt16 ai16Rng_Signal_10[2];
    TInt16 i16Def_Signal_10;
    TDbVarInf  tInf_Signal_11;
    TInt16 ai16Rng_Signal_11[2];
    TInt16 i16Def_Signal_11;
    TDbVarInf  tInf_PerformAutoriseTransArrow;
    TBoolean aboRng_PerformAutoriseTransArrow[2];
    TBoolean boDef_PerformAutoriseTransArrow;
    TDbVarInf  tInf_ValidTelescopeSectorSlope;
    TBoolean aboRng_ValidTelescopeSectorSlope[2];
    TBoolean boDef_ValidTelescopeSectorSlope;
    TDbVarInf  tInf_ValidTelescopeFirstSectorSlope;
    TBoolean aboRng_ValidTelescopeFirstSectorSlope[2];
    TBoolean boDef_ValidTelescopeFirstSectorSlope;
    TDbVarInf  tInf_PostInterdictionMastSNCF;
    TBoolean aboRng_PostInterdictionMastSNCF[2];
    TBoolean boDef_PostInterdictionMastSNCF;
    TDbVarInf  tInf_InterdictOfNacelTurretPost;
    TBoolean aboRng_InterdictOfNacelTurretPost[2];
    TBoolean boDef_InterdictOfNacelTurretPost;
    TDbVarInf  tInf_MastPanthoFoldedSNCF;
    TBoolean aboRng_MastPanthoFoldedSNCF[2];
    TBoolean boDef_MastPanthoFoldedSNCF;
    TDbVarInf  tInf_AccuBrakeSensorPressureValue;
    TInt16 ai16Rng_AccuBrakeSensorPressureValue[2];
    TInt16 i16Def_AccuBrakeSensorPressureValue;
}TDbSetRamData4C0RcvFromC1;

typedef struct
{
    TDbVarInf  tInf_MaxPvgTransRailElectricAv;
    TUint8 au8Rng_MaxPvgTransRailElectricAv[2];
    TUint8 u8Def_MaxPvgTransRailElectricAv;
    TDbVarInf  tInf_MaxPvgTransRailElectricAr;
    TUint8 au8Rng_MaxPvgTransRailElectricAr[2];
    TUint8 u8Def_MaxPvgTransRailElectricAr;
    TDbVarInf  tInf_MinPvgTransRailElectricAv;
    TUint8 au8Rng_MinPvgTransRailElectricAv[2];
    TUint8 u8Def_MinPvgTransRailElectricAv;
    TDbVarInf  tInf_MinPvgTransRailElectricAr;
    TUint8 au8Rng_MinPvgTransRailElectricAr[2];
    TUint8 u8Def_MinPvgTransRailElectricAr;
    TDbVarInf  tInf_TransRailElectricRampTimeAcc;
    TUint16 au16Rng_TransRailElectricRampTimeAcc[2];
    TUint16 u16Def_TransRailElectricRampTimeAcc;
    TDbVarInf  tInf_TransRailElectricRampTimeDec;
    TUint16 au16Rng_TransRailElectricRampTimeDec[2];
    TUint16 u16Def_TransRailElectricRampTimeDec;
    TDbVarInf  tInf_TransRailElectricRampTimeStop;
    TUint16 au16Rng_TransRailElectricRampTimeStop[2];
    TUint16 u16Def_TransRailElectricRampTimeStop;
    TDbVarInf  tInf_ElectricPumpPressureMax;
    TUint16 au16Rng_ElectricPumpPressureMax[2];
    TUint16 u16Def_ElectricPumpPressureMax;
    TDbVarInf  tInf_ElectricPumpPressureHyst;
    TUint16 au16Rng_ElectricPumpPressureHyst[2];
    TUint16 u16Def_ElectricPumpPressureHyst;
    TDbVarInf  tInf_ELECTRIC_MOTOR_RPM_TRANS_MAX;
    TUint16 au16Rng_ELECTRIC_MOTOR_RPM_TRANS_MAX[2];
    TUint16 u16Def_ELECTRIC_MOTOR_RPM_TRANS_MAX;
    TDbVarInf  tInf_ELECTRIC_MOTOR_RPM_TRANS_MIN;
    TUint16 au16Rng_ELECTRIC_MOTOR_RPM_TRANS_MIN[2];
    TUint16 u16Def_ELECTRIC_MOTOR_RPM_TRANS_MIN;
    TDbVarInf  tInf_MIN_PVG_TRANS_HIGH_50;
    TUint8 au8Rng_MIN_PVG_TRANS_HIGH_50[2];
    TUint8 u8Def_MIN_PVG_TRANS_HIGH_50;
    TDbVarInf  tInf_MIN_PVG_TRANS_LOW_50;
    TUint8 au8Rng_MIN_PVG_TRANS_LOW_50[2];
    TUint8 u8Def_MIN_PVG_TRANS_LOW_50;
    TDbVarInf  tInf_RAMP_TIME_REGEN_THERMIC;
    TUint16 au16Rng_RAMP_TIME_REGEN_THERMIC[2];
    TUint16 u16Def_RAMP_TIME_REGEN_THERMIC;
    TDbVarInf  tInf_RegenPumpPressureMax;
    TUint16 au16Rng_RegenPumpPressureMax[2];
    TUint16 u16Def_RegenPumpPressureMax;
    TDbVarInf  tInf_RegenPumpPressureReset;
    TUint16 au16Rng_RegenPumpPressureReset[2];
    TUint16 u16Def_RegenPumpPressureReset;
    TDbVarInf  tInf_CURRENT_RESET_REGEN_THERMIC;
    TUint16 au16Rng_CURRENT_RESET_REGEN_THERMIC[2];
    TUint16 u16Def_CURRENT_RESET_REGEN_THERMIC;
    TDbVarInf  tInf_CURRENT_MIN_REGEN_THERMIC;
    TUint16 au16Rng_CURRENT_MIN_REGEN_THERMIC[2];
    TUint16 u16Def_CURRENT_MIN_REGEN_THERMIC;
    TDbVarInf  tInf_CURRENT_MAX_REGEN_THERMIC;
    TUint16 au16Rng_CURRENT_MAX_REGEN_THERMIC[2];
    TUint16 u16Def_CURRENT_MAX_REGEN_THERMIC;
    TDbVarInf  tInf_CURRENT_DRIVE_LIMIT_ELECTRIC;
    TUint16 au16Rng_CURRENT_DRIVE_LIMIT_ELECTRIC[2];
    TUint16 u16Def_CURRENT_DRIVE_LIMIT_ELECTRIC;
    TDbVarInf  tInf_BATTERY_LOW_LEVEL_SOC;
    TUint8 au8Rng_BATTERY_LOW_LEVEL_SOC[2];
    TUint8 u8Def_BATTERY_LOW_LEVEL_SOC;
    TDbVarInf  tInf_MinVoltageDcConverter;
    TUint16 au16Rng_MinVoltageDcConverter[2];
    TUint16 u16Def_MinVoltageDcConverter;
    TDbVarInf  tInf_NbrCycleFaultDcConverter;
    TUint16 au16Rng_NbrCycleFaultDcConverter[2];
    TUint16 u16Def_NbrCycleFaultDcConverter;
    TDbVarInf  tInf_REGEN_BRAKE_RPM_MODE_AUTO;
    TInt16 ai16Rng_REGEN_BRAKE_RPM_MODE_AUTO[2];
    TInt16 i16Def_REGEN_BRAKE_RPM_MODE_AUTO;
    TDbVarInf  tInf_REGEN_BRAKE_TORQUE_MODE_AUTO;
    TInt16 ai16Rng_REGEN_BRAKE_TORQUE_MODE_AUTO[2];
    TInt16 i16Def_REGEN_BRAKE_TORQUE_MODE_AUTO;
    TDbVarInf  tInf_REGEN_BRAKE_RPM_MODE_HIGH;
    TInt16 ai16Rng_REGEN_BRAKE_RPM_MODE_HIGH[2];
    TInt16 i16Def_REGEN_BRAKE_RPM_MODE_HIGH;
    TDbVarInf  tInf_REGEN_BRAKE_TORQUE_MODE_HIGH;
    TInt16 ai16Rng_REGEN_BRAKE_TORQUE_MODE_HIGH[2];
    TInt16 i16Def_REGEN_BRAKE_TORQUE_MODE_HIGH;
    TDbVarInf  tInf_NbrSamplesAverageRpm;
    TUint8 au8Rng_NbrSamplesAverageRpm[2];
    TUint8 u8Def_NbrSamplesAverageRpm;
    TDbVarInf  tInf_RegenPumpPressureHyst;
    TInt16 ai16Rng_RegenPumpPressureHyst[2];
    TInt16 i16Def_RegenPumpPressureHyst;
    TDbVarInf  tInf_RegenBrakeTorqueFromPressurCoefK;
    TInt16 ai16Rng_RegenBrakeTorqueFromPressurCoefK[2];
    TInt16 i16Def_RegenBrakeTorqueFromPressurCoefK;
    TDbVarInf  tInf_RegenBrakeTorqueFromPressurRange;
    TInt16 ai16Rng_RegenBrakeTorqueFromPressurRange[2];
    TInt16 i16Def_RegenBrakeTorqueFromPressurRange;
}TDbSetNvParamGreenEffC0;

typedef struct
{
    TDbVarInf  tInf_AutorizeTransRailElectric;
    TBoolean aboRng_AutorizeTransRailElectric[2];
    TBoolean boDef_AutorizeTransRailElectric;
    TDbVarInf  tInf_PvgTransRailElectricConsigne;
    TInt16 ai16Rng_PvgTransRailElectricConsigne[2];
    TInt16 i16Def_PvgTransRailElectricConsigne;
    TDbVarInf  tInf_ElectricPumpPressureExceeded;
    TBoolean aboRng_ElectricPumpPressureExceeded[2];
    TBoolean boDef_ElectricPumpPressureExceeded;
    TDbVarInf  tInf_StopRampPvgTransRailElectric;
    TBoolean aboRng_StopRampPvgTransRailElectric[2];
    TBoolean boDef_StopRampPvgTransRailElectric;
    TDbVarInf  tInf_TransRailElectricRampOngoing;
    TBoolean aboRng_TransRailElectricRampOngoing[2];
    TBoolean boDef_TransRailElectricRampOngoing;
    TDbVarInf  tInf_TransRailThermiqueRampOngoing;
    TBoolean aboRng_TransRailThermiqueRampOngoing[2];
    TBoolean boDef_TransRailThermiqueRampOngoing;
    TDbVarInf  tInf_RpmPvgTransRail;
    TInt16 ai16Rng_RpmPvgTransRail[2];
    TInt16 i16Def_RpmPvgTransRail;
    TDbVarInf  tInf_PictoReloadBatteryImpossible;
    TBoolean aboRng_PictoReloadBatteryImpossible[2];
    TBoolean boDef_PictoReloadBatteryImpossible;
    TDbVarInf  tInf_BatteryLowLevel;
    TBoolean aboRng_BatteryLowLevel[2];
    TBoolean boDef_BatteryLowLevel;
    TDbVarInf  tInf_ElectricPumpPressureMaxRegen;
    TBoolean aboRng_ElectricPumpPressureMaxRegen[2];
    TBoolean boDef_ElectricPumpPressureMaxRegen;
    TDbVarInf  tInf_ElectricPumpPressureResetRegen;
    TBoolean aboRng_ElectricPumpPressureResetRegen[2];
    TBoolean boDef_ElectricPumpPressureResetRegen;
    TDbVarInf  tInf_AutorizeRazController;
    TBoolean aboRng_AutorizeRazController[2];
    TBoolean boDef_AutorizeRazController;
    TDbVarInf  tInf_VoltageDcConverterFault;
    TBoolean aboRng_VoltageDcConverterFault[2];
    TBoolean boDef_VoltageDcConverterFault;
    TDbVarInf  tInf_BattErrorCode1;
    TBoolean aboRng_BattErrorCode1[2];
    TBoolean boDef_BattErrorCode1;
    TDbVarInf  tInf_PictoAskResartController;
    TBoolean aboRng_PictoAskResartController[2];
    TBoolean boDef_PictoAskResartController;
}TDbSetRamGreenEffC0;

typedef struct
{
    TDbVarInf  tInf_Ibatt_ist;
    TInt16 ai16Rng_Ibatt_ist[2];
    TInt16 i16Def_Ibatt_ist;
    TDbVarInf  tInf_Vbatt_ist;
    TUint16 au16Rng_Vbatt_ist[2];
    TUint16 u16Def_Vbatt_ist;
    TDbVarInf  tInf_Batt_Soc;
    TUint8 au8Rng_Batt_Soc[2];
    TUint8 u8Def_Batt_Soc;
    TDbVarInf  tInf_Batt_PowerReductionRatio;
    TUint8 au8Rng_Batt_PowerReductionRatio[2];
    TUint8 u8Def_Batt_PowerReductionRatio;
    TDbVarInf  tInf_Batt_RecoveryReductionRatio;
    TUint8 au8Rng_Batt_RecoveryReductionRatio[2];
    TUint8 u8Def_Batt_RecoveryReductionRatio;
    TDbVarInf  tInf_Batt_ErrorCode1;
    TUint8 au8Rng_Batt_ErrorCode1[2];
    TUint8 u8Def_Batt_ErrorCode1;
    TDbVarInf  tInf_Batt_ErrorValue1;
    TUint8 au8Rng_Batt_ErrorValue1[2];
    TUint8 u8Def_Batt_ErrorValue1;
    TDbVarInf  tInf_Batt_RegenAuthorized;
    TBoolean aboRng_Batt_RegenAuthorized[2];
    TBoolean boDef_Batt_RegenAuthorized;
}TDbSetRamFlashBatteryC0;

typedef struct
{
    TDbVarInf  tInf_DC_RpmRequest;
    TUint16 au16Rng_DC_RpmRequest[2];
    TUint16 u16Def_DC_RpmRequest;
    TDbVarInf  tInf_DC_AI2_StaticBrakeTorqueLimit;
    TUint16 au16Rng_DC_AI2_StaticBrakeTorqueLimit[2];
    TUint16 u16Def_DC_AI2_StaticBrakeTorqueLimit;
    TDbVarInf  tInf_DC_GeneratorRegenBattCurLimit;
    TUint16 au16Rng_DC_GeneratorRegenBattCurLimit[2];
    TUint16 u16Def_DC_GeneratorRegenBattCurLimit;
    TDbVarInf  tInf_DC_ForwardByte6Bit0;
    TBoolean aboRng_DC_ForwardByte6Bit0[2];
    TBoolean boDef_DC_ForwardByte6Bit0;
    TDbVarInf  tInf_DC_BackwardByte6Bit1;
    TBoolean aboRng_DC_BackwardByte6Bit1[2];
    TBoolean boDef_DC_BackwardByte6Bit1;
    TDbVarInf  tInf_DC_FootSwitchByte6Bit2;
    TBoolean aboRng_DC_FootSwitchByte6Bit2[2];
    TBoolean boDef_DC_FootSwitchByte6Bit2;
    TDbVarInf  tInf_DC_InterlockByt6Bit3;
    TBoolean aboRng_DC_InterlockByt6Bit3[2];
    TBoolean boDef_DC_InterlockByt6Bit3;
    TDbVarInf  tInf_DC_RegenEnableByte6Bit6;
    TBoolean aboRng_DC_RegenEnableByte6Bit6[2];
    TBoolean boDef_DC_RegenEnableByte6Bit6;
    TDbVarInf  tInf_DC_RollOverCount;
    TUint8 au8Rng_DC_RollOverCount[2];
    TUint8 u8Def_DC_RollOverCount;
    TDbVarInf  tInf_BCL_HMI_DriveBattCurLimit;
    TUint16 au16Rng_BCL_HMI_DriveBattCurLimit[2];
    TUint16 u16Def_BCL_HMI_DriveBattCurLimit;
    TDbVarInf  tInf_BCL_HMI_RegenBattCurLimit;
    TUint16 au16Rng_BCL_HMI_RegenBattCurLimit[2];
    TUint16 u16Def_BCL_HMI_RegenBattCurLimit;
    TDbVarInf  tInf_BCL_HMI_BattSOC;
    TUint16 au16Rng_BCL_HMI_BattSOC[2];
    TUint16 u16Def_BCL_HMI_BattSOC;
    TDbVarInf  tInf_BCL_RollOverCount;
    TUint8 au8Rng_BCL_RollOverCount[2];
    TUint8 u8Def_BCL_RollOverCount;
    TDbVarInf  tInf_MS_ActualSpeedRpm;
    TInt16 ai16Rng_MS_ActualSpeedRpm[2];
    TInt16 i16Def_MS_ActualSpeedRpm;
    TDbVarInf  tInf_MS_BattCur;
    TInt16 ai16Rng_MS_BattCur[2];
    TInt16 i16Def_MS_BattCur;
    TDbVarInf  tInf_MS_RollOverCount;
    TUint8 au8Rng_MS_RollOverCount[2];
    TUint8 u8Def_MS_RollOverCount;
    TDbVarInf  tInf_MS_FaultCode;
    TUint8 au8Rng_MS_FaultCode[2];
    TUint8 u8Def_MS_FaultCode;
    TDbVarInf  tInf_MS_FaultSubCode;
    TUint16 au16Rng_MS_FaultSubCode[2];
    TUint16 u16Def_MS_FaultSubCode;
    TDbVarInf  tInf_DS_MotorCur;
    TInt16 ai16Rng_DS_MotorCur[2];
    TInt16 i16Def_DS_MotorCur;
    TDbVarInf  tInf_DS_DriveStatusIndicator;
    TUint8 au8Rng_DS_DriveStatusIndicator[2];
    TUint8 u8Def_DS_DriveStatusIndicator;
    TDbVarInf  tInf_DS_SpeedLimitIndicator;
    TUint8 au8Rng_DS_SpeedLimitIndicator[2];
    TUint8 u8Def_DS_SpeedLimitIndicator;
    TDbVarInf  tInf_DS_ActualTorque;
    TInt16 ai16Rng_DS_ActualTorque[2];
    TInt16 i16Def_DS_ActualTorque;
    TDbVarInf  tInf_DS_TorqueLimitIndicator;
    TUint8 au8Rng_DS_TorqueLimitIndicator[2];
    TUint8 u8Def_DS_TorqueLimitIndicator;
    TDbVarInf  tInf_DS_RollOverCount;
    TUint8 au8Rng_DS_RollOverCount[2];
    TUint8 u8Def_DS_RollOverCount;
    TDbVarInf  tInf_CS_ControlerTemp;
    TInt8 ai8Rng_CS_ControlerTemp[2];
    TInt8 i8Def_CS_ControlerTemp;
    TDbVarInf  tInf_CS_MotorTemp;
    TInt8 ai8Rng_CS_MotorTemp[2];
    TInt8 i8Def_CS_MotorTemp;
    TDbVarInf  tInf_CS_MotorLimitIndicator;
    TUint8 au8Rng_CS_MotorLimitIndicator[2];
    TUint8 u8Def_CS_MotorLimitIndicator;
    TDbVarInf  tInf_CS_RollOverCount;
    TUint8 au8Rng_CS_RollOverCount[2];
    TUint8 u8Def_CS_RollOverCount;
    TDbVarInf  tInf_CS_BattVoltage;
    TUint16 au16Rng_CS_BattVoltage[2];
    TUint16 u16Def_CS_BattVoltage;
    TDbVarInf  tInf_CS_BattDischargeIndicatorValue;
    TUint8 au8Rng_CS_BattDischargeIndicatorValue[2];
    TUint8 u8Def_CS_BattDischargeIndicatorValue;
    TDbVarInf  tInf_WaitingHeartbeat;
    TBoolean aboRng_WaitingHeartbeat[2];
    TBoolean boDef_WaitingHeartbeat;
    TDbVarInf  tInf_TimeOutDmcHeartbeat;
    TBoolean aboRng_TimeOutDmcHeartbeat[2];
    TBoolean boDef_TimeOutDmcHeartbeat;
    TDbVarInf  tInf_DmcHeartbeat;
    TUint8 au8Rng_DmcHeartbeat[2];
    TUint8 u8Def_DmcHeartbeat;
    TDbVarInf  tInf_PowerOnOkDmc;
    TBoolean aboRng_PowerOnOkDmc[2];
    TBoolean boDef_PowerOnOkDmc;
    TDbVarInf  tInf_OperationnalDmc;
    TBoolean aboRng_OperationnalDmc[2];
    TBoolean boDef_OperationnalDmc;
    TDbVarInf  tInf_GoToOperationnal;
    TBoolean aboRng_GoToOperationnal[2];
    TBoolean boDef_GoToOperationnal;
    TDbVarInf  tInf_NewGoToOperationnal;
    TBoolean aboRng_NewGoToOperationnal[2];
    TBoolean boDef_NewGoToOperationnal;
    TDbVarInf  tInf_SendCommandNMT;
    TBoolean aboRng_SendCommandNMT[2];
    TBoolean boDef_SendCommandNMT;
    TDbVarInf  tInf_StepRazDmc;
    TInt16 ai16Rng_StepRazDmc[2];
    TInt16 i16Def_StepRazDmc;
    TDbVarInf  tInf_CommandRazDmcOnGoing;
    TBoolean aboRng_CommandRazDmcOnGoing[2];
    TBoolean boDef_CommandRazDmcOnGoing;
    TDbVarInf  tInf_Dig4InputCommandSTO;
    TBoolean aboRng_Dig4InputCommandSTO[2];
    TBoolean boDef_Dig4InputCommandSTO;
    TDbVarInf  tInf_ActiveFaultRazDmc;
    TBoolean aboRng_ActiveFaultRazDmc[2];
    TBoolean boDef_ActiveFaultRazDmc;
    TDbVarInf  tInf_ActiveFaultDmc;
    TBoolean aboRng_ActiveFaultDmc[2];
    TBoolean boDef_ActiveFaultDmc;
}TDbSetRamDMC_C0;

//extern List Access ----------------------------------------------------------------------------
extern TDbRamEcuInputsC0 gDb_tRamEcuInputsC0;
extern TDbRamEcuOutputsC0 gDb_tRamEcuOutputsC0;
extern TDbRamGeneralC0 gDb_tRamGeneralC0;
extern TDbNvOptionsC0 gDb_tNvOptionsC0;
extern TDbNvMemoryC0 gDb_tNvMemoryC0;
extern TDbNvParametersC0 gDb_tNvParametersC0;
extern TDbNvCalibrationC0 gDb_tNvCalibrationC0;
extern TDbRam48XsInputsC0 gDb_tRam48XsInputsC0;
extern TDbRam48XsOutputsC0 gDb_tRam48XsOutputsC0;
extern TDbRamEcuInputRadioControl gDb_tRamEcuInputRadioControl;
extern TDbRamCanSensorC0 gDb_tRamCanSensorC0;
extern TDbRamEvision7C0 gDb_tRamEvision7C0;
extern TDbRamEcuC0RcvFromC1 gDb_tRamEcuC0RcvFromC1;
extern TDbRamEcuCaliCmdC0 gDb_tRamEcuCaliCmdC0;
extern TDbNvParamSpeedMaxRail gDb_tNvParamSpeedMaxRail;
extern TDbRamSpeedMaxRail gDb_tRamSpeedMaxRail;
extern TDbNvParamBrakeTest gDb_tNvParamBrakeTest;
extern TDbRamBrakeTest gDb_tRamBrakeTest;
extern TDbNvParamRailWorkSafetyC0 gDb_tNvParamRailWorkSafetyC0;
extern TDbRamRailWorkSafetyC0 gDb_tRamRailWorkSafetyC0;
extern TDbRamTransportPosC0 gDb_tRamTransportPosC0;
extern TDbNvParamTransportPosC0 gDb_tNvParamTransportPosC0;
extern TDbRamBreakInBrakeC0 gDb_tRamBreakInBrakeC0;
extern TDbRamSelectControlPost gDb_tRamSelectControlPost;
extern TDbNvParamSelectControlPost gDb_tNvParamSelectControlPost;
extern TDbRamEvision4C0 gDb_tRamEvision4C0;
extern TDbNvParamAlarmC0 gDb_tNvParamAlarmC0;
extern TDbRamEcuAlarmC0 gDb_tRamEcuAlarmC0;
extern TDbRamEcuC0RcvFailluresFromC1 gDb_tRamEcuC0RcvFailluresFromC1;
extern TDbRamMastDisplayMeasureC0 gDb_tRamMastDisplayMeasureC0;
extern TDbNvParamMastDisplayC0 gDb_tNvParamMastDisplayC0;
extern TDbRamData4C0RcvFromC1 gDb_tRamData4C0RcvFromC1;
extern TDbNvParamGreenEffC0 gDb_tNvParamGreenEffC0;
extern TDbRamGreenEffC0 gDb_tRamGreenEffC0;
extern TDbRamFlashBatteryC0 gDb_tRamFlashBatteryC0;
extern TDbRamDMC_C0 gDb_tRamDMC_C0;

#endif // __APP_DB_H__
