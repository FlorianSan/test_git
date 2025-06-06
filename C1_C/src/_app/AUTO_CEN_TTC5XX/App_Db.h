//**************************************************************************************************
//! @crc        1013314402
//! @file       App_Db.h
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

#ifndef __APP_DB_H__
#define __APP_DB_H__

#include <ItfTypes.h>
#include <ItfCoreDb.h>

#include <App_DefEnu.h>

//RAM interface ----------------------------------------------------------------------------
typedef struct
{
    TDbListRoot tListRoot;
    TBit3 bi3DeltaArmAngularSensorState;                     //!< [[custom]] Delta Arm Angular Sensor state
    TInt16 i16DeltaArmAngularSensorValue;                    //!< [[custom]] Delta Arm Angular Sensor value
    TInt16 i16DeltaArmAngleValue;                            //!< [[custom]] Delta Arm Angular Sensor with calibration scaling  value
    TUint16 u16DeltaArmAngularSensorRawValueMas;             //!< [[custom]] Delta Arm Angular Sensor raw value Master
    TUint16 u16DeltaArmAngularSensorRawValueSla;             //!< [[custom]] Delta Arm Angular Sensor raw value slave
    TBit3 bi3ArrowArmAngularSensorState;                     //!< [[custom]] Arrow Arm Angular Sensor state
    TInt16 i16ArrowArmAngularSensorValue;                    //!< [[custom]] Arrow Arm Angular Sensor value
    TInt16 i16ArrowArmAngleValue;                            //!< [[custom]] Arrow Arm Angular Sensor with calibration scaling  value
    TUint16 u16ArrowArmAngularSensorRawValueMas;             //!< [[custom]] Arrow Arm Angular Sensor raw value
    TUint16 u16ArrowArmAngularSensorRawValueSla;             //!< [[custom]] Arrow Arm Angular Sensor state
    TInt16 i16GasGaugeValue;                                 //!< [[custom]] Gas Gauge value
    TUint32 u32GasGaugeRawValue;                             //!< [[custom]] Gas Gauge raw value
    EDiState eAru1State;                                     //!< [[custom]] Aru 1 state
    TUint16 u16Aru1RawValue;                                 //!< [[custom]] Aru 1 raw value
    EDiState eAru2State;                                     //!< [[custom]] Aru 2 state
    TUint16 u16Aru2RawValue;                                 //!< [[custom]] Aru 2 raw value
    EDiState eEntryTelescopeFdcSensorState;                  //!< [[custom]] Entry Telescope Fdc Sensor state
    TUint16 u16EntryTelescopeFdcSensorRawValue;              //!< [[custom]] Entry Telescope Fdc Sensor raw value
    EDiState eFoldedDeltaArmSensorState;                     //!< [[custom]] Folded Delta Arm Sensor state switch
    TUint16 u16FoldedDeltaArmSensorRawValue;                 //!< [[custom]] Folded Delta Arm Sensor raw value
    EDiState eFoldedBoomArmSensorState;                      //!< [[custom]] Folded Boom Arm Sensor state switch
    TUint16 u16FoldedBoomArmSensorRawValue;                  //!< [[custom]] Folded Boom Arm Sensor raw value
    EDiState eForcingMotorRegimeState;                       //!< [[custom]] Forcing Motor Regime state switch
    TUint16 u16ForcingMotorRegimeRawValue;                   //!< [[custom]] Forcing Motor Regime raw value
    EDiState eActiveHelpState;                               //!< [[custom]] Active Help state switch
    TUint16 u16ActiveHelpRawValue;                           //!< [[custom]] Active Help raw value
    EDiState eOilPressureState;                              //!< [[custom]] Oil Pressure state swtich
    TUint16 u16OilPressureRawValue;                          //!< [[custom]] Oil Pressure raw value
    EDiState eWaterTemperatureState;                         //!< [[custom]] Water Temperature state switch
    TUint16 u16WaterTemperatureRawValue;                     //!< [[custom]] Water Temperature raw value
    EDiState eStopMotorInfoState;                            //!< [[custom]] Stop Motor Info State
    TUint16 u16StopMotorInfoRawValue;                        //!< [[custom]] Stop Motor Info Raw value
    EDiState eTurretPostSelectorState;                       //!< [[custom]] Turret Post Selector State
    TUint16 u16TurretPostSelectorRawValue;                   //!< [[custom]] Turret Post Selector Raw Value
    EDiState eRadioPostSelectorState;                        //!< [[custom]] Radio Post Selector State
    TUint16 u16RadioPostSelectorRawValue;                    //!< [[custom]] Radio Post Selector Raw Value
    EDiState eNacellePostSelectorState;                      //!< [[custom]] Nacelle Post Selector State
    TUint16 u16NacellePostSelectorRawValue;                  //!< [[custom]] Nacelle Post Selector Raw Value
    TInt32 i32RegimeMotorAlternatorRpm;                      //!< [[custom]] Regime motor alternator rotation per minute
    EDiState eAlternatorChargeOkState;                       //!< [[custom]] Alternator charge ok state
    TUint16 u16AlternatorChargeOkValue;                      //!< [[custom]] Alternator charge ok value
    TBit3 bi3Transmission1PressureSensorState;               //!< [[custom]] Transmission1 Pressure Sensor State
    TInt16 i16Transmission1PressureSensorValue;              //!< [[bar/10]] Transmission1 Pressure Sensor Value
    TBit3 bi3Transmission2PressureSensorState;               //!< [[custom]] Transmission2 Pressure Sensor State
    TInt16 i16Transmission2PressureSensorValue;              //!< [[bar/10]] Transmission2 Pressure Sensor Value
    EDiState eFaultPvgDeltaArmState;                         //!< [[custom]] Fault Pvg Delta Arm state
    TUint16 u16FaultPvgDeltaArmRawValue;                     //!< [[custom]] Fault Pvg Delta Arm raw value
    EDiState eFaultPvgArrowArmState;                         //!< [[custom]] Fault Pvg Boom Arm state
    TUint16 u16FaultPvgArrowArmRawValue;                     //!< [[custom]] Fault Pvg Boom Arm raw value
    EDiState eFaultPvgTelescopeArmState;                     //!< [[custom]] Fault Pvg Telescope Arm state
    TUint16 u16FaultPvgTelescopeArmRawValue;                 //!< [[custom]] Fault Pvg Telescope Arm raw value
    EDiState eFaultPvgEvProTorState;                         //!< [[custom]] Fault Pvg Ev Pro TOR state
    TUint16 u16FaultPvgEvProTorRawValue;                     //!< [[custom]] Fault Pvg Ev Pro TOR raw value
    TBit3 bi3BypassPressureSensorState;                      //!< [[custom]] Bypass Pressure Sensor State
    TInt16 i16BypassPressureSensorValue;                     //!< [[custom]] Bypass Pressure Sensor Value
    TUint16 u16BypassPressureSensorRawValue;                 //!< [[custom]] Bypass Pressure Sensor RawValue
    EDiState eStarterMotorState;                             //!< [[custom]] Starter Motor State
    TUint16 u16StarterMotorRawValue;                         //!< [[custom]] Starter Motor Raw value
    TBit3 bi3OilTankTemperatureState;                        //!< [[custom]] Oil Tank Temperature Sensor State
    TInt16 i16OilTankTemperatureValue;                       //!< [°C] Oil Tank Temperature Sensor Value
    TUint16 u16OilTankTemperatureRawValue;                   //!< [mV] Oil Tank Temperature Sensor Raw value
}TDbRamEcuInputsC1;

typedef struct
{
    TDbListRoot tListRoot;
    TBoolean boBlueFireCommand;                              //!< [[custom]] Blue Fire command
    EDigStatus eBlueFireValue;                               //!< [[custom]] Blue Fire actual value
    TBoolean boOrangeFlashingLightCommand;                   //!< [[custom]] Orange Flashing Light command
    EDigStatus eOrangeFlashingLightValue;                    //!< [[custom]] Orange Flashing Light actual value
    TBoolean boAntiStartupCommand;                           //!< [[custom]] Anti Startup command
    EDigStatus eAntiStartupValue;                            //!< [[custom]] Anti Startup Value
    TBoolean boStopMotorCommand;                             //!< [[custom]] Stop Motor command
    TBoolean boWarmingCommand;                               //!< [[custom]] Warming command
    TBoolean boEvBypassCommand;                              //!< [[custom]] Ev Bypass command
    EDigStatus eEvBypassValue;                               //!< [[custom]] EvBypass actual value
    TBoolean boSupplyPvgDeltaArmCommand;                     //!< [[custom]] Supply Pvg Delta Arm command
    EDigStatus eSupplyPvgDeltaArmValue;                      //!< [[custom]] Supply Pvg Delta Arm actual value
    TBoolean boSupplyPvgArrowArmCommand;                     //!< [[custom]] Supply Pvg Arrow Arm command
    EDigStatus eSupplyPvgArrowArmValue;                      //!< [[custom]] Supply Pvg Arrow Arm actual value
    TBoolean boSupplyPvgTelescopeArmCommand;                 //!< [[custom]] Supply Pvg Telescope Arm command
    EDigStatus eSupplyPvgTelescopeArmValue;                  //!< [[custom]] Supply Pvg Telescope Arm actual value
    TBoolean boSupplyPvgPropEvTorCommand;                    //!< [[custom]] Supply Pvg Prop Ev TOR command
    EDigStatus eSupplyPvgPropEvTorValue;                     //!< [[custom]] Supply Pvg Prop Ev TOR actual value
    TUint16 u16EvPropMotorAcceleratorCommand;                //!< [[custom]] Ev Prop Motor Accelerator command
    EProStatus eEvPropGeneratorState;                        //!< [[custom]] Ev Prop Generator state
    TUint16 u16EvPropGeneratorCommand;                       //!< [[custom]] Ev Prop Generator command
    TUint16 u16EvPropGeneratorCurrent;                       //!< [[custom]] Ev Pro pGenerator current
    EDigStatus eNoisemakerState;                             //!< [[custom]] Noisemaker state
    TBoolean boNoisemakerCommand;                            //!< [[custom]] Noisemaker command
    EDigStatus eEvRotationTurretCtClockwiseState;            //!< [[custom]] Ev Rotation Turret Counter Clokwise state
    TBoolean boEvRotTurretCtClockwiseCmdBool;                //!< [[custom]] Ev Rotation Turret Counter Clokwise command bool
    EDigStatus eEvRotationTurretClockwiseState;              //!< [[custom]] Ev Rotation Turret Clokwise state
    TBoolean boEvRotTurretClockwiseCmdBool;                  //!< [[custom]] Ev Rotation Turret Clokwise command bool
    EDigStatus eEvRotationBasketCtClockwiseState;            //!< [[custom]] Ev Rotation Basket Counter Clokwise state
    TBoolean boEvRotationBasketCtClkWiseCmdBool;             //!< [[custom]] Ev Rotation Basket counter clokwise command boolean
    EDigStatus eEvRotationBasketClockwiseState;              //!< [[custom]] Ev Rotation Basket Clokwise state
    TBoolean boEvRotationBasketClkWiseCmdBool;               //!< [[custom]] Ev Rotation Basket clowkise command boolean
    EDigStatus eEvUpPendularState;                           //!< [[custom]] Ev Up Pendular state
    TBoolean boEvUpPendularCommandBool;                      //!< [[custom]] Ev Up Pendular command bool
    EDigStatus eEvDownPendularState;                         //!< [[custom]] Ev Down Pendular state
    TBoolean boEvDownPendularCommandBool;                    //!< [[custom]] Ev Down Pendular command bool
    EDigStatus eEvUpInclinaisonBasketState;                  //!< [[custom]] Ev Up Inclinaison Basket state
    TBoolean boEvUpInclinaisonBasketCmdBool;                 //!< [[custom]] Ev Up Inclinaison Basket command bool
    EDigStatus eEvDownInclinaisonBasketState;                //!< [[custom]] Ev Down Inclinaison Basket state
    TUint16 u16EvDownInclinaisonBasketCommand;               //!< [[custom]] Ev Down Inclinaison Basket command
    TBoolean boEvDownInclinaisonBasketCmdBool;               //!< [[custom]] Ev Down Inclinaison Basket command bool
    TUint16 u16EvDownInclinaisonBasketCurrent;               //!< [[custom]] Ev Down Inclinaison Basket current
    TUint16 u16PvgDeltaArmCommand;                           //!< [[custom]] Pvg Delta Arm command
    TUint16 u16PvgDeltaArmVoltage;                           //!< [[custom]] Pvg Delta Arm actual voltage
    TUint16 u16PvgArrowArmCommand;                           //!< [[custom]] Pvg arrow Arm command
    TUint16 u16PvgArrowArmVoltage;                           //!< [[custom]] Pvg arrow Arm actual voltage
    TUint16 u16PvgTelescopeArmCommand;                       //!< [[custom]] Pvg Arm Telescope command
    TUint16 u16PvgTelescopeArmVoltage;                       //!< [[custom]] Pvg Arm Telescope actual voltage
    TBoolean boOverloadSecurityCommand;                      //!< [[custom]] Overload Security Command
    EDigStatus eOverloadSecurityValue;                       //!< [[custom]] Overload Security Value
    TBoolean boSupllyTorSensorsCommand;                      //!< [[custom]] Suplly Tor Sensors Command
    EDigStatus eSupllyTorSensorsValue;                       //!< [[custom]] Suplly Tor Sensors Value
    TBoolean boSupllyAnaSensorsCommand;                      //!< [[custom]] Suplly Ana Sensors Command
    EDigStatus eSupllyAnaSensorsValue;                       //!< [[custom]] Suplly Ana Sensors Value
    TBoolean boEvSyncRotationCommand;                        //!< [[custom]] Ev Sync Rotation Command
    EDigStatus eEvSyncRotationValue;                         //!< [[custom]] Ev Sync Rotation Value
    TUint16 u16PvgEvTorCommand;                              //!< [[custom]] Pvg Ev Tor command
    TUint16 u16PvgEvTorVoltage;                              //!< [[custom]] Pvg Ev Tor actual voltage
    TBoolean boEvUpPendularActivation;                       //!< [[custom]] Ev Up pendular activation
    TBoolean boEvDownPendularActivation;                     //!< [[custom]] Ev Down pendular activation
    TBoolean boEvRotBasketCtClkWiseActivation;               //!< [[custom]] Ev rotation basket counter clokwise activation
    TBoolean boEvRotBasketClkWiseActivation;                 //!< [[custom]] Ev rotation basket clokwise activation
    TBoolean boEvUpIncliBasketActivation;                    //!< [[custom]] Ev Up inclinasison basket activation
    TBoolean boEvDownIncliBasketActivation;                  //!< [[custom]] Ev Down inclinasison basket activation
    TBoolean boEvRotTurretClockwiseActivation;               //!< [[custom]] Ev rotation turret cloclwise activation
    TBoolean boEvRotTurretCtClockwiseActivation;             //!< [[custom]] Ev rotation turret counter cloclwise activation
    EDigStatus eEvSelectorRotTurretValue;                    //!< [[custom]] Ev Selector Rotation Turret State
    TBoolean boEvSelectorRotTurretCmd;                       //!< [[custom]] Ev Selector Rotation Turret command
    TBoolean boReturnLowSideEvProAccMotorCmd;                //!< [[custom]] Return low side ev pro accelerator motor command
    TBoolean boReturnLowSideEvProGeneratorCmd;               //!< [[custom]] Return low side ev pro generator command
    EDigStatus eReturnLowSideEvProGeneratorValue;            //!< [[custom]] Return low side ev pro generator value
    TBoolean boEvUpAxleOscillantActivation;                  //!< [[custom]] Ev Up Axle oscillant activation
    TBoolean boEvDownAxleOscillantActivation;                //!< [[custom]] Ev Down Axle oscillant activation
    TBoolean boEvUpAxleOscillantCmd;                         //!< [[custom]] Ev Up Axle oscillant cmd
    TBoolean boEvDownAxleOscillantCmd;                       //!< [[custom]] Ev Down Axle oscillant cmd
    TBoolean boEvUpAxleFixeActivation;                       //!< [[custom]] Ev Up Axle fixe activation
    TBoolean boEvDownAxleFixeActivation;                     //!< [[custom]] Ev Down Axle fixe activation
    TBoolean boEvUpAxleFixeCmd;                              //!< [[custom]] Ev Up Axle fixe cmd
    TBoolean boEvDownAxleFixeCmd;                            //!< [[custom]] Ev Down Axle fixe cmd
    TBoolean boEvUpMastMeasureActivation;                    //!< [[custom]] Ev Up Mast Measure Activation
    TBoolean boEvUpMastMeasureCmd;                           //!< [[custom]] Ev Up Mast Measure cmd
    TBoolean boEvDownMastMeasureActivation;                  //!< [[custom]] Ev down Mast Measure Activation
    TBoolean boEvDownMastMeasureCmd;                         //!< [[custom]] Ev down Mast Measure cmd
    EDigStatus eWhiteLightAv15746Value;                      //!< [[custom]] White light Av 15746 actual value
    TBoolean boWhiteLightAv15746Command;                     //!< [[custom]] White light Av 15746 cmd
    EDigStatus eEvCrawlerOnlyValue;                          //!< [[custom]] Ev crawler only actual value
    TBoolean boEvCrawlerOnlyCommand;                         //!< [[custom]] Ev crawler only cmd
    TBoolean boRelayReloadWithGeneratorCmd;                  //!< [[custom]] Relay electric Reload With Generator command
    EDigStatus eRelayReloadWithGeneratorState;               //!< [[custom]] Relay electric Reload With Generator state
    TBoolean boEvDevMvtsCmd;                                 //!< [[custom]] Ev Deviator movements command
    EDigStatus eEvDevMvtsState;                              //!< [[custom]] Ev Deviator movements state
    TBoolean boEvBoostRegenCmd;                              //!< [[custom]] Ev Boost Regeneration command
    EDigStatus eEvBoostRegenState;                           //!< [[custom]] Ev Boost Regeneration state
}TDbRamEcuOutputsC1;

typedef struct
{
    TDbListRoot tListRoot;
    TUint8 u8LifeByte;                                       //!< [[custom]] Byte increased each cycle
    EWdState eWatchdogState;                                 //!< [[custom]] Watchdog current state
    TUint16 u16EcuVoltage;                                   //!< [[custom]] Ecu voltage
    TBoolean boBypassArmDelta;                               //!< [[custom]] Bypass Arm Delta
    TBoolean boBypassArmArrow;                               //!< [[custom]] Bypass Arm Arrow
    TBoolean boBypassArmTelescope;                           //!< [[custom]] Bypass Arm Telescope
    TBoolean boTestEvision;                                  //!< [[custom]] test bool evision objet
    TInt16 i16PvgTorConsigneCommand;                         //!< [[custom]] Pvg consigne -10000 1000 to command output
    TInt16 i16PvgEvTorTurretCmd;                             //!< [[custom]] Command Pvg Ev Tor for turret movement by joystick nacelle
    TBoolean boEngineOn;                                     //!< [[custom]] Engine on run phase
    TUint16 u16gMotorCmd;                                    //!< [[custom]] 
    TUint8 u8CounterRisingEdge;                              //!< [[custom]] 
    TUint8 u8CounterFallingEdge;                             //!< [[custom]] 
    TUint16 u16LifeBitRotBasket;                             //!< [[custom]] 
    TBoolean boTestElevationActivation;                      //!< [[custom]] 
    TBoolean boRotTurretBool;                                //!< [[custom]] 
    TInt16 i16ScalingJoysTurret;                             //!< [[custom]] Scaling value of joystick turret arm -10000 0 1000
    TInt16 i16ScalingJoysDeltaArm;                           //!< [[custom]] Scaling value of joystick delta arm -10000 0 1000
    TInt16 i16PvgDeltaArmConsigne;                           //!< [[custom]] Pvg Delta Arm Consigne apply to ramp to control output
    TInt16 i16ScalingJoysArrowArm;                           //!< [[custom]] Scaling value of joystick arrow arm -10000 0 1000
    TInt16 i16PvgArrowArmConsigne;                           //!< [[custom]] Pvg Arrow Arm Consigne apply to ramp to control output
    TInt16 i16ScalingJoysTelescopeArm;                       //!< [[custom]] Scaling value of joystick telescope arm -10000 0 1000
    TInt16 i16PvgTelescopeArmConsigne;                       //!< [[custom]] Pvg telescope Arm Consigne apply to ramp to control output
    TInt16 ai16PvgTorVoltageRangeValue[5];                   //!< [[custom]] Off
    TBoolean boActiveWorkEnvelopLimit;                       //!< [[custom]] Active bool just for test
    TBoolean boPortillonLadderClose;                         //!< [[custom]] Portilon close and ladder folded
    TBoolean boActiveFailure;                                //!< [[custom]] Active Failure
    TBoolean boStopAllMovementsNacellePost;                  //!< [[custom]] Condition to stop all movement nacelle post
    TUint32 u32AverageTimeCycle;                             //!< [[custom]] Average Time cycle
    TUint32 u32MaxTimeCycle;                                 //!< [[custom]] Max time cycle
    TBoolean boTestRefreshParamBlockCurrent;                 //!< [[custom]] 
    TBoolean boLynxOnAllMvts;                                //!< [[custom]] Lynx On All Mvts
    TInt16 i16ReturnValStart48XsFunc;                        //!< [[custom]] Return value of start 48xs func
    TUint32 u32IndexVersion48Xs;                             //!< [[custom]] Index version of 48XS slave module
    TBoolean boTestElectricalIO;                             //!< [[custom]] Shunt all logic to test electricall IO
    TUint8 u8Major_48XS;                                     //!< [[custom]] Major version of 48xs
    TUint8 u8Minor_48XS;                                     //!< [[custom]] Minor version of 48xs
    TUint8 u8Patch_48XS;                                     //!< [[custom]] Path version of 48xs
    TUint8 u8Custom_48XS;                                    //!< [[custom]] Custom version of 48xs
    TBoolean boRunningStable48XS;                            //!< [[custom]] Running Stable 48XS
    TBoolean boBlinkLow;                                     //!< [[custom]] Low Blinking
    TUint16 u16FaultyValue;                                  //!< [[custom]] Diag Faulty Value
    TUint8 u8DeviceNum;                                      //!< [[custom]] Diag Device Num
    TUint8 u8ErrorCode;                                      //!< [[custom]] Diag Error Code
    TBoolean boEngineRunningStable;                          //!< [[custom]] Engine running stable
    TBoolean boBypassTestCommand;                            //!< [[custom]] Bypass test command
}TDbRamGeneralC1;

typedef struct
{
    TDbListRoot tListRoot;
    TBoolean boPortillon;                                    //!< [[custom]] Portillon is installed on the machine
    TBoolean boLadder;                                       //!< [[custom]] Ladder is installed on the machine
    TBoolean boMeasuringMat;                                 //!< [[custom]] Measuring mat is installed on the machine
    TBoolean boMastDigitalDisplay;                           //!< [[custom]] The digital display o the measuring mast is used on this vehicle
    TBoolean boGenerator;                                    //!< [[custom]] Genetor is installed on the machine
    TBoolean boFlashingLightOnRail;                          //!< [[custom]] Flashing light on rail option
    TBoolean boAutoStopMeasuringMast;                        //!< [[custom]] Allow turret rotation beyond 135deg with automatic stop
    TBoolean boLynxOnAllMvts;                                //!< [[custom]] Lynx On All Movement
    TBoolean boWhiteLight15746;                              //!< [[custom]] White lights 15746 is installed on the machine
    TBoolean boAutorisationWorkKeyPresent;                   //!< [[custom]] Autorisation Work key present
    TBoolean boFlasingLightAlwaysOnAUS;                      //!< [[custom]] Option feu à éclat permanent pour Australie
    TBoolean boContactMastSNCFOption;                        //!< [[custom]] Option for utilisation of the mast for electrified track
    TBoolean boPresenceContactMast;                          //!< [[custom]] Presence of contact mast
}TDbNvOptionsC1;

typedef struct
{
    TDbListRoot tListRoot;
    TBoolean boNvMemoryC;                                    //!< [[custom]] 
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
    TUint16 u16CptNbrRegenFinish;                            //!< [[custom]] Reject counter of reloading with generator
    TBoolean boFirstKeyNoReloadWithGenerator;                //!< [[custom]] First Key no reload with generator
    TBoolean boNewSocUperReloadWithGenerator;                //!< [[custom]] New Soc Uper Reload With Generator
    TUint32 u32TotalRegenMinutes;                            //!< [[custom]] Total regeneration time in minute
    TUint32 u32TotalElecticMinutes;                          //!< [[custom]] Total electric motor minutes
}TDbNvMemoryC1;

