//******************************************************************************************************
/*!
@file    ItfBloSwiNo.h
@version 1.11.0.0
@brief   \htmlonly
<span><img class="imgBriefImage" src="BloSwiNo32x32.png" alt="BloSwiNo32x32.png"></span>
<span class="spanBriefText">Block "Switch Normally Open" (<b>BloSwiNo</b>)</span>
\endhtmlonly

@details
The block "Switch NO" should be used to connect a switch of "Normally Open" Type to a controller.
A switch can be used with external supply or it can be supplied internally by controller and have
to be connected to the ground.

### Input parameters
The block input is some suitable ECU pin supporting voltage, resistive or digital input mode. \n
In case of voltage or resistive input, limits of high and low levels of signal should be configured. \n
Otherwise, with digital input, the limits of levels are irrelevant.
Read more - \ref TSwiNoPrp::eAdcType

\htmlonly <div class=divMaxWidth style="max-width: 910px;">
  <img class="imgInCenter" width="600px" align="left" src="BloSwiNo_Input.png" alt="BloSwiNo_Input.png">
</div> <table width="100%"></table> \endhtmlonly

Also \ref TSwiNoOut::u16RawVal can be used as input from a CAN-bus message,
if pin index \ref TSwiNoPrp::ePin is set to "PIN_MAX".

### Output parameters
 - tOut.bi2SwiNoState - The state of a switch.
 - tOut.u16RawVal - The measured value at the pin of a switch.

\htmlonly <div class=divMaxWidth style="max-width: 910px;">
  <img class="imgInCenter" width="600px" align="left" src="BloSwiNo_Output.png" alt="BloSwiNo_Output.png">
</div> <table width="100%"></table> \endhtmlonly

If a switch is not operated ( open position ) then the state is "OFF". \n
If a switch is operated ( closed position ) position, the output status is set to ON.\n
Type of switch connection:
 - \ref DM_SWI_NO_HIGH_SIDE - external supply of a switch
 - \ref DM_SWI_NO_LOW_SIDE - internal supply of a switch


## PDT block settings
<div class="divPdt"></div>
| Name                                                            | Unit      | Range             | Default value       |
|-----------------------------------------------------------------|-----------|-------------------|---------------------|
| \b Common                                                       |           |                   |                     |
| Block name                                                      | char.     | 0 ... 32          | N/A                 |
| \ref eBloSta - Block initial state (process)                    | enum.     |                   | BLO_RELEASE         |
| Block description                                               | char.     | 0 ... 32          | N/A                 |
| \b Properties                                                   |           |                   |                     |
| \ref eInpBeh "eInpBeh" - Input behavior at fault input value    | enum.     |                   | INPBEH_ERR_TO_OUT   |
| \ref TSwiNoPrp::ePin "ePin" - pin index                         | enum.     |                   | PIN_NA              |
| \ref TSwiNoPrp::eAdcType "eAdcType" - Type of pin               | enum.     |                   | ADC_VIN_V           |
| \ref TSwiNoPrp::eSwiNoType "eSwiNoType" - Type of switch connection | enum. |                   | DM_SWI_NO_HIGH_SIDE |
| \b Parameters                                                   |           |                   |                     |
| \ref TSwiNoPar::bi2SwiDflt "bi2SwiDflt" - Default input value                  | [def] | BI2_OFF ... BI2_ON | BI2_OFF |
| \ref TSwiNoPar::u32DebTimeSwitches "u32DebTimeSwitches" - Debounce time        | [ms]  | 0 ... U32_LIMIT-1  | 100     |
| \ref TSwiNoPar::u16VolLoMin "u16VolLoMin" - Low level signal :: Minimal limit  | [def] | 0 ... U16_LIMIT-1  | 0       |
| \ref TSwiNoPar::u16VolLoMax "u16VolLoMax" - Low level signal :: Maximal limit  | [def] | 0 ... U16_LIMIT-1  | 2000    |
| \ref TSwiNoPar::u16VolHiMin "u16VolHiMin" - High level signal :: Minimal limit | [def] | 0 ... U16_LIMIT-1  | 8000    |
| \ref TSwiNoPar::u16VolHiMax "u16VolHiMax" - High level signal :: Maximal limit | [def] | 0 ... U16_LIMIT-1  | 29000   |


@created    20.02.2014
@changelog
-   1.4.0.0 09.02.2017
    - The MATCH block interface version is updated to 1.4.
-   1.4.2.0 15.05.2017
    - The state of a block pin is added in the output structure.
-   1.5.0.0 16.05.2017
    - The MATCH block interface version is updated to 1.5.
-   1.5.1.0 20.07.2017
    - The block output value is debounced at erroneous input if input behavior at error is set to INP_BEH_PAR_TO_INP.
-   1.6.0.0 26.06.2018
    - The MATCH block interface version is updated to 1.6.
-   1.6.1.0 14.05.2019
    - Improved pointer error diagnostics (#26971).
-   1.7.0.0 18.06.2019
    - The MATCH block interface version is updated to 1.7.
-   1.8.0.0 26.02.2020
    - The MATCH block interface version is updated to 1.8.
-   1.9.0.0 26.06.2020
    - The MATCH Block interface version is updated to 1.9.
-   1.10.1.0 25.08.2020 
    - The MATCH block interface version is updated to 1.10.
-   1.11.0.0  04.05.2021  
    - The MATCH block interface version is updated to 1.11
*/
//******************************************************************************************************

