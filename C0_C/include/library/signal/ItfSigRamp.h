//**************************************************************************************************
/*!
@file    ItfSigRamp.h
@version 0.8.0.0
@brief   \htmlonly
<span><img class="imgBriefImage" src="SigRamp32x32.png" alt="SigRamp32x32.png"></span>
<span class="spanBriefText">Signal Function "Ramp" (<b>SigRamp</b>)</span>
\endhtmlonly

@details
The signal "Ramp" is determined to restrict fast signal alteration. In other words, deviation of
signal output can be limited to some certain value.

### Input Parameters
  - `i16X` - [cus] Input value of a signal in the functions \ref i16SigRampTS1 - \ref i16SigRampTS4

### Output Parameters
  - [cus] Return value of the functions  \ref i16SigRampTS1 - \ref i16SigRampTS4

### Transfer Characteristic
The transfer function of ramp signal is shown on following picture.\n
Set parameters:
 -  The positive increment time (TPosInc) positive decrement time (TposDec) are set to 100 [ms].
 -  Maximal output value is set to 1000 [custom].
 -  Minimal output value is set to 0 [custom].

\htmlonly
<div class=divMaxWidth style="max-width: 910px;">
  <img class="imgInCenter" width="100%" align="center"
  src="SigRamp_IO.png" alt="SigRamp_IO.png">
</div>
<table width="100%"></table>
\endhtmlonly

## Initialization Parameters

<h3 id="eCalcType">eCalcType - Ramp Calculation Type</h3>
#### RAMPTYPE_NONLIN
With this ramp type the signal can be used as element of non-linear time-variant system.
Calculation function is presented by combination of linear functions, output of these functions
explicitly depend upon time.
The output of ramp signal will be calculated using two additional internal variables:
 -  Urange - the valid range of output value. The calculation of this variable depends on output
    value limits( YMax & YMin ) and previous output value.
    <div class="divMono"></div>
    | Maximal output value (YMax) | Minimal output value (YMin) | Previous output value ([t-1]) | Valid range (Urange) |
    |-----------------------------|-----------------------------|-------------------------------|----------------------|
    | > 0                         | > 0                         | any                           | YMax - YMin          |
    | <= 0                        | < 0                         | any                           | YMax - YMin          |
    | > 0                         | <= 0                        | > 0                           | YMax                 |
    | > 0                         | <= 0                        | <= 0                          | -1*YMin              |
    \n
 -  Tramp - the ramping time depends on actual input value (i16X[t]) and last output
    value (tOut.i16Y[t-1]).
    <div class="divMono"></div>
    | Actual input value (i16X[t]) | Additional condition                    | Ramping time (Tramp) |
    |------------------------------|-----------------------------------------|----------------------|
    | = 0                          | last output value > 0                   | TPosDec              |
    | = 0                          | last output value <= 0                  | TNegDec              |
    | > 0                          | actual input value > last output value  | TPosInc              |
    | > 0                          | actual input value <= last output value | TPosDec              |
    | < 0                          | actual input value < last output value  | TNegInc              |
    | < 0                          | actual input value >= last output value | TNegDec              |
    \n
    Graphically it can be shown in following way:
    \htmlonly
    <div class=divMaxWidth style="max-width: 910px;">
      <img class="imgInCenter" width="50%" align="center"
      src="SigRamp_Tramp.png" alt="SigRamp_Tramp.png">
    </div>
    <table width="100%"></table>
    \endhtmlonly

So if mentioned before internal variables are known, output can be calculated with following formulas:
<div class="divMaxWidth">
<span> If actual input value > last output value </span>
\f{eqnarray*}{
Y \left( t \right) &=& Y\left( t-1 \right) + \frac{ U_{Range} }{ T_{Ramp} }
\f}
<span> - If actual input value < last output value </span>
\f{eqnarray*}{
Y \left( t \right) &=& Y\left( t-1 \right) - \frac{ U_{Range} }{ T_{Ramp} }
\f}
</div>

#### RAMPTYPE_LINEAR
With this ramp type the signal can be used as element of linear time-invariant system.
Calculation function is presented by lag function "T1".
The output of ramp signal will be calculated using one additional internal variables:
 -  Tramp - the ramping time depends on actual input value (i16X[t]) and last output
    value (tOut.i16Y[t-1]).
    <div class="divMono"></div>
    | Actual input value (i16X[t]) | Additional condition                    | Ramping time (Tramp) |
    |------------------------------|-----------------------------------------|----------------------|
    | = 0                          | last output value > 0                   | TPosDec              |
    | = 0                          | last output value <= 0                  | TNegDec              |
    | > 0                          | actual input value > last output value  | TPosInc              |
    | > 0                          | actual input value <= last output value | TPosDec              |
    | < 0                          | actual input value < last output value  | TNegInc              |
    | < 0                          | actual input value >= last output value | TNegDec              |
    \n
    Graphically it can be shown in following way:
    \htmlonly
    <div class=divMaxWidth style="max-width: 910px;">
      <img class="imgInCenter" width="50%" align="center"
      src="SigRamp_Tramp.png" alt="SigRamp_Tramp.png">
    </div>
    <table width="100%"></table>
    \endhtmlonly

The "linear" ramp type uses lag transfer function "T1" for output calculation. The function is
presented in Laplace domain:
<div class="divMaxWidth"> \f{eqnarray*}{
G \left( s \right) &=&  \frac{ 1 }{ 1 + T_{Ramp} \cdot s }
\f} </div>

<h3 id="Dt"> Dt - Sample (task) time </h3>
Sample time is time period between signal calculations (executions), sample time allows you to control
sample rate - quantity of executions per second. \n
Usually sample time should be equal to task time (duty cycle) of used controller.\n
The set task time can be found within automatically generated code files ("Autocode") in file called
"Cfg_Ecu.c" in the structure with main controller settings - gEcu_tSys.tSil.u16EcuTaskTime.

<h3 id="Y0"> Y0 - Initial output value </h3>
Initial output value is value which will be used in first execution as output.
It should be ranged between minimal and maximal limits.

<h3 id="YMin"> YMin - Minimal output value </h3>
Minimal limit of output value, if value within calculation will fall below this limit,
then calculated value will be set to this minimal limit and provided to output.

<h3 id="YMax"> YMax - Maximal output value </h3>
Maximal limit of output value, if value within calculation will exceed this limit,
then calculated value will be set to this maximal limit and provided to output.

## Calculation Parameters

<h3 id="TNegDec"> TNegDec - Decrement time in negative range </h3>
If current input value is less than 1 and current input value is higher than previous output value,
than this parameter will be used as the ramp time.

<h3 id="TNegInc"> TNegInc - Increment time in negative range </h3>
If current input value is less than 1 and current input value is lower than previous output value,
than this parameter will be used as the ramp time.

<h3 id="TPosDec"> TPosDec - Decrement time in positive range </h3>
If current input value is more than 0 and current input value is lower than previous output value,
than this parameter will be used as the ramp time.

<h3 id="TPosInc"> TPosInc - Increment time in positive range </h3>
If current input value is more than 0 and current input value is higher than previous output value,
than this parameter will be used as the ramp time.

@created    28.03.2012
@changelog
-            19.01.2016
    - ItfSigBasEle.h renamed to ItfBasStruc.h in MATCH 06.09.XX.XX.
-   0.3.0.0  26.06.2018
    - The MATCH signal interface version updated to 1.4.
-   0.3.1.0  14.05.2019
    - Improved pointer error diagnostics (#26971).
-   0.4.0.0  18.06.2019
    - The MATCH signal interface version updated to 1.5.
-   0.4.1.0  07.08.2019
    - Improved ramping slope calculation (#33704).
-   0.5.0.0 26.02.2020
    - The MATCH Signal interface version is updated to 1.6.
-   0.6.0.0 26.06.2020
    - The MATCH signal interface version is updated to 1.7.
-   0.7.1.0 25.08.2020 
    - The MATCH signal interface version is updated to 1.8.
-   0.8.0.0  04.05.2021
    - The MATCH signal interface version is updated to 1.9
*/
//******************************************************************************************************
#ifndef __ITFSIGRAMP__
  #define __ITFSIGRAMP__

    // INCLUDES =======================================================================================
    #include <ItfBasStruc.h>

    // DEFINES =========================================================================================
    // ENUMERATIONS ====================================================================================

    //! Type of ramp calculation
    //! @details Precise information about types can be found <a href="#eCalcType">here</a>
    typedef enum
    {
        RAMPTYPE_NONLIN = 0,    //!< The ramp type can be used as element of non-linear time-variant
                                //!< system and presented by combination of linear functions,
                                //!< output of these functions depend explicitly upon time
        RAMPTYPE_LINEAR = 1,    //!< The ramp type can be used as element of linear time-invariant
                                //!< system and presented by "T1" function.
        RAMPTYPE_MAX    = 2     //!< Maximum count of output signal calculation type (invalid value)
    } ERampCalcTyp;

    // STRUCTURES ======================================================================================

    //! Signal object address structure
    /*! In order to use signal object this structure must be declared */
    typedef struct
    {
        TVoid*   pvObj;    //!< [stu] - Pointer to the private signal object
        TUint16  u16Stamp; //!< Registration stamp
    }TSigRampAdr;

    // VARIABLES =======================================================================================

    // PROTOTYPES ======================================================================================

    //a) Versions Information

    //--------------------------------------------------------------------------------------------------
    //! @brief      Get a version information of a signal object
    //! @retval     *cptVer     - Pointer to a versions information parameter
    //--------------------------------------------------------------------------------------------------
    extern const TVerChapCom *cptSigRampVersionsInfo( TVoid );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Check a version compatibility of a signal object
    //! @retval     TRUE    - A version of a signal object is compatible with a used MATCH version
    //! @retval     FALSE   - A version of an object is incompatible with a used MATCH version
    //--------------------------------------------------------------------------------------------------
    extern TBoolean boSigRampVersionCheck( TVoid );

    //b) Constructor

    //--------------------------------------------------------------------------------------------------
    //! @brief      Creation
    //! @details    Object constructor
    //! @pre
    //!             - This signal type should be registered in MATCH environment
    //!             - An instance of the structure \ref TSigRampAdr must be already declared
    //! @note
    //!             - Method must be used in creation / start up phase (AppStartUp)
    //! @param[in]  ptSigAdr    - [stu] Pointer to a signal address structure
    //! @param[in]  cpchNa      - [char] Certain name of signal
    //! @retval     R_OKAY          - Faultless execution
    //! @retval     R_MEMORY        - No more memory is available
    //! @retval     R_NOT_NAME      - Name is not valid
    //! @retval     R_NULL_POINTER  - One of arguments is null pointer
    //! @retval     R_NOT_REGISTRY  - Signal object is not registered
    //--------------------------------------------------------------------------------------------------
    extern ERetVal eSigRampCreate( TSigRampAdr *ptSigAdr, const TChar* cpchNa );

    //c) Initialization

    //--------------------------------------------------------------------------------------------------
    //! @brief      Initialization
    //! @pre
    //!             - The function \ref eSigRampCreate must be already successfully executed.
    //! @note
    //!             - This method must be used in initialization phase (AppInit). \n
    //!             - Controller duty cycle time should be used as the sample time if
    //!               function will be called within each controller cycle. \n
    //!               Controller duty cycle time is stored in auto code folder in file
    //!               Cfg_Ecu.c in structure gEcu_tSys.tSil.u16EcuTaskTime
    //! @param[in]  ptSigAdr    - [stu] Pointer to a signal address structure
    //! @param[in]  u16Dt       - [ms]  Sample time (ECU duty cycle time)
    //! @param[in]  eCalcType   - [ENU] Type of ramp calculation
    //! @param[in]  i16Y0       - [cus] Initial output value. Output at first call of cyclic function.
    //! @param[in]  i16YMin     - [cus] Minimal output value
    //! @param[in]  i16YMax     - [cus] Maximal output value
    //! @retval     R_OKAY          - Faultless execution
    //! @retval     R_UNKNOWN       - Wrong signal object name
    //! @retval     R_ZERO          - Sample / cycle time equal to 0
    //! @retval     R_CONFIG        - Ramp calculation type is not valid
    //! @retval     R_MAXIMUM       - Sample / duty cycle time is higher than maximal allowed (CTRL_MAX_DT)
    //! @retval     R_MINMAX        - Minimal value is not lower than maximal
    //! @retval     R_RANGE         - Initial output value is out of range [minimal ... maximal]
    //! @retval     R_NULL_POINTER  - One of arguments is null pointer
    //! @retval     R_ADDRESS       - Wrong address of signal object
    //! @retval     R_NOT_REGISTRY  - Signal object is not registered
    //--------------------------------------------------------------------------------------------------
    extern ERetVal eSigRampInit(TSigRampAdr     *ptSigAdr,
                                TUint16         u16Dt,
                                ERampCalcTyp    eCalcType,
                                TInt16          i16Y0,
                                TInt16          i16YMin,
                                TInt16          i16YMax );

    //d.1) Calculation / execution function(s) based on absolute time constants

    //--------------------------------------------------------------------------------------------------
    //! @brief      Calculation / Execution with 1 time constants
    //! @details    Use if the same time is required for increment & decrement in both
    //!             (positive & negative) ranges.
    //! @pre
    //!             - The function \ref eSigRampInit must be already successfully executed.
    //! @note
    //!             - Method must be used in run (execution) phase (AppRun).
    //! @param[in]  ptSigAdr    - [stu] Pointer to a signal address structure
    //! @param[in]  i16X        - [cus] Input value of signal
    //! @param[in]  u16T        - [cus] Absolute time to increment and decrement the value\n
    //!                           <a href="#TNegDec">u16T = TNegDec = TNegInc = TPosDec = TPosInc</a>
    //! @retval     OKAY        - [cus] Output value of signal
    //! @retval     ERROR       - If pointer to signal is wrong, return value is '0'
    //--------------------------------------------------------------------------------------------------
    extern TInt16 i16SigRampTS1( TSigRampAdr* ptSigAdr, TInt16 i16X, TUint16 u16T );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Calculation / Execution with 2 time constants
    //! @details    Use if required 2 different delays:
    //!             - one for increment in both (positive & negative) ranges [0 --> YMax] & [0 --> YMin]
    //!             - another for decrement in both (positive & negative) ranges [YMax --> 0] &
    //!             [YMin --> 0]
    //!
    //! @pre
    //!             - The function \ref eSigRampInit must be already successfully executed.
    //! @note
    //!             - Method must be used in run (execution) phase (AppRun).
    //! @param[in]  ptSigAdr    - [stu] Pointer to a signal address structure
    //! @param[in]  i16X        - [cus] Input value of signal
    //! @param[in]  u16TIncr    - [cus] Absolute time to increment the value from 0 to YMin or YMax\n
    //!                           <a href="#TNegInc">u16Tincr = TNegInc = TPosInc</a>
    //! @param[in]  u16TDecr    - [cus] Absolute time to decrement the value from YMin or YMax to 0\n
    //!                           <a href="#TNegDec">u16TDecr = TNegDec = TPosDec</a>
    //! @retval     OKAY        - [cus] Output value of signal
    //! @retval     ERROR       - If pointer to signal is wrong, return value is '0'
    //--------------------------------------------------------------------------------------------------
    extern TInt16 i16SigRampTS2(TSigRampAdr* ptSigAdr,
                                TInt16       i16X,
                                TUint16      u16TIncr,
                                TUint16      u16TDecr );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Calculation / Execution with 4 time constants
    //! @details    Use if required 4 different delays:
    //!             - one for increment in negative range [0 --> YMin],
    //!             - second for increment in positive range [0 --> YMax],
    //!             - third for decrement in negative range [YMin --> 0],
    //!             - fourth for decrement in positive range [YMax --> 0].
    //!
    //! @pre
    //!             - The function \ref eSigRampInit must be already successfully executed.
    //! @note
    //!             - Method must be used in run (execution) phase (AppRun).
    //! @param[in]  ptSigAdr    - [stu] Pointer to a signal address structure
    //! @param[in]  i16X        - [cus] Input value of signal
    //! @param[in]  u16TNegDecr - [cus] Absolute time to decrement the value from YMin to 0.
    //!                           <a href="#TNegDec">Read more.</a>
    //! @param[in]  u16TNegIncr - [cus] Absolute time to increment the value from 0 to YMin.
    //!                           <a href="#TNegInc">Read more.</a>
    //! @param[in]  u16TPosDecr - [cus] Absolute time to decrement the value from YMax to 0.
    //!                           <a href="#TPosDec">Read more.</a>
    //! @param[in]  u16TPosIncr - [cus] Absolute time to increment the value from 0 to YMax.
    //!                           <a href="#TPosInc">Read more.</a>
    //! @retval     OKAY        - [cus] Output value of signal
    //! @retval     ERROR       - If pointer to signal is wrong, return value is '0'
    //--------------------------------------------------------------------------------------------------
    extern TInt16 i16SigRampTS4(TSigRampAdr *ptSigAdr,
                                TInt16      i16X,
                                TUint16     u16TPosIncr,
                                TUint16     u16TPosDecr,
                                TUint16     u16TNegIncr,
                                TUint16     u16TNegDecr);

    //d.2) Calculation / execution function(s) based on relative change rate

    //--------------------------------------------------------------------------------------------------
    //! @brief      Calculation / Execution with 1 rate of change
    //! @details    Use if the same rate of change [cus/ms] is required for increment & decrement in both
    //!             (positive & negative) ranges.
    //!
    //! @pre
    //!             - The function \ref eSigRampInit must be already successfully executed.
    //! @note
    //!             - Method must be used in run (execution) phase (AppRun).
    //! @param[in]  ptSigAdr    - [stu] Pointer to a signal address structure
    //! @param[in]  i16X        - [cus] Input value of signal
    //! @param[in]  u16Yp       - [cus/ms] Maximal rate of change per sample time
    //! @retval     OKAY        - [cus] Output value of signal
    //! @retval     ERROR       - If pointer to signal is wrong, return value is '0'
    //--------------------------------------------------------------------------------------------------
    extern TInt16 i16SigRampRS1( TSigRampAdr* ptSigAdr, TInt16 i16X, TUint16 u16Yp );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Calculation / Execution with 2 rates of change
    //! @details    Use if required 2 different delays:
    //!             - one for increment in both (positive & negative) ranges [0 --> YMax] & [0 --> YMin]
    //!             - another for decrement in both (positive & negative) ranges [YMax --> 0] &
    //!             [YMin --> 0]
    //!
    //!
    //! @pre
    //!             - The function \ref eSigRampInit must be already successfully executed.
    //! @note
    //!             - Method must be used in run (execution) phase (AppRun).
    //! @param[in]  ptSigAdr    - [stu] Pointer to a signal address structure
    //! @param[in]  i16X        - [cus] Input value of signal
    //! @param[in]  u16YpIncr   - [cus/ms] Maximal rate of change per sample time to increase
    //!                           a value from 0 to YMin or YMax.
    //! @param[in]  u16YpDecr   - [cus/ms] Maximal rate of change per sample time to decrease
    //!                           a value from YMin or YMax to 0.
    //! @retval     OKAY        - [cus] Output value of signal
    //! @retval     ERROR       - If pointer to signal is wrong, return value is '0'
    //--------------------------------------------------------------------------------------------------
    extern TInt16 i16SigRampRS2(TSigRampAdr *ptSigAdr,
                                TInt16      i16X,
                                TUint16     u16YpIncr,
                                TUint16     u16YpDecr );

    //e) Set function(s)

    //--------------------------------------------------------------------------------------------------
    //! @brief      Set output range for signal object
    //! @details    Set minimal and maximal limits for output of the signal object.
    //! @pre
    //!             - The function \ref eSigRampInit must be already successfully executed.
    //! @note
    //!             - Method must be used in initialization / run phase
    //!             (AppInit / AppRun).
    //! @param[in]  ptSigAdr    - [stu] Pointer to signal address structure
    //! @param[in]  i16YMin     - [cus] Minimum output value
    //! @param[in]  i16YMax     - [cus] Maximum output value
    //! @retval     R_OKAY          - Faultless execution
    //! @retval     R_NOACT         - No action, because of incorrect initialization
    //! @retval     R_MINMAX        - Minimal value is not lower than maximal range value
    //! @retval     R_NULL_POINTER  - One of arguments is null pointer
    //! @retval     R_ADDRESS       - Wrong address of signal object
    //! @retval     R_NOT_REGISTRY  - Signal object is not registered
    //--------------------------------------------------------------------------------------------------
    extern ERetVal eSigRampSetRange( TSigRampAdr* ptSigAdr, TInt16 i16YMin, TInt16 i16YMax );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Set type of ramp calculation for signal object
    //! @pre
    //!             - The function \ref eSigRampInit must be already successfully executed.
    //! @note
    //!             - Method must be used in initialization / run phase
    //!             (AppInit / AppRun).
    //! @param[in]  ptSigAdr    - [stu] Pointer to signal address structure
    //! @param[in]  eCalcType   - [enu] Type of ramp calculation
    //! @retval     R_OKAY          - Faultless execution
    //! @retval     R_NOACT         - No action because an initialization is not valid
    //! @retval     R_CONFIG        - Ramp calculation type is not valid
    //! @retval     R_NULL_POINTER  - One of arguments is null pointer
    //! @retval     R_ADDRESS       - Wrong address of signal object
    //! @retval     R_NOT_REGISTRY  - Signal object is not registered
    //--------------------------------------------------------------------------------------------------
    extern ERetVal eSigRampSetCalcType( TSigRampAdr* ptSigAdr, ERampCalcTyp eCalcType );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Set status (output value) of signal object
    //! @pre
    //!             - The function \ref eSigRampInit must be already successfully executed.
    //! @note
    //!             - Method must be used in initialization / run phase
    //!             (AppInit / AppRun).
    //! @param[in]  ptSigAdr    - [stu] Pointer to signal address structure
    //! @param[in]  i16Y0       - [cus] Output value of signal
    //! @retval     R_OKAY          - Faultless execution
    //! @retval     R_NOACT         - No action because of incorrect initialization
    //! @retval     R_RANGE         - Set output value out of range [minimal ... maximal]
    //! @retval     R_NULL_POINTER  - One of arguments is null pointer
    //! @retval     R_ADDRESS       - Wrong address of signal object
    //! @retval     R_NOT_REGISTRY  - Signal is not registered
    //--------------------------------------------------------------------------------------------------
    extern ERetVal eSigRampSetStaVal( TSigRampAdr* ptSigAdr, TInt16 i16Y0 );

    //f) Get function(s)

    //--------------------------------------------------------------------------------------------------
    //! @brief      Get name of signal object
    //! @pre
    //!             - The function \ref eSigRampInit must be already successfully executed.
    //! @note
    //!             - Method must be used in initialization / run phase
    //!             (AppInit / AppRun).
    //! @param[in]  ptSigAdr    - [stu] Pointer to signal address structure
    //! @retval     != NULL     - Set signal name
    //! @retval     NULL        - Name is not valid
    //--------------------------------------------------------------------------------------------------
    extern TChar* pchRampGetName(TSigRampAdr* ptSigAdr);

    //--------------------------------------------------------------------------------------------------
    //! @brief      Get initialization status of signal object
    //! @pre
    //!             - The function \ref eSigRampInit must be already successfully executed.
    //! @note
    //!             - Method can be used in initialization / run phase
    //!             ( AppInit / AppRun).
    //! @param[in]  ptSigAdr    - [stu] Pointer to signal address structure
    //! @retval     R_OKAY          - Faultless status
    //! @retval     R_XXXX          - All of the return values of the function \ref eSigRampInit
    //--------------------------------------------------------------------------------------------------
    extern ERetVal eSigRampGetInitSta( TSigRampAdr* ptSigAdr );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Get type of ramp calculation for signal object
    //! @pre
    //!             - The function \ref eSigRampInit must be already successfully executed.
    //! @note
    //!             - Method can be used in initialization / run phase
    //!             ( AppInit / AppRun).
    //! @param[in]  ptSigAdr    - [stu] Pointer to signal address structure
    //! @retval     RAMPTYPE_NONLIN - [DEF] Actual ramp type is suited for non-linear time-variant system
    //! @retval     RAMPTYPE_LINEAR - [DEF] Actual ramp type is suited for linear time-invariant system
    //! @retval     RAMPTYPE_MAX    - [DEF] Error
    //--------------------------------------------------------------------------------------------------
    extern ERampCalcTyp eSigRampGetCalcType( TSigRampAdr* ptSigAdr );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Get last output value of signal object
    //! @details    Output value will not be calculated, instead of it, result of previous calculation
    //!             will be returned.
    //! @pre
    //!             - The function \ref eSigRampInit must be already successfully executed.
    //! @note
    //!             - Method must be used in initialization / run phase
    //!             (AppInit / AppRun).
    //! @param[in]  ptSigAdr    - [stu] Pointer to signal address structure
    //! @retval     OKAY        - Output value of signal
    //! @retval     ERROR       - If pointer to signal is wrong, return value is '0'
    //--------------------------------------------------------------------------------------------------
    extern TInt16 i16SigRampGetVal( TSigRampAdr* ptSigAdr );

#endif
