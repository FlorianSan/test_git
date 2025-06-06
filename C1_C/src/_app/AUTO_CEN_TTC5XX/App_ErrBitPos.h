//**************************************************************************************************
//! @crc        269985785
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


#define DM_ARU_ACTIVE_C1 0
    //!< ErrBlockName: SpecificErrorC1 - Descr: if Aru contact is pushed , stop movement - SPN: 9726 - FMI: FMI_31_CONDITION_EXISTS - FMIExt: FMIEX_NONE
#define DM_PVG_EV_TOR 0
    //!< ErrBlockName: SpecificErrorC1_2 - Descr: Coherence pilotage PVG Ev Tor - SPN: 9107 - FMI: FMI_31_CONDITION_EXISTS - FMIExt: FMIEX_NONE
#define DM_INC_POS_FOLDED_DELTA_ARROW 0
    //!< ErrBlockName: SpecificErrorC1_3 - Descr: Inconsistency check position foled of delta and arrow - SPN: 16341 - FMI: FMI_31_CONDITION_EXISTS - FMIExt: FMIEX_NONE
#define DM_C1_MOTOR_DEFAULT_LIGHT_OVERLOAD_48XS 0
    //!< ErrBlockName: SpecificErrorC1_4 - Descr: Overloadd detected on motor default light ouput of 48XS - SPN: 16514 - FMI: FMI_31_CONDITION_EXISTS - FMIExt: FMIEX_NONE
#define DM_C1_DEVERS_DEFAULT_LIGHT_OVERLOAD_48XS 0
    //!< ErrBlockName: SpecificErrorC1_5 - Descr: Overlaod detected on devers default light output of 48xs - SPN: 16522 - FMI: FMI_31_CONDITION_EXISTS - FMIExt: FMIEX_NONE
#define DM_C1_OUT_OF_RANGE_JOY_DELTA_ARM_48XS 0
    //!< ErrBlockName: SpecificErrorC1_6 - Descr: Out of range joystick delta arm of 48XS - SPN: 16561 - FMI: FMI_31_CONDITION_EXISTS - FMIExt: FMIEX_NONE
#define DM_HEARTBEAT_48XS_DEFAULT_C1 0
    //!< ErrBlockName: SpecificErrorC1_7 - Descr: HeatBeat State of 48XS  different at OK - SPN: 16577 - FMI: FMI_31_CONDITION_EXISTS - FMIExt: FMIEX_NONE
#define DM_TIMEOUT_SDO_REQUEST_48XS 0
    //!< ErrBlockName: SpecificErrorC1_8 - Descr: DM_TIMEOUT_SDO_REQUEST_48XS - SPN: 16611 - FMI: FMI_31_CONDITION_EXISTS - FMIExt: FMIEX_NONE


#define DM_ARU_RADIO_C1 1
    //!< ErrBlockName: SpecificErrorC1 - Descr: if Aru radio contact is pushed , stop movement - SPN: 9727 - FMI: FMI_31_CONDITION_EXISTS - FMIExt: FMIEX_NONE
#define DM_PVG_TELESCOPE 1
    //!< ErrBlockName: SpecificErrorC1_2 - Descr: Coherence pilotage PVG telescope - SPN: 9108 - FMI: FMI_31_CONDITION_EXISTS - FMIExt: FMIEX_NONE
#define DM_TELESCOPE_SENSOR_FAULT 1
    //!< ErrBlockName: SpecificErrorC1_3 - Descr: Inconsistency check of telescope sensor - SPN: 16342 - FMI: FMI_31_CONDITION_EXISTS - FMIExt: FMIEX_NONE
#define DM_C1_MOTOR_DEFAULT_LIGHT_OPENLOAD_48XS 1
    //!< ErrBlockName: SpecificErrorC1_4 - Descr: Openload detected on motor default light ouput of 48XS - SPN: 16515 - FMI: FMI_31_CONDITION_EXISTS - FMIExt: FMIEX_NONE
#define DM_C1_DEVERS_DEFAULT_LIGHT_OPENLOAD_48XS 1
    //!< ErrBlockName: SpecificErrorC1_5 - Descr: Openload detected on devers default light output of 48xs - SPN: 16523 - FMI: FMI_31_CONDITION_EXISTS - FMIExt: FMIEX_NONE
#define DM_C1_OUT_OF_RANGE_JOY_ARROW_ARM_48XS 1
    //!< ErrBlockName: SpecificErrorC1_6 - Descr: Out of range joystick arrow arm of 48XS - SPN: 16562 - FMI: FMI_31_CONDITION_EXISTS - FMIExt: FMIEX_NONE