typedef struct
{
    TDbListRoot tListRoot;
    TUint8 u8PvgUpDeltaArmTurretPostCmdPrct;                 //!< [[%]] Pvg Up Delta Arm turret post command in pourcent regarding batte
    TUint8 u8PvgDownDeltaArmTurretPostCmdPrct;               //!< [[%]] Pvg Down Delta Arm turret post command in pourcent regarding bat
    TUint8 u8PvgUpArrowArmTurretPostCmdPrct;                 //!< [[%]] Pvg Up Arrow Arm turret post command in pourcent regarding batte
    TUint8 u8PvgDownArrowArmTurretPostCmdPrct;               //!< [[%]] Pvg Down Arrow Arm turret post command in pourcent regarding bat
    TUint8 u8PvgInTelescTurretPostCmdPrct;                   //!< [[%]] Pvg In Telescope Arm turret post command in pourcent regarding b
    TUint8 u8PvgOutTelescTurretPostCmdPrct;                  //!< [[%]] Pvg Out Telescope Arm turret post command in pourcent regarding 
    TUint8 u8MaxPvgUpDeltaArmCmdPrct;                        //!< [[%]] Consigne max Pvg Up Delta Arm Nacelle post command in pourcent r
    TUint8 u8MaxPvgDownDeltaArmCmdPrct;                      //!< [[%]] Consigne max Pvg Down Delta Arm Nacelle post command in pourcent
    TUint8 u8MaxPvgUpArrowArmCmdPrct;                        //!< [[%]] Consigne max Pvg Up Arrow Arm Nacelle post command in pourcent r
    TUint8 u8MaxPvgDownArrowArmCmdPrct;                      //!< [[%]] Consigne max Pvg Down Arrow Arm Nacelle post command in pourcent
    TUint8 u8MaxPvgInTelescopeArmCmdPrct;                    //!< [[%]] Consigne max Pvg in Telescope Arm Nacelle post command in pource
    TUint8 u8MaxPvgOutTelescopeArmCmdPrct;                   //!< [[%]] Consigne max Pvg out Telescope Arm Nacelle post command in pourc
    TUint8 u8MinPvgUpDeltaArmCmdPrct;                        //!< [[%]] Consigne min Pvg to move Up Delta Arm Nacelle post command in po
    TUint8 u8MinPvgDownDeltaArmCmdPrct;                      //!< [[%]] Consigne min Pvg to move Down Delta Arm Nacelle post command in 
    TUint8 u8MinPvgUpArrowArmCmdPrct;                        //!< [[%]] Consigne min Pvg to move Up Arrow Arm Nacelle post command in po
    TUint8 u8MinPvgDownArrowArmCmdPrct;                      //!< [[%]] Consigne min Pvg to move Down Arrow Arm Nacelle post command in 
    TUint8 u8MinPvgInTelescopeArmCmdPrct;                    //!< [[%]] Consigne min Pvg to move In Telescope Arm Nacelle post command i
    TUint8 u8MinPvgOutTelescopeArmCmdPrct;                   //!< [[%]] Consigne min Pvg to move Out Telescope Arm Nacelle post command 
    TUint16 u16TresholdAnaToBoForInputs48Xs;                 //!< [[custom]] Treshold Ana to bool input from 48xs
    TUint8 u8PvgAxleMovementCmdPrct;                         //!< [[%]] Pvg axle movement command pourcent regarding batterie voltage
    TUint8 u8DeadZoneJoystickTurret;                         //!< [[%]] Dead zone joystick turret
    TUint8 u8DeadZoneJoystickDeltaArm;                       //!< [[%]] Dead zone joystick delta arm
    TUint8 u8DeadZoneJoystickTelescope;                      //!< [[%]] Dead zone joystick telescop
    TUint8 u8DeadZoneJoystickArrow;                          //!< [[%]] Dead Zone joystick arrow
    TUint8 u8DeadZoneJoystickRailAdvancement;                //!< [[%]] Dead Zone joystick rail advancement
    TUint8 u8DeadZoneJoystickRotationTurret;                 //!< [[%]] Dead Zone joystick rotation turret
    TUint16 u16EngineOffCurEvPropMotorAccel;                 //!< [[mA/10]] EvPropMotorAccelerator - PWM output parameters- engine off curre
    TUint16 u16MinCurEvPropMotorAccelerator;                 //!< [[mA/10]] EvPropMotorAccelerator - PWM output parameters- minimal current
    TUint16 u16StopCurEvPropMotorAccelerator;                //!< [[mA/10]] EvPropMotorAccelerator - PWM output parameters- stop current 
    TUint16 u16EngineOffCurEvPropGenerator;                  //!< [[mA/10]] EvPropGenerator - PWM output parameters- engine off current
    TUint16 u16MinCurEvPropGenerator;                        //!< [[mA/10]] EvPropGenerator- PWM output parameters- minimal current
    TUint16 u16StopCurEvPropGenerator;                       //!< [[mA/10]] EvPropGenerator- PWM output parameters- stop current 
    TUint16 u16PidGpEvPropMotorAcc;                          //!< [[custom]] PID - Ev Prop Motor Accelerator - Gp - proportional gain
    TUint16 u16PidTiEvPropMotorAcc;                          //!< [[custom]] PID - Ev Prop Motor Accelerator - Ti - integration time constant
    TUint16 u16PidTdEvPropMotorAcc;                          //!< [[custom]] PID - Ev Prop Motor Accelerator - Td - derivation time constant
    TUint16 u16PidGpEvPropGenerator;                         //!< [[custom]] PID - Ev Prop Generator - Gp - proportional gain
    TUint16 u16PidTiEvPropGenerator;                         //!< [[custom]] PID - Ev Prop Generator- Ti - integration time constant
    TUint16 u16PidTdEvPropGenerator;                         //!< [[custom]] PID - Ev Prop Generator - Td - derivation time constant
    TUint8 u8DeviationLimitTransmPressure;                   //!< [[%]] Deviation Limit beetween 2 signals for transmission pressure sen
    TInt16 i16OutCharPosDeltaArmAngular;                     //!< [[Bar/10]] DeltaArmAngularSensor - input current - output characteristic - 
    TInt16 i16OutCharNeuDeltaArmAngular;                     //!< [[Bar/10]] DeltaArmAngularSensor - input current - output characteristic - 
    TInt16 i16OutCharNegDeltaArmAngular;                     //!< [[Bar/10]] DeltaArmAngularSensor - input current - output characteristic - 
    TUint8 u8DeviationLimitDeltaArmAngle;                    //!< [[%]] Deviation Limit beetween 2 signals for delta arm angle sensor
    TInt16 i16OutCharPosArrowArmAngular;                     //!< [[Bar/10]] ArrowArmAngularSensor - input current - output characteristic - 
    TInt16 i16OutCharNeuArrowArmAngular;                     //!< [[Bar/10]] ArrowArmAngularSensor - input current - output characteristic - 
    TInt16 i16OutCharNegArrowArmAngular;                     //!< [[Bar/10]] ArrowArmAngularSensor - input current - output characteristic - 
    TUint8 u8DeviationLimitArrowArmAngle;                    //!< [[%]] Deviation Limit beetween 2 signals for arrow arm angle sensor
    TUint8 u8MinPvgUpPendularTurretPost;                     //!< [[%]] Min pvg up pendular with turret post in pourcent regarding batte
    TUint8 u8MinPvgUpPendularNacellePost;                    //!< [[%]] Min pvg up pendular with Nacelle post in pourcent regarding batt
    TUint8 u8MinPvgUpPendularRadioPost;                      //!< [[%]] Min pvg up pendular with Radio post in pourcent regarding batter
    TUint8 u8MaxPvgUpPendularTurretPost;                     //!< [[%]] Max pvg up pendular with turret post in pourcent regarding batte
    TUint8 u8MaxPvgUpPendularNacellePost;                    //!< [[%]] Max pvg up pendular with Nacelle post in pourcent regarding batt
    TUint8 u8MaxPvgUpPendularRadioPost;                      //!< [[%]] Max pvg up pendular with Radio post in pourcent regarding batter
    TUint16 au16UpPendularRampRatioTurret[2];                //!< [[ms]] increase ratio
    TUint16 au16UpPendularRampRatioNacelle[2];               //!< [[ms]] increase time
    TUint16 au16UpPendularRampRatioRadio[2];                 //!< [[ms]] increase time
    TUint8 u8MinPvgDownPendularTurretPost;                   //!< [[%]] Min pvg down pendular with turret post in pourcent regarding bat
    TUint8 u8MinPvgDownPendularNacellePost;                  //!< [[%]] Min pvg down pendular with Nacelle post in pourcent regarding ba
    TUint8 u8MinPvgDownPendularRadioPost;                    //!< [[%]] Min pvg down pendular with Radio post in pourcent regarding batt
    TUint8 u8MaxPvgDownPendularTurretPost;                   //!< [[%]] Max pvg down pendular with turret post in pourcent regarding bat
    TUint8 u8MaxPvgDownPendularNacellePost;                  //!< [[%]] Max pvg down pendular with Nacelle post in pourcent regarding ba
    TUint8 u8MaxPvgDownPendularRadioPost;                    //!< [[%]] Max pvg down pendular with Radio post in pourcent regarding batt
    TUint16 au16DownPendularRampRatioTurret[2];              //!< [[custom]] increase ratio
    TUint16 au16DownPendularRampRatioNacelle[2];             //!< [[ms]] increase time 
    TUint16 au16DownPendularRampRatioRadio[2];               //!< [[ms]] Increase time
    TUint8 u8MinPvgUpIncliBasketTurretPost;                  //!< [[%]] Min pvg up inclinaison basket with turret post in pourcent regar
    TUint8 u8MinPvgUpIncliBasketNacellePost;                 //!< [[%]] Min pvg up inclinaison basket with Nacelle post in pourcent rega
    TUint8 u8MinPvgUpIncliBasketRadioPost;                   //!< [[%]] Min pvg up inclinaison basket with Radio post in pourcent regard
    TUint8 u8MaxPvgUpIncliBasketTurretPost;                  //!< [[%]] Max pvg up inclinaison basket with turret post in pourcent regar
    TUint8 u8MaxPvgUpIncliBasketNacellePost;                 //!< [[%]] Max pvg up inclinaison basket with Nacelle post in pourcent rega
    TUint8 u8MaxPvgUpIncliBasketRadioPost;                   //!< [[%]] Max pvg up inclinaison basket with Radio post in pourcent regard
    TUint16 au16UpInclinBasketRampRatioTurret[2];            //!< [[ms]] increase ratio
    TUint16 au16UpInclinBasketRampRatioNacelle[2];           //!< [[ms]] increase time
    TUint16 au16UpInclinBasketRampRatioRadio[2];             //!< [[ms]] increase time
    TUint8 u8MinPvgDownIncliBasketTurretPost;                //!< [[%]] Min pvg down inclinaison basket with turret post in pourcent reg
    TUint8 u8MinPvgDownIncliBasketNacellePost;               //!< [[%]] Min pvg down inclinaison basket with Nacelle post in pourcent re
    TUint8 u8MinPvgDownIncliBasketRadioPost;                 //!< [[%]] Min pvg down inclinaison basket with Radio post in pourcent rega
    TUint8 u8MaxPvgDownIncliBasketTurretPost;                //!< [[%]] Max pvg down inclinaison basket with turret post in pourcent reg
    TUint8 u8MaxPvgDownIncliBasketNacellePost;               //!< [[%]] Max pvg down inclinaison basket with Nacelle post in pourcent re
    TUint8 u8MaxPvgDownIncliBasketRadioPost;                 //!< [[%]] Max pvg down inclinaison basket with Radio post in pourcent rega
    TUint16 au16DownInclinBasketRampRatioTurret[2];          //!< [[ms]] increase ratio
    TUint16 au16DownInclinBasketRampRatioNacelle[2];         //!< [[ms]] increase time
    TUint16 au16DownInclinBasketRampRatioRadio[2];           //!< [[ms]] increase time
    TUint8 u8MinPvgRotBasktClkwiseTurretPost;                //!< [[%]] Min pvg rotation clockwise basket with turret post in pourcent r
    TUint8 u8MinPvgRotBasktClkwiseNacellePost;               //!< [[%]] Min pvg rotation clockwise basket with Nacelle post in pourcent 
    TUint8 u8MinPvgRotBasketClkwiseRadioPost;                //!< [[%]] Min pvg rotation clockwise basket with Radio post in pourcent re
    TUint8 u8MaxPvgRotBasketClkwiseTurretPost;               //!< [[%]] Max pvg rotation clockwise basket with turret post in pourcent r
    TUint8 u8MaxPvgRotBasktClkwiseNacellePost;               //!< [[%]] Max pvg rotation clockwise basket with Nacelle post in pourcent 
    TUint8 u8MaxPvgRotBasketClkwiseRadioPost;                //!< [[%]] Max pvg rotation clockwise basket with Radio post in pourcent re
    TUint16 au16RotBasketClkwiseRampRatioTurret[2];          //!< [[ms]] increase ratio
    TUint16 au16RotBasketClkwiseRampRatioNacel[2];           //!< [[ms]] increase time
    TUint16 au16RotBasketClkwiseRampRatioRadio[2];           //!< [[ms]] increase time
    TUint8 u8MinPvgRotBasktCtClkwiseTurtPost;                //!< [[%]] Min pvg rotation counter clockwise basket with turret post in po
    TUint8 u8MinPvgRotBasktCtClkwiseNacelPost;               //!< [[%]] Min pvg rotation counter clockwise basket with Nacelle post in p
    TUint8 u8MinPvgRotBasktCtClkwiseRadioPost;               //!< [[%]] Min pvg rotation counter clockwise basket with Radio post in pou
    TUint8 u8MaxPvgRotBasktCtClkwiseTuretPost;               //!< [[%]] Max pvg rotation counter clockwise basket with turret post in po
    TUint8 u8MaxPvgRotBasktCtClkwiseNacelPost;               //!< [[%]] Max pvg rotation counter clockwise basket with Nacelle post in p
    TUint8 u8MaxPvgRotBasktCtClkwiseRadioPost;               //!< [[%]] Max pvg rotation counter clockwise basket with Radio post in pou
    TUint16 au16RotBasketCtClkwiseRampRatioTuret[2];         //!< [[ms]] increase ratio
    TUint16 au16RotBasketCtClkwiseRampRatioNacel[2];         //!< [[ms]] Ratio apply to ramp signal to control Pvg Ev Tor rotation counter clockwise basket is sollicited with nacel 
    TUint16 au16RotBasketCtClkwiseRampRatioRadio[2];         //!< [[ms]] Ratio apply to ramp signal to Pvg Ev Tor rotation counter clk basket movement is sollicited with radio 
    TUint16 u16MinPvgRotTurretClkwiseTurretPost;             //!< [[%/10]] Min pvg rotation clockwise basket with turret post in pourcent r
    TUint16 u16MinPvgRotTurretClkwiseNacelPost;              //!< [[%/10]] Min pvg rotation clockwise basket with Nacelle post in pourcent 
    TUint16 u16MinPvgRotTurretClkwiseRadioPost;              //!< [[%/10]] Min pvg rotation clockwise basket with Radio post in pourcent re
    TUint16 u16MaxPvgRotTurretClkwiseTurretPost;             //!< [[%/10]] Max pvg rotation clockwise basket with turret post in pourcent r
    TUint16 u16MaxPvgRotTurretClkwiseNacelPost;              //!< [[%/10]] Max pvg rotation clockwise basket with Nacelle post in pourcent 
    TUint16 u16MaxPvgRotTurretClkwiseRadioPost;              //!< [[%/10]] Max pvg rotation clockwise basket with Radio post in pourcent re
    TUint16 au16RotTurretClkwiseRampRatioTurret[2];          //!< [[ms]] increase ratio
    TUint16 au16RotTurretClkwiseRampRatioNacelle[2];         //!< [[ms]] increase time
    TUint16 au16RotTurretClkwiseRampRatioRadio[2];           //!< [[ms]] Increase time
    TUint16 u16MinPvgRotTurretCtClkwiseTurtPost;             //!< [[%/10]] Min pvg rotation counter clockwise basket with turret post in po
    TUint16 u16MinPvgRotTurretCtClkwseNacelPost;             //!< [[%/10]] Min pvg rotation counter clockwise basket with Nacelle post in p
    TUint16 u16MinPvgRotTuretCtClkwseRadioPost;              //!< [[%/10]] Min pvg rotation counter clockwise basket with Radio post in pou
    TUint16 u16MaxPvgRotTurretCtClkwseTuretPost;             //!< [[%/10]] Max pvg rotation counter clockwise basket with turret post in po
    TUint16 u16MaxPvgRotTurretCtClkwseNacelPost;             //!< [[%/10]] Max pvg rotation counter clockwise basket with Nacelle post in p
    TUint16 u16MaxPvgRotTurretCtClkwseRadioPost;             //!< [[%/10]] Max pvg rotation counter clockwise basket with Radio post in pou
    TUint16 au16RotTurretCtClkwiseRampRatioTuret[2];         //!< [[ms]] increase ratio
    TUint16 au16RotTurretCtClkwiseRampRatioNacel[2];         //!< [[ms]] increase time
    TUint16 au16RotTurretCtClkwiseRampRatioRadio[2];         //!< [[ms]] Increase time
    TUint8 u8MinPvgUpAxleOscillant;                          //!< [[%]] Min pvg up axle oscillant
    TUint8 u8MaxPvgUpAxleOscillant;                          //!< [[%]] Max pvg up axle oscillant
    TUint16 au16PvgUpAxleOscillantRampRatio[2];              //!< [[custom]] increase ratio
    TUint8 u8MinPvgDownAxleOscillant;                        //!< [[%]] Min pvg down axle oscillant
    TUint8 u8MaxPvgDownAxleOscillant;                        //!< [[%]] Max pvg down axle oscillant
    TUint16 au16PvgDownAxleOscillantRampRatio[2];            //!< [[custom]] increase ratio
    TUint8 u8MinPvgUpAxleFixe;                               //!< [[%]] Min pvg up axle fixe
    TUint8 u8MaxPvgUpAxleFixe;                               //!< [[%]] Max pvg up axle fixe
    TUint16 au16PvgUpAxleFixeRampRatio[2];                   //!< [[custom]] increase ratio
    TUint8 u8MinPvgDownAxleFixe;                             //!< [[%]] Min pvg down axle fixe
    TUint8 u8MaxPvgDownAxleFixe;                             //!< [[%]] Max pvg down axle fixe
    TUint16 au16PvgDownAxleFixeRampRatio[2];                 //!< [[custom]] increase ratio
    TUint8 u8MinPvgRotFrameCtClkwise;                        //!< [[%]] Min pvg rotation counter clockwise basket with turret post in po
    TUint8 u8MaxPvgRotFrameCtClkwise;                        //!< [[%]] Max pvg rotation counter clockwise basket with Radio post in pou
    TUint16 au16RotFrameCtClkwiseRampRatio[2];               //!< [[custom]] increase ratio
    TUint8 u8MinPvgRotFrameClkwise;                          //!< [[%]] Min pvg rotation counter clockwise basket with turret post in po
    TUint8 u8MaxPvgRotFrameClkwise;                          //!< [[%]] Max pvg rotation counter clockwise basket with Radio post in pou
    TUint16 au16RotFrameClkwiseRampRatio[2];                 //!< [[custom]] increase ratio
    TUint32 u32AntiDemarrageTime;                            //!< [[ms]] Timer anti demarrage to detect start motor
    TInt32 i32TresholdRmpMotorAntidemarrage;                 //!< [[custom]] Treshold rpm motor to control anti demarrage 
    TUint16 u16SlowSpeedUpDeltaArmTelescOut;                 //!< [[%1000]] Slow speed apply to up delta arm when telescope is outside
    TUint16 u16SlowSpeedDownDeltaArmTelescOut;               //!< [[%1000]] Slow speed apply to down delta arm when telescope is outside
    TUint16 u16SlowSpeedUpArrowArmTelescOut;                 //!< [[%1000]] Slow speed apply to up arrow arm when telescope is outside
    TUint16 u16SlowSpeedDownArrowArmTelescOut;               //!< [[%1000]] Slow speed apply to down arrow arm when telescope is outside
    TUint16 u16RotTurretClockSlowSpeedRedAlo;                //!< [[%1000]] Slow speed apply to clockwise rotation turret when mode ALO is d
    TUint16 u16RotTurretCtClockSlowSpeedRedAlo;              //!< [[%1000]] Slow speed apply to counter clockwise rotation turret when mode 
    TUint16 u16ArrowArmDownSlowSpeedRedAlo;                  //!< [[%1000]] Slow speed apply to arrow arm down when mode ALO is define
    TUint16 u16SlowSpeedRotTurretCtClokTelecOut;             //!< [[%1000]] Slow speed apply to rotation turret counter clockwise when teles
    TUint16 u16SlowSpeedRotTurretClokTelecOut;               //!< [[%1000]] Slow speed apply to rotation turret clockwise when telescope is 
    TUint16 u16MinPvgUpMastMeasure;                          //!< [[%1000]] Min pvg up mast measure in pourcent regarding batterie voltage
    TUint16 u16MaxPvgUpMastMeasure;                          //!< [[%1000]] Max pvg up mast measure in pourcent regarding batterie voltage
    TUint16 au16UpMastMeasureRampRatio[2];                   //!< [[ms]] increase ramp time
    TUint16 u16MinPvgDownMastMeasure;                        //!< [[%1000]] Min pvg down mast measure in pourcent regarding batterie voltage
    TUint16 u16MaxPvgDownMastMeasure;                        //!< [[%1000]] Max pvg down mast measure in pourcent regarding batterie voltage
    TUint16 au16DownMastMeasureRampRatio[2];                 //!< [[ms]] Increase ramp time
    TInt16 i16OutCharPosTransmission1Pressure;               //!< [[Bar/10]] Transmission1PressureSensor  - output characteristic - Positif
    TInt16 i16OutCharNeuTransmission1Pressure;               //!< [[Bar/10]] Transmission1PressureSensor - output characteristic - Neutral
    TInt16 i16OutCharNegTransmission1Pressure;               //!< [[Bar/10]] Transmission1PressureSensor - output characteristic - Negatif
    TInt16 i16InCharPosTransmission1Pressure;                //!< [[uA]] Transmission1PressureSensor  - input characteristic - Positif
    TInt16 i16InCharNeuTransmission1Pressure;                //!< [[uA]] Transmission1PressureSensor - input characteristic - Neutral
    TInt16 i16INCharNegTransmission1Pressure;                //!< [[uA]] Transmission1PressureSensor - input characteristic - Negatif
    TInt16 i16OutCharPosTransmission2Pressure;               //!< [[Bar/10]] Transmission2PressureSensor  - output characteristic - Positif
    TInt16 i16OutCharNeuTransmission2Pressure;               //!< [[Bar/10]] Transmission2PressureSensor - output characteristic - Neutral
    TInt16 i16OutCharNegTransmission2Pressure;               //!< [[Bar/10]] Transmission2PressureSensor - output characteristic - Negatif
    TInt16 i16InCharPosTransmission2Pressure;                //!< [[uA]] Transmission2PressureSensor  - input characteristic - Positif
    TInt16 i16InCharNeuTransmission2Pressure;                //!< [[uA]] Transmission2PressureSensor - input characteristic - Neutral
    TInt16 i16INCharNegTransmission2Pressure;                //!< [[uA]] Transmission2PressureSensor - input characteristic - Negatif
    TInt16 i16OutCharPosBypassPressureSensor;                //!< [[Bar/10]] BypassPressureSensor - output characteristic - Positif
    TInt16 i16OutCharNeuBypassPressureSensor;                //!< [[Bar/10]] BypassPressureSensor - output characteristic - Neutral
    TInt16 i16OutCharNegBypassPressureSensor;                //!< [[Bar/10]] BypassPressureSensor - output characteristic - Negatif
    TInt16 i16InCharPosBypassPressureSensor;                 //!< [[uA]] BypassPressureSensor - input characteristic - Positif
    TInt16 i16InCharNeuBypassPressureSensor;                 //!< [[uA]] BypassPressureSensor - input characteristic - Neutral
    TInt16 i16InCharNegBypassPressureSensor;                 //!< [[uA]] BypassPressureSensor - input characteristic - Negatif
    TBoolean boNvParametersC1_1;                             //!< [[custom]] Param debug Neotec
    TBoolean boNvParametersC1_2;                             //!< [[custom]] Param debug Neotec
    TBoolean boNvParametersC1_3;                             //!< [[custom]] Param debug Neotec
    TBoolean boNvParametersC1_4;                             //!< [[custom]] Param debug Neotec
    TBoolean boNvParametersC1_5;                             //!< [[custom]] Param debug Neotec
    TUint8 u8NvParametersC1_6;                               //!< [[custom]] Param debug Neotec
    TUint8 u8NvParametersC1_7;                               //!< [[custom]] Param debug Neotec
    TUint8 u8NvParametersC1_8;                               //!< [[custom]] Param debug Neotec
    TUint8 u8NvParametersC1_9;                               //!< [[custom]] Param debug Neotec
    TUint16 u16NvParametersC1_10;                            //!< [[custom]] Param debug Neotec
    TUint16 u16NvParametersC1_11;                            //!< [[custom]] Param debug Neotec
    TUint16 u16NvParametersC1_12;                            //!< [[custom]] Param debug Neotec
    TUint16 u16NvParametersC1_13;                            //!< [[custom]] Param debug Neotec
    TInt16 i16NvParametersC1_14;                             //!< [[custom]] Param debug Neotec
    TInt16 i16NvParametersC1_15;                             //!< [[custom]] Param debug Neotec
    TInt16 i16NvParametersC1_16;                             //!< [[custom]] Param debug Neotec
    TInt16 i16NvParametersC1_17;                             //!< [[custom]] Param debug Neotec
    TUint16 u16CurFor220VGeneratorOn;                        //!< [[custom]] Current parameter for 220v appliqued on genetor
    TUint8 u8NbElementTransissionPressure;                   //!< [[custom]] Number element of transission Pressure
    TUint16 u16RampUpEvGenerator;                            //!< [[custom]] Ramp up Ev Generator
    TUint16 u16RampDownEvGenerator;                          //!< [[custom]] Ramp Up Ev Generator
    TInt16 i16GasGaugeAlarm;                                 //!< [[custom]] Gas gauge alarm min treshold
    TUint16 u16CRC_SRDO1;                                    //!< [[custom]] CRC of communication parameter SRDO 1
    TUint16 u16CRC_SRDO2;                                    //!< [[custom]] CRC of communication parameter SRDO 2
    TUint16 u16CRC_SRDO3;                                    //!< [[custom]] CRC of communication parameter SRDO 3
    TUint16 u16CRC_SRDO4;                                    //!< [[custom]] CRC of communication parameter SRDO 4
    TUint16 u16CRC_SRDO5;                                    //!< [[custom]] CRC of communication parameter SRDO 5
    TUint16 u16CRC_SRDO6;                                    //!< [[custom]] CRC of communication parameter SRDO 6
    TUint16 u16CRC_SRDO7;                                    //!< [[custom]] CRC of communication parameter SRDO 7
    TUint16 u16CRC_SRDO8;                                    //!< [[custom]] CRC of communication parameter SRDO 8
    TUint16 u16CRC_SRDO9;                                    //!< [[custom]] CRC of communication parameter SRDO 9
    TUint16 u16CRC_SRDO10;                                   //!< [[custom]] CRC of communication parameter SRDO 10
    TUint32 u32TimeoutSdoRequestTime;                        //!< [[custom]] Timeout sdo resquest time
    TBoolean boActiveSystemFault;                            //!< [[custom]] Activation des alarmes
    TBoolean boBypassAlarmActiveC1;                          //!< [[custom]] Activation de l_alarme de bypass
    TInt16 i16OutCharPosOilTankTemp;                         //!< [[Temp]] TankOilTemperature - input current - output characteristic - Pos
    TInt16 i16OutCharNeuOilTankTemp;                         //!< [[Temp]] TankOilTemperature - input current - output characteristic - Neu
    TInt16 i16OutCharNegOilTankTemp;                         //!< [[Temp]] TankOilTemperature - input current - output characteristic - Neg
}TDbNvParametersC1;

typedef struct
{
    TDbListRoot tListRoot;
    TUint16 au16ArmDeltaRampRatioNacellePost[4];             //!< [[ms]] Increase ratio positive
    TUint16 au16ArmArrowRampRatioNacellePost[4];             //!< [[ms]] Increase ratio positive
    TUint16 au16ArmTelescopeRampRatioNacellePost[4];         //!< [[ms]] Increase ratio positive
    TUint16 au16RotTurretRampRatio[2];                       //!< [[custom]] increase ratio
    TUint16 au16PvgEvTorRampRatio[4];                        //!< [[custom]] increase ratio positive
    TInt16 i16AngleEndStopLowDeltaArm;                       //!< [[°/10]] Angle end stop low position of delta arm
    TInt16 i16AngleCalibEndStopLowDeltaArm;                  //!< [[°/10]] Calibrate Angle end stop low position of delta arm master input
    TInt16 i16AngleEndStopHighDeltaArm;                      //!< [[°/10]] Angle end stop high position of delta arm
    TInt16 i16AngleCalibEndStopHighDeltaArm;                 //!< [[°/10]] Calibrate Angle end stop high position of delta arm master input
    TInt16 i16AngleEndStopLowArrowArm;                       //!< [[°/10]] Angle end stop low position of arrow arm
    TInt16 i16AngleCalibEndStopLowArrowArm;                  //!< [[°/10]] Calibrate Angle end stop low position of arrow arm master input
    TInt16 i16AngleEndStopHighArrowArm;                      //!< [[°/10]] Angle end stop high position of arrow arm
    TInt16 i16AngleCalibEndStopHighArrowArm;                 //!< [[°/10]] Calibrate Angle end stop high position of arrow arm master input
    TUint16 u16LenghtEndStopLowTelescope1;                   //!< [[mm]] Lenght end stop low telescope 1
    TUint16 u16LenghtEndStopHighTelescope1;                  //!< [[mm]] Lenght end stop high telescope 1
    TUint16 u16LenghtCaliEndStopLowTelescope1;               //!< [[mm]] Lenght calibrate end stop low telescope 1
    TUint16 u16LenghtCaliEndStopHighTelescope1;              //!< [[mm]] Lenght calibrate  end stop high telescope 1
    TUint16 u16LenghtEndStopLowTelescope2;                   //!< [[mm]] Lenght end stop low telescope 2
    TUint16 u16LenghtEndStopHighTelescope2;                  //!< [[mm]] Lenght end stop high telescope 2
    TUint16 u16LenghtCaliEndStopLowTelescope2;               //!< [[mm]] Lenght calibrate end stop low telescope 2
    TUint16 u16LenghtCaliEndStopHighTelescope2;              //!< [[mm]] Lenght calibrate  end stop high telescope 2
    TUint16 au16ArmDeltaRampRatioTurretPost[4];              //!< [[ms]] Ratio apply to ramp signal to control arm delta with turret post
    TUint16 au16ArmArrowRampRatioTurretPost[4];              //!< [[ms]] Ratio apply to ramp signal to control arm arrow with turret post
    TUint16 au16ArmTelescopeRampRatioTurretPost[4];          //!< [[ms]] Ratio apply to ramp signal to control arm telescope with turret post
    TInt16 i16AngleCalibDeltaArmHyst;                        //!< [[custom]] Angle calib delta arm hyst
    TInt16 i16AngleCalibArrowArmHyst;                        //!< [[custom]] Angle calib arrow arm hyst
    TInt16 i16AngleCalibEndStopHighDeltaArmSla;              //!< [[custom]] Calibrate Angle end stop high position of delta arm slave input
    TInt16 i16AngleCalibEndStopLowDeltaArmSla;               //!< [[custom]] Calibrate Angle end stop low position of delta arm slave input
    TInt16 i16AngleCalibEndStopHighArrowArmSla;              //!< [[custom]] Calibrate Angle end stop high position of arrow arm master input
    TInt16 i16AngleCalibEndStopLowArrowArmSla;               //!< [[custom]] Calibrate Angle end stop Low position of arrow arm master input
}TDbNvCalibrationC1;

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
    TBoolean boNacelleBasketRightSideSensor2;                //!< [[custom]] Nacelle basket right side sensor 2 value
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
}TDbRam48XsInputsC1;

typedef struct
{
    TDbListRoot tListRoot;
    TBoolean boRotFrameClkwiseButton;                        //!< [[custom]] Rotation frame clockwise
    TBoolean boRotFrameCtClkwiseButton;                      //!< [[custom]] Rotation frame Counter clockwise
    TBoolean boUpPendularOrRotTurretCtClock;                 //!< [[custom]] Up pendular or rotation clockwise turret
    TBoolean boDownPendularOrRotTurretClock;                 //!< [[custom]] down pendular or rotation counter clockwise turret
    TBoolean boSelectorPendular;                             //!< [[custom]] Selector pendular
    TBoolean boSelectorRotTurret;                            //!< [[custom]] Selector rotation turret
    TBoolean boUpAxleOscillant;                              //!< [[custom]] Up axle oscillant
    TBoolean boDownAxleOscillant;                            //!< [[custom]] Down axle oscillant
    TBoolean boUpAxleFixe;                                   //!< [[custom]] Up axle fixe
    TBoolean boDownAxleFixe;                                 //!< [[custom]] Down axle fixe
    TBoolean boForcingAdvanceTrack;                          //!< [[custom]] Forcing advance track
}TDbRamRcvRadioCmdC1;

typedef struct
{
    TDbListRoot tListRoot;
    TBoolean boAutorizeUpDeltaArm;                           //!< [[custom]] Autorize up delta arm
    TBoolean boAutorizeDownDeltaArm;                         //!< [[custom]] Autorize down delta arm
    TBoolean boAutorizeUpArrowArm;                           //!< [[custom]] Autorize up arrow arm
    TBoolean boAutorizeDownArrowArm;                         //!< [[custom]] Autorize down arrow arm
    TBoolean boAutorizeOutTelescopeArm;                      //!< [[custom]] Autorize Out telescope arm
    TBoolean boAutorizeInTelescopeArm;                       //!< [[custom]] Autorize In telescope arm
    TBoolean boAutorizeRotBasketClkwise;                     //!< [[custom]] Autorize rotation basket clockwise
    TBoolean boAutorizeRotBasketCtClkwise;                   //!< [[custom]] Autorize rotation basket counter clockwise
    TBoolean boAutorizeUpInclinaisonBasket;                  //!< [[custom]] Autorize up inclinaison basket
    TBoolean boAutorizeDownInclinaisonBasket;                //!< [[custom]] Autorize down inclinaison basket
    TBoolean boAutorizeUpPendular;                           //!< [[custom]] Autorize up pendular
    TBoolean boAutorizeDownPendular;                         //!< [[custom]] Autorize down pendular
    TBoolean boAutorizeRotTurretClkwise;                     //!< [[custom]] Autorize rotation turret clockwise
    TBoolean boAutorizeRotTurretCtClkwise;                   //!< [[custom]] Autorize rotation turret counter clockwise
}TDbRamLimitMoveC1;

typedef struct
{
    TDbListRoot tListRoot;
    TUint16 u16StartUpCurrentMotor;                          //!< [[mA]] Start Up current 
    TUint16 u16HighForcingCurrentMotor;                      //!< [[mA]] High forcing current when preheating is sollicited
    TUint16 u16LowForcingCurrentMotor;                       //!< [[mA]] Low forcing current
    TUint16 u16Threshold3;                                   //!< [[mA]] Threshold3 aplly when more at one Pvg movement are sollicited
    TUint16 u16Threshold2;                                   //!< [[mA]] Threshold2 aplly when one Pvg movement is sollicited
    TUint16 u16Threshold1;                                   //!< [[mA]] Threshold1 aplly when a movement on groupe2 output 
    TUint32 u32StartUpTime;                                  //!< [[ms]] Time to pilot motor  while start up
    TUint32 u32HighForcingTime;                              //!< [[ms]] Time to pilot motor  while preheating 
    TUint16 u16TranslationCurrentMotor;                      //!< [[mA]] Current applu when Translation movement is sollicited
    TUint16 u16NoMovementCurrentMotor;                       //!< [[mA]] Current apply when no movement
    TUint16 u16TresholdRegimeForGenerator;                   //!< [[custom]] Treshold regime generator
    TUint16 u16EngineIdleSpeedMotor;                         //!< [[custom]] Engine Idle Speed Motor
    TUint8 u8CptmaxNoMovement;                               //!< [[custom]] Counter for filtred the no mouvement function
}TDbNvParamMotorC1;

typedef struct
{
    TDbListRoot tListRoot;
    EErrorStatus48XS eMotorDefaultLightErrSta;               //!< [[custom]] Error status of Motor Default Light ouput
    TBoolean boMotorDefaultLight;                            //!< [[custom]] Motor default light
    EErrorStatus48XS eOverloadLightErrSta;                   //!< [[custom]] Error status of Overload Light ouput
    TBoolean boOverloadLight;                                //!< [[custom]] Overload Light
    EErrorStatus48XS eBuzzerErrSta;                          //!< [[custom]] Error status of Buzzer ouput
    TBoolean boBuzzer;                                       //!< [[custom]] Buzzer
    TBoolean boSupplyDeadManPedalAndJoysticks;               //!< [[custom]] Supply Dead Man Pedal and Joysticks
    EErrorStatus48XS eWarmingLightErrSta;                    //!< [[custom]] Error status of Warming Light ouput
    TBoolean boWarmingLight;                                 //!< [[custom]] Warming Light
    EErrorStatus48XS eDeversDefaultLightErrSta;              //!< [[custom]] Error status of devers default light ouput
    TBoolean boDeversDefaultLight;                           //!< [[custom]] Devers Default Light
    EErrorStatus48XS eGasOilLightErrSta;                     //!< [[custom]] Error status of Gas Oil Light ouput
    TBoolean boGasOilLight;                                  //!< [[custom]] GasOil Light
    EErrorStatus48XS eWhiteLightARGBasketErrSta;             //!< [[custom]] White light ARG basket error status
    TBoolean boWhiteLightARGBasket;                          //!< [[custom]] White light ARG basket command
    EErrorStatus48XS eRedLightARGBasketErrSta;               //!< [[custom]] Red light ARG basket error status
    TBoolean boRedLightARGBasket;                            //!< [[custom]] Red light ARG basket
    EErrorStatus48XS eRedLightARDBasketErrSta;               //!< [[custom]] Red light ARD basket error status
    TBoolean boRedLightARDBasket;                            //!< [[custom]] Red light ARD basket command
    EErrorStatus48XS eWhiteLightARDBasketErrSta;             //!< [[custom]] White light ARD basket error status
    TBoolean boWhiteLightARDBasket;                          //!< [[custom]] White light ARD basket command
    EErrorStatus48XS eWhiteLightAr15746ErrSta;               //!< [[custom]] White light Ar 15746 error status
    TBoolean boWhiteLightAr15746Command;                     //!< [[custom]] White light Ar 15746 cmd
}TDbRam48XsOutputsC1;

typedef struct
{
    TDbListRoot tListRoot;
    TBoolean boRestrictedModeAruActive;                      //!< [[custom]] Restriced mode aru active
    TBoolean boTranslationMovementIsSolicited;               //!< [[custom]] Translation movement is solicited, info to pilot motor
    TBoolean boAxleMovementIsSolicited;                      //!< [[custom]] Axle movement is solicited
    TBoolean boDownAxleFixeSensor;                           //!< [[custom]] Down axle fixe sensor
    TBoolean boDownAxleOscillantSensor;                      //!< [[custom]] Down axle oscillant sensor
    TUint16 u16SlopeAngle;                                   //!< [[custom]] Slope Angle
    TBoolean boReduceSpeedRotTurretClockwise;                //!< [[custom]] Reduce the speed of the turret clockwise movement
    TBoolean boReduceSpeedRotTurretCounterClock;             //!< [[custom]] Reduce the speed of the turret counter clockwise movement
    TBoolean boReduceSpeedArrowArmDown;                      //!< [[custom]] Reduce the speed of the arrow arm down movement
    TBoolean boStopRotTurretClockwise;                       //!< [[custom]] Stop the turret clockwise movement
    TBoolean boStopRotTurretCounterClockwise;                //!< [[custom]] Stop the turret counter clockwise movement
    TBoolean boStopRotBasketClockwise;                       //!< [[custom]] Stop the basket clockwise movement
    TBoolean boStopRotBasketCounterClockwise;                //!< [[custom]] Stop the basket counter clockwise movement
    TBoolean boStopArrowArmDown;                             //!< [[custom]] Stop the arrow arm down movement
    TBoolean boStopTelescopeOut;                             //!< [[custom]] Stop the telescope out movement
    TInt16 i16EncodeurTurret1Angle;                          //!< [[custom]] Encodeur turret 1 angle
    TBoolean boRedLightARGBasketCmd;                         //!< [[custom]] Red light ARG basket command
    TBoolean boWhiteLightARGBasketCmd;                       //!< [[custom]] White light ARG basket command
    TUint32 u32EncodeurMastMeasureRaw;                       //!< [[custom]] Encodeur mast measure raw value sensor
    TBoolean boWrongAbutments;                               //!< [[custom]] Worg abutments and key
    TInt32 i32SpeedVehicleKmhx100;                           //!< [[custom]] Speed vehicle in kmh
    TBoolean boStopMovementByBrakeTest;                      //!< [[custom]] Stop all movement when a test brake is running
    TBoolean boStopMovementByBreakInBrake;                   //!< [[custom]] Stop all movement when a break in brake is running
    TBoolean boEnableBuzzerSelectPost;                       //!< [[custom]] Enable buzzer by select post function
    EControlPost eSelectedControlPost;                       //!< [[custom]] Select control Post
    TBoolean boCenteredTurretState;                          //!< [[custom]] Centered Turret state
    TBoolean boAuthorizeWork;                                //!< [[custom]] Authorize Work
    TBoolean boUpOsciAxlePos;                                //!< [[custom]] Up osccilant axle position
    TBoolean boUpFixeAxlePos;                                //!< [[custom]] Up fixe axle position
    ERailWorkMode eRailWorkMode;                             //!< [[custom]] Rail word mode
    TUint16 u16EvForwardCommand;                             //!< [[custom]] Ev forward command
    TUint16 u16EvBackwardCommand;                            //!< [[custom]] Ev backward command
    TBoolean boRedLightARDBasketCmd;                         //!< [[custom]] Red light ARD basket command
    TBoolean boWhiteLightARDBasketCmd;                       //!< [[custom]] White light ARD basket command
    TBoolean boSecondParkBrakeActive;                        //!< [[custom]] Second Park Brake Active
    TBoolean boAutorisationHighSpeedKeyState;                //!< [[custom]] Autorisation High Speed Key State
    TBoolean boTransRailElectricRampOngoing;                 //!< [[custom]] Translation on Rail with Electric Ramp Ongoing
    TInt16 i16RpmPvgTransRail;                               //!< [[custom]] Rpm Pvg Trans Rail
    TUint8 u8Batt_Soc;                                       //!< [[custom]] Battery Soc
    TInt16 i16Ibatt_ist;                                     //!< [[custom]] Current Battery
    TBoolean boSendAuthorizeReloadBattery;                   //!< [[custom]] Send Authorize Reload Battery
}TDbRamEcuC1RcvFromC0;

typedef struct
{
    TDbListRoot tListRoot;
    TBoolean bogBattery_On_Off;                              //!< [[custom]] Battery Status
    TBoolean bogPreheat_On_Off;                              //!< [[custom]] Preheat Status
    TBoolean bogEngine_Faillure_On_Off;                      //!< [[custom]] Engine Faillure Status
    TBoolean bogMaintenance_On_Off;                          //!< [[custom]] Maintenance Status
    TBoolean bogOil_On_OFF;                                  //!< [[custom]] Oil Status
    TBoolean bogDeltaArmSectorDown;                          //!< [[custom]] Delta Arm Sector Down
    TBoolean bogArrowArmSectorDown;                          //!< [[custom]] Arrow Arm Sector Down
    TBoolean bogPendularSectorDown;                          //!< [[custom]] Pendular Sector Down
    TBoolean bogDeltaArmInCenter;                            //!< [[custom]] Delta Arm in Center
    TBoolean bogArrowArmInCenter;                            //!< [[custom]] Arrow Arm in Center
    TBoolean bogPendularInCenter;                            //!< [[custom]] Pendular in Center
    TBoolean bogBasketRotationInCenter;                      //!< [[custom]] Basket Rotation in Center
    TBoolean bogTelescopeInCenter;                           //!< [[custom]] Telescope in Center
    TBoolean bogBasketInclinaisonInCenter;                   //!< [[custom]] Basket Inclinaison in Center
    TBoolean bogDeltaArmMoveUpAllow;                         //!< [[custom]] Delta Arm Move Up Allowed
    TBoolean bogDeltaArmMoveDownAllow;                       //!< [[custom]] Delta Arm Move Down Allowed
    TBoolean bogArrowArmMoveUpAllow;                         //!< [[custom]] Arrow Arm Move Up Allowed
    TBoolean bogArrowArmMoveDownAllow;                       //!< [[custom]] Arrow Arm Move Down Allowed
    TBoolean bogPendularMoveUpAllow;                         //!< [[custom]] Pendular Move Up Allowed
    TBoolean bogPendularMoveDownAllow;                       //!< [[custom]] Pendular Move Down Allowed
    TBoolean bogTelescopeMoveOutAllow;                       //!< [[custom]] Telescope Move Out Allowed
    TBoolean bogTelescopeMoveInAllow;                        //!< [[custom]] Telescope Move In Allowed
    TBoolean bogTurretCtClockWiseMoveAllow;                  //!< [[custom]] Turret Counter Clockwise Move Allowed
    TBoolean bogTurretClockWiseMoveAllow;                    //!< [[custom]] Turret Clockwise Move Allowed
    TBoolean bogBasketRotCtClockWiseMoveAllow;               //!< [[custom]] Basket Rotation Counter Clockwise Move Allowed
    TBoolean bogBasketRotClockWiseMoveAllow;                 //!< [[custom]] Basket Rotation Clockwise Move Allowed
    TBoolean bogBasketInclinaisonMoveUpAllow;                //!< [[custom]] Basket Inclinaison Move Up Allowed
    TBoolean bogBasketInclinaisonMoveDownAllow;              //!< [[custom]] Basket Inclinaison Move Down Allowed
    TBoolean bogVehiculeDefault;                             //!< [[custom]] Vehicule in Default (A12)
    TBoolean bogTelescopeOutputPossible;                     //!< [[custom]] Telescope output possible (A48)
    TBoolean bogTelescopeWinderFault;                        //!< [[custom]] Telescope Winder Fault (A17) 
    TBoolean bogNacellePostSelector;                         //!< [[custom]] Nacelle post selector
    TBoolean bogSTOP_On_Off;                                 //!< [[custom]] STOP Status
    TBoolean bogSafeManSystem;                               //!< [[custom]] SafeManSystem (A5)
    TBoolean bogHighSpeedAllow;                              //!< [[custom]] High Speed Allow (A19)
    TBoolean bogAutomatiqueStop;                             //!< [[custom]] Automatique Stop or function mismatch (A20)
    TBoolean bogLowSpeedByFault;                             //!< [[custom]] Low Speed by fault (A46)
    TBoolean bogMeasuringMastFault;                          //!< [[custom]] Measuring Mast in Fault (A8)
    TUint8 u8gFuel;                                          //!< [[custom]] Fuel in Litter
    TUint16 u16gBattery_Voltage;                             //!< [[custom]] Battery Voltage (Mv)
    TUint8 u8gTrainTransmissionPressure;                     //!< [[custom]] Train Transmission Pressure in Bar (A28)
}TDbRamEcuEvision7C1;

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
    TUint8 u8ActivePageOpus;                                 //!< [[custom]] Active page opus
    TBoolean boKeyYesReloadWithGenerator;                    //!< [[custom]] Key : YES reload with generator
    TBoolean boKeyNoReloadWithGenerator;                     //!< [[custom]] Key : NO reload with generator
}TDbRamEvision4C1;

typedef struct
{
    TDbListRoot tListRoot;
    TBoolean boCalibAngleEndStopLowDeltaArm;                 //!< [[custom]] Command to perform the calibration of angle end stop low delta a
    TBoolean boCalibAngleEndStopHighDeltaArm;                //!< [[custom]] Command to perform the calibration of angle end stop high delta 
    TBoolean boCalibAngleEndStopLowArrowArm;                 //!< [[custom]] Command to perform the calibration of angle end stop low arrow a
    TBoolean boCalibAngleEndStopHighArrowArm;                //!< [[custom]] Command to perform the calibration of angle end stop high arrow 
    TBoolean boSavedCalibrationListC1;                       //!< [[custom]] Command to savedcalibration value on EEPROM
    TBoolean boCalibLenghtEndStopLowTelescope;               //!< [[custom]] Command to perform the calibration of lenght end stop low telesc
    TBoolean boCalibLenghtEndStopHighTelescope;              //!< [[custom]] Command to perform the calibration of lenght end stop high teles
}TDbRamEcuCaliCmdC1;

