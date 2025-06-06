//**************************************************************************************************
/*!
@file    ItfBloSwiDblNoNc.h
@version 1.14.1.0
@brief   \htmlonly
<span><img class="imgBriefImage" src="BloSwiDblNoNc32x32.png" alt="BloSwiDblNoNc32x32.png"></span>
<span class="spanBriefText">Block "Double Switch Normally Opened & Normally Closed" (<b>BloSwiDblNoNc</b>)</span>
\endhtmlonly

\n
\htmlonly
<img src="BloSwiDblNoNcBlockDiagram.png" width="600"  alt="into", align="center" >
\endhtmlonly

Pin configuration
-----------------
The block inputs are suitable ECU pins, as analog voltage and digital input pins.
The pin configurations current, resistive and timer are not supported as every current or resistive input pin can be configured as voltage input.
Timer input pins may be configured as digital inputs. The logical behaviour of the block is:
\n\n
|   SWI0    |   SWI1    |   SWI_NONC    |
|-----------|-----------|---------------|
|   TRUE    |   FALSE   |   TRUE        |
|   FALSE   |   TRUE    |   FALSE       |
|   TRUE    |   TRUE    |   ERROR       |
|   FALSE   |   FALSE   |   ERROR       |
\n\n

The logical input values correlate with the logical values of digital input pins in case of ADC_DIN_D pin configuration
(ePinType0, ePinType1).
If analog inputs are used (ADC_VIN_V configuration) the TBit2 pin values are determined by\n

| Input Range| Connection Type ESwiNcTyp |
|------------|---------------------------|
|bi2Pinx = BI2_ON if u16VolHiMin<=VINx<=u16VolHiMax  |\ref DM_SWIDBL_NONC_HIGH_SIDE|
|bi2Pinx = BI2_OFF if u16VolLoMin<=VINx<=u16VolLoMax |\ref DM_SWIDBL_NONC_HIGH_SIDE|
|bi2Pinx = BI2_OFF if u16VolHiMin<=VINx<=u16VolHiMax |\ref DM_SWIDBL_NONC_LOW_SIDE |
|bi2Pinx = BI2_ON if u16VolLoMin<=VINx<=u16VolLoMax  |\ref DM_SWIDBL_NONC_LOW_SIDE |

bi2Pinx=BI2_ERROR if VINx lies in none of the above ranges.

Depending on the Pin connection to Low side (DM_SWIDBL_NONC_LOW_SIDE) or high side (DM_SWIDBL_NONC_HIGH_SIDE)\n\n

The switch error behaviour is related to the ItfSigSwiDbl signal element.\n
First of all each input value is debounced with Parameter Switch debounce time (u32DebTimeSwitches).
After that a logical error is delayed by
Parameter Error delay (u32DelayTimeError) and the output changes to BI2_ERROR.
The error is then saved with valid set condition after the error elements debounce time for logical error (Bit 0).
The range errors are independent from the logical error behavior of the Double Switch.
They are only debounced with the error elements internal times (u32TimeDetect), adjustable for each error bit.
If the switch is once in error state and then changes its error state (e.g. from logical error to short circuit)
the change is only delayed with the error elements debounce time set for the appropriate bit.

@created    08.12.2014
@changelog
-   1.7.0.0  06.03.2017
    - The MATCH block interface version is updated to 1.4.
-   1.7.2.0  15.05.2017
    - The states of pins is added in the output structure.
-   1.8.0.0  22.02.2017
    - The MATCH block interface version is updated to 1.5.
-   1.9.0.0  26.06.2018
    - The MATCH block interface version is updated to 1.6.
-   1.9.3.0  14.05.2019
    - Improved pointer error diagnostics (#26971).
-   1.10.0.0    18.06.2019
    - The MATCH block interface version is updated to 1.7.
-   1.11.0.0    26.02.2020
    - The MATCH block interface version is updated to 1.8.
-   1.12.0.0    26.06.2020
    - The MATCH Block interface version is updated to 1.9.
-   1.13.2.0    25.08.2020  
    - The MATCH block interface version is updated to 1.10.
-   1.14.0.0  04.05.2021  
    - The MATCH block interface version is updated to 1.11
-   1.14.1.0  06.04.2022  
    - Improved doxygen 
*/
//**************************************************************************************************

#ifndef __ITFBLOSWIDBLNONC__
    #define __ITFBLOSWIDBLNONC__

// INCLUDES ========================================================================================
    #include <ItfCore.h>
    #include <ItfBasEleErr.h>
    #include <ItfSigSwiDbl.h>
    // add needed include files

