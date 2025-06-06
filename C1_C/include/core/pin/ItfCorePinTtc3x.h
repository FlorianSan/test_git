//**************************************************************************************************
/*!
@file       ItfCorePinTtc3x.h
@brief      PIN Interface
@date       14.11.2014
@author     HYDAC/NJP
*/
//**************************************************************************************************

#ifndef __ITFCOREPINTTC3X__
    #define __ITFCOREPINTTC3X__

    #include <autoconfig.h>
    #include <ItfCoreBoard.h>

  #ifdef COMPILER_SWITCH_FAM_TTC3X

    //! Board possibility
    typedef struct
    {
        EBoardIn    eTypeIn;        //!< [DEF]  Input
        EBoardRes   eTypeInDinRes;  //!< [DEF]  Resistor
        EBoardFrq   eTypeInFrq;     //!< [DEF]  Frequency
        EBoardOut   eTypeOut;       //!< [DEF]  Output
        EBoardHls   eTypeOutSide;   //!< [DEF]  High side/low side
        TUint8      u8OutCurMax;    //!< [A/10] Maximum current on output PIN
    }TBoardOptions;

    //! Adc types
    typedef enum
    {// RANGE  0 - 32767
        // === Digital Inputs ===
        ADC_DIN_D = 1,                                 //!< [DEF]    Digital value
        ADC_DIN_S = 2,                                 //!< [DEF]    Digital value status
        // === Voltage ===
        ADC_VIN_V = 3,                                 //!< [mV]     Analogue in voltage
        ADC_VIN_S = 4,                                 //!< [DEF]    Analogue in voltage status
        ADC_VIN_D = 5,                                 //!< [DEF]    Digital value (deduced over the threshold [core feature])
        // === RES ===
        ADC_RES_R = 6,                                 //!< [Ohm]    Analogue in resistor
        ADC_RES_S = 7,                                 //!< [DEF]    Analogue in resistor status
        // === Current ===
        ADC_CIN_C = 8,                                 //!< [µA]     Analogue in current mode
        ADC_CIN_S = 9,                                 //!< [DEF]    Analogue in current status
        ADC_CIN_D = 10,                                //!< [DEF]    Digital value (deduced over the threshold [core feature])
        // === Frequency ===
        ADC_FIN_F = 11,                                //!< [Hz]    Frequency
        ADC_FIN_S = 12,                                //!< [DEF]   Frequency status
        ADC_FIN_V = 13,                                //!< [mV]    Analogue in voltage
        ADC_FIN_VS = 14,                               //!< [DEF]   Analogue in voltage status
        // === Pulse ===
        ADC_PUL_HT = 15,                               //!< [ms]    Pulse length (high time) [16Bit low part:   eCoreAdcGetPinFreshFb(..)]
                                                       //                                    [32Bit full value: eCoreAdcGetPinExtFreshFb(..)]
        ADC_PUL_S = 16,                                //!< [DEF]   Pulse length status
        // === Counter ===
        ADC_COUNTER = 17,                              //!< [cnt]   Counter value
        ADC_COUNTER_S = 18,                            //!< [DEF]   Counter value status
        ADC_COUNTER_V = 19,                            //!< [mV]    Voltage on the PIN
        // === Complex ===
        ADC_CPX_F = 21,                                //!< [Hz]    Frequency
        ADC_CPX_S = 22,                                //!< [Hz]    Frequency status
        ADC_CPX_V = 23,                                //!< [mV]    Analogue in voltage mode
        ADC_CPX_HT = 24,                               //!< [µs]    Pulse length
                                                       //!<            [16Bit low part:   eCoreAdcGetPinFreshFb(..)]
                                                       //!<            [32Bit full value: eCoreAdcGetPinExtFreshFb(..)]
        // === Increment ===
        ADC_INC_CNT = 26,                              //!< [cnt]   Increment value - two PIN solution
        ADC_INC_S  = 27,                               //!< [cnt]   Increment value - status
        ADC_INC_MAS_V = 28,                            //!< [cnt]   Increment value - master PIN voltage
        ADC_INC_SLA_V = 29,                            //!< [cnt]   Increment value - slave PIN voltage
        // ===  PWM Outputs ===
        ADC_PWM_I_MAX = 32,                            //!< [A/10]  Maximum current on PWM output
        ADC_PWM_OUT_DC = 33,                           //!< [DEF]   Give the set duty cycle (must call after DAC_PWM_D/DC)
        ADC_PWM_S = 34,                                //!< [DEF]   PIN status (must call after DAC_PWM_D/DC)
        ADC_PWM_C = 35,                                //!< [mA/10] Actual current
        ADC_PWM_CS = 36,                               //!< [mA/10] Actual current PIN status (must call after ADC_PWM_C)
        ADC_PWM_C_FRESH = 37,                          //!< [DEF]   Actual current is fresh (must call after ADC_PWM_C)
        ADC_PWM_HT = 38,                               //!< [µs]    Pulse length (high time)(must call after DAC_PWM_D/DC)
                                                       //!<            [16Bit low part:   eCoreAdcGetPinFreshFb(..)]
                                                       //!<            [32Bit full value: eCoreAdcGetPinExtFreshFb(..)]
        // === Digital Output ===
        ADC_DOU_OUT_D = 41,                            //!< [DEF]   Give the set DOU value (Bsp feature [driver feedback])
        ADC_DOU_S = 42,                                //!< [DEF]   PIN status  (from last DAC-Call)
        ADC_DOU_V = 43,                                //!< [mV]    Channel digital voltage
        ADC_DOU_C_FRESH = 44,                          //!< [DEF]   Actual current is fresh (must call after ADC_DOU_C)
        ADC_DOU_C = 45,                                //!< [mA/10] Actual current measurement    -> ( Low side PIN only )
        ADC_DOU_CS = 46,                               //!< [DEF]   Status on current measurement -> ( Low side PIN only )
        // === LED Output ===
        ADC_LED_OUT_D = 47,                            //!< [ON/OFF]  Give the set LED value (Bsp feature [driver feedback])
        ADC_LED_S = 48,                                //!< [DEF]     PIN status
        ADC_LED_VAL = 49,                              //!< [VAL]     PIN value If the LED was turned on (led_value = TRUE) this parameter returns the actual
                                                       //!<           This parameter returns the actual voltage on the PIN in mV (Range: 0...10.500V)
        // === PVG Output ===
        ADC_PVG_OUT_P = 50,                            //!< [%/100]   Give the set percent of UBat [percent*100 (1500..8500)]
        ADC_PVG_S = 51,                                //!< [DEF]     PIN status (must call after DAC_PVG)
        // === VOU Output ===
        ADC_VOU_OUT_V = 52,                            //!< [mV]      Give the set VOU value
        ADC_VOU_S = 53,                                //!< [DEF]     PIN status
        ADC_VOU_V = 54,                                //!< [mV]      Voltage feedback
        // === ECU board info ===
        // only system group as PIN always PIN_SYS
        ADC_SYS_UB_ECU_MAX = 55,                       //!< [mV]     MAX controller power  (IMPORTENT ECU MAXIMUM SPEC RANGE)
        ADC_SYS_BAT_OPERATE = 56,                      //!< [mV]     Ecu battery operate value  [1200, 24000]
        ADC_SYS_BAT_CURRENT = 57,                      //!< [mV]     Ecu battery current value
        ADC_SYS_K15_D = 58,                            //!< [ON/OFF] Ignition
        ADC_SYS_SAFE_STATE = 59,                       //!< [ON/OFF] Safe state [on TTC71 emulate -> all outputs off]
        ADC_SYS_POWERSTAGE_ENABLE = 60,                //!< [ON/OFF] Internal PIN for enabling power stages
        ADC_SYS_TEMP = 61,                             //!< [K]      Temperature (°C = x - ADC_KELVIN_OFFSET)
        ADC_SYS_DC_MAX = 62,                           //!< [-]      Maximum duty cycle on PWM output
        ADC_SYS_REF_VOLTAGE = 63,                      //!< [mV]     Reference voltage
                                                       //!           [TTC71 have no support -> Value:0, Pin-Status:PINSTA_ERRINIT]
        ADC_SYS_SENSOR_0_V = 64,                       //!< [mV]     Sensor supply voltage - PIN H3
        ADC_SYS_SAFTEY_SW_00 = 65,                     //!< [ON/OFF] Internal PIN for safety switch 0
        ADC_SYS_SAFTEY_SW_01 = 66,                     //!< [ON/OFF] Internal PIN for safety switch 1
        ADC_SYS_PVG_VOU_00 = 67,                       //!< [ON/OFF] Internal PIN for enable PVG VOU group 0
        ADC_SYS_PVG_VOU_01 = 68,                       //!< [ON/OFF] Internal PIN for enable PVG VOU group 1
        #ifdef COMPILER_SWITCH_SUBFAM_TTC30
        ADC_SYS_NODE_ID0 = 69,                         //!< [mV]     Node ID0              - PIN K0
        ADC_SYS_NODE_ID1 = 70,                         //!< [mV]     Node ID1              - PIN J3
        #endif
    }EAdcTyp;

    //! DAC types
    typedef enum
    {
        DAC_DOU_D = 0,                                 //!< [ON/OFF]       Digital output
        DAC_PWM_D = 1,                                 //!< [ON/OFF]       PWM output on/off
        DAC_PWM_DC = 2,                                //!< [0..MAX_DUTY]  PWM output in proportional values
        DAC_LED_D = 3,                                 //!< [ON/OFF]       LED output
        DAC_PVG_P = 4,                                 //!< [%/100]        Percent of Ubat [percent*100 (1500..8500)]
        DAC_VOU_V = 5,                                 //!< [mV]           Voltage output
        // === ECU board info ===
        // No channel - only system group
        DAC_SYS_K15 = 6,                               //!< [ON/OFF] K15
        DAC_SAFE_STATE = 7,                            //!< [ON/OFF] Safe state
                                                       //!< [on TTC71    emulate -> all outputs off]
                                                       //!< [on TTC50/60 emulate -> all outputs off]
        DAC_SYS_POWERSTAGE_ENABLE = 8,                 //!< [ON/OFF] Internal PIN for enabling power stages
        #ifdef COMPILER_SWITCH_FAM_TTC3X_SAFETY
        DAC_SYS_SAFTEY_SW_00 = 9,                      //!< [ON/OFF] Internal PIN for safety switch 0
        DAC_SYS_SAFTEY_SW_01 = 10,                     //!< [ON/OFF] Internal PIN for safety switch 1
        #endif
        DAC_SYS_PVG_VOU_00 = 11,                       //!< [ON/OFF] Internal PIN for enable PVG VOU group 0
        DAC_SYS_PVG_VOU_01 = 12,                       //!< [ON/OFF] Internal PIN for enable PVG VOU group 1
    }EDacTyp;

    #define ADC_SYS_START   ADC_SYS_UB_ECU_MAX         //!< Start of ADC system input
    #define DAC_SYS_START   DAC_SYS_K15                //!< Start of DAC system output

    //! PIN Status
    typedef enum
    {
        PINSTA_OK                           =  0, //!< PIN is OK
        PINSTA_OPEN                         =  1, //!< PIN is open
        PINSTA_SCGND                        =  2, //!< PIN is short circuit to ground
        PINSTA_SCPOW                        =  3, //!< PIN is short circuit to power
        PINSTA_UNDEF                        =  4, //!< PIN is undefined ( no PIN update since ecu start )
        PINSTA_ERRINIT                      =  5, //!< PIN not installed / PIN don't support the request
        PINSTA_ERRUNDEF                     =  6, //!< PIN status in undefined error
        PINSTA_ERRINUSED                    =  7, //!< Output PIN has been used in that cycle
        PINSTA_OPEN_SCPOW                   =  8, //!< PIN is an open or short circuit to power
        PINSTA_WAR_OVER_CUR                 =  9, //!< PIN have over current - output will temporarily be switched off if the current does not decrease
        PINSTA_PROTECTION                   = 10, //!< PIN in a protection mode
        PINSTA_PROTECTION_REE               = 11, //!< PIN goes from the protection mode to the re-enable mode (automatic)
        PINSTA_PROTECTION_FIX               = 12, //!< PIN is a fix protection mode
        PINSTA_PWD_NOT_FINISHED             = 13, //!< PIN not enough edges to accumulate a result
        PINSTA_PWD_OVERFLOW                 = 14, //!< A timer overflow occurred
        PINSTA_PWD_CAPTURE_ERROR            = 15, //!< The frequency was too high
        PINSTA_PWD_HIGH_LEVEL               = 16, //!< only a constant high level is detected
        PINSTA_PWD_LOW_LEVEL                = 17, //!< only a constant low level is detected
        PINSTA_PWD_INVALID_VOLTAGE          = 18, //!< Invalid voltage value - Fin, PulseWidth can't trust
        PINSTA_INPUT_RANGE                  = 19, //!< CIO-Setting: PWD value out of range / ADC value out of range
        PINSTA_INPUT_SENSOR                 = 20, //!< CIO-Setting: ADC sensor supply check error
        PINSTA_NA                           = 31  //!< PIN Status a not applicable [5 Bits]
    }EPinStatus;

    //! Defines the counter behavior
    typedef enum
    {
        FIN_INC_TWO_COUNT,                  //! Counts up/down on any edge of the two inputs
        FIN_INC_ONE_COUNT                   //! Counts up/down on any edge of one channel
    }EFinIncMode;

    //! Defines threshold
    typedef enum
    {
        FIN_THR_THRESH_1_25V,               //!< Switch threshold 1.25V
        FIN_THR_THRESH_2_5V                 //!< Switch threshold 2.5V
    }EFinThrHold;

    //! Pull up/down interface
    typedef enum
    {
        FIN_RES_PU,                       //!< Pull up
        FIN_RES_PD                        //!< Pull down
    }EFinResistor;

    //!Inc Init Setting
    typedef struct
    {
        EFinIncMode   eMode;                //!< [ENU] Defines the counter behavior
        TUint16       u16CountInit;         //!< [NUM] Initial value of incremental counter (0..65535)
        EFinResistor  eRes;                 //!< [ENU] Resistor
    }TFinIncInit;

    //!Inc Value
    typedef struct
    {
        TBoolean    boFresh;                //!< [Bit] PIN value is fresh
        EPinStatus  ePinSta;                //!< [ENU] PIN status (NOTE: If the status is OK the struct value are update.
                                            //!<                         If the status isn't OK, the old value are hold.)
        TUint16     u16Cnt;                 //!< [NUM] Value of the incremental counter (0..65535)
        TUint16     u16VinMas;              //!< [mV]  ADC value channel 0, Range: 0..32785 (0..32.785V)
        TUint16     u16VinSla;              //!< [mV]  ADC value channel 1, Range: 0..32785 (0..32.785V)
    }TFinIncValue;

    //! Pulse high time
    typedef enum
    {
        FIN_PULS_HIGH_TIME,                 //!< configuration to measure pulse high time
        FIN_PULS_LOW_TIME,                  //!< configuration to measure pulse low time
        FIN_PULS_PERIOD_TIME                //!< configuration to measure pulse high and low time (period)
    }EFinPulsMode;

    //! Specify the variable edge
    typedef enum
    {
        FIN_FREQ_RISING_VAR,               //!< rising edge is variable this means, frequency is measured on falling edges
        FIN_FREQ_FALLING_VAR               //!< falling edge is variable this means, frequency is measured on rising edges
    }EFinFreqMode;

    //! Specify the timer resolution
    typedef enum
    {
        FIN_TIM_RESOLUTION_0_2,            //!< 0.2us
        FIN_TIM_RESOLUTION_0_4,            //!< 0.4us
        FIN_TIM_RESOLUTION_0_8,            //!< 0.8us
        FIN_TIM_RESOLUTION_1_6,            //!< 1.6us
        FIN_TIM_RESOLUTION_3_2             //!< 3.2us
    }EFinTimRes;

    //! FIN complex Init setting
    typedef struct
    {
        EFinPulsMode  ePulsMode;            //!< [ENU] configuration to measure pulse high time
        EFinFreqMode  eFreqMode;            //!< [ENU] Specify the variable edge
        EFinTimRes    eTimRes;              //!< [ENU] Specify the timer resolution
        TUint8        u8CaptCnt;            //!< [NUM] Number of frequency/pulse-width measurements that will be accumulated (0...8)
        EFinResistor  eResistor;            //!< [ENU] Pull up/down interface
    }TFinCpxInit;

    //! Complex Value
    typedef struct
    {
        TBoolean   boFresh;                 //!< [Bit]  PIN value is fresh
        EPinStatus ePinSta;                 //!< [ENU]  PIN status (NOTE: If the status is OK the struct value are update.
                                            //!<                          If the status isn't OK, the old value are hold.)
        TUint16    u16Fin;                  //!< [Hz] Accumulated frequency
        TUint32    u32PulseWidth;           //!< [µs]        Accumulated pulse-width
        TUint16    u16Vin;                  //!< [mV]        Feedback Voltage
        TUint16    u16Dc;                   //!< [%/10] Contains the measured duty cycle in percent
    }TComplexVal;

    //--------------------------------------------------------------------------------------------------
    //! @brief      Set ecu output power stages and the safety switch status
    //! @param[in]  boOn       On:ON or Off: OFF
    //! @retval     R_OKAY     success
    //! @retval     R_UNKNOWN  no success
    //--------------------------------------------------------------------------------------------------
    extern ERetVal eCoreSetEcuOutPowSta( TBoolean boOn );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Get ecu output power status
    //! @param[out] pboSta  On:ON or Off: OFF
    //! @retval     R_OKAY     success
    //! @retval     R_UNKNOWN  no success
    //--------------------------------------------------------------------------------------------------
    extern ERetVal eCoreGetEcuOutPowSta( TBoolean *pboSta );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Allows an application driven safe state \n
    //!             When this function is called the ECU enters the safe state.\n
    //!             In the safe state, no current will be applied to safety-critical outputs of the ECU.\n
    //!             Pins without safety configuration are not affected on HW, e.g. PWM configured without eCoreSetPwmSafetyCfg.
    //! @retval     R_OKAY       - everything fine
    //! @retval     R_CONFIG     - Diagnostic state machine still in init state  (only for the TTC3X)
    //! @retval     R_NOACT      - ECU is already in safe state                  (only for the TTC3X)
    //! @retval     R_UNKNOWN    - unknown error
    //--------------------------------------------------------------------------------------------------
    extern ERetVal eCoreEnterSafeState( TVoid );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Is the Ecu in a safe state?
    //! @param[out] pePin           - PIN_NA: the reason isn't a PIN, ELSE e.g PIN_102: the PIN-Enum
    //! @param[out] peSta           - the PIN reason
    //! @retval     TRUE            - ECU is in 'safe state'
    //! @retval     FALSE           - ECU isn't in 'safe state'
    //--------------------------------------------------------------------------------------------------
    extern TBoolean boCoreSafeStateAct( EPin *pePin, EPinStatus *peSta );

    //--------------------------------------------------------------------------------------------------
    //! @brief       Get Adc value
    //! @note        a. Request of a adc value e.g. ADC_DOU_C give the Dou current on the value pointer back and the
    //!                 PIN status of Dou current as the return value
    //!              b. Request of a status e.g ADC_DOU_CS give the status on the value pointer back and as a return value
    //! @param[in]   eAdcType   - [ENU] ADC type selector
    //! @param[in]   ePin       - [ENU] Ecu-PIN or system PIN
    //! @param[out]  pu16Val    - [VAL] Value - is new if the Fresh-Flag is 'TRUE'
    //!                                         else hold the last value (with Fresh-Flag='TRUE')
    //! @param[out]  pboFresh   - [DEF] Fresh flag
    //! @return      EPinStauts - [ENU] PIN status
    //--------------------------------------------------------------------------------------------------
    extern EPinStatus eCoreAdcGetPinFreshFb( EAdcTyp eAdcType, EPin ePin, TUint16 *pu16Val, TBoolean *pboFresh );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Get adc extended value fresh feedback
    //! @note       a. Request of a adc value e.g. ADC_DOU_C give the Dou current on the value pointer back and the
    //!                PIN status of Dou current as the return value
    //!             b. Request of a status e.g ADC_DOU_CS give the status on the value pointer back and as a return value
    //!             Supported values (all other values are only 16Bit values (the max is U16_MAX))
    //!               ADC_PUL_HT: TTC3x, TTC5x, TTC77
    //!               ADC_PWM_HT: TTC3x, TTC5x, TTC77
    //!               ADC_CPX_HT: TTC3x, TTC5x, TTC77, TTC5xx
    //!               ADC_RES_R:  TTC5xx
    //! @param[in]  eAdcType   - [ENU] ADC type selector
    //! @param[in]  ePin       - [ENU] Ecu-PIN or system PIN
    //! @param[out] pu32Val    - [VAL] Value - is new if the fresh flag is 'TRUE'
    //!                                        else hold the last value (with Fresh-Flag='TRUE')
    //! @param[out] pboFresh   - [DEF] Fresh flag
    //! @retval     EPinStatus - [ENU] PIN status
    //--------------------------------------------------------------------------------------------------
    extern EPinStatus eCoreAdcGetPinExtFreshFb( EAdcTyp eAdcType, EPin ePin, TUint32 *pu32Val, TBoolean *pboFresh );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Get Adc value - simple
    //! @param[in]  eAdcType   - [ENU] ADC selector
    //! @param[in]  ePin       - [ENU] Ecu-PIN or system PIN
    //! @retval     PIN status - [ENU] is the PINSTA convert to a U16-Value (e.g ADC_PWM_S)
    //! @retval     Adc value  - [VAL] if the PINSTA == PINSTA_OK give the ADC value (e.g ADC_PWM_C)
    //! @retval                  [ERR] if the PINSTA != PINSTA_OK the value is 0
    //--------------------------------------------------------------------------------------------------
    extern TUint16 u16CoreAdcGetPin( EAdcTyp eAdcType, EPin ePin );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Get an extended Adc "u32" value - simple
    //!             Supported values (all other values are only 16Bit values (the max is U16_MAX))
    //!               ADC_PUL_HT: TTC3x, TTC5x, TTC77
    //!               ADC_PWM_HT: TTC3x, TTC5x, TTC77
    //!               ADC_CPX_HT: TTC3x, TTC5x, TTC77, TTC5xx
    //! @param[in]  eAdcType   - [ENU] ADC selector
    //! @param[in]  ePin       - [ENU] Ecu-PIN or system PIN
    //! @retval     PIN status - [ENU] is the PINSTA convert to a U16-Value (e.g ADC_PWM_S)
    //! @retval     Adc value  - [VAL] if the PINSTA == PINSTA_OK give the ADC value (e.g ADC_PWM_C)
    //! @retval                  [ERR] if the PINSTA != PINSTA_OK the value is 0
    //--------------------------------------------------------------------------------------------------
    extern TUint32 u32CoreAdcGetPinExt( EAdcTyp eAdcType, EPin ePin );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Get Adc status
    //! @param[in]  eAdcType   - [ENU] ADC type selector
    //! @param[in]  ePin       - [ENU] Ecu-PIN or system PIN
    //! @retval     PIN Status - [ENU] PIN status
    //--------------------------------------------------------------------------------------------------
    extern EPinStatus eCoreAdcGetPinSta( EAdcTyp eAdcType, EPin ePin );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Re-initialize a incremental interface
    //! @param[in]  ePin           - [ENU] Ecu-Inc-PIN
    //! @param[in]  ptIncInit      - [STU] Init structure
    //! @retval     R_OKAY         - OK
    //! @retval     R_RANGE        - ePIN not in rang - PIN number not there
    //! @retval     R_CONFIG       - ePin isn't a 'complex FIN PIN'
    //! @retval     R_PARAMETER     - wrong parameter
    //! @retval     R_INCONSISTENT - Fin can't be re-init, because a de-init it not possible
    //! @retval     R_NULL_POINTER - pointer of ptCpxInit is NULL
    //--------------------------------------------------------------------------------------------------
    extern ERetVal eCorePinReInitFinInc( EPin ePin, TFinIncInit *ptIncInit );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Adc incremental interface
    //! @param[in]  ePin           - [ENU] Ecu-Inc-PIN (MASTER-PIN)
    //! @param[in]  ptVal          - [STU] Init structure
    //! @retval     R_OKAY         - OK
    //!             R_UNKNOWN      - ptVal has an error  -> all values are invalid (BSP-function is called)
    //!             R_CONFIG       - wrong configuration -> Incorrect PIN (NO BSP-function is called)
    //! @retval     R_NULL_POINTER - pointer of ptCpxInit is NULL
    //--------------------------------------------------------------------------------------------------
    extern ERetVal eCoreAdcGetPinFinInc( EPin ePin, TFinIncValue *ptVal );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Get the Adc value of a complex frequency input
    //! @brief      TTC3X  -> eStaPin=> PINSTA_OK, PINSTA_PWD_NOT_FINISHED, PINSTA_PWD_OVERFLOW, PINSTA_PWD_CAPTURE_ERROR
    //! @brief                tVal   => u16Fin, u32PulseWidth, u16Dc, u16Vin
    //! @brief      TTC5X  -> eStaPin=> PINSTA_OK, PINSTA_PWD_NOT_FINISHED, PINSTA_PWD_OVERFLOW, PINSTA_PWD_CAPTURE_ERROR,
    //! @brief                          PINSTA_PWD_CURRENT_THRESHOLD_HIGH, PINSTA_PWD_CURRENT_THRESHOLD_LOW
    //! @brief                tVal   => u16Fin, u32PulseWidth
    //! @brief      TTC7X  -> eStaPin=> PINSTA_OK, PINSTA_PWD_NOT_FINISHED, PINSTA_PWD_CAPTURE_ERROR, PINSTA_PWD_OVERFLOW
    //! @brief                tVal   => u16Fin, u32PulseWidth, u16Vin
    //! @brief      TTC5XX -> eStaPin=> PINSTA_OK, PINSTA_PWD_NOT_FINISHED, PINSTA_PWD_OVERFLOW
    //! @brief                          PINSTA_PWD_INVALID_CPX     -> only the voltage value are valid
    //! @brief                          PINSTA_PWD_INVALID_VOLTAGE -> all values are valid, except the voltage value
    //! @brief                          PINSTA_ERRUNDEF            -> CPX-Value & VIN-Value are invalid (but BSP-Function was called)
    //! @brief                tVal   => u16Fin, u32PulseWidth, u16Vin, u16Cnt
    //!                                 NOTE: u16Vin - PIN:101,125,150,174,102,126,151,175 are not supported - the value is always U16_UNDEF
    //!                                 NOTE: u16Cnt - PIN:115,139,116,140,117,141 are supported - all other pins have the value U16_UNDEF
    //! @param[in]  ePin       - [ENU] Ecu complex PIN like the PINTYPE_FIN
    //! @param[out] ptVal      - [STU] Get the complex value struct back
    //! @retval     R_OKAY         - access is OK        -> check in addition the 'ptVal->ePinSta' status [PIN_OKAY, PINSTA_PWD_xxx]
    //!             R_UNKNOWN      - ptVal has an error  -> all values are invalid (BSP-function is called)
    //!             R_CONFIG       - wrong configuration -> Incorrect PIN (NO BSP-function is called)
    //! @retval     R_NULL_POINTER - pointer of ptCpxInit is NULL
    //--------------------------------------------------------------------------------------------------
    extern ERetVal eCoreAdcGetPinFinCpx( EPin ePin, TComplexVal* ptVal );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Set 'counter' or a PIN from type Cnt
    //! @param[in]  ePin       - PIN must be an PIN how are config as a counter
    //! @param[in]  u16Counter - Counter value
    //! @retval     R_OKAY     - OK
    //! @retval     R_CONFIG   - Wrong PIN configuration
    //--------------------------------------------------------------------------------------------------
    extern ERetVal eCoreSetCounterOfPinCnt( EPin ePin, TUint16 u16Counter );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Set 'counter' or a PIN from type inc
    //! @param[in]  ePin       - PIN must be an PIN how are config as a counter
    //! @param[in]  u16Counter - Counter value
    //! @retval     R_OKAY     - OK
    //! @retval     R_CONFIG   - Wrong PIN configuration
    //--------------------------------------------------------------------------------------------------
    extern ERetVal eCoreSetCounterOfPinInc( EPin ePin, TUint16 u16Counter );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Set DAC PIN
    //! @param[in]  eDacType   - [ENU] ADC type selector
    //! @param[in]  ePin       - [ENU] Ecu-PIN or system PIN
    //! @param[in]  u16Val     - [...] Set value
    //! @param[out] pboFresh   - [...] Fresh feedback
    //! @return     EPinStatus
    //--------------------------------------------------------------------------------------------------
    extern EPinStatus eCoreDacSetPinFreshFb( EDacTyp eDacType, EPin ePin, TUint16 u16Val, TBoolean *pboFresh );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Set DAC PIN
    //! @param[in]  eDacType   - [ENU] ADC type selector
    //! @param[in]  ePin       - [ENU] Ecu PIN or system PIN
    //! @param[in]  u16Val     - [...] Set value
    //! @return     EPinStatus
    //--------------------------------------------------------------------------------------------------
    extern EPinStatus eCoreDacSetPin( EDacTyp eDacType, EPin ePin, TUint16 u16Val );

    //! Power-PIN
    typedef enum
    {
        POW_POWERSTAGE_ENABLE,  //!< 0 - Power stage enable (internal PIN - without enabling this signal all power outputs remain low)
        #ifdef COMPILER_SWITCH_FAM_TTC3X_SAFETY
        POW_SAFTEY_SW_00,       //!< 1 - Safety switch 00 -> PIN-B1
        POW_SAFTEY_SW_01,       //!< 2 - Safety switch 01 -> PIN-A1
        #endif
        POW_PVG_VOUT_0_ENABLE,  //!< 3 - Enable PVG group 0
        POW_PVG_VOUT_1_ENABLE,  //!< 4 - Enable PVG group 1
    }EPowerPin;

    //--------------------------------------------------------------------------------------------------
    //! @brief      Set the power state / is a function wrapper for eCoreDacSetPin( ..., PIN_SYS, boOn )
    //! @param[in]  ePin - power PIN
    //! @param[in]  boOn - FALSE,TRUE
    //! @retval     R_OKAY      - everything fine
    //! @retval     R_UNKNOWN   - not fine -> use eCoreDacSetPin( ..., PIN_SYS, boOn ) for more information
    //! @retval     R_SUPPORT   - don't support the PIN
    //--------------------------------------------------------------------------------------------------
    extern ERetVal eCoreSetPowerPinState( EPowerPin ePin, TBoolean boOn );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Get the power state / is a function wrapper for eCoreAdcGetPinFreshFb( ..., PIN_SYS, &u16Val, NULL )
    //! @param[in]  ePin  - power PIN
    //! @param[out] pboOn - TRUE  = switch is 'ON'  - everything OK
    //!                     FALSE = switch is 'OFF' - no OK
    //! @retval     R_OKAY      - everything fine
    //! @retval     R_UNKNOWN   - not fine -> use eCoreAdcGetPinFreshFb( ..., PIN_SYS, &u16Val, NULL ) for more information
    //! @retval     R_SUPPORT   - don't support the PIN
    //--------------------------------------------------------------------------------------------------
    extern ERetVal eCoreGetPowerPinState( EPowerPin ePin, TBoolean *pboOn );

    //--------------------------------------------------------------------------------------------------
    //! @brief       Convert pin number to a pin number in a "String style". E.g. Pin=24 is Pin="B4"
    //! @param[in]   u16Pin Pin Number
    //! @retval      String Pointer
    //! @note        That is only an u16Pin to string convert, it is no pin number valid check function check
    //--------------------------------------------------------------------------------------------------
    extern TChar *pchCoreEcuGivePinNoString( TUint16 u16Pin );

    #ifdef COMPILER_SWITCH_TAR_PC

        //--------------------------------------------------------------------------------------------------
        //! @brief  Suppress the internal ecu PIN control logic. E.g. the SafeState reaction of all PIN's
        //--------------------------------------------------------------------------------------------------
        extern TVoid vCoreSimSuppressEcuLogic( TVoid );

        //--------------------------------------------------------------------------------------------------
        //! @brief      Set Adc Value with fresh flag - a bypass for the simulation [only for the PC-VERSION]
        //! @param[in]  eAdcType   [ENUM]               - ADC type selector
        //! @param[in]  ePin       [PIN_xxx/EAdcSysPin] - Ecu-PIN or system PIN
        //! @param[in]  u16Val      Value
        //! @param[in]  boFresh     boFresh
        //! @return     R_OKAY/R_RANGE
        //! Note:       If ADC_VIN_D force to 'FALSE' and ADC_VIN_V is reading the value is the u16DinThrLo (indirect influence)
        //!             If ADC_VIN_D force to 'TRUE'  and ADC_VIN_V is reading the value is the u16DinThrHi (indirect influence)
        //!             If ADC_VIN_V force to 'x'     and ADC_VIN_D is reading the value is an deduced over the threshold (indirect influence)
        //!             If ADC_CIN_D force to 'FALSE' and ADC_CIN_V is reading the value is the u16DinThrLo (indirect influence)
        //!             If ADC_CIN_D force to 'TRUE'  and ADC_CIN_V is reading the value is the u16DinThrHi (indirect influence)
        //!             If ADC_CIN_V force to 'x'     and ADC_CIN_D is reading the value is an deduced over the threshold (indirect influence)
        //!             All other force value have no indirect influence
        //--------------------------------------------------------------------------------------------------
        extern ERetVal eCoreSimAdcSetPinFresh( EAdcTyp eAdcType, EPin ePin, TUint16 u16Val, TBoolean boFresh );

        //--------------------------------------------------------------------------------------------------
        //! @brief      Set Adc value - a bypass for the simulation [only for the PC-VERSION]
        //! @brief      call eCoreSimAdcSetPinFresh( eAdcType, ePin, TRUE )
        //! @param[in]  eAdcType   - [ENU] ADC type selector
        //! @param[in]  ePin       - [ENU] Ecu-PIN or system PIN
        //! @param[in]  u16Val     - [...] PIN value
        //! @retval     R_OKAY
        //! @retval     R_RANGE
        //! Note:       If ADC_VIN_D force to 'FALSE' and ADC_VIN_V is reading the value is the u16DinThrLo (indirect influence)
        //!             If ADC_VIN_D force to 'TRUE'  and ADC_VIN_V is reading the value is the u16DinThrHi (indirect influence)
        //!             If ADC_VIN_V force to 'x'     and ADC_VIN_D is reading the value is an deduced over the threshold (indirect influence)
        //!             If ADC_CIN_D force to 'FALSE' and ADC_CIN_V is reading the value is the u16DinThrLo (indirect influence)
        //!             If ADC_CIN_D force to 'TRUE'  and ADC_CIN_V is reading the value is the u16DinThrHi (indirect influence)
        //!             If ADC_CIN_V force to 'x'     and ADC_CIN_D is reading the value is an deduced over the threshold (indirect influence)
        //!             All other force value have no indirect influence
        //--------------------------------------------------------------------------------------------------
        extern ERetVal eCoreSimAdcSetPin( EAdcTyp eAdcType, EPin ePin, TUint16 u16Val );

        //--------------------------------------------------------------------------------------------------
        //! @brief      Set the fin complex value - a bypass for the simulation [only for the PC-VERSION]
        //! @param[in]  ePin      - [ENU] Ecu-PIN or system PIN
        //! @param[in]  ptVal     - [...] PIN value
        //! @retval     R_OKAY
        //! @retval     R_RANGE
        //--------------------------------------------------------------------------------------------------
        extern ERetVal eCoreSimAdcFinCpxSetPin( EPin ePin, TComplexVal* ptVal );

        //--------------------------------------------------------------------------------------------------
        //! @brief      Set the fin incremental value - a bypass for the simulation [only for the PC-VERSION]
        //! @param[in]  ePin    - [ENU] Ecu-PIN or system PIN
        //! @param[in]  ptVal   - [...] PIN value
        //! @retval     R_OKAY
        //! @retval     R_RANGE
        //--------------------------------------------------------------------------------------------------
        extern ERetVal eCoreSimAdcFinIncSetPin( EPin ePin, TFinIncValue* ptVal );

        //--------------------------------------------------------------------------------------------------
        //! @brief      Get DAC PIN Value back - a bypass for the simulation [only for the PC-VERSION]
        //! @param[in]  eDacType   - [ENU] ADC type selector
        //! @param[in]  ePin       - [ENU] Ecu-PIN or system PIN
        //! @retval     u16Val     - [...] Get the value
        //--------------------------------------------------------------------------------------------------
        extern TUint16 u16CoreSimDacGetPin( EDacTyp eDacType, EPin ePin );

        //--------------------------------------------------------------------------------------------------
        //! @brief  Install the PINs with PINSTA_OKAY/PINSTA_UNDEF  [only for the PC-VERSION]
        //! @param[in]  boUndef=TRUE  -> Install the PIN with PINSTA_UNDEF - is the case of the HW
        //!             boUndef=FALSE -> Install the PIN with PINSTA_OKAY  - is the default
        //--------------------------------------------------------------------------------------------------
        extern TVoid vCoreSimPinInitUndef( TBoolean boUndef );

    #endif //COMPILER_SWITCH_TAR_PC


    //! Adc safety configuration
    typedef struct
    {
        TUint16 u16AdcValMin;               //!< [mV] Minimum value
        TUint16 u16AdcValMax;               //!< [mV] Maximum value
                                            //!<      ABSOLUTE for  5V: 1mV ... 5000mV
                                            //!<      ABSOLUTE for 10V: 1mV ... 10500mV
                                            //!<      ABSOLUTE for 32V: 1mV ... 32780mV
                                            //!<      RATIOMETRIC:      1mV ... 5000mV
                                            //!<      CURRENT:          1uA ... 25000uA
                                            //!<      RESISTIVE:        1 Ohm ... 65534 Ohm
    }TAdcSafetyCfg;

    //! Inc safety configuration
    typedef struct
    {
        TUint16 u16IncInitVal;              //!< Increment value init (bigger as min lower as max!!)
        TUint16 u16IncValMin;               //!< Increment value min (TTC5XX counter limit [1..65534])
        TUint16 u16IncValMax;               //!< Increment value max (TTC5XX counter limit [1..65534])
    }TIncSafetyCfg;

    //! Cnt safety configuration
    typedef struct
    {
        TUint16 u16CntInitVal;              //!< Counter value init (bigger as min lower as max!!)
        TUint16 u16CntValMin;               //!< Counter value min (TTC5XX counter limit [1..65534])
        TUint16 u16CntValMax;               //!< Counter value max (TTC5XX counter limit [1..65534])
    }TCntSafetyCfg;

    //! Cpx safety configuration
    typedef struct
    {
        TUint16  u16FinValMin;              //!< Upper PWD frequency limit in Hz [1..65534]
        TUint16  u16FinValMax;              //!< Lower PWD frequency limit in Hz [1..65534]
        TUint32  u32PulValMin;              //!< Upper PWD pulse limit in us [1..4294967294]
        TUint32  u32PulValMax;              //!< Lower PWD pulse limit in us [1..4294967294]
    }TCpxSafetyCfg;


    //! PWM safety configuration
    typedef struct
    {
        ESafetyPin eSafetySw;                //!< Connected safety switch (SAFETY_SWITCH_0/SAFETY_SWITCH_1)
        TUint16    u16MarginMin;             //!< Limit in microseconds for the lower minimum pulse.
                                             //!< This limit can be adjusted within 50us to 100us.
                                             //!< Default value: 100
        TUint16    u16MarginMax;             //!< Limit in microseconds for the upper minimum pulse pause.
                                             //!< This limit can be adjusted within 50us to 150us
                                             //!< Default value: 100
        TUint16    u16DcTolerance;           //!< Tolerance in microseconds for the set duty cycle.
                                             //!< This limit can be adjusted within 100us to 200us
                                             //!< Default value: 200
    }TPwmSafetyCfg;

    //--------------------------------------------------------------------------------------------------
    //! @brief     Give the install PIN type back
    //! @param[in] ePin PIN
    //! @retval    PIN type
    //--------------------------------------------------------------------------------------------------
    extern EAppPinTyp eCoreGivePinType( EPin ePin );

    //--------------------------------------------------------------------------------------------------
    //! @brief     Deinstall the PIN (the function will check the PIN type and call the deinstall PIN function)
    //! @param[in] ePin     PIN
    //! @retval    R_OKAY   PIN is deinstall / [if the PIN is free it will return also R_OKAY]
    //! @retval    !R_OKAY  incorrect
    //--------------------------------------------------------------------------------------------------
    extern ERetVal eCoreDeInstallPin( EPin ePin );

    //--------------------------------------------------------------------------------------------------
    //! @brief      eCoreInstallDin
    //! @param[in]  ePin     PIN
    //! @param[in]  ePinRes  Resistor ( if the resistor is fix, it is possible to use here the
    //!                                 correct resistor or PINRES_CFG_NA. PINRES_NA is not allowed )
    //! @retval     R_OKAY   OK
    //! @retval     !R_OKAY  incorrect
    //--------------------------------------------------------------------------------------------------
    extern ERetVal eCoreInstallDin( EPin ePin, EAppPinRes ePinRes );

    //--------------------------------------------------------------------------------------------------
    //! @brief      eCoreDeInstallDin
    //! @param[in]  ePin     PIN
    //! @retval     R_OKAY   OK
    //! @retval     !R_OKAY  incorrect
    //-------------------------------------------------------------------------------------------------
    extern ERetVal eCoreDeInstallDin( EPin ePin );

    //--------------------------------------------------------------------------------------------------
    //! @brief      eInstallRes
    //! @param[in]  ePin     PIN
    //! @retval     R_OKAY   OK
    //! @retval     !R_OKAY  incorrect
    //--------------------------------------------------------------------------------------------------
    extern ERetVal eCoreInstallRes( EPin ePin );

    //--------------------------------------------------------------------------------------------------
    //! @brief      eCoreDeInstallRes
    //! @param[in]  ePin     PIN
    //! @retval     R_OKAY   OK
    //! @retval     !R_OKAY  incorrect
    //------------------------------------------------------------------------------------------------
    extern ERetVal eCoreDeInstallRes( EPin ePin );

    //! Voltage resolution
    //! Voltage range
    typedef enum
    {
        VIN_RANGE_5V,   //!<  5V
        VIN_RANGE_10V   //!< 10V
    }EVinRange;

    //! Voltage supply
    typedef enum
    {
        VIN_PINSUPPLY_NA   = PINSUPPLY_NA,      //!< NA
        VIN_PINSUPPLY_UBAT = PINSUPPLY_UBAT     //!< Bat
    }EVinSupply;

    #ifdef COMPILER_SWITCH_FAM_TTC3X
        //--------------------------------------------------------------------------------------------------
        //! @brief      eCoreInstallVin (standard threshold for ADC_VIN_D Low:2000mV High:3500mV)
        //!             To change the threshold use eCoreInstallVinThr(...) instead of this function.
        //! @param[in]  ePin          PIN
        //! @param[in]  eRatioSupply  IF 'VIN_PINSUPPLY_NA' is a absolute measurement else is ratiometric measurement
        //! @param[in]  eRange        Range
        //! @retval     R_OKAY        OK
        //! @retval     !R_OKAY       incorrect
        //--------------------------------------------------------------------------------------------------
        extern ERetVal eCoreInstallVin( EPin ePin, EVinSupply eRatioSupply, EVinRange eRange );

        //--------------------------------------------------------------------------------------------------
        //! @brief      eCoreInstallVinThr
        //! @param[in]  ePin          PIN
        //! @param[in]  eRatioSupply  IF 'VIN_PINSUPPLY_NA' is a absolute measurement else is ratiometric measurement
        //! @param[in]  eRange        Range
        //! @param[in]  u16ThrLo [mV] Threshold low
        //! @param[in]  u16ThrHi [mV] Threshold high
        //! @retval     R_OKAY        OK
        //! @retval     !R_OKAY       incorrect
        //--------------------------------------------------------------------------------------------------
        extern ERetVal eCoreInstallVinThr( EPin ePin, EVinSupply eRatioSupply, EVinRange eRange, TUint16 u16ThrLo, TUint16 u16ThrHi );
    #endif

    //--------------------------------------------------------------------------------------------------
    //! @brief      eCoreDeInstallDin
    //! @param[in]  ePin     PIN
    //! @retval     R_OKAY   OK
    //! @retval     !R_OKAY  incorrect
    //--------------------------------------------------------------------------------------------------
    extern ERetVal eCoreDeInstallVin( EPin ePin );

    //--------------------------------------------------------------------------------------------------
    //! @brief      eCoreInstallCin (standard threshold for ADC_CIN_D low: 5000µA high: 15000µA)
    //!             To change the threshold use eCoreInstallCinThr(...) instead of this function.
    //! @param[in]  ePin     PIN
    //! @retval     R_OKAY   OK
    //! @retval     !R_OKAY  incorrect
    //--------------------------------------------------------------------------------------------------
    extern ERetVal eCoreInstallCin( EPin ePin );

    //--------------------------------------------------------------------------------------------------
    //! @brief      eCoreInstallCinThr
    //! @param[in]  ePin     PIN
    //! @param[in]  u16ThrLo Threshold low [µA]
    //! @param[in]  u16ThrHi Threshold high [µA]
    //! @retval     R_OKAY        - OK
    //! @retval     R_PIN_FIX     - PIN is fix
    //! @retval     R_CONFIG      - no PIN config
    //! @retval     R_RANGE       - incorrect threshold (e.g. u16ThrLo >= u16ThrHi)
    //--------------------------------------------------------------------------------------------------
    extern ERetVal eCoreInstallCinThr( EPin ePin, TUint16 u16ThrLo, TUint16 u16ThrHi );

    //--------------------------------------------------------------------------------------------------
    //! @brief      eCoreDeInstallCin
    //! @param[in]  ePin     PIN
    //! @retval     R_OKAY   OK
    //! @retval     !R_OKAY  incorrect
    //-------------------------------------------------------------------------------------------------
    extern ERetVal eCoreDeInstallCin( EPin ePin );

    //--------------------------------------------------------------------------------------------------
    //! @brief      eCoreInstallFin
    //! @param[in]  ePin     PIN
    //! @retval     R_OKAY   OK
    //! @retval     !R_OKAY  incorrect
    //--------------------------------------------------------------------------------------------------
    extern ERetVal eCoreInstallFin( EPin ePin );

    //--------------------------------------------------------------------------------------------------
    //! @brief      eCoreDeInstallFin
    //! @param[in]  ePin     PIN
    //! @retval     R_OKAY   OK
    //! @retval     !R_OKAY  incorrect
    //-------------------------------------------------------------------------------------------------
    extern ERetVal eCoreDeInstallFin( EPin ePin );

    //--------------------------------------------------------------------------------------------------
    //! @brief      eCoreInstallPul
    //! @param[in]  ePin     PIN
    //! @retval     R_OKAY   OK
    //! @retval     !R_OKAY  incorrect
    //--------------------------------------------------------------------------------------------------
    extern ERetVal eCoreInstallPul( EPin ePin );

    //--------------------------------------------------------------------------------------------------
    //! @brief      eCoreDeInstallPul
    //! @param[in]  ePin     PIN
    //! @retval     R_OKAY   OK
    //! @retval     !R_OKAY  incorrect
    //-------------------------------------------------------------------------------------------------
    extern ERetVal eCoreDeInstallPul( EPin ePin );

    //--------------------------------------------------------------------------------------------------
    //! @brief      eCoreInstallCnt
    //! @param[in]  ePin     PIN
    //! @retval     R_OKAY   OK
    //! @retval     !R_OKAY  incorrect
    //--------------------------------------------------------------------------------------------------
    extern ERetVal eCoreInstallCnt( EPin ePin );

    //--------------------------------------------------------------------------------------------------
    //! @brief      eCoreInstallCnt
    //! @param[in]  ePin     PIN
    //! @param[in]  ePinRes  Resistor mode
    //! @param[in]  ePinCnt  Counter mode
    //! @retval     R_OKAY   OK
    //! @retval     !R_OKAY  incorrect
    //--------------------------------------------------------------------------------------------------
    extern ERetVal eCoreInstallCntFull( EPin ePin, EAppPinRes ePinRes, EAppPinCnt ePinCnt );

    //--------------------------------------------------------------------------------------------------
    //! @brief      eCoreDeInstallCnt
    //! @param[in]  ePin     PIN
    //! @retval     R_OKAY   OK
    //! @retval     !R_OKAY  incorrect
    //-------------------------------------------------------------------------------------------------
    extern ERetVal eCoreDeInstallCnt( EPin ePin );

    //--------------------------------------------------------------------------------------------------
    //! @brief      eCoreInstallInc
    //! @param[in]  ePin      PIN
    //! @param[in]  ptIncInit Init struct
    //! @retval     R_OKAY    OK
    //! @retval     !R_OKAY   incorrect
    //--------------------------------------------------------------------------------------------------
    extern ERetVal eCoreInstallInc( EPin ePin, TFinIncInit *ptIncInit );

    //--------------------------------------------------------------------------------------------------
    //! @brief      eCoreDeInstallInc
    //! @param[in]  ePin     PIN
    //! @retval     R_OKAY   OK
    //! @retval     !R_OKAY  incorrect
    //-------------------------------------------------------------------------------------------------
    extern ERetVal eCoreDeInstallInc( EPin ePin );

    //--------------------------------------------------------------------------------------------------
    //! @brief      eCoreInstallCpx
    //! @param[in]  ePin       PIN
    //! @param[in]  ptCpxInit  Init values
    //! @retval     R_OKAY     OK
    //! @retval     !R_OKAY    incorrect
    //--------------------------------------------------------------------------------------------------
    extern ERetVal eCoreInstallCpx( EPin ePin, TFinCpxInit *ptCpxInit );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Re-initialize a complex  frequency input
    //! @brief      which measures at once: pulse width and frequency and
    //! @brief      depending on hardware "analog voltage" (5x, 7x, 5xx)
    //! @param[in]  ePin           - [ENU] Ecu-FIN-PIN
    //! @param[in]  ptCpxInit      - [STU] Init structure
    //! @retval     R_OKAY         - OK
    //! @retval     R_RANGE        - ePin not in rang - PIN number not there
    //! @retval     R_CONFIG       - ePin isn't a 'Complex FIN PIN'
    //! @retval     R_PARAMETER    - Wrong parameter
    //! @retval     R_INCONSISTENT - Fin can't be reinit, because a deinit it not possible
    //! @retval     R_NULL_POINTER - Pointer of ptCpxInit is NULL
    //--------------------------------------------------------------------------------------------------
    extern ERetVal eCorePinReInitFinCpx( EPin ePin, TFinCpxInit *ptCpxInit );

    //--------------------------------------------------------------------------------------------------
    //! @brief      eCoreDeInstallCpx
    //! @param[in]  ePin     PIN
    //! @retval     R_OKAY   OK
    //! @retval     !R_OKAY  incorrect
    //-------------------------------------------------------------------------------------------------
    extern ERetVal eCoreDeInstallCpx( EPin ePin );

    //--------------------------------------------------------------------------------------------------
    //! @brief      eCoreInstallDou
    //! @param[in]  ePin     PIN
    //! @retval     R_OKAY   OK
    //! @retval     !R_OKAY  incorrect
    //--------------------------------------------------------------------------------------------------
    extern ERetVal eCoreInstallDou( EPin ePin );

    //--------------------------------------------------------------------------------------------------
    //! @brief      eCoreDeInstallDou
    //! @param[in]  ePin     PIN
    //! @retval     R_OKAY   OK
    //! @retval     !R_OKAY  incorrect
    //-------------------------------------------------------------------------------------------------
    extern ERetVal eCoreDeInstallDou( EPin ePin );


    //--------------------------------------------------------------------------------------------------
    //! @brief      Set usage of diag margin for selected pin
    //! @details    use before pin is installed(vAppSafetyInit), setting persists after soft reset
    //! @warning    Reduces diagnostic capabilities, check block behavior and might cause pin status indicating an error
    //!             for very high or very low duty cycles. Check block behavior.
    //! @param[in]  ePin       Pin
    //! @param[in]  boMargin   TRUE: diag margin used, FALSE: not used
    //--------------------------------------------------------------------------------------------------
    extern ERetVal eCoreInstallPwmDiagMarginMode( EPin ePin, TBoolean boMargin );

    //--------------------------------------------------------------------------------------------------
    //! @brief      eCoreInstallPwm
    //! @param[in]  ePin     PIN
    //! @param[in]  ePinFb   Feedback PIN
    //! @retval     R_OKAY   OK
    //! @retval     !R_OKAY  incorrect
    //--------------------------------------------------------------------------------------------------
    extern ERetVal eCoreInstallPwm( EPin ePin, TUint16 u16PinFreq );

    //--------------------------------------------------------------------------------------------------
    //! @brief      eCoreDeInstallPwm
    //! @param[in]  ePin     PIN
    //! @retval     R_OKAY   OK
    //! @retval     !R_OKAY  incorrect
    //-------------------------------------------------------------------------------------------------
    extern ERetVal eCoreDeInstallPwm( EPin ePin );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Get the Install frequency from the PWM PIN!
    //! @param[in]  ePin     PIN
    //! @retval     frequency in Hz
    //-------------------------------------------------------------------------------------------------
    extern TUint16 u16CorePwmGetFreq( EPin ePin );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Check the PWM frequency Init value
    //! @param[in]  u16Freq  Hz
    //-------------------------------------------------------------------------------------------------
    extern TBoolean boCoreCheckPwmFreqInit( TUint16 u16Freq );

    //--------------------------------------------------------------------------------------------------
    //! @brief      eCoreInstallLed
    //! @param[in]  ePin     PIN
    //! @retval     R_OKAY   OK
    //! @retval     !R_OKAY  incorrect
    //-------------------------------------------------------------------------------------------------
    extern ERetVal eCoreInstallLed( EPin ePin );

    //--------------------------------------------------------------------------------------------------
    //! @brief      eCoreDeInstallLed
    //! @param[in]  ePin     PIN
    //! @retval     R_OKAY   OK
    //! @retval     !R_OKAY  incorrect
    //-------------------------------------------------------------------------------------------------
    extern ERetVal eCoreDeInstallLed( EPin ePin );

    //--------------------------------------------------------------------------------------------------
    //! @brief      eCoreInstallPvg
    //!             If the call is after eAppStartUp()-Phase the outputs, will only be activated after enabling them
    //!             via eCoreDacSetPin( DAC_SYS_PVG_VOU_00/01, PIN_SYS, TRUE ) - if that is not active.
    //!             See eCoreDeInstallPvg for possible issues with (re)installing pins
    //! @param[in]  ePin          PIN
    //! @param[in]  u16InitValue  init value [1500..8500]
    //! @retval     R_OKAY        OK
    //! @retval     !R_OKAY       incorrect [Init value not in range: 1500..8500]
    //-------------------------------------------------------------------------------------------------
    extern ERetVal eCoreInstallPvg( EPin ePin, TUint16 u16InitValue );

    //--------------------------------------------------------------------------------------------------
    //! @brief      eCoreDeInstallPvg
    //!             WARNING:
    //!             After deinitializing PVG/VOUT channels they may not be reinstalled without hard reset
    //!             See TTC Driver(IO_PVG.h)
    //! @param[in]  ePin     PIN
    //! @retval     R_OKAY   OK
    //! @retval     !R_OKAY  incorrect
    //-------------------------------------------------------------------------------------------------
    extern ERetVal eCoreDeInstallPvg( EPin ePin );

    //--------------------------------------------------------------------------------------------------
    //! @brief      eCoreInstallVou
    //!             ONLY for the TTC3X
    //!             If the call is after eAppStartUp()-Phase the outputs, will only be activated after enabling them
    //!             via eCoreDacSetPin( DAC_SYS_PVG_VOU_00/01, PIN_SYS, TRUE ) - if that is not active.
    //!             See eCoreDeInstallVou for possible issues with (re)installing pins
    //! @param[in]  ePin     PIN
    //! @retval     R_OKAY   OK
    //! @retval     !R_OKAY  incorrect
    //-------------------------------------------------------------------------------------------------
    extern ERetVal eCoreInstallVou( EPin ePin );

    //--------------------------------------------------------------------------------------------------
    //! @brief      eCoreDeInstallVou
    //!             WARNING:
    //!             After deinitializing PVG/VOUT channels they may not be reinstalled without hard reset
    //!             See TTC Driver(IO_Vout.h)
    //! @param[in]  ePin     PIN
    //! @retval     R_OKAY   OK
    //! @retval     !R_OKAY  incorrect
    //-------------------------------------------------------------------------------------------------
    extern ERetVal eCoreDeInstallVou( EPin ePin );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Set the 'safety configuration' setting for the ADC PIN
    //!             Important Note: This must set in the vAppSafetyInit function and before the PIN install function.
    //! @param[in]  ePin        - PIN
    //! @param[in]  ptAdc       - Safety configuration pointer / NULL - Take the default values
    //! @param[in]  boSafeState - SafeState active
    //! @retval     R_OKAY          - fine
    //! @retval     R_RANGE         - PIN is out of range
    //! @retval     R_PHASE         - Call in the wrong app phase
    //! @retval     R_CONFIG        - PIN have a other safety setting
    //! @retval     R_MEMORY        - don't have memory for the safety setting
    //--------------------------------------------------------------------------------------------------
    extern ERetVal eCoreSetAdcSafetyCfg( EPin ePin, TAdcSafetyCfg *ptAdc, TBoolean boSafeState );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Get the 'safety configuration' for the ADC PIN
    //!             Important Note: This function can call after eAppStartUp function
    //! @param[in]  ePin           - PIN
    //! @param[out] ptAdc          - Safety configuration
    //! @param[out] pboSafeState   - SafeState active
    //! @retval     R_OKAY         - fine
    //! @retval     R_RANGE        - PIN to high
    //! @retval     R_CONFIG       - No from the type ADC
    //! @retval     R_SUPPORT      - PIN have no safety setting (call it for manual after eCoreSetXxSafetyCfg() call)
    //!                                                         (call it for PDT setting in or after the eAppPreStart()-Phase)
    //! @retval     R_NULL_POINTER - Parameter pointer is NULL
    //--------------------------------------------------------------------------------------------------
    extern ERetVal eCoreGetAdcSafetyCfg( EPin ePin, TAdcSafetyCfg *ptAdc, TBoolean *pboSafeState );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Set the 'safety configuration' setting for the INC PIN
    //!             Important Note: This must set in the vAppSafetyInit function and before the PIN install function.
    //! @param[in]  ePin        - PIN
    //! @param[in]  ptInc       - safety configuration pointer / NULL - Take the default values
    //! @param[in]  boSafeState - SafeState active
    //! @retval     R_OKAY          - fine
    //! @retval     R_RANGE         - PIN is out of range
    //! @retval     R_PHASE         - Call in the wrong App-Phase
    //! @retval     R_CONFIG        - PIN have a other safety setting
    //! @retval     R_MEMORY        - don't have memory for the safety setting
    //--------------------------------------------------------------------------------------------------
    extern ERetVal eCoreSetIncSafetyCfg( EPin ePin, TIncSafetyCfg *ptInc, TBoolean boSafeState );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Get the 'safety configuration' for the INC PIN
    //!             Important Note: This function can call after eAppStartUp-function
    //! @param[in]  ePin            - PIN
    //! @param[out] ptAdc           - Safety configuration
    //! @param[out] pboSafeState    - SafeState active
    //! @retval     R_OKAY          - fine
    //! @retval     R_RANGE         - PIN to high
    //! @retval     R_CONFIG        - No from the Type INC
    //! @retval     R_SUPPORT       - PIN have no safety setting (call it for manual after eCoreSetXxSafetyCfg() call)
    //!                                                          (call it for PDT setting in or after the eAppPreStart()-Phase)
    //! @retval     R_NULL_POINTER - Parameter Pointer is NULL
    //--------------------------------------------------------------------------------------------------
    extern ERetVal eCoreGetIncSafetyCfg( EPin ePin, TIncSafetyCfg *ptInc, TBoolean *pboSafeState );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Set the 'safety configuration' setting for the Cnt PIN
    //!             Important Note: This must set in the vAppSafetyInit function and before the PIN install function.
    //! @param[in]  ePin        - PIN
    //! @param[in]  ptCnt       - Safety configuration pointer / NULL - Take the default values
    //! @param[in]  boSafeState - SafeState active
    //! @retval     R_OKAY          - fine
    //! @retval     R_RANGE         - PIN is out of range
    //! @retval     R_PHASE         - Call in the wrong App-Phase
    //! @retval     R_CONFIG        - PIN have a other safety setting
    //! @retval     R_MEMORY        - don't have memory for the safety setting
    //--------------------------------------------------------------------------------------------------
    extern ERetVal eCoreSetCntSafetyCfg( EPin ePin, TCntSafetyCfg *ptCnt, TBoolean boSafeState );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Get the 'safety configuration' for the Cnt PIN
    //!             Important Note: This function can call after eAppStartUp function
    //! @param[in]  ePin            - PIN
    //! @param[in]  ptCnt           - Safety configuration
    //! @param[in]  pboSafeState    - Safe state active
    //! @retval     R_OKAY         - fine
    //! @retval     R_RANGE        - PIN to high
    //! @retval     R_CONFIG       - No from the type ADC
    //! @retval     R_SUPPORT      - PIN have no safety setting (call it for manual after eCoreSetXxSafetyCfg() call)
    //!                                                         (call it for PDT setting in or after the eAppPreStart()-phase)
    //! @retval     R_NULL_POINTER - Parameter pointer is NULL
    //--------------------------------------------------------------------------------------------------
    extern ERetVal eCoreGetCntSafetyCfg( EPin ePin, TCntSafetyCfg *ptCnt, TBoolean *pboSafeState );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Set the 'safety configuration' setting for the Cpx PIN
    //!             Important Note: This must set in the vAppSafetyInit-function and before the PIN install function.
    //! @param[in]  ePin        - PIN
    //! @param[in]  ptCpx       - Safety configuration pointer / NULL - take the default values
    //! @param[in]  boSafeState - Safe state active
    //! @retval     R_OKAY          - fine
    //! @retval     R_RANGE         - PIN is out of range
    //! @retval     R_PHASE         - Call in the wrong App phase
    //! @retval     R_CONFIG        - PIN have a other safety setting
    //! @retval     R_MEMORY        - don't have memory for the safety setting
    //--------------------------------------------------------------------------------------------------
    extern ERetVal eCoreSetCpxSafetyCfg( EPin ePin, TCpxSafetyCfg *ptCpx, TBoolean boSafeState );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Get the 'safety configuration' for the Cpx PIN
    //!             Important Note: This function can call after eAppStartUp-function
    //! @param[in]  ePin            - PIN
    //! @param[in]  ptCpx           - Safety configuration
    //! @param[in]  pboSafeState    - SafeState active
    //! @retval     R_OKAY          - fine
    //! @retval     R_RANGE         - PIN is out of range
    //! @retval     R_CONFIG        - No from the type CPX
    //! @retval     R_SUPPORT       - PIN have no safety setting (call it for manual after eCoreSetXxSafetyCfg() call)
    //!                                                          (call it for PDT setting in or after the eAppPreStart() phase)
    //! @retval     R_NULL_POINTER  - Parameter Pointer is NULL
    //--------------------------------------------------------------------------------------------------
    extern ERetVal eCoreGetCpxSafetyCfg( EPin ePin, TCpxSafetyCfg *ptCpx, TBoolean *pboSafeState );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Set the 'safety configuration' setting for the PWM-PIN
    //!             Important Note: This must set in the vAppSafetyInit-function and before the PIN install function.
    //! @param[in]  ePin        - PIN
    //! @param[in]  ptPwm       - Safety configuration pointer / NULL - take the default values
    //! @param[in]  boSafeState - SafeState active
    //! @retval     R_OKAY          - Fine
    //! @retval     R_RANGE         - PIN is out of range
    //! @retval     R_PHASE         - Call in the wrong App phase
    //! @retval     R_CONFIG        - PIN have a other safety setting
    //! @retval     R_MEMORY        - Don't have memory for the safety setting
    //--------------------------------------------------------------------------------------------------
    extern ERetVal eCoreSetPwmSafetyCfg( EPin ePin, TPwmSafetyCfg *ptPwm, TBoolean boSafeState );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Get the 'safety configuration' for the PWM-PIN
    //!             Important Note: This function can call after eAppStartUp-function
    //! @param[in]  ePin            - PIN
    //! @param[in]  ptDou           - Safety configuration
    //! @param[in]  pboSafeState    - SafeState active
    //! @param[in]  pboPwmPinDeact  - Deactivate the Dou-PIN (boSafeState must be 'FALSE')
    //! @retval     R_OKAY          - fine
    //! @retval     R_RANGE         - PIN is out of range
    //! @retval     R_PHASE         - Call in the wrong App-Phase
    //! @retval     R_SUPPORT       - No safety PIN
    //! @retval     R_RANGE         - PIN to high
    //! @retval     R_CONFIG        - No from the Type PWM
    //! @retval     R_NULL_POINTER  - Parameter pointer is NULL
    //--------------------------------------------------------------------------------------------------
    extern ERetVal eCoreGetPwmSafetyCfg( EPin ePin, TPwmSafetyCfg *ptPwm, TBoolean *pboSafeState );

    //--------------------------------------------------------------------------------------------------
    //! @brief     Check the PWM safety PINs
    //! @param[in] ePin         - PWM PIN
    //! @retval    PINSTA_OK    - Is fine
    //! @retval    PINSTA_OPEN  - Switch is open - the reason was that 'ePin'
    //! @retval    PINSTA_UNDEF - Ecu is in 'Safe State' - the reason was not 'ePin'
    //--------------------------------------------------------------------------------------------------
    extern EPinStatus eCorePwmSafetySwitchCheck( EPin ePin );

    //--------------------------------------------------------------------------------------------------
    //! @brief     Relay Pre Test - Is the BSP test. Checks for open load on high side PWM outputs.
    //! @retval    TRUE  - Relay startup test is OK. Relay startup test is OK (no open load present on high side PWM outputs)
    //! @retval    FALSE - Relay startup test failed (see eCoreRelayPostTest() )
    //--------------------------------------------------------------------------------------------------
    extern TBoolean boCoreRelayStartUpTest( TVoid );

    //--------------------------------------------------------------------------------------------------
    //! @brief     Relay post test (Call it in each task cycle until != R_BUSY)
    //! @param     ePinPwm     - PWM safety PIN
    //! @param     ePinSafeySw - Relay low side PIN with the PWM safety PIN connection
    //! @param     u16PwmOnDc  - On PWM duty cycle  [21Ohm valve >= 15000]
    //! @param     u16PwmOffDc - Off PWM duty cycle [default 0 ]
    //! @retval    R_OKAY      - Relay post test is successful past - test is finished (go ahead)
    //! @retval    R_NOACT     - ePinPwm have a 'Open Load'
    //! @retval    R_UNKNOWN   - PIN is not install
    //! @retval    R_BUSY      - Relay test is working
    //! @retval    R_SUPPORT   - Relay test failed
    //--------------------------------------------------------------------------------------------------
    extern ERetVal eCoreRelayPostTest( EPin ePinPwm, EPowerPin ePinSafeySw, TUint16 u16PwmOnDc, TUint16 u16PwmOffDc );

    //--------------------------------------------------------------------------------------------------
    //! @brief     Re-config PIN option (can use until the eAppInit() )
    //! @param[in] ePin      - PIN
    //! @param[in] u8OptNo   - Option number
    //! @retval    R_OKAY    - Is fine
    //! @retval    R_CONFIG  - Invalid configuration
    //--------------------------------------------------------------------------------------------------
    extern ERetVal eCoreReConfigPinOpt( EPin ePin, TUint8 u8OptNo );

    //--------------------------------------------------------------------------------------------------
    //! @brief     Re-config PIN option for the extended part (second application)
    //! @brief     (can use until the eAppInit() )
    //! @param[in] ePin      - PIN
    //! @param[in] u8OptNo   - Option number
    //! @retval    R_OKAY    - Is fine
    //! @retval    R_CONFIG  - Invalid configuration
    //--------------------------------------------------------------------------------------------------
    extern ERetVal eCoreReConfigPinOptExt( EPin ePin, TUint8 u8OptNo );

    //--------------------------------------------------------------------------------------------------
    //! @brief     Give the application PIN
    //! @param[in] ePin      - PIN
    //! @retval    !=NULL    - PIN setting
    //! @retval    NULL      - PIN not valid
    //--------------------------------------------------------------------------------------------------
    extern const TAppPin *cptAppPinSetting( EPin ePin );

    //--------------------------------------------------------------------------------------------------
    //! @brief     Give the all possible PIN option on that board
    //! @param[in]  ePin           - PIN
    //! @param[out] ptOpt          - Output struct
    //! @retval     R_OKAY         - fine
    //! @retval     R_RANGE        - PIN not valid
    //! @retval     R_NULL_POINTER - Output Pointer in NULL
    //--------------------------------------------------------------------------------------------------
    extern ERetVal eCoreBoardPinInfo( EPin ePin, TBoardOptions *ptOpt  );

    //--------------------------------------------------------------------------------------------------
    //! @brief       Control function for the PIN forcing (MST->ECU)
    //!              - the PIN forcing support only the AppRun phase
    //!              - advice use that function in the AppInit phase or AppRun phase, but all other phase are not forbidden.
    //! @param[in]   boEnable     FALSE: forcing is not possible, TRUE: the MST can force the PIN's [DFTL: FALSE]
    //! @param[in]   boStopOut    if the MST finished the forcing (PTC_FORCE_QUICK_STOP)
    //!                            FALSE: normal mode
    //!                            TRUE:  all outputs go out
    //! @param[in]   boMstTimeOut if the MST don't trigger the forcing pins (in time)
    //!                            FALSE: normal mode
    //!                            TRUE:  all outputs go out
    //--------------------------------------------------------------------------------------------------
    extern TVoid vCorePinForceCtrl( TBoolean boEnable, TBoolean boStopOut, TBoolean boMstTimeOut );

    #ifdef COMPILER_SWITCH_FAM_TTC3X_SAFETY
        //! Safety switch
        typedef enum
        {
            ECU_SAFETY_SW_INT,    //!< Safety switch Internal, is the default value by the safety-Version
            ECU_SAFETY_SW_EXT,    //!< External Switch PIN_A1/B1 open or BAT => normal operation
                                  //!<                 PIN_A1/B1 GND         => safety mode
            ECU_SAFETY_SW_NONE    //!<
        }EEcuSafetySw;

        //--------------------------------------------------------------------------------------------------
        //! @brief      Set the safety switch - must call in the vAppSafetyInit()
        //! @param[in]  SafetySw - safety switch type
        //! @retval     R_OKAY  - fine
        //! @retval     R_PHASE - the function is called to a wrong place
        //-------------------------------------------------------------------------------------------------
        extern ERetVal eCoreSetSafetySwitch( EEcuSafetySw SafetySw );

        //--------------------------------------------------------------------------------------------------
        //! @brief      Get the safety switch type
        //! @return     Safety switch Type
        //-------------------------------------------------------------------------------------------------
        extern EEcuSafetySw eCoreGetSafetySwitch( TVoid );
    #endif

    //--------------------------------------------------------------------------------------------------
    //! @brief     Show that the safety switch is open
    //! @param[in] ePin  - PIN
    //! @retval    TRUE  - Safety switch is close - normal mode  [PIN have function]
    //! @retval    FALSE - Safety switch is open  - special mode [PIN have NO function]
    //--------------------------------------------------------------------------------------------------
    extern TBoolean boCoreSafetySwitchIsClose( EPin ePin );

    #ifdef COMPILER_SWITCH_SUBFAM_TTC30

        //--------------------------------------------------------------------------------------------------
        //! @brief  Retrieves the modifier and the NodeID used on ECU startup by the bootloader.
        //!         Call until eAppPreStart-Phase possible - (work with out the Lauterbach debugger)
        //! -- For none safety-related devices the following table applies:
        //! Modifier          +0   +1  +2  +3    +4  +5 +6    +7    +8    +9
        //! NODEID_0(PIN_K0)  OPEN GND SS  UBAT+ GND SS UBAT+ GND   SS    UBAT+
        //! NODEID_1(PIN_J3)  OPEN GND GND GND   SS  SS SS    UBAT+ UBAT+ UBAT+
        //! -- For safety-related devices the following table applies:
        //! Modifier          +0    +3    +5  +7
        //! NODEID_0(PIN_K0)  OPEN  UBAT+ SS  GND
        //! NODEID_1(PIN_J3)  OPEN  GND   SS  UBAT+
        //! --
        //! @param[out] pu8ModifierPins - ModifierPins Value (PIN's value)
        //! @param[out] pu8NodeId       - NodeID = NodeIdFlash + ModifierPins Value (bootloader node-Id)
        //! @retval     R_OKAY          - everything fine
        //! @retval     R_NULL_POINTER  - a NULL pointer has been passed to the function
        //! @retval     R_PIN           - content of EEPROM and pins invalid (no valid modifier could be determined)
        //! @retval     R_RANGE         - value of NodeID pins was invalid but EEPROM values could be used as Modifier
        //! @retval     R_CONFIG        - Modifier stored in the EEPROM was not valid and rewritten with the current modifier read from NodeID pins
        //! @retval     R_BSP           - an internal BSP error has occurred
        //! @retval     R_UNKNOWN       - unknown error
        //! @return     R_PHASE         - Wrong application phase
        //--------------------------------------------------------------------------------------------------
        extern ERetVal eNodeIdGetModifierStartUp( TUint8 *pu8ModifierPins, TUint8 *pu8NodeId );

        //--------------------------------------------------------------------------------------------------
        //! @brief      Reading the modifier.
        //!             Call until eAppStartUp-phase possible - (work with out the 'Lauterbach debugger')
        //! -- For none safety-related devices the following table applies:
        //! Modifier          +0   +1  +2  +3    +4  +5 +6    +7    +8    +9
        //! NODEID_0(PIN_K0)  OPEN GND SS  UBAT+ GND SS UBAT+ GND   SS    UBAT+
        //! NODEID_1(PIN_J3)  OPEN GND GND GND   SS  SS SS    UBAT+ UBAT+ UBAT+
        //! -- For safety-related devices the following table applies:
        //! Modifier          +0    +3    +5  +7
        //! NODEID_0(PIN_K0)  OPEN  UBAT+ SS  GND
        //! NODEID_1(PIN_J3)  OPEN  GND   SS  UBAT+
        //! --
        //! @param[out] pu8ModifierPins - ModifierPins value (PIN's value)
        //! @retval     R_OKAY          - everything fine
        //! @retval     R_NULL_POINTER  - a NULL pointer has been passed to the function
        //! @retval     R_PIN           - the given voltage levels represent no valid modifier
        //! @retval     R_UNKNOWN       - unknown error
        //! @return     R_PHASE         - Wrong application phase
        //--------------------------------------------------------------------------------------------------
        extern ERetVal eNodeIdGetModifier( TUint8 *pu8ModifierPins );

    #endif // COMPILER_SWITCH_SUBFAM_TTC30

  #endif // COMPILER_SWITCH_FAM_TTC3X

#endif
