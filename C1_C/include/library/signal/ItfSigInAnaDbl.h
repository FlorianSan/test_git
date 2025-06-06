//******************************************************************************************************
/*!
@file    ItfSigInAnaDbl.h
@version 1.10.0.0
@briefWithImage{SigInAnaDbl32x32.png
,Block "Double Analog Input"
,SigInAnaDbl}

@details
This signal function scales two inputs (`i16InMaster`, `i16InSlave`)
to one output value(`*ptOut`). \n
The master leads the calculation while the slave has a control function.
Both inputs are projected to a common scale. The output is valid,
when the slave value is in the accepted distance to the master value.
(\ref TSigInAnaDblCfg::u8DevLim "u8DevLim"). \n
The scaling factor for both inputs can be different and is defined by the
relation of input characteristics to output characteristic.
Those characteristics are arrays of 3 values, describing a curve of two
linear areas. Each of those areas is linear scaled to the areas of the
output characteristic. E.g.:

|ai16InCharMaster   |[3]     |
|:-----------------:|--------|
|       4500        |[0] POS |
|       2500        |[1] NEU |
|       500         |[2] NEG |

### Examples

The configuration may be chosen in a way that the slave value needs to
be half from the master value :

| ai16InCharMaster | [3] | ai16InCharSlave | [3] | ai16OutChar | [3] |
|:----------------:|:---:|:---------------:|:---:|:-----------:|:---:|
| 4500             | [0] | 2500            | [0] | 1000        | [0] |
| 2500             | [1] | 1500            | [1] | 0           | [1] |
| 500              | [2] | 500             | [2] | -1000       | [2] |

With the following result:

@image{SigInAnaDbl-halblaeufig.png, 800px, left}

@changelog
-           19.01.2016
    - ItfSigBasEle.h renamed to ItfBasStruc.h in MATCH 06.09.XX.XX.
-   1.5.0.0 26.06.2018
    - The MATCH signal interface version is updated to 1.4.
-   1.5.2.0 09.11.2018
    - New structure "configuration" was defined to hold inside all parameters
      required for the new calculation function `eSigInAnaDblWithErr`.
    - New initialization function `eSigInAnaDblInitWithCfg` is created.
    - New error enumeration was created.
    - New calculation function `eSigInAnaDblWithErr` was defined to check
      input values and recognize errors.
-   1.5.6.0 14.05.2019 14.05.2019  
    - Improved pointer error diagnostics (#26971).
-   1.6.0.0 18.06.2019
    - The MATCH signal interface version is updated to 1.5.
-   1.7.0.0 26.02.2020
    - The MATCH Signal interface version is updated to 1.6.
-   1.8.0.0 26.06.2020
    - The MATCH signal interface version is updated to 1.7.
-   1.9.1.0 25.08.2020 
    - The MATCH signal interface version is updated to 1.8.
-   1.10.0.0  04.05.2021
    - The MATCH signal interface version is updated to 1.9
*/
//******************************************************************************************************