typedef struct
{
    TDbListRoot tListRoot;
    TUint16 au16SlopeTelescModeCurveSlopeAngles[9];          //!< [°/10] Telescope limitation, curve slope angle values
    TUint16 au16SlopeTelescModeCurveTelescLenght[9];         //!< [mm] Telescope limitation, curve telescope stroke values
    TUint16 u16TelescopeLimitCriticZoneThresRel;             //!< [mm] Telescope limitation, threshold of the critical zone (relative 
    TInt16 i16TelescopeLimitCriticZoneHystRel;               //!< [mm] Telescope limitation, hysteresis applied on the critical zone t
    TUint16 u16DeltaArmLimitSlopeHighThresAbs;               //!< [°/10] Delta arm limitation, threshold use to detect if the slope is h
    TInt16 i16DeltaArmLimitSlopeHighHystRel;                 //!< [°/10] Delta arm limitation, hysteresis applied on the slope high thre
    TInt16 i16DeltaArmLimitUpperZoneThresAbs;                //!< [°/10] Delta arm limitation, threshold angle of the upper zone (absolu
    TInt16 i16DeltaArmLimitUpperZoneHystRel;                 //!< [°/10] Delta arm limitation, hysteresis applied on the upper zone thre
    TInt16 i16DeltaArmLimitSlowZoneThresRel;                 //!< [°/10] Delta arm limitation, threshold angle of the slow down zone (re
    TUint16 u16DeltaArmLimitSlowSpeedReduc;                  //!< [_] Delta arm limitation, extra speed reduction applied on slow spe
    TInt16 i16DeltaArmLimitCriticZoneThresRel;               //!< [°/10] Delta arm limitation, threshold angle of the critical zone (rel
    TInt16 i16DeltaArmLimitCriticZoneHystRel;                //!< [°/10] Delta arm limitation, hysteresis applied on the critical zone t
    TInt16 i16ArrowArmLimitLowerZoneThresAbs;                //!< [°/10] Arrow arm limitation, threshold angle of the lower zone (absolu
    TInt16 i16ArrowArmLimitLowerZoneHystRel;                 //!< [°/10] Arrow arm limitation, hysteresis applied on the lower zone thre
    TInt16 i16ArrowArmLimitSlowZoneThresRel;                 //!< [°/10] Arrow arm limitation, threshold angle of the slow down zone (re
    TUint16 u16ArrowArmLimitSlowSpeedReduc;                  //!< [_] Arrow arm limitation, extra speed reduction applied on slow spe
    TInt16 i16ArrowArmLimitCriticZoneThresRel;               //!< [°/10] Arrow arm limitation, threshold angle of the critical zone (rel
    TInt16 i16ArrowArmLimitCriticZoneHystRel;                //!< [°/10] Arrow arm limitation, hysteresis applied on the critical zone t
    TUint16 au16ArmTelescModeCurveArmAngles[9];              //!< [°/10] Arm telescope mode curve arm angles
    TUint16 au16ArmTelescModeCurveTelescLenght[9];           //!< [mm] Arm Telescope Mode Curve Telescopes Lengt
    TBoolean boSlopeTelescopeMode;                           //!< [-] Slope telescope mode
    TUint16 u16ArrowArmPerformLowUpperSector;                //!< [[custom]] Thres of the high sector of Arrow for the STRUKTON EVO
    TUint16 u16ArrowArmPerformSectorUpperCritic;             //!< [[custom]] Thres of the low sector of Arrow for the STRUKTON EVO
    TUint16 u16ArrowArmPerformSectorHyst;                    //!< [[custom]] Hyst of sector Arrow for the STRUKTON EVO
}TDbNvParamLimitWorkEnvelopeC1;

typedef struct
{
    TDbListRoot tListRoot;
    TBoolean boReduceSpeedDeltaArmUp;                        //!< [-] Reduce the speed of the delta up movement
    TBoolean boReduceSpeedArrowArmDown;                      //!< [-] Reduce the speed of the arrow arm down movement
    TBoolean boStopTelescopeOut;                             //!< [-] Stop the telescope out movement
    TBoolean boStopDeltaArmUp;                               //!< [-] Stop the delta arm up movement
    TBoolean boStopArrowArmDown;                             //!< [-] Stop the arrow arm down movement
    TBoolean boStopAllMovements;                             //!< [-] Stop all movement (a critical position was reached)
    TUint16 u16SelectedSlopeAngle;                           //!< [°/10] Selected slope angle value
    TUint16 u16TelescopeLimitStrokeThres;                    //!< [mm] Telescope limitation, stroke threshold extracted from the look 
    TBoolean boTelescopeInCriticalZone;                      //!< [-] The telescope is in the critical zone
    TBoolean boSlopeIsHigh;                                  //!< [-] The slope is high
    TBoolean boDeltaArmInUpperZone;                          //!< [-] The delta arm is in the upper zone
    TBoolean boDeltaArmInCriticalZone;                       //!< [-] The delta arm is in the critical zone
    TBoolean boArrowArmInLowerZone;                          //!< [-] The arrow arm is in the lower zone
    TBoolean boArrowArmInCriticalZone;                       //!< [-] The arrow arm is in the critical zone
    TBoolean boEnableSimuMode;                               //!< [-] Enable simulation mode (use the simulation variables instead of 
    TInt16 i16SimuSlopeAngleLong;                            //!< [°/10] Variable used to simulate the longitudinal slope angle input
    TInt16 i16SimuSlopeAngleTrans;                           //!< [°/10] Variable used to simulate the transversal slope angle input
    TUint16 u16SimuTelescopePositionSensor;                  //!< [mm] Variable used to simulate the telescope position input
    TInt16 i16SimuDeltaArmAngularSensor;                     //!< [°/10] Variable used to simulate the delta arm angular sensor input
    TInt16 i16SimuArrowArmAngularSensor;                     //!< [°/10] Variable used to simulate the arrow arm angular sensor input
}TDbRamLimitWorkEnvelopeC1;

typedef struct
{
    TDbListRoot tListRoot;
    TUint8 u8StateHeartBeatTelescopeSensor;                  //!< [[custom]] State heart beat telescope sensor
    TUint16 u16LenghtTelescope1;                             //!< [[custom]] Lenght telescope 1
    TUint8 u8ErrorRetractorTelescope1;                       //!< [[custom]] Error number of retractor telescope 1
    TUint16 u16RetractorTelescopeVal1;                       //!< [[custom]] Retractor Telescope value 1
    TUint16 u16LenghtTelescope2;                             //!< [[custom]] Lenght telescope 2
    TUint8 u8ErrorRetractorTelescope2;                       //!< [[custom]] Error number of retractor telescope 2
    TUint16 u16RetractorTelescopeVal2;                       //!< [[custom]] Retractor Telescope value 2
}TDbRamTelescopeCanC1;

typedef struct
{
    TDbListRoot tListRoot;
    TBoolean boReduceSpeedRotTurretClockwise;                //!< [[custom]] Reduce speed of the turret clockwise movement
    TBoolean boStopRotTurretClockwise;                       //!< [[custom]] Stop the turret clockwise movement
    TBoolean boReduceSpeedRotTurretCounterClock;             //!< [[custom]] Reduce speed of the turret counter clockwise movement
    TBoolean boStopRotTurretCounterClockwise;                //!< [[custom]] Stop the turret counter clockwise movement
    TBoolean boReduceSpeedDeltaArmDown;                      //!< [[custom]] Reduce speed of the delta arm down movement
    TBoolean boFoldedDeltaArm;                               //!< [[custom]] Folded delta arm
    TBoolean boReduceSpeedDeltaArmUp;                        //!< [[custom]] Reduce speed of the delta arm up movement
    TInt16 i16TestTurretPosition;                            //!< [[°/10]] Test variable turret position
    TInt16 i16TestDeltaArmPosition;                          //!< [[°/10]] Test variable delta arm position
    TBoolean boFoldedArrowArm;                               //!< [[custom]] Folded arrow arm
    TBoolean boReduceSpeedArrowArmUp;                        //!< [[custom]] Active reduce speed of arrow arm up
    TBoolean boReduceSpeedArrowArmDown;                      //!< [[custom]] Active reduce speed of arrow arm down
    TBoolean boReduceSpeedTelescopFolded;                    //!< [[custom]] Active reduce speed of telescope folded
    TBoolean boReduceSpeedTelescopeUp;                       //!< [[custom]] Reduce speed for Telescope Up
    TBoolean boReduceSpeedTelescopeDown;                     //!< [[custom]] Reduce speed for Telescope Down
    TBoolean boPerformFoldedTelescopeStop;                   //!< [[custom]] Telescope folded position Stop
    TBoolean boPerformAutoriseTransSlopeArrow;               //!< [[custom]] Autorise translation with unfolded Arrow
    TBoolean boValidSectorTelescope;                         //!< [[custom]] Valid position for the Telescope
    TBoolean boValidFirstSectorTelescope;                    //!< [[custom]] Valid position for the first sector of Telescope
}TDbRamMvtEndStopC1;

typedef struct
{
    TDbListRoot tListRoot;
    TInt16 i16TurretNegEndStopThres;                         //!< [[°/10]] Turret negative end stop threshold
    TInt16 i16TurretNegEndStopHyst;                          //!< [[°/10]] Turret negative end stop threshold hysteresis (relative)
    TInt16 i16TurretNegEndStopSlowThres;                     //!< [[°/10]] Turret negative end stop threshold use to reduce speed (relative
    TInt16 i16TurretPosEndStopThres;                         //!< [[°/10]] Turret positive end stop threshold
    TInt16 i16TurretPosEndStopHyst;                          //!< [[°/10]] Turret positive end stop threshold hysteresis (relative)
    TInt16 i16TurretPosEndStopSlowThres;                     //!< [[°/10]] Turret positive end stop threshold use to reduce speed (relative
    TInt16 i16FoldedDeltaArmThres;                           //!< [[°/100]] Folded Delta arm angle threshold
    TInt16 i16FoldedDeltaArmHyst;                            //!< [[°/100]] Folded Delta arm threshold hysteresis (relative)
    TInt16 i16DeltaArmBottomEndStopSlowThres;                //!< [[°/100]] Delta arm bottom end stop threshold use to reduce speed (relativ
    TInt16 i16DeltaArmTopEndStopThres;                       //!< [[°/100]] Delta arm top end stop threshold
    TInt16 i16DeltaArmTopEndStopHyst;                        //!< [[°/100]] Delta arm top end stop threshold hysteresis (relative)
    TInt16 i16DeltaArmTopEndStopSlowThres;                   //!< [[°/100]] Delta arm top end stop threshold use to reduce speed (relative t
    TInt16 i16FoldedArrowArmThres;                           //!< [[°/100]] Folded Delta arm angle threshold
    TInt16 i16FoldedArrowArmHyst;                            //!< [[°/100]] Arrow arm bottom end stop threshold hysteresis (relative)
    TUint16 u16DeltaArmSlowMvtEndStop;                       //!< [[custom]] Down Delta arm slow speed reduc when delta arm is close at abutm
    TInt16 i16ArrowArmTopEndStopSlowThres;                   //!< [[custom]] Arrow Arm at the Top End Stop Slow Threshold
    TInt16 i16ArrowArmBottomEndStopSlowThres;                //!< [[custom]] Arrow Arm Bottom End Stop Slow Threshold
    TInt16 i16ArrowArmTopEndStopThres;                       //!< [[custom]] Arrow Arm Top End Stop Threshold
    TUint16 u16ArrowArmSlowMvtDownEndStop;                   //!< [[custom]] Arrow Arm Slow Mvt Down End Stop
    TUint16 u16ArrowArmSlowMvtUpEndStop;                     //!< [[custom]] Arrow Arm Slow Mvt Up End Stop
    TUint16 u16TelescopSlowMvtFoldedEndStop;                 //!< [[custom]] Telescope Slow Mvt Folded End Stop
    TUint16 u16TelescopePerfOutLimit;                        //!< [[custom]] Thres of maximum Telescope sector
    TUint16 u16TelescopePerfOutLimitHyst;                    //!< [[custom]] Hyst of thres to the sector of Telescope
    TUint16 u16TelescopePerfOutLimitSlowThres;               //!< [[custom]] Thres for the slow sector to the Telescope
}TDbNvParamMvtEndStopC1;

typedef struct
{
    TDbListRoot tListRoot;
    TInt16 i16TurretRearCenterPos;                           //!< [[°/10]] Rear center position of the turret
    TInt16 i16TurretFrontPositiveCenterPos;                  //!< [[°/10]] Front center position of the turret in the positive direction
    TInt16 i16TurretFrontNegativeCenterPos;                  //!< [[°/10]] Front center position of the turret in the negative direction
    TInt16 i16TurretCenterZoneWindow;                        //!< [[°/10]] Turret center zone window (relative to the center positions)
    TInt16 i16TurretCenterZoneWindowHyst;                    //!< [[°/10]] Hysteresis applied to the turret center zone window (relative)
    TInt16 i16TurretCenterZoneSlowThres;                     //!< [[°/10]] Threshold use to reduce speed before reaching a center zone (rel
    TInt16 i16TurretCenterZoneWindowLeft;                    //!< [[°/10]] Turret center zone window left  (relative to the center position
    TInt16 i16TurretCenterZoneWindowRight;                   //!< [[°/10]] Turret center zone window right (relative to the center position
}TDbNvParamAutoStopC1;

typedef struct
{
    TDbListRoot tListRoot;
    TBoolean boStopBasketRotation;                           //!< [[custom]] Stop the basket rotation movement
    TBoolean boStopTurretRotation;                           //!< [[custom]] Stop the turret rotation movement
    TBoolean boReduceSpeedRotTurretClockwise;                //!< [[custom]] Reduce the speed of the turret clockwise movement
    TBoolean boReduceSpeedRotTurretCounterClock;             //!< [[custom]] Reduce the speed of the turret counter clockwise movement
    TBoolean boTurrentInCenterPos;                           //!< [[custom]] Turret is in a center position
    TBoolean boEnableSimuMode;                               //!< [[custom]] Enable simulation mode (use the simulation variables instead of 
    TBoolean boTestBasketLeftSideSensor;                     //!< [[custom]] Test variable for simulation - basket left side sensor
    TBoolean boTestBasketRightSideSensor;                    //!< [[custom]] Test variable for simulation - basket right side sensor
    TBoolean boTestBasketRotCmdEnabled;                      //!< [[custom]] Test variable for simulation - a command for the rotation of the
    TInt16 i16TestTurretAngularPosition;                     //!< [[°/10]] Test variable for simulation - turret angular position
    TBoolean boTestTurretRotCmdEnabled;                      //!< [[custom]] Test variable for simulation - a command for the rotation of the
    TBoolean boTurretInRearCenterPos;                        //!< [[custom]] Turret is in the rear center zone
    TBoolean boTurretInFrontPositiveCenterPos;               //!< [[custom]] Turret is in the front positive center zone
    TBoolean boTurretInFrontNegativeCenterPos;               //!< [[custom]] Turret is in the front negative center zone
    TBoolean boBasketInCentrerPos;                           //!< [[custom]] Basket in centrer position
    TBoolean boTurretRotationCmdEnabled;                     //!< [[custom]] Turret rotation command enabled
    TUint8 u8CounterStopTurretRotationDebug;                 //!< [[custom]] counter stop turret rotation for debug
    TUint8 u8CounterNoStopTurretRotationDebug;               //!< [[custom]] counter no stop turret rotation for debug
}TDbRamAutoStopC1;

typedef struct
{
    TDbListRoot tListRoot;
    TBoolean boFonction_Active;                              //!< [[custom]] Fonction active when commande neutre and button fucntion pushed
    TBoolean boCommande_Neutre;                              //!< [[custom]] Command neutre when all command of TOR movement is not pushed
    TBoolean boAuthorize_Driving;                            //!< [[custom]] Authorize driving mast when fonction active and dead man pedal a
    TBoolean boFolded_Position_Mast;                         //!< [[custom]] Folded position of mast
    TBoolean boStop_Movement_By_Mast;                        //!< [[custom]] Stop all movement TOR when mast is sollicited
    TBoolean boRazDistanceTraveledButton;                    //!< [[custom]] Raz distance traveled button
    TInt32 i32DistanceTraveledMm;                            //!< [[mm]] Distance traveled in milimeter
    TUint32 u32DeltaMinMaxEncodeurValue;                     //!< [[custom]] Delta beetween min and max encodeur mast value
    TUint16 u16EncodeurMastCentimeterOffset;                 //!< [[custom]] Mast measure encodeur in cm additional to offset
    TUint16 u16EncodeurMastMeasureCentimeter;                //!< [[custom]] Mast measure encodeur in cm
    TBoolean boNoMovementIsDuringAndNeutralCmd;              //!< [[custom]] No movement is during
    TInt16 i16ScalingJoyMatTelescope;                        //!< [[custom]] Scaling joystick mat , joytstick telescope is used to pilot mat
    TUint32 u32TimeWithMastNotFolded;                        //!< [[custom]] Time with mast not folded
    TBoolean boDownAxleOscillantForMast;                     //!< [[custom]] Down axle oscillant when function mast measure is active
    TBoolean boVisibleDistanceTraveledMat;                   //!< [[custom]] Flag to disply on scree distance traveled wth unfolded mat
    TBoolean boMastInUpperPosition;                          //!< [[custom]] Mast in upper position
    TBoolean boMastPanthoInFoldedPosition;                   //!< [[custom]] Mast in folded position
    TBoolean boValveInDownPosition;                          //!< [[custom]] Mast valve en down position
    TBoolean boPostInterdictionMastSNCF;                     //!< [[custom]] Post interdiction for mast SNCF
    TBoolean boMemoFirstValidCycleMast;                      //!< [[custom]] Memorisation of first valid cycle mast
    TBoolean boContactMastAutorisationOfMvts;                //!< [[custom]] Mast contact autorisation of mvts
    TBoolean boInterdictionOfNacelleTurretPost;              //!< [[custom]] Interdiction of Nacelle And Turret post
    TBoolean boPictoWarningFirstValidCycleMast;              //!< [[custom]] Warning picto for the first valid cycle of mast SNCF
}TDbRamMastMeasureC1;

typedef struct
{
    TDbListRoot tListRoot;
    TInt16 i16Offset_Mast_Centimeter;                        //!< [[cm]] offset mast in centimeter additional to scaling value
    TInt16 i16FoldedMastThres;                               //!< [[cm]] Folded mat treshold
    TInt16 i16FoldedMastHyst;                                //!< [[cm]] Folded mat treshold hysterisys
    TUint32 u32MinValueEncodeurMast;                         //!< [[custom]] Min calibration value of encodeut mast sensor value
    TUint32 u32MaxValueEncodeurMast;                         //!< [[custom]] Max calibration value of encodeut mast sensor value
    TUint16 u16MinCentimeterEncodeurMast;                    //!< [[custom]] Min calibration value of encodeut mast in centimeter
    TUint16 u16MaxCentimeterEncodeurMast;                    //!< [[custom]] Max calibration value of encodeut mast in centimeter
    TUint32 u32MastDisplayRefreshCycleTime;                  //!< [[ms]] Refresh cycle time or the mast digital display ( cycle time of t
}TDbNvParamMastC1;

typedef struct
{
    TDbListRoot tListRoot;
    TBoolean bogActivateMeasuringMast;                       //!< [[custom]] Activate Measuring Mast (A21)
    TBoolean bogButtonCalibMinMastMeasure;                   //!< [[custom]] Button for the calibration of min position mast measure encodeur
    TBoolean bogButtonCalibMaxMastMeasure;                   //!< [[custom]] Button for the calibration of max position mast measure encodeur
    TBoolean boSavePosEncodeurMastMeasureButton;             //!< [[custom]] Button for save min and max value of encodeur mast measure
    TBoolean boRazDistanceTraveledMastMeasure;               //!< [[custom]] Raz distance translation traveled with mast measure unfolded
    TBoolean bogSerialNumber;                                //!< [[custom]] Serial Number
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
}TDbRamEvision7C1;

typedef struct
{
    TDbListRoot tListRoot;
    TInt16 i16BypassPressureThres;                           //!< [[custom]] Bypass pressure threshold alarm
    TInt16 i16TelescopeInToleranceInductive;                 //!< [[custom]] DM_TELESCOPE_SENSOR_FAULT - Telescope In torlerance with inducti
    TInt16 i16TelescopeToleranceNoMovement;                  //!< [[custom]] DM_TELESCOPE_SENSOR_FAULT - Telescope torlerance when no movemen
    TInt16 i16TelescopeToleranceChannels;                    //!< [[custom]] DM_TELESCOPE_SENSOR_FAULT - Telescope torlerance beetween 2 Chan
    TInt32 i32AlternatorRegimeMaxThres;                      //!< [[custom]] DM__INC_ALTERNATOR_CHARGE_FAULT - max treshold alternator regime
    TUint16 u16BatteryVoltageMinThres;                       //!< [[custom]] DM__INC_ALTERNATOR_CHARGE_FAULT - min treshold battery voltage
    TUint8 u8MinAlarmJoyDeltaArmPrctBat;                     //!< [[%]] DM_C1_OUT_OF_RANGE_JOY_DELTA_ARM_48XS - min alarm value of joyti
    TUint8 u8MaxAlarmJoyDeltaArmPrctBat;                     //!< [[%]] DM_C1_OUT_OF_RANGE_JOY_DELTA_ARM_48XS - max alarm value of joyti
    TUint8 u8MinAlarmJoyArrowArmPrctBat;                     //!< [[%]] DM_C1_OUT_OF_RANGE_JOY_ARROW_ARM_48XS - min alarm value of joyti
    TUint8 u8MaxAlarmJoyArrowArmPrctBat;                     //!< [[%]] DM_C1_OUT_OF_RANGE_JOY_ARROW_ARM_48XS - max alarm value of joyti
    TUint8 u8MinAlarmJoyTelescopeArmPrctBat;                 //!< [[%]] DM_C1_OUT_OF_RANGE_JOY_TELESCOPE_ARM_48XS - min alarm value of j
    TUint8 u8MaxAlarmJoyTelescopeArmPrctBat;                 //!< [[%]] DM_C1_OUT_OF_RANGE_JOY_TELESCOPE_ARM_48XS - max alarm value of j
    TUint8 u8MinAlarmJoyRotTurretArmPrctBat;                 //!< [[%]] DM_C1_OUT_OF_RANGE_JOY_ROT_TURRET_ARM_48XS - min alarm value of 
    TUint8 u8MaxAlarmJoyRotTurretArmPrctBat;                 //!< [[%]] DM_C1_OUT_OF_RANGE_JOY_ROT_TURRET_ARM_48XS - max alarm value of 
    TUint8 u8MinAlarmJoyAdvancementPrctBat;                  //!< [[%]] DM_C1_OUT_OF_RANGE_JOY_ADVANCEMENT_48XS - min alarm value of joy
    TUint8 u8MaxAlarmJoyAdvancementPrctBat;                  //!< [[%]] DM_C1_OUT_OF_RANGE_JOY_ADVANCEMENT_48XS - max alarm value of joy
    TUint16 u16TimeBypassFault;                              //!< [[custom]] Time Bypass Fault
    TUint16 u16cptTimeTestBypassMax;                         //!< [[custom]] Timer for the Bypass fault
}TDbNvParamAlarmC1;

typedef struct
{
    TDbListRoot tListRoot;
    TBoolean boDm_Swi_Dbl_NcNo_Inc_FrameRot;                 //!< [[custom]] Inconsistency Nc No logical frame rotation
    TBoolean boDm_Turret_Sensor_Fault;                       //!< [[custom]] internal error , inconsistency between two channels and can err
    TBoolean boEvParkBrakeAxleOscillantFault;                //!< [[custom]] Fault of Ev park brake axle osccilant
    TBoolean boEvParkBrakeAxleFixeFault;                     //!< [[custom]] Fault of Ev park brake axle fixe
    TBoolean boEvServiceBrakeAxleOscillantFault;             //!< [[custom]] Fault of Ev service brake axle osccilant
    TBoolean boEvServiceBrakeAxleFixeFault;                  //!< [[custom]] Fault of Ev service brake axle fixe
    TBoolean boEvServiceBrakeTrackFault;                     //!< [[custom]] Fault of Ev serice brake track
    TBoolean boRm_Com_Can_Radio_Loss;                        //!< [[custom]] RM com can radio loss by C0
    TBoolean boEv2ndParkBrakeAxleFixeFault;                  //!< [[custom]] Ev 2nd Park Brake Axle Fixe Fault
    TBoolean boEv2ndParkBrakeAxleOsciFault;                  //!< [[custom]] Ev 2nd Park Brake Axle Osci Fault
}TDbRamEcuC1RcvFailluresFromC0;

typedef struct
{
    TDbListRoot tListRoot;
    TBoolean boStopAggravantMovements;                       //!< [[custom]] 
    TBoolean boTurretPostorRadoPostOn;                       //!< [[custom]] 
    TBoolean boMotorAccelerated;                             //!< [[custom]] 
    TBoolean boRadioPostSelectorOn;                          //!< [[custom]] 
    TBoolean boSlopeHighWithWorkOnCrawler;                   //!< [[custom]] 
    TBoolean boErrorActiveOnC0;                              //!< [[custom]] 
    TBoolean boRailWorkMultiLaneMode;                        //!< [[custom]] 
    TBoolean boTestFrance;                                   //!< [[custom]] 
    TBoolean boWhiteLightAV15746Command;                     //!< [[custom]] 
    TBoolean boWhiteLightAr15746Command;                     //!< [[custom]] 
    TInt16 i16Signal_9;                                      //!< [[custom]] 
    TInt16 i16Signal_10;                                     //!< [[custom]] 
    TInt16 i16Signal_11;                                     //!< [[custom]] 
    TBoolean boAddPerformanceFunc;                           //!< [[custom]] Additionnal Performance Func
    TBoolean boSlopeCaseLess2Deg;                            //!< [[custom]] Slope Case Less 2 Deg
    TBoolean boSlopeCaseLess4Deg;                            //!< [[custom]] Slope Case Less 4 Deg
    TBoolean boSlopeCaseLess6Deg;                            //!< [[custom]] Slope Case Less 6 Deg
    TBoolean boSlopeCaseHigher6Deg;                          //!< [[custom]] Slope Case Higher 6 Deg
    TBoolean boTurretInSpeedZone2Deg;                        //!< [[custom]] Turret In Speed Zone 2 Deg
    TBoolean boTurretInSpeedZone4Deg;                        //!< [[custom]] Turret In Speed Zone 4 Deg
    TBoolean boTurretInSpeedZone2DegForBasket;               //!< [[custom]] Turret In Speed Zone 2 Deg For Basket
    EDiState eSelectedControlPost;                           //!< [[custom]] Selected control post
    TBoolean boUpMastSensorNC;                               //!< [[custom]] Mast sensor position UP
    TBoolean boValveInDownPositionSensor;                    //!< [[custom]] Hydraulic valve uin down position sensor
    TBoolean boMeasuringMastSensorFolded;                    //!< [[custom]] Measuring mast sensor folded
    TBoolean boPresenceSensorPlate;                          //!< [[custom]] Presence of sensor plate on machine
    TUint8 u8RecoveryReductionRatio;                         //!< [[custom]] Recovery reduction ratio for the battery protection
}TDbRamData4C1RcvFromC0;

typedef struct
{
    TDbListRoot tListRoot;
    TBoolean boRamGeneralNeotecC1_1;                         //!< [[custom]] Variable debug Neotec
    TBoolean boRamGeneralNeotecC1_1_1;                       //!< [[custom]] Variable debug Neotec
    TBoolean boRamGeneralNeotecC1_1_2;                       //!< [[custom]] Variable debug Neotec
    TBoolean boRamGeneralNeotecC1_1_3;                       //!< [[custom]] Variable debug Neotec
    TBoolean boRamGeneralNeotecC1_1_4;                       //!< [[custom]] Variable debug Neotec
    TBoolean boRamGeneralNeotecC1_1_5;                       //!< [[custom]] Variable debug Neotec
    TBoolean boRamGeneralNeotecC1_1_6;                       //!< [[custom]] Variable debug Neotec
    TBoolean boRamGeneralNeotecC1_1_7;                       //!< [[custom]] Variable debug Neotec
    TBoolean boRamGeneralNeotecC1_1_8;                       //!< [[custom]] Variable debug Neotec
    TBoolean boRamGeneralNeotecC1_1_9;                       //!< [[custom]] Variable debug Neotec
    TBoolean boRamGeneralNeotecC1_1_10;                      //!< [[custom]] Variable debug Neotec
    TBoolean boRamGeneralNeotecC1_1_11;                      //!< [[custom]] Variable debug Neotec
    TBoolean boRamGeneralNeotecC1_1_12;                      //!< [[custom]] Variable debug Neotec
    TBoolean boRamGeneralNeotecC1_1_13;                      //!< [[custom]] Variable debug Neotec
    TBoolean boRamGeneralNeotecC1_1_14;                      //!< [[custom]] Variable debug Neotec
    TBoolean boRamGeneralNeotecC1_1_15;                      //!< [[custom]] Variable debug Neotec
    TUint8 u8RamGeneralNeotecC1_2;                           //!< [[custom]] Variable debug Neotec
    TUint8 u8RamGeneralNeotecC1_2_1;                         //!< [[custom]] Variable debug Neotec
    TUint8 u8RamGeneralNeotecC1_2_2;                         //!< [[custom]] Variable debug Neotec
    TUint8 u8RamGeneralNeotecC1_2_3;                         //!< [[custom]] Variable debug Neotec
    TUint8 u8RamGeneralNeotecC1_2_4;                         //!< [[custom]] Variable debug Neotec
    TUint8 u8RamGeneralNeotecC1_2_5;                         //!< [[custom]] Variable debug Neotec
    TUint16 u16RamGeneralNeotecC1_3;                         //!< [[custom]] Variable debug Neotec
    TUint16 u16RamGeneralNeotecC1_3_1;                       //!< [[custom]] Variable debug Neotec
    TUint16 u16RamGeneralNeotecC1_3_2;                       //!< [[custom]] Variable debug Neotec
    TUint16 u16RamGeneralNeotecC1_3_3;                       //!< [[custom]] Variable debug Neotec
    TUint16 u16RamGeneralNeotecC1_3_4;                       //!< [[custom]] Variable debug Neotec
    TUint16 u16RamGeneralNeotecC1_3_5;                       //!< [[custom]] Variable debug Neotec
    TUint16 u16RamGeneralNeotecC1_3_6;                       //!< [[custom]] Variable debug Neotec
    TUint16 u16RamGeneralNeotecC1_3_7;                       //!< [[custom]] Variable debug Neotec
    TUint16 u16RamGeneralNeotecC1_3_8;                       //!< [[custom]] Variable debug Neotec
    TInt16 i16RamGeneralNeotecC1_4;                          //!< [[custom]] Variable debug Neotec
    TInt16 i16RamGeneralNeotecC1_4_1;                        //!< [[custom]] Variable debug Neotec
    TInt16 i16RamGeneralNeotecC1_4_2;                        //!< [[custom]] Variable debug Neotec
    TInt16 i16RamGeneralNeotecC1_4_3;                        //!< [[custom]] Variable debug Neotec
    TInt16 i16RamGeneralNeotecC1_4_4;                        //!< [[custom]] Variable debug Neotec
    TInt16 i16RamGeneralNeotecC1_4_5;                        //!< [[custom]] Variable debug Neotec
    TInt16 i16RamGeneralNeotecC1_4_6;                        //!< [[custom]] Variable debug Neotec
    TInt16 i16RamGeneralNeotecC1_4_7;                        //!< [[custom]] Variable debug Neotec
    TInt16 i16RamGeneralNeotecC1_4_8;                        //!< [[custom]] Variable debug Neotec
    TInt16 i16WaterTempJ1939;                                //!< [[custom]] Mesure de la température du liquide de refroidissement du moteur
    TUint16 u16OilPressureJ1939;                             //!< [[custom]] Pression mesuré dans le système de lubrification du moteur
    TUint16 u16MotorSpeedJ1939;                              //!< [[custom]] Vitesse actuelle du moteur calculé
    TInt32 i32AlternatorCurentJ1939;                         //!< [[custom]] Courant de l'alternateur principale du moteur thermique 
    EMotorState eMotorStateJ1939;                            //!< [[custom]] Etat du moteur : Motor stop, pre-start, Wram-Up,Starting
    TInt16 i16PowerBatterie;                                 //!< [[custom]] Tension mesuré aux bornes de la batterie
    TUint16 u16MotorSpeedCmdJ1939;                           //!< [[custom]] Commande de la vietesse du moteur
    TUint8 u8OverrideControlModeCmdJ1939;                    //!< [[custom]] Override Control Mode (SPN695)
    EStateBool2bits eHighPressureOilJ1939;                   //!< [[custom]] High pressure Oil 
    EStateBool2bits eWarmingActiveJ1939;                     //!< [[custom]] Warmin gActive
    EStateBool2bits eStopMotorJ1939;                         //!< [[custom]] Stop Motor
}TDbRamGeneralNeotecC1;

typedef struct
{
    TDbListRoot tListRoot;
    TUint16 u16REGEN_SOC_FULL;                               //!< [[custom]] Regeneration SOC at maximum
    TUint16 u16REGEN_SOC_MAX;                                //!< [[custom]] Threshold maximum to autorize regeneration (Threshold of SOC)
    TUint16 u16REGEN_HYST_SOC_MAX;                           //!< [[custom]] Hysteresis for regeneration of SOC maximum
    TUint16 u16NBR_REGEN_SOC_ALARM;                          //!< [[custom]] Number of time to refuse reloading from generator (Alarm)
    TUint16 u16NBR_REGEN_SOC_OVERED;                         //!< [[custom]] Number of time to refuse reloading from generator (forbidden)
    TUint16 u16ELECTRIC_MOTOR_RPM_MAX;                       //!< [[custom]] RPM motor maximum value
    TUint16 u16ELECTRIC_MOTOR_RPM_MIN;                       //!< [[custom]] RPM motor minimum value
    TUint16 u16ELECTRIC_MOTOR_RPM_PVG;                       //!< [[custom]] RPM for a movement with PVG
    TUint16 u16ELECTRIC_MOTOR_RPM_TOR;                       //!< [[custom]] RPM for a movement with TOR
    TInt16 i16ELECTRIC_MOTOR_COLD_OIL_TEMP;                  //!< [[custom]] Hydraulic oil cold temperature
    TUint16 u16BATTERY_CAPACITY_AMP_HOUR;                    //!< [[custom]] Capacity of the battery in ampere per hour
    TUint8 u8NbElementRemainingRegenTime;                    //!< [[custom]] Number of element for the remaining regeneration time
}TDbNvParamGreenEffC1;

typedef struct
{
    TDbListRoot tListRoot;
    TBoolean boAlarmCptNbrRegenFinish;                       //!< [[custom]] Number of times the alarm regeneration threshold was exceeded
    TBoolean boElectricMotorForbidden;                       //!< [[custom]] Number of times we exceeded the threshold of regeneration forbid
    TBoolean boColdOilTankTemperature;                       //!< [[custom]] Cold Oil Tank Temperature
    TInt16 i16RpmMvtsElectricMode;                           //!< [[custom]] Rpm Movements on Electric Mode
    TInt16 i16RpmTransRailElectricMode;                      //!< [[custom]] Rpm Translation on Rail Electric Mode
    TInt16 i16RpmOilTankTemp;                                //!< [[custom]] Rpm Oil Tank Temperature
    TInt16 i16RpmMotorElectric;                              //!< [[custom]] Rpm Electric motor
    TBoolean boGeneratorOn;                                  //!< [[custom]] Generator ON
    TBoolean boAutoModeActivate;                             //!< [[custom]] Automatic mode activate
    TBoolean boSilenceModeActivate;                          //!< [[custom]] Silence mode activate
    TBoolean boForcingModeActivate;                          //!< [[custom]] Forcing mode activate
    TBoolean boForcingRegenlow;                              //!< [[custom]] Forcing regeneration Low
    TBoolean boForcingRegenHigh;                             //!< [[custom]] Forcing regeneration High
    TUint16 u16RemainingRegenTimeAverage;                    //!< [[custom]] Remaining Regeneration time average
    TBoolean boAskReloadWithGenerator;                       //!< [[custom]] Ask Reload With Generator
    TBoolean boReloadWithGeneratorOn;                        //!< [[custom]] Reloading With Generator On
    TBoolean boSocStopRegen;                                 //!< [[custom]] Stop regeneration by SOC
    TUint16 u16TotalRegenHours;                              //!< [[custom]] Total regeneration Hours
    TBoolean boPictoColdOilTankTemperature;                  //!< [[custom]] Picto Cold Oil Tank Temperature
    TUint16 u16TotalElectricHours;                           //!< [[custom]] Total electric hours
    TBoolean boPictoRecoveryReductionRatio;                  //!< [[custom]] Picto recovery reduction ratio active
}TDbRamGreenEffC1;