// DEFINES & ENUMS =================================================================================

    // define needed defines and enums
    //
    // for Example:
    // //! Block function mode

    // if the block contain error detection define errors
    //
    //! Errors
    enum
    {
        DM_SWI_DBL_NONC_INCONSISTENT,                //!< 0 - Inconsistency Error of Double Switch
        DM_SWI_DBL_NONC_PIN0_LO,                     //!< 1 - Pin_0 has too low voltage signal
        DM_SWI_DBL_NONC_PIN0_HI,                     //!< 2 - Pin_0 has too high voltage signal
        DM_SWI_DBL_NONC_PIN0_RANGE,                  //!< 3 - Pin_0 has a signal between high and low threshold
        DM_SWI_DBL_NONC_PIN1_LO,                     //!< 4 - Pin_1 has too low voltage signal
        DM_SWI_DBL_NONC_PIN1_HI,                     //!< 5 - Pin_1 has too high voltage signal
        DM_SWI_DBL_NONC_PIN1_RANGE,                  //!< 6 - Pin_1 has a signal between high and low threshold
        DM_SWI_DBL_NONC_CNT_MAX
    };

    //! Configuration
    typedef enum
    {
        DM_SWIDBL_NONC_HIGH_SIDE,                        //!< 0 - SwiNONC-Sensor is connected to High-Side
        DM_SWIDBL_NONC_LOW_SIDE,                         //!< 1 - SwiNONC-Sensor is connected to Low-Side
        DM_SWIDBL_NONC_TYP_UNDEF
    }ESwiDblNoNcTyp;

