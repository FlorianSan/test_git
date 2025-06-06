//**************************************************************************************************
//! @crc        2669218267
//! @file       App_ErrBitPos.h
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

#ifndef __APP_ERRBITPOS_H__
#define __APP_ERRBITPOS_H__


#define DM_ARU_ACTIVE_CO 0
    //!< ErrBlockName: SpecificErrorC0 - Descr: if Aru contact is pushed , stop movement - SPN: 9724 - FMI: FMI_31_CONDITION_EXISTS - FMIExt: FMIEX_NONE
#define DM_HIGH_HYDRAULIC_TEMP_RAIL 0
    //!< ErrBlockName: SpecificErrorC0_2 - Descr: Hydraulic temperature fault mode rail - SPN: 16312 - FMI: FMI_31_CONDITION_EXISTS - FMIExt: FMIEX_NONE
#define DM_OVERSPEED_GV_FAULT 0
    //!< ErrBlockName: SpecificErrorC0_3 - Descr: exceeding the GV overspeed threshold - SPN: 16320 - FMI: FMI_31_CONDITION_EXISTS - FMIExt: FMIEX_NONE
#define DM_PVG_TRACK_RIGHT 0
    //!< ErrBlockName: SpecificErrorC0_4 - Descr: Coherence pilotage PVG track right - SPN: 16327 - FMI: FMI_31_CONDITION_EXISTS - FMIExt: FMIEX_NONE
#define DM_TURRET_SENSOR_FAULT 0
    //!< ErrBlockName: SpecificErrorC0_5 - Descr:  [-]: SpecificErrorC0_5 -   - SPN: 9012 - FMI: FMI_31_CONDITION_EXISTS - FMIExt: FMIEX_NONE
#define DM_C0_MOTOR_DEFAULT_LIGHT_OVERLOAD_48XS 0
    //!< ErrBlockName: SpecificErrorC0_6 - Descr: Overloadd detected on motor default light ouput of 48XS - SPN: 16530 - FMI: FMI_31_CONDITION_EXISTS - FMIExt: FMIEX_NONE
#define DM_C0_DEVERS_DEFAULT_LIGHT_OVERLOAD_48XS 0
    //!< ErrBlockName: SpecificErrorC0_7 - Descr: Overlaod detected on devers default light output of 48xs - SPN: 16538 - FMI: FMI_31_CONDITION_EXISTS - FMIExt: FMIEX_NONE
#define DM_C0_OUT_OF_RANGE_JOY_DELTA_ARM_48XS 0
    //!< ErrBlockName: SpecificErrorC0_8 - Descr: Out of range joystick delta arm of 48XS - SPN: 16556 - FMI: FMI_31_CONDITION_EXISTS - FMIExt: FMIEX_NONE
#define DM_C0_RED_LIGHT_ARD_OPENLOAD_48XS 0
    //!< ErrBlockName: SpecificErrorC0_9 - Descr: Openload detected on red light ARD output of 48xs - SPN: 9191 - FMI: FMI_31_CONDITION_EXISTS - FMIExt: FMIEX_NONE


#define DM_ARU_RADIO_CO 1
    //!< ErrBlockName: SpecificErrorC0 - Descr: if Aru radio is pushed , stop movement - SPN: 9725 - FMI: FMI_31_CONDITION_EXISTS - FMIExt: FMIEX_NONE
#define DM_ALARM_HYDRAULIC_TEMP_CRAWLER 1
    //!< ErrBlockName: SpecificErrorC0_2 - Descr: Hydraulic temperature alarme mode crawler - SPN: 16313 - FMI: FMI_31_CONDITION_EXISTS - FMIExt: FMIEX_NONE
#define DM_MAT_MEASURE_FAULT 1
    //!< ErrBlockName: SpecificErrorC0_3 - Descr: CAN communication problem, inconsistency with option, Inconsistent measure - SPN: 16321 - FMI: FMI_31_CONDITION_EXISTS - FMIExt: FMIEX_NONE
#define DM_NEED_TEST_BRAKE 1
    //!< ErrBlockName: SpecificErrorC0_4 - Descr: Number of cycle brake perform is over at threshold - SPN: 16308 - FMI: FMI_24_LOGICAL_ERROR - FMIExt: FMIEX_NONE
#define DM_OVERLOAD_DETECTED_BY_C1 1
    //!< ErrBlockName: SpecificErrorC0_5 - Descr:  [-]: SpecificErrorC0_5 -   - SPN: 9013 - FMI: FMI_31_CONDITION_EXISTS - FMIExt: FMIEX_NONE
