//**************************************************************************************************
/*!
@file    ItfBloOutVoltPro.h
@version 1.11.1.0
@brief
@briefWithImage{BloOutVoltPro32x32.png
,Block "Proportional voltage output"
,BloOutVoltPro}

@details
This &quot;OutVoltPro&quot; block is designed to generate a DC voltage output signal,
which can be used to connect to any high impedance analog input.


\htmlonly
<img src="BloOutVoltProSketch.png" width="500"  alt="into", align="left" >
\endhtmlonly
\htmlonly <br clear="all"> \endhtmlonly

The load resistance of the receiving device defines the maximum possible output value.\n
It has to be used a \ref TInFreqVeloPrp#ePinNum "VOUT pin", which will be configured as
voltage output. The resolution is in mV.


In voltage mode a PID controller has to be applied to generate the desired output voltage.\n
This results in a certain settling time, which depends on the PID controllers parameter set. \n


Please consider that the PID control algorithm relies on a stable BAT+ CPU voltage to deliver \n
a high quality output voltage. In case of transients on the BAT+ CPU voltage, the output voltage \n
quality may drop depending on transient size and PID controller configuration.


The voltage U<sub>OutMax</sub> is the maximum possible output voltage without or high impedance load \n
and depends on the systems operating voltage. It can be calculated by the following formula: 

\f{eqnarray*}{
    U_{OutMax}[mV] &=& U_{Bat+CPU}[mV] \times 0.\overline{91666}
\f}

The voltage U<sub>OutMaxLoad</sub> depends of impedance of the connected device and has to be at least 10kOhm. \n
In this case the impedance is on the lower limit and it is not possible to achieve the value of U<sub>OutMax</sub>. \n
Increasing R<sub>Load</sub> will increasing U<sub>OutMaxLoad</sub> until it matches the value of U<sub>OutMax</sub>. \n
The maximum output load voltage can be calculated by the following formula:

\f{eqnarray*}{
    U_{OutMaxLoad} [mV] &=& \frac{ (U_{Bat+CPU}[mV] - 500 mV) \times R_{Load}[\Omega]} {2575\Omega + R_{Load}[\Omega]}
\f}

The sketch below is showing the internal structure of the voltag output.

\htmlonly <img src="BloOutVoltProOutputSchematic.png" width="500px"  alt="into", align="left" > \endhtmlonly \n\n\n\n\n\n\n\n\n\n\n\n
\htmlonly <br clear="all"> \endhtmlonly
 
If the max voltage drop (U<sub>OutMax</sub>) across Rout is exceeded (by short to bat, \n
short to ground or via overload), the output is disabled.

 
 For example the supply voltage U<sub>Bat+CPU</sub> is 12V. So the maximum possible output \n
 voltage on the pin (U<sub>OutMax</sub>) is calculated as follow:
 
 <table boarder=0 >

<tr><td align= "left">

    \f{eqnarray*}{
        U_{OutMax}[mV] &=& 12000mV \times 0.\overline{91666} = 10999mV
    \f}

</td></tr>

</table>

The parameter \ref TOutVoltProPar#u16OutVoltProMax "u16OutVoltProMax" can be only less or equal 10999mV.\n
The value of U<sub>OutMax</sub> is only valid for high impedance loads. For a load of \n
e.g. 20k&Omega; the maximum possible output value is:

<table boarder=0 >

<tr><td align= "left">

    \f{eqnarray*}{
        U_{OutMaxLoad} [mV] &=& \frac{ (12000mV - 500 mV) \times 20000\Omega} {2575\Omega + 20000\Omega} = 10188mV
    \f}

</td></tr>

</table>
        
@created    11.07.2014
@changelog
-   1.4.0.0 09.02.2017  
    - The MATCH block interface version is updated to 1.4.
-   1.5.0.0 16.05.2017  
    - The MATCH block interface version is updated to 1.5.
-   1.6.0.0 26.06.2018  
    - The MATCH block interface version is updated to 1.6.
-   1.6.1.0 25.06.2018  
    - Added support for TTC510.
-   1.6.3.0 14.05.2019  
    - Improved pointer error diagnostics (#26971).
-   1.7.0.0 18.06.2019
    - The MATCH block interface version is updated to 1.7.
-   1.8.0.0 25.02.2020
    - The MATCH block interface version is updated to 1.8.
-   1.9.0.0 26.06.2020
    - The MATCH Block interface version is updated to 1.9.
-   1.10.1.0 25.08.2020  
    - The MATCH block interface version is updated to 1.10.
-   1.11.0.0    23.04.2021 
    - The MATCH block interface version is updated to 1.11
-   1.11.1.0    17.06.2021
    - Added \ref TOutVoltProPrp.u16VoltDeviationThreshold "Voltage deviation threshold"
    - Added `eBloOutVoltProSetLowerDeviationThreshold()`
    - \ref DM_OUTVOLTPRO_SP and \ref DM_OUTVOLTPRO_SG are now detected using
      \ref TOutVoltProPrp.u16VoltDeviationThreshold "Voltage deviation threshold"
*/
//**************************************************************************************************

