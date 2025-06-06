//**************************************************************************************************
/*!
@file    ItfBloInFreq.h
@version 1.15.2.0
@brief   \htmlonly
<span><img class="imgBriefImage" src="BloInFreq32x32.png" alt="BloInFreq32x32.png"></span>
<span class="spanBriefText">Block "Frequency Input" (<b>BloInFreq</b>)</span>
\endhtmlonly

\n
\htmlonly
<img src="BloInFreqSketch.png" width="500"  alt="into", align="left" > 
\endhtmlonly
\htmlonly <br clear="all"> \endhtmlonly
This &quot;InFreq&quot; block is designed to read in signal pulses and convert them in to a frequency signal.\n
The connected pin has to be used as a \ref TInFreqPrp#ePinNum "complex timer input pin".\n
With the various configuration options it is possible to adapt the pin to different sensor types.\n
Several parameters, which allow you to adapt the input signal to the corresponding physical magnitude, are available.\n
The block can detect up to four errors, depending of the connected sensor type (or sensor type connection).\n


The output signal is calculated depending on the configured \ref TInFreqPrp.ePulsMode "pulse mode" as follows: \n

    
<table boarder=0 >
<tr><td align= "left">

- \ref TInFreqPrp.ePulsMode "FIN_PULS_PERIOD_TIME"

    \f{eqnarray*}{
        i32Frequency [\frac{Hz}{10}] &=& \frac{1000000}{u32MeasuredTime[us]} \cdot
        \frac{10}{u16PulsesPerRevolution} \cdot \frac{u16TransmRatioMul}{u16TransmRatioDiv}
    \f}

- \ref TInFreqPrp.ePulsMode "FIN_PULS_HIGH_TIME or FIN_PULS_LOW_TIME"

    \f{eqnarray*}{
        i32Frequency [\frac{Hz}{10}] &=& u16Frequency[Hz] \cdot 10
    \f}

</td></tr>
</table>

@created    20.11.2013
@changelog
-   1.8.0.0 09.02.2017
    - MATCH block interface version updated to 1.4.
-   1.8.2.0 15.05.2017
    - The initial state of pin is set to UNDEF.
-   1.9.0.0 16.05.2017
    - The MATCH block interface version updated to 1.5.
-   1.10.0.0    26.06.2018
    - The MATCH block interface version updated to 1.6.
-   1.10.1.0    14.05.2019
    - Improved pointer error diagnostics (#26971).
-   1.11.0.0    17.06.2019
    - The MATCH block interface version updated to 1.7.
-   1.12.0.0    25.02.2020
    - The MATCH block interface version is updated to 1.8.
-   1.13.0.0    26.06.2020
    - The MATCH block interface version is updated to 1.9.
-   1.14.1.0    25.08.2020 
    - The MATCH block interface version is updated to 1.10.
    - Added configuration for timer pulse measurement mode \ref TInFreqPrp.ePulsMode
    - Rename output u32PulseWidth to u32TimerMeasurement
    - Revised doxygen
-   1.15.0.0  23.04.2021  
    - The MATCH block interface version is updated to 1.11
-   1.15.1.0  28.05.2021
    - Rename implementation of function i32BloInFreqGetFrequency.
-   1.15.2.0  14.06.2021
    - Using two adjacent pins with the same configuration no longer causes group conflict errors (#15843)
*/
//**************************************************************************************************

#ifndef ITFBLOINFREQ_H_
    #define ITFBLOINFREQ_H_


// INCLUDES ========================================================================================
    #include <ItfCore.h>
    #include <ItfCoreLib.h>
    #include <ItfBasEleErr.h>