#ifndef __ITFBLOSWINO__
    #define __ITFBLOSWINO__

    // INCLUDES ========================================================================================
    #include <ItfCore.h>
    #include <ItfBasEleErr.h>

    // DEFINES & ENUMS =================================================================================

    //! Error Detection Methods
    enum
    {
        DM_SWI_NO_PIN_LOW,              //!< 0 - An input signal is too low / short circuit to ground
        /*!<
         The input value is lower than minimal limit of low level signal.
         */
        DM_SWI_NO_PIN_HIGH,             //!< 1 - An input signal is too high / short circuit to power
        /*!<
         The input value is higher than maximal limit of high level signal.
         */
        DM_SWI_NO_RANGE,                //!< 2 - An input signal is out of valid range
        /*!<
         The error is active in one of following conditions: \n
         - The input value is located between maximal limit of low level and minimal limit of high level.
         - The input value is equal to U16_UNDEF.
         - The input value is equal to U16_ERROR.
         */
        DM_SWI_NO_LIMIT_PARAMETER,      //!< 3 - Warning: a block has limited parameters
        /*!<
         The error is active if any of following rules is violated during the update of a block: \n
         - Minimal limit of low level < maximal limit of low level
         - Maximal limit of low level < minimal limit of high level
         - Minimal limit of high level < maximal limit of high level

         In this case wrong parameters are shifted ( in parameter structure ) to avoid this
         warning during the next update. \n
         The shifting is performed in following manner: \n
         For example, if minimal limit of low level >= maximal limit of low level then
         maximal limit of low level = minimal limit of low level + 500
         */
        DM_SWI_NO_INIT_ERROR,           //!< 4 - An initialization error
        /*!<
         The error is active if any of following rules is violated during the initialization of a block: \n
         - Minimal limit of low level < maximal limit of low level
         - Maximal limit of low level < minimal limit of high level
         - Minimal limit of high level < maximal limit of high level
         - pin type is out of range ( ADC_VIN_V, ADC_RES_R, ADC_DIN_D )
         */
        DM_SWI_NO_CNT_MAX               //! Quantity of error detection methods
    };

    //! Side of Switch Connection
    typedef enum
    {
        DM_SWI_NO_HIGH_SIDE,            //!< 0 - Switch normally open is connected to high-side
        /*!<
        If a switch is connected to the high-side ( power supply ) then pin resistor have to be
        set in the "pull-down" position.
        @htmlonly <div class="divMaxWidth">
          <img width=480px align="center" src="BloSwiNo_PullDown.png" alt="BloSwiNo_PullDown.png">
        </div> <table width="100%"></table> @endhtmlonly
         */
        DM_SWI_NO_LOW_SIDE,             //!< 1 - Switch normally open is connected to low-side
        /*!<
        If a switch is connected to the low-side ( ground ) then pin resistor have to be
        set in the "pull-up" position.
        @htmlonly <div class="divMaxWidth">
          <img width=480px align="center" src="BloSwiNo_PullUp.png" alt="BloSwiNo_PullUp.png">
        </div> <table width="100%"></table> @endhtmlonly
         */
        DM_SWI_NO_TYP_UNDEF             //!< 2 - Undefined type ( not a valid value )
    }ESwiNoTyp;

    // STRUCTURES ======================================================================================
    
    //! Properties - <a href="_blo.html#BloPrp">common data</a>.
    typedef struct
    {
        // Common
        EInpBeh     eInpBeh;            //!< [enu] \ref eInpBeh "Input behavior at fault input value"
        EPin        ePin;               //!< [enu] Pin Index
        EAdcTyp     eAdcType;           //!< [enu] Pin Type
        /*!<
        #### ADC_VIN_V - Voltage input / ADC_RES_R - Resistance input
        If the pin type is configured as the voltage / resistance input then limits of high and low
        levels have to be configured.
        @htmlonly <div class="divMaxWidth">
          <img width=700px align="center" src="BloSwiNo_Input.png" alt="BloSwiNo_Input.png">
        </div> <table width="100%"></table> @endhtmlonly

        #### ADC_DIN_D - Digital input
        If the pin type is configured as the digital input then limits of high and low levels are
        irrelevant. \n
        Also this type of pin does not recognize the following errors: \ref DM_SWI_NO_PIN_LOW,
        \ref DM_SWI_NO_PIN_HIGH, \ref DM_SWI_NO_RANGE
         */
        ESwiNoTyp   eSwiNoType;         //!< [enu] Switch connection type ( High-side / Low-side )
        /*!<
        #### High-Side
        If a switch is connected to the high-side ( power supply ) then pin resistor have to be
        set in the "pull-down" position.
        @htmlonly <div class="divMaxWidth">
          <img width=480px align="center" src="BloSwiNo_PullDown.png" alt="BloSwiNo_PullDown.png">
        </div> <table width="100%"></table> @endhtmlonly

        #### Low-Side
        If a switch is connected to the low-side ( ground ) then pin resistor have to be
        set in the "pull-up" position.
        @htmlonly <div class="divMaxWidth">
          <img width=480px align="center" src="BloSwiNo_PullUp.png" alt="BloSwiNo_PullUp.png">
        </div> <table width="100%"></table> @endhtmlonly
         */
    }TSwiNoPrp;
    
