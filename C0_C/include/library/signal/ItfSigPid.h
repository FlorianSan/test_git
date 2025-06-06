//**************************************************************************************************
/*!
@file    ItfSigPid.h
@version 1.9.3.0
@brief   \htmlonly
<span><img class="imgBriefImage" src="SigPid32x32.png" alt="SigPid32x32.png"></span>
<span class="spanBriefText">Signal Function "PID - Controller" (<b>SigPid</b>)</span>
\endhtmlonly

@details
This signal implement a discrete-time PID-controller in your application. \n
The PID-controller output is a weighted sum of the input signal, the integral of the input
signal, and the derivative of the input signal. The weights are the proportional (Kp), integral (Ti)
and derivative (Td) gain parameters. These parameters of PID controller are tunable. \n
A first-order pole optionally filters the derivative action (Weight N).
Configurable options in the PID-controller signal include:\n
- eTyp - Type of controller form ( parallel or ideal )\n
- Gp - Proportional gain [1/100]
- Ti - Integration time [ms]
- Td - Derivation time [ms]
- N - First order filter on derivative (optional)\n
- Y0 - Initial output value [cus]
- Output saturation limits

Controller has built-in "anti-wind up" mechanism (back-calculation when saturation limits are reached)
and the possibility to reset a signal to initial conditions. \n
In one common implementation, the PID-controller operates in the feed-forward path of the feedback loop:\n
\htmlonly
<div class=divMaxWidth>
  <img class="imgInCenter" width="50%" align="center" src="SigPidLoop.png" alt="SigPidLoop.png">
</div>
<table width="100%"></table>
\endhtmlonly

### Input parameters
  - `u16Des` - [cus] Desired output value as an argument in function \ref i16SigPid
  - `u16Act` - [cus] Actual output value as an argument in function \ref i16SigPid

### Output parameters
  - [cus] Return value of the function \ref i16SigPid

## Initialization parameters

<h3 id="ePidMode">ePidMode - Type of controller</h3>
Laplace transfer function for ideal form of PID controller:\n
\htmlonly <div class="divMaxWidth"> \endhtmlonly
\f{eqnarray*}{
G\left(s\right) &=& G_P\;\left(1 + \frac{1}{T_I\;s} + T_D\;s\right)
\f}
\htmlonly </div> \endhtmlonly
Laplace transfer function for parallel form of PID controller:\n
\htmlonly <div class="divMaxWidth"> \endhtmlonly
\f{eqnarray*}{
G\left(s\right) &=& G_P + \frac{1}{T_I\;s} + T_D\;s
\f}
\htmlonly </div> \endhtmlonly
where:
- <b>Gp</b> - Proportional gain [1/100]
- <b>Ti</b> - Integration time constant [ms]
- <b>Td</b> - Derivative time constant [ms]

Result equation in discrete time calculated by forward Euler integration method for ideal form of
PID controller:\n
\htmlonly <div class="divMaxWidth"> \endhtmlonly
\f{eqnarray*}{
    G\left(z\right) &=& G_P\left(1 + \frac{T_s}{T_I\left(z-1\right)}\ + \frac{T_D\left(z-1\right)}{T_s}\right)
\f}
\htmlonly </div> \endhtmlonly
Result equation in discrete time calculated by forward Euler integration method for parallel form of
PID controller:\n
\htmlonly <div class="divMaxWidth"> \endhtmlonly
\f{eqnarray*}{
    G\left(z\right) &=& G_P + \frac{T_s}{T_I\left(z-1\right)}\ + \frac{T_D\left(z-1\right)}{T_s}
\f}
\htmlonly </div> \endhtmlonly

<h3 id="Dt"> Dt - Sample (task) time </h3>
Sample time is time period between signal calculations (executions), sample time allows you to control
sample rate - quantity of executions per second. \n
Usually sample time should be equal to task time (duty cycle) of used controller.\n
The set task time can be found within automatically generated code files ("Autocode") in file called
"Cfg_Ecu.c" in the structure with main controller settings - gEcu_tSys.tSil.u16EcuTaskTime.

<h3 id="Gp">Gp - Proportional gain</h3>
The proportional term produces an output value that is proportional to the current error value.
The proportional response can be adjusted by multiplying the error by a constant Gp, called the
proportional gain constant.
\htmlonly <div class="divMaxWidth"> \endhtmlonly
\f{eqnarray*}{
    P_{out} &=& G_P \times e(t)
\f}
\htmlonly </div> \endhtmlonly
A high proportional gain results in a large change in the output for a given change in the error.
If the proportional gain is too high, the system can become unstable. In contrast, a small gain results
in a small output response to a large input error, and a less responsive or less sensitive controller.
If the proportional gain is too low, the control action may be too small when responding to system
disturbances.

<h3 id="Ti">Ti - Integration time constant</h3>
The contribution from the integral term is proportional to both the magnitude of the error and the
duration of the error. The integral in a PID controller is the sum of the instantaneous error over
time and gives the accumulated offset that should have been corrected previously.
\htmlonly <div class="divMaxWidth"> \endhtmlonly
\f{eqnarray*}{
    I_{out} &=& \int\limits_0^t e(T_i)dT_i
\f}
\htmlonly </div> \endhtmlonly
The integral term accelerates the movement of the process towards setpoint (command value) and
eliminates the residual steady-state error that occurs with a pure proportional controller.
However, since the integral term responds to accumulated errors from the past, it can cause
the present value to overshoot the setpoint value.

<h3 id="Td">Td - Derivation time constant</h3>
The derivative of the process error is calculated by determining the slope of the error over time.
The magnitude of the contribution of the derivative term to the overall control action is termed
the derivative gain.
\htmlonly <div class="divMaxWidth"> \endhtmlonly
\f{eqnarray*}{
    D_{out} &=& \frac{de(T_d)}{dT_d}
\f}
\htmlonly </div> \endhtmlonly
Derivative action predicts system behavior and thus improves settling time and stability of the system.

<h3 id="IniVal"> IniVal - Initial output value </h3>
The initial output value is the value which will be used in first execution as output.
It should be ranged between minimal and maximal limits.

<h3 id="OutValMin"> OutValMin - Minimal output value </h3>
Minimal limit of output value, if value within calculation will fall below this limit,
then calculated value will be set to this minimal limit and provided to output.

<h3 id="OutValMax"> OutValMax - Maximal output value </h3>
Maximal limit of output value, if value within calculation will exceed this limit,
then calculated value will be set to this maximal limit and provided to output.

@created    20.02.2015
@changelog
-           19.01.2016
    - ItfSigBasEle.h renamed to ItfBasStruc.h in MATCH 06.09.XX.XX.
-   1.3.10.0    06.06.2018
    - Added function `eSigPidSetIniVal()`.
-   1.4.0.0 26.06.2018
    - The MATCH signal interface version is updated to 1.4.
-   1.4.1.0 14.05.2019
    - Improved pointer error diagnostics (#26971).
-   1.5.0.0 18.06.2019
    - The MATCH signal interface version is updated to 1.5.
-   1.6.0.0 26.02.2020
    - The MATCH Signal interface version is updated to 1.6.
-   1.7.0.0 26.06.2020
    - The MATCH signal interface version is updated to 1.7.
-   1.8.1.0 25.08.2020 
    - The MATCH signal interface version is updated to 1.8.
-   1.9.0.0  04.05.2021
    - The MATCH signal interface version is updated to 1.9
-   1.9.2.0 09.03.2022
    - `eSigPidSetCntlParam()` no longer \ref eSigPidInit() "initializes" the PID-controller (#56296).
    - Added `eSigPidSetMinMax()` (#56296).
-   1.9.3.0  04.04.2022
    - Improved doxygen
*/
//******************************************************************************************************