// constant values -------------------------------------------------------------------------------

typedef struct
{
    TDbVarInf  tInf_DeltaArmAngularSensorState;
    TBit3 abi3Rng_DeltaArmAngularSensorState[2];
    TBit3 bi3Def_DeltaArmAngularSensorState;
    TDbVarInf  tInf_DeltaArmAngularSensorValue;
    TInt16 ai16Rng_DeltaArmAngularSensorValue[2];
    TInt16 i16Def_DeltaArmAngularSensorValue;
    TDbVarInf  tInf_DeltaArmAngleValue;
    TInt16 ai16Rng_DeltaArmAngleValue[2];
    TInt16 i16Def_DeltaArmAngleValue;
    TDbVarInf  tInf_DeltaArmAngularSensorRawValueMas;
    TUint16 au16Rng_DeltaArmAngularSensorRawValueMas[2];
    TUint16 u16Def_DeltaArmAngularSensorRawValueMas;
    TDbVarInf  tInf_DeltaArmAngularSensorRawValueSla;
    TUint16 au16Rng_DeltaArmAngularSensorRawValueSla[2];
    TUint16 u16Def_DeltaArmAngularSensorRawValueSla;
    TDbVarInf  tInf_ArrowArmAngularSensorState;
    TBit3 abi3Rng_ArrowArmAngularSensorState[2];
    TBit3 bi3Def_ArrowArmAngularSensorState;
    TDbVarInf  tInf_ArrowArmAngularSensorValue;
    TInt16 ai16Rng_ArrowArmAngularSensorValue[2];
    TInt16 i16Def_ArrowArmAngularSensorValue;
    TDbVarInf  tInf_ArrowArmAngleValue;
    TInt16 ai16Rng_ArrowArmAngleValue[2];
    TInt16 i16Def_ArrowArmAngleValue;
    TDbVarInf  tInf_ArrowArmAngularSensorRawValueMas;
    TUint16 au16Rng_ArrowArmAngularSensorRawValueMas[2];
    TUint16 u16Def_ArrowArmAngularSensorRawValueMas;
    TDbVarInf  tInf_ArrowArmAngularSensorRawValueSla;
    TUint16 au16Rng_ArrowArmAngularSensorRawValueSla[2];
    TUint16 u16Def_ArrowArmAngularSensorRawValueSla;
    TDbVarInf  tInf_GasGaugeValue;
    TInt16 ai16Rng_GasGaugeValue[2];
    TInt16 i16Def_GasGaugeValue;
    TDbVarInf  tInf_GasGaugeRawValue;
    TUint32 au32Rng_GasGaugeRawValue[2];
    TUint32 u32Def_GasGaugeRawValue;
    TDbVarInf  tInf_Aru1State;
    EDiState aeRng_Aru1State[2];
    EDiState eDef_Aru1State;
    TDbVarInf  tInf_Aru1RawValue;
    TUint16 au16Rng_Aru1RawValue[2];
    TUint16 u16Def_Aru1RawValue;
    TDbVarInf  tInf_Aru2State;
    EDiState aeRng_Aru2State[2];
    EDiState eDef_Aru2State;
    TDbVarInf  tInf_Aru2RawValue;
    TUint16 au16Rng_Aru2RawValue[2];
    TUint16 u16Def_Aru2RawValue;
    TDbVarInf  tInf_EntryTelescopeFdcSensorState;
    EDiState aeRng_EntryTelescopeFdcSensorState[2];
    EDiState eDef_EntryTelescopeFdcSensorState;
    TDbVarInf  tInf_EntryTelescopeFdcSensorRawValue;
    TUint16 au16Rng_EntryTelescopeFdcSensorRawValue[2];
    TUint16 u16Def_EntryTelescopeFdcSensorRawValue;
    TDbVarInf  tInf_FoldedDeltaArmSensorState;
    EDiState aeRng_FoldedDeltaArmSensorState[2];
    EDiState eDef_FoldedDeltaArmSensorState;
    TDbVarInf  tInf_FoldedDeltaArmSensorRawValue;
    TUint16 au16Rng_FoldedDeltaArmSensorRawValue[2];
    TUint16 u16Def_FoldedDeltaArmSensorRawValue;
    TDbVarInf  tInf_FoldedBoomArmSensorState;
    EDiState aeRng_FoldedBoomArmSensorState[2];
    EDiState eDef_FoldedBoomArmSensorState;
    TDbVarInf  tInf_FoldedBoomArmSensorRawValue;
    TUint16 au16Rng_FoldedBoomArmSensorRawValue[2];
    TUint16 u16Def_FoldedBoomArmSensorRawValue;
    TDbVarInf  tInf_ForcingMotorRegimeState;
    EDiState aeRng_ForcingMotorRegimeState[2];
    EDiState eDef_ForcingMotorRegimeState;
    TDbVarInf  tInf_ForcingMotorRegimeRawValue;
    TUint16 au16Rng_ForcingMotorRegimeRawValue[2];
    TUint16 u16Def_ForcingMotorRegimeRawValue;
    TDbVarInf  tInf_ActiveHelpState;
    EDiState aeRng_ActiveHelpState[2];
    EDiState eDef_ActiveHelpState;
    TDbVarInf  tInf_ActiveHelpRawValue;
    TUint16 au16Rng_ActiveHelpRawValue[2];
    TUint16 u16Def_ActiveHelpRawValue;
    TDbVarInf  tInf_OilPressureState;
    EDiState aeRng_OilPressureState[2];
    EDiState eDef_OilPressureState;
    TDbVarInf  tInf_OilPressureRawValue;
    TUint16 au16Rng_OilPressureRawValue[2];
    TUint16 u16Def_OilPressureRawValue;
    TDbVarInf  tInf_WaterTemperatureState;
    EDiState aeRng_WaterTemperatureState[2];
    EDiState eDef_WaterTemperatureState;
    TDbVarInf  tInf_WaterTemperatureRawValue;
    TUint16 au16Rng_WaterTemperatureRawValue[2];
    TUint16 u16Def_WaterTemperatureRawValue;
    TDbVarInf  tInf_StopMotorInfoState;
    EDiState aeRng_StopMotorInfoState[2];
    EDiState eDef_StopMotorInfoState;
    TDbVarInf  tInf_StopMotorInfoRawValue;
    TUint16 au16Rng_StopMotorInfoRawValue[2];
    TUint16 u16Def_StopMotorInfoRawValue;
    TDbVarInf  tInf_TurretPostSelectorState;
    EDiState aeRng_TurretPostSelectorState[2];
    EDiState eDef_TurretPostSelectorState;
    TDbVarInf  tInf_TurretPostSelectorRawValue;
    TUint16 au16Rng_TurretPostSelectorRawValue[2];
    TUint16 u16Def_TurretPostSelectorRawValue;
    TDbVarInf  tInf_RadioPostSelectorState;
    EDiState aeRng_RadioPostSelectorState[2];
    EDiState eDef_RadioPostSelectorState;
    TDbVarInf  tInf_RadioPostSelectorRawValue;
    TUint16 au16Rng_RadioPostSelectorRawValue[2];
    TUint16 u16Def_RadioPostSelectorRawValue;
    TDbVarInf  tInf_NacellePostSelectorState;
    EDiState aeRng_NacellePostSelectorState[2];
    EDiState eDef_NacellePostSelectorState;
    TDbVarInf  tInf_NacellePostSelectorRawValue;
    TUint16 au16Rng_NacellePostSelectorRawValue[2];
    TUint16 u16Def_NacellePostSelectorRawValue;
    TDbVarInf  tInf_RegimeMotorAlternatorRpm;
    TInt32 ai32Rng_RegimeMotorAlternatorRpm[2];
    TInt32 i32Def_RegimeMotorAlternatorRpm;
    TDbVarInf  tInf_AlternatorChargeOkState;
    EDiState aeRng_AlternatorChargeOkState[2];
    EDiState eDef_AlternatorChargeOkState;
    TDbVarInf  tInf_AlternatorChargeOkValue;
    TUint16 au16Rng_AlternatorChargeOkValue[2];
    TUint16 u16Def_AlternatorChargeOkValue;
    TDbVarInf  tInf_Transmission1PressureSensorState;
    TBit3 abi3Rng_Transmission1PressureSensorState[2];
    TBit3 bi3Def_Transmission1PressureSensorState;
    TDbVarInf  tInf_Transmission1PressureSensorValue;
    TInt16 ai16Rng_Transmission1PressureSensorValue[2];
    TInt16 i16Def_Transmission1PressureSensorValue;
    TDbVarInf  tInf_Transmission2PressureSensorState;
    TBit3 abi3Rng_Transmission2PressureSensorState[2];
    TBit3 bi3Def_Transmission2PressureSensorState;
    TDbVarInf  tInf_Transmission2PressureSensorValue;
    TInt16 ai16Rng_Transmission2PressureSensorValue[2];
    TInt16 i16Def_Transmission2PressureSensorValue;
    TDbVarInf  tInf_FaultPvgDeltaArmState;
    EDiState aeRng_FaultPvgDeltaArmState[2];
    EDiState eDef_FaultPvgDeltaArmState;
    TDbVarInf  tInf_FaultPvgDeltaArmRawValue;
    TUint16 au16Rng_FaultPvgDeltaArmRawValue[2];
    TUint16 u16Def_FaultPvgDeltaArmRawValue;
    TDbVarInf  tInf_FaultPvgArrowArmState;
    EDiState aeRng_FaultPvgArrowArmState[2];
    EDiState eDef_FaultPvgArrowArmState;
    TDbVarInf  tInf_FaultPvgArrowArmRawValue;
    TUint16 au16Rng_FaultPvgArrowArmRawValue[2];
    TUint16 u16Def_FaultPvgArrowArmRawValue;
    TDbVarInf  tInf_FaultPvgTelescopeArmState;
    EDiState aeRng_FaultPvgTelescopeArmState[2];
    EDiState eDef_FaultPvgTelescopeArmState;
    TDbVarInf  tInf_FaultPvgTelescopeArmRawValue;
    TUint16 au16Rng_FaultPvgTelescopeArmRawValue[2];
    TUint16 u16Def_FaultPvgTelescopeArmRawValue;
    TDbVarInf  tInf_FaultPvgEvProTorState;
    EDiState aeRng_FaultPvgEvProTorState[2];
    EDiState eDef_FaultPvgEvProTorState;
    TDbVarInf  tInf_FaultPvgEvProTorRawValue;
    TUint16 au16Rng_FaultPvgEvProTorRawValue[2];
    TUint16 u16Def_FaultPvgEvProTorRawValue;
    TDbVarInf  tInf_BypassPressureSensorState;
    TBit3 abi3Rng_BypassPressureSensorState[2];
    TBit3 bi3Def_BypassPressureSensorState;
    TDbVarInf  tInf_BypassPressureSensorValue;
    TInt16 ai16Rng_BypassPressureSensorValue[2];
    TInt16 i16Def_BypassPressureSensorValue;
    TDbVarInf  tInf_BypassPressureSensorRawValue;
    TUint16 au16Rng_BypassPressureSensorRawValue[2];
    TUint16 u16Def_BypassPressureSensorRawValue;
    TDbVarInf  tInf_StarterMotorState;
    EDiState aeRng_StarterMotorState[2];
    EDiState eDef_StarterMotorState;
    TDbVarInf  tInf_StarterMotorRawValue;
    TUint16 au16Rng_StarterMotorRawValue[2];
    TUint16 u16Def_StarterMotorRawValue;
    TDbVarInf  tInf_OilTankTemperatureState;
    TBit3 abi3Rng_OilTankTemperatureState[2];
    TBit3 bi3Def_OilTankTemperatureState;
    TDbVarInf  tInf_OilTankTemperatureValue;
    TInt16 ai16Rng_OilTankTemperatureValue[2];
    TInt16 i16Def_OilTankTemperatureValue;
    TDbVarInf  tInf_OilTankTemperatureRawValue;
    TUint16 au16Rng_OilTankTemperatureRawValue[2];
    TUint16 u16Def_OilTankTemperatureRawValue;
}TDbSetRamEcuInputsC1;

typedef struct
{
    TDbVarInf  tInf_BlueFireCommand;
    TBoolean aboRng_BlueFireCommand[2];
    TBoolean boDef_BlueFireCommand;
    TDbVarInf  tInf_BlueFireValue;
    EDigStatus aeRng_BlueFireValue[2];
    EDigStatus eDef_BlueFireValue;
    TDbVarInf  tInf_OrangeFlashingLightCommand;
    TBoolean aboRng_OrangeFlashingLightCommand[2];
    TBoolean boDef_OrangeFlashingLightCommand;
    TDbVarInf  tInf_OrangeFlashingLightValue;
    EDigStatus aeRng_OrangeFlashingLightValue[2];
    EDigStatus eDef_OrangeFlashingLightValue;
    TDbVarInf  tInf_AntiStartupCommand;
    TBoolean aboRng_AntiStartupCommand[2];
    TBoolean boDef_AntiStartupCommand;
    TDbVarInf  tInf_AntiStartupValue;
    EDigStatus aeRng_AntiStartupValue[2];
    EDigStatus eDef_AntiStartupValue;
    TDbVarInf  tInf_StopMotorCommand;
    TBoolean aboRng_StopMotorCommand[2];
    TBoolean boDef_StopMotorCommand;
    TDbVarInf  tInf_WarmingCommand;
    TBoolean aboRng_WarmingCommand[2];
    TBoolean boDef_WarmingCommand;
    TDbVarInf  tInf_EvBypassCommand;
    TBoolean aboRng_EvBypassCommand[2];
    TBoolean boDef_EvBypassCommand;
    TDbVarInf  tInf_EvBypassValue;
    EDigStatus aeRng_EvBypassValue[2];
    EDigStatus eDef_EvBypassValue;
    TDbVarInf  tInf_SupplyPvgDeltaArmCommand;
    TBoolean aboRng_SupplyPvgDeltaArmCommand[2];
    TBoolean boDef_SupplyPvgDeltaArmCommand;
    TDbVarInf  tInf_SupplyPvgDeltaArmValue;
    EDigStatus aeRng_SupplyPvgDeltaArmValue[2];
    EDigStatus eDef_SupplyPvgDeltaArmValue;
    TDbVarInf  tInf_SupplyPvgArrowArmCommand;
    TBoolean aboRng_SupplyPvgArrowArmCommand[2];
    TBoolean boDef_SupplyPvgArrowArmCommand;
    TDbVarInf  tInf_SupplyPvgArrowArmValue;
    EDigStatus aeRng_SupplyPvgArrowArmValue[2];
    EDigStatus eDef_SupplyPvgArrowArmValue;
    TDbVarInf  tInf_SupplyPvgTelescopeArmCommand;
    TBoolean aboRng_SupplyPvgTelescopeArmCommand[2];
    TBoolean boDef_SupplyPvgTelescopeArmCommand;
    TDbVarInf  tInf_SupplyPvgTelescopeArmValue;
    EDigStatus aeRng_SupplyPvgTelescopeArmValue[2];
    EDigStatus eDef_SupplyPvgTelescopeArmValue;
    TDbVarInf  tInf_SupplyPvgPropEvTorCommand;
    TBoolean aboRng_SupplyPvgPropEvTorCommand[2];
    TBoolean boDef_SupplyPvgPropEvTorCommand;
    TDbVarInf  tInf_SupplyPvgPropEvTorValue;
    EDigStatus aeRng_SupplyPvgPropEvTorValue[2];
    EDigStatus eDef_SupplyPvgPropEvTorValue;
    TDbVarInf  tInf_EvPropMotorAcceleratorCommand;
    TUint16 au16Rng_EvPropMotorAcceleratorCommand[2];
    TUint16 u16Def_EvPropMotorAcceleratorCommand;
    TDbVarInf  tInf_EvPropGeneratorState;
    EProStatus aeRng_EvPropGeneratorState[2];
    EProStatus eDef_EvPropGeneratorState;
    TDbVarInf  tInf_EvPropGeneratorCommand;
    TUint16 au16Rng_EvPropGeneratorCommand[2];
    TUint16 u16Def_EvPropGeneratorCommand;
    TDbVarInf  tInf_EvPropGeneratorCurrent;
    TUint16 au16Rng_EvPropGeneratorCurrent[2];
    TUint16 u16Def_EvPropGeneratorCurrent;
    TDbVarInf  tInf_NoisemakerState;
    EDigStatus aeRng_NoisemakerState[2];
    EDigStatus eDef_NoisemakerState;
    TDbVarInf  tInf_NoisemakerCommand;
    TBoolean aboRng_NoisemakerCommand[2];
    TBoolean boDef_NoisemakerCommand;
    TDbVarInf  tInf_EvRotationTurretCtClockwiseState;
    EDigStatus aeRng_EvRotationTurretCtClockwiseState[2];
    EDigStatus eDef_EvRotationTurretCtClockwiseState;
    TDbVarInf  tInf_EvRotTurretCtClockwiseCmdBool;
    TBoolean aboRng_EvRotTurretCtClockwiseCmdBool[2];
    TBoolean boDef_EvRotTurretCtClockwiseCmdBool;
    TDbVarInf  tInf_EvRotationTurretClockwiseState;
    EDigStatus aeRng_EvRotationTurretClockwiseState[2];
    EDigStatus eDef_EvRotationTurretClockwiseState;
    TDbVarInf  tInf_EvRotTurretClockwiseCmdBool;
    TBoolean aboRng_EvRotTurretClockwiseCmdBool[2];
    TBoolean boDef_EvRotTurretClockwiseCmdBool;
    TDbVarInf  tInf_EvRotationBasketCtClockwiseState;
    EDigStatus aeRng_EvRotationBasketCtClockwiseState[2];
    EDigStatus eDef_EvRotationBasketCtClockwiseState;
    TDbVarInf  tInf_EvRotationBasketCtClkWiseCmdBool;
    TBoolean aboRng_EvRotationBasketCtClkWiseCmdBool[2];
    TBoolean boDef_EvRotationBasketCtClkWiseCmdBool;
    TDbVarInf  tInf_EvRotationBasketClockwiseState;
    EDigStatus aeRng_EvRotationBasketClockwiseState[2];
    EDigStatus eDef_EvRotationBasketClockwiseState;
    TDbVarInf  tInf_EvRotationBasketClkWiseCmdBool;
    TBoolean aboRng_EvRotationBasketClkWiseCmdBool[2];
    TBoolean boDef_EvRotationBasketClkWiseCmdBool;
    TDbVarInf  tInf_EvUpPendularState;
    EDigStatus aeRng_EvUpPendularState[2];
    EDigStatus eDef_EvUpPendularState;
    TDbVarInf  tInf_EvUpPendularCommandBool;
    TBoolean aboRng_EvUpPendularCommandBool[2];
    TBoolean boDef_EvUpPendularCommandBool;
    TDbVarInf  tInf_EvDownPendularState;
    EDigStatus aeRng_EvDownPendularState[2];
    EDigStatus eDef_EvDownPendularState;
    TDbVarInf  tInf_EvDownPendularCommandBool;
    TBoolean aboRng_EvDownPendularCommandBool[2];
    TBoolean boDef_EvDownPendularCommandBool;
    TDbVarInf  tInf_EvUpInclinaisonBasketState;
    EDigStatus aeRng_EvUpInclinaisonBasketState[2];
    EDigStatus eDef_EvUpInclinaisonBasketState;
    TDbVarInf  tInf_EvUpInclinaisonBasketCmdBool;
    TBoolean aboRng_EvUpInclinaisonBasketCmdBool[2];
    TBoolean boDef_EvUpInclinaisonBasketCmdBool;
    TDbVarInf  tInf_EvDownInclinaisonBasketState;
    EDigStatus aeRng_EvDownInclinaisonBasketState[2];
    EDigStatus eDef_EvDownInclinaisonBasketState;
    TDbVarInf  tInf_EvDownInclinaisonBasketCommand;
    TUint16 au16Rng_EvDownInclinaisonBasketCommand[2];
    TUint16 u16Def_EvDownInclinaisonBasketCommand;
    TDbVarInf  tInf_EvDownInclinaisonBasketCmdBool;
    TBoolean aboRng_EvDownInclinaisonBasketCmdBool[2];
    TBoolean boDef_EvDownInclinaisonBasketCmdBool;
    TDbVarInf  tInf_EvDownInclinaisonBasketCurrent;
    TUint16 au16Rng_EvDownInclinaisonBasketCurrent[2];
    TUint16 u16Def_EvDownInclinaisonBasketCurrent;
    TDbVarInf  tInf_PvgDeltaArmCommand;
    TUint16 au16Rng_PvgDeltaArmCommand[2];
    TUint16 u16Def_PvgDeltaArmCommand;
    TDbVarInf  tInf_PvgDeltaArmVoltage;
    TUint16 au16Rng_PvgDeltaArmVoltage[2];
    TUint16 u16Def_PvgDeltaArmVoltage;
    TDbVarInf  tInf_PvgArrowArmCommand;
    TUint16 au16Rng_PvgArrowArmCommand[2];
    TUint16 u16Def_PvgArrowArmCommand;
    TDbVarInf  tInf_PvgArrowArmVoltage;
    TUint16 au16Rng_PvgArrowArmVoltage[2];
    TUint16 u16Def_PvgArrowArmVoltage;
    TDbVarInf  tInf_PvgTelescopeArmCommand;
    TUint16 au16Rng_PvgTelescopeArmCommand[2];
    TUint16 u16Def_PvgTelescopeArmCommand;
    TDbVarInf  tInf_PvgTelescopeArmVoltage;
    TUint16 au16Rng_PvgTelescopeArmVoltage[2];
    TUint16 u16Def_PvgTelescopeArmVoltage;
    TDbVarInf  tInf_OverloadSecurityCommand;
    TBoolean aboRng_OverloadSecurityCommand[2];
    TBoolean boDef_OverloadSecurityCommand;
    TDbVarInf  tInf_OverloadSecurityValue;
    EDigStatus aeRng_OverloadSecurityValue[2];
    EDigStatus eDef_OverloadSecurityValue;
    TDbVarInf  tInf_SupllyTorSensorsCommand;
    TBoolean aboRng_SupllyTorSensorsCommand[2];
    TBoolean boDef_SupllyTorSensorsCommand;
    TDbVarInf  tInf_SupllyTorSensorsValue;
    EDigStatus aeRng_SupllyTorSensorsValue[2];
    EDigStatus eDef_SupllyTorSensorsValue;
    TDbVarInf  tInf_SupllyAnaSensorsCommand;
    TBoolean aboRng_SupllyAnaSensorsCommand[2];
    TBoolean boDef_SupllyAnaSensorsCommand;
    TDbVarInf  tInf_SupllyAnaSensorsValue;
    EDigStatus aeRng_SupllyAnaSensorsValue[2];
    EDigStatus eDef_SupllyAnaSensorsValue;
    TDbVarInf  tInf_EvSyncRotationCommand;
    TBoolean aboRng_EvSyncRotationCommand[2];
    TBoolean boDef_EvSyncRotationCommand;
    TDbVarInf  tInf_EvSyncRotationValue;
    EDigStatus aeRng_EvSyncRotationValue[2];
    EDigStatus eDef_EvSyncRotationValue;
    TDbVarInf  tInf_PvgEvTorCommand;
    TUint16 au16Rng_PvgEvTorCommand[2];
    TUint16 u16Def_PvgEvTorCommand;
    TDbVarInf  tInf_PvgEvTorVoltage;
    TUint16 au16Rng_PvgEvTorVoltage[2];
    TUint16 u16Def_PvgEvTorVoltage;
    TDbVarInf  tInf_EvUpPendularActivation;
    TBoolean aboRng_EvUpPendularActivation[2];
    TBoolean boDef_EvUpPendularActivation;
    TDbVarInf  tInf_EvDownPendularActivation;
    TBoolean aboRng_EvDownPendularActivation[2];
    TBoolean boDef_EvDownPendularActivation;
    TDbVarInf  tInf_EvRotBasketCtClkWiseActivation;
    TBoolean aboRng_EvRotBasketCtClkWiseActivation[2];
    TBoolean boDef_EvRotBasketCtClkWiseActivation;
    TDbVarInf  tInf_EvRotBasketClkWiseActivation;
    TBoolean aboRng_EvRotBasketClkWiseActivation[2];
    TBoolean boDef_EvRotBasketClkWiseActivation;
    TDbVarInf  tInf_EvUpIncliBasketActivation;
    TBoolean aboRng_EvUpIncliBasketActivation[2];
    TBoolean boDef_EvUpIncliBasketActivation;
    TDbVarInf  tInf_EvDownIncliBasketActivation;
    TBoolean aboRng_EvDownIncliBasketActivation[2];
    TBoolean boDef_EvDownIncliBasketActivation;
    TDbVarInf  tInf_EvRotTurretClockwiseActivation;
    TBoolean aboRng_EvRotTurretClockwiseActivation[2];
    TBoolean boDef_EvRotTurretClockwiseActivation;
    TDbVarInf  tInf_EvRotTurretCtClockwiseActivation;
    TBoolean aboRng_EvRotTurretCtClockwiseActivation[2];
    TBoolean boDef_EvRotTurretCtClockwiseActivation;
    TDbVarInf  tInf_EvSelectorRotTurretValue;
    EDigStatus aeRng_EvSelectorRotTurretValue[2];
    EDigStatus eDef_EvSelectorRotTurretValue;
    TDbVarInf  tInf_EvSelectorRotTurretCmd;
    TBoolean aboRng_EvSelectorRotTurretCmd[2];
    TBoolean boDef_EvSelectorRotTurretCmd;
    TDbVarInf  tInf_ReturnLowSideEvProAccMotorCmd;
    TBoolean aboRng_ReturnLowSideEvProAccMotorCmd[2];
    TBoolean boDef_ReturnLowSideEvProAccMotorCmd;
    TDbVarInf  tInf_ReturnLowSideEvProGeneratorCmd;
    TBoolean aboRng_ReturnLowSideEvProGeneratorCmd[2];
    TBoolean boDef_ReturnLowSideEvProGeneratorCmd;
    TDbVarInf  tInf_ReturnLowSideEvProGeneratorValue;
    EDigStatus aeRng_ReturnLowSideEvProGeneratorValue[2];
    EDigStatus eDef_ReturnLowSideEvProGeneratorValue;
    TDbVarInf  tInf_EvUpAxleOscillantActivation;
    TBoolean aboRng_EvUpAxleOscillantActivation[2];
    TBoolean boDef_EvUpAxleOscillantActivation;
    TDbVarInf  tInf_EvDownAxleOscillantActivation;
    TBoolean aboRng_EvDownAxleOscillantActivation[2];
    TBoolean boDef_EvDownAxleOscillantActivation;
    TDbVarInf  tInf_EvUpAxleOscillantCmd;
    TBoolean aboRng_EvUpAxleOscillantCmd[2];
    TBoolean boDef_EvUpAxleOscillantCmd;
    TDbVarInf  tInf_EvDownAxleOscillantCmd;
    TBoolean aboRng_EvDownAxleOscillantCmd[2];
    TBoolean boDef_EvDownAxleOscillantCmd;
    TDbVarInf  tInf_EvUpAxleFixeActivation;
    TBoolean aboRng_EvUpAxleFixeActivation[2];
    TBoolean boDef_EvUpAxleFixeActivation;
    TDbVarInf  tInf_EvDownAxleFixeActivation;
    TBoolean aboRng_EvDownAxleFixeActivation[2];
    TBoolean boDef_EvDownAxleFixeActivation;
    TDbVarInf  tInf_EvUpAxleFixeCmd;
    TBoolean aboRng_EvUpAxleFixeCmd[2];
    TBoolean boDef_EvUpAxleFixeCmd;
    TDbVarInf  tInf_EvDownAxleFixeCmd;
    TBoolean aboRng_EvDownAxleFixeCmd[2];
    TBoolean boDef_EvDownAxleFixeCmd;
    TDbVarInf  tInf_EvUpMastMeasureActivation;
    TBoolean aboRng_EvUpMastMeasureActivation[2];
    TBoolean boDef_EvUpMastMeasureActivation;
    TDbVarInf  tInf_EvUpMastMeasureCmd;
    TBoolean aboRng_EvUpMastMeasureCmd[2];
    TBoolean boDef_EvUpMastMeasureCmd;
    TDbVarInf  tInf_EvDownMastMeasureActivation;
    TBoolean aboRng_EvDownMastMeasureActivation[2];
    TBoolean boDef_EvDownMastMeasureActivation;
    TDbVarInf  tInf_EvDownMastMeasureCmd;
    TBoolean aboRng_EvDownMastMeasureCmd[2];
    TBoolean boDef_EvDownMastMeasureCmd;
    TDbVarInf  tInf_WhiteLightAv15746Value;
    EDigStatus aeRng_WhiteLightAv15746Value[2];
    EDigStatus eDef_WhiteLightAv15746Value;
    TDbVarInf  tInf_WhiteLightAv15746Command;
    TBoolean aboRng_WhiteLightAv15746Command[2];
    TBoolean boDef_WhiteLightAv15746Command;
    TDbVarInf  tInf_EvCrawlerOnlyValue;
    EDigStatus aeRng_EvCrawlerOnlyValue[2];
    EDigStatus eDef_EvCrawlerOnlyValue;
    TDbVarInf  tInf_EvCrawlerOnlyCommand;
    TBoolean aboRng_EvCrawlerOnlyCommand[2];
    TBoolean boDef_EvCrawlerOnlyCommand;
    TDbVarInf  tInf_RelayReloadWithGeneratorCmd;
    TBoolean aboRng_RelayReloadWithGeneratorCmd[2];
    TBoolean boDef_RelayReloadWithGeneratorCmd;
    TDbVarInf  tInf_RelayReloadWithGeneratorState;
    EDigStatus aeRng_RelayReloadWithGeneratorState[2];
    EDigStatus eDef_RelayReloadWithGeneratorState;
    TDbVarInf  tInf_EvDevMvtsCmd;
    TBoolean aboRng_EvDevMvtsCmd[2];
    TBoolean boDef_EvDevMvtsCmd;
    TDbVarInf  tInf_EvDevMvtsState;
    EDigStatus aeRng_EvDevMvtsState[2];
    EDigStatus eDef_EvDevMvtsState;
    TDbVarInf  tInf_EvBoostRegenCmd;
    TBoolean aboRng_EvBoostRegenCmd[2];
    TBoolean boDef_EvBoostRegenCmd;
    TDbVarInf  tInf_EvBoostRegenState;
    EDigStatus aeRng_EvBoostRegenState[2];
    EDigStatus eDef_EvBoostRegenState;
}TDbSetRamEcuOutputsC1;

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
    TDbVarInf  tInf_BypassArmDelta;
    TBoolean aboRng_BypassArmDelta[2];
    TBoolean boDef_BypassArmDelta;
    TDbVarInf  tInf_BypassArmArrow;
    TBoolean aboRng_BypassArmArrow[2];
    TBoolean boDef_BypassArmArrow;
    TDbVarInf  tInf_BypassArmTelescope;
    TBoolean aboRng_BypassArmTelescope[2];
    TBoolean boDef_BypassArmTelescope;
    TDbVarInf  tInf_TestEvision;
    TBoolean aboRng_TestEvision[2];
    TBoolean boDef_TestEvision;
    TDbVarInf  tInf_PvgTorConsigneCommand;
    TInt16 ai16Rng_PvgTorConsigneCommand[2];
    TInt16 i16Def_PvgTorConsigneCommand;
    TDbVarInf  tInf_PvgEvTorTurretCmd;
    TInt16 ai16Rng_PvgEvTorTurretCmd[2];
    TInt16 i16Def_PvgEvTorTurretCmd;
    TDbVarInf  tInf_EngineOn;
    TBoolean aboRng_EngineOn[2];
    TBoolean boDef_EngineOn;
    TDbVarInf  tInf_gMotorCmd;
    TUint16 au16Rng_gMotorCmd[2];
    TUint16 u16Def_gMotorCmd;
    TDbVarInf  tInf_CounterRisingEdge;
    TUint8 au8Rng_CounterRisingEdge[2];
    TUint8 u8Def_CounterRisingEdge;
    TDbVarInf  tInf_CounterFallingEdge;
    TUint8 au8Rng_CounterFallingEdge[2];
    TUint8 u8Def_CounterFallingEdge;
    TDbVarInf  tInf_LifeBitRotBasket;
    TUint16 au16Rng_LifeBitRotBasket[2];
    TUint16 u16Def_LifeBitRotBasket;
    TDbVarInf  tInf_TestElevationActivation;
    TBoolean aboRng_TestElevationActivation[2];
    TBoolean boDef_TestElevationActivation;
    TDbVarInf  tInf_RotTurretBool;
    TBoolean aboRng_RotTurretBool[2];
    TBoolean boDef_RotTurretBool;
    TDbVarInf  tInf_ScalingJoysTurret;
    TInt16 ai16Rng_ScalingJoysTurret[2];
    TInt16 i16Def_ScalingJoysTurret;
    TDbVarInf  tInf_ScalingJoysDeltaArm;
    TInt16 ai16Rng_ScalingJoysDeltaArm[2];
    TInt16 i16Def_ScalingJoysDeltaArm;
    TDbVarInf  tInf_PvgDeltaArmConsigne;
    TInt16 ai16Rng_PvgDeltaArmConsigne[2];
    TInt16 i16Def_PvgDeltaArmConsigne;
    TDbVarInf  tInf_ScalingJoysArrowArm;
    TInt16 ai16Rng_ScalingJoysArrowArm[2];
    TInt16 i16Def_ScalingJoysArrowArm;
    TDbVarInf  tInf_PvgArrowArmConsigne;
    TInt16 ai16Rng_PvgArrowArmConsigne[2];
    TInt16 i16Def_PvgArrowArmConsigne;
    TDbVarInf  tInf_ScalingJoysTelescopeArm;
    TInt16 ai16Rng_ScalingJoysTelescopeArm[2];
    TInt16 i16Def_ScalingJoysTelescopeArm;
    TDbVarInf  tInf_PvgTelescopeArmConsigne;
    TInt16 ai16Rng_PvgTelescopeArmConsigne[2];
    TInt16 i16Def_PvgTelescopeArmConsigne;
    TDbVarInf  tInf_PvgTorVoltageRangeValue;
    TInt16 aai16Rng_PvgTorVoltageRangeValue[5][2];
    TInt16 ai16Def_PvgTorVoltageRangeValue[5];
    TDbVarInf  tInf_ActiveWorkEnvelopLimit;
    TBoolean aboRng_ActiveWorkEnvelopLimit[2];
    TBoolean boDef_ActiveWorkEnvelopLimit;
    TDbVarInf  tInf_PortillonLadderClose;
    TBoolean aboRng_PortillonLadderClose[2];
    TBoolean boDef_PortillonLadderClose;
    TDbVarInf  tInf_ActiveFailure;
    TBoolean aboRng_ActiveFailure[2];
    TBoolean boDef_ActiveFailure;
    TDbVarInf  tInf_StopAllMovementsNacellePost;
    TBoolean aboRng_StopAllMovementsNacellePost[2];
    TBoolean boDef_StopAllMovementsNacellePost;
    TDbVarInf  tInf_AverageTimeCycle;
    TUint32 au32Rng_AverageTimeCycle[2];
    TUint32 u32Def_AverageTimeCycle;
    TDbVarInf  tInf_MaxTimeCycle;
    TUint32 au32Rng_MaxTimeCycle[2];
    TUint32 u32Def_MaxTimeCycle;
    TDbVarInf  tInf_TestRefreshParamBlockCurrent;
    TBoolean aboRng_TestRefreshParamBlockCurrent[2];
    TBoolean boDef_TestRefreshParamBlockCurrent;
    TDbVarInf  tInf_LynxOnAllMvts;
    TBoolean aboRng_LynxOnAllMvts[2];
    TBoolean boDef_LynxOnAllMvts;
    TDbVarInf  tInf_ReturnValStart48XsFunc;
    TInt16 ai16Rng_ReturnValStart48XsFunc[2];
    TInt16 i16Def_ReturnValStart48XsFunc;
    TDbVarInf  tInf_IndexVersion48Xs;
    TUint32 au32Rng_IndexVersion48Xs[2];
    TUint32 u32Def_IndexVersion48Xs;
    TDbVarInf  tInf_TestElectricalIO;
    TBoolean aboRng_TestElectricalIO[2];
    TBoolean boDef_TestElectricalIO;
    TDbVarInf  tInf_Major_48XS;
    TUint8 au8Rng_Major_48XS[2];
    TUint8 u8Def_Major_48XS;
    TDbVarInf  tInf_Minor_48XS;
    TUint8 au8Rng_Minor_48XS[2];
    TUint8 u8Def_Minor_48XS;
    TDbVarInf  tInf_Patch_48XS;
    TUint8 au8Rng_Patch_48XS[2];
    TUint8 u8Def_Patch_48XS;
    TDbVarInf  tInf_Custom_48XS;
    TUint8 au8Rng_Custom_48XS[2];
    TUint8 u8Def_Custom_48XS;
    TDbVarInf  tInf_RunningStable48XS;
    TBoolean aboRng_RunningStable48XS[2];
    TBoolean boDef_RunningStable48XS;
    TDbVarInf  tInf_BlinkLow;
    TBoolean aboRng_BlinkLow[2];
    TBoolean boDef_BlinkLow;
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
    TDbVarInf  tInf_BypassTestCommand;
    TBoolean aboRng_BypassTestCommand[2];
    TBoolean boDef_BypassTestCommand;
}TDbSetRamGeneralC1;