// STRUCTURES ======================================================================================

    //! FIXED CONFIGURATION SETTINGS
    typedef struct
    {
        // if applicable add fixed settings
        // ( fixed settings are NOT changeable )
        TUint8 u8SwiDblNoNcConfig; // SWIDBL_NONC, SWIDBL_NCNO, SWIDBL_NONO, SWIDBL_NONC

    }TSwiDblNoNcFix;

    //! PROPERTIES
    typedef struct
    {
        // Common
        EInpBeh    eInpBeh;                          //!< [ENU] - Input behavior at fault input signal

        // if applicable add properties
        // ( properties are changeable only
        //   after call of eBloSwiDblNoNcCreate() and
        //   befor call of eBloSwiDblNoNcInit() )
        // Pin
        EPin        ePin0;                       //!< [ENU] - Pin (Cfg-Idx)
        EPin        ePin1;                       //!< [ENU] - Pin (Cfg-Idx)

        EAdcTyp     eAdcType0;                   //!< [ENU] - Pin Type
        EAdcTyp     eAdcType1;                   //!< [ENU] - Pin Type

        ESwiDblNoNcTyp   eSwiDblNoNcType0;       //!< [ENU] - Sensor configuration (High-Side/Low-Side) of Pin 0
        ESwiDblNoNcTyp   eSwiDblNoNcType1;       //!< [ENU] - Sensor configuration (High-Side/Low-Side) of Pin 1

    }TSwiDblNoNcPrp;

    //! PARAMETER
    typedef struct
    {
        // Common
        // the type TVoid have to be changed to
        // the type of the input variable
        TBit2 bi2Swi0Def;
        TBit2 bi2Swi1Def;

        // if applicable add parameter struct
        // ( parameter are allways changeable )
        //! @brief [ms] Switching debounce time
        //!
        //! Input value is debounced with time defined by this parameter.
        //!
        //! \htmlonly <img src="BloSwiDblNoNc_DebTimeSwi.png" width="500px"  alt="into", align="center" > \endhtmlonly
        //!
        TUint32 u32DebTimeSwitches;
        //! @brief [ms] Delay time error
        //!
        //! First of all each input value is debounced with \ref TSwiDblNoNcPar::u32DebTimeSwitches "u32DebTimeSwitches".
        //! After that a detection of error is delayed by \ref TSwiDblNoNcPar::u32DelayTimeError "this parameter".
        //!
        //! \htmlonly <img src="BloSwiDblNoNc_DelayErrTime.png" width="500px"  alt="into", align="center" > \endhtmlonly
        //!
        TUint32 u32DelayTimeError;

        TUint16 u16VolLoMin0;                           //!< [mV] - Minimum Voltage Switch 0 of lower range
        TUint16 u16VolLoMax0;                           //!< [mV] - Maximum Voltage Switch 0 of lower range
        TUint16 u16VolHiMin0;                           //!< [mV] - Minimum Voltage Switch 0 of upper range
        TUint16 u16VolHiMax0;                           //!< [mV] - Maximum Voltage Switch 0 of upper range

        TUint16 u16VolLoMin1;                           //!< [mV] - Minimum Voltage Switch 1 of lower range
        TUint16 u16VolLoMax1;                           //!< [mV] - Maximum Voltage Switch 1 of lower range
        TUint16 u16VolHiMin1;                           //!< [mV] - Minimum Voltage Switch 1 of upper range
        TUint16 u16VolHiMax1;                           //!< [mV] - Maximum Voltage Switch 1 of upper range

    }TSwiDblNoNcPar;

    //! BLOCK CONFIGURATION
    typedef struct
    {
        // Common
        TChar      achName[BLO_NAME_STR_LEN];        //!< [STR] - Block Name
        EBloStatus eBloProc;                         //!< [ENU] - Block Process

        // if applicable add fixed settings struct
        // Fixed configuration settings
        TSwiDblNoNcFix   tFix;                             //!< [STU] - Fixed settings

        // Properties
        TSwiDblNoNcPrp    tPrp;                             //!< [STU] - Properties

        // Parameter
        TSwiDblNoNcPar    tPar;                             //!< [STU] - Parameter

        // if the block contain error detection set up error config data
        // // Errors
        TUint8     u8ErrCnt;                         //!< [NUM] - Number of defined errors
        TErrCfgFea atErrFea[DM_SWI_DBL_NONC_CNT_MAX];     //!< [CLA] - Error Configurations
    }TSwiDblNoNcCfg;

    //! INPUT SUB-BLOCK
    typedef struct
    {
        // Common
        EBloStatus   eBehProc;                       //!< [ENU] - Block Process Behavior
        EUpdate      eUpdatePar;                     //!< [ENU] - Parameter update option

        // if the block contain error detection uncomment the variable below
        TBehErrCntl  tBehErrCntl;                    //!< [STU] - Error Control Behavior
        // if applicable define input signal

    }TSwiDblNoNcInp;

    //! OUTPUT SUB-BLOCK
    typedef struct
    {
        // Common
        EBloStatus eBehProc;                         //!< [ENU] - Block Process Behavior
        EPinStatus ePinSta0;                         //!< [ENU] - Actual status of pin 0
        EPinStatus ePinSta1;                         //!< [ENU] - Actual status of pin 1

        TBit2 bi2SwiDblNoNcState;

        // if the block contain error detection uncomment the variable below
        TBehErrSta tBehErrSta;                       //!< [STU] - Error Behavior Status
        // Raw inputs
        TUint16 u16Pin0;
        TUint16 u16Pin1;
    }TSwiDblNoNcOut;

    //! ADDRESS SUB-BLOCK
    typedef struct
    {
        const TSwiDblNoNcCfg* cptCfg;                       //!< [STU] - Configuration Struct
        TVoid*   pvObj;                              //!< [STU] - Pointer to the private Object
        TUint16  u16Stamp;                           //!< Registration stamp
    }TSwiDblNoNcAdr;

    //! BLOCK
    typedef struct
    {
        TSwiDblNoNcInp   tInp;                              //!< [STU] - Input vector
        TSwiDblNoNcOut   tOut;                              //!< [STU] - Output vector
        TSwiDblNoNcPrp   tPrp;                              //!< [STU] - Properties
        TSwiDblNoNcPar   tPar;                              //!< [STU] - Parameter
        TSwiDblNoNcAdr   tXAdr;                             //!< [STU] - Private Address Information
    }TBloSwiDblNoNc;