#ifndef __ITFBLOOUTVOLTPRO__
    #define __ITFBLOOUTVOLTPRO__

// INCLUDES ========================================================================================
    #include <ItfCore.h>
    #include <ItfBasEleErr.h>

// DEFINES & ENUMS =================================================================================
    enum
     {

        //! TTC3x:
        //! \ref TOutVoltProOut "Pin state" reports short to power.
        //!
        //! TTC5xx:
        //! Measured voltage - \ref TOutVoltProOut.u16Ua "set voltage" =>
        //! \ref TOutVoltProPrp.u16VoltDeviationThreshold "threshold voltage"
        //!
        //! @sa \ref TOutVoltProOut.u16Ua "Set voltage"
        //! @sa \ref TOutVoltProPrp.u16VoltDeviationThreshold "Threshold voltage"
        //!
         DM_OUTVOLTPRO_SP,                      //!< 0 - Output signal short to power

        //! TTC3x:
        //! \ref TOutVoltProOut "Pin state" reports short to ground.
        //!
        //! TTC5xx:
        //! \ref TOutVoltProOut.u16Ua "Set voltage" - measured voltage =>
        //! \ref TOutVoltProPrp.u16VoltDeviationThreshold "threshold voltage"
        //!
        //! @sa \ref TOutVoltProOut.u16Ua "Set voltage"
        //! @sa \ref TOutVoltProPrp.u16VoltDeviationThreshold "Threshold voltage"
        //!
         DM_OUTVOLTPRO_SG,                      //!< 1 - Output signal short to ground
        /*!
        If this error happens the block goes into an error state until \n
        it will updated with correct parameter data. \n
        All outputs will be forced to error state
        */
         DM_OUTVOLTPRO_PAR,                     //!< 2 - Parameter out of Range
        /*!
        If this error happens the block goes into an error state until \n
        it will updated with correct parameter data. \n
        All outputs will be forced to error state.

        Caused by unexpected \ref EPinStatus "pin state".
        */
         DM_OUTVOLTPRO_UNKNOWN,                 //!< 3 - Unknown internal error
         DM_OUTVOLTPRO_CNT_MAX                  //!< 4 - The quantity of errors
     };

// STRUCTURES ======================================================================================

    
    //! PROPERTIES
    typedef struct
    {
        // Common
        EInpBeh     eInpBeh;                        //!< [ENU] - Input behavior at fault input signal
        EPin        ePinNum;                        //!< [ENU] - Pin (Cfg-Idx) master channel

        #ifdef COMPILER_SWITCH_FAM_TTC5XX
        //! Valid voltage deviation range (symmetrical by default)
        //!
        //! @sa `eBloOutVoltProSetLowerDeviationThreshold()`
        //!
        TUint16     u16VoltDeviationThreshold;       //!< [mV]  - Absolute voltage deviation threshold
        #endif
    }TOutVoltProPrp;