#define DM_C0_MOTOR_DEFAULT_LIGHT_OPENLOAD_48XS 1
    //!< ErrBlockName: SpecificErrorC0_6 - Descr: Openload detected on motor default light ouput of 48XS - SPN: 16531 - FMI: FMI_31_CONDITION_EXISTS - FMIExt: FMIEX_NONE
#define DM_C0_DEVERS_DEFAULT_LIGHT_OPENLOAD_48XS 1
    //!< ErrBlockName: SpecificErrorC0_7 - Descr: Openload detected on devers default light output of 48xs - SPN: 16539 - FMI: FMI_31_CONDITION_EXISTS - FMIExt: FMIEX_NONE
#define DM_C0_OUT_OF_RANGE_JOY_ARROW_ARM_48XS 1
    //!< ErrBlockName: SpecificErrorC0_8 - Descr: Out of range joystick arrow arm of 48XS - SPN: 16557 - FMI: FMI_31_CONDITION_EXISTS - FMIExt: FMIEX_NONE
#define DM_C0_FAULT_THERMIC_OR_ELECTRIC_PUMP 1
    //!< ErrBlockName: SpecificErrorC0_9 - Descr: Fault on thermic or electric pump - SPN: 9192 - FMI: FMI_31_CONDITION_EXISTS - FMIExt: FMIEX_NONE


#define DM_WORKMODE_SELETOR 2
    //!< ErrBlockName: SpecificErrorC0 - Descr: Inconsistency selector signals - SPN: 16076 - FMI: FMI_31_CONDITION_EXISTS - FMIExt: FMIEX_NONE
#define DM_ALARM_HYDRAULIC_TEMP_RAIL 2
    //!< ErrBlockName: SpecificErrorC0_2 - Descr: Hydraulic temperature alarme mode crawler - SPN: 16314 - FMI: FMI_31_CONDITION_EXISTS - FMIExt: FMIEX_NONE
#define DM_INC_FOLDED_MAT_MEASURE 2
    //!< ErrBlockName: SpecificErrorC0_3 - Descr:  [-]: SpecificErrorC0_3 -   - SPN: 16322 - FMI: FMI_31_CONDITION_EXISTS - FMIExt: FMIEX_NONE
#define DM_TEST_BRAKE_NOT_VALIDATED 2
    //!< ErrBlockName: SpecificErrorC0_4 - Descr: Test brakes not validated , exceeded critical number of brake perform - SPN: 16309 - FMI: FMI_31_CONDITION_EXISTS - FMIExt: FMIEX_NONE
#define DM_EV_BYPASS_FAULT_BY_C1 2
    //!< ErrBlockName: SpecificErrorC0_5 - Descr: Check pressure when bypass is pilot detected by C1 - SPN: 9014 - FMI: FMI_31_CONDITION_EXISTS - FMIExt: FMIEX_NONE
#define DM_C0_OVERLOAD_LIGHT_OVERLOAD_48XS 2
    //!< ErrBlockName: SpecificErrorC0_6 - Descr: Overload detected on overlaod light output of 48xs - SPN: 16532 - FMI: FMI_31_CONDITION_EXISTS - FMIExt: FMIEX_NONE
#define DM_C0_GAS_OIL_LIGHT_OVERLOAD_48XS 2
    //!< ErrBlockName: SpecificErrorC0_7 - Descr: Openload detected on devers default light output of 48xs - SPN: 16540 - FMI: FMI_31_CONDITION_EXISTS - FMIExt: FMIEX_NONE
#define DM_C0_OUT_OF_RANGE_JOY_TELESCOPE_ARM_48XS 2
    //!< ErrBlockName: SpecificErrorC0_8 - Descr: Out of range joystick telescope arm of 48XS - SPN: 16558 - FMI: FMI_31_CONDITION_EXISTS - FMIExt: FMIEX_NONE
#define DM_ERR_02 2
    //!< ErrBlockName: SpecificErrorC0_9 - Descr: Error bit 2 - SPN: 9193 - FMI: FMI_31_CONDITION_EXISTS - FMIExt: FMIEX_NONE


#define DM_INC_ABUTMENT_TURRET 3
    //!< ErrBlockName: SpecificErrorC0 - Descr: Inconsistency abutment turret track and center size - SPN: 16077 - FMI: FMI_31_CONDITION_EXISTS - FMIExt: FMIEX_NONE