typedef struct
{
    TDbVarInf  tInf_Portillon;
    TBoolean aboRng_Portillon[2];
    TBoolean boDef_Portillon;
    TDbVarInf  tInf_Ladder;
    TBoolean aboRng_Ladder[2];
    TBoolean boDef_Ladder;
    TDbVarInf  tInf_MeasuringMat;
    TBoolean aboRng_MeasuringMat[2];
    TBoolean boDef_MeasuringMat;
    TDbVarInf  tInf_MastDigitalDisplay;
    TBoolean aboRng_MastDigitalDisplay[2];
    TBoolean boDef_MastDigitalDisplay;
    TDbVarInf  tInf_Generator;
    TBoolean aboRng_Generator[2];
    TBoolean boDef_Generator;
    TDbVarInf  tInf_FlashingLightOnRail;
    TBoolean aboRng_FlashingLightOnRail[2];
    TBoolean boDef_FlashingLightOnRail;
    TDbVarInf  tInf_AutoStopMeasuringMast;
    TBoolean aboRng_AutoStopMeasuringMast[2];
    TBoolean boDef_AutoStopMeasuringMast;
    TDbVarInf  tInf_LynxOnAllMvts;
    TBoolean aboRng_LynxOnAllMvts[2];
    TBoolean boDef_LynxOnAllMvts;
    TDbVarInf  tInf_WhiteLight15746;
    TBoolean aboRng_WhiteLight15746[2];
    TBoolean boDef_WhiteLight15746;
    TDbVarInf  tInf_AutorisationWorkKeyPresent;
    TBoolean aboRng_AutorisationWorkKeyPresent[2];
    TBoolean boDef_AutorisationWorkKeyPresent;
    TDbVarInf  tInf_FlasingLightAlwaysOnAUS;
    TBoolean aboRng_FlasingLightAlwaysOnAUS[2];
    TBoolean boDef_FlasingLightAlwaysOnAUS;
    TDbVarInf  tInf_ContactMastSNCFOption;
    TBoolean aboRng_ContactMastSNCFOption[2];
    TBoolean boDef_ContactMastSNCFOption;
    TDbVarInf  tInf_PresenceContactMast;
    TBoolean aboRng_PresenceContactMast[2];
    TBoolean boDef_PresenceContactMast;
}TDbSetNvOptionsC1;

typedef struct
{
    TDbVarInf  tInf_NvMemoryC;
    TBoolean aboRng_NvMemoryC[2];
    TBoolean boDef_NvMemoryC;
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
    TDbVarInf  tInf_CptNbrRegenFinish;
    TUint16 au16Rng_CptNbrRegenFinish[2];
    TUint16 u16Def_CptNbrRegenFinish;
    TDbVarInf  tInf_FirstKeyNoReloadWithGenerator;
    TBoolean aboRng_FirstKeyNoReloadWithGenerator[2];
    TBoolean boDef_FirstKeyNoReloadWithGenerator;
    TDbVarInf  tInf_NewSocUperReloadWithGenerator;
    TBoolean aboRng_NewSocUperReloadWithGenerator[2];
    TBoolean boDef_NewSocUperReloadWithGenerator;
    TDbVarInf  tInf_TotalRegenMinutes;
    TUint32 au32Rng_TotalRegenMinutes[2];
    TUint32 u32Def_TotalRegenMinutes;
    TDbVarInf  tInf_TotalElecticMinutes;
    TUint32 au32Rng_TotalElecticMinutes[2];
    TUint32 u32Def_TotalElecticMinutes;
}TDbSetNvMemoryC1;

typedef struct
{
    TDbVarInf  tInf_PvgUpDeltaArmTurretPostCmdPrct;
    TUint8 au8Rng_PvgUpDeltaArmTurretPostCmdPrct[2];
    TUint8 u8Def_PvgUpDeltaArmTurretPostCmdPrct;
    TDbVarInf  tInf_PvgDownDeltaArmTurretPostCmdPrct;
    TUint8 au8Rng_PvgDownDeltaArmTurretPostCmdPrct[2];
    TUint8 u8Def_PvgDownDeltaArmTurretPostCmdPrct;
    TDbVarInf  tInf_PvgUpArrowArmTurretPostCmdPrct;
    TUint8 au8Rng_PvgUpArrowArmTurretPostCmdPrct[2];
    TUint8 u8Def_PvgUpArrowArmTurretPostCmdPrct;
    TDbVarInf  tInf_PvgDownArrowArmTurretPostCmdPrct;
    TUint8 au8Rng_PvgDownArrowArmTurretPostCmdPrct[2];
    TUint8 u8Def_PvgDownArrowArmTurretPostCmdPrct;
    TDbVarInf  tInf_PvgInTelescTurretPostCmdPrct;
    TUint8 au8Rng_PvgInTelescTurretPostCmdPrct[2];
    TUint8 u8Def_PvgInTelescTurretPostCmdPrct;
    TDbVarInf  tInf_PvgOutTelescTurretPostCmdPrct;
    TUint8 au8Rng_PvgOutTelescTurretPostCmdPrct[2];
    TUint8 u8Def_PvgOutTelescTurretPostCmdPrct;
    TDbVarInf  tInf_MaxPvgUpDeltaArmCmdPrct;
    TUint8 au8Rng_MaxPvgUpDeltaArmCmdPrct[2];
    TUint8 u8Def_MaxPvgUpDeltaArmCmdPrct;
    TDbVarInf  tInf_MaxPvgDownDeltaArmCmdPrct;
    TUint8 au8Rng_MaxPvgDownDeltaArmCmdPrct[2];
    TUint8 u8Def_MaxPvgDownDeltaArmCmdPrct;
    TDbVarInf  tInf_MaxPvgUpArrowArmCmdPrct;
    TUint8 au8Rng_MaxPvgUpArrowArmCmdPrct[2];
    TUint8 u8Def_MaxPvgUpArrowArmCmdPrct;
    TDbVarInf  tInf_MaxPvgDownArrowArmCmdPrct;
    TUint8 au8Rng_MaxPvgDownArrowArmCmdPrct[2];
    TUint8 u8Def_MaxPvgDownArrowArmCmdPrct;
    TDbVarInf  tInf_MaxPvgInTelescopeArmCmdPrct;
    TUint8 au8Rng_MaxPvgInTelescopeArmCmdPrct[2];
    TUint8 u8Def_MaxPvgInTelescopeArmCmdPrct;
    TDbVarInf  tInf_MaxPvgOutTelescopeArmCmdPrct;
    TUint8 au8Rng_MaxPvgOutTelescopeArmCmdPrct[2];
    TUint8 u8Def_MaxPvgOutTelescopeArmCmdPrct;
    TDbVarInf  tInf_MinPvgUpDeltaArmCmdPrct;
    TUint8 au8Rng_MinPvgUpDeltaArmCmdPrct[2];
    TUint8 u8Def_MinPvgUpDeltaArmCmdPrct;
    TDbVarInf  tInf_MinPvgDownDeltaArmCmdPrct;
    TUint8 au8Rng_MinPvgDownDeltaArmCmdPrct[2];
    TUint8 u8Def_MinPvgDownDeltaArmCmdPrct;
    TDbVarInf  tInf_MinPvgUpArrowArmCmdPrct;
    TUint8 au8Rng_MinPvgUpArrowArmCmdPrct[2];
    TUint8 u8Def_MinPvgUpArrowArmCmdPrct;
    TDbVarInf  tInf_MinPvgDownArrowArmCmdPrct;
    TUint8 au8Rng_MinPvgDownArrowArmCmdPrct[2];
    TUint8 u8Def_MinPvgDownArrowArmCmdPrct;
    TDbVarInf  tInf_MinPvgInTelescopeArmCmdPrct;
    TUint8 au8Rng_MinPvgInTelescopeArmCmdPrct[2];
    TUint8 u8Def_MinPvgInTelescopeArmCmdPrct;
    TDbVarInf  tInf_MinPvgOutTelescopeArmCmdPrct;
    TUint8 au8Rng_MinPvgOutTelescopeArmCmdPrct[2];
    TUint8 u8Def_MinPvgOutTelescopeArmCmdPrct;
    TDbVarInf  tInf_TresholdAnaToBoForInputs48Xs;
    TUint16 au16Rng_TresholdAnaToBoForInputs48Xs[2];
    TUint16 u16Def_TresholdAnaToBoForInputs48Xs;
    TDbVarInf  tInf_PvgAxleMovementCmdPrct;
    TUint8 au8Rng_PvgAxleMovementCmdPrct[2];
    TUint8 u8Def_PvgAxleMovementCmdPrct;
    TDbVarInf  tInf_DeadZoneJoystickTurret;
    TUint8 au8Rng_DeadZoneJoystickTurret[2];
    TUint8 u8Def_DeadZoneJoystickTurret;
    TDbVarInf  tInf_DeadZoneJoystickDeltaArm;
    TUint8 au8Rng_DeadZoneJoystickDeltaArm[2];
    TUint8 u8Def_DeadZoneJoystickDeltaArm;
    TDbVarInf  tInf_DeadZoneJoystickTelescope;
    TUint8 au8Rng_DeadZoneJoystickTelescope[2];
    TUint8 u8Def_DeadZoneJoystickTelescope;
    TDbVarInf  tInf_DeadZoneJoystickArrow;
    TUint8 au8Rng_DeadZoneJoystickArrow[2];
    TUint8 u8Def_DeadZoneJoystickArrow;
    TDbVarInf  tInf_DeadZoneJoystickRailAdvancement;
    TUint8 au8Rng_DeadZoneJoystickRailAdvancement[2];
    TUint8 u8Def_DeadZoneJoystickRailAdvancement;
    TDbVarInf  tInf_DeadZoneJoystickRotationTurret;
    TUint8 au8Rng_DeadZoneJoystickRotationTurret[2];
    TUint8 u8Def_DeadZoneJoystickRotationTurret;
    TDbVarInf  tInf_EngineOffCurEvPropMotorAccel;
    TUint16 au16Rng_EngineOffCurEvPropMotorAccel[2];
    TUint16 u16Def_EngineOffCurEvPropMotorAccel;
    TDbVarInf  tInf_MinCurEvPropMotorAccelerator;
    TUint16 au16Rng_MinCurEvPropMotorAccelerator[2];
    TUint16 u16Def_MinCurEvPropMotorAccelerator;
    TDbVarInf  tInf_StopCurEvPropMotorAccelerator;
    TUint16 au16Rng_StopCurEvPropMotorAccelerator[2];
    TUint16 u16Def_StopCurEvPropMotorAccelerator;
    TDbVarInf  tInf_EngineOffCurEvPropGenerator;
    TUint16 au16Rng_EngineOffCurEvPropGenerator[2];
    TUint16 u16Def_EngineOffCurEvPropGenerator;
    TDbVarInf  tInf_MinCurEvPropGenerator;
    TUint16 au16Rng_MinCurEvPropGenerator[2];
    TUint16 u16Def_MinCurEvPropGenerator;
    TDbVarInf  tInf_StopCurEvPropGenerator;
    TUint16 au16Rng_StopCurEvPropGenerator[2];
    TUint16 u16Def_StopCurEvPropGenerator;
    TDbVarInf  tInf_PidGpEvPropMotorAcc;
    TUint16 au16Rng_PidGpEvPropMotorAcc[2];
    TUint16 u16Def_PidGpEvPropMotorAcc;
    TDbVarInf  tInf_PidTiEvPropMotorAcc;
    TUint16 au16Rng_PidTiEvPropMotorAcc[2];
    TUint16 u16Def_PidTiEvPropMotorAcc;
    TDbVarInf  tInf_PidTdEvPropMotorAcc;
    TUint16 au16Rng_PidTdEvPropMotorAcc[2];
    TUint16 u16Def_PidTdEvPropMotorAcc;
    TDbVarInf  tInf_PidGpEvPropGenerator;
    TUint16 au16Rng_PidGpEvPropGenerator[2];
    TUint16 u16Def_PidGpEvPropGenerator;
    TDbVarInf  tInf_PidTiEvPropGenerator;
    TUint16 au16Rng_PidTiEvPropGenerator[2];
    TUint16 u16Def_PidTiEvPropGenerator;
    TDbVarInf  tInf_PidTdEvPropGenerator;
    TUint16 au16Rng_PidTdEvPropGenerator[2];
    TUint16 u16Def_PidTdEvPropGenerator;
    TDbVarInf  tInf_DeviationLimitTransmPressure;
    TUint8 au8Rng_DeviationLimitTransmPressure[2];
    TUint8 u8Def_DeviationLimitTransmPressure;
    TDbVarInf  tInf_OutCharPosDeltaArmAngular;
    TInt16 ai16Rng_OutCharPosDeltaArmAngular[2];
    TInt16 i16Def_OutCharPosDeltaArmAngular;
    TDbVarInf  tInf_OutCharNeuDeltaArmAngular;
    TInt16 ai16Rng_OutCharNeuDeltaArmAngular[2];
    TInt16 i16Def_OutCharNeuDeltaArmAngular;
    TDbVarInf  tInf_OutCharNegDeltaArmAngular;
    TInt16 ai16Rng_OutCharNegDeltaArmAngular[2];
    TInt16 i16Def_OutCharNegDeltaArmAngular;
    TDbVarInf  tInf_DeviationLimitDeltaArmAngle;
    TUint8 au8Rng_DeviationLimitDeltaArmAngle[2];
    TUint8 u8Def_DeviationLimitDeltaArmAngle;
    TDbVarInf  tInf_OutCharPosArrowArmAngular;
    TInt16 ai16Rng_OutCharPosArrowArmAngular[2];
    TInt16 i16Def_OutCharPosArrowArmAngular;
    TDbVarInf  tInf_OutCharNeuArrowArmAngular;
    TInt16 ai16Rng_OutCharNeuArrowArmAngular[2];
    TInt16 i16Def_OutCharNeuArrowArmAngular;
    TDbVarInf  tInf_OutCharNegArrowArmAngular;
    TInt16 ai16Rng_OutCharNegArrowArmAngular[2];
    TInt16 i16Def_OutCharNegArrowArmAngular;
    TDbVarInf  tInf_DeviationLimitArrowArmAngle;
    TUint8 au8Rng_DeviationLimitArrowArmAngle[2];
    TUint8 u8Def_DeviationLimitArrowArmAngle;
    TDbVarInf  tInf_MinPvgUpPendularTurretPost;
    TUint8 au8Rng_MinPvgUpPendularTurretPost[2];
    TUint8 u8Def_MinPvgUpPendularTurretPost;
    TDbVarInf  tInf_MinPvgUpPendularNacellePost;
    TUint8 au8Rng_MinPvgUpPendularNacellePost[2];
    TUint8 u8Def_MinPvgUpPendularNacellePost;
    TDbVarInf  tInf_MinPvgUpPendularRadioPost;
    TUint8 au8Rng_MinPvgUpPendularRadioPost[2];
    TUint8 u8Def_MinPvgUpPendularRadioPost;
    TDbVarInf  tInf_MaxPvgUpPendularTurretPost;
    TUint8 au8Rng_MaxPvgUpPendularTurretPost[2];
    TUint8 u8Def_MaxPvgUpPendularTurretPost;
    TDbVarInf  tInf_MaxPvgUpPendularNacellePost;
    TUint8 au8Rng_MaxPvgUpPendularNacellePost[2];
    TUint8 u8Def_MaxPvgUpPendularNacellePost;
    TDbVarInf  tInf_MaxPvgUpPendularRadioPost;
    TUint8 au8Rng_MaxPvgUpPendularRadioPost[2];
    TUint8 u8Def_MaxPvgUpPendularRadioPost;
    TDbVarInf  tInf_UpPendularRampRatioTurret;
    TUint16 aau16Rng_UpPendularRampRatioTurret[2][2];
    TUint16 au16Def_UpPendularRampRatioTurret[2];
    TDbVarInf  tInf_UpPendularRampRatioNacelle;
    TUint16 aau16Rng_UpPendularRampRatioNacelle[2][2];
    TUint16 au16Def_UpPendularRampRatioNacelle[2];
    TDbVarInf  tInf_UpPendularRampRatioRadio;
    TUint16 aau16Rng_UpPendularRampRatioRadio[2][2];
    TUint16 au16Def_UpPendularRampRatioRadio[2];
    TDbVarInf  tInf_MinPvgDownPendularTurretPost;
    TUint8 au8Rng_MinPvgDownPendularTurretPost[2];
    TUint8 u8Def_MinPvgDownPendularTurretPost;
    TDbVarInf  tInf_MinPvgDownPendularNacellePost;
    TUint8 au8Rng_MinPvgDownPendularNacellePost[2];
    TUint8 u8Def_MinPvgDownPendularNacellePost;
    TDbVarInf  tInf_MinPvgDownPendularRadioPost;
    TUint8 au8Rng_MinPvgDownPendularRadioPost[2];
    TUint8 u8Def_MinPvgDownPendularRadioPost;
    TDbVarInf  tInf_MaxPvgDownPendularTurretPost;
    TUint8 au8Rng_MaxPvgDownPendularTurretPost[2];
    TUint8 u8Def_MaxPvgDownPendularTurretPost;
    TDbVarInf  tInf_MaxPvgDownPendularNacellePost;
    TUint8 au8Rng_MaxPvgDownPendularNacellePost[2];
    TUint8 u8Def_MaxPvgDownPendularNacellePost;
    TDbVarInf  tInf_MaxPvgDownPendularRadioPost;
    TUint8 au8Rng_MaxPvgDownPendularRadioPost[2];
    TUint8 u8Def_MaxPvgDownPendularRadioPost;
    TDbVarInf  tInf_DownPendularRampRatioTurret;
    TUint16 aau16Rng_DownPendularRampRatioTurret[2][2];
    TUint16 au16Def_DownPendularRampRatioTurret[2];
    TDbVarInf  tInf_DownPendularRampRatioNacelle;
    TUint16 aau16Rng_DownPendularRampRatioNacelle[2][2];
    TUint16 au16Def_DownPendularRampRatioNacelle[2];
    TDbVarInf  tInf_DownPendularRampRatioRadio;
    TUint16 aau16Rng_DownPendularRampRatioRadio[2][2];
    TUint16 au16Def_DownPendularRampRatioRadio[2];
    TDbVarInf  tInf_MinPvgUpIncliBasketTurretPost;
    TUint8 au8Rng_MinPvgUpIncliBasketTurretPost[2];
    TUint8 u8Def_MinPvgUpIncliBasketTurretPost;
    TDbVarInf  tInf_MinPvgUpIncliBasketNacellePost;
    TUint8 au8Rng_MinPvgUpIncliBasketNacellePost[2];
    TUint8 u8Def_MinPvgUpIncliBasketNacellePost;
    TDbVarInf  tInf_MinPvgUpIncliBasketRadioPost;
    TUint8 au8Rng_MinPvgUpIncliBasketRadioPost[2];
    TUint8 u8Def_MinPvgUpIncliBasketRadioPost;
    TDbVarInf  tInf_MaxPvgUpIncliBasketTurretPost;
    TUint8 au8Rng_MaxPvgUpIncliBasketTurretPost[2];
    TUint8 u8Def_MaxPvgUpIncliBasketTurretPost;
    TDbVarInf  tInf_MaxPvgUpIncliBasketNacellePost;
    TUint8 au8Rng_MaxPvgUpIncliBasketNacellePost[2];
    TUint8 u8Def_MaxPvgUpIncliBasketNacellePost;
    TDbVarInf  tInf_MaxPvgUpIncliBasketRadioPost;
    TUint8 au8Rng_MaxPvgUpIncliBasketRadioPost[2];
    TUint8 u8Def_MaxPvgUpIncliBasketRadioPost;
    TDbVarInf  tInf_UpInclinBasketRampRatioTurret;
    TUint16 aau16Rng_UpInclinBasketRampRatioTurret[2][2];
    TUint16 au16Def_UpInclinBasketRampRatioTurret[2];
    TDbVarInf  tInf_UpInclinBasketRampRatioNacelle;
    TUint16 aau16Rng_UpInclinBasketRampRatioNacelle[2][2];
    TUint16 au16Def_UpInclinBasketRampRatioNacelle[2];
    TDbVarInf  tInf_UpInclinBasketRampRatioRadio;
    TUint16 aau16Rng_UpInclinBasketRampRatioRadio[2][2];
    TUint16 au16Def_UpInclinBasketRampRatioRadio[2];
    TDbVarInf  tInf_MinPvgDownIncliBasketTurretPost;
    TUint8 au8Rng_MinPvgDownIncliBasketTurretPost[2];
    TUint8 u8Def_MinPvgDownIncliBasketTurretPost;
    TDbVarInf  tInf_MinPvgDownIncliBasketNacellePost;
    TUint8 au8Rng_MinPvgDownIncliBasketNacellePost[2];
    TUint8 u8Def_MinPvgDownIncliBasketNacellePost;
    TDbVarInf  tInf_MinPvgDownIncliBasketRadioPost;
    TUint8 au8Rng_MinPvgDownIncliBasketRadioPost[2];
    TUint8 u8Def_MinPvgDownIncliBasketRadioPost;
    TDbVarInf  tInf_MaxPvgDownIncliBasketTurretPost;
    TUint8 au8Rng_MaxPvgDownIncliBasketTurretPost[2];
    TUint8 u8Def_MaxPvgDownIncliBasketTurretPost;
    TDbVarInf  tInf_MaxPvgDownIncliBasketNacellePost;
    TUint8 au8Rng_MaxPvgDownIncliBasketNacellePost[2];
    TUint8 u8Def_MaxPvgDownIncliBasketNacellePost;
    TDbVarInf  tInf_MaxPvgDownIncliBasketRadioPost;
    TUint8 au8Rng_MaxPvgDownIncliBasketRadioPost[2];
    TUint8 u8Def_MaxPvgDownIncliBasketRadioPost;
    TDbVarInf  tInf_DownInclinBasketRampRatioTurret;
    TUint16 aau16Rng_DownInclinBasketRampRatioTurret[2][2];
    TUint16 au16Def_DownInclinBasketRampRatioTurret[2];
    TDbVarInf  tInf_DownInclinBasketRampRatioNacelle;
    TUint16 aau16Rng_DownInclinBasketRampRatioNacelle[2][2];
    TUint16 au16Def_DownInclinBasketRampRatioNacelle[2];
    TDbVarInf  tInf_DownInclinBasketRampRatioRadio;
    TUint16 aau16Rng_DownInclinBasketRampRatioRadio[2][2];
    TUint16 au16Def_DownInclinBasketRampRatioRadio[2];
    TDbVarInf  tInf_MinPvgRotBasktClkwiseTurretPost;
    TUint8 au8Rng_MinPvgRotBasktClkwiseTurretPost[2];
    TUint8 u8Def_MinPvgRotBasktClkwiseTurretPost;
    TDbVarInf  tInf_MinPvgRotBasktClkwiseNacellePost;
    TUint8 au8Rng_MinPvgRotBasktClkwiseNacellePost[2];
    TUint8 u8Def_MinPvgRotBasktClkwiseNacellePost;
    TDbVarInf  tInf_MinPvgRotBasketClkwiseRadioPost;
    TUint8 au8Rng_MinPvgRotBasketClkwiseRadioPost[2];
    TUint8 u8Def_MinPvgRotBasketClkwiseRadioPost;
    TDbVarInf  tInf_MaxPvgRotBasketClkwiseTurretPost;
    TUint8 au8Rng_MaxPvgRotBasketClkwiseTurretPost[2];
    TUint8 u8Def_MaxPvgRotBasketClkwiseTurretPost;
    TDbVarInf  tInf_MaxPvgRotBasktClkwiseNacellePost;
    TUint8 au8Rng_MaxPvgRotBasktClkwiseNacellePost[2];
    TUint8 u8Def_MaxPvgRotBasktClkwiseNacellePost;
    TDbVarInf  tInf_MaxPvgRotBasketClkwiseRadioPost;
    TUint8 au8Rng_MaxPvgRotBasketClkwiseRadioPost[2];
    TUint8 u8Def_MaxPvgRotBasketClkwiseRadioPost;
    TDbVarInf  tInf_RotBasketClkwiseRampRatioTurret;
    TUint16 aau16Rng_RotBasketClkwiseRampRatioTurret[2][2];
    TUint16 au16Def_RotBasketClkwiseRampRatioTurret[2];
    TDbVarInf  tInf_RotBasketClkwiseRampRatioNacel;
    TUint16 aau16Rng_RotBasketClkwiseRampRatioNacel[2][2];
    TUint16 au16Def_RotBasketClkwiseRampRatioNacel[2];
    TDbVarInf  tInf_RotBasketClkwiseRampRatioRadio;
    TUint16 aau16Rng_RotBasketClkwiseRampRatioRadio[2][2];
    TUint16 au16Def_RotBasketClkwiseRampRatioRadio[2];
    TDbVarInf  tInf_MinPvgRotBasktCtClkwiseTurtPost;
    TUint8 au8Rng_MinPvgRotBasktCtClkwiseTurtPost[2];
    TUint8 u8Def_MinPvgRotBasktCtClkwiseTurtPost;
    TDbVarInf  tInf_MinPvgRotBasktCtClkwiseNacelPost;
    TUint8 au8Rng_MinPvgRotBasktCtClkwiseNacelPost[2];
    TUint8 u8Def_MinPvgRotBasktCtClkwiseNacelPost;
    TDbVarInf  tInf_MinPvgRotBasktCtClkwiseRadioPost;
    TUint8 au8Rng_MinPvgRotBasktCtClkwiseRadioPost[2];
    TUint8 u8Def_MinPvgRotBasktCtClkwiseRadioPost;
    TDbVarInf  tInf_MaxPvgRotBasktCtClkwiseTuretPost;
    TUint8 au8Rng_MaxPvgRotBasktCtClkwiseTuretPost[2];
    TUint8 u8Def_MaxPvgRotBasktCtClkwiseTuretPost;
    TDbVarInf  tInf_MaxPvgRotBasktCtClkwiseNacelPost;
    TUint8 au8Rng_MaxPvgRotBasktCtClkwiseNacelPost[2];
    TUint8 u8Def_MaxPvgRotBasktCtClkwiseNacelPost;
    TDbVarInf  tInf_MaxPvgRotBasktCtClkwiseRadioPost;
    TUint8 au8Rng_MaxPvgRotBasktCtClkwiseRadioPost[2];
    TUint8 u8Def_MaxPvgRotBasktCtClkwiseRadioPost;
    TDbVarInf  tInf_RotBasketCtClkwiseRampRatioTuret;
    TUint16 aau16Rng_RotBasketCtClkwiseRampRatioTuret[2][2];
    TUint16 au16Def_RotBasketCtClkwiseRampRatioTuret[2];
    TDbVarInf  tInf_RotBasketCtClkwiseRampRatioNacel;
    TUint16 aau16Rng_RotBasketCtClkwiseRampRatioNacel[2][2];
    TUint16 au16Def_RotBasketCtClkwiseRampRatioNacel[2];
    TDbVarInf  tInf_RotBasketCtClkwiseRampRatioRadio;
    TUint16 aau16Rng_RotBasketCtClkwiseRampRatioRadio[2][2];
    TUint16 au16Def_RotBasketCtClkwiseRampRatioRadio[2];
    TDbVarInf  tInf_MinPvgRotTurretClkwiseTurretPost;
    TUint16 au16Rng_MinPvgRotTurretClkwiseTurretPost[2];
    TUint16 u16Def_MinPvgRotTurretClkwiseTurretPost;
    TDbVarInf  tInf_MinPvgRotTurretClkwiseNacelPost;
    TUint16 au16Rng_MinPvgRotTurretClkwiseNacelPost[2];
    TUint16 u16Def_MinPvgRotTurretClkwiseNacelPost;
    TDbVarInf  tInf_MinPvgRotTurretClkwiseRadioPost;
    TUint16 au16Rng_MinPvgRotTurretClkwiseRadioPost[2];
    TUint16 u16Def_MinPvgRotTurretClkwiseRadioPost;
    TDbVarInf  tInf_MaxPvgRotTurretClkwiseTurretPost;
    TUint16 au16Rng_MaxPvgRotTurretClkwiseTurretPost[2];
    TUint16 u16Def_MaxPvgRotTurretClkwiseTurretPost;
    TDbVarInf  tInf_MaxPvgRotTurretClkwiseNacelPost;
    TUint16 au16Rng_MaxPvgRotTurretClkwiseNacelPost[2];
    TUint16 u16Def_MaxPvgRotTurretClkwiseNacelPost;
    TDbVarInf  tInf_MaxPvgRotTurretClkwiseRadioPost;
    TUint16 au16Rng_MaxPvgRotTurretClkwiseRadioPost[2];
    TUint16 u16Def_MaxPvgRotTurretClkwiseRadioPost;
    TDbVarInf  tInf_RotTurretClkwiseRampRatioTurret;
    TUint16 aau16Rng_RotTurretClkwiseRampRatioTurret[2][2];
    TUint16 au16Def_RotTurretClkwiseRampRatioTurret[2];
    TDbVarInf  tInf_RotTurretClkwiseRampRatioNacelle;
    TUint16 aau16Rng_RotTurretClkwiseRampRatioNacelle[2][2];
    TUint16 au16Def_RotTurretClkwiseRampRatioNacelle[2];
    TDbVarInf  tInf_RotTurretClkwiseRampRatioRadio;
    TUint16 aau16Rng_RotTurretClkwiseRampRatioRadio[2][2];
    TUint16 au16Def_RotTurretClkwiseRampRatioRadio[2];
    TDbVarInf  tInf_MinPvgRotTurretCtClkwiseTurtPost;
    TUint16 au16Rng_MinPvgRotTurretCtClkwiseTurtPost[2];
    TUint16 u16Def_MinPvgRotTurretCtClkwiseTurtPost;
    TDbVarInf  tInf_MinPvgRotTurretCtClkwseNacelPost;
    TUint16 au16Rng_MinPvgRotTurretCtClkwseNacelPost[2];
    TUint16 u16Def_MinPvgRotTurretCtClkwseNacelPost;
    TDbVarInf  tInf_MinPvgRotTuretCtClkwseRadioPost;
    TUint16 au16Rng_MinPvgRotTuretCtClkwseRadioPost[2];
    TUint16 u16Def_MinPvgRotTuretCtClkwseRadioPost;
    TDbVarInf  tInf_MaxPvgRotTurretCtClkwseTuretPost;
    TUint16 au16Rng_MaxPvgRotTurretCtClkwseTuretPost[2];
    TUint16 u16Def_MaxPvgRotTurretCtClkwseTuretPost;
    TDbVarInf  tInf_MaxPvgRotTurretCtClkwseNacelPost;
    TUint16 au16Rng_MaxPvgRotTurretCtClkwseNacelPost[2];
    TUint16 u16Def_MaxPvgRotTurretCtClkwseNacelPost;
    TDbVarInf  tInf_MaxPvgRotTurretCtClkwseRadioPost;
    TUint16 au16Rng_MaxPvgRotTurretCtClkwseRadioPost[2];
    TUint16 u16Def_MaxPvgRotTurretCtClkwseRadioPost;
    TDbVarInf  tInf_RotTurretCtClkwiseRampRatioTuret;
    TUint16 aau16Rng_RotTurretCtClkwiseRampRatioTuret[2][2];
    TUint16 au16Def_RotTurretCtClkwiseRampRatioTuret[2];
    TDbVarInf  tInf_RotTurretCtClkwiseRampRatioNacel;
    TUint16 aau16Rng_RotTurretCtClkwiseRampRatioNacel[2][2];
    TUint16 au16Def_RotTurretCtClkwiseRampRatioNacel[2];
    TDbVarInf  tInf_RotTurretCtClkwiseRampRatioRadio;
    TUint16 aau16Rng_RotTurretCtClkwiseRampRatioRadio[2][2];
    TUint16 au16Def_RotTurretCtClkwiseRampRatioRadio[2];
    TDbVarInf  tInf_MinPvgUpAxleOscillant;
    TUint8 au8Rng_MinPvgUpAxleOscillant[2];
    TUint8 u8Def_MinPvgUpAxleOscillant;
    TDbVarInf  tInf_MaxPvgUpAxleOscillant;
    TUint8 au8Rng_MaxPvgUpAxleOscillant[2];
    TUint8 u8Def_MaxPvgUpAxleOscillant;
    TDbVarInf  tInf_PvgUpAxleOscillantRampRatio;
    TUint16 aau16Rng_PvgUpAxleOscillantRampRatio[2][2];
    TUint16 au16Def_PvgUpAxleOscillantRampRatio[2];
    TDbVarInf  tInf_MinPvgDownAxleOscillant;
    TUint8 au8Rng_MinPvgDownAxleOscillant[2];
    TUint8 u8Def_MinPvgDownAxleOscillant;
    TDbVarInf  tInf_MaxPvgDownAxleOscillant;
    TUint8 au8Rng_MaxPvgDownAxleOscillant[2];
    TUint8 u8Def_MaxPvgDownAxleOscillant;
    TDbVarInf  tInf_PvgDownAxleOscillantRampRatio;
    TUint16 aau16Rng_PvgDownAxleOscillantRampRatio[2][2];
    TUint16 au16Def_PvgDownAxleOscillantRampRatio[2];
    TDbVarInf  tInf_MinPvgUpAxleFixe;
    TUint8 au8Rng_MinPvgUpAxleFixe[2];
    TUint8 u8Def_MinPvgUpAxleFixe;
    TDbVarInf  tInf_MaxPvgUpAxleFixe;
    TUint8 au8Rng_MaxPvgUpAxleFixe[2];
    TUint8 u8Def_MaxPvgUpAxleFixe;
    TDbVarInf  tInf_PvgUpAxleFixeRampRatio;
    TUint16 aau16Rng_PvgUpAxleFixeRampRatio[2][2];
    TUint16 au16Def_PvgUpAxleFixeRampRatio[2];
    TDbVarInf  tInf_MinPvgDownAxleFixe;
    TUint8 au8Rng_MinPvgDownAxleFixe[2];
    TUint8 u8Def_MinPvgDownAxleFixe;
    TDbVarInf  tInf_MaxPvgDownAxleFixe;
    TUint8 au8Rng_MaxPvgDownAxleFixe[2];
    TUint8 u8Def_MaxPvgDownAxleFixe;
    TDbVarInf  tInf_PvgDownAxleFixeRampRatio;
    TUint16 aau16Rng_PvgDownAxleFixeRampRatio[2][2];
    TUint16 au16Def_PvgDownAxleFixeRampRatio[2];
    TDbVarInf  tInf_MinPvgRotFrameCtClkwise;
    TUint8 au8Rng_MinPvgRotFrameCtClkwise[2];
    TUint8 u8Def_MinPvgRotFrameCtClkwise;
    TDbVarInf  tInf_MaxPvgRotFrameCtClkwise;
    TUint8 au8Rng_MaxPvgRotFrameCtClkwise[2];
    TUint8 u8Def_MaxPvgRotFrameCtClkwise;
    TDbVarInf  tInf_RotFrameCtClkwiseRampRatio;
    TUint16 aau16Rng_RotFrameCtClkwiseRampRatio[2][2];
    TUint16 au16Def_RotFrameCtClkwiseRampRatio[2];
    TDbVarInf  tInf_MinPvgRotFrameClkwise;
    TUint8 au8Rng_MinPvgRotFrameClkwise[2];
    TUint8 u8Def_MinPvgRotFrameClkwise;
    TDbVarInf  tInf_MaxPvgRotFrameClkwise;
    TUint8 au8Rng_MaxPvgRotFrameClkwise[2];
    TUint8 u8Def_MaxPvgRotFrameClkwise;
    TDbVarInf  tInf_RotFrameClkwiseRampRatio;
    TUint16 aau16Rng_RotFrameClkwiseRampRatio[2][2];
    TUint16 au16Def_RotFrameClkwiseRampRatio[2];
    TDbVarInf  tInf_AntiDemarrageTime;
    TUint32 au32Rng_AntiDemarrageTime[2];
    TUint32 u32Def_AntiDemarrageTime;
    TDbVarInf  tInf_TresholdRmpMotorAntidemarrage;
    TInt32 ai32Rng_TresholdRmpMotorAntidemarrage[2];
    TInt32 i32Def_TresholdRmpMotorAntidemarrage;
    TDbVarInf  tInf_SlowSpeedUpDeltaArmTelescOut;
    TUint16 au16Rng_SlowSpeedUpDeltaArmTelescOut[2];
    TUint16 u16Def_SlowSpeedUpDeltaArmTelescOut;
    TDbVarInf  tInf_SlowSpeedDownDeltaArmTelescOut;
    TUint16 au16Rng_SlowSpeedDownDeltaArmTelescOut[2];
    TUint16 u16Def_SlowSpeedDownDeltaArmTelescOut;
    TDbVarInf  tInf_SlowSpeedUpArrowArmTelescOut;
    TUint16 au16Rng_SlowSpeedUpArrowArmTelescOut[2];
    TUint16 u16Def_SlowSpeedUpArrowArmTelescOut;
    TDbVarInf  tInf_SlowSpeedDownArrowArmTelescOut;
    TUint16 au16Rng_SlowSpeedDownArrowArmTelescOut[2];
    TUint16 u16Def_SlowSpeedDownArrowArmTelescOut;
    TDbVarInf  tInf_RotTurretClockSlowSpeedRedAlo;
    TUint16 au16Rng_RotTurretClockSlowSpeedRedAlo[2];
    TUint16 u16Def_RotTurretClockSlowSpeedRedAlo;
    TDbVarInf  tInf_RotTurretCtClockSlowSpeedRedAlo;
    TUint16 au16Rng_RotTurretCtClockSlowSpeedRedAlo[2];
    TUint16 u16Def_RotTurretCtClockSlowSpeedRedAlo;
    TDbVarInf  tInf_ArrowArmDownSlowSpeedRedAlo;
    TUint16 au16Rng_ArrowArmDownSlowSpeedRedAlo[2];
    TUint16 u16Def_ArrowArmDownSlowSpeedRedAlo;
    TDbVarInf  tInf_SlowSpeedRotTurretCtClokTelecOut;
    TUint16 au16Rng_SlowSpeedRotTurretCtClokTelecOut[2];
    TUint16 u16Def_SlowSpeedRotTurretCtClokTelecOut;
    TDbVarInf  tInf_SlowSpeedRotTurretClokTelecOut;
    TUint16 au16Rng_SlowSpeedRotTurretClokTelecOut[2];
    TUint16 u16Def_SlowSpeedRotTurretClokTelecOut;
    TDbVarInf  tInf_MinPvgUpMastMeasure;
    TUint16 au16Rng_MinPvgUpMastMeasure[2];
    TUint16 u16Def_MinPvgUpMastMeasure;
    TDbVarInf  tInf_MaxPvgUpMastMeasure;
    TUint16 au16Rng_MaxPvgUpMastMeasure[2];
    TUint16 u16Def_MaxPvgUpMastMeasure;
    TDbVarInf  tInf_UpMastMeasureRampRatio;
    TUint16 aau16Rng_UpMastMeasureRampRatio[2][2];
    TUint16 au16Def_UpMastMeasureRampRatio[2];
    TDbVarInf  tInf_MinPvgDownMastMeasure;
    TUint16 au16Rng_MinPvgDownMastMeasure[2];
    TUint16 u16Def_MinPvgDownMastMeasure;
    TDbVarInf  tInf_MaxPvgDownMastMeasure;
    TUint16 au16Rng_MaxPvgDownMastMeasure[2];
    TUint16 u16Def_MaxPvgDownMastMeasure;
    TDbVarInf  tInf_DownMastMeasureRampRatio;
    TUint16 aau16Rng_DownMastMeasureRampRatio[2][2];
    TUint16 au16Def_DownMastMeasureRampRatio[2];
    TDbVarInf  tInf_OutCharPosTransmission1Pressure;
    TInt16 ai16Rng_OutCharPosTransmission1Pressure[2];
    TInt16 i16Def_OutCharPosTransmission1Pressure;
    TDbVarInf  tInf_OutCharNeuTransmission1Pressure;
    TInt16 ai16Rng_OutCharNeuTransmission1Pressure[2];
    TInt16 i16Def_OutCharNeuTransmission1Pressure;
    TDbVarInf  tInf_OutCharNegTransmission1Pressure;
    TInt16 ai16Rng_OutCharNegTransmission1Pressure[2];
    TInt16 i16Def_OutCharNegTransmission1Pressure;
    TDbVarInf  tInf_InCharPosTransmission1Pressure;
    TInt16 ai16Rng_InCharPosTransmission1Pressure[2];
    TInt16 i16Def_InCharPosTransmission1Pressure;
    TDbVarInf  tInf_InCharNeuTransmission1Pressure;
    TInt16 ai16Rng_InCharNeuTransmission1Pressure[2];
    TInt16 i16Def_InCharNeuTransmission1Pressure;
    TDbVarInf  tInf_INCharNegTransmission1Pressure;
    TInt16 ai16Rng_INCharNegTransmission1Pressure[2];
    TInt16 i16Def_INCharNegTransmission1Pressure;
    TDbVarInf  tInf_OutCharPosTransmission2Pressure;
    TInt16 ai16Rng_OutCharPosTransmission2Pressure[2];
    TInt16 i16Def_OutCharPosTransmission2Pressure;
    TDbVarInf  tInf_OutCharNeuTransmission2Pressure;
    TInt16 ai16Rng_OutCharNeuTransmission2Pressure[2];
    TInt16 i16Def_OutCharNeuTransmission2Pressure;
    TDbVarInf  tInf_OutCharNegTransmission2Pressure;
    TInt16 ai16Rng_OutCharNegTransmission2Pressure[2];
    TInt16 i16Def_OutCharNegTransmission2Pressure;
    TDbVarInf  tInf_InCharPosTransmission2Pressure;
    TInt16 ai16Rng_InCharPosTransmission2Pressure[2];
    TInt16 i16Def_InCharPosTransmission2Pressure;
    TDbVarInf  tInf_InCharNeuTransmission2Pressure;
    TInt16 ai16Rng_InCharNeuTransmission2Pressure[2];
    TInt16 i16Def_InCharNeuTransmission2Pressure;
    TDbVarInf  tInf_INCharNegTransmission2Pressure;
    TInt16 ai16Rng_INCharNegTransmission2Pressure[2];
    TInt16 i16Def_INCharNegTransmission2Pressure;
    TDbVarInf  tInf_OutCharPosBypassPressureSensor;
    TInt16 ai16Rng_OutCharPosBypassPressureSensor[2];
    TInt16 i16Def_OutCharPosBypassPressureSensor;
    TDbVarInf  tInf_OutCharNeuBypassPressureSensor;
    TInt16 ai16Rng_OutCharNeuBypassPressureSensor[2];
    TInt16 i16Def_OutCharNeuBypassPressureSensor;
    TDbVarInf  tInf_OutCharNegBypassPressureSensor;
    TInt16 ai16Rng_OutCharNegBypassPressureSensor[2];
    TInt16 i16Def_OutCharNegBypassPressureSensor;
    TDbVarInf  tInf_InCharPosBypassPressureSensor;
    TInt16 ai16Rng_InCharPosBypassPressureSensor[2];
    TInt16 i16Def_InCharPosBypassPressureSensor;
    TDbVarInf  tInf_InCharNeuBypassPressureSensor;
    TInt16 ai16Rng_InCharNeuBypassPressureSensor[2];
    TInt16 i16Def_InCharNeuBypassPressureSensor;
    TDbVarInf  tInf_InCharNegBypassPressureSensor;
    TInt16 ai16Rng_InCharNegBypassPressureSensor[2];
    TInt16 i16Def_InCharNegBypassPressureSensor;
    TDbVarInf  tInf_NvParametersC1_1;
    TBoolean aboRng_NvParametersC1_1[2];
    TBoolean boDef_NvParametersC1_1;
    TDbVarInf  tInf_NvParametersC1_2;
    TBoolean aboRng_NvParametersC1_2[2];
    TBoolean boDef_NvParametersC1_2;
    TDbVarInf  tInf_NvParametersC1_3;
    TBoolean aboRng_NvParametersC1_3[2];
    TBoolean boDef_NvParametersC1_3;
    TDbVarInf  tInf_NvParametersC1_4;
    TBoolean aboRng_NvParametersC1_4[2];
    TBoolean boDef_NvParametersC1_4;
    TDbVarInf  tInf_NvParametersC1_5;
    TBoolean aboRng_NvParametersC1_5[2];
    TBoolean boDef_NvParametersC1_5;
    TDbVarInf  tInf_NvParametersC1_6;
    TUint8 au8Rng_NvParametersC1_6[2];
    TUint8 u8Def_NvParametersC1_6;
    TDbVarInf  tInf_NvParametersC1_7;
    TUint8 au8Rng_NvParametersC1_7[2];
    TUint8 u8Def_NvParametersC1_7;
    TDbVarInf  tInf_NvParametersC1_8;
    TUint8 au8Rng_NvParametersC1_8[2];
    TUint8 u8Def_NvParametersC1_8;
    TDbVarInf  tInf_NvParametersC1_9;
    TUint8 au8Rng_NvParametersC1_9[2];
    TUint8 u8Def_NvParametersC1_9;
    TDbVarInf  tInf_NvParametersC1_10;
    TUint16 au16Rng_NvParametersC1_10[2];
    TUint16 u16Def_NvParametersC1_10;
    TDbVarInf  tInf_NvParametersC1_11;
    TUint16 au16Rng_NvParametersC1_11[2];
    TUint16 u16Def_NvParametersC1_11;
    TDbVarInf  tInf_NvParametersC1_12;
    TUint16 au16Rng_NvParametersC1_12[2];
    TUint16 u16Def_NvParametersC1_12;
    TDbVarInf  tInf_NvParametersC1_13;
    TUint16 au16Rng_NvParametersC1_13[2];
    TUint16 u16Def_NvParametersC1_13;
    TDbVarInf  tInf_NvParametersC1_14;
    TInt16 ai16Rng_NvParametersC1_14[2];
    TInt16 i16Def_NvParametersC1_14;
    TDbVarInf  tInf_NvParametersC1_15;
    TInt16 ai16Rng_NvParametersC1_15[2];
    TInt16 i16Def_NvParametersC1_15;
    TDbVarInf  tInf_NvParametersC1_16;
    TInt16 ai16Rng_NvParametersC1_16[2];
    TInt16 i16Def_NvParametersC1_16;
    TDbVarInf  tInf_NvParametersC1_17;
    TInt16 ai16Rng_NvParametersC1_17[2];
    TInt16 i16Def_NvParametersC1_17;
    TDbVarInf  tInf_CurFor220VGeneratorOn;
    TUint16 au16Rng_CurFor220VGeneratorOn[2];
    TUint16 u16Def_CurFor220VGeneratorOn;
    TDbVarInf  tInf_NbElementTransissionPressure;
    TUint8 au8Rng_NbElementTransissionPressure[2];
    TUint8 u8Def_NbElementTransissionPressure;
    TDbVarInf  tInf_RampUpEvGenerator;
    TUint16 au16Rng_RampUpEvGenerator[2];
    TUint16 u16Def_RampUpEvGenerator;
    TDbVarInf  tInf_RampDownEvGenerator;
    TUint16 au16Rng_RampDownEvGenerator[2];
    TUint16 u16Def_RampDownEvGenerator;
    TDbVarInf  tInf_GasGaugeAlarm;
    TInt16 ai16Rng_GasGaugeAlarm[2];
    TInt16 i16Def_GasGaugeAlarm;
    TDbVarInf  tInf_CRC_SRDO1;
    TUint16 au16Rng_CRC_SRDO1[2];
    TUint16 u16Def_CRC_SRDO1;
    TDbVarInf  tInf_CRC_SRDO2;
    TUint16 au16Rng_CRC_SRDO2[2];
    TUint16 u16Def_CRC_SRDO2;
    TDbVarInf  tInf_CRC_SRDO3;
    TUint16 au16Rng_CRC_SRDO3[2];
    TUint16 u16Def_CRC_SRDO3;
    TDbVarInf  tInf_CRC_SRDO4;
    TUint16 au16Rng_CRC_SRDO4[2];
    TUint16 u16Def_CRC_SRDO4;
    TDbVarInf  tInf_CRC_SRDO5;
    TUint16 au16Rng_CRC_SRDO5[2];
    TUint16 u16Def_CRC_SRDO5;
    TDbVarInf  tInf_CRC_SRDO6;
    TUint16 au16Rng_CRC_SRDO6[2];
    TUint16 u16Def_CRC_SRDO6;
    TDbVarInf  tInf_CRC_SRDO7;
    TUint16 au16Rng_CRC_SRDO7[2];
    TUint16 u16Def_CRC_SRDO7;
    TDbVarInf  tInf_CRC_SRDO8;
    TUint16 au16Rng_CRC_SRDO8[2];
    TUint16 u16Def_CRC_SRDO8;
    TDbVarInf  tInf_CRC_SRDO9;
    TUint16 au16Rng_CRC_SRDO9[2];
    TUint16 u16Def_CRC_SRDO9;
    TDbVarInf  tInf_CRC_SRDO10;
    TUint16 au16Rng_CRC_SRDO10[2];
    TUint16 u16Def_CRC_SRDO10;
    TDbVarInf  tInf_TimeoutSdoRequestTime;
    TUint32 au32Rng_TimeoutSdoRequestTime[2];
    TUint32 u32Def_TimeoutSdoRequestTime;
    TDbVarInf  tInf_ActiveSystemFault;
    TBoolean aboRng_ActiveSystemFault[2];
    TBoolean boDef_ActiveSystemFault;
    TDbVarInf  tInf_BypassAlarmActiveC1;
    TBoolean aboRng_BypassAlarmActiveC1[2];
    TBoolean boDef_BypassAlarmActiveC1;
    TDbVarInf  tInf_OutCharPosOilTankTemp;
    TInt16 ai16Rng_OutCharPosOilTankTemp[2];
    TInt16 i16Def_OutCharPosOilTankTemp;
    TDbVarInf  tInf_OutCharNeuOilTankTemp;
    TInt16 ai16Rng_OutCharNeuOilTankTemp[2];
    TInt16 i16Def_OutCharNeuOilTankTemp;
    TDbVarInf  tInf_OutCharNegOilTankTemp;
    TInt16 ai16Rng_OutCharNegOilTankTemp[2];
    TInt16 i16Def_OutCharNegOilTankTemp;
}TDbSetNvParametersC1;