// DEFINES & ENUMS =================================================================================

    //! EInFreqCaptureCnt
    typedef enum
    {
        #ifndef COMPILER_SWITCH_FAM_TTC5XX
        CAPTURE_CNT_NO = 0,                         //!< 0 - No average
        #endif
        CAPTURE_CNT_1_MEASURMENT = 1,               //!< 1 - average of 2 measurements
        CAPTURE_CNT_2_MEASURMENT = 2,               //!< 2 - average of 3 measurements
        CAPTURE_CNT_3_MEASURMENT = 3,               //!< 3 - average of 4 measurements
        CAPTURE_CNT_4_MEASURMENT = 4,               //!< 4 - average of 5 measurements
        CAPTURE_CNT_5_MEASURMENT = 5,               //!< 5 - average of 6 measurements
        CAPTURE_CNT_6_MEASURMENT = 6,               //!< 6 - average of 7 measurements
        CAPTURE_CNT_7_MEASURMENT = 7,               //!< 7 - average of 8 measurements
        CAPTURE_CNT_8_MEASURMENT = 8                //!< 8 - average of 9 measurements
    }EInFreqCaptureCnt;


     //! Errors
     enum
     {
        /*!
        Input is short to ground - the current level of 4.5mA of a current PWD type sensor was too low: <br>
        short circuit to GND can only appear when the pull-up/ down parameter is set to pull- down 110Ohm.
        */
        DM_INFREQ_THRLOW,                               //!< 0 - Error Threshold low
        /*!
        Input is short to power - the current level of 20.5mA of a current PWD type sensor was too high: <br>
        short circuit to UBAT can only appear when the pull up down parameter is set to pull-down 110Ohm
        */
        DM_INFREQ_THRHIGH,                              //!< 1 - Error Threshold high
        /*!
        If this error occurs, the block goes into error state until it is updated with the correct parameter data. <br>
        All outputs are forced to take the  error state
        */
        DM_INFREQ_PAR,                                  //!< 2 - Error Parameter out of range
        DM_INFREQ_UNKNOWN,                              //!< 3 - Error Unknown
        DM_INFREQ_CNT_MAX                               //!< 4 - Maximum number of Errors
     };


// STRUCTURES ======================================================================================
    //! Properties
    /*! 
    The figure below shows the common connection between sensor and controller. \n
    The pin have to be configured as complex timer input.
    It is possible to connect ABS/NPN 2 Pole sensors and PNP 3 Pole sensors to the \n
    controller input pin. A \ref TInFreqPrp#eIntResist "resistor" can be selected for each type. \n\n
    
    \htmlonly <img src="BloInFreqCPXInputSchematic.png" width="500px"  alt="into", align="left" > \endhtmlonly
    \htmlonly <br clear="all"> \endhtmlonly
    
    The voltage high \ref TInFreqPrp#eThreshold "threshold" defines the level for detecting a logic high signal.\n
    Additional it is possible to define the \ref TInFreqPrp#eCaptureMode "capture edge" signal. \n
    In this case, the measurement for the input pulse starts at the defined signal edge.\n\n
    
    \htmlonly <img src="BloInFreqPrp.png" width="500px"  alt="into", align="left" > \endhtmlonly
    \htmlonly <br clear="all"> \endhtmlonly

    */
    typedef struct
    {
        // Common
        
        /*! 
        <table><tr><th></th><th></th><th></th></tr>
        <tr><td>    eInpBeh         </td><td>
        INPBEH_ERR_TO_OUT<br>INPBEH_FREEZE_INP<br>INPBEH_PAR_TO_INP</td><td>
        A detected error at one of the input pins will set the output in an error state<br> 
        A detected error at one of the input pins will set the last valid input value at the faulty input<br> 
        A detected error at one of the input pins will set a predefined value at the faulty input|</td></tr>
        */
        EInpBeh    eInBeh;                      //!< [ENU] - Input behavior at fault input signal

        /*!
        This pin connects the sensor to the controller 
        */
        EPin ePinNum;                           //!< [ENU] - Input Pin Number
        
        /*!
        Describes the level of input voltage where the controller detects a logical high signal
        */
        EFinThrHold eThreshold;                 //!< [ENU] - Voltage threshold for digital input
        
        /*!
        Depending of the selected hardware, it is possible to configure pull-up/down resistors. \n
        A pull-down resistor has to be selected, when using NPN sensor types (highlighted in red).  \n
        The 110Ohm pull-down operation is generally required for operation with ABS sensors. \n
        A pull-up resistor is required for PNP sensor types (highlighted in green).  \n
        If no re-sistor is available for the used hardware, the pin is permanently connected to a pull-up resistor (10kOhm) internally.
        */
        EFinResistor eIntResist;                //!< [ENU] - Intern resistance
        

        //! Pulse time measurement mode
        //!
        //! @attention
        //! Using FIN_PULS_HIGH_TIME or FIN_PULS_LOW_TIME reduces the minimum frequency measurement
        //! value to 1 Hz and the frequency resolution to 1 Hz.
        //!
        EFinPulsMode ePulsMode;                 //!< [enu] - Pulse timer measurement mode

        /*!
        Configure the timer resolution (0.2, 0.4, 0.8, 1.6 or 3.2us). \n
        In most applications, you can use the standard settings of this parameter. \n
        In rare cases you might want to change this value in order to control duration \n
        of the timer for signaling an overflow condition, which only occurs if the input
        pin does not receive any valid frequency signals for a longer period of time (between 3.3 and 53s,\n
        depending on the resolution).
        */
        EFinTimRes eTimerResol;                 //!< [ENU] - Resolution of timer
        
        /*!
        Define the threshold voltage for recognizing level changes of the measured signal. \n
        It is possible to select between a rising (red) and a falling (blue) signal edge.
        */
        EFinFreqMode eCaptureMode;              //!< [ENU] - Mode of capture (detection for timer)
        
        /*!
        Configure the number of frequency measurements (from 0 to 8) for obtaining the measurement value.\n
        0: Obtain as many frequency measurements (up to a maximum of 8) available until the next driver call and output the averaged value. \n
        0...8: Take the specified number of frequency measurements by force and return the calculated average when the process is complete.
        */
        EInFreqCaptureCnt eCaptureCnt;          //!< [ENU] - Average of measurements

        /*!
        The value describes the lower voltage limit of a low level input signal.
        If the input value is below this level an short to ground error will occur.
        */
        TUint16 u16SigLowTolMin;                        //!< [mV]   - Lower Limit for low level signal

        /*!
        The value describes the upper voltage limit of a high level input signal.
        If the input value is greater than this level an short to power error will occur.
        */
        TUint16 u16SigHighTolMax;                       //!< [mV]   - Upper Limit for high level signal

    }TInFreqPrp;
    