#ifdef BLOCK_DB_CONNECTION_SWINO
    //! Parameters with database links - <a href="_blo.html#BloPar">common data</a>.
    typedef struct
    {
        TBit2       bi2SwiDflt;         //!< [Def] - VAL :: Default input value
        TDbLink     tDbSwiDflt;         //!< [Def] - DBL :: Default input value
        TUint32     u32DebTimeSwitches; //!< [ms] - VAL :: Debounce time
        TDbLink     tDbDebTimeSwitches; //!< [ms] - DBL :: Debounce time

        TUint16     u16VolLoMin;        //!< [mV] - VAL :: Low level signal :: Minimal limit
        TDbLink     tDbVolLoMin;        //!< [mV] - DBL :: Low level signal :: Minimal limit
        TUint16     u16VolLoMax;        //!< [mV] - VAL :: Low level signal :: Maximal limit
        TDbLink     tDbVolLoMax;        //!< [mV] - DBL :: Low level signal :: Maximal limit
        TUint16     u16VolHiMin;        //!< [mV] - VAL :: High level signal :: Minimal limit
        TDbLink     tDbVolHiMin;        //!< [mV] - DBL :: High level signal :: Minimal limit
        TUint16     u16VolHiMax;        //!< [mV] - VAL :: High level signal :: Maximal limit
        TDbLink     tDbVolHiMax;        //!< [mV] - DBL :: High level signal :: Maximal limit

    }TSwiNoPar;