#define DM_INC_POS_AXLE_OSCILLANT 3
    //!< ErrBlockName: SpecificErrorC0_2 - Descr: Inconsistency beetween high and low position of axle oscillant - SPN: 16315 - FMI: FMI_31_CONDITION_EXISTS - FMIExt: FMIEX_NONE
#define DM_TRANS_CRAWLER_PRESSURE_HOOK 3
    //!< ErrBlockName: SpecificErrorC0_3 - Descr:  [-]: SpecificErrorC0_3 -   - SPN: 16323 - FMI: FMI_31_CONDITION_EXISTS - FMIExt: FMIEX_NONE
#define DM_OPTION_LIGHT_FAULT 3
    //!< ErrBlockName: SpecificErrorC0_4 - Descr: Check coherence option of light - SPN: 16310 - FMI: FMI_31_CONDITION_EXISTS - FMIExt: FMIEX_NONE
#define DM_HEARTBEAT_48XS_DEFAULT_C0 3
    //!< ErrBlockName: SpecificErrorC0_5 - Descr:  [-]: SpecificErrorC0_5 -   - SPN: 9015 - FMI: FMI_31_CONDITION_EXISTS - FMIExt: FMIEX_NONE
#define DM_C0_OVERLOAD_LIGHT_OPENLOAD_48XS 3
    //!< ErrBlockName: SpecificErrorC0_6 - Descr: Overload detected on overlaod light output of 48xs - SPN: 16533 - FMI: FMI_31_CONDITION_EXISTS - FMIExt: FMIEX_NONE
#define DM_C0_GAS_OIL_LIGHT_OPENLOAD_48XS 3
    //!< ErrBlockName: SpecificErrorC0_7 - Descr: Openload detected on devers default light output of 48xs - SPN: 16541 - FMI: FMI_31_CONDITION_EXISTS - FMIExt: FMIEX_NONE
#define DM_C0_OUT_OF_RANGE_JOY_ROR_TURRET_48XS 3
    //!< ErrBlockName: SpecificErrorC0_8 - Descr: Out of range joystick rotation turret of 48XS - SPN: 16559 - FMI: FMI_31_CONDITION_EXISTS - FMIExt: FMIEX_NONE
#define DM_ERR_03 3
    //!< ErrBlockName: SpecificErrorC0_9 - Descr: Error bit 3 - SPN: 9194 - FMI: FMI_31_CONDITION_EXISTS - FMIExt: FMIEX_NONE


#define DM_INC_ABUTMENT_NACELLE 4
    //!< ErrBlockName: SpecificErrorC0 - Descr: Inconsistency abutment nacelle - SPN: 16078 - FMI: FMI_31_CONDITION_EXISTS - FMIExt: FMIEX_NONE
#define DM_INC_POS_AXLE_FIXE 4
    //!< ErrBlockName: SpecificErrorC0_2 - Descr: Inconsistency beetween high and low position of axle fixe - SPN: 16316 - FMI: FMI_31_CONDITION_EXISTS - FMIExt: FMIEX_NONE
#define DM_INC_POS_DELTA_ARROW_FOLDED 4
    //!< ErrBlockName: SpecificErrorC0_3 - Descr: Inconsistency check position foled of delta and arrow - SPN: 16324 - FMI: FMI_31_CONDITION_EXISTS - FMIExt: FMIEX_NONE
#define DM_INC_RIGHT_BASKET_SENSOR 4
    //!< ErrBlockName: SpecificErrorC0_4 - Descr: Right basket sensor inconsistency NcNo - SPN: 16311 - FMI: FMI_24_LOGICAL_ERROR - FMIExt: FMIEX_NONE
#define DM_TEST_ALARME 4
    //!< ErrBlockName: SpecificErrorC0_5 - Descr:  [-]: SpecificErrorC0_5 -  Error bit 4 - SPN: 9016 - FMI: FMI_31_CONDITION_EXISTS - FMIExt: FMIEX_NONE
#define DM_C0_BUZZER_OVERLOAD_48XS 4
    //!< ErrBlockName: SpecificErrorC0_6 - Descr: Overload detected on buzzer ouput of 48xs - SPN: 16534 - FMI: FMI_31_CONDITION_EXISTS - FMIExt: FMIEX_NONE