#ifndef _ITFSIGINANADBL_H
#define _ITFSIGINANADBL_H

    // INCLUDES ========================================================================================
    #include <ItfCore.h>
    #include <ItfBasStruc.h>

    // DEFINES & ENUMS  ================================================================================
    //! Array size for input & output characteristics
    #define SIGINANADBL_SIZE_3  3

    //! Error Codes. \n
    //! Error codes are be delivered by function `eSigInAnaDblWithErr`
    //! through output error bit field `pu8ErrFld`.
    enum
    {
        //! High Limit at Master Channel. \n
        //! Input value `i16InpValMas` over the high limit `i16InpLimHigh`
        //! at master input channel.
        SIGINANADBL_ERR_MC_HL = 0,

        //! Low Limit at Master Channel. \n
        //! Input value `i16InpValMas` is below the low limit `i16InpLimLow`
        //! at master input channel.
        SIGINANADBL_ERR_MC_LL = 1,

        //! High Limit at Slave Channel. \n
        //! Input value `i16InpValMas` over the high limit `i16InpLimHigh`
        //! at slave input channel.
        SIGINANADBL_ERR_SC_HL = 2,

        //! Low Limit at Slave Channel. \n
        //! Input value `i16InpValMas` is below the low limit `i16InpLimLow`
        //! at slave input channel.
        SIGINANADBL_ERR_SC_LL = 3,

        //! Channel Deviation. \n
        //! Deviation between master channel input value `i16InpValMas` and
        //! slave channel input value `i16InpValSla` is bigger than deviation
        //! limit `u8DevLim`.
        SIGINANADBL_ERR_CD    = 4,

        //! Interface Error. \n
        //! Interface error is raised when `i16InpValMas` or `i16InpValSla`
        //! is higher than `I16_LIMIT`.
        SIGINANADBL_ERR_IE    = 5
    };

     //! Limp Mode. \n
     //! Error Mode to use one valid signal when the other is faulty.
     typedef enum
     {
         //! Limp Mode Is Disabled. \n
         LIMP_DISABLE,

         //! Limp Mode Is Enabled. \n
         LIMP_ENABLE,

         //! Limp Mode is not Configured.
         LIMP_NONE

     }ELimpMode;

     // STRUCTURES =====================================================================================

    //! Configuration
    typedef struct
    {
        // Basic part
        // Parameters of this part are
        // - required by initialization function `eSigInAnaDblInit`.
        // - returned by get function `eSigInAnaDblGetCfg`.

        //! [%] Deviation limit. \n
        //! Deviation limit is required to detect the `deviation` error.
        TUint8  u8DevLim;

        //! [%] Dead zone. \n
        //! The `dead zone` is an area around the neutral (second) point of the
        //! input characteristic `ai16InpCharMc[1]` / `ai16InpCharSc[1]`
        //! where any input value corresponds to neutral (second) point of the
        //! output characteristic `ai16OutChar[1]`.
        //! This area actually represents 2 different areas:
        //! - negative `dead zone` is a percentage of the range between
        //! first point and second point of input characteristic.
        //! - positive `dead zone` is a percentage of the range between
        //! second point and third point of input characteristic.
        TUint8  u8DeadZone;

        //! [cus] Output Characteristic. \n
        TInt16  ai16OutChar[SIGINANADBL_SIZE_3];

        //! [cus] Input Characteristic at Master Channel. \n
        TInt16  ai16InpCharMc[SIGINANADBL_SIZE_3];

        //! [cus] Input Characteristic at Slave Channel. \n
        TInt16  ai16InpCharSc[SIGINANADBL_SIZE_3];

        // Extension part
        // This part and all described here parameters are
        // - required by the function `eSigInAnaDblWithErr`.
        // - required by the function `eSigInAnaDblCheckCfg`.


        //! [enu] \ref eInpBeh "Input Behavior at Faulty Input Value". \n
        //! "Input behavior at faulty input value" determines how the
        //! calculation is performed if the input value is faulty.
        //!
        //! If `INPBEH_FREEZE_INP` is chosen and an error comes in the
        //! first cycle after initialization or update then output is
        //! set to `0`
        //!
        EInpBeh eInpBeh;

        //! Is "Limp Mode" allowed?
        //! Limp mode allows to get valid output signal from the block in case if
        //! one channel has an error.
        //!
        //! | Error at master channel | Error at slave channel | Is limp mode allowed | Is error reaction triggered? | Method used for a calculation |
        //! |-------------------------|------------------------|----------------------|------------------------------|-------------------------------|
        //! | 1                       | 1                      | 0                    | 1                            | defined error reaction        |
        //! | 1                       | 1                      | 1                    | 1                            | defined error reaction        |
        //! | 1                       | 0                      | 0                    | 1                            | defined error reaction        |
        //! | 1                       | 0                      | 1                    | 0                            | slave channel only            |
        //! | 0                       | 1                      | 0                    | 1                            | defined error reaction        |
        //! | 0                       | 1                      | 1                    | 0                            | master channel only           |
        //! | 0                       | 0                      | 0                    | 0                            | master channel only           |
        //! | 0                       | 0                      | 1                    | 0                            | master channel only           |
        //!
        TBoolean boLimpMode;

        //! [cus] Low Limit for Master Channel. \n
        //! Input limit to detect 'high limit at master channel' error.
        TInt16  i16InpLimHighMc;

        //! [cus] Low Limit for Master Channel. \n
        //! Input limit to detect 'low limit at master channel' error.
        TInt16  i16InpLimLowMc;

        //! [cus] High Limit for Slave Channel. \n
        //! Input limit to detect 'high limit at master channel' error.
        TInt16  i16InpLimHighSc;

        //! [cus] Low Limit for Slave Channel. \n
        //! Input limit to detect 'low limit at master channel' error.
        TInt16  i16InpLimLowSc;

        //! [cus] Default Input Value at Master Channel. \n
        //! In case if error reaction has to be triggered and "Input
        //! behavior at faulty input value" `eInpBeh` is set to
        //! `INPBEH_PAR_TO_INP` then "default input current"
        //! is used as input value in the block and it will be converted
        //! with master LUT to output value.
        TInt16  i16InpValDefMc;

    }TSigInAnaDblCfg;


    //! Signal object address structure. \n
    //! In order to use signal object this structure must be declared.
    typedef struct
    {
        //! [stu] Pointer to a Private Signal Object. \n
        TVoid*   pvObj;
        //! Registration stamp
        TUint16  u16Stamp;

    }TSigInAnaDblAdr;

    // PROTOTYPES ======================================================================================

    //a) Versions Information

    //--------------------------------------------------------------------------------------------------
    //! @brief      Signal Input double Version information
    //! @retval     *cptVer - Pointer of Versions information
    //--------------------------------------------------------------------------------------------------
    extern const TVerChapCom *cptSigInAnaDblVersionsInfo(TVoid);

    //--------------------------------------------------------------------------------------------------
    //! @brief      Signal Input double Version check
    //! @retval     TRUE   - is correct
    //! @retval     FALSE  - is incorrect
    //--------------------------------------------------------------------------------------------------
    extern TBoolean boSigInAnaDblVersionCheck(TVoid);

    //b) Constructor

    //--------------------------------------------------------------------------------------------------
    //! @brief      Object Constructor / create object
    //! @param[in]  ptSigAdr       - [SIG] Signal address
    //! @param[in]  cpchNa                - Name of object
    //! @retval     R_OKAY                - faultless execution
    //! @retval     R_MEMORY              - out of memory
    //! return      R_NOT_REGISTRY        - not registered
    //! @retval     R_NOT_NAME            - Name is not valid
    //! @retval     R_NULL_POINTER        - Null Pointer
    //--------------------------------------------------------------------------------------------------
    extern ERetVal eSigInAnaDblCreate(TSigInAnaDblAdr* ptSigAdr,
                                      const TChar* cpchNa);

    //c) Initialization

    //--------------------------------------------------------------------------------------------------
    //! @brief      Initialization of Object
    //! @param[in]  ptSigAdr              - [stu] Pointer to a signal address structure.
    //! @param[in]  ai16InCharMaster - [stu] Pointer to an array with input characteristic
    //!                                at master channel.
    //! @param[in]  ai16InCharSlave  - [stu] Pointer to an array with input characteristic
    //!                                at master channel.
    //! @param[in]  u8DevLim         - [%] Deviation range of both channels (% of signal range).
    //! @param[in]  u8DeadZone       - [%] Dead zone of output signal (% of signal range).
    //! @param[in]  ai16OutChar      - [stu] Pointer to an array with  output characteristic.
    //! @retval     R_OKAY          - Faultless execution.
    //! @retval     R_NULL_POINTER  - Null pointer argument is provided.
    //! @retval     R_ADDRESS       - Wrong block address.
    //! @retval     R_NOT_REGISTRY  - Signal is not registered.
    //! @retval     R_MONOTONY      - X values not monotonically increasing.
    //! Return values of `SigLut`:
    //! @retval     R_UNKNOWN       - Faulty object name.
    //! @retval     R_EMPTY         - Less points (empty characteristic definition).
    //! @retval     R_OVERFLOW      - Too much points.
    //! @retval     R_PARAMETER     - Wrong node parameters (e.g. at node #0).
    //--------------------------------------------------------------------------------------------------
    extern ERetVal eSigInAnaDblInit(TSigInAnaDblAdr* ptSigAdr,
                                    TInt16* ai16InCharMaster,
                                    TInt16* ai16InCharSlave,
                                    TUint8 u8DevLim,
                                    TUint8 u8DeadZone,
                                    TInt16* ai16OutChar);

    //--------------------------------------------------------------------------------------------------
    //! @brief      Check configuration with extension part
    //! @details    Function checks complete configuration
    //! @warning
    //!             - This function is required only if `eSigInAnaDblWithErr`.
    //!               will be used.
    //! @param[in]  ptSigAdr - [stu] Pointer to a signal address structure.
    //! @param[in]  ptCfg    - [stu] Pointer to a configuration structure.
    //! @retval     R_OKAY          - Faultless execution
    //! @retval     R_NULL_POINTER  - One of argument is null pointer
    //! @retval     R_ADDRESS       - Faulty block address
    //! @retval     R_NOT_REGISTRY  - Signal is not registered
    //! @retval     R_PARAMETER     - One of configuration parameters is wrong
    //!                               (Check debug console application to get more information)
    //--------------------------------------------------------------------------------------------------
    extern ERetVal eSigInAnaDblInitWithCfg(TSigInAnaDblAdr *ptSigAdr,
                                           TSigInAnaDblCfg *ptCfg);

    //d)  Status set and access functions

    //--------------------------------------------------------------------------------------------------
    //! @brief      Get signal name
    //! @param[in]  ptSigAdr    - Signal addresse
    //! @retval     != NULL     - Get signal name
    //! @retval     NULL        - Name not valid
    //--------------------------------------------------------------------------------------------------
    extern TChar* pchSigInAnaDblGetName(TSigInAnaDblAdr* ptSigAdr);

    //e)  Cyclic Signal Function(s)

    //--------------------------------------------------------------------------------------------------
    //! @brief      Calculation Algorithm
    //! @param[in]  ptSigAdr        - [stu] Pointer to a signal address structure
    //! @param[in]  i16InMaster     - [cus] Input value at master channel
    //! @param[in]  i16InSlave      - [cus] Input value at slave channel
    //! @param[out] pi16Out         - [cus] Output value
    //! @retval     R_OKAY                - Faultless execution.
    //! @retval     R_WARN                - Limp mode is active.
    //! @retval     R_NULL_POINTER        - Null pointer argument is provided.
    //! @retval     R_ADDRESS             - Wrong block address.
    //! @retval     R_RANGE               - One of input values (master or slave) is faulty.
    //!                                     Equal to `I16_ERROR` / `I16_UNDEF`.
    //! @retval     R_OVERFLOW            - Output signal of master / slave LUT is faulty.
    //! @retval     R_INCONSISTENT        - Deviation between master and slave is detected.
    //! @retval     R_UNKNOWN             - Output signal of output LUT is faulty.
    //--------------------------------------------------------------------------------------------------
    extern ERetVal eSigInAnaDbl(TSigInAnaDblAdr* ptSigAdr,
                                TInt16 i16InMaster,
                                TInt16 i16InSlave,
                                TInt16* pi16Out);

    //--------------------------------------------------------------------------------------------------
    //! @brief      Calculation / execution with error detection
    //! @details    Function requires additional configuration parameters,
    //!             but determines actual errors.
    //! @pre
    //!             - The function \ref eSigInAnaDblInit must be already
    //!               successfully executed.
    //! @warning
    //!             - This signal call is not compatible with `eSigInAnaDbl`.
    //!               Only one cyclic calculation has to be used after
    //!               the initialization.
    //!             - Complete error detection performed only if all bits
    //!               of `pu8ErrFld` are set to 0
    //! @note
    //!             - If any error bit in `pu8ErrFld` is set to `1` then error
    //!               detection is influenced in following way.
    //!               - If `SIGINANADBL_ERR_IE` is active.
    //!                 - Detection of all errors in signal is not performed.
    //!               - If `SIGINANADBL_ERR_MC_HL` is active.
    //!                 - Detection of following errors is not performed:
    //!                   - SIGINANADBL_ERR_MC_HL
    //!                   - SIGINANADBL_ERR_MC_LL
    //!                   - SIGINANADBL_ERR_CD
    //!               - If `SIGINANADBL_ERR_MC_LL` is active.
    //!                 - Detection of following errors is not performed:
    //!                   - SIGINANADBL_ERR_MC_HL
    //!                   - SIGINANADBL_ERR_MC_LL
    //!                   - SIGINANADBL_ERR_CD
    //!               - If `SIGINANADBL_ERR_SC_HL` is active.
    //!                 - Detection of following errors is not performed:
    //!                   - SIGINANADBL_ERR_SC_HL
    //!                   - SIGINANADBL_ERR_SC_LL
    //!                   - SIGINANADBL_ERR_CD
    //!               - If `SIGINANADBL_ERR_SC_LL` is active.
    //!                 - Detection of following errors is not performed:
    //!                   - SIGINANADBL_ERR_SC_HL
    //!                   - SIGINANADBL_ERR_SC_LL
    //!                   - SIGINANADBL_ERR_CD
    //!               - If `SIGINANADBL_ERR_CD` is active.
    //!                 - Detection of following errors is not performed:
    //!                   - SIGINANADBL_ERR_CD
    //!               - Detection is not performed also means that bit value
    //!                 remains the same after function execution.
    //!
    //! @param[in]  ptSigAdr       - [stu] Pointer to signal address structure
    //! @param[in]  i16InpValMc    - [cus] Input analog value from master channel
    //! @param[in]  i16InpValSc    - [cus] Input analog value from slave channel
    //! @param[in]  boTrgErrRctExt - [boo] External request to trigger error
    //!                              reaction in any case (even if error is
    //!                              not presented).
    //! @param[in]  ptCfg          - [stu] Configuration structure
    //! @param[out] pi16OutVal     - [cus] Scaled output value
    //! @param[out] pu8ErrFld      - [bit] Error bit field (check notes above!)
    //!                              (check enum definition on top of the file)
    //! @retval     R_OKAY          - Faultless execution
    //! @retval     R_NULL_POINTER  - One of argument is null pointer
    //! @retval     R_ADDRESS       - Faulty block address
    //! @retval     R_NOT_REGISTRY  - Signal is not registered
    //! @retval     R_UNKNOWN       - Unexpected function behavior
    //--------------------------------------------------------------------------------------------------
    extern ERetVal eSigInAnaDblWithErr(TSigInAnaDblAdr *ptSigAdr,
                                       TInt16 i16InpValMc,
                                       TInt16 i16InpValSc,
                                       TBoolean boTrgErrRctExt,
                                       TSigInAnaDblCfg *ptCfg,
                                       TInt16 *pi16OutVal,
                                       TUint8 *pu8ErrFld);

#endif