typedef struct
{
    TDbVarInf  tInf_ArmDeltaRampRatioNacellePost;
    TUint16 aau16Rng_ArmDeltaRampRatioNacellePost[4][2];
    TUint16 au16Def_ArmDeltaRampRatioNacellePost[4];
    TDbVarInf  tInf_ArmArrowRampRatioNacellePost;
    TUint16 aau16Rng_ArmArrowRampRatioNacellePost[4][2];
    TUint16 au16Def_ArmArrowRampRatioNacellePost[4];
    TDbVarInf  tInf_ArmTelescopeRampRatioNacellePost;
    TUint16 aau16Rng_ArmTelescopeRampRatioNacellePost[4][2];
    TUint16 au16Def_ArmTelescopeRampRatioNacellePost[4];
    TDbVarInf  tInf_RotTurretRampRatio;
    TUint16 aau16Rng_RotTurretRampRatio[2][2];
    TUint16 au16Def_RotTurretRampRatio[2];
    TDbVarInf  tInf_PvgEvTorRampRatio;
    TUint16 aau16Rng_PvgEvTorRampRatio[4][2];
    TUint16 au16Def_PvgEvTorRampRatio[4];
    TDbVarInf  tInf_AngleEndStopLowDeltaArm;
    TInt16 ai16Rng_AngleEndStopLowDeltaArm[2];
    TInt16 i16Def_AngleEndStopLowDeltaArm;
    TDbVarInf  tInf_AngleCalibEndStopLowDeltaArm;
    TInt16 ai16Rng_AngleCalibEndStopLowDeltaArm[2];
    TInt16 i16Def_AngleCalibEndStopLowDeltaArm;
    TDbVarInf  tInf_AngleEndStopHighDeltaArm;
    TInt16 ai16Rng_AngleEndStopHighDeltaArm[2];
    TInt16 i16Def_AngleEndStopHighDeltaArm;
    TDbVarInf  tInf_AngleCalibEndStopHighDeltaArm;
    TInt16 ai16Rng_AngleCalibEndStopHighDeltaArm[2];
    TInt16 i16Def_AngleCalibEndStopHighDeltaArm;
    TDbVarInf  tInf_AngleEndStopLowArrowArm;
    TInt16 ai16Rng_AngleEndStopLowArrowArm[2];
    TInt16 i16Def_AngleEndStopLowArrowArm;
    TDbVarInf  tInf_AngleCalibEndStopLowArrowArm;
    TInt16 ai16Rng_AngleCalibEndStopLowArrowArm[2];
    TInt16 i16Def_AngleCalibEndStopLowArrowArm;
    TDbVarInf  tInf_AngleEndStopHighArrowArm;
    TInt16 ai16Rng_AngleEndStopHighArrowArm[2];
    TInt16 i16Def_AngleEndStopHighArrowArm;
    TDbVarInf  tInf_AngleCalibEndStopHighArrowArm;
    TInt16 ai16Rng_AngleCalibEndStopHighArrowArm[2];
    TInt16 i16Def_AngleCalibEndStopHighArrowArm;
    TDbVarInf  tInf_LenghtEndStopLowTelescope1;
    TUint16 au16Rng_LenghtEndStopLowTelescope1[2];
    TUint16 u16Def_LenghtEndStopLowTelescope1;
    TDbVarInf  tInf_LenghtEndStopHighTelescope1;
    TUint16 au16Rng_LenghtEndStopHighTelescope1[2];
    TUint16 u16Def_LenghtEndStopHighTelescope1;
    TDbVarInf  tInf_LenghtCaliEndStopLowTelescope1;
    TUint16 au16Rng_LenghtCaliEndStopLowTelescope1[2];
    TUint16 u16Def_LenghtCaliEndStopLowTelescope1;
    TDbVarInf  tInf_LenghtCaliEndStopHighTelescope1;
    TUint16 au16Rng_LenghtCaliEndStopHighTelescope1[2];
    TUint16 u16Def_LenghtCaliEndStopHighTelescope1;
    TDbVarInf  tInf_LenghtEndStopLowTelescope2;
    TUint16 au16Rng_LenghtEndStopLowTelescope2[2];
    TUint16 u16Def_LenghtEndStopLowTelescope2;
    TDbVarInf  tInf_LenghtEndStopHighTelescope2;
    TUint16 au16Rng_LenghtEndStopHighTelescope2[2];
    TUint16 u16Def_LenghtEndStopHighTelescope2;
    TDbVarInf  tInf_LenghtCaliEndStopLowTelescope2;
    TUint16 au16Rng_LenghtCaliEndStopLowTelescope2[2];
    TUint16 u16Def_LenghtCaliEndStopLowTelescope2;
    TDbVarInf  tInf_LenghtCaliEndStopHighTelescope2;
    TUint16 au16Rng_LenghtCaliEndStopHighTelescope2[2];
    TUint16 u16Def_LenghtCaliEndStopHighTelescope2;
    TDbVarInf  tInf_ArmDeltaRampRatioTurretPost;
    TUint16 aau16Rng_ArmDeltaRampRatioTurretPost[4][2];
    TUint16 au16Def_ArmDeltaRampRatioTurretPost[4];
    TDbVarInf  tInf_ArmArrowRampRatioTurretPost;
    TUint16 aau16Rng_ArmArrowRampRatioTurretPost[4][2];
    TUint16 au16Def_ArmArrowRampRatioTurretPost[4];
    TDbVarInf  tInf_ArmTelescopeRampRatioTurretPost;
    TUint16 aau16Rng_ArmTelescopeRampRatioTurretPost[4][2];
    TUint16 au16Def_ArmTelescopeRampRatioTurretPost[4];
    TDbVarInf  tInf_AngleCalibDeltaArmHyst;
    TInt16 ai16Rng_AngleCalibDeltaArmHyst[2];
    TInt16 i16Def_AngleCalibDeltaArmHyst;
    TDbVarInf  tInf_AngleCalibArrowArmHyst;
    TInt16 ai16Rng_AngleCalibArrowArmHyst[2];
    TInt16 i16Def_AngleCalibArrowArmHyst;
    TDbVarInf  tInf_AngleCalibEndStopHighDeltaArmSla;
    TInt16 ai16Rng_AngleCalibEndStopHighDeltaArmSla[2];
    TInt16 i16Def_AngleCalibEndStopHighDeltaArmSla;
    TDbVarInf  tInf_AngleCalibEndStopLowDeltaArmSla;
    TInt16 ai16Rng_AngleCalibEndStopLowDeltaArmSla[2];
    TInt16 i16Def_AngleCalibEndStopLowDeltaArmSla;
    TDbVarInf  tInf_AngleCalibEndStopHighArrowArmSla;
    TInt16 ai16Rng_AngleCalibEndStopHighArrowArmSla[2];
    TInt16 i16Def_AngleCalibEndStopHighArrowArmSla;
    TDbVarInf  tInf_AngleCalibEndStopLowArrowArmSla;
    TInt16 ai16Rng_AngleCalibEndStopLowArrowArmSla[2];
    TInt16 i16Def_AngleCalibEndStopLowArrowArmSla;
}TDbSetNvCalibrationC1;

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
}TDbSetRam48XsInputsC1;

typedef struct
{
    TDbVarInf  tInf_RotFrameClkwiseButton;
    TBoolean aboRng_RotFrameClkwiseButton[2];
    TBoolean boDef_RotFrameClkwiseButton;
    TDbVarInf  tInf_RotFrameCtClkwiseButton;
    TBoolean aboRng_RotFrameCtClkwiseButton[2];
    TBoolean boDef_RotFrameCtClkwiseButton;
    TDbVarInf  tInf_UpPendularOrRotTurretCtClock;
    TBoolean aboRng_UpPendularOrRotTurretCtClock[2];
    TBoolean boDef_UpPendularOrRotTurretCtClock;
    TDbVarInf  tInf_DownPendularOrRotTurretClock;
    TBoolean aboRng_DownPendularOrRotTurretClock[2];
    TBoolean boDef_DownPendularOrRotTurretClock;
    TDbVarInf  tInf_SelectorPendular;
    TBoolean aboRng_SelectorPendular[2];
    TBoolean boDef_SelectorPendular;
    TDbVarInf  tInf_SelectorRotTurret;
    TBoolean aboRng_SelectorRotTurret[2];
    TBoolean boDef_SelectorRotTurret;
    TDbVarInf  tInf_UpAxleOscillant;
    TBoolean aboRng_UpAxleOscillant[2];
    TBoolean boDef_UpAxleOscillant;
    TDbVarInf  tInf_DownAxleOscillant;
    TBoolean aboRng_DownAxleOscillant[2];
    TBoolean boDef_DownAxleOscillant;
    TDbVarInf  tInf_UpAxleFixe;
    TBoolean aboRng_UpAxleFixe[2];
    TBoolean boDef_UpAxleFixe;
    TDbVarInf  tInf_DownAxleFixe;
    TBoolean aboRng_DownAxleFixe[2];
    TBoolean boDef_DownAxleFixe;
    TDbVarInf  tInf_ForcingAdvanceTrack;
    TBoolean aboRng_ForcingAdvanceTrack[2];
    TBoolean boDef_ForcingAdvanceTrack;
}TDbSetRamRcvRadioCmdC1;

typedef struct
{
    TDbVarInf  tInf_AutorizeUpDeltaArm;
    TBoolean aboRng_AutorizeUpDeltaArm[2];
    TBoolean boDef_AutorizeUpDeltaArm;
    TDbVarInf  tInf_AutorizeDownDeltaArm;
    TBoolean aboRng_AutorizeDownDeltaArm[2];
    TBoolean boDef_AutorizeDownDeltaArm;
    TDbVarInf  tInf_AutorizeUpArrowArm;
    TBoolean aboRng_AutorizeUpArrowArm[2];
    TBoolean boDef_AutorizeUpArrowArm;
    TDbVarInf  tInf_AutorizeDownArrowArm;
    TBoolean aboRng_AutorizeDownArrowArm[2];
    TBoolean boDef_AutorizeDownArrowArm;
    TDbVarInf  tInf_AutorizeOutTelescopeArm;
    TBoolean aboRng_AutorizeOutTelescopeArm[2];
    TBoolean boDef_AutorizeOutTelescopeArm;
    TDbVarInf  tInf_AutorizeInTelescopeArm;
    TBoolean aboRng_AutorizeInTelescopeArm[2];
    TBoolean boDef_AutorizeInTelescopeArm;
    TDbVarInf  tInf_AutorizeRotBasketClkwise;
    TBoolean aboRng_AutorizeRotBasketClkwise[2];
    TBoolean boDef_AutorizeRotBasketClkwise;
    TDbVarInf  tInf_AutorizeRotBasketCtClkwise;
    TBoolean aboRng_AutorizeRotBasketCtClkwise[2];
    TBoolean boDef_AutorizeRotBasketCtClkwise;
    TDbVarInf  tInf_AutorizeUpInclinaisonBasket;
    TBoolean aboRng_AutorizeUpInclinaisonBasket[2];
    TBoolean boDef_AutorizeUpInclinaisonBasket;
    TDbVarInf  tInf_AutorizeDownInclinaisonBasket;
    TBoolean aboRng_AutorizeDownInclinaisonBasket[2];
    TBoolean boDef_AutorizeDownInclinaisonBasket;
    TDbVarInf  tInf_AutorizeUpPendular;
    TBoolean aboRng_AutorizeUpPendular[2];
    TBoolean boDef_AutorizeUpPendular;
    TDbVarInf  tInf_AutorizeDownPendular;
    TBoolean aboRng_AutorizeDownPendular[2];
    TBoolean boDef_AutorizeDownPendular;
    TDbVarInf  tInf_AutorizeRotTurretClkwise;
    TBoolean aboRng_AutorizeRotTurretClkwise[2];
    TBoolean boDef_AutorizeRotTurretClkwise;
    TDbVarInf  tInf_AutorizeRotTurretCtClkwise;
    TBoolean aboRng_AutorizeRotTurretCtClkwise[2];
    TBoolean boDef_AutorizeRotTurretCtClkwise;
}TDbSetRamLimitMoveC1;

typedef struct
{
    TDbVarInf  tInf_StartUpCurrentMotor;
    TUint16 au16Rng_StartUpCurrentMotor[2];
    TUint16 u16Def_StartUpCurrentMotor;
    TDbVarInf  tInf_HighForcingCurrentMotor;
    TUint16 au16Rng_HighForcingCurrentMotor[2];
    TUint16 u16Def_HighForcingCurrentMotor;
    TDbVarInf  tInf_LowForcingCurrentMotor;
    TUint16 au16Rng_LowForcingCurrentMotor[2];
    TUint16 u16Def_LowForcingCurrentMotor;
    TDbVarInf  tInf_Threshold3;
    TUint16 au16Rng_Threshold3[2];
    TUint16 u16Def_Threshold3;
    TDbVarInf  tInf_Threshold2;
    TUint16 au16Rng_Threshold2[2];
    TUint16 u16Def_Threshold2;
    TDbVarInf  tInf_Threshold1;
    TUint16 au16Rng_Threshold1[2];
    TUint16 u16Def_Threshold1;
    TDbVarInf  tInf_StartUpTime;
    TUint32 au32Rng_StartUpTime[2];
    TUint32 u32Def_StartUpTime;
    TDbVarInf  tInf_HighForcingTime;
    TUint32 au32Rng_HighForcingTime[2];
    TUint32 u32Def_HighForcingTime;
    TDbVarInf  tInf_TranslationCurrentMotor;
    TUint16 au16Rng_TranslationCurrentMotor[2];
    TUint16 u16Def_TranslationCurrentMotor;
    TDbVarInf  tInf_NoMovementCurrentMotor;
    TUint16 au16Rng_NoMovementCurrentMotor[2];
    TUint16 u16Def_NoMovementCurrentMotor;
    TDbVarInf  tInf_TresholdRegimeForGenerator;
    TUint16 au16Rng_TresholdRegimeForGenerator[2];
    TUint16 u16Def_TresholdRegimeForGenerator;
    TDbVarInf  tInf_EngineIdleSpeedMotor;
    TUint16 au16Rng_EngineIdleSpeedMotor[2];
    TUint16 u16Def_EngineIdleSpeedMotor;
    TDbVarInf  tInf_CptmaxNoMovement;
    TUint8 au8Rng_CptmaxNoMovement[2];
    TUint8 u8Def_CptmaxNoMovement;
}TDbSetNvParamMotorC1;

typedef struct
{
    TDbVarInf  tInf_MotorDefaultLightErrSta;
    EErrorStatus48XS aeRng_MotorDefaultLightErrSta[2];
    EErrorStatus48XS eDef_MotorDefaultLightErrSta;
    TDbVarInf  tInf_MotorDefaultLight;
    TBoolean aboRng_MotorDefaultLight[2];
    TBoolean boDef_MotorDefaultLight;
    TDbVarInf  tInf_OverloadLightErrSta;
    EErrorStatus48XS aeRng_OverloadLightErrSta[2];
    EErrorStatus48XS eDef_OverloadLightErrSta;
    TDbVarInf  tInf_OverloadLight;
    TBoolean aboRng_OverloadLight[2];
    TBoolean boDef_OverloadLight;
    TDbVarInf  tInf_BuzzerErrSta;
    EErrorStatus48XS aeRng_BuzzerErrSta[2];
    EErrorStatus48XS eDef_BuzzerErrSta;
    TDbVarInf  tInf_Buzzer;
    TBoolean aboRng_Buzzer[2];
    TBoolean boDef_Buzzer;
    TDbVarInf  tInf_SupplyDeadManPedalAndJoysticks;
    TBoolean aboRng_SupplyDeadManPedalAndJoysticks[2];
    TBoolean boDef_SupplyDeadManPedalAndJoysticks;
    TDbVarInf  tInf_WarmingLightErrSta;
    EErrorStatus48XS aeRng_WarmingLightErrSta[2];
    EErrorStatus48XS eDef_WarmingLightErrSta;
    TDbVarInf  tInf_WarmingLight;
    TBoolean aboRng_WarmingLight[2];
    TBoolean boDef_WarmingLight;
    TDbVarInf  tInf_DeversDefaultLightErrSta;
    EErrorStatus48XS aeRng_DeversDefaultLightErrSta[2];
    EErrorStatus48XS eDef_DeversDefaultLightErrSta;
    TDbVarInf  tInf_DeversDefaultLight;
    TBoolean aboRng_DeversDefaultLight[2];
    TBoolean boDef_DeversDefaultLight;
    TDbVarInf  tInf_GasOilLightErrSta;
    EErrorStatus48XS aeRng_GasOilLightErrSta[2];
    EErrorStatus48XS eDef_GasOilLightErrSta;
    TDbVarInf  tInf_GasOilLight;
    TBoolean aboRng_GasOilLight[2];
    TBoolean boDef_GasOilLight;
    TDbVarInf  tInf_WhiteLightARGBasketErrSta;
    EErrorStatus48XS aeRng_WhiteLightARGBasketErrSta[2];
    EErrorStatus48XS eDef_WhiteLightARGBasketErrSta;
    TDbVarInf  tInf_WhiteLightARGBasket;
    TBoolean aboRng_WhiteLightARGBasket[2];
    TBoolean boDef_WhiteLightARGBasket;
    TDbVarInf  tInf_RedLightARGBasketErrSta;
    EErrorStatus48XS aeRng_RedLightARGBasketErrSta[2];
    EErrorStatus48XS eDef_RedLightARGBasketErrSta;
    TDbVarInf  tInf_RedLightARGBasket;
    TBoolean aboRng_RedLightARGBasket[2];
    TBoolean boDef_RedLightARGBasket;
    TDbVarInf  tInf_RedLightARDBasketErrSta;
    EErrorStatus48XS aeRng_RedLightARDBasketErrSta[2];
    EErrorStatus48XS eDef_RedLightARDBasketErrSta;
    TDbVarInf  tInf_RedLightARDBasket;
    TBoolean aboRng_RedLightARDBasket[2];
    TBoolean boDef_RedLightARDBasket;
    TDbVarInf  tInf_WhiteLightARDBasketErrSta;
    EErrorStatus48XS aeRng_WhiteLightARDBasketErrSta[2];
    EErrorStatus48XS eDef_WhiteLightARDBasketErrSta;
    TDbVarInf  tInf_WhiteLightARDBasket;
    TBoolean aboRng_WhiteLightARDBasket[2];
    TBoolean boDef_WhiteLightARDBasket;
    TDbVarInf  tInf_WhiteLightAr15746ErrSta;
    EErrorStatus48XS aeRng_WhiteLightAr15746ErrSta[2];
    EErrorStatus48XS eDef_WhiteLightAr15746ErrSta;
    TDbVarInf  tInf_WhiteLightAr15746Command;
    TBoolean aboRng_WhiteLightAr15746Command[2];
    TBoolean boDef_WhiteLightAr15746Command;
}TDbSetRam48XsOutputsC1;

typedef struct
{
    TDbVarInf  tInf_RestrictedModeAruActive;
    TBoolean aboRng_RestrictedModeAruActive[2];
    TBoolean boDef_RestrictedModeAruActive;
    TDbVarInf  tInf_TranslationMovementIsSolicited;
    TBoolean aboRng_TranslationMovementIsSolicited[2];
    TBoolean boDef_TranslationMovementIsSolicited;
    TDbVarInf  tInf_AxleMovementIsSolicited;
    TBoolean aboRng_AxleMovementIsSolicited[2];
    TBoolean boDef_AxleMovementIsSolicited;
    TDbVarInf  tInf_DownAxleFixeSensor;
    TBoolean aboRng_DownAxleFixeSensor[2];
    TBoolean boDef_DownAxleFixeSensor;
    TDbVarInf  tInf_DownAxleOscillantSensor;
    TBoolean aboRng_DownAxleOscillantSensor[2];
    TBoolean boDef_DownAxleOscillantSensor;
    TDbVarInf  tInf_SlopeAngle;
    TUint16 au16Rng_SlopeAngle[2];
    TUint16 u16Def_SlopeAngle;
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
    TDbVarInf  tInf_EncodeurTurret1Angle;
    TInt16 ai16Rng_EncodeurTurret1Angle[2];
    TInt16 i16Def_EncodeurTurret1Angle;
    TDbVarInf  tInf_RedLightARGBasketCmd;
    TBoolean aboRng_RedLightARGBasketCmd[2];
    TBoolean boDef_RedLightARGBasketCmd;
    TDbVarInf  tInf_WhiteLightARGBasketCmd;
    TBoolean aboRng_WhiteLightARGBasketCmd[2];
    TBoolean boDef_WhiteLightARGBasketCmd;
    TDbVarInf  tInf_EncodeurMastMeasureRaw;
    TUint32 au32Rng_EncodeurMastMeasureRaw[2];
    TUint32 u32Def_EncodeurMastMeasureRaw;
    TDbVarInf  tInf_WrongAbutments;
    TBoolean aboRng_WrongAbutments[2];
    TBoolean boDef_WrongAbutments;
    TDbVarInf  tInf_SpeedVehicleKmhx100;
    TInt32 ai32Rng_SpeedVehicleKmhx100[2];
    TInt32 i32Def_SpeedVehicleKmhx100;
    TDbVarInf  tInf_StopMovementByBrakeTest;
    TBoolean aboRng_StopMovementByBrakeTest[2];
    TBoolean boDef_StopMovementByBrakeTest;
    TDbVarInf  tInf_StopMovementByBreakInBrake;
    TBoolean aboRng_StopMovementByBreakInBrake[2];
    TBoolean boDef_StopMovementByBreakInBrake;
    TDbVarInf  tInf_EnableBuzzerSelectPost;
    TBoolean aboRng_EnableBuzzerSelectPost[2];
    TBoolean boDef_EnableBuzzerSelectPost;
    TDbVarInf  tInf_SelectedControlPost;
    EControlPost aeRng_SelectedControlPost[2];
    EControlPost eDef_SelectedControlPost;
    TDbVarInf  tInf_CenteredTurretState;
    TBoolean aboRng_CenteredTurretState[2];
    TBoolean boDef_CenteredTurretState;
    TDbVarInf  tInf_AuthorizeWork;
    TBoolean aboRng_AuthorizeWork[2];
    TBoolean boDef_AuthorizeWork;
    TDbVarInf  tInf_UpOsciAxlePos;
    TBoolean aboRng_UpOsciAxlePos[2];
    TBoolean boDef_UpOsciAxlePos;
    TDbVarInf  tInf_UpFixeAxlePos;
    TBoolean aboRng_UpFixeAxlePos[2];
    TBoolean boDef_UpFixeAxlePos;
    TDbVarInf  tInf_RailWorkMode;
    ERailWorkMode aeRng_RailWorkMode[2];
    ERailWorkMode eDef_RailWorkMode;
    TDbVarInf  tInf_EvForwardCommand;
    TUint16 au16Rng_EvForwardCommand[2];
    TUint16 u16Def_EvForwardCommand;
    TDbVarInf  tInf_EvBackwardCommand;
    TUint16 au16Rng_EvBackwardCommand[2];
    TUint16 u16Def_EvBackwardCommand;
    TDbVarInf  tInf_RedLightARDBasketCmd;
    TBoolean aboRng_RedLightARDBasketCmd[2];
    TBoolean boDef_RedLightARDBasketCmd;
    TDbVarInf  tInf_WhiteLightARDBasketCmd;
    TBoolean aboRng_WhiteLightARDBasketCmd[2];
    TBoolean boDef_WhiteLightARDBasketCmd;
    TDbVarInf  tInf_SecondParkBrakeActive;
    TBoolean aboRng_SecondParkBrakeActive[2];
    TBoolean boDef_SecondParkBrakeActive;
    TDbVarInf  tInf_AutorisationHighSpeedKeyState;
    TBoolean aboRng_AutorisationHighSpeedKeyState[2];
    TBoolean boDef_AutorisationHighSpeedKeyState;
    TDbVarInf  tInf_TransRailElectricRampOngoing;
    TBoolean aboRng_TransRailElectricRampOngoing[2];
    TBoolean boDef_TransRailElectricRampOngoing;
    TDbVarInf  tInf_RpmPvgTransRail;
    TInt16 ai16Rng_RpmPvgTransRail[2];
    TInt16 i16Def_RpmPvgTransRail;
    TDbVarInf  tInf_Batt_Soc;
    TUint8 au8Rng_Batt_Soc[2];
    TUint8 u8Def_Batt_Soc;
    TDbVarInf  tInf_Ibatt_ist;
    TInt16 ai16Rng_Ibatt_ist[2];
    TInt16 i16Def_Ibatt_ist;
    TDbVarInf  tInf_SendAuthorizeReloadBattery;
    TBoolean aboRng_SendAuthorizeReloadBattery[2];
    TBoolean boDef_SendAuthorizeReloadBattery;
}TDbSetRamEcuC1RcvFromC0;