#ifdef BLOCK_DB_CONNECTION_VOLTPRO
//! Properties of digital valve
typedef struct
{

    TUint16     u16DefaultOutVolt;          //!< [mV]   - Default input value for input behavior INPBEH_VAL_TO_INP
    TDbLink     tDefaultOutVolt;            //!< []     - Default input value for input behavior INPBEH_VAL_TO_INP
    TUint16     u16SafeStateOutVal;         //!< [mV]   - Output value to get safe output state in case of error
    TDbLink     tSafeStateOutVal;           //!< []     - Output value to get safe output state in case of error
    TUint16     u16OutVoltProMin;           //!< [mV]   - Minimum limit for output value
    TDbLink     tOutVoltProMin;             //!< []     - Minimum limit for output value
    TUint16     u16OutVoltProMax;           //!< [mV]   - Maximum limit for output value
    TDbLink     tOutVoltProMax;             //!< []     - Maximum limit for output value

}TOutVoltProPar;
#else
    //! Parameter
    /*! 
    \n
    The figure below shows the relation between the parameters. The parameters \n
    \ref TOutVoltProPar#u16DefaultOutVolt "u16DefaultOutVolt", \ref TOutVoltProPar#u16SafeStateOutVal "u16SafeStateOutVal" 
    and the input value \ref TOutVoltProInp#u16OutVoltProSetVal "u16OutVoltProSetVal" \n
    have to be in the green highlighted area. The first parameter determines the lower limit \n
    and the second the upper limit of the output voltage.
    The value of \ref TOutVoltProPar#u16OutVoltProMin "u16OutVoltProMin" \n can be reduced until 0V. The value of \ref TOutVoltProPar#u16OutVoltProMax "u16OutVoltProMax"
    should be less or equal to U<sub>OutMax</sub>.\n
        
        
    \htmlonly <img src="BloOutVoltProPar.png" width="300px"  alt="into", align="left" > \endhtmlonly
    \n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n
    */
    typedef struct
    {
        /*!
        If the input behavior \ref TOutVoltProPrp#eInpBeh "eInpBeh" is configured as "INBEH_PAR_TO_IN", \n
        the "default input value" is used for further block operation in case of an error. \n
        It has to be in the range between \ref TOutVoltProPar#u16OutVoltProMin "u16OutVoltProMin" and \ref TOutVoltProPar#u16OutVoltProMax "u16OutVoltProMax".\n\n
        Range   :   u16OutVoltProMin <= u16SafeStateOutVal =< u16OutVoltProMax
        */
        TUint16     u16DefaultOutVolt;          //!< [mV]   - Default input value for input behavior INPBEH_VAL_TO_INP
        /*!
        The value \ref TOutVoltProPar#u16SafeStateOutVal "u16SafeStateOutVal" defines the voltage on which the connected hardware is in safe state. \n
        The safe state is active in case of an error/undef block state. The safe state of the block output \n
        can be 0V or a high voltage output e.g. 8V. This depends of the connected hardware. \n
        It has to be in the range between \ref TOutVoltProPar#u16OutVoltProMin "u16OutVoltProMin" and \ref TOutVoltProPar#u16OutVoltProMax "u16OutVoltProMax"\n\n
        Range   :   u16OutVoltProMin <= u16SafeStateOutVal =< u16OutVoltProMax
        */
        TUint16     u16SafeStateOutVal;         //!< [mV] - Output value to get safe output state in case of error
        /*!
        The parameter "u16OutVoltProMin" describes the input limit. If the input  value \ref TOutVoltProInp#u16OutVoltProSetVal "u16OutVoltProSetVal" \n
        is below this limit the output value will be restricted to the value of "u16OutVoltProMin".\n\n
        Range   :   u16OutVoltProMin < u16OutVoltProMax
        */
        TUint16     u16OutVoltProMin;           //!< [mV]   - Minimum limit for output value
        
        /*!
        The parameter "u16OutVoltProMax" describes the input limit. If the input  value \ref TOutVoltProInp#u16OutVoltProSetVal "u16OutVoltProSetVal"  \n
        is greater than this limit the output value will be restricted to the value of "u16OutVoltProMax".\n\n
        Range   :   u16OutVoltProMin < u16OutVoltProMax
        */
        TUint16     u16OutVoltProMax;           //!< [mV]   - Maximum limit for output value

    }TOutVoltProPar;