// LIBRARY PROTOTYPES ==============================================================================
    //--------------------------------------------------------------------------------------------------
    //! @brief      Create the SwiDblNoNc-Block  (*** for manually block creation without PDT ***)
    //! @param[in]  ptBlo          - [PNT] Pointer to Block
    //! @param[in]  cptCfg         - [PNT] Pointer to the config struct
    //! @retval     R_OKAY         - [ENU] Functions execute without error
    //! @retval     R_NULL_POINTER - [ENU] Null Pointer
    //! @retval     R_MEMORY       - [ENU] Out of memory
    //! @retval     R_NOT_REGISTRY - [ENU] Block not registered
    //--------------------------------------------------------------------------------------------------
    extern ERetVal eBloSwiDblNoNcCreate( TBloSwiDblNoNc* ptBlo, const TSwiDblNoNcCfg* cptCfg );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Initialization funktion for SwiDblNoNc-Block Interface  (*** for manually block creation without PDT ***)
    //! @param[in]  ptBlo          - [PNT] Pointer to Block
    //! @retval     R_OKAY         - [ENU] Functions execute without error
    //! @retval     R_NULL_POINTER - [ENU] Null Pointer
    //! @retval     R_ADDRESS      - [ENU] Wrong block adresse
    //--------------------------------------------------------------------------------------------------
    extern ERetVal eBloSwiDblNoNcInit(TBloSwiDblNoNc* ptBlo );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Create and Initialization funktion for SWIDBLNONC-Block Interface (*** only for block creation by PDT ***)
    //! @param[in]  pvBlo          - [PNT] Pointer to output block sturcture
    //! @retval     R_OKAY         - [ENU] Functions execute without error
    //! @retval     R_NULL_POINTER - [ENU] Null Pointer
    //! @retval     R_ADDRESS      - [ENU] Wrong block adresse
    //! @retval     R_NOT_REGISTRY - [ENU] Block not registered
    //--------------------------------------------------------------------------------------------------
    extern ERetVal eBloSwiDblNoNcCreateInitRegistry( TVoid *pvBlo );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Block SWIDBLNONC Version information
    //! @retval     *cptVer - Pointer of Versions information
    //--------------------------------------------------------------------------------------------------
    extern const TVerChapCom *cptBloSwiDblNoNcVersionsInfo( TVoid );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Block SWIDBLNONC Version check
    //! @retval     TRUE   - is correct
    //! @retval     FALSE  - is incorrect
    //--------------------------------------------------------------------------------------------------
    extern TBoolean boBloSwiDblNoNcVersionCheck( TVoid );

    //--------------------------------------------------------------------------------------------------
    //! @brief      SwiDblNoNc Block Function
    //! @param[in]  ptBlo          - [PNT] Pointer to Block
    //! @retval     R_OKAY         - [ENU] Functions execute without error
    //! @retval     R_ADDRESS      - [ENU] Wrong block adress
    //! @retval     R_NULL_POINTER - [ENU] Null Pointer
    //! @retval     R_ADDRESS      - [ENU] Wrong block adresse
    //--------------------------------------------------------------------------------------------------
    extern ERetVal eBloSwiDblNoNc( TBloSwiDblNoNc* ptBlo );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Get the SwiDblNoNc Status on a specified Bit-Position
    //! @param[in]  ptBlo     - [PNT] Pointer to Block
    //! @param[in]  u8BitPos  - [IDX] Bitnumber 0-7
    //! @retval     OKAY      - [BIT] Error State of the specific Bit-Position
    //! @retval     ERROR     - If wrong ptBlo-Addr, return value is '0'
    //--------------------------------------------------------------------------------------------------
    extern TBoolean boBloSwiDblNoNcGetErrStaBit( TBloSwiDblNoNc* ptBlo, TUint8 u8BitPos );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Get the sum SwiDblNoNc Status Information
    //! @param[in]  ptBlo     - [PNT] Pointer to Block
    //! @retval     OKAY      - [BIT] Error State Bit Coded
    //! @retval     ERROR     - If wrong ptBlo-Addr, return value is '0'
    //--------------------------------------------------------------------------------------------------
    extern TUint16 u16BloSwiDblNoNcGetErrStaAll( TBloSwiDblNoNc* ptBlo );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Get the SwiDblNoNc Event on a specified Bit-Position
    //! @param[in]  ptBlo     - [PNT] Pointer to Block
    //! @param[in]  boDetect  - [BOO] TRUE = Detect-Bit-Event, FALSE = Delete-Bit-Event
    //! @param[in]  u8BitPos  - [IDX] Bitnumber 0-7
    //! @retval     OKAY      - [BIT] Error State of the specific Bit-Position
    //! @retval     ERROR     - If wrong ptBlo-Addr, return value is '0'
    //--------------------------------------------------------------------------------------------------
    extern TBoolean boBloSwiDblNoNcGetErrEveBit( TBloSwiDblNoNc* ptBlo, TBoolean boDetect, TUint8 u8BitPos );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Get the SwiDblNoNc Event on a specified Bit-Position
    //! @param[in]  ptBlo     - [PNT] Pointer to Block
    //! @param[in]  boDetect  - [BOO] TRUE = Detect-Bit-Event, FALSE = Delete-Bit-Event
    //! @retval     OKAY      - [BIT] Error State Bit Coded
    //! @retval     ERROR     - If wrong ptBlo-Addr, return value is '0'
    //--------------------------------------------------------------------------------------------------
    extern TUint16 u16BloSwiDblNoNcGetErrEveAll( TBloSwiDblNoNc* ptBlo, TBoolean boDetect );

#endif