#else
    //! Parameters - <a href="_blo.html#BloPar">common data</a>.
    typedef struct
    {
        TBit2       bi2SwiDflt;         //!< [Def] \ref BloDefVal "Default input value"
        /*!<
        The default value is used in case of \ref eInpBeh "error at input". \n
        Also the default input value is set as initial input value during
        the initialization of a switch at start-up phase.
         */

        TUint32     u32DebTimeSwitches; //!< [ms] - Debounce time
        /*!<
        In order to increase the software robustness and to avoid a switching caused by
        glitches, a debounce time is implemented in block in order to provide stable
        status to the switch output.\n
         */

        TUint16     u16VolLoMin;        //!< [mV] - Low level signal :: Minimal limit for
                                        //!  measured voltage / resistance
        /*!<
        The levels definition is required only if the pin type is configured as voltage
        input ( ADC_VIN_V ) or resistive input ( ADC_RES_R ).\n
        Measured value is limited by pin resolution.\n
        If pin type is set to digital input ( ADC_DIN_D ) this parameter is irrelevant. \n
         */

        TUint16     u16VolLoMax;        //!< [mV] - Low level signal :: Maximal limit for
                                        //!  measured voltage / resistance
        /*!<
        The levels definition is required only if the pin type is configured as voltage
        input ( ADC_VIN_V ) or resistive input ( ADC_RES_R ).\n
        Measured value is limited by pin resolution.\n
        If pin type is set to digital input ( ADC_DIN_D ) this parameter is irrelevant. \n
         */

        TUint16     u16VolHiMin;        //!< [mV] - High level signal :: Minimal limit for
                                        //!  measured voltage / resistance
        /*!<
        The levels definition is required only if the pin type is configured as voltage
        input ( ADC_VIN_V ) or resistive input ( ADC_RES_R ).\n
        Measured value is limited by pin resolution.\n
        If pin type is set to digital input ( ADC_DIN_D ) this parameter is irrelevant. \n
         */

        TUint16     u16VolHiMax;        //!< [mV] - High level signal :: Minimal limit for
                                        //!  measured voltage / resistance
        /*!<
        The levels definition is required only if the pin type is configured as voltage
        input ( ADC_VIN_V ) or resistive input ( ADC_RES_R ).\n
        Measured value is limited by pin resolution.\n
        If pin type is set to digital input ( ADC_DIN_D ) this parameter is irrelevant. \n
         */

    }TSwiNoPar;