#endif

    //! BLOCK CONFIGURATION
    typedef struct
    {
        // Common
        TChar      achName[BLO_NAME_STR_LEN];        //!< [STR] - Block Name
        EBloStatus eBloProc;                         //!< [ENU] - Block Process


        // Properties
        TOutVoltProPrp    tPrp;                             //!< [STU] - Properties

        // Parameter
        TOutVoltProPar    tPar;                             //!< [STU] - Parameter
        
        // Errors
        TUint8     u8ErrCnt;                         //!< [NUM] - Number of defined errors
        TErrCfgFea atErrFea[DM_OUTVOLTPRO_CNT_MAX];         //!< [CLA] - Error Configurations
    }TOutVoltProCfg;


    //! Input Sub-Block
    /*!
        The output voltage \ref TOutVoltProOut#u16Ua "u16Ua" is proportional to the input value \ref TOutVoltProInp#u16OutVoltProSetVal "u16OutVoltProSetVal". \n
        The input value have to be in the range between \ref TOutVoltProPar#u16OutVoltProMin "u16OutVoltProMin" 
        and \ref TOutVoltProPar#u16OutVoltProMax "u16OutVoltProMax".\n
        A input value below or greater than the limits is restricted internally to the corresponding limit.
        
        \n
        \htmlonly <img src="BloOutVoltProPar.png" width="300px"  alt="into", align="left" > \endhtmlonly
        \n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n
    */
    typedef struct
    {
        // Common
        EBloStatus      eBehProc;                   //!< [ENU] - Block Process Behavior
        EUpdate         eUpdatePar;                 //!< [ENU] - Parameter update option

        // Command
        TUint16         u16OutVoltProSetVal;        //!< [mV] - Set value for voltage output

        // Error detection
        TBehErrCntl     tBehErrCntl;                //!< [STU] - Error Control Behavior
    }TOutVoltProInp;

    //! Output Sub-Block
    /*! Output
    \n
    The block output voltage \ref TOutVoltProOut#u16Ua "u16Ua" is proportional to the 
    block set value \ref TOutVoltProInp#u16OutVoltProSetVal "u16OutVoltProSetVal". \n
    As shown in the figure below the output voltage is limited by the parameter 
    \ref TOutVoltProPar#u16OutVoltProMin "u16OutVoltProMin" and \ref TOutVoltProPar#u16OutVoltProMax "u16OutVoltProMax".\n
    The maximum possible output voltage U<sub>OutMaxLoad</sub> is limited by the impedance of the connected load. 
    \n
    \htmlonly <img src="BloOutVoltProOut.png" width="400"  alt="into", align="left" > \endhtmlonly
    \n\n\n
    \n\n\n
    \n\n\n
    \n\n\n
    */
    typedef struct
    {
        // Common
        EBloStatus eBehProc;            //!< [ENU] - Block Process Behavior
       
        TUint16    u16Ua;               //!< [mV]  - Set output voltage
        EPinStatus ePinState;           //!< [STU] - DAC Pin State

        // error detection
        TBehErrSta tBehErrSta;          //!< [STU] - Error Behavior Status
    }TOutVoltProOut;

    //! Address Sub-Block
    typedef struct
    {
        const TOutVoltProCfg* cptCfg;                   //!< [STU] - Configuration Struct
        TVoid*   pvObj;                                 //!< [STU] - Pointer to the private Object
        TUint16  u16Stamp;                              //!< Registration stamp
    }TOutVoltProAdr;

    //! Block
    typedef struct
    {
        TOutVoltProInp   tInp;                              //!< [STU] - Input vector
        TOutVoltProOut   tOut;                              //!< [STU] - Output vector
        TOutVoltProPrp   tPrp;                              //!< [STU] - Properties
        TOutVoltProPar   tPar;                              //!< [STU] - Parameter
        TOutVoltProAdr   tXAdr;                             //!< [STU] - Private Address Information
    }TBloOutVoltPro;

