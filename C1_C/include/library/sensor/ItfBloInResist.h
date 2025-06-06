//**************************************************************************************************
/*!
@file    ItfBloInResist.h
@version 0.11.0.0
@brief   \htmlonly
<span><img class="imgBriefImage" src="BloInResist32x32.png" alt="BloInResist32x32.png"></span>
<span class="spanBriefText">Block "Resistance Input" (<b>BloInResist</b>)</span>
\endhtmlonly

<table width="1010" align="right"><tr><td>
\htmlonly <img src="BloInResistGraph.png" width="1000" alt="into" align="right" >\endhtmlonly
</td></tr>
<tr><td>
<b>Block Characteristic:</b>\n
Shown above are examples of how the block can be configured. For visual purposes the graphs have an offset of 200. Each characteristic has the same fix coordinates.
But the behaviour before and after the given curve as well as beyond the error thresholds differs.
With the configuration INPBEH_ERR_TO_OUT the output is 32766, a predefined error value. \n
<b>NOTE:</b>\n Graph 2 with INPBEH_FREEZE_INP is set to the u32InpValDefault in the area beneath the lower threshold. Normally
this mode holds on to the last valid value, because the plot has been made with the Input counting from 0 &Omega; to 1400 &Omega;,
there is no last valid value. Therefore the Output is set to u32InpValDefault.
<table border="0" width="100%"><tr><td>
<table>
<tr><td width="65"></td><th>eInpBeh</th><th>eFirRiseMode</th><th>eEndRiseMode</th><th>boScalEna</th></tr>
<tr><th style=" background-color: #DD2B2B">Graph 1</th><td>INPBEH_ERR_TO_OUT</td><td>LUTMOD_LIMITATION</td><td>LUTMOD_LIMITATION</td><td>TRUE</td></tr>
<tr><th style="background-color: #089B04">Graph 2</th><td>INPBEH_FREEZE_INP</td><td>LUTMOD_EXTRAPOLATE</td><td>LUTMOD_EXTRAPOLATE</td><td>TRUE</td></tr>
<tr><th style="background-color: #4B4EFF">Graph 3</th><td>INPBEH_PAR_TO_INP</td><td>LUTMOD_DEAD_RANGE</td><td>LUTMOD_DEAD_RANGE</td><td>TRUE</td></tr>
<tr><th style="background-color: #8F03C8">Graph 4</th><td>INPBEH_PAR_TO_INP</td><td>LUTMOD_START_ZERO</td><td>LUTMOD_START_ZERO</td><td>TRUE</td></tr>
</table>
</td><td></td></tr>
<tr><td style="vertical-align:top">
<table class="doxtable">
<tr><th align="left">X [&Omega;]    </th><td>132    </td>
                        <td>123 </td>
                        <td>138 </td>
                        <td>151 </td>
                        <td>169 </td>
                        <td>234 </td>
                        <td>387 </td>
                        <td>630 </td>
                        <td>900 </td></tr>
<tr><th  style="white-space:nowrap " >
            Y [CUST]    </th><td>120000 </td>
                        <td>12000   </td>
                        <td>10000   </td>
                        <td>9000    </td>
                        <td>8000    </td>
                        <td>6000    </td>
                        <td>4000    </td>
                        <td>2000    </td>
                        <td>1000    </td></tr>
</table>

</td><td style="vertical-align:top">
</td></tr>
<tr><td style="vertical-align:top">
<table class="doxtable">
<tr><th align="left">au32InLim[0]   </th><td align="right">50&Omega;    </td></tr>
<tr><th align="left">au32InLim[1]   </th><td align="right">1200&Omega;</td></tr>
<tr><th align="left">u32InpValDefault</th><td align="right">400&Omega;  </td></tr>
</table>

</td></tr>
</table>

</td></tr>
</table>
<table width="40%"><tr><td>
\htmlonly <img src="BloInResistSketch.png" width="500" alt="into" align="left">\endhtmlonly

</td></tr></table>
    @section BlockDescription Block Description
    <table width="40%"><tr><td>
       This block is designed to read in analog values of a single channel resistive sensor.
       For error detection a minimum and maximum valid sensor input value can be assigned.
       The measured input value can be scaled by a look-up table with up to maximum 8 points.

       The value \ref TInResistOut#ePinSta "ePinSta" represents the actual pin status value of the input pin.
        </td></tr></table>
    @section ConfigParamHelp Configuration and Parameterization Help
        <table width="40%"><tr><td>
        @subsection chapter1 Common
        <table width="40%"><tr><td>
        The block can be connected to a resistive ECU input type.
        The ECU PIN, where the sensor is connected to, have to be selected during configuration.

        The block has the possibility to scale the measured resistive value into the block output value \ref TInResistOut#i16ScalVal "i16ScalVal".
        The measured raw value is accessable by the value \ref TInResistOut#u32RawVal "u32RawVal" .

        A scaling option can be enabled by the flag \ref TInResistPar#boScalEna "boScalEna". If the scaling option is selected, a look-up table with up to eight scaling points is used to calculate the output value \ref TInResistOut#i16ScalVal "i16ScalVal".
        For the X-Value of the look up table is a TUint32 value used, in order to support also PT10000 temperature sensors.
        The behavior of the block before the first characteristic point and after the last characteristic point is adjustable by the parameters \ref TInResistPar#eFirRiseMode "eFirRiseMode" / \ref TInResistPar#eEndRiseMode "eEndRiseMode".\n
        \n
        </td></tr></table>
        @subsection Dbobehavior Debounce Behavior 
        <table width="40%"><tr><td>
        A debounce behavior is actual not supported. \n
        \n
        </td></tr></table>
        @subsection chapter3 Error Detection
        <table width="40%"><tr><td>
        The block support a error detection for short to ground and short to supply voltage. 
        A short to ground will be detected if the measured raw value is lower \ref TInResistPar#au32InLim "au32InLim[0]".
        A short to supply voltage will be detected if the measured raw value is higher \ref TInResistPar#au32InLim "au32InLim[1]".
        Also the block check the initialization properties and parameters and set an error if a values is not valid, e.g. continuous of the scaling points.
        See the chapter \p Constrains for further information about dependence of these checks. \n
        \n
        </td></tr></table>
        @subsection DefaultInitialization Default Initialization
        See \ref TInResistCfg \n
        See \ref TInResistPrp \n
        See \ref TInResistPar \n
        \n
        @section  Constrains Constrains
        <table width="40%"><tr><td>
        Check low side range boundary values
        Maximum limit value \ref TInResistPar#au32InLim "au32InLim[1]" must be greater than minimum limit value \ref TInResistPar#au32InLim "au32InLim[0]".
        The x values of scaling points should be continuous.
        \n
        </td></tr></table>
        </td></tr></table>
    @section Hardware Hardware
        This block is compatible with every pin that supports the pin type \p PINTYP_RES.
        \n

@created    24.04.2014
@changelog
-   0.4.0.0  09.02.2017  
    - The MATCH block interface version is updated to 1.4.
-   0.4.2.0  15.05.2017  
    - The state of a block pin is added in the output structure.
-   0.5.0.0  16.05.2017  
    - The MATCH block interface version is updated to 1.5.
-   0.6.0.0  03.07.2018  
    - The MATCH block interface version is updated to 1.6.
-   0.6.1.0  14.05.2019  
    - Improved pointer error diagnostics (#26971).
-   0.7.0.0 18.06.2019
    - The MATCH block interface version is updated to 1.7.
-   0.8.0.0 25.02.2020
    - The MATCH block interface version is updated to 1.8.
-   0.9.0.0 26.06.2020
    - The MATCH block interface version is updated to 1.9.
-   0.10.1.0 25.08.2020 
    - The MATCH block interface version is updated to 1.10.
-   0.11.0.0  23.04.2021  
    - The MATCH block interface version is updated to 1.11
*/
//**************************************************************************************************

