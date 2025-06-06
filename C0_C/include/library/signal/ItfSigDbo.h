//******************************************************************************************************
/*!
@file    ItfSigDbo.h
@version 1.10.0.0
@brief   \htmlonly
<span><img class="imgBriefImage" src="SigDbo32x32.png" alt="SigDbo32x32.png"></span>
<span class="spanBriefText">Signal Function "Debounce Time" (<b>SigDbo</b>)</span>
\endhtmlonly

@details
The "Debounce Time" signal object is designed to avoid bouncing effect.

Bouncing is the tendency of any two metal contacts in an electronic device to generate multiple
signals as the contacts close or open. Debouncing object is any kind of hardware device or software that
ensures that only a single signal will be acted upon for a single opening or closing of a contact.

When you press a key on your computer keyboard , you expect a single contact to be recorded by your
computer. In fact, however, there is an initial contact, a slight bounce or lightening up of the
contact, then another contact as the bounce ends, yet another bounce back, and so forth. A similar
effect takes place when a switch made using a metal contact is opened. This signal is the software
solution that ensures that only one digital signal can be registered within the space of a given
time (milliseconds).

### Input Parameters
- Input value to debounce - `b2Inp` in the function \ref bi2SigDbo if value of type `TBit2`
  supposed to be debounced.

### Output Parameters
- Return value of the function \ref bi2SigDbo if value of type `TBit2`
  supposed to be debounced.

## Initialization parameters

<h3 id="eDebTyp"> eDebTyp - Type of debounce variable </h3>
The debounce signal supports several types of variables. Supported types presented in following
\ref EDebTyp "enumeration".

<h3 id="SetVal"> SetVal - Initial output value </h3>
An initial output value is value which is used as output value in first execution and until
another value will be debounced.

<h3 id="Dt">Dt - Debounce time</h3>
If an input value remains in the same state for a complete debounce time period,
then it will be set to the output.

@created    24.02.2012
@changelog
-   1.5.0.0 26.06.2018  
    - The MATCH signal interface version is updated to 1.4.
-   1.5.2.0 14.05.2019  
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

#ifndef __ITFSIGDBO__
  #define __ITFSIGDBO__

    // INCLUDES ========================================================================================
    #include <ItfCore.h>

    // DEFINES & ENUMS  ================================================================================

    // VARIABLES =======================================================================================

    //! The Debounce Data types
    typedef enum
    {
        DBOTYP_BOOL,    //!< [boo] TBoolean ( TRUE - FALSE )
        DBOTYP_BI2,     //!< [bi2] TBit2 ( BI2_MIN - BI2_MAX )
        DBOTYP_BI3,     //!< [bi3] TBit3 ( BI3_MIN - BI3_MAX )
        DBOTYP_U8,      //!< [u8] TUint8 ( U8_MIN - U8_MAX )
        DBOTYP_MAX      //!< Quantity of debounce data types
    } EDebTyp;

    // STRUCTURES ======================================================================================

    //! Signal object address structure
    /*! In order to use signal object this structure must be declared */
    typedef struct
    {
        TVoid*   pvObj;      //!< [stu] - Pointer to the private signal object
        TUint16  u16Stamp;   //!< Registration stamp
    }TSigDboAdr;

    // PROTOTYPES ======================================================================================


    //a) Versions Information

    //--------------------------------------------------------------------------------------------------
    //! @brief      Get a version information of a signal object
    //! @retval     *cptVer     - Pointer to a versions information parameter
    //--------------------------------------------------------------------------------------------------
    extern const TVerChapCom *cptSigDboVersionsInfo( TVoid );


    //--------------------------------------------------------------------------------------------------
    //! @brief      Check a version compatibility of a signal object
    //! @retval     TRUE    - A version of a signal object is compatible with a used MATCH version
    //! @retval     FALSE   - A version of an object is incompatible with a used MATCH version
    //--------------------------------------------------------------------------------------------------
    extern TBoolean boSigDboVersionCheck( TVoid );

    //b) Constructor

    //--------------------------------------------------------------------------------------------------
    //! @brief      Creation
    //! @details    Object constructor
    //! @pre
    //!             - This signal type should be registered in MATCH environment
    //!             - An instance of the structure \ref TSigDboAdr must be already declared
    //! @note
    //!             - Method must be used in creation / start up phase (AppStartUp)
    //! @param[in]  ptSigAdr    - [stu] Pointer to a signal address structure
    //! @param[in]  cpchNa      - [cha] Certain name of signal
    //! @retval     R_OKAY          - Faultless execution
    //! @retval     R_MEMORY        - No more memory is available
    //! @retval     R_NOT_NAME      - Name is not valid
    //! @retval     R_NULL_POINTER  - One of arguments is null pointer
    //! @retval     R_NOT_REGISTRY  - Signal object is not registered
    //--------------------------------------------------------------------------------------------------
    extern ERetVal eSigDboCreate(       TSigDboAdr  *ptSigAdr,
                                const   TChar       *cpchNa );

    //c) Initialization

    //--------------------------------------------------------------------------------------------------
    //! @brief      Initialization
    //! @pre
    //!             - The function \ref eSigDboCreate must be already successfully executed.
    //! @note
    //!             - This method must be used in initialization phase (AppInit). \n
    //! @param[in]  ptSigAdr    - [stu] Pointer to a signal address structure
    //! @param[in]  eDebTyp     - [enu] A data type of debounced variable
    //! @param[in]  u8SetVal    - [def] Initial output value
    //! @param[in]  u32Dt       - [ms]  Debounce time
    //! @retval     R_OKAY         - Faultless execution
    //! @retval     R_UNKNOWN      - Wrong object name
    //! @retval     R_OVERFLOW     - Initial output value out of range of the debounced data type
    //! @retval     R_CONFIG       - A data type of debounced variable is out of valid range
    //! @retval     R_NULL_POINTER  - One of arguments is null pointer
    //! @retval     R_ADDRESS       - Wrong address of signal object
    //! @retval     R_NOT_REGISTRY  - Signal object is not registered
    //--------------------------------------------------------------------------------------------------
    extern ERetVal eSigDboInit( TSigDboAdr  *ptSigAdr,
                                EDebTyp     eDebTyp,
                                TUint8      u8SetVal,
                                TUint32     u32Dt);

    //d) Calculation / execution function(s)

    //--------------------------------------------------------------------------------------------------
    //! @brief      Calculation / Execution
    //! @pre
    //!             - The function \ref eSigDboInit must be already successfully executed.
    //! @note
    //!             - Method must be used in run (execution) phase (AppRun).
    //! @param[in]  ptSigAdr    - [stu] Pointer to signal address structure
    //! @param[in]  boInp       - [def] Input value to debounce
    //! @retval     OKAY        - Debounced value in the range of chosen data type
    //! @retval     ERROR       - If pointer to signal is wrong, return value is '0'
    //--------------------------------------------------------------------------------------------------
    extern TBoolean boSigDbo(TSigDboAdr* ptSigAdr, TBoolean boInp);

    //--------------------------------------------------------------------------------------------------
    //! @brief      Calculation / Execution
    //! @pre
    //!             - The function \ref eSigDboInit must be already successfully executed.
    //! @note
    //!             - Method must be used in run (execution) phase (AppRun).
    //! @param[in]  ptSigAdr    - [stu] Pointer to signal address structure
    //! @param[in]  bi2Inp      - [def] Input value to debounce
    //! @retval     OKAY        - Debounced value in the range of chosen data type
    //! @retval     ERROR       - If pointer to signal is wrong, return value is '0'
    //--------------------------------------------------------------------------------------------------
    extern TBit2 bi2SigDbo(TSigDboAdr* ptSigAdr, TUint8 bi2Inp);

    //--------------------------------------------------------------------------------------------------
    //! @brief      Calculation / Execution
    //! @pre
    //!             - The function \ref eSigDboInit must be already successfully executed.
    //! @note
    //!             - Method must be used in run (execution) phase (AppRun).
    //! @param[in]  ptSigAdr    - [stu] Pointer to signal address structure
    //! @param[in]  bi3Inp      - [def] Input value to debounce
    //! @retval     OKAY        - Debounced value in the range of chosen data type
    //! @retval     ERROR       - If pointer to signal is wrong, return value is '0'
    //--------------------------------------------------------------------------------------------------
    extern TBit3  bi3SigDbo(TSigDboAdr* ptSigAdr, TUint8 bi3Inp);

    //--------------------------------------------------------------------------------------------------
    //! @brief      Calculation / Execution
    //! @pre
    //!             - The function \ref eSigDboInit must be already successfully executed.
    //! @note
    //!             - Method must be used in run (execution) phase (AppRun).
    //! @param[in]  ptSigAdr    - [stu] Pointer to signal address structure
    //! @param[in]  u8Inp       - [def] Input value to debounce
    //! @retval     OKAY        - Debounced value in the range of chosen data type
    //! @retval     ERROR       - If pointer to signal is wrong, return value is '0'
    //--------------------------------------------------------------------------------------------------
    extern TUint8 u8SigDbo(TSigDboAdr* ptSigAdr, TUint8 u8Inp);

    //e) Set function(s)

    //--------------------------------------------------------------------------------------------------
    //! @brief      Set the data type of debounced variable
    //! @pre
    //!             - The function \ref eSigDboInit must be already successfully executed.
    //! @note
    //!             - Method must be used in initialization / run phase
    //!             (AppInit / AppRun).
    //! @param[in]  ptSigAdr    - [stu] Pointer to a signal address structure
    //! @param[in]  eDebTyp     - [ENU] A data type of debounced variable
    //! @retval     R_OKAY          - Function executed without error
    //! @retval     R_NOACT         - No action, because of incorrect initialization
    //! @retval     R_OVERFLOW      - Set value out of range
    //! @retval     R_CONFIG        - Type out of predefined range
    //! @retval     R_NULL_POINTER  - Null Pointer
    //! @retval     R_ADDRESS       - Wrong object address
    //! @retval     R_NOT_REGISTRY  - Signal not registered
    //--------------------------------------------------------------------------------------------------
    extern ERetVal eSigDboSetType(TSigDboAdr* ptSigAdr, EDebTyp eDebTyp);

    //--------------------------------------------------------------------------------------------------
    //! @brief      Set the debounce time
    //! @pre
    //!             - The function \ref eSigDboInit must be already successfully executed.
    //! @note
    //!             - Method must be used in initialization / run phase
    //!             (AppInit / AppRun).
    //! @param[in]  ptSigAdr    - [stu] Pointer to a signal address structure
    //! @param[in]  u32Dt       - [ms]  Debounce Time
    //! @retval     R_OKAY          - Function executed without error
    //! @retval     R_NOACT         - No action, because of incorrect initialization
    //! @retval     R_NULL_POINTER  - Null Pointer
    //! @retval     R_ADDRESS       - Wrong signal address
    //! @retval     R_NOT_REGISTRY  - Signal not registered
    //--------------------------------------------------------------------------------------------------
    extern ERetVal eSigDboSetDebTime(TSigDboAdr* ptSigAdr, TUint32 u32Dt);

    //--------------------------------------------------------------------------------------------------
    //! @brief      Set the actual output value
    //! @pre
    //!             - The function \ref eSigDboInit must be already successfully executed.
    //! @note
    //!             - Method must be used in initialization / run phase
    //!             (AppInit / AppRun).
    //! @param[in]  ptSigAdr    - [stu] Pointer to a signal address structure
    //! @param[in]  u8SetVal    - [def] Set actual output value
    //! @retval     R_OKAY          - Function executed without error
    //! @retval     R_NOACT         - No action, because of incorrect initialization
    //! @retval     R_OVERFLOW      - Set value out of range
    //! @retval     R_CONFIG        - DBO type out of predefined range
    //! @retval     R_NULL_POINTER  - Null Pointer
    //! @retval     R_ADDRESS       - Wrong signal address
    //! @retval     R_NOT_REGISTRY  - Signal not registered
    //--------------------------------------------------------------------------------------------------
    extern ERetVal eSigDboSetStaVal(TSigDboAdr* ptSigAdr, TUint8 u8SetVal);

    //f) Get function(s)

    //--------------------------------------------------------------------------------------------------
    //! @brief      Get the signal name
    //! @pre
    //!             - The function \ref eSigDboInit must be already successfully executed.
    //! @note
    //!             - Method must be used in initialization / run phase
    //!             (AppInit / AppRun).
    //! @param[in]  ptSigAdr    - [stu] Pointer to a signal address structure
    //! @retval     != NULL     - returned name of the signal
    //! @retval     NULL        - name not valid
    //--------------------------------------------------------------------------------------------------
    extern TChar* pchSigDboGetName(TSigDboAdr* ptSigAdr);

    //--------------------------------------------------------------------------------------------------
    //! @brief      Get initialization status of signal object
    //! @pre
    //!             - The function \ref eSigDboInit must be already successfully executed.
    //! @note
    //!             - Method can be used in initialization / run phase
    //!             ( AppInit / AppRun).
    //! @param[in]  ptSigAdr    - [stu] Pointer to signal address structure
    //! @retval     R_OKAY          - Faultless status
    //! @retval     R_XXXX          - All of the return values of the function \ref eSigDboInit
    //--------------------------------------------------------------------------------------------------
    extern ERetVal eSigDboGetInitSta(TSigDboAdr* ptSigAdr);

    //--------------------------------------------------------------------------------------------------
    //! @brief      Get the last input value
    //! @pre
    //!             - The function \ref eSigDboInit must be already successfully executed.
    //! @note
    //!             - Method must be used in run (execution) phase (AppRun).
    //! @param[in]  ptSigAdr    - [stu] Pointer to a signal address structure
    //! @retval     OKAY        - Last input value
    //! @retval     ERROR       - If pointer to signal is wrong, return value is '0'
    //--------------------------------------------------------------------------------------------------
    extern TBoolean boSigDboGetInpVal(TSigDboAdr* ptSigAdr );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Get the last input value
    //! @pre
    //!             - The function \ref eSigDboInit must be already successfully executed.
    //! @note
    //!             - Method must be used in run (execution) phase (AppRun).
    //! @param[in]  ptSigAdr    - [stu] Pointer to a signal address structure
    //! @retval     OKAY        - Last input value
    //! @retval     ERROR       - If pointer to signal is wrong, return value is '0'
    //--------------------------------------------------------------------------------------------------
    extern TBit2 bi2SigDboGetInpVal(TSigDboAdr* ptSigAdr );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Get the last input value
    //! @pre
    //!             - The function \ref eSigDboInit must be already successfully executed.
    //! @note
    //!             - Method must be used in run (execution) phase (AppRun).
    //! @param[in]  ptSigAdr    - [stu] Pointer to a signal address structure
    //! @retval     OKAY        - Last input value
    //! @retval     ERROR       - If pointer to signal is wrong, return value is '0'
    //--------------------------------------------------------------------------------------------------
    extern TBit3 bi3SigDboGetInpVal(TSigDboAdr* ptSigAdr );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Get the last input value
    //! @pre
    //!             - The function \ref eSigDboInit must be already successfully executed.
    //! @note
    //!             - Method must be used in run (execution) phase (AppRun).
    //! @param[in]  ptSigAdr    - [stu] Pointer to a signal address structure
    //! @retval     OKAY        - Last input value
    //! @retval     ERROR       - If pointer to signal is wrong, return value is '0'
    //--------------------------------------------------------------------------------------------------
    extern TUint8 u8SigDboGetInpVal(TSigDboAdr* ptSigAdr );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Get the last output value
    //! @pre
    //!             - The function \ref eSigDboInit must be already successfully executed.
    //! @note
    //!             - Method must be used in run (execution) phase (AppRun).
    //! @param[in]  ptSigAdr    - [stu] Pointer to a signal address structure
    //! @retval     OKAY        - Last output value
    //! @retval     ERROR       - If pointer to signal is wrong, return value is '0'
    //--------------------------------------------------------------------------------------------------
    extern TBoolean boSigDboGetOutVal(TSigDboAdr* ptSigAdr );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Get the last output value
    //! @pre
    //!             - The function \ref eSigDboInit must be already successfully executed.
    //! @note
    //!             - Method must be used in run (execution) phase (AppRun).
    //! @param[in]  ptSigAdr    - [stu] Pointer to a signal address structure
    //! @retval     OKAY        - Last output value
    //! @retval     ERROR       - If pointer to signal is wrong, return value is '0'
    //--------------------------------------------------------------------------------------------------
    extern TBit2 bi2SigDboGetOutVal(TSigDboAdr* ptSigAdr );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Get the last output value
    //! @pre
    //!             - The function \ref eSigDboInit must be already successfully executed.
    //! @note
    //!             - Method must be used in run (execution) phase (AppRun).
    //! @param[in]  ptSigAdr    - [stu] Pointer to a signal address structure
    //! @retval     OKAY        - Last output value
    //! @retval     ERROR       - If pointer to signal is wrong, return value is '0'
    //--------------------------------------------------------------------------------------------------
    extern TBit3 bi3SigDboGetOutVal(TSigDboAdr* ptSigAdr );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Get the last output value
    //! @pre
    //!             - The function \ref eSigDboInit must be already successfully executed.
    //! @note
    //!             - Method must be used in run (execution) phase (AppRun).
    //! @param[in]  ptSigAdr    - [stu] Pointer to a signal address structure
    //! @retval     OKAY        - Last output value
    //! @retval     ERROR       - If pointer to signal is wrong, return value is '0'
    //--------------------------------------------------------------------------------------------------
    extern TUint8 u8SigDboGetOutVal(TSigDboAdr* ptSigAdr );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Get and reset the debounce event
    //! @pre
    //!             - The function \ref eSigDboInit must be already successfully executed.
    //! @note
    //!             - Method must be used in run (execution) phase (AppRun).
    //! @param[in]  ptSigAdr    - [stu] Pointer to a signal address structure
    //! @retval     OKAY        - Event State ( TRUE / FALSE )
    //! @retval     ERROR       - If pointer to signal is wrong, return value is '0'
    //--------------------------------------------------------------------------------------------------
    extern TBoolean boSigDboGetEve(TSigDboAdr* ptSigAdr);

    //--------------------------------------------------------------------------------------------------
    //! @brief      Get the remaining time difference until next event
    //! @pre
    //!             - The function \ref eSigDboInit must be already successfully executed.
    //! @note
    //!             - Method must be used in run (execution) phase (AppRun).
    //! @param[in]  ptSigAdr    - [stu] Pointer to a signal address structure
    //! @retval     OKAY        - [ms] Remaining time difference till the next event
    //! @retval     ERROR       - If pointer to signal is wrong, return value is '0'
    //--------------------------------------------------------------------------------------------------
    extern TUint32 u32SigDboGetDtToEve(TSigDboAdr* ptSigAdr);

#endif