#ifdef BLOCK_DB_CONNECTION_FREQ
    //! Parameter
    typedef struct
    {
        // Common
        TUint32     u32InpValDefault;           //!< [-]    - Default input value for input behavior INPBEH_VAL_TO_INP
        TDbLink     tInpValDefault;             //!< [-]    - Default input value for input behavior INPBEH_VAL_TO_INP

        TUint16 u16PulsesPerRevolution;         //!< [-]    - Pulses per revolution (e.g. 10 pulses per revolution)
        TDbLink tPulsesPerRevolution;           //!< [-]    - Pulses per revolution (e.g. 10 pulses per revolution)

        TUint16 u16TransmRatioMul;              //!< [-]    - Transmission ratio multiplier
        TDbLink tTransmRatioMul;                //!< [-]    - Transmission ratio multiplier

        TUint16 u16TransmRatioDiv;              //!< [-]    - Transmission ratio divisor
        TDbLink tTransmRatioDiv;                //!< [-]    - Transmission ratio divisor

        TUint16 u16TimeoutSignal;               //!< [ms]   - Timeout of input signal
        TDbLink tTimeoutSignal;                 //!< [ms]   - Timeout of input signal

    }TInFreqPar;
#else
    //! Parameter
    /*!
    Parameters are available for creating a connection between the input signal and physical magnitude. \n
    It is, thus, possible to define a transmission ratio. The ration can be defined with the \n 
    \ref TInFreqPar#u16TransmRatioMul "Transmission Ratio Multiplier" (e.g. number of teethes of the driven gear) and the \n
    \ref TInFreqPar#u16TransmRatioDiv "Transmission Ratio Divisor" (e.g. number of teethes of the drive gear). \n
    The ratio have to be at least one. A ratio below one will result in a parameter error. \n
    You also have to define the count of \ref TInFreqPar#u16PulsesPerRevolution "Pulses Per Revolution". \n
    It is normally equal to the number of magnets which generate a signal puls at the sensor. \n
    The value for \ref TInFreqPar#u16PulsesPerRevolution "Pulses Per Revolution" have to be at least one, too.\n
    If the input signal is zero for an given \ref TInFreqPar#u16TimeoutSignal "time", the block output is set to zero.\n\n
    
    \htmlonly <img src="BloInFreqPrpPar.png" width="700px"  alt="into", align="left" > \endhtmlonly
    \htmlonly <br clear="all"> \endhtmlonly

    In the example below the drive gear has 24 teeth and the driven gear has 16 teeth. \n
    The relation between both gears describes the transmission ratio. \n
    The input revolution n<sub>1</sub> is 1000 rpm. \n
    So the number of revolution on the driven gear is calculated as follows: \n


    \f{eqnarray*}{
        n_{2} [rpm] &=& \frac{24}{16} \times 1000 rpm = 1500 rpm
    \f}

    The number of pulses is 16. It depends from the number of markers which generate a signal pulse. \n
    So the frequency on the input pin is calculated as follows: \n

    \f{eqnarray*}{
        f_{pin} [Hz] &=& \frac{1500 \times 16}{60s} = 400Hz
    \f}

    This frequency corresponds with a period time of 2500 &mu;s. \n
    Now it is possible to calculate the frequency of the input shaft (n<sub>1</sub>).

    \f{eqnarray*}{
        i32Frequency [\frac{Hz}{10}] &=& \frac{1000000}{2500us} \times ,
        \frac{10}{16} \times \frac{16}{24} = 166,66 [\frac{Hz}{10}]
    \f}

    */
    typedef struct
    {
        // Common
        /*!
        If the input behavior \ref TInFreqPrp#eInBeh "eInBeh" is configured as &quot;INBEH_PAR_TO_IN&quot;,\n
        the &quot;default input value&quot; is used for further block operation in case of an error.\n
        \n
        Depending on selected measurement mode:
        @note
            - \ref TInFreqPrp.ePulsMode "FIN_PULS_PERIOD_TIME"
                - Default value is the period time = 1 / frequency.\n
                \n
                Range   :   0 - 1000000 us\n

        @note
            - \ref TInFreqPrp.ePulsMode "FIN_PULS_HIGH_TIME or FIN_PULS_LOW_TIME"
                - Default value is the frequency.\n
                \n
                Range   :   0 - 1000000 Hz\n
        */
        TUint32     u32InpValDefault;           //!< [us]    - Default input value for input behavior INPBEH_VAL_TO_INP

        /*!
        The &quot;pulses per revolution&quot; parameter describes the number \n
        of pulses of the frequency input during one revolution.\n\n
        Range   :   1  - 65529

        @note
        Only required when \ref TInFreqPrp.ePulsMode "FIN_PULS_PERIOD_TIME" is configured.

        */
        TUint16 u16PulsesPerRevolution;         //!< [-]    - Pulses per revolution (e.g. 10 pulses per revolution)
            
        /*!
        The transmission ratio multiplicator is a parameter \n
        which is used to adapt the input signal to the hardware\n\n
        Range   :   1  - 65529

        @note
        Only required when \ref TInFreqPrp.ePulsMode "FIN_PULS_PERIOD_TIME" is configured.

        */
        TUint16 u16TransmRatioMul;              //!< [-]    - Transmission ratio multiplier
        
        /*!
        The transmission ratio divisor is a parameter \n
        which is used to adapt the input signal to the hardware \n\n
        Range   :   1  - 65529

        @note
        Only required when \ref TInFreqPrp.ePulsMode "FIN_PULS_PERIOD_TIME" is configured.

        */
        TUint16 u16TransmRatioDiv;              //!< [-]    - Transmission ratio divisor

        /*!
        The signal timeout time starts after the last valid input signal. \n
        During this time, the output holds retains the last valid value. \n
        When the time expires, the output is set to zero.\n\n

        Range   :   0 ms - 65529 ms
        */
        TUint16 u16TimeoutSignal;               //!< [ms]  - Timeout of input signal

    }TInFreqPar;