#ifndef __ITFSIGPWMPID__
    #define __ITFSIGPWMPID__

    // INCLUDES ========================================================================================

    #include <ItfCore.h>
    #include <ItfBasStruc.h>

    // ENUMERATIONS ====================================================================================

    //! The types of PID - controller
    typedef enum
    {
        PID_TYPE0_IDEAL,    //!< <a href="#ePidMode">Ideal form of PID controller</a>
        PID_TYPE1_PARALLEL, //!< <a href="#ePidMode">Parallel form of PID controller</a>
        PID_TYPS_MAX        //!< Last enumeration value (not valid for usage)
    }ESigPidTyp;

    // STRUCTURES ======================================================================================

    //! Signal object address structure
    /*! In order to use signal object this structure must be declared */
    typedef struct
    {
        TVoid*   pvObj;    //!< [stu] - Pointer to the private signal object
        TUint16  u16Stamp; //!< Registration stamp
    }TSigPidAdr;

    // VARIABLES =======================================================================================
    // PROTOTYPES ======================================================================================

    //a) Versions Information

    //--------------------------------------------------------------------------------------------------
    //! @brief      Get a version information of a signal object
    //! @retval     *cptVer     - Pointer to a versions information parameter
    //--------------------------------------------------------------------------------------------------
    extern const TVerChapCom *cptSigPidVersionsInfo( TVoid );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Check a version compatibility of a signal object
    //! @retval     TRUE    - A version of a signal object is compatible with a used MATCH version
    //! @retval     FALSE   - A version of an object is incompatible with a used MATCH version
    //--------------------------------------------------------------------------------------------------
    extern TBoolean boSigPidVersionCheck( TVoid );

    //b) Constructor

     //--------------------------------------------------------------------------------------------------
     //! @brief      Creation
     //! @details    Object constructor
     //! @pre
     //!             - This signal type should be registered in MATCH environment
     //!             - An instance of the structure \ref TSigPidAdr must be already declared
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
    extern ERetVal eSigPidCreate( TSigPidAdr* ptSigAdr, const TChar* cpchNa );

    //c) Initialization

    //--------------------------------------------------------------------------------------------------
    //! @brief      Initialization
    //! @pre
    //!             - The function \ref eSigPidCreate must be already successfully executed.
    //! @note
    //!             - This method must be used in initialization phase (AppInit). \n
    //!             - Controller duty cycle time should be used as the sample time if
    //!               function will be called within each controller cycle. \n
    //!               Controller duty cycle time is stored in auto code folder in file
    //!               Cfg_Ecu.c in structure gEcu_tSys.tSil.u16EcuTaskTime
    //!             - If integration time is set to 0, then integration term is inactive
    //!             - If derivation time is set to 0, then derivation term is inactive
    //! @param[in]  ptSigAdr      - [stu] Pointer to a signal address structure
    //! @param[in]  i16IniVal     - [cus] Initial value of I-part
    //! @param[in]  u16Gp         - [1/100] Proportional gain
    //! @param[in]  u16Ti         - [ms] Integration time
    //! @param[in]  u16Td         - [ms] Differentiation time
    //! @param[in]  u16DtCyc      - [ms] Sample (cycle) time
    //! @param[in]  i32OutValMin  - [cus] Minimal output value
    //! @param[in]  i32OutValMax  - [cus] Maximal output value
    //! @param[in]  ePidMode      - [enu] PID - controller mode ( ideal / parallel )
    //! @retval     R_OKAY          - Faultless execution
    //! @retval     R_NOACT         - Sample (task) time is equal to 0
    //! @retval     R_RANGE         - Initial output value is out of range [minimal ... maximal]
    //! @retval     R_MINMAX        - Minimal output value must be lower than maximal output value
    //! @retval     R_NULL_POINTER  - One of arguments is null pointer
    //! @retval     R_ADDRESS       - Wrong address of signal object
    //! @retval     R_NOT_REGISTRY  - Signal object is not registered
    //--------------------------------------------------------------------------------------------------
    extern ERetVal eSigPidInit( TSigPidAdr* ptSigAdr,
                                TInt16      i16IniVal,
                                TUint16     u16Gp,
                                TUint16     u16Ti,
                                TUint16     u16Td,
                                TUint16     u16DtCyc,
                                TInt32      i32OutValMin,
                                TInt32      i32OutValMax,
                                ESigPidTyp  ePidMode);

    //--------------------------------------------------------------------------------------------------
    //! @brief      Initialization
    //! @pre
    //!             - The function \ref eSigPidCreate must be already successfully executed.
    //! @note
    //!             - This method must be used in initialization phase (AppInit). \n
    //!             - Controller duty cycle time should be used as the sample time if
    //!               function will be called within each controller cycle. \n
    //!               Controller duty cycle time is stored in auto code folder in file
    //!               Cfg_Ecu.c in structure gEcu_tSys.tSil.u16EcuTaskTime
    //!             - If integration time is set to 0, then integration term is inactive
    //!             - If derivation time is set to 0, then derivation term is inactive
    //!             - Differentiation weight should be in range [0 ... 1000]
    //! @param[in]  ptSigAdr      - [stu] Pointer to a signal address structure
    //! @param[in]  i16IniVal     - [cus] Initial output value / accumulated I-part
    //! @param[in]  u16Gp         - [1/100] Proportional gain
    //! @param[in]  u16Ti         - [ms] Integration time
    //! @param[in]  u16Td         - [ms] Differentiation time
    //! @param[in]  u16N          - [&permil;] Differentiation (low pass filter) weight
    //! @param[in]  u16DtCyc      - [ms] Sample (cycle) time
    //! @param[in]  i32OutValMin  - [cus] Minimal output value
    //! @param[in]  i32OutValMax  - [cus] Maximal output value
    //! @param[in]  ePidMode      - [enu] PID - controller mode ( ideal / parallel )
    //! @retval     R_OKAY          - Faultless execution
    //! @retval     R_NOACT         - Sample (task) time is equal to 0
    //! @retval     R_RANGE         - Initial output value is out of range [minimal ... maximal]
    //!                               or differentiation weight is lower than 1000 [per mille]
    //! @retval     R_MINMAX        - Minimal output value must be lower than maximal output value
    //! @retval     R_NULL_POINTER  - One of arguments is null pointer
    //! @retval     R_ADDRESS       - Wrong address of signal object
    //! @retval     R_NOT_REGISTRY  - Signal object is not registered
    //--------------------------------------------------------------------------------------------------
    extern ERetVal eSigPidT1Init(   TSigPidAdr* ptSigAdr,
                                    TInt16      i16IniVal,
                                    TUint16     u16Gp,
                                    TUint16     u16Ti,
                                    TUint16     u16Td,
                                    TUint16     u16N,
                                    TUint16     u16DtCyc,
                                    TInt32      i32OutValMin,
                                    TInt32      i32OutValMax ,
                                    ESigPidTyp  ePidMode);

    //d) Calculation / execution function(s)

    //--------------------------------------------------------------------------------------------------
    //! @brief      Calculation / Execution
    //! @pre
    //!             - The function \ref eSigPidInit must be already successfully executed.
    //! @note
    //!             - Method must be used in run (execution) phase (AppRun).
    //! @param[in]  ptSigAdr    - [stu] Pointer to a signal address structure
    //! @param[in]  u16Des      - [cus] Desired (command) value for system output
    //! @param[in]  u16Act      - [cus] Actual value at system output
    //! @retval     OKAY        - [cus] Output value of signal
    //! @retval     ERROR       - If pointer to signal is wrong, return value is '0'
    //--------------------------------------------------------------------------------------------------
    extern TUint16 u16SigPid( TSigPidAdr* ptSigAdr, TUint16 u16Des, TUint16 u16Act );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Calculation / Execution
    //! @pre
    //!             - The function \ref eSigPidInit must be already successfully executed.
    //! @note
    //!             - Method must be used in run (execution) phase (AppRun).
    //! @param[in]  ptSigAdr    - [stu] Pointer to a signal address structure
    //! @param[in]  i16Des      - [cus] Desired (command) value for system output
    //! @param[in]  i16Act      - [cus] Actual value at system output
    //! @retval     OKAY        - [cus] Output value of signal
    //! @retval     ERROR       - If pointer to signal is wrong, return value is '0'
    //--------------------------------------------------------------------------------------------------
    extern TInt16 i16SigPid( TSigPidAdr* ptSigAdr, TInt16  i16Des, TInt16  i16Act );

    //e) Set function(s)

    //--------------------------------------------------------------------------------------------------
    //! @brief      Reinitialization
    //! @pre
    //!             - The function \ref eSigPidInit must be already successfully executed.
    //! @note
    //!             - Method must be used in initialization / run phase
    //!             (AppInit / AppRun).
    //! @param[in]  ptSigAdr    - [stu] Pointer to a signal address structure
    //! @retval     R_OKAY          - Faultless execution
    //! @retval     R_NULL_POINTER  - One of arguments is null pointer
    //! @retval     R_ADDRESS       - Wrong address of signal object
    //! @retval     R_NOT_REGISTRY  - Signal object is not registered
    //--------------------------------------------------------------------------------------------------
    extern ERetVal eSigPidReInit( TSigPidAdr* ptSigAdr );


    //--------------------------------------------------------------------------------------------------
    //! @brief      Reset I-part of a signal
    //! @pre
    //!             - The function \ref eSigPidInit must be already successfully executed.
    //! @note
    //!             - Method must be used in initialization / run phase
    //!             (AppInit / AppRun).
    //! @param[in]  ptSigAdr  - [stu] Pointer to a signal address structure
    //! @param[in]  i16IniVal - [cus] Initial value of I-part
    //! @retval     R_OKAY          - Faultless execution
    //! @retval     R_NULL_POINTER  - One of arguments is null pointer
    //! @retval     R_ADDRESS       - Wrong address of signal object
    //! @retval     R_NOT_REGISTRY  - Signal object is not registered
    //! @retval     R_RANGE         - Initial output value is out of range [minimal ... maximal]
    //--------------------------------------------------------------------------------------------------
    extern ERetVal eSigPidReset (TSigPidAdr* ptSigAdr, TInt16 i16IniVal);



    //--------------------------------------------------------------------------------------------------
    //! @brief      Set initialization value (I-part) of PID-controller to desired output value
    //! @pre
    //!             - The function \ref eSigPidInit must be already successfully executed.
    //! @note
    //!             - Method must be used in initialization / run phase
    //!             (AppInit / AppRun).
    //! @details    If you call `i16SigPid( &tSigPid, 0, 0)` you will get exactly what you've set
    //!             in this function.
    //! @param[in]  ptSigAdr  - [stu] Pointer to a signal address structure
    //! @param[in]  i32IniVal - [cus] Initial of I-part and output value
    //! @retval     R_OKAY      - no error
    //! @retval     R_MINIMUM   - Set value is lower than minimal limit
    //! @retval     R_MAXIMUM   - Set value is higher than maximal limit
    //! @created    30.05.2018  HYDAC/VGE
    //--------------------------------------------------------------------------------------------------
    extern ERetVal eSigPidSetIniVal (TSigPidAdr* ptSigAdr, TInt32 i32IniVal);

    //--------------------------------------------------------------------------------------------------
    //! @brief      Set the calculation parameters
    //! @pre
    //!             - The function \ref eSigPidInit must be already successfully executed.
    //! @note
    //!             - Method must be used in initialization / run phase
    //!             (AppInit / AppRun).
    //!             - If integration time is set to 0, then integration term is inactive
    //!             - If derivation time is set to 0, then derivation term is inactive
    //! @param[in]  ptSigAdr      - [stu] Pointer to a signal address structure
    //! @param[in]  u16Gp         - [1/100] Proportional gain
    //! @param[in]  u16Ti         - [ms] Integration time
    //! @param[in]  u16Td         - [ms] Differentiation time
    //! @retval     R_OKAY          - Faultless execution
    //! @retval     R_NOACT         - Sample (task) time is equal to 0
    //! @retval     R_NULL_POINTER  - One of arguments is null pointer
    //! @retval     R_ADDRESS       - Wrong address of signal object
    //! @retval     R_NOT_REGISTRY  - Signal object is not registered
    //--------------------------------------------------------------------------------------------------
    extern ERetVal eSigPidSetCntlParam( TSigPidAdr* ptSigAdr, TUint16 u16Gp, TUint16 u16Ti, TUint16 u16Td);

    //--------------------------------------------------------------------------------------------------
    //! @brief      Set new minimum and maximum output values of PID controller
    //!
    //! @pre
    //!             - The function `eSigPidInit()` must be already successfully executed.
    //!
    //! @param[in,out]  ptSigAdr    - [stu] Pointer to a signal address structure
    //! @param[in]  i32OutValMin    - [num] Minimal output value
    //! @param[in]  i32OutValMax    - [num] Maximal output value
    //! @retval     R_OKAY          - Faultless execution
    //! @retval     R_MINMAX        - Minimal output value must be lower than maximal output value
    //! @retval     R_NULL_POINTER  - Null Pointer
    //! @retval     R_NOT_REGISTRY  - Signal object is not registered
    //! @retval     R_ADDRESS       - Wrong address of signal object
    //--------------------------------------------------------------------------------------------------
    extern ERetVal eSigPidSetMinMax( TSigPidAdr* ptSigAdr, TInt32 i32OutValMin, TInt32 i32OutValMax);

    //f) Get function(s)

    //--------------------------------------------------------------------------------------------------
    //! @brief      Get name of signal object
    //! @pre
    //!             - The function \ref eSigPidInit must be already successfully executed.
    //! @note
    //!             - Method must be used in initialization / run phase
    //!             (AppInit / AppRun).
    //! @param[in]  ptSigAdr    - [stu] Pointer to signal address structure
    //! @retval     != NULL     - Set signal name
    //! @retval     NULL        - Name is not valid
    //--------------------------------------------------------------------------------------------------
    extern TChar* pchPidGetName(TSigPidAdr* ptSigAdr);

    //--------------------------------------------------------------------------------------------------
    //! @brief      Get initialization status of signal object
    //! @pre
    //!             - The function \ref eSigPidInit must be already successfully executed.
    //! @note
    //!             - Method can be used in initialization / run phase
    //!             ( AppInit / AppRun).
    //! @param[in]  ptSigAdr    - [stu] Pointer to signal address structure
    //! @retval     R_OKAY          - Faultless status
    //! @retval     R_NULL_POINTER  - Signal address is NULL
    //! @retval     R_ADDRESS       - Wrong signal address
    //--------------------------------------------------------------------------------------------------
    extern ERetVal eSigPidGetInitSta(TSigPidAdr* ptSigAdr);

    //--------------------------------------------------------------------------------------------------
    //! @brief      Get last output value of signal object
    //! @details    Output value will not be calculated, instead of it, result of previous calculation
    //!             will be returned.
    //! @pre
    //!             - The function \ref eSigPidInit must be already successfully executed.
    //! @note
    //!             - Method must be used in initialization / run phase
    //!             (AppInit / AppRun).
    //! @param[in]  ptSigAdr    - [stu] Pointer to signal address structure
    //! @retval     OKAY        - Output value of signal
    //! @retval     ERROR       - If pointer to signal is wrong, return value is '0'
    //--------------------------------------------------------------------------------------------------
    extern TUint16 u16SigPidGetOutVal( TSigPidAdr* ptSigAdr );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Get last output value of signal object
    //! @details    Output value will not be calculated, instead of it, result of previous calculation
    //!             will be returned.
    //! @pre
    //!             - The function \ref eSigPidInit must be already successfully executed.
    //! @note
    //!             - Method must be used in initialization / run phase
    //!             (AppInit / AppRun).
    //! @param[in]  ptSigAdr    - [stu] Pointer to signal address structure
    //! @retval     OKAY        - Output value of signal
    //! @retval     ERROR       - If pointer to signal is wrong, return value is '0'
    //--------------------------------------------------------------------------------------------------
    extern TInt16 i16SigPidGetOutVal( TSigPidAdr* ptSigAdr );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Get average output value from last 8 cycles
    //! @pre
    //!             - The function \ref eSigPidInit must be already successfully executed.
    //! @note
    //!             - Method must be used in initialization / run phase
    //!             (AppInit / AppRun).
    //! @param[in]  ptSigAdr    - [stu] Pointer to signal address structure
    //! @retval     OKAY        - Average value of output
    //! @retval     ERROR       - If pointer to signal is wrong, return value is '0'
    //--------------------------------------------------------------------------------------------------
    extern TUint32 u32SigPidGetOutAverage( TSigPidAdr* ptSigAdr );


#endif