#define DM_RM_COM_CAN_RADIO_LOSS_BY_C0 1
    //!< ErrBlockName: SpecificErrorC1_7 - Descr: Rm com can radio detected by C0 - SPN: 16578 - FMI: FMI_31_CONDITION_EXISTS - FMIExt: FMIEX_NONE
#define DM_WRONG_CHECKSUM_CONFIG_48XS 1
    //!< ErrBlockName: SpecificErrorC1_8 - Descr: DM_WRONG_CHECKSUM_CONFIG_48XS - SPN: 16612 - FMI: FMI_31_CONDITION_EXISTS - FMIExt: FMIEX_NONE


#define DM_STOP_MOVE_LIMIT_ENVLP_C1 2
    //!< ErrBlockName: SpecificErrorC1 - Descr:  [-]: SpecificErrorC1 -  if stop all movement is detect by limit envelope function - SPN: 9772 - FMI: FMI_31_CONDITION_EXISTS - FMIExt: FMIEX_NONE
#define DM__INC_ALTERNATOR_CHARGE_FAULT 2
    //!< ErrBlockName: SpecificErrorC1_2 - Descr:  [-]: SpecificErrorC1_2 -   - SPN: 9129 - FMI: FMI_31_CONDITION_EXISTS - FMIExt: FMIEX_NONE
#define DM_OVERLOAD_DETECTED 2
    //!< ErrBlockName: SpecificErrorC1_3 - Descr: Overlaod is detected - SPN: 16302 - FMI: FMI_31_CONDITION_EXISTS - FMIExt: FMIEX_NONE
#define DM_C1_OVERLOAD_LIGHT_OVERLOAD_48XS 2
    //!< ErrBlockName: SpecificErrorC1_4 - Descr: Overload detected on overlaod light output of 48xs - SPN: 16516 - FMI: FMI_31_CONDITION_EXISTS - FMIExt: FMIEX_NONE
#define DM_C1_GAS_OIL_LIGHT_OVERLOAD_48XS 2
    //!< ErrBlockName: SpecificErrorC1_5 - Descr: Overlaod detected on gas oil light of 4x8s - SPN: 16524 - FMI: FMI_31_CONDITION_EXISTS - FMIExt: FMIEX_NONE
#define DM_C1_OUT_OF_RANGE_JOY_TELESCOPE_ARM_48XS 2
    //!< ErrBlockName: SpecificErrorC1_6 - Descr: Out of range joystick telescope arm of 48XS - SPN: 16563 - FMI: FMI_31_CONDITION_EXISTS - FMIExt: FMIEX_NONE
#define DM_C1_WHITE_LIGHT_ARD_OVERLOAD_48XS 2
    //!< ErrBlockName: SpecificErrorC1_7 - Descr: Overload detected on white light ARD of 48xs - SPN: 16551 - FMI: FMI_31_CONDITION_EXISTS - FMIExt: FMIEX_NONE
#define DM_SIL_48XS 2
    //!< ErrBlockName: SpecificErrorC1_8 - Descr: DM_SIL_48XS - SPN: 16613 - FMI: FMI_31_CONDITION_EXISTS - FMIExt: FMIEX_NONE


#define DM_INC_OVERLOAD_SENSOR 3
    //!< ErrBlockName: SpecificErrorC1 - Descr: Overlaod sensor fault 1 and 2 - SPN: 16082 - FMI: FMI_24_LOGICAL_ERROR - FMIExt: FMIEX_NONE
#define DM_ACTIVE_HELP 3
    //!< ErrBlockName: SpecificErrorC1_2 - Descr:  [-]: SpecificErrorC1_2 -   - SPN: 9130 - FMI: FMI_31_CONDITION_EXISTS - FMIExt: FMIEX_NONE
#define DM_EV_PARK_BRAKE_AXLE_OSCILLANT 3
    //!< ErrBlockName: SpecificErrorC1_3 - Descr: Failt of Ev park brake axle oscillant - SPN: 16303 - FMI: FMI_31_CONDITION_EXISTS - FMIExt: FMIEX_NONE
#define DM_C1_OVERLOAD_LIGHT_OPENLOAD_48XS 3
    //!< ErrBlockName: SpecificErrorC1_4 - Descr: Openload detected on overload light output of 48xs - SPN: 16517 - FMI: FMI_31_CONDITION_EXISTS - FMIExt: FMIEX_NONE