#define DM_C0_WHITE_LIGHTS_OVERLOAD_48XS 4
    //!< ErrBlockName: SpecificErrorC0_7 - Descr: Overload detected on white lights of 48xs - SPN: 16542 - FMI: FMI_31_CONDITION_EXISTS - FMIExt: FMIEX_NONE
#define DM_C0_OUT_OF_RANGE_JOY_ADVANCEMENT_48XS 4
    //!< ErrBlockName: SpecificErrorC0_8 - Descr: Out of range joystick advancement of 48XS - SPN: 16560 - FMI: FMI_31_CONDITION_EXISTS - FMIExt: FMIEX_NONE
#define DM_ERR_04 4
    //!< ErrBlockName: SpecificErrorC0_9 - Descr: Error bit 4 - SPN: 9195 - FMI: FMI_31_CONDITION_EXISTS - FMIExt: FMIEX_NONE


#define DM_OSCILLANT_CIRCUIT_FAULT 5
    //!< ErrBlockName: SpecificErrorC0 - Descr: Inconsistency of pressure and control of solenoid valve - SPN: 16079 - FMI: FMI_31_CONDITION_EXISTS - FMIExt: FMIEX_NONE
#define DM_ONE_SPEED_SENSOR_FAULT 5
    //!< ErrBlockName: SpecificErrorC0_2 - Descr: both sensors do not show consistent values - SPN: 16317 - FMI: FMI_31_CONDITION_EXISTS - FMIExt: FMIEX_NONE
#define DM_SLOPE_FAULT 5
    //!< ErrBlockName: SpecificErrorC0_3 - Descr: Inconsistency boths 2 channels or can faillures - SPN: 16325 - FMI: FMI_31_CONDITION_EXISTS - FMIExt: FMIEX_NONE
#define DM_INC_LEFT_BASKET_SENSOR 5
    //!< ErrBlockName: SpecificErrorC0_4 - Descr: Left basket sensor inconsistency NcNo - SPN: 16328 - FMI: FMI_24_LOGICAL_ERROR - FMIExt: FMIEX_NONE
#define DM_VOLTAGE_DC_CONVERTER_C0 5
    //!< ErrBlockName: SpecificErrorC0_5 - Descr: Low voltage DC converter - SPN: 9017 - FMI: FMI_31_CONDITION_EXISTS - FMIExt: FMIEX_NONE
#define DM_C0_BUZZER_OPENLOAD_48XS 5
    //!< ErrBlockName: SpecificErrorC0_6 - Descr: Overload detected on buzzer ouput of 48xs - SPN: 16535 - FMI: FMI_31_CONDITION_EXISTS - FMIExt: FMIEX_NONE
#define DM_C0_WHITE_LIGHT_OPENLOAD_48XS 5
    //!< ErrBlockName: SpecificErrorC0_7 - Descr: Openload detected on white lights of 48xs - SPN: 16543 - FMI: FMI_31_CONDITION_EXISTS - FMIExt: FMIEX_NONE
#define DM_C0_WHITE_LIGHT_ARD_OVERLOAD_48XS 5
    //!< ErrBlockName: SpecificErrorC0_8 - Descr: Overload detected on white light ARD of 48xs - SPN: 16547 - FMI: FMI_31_CONDITION_EXISTS - FMIExt: FMIEX_NONE
#define DM_ERR_05 5
    //!< ErrBlockName: SpecificErrorC0_9 - Descr: Error bit 5 - SPN: 9196 - FMI: FMI_31_CONDITION_EXISTS - FMIExt: FMIEX_NONE


#define DM_SERVICE_BRAKE_PRESSURE_FAULT 6
    //!< ErrBlockName: SpecificErrorC0 - Descr: control pressure accumulator brakes - SPN: 16080 - FMI: FMI_31_CONDITION_EXISTS - FMIExt: FMIEX_NONE
#define DM_TWO_SPEED_SENSOR_FAULT 6
    //!< ErrBlockName: SpecificErrorC0_2 - Descr: both sensors do not show consistent values - SPN: 16318 - FMI: FMI_31_CONDITION_EXISTS - FMIExt: FMIEX_NONE
#define DM_INC_INDUCTIVE_POS_TURRET 6
    //!< ErrBlockName: SpecificErrorC0_3 - Descr:  [-]: SpecificErrorC0_3 -   - SPN: 16326 - FMI: FMI_31_CONDITION_EXISTS - FMIExt: FMIEX_NONE