#ifndef __ITFBLOINRESIST__
    #define __ITFBLOINRESIST__

// INCLUDES ========================================================================================
    #include <ItfCore.h>
    #include <ItfBasEleErr.h>
    #include <ItfSigLut.h>
    #include <ItfCoreDb.h>


// DEFINES & ENUMS =================================================================================
    #define INRES_POINTS_MAX        8  //!< [--] Maximum count of characteristic points

    //! PREDEFINED DETECTION METHODS
    enum
     {
         DM_INRESIST_SP,            //!< 0 - Input signal short to power
         DM_INRESIST_SG,            //!< 1 - Input signal short to ground
         DM_INRESIST_INTERNAL,      //!< 2 - Internal Block error - e.g. initialization or parameter change failed
         DM_INRESIST_CNT_MAX
     };

// STRUCTURES ======================================================================================

    //! LUT POINT
    typedef struct
    {
        TUint32     u32X;                               //!< [Ohm]  - Raw input values for characteristic
        TDbLink     tDbX;                               //!< [Ohm]  - DbLink Raw input values for characteristic
        TInt16      i16Y;                               //!< [Cust]  - Scaling values for characteristic
        TDbLink     tDbY;                               //!< [Cust]  - DbLink Scaling values for characteristic
    } TInResistPnt;

    //! PROPERTIES
    /*! 
    |    tPrp           | Default           | Range             |
    |:------------------| -----------------:| ----------------: |
    |eInBeh             | INBEH_ERR_TO_OUT  |INPBEH_ERR_TO_OUT  |
    |                   |                   |INPBEH_FREEZE_INP  |
    |                   |                   |INPBEH_PAR_TO_INP  |
    |ePin               | PIN_NA            |PIN_xxx            |
    \n
    */
    typedef struct
    {
        EInpBeh     eInpBeh;                        //!< [ENU] - Input behavior at fault input signal
        EPin        ePin;                           //!< [ENU] - Pin (Cfg-Idx) master channel
    }TInResistPrp;

    //! PARAMETER
    /*!
    |    tPar           |           | Default                           | Range                 |
    |:------------------|----:      | -----------------:                | -------------:        |
    |boScaEna           |           | FALSE                             |FALSE,TRUE             |
    |u8ScaPoiMax        |           | 8                                 |1.. LUT_POINTES_MAX    |
    |eFirRiseMode       |           | LUTMOD_LIMITATION                 |LUTMOD_LIMITATION      |
    |                   |           |                                   |LUTMOD_EXTRAPOLATE     |
    |                   |           |                                   |LUTMOD_DEAD_RANGE      |
    |                   |           |                                   |LUTMOD_START_ZERO      |
    |eEndRiseMode       |           |LUTMOD_LIMITATION                  |LUTMOD_LIMITATION      |
    |                   |           |                                   |LUTMOD_EXTRAPOLATE     |
    |                   |           |                                   |LUTMOD_DEAD_RANGE      |
    |                   |           |                                   |LUTMOD_START_ZERO      |
    |tInScalChar[8]     |           |                                   |                       |
    |                   |au32X[0..7]| {123,138,151,169,234,387,630,900} |U32_MIN..U32_MAX       |
    |                   |ai16Y[0..7]| {120,100,90,80,60,40,20,10}       |I16_Min..I16_LIMIT     |
    |au32InLim[2]       |           | {5, 50000}                        |U32_MIN..U32_MAX       |
    |u32InpValDefault   |           | 800                               |U32_MIN..U32_MAX       |
    */
    typedef struct
    {
        TDbLinkU32Var   atDbInLim[2];                  //!< [Ohm] - Detection limits for short to power and short to ground
        TUint32         u32InpValDefault;              //!< [Ohm] - Default value and error input value at input behavior
        TDbLink         tDbInpValDefault;
        TBoolean        boScalEna;                     //!< [BOon] - Scaling mode enable/disable
        TDbLink         tDbScalEna;
        TUint8          u8ScaPoiMax;                   //!< [NUM] - Max-Count of scaling Points
        TDbLink         tDbScaPoiMax;
        ELutMode        eFirRiseMode;                  //!< [ENU] - Behavior before first scaling node
        ELutMode        eEndRiseMode;                  //!< [ENU] - Behavior after laster scaling node
        TInResistPnt    atDbInScalChar[INRES_POINTS_MAX]; //!< [STR] - Scaling characteristic

    }TInResistPar;

    //! BLOCK CONFIGURATION
    /*!
    |    Error          | Default           | Range             |
    |:------------------| -----------------:| -------------:    |
    |u8ErrCnt           | 3                 |ERR_CNT_DFLT       |
    |atErrFea[]         |                   |1.. LUT_POINTES_MAX|
    See also \ref TInResistPrp \n
    See also \ref TInResistPar \n
    */
    typedef struct
    {
        // Common
        TChar               achName[BLO_NAME_STR_LEN];      //!< [STR] - Block Name
        EBloStatus          eBloProc;                       //!< [ENU] - Block Process
        // Properties
        TInResistPrp        tPrp;                           //!< [STU] - Properties
        // Parameter
        TInResistPar        tPar;                           //!< [STU] - Parameter
        // Errors
        TUint8             u8ErrCnt;                        //!< [NUM] - Number of defined errors
        TErrCfgFea         atErrFea[DM_INRESIST_CNT_MAX];   //!< [CLA] - Error Configurations
    }TInResistCfg;

    //! INPUT SUB-BLOCK
    typedef struct
    {
        // Common
        EBloStatus   eBehProc;                         //!< [ENU] - Block Process Behavior
        EUpdate      eUpdatePar;                       //!< [ENU] - Parameter update option
        // Error handling
        TBehErrCntl  tBehErrCntl;                      //!< [STU] - Error Control Behavior
    }TInResistInp;

    //! OUTPUT SUB-BLOCK
    typedef struct
    {
        // Common
        EBloStatus     eBehProc;                       //!< [ENU] - Block Process Behavior
        EPinStatus     ePinSta;                        //!< [ENU] - Actual pin status
        // Output
        TUint32        u32RawVal;                      //!< [Ohm] - Raw Value
        TInt16         i16ScalVal;                     //!< [CUS] - Output value
        // Error handling
        TBehErrSta     tBehErrSta;                     //!< [STU] - Error Behavior Status
    }TInResistOut;

    //! ADDRESS SUB-BLOCK
    typedef struct
    {
        const TInResistCfg* cptCfg;                //!< [STU] - Configuration Struct
        TVoid*      pvObj;                            //!< [STU] - Pointer to the private Object
        TUint16  u16Stamp;                         //!< Registration stamp
    }TInResistAdr;

    //! BLOCK
    typedef struct
    {
        TInResistInp   tInp;                       //!< [STU] - Input vector
        TInResistOut   tOut;                       //!< [STU] - Output vector
        TInResistPrp   tPrp;                       //!< [STU] - Properties
        TInResistPar   tPar;                       //!< [STU] - Parameter
        TInResistAdr   tXAdr;                      //!< [STU] - Private Address Information
    }TBloInResist;