typedef struct
{
    TDbVarInf  tInf_gBattery_On_Off;
    TBoolean aboRng_gBattery_On_Off[2];
    TBoolean boDef_gBattery_On_Off;
    TDbVarInf  tInf_gPreheat_On_Off;
    TBoolean aboRng_gPreheat_On_Off[2];
    TBoolean boDef_gPreheat_On_Off;
    TDbVarInf  tInf_gEngine_Faillure_On_Off;
    TBoolean aboRng_gEngine_Faillure_On_Off[2];
    TBoolean boDef_gEngine_Faillure_On_Off;
    TDbVarInf  tInf_gMaintenance_On_Off;
    TBoolean aboRng_gMaintenance_On_Off[2];
    TBoolean boDef_gMaintenance_On_Off;
    TDbVarInf  tInf_gOil_On_OFF;
    TBoolean aboRng_gOil_On_OFF[2];
    TBoolean boDef_gOil_On_OFF;
    TDbVarInf  tInf_gDeltaArmSectorDown;
    TBoolean aboRng_gDeltaArmSectorDown[2];
    TBoolean boDef_gDeltaArmSectorDown;
    TDbVarInf  tInf_gArrowArmSectorDown;
    TBoolean aboRng_gArrowArmSectorDown[2];
    TBoolean boDef_gArrowArmSectorDown;
    TDbVarInf  tInf_gPendularSectorDown;
    TBoolean aboRng_gPendularSectorDown[2];
    TBoolean boDef_gPendularSectorDown;
    TDbVarInf  tInf_gDeltaArmInCenter;
    TBoolean aboRng_gDeltaArmInCenter[2];
    TBoolean boDef_gDeltaArmInCenter;
    TDbVarInf  tInf_gArrowArmInCenter;
    TBoolean aboRng_gArrowArmInCenter[2];
    TBoolean boDef_gArrowArmInCenter;
    TDbVarInf  tInf_gPendularInCenter;
    TBoolean aboRng_gPendularInCenter[2];
    TBoolean boDef_gPendularInCenter;
    TDbVarInf  tInf_gBasketRotationInCenter;
    TBoolean aboRng_gBasketRotationInCenter[2];
    TBoolean boDef_gBasketRotationInCenter;
    TDbVarInf  tInf_gTelescopeInCenter;
    TBoolean aboRng_gTelescopeInCenter[2];
    TBoolean boDef_gTelescopeInCenter;
    TDbVarInf  tInf_gBasketInclinaisonInCenter;
    TBoolean aboRng_gBasketInclinaisonInCenter[2];
    TBoolean boDef_gBasketInclinaisonInCenter;
    TDbVarInf  tInf_gDeltaArmMoveUpAllow;
    TBoolean aboRng_gDeltaArmMoveUpAllow[2];
    TBoolean boDef_gDeltaArmMoveUpAllow;
    TDbVarInf  tInf_gDeltaArmMoveDownAllow;
    TBoolean aboRng_gDeltaArmMoveDownAllow[2];
    TBoolean boDef_gDeltaArmMoveDownAllow;
    TDbVarInf  tInf_gArrowArmMoveUpAllow;
    TBoolean aboRng_gArrowArmMoveUpAllow[2];
    TBoolean boDef_gArrowArmMoveUpAllow;
    TDbVarInf  tInf_gArrowArmMoveDownAllow;
    TBoolean aboRng_gArrowArmMoveDownAllow[2];
    TBoolean boDef_gArrowArmMoveDownAllow;
    TDbVarInf  tInf_gPendularMoveUpAllow;
    TBoolean aboRng_gPendularMoveUpAllow[2];
    TBoolean boDef_gPendularMoveUpAllow;
    TDbVarInf  tInf_gPendularMoveDownAllow;
    TBoolean aboRng_gPendularMoveDownAllow[2];
    TBoolean boDef_gPendularMoveDownAllow;
    TDbVarInf  tInf_gTelescopeMoveOutAllow;
    TBoolean aboRng_gTelescopeMoveOutAllow[2];
    TBoolean boDef_gTelescopeMoveOutAllow;
    TDbVarInf  tInf_gTelescopeMoveInAllow;
    TBoolean aboRng_gTelescopeMoveInAllow[2];
    TBoolean boDef_gTelescopeMoveInAllow;
    TDbVarInf  tInf_gTurretCtClockWiseMoveAllow;
    TBoolean aboRng_gTurretCtClockWiseMoveAllow[2];
    TBoolean boDef_gTurretCtClockWiseMoveAllow;
    TDbVarInf  tInf_gTurretClockWiseMoveAllow;
    TBoolean aboRng_gTurretClockWiseMoveAllow[2];
    TBoolean boDef_gTurretClockWiseMoveAllow;
    TDbVarInf  tInf_gBasketRotCtClockWiseMoveAllow;
    TBoolean aboRng_gBasketRotCtClockWiseMoveAllow[2];
    TBoolean boDef_gBasketRotCtClockWiseMoveAllow;
    TDbVarInf  tInf_gBasketRotClockWiseMoveAllow;
    TBoolean aboRng_gBasketRotClockWiseMoveAllow[2];
    TBoolean boDef_gBasketRotClockWiseMoveAllow;
    TDbVarInf  tInf_gBasketInclinaisonMoveUpAllow;
    TBoolean aboRng_gBasketInclinaisonMoveUpAllow[2];
    TBoolean boDef_gBasketInclinaisonMoveUpAllow;
    TDbVarInf  tInf_gBasketInclinaisonMoveDownAllow;
    TBoolean aboRng_gBasketInclinaisonMoveDownAllow[2];
    TBoolean boDef_gBasketInclinaisonMoveDownAllow;
    TDbVarInf  tInf_gVehiculeDefault;
    TBoolean aboRng_gVehiculeDefault[2];
    TBoolean boDef_gVehiculeDefault;
    TDbVarInf  tInf_gTelescopeOutputPossible;
    TBoolean aboRng_gTelescopeOutputPossible[2];
    TBoolean boDef_gTelescopeOutputPossible;
    TDbVarInf  tInf_gTelescopeWinderFault;
    TBoolean aboRng_gTelescopeWinderFault[2];
    TBoolean boDef_gTelescopeWinderFault;
    TDbVarInf  tInf_gNacellePostSelector;
    TBoolean aboRng_gNacellePostSelector[2];
    TBoolean boDef_gNacellePostSelector;
    TDbVarInf  tInf_gSTOP_On_Off;
    TBoolean aboRng_gSTOP_On_Off[2];
    TBoolean boDef_gSTOP_On_Off;
    TDbVarInf  tInf_gSafeManSystem;
    TBoolean aboRng_gSafeManSystem[2];
    TBoolean boDef_gSafeManSystem;
    TDbVarInf  tInf_gHighSpeedAllow;
    TBoolean aboRng_gHighSpeedAllow[2];
    TBoolean boDef_gHighSpeedAllow;
    TDbVarInf  tInf_gAutomatiqueStop;
    TBoolean aboRng_gAutomatiqueStop[2];
    TBoolean boDef_gAutomatiqueStop;
    TDbVarInf  tInf_gLowSpeedByFault;
    TBoolean aboRng_gLowSpeedByFault[2];
    TBoolean boDef_gLowSpeedByFault;
    TDbVarInf  tInf_gMeasuringMastFault;
    TBoolean aboRng_gMeasuringMastFault[2];
    TBoolean boDef_gMeasuringMastFault;
    TDbVarInf  tInf_gFuel;
    TUint8 au8Rng_gFuel[2];
    TUint8 u8Def_gFuel;
    TDbVarInf  tInf_gBattery_Voltage;
    TUint16 au16Rng_gBattery_Voltage[2];
    TUint16 u16Def_gBattery_Voltage;
    TDbVarInf  tInf_gTrainTransmissionPressure;
    TUint8 au8Rng_gTrainTransmissionPressure[2];
    TUint8 u8Def_gTrainTransmissionPressure;
}TDbSetRamEcuEvision7C1;

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
    TDbVarInf  tInf_ActivePageOpus;
    TUint8 au8Rng_ActivePageOpus[2];
    TUint8 u8Def_ActivePageOpus;
    TDbVarInf  tInf_KeyYesReloadWithGenerator;
    TBoolean aboRng_KeyYesReloadWithGenerator[2];
    TBoolean boDef_KeyYesReloadWithGenerator;
    TDbVarInf  tInf_KeyNoReloadWithGenerator;
    TBoolean aboRng_KeyNoReloadWithGenerator[2];
    TBoolean boDef_KeyNoReloadWithGenerator;
}TDbSetRamEvision4C1;

typedef struct
{
    TDbVarInf  tInf_CalibAngleEndStopLowDeltaArm;
    TBoolean aboRng_CalibAngleEndStopLowDeltaArm[2];
    TBoolean boDef_CalibAngleEndStopLowDeltaArm;
    TDbVarInf  tInf_CalibAngleEndStopHighDeltaArm;
    TBoolean aboRng_CalibAngleEndStopHighDeltaArm[2];
    TBoolean boDef_CalibAngleEndStopHighDeltaArm;
    TDbVarInf  tInf_CalibAngleEndStopLowArrowArm;
    TBoolean aboRng_CalibAngleEndStopLowArrowArm[2];
    TBoolean boDef_CalibAngleEndStopLowArrowArm;
    TDbVarInf  tInf_CalibAngleEndStopHighArrowArm;
    TBoolean aboRng_CalibAngleEndStopHighArrowArm[2];
    TBoolean boDef_CalibAngleEndStopHighArrowArm;
    TDbVarInf  tInf_SavedCalibrationListC1;
    TBoolean aboRng_SavedCalibrationListC1[2];
    TBoolean boDef_SavedCalibrationListC1;
    TDbVarInf  tInf_CalibLenghtEndStopLowTelescope;
    TBoolean aboRng_CalibLenghtEndStopLowTelescope[2];
    TBoolean boDef_CalibLenghtEndStopLowTelescope;
    TDbVarInf  tInf_CalibLenghtEndStopHighTelescope;
    TBoolean aboRng_CalibLenghtEndStopHighTelescope[2];
    TBoolean boDef_CalibLenghtEndStopHighTelescope;
}TDbSetRamEcuCaliCmdC1;

typedef struct
{
    TDbVarInf  tInf_SlopeTelescModeCurveSlopeAngles;
    TUint16 aau16Rng_SlopeTelescModeCurveSlopeAngles[9][2];
    TUint16 au16Def_SlopeTelescModeCurveSlopeAngles[9];
    TDbVarInf  tInf_SlopeTelescModeCurveTelescLenght;
    TUint16 aau16Rng_SlopeTelescModeCurveTelescLenght[9][2];
    TUint16 au16Def_SlopeTelescModeCurveTelescLenght[9];
    TDbVarInf  tInf_TelescopeLimitCriticZoneThresRel;
    TUint16 au16Rng_TelescopeLimitCriticZoneThresRel[2];
    TUint16 u16Def_TelescopeLimitCriticZoneThresRel;
    TDbVarInf  tInf_TelescopeLimitCriticZoneHystRel;
    TInt16 ai16Rng_TelescopeLimitCriticZoneHystRel[2];
    TInt16 i16Def_TelescopeLimitCriticZoneHystRel;
    TDbVarInf  tInf_DeltaArmLimitSlopeHighThresAbs;
    TUint16 au16Rng_DeltaArmLimitSlopeHighThresAbs[2];
    TUint16 u16Def_DeltaArmLimitSlopeHighThresAbs;
    TDbVarInf  tInf_DeltaArmLimitSlopeHighHystRel;
    TInt16 ai16Rng_DeltaArmLimitSlopeHighHystRel[2];
    TInt16 i16Def_DeltaArmLimitSlopeHighHystRel;
    TDbVarInf  tInf_DeltaArmLimitUpperZoneThresAbs;
    TInt16 ai16Rng_DeltaArmLimitUpperZoneThresAbs[2];
    TInt16 i16Def_DeltaArmLimitUpperZoneThresAbs;
    TDbVarInf  tInf_DeltaArmLimitUpperZoneHystRel;
    TInt16 ai16Rng_DeltaArmLimitUpperZoneHystRel[2];
    TInt16 i16Def_DeltaArmLimitUpperZoneHystRel;
    TDbVarInf  tInf_DeltaArmLimitSlowZoneThresRel;
    TInt16 ai16Rng_DeltaArmLimitSlowZoneThresRel[2];
    TInt16 i16Def_DeltaArmLimitSlowZoneThresRel;
    TDbVarInf  tInf_DeltaArmLimitSlowSpeedReduc;
    TUint16 au16Rng_DeltaArmLimitSlowSpeedReduc[2];
    TUint16 u16Def_DeltaArmLimitSlowSpeedReduc;
    TDbVarInf  tInf_DeltaArmLimitCriticZoneThresRel;
    TInt16 ai16Rng_DeltaArmLimitCriticZoneThresRel[2];
    TInt16 i16Def_DeltaArmLimitCriticZoneThresRel;
    TDbVarInf  tInf_DeltaArmLimitCriticZoneHystRel;
    TInt16 ai16Rng_DeltaArmLimitCriticZoneHystRel[2];
    TInt16 i16Def_DeltaArmLimitCriticZoneHystRel;
    TDbVarInf  tInf_ArrowArmLimitLowerZoneThresAbs;
    TInt16 ai16Rng_ArrowArmLimitLowerZoneThresAbs[2];
    TInt16 i16Def_ArrowArmLimitLowerZoneThresAbs;
    TDbVarInf  tInf_ArrowArmLimitLowerZoneHystRel;
    TInt16 ai16Rng_ArrowArmLimitLowerZoneHystRel[2];
    TInt16 i16Def_ArrowArmLimitLowerZoneHystRel;
    TDbVarInf  tInf_ArrowArmLimitSlowZoneThresRel;
    TInt16 ai16Rng_ArrowArmLimitSlowZoneThresRel[2];
    TInt16 i16Def_ArrowArmLimitSlowZoneThresRel;
    TDbVarInf  tInf_ArrowArmLimitSlowSpeedReduc;
    TUint16 au16Rng_ArrowArmLimitSlowSpeedReduc[2];
    TUint16 u16Def_ArrowArmLimitSlowSpeedReduc;
    TDbVarInf  tInf_ArrowArmLimitCriticZoneThresRel;
    TInt16 ai16Rng_ArrowArmLimitCriticZoneThresRel[2];
    TInt16 i16Def_ArrowArmLimitCriticZoneThresRel;
    TDbVarInf  tInf_ArrowArmLimitCriticZoneHystRel;
    TInt16 ai16Rng_ArrowArmLimitCriticZoneHystRel[2];
    TInt16 i16Def_ArrowArmLimitCriticZoneHystRel;
    TDbVarInf  tInf_ArmTelescModeCurveArmAngles;
    TUint16 aau16Rng_ArmTelescModeCurveArmAngles[9][2];
    TUint16 au16Def_ArmTelescModeCurveArmAngles[9];
    TDbVarInf  tInf_ArmTelescModeCurveTelescLenght;
    TUint16 aau16Rng_ArmTelescModeCurveTelescLenght[9][2];
    TUint16 au16Def_ArmTelescModeCurveTelescLenght[9];
    TDbVarInf  tInf_SlopeTelescopeMode;
    TBoolean aboRng_SlopeTelescopeMode[2];
    TBoolean boDef_SlopeTelescopeMode;
    TDbVarInf  tInf_ArrowArmPerformLowUpperSector;
    TUint16 au16Rng_ArrowArmPerformLowUpperSector[2];
    TUint16 u16Def_ArrowArmPerformLowUpperSector;
    TDbVarInf  tInf_ArrowArmPerformSectorUpperCritic;
    TUint16 au16Rng_ArrowArmPerformSectorUpperCritic[2];
    TUint16 u16Def_ArrowArmPerformSectorUpperCritic;
    TDbVarInf  tInf_ArrowArmPerformSectorHyst;
    TUint16 au16Rng_ArrowArmPerformSectorHyst[2];
    TUint16 u16Def_ArrowArmPerformSectorHyst;
}TDbSetNvParamLimitWorkEnvelopeC1;

typedef struct
{
    TDbVarInf  tInf_ReduceSpeedDeltaArmUp;
    TBoolean aboRng_ReduceSpeedDeltaArmUp[2];
    TBoolean boDef_ReduceSpeedDeltaArmUp;
    TDbVarInf  tInf_ReduceSpeedArrowArmDown;
    TBoolean aboRng_ReduceSpeedArrowArmDown[2];
    TBoolean boDef_ReduceSpeedArrowArmDown;
    TDbVarInf  tInf_StopTelescopeOut;
    TBoolean aboRng_StopTelescopeOut[2];
    TBoolean boDef_StopTelescopeOut;
    TDbVarInf  tInf_StopDeltaArmUp;
    TBoolean aboRng_StopDeltaArmUp[2];
    TBoolean boDef_StopDeltaArmUp;
    TDbVarInf  tInf_StopArrowArmDown;
    TBoolean aboRng_StopArrowArmDown[2];
    TBoolean boDef_StopArrowArmDown;
    TDbVarInf  tInf_StopAllMovements;
    TBoolean aboRng_StopAllMovements[2];
    TBoolean boDef_StopAllMovements;
    TDbVarInf  tInf_SelectedSlopeAngle;
    TUint16 au16Rng_SelectedSlopeAngle[2];
    TUint16 u16Def_SelectedSlopeAngle;
    TDbVarInf  tInf_TelescopeLimitStrokeThres;
    TUint16 au16Rng_TelescopeLimitStrokeThres[2];
    TUint16 u16Def_TelescopeLimitStrokeThres;
    TDbVarInf  tInf_TelescopeInCriticalZone;
    TBoolean aboRng_TelescopeInCriticalZone[2];
    TBoolean boDef_TelescopeInCriticalZone;
    TDbVarInf  tInf_SlopeIsHigh;
    TBoolean aboRng_SlopeIsHigh[2];
    TBoolean boDef_SlopeIsHigh;
    TDbVarInf  tInf_DeltaArmInUpperZone;
    TBoolean aboRng_DeltaArmInUpperZone[2];
    TBoolean boDef_DeltaArmInUpperZone;
    TDbVarInf  tInf_DeltaArmInCriticalZone;
    TBoolean aboRng_DeltaArmInCriticalZone[2];
    TBoolean boDef_DeltaArmInCriticalZone;
    TDbVarInf  tInf_ArrowArmInLowerZone;
    TBoolean aboRng_ArrowArmInLowerZone[2];
    TBoolean boDef_ArrowArmInLowerZone;
    TDbVarInf  tInf_ArrowArmInCriticalZone;
    TBoolean aboRng_ArrowArmInCriticalZone[2];
    TBoolean boDef_ArrowArmInCriticalZone;
    TDbVarInf  tInf_EnableSimuMode;
    TBoolean aboRng_EnableSimuMode[2];
    TBoolean boDef_EnableSimuMode;
    TDbVarInf  tInf_SimuSlopeAngleLong;
    TInt16 ai16Rng_SimuSlopeAngleLong[2];
    TInt16 i16Def_SimuSlopeAngleLong;
    TDbVarInf  tInf_SimuSlopeAngleTrans;
    TInt16 ai16Rng_SimuSlopeAngleTrans[2];
    TInt16 i16Def_SimuSlopeAngleTrans;
    TDbVarInf  tInf_SimuTelescopePositionSensor;
    TUint16 au16Rng_SimuTelescopePositionSensor[2];
    TUint16 u16Def_SimuTelescopePositionSensor;
    TDbVarInf  tInf_SimuDeltaArmAngularSensor;
    TInt16 ai16Rng_SimuDeltaArmAngularSensor[2];
    TInt16 i16Def_SimuDeltaArmAngularSensor;
    TDbVarInf  tInf_SimuArrowArmAngularSensor;
    TInt16 ai16Rng_SimuArrowArmAngularSensor[2];
    TInt16 i16Def_SimuArrowArmAngularSensor;
}TDbSetRamLimitWorkEnvelopeC1;

typedef struct
{
    TDbVarInf  tInf_StateHeartBeatTelescopeSensor;
    TUint8 au8Rng_StateHeartBeatTelescopeSensor[2];
    TUint8 u8Def_StateHeartBeatTelescopeSensor;
    TDbVarInf  tInf_LenghtTelescope1;
    TUint16 au16Rng_LenghtTelescope1[2];
    TUint16 u16Def_LenghtTelescope1;
    TDbVarInf  tInf_ErrorRetractorTelescope1;
    TUint8 au8Rng_ErrorRetractorTelescope1[2];
    TUint8 u8Def_ErrorRetractorTelescope1;
    TDbVarInf  tInf_RetractorTelescopeVal1;
    TUint16 au16Rng_RetractorTelescopeVal1[2];
    TUint16 u16Def_RetractorTelescopeVal1;
    TDbVarInf  tInf_LenghtTelescope2;
    TUint16 au16Rng_LenghtTelescope2[2];
    TUint16 u16Def_LenghtTelescope2;
    TDbVarInf  tInf_ErrorRetractorTelescope2;
    TUint8 au8Rng_ErrorRetractorTelescope2[2];
    TUint8 u8Def_ErrorRetractorTelescope2;
    TDbVarInf  tInf_RetractorTelescopeVal2;
    TUint16 au16Rng_RetractorTelescopeVal2[2];
    TUint16 u16Def_RetractorTelescopeVal2;
}TDbSetRamTelescopeCanC1;

typedef struct
{
    TDbVarInf  tInf_ReduceSpeedRotTurretClockwise;
    TBoolean aboRng_ReduceSpeedRotTurretClockwise[2];
    TBoolean boDef_ReduceSpeedRotTurretClockwise;
    TDbVarInf  tInf_StopRotTurretClockwise;
    TBoolean aboRng_StopRotTurretClockwise[2];
    TBoolean boDef_StopRotTurretClockwise;
    TDbVarInf  tInf_ReduceSpeedRotTurretCounterClock;
    TBoolean aboRng_ReduceSpeedRotTurretCounterClock[2];
    TBoolean boDef_ReduceSpeedRotTurretCounterClock;
    TDbVarInf  tInf_StopRotTurretCounterClockwise;
    TBoolean aboRng_StopRotTurretCounterClockwise[2];
    TBoolean boDef_StopRotTurretCounterClockwise;
    TDbVarInf  tInf_ReduceSpeedDeltaArmDown;
    TBoolean aboRng_ReduceSpeedDeltaArmDown[2];
    TBoolean boDef_ReduceSpeedDeltaArmDown;
    TDbVarInf  tInf_FoldedDeltaArm;
    TBoolean aboRng_FoldedDeltaArm[2];
    TBoolean boDef_FoldedDeltaArm;
    TDbVarInf  tInf_ReduceSpeedDeltaArmUp;
    TBoolean aboRng_ReduceSpeedDeltaArmUp[2];
    TBoolean boDef_ReduceSpeedDeltaArmUp;
    TDbVarInf  tInf_TestTurretPosition;
    TInt16 ai16Rng_TestTurretPosition[2];
    TInt16 i16Def_TestTurretPosition;
    TDbVarInf  tInf_TestDeltaArmPosition;
    TInt16 ai16Rng_TestDeltaArmPosition[2];
    TInt16 i16Def_TestDeltaArmPosition;
    TDbVarInf  tInf_FoldedArrowArm;
    TBoolean aboRng_FoldedArrowArm[2];
    TBoolean boDef_FoldedArrowArm;
    TDbVarInf  tInf_ReduceSpeedArrowArmUp;
    TBoolean aboRng_ReduceSpeedArrowArmUp[2];
    TBoolean boDef_ReduceSpeedArrowArmUp;
    TDbVarInf  tInf_ReduceSpeedArrowArmDown;
    TBoolean aboRng_ReduceSpeedArrowArmDown[2];
    TBoolean boDef_ReduceSpeedArrowArmDown;
    TDbVarInf  tInf_ReduceSpeedTelescopFolded;
    TBoolean aboRng_ReduceSpeedTelescopFolded[2];
    TBoolean boDef_ReduceSpeedTelescopFolded;
    TDbVarInf  tInf_ReduceSpeedTelescopeUp;
    TBoolean aboRng_ReduceSpeedTelescopeUp[2];
    TBoolean boDef_ReduceSpeedTelescopeUp;
    TDbVarInf  tInf_ReduceSpeedTelescopeDown;
    TBoolean aboRng_ReduceSpeedTelescopeDown[2];
    TBoolean boDef_ReduceSpeedTelescopeDown;
    TDbVarInf  tInf_PerformFoldedTelescopeStop;
    TBoolean aboRng_PerformFoldedTelescopeStop[2];
    TBoolean boDef_PerformFoldedTelescopeStop;
    TDbVarInf  tInf_PerformAutoriseTransSlopeArrow;
    TBoolean aboRng_PerformAutoriseTransSlopeArrow[2];
    TBoolean boDef_PerformAutoriseTransSlopeArrow;
    TDbVarInf  tInf_ValidSectorTelescope;
    TBoolean aboRng_ValidSectorTelescope[2];
    TBoolean boDef_ValidSectorTelescope;
    TDbVarInf  tInf_ValidFirstSectorTelescope;
    TBoolean aboRng_ValidFirstSectorTelescope[2];
    TBoolean boDef_ValidFirstSectorTelescope;
}TDbSetRamMvtEndStopC1;

typedef struct
{
    TDbVarInf  tInf_TurretNegEndStopThres;
    TInt16 ai16Rng_TurretNegEndStopThres[2];
    TInt16 i16Def_TurretNegEndStopThres;
    TDbVarInf  tInf_TurretNegEndStopHyst;
    TInt16 ai16Rng_TurretNegEndStopHyst[2];
    TInt16 i16Def_TurretNegEndStopHyst;
    TDbVarInf  tInf_TurretNegEndStopSlowThres;
    TInt16 ai16Rng_TurretNegEndStopSlowThres[2];
    TInt16 i16Def_TurretNegEndStopSlowThres;
    TDbVarInf  tInf_TurretPosEndStopThres;
    TInt16 ai16Rng_TurretPosEndStopThres[2];
    TInt16 i16Def_TurretPosEndStopThres;
    TDbVarInf  tInf_TurretPosEndStopHyst;
    TInt16 ai16Rng_TurretPosEndStopHyst[2];
    TInt16 i16Def_TurretPosEndStopHyst;
    TDbVarInf  tInf_TurretPosEndStopSlowThres;
    TInt16 ai16Rng_TurretPosEndStopSlowThres[2];
    TInt16 i16Def_TurretPosEndStopSlowThres;
    TDbVarInf  tInf_FoldedDeltaArmThres;
    TInt16 ai16Rng_FoldedDeltaArmThres[2];
    TInt16 i16Def_FoldedDeltaArmThres;
    TDbVarInf  tInf_FoldedDeltaArmHyst;
    TInt16 ai16Rng_FoldedDeltaArmHyst[2];
    TInt16 i16Def_FoldedDeltaArmHyst;
    TDbVarInf  tInf_DeltaArmBottomEndStopSlowThres;
    TInt16 ai16Rng_DeltaArmBottomEndStopSlowThres[2];
    TInt16 i16Def_DeltaArmBottomEndStopSlowThres;
    TDbVarInf  tInf_DeltaArmTopEndStopThres;
    TInt16 ai16Rng_DeltaArmTopEndStopThres[2];
    TInt16 i16Def_DeltaArmTopEndStopThres;
    TDbVarInf  tInf_DeltaArmTopEndStopHyst;
    TInt16 ai16Rng_DeltaArmTopEndStopHyst[2];
    TInt16 i16Def_DeltaArmTopEndStopHyst;
    TDbVarInf  tInf_DeltaArmTopEndStopSlowThres;
    TInt16 ai16Rng_DeltaArmTopEndStopSlowThres[2];
    TInt16 i16Def_DeltaArmTopEndStopSlowThres;
    TDbVarInf  tInf_FoldedArrowArmThres;
    TInt16 ai16Rng_FoldedArrowArmThres[2];
    TInt16 i16Def_FoldedArrowArmThres;
    TDbVarInf  tInf_FoldedArrowArmHyst;
    TInt16 ai16Rng_FoldedArrowArmHyst[2];
    TInt16 i16Def_FoldedArrowArmHyst;
    TDbVarInf  tInf_DeltaArmSlowMvtEndStop;
    TUint16 au16Rng_DeltaArmSlowMvtEndStop[2];
    TUint16 u16Def_DeltaArmSlowMvtEndStop;
    TDbVarInf  tInf_ArrowArmTopEndStopSlowThres;
    TInt16 ai16Rng_ArrowArmTopEndStopSlowThres[2];
    TInt16 i16Def_ArrowArmTopEndStopSlowThres;
    TDbVarInf  tInf_ArrowArmBottomEndStopSlowThres;
    TInt16 ai16Rng_ArrowArmBottomEndStopSlowThres[2];
    TInt16 i16Def_ArrowArmBottomEndStopSlowThres;
    TDbVarInf  tInf_ArrowArmTopEndStopThres;
    TInt16 ai16Rng_ArrowArmTopEndStopThres[2];
    TInt16 i16Def_ArrowArmTopEndStopThres;
    TDbVarInf  tInf_ArrowArmSlowMvtDownEndStop;
    TUint16 au16Rng_ArrowArmSlowMvtDownEndStop[2];
    TUint16 u16Def_ArrowArmSlowMvtDownEndStop;
    TDbVarInf  tInf_ArrowArmSlowMvtUpEndStop;
    TUint16 au16Rng_ArrowArmSlowMvtUpEndStop[2];
    TUint16 u16Def_ArrowArmSlowMvtUpEndStop;
    TDbVarInf  tInf_TelescopSlowMvtFoldedEndStop;
    TUint16 au16Rng_TelescopSlowMvtFoldedEndStop[2];
    TUint16 u16Def_TelescopSlowMvtFoldedEndStop;
    TDbVarInf  tInf_TelescopePerfOutLimit;
    TUint16 au16Rng_TelescopePerfOutLimit[2];
    TUint16 u16Def_TelescopePerfOutLimit;
    TDbVarInf  tInf_TelescopePerfOutLimitHyst;
    TUint16 au16Rng_TelescopePerfOutLimitHyst[2];
    TUint16 u16Def_TelescopePerfOutLimitHyst;
    TDbVarInf  tInf_TelescopePerfOutLimitSlowThres;
    TUint16 au16Rng_TelescopePerfOutLimitSlowThres[2];
    TUint16 u16Def_TelescopePerfOutLimitSlowThres;
}TDbSetNvParamMvtEndStopC1;

typedef struct
{
    TDbVarInf  tInf_TurretRearCenterPos;
    TInt16 ai16Rng_TurretRearCenterPos[2];
    TInt16 i16Def_TurretRearCenterPos;
    TDbVarInf  tInf_TurretFrontPositiveCenterPos;
    TInt16 ai16Rng_TurretFrontPositiveCenterPos[2];
    TInt16 i16Def_TurretFrontPositiveCenterPos;
    TDbVarInf  tInf_TurretFrontNegativeCenterPos;
    TInt16 ai16Rng_TurretFrontNegativeCenterPos[2];
    TInt16 i16Def_TurretFrontNegativeCenterPos;
    TDbVarInf  tInf_TurretCenterZoneWindow;
    TInt16 ai16Rng_TurretCenterZoneWindow[2];
    TInt16 i16Def_TurretCenterZoneWindow;
    TDbVarInf  tInf_TurretCenterZoneWindowHyst;
    TInt16 ai16Rng_TurretCenterZoneWindowHyst[2];
    TInt16 i16Def_TurretCenterZoneWindowHyst;
    TDbVarInf  tInf_TurretCenterZoneSlowThres;
    TInt16 ai16Rng_TurretCenterZoneSlowThres[2];
    TInt16 i16Def_TurretCenterZoneSlowThres;
    TDbVarInf  tInf_TurretCenterZoneWindowLeft;
    TInt16 ai16Rng_TurretCenterZoneWindowLeft[2];
    TInt16 i16Def_TurretCenterZoneWindowLeft;
    TDbVarInf  tInf_TurretCenterZoneWindowRight;
    TInt16 ai16Rng_TurretCenterZoneWindowRight[2];
    TInt16 i16Def_TurretCenterZoneWindowRight;
}TDbSetNvParamAutoStopC1;

typedef struct
{
    TDbVarInf  tInf_StopBasketRotation;
    TBoolean aboRng_StopBasketRotation[2];
    TBoolean boDef_StopBasketRotation;
    TDbVarInf  tInf_StopTurretRotation;
    TBoolean aboRng_StopTurretRotation[2];
    TBoolean boDef_StopTurretRotation;
    TDbVarInf  tInf_ReduceSpeedRotTurretClockwise;
    TBoolean aboRng_ReduceSpeedRotTurretClockwise[2];
    TBoolean boDef_ReduceSpeedRotTurretClockwise;
    TDbVarInf  tInf_ReduceSpeedRotTurretCounterClock;
    TBoolean aboRng_ReduceSpeedRotTurretCounterClock[2];
    TBoolean boDef_ReduceSpeedRotTurretCounterClock;
    TDbVarInf  tInf_TurrentInCenterPos;
    TBoolean aboRng_TurrentInCenterPos[2];
    TBoolean boDef_TurrentInCenterPos;
    TDbVarInf  tInf_EnableSimuMode;
    TBoolean aboRng_EnableSimuMode[2];
    TBoolean boDef_EnableSimuMode;
    TDbVarInf  tInf_TestBasketLeftSideSensor;
    TBoolean aboRng_TestBasketLeftSideSensor[2];
    TBoolean boDef_TestBasketLeftSideSensor;
    TDbVarInf  tInf_TestBasketRightSideSensor;
    TBoolean aboRng_TestBasketRightSideSensor[2];
    TBoolean boDef_TestBasketRightSideSensor;
    TDbVarInf  tInf_TestBasketRotCmdEnabled;
    TBoolean aboRng_TestBasketRotCmdEnabled[2];
    TBoolean boDef_TestBasketRotCmdEnabled;
    TDbVarInf  tInf_TestTurretAngularPosition;
    TInt16 ai16Rng_TestTurretAngularPosition[2];
    TInt16 i16Def_TestTurretAngularPosition;
    TDbVarInf  tInf_TestTurretRotCmdEnabled;
    TBoolean aboRng_TestTurretRotCmdEnabled[2];
    TBoolean boDef_TestTurretRotCmdEnabled;
    TDbVarInf  tInf_TurretInRearCenterPos;
    TBoolean aboRng_TurretInRearCenterPos[2];
    TBoolean boDef_TurretInRearCenterPos;
    TDbVarInf  tInf_TurretInFrontPositiveCenterPos;
    TBoolean aboRng_TurretInFrontPositiveCenterPos[2];
    TBoolean boDef_TurretInFrontPositiveCenterPos;
    TDbVarInf  tInf_TurretInFrontNegativeCenterPos;
    TBoolean aboRng_TurretInFrontNegativeCenterPos[2];
    TBoolean boDef_TurretInFrontNegativeCenterPos;
    TDbVarInf  tInf_BasketInCentrerPos;
    TBoolean aboRng_BasketInCentrerPos[2];
    TBoolean boDef_BasketInCentrerPos;
    TDbVarInf  tInf_TurretRotationCmdEnabled;
    TBoolean aboRng_TurretRotationCmdEnabled[2];
    TBoolean boDef_TurretRotationCmdEnabled;
    TDbVarInf  tInf_CounterStopTurretRotationDebug;
    TUint8 au8Rng_CounterStopTurretRotationDebug[2];
    TUint8 u8Def_CounterStopTurretRotationDebug;
    TDbVarInf  tInf_CounterNoStopTurretRotationDebug;
    TUint8 au8Rng_CounterNoStopTurretRotationDebug[2];
    TUint8 u8Def_CounterNoStopTurretRotationDebug;
}TDbSetRamAutoStopC1;