#define DM_INC_RIGHT_LEFT_BASKET 6
    //!< ErrBlockName: SpecificErrorC0_4 - Descr: Inconsistency beetween left and right basket sensor - SPN: 16329 - FMI: FMI_24_LOGICAL_ERROR - FMIExt: FMIEX_NONE
#define DM_BATT_ERROR_CODE1_C0 6
    //!< ErrBlockName: SpecificErrorC0_5 - Descr: Error code battery - SPN: 9018 - FMI: FMI_31_CONDITION_EXISTS - FMIExt: FMIEX_NONE
#define DM_C0_WARMING_LIGHT_OVERLOAD_48XS 6
    //!< ErrBlockName: SpecificErrorC0_6 - Descr: Overlaod detected on warming light output of 48xs - SPN: 16536 - FMI: FMI_31_CONDITION_EXISTS - FMIExt: FMIEX_NONE
#define DM_C0_RED_LIGHTS_OVERLOAD_48XS 6
    //!< ErrBlockName: SpecificErrorC0_7 - Descr: Overload detected on red lights ouput of 48xs - SPN: 16544 - FMI: FMI_31_CONDITION_EXISTS - FMIExt: FMIEX_NONE
#define DM_C0_WHITE_LIGHT_ARD_OPENLOAD_48XS 6
    //!< ErrBlockName: SpecificErrorC0_8 - Descr: Openload detected on white light ARD of 48xs - SPN: 16548 - FMI: FMI_31_CONDITION_EXISTS - FMIExt: FMIEX_NONE
#define DM_ERR_06 6
    //!< ErrBlockName: SpecificErrorC0_9 - Descr: Error bit 6 - SPN: 9215 - FMI: FMI_31_CONDITION_EXISTS - FMIExt: FMIEX_NONE


#define DM_HIGH_HYDRAULIC_TEMP_CRAWLER 7
    //!< ErrBlockName: SpecificErrorC0 - Descr: Hydraulic temperature fault mode crawler - SPN: 16081 - FMI: FMI_31_CONDITION_EXISTS - FMIExt: FMIEX_NONE
#define DM_OVERSPEED_PV_FAULT 7
    //!< ErrBlockName: SpecificErrorC0_2 - Descr: exceeding the PV overspeed threshold - SPN: 16319 - FMI: FMI_31_CONDITION_EXISTS - FMIExt: FMIEX_NONE
#define DM_PVG_TRACK_LEFT 7
    //!< ErrBlockName: SpecificErrorC0_3 - Descr: Coherence pilotage PVG track left - SPN: 16307 - FMI: FMI_31_CONDITION_EXISTS - FMIExt: FMIEX_NONE
#define DM_ACTIVE_HELP_FROM_C1 7
    //!< ErrBlockName: SpecificErrorC0_4 - Descr: Active Help - SPN: 16330 - FMI: FMI_31_CONDITION_EXISTS - FMIExt: FMIEX_NONE
#define DM_DMC_ERROR_C0 7
    //!< ErrBlockName: SpecificErrorC0_5 - Descr: DMC error - SPN: 9019 - FMI: FMI_31_CONDITION_EXISTS - FMIExt: FMIEX_NONE
#define DM_C0_WARMING_LIGHT_OPENLOAD_48XS 7
    //!< ErrBlockName: SpecificErrorC0_6 - Descr: Opendload detected on warming light ouput of 48xs - SPN: 16537 - FMI: FMI_31_CONDITION_EXISTS - FMIExt: FMIEX_NONE
#define DM_C0_RED_LIGHTS_OPENLOAD_48XS 7
    //!< ErrBlockName: SpecificErrorC0_7 - Descr: Openload detected on red lights output of 48xs - SPN: 16545 - FMI: FMI_31_CONDITION_EXISTS - FMIExt: FMIEX_NONE
#define DM_C0_RED_LIGHT_ARD_OVERLOAD_48XS 7
    //!< ErrBlockName: SpecificErrorC0_8 - Descr: Overload detected on red light ARD ouput of 48xs - SPN: 16549 - FMI: FMI_31_CONDITION_EXISTS - FMIExt: FMIEX_NONE
#define DM_ERR_07 7
    //!< ErrBlockName: SpecificErrorC0_9 - Descr: Error bit 7 - SPN: 9216 - FMI: FMI_31_CONDITION_EXISTS - FMIExt: FMIEX_NONE


#endif // __APP_ERRBITPOS_H__