// LIBRARY PROTOTYPES ==============================================================================
    //--------------------------------------------------------------------------------------------------
    //! @brief      Create the InResist-Block  (*** for manually Block creation without PDT ***)
    //! @param [in]  ptBlo          - [PNT] Pointer to Block
    //! @param [in]  cptCfg         - [PNT] Pointer to the config struct
    //! @retval     R_OKAY         - Functions execute without error
    //! @retval     R_NULL_POINTER - Null Pointer
    //! @retval     R_MEMORY       - Out of memory
    //! @retval     R_NOT_REGISTRY - Block not registered
    //! @retval     R_PHASE        - Don't call before phase 'MAIN_APP_INIT'
    //! @retval     R_ACCESSLEVEL  - The access level is incorrect [ACC_RD/ACC_CL1 active but the boCustList is FALSE (TRUE is correct)]
    //--------------------------------------------------------------------------------------------------
    extern ERetVal eBloInResistCreate( TBloInResist* ptBlo, const TInResistCfg* cptCfg );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Initialization function for InResist-Block Interface  (*** for manually Block creation without PDT ***)
    //! @param[in]  ptBlo          - [PNT] Pointer to Block
    //! @retval     R_OKAY              - Functions execute without error
    //! @retval     R_NULL_POINTER      - Null Pointer
    //! @retval     R_ADDRESS           - Wrong Block address
    //! @retval     R_NOT_REGISTRY      - Block not registered
    //! @retval     R_NOT_INITIALIZED   - Block not yet initialized
    //! @retval     R_NOACT             - No action
    //! @retval     R_CONFIG            - Configurated mode(s) out of range
    //--------------------------------------------------------------------------------------------------
    extern ERetVal eBloInResistInit( TBloInResist* ptBlo );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Create and Initialization function for INRESISTDBL-Block Interface (*** only for Block creation by PDT ***)
    //! @param[in]  pvBlo          - [PNT] Pointer to output Block structure
    //! @retval     R_OKAY              - Functions execute without error
    //! @retval     R_NULL_POINTER      - Null Pointer
    //! @retval     R_ADDRESS           - Wrong Block address
    //! @retval     R_NOT_REGISTRY      - Block not registered
    //! @retval     R_NOT_INITIALIZED   - Block not yet initialized
    //! @retval     R_NOACT             - No action
    //! @retval     R_PHASE             - Don't call before phase 'MAIN_APP_INIT'
    //! @retval     R_ACCESSLEVEL       - The access level is incorrect [ACC_RD/ACC_CL1 active but the boCustList is FALSE (TRUE is correct)]
    //--------------------------------------------------------------------------------------------------
    extern ERetVal eBloInResistCreateInitRegistry( TVoid *pvBlo );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Block INRESISTDBL Version information
    //! @retval     *cptVer - Pointer of Versions information
    //--------------------------------------------------------------------------------------------------
    extern const TVerChapCom *cptBloInResistVersionsInfo( TVoid );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Check a version compatibility of a Block object
    //! @retval     TRUE    - This object is compatible with the current MATCH version
    //! @retval     FALSE   - This object is not compatible with the current MATCH version
    //--------------------------------------------------------------------------------------------------
    extern TBoolean boBloInResistVersionCheck( TVoid );

    //--------------------------------------------------------------------------------------------------
    //! @brief      InResist Block Function
    //! @param[in,out]  ptBlo   - [stu] Pointer to output Block structure
    //! @retval     R_OKAY              - Functions execute without error
    //! @retval     R_ADDRESS           - Wrong Block address
    //! @retval     R_NULL_POINTER      - Null Pointer
    //! @retval     R_NOT_REGISTRY      - Block not registered
    //! @retval     R_NOT_INITIALIZED   - Block not yet initialized
    //! @retval     R_UNKNOWN           - Unknown error
    //--------------------------------------------------------------------------------------------------
    extern ERetVal eBloInResist( TBloInResist* ptBlo );
    
    //--------------------------------------------------------------------------------------------------
    //! @brief      Get the InResist Status on a specified Bit-Position
    //! @param[in]  ptBlo       - [PNT] Pointer to Block
    //! @param[in]  u8BitPos    - [IDX] Bitnumber 0-7
    //! @retval     FALSE/TRUE  - Error state at the specific Bit-Position
    //! @retval     1
    //!     - Null Pointer
    //!     - Wrong Block address
    //!     - Block not registered
    //--------------------------------------------------------------------------------------------------
    extern TBoolean boBloInResistGetErrStaBit( TBloInResist* ptBlo, TUint8 u8BitPos );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Get the sum InResist Status Information
    //! @param[in]  ptBlo     - [PNT] Pointer to Block
    //! @retval    TUint16    - State of all bits
    //! @retval     1
    //!     - Null Pointer
    //!     - Wrong Block address
    //!     - Block not registered
    //--------------------------------------------------------------------------------------------------
    extern TUint16 u16BloInResistGetErrStaAll( TBloInResist* ptBlo );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Get the InResist Event on a specified Bit-Position
    //! @param[in]  ptBlo     - [PNT] Pointer to Block
    //! @param[in]  boDetect  - [BOO] TRUE = Detect-Bit-Event, FALSE = Delete-Bit-Event
    //! @param[in]  u8BitPos  - [IDX] Bitnumber 0-7
    //! @retval     FALSE/TRUE  - Event state of error at specific bit position
    //! @retval     1
    //!     - Null Pointer
    //!     - Wrong Block address
    //!     - Block not registered
    //--------------------------------------------------------------------------------------------------
    extern TBoolean boBloInResistGetErrEveBit( TBloInResist* ptBlo, TBoolean boDetect, TUint8 u8BitPos );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Get the InResist Event on a specified Bit-Position
    //! @param[in]  ptBlo     - [PNT] Pointer to Block
    //! @param[in]  boDetect  - [BOO] TRUE = Detect-Bit-Event, FALSE = Delete-Bit-Event
    //! @retval     TUint16   - Bit field of event states
    //! @retval     1
    //!     - Null Pointer
    //!     - Wrong Block address
    //!     - Block not registered
    //--------------------------------------------------------------------------------------------------
    extern TUint16 u16BloInResistGetErrEveAll( TBloInResist* ptBlo, TBoolean boDetect );

#endif