typedef struct
{
    TDbVarInf  tInf_Fonction_Active;
    TBoolean aboRng_Fonction_Active[2];
    TBoolean boDef_Fonction_Active;
    TDbVarInf  tInf_Commande_Neutre;
    TBoolean aboRng_Commande_Neutre[2];
    TBoolean boDef_Commande_Neutre;
    TDbVarInf  tInf_Authorize_Driving;
    TBoolean aboRng_Authorize_Driving[2];
    TBoolean boDef_Authorize_Driving;
    TDbVarInf  tInf_Folded_Position_Mast;
    TBoolean aboRng_Folded_Position_Mast[2];
    TBoolean boDef_Folded_Position_Mast;
    TDbVarInf  tInf_Stop_Movement_By_Mast;
    TBoolean aboRng_Stop_Movement_By_Mast[2];
    TBoolean boDef_Stop_Movement_By_Mast;
    TDbVarInf  tInf_RazDistanceTraveledButton;
    TBoolean aboRng_RazDistanceTraveledButton[2];
    TBoolean boDef_RazDistanceTraveledButton;
    TDbVarInf  tInf_DistanceTraveledMm;
    TInt32 ai32Rng_DistanceTraveledMm[2];
    TInt32 i32Def_DistanceTraveledMm;
    TDbVarInf  tInf_DeltaMinMaxEncodeurValue;
    TUint32 au32Rng_DeltaMinMaxEncodeurValue[2];
    TUint32 u32Def_DeltaMinMaxEncodeurValue;
    TDbVarInf  tInf_EncodeurMastCentimeterOffset;
    TUint16 au16Rng_EncodeurMastCentimeterOffset[2];
    TUint16 u16Def_EncodeurMastCentimeterOffset;
    TDbVarInf  tInf_EncodeurMastMeasureCentimeter;
    TUint16 au16Rng_EncodeurMastMeasureCentimeter[2];
    TUint16 u16Def_EncodeurMastMeasureCentimeter;
    TDbVarInf  tInf_NoMovementIsDuringAndNeutralCmd;
    TBoolean aboRng_NoMovementIsDuringAndNeutralCmd[2];
    TBoolean boDef_NoMovementIsDuringAndNeutralCmd;
    TDbVarInf  tInf_ScalingJoyMatTelescope;
    TInt16 ai16Rng_ScalingJoyMatTelescope[2];
    TInt16 i16Def_ScalingJoyMatTelescope;
    TDbVarInf  tInf_TimeWithMastNotFolded;
    TUint32 au32Rng_TimeWithMastNotFolded[2];
    TUint32 u32Def_TimeWithMastNotFolded;
    TDbVarInf  tInf_DownAxleOscillantForMast;
    TBoolean aboRng_DownAxleOscillantForMast[2];
    TBoolean boDef_DownAxleOscillantForMast;
    TDbVarInf  tInf_VisibleDistanceTraveledMat;
    TBoolean aboRng_VisibleDistanceTraveledMat[2];
    TBoolean boDef_VisibleDistanceTraveledMat;
    TDbVarInf  tInf_MastInUpperPosition;
    TBoolean aboRng_MastInUpperPosition[2];
    TBoolean boDef_MastInUpperPosition;
    TDbVarInf  tInf_MastPanthoInFoldedPosition;
    TBoolean aboRng_MastPanthoInFoldedPosition[2];
    TBoolean boDef_MastPanthoInFoldedPosition;
    TDbVarInf  tInf_ValveInDownPosition;
    TBoolean aboRng_ValveInDownPosition[2];
    TBoolean boDef_ValveInDownPosition;
    TDbVarInf  tInf_PostInterdictionMastSNCF;
    TBoolean aboRng_PostInterdictionMastSNCF[2];
    TBoolean boDef_PostInterdictionMastSNCF;
    TDbVarInf  tInf_MemoFirstValidCycleMast;
    TBoolean aboRng_MemoFirstValidCycleMast[2];
    TBoolean boDef_MemoFirstValidCycleMast;
    TDbVarInf  tInf_ContactMastAutorisationOfMvts;
    TBoolean aboRng_ContactMastAutorisationOfMvts[2];
    TBoolean boDef_ContactMastAutorisationOfMvts;
    TDbVarInf  tInf_InterdictionOfNacelleTurretPost;
    TBoolean aboRng_InterdictionOfNacelleTurretPost[2];
    TBoolean boDef_InterdictionOfNacelleTurretPost;
    TDbVarInf  tInf_PictoWarningFirstValidCycleMast;
    TBoolean aboRng_PictoWarningFirstValidCycleMast[2];
    TBoolean boDef_PictoWarningFirstValidCycleMast;
}TDbSetRamMastMeasureC1;

typedef struct
{
    TDbVarInf  tInf_Offset_Mast_Centimeter;
    TInt16 ai16Rng_Offset_Mast_Centimeter[2];
    TInt16 i16Def_Offset_Mast_Centimeter;
    TDbVarInf  tInf_FoldedMastThres;
    TInt16 ai16Rng_FoldedMastThres[2];
    TInt16 i16Def_FoldedMastThres;
    TDbVarInf  tInf_FoldedMastHyst;
    TInt16 ai16Rng_FoldedMastHyst[2];
    TInt16 i16Def_FoldedMastHyst;
    TDbVarInf  tInf_MinValueEncodeurMast;
    TUint32 au32Rng_MinValueEncodeurMast[2];
    TUint32 u32Def_MinValueEncodeurMast;
    TDbVarInf  tInf_MaxValueEncodeurMast;
    TUint32 au32Rng_MaxValueEncodeurMast[2];
    TUint32 u32Def_MaxValueEncodeurMast;
    TDbVarInf  tInf_MinCentimeterEncodeurMast;
    TUint16 au16Rng_MinCentimeterEncodeurMast[2];
    TUint16 u16Def_MinCentimeterEncodeurMast;
    TDbVarInf  tInf_MaxCentimeterEncodeurMast;
    TUint16 au16Rng_MaxCentimeterEncodeurMast[2];
    TUint16 u16Def_MaxCentimeterEncodeurMast;
    TDbVarInf  tInf_MastDisplayRefreshCycleTime;
    TUint32 au32Rng_MastDisplayRefreshCycleTime[2];
    TUint32 u32Def_MastDisplayRefreshCycleTime;
}TDbSetNvParamMastC1;

typedef struct
{
    TDbVarInf  tInf_gActivateMeasuringMast;
    TBoolean aboRng_gActivateMeasuringMast[2];
    TBoolean boDef_gActivateMeasuringMast;
    TDbVarInf  tInf_gButtonCalibMinMastMeasure;
    TBoolean aboRng_gButtonCalibMinMastMeasure[2];
    TBoolean boDef_gButtonCalibMinMastMeasure;
    TDbVarInf  tInf_gButtonCalibMaxMastMeasure;
    TBoolean aboRng_gButtonCalibMaxMastMeasure[2];
    TBoolean boDef_gButtonCalibMaxMastMeasure;
    TDbVarInf  tInf_SavePosEncodeurMastMeasureButton;
    TBoolean aboRng_SavePosEncodeurMastMeasureButton[2];
    TBoolean boDef_SavePosEncodeurMastMeasureButton;
    TDbVarInf  tInf_RazDistanceTraveledMastMeasure;
    TBoolean aboRng_RazDistanceTraveledMastMeasure[2];
    TBoolean boDef_RazDistanceTraveledMastMeasure;
    TDbVarInf  tInf_gSerialNumber;
    TBoolean aboRng_gSerialNumber[2];
    TBoolean boDef_gSerialNumber;
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
}TDbSetRamEvision7C1;

typedef struct
{
    TDbVarInf  tInf_BypassPressureThres;
    TInt16 ai16Rng_BypassPressureThres[2];
    TInt16 i16Def_BypassPressureThres;
    TDbVarInf  tInf_TelescopeInToleranceInductive;
    TInt16 ai16Rng_TelescopeInToleranceInductive[2];
    TInt16 i16Def_TelescopeInToleranceInductive;
    TDbVarInf  tInf_TelescopeToleranceNoMovement;
    TInt16 ai16Rng_TelescopeToleranceNoMovement[2];
    TInt16 i16Def_TelescopeToleranceNoMovement;
    TDbVarInf  tInf_TelescopeToleranceChannels;
    TInt16 ai16Rng_TelescopeToleranceChannels[2];
    TInt16 i16Def_TelescopeToleranceChannels;
    TDbVarInf  tInf_AlternatorRegimeMaxThres;
    TInt32 ai32Rng_AlternatorRegimeMaxThres[2];
    TInt32 i32Def_AlternatorRegimeMaxThres;
    TDbVarInf  tInf_BatteryVoltageMinThres;
    TUint16 au16Rng_BatteryVoltageMinThres[2];
    TUint16 u16Def_BatteryVoltageMinThres;
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
    TDbVarInf  tInf_TimeBypassFault;
    TUint16 au16Rng_TimeBypassFault[2];
    TUint16 u16Def_TimeBypassFault;
    TDbVarInf  tInf_cptTimeTestBypassMax;
    TUint16 au16Rng_cptTimeTestBypassMax[2];
    TUint16 u16Def_cptTimeTestBypassMax;
}TDbSetNvParamAlarmC1;

typedef struct
{
    TDbVarInf  tInf_Dm_Swi_Dbl_NcNo_Inc_FrameRot;
    TBoolean aboRng_Dm_Swi_Dbl_NcNo_Inc_FrameRot[2];
    TBoolean boDef_Dm_Swi_Dbl_NcNo_Inc_FrameRot;
    TDbVarInf  tInf_Dm_Turret_Sensor_Fault;
    TBoolean aboRng_Dm_Turret_Sensor_Fault[2];
    TBoolean boDef_Dm_Turret_Sensor_Fault;
    TDbVarInf  tInf_EvParkBrakeAxleOscillantFault;
    TBoolean aboRng_EvParkBrakeAxleOscillantFault[2];
    TBoolean boDef_EvParkBrakeAxleOscillantFault;
    TDbVarInf  tInf_EvParkBrakeAxleFixeFault;
    TBoolean aboRng_EvParkBrakeAxleFixeFault[2];
    TBoolean boDef_EvParkBrakeAxleFixeFault;
    TDbVarInf  tInf_EvServiceBrakeAxleOscillantFault;
    TBoolean aboRng_EvServiceBrakeAxleOscillantFault[2];
    TBoolean boDef_EvServiceBrakeAxleOscillantFault;
    TDbVarInf  tInf_EvServiceBrakeAxleFixeFault;
    TBoolean aboRng_EvServiceBrakeAxleFixeFault[2];
    TBoolean boDef_EvServiceBrakeAxleFixeFault;
    TDbVarInf  tInf_EvServiceBrakeTrackFault;
    TBoolean aboRng_EvServiceBrakeTrackFault[2];
    TBoolean boDef_EvServiceBrakeTrackFault;
    TDbVarInf  tInf_Rm_Com_Can_Radio_Loss;
    TBoolean aboRng_Rm_Com_Can_Radio_Loss[2];
    TBoolean boDef_Rm_Com_Can_Radio_Loss;
    TDbVarInf  tInf_Ev2ndParkBrakeAxleFixeFault;
    TBoolean aboRng_Ev2ndParkBrakeAxleFixeFault[2];
    TBoolean boDef_Ev2ndParkBrakeAxleFixeFault;
    TDbVarInf  tInf_Ev2ndParkBrakeAxleOsciFault;
    TBoolean aboRng_Ev2ndParkBrakeAxleOsciFault[2];
    TBoolean boDef_Ev2ndParkBrakeAxleOsciFault;
}TDbSetRamEcuC1RcvFailluresFromC0;

typedef struct
{
    TDbVarInf  tInf_StopAggravantMovements;
    TBoolean aboRng_StopAggravantMovements[2];
    TBoolean boDef_StopAggravantMovements;
    TDbVarInf  tInf_TurretPostorRadoPostOn;
    TBoolean aboRng_TurretPostorRadoPostOn[2];
    TBoolean boDef_TurretPostorRadoPostOn;
    TDbVarInf  tInf_MotorAccelerated;
    TBoolean aboRng_MotorAccelerated[2];
    TBoolean boDef_MotorAccelerated;
    TDbVarInf  tInf_RadioPostSelectorOn;
    TBoolean aboRng_RadioPostSelectorOn[2];
    TBoolean boDef_RadioPostSelectorOn;
    TDbVarInf  tInf_SlopeHighWithWorkOnCrawler;
    TBoolean aboRng_SlopeHighWithWorkOnCrawler[2];
    TBoolean boDef_SlopeHighWithWorkOnCrawler;
    TDbVarInf  tInf_ErrorActiveOnC0;
    TBoolean aboRng_ErrorActiveOnC0[2];
    TBoolean boDef_ErrorActiveOnC0;
    TDbVarInf  tInf_RailWorkMultiLaneMode;
    TBoolean aboRng_RailWorkMultiLaneMode[2];
    TBoolean boDef_RailWorkMultiLaneMode;
    TDbVarInf  tInf_TestFrance;
    TBoolean aboRng_TestFrance[2];
    TBoolean boDef_TestFrance;
    TDbVarInf  tInf_WhiteLightAV15746Command;
    TBoolean aboRng_WhiteLightAV15746Command[2];
    TBoolean boDef_WhiteLightAV15746Command;
    TDbVarInf  tInf_WhiteLightAr15746Command;
    TBoolean aboRng_WhiteLightAr15746Command[2];
    TBoolean boDef_WhiteLightAr15746Command;
    TDbVarInf  tInf_Signal_9;
    TInt16 ai16Rng_Signal_9[2];
    TInt16 i16Def_Signal_9;
    TDbVarInf  tInf_Signal_10;
    TInt16 ai16Rng_Signal_10[2];
    TInt16 i16Def_Signal_10;
    TDbVarInf  tInf_Signal_11;
    TInt16 ai16Rng_Signal_11[2];
    TInt16 i16Def_Signal_11;
    TDbVarInf  tInf_AddPerformanceFunc;
    TBoolean aboRng_AddPerformanceFunc[2];
    TBoolean boDef_AddPerformanceFunc;
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
    TDbVarInf  tInf_TurretInSpeedZone2DegForBasket;
    TBoolean aboRng_TurretInSpeedZone2DegForBasket[2];
    TBoolean boDef_TurretInSpeedZone2DegForBasket;
    TDbVarInf  tInf_SelectedControlPost;
    EDiState aeRng_SelectedControlPost[2];
    EDiState eDef_SelectedControlPost;
    TDbVarInf  tInf_UpMastSensorNC;
    TBoolean aboRng_UpMastSensorNC[2];
    TBoolean boDef_UpMastSensorNC;
    TDbVarInf  tInf_ValveInDownPositionSensor;
    TBoolean aboRng_ValveInDownPositionSensor[2];
    TBoolean boDef_ValveInDownPositionSensor;
    TDbVarInf  tInf_MeasuringMastSensorFolded;
    TBoolean aboRng_MeasuringMastSensorFolded[2];
    TBoolean boDef_MeasuringMastSensorFolded;
    TDbVarInf  tInf_PresenceSensorPlate;
    TBoolean aboRng_PresenceSensorPlate[2];
    TBoolean boDef_PresenceSensorPlate;
    TDbVarInf  tInf_RecoveryReductionRatio;
    TUint8 au8Rng_RecoveryReductionRatio[2];
    TUint8 u8Def_RecoveryReductionRatio;
}TDbSetRamData4C1RcvFromC0;

typedef struct
{
    TDbVarInf  tInf_RamGeneralNeotecC1_1;
    TBoolean aboRng_RamGeneralNeotecC1_1[2];
    TBoolean boDef_RamGeneralNeotecC1_1;
    TDbVarInf  tInf_RamGeneralNeotecC1_1_1;
    TBoolean aboRng_RamGeneralNeotecC1_1_1[2];
    TBoolean boDef_RamGeneralNeotecC1_1_1;
    TDbVarInf  tInf_RamGeneralNeotecC1_1_2;
    TBoolean aboRng_RamGeneralNeotecC1_1_2[2];
    TBoolean boDef_RamGeneralNeotecC1_1_2;
    TDbVarInf  tInf_RamGeneralNeotecC1_1_3;
    TBoolean aboRng_RamGeneralNeotecC1_1_3[2];
    TBoolean boDef_RamGeneralNeotecC1_1_3;
    TDbVarInf  tInf_RamGeneralNeotecC1_1_4;
    TBoolean aboRng_RamGeneralNeotecC1_1_4[2];
    TBoolean boDef_RamGeneralNeotecC1_1_4;
    TDbVarInf  tInf_RamGeneralNeotecC1_1_5;
    TBoolean aboRng_RamGeneralNeotecC1_1_5[2];
    TBoolean boDef_RamGeneralNeotecC1_1_5;
    TDbVarInf  tInf_RamGeneralNeotecC1_1_6;
    TBoolean aboRng_RamGeneralNeotecC1_1_6[2];
    TBoolean boDef_RamGeneralNeotecC1_1_6;
    TDbVarInf  tInf_RamGeneralNeotecC1_1_7;
    TBoolean aboRng_RamGeneralNeotecC1_1_7[2];
    TBoolean boDef_RamGeneralNeotecC1_1_7;
    TDbVarInf  tInf_RamGeneralNeotecC1_1_8;
    TBoolean aboRng_RamGeneralNeotecC1_1_8[2];
    TBoolean boDef_RamGeneralNeotecC1_1_8;
    TDbVarInf  tInf_RamGeneralNeotecC1_1_9;
    TBoolean aboRng_RamGeneralNeotecC1_1_9[2];
    TBoolean boDef_RamGeneralNeotecC1_1_9;
    TDbVarInf  tInf_RamGeneralNeotecC1_1_10;
    TBoolean aboRng_RamGeneralNeotecC1_1_10[2];
    TBoolean boDef_RamGeneralNeotecC1_1_10;
    TDbVarInf  tInf_RamGeneralNeotecC1_1_11;
    TBoolean aboRng_RamGeneralNeotecC1_1_11[2];
    TBoolean boDef_RamGeneralNeotecC1_1_11;
    TDbVarInf  tInf_RamGeneralNeotecC1_1_12;
    TBoolean aboRng_RamGeneralNeotecC1_1_12[2];
    TBoolean boDef_RamGeneralNeotecC1_1_12;
    TDbVarInf  tInf_RamGeneralNeotecC1_1_13;
    TBoolean aboRng_RamGeneralNeotecC1_1_13[2];
    TBoolean boDef_RamGeneralNeotecC1_1_13;
    TDbVarInf  tInf_RamGeneralNeotecC1_1_14;
    TBoolean aboRng_RamGeneralNeotecC1_1_14[2];
    TBoolean boDef_RamGeneralNeotecC1_1_14;
    TDbVarInf  tInf_RamGeneralNeotecC1_1_15;
    TBoolean aboRng_RamGeneralNeotecC1_1_15[2];
    TBoolean boDef_RamGeneralNeotecC1_1_15;
    TDbVarInf  tInf_RamGeneralNeotecC1_2;
    TUint8 au8Rng_RamGeneralNeotecC1_2[2];
    TUint8 u8Def_RamGeneralNeotecC1_2;
    TDbVarInf  tInf_RamGeneralNeotecC1_2_1;
    TUint8 au8Rng_RamGeneralNeotecC1_2_1[2];
    TUint8 u8Def_RamGeneralNeotecC1_2_1;
    TDbVarInf  tInf_RamGeneralNeotecC1_2_2;
    TUint8 au8Rng_RamGeneralNeotecC1_2_2[2];
    TUint8 u8Def_RamGeneralNeotecC1_2_2;
    TDbVarInf  tInf_RamGeneralNeotecC1_2_3;
    TUint8 au8Rng_RamGeneralNeotecC1_2_3[2];
    TUint8 u8Def_RamGeneralNeotecC1_2_3;
    TDbVarInf  tInf_RamGeneralNeotecC1_2_4;
    TUint8 au8Rng_RamGeneralNeotecC1_2_4[2];
    TUint8 u8Def_RamGeneralNeotecC1_2_4;
    TDbVarInf  tInf_RamGeneralNeotecC1_2_5;
    TUint8 au8Rng_RamGeneralNeotecC1_2_5[2];
    TUint8 u8Def_RamGeneralNeotecC1_2_5;
    TDbVarInf  tInf_RamGeneralNeotecC1_3;
    TUint16 au16Rng_RamGeneralNeotecC1_3[2];
    TUint16 u16Def_RamGeneralNeotecC1_3;
    TDbVarInf  tInf_RamGeneralNeotecC1_3_1;
    TUint16 au16Rng_RamGeneralNeotecC1_3_1[2];
    TUint16 u16Def_RamGeneralNeotecC1_3_1;
    TDbVarInf  tInf_RamGeneralNeotecC1_3_2;
    TUint16 au16Rng_RamGeneralNeotecC1_3_2[2];
    TUint16 u16Def_RamGeneralNeotecC1_3_2;
    TDbVarInf  tInf_RamGeneralNeotecC1_3_3;
    TUint16 au16Rng_RamGeneralNeotecC1_3_3[2];
    TUint16 u16Def_RamGeneralNeotecC1_3_3;
    TDbVarInf  tInf_RamGeneralNeotecC1_3_4;
    TUint16 au16Rng_RamGeneralNeotecC1_3_4[2];
    TUint16 u16Def_RamGeneralNeotecC1_3_4;
    TDbVarInf  tInf_RamGeneralNeotecC1_3_5;
    TUint16 au16Rng_RamGeneralNeotecC1_3_5[2];
    TUint16 u16Def_RamGeneralNeotecC1_3_5;
    TDbVarInf  tInf_RamGeneralNeotecC1_3_6;
    TUint16 au16Rng_RamGeneralNeotecC1_3_6[2];
    TUint16 u16Def_RamGeneralNeotecC1_3_6;
    TDbVarInf  tInf_RamGeneralNeotecC1_3_7;
    TUint16 au16Rng_RamGeneralNeotecC1_3_7[2];
    TUint16 u16Def_RamGeneralNeotecC1_3_7;
    TDbVarInf  tInf_RamGeneralNeotecC1_3_8;
    TUint16 au16Rng_RamGeneralNeotecC1_3_8[2];
    TUint16 u16Def_RamGeneralNeotecC1_3_8;
    TDbVarInf  tInf_RamGeneralNeotecC1_4;
    TInt16 ai16Rng_RamGeneralNeotecC1_4[2];
    TInt16 i16Def_RamGeneralNeotecC1_4;
    TDbVarInf  tInf_RamGeneralNeotecC1_4_1;
    TInt16 ai16Rng_RamGeneralNeotecC1_4_1[2];
    TInt16 i16Def_RamGeneralNeotecC1_4_1;
    TDbVarInf  tInf_RamGeneralNeotecC1_4_2;
    TInt16 ai16Rng_RamGeneralNeotecC1_4_2[2];
    TInt16 i16Def_RamGeneralNeotecC1_4_2;
    TDbVarInf  tInf_RamGeneralNeotecC1_4_3;
    TInt16 ai16Rng_RamGeneralNeotecC1_4_3[2];
    TInt16 i16Def_RamGeneralNeotecC1_4_3;
    TDbVarInf  tInf_RamGeneralNeotecC1_4_4;
    TInt16 ai16Rng_RamGeneralNeotecC1_4_4[2];
    TInt16 i16Def_RamGeneralNeotecC1_4_4;
    TDbVarInf  tInf_RamGeneralNeotecC1_4_5;
    TInt16 ai16Rng_RamGeneralNeotecC1_4_5[2];
    TInt16 i16Def_RamGeneralNeotecC1_4_5;
    TDbVarInf  tInf_RamGeneralNeotecC1_4_6;
    TInt16 ai16Rng_RamGeneralNeotecC1_4_6[2];
    TInt16 i16Def_RamGeneralNeotecC1_4_6;
    TDbVarInf  tInf_RamGeneralNeotecC1_4_7;
    TInt16 ai16Rng_RamGeneralNeotecC1_4_7[2];
    TInt16 i16Def_RamGeneralNeotecC1_4_7;
    TDbVarInf  tInf_RamGeneralNeotecC1_4_8;
    TInt16 ai16Rng_RamGeneralNeotecC1_4_8[2];
    TInt16 i16Def_RamGeneralNeotecC1_4_8;
    TDbVarInf  tInf_WaterTempJ1939;
    TInt16 ai16Rng_WaterTempJ1939[2];
    TInt16 i16Def_WaterTempJ1939;
    TDbVarInf  tInf_OilPressureJ1939;
    TUint16 au16Rng_OilPressureJ1939[2];
    TUint16 u16Def_OilPressureJ1939;
    TDbVarInf  tInf_MotorSpeedJ1939;
    TUint16 au16Rng_MotorSpeedJ1939[2];
    TUint16 u16Def_MotorSpeedJ1939;
    TDbVarInf  tInf_AlternatorCurentJ1939;
    TInt32 ai32Rng_AlternatorCurentJ1939[2];
    TInt32 i32Def_AlternatorCurentJ1939;
    TDbVarInf  tInf_MotorStateJ1939;
    EMotorState aeRng_MotorStateJ1939[2];
    EMotorState eDef_MotorStateJ1939;
    TDbVarInf  tInf_PowerBatterie;
    TInt16 ai16Rng_PowerBatterie[2];
    TInt16 i16Def_PowerBatterie;
    TDbVarInf  tInf_MotorSpeedCmdJ1939;
    TUint16 au16Rng_MotorSpeedCmdJ1939[2];
    TUint16 u16Def_MotorSpeedCmdJ1939;
    TDbVarInf  tInf_OverrideControlModeCmdJ1939;
    TUint8 au8Rng_OverrideControlModeCmdJ1939[2];
    TUint8 u8Def_OverrideControlModeCmdJ1939;
    TDbVarInf  tInf_HighPressureOilJ1939;
    EStateBool2bits aeRng_HighPressureOilJ1939[2];
    EStateBool2bits eDef_HighPressureOilJ1939;
    TDbVarInf  tInf_WarmingActiveJ1939;
    EStateBool2bits aeRng_WarmingActiveJ1939[2];
    EStateBool2bits eDef_WarmingActiveJ1939;
    TDbVarInf  tInf_StopMotorJ1939;
    EStateBool2bits aeRng_StopMotorJ1939[2];
    EStateBool2bits eDef_StopMotorJ1939;
}TDbSetRamGeneralNeotecC1;

typedef struct
{
    TDbVarInf  tInf_REGEN_SOC_FULL;
    TUint16 au16Rng_REGEN_SOC_FULL[2];
    TUint16 u16Def_REGEN_SOC_FULL;
    TDbVarInf  tInf_REGEN_SOC_MAX;
    TUint16 au16Rng_REGEN_SOC_MAX[2];
    TUint16 u16Def_REGEN_SOC_MAX;
    TDbVarInf  tInf_REGEN_HYST_SOC_MAX;
    TUint16 au16Rng_REGEN_HYST_SOC_MAX[2];
    TUint16 u16Def_REGEN_HYST_SOC_MAX;
    TDbVarInf  tInf_NBR_REGEN_SOC_ALARM;
    TUint16 au16Rng_NBR_REGEN_SOC_ALARM[2];
    TUint16 u16Def_NBR_REGEN_SOC_ALARM;
    TDbVarInf  tInf_NBR_REGEN_SOC_OVERED;
    TUint16 au16Rng_NBR_REGEN_SOC_OVERED[2];
    TUint16 u16Def_NBR_REGEN_SOC_OVERED;
    TDbVarInf  tInf_ELECTRIC_MOTOR_RPM_MAX;
    TUint16 au16Rng_ELECTRIC_MOTOR_RPM_MAX[2];
    TUint16 u16Def_ELECTRIC_MOTOR_RPM_MAX;
    TDbVarInf  tInf_ELECTRIC_MOTOR_RPM_MIN;
    TUint16 au16Rng_ELECTRIC_MOTOR_RPM_MIN[2];
    TUint16 u16Def_ELECTRIC_MOTOR_RPM_MIN;
    TDbVarInf  tInf_ELECTRIC_MOTOR_RPM_PVG;
    TUint16 au16Rng_ELECTRIC_MOTOR_RPM_PVG[2];
    TUint16 u16Def_ELECTRIC_MOTOR_RPM_PVG;
    TDbVarInf  tInf_ELECTRIC_MOTOR_RPM_TOR;
    TUint16 au16Rng_ELECTRIC_MOTOR_RPM_TOR[2];
    TUint16 u16Def_ELECTRIC_MOTOR_RPM_TOR;
    TDbVarInf  tInf_ELECTRIC_MOTOR_COLD_OIL_TEMP;
    TInt16 ai16Rng_ELECTRIC_MOTOR_COLD_OIL_TEMP[2];
    TInt16 i16Def_ELECTRIC_MOTOR_COLD_OIL_TEMP;
    TDbVarInf  tInf_BATTERY_CAPACITY_AMP_HOUR;
    TUint16 au16Rng_BATTERY_CAPACITY_AMP_HOUR[2];
    TUint16 u16Def_BATTERY_CAPACITY_AMP_HOUR;
    TDbVarInf  tInf_NbElementRemainingRegenTime;
    TUint8 au8Rng_NbElementRemainingRegenTime[2];
    TUint8 u8Def_NbElementRemainingRegenTime;
}TDbSetNvParamGreenEffC1;

typedef struct
{
    TDbVarInf  tInf_AlarmCptNbrRegenFinish;
    TBoolean aboRng_AlarmCptNbrRegenFinish[2];
    TBoolean boDef_AlarmCptNbrRegenFinish;
    TDbVarInf  tInf_ElectricMotorForbidden;
    TBoolean aboRng_ElectricMotorForbidden[2];
    TBoolean boDef_ElectricMotorForbidden;
    TDbVarInf  tInf_ColdOilTankTemperature;
    TBoolean aboRng_ColdOilTankTemperature[2];
    TBoolean boDef_ColdOilTankTemperature;
    TDbVarInf  tInf_RpmMvtsElectricMode;
    TInt16 ai16Rng_RpmMvtsElectricMode[2];
    TInt16 i16Def_RpmMvtsElectricMode;
    TDbVarInf  tInf_RpmTransRailElectricMode;
    TInt16 ai16Rng_RpmTransRailElectricMode[2];
    TInt16 i16Def_RpmTransRailElectricMode;
    TDbVarInf  tInf_RpmOilTankTemp;
    TInt16 ai16Rng_RpmOilTankTemp[2];
    TInt16 i16Def_RpmOilTankTemp;
    TDbVarInf  tInf_RpmMotorElectric;
    TInt16 ai16Rng_RpmMotorElectric[2];
    TInt16 i16Def_RpmMotorElectric;
    TDbVarInf  tInf_GeneratorOn;
    TBoolean aboRng_GeneratorOn[2];
    TBoolean boDef_GeneratorOn;
    TDbVarInf  tInf_AutoModeActivate;
    TBoolean aboRng_AutoModeActivate[2];
    TBoolean boDef_AutoModeActivate;
    TDbVarInf  tInf_SilenceModeActivate;
    TBoolean aboRng_SilenceModeActivate[2];
    TBoolean boDef_SilenceModeActivate;
    TDbVarInf  tInf_ForcingModeActivate;
    TBoolean aboRng_ForcingModeActivate[2];
    TBoolean boDef_ForcingModeActivate;
    TDbVarInf  tInf_ForcingRegenlow;
    TBoolean aboRng_ForcingRegenlow[2];
    TBoolean boDef_ForcingRegenlow;
    TDbVarInf  tInf_ForcingRegenHigh;
    TBoolean aboRng_ForcingRegenHigh[2];
    TBoolean boDef_ForcingRegenHigh;
    TDbVarInf  tInf_RemainingRegenTimeAverage;
    TUint16 au16Rng_RemainingRegenTimeAverage[2];
    TUint16 u16Def_RemainingRegenTimeAverage;
    TDbVarInf  tInf_AskReloadWithGenerator;
    TBoolean aboRng_AskReloadWithGenerator[2];
    TBoolean boDef_AskReloadWithGenerator;
    TDbVarInf  tInf_ReloadWithGeneratorOn;
    TBoolean aboRng_ReloadWithGeneratorOn[2];
    TBoolean boDef_ReloadWithGeneratorOn;
    TDbVarInf  tInf_SocStopRegen;
    TBoolean aboRng_SocStopRegen[2];
    TBoolean boDef_SocStopRegen;
    TDbVarInf  tInf_TotalRegenHours;
    TUint16 au16Rng_TotalRegenHours[2];
    TUint16 u16Def_TotalRegenHours;
    TDbVarInf  tInf_PictoColdOilTankTemperature;
    TBoolean aboRng_PictoColdOilTankTemperature[2];
    TBoolean boDef_PictoColdOilTankTemperature;
    TDbVarInf  tInf_TotalElectricHours;
    TUint16 au16Rng_TotalElectricHours[2];
    TUint16 u16Def_TotalElectricHours;
    TDbVarInf  tInf_PictoRecoveryReductionRatio;
    TBoolean aboRng_PictoRecoveryReductionRatio[2];
    TBoolean boDef_PictoRecoveryReductionRatio;
}TDbSetRamGreenEffC1;

//extern List Access ----------------------------------------------------------------------------
extern TDbRamEcuInputsC1 gDb_tRamEcuInputsC1;
extern TDbRamEcuOutputsC1 gDb_tRamEcuOutputsC1;
extern TDbRamGeneralC1 gDb_tRamGeneralC1;
extern TDbNvOptionsC1 gDb_tNvOptionsC1;
extern TDbNvMemoryC1 gDb_tNvMemoryC1;
extern TDbNvParametersC1 gDb_tNvParametersC1;
extern TDbNvCalibrationC1 gDb_tNvCalibrationC1;
extern TDbRam48XsInputsC1 gDb_tRam48XsInputsC1;
extern TDbRamRcvRadioCmdC1 gDb_tRamRcvRadioCmdC1;
extern TDbRamLimitMoveC1 gDb_tRamLimitMoveC1;
extern TDbNvParamMotorC1 gDb_tNvParamMotorC1;
extern TDbRam48XsOutputsC1 gDb_tRam48XsOutputsC1;
extern TDbRamEcuC1RcvFromC0 gDb_tRamEcuC1RcvFromC0;
extern TDbRamEcuEvision7C1 gDb_tRamEcuEvision7C1;
extern TDbRamEvision4C1 gDb_tRamEvision4C1;
extern TDbRamEcuCaliCmdC1 gDb_tRamEcuCaliCmdC1;
extern TDbNvParamLimitWorkEnvelopeC1 gDb_tNvParamLimitWorkEnvelopeC1;
extern TDbRamLimitWorkEnvelopeC1 gDb_tRamLimitWorkEnvelopeC1;
extern TDbRamTelescopeCanC1 gDb_tRamTelescopeCanC1;
extern TDbRamMvtEndStopC1 gDb_tRamMvtEndStopC1;
extern TDbNvParamMvtEndStopC1 gDb_tNvParamMvtEndStopC1;
extern TDbNvParamAutoStopC1 gDb_tNvParamAutoStopC1;
extern TDbRamAutoStopC1 gDb_tRamAutoStopC1;
extern TDbRamMastMeasureC1 gDb_tRamMastMeasureC1;
extern TDbNvParamMastC1 gDb_tNvParamMastC1;
extern TDbRamEvision7C1 gDb_tRamEvision7C1;
extern TDbNvParamAlarmC1 gDb_tNvParamAlarmC1;
extern TDbRamEcuC1RcvFailluresFromC0 gDb_tRamEcuC1RcvFailluresFromC0;
extern TDbRamData4C1RcvFromC0 gDb_tRamData4C1RcvFromC0;
extern TDbRamGeneralNeotecC1 gDb_tRamGeneralNeotecC1;
extern TDbNvParamGreenEffC1 gDb_tNvParamGreenEffC1;
extern TDbRamGreenEffC1 gDb_tRamGreenEffC1;

#endif // __APP_DB_H__