#endif

    //! Block Configuration
    typedef struct
    {
        // Common
        TChar      achName[BLO_NAME_STR_LEN];   //!< [STR] - Block Name
        EBloStatus eBloProc;                    //!< [ENU] - Block Process

        // Properties
        TInFreqPrp    tPrp;                     //!< [STU] - InFreq Properties

        // Parameter
        TInFreqPar    tPar;                     //!< [STU] - InFreq Parameter

        //Errors
         TUint8     u8ErrCnt;                   //!< [NUM] - Number of defined errors
         TErrCfgFea atErrFea[DM_INFREQ_CNT_MAX];//!< [CLA] - Error Configurations
    }TInFreqCfg;

    //! Input Sub-Block
    typedef struct
    {
        EBloStatus   eBehProc;                  //!< [ENU] - Block Process Behavior
        EUpdate      eUpdatePar;                //!< [ENU] - Parameter update option

        TBehErrCntl  tBehErrCntl;               //!< [STU] - Error Control Behavior

    }TInFreqInp;

    //! Output Sub-Block
    /*! Output
    \n\n
    \htmlonly <img src="BloInFreqOut.png" width="200"  alt="into", align="left" > \endhtmlonly \n
    */
    typedef struct
    {
        EBloStatus eBehProc;                    //!< [ENU] - Block Process Behavior

        TBehErrSta tBehErrSta;                  //!< [STU] - Error Behavior Status

        TInt32  i32Frequency;                   //!< [Hz/10] - Frequency output signal


        TUint32 u32TimerMeasurement;            //!< [us] - Measured time ( @sa \ref TInFreqPrp ).
        TUint16 u16Vin;                         //!< [mV] - Voltage on Cpx pin
        TUint16 u16Cnt;                         //!< [cnt]  Current count value
        EPinStatus ePinState;                   //!< [STU] - Complex Pin State (input raw value)
    }TInFreqOut;

    //! Address Sub-Block
    typedef struct
    {
        const TInFreqCfg* cptCfg;                //!< [STU] - Configuration Struct
        TVoid*   pvObj;                          //!< [STU] - Pointer to the private Object
        TUint16  u16Stamp;                       //!< Registration stamp
    }TInFreqAdr;

    //! Block
    typedef struct
    {
        TInFreqInp   tInp;                      //!< [STU] - Input vector
        TInFreqOut   tOut;                      //!< [STU] - Output vector
        TInFreqPrp   tPrp;                      //!< [STU] - Properties
        TInFreqPar   tPar;                      //!< [STU] - Parameter
        TInFreqAdr   tXAdr;                     //!< [STU] - Private Address Information
    }TBloInFreq;