#define DM_C1_GAS_OIL_LIGHT_OPENLOAD_48XS 3
    //!< ErrBlockName: SpecificErrorC1_5 - Descr: Openload detected on gas oil light of 48xs - SPN: 16525 - FMI: FMI_31_CONDITION_EXISTS - FMIExt: FMIEX_NONE
#define DM_C1_OUT_OF_RANGE_JOY_ROR_TURRET_48XS 3
    //!< ErrBlockName: SpecificErrorC1_6 - Descr: Out of range joystick rotation turret of 48XS - SPN: 16564 - FMI: FMI_31_CONDITION_EXISTS - FMIExt: FMIEX_NONE
#define DM_C1_WHITE_LIGHT_ARD_OPENLOAD_48XS 3
    //!< ErrBlockName: SpecificErrorC1_7 - Descr: Openload detected on white light ARD of 48xs - SPN: 16552 - FMI: FMI_31_CONDITION_EXISTS - FMIExt: FMIEX_NONE
#define DM_DEFAULT_CASE_START_48XS 3
    //!< ErrBlockName: SpecificErrorC1_8 - Descr: DM_DEFAULT_CASE_START_48XS - SPN: 16614 - FMI: FMI_31_CONDITION_EXISTS - FMIExt: FMIEX_NONE


#define DM_TURRET_SENSOR_FAULT_C1 4
    //!< ErrBlockName: SpecificErrorC1 - Descr: Internal defaut and inconsistency beetween two channels and error can - SPN: 16083 - FMI: FMI_31_CONDITION_EXISTS - FMIExt: FMIEX_NONE
#define DM_EV_BYPASS_FAULT 4
    //!< ErrBlockName: SpecificErrorC1_2 - Descr:  [-]: SpecificErrorC1_2 -   - SPN: 9131 - FMI: FMI_31_CONDITION_EXISTS - FMIExt: FMIEX_NONE
#define DM_EV_PARK_BRAKE_AXLE_FIXE 4
    //!< ErrBlockName: SpecificErrorC1_3 - Descr: Fault of Ev park brake axle fixe - SPN: 16304 - FMI: FMI_31_CONDITION_EXISTS - FMIExt: FMIEX_NONE
#define DM_C1_BUZZER_OVERLOAD_48XS 4
    //!< ErrBlockName: SpecificErrorC1_4 - Descr: Overload detected on buzzer ouput of 48xs - SPN: 16518 - FMI: FMI_31_CONDITION_EXISTS - FMIExt: FMIEX_NONE
#define DM_C1_WHITE_LIGHT_ARG_OVERLOAD_48XS 4
    //!< ErrBlockName: SpecificErrorC1_5 - Descr: Overload detected on white light ARG of 48xs - SPN: 16526 - FMI: FMI_31_CONDITION_EXISTS - FMIExt: FMIEX_NONE
#define DM_C1_OUT_OF_RANGE_JOY_ADVANCEMENT_48XS 4
    //!< ErrBlockName: SpecificErrorC1_6 - Descr: Out of range joystick advancement of 48XS - SPN: 16565 - FMI: FMI_31_CONDITION_EXISTS - FMIExt: FMIEX_NONE
#define DM_C1_RED_LIGHT_ARD_OVERLOAD_48XS 4
    //!< ErrBlockName: SpecificErrorC1_7 - Descr: Overload detected on red light ARD ouput of 48xs - SPN: 16553 - FMI: FMI_31_CONDITION_EXISTS - FMIExt: FMIEX_NONE


#define DM_INPUT_OIL_PRESSURE_FAULT 5
    //!< ErrBlockName: SpecificErrorC1 - Descr:  [-]: SpecificErrorC1 -   - SPN: 16084 - FMI: FMI_31_CONDITION_EXISTS - FMIExt: FMIEX_NONE
#define DM_SWI_DBL_INC_FRAME_ROT 5
    //!< ErrBlockName: SpecificErrorC1_2 - Descr: Inconsistency Nc No logical frame rotation - SPN: 9132 - FMI: FMI_31_CONDITION_EXISTS - FMIExt: FMIEX_NONE
#define DM_EV_SERVICE_BRAKE_AXLE_OSCI 5
    //!< ErrBlockName: SpecificErrorC1_3 - Descr: Fault of Ev service brake axle oscillant - SPN: 16305 - FMI: FMI_31_CONDITION_EXISTS - FMIExt: FMIEX_NONE
#define DM_C1_BUZZER_OPENLOAD_48XS 5
    //!< ErrBlockName: SpecificErrorC1_4 - Descr: Openload detected on buzzer output of 48xs - SPN: 16519 - FMI: FMI_31_CONDITION_EXISTS - FMIExt: FMIEX_NONE