// LIBRARY PROTOTYPES ==============================================================================
    //------------------------------------------------------------------------------
    //! @brief      Get the version information of a block object.
    //! @retval     *cptVer - Pointer to version-date information structure.
    //------------------------------------------------------------------------------
    extern const TVerChapCom *cptBloOutVoltProVersionsInfo( TVoid );

    //------------------------------------------------------------------------------
    //! @brief      Check a version compatibility of a block object.
    //! @retval     TRUE  - The version of this Block is compatible with a used MATCH version.
    //! @retval     FALSE - The version of this Block is incompatible with a used MATCH version.
    //------------------------------------------------------------------------------
    extern TBoolean boBloOutVoltProVersionCheck( TVoid );

    //! @brief      Creation.
    //! @pre
    //!             - Block type should be registered in MATCH environment.
    //!             - Block interface structure \ref TBloOutVoltPro must be already defined.
    //!             - Configuration structure \ref TOutVoltProCfg must be already defined
    //!               and initialized.
    //! @note
    //!             - Method must be used in application initialization phase
    //!               `eAppInit()`. Database links in block configuration may be
    //!               resolved and data may be pulled out of database only when
    //!               all databases are loaded in application.
    //! @param[in]  ptBlo          - [PNT] Pointer to Block
    //! @param[in]  cptCfg         - [PNT] Pointer to the config struct
    //! @retval     R_OKAY         - [ENU] Functions execute without error
    //! @retval     R_NULL_POINTER - [ENU] Null Pointer
    //! @retval     R_MEMORY       - [ENU] Out of memory
    //! @retval     R_NOT_REGISTRY - [ENU] Block not registered
    //--------------------------------------------------------------------------------------------------
    extern ERetVal eBloOutVoltProCreate( TBloOutVoltPro* ptBlo, const TOutVoltProCfg* cptCfg );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Initialization function for OutVoltPro-Block Interface  (*** for manually block creation without PDT ***)
    //! @pre
    //!             - Function `eBloOutVoltProCreate()` must be already successfully
    //!               executed.
    //! @note
    //!             - Method must be used in application initialization phase
    //!               `eAppInit()`.
    //! @param[in]  ptBlo          - [PNT] Pointer to Block
    //! @retval     R_OKAY         - [ENU] Functions execute without error
    //! @retval     R_NULL_POINTER - [ENU] Null Pointer
    //! @retval     R_ADDRESS      - [ENU] Wrong block address
    //--------------------------------------------------------------------------------------------------
    extern ERetVal eBloOutVoltProInit(TBloOutVoltPro* ptBlo );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Create and Initialization function for OUTVOLTPRO-Block Interface (*** only for block creation by PDT ***)
    //! @pre
    //!             - A block must be defined in PDT.
    //! @note
    //!             - Function call is performed automatically
    //!               within "auto code" generated by PDT.
    //! @param[in]  pvBlo          - [PNT] Pointer to output block structure
    //! @retval     R_OKAY         - [ENU] Functions execute without error
    //! @retval     R_NULL_POINTER - [ENU] Null Pointer
    //! @retval     R_ADDRESS      - [ENU] Wrong block address
    //! @retval     R_NOT_REGISTRY - [ENU] Block not registered
    //--------------------------------------------------------------------------------------------------
    extern ERetVal eBloOutVoltProCreateInitRegistry( TVoid *pvBlo );

    #ifdef COMPILER_SWITCH_FAM_TTC5XX
    //--------------------------------------------------------------------------------------------------
    //! @brief      Set lower voltage deviation threshold
    //! @detail     Use this function to  set the lower voltage threshold independently from
    //!             \ref TOutVoltProPrp.u16VoltDeviationThreshold "the upper threshold" .
    //!             By default the voltage deviation threshold is symmetrical ( setpoint +/- x mV )
    //!
    //! @pre        - Function `eBloOutVoltProInit()` must be already successfully executed.
    //! @note
    //!             - Function may only be used in `eAppInit()` phase.
    //!
    //! @param[in]  ptBlo   - [stu] Pointer to Block
    //! @retval     R_OKAY              - Functions execute without error
    //! @retval     R_ADDRESS           - Wrong block address
    //! @retval     R_NULL_POINTER      - Null pointer
    //! @retval     R_NOT_REGISTRY      - block not registered
    //! @retval     R_PHASE             - Function was called before or after `eAppInit()`
    //! @retval     R_NOT_INITIALIZED   - `eBloOutVoltProInit()` was not yet executed successfully.
    //! @retval     R_CONFIG            - Threshold value not valid
    //!             (U16_MIN <= u16VoltageLowerDeviationThreshold <= u16OutVoltProMax - u16OutVoltProMin)
    //--------------------------------------------------------------------------------------------------
    extern ERetVal eBloOutVoltProSetLowerDeviationThreshold( TBloOutVoltPro* ptBlo , TUint16 u16VoltageLowerDeviationThreshold);
    #endif

    //--------------------------------------------------------------------------------------------------
    //! @brief      OutVoltPro Block Function
    /// @pre        - Function `eBloOutVoltProInit()` must be already successfully executed.
    /// @note
    ///             - Function call for each certain Block should be made only once
    ///               during 1 controller cycle. \n
    ///             - Function should be used in application run(-time) phase
    ///               `vAppRun()`.
    //! @param[in]  ptBlo          - [PNT] Pointer to Block
    //! @retval     R_OKAY         - [ENU] Functions execute without error
    //! @retval     R_ADDRESS      - [ENU] Wrong block address
    //! @retval     R_NULL_POINTER - [ENU] Null Pointer
    //! @retval     R_ADDRESS      - [ENU] Wrong block address
    //--------------------------------------------------------------------------------------------------
    extern ERetVal eBloOutVoltPro( TBloOutVoltPro* ptBlo );


    //--------------------------------------------------------------------------------------------------
    //! @brief      Get error state.
    /// @pre
    ///             - Function `eBloOutVoltPro()` must be already successfully executed
    ///               at least once.
    /// @warning
    ///             - Specified bit position of detection method should be
    ///               less than \ref DM_OUTVOLTPRO_CNT_MAX.
    //! @param[in]  ptBlo       - [PNT] Pointer to Block
    //! @param[in]  u8BitPos    - [IDX] Bit number 0-7
    //! @retval     TRUE/FALSE  - [BIT] Error State of the specific Bit-Position
    //! @retval     0           - An argument is `NULL` pointer.
    //! @retval     0           - Object is not registered.
    //! @retval     0           - Invalid address of object.
    //--------------------------------------------------------------------------------------------------
    extern TBoolean boBloOutVoltProGetErrStaBit( TBloOutVoltPro* ptBlo, TUint8 u8BitPos );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Get bit field of error states.
    //! @pre
    //!             - Function `eBloOutVoltPro()` must be already successfully executed
    //!               at least once.
    //! @param[in]  ptBlo     - [PNT] Pointer to Block
    //! @retval     [0, U16_MAX]    - Bit field of event states.
    //! @retval     0               - An argument is `NULL` pointer.
    //! @retval     0               - Object is not registered.
    //! @retval     0               - Invalid address of object.
    //--------------------------------------------------------------------------------------------------
    extern TUint16 u16BloOutVoltProGetErrStaAll( TBloOutVoltPro* ptBlo );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Get error event state.
    //! @pre
    //!             - Function `eBloOutVoltPro()` must be already successfully executed
    //!               at least once.
    //! @warning
    //!             - Specified bit position of detection method should be
    //!               less than \ref DM_OUTVOLTPRO_CNT_MAX.
    //! @param[in]  ptBlo     - [PNT] Pointer to Block
    //! @param[in]  boDetect  - [BOO] TRUE = Detect-Bit-Event, FALSE = Delete-Bit-Event
    //! @param[in]  u8BitPos  - [IDX] Bit number 0-7
    //! @retval     TRUE/FALSE  - [BIT] Error State of the specific Bit-Position
    //! @retval     0           - An argument is `NULL` pointer.
    //! @retval     0           - Object is not registered.
    //! @retval     0           - Invalid address of object.
    //--------------------------------------------------------------------------------------------------
    extern TBoolean boBloOutVoltProGetErrEveBit( TBloOutVoltPro* ptBlo, TBoolean boDetect, TUint8 u8BitPos );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Get bit field of event states.
    //! @pre
    //!             - Function `eBloOutVoltPro()` must be already successfully executed
    //!               at least once.
    //! @param[in]  ptBlo     - [PNT] Pointer to Block
    //! @param[in]  boDetect  - [BOO] TRUE = Detect-Bit-Event, FALSE = Delete-Bit-Event
    //! @retval     [0, U16_MAX]    - [BIT] Bit coded error event state
    //! @retval     0               - An argument is `NULL` pointer.
    //! @retval     0               - Object is not registered.
    //! @retval     0               - Invalid address of object.
    //--------------------------------------------------------------------------------------------------
    extern TUint16 u16BloOutVoltProGetErrEveAll( TBloOutVoltPro* ptBlo, TBoolean boDetect );

#endif