// LIBRARY PROTOTYPES ==============================================================================
    //--------------------------------------------------------------------------------------------------
    //! @brief      Create the InFreq-Block  (*** for manually block creation without PDT ***)
    //! @param[in]  ptBlo          - [PNT] Pointer to Block
    //! @param[in]  cptCfg         - [PNT] Pointer to the config struct
    //! @retval     R_OKAY         - [ENU] Functions execute without error
    //! @retval     R_NULL_POINTER - [ENU] Null Pointer
    //! @retval     R_MEMORY       - [ENU] Out of memory
    //! @retval     R_NOT_REGISTRY - [ENU] Block not registered
    //--------------------------------------------------------------------------------------------------
    extern ERetVal eBloInFreqCreate( TBloInFreq* ptBlo, const TInFreqCfg* cptCfg );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Initialization function for InFreq-Block Interface  (*** for manually block creation without PDT ***)
    //! @param[in]  ptBlo          - [PNT] Pointer to Block
    //! @retval     R_OKAY         - [ENU] Functions execute without error
    //! @retval     R_NULL_POINTER - [ENU] Null Pointer
    //! @retval     R_ADDRESS      - [ENU] Wrong block address
    //! @retval     R_MINIMUM               - Parameter below lower limit
    //! @retval     R_MAXIMUM               - Parameter greater than upper limit
    //! @retval     R_NULL_POINTER - pointer of ptCpxInit is NULL
    //! @retval     R_PIN              - Pin type is not PINTYP_NA or _CPX
    //!                                  PIN_BLO is not configured
    //--------------------------------------------------------------------------------------------------
    extern ERetVal eBloInFreqInit(TBloInFreq* ptBlo );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Create and Initialization function for InFreq-Block Interface (*** only for block creation by PDT ***)
    //! @param[in]  pvBlo          - [PNT] Pointer to output block structure
    //! @retval     R_OKAY         - [ENU] Functions execute without error
    //! @retval     R_NULL_POINTER - [ENU] Null Pointer
    //! @retval     R_ADDRESS      - [ENU] Wrong block address
    //! @retval     R_NOT_REGISTRY - [ENU] Block not registered
    //! @retval     R_MINIMUM               - Parameter below lower limit
    //! @retval     R_MAXIMUM               - Parameter greater than upper limit
    //! @retval     R_NULL_POINTER - pointer of ptCpxInit is NULL
    //! @retval     R_PIN              - Pin type is not PINTYP_NA or _CPX
    //!                                  PIN_BLO is not configured
    //--------------------------------------------------------------------------------------------------
    extern ERetVal eBloInFreqCreateInitRegistry( TVoid *pvBlo );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Block InFreq Version information
    //! @retval     *cptVer - Pointer of Versions information
    //--------------------------------------------------------------------------------------------------
    extern const TVerChapCom *cptBloInFreqVersionsInfo( TVoid );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Block InFreq Version check
    //! @retval     TRUE   - is correct
    //! @retval     FALSE  - is incorrect
    //--------------------------------------------------------------------------------------------------
    extern TBoolean boBloInFreqVersionCheck( TVoid );

    //--------------------------------------------------------------------------------------------------
    //! @brief      InFreq Block Function
    //! @param[in]  ptBlo          - [PNT] Pointer to Block
    //! @retval     R_OKAY         - [ENU] Functions execute without error
    //! @retval     R_ADDRESS      - [ENU] Wrong block address
    //! @retval     R_NULL_POINTER - [ENU] Null Pointer
    //! @retval     R_ADDRESS      - [ENU] Wrong block address
    //--------------------------------------------------------------------------------------------------
    extern ERetVal eBloInFreq( TBloInFreq* ptBlo );

    // -------------------------------------------------------------------------------------------------
    //! @brief          i32BloInFreqGetFrequency - Get Frequency value
    //! @param[in,out]  ptBlo           - [PNT] Block Pointer
    //! @retval         TInt32          - [Hz/10]Calculated Frequency
    //! @retval         I32_ERROR       - Wrong block address or other errors
    //! @retval         R_OKAY          - Pointer okay
    //--------------------------------------------------------------------------------------------------
    TInt32 i32BloInFreqGetFrequency( TBloInFreq* ptBlo );

     //--------------------------------------------------------------------------------------------------
     //! @brief      Get the InFreq Status on a specified Bit-Position
     //! @param[in]  ptBlo     - [PNT] Pointer to Block
     //! @param[in]  u8BitPos  - [IDX] Bitnumber 0-7
     //! @retval     OKAY      - [BIT] Error State of the specific Bit-Position
     //! @retval     ERROR     - If wrong ptBlo-Addr, return value is '0'
     //--------------------------------------------------------------------------------------------------
     extern TBoolean boBloInFreqGetErrStaBit( TBloInFreq* ptBlo, TUint8 u8BitPos );

     //--------------------------------------------------------------------------------------------------
     //! @brief      Get the sum InFreq Status Information
     //! @param[in]  ptBlo     - [PNT] Pointer to Block
     //! @retval     OKAY      - [BIT] Error State Bit Coded
     //! @retval     ERROR     - If wrong ptBlo-Addr, return value is '0'
     //--------------------------------------------------------------------------------------------------
     extern TUint16 u16BloInFreqGetErrStaAll( TBloInFreq* ptBlo );

     //--------------------------------------------------------------------------------------------------
     //! @brief      Get the InFreq Event on a specified Bit-Position
     //! @param[in]  ptBlo     - [PNT] Pointer to Block
     //! @param[in]  boDetect  - [BOO] TRUE = Detect-Bit-Event, FALSE = Delete-Bit-Event
     //! @param[in]  u8BitPos  - [IDX] Bitnumber 0-7
     //! @retval     OKAY      - [BIT] Error State of the specific Bit-Position
     //! @retval     ERROR     - If wrong ptBlo-Addr, return value is '0'
     //--------------------------------------------------------------------------------------------------
     extern TBoolean boBloInFreqGetErrEveBit( TBloInFreq* ptBlo, TBoolean boDetect, TUint8 u8BitPos );

     //--------------------------------------------------------------------------------------------------
     //! @brief      Get the InFreq Event on a specified Bit-Position
     //! @param[in]  ptBlo     - [PNT] Pointer to Block
     //! @param[in]  boDetect  - [BOO] TRUE = Detect-Bit-Event, FALSE = Delete-Bit-Event
     //! @retval     OKAY      - [BIT] Error State Bit Coded
     //! @retval     ERROR     - If wrong ptBlo-Addr, return value is '0'
     //--------------------------------------------------------------------------------------------------
     extern TUint16 u16BloInFreqGetErrEveAll( TBloInFreq* ptBlo, TBoolean boDetect );


#endif /* ITFBLOINFREQ_H_ */