#endif
    //! Configuration - <a href="_blo.html#BloCfg">common data</a>.
    typedef struct
    {
        // Common
        TChar      achName[BLO_NAME_STR_LEN];   //!< [str] Block name
        EBloStatus eBloProc;                    //!< [enu] <a href="_blo.html#eBloSta">
                                                //!        Block initial state (process)</a>

        // Properties
        TSwiNoPrp    tPrp;                      //!< [stu] Properties

        // Parameters
        TSwiNoPar    tPar;                      //!< [stu] Parameters
        
        // Errors
        TUint8     u8ErrCnt;                    //!< [num] Quantity of defined errors
        TErrCfgFea atErrFea[DM_SWI_NO_CNT_MAX]; //!< [cla] Error Configurations
    }TSwiNoCfg;

    //! Input - <a href="_blo.html#BloInp">common data</a>.
    typedef struct
    {
        // Common
        EBloStatus   eBehProc;          //!< [enu] <a href="_blo.html#eBloSta">
                                        //!<       Input of block state (process)</a>
        EUpdate      eUpdatePar;        //!< [enu] <a href="_blo.html#eUpdatePar">
                                        //!<       Parameters update option</a>
        TBehErrCntl  tBehErrCntl;       //!< [stu] Control of error behavior

    }TSwiNoInp;

    //! Output - <a href="_blo.html#BloOut">common data</a>.
    typedef struct
    {
        // Common
        EBloStatus  eBehProc;           //!< [enu] <a href="_blo.html#eBloSta">
                                        //!<       Actual block state (process)</a>
        EPinStatus  ePinSta;            //!< [enu] Actual pin status
        TBit2       bi2SwiNoState;      //!< [def] Output state
        TUint16     u16RawVal;          //!< [mV, Ohm, def] Raw value measured value at input pin
        TBehErrSta  tBehErrSta;         //!< [stu] Error behavior status
    }TSwiNoOut;

    //! Address - <a href="_blo.html#BloAdr">common data</a>.
    typedef struct
    {
        const TSwiNoCfg* cptCfg;        //!< [stu] Configuration structure of the block
        TVoid*   pvObj;                 //!< [stu] Pointer to the private object
        TUint16  u16Stamp;              //!< Registration stamp
    }TSwiNoAdr;

    //! Block - <a href="_blo.html#Blo">common data</a>.
    typedef struct
    {
        TSwiNoInp   tInp;               //!< [stu] Input vector
        TSwiNoOut   tOut;               //!< [stu] Output vector
        TSwiNoPrp   tPrp;               //!< [stu] Properties
        TSwiNoPar   tPar;               //!< [stu] Parameters
        TSwiNoAdr   tXAdr;              //!< [stu] Address information
    }TBloSwiNo;

    // LIBRARY PROTOTYPES ==============================================================================

    // a) Version information

    //--------------------------------------------------------------------------------------------------
    //! @brief      Get a version information of a block object
    //! @retval     *cptVer - Pointer to versions information structure
    //--------------------------------------------------------------------------------------------------
    extern const TVerChapCom *cptBloSwiNoVersionsInfo( TVoid );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Check a version compatibility of a block object
    //! @retval     TRUE    - A version of a object is compatible with a used MATCH version
    //! @retval     FALSE   - A version of an object is incompatible with a used MATCH version
    //--------------------------------------------------------------------------------------------------
    extern TBoolean boBloSwiNoVersionCheck( TVoid );

    // b) Constructor

    //--------------------------------------------------------------------------------------------------
    //! @brief      Creation (without PDT)
    //! @details    Object constructor. Should be called only if block is created <b>without PDT</b>.
    //! @pre
    //!             - Block should be registered in MATCH environment
    //!             - Main structure \ref TBloSwiNo must be already defined
    //!             - Configuration structure \ref TSwiNoCfg must be already defined
    //! @note
    //!             - Method must be used in creation / start up phase (AppStartUp)
    //! @param[in]  ptBlo           - [stu] Pointer to block main structure
    //! @param[in]  cptCfg          - [stu] Pointer to the configuration structure
    //! @retval     R_OKAY          - Faultless execution
    //! @retval     R_MEMORY        - No more memory is available
    //! @retval     R_NULL_POINTER  - One of arguments is null pointer
    //! @retval     R_NOT_REGISTRY  - Object is not registered
    //--------------------------------------------------------------------------------------------------
    extern ERetVal eBloSwiNoCreate( TBloSwiNo* ptBlo, const TSwiNoCfg* cptCfg );

    // b) Initialization

    //--------------------------------------------------------------------------------------------------
    //! @brief      Initialization (without PDT)
    //! @details    Object initializer. Should be called only if block is created <b>without PDT</b>.
    //! @pre
    //!             - Function \ref eBloSwiNoCreate must be already successfully executed.
    //! @note
    //!             - Configuration structure, which was set in \ref eBloSwiNoCreate "creation
    //!               function", will be used to initialize the block settings.
    //!             - Method must be used in initialization phase (AppInit). \n
    //! @param[in]  ptBlo               - [PNT] Pointer to block main structure
    //! @retval     R_OKAY              - Faultless execution
    //! @retval     R_NULL_POINTER      - One of argument is null pointer
    //! @retval     R_ADDRESS           - Wrong address of object
    //! @retval     R_NOT_REGISTRY      - Object is not registered
    //! @retval     R_PARAMETER         - Same as error \ref DM_SWI_NO_INIT_ERROR
    //--------------------------------------------------------------------------------------------------
    extern ERetVal eBloSwiNoInit(TBloSwiNo* ptBlo );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Create and initialize registered object
    //! @details    Function call will be created automatically within automatically generated code
    //!             ("Autocode"). \n
    //!             Function creates and initializes object, which was created <b>by PDT</b>.\n
    //! @pre
    //!             - Object must be defined in PDT.
    //! @note
    //!             - Method will be applied automatically.
    //! @param[in]  pvBlo           - [PNT] Pointer to block main structure
    //! @retval     R_OKAY          - Faultless execution
    //! @retval     R_NULL_POINTER  - One of arguments is null pointer
    //! @retval     R_NOT_REGISTRY  - Object is not registered
    //! @retval     R_ADDRESS       - Wrong address of object
    //--------------------------------------------------------------------------------------------------
    extern ERetVal eBloSwiNoCreateInitRegistry( TVoid *pvBlo );

    // d) Calculation / execution / run

    //--------------------------------------------------------------------------------------------------
    //! @brief      Calculation / execution / run (Necessary)
    //! @details    Function runs the object execution, so the objects reads new input data and
    //!             calculate new output data. \n
    //!             Method (function) should be called any way, no matter if block was created by PDT
    //!             or without it.
    //! @pre
    //!             - Object must be defined in PDT or function \ref eBloSwiNoInit must be already
    //!               successfully executed.
    //! @note
    //!             - Method call should be made only once in one place for each certain block \n
    //!             - Method must be used in run (execution) phase (vAppRun).
    //! @param[in]  ptBlo           - [PNT] Pointer to block main structure
    //! @retval     R_OKAY          - Faultless execution
    //! @retval     R_NULL_POINTER  - One of arguments is null pointer
    //! @retval     R_NOT_REGISTRY  - Object is not registered
    //! @retval     R_ADDRESS       - Wrong address of object
    //--------------------------------------------------------------------------------------------------
    extern ERetVal eBloSwiNo( TBloSwiNo* ptBlo );

    // c) Error handling

    //--------------------------------------------------------------------------------------------------
    //! @brief      Get error status
    //! @details    Get the status of error, located at specific bit position
    //! @pre
    //!             - Object must be defined in PDT or function \ref eBloSwiNoInit must be already
    //!               successfully executed.
    //! @param[in]  ptBlo     - [stu] Pointer to block object
    //! @param[in]  u8BitPos  - [num] Specific bit position (0-15)
    //! @retval     TRUE/FALSE  - State of error
    //! @retval     FALSE       - Wrong/null pointer to the block object
    //--------------------------------------------------------------------------------------------------
    extern TBoolean boBloSwiNoGetErrStaBit( TBloSwiNo* ptBlo, TUint8 u8BitPos );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Get error bit field
    //! @details    Get summary error information ( complete error bit field )
    //! @pre
    //!             - Object must be defined in PDT or function \ref eBloSwiNoInit must be already
    //!               successfully executed.
    //! @param[in]  ptBlo     - [stu] Pointer to block object
    //! @retval     TUint16   - Bits field of error states
    //! @retval     0         - Wrong/null pointer to block objects
    //--------------------------------------------------------------------------------------------------
    extern TUint16 u16BloSwiNoGetErrStaAll( TBloSwiNo* ptBlo );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Get event of error
    //! @details    Get the event of error, located at specified bit position
    //! @pre
    //!             - Object must be defined in PDT or function \ref eBloSwiNoInit must be already
    //!               successfully executed.
    //! @param[in]  ptBlo     - [stu] Pointer to block object
    //! @param[in]  boDetect  - [boo] If TRUE is set then bit will be read from
    //!                         "Error detection field" - here stands TRUE if error was once active.
    //!                         If FALSE is set then bit will be read from
    //!                         "Error removal (deletion) field" - here stands TRUE if error was once
    //!                         deactivated by itself (not through Service Tool or Debug.exe).
    //! @param[in]  u8BitPos  - [num] Specific bit position (0-15)
    //! @retval     TRUE/FALSE  - Event state of error
    //! @retval     FALSE       - Wrong/null pointer to the block object
    //--------------------------------------------------------------------------------------------------
    extern TBoolean boBloSwiNoGetErrEveBit( TBloSwiNo* ptBlo, TBoolean boDetect, TUint8 u8BitPos );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Get event bit field
    //! @brief      Get summary information about events of errors ( complete event bit field )
    //! @pre
    //!             - Object must be defined in PDT or function \ref eBloSwiNoInit must be already
    //!               successfully executed.
    //! @param[in]  ptBlo     - [PNT]   Pointer to Block
    //! @param[in]  boDetect  - [boo] If TRUE is set then bit will be read from
    //!                         "Error detection field" - here stands TRUE if error was once active.
    //!                         If FALSE is set then bit will be read from
    //!                         "Error removal (deletion) field" - here stands TRUE if error was once
    //!                         deactivated by itself (not through Service Tool or Debug.exe).
    //! @retval     TUint16   - Bits field of event states
    //! @retval     0         - Wrong/null pointer to block object
    //--------------------------------------------------------------------------------------------------
    extern TUint16 u16BloSwiNoGetErrEveAll( TBloSwiNo* ptBlo, TBoolean boDetect );

#endif