#define DM_C1_WHITE_LIGHT_ARG_OPENLOAD_48XS 5
    //!< ErrBlockName: SpecificErrorC1_5 - Descr: Openload detected on white light ARG of 48xs - SPN: 16527 - FMI: FMI_31_CONDITION_EXISTS - FMIExt: FMIEX_NONE
#define DM_C1_RED_LIGHT_ARD_OPENLOAD_48XS 5
    //!< ErrBlockName: SpecificErrorC1_7 - Descr: Openload detected on red light ARD output of 48xs - SPN: 16554 - FMI: FMI_31_CONDITION_EXISTS - FMIExt: FMIEX_NONE


#define DM_INPUT_WATER_TEMPERATURE 6
    //!< ErrBlockName: SpecificErrorC1 - Descr: Input at 1  - SPN: 16085 - FMI: FMI_31_CONDITION_EXISTS - FMIExt: FMIEX_NONE
#define DM_PVG_DELTA_FAULT 6
    //!< ErrBlockName: SpecificErrorC1_2 - Descr:  [-]: SpecificErrorC1_2 -   - SPN: 9133 - FMI: FMI_31_CONDITION_EXISTS - FMIExt: FMIEX_NONE
#define DM_EV_SERVICE_BRAKE_AXLE_FIXE 6
    //!< ErrBlockName: SpecificErrorC1_3 - Descr: Fault of Ev service brake axle fixe - SPN: 16306 - FMI: FMI_31_CONDITION_EXISTS - FMIExt: FMIEX_NONE
#define DM_C1_WARMING_LIGHT_OVERLOAD_48XS 6
    //!< ErrBlockName: SpecificErrorC1_4 - Descr: Overlaod detected on warming light output of 48xs - SPN: 16520 - FMI: FMI_31_CONDITION_EXISTS - FMIExt: FMIEX_NONE
#define DM_C1_RED_LIGHT_ARG_OVERLOAD_48XS 6
    //!< ErrBlockName: SpecificErrorC1_5 - Descr: Overload detected on red light ARG ouput of 48xs - SPN: 16528 - FMI: FMI_31_CONDITION_EXISTS - FMIExt: FMIEX_NONE
#define DM_WHITE_LIGHT_AR_15746_48XS_OVERLOAD 6
    //!< ErrBlockName: SpecificErrorC1_7 - Descr: Overload detected on white light ar 15746 48XS - SPN: 16555 - FMI: FMI_31_CONDITION_EXISTS - FMIExt: FMIEX_NONE


#define DM_TRANSMISSION_PRESSURE_FAULT 7
    //!< ErrBlockName: SpecificErrorC1 - Descr: Default S1 or S2 pressure sensors - SPN: 16086 - FMI: FMI_31_CONDITION_EXISTS - FMIExt: FMIEX_NONE
#define DM_PVG_ARROW_FAULT 7
    //!< ErrBlockName: SpecificErrorC1_2 - Descr:  [-]: SpecificErrorC1_2 -   - SPN: 9134 - FMI: FMI_31_CONDITION_EXISTS - FMIExt: FMIEX_NONE
#define DM_EV_SERVICE_BRAKE_TRACK 7
    //!< ErrBlockName: SpecificErrorC1_3 - Descr:  [-]: SpecificErrorC1_3 -   - SPN: 16331 - FMI: FMI_31_CONDITION_EXISTS - FMIExt: FMIEX_NONE
#define DM_C1_WARMING_LIGHT_OPENLOAD_48XS 7
    //!< ErrBlockName: SpecificErrorC1_4 - Descr: Opendload detected on warming light ouput of 48xs - SPN: 16521 - FMI: FMI_31_CONDITION_EXISTS - FMIExt: FMIEX_NONE
#define DM_C1_RED_LIGHT_ARG_OPENLOAD_48XS 7
    //!< ErrBlockName: SpecificErrorC1_5 - Descr: Openload detected on red light ARG output of 48xs - SPN: 16529 - FMI: FMI_31_CONDITION_EXISTS - FMIExt: FMIEX_NONE
#define DM_WHITE_LIGHT_AR_15746_48XS_OPENLOAD 7
    //!< ErrBlockName: SpecificErrorC1_7 - Descr: Openload detected on white light ar 15746 48XS - SPN: 16566 - FMI: FMI_31_CONDITION_EXISTS - FMIExt: FMIEX_NONE


#endif // __APP_ERRBITPOS_H__

