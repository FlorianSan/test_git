////////////////////////////////////////////////////////////////////////////////////////////////////
/*!
@version 0.13.2.0
*/
/// @file    ItfBloPro.h
/// @briefWithImage{BloPro32x32.png
/// ,Block "Proportional Output"
/// ,BloPro}
///
/// @details
///The block "Proportional Output" is determined to control hydraulic proportional valves. \n
///The output signal provided in a form of pulse-width modulated (PWM) signal. \n
///Block has an integrated PID-controller, so the output current can be precisely controlled. \n
///The current measured at output is used as feedback channel for the PID-controller.
///
///\htmlonly <div class=divMaxWidth style="max-width: 560px;">      \endhtmlonly
///\htmlonly   <img class="imgInCenter" width="60%" align="center"  \endhtmlonly
///\htmlonly   src="BloPro_IO.png" alt="BloPro_IO.png"></div>       \endhtmlonly
///\htmlonly <table width="100%"></table>                           \endhtmlonly
///
///
///### Input parameters
///- \ref TProInp.eSta "Input state", that should be set to output.
///- \ref TProInp.u16Ic "Input command current", which should be provided to output.
///- Flag "Resolve open load or short to power" \ref TProInp::boRslOlSp "tInp.boRslOlSp" - only
///  for TTC-5xx family.
///
///### Output parameters
///- Output state \ref TProOut.eValSta - actual state of the valve (output).
///- Output command current \ref TProOut.u16Ic - output current, requested by the block.
///- Actual output current \ref TProOut.u16Ia - measured at output current.
///
///### External parameters
///- The parameter "Engine is on" - describes an engine state of a machine.
///  + The engine state can be set through the parameter `boEngineOn` of an argument `ptCoreInp`
///    in the `vAppRun()` function in following way: \n
///    `ptCoreInp->boEngineOn = TRUE;`
///  + The parameter can be read back through the function `boCoreGetEngineOn()`.
///
///### How to Use
///-# Create the block in PDT.
///-# Set block initial state to `BLO_RELEASE`.
///-# Choose a pin(s).
///-# At "I/O Definition" page set "pin type" to `PINTYP_PWM` and pin "PWM frequency"
///   to the same "PWM frequency value" as in the block.
///-# Generate new auto code.
///-# Put following code in the cyclic function `vAppRun()`
///~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
///TVoid vAppRun( TCoreInp *ptCoreInp, TCoreOut *ptCoreOut )
///{
///    // ...
///
///    // Activate flag "Engine is on"
///    ptCoreInp->boEngineOn = TRUE;
///
///    // Set input command state
///    gPro_tPRO_01.tInp.eSta = PROSTA_ON;
///    // Set input command current
///    gPro_tPRO_01.tInp.u16Ic = 5000; // [mA/10]
///    // Deactivate flag "Resolve Short to Power and Open Load"
///    gPro_tPRO_01.tInp.boRslOlSp = FALSE;
///
///    // Call the main calculation ( execution ) function of the block
///    ERetVal eRetVal = eBloPro( &gPro_tPRO_01 );
///    // Check return value of the block - it used to report errors
///    if ( R_OKAY != eRetVal )
///    {
///        // provide error handling, for example...
///        // print out a warning to a CAN bus through the MST protocol
///        vPrintWar( WAR_DFLT, "eBloPro( &gPro_tPRO_01 ) = %d", eRetVal );
///
///        // Remark:
///        // It is mostly a bad practice to send a warning through the
///        // MST debug interface in "Run" phase.
///        // It uses a lot of CAN messages and can easily overload your
///        // CAN traffic, this way you will loose other important CAN
///        // messages.
///        // It is much better to have certain CAN messages or database
///        // variables for debugging.
///    }
///
///    // Get the output state of the block
///    EProSta ePro01_Sta = gPro_tPRO_01.tOut.eValSta;
///    // Get the output command current of the block
///    TUint16 u16Pro01_Ic = gPro_tPRO_01.tOut.u16Ic;
///    // Get the actual current at the output
///    TUint16 u16Pro01_Ia = gPro_tPRO_01.tOut.u16Ia;
///
///    // ...
///}
///~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
///
///### Behavior
///
///Functionality of the block differs depending on external parameter "Engine is on":
///
///#### Option # 1. Engine is Active
///@pre
///The flag "Engine is on" `ptCoreInp->boEngineOn` should be set to `TRUE`.
///
///The diagram and table below show block behavior in different control cases. \n
///Also each case represents one of the following features of the block:
///-# If the input state `tInp.eSta` is "ON", but the input command current `tInp.u16Ic` is zero,
///   then the block state is inconsistent, so it sets an error to output state `tOut.eValSta`.
///-# If the input state `tInp.eSta` is "ON" and the input command current `tInp.u16Ic` is not
///   zero then the output command current `tOut.u16Ic` can not be less than minimal current
///   `tPar.u16MinCur`.
///-# If the minimal current `tPar.u16MinCur` is properly calibrated then an output can be
///   smoothly opened even with a small current adjustment.
///-# When the block is deactivated a valve can be completely closed with the stop current
///   `tPar.u16StopCur` and then returned back to the minimal current `tPar.u16MinCur`.
///-# If an output state is inactive then a current at a valve can be controlled between
///   minimal current `tPar.u16MinCur` and the "Engine Off" current `tPar.u16EngineOffCur`.
///-# If an output state is inactive and input current is set to zero then output command
///   current is set to minimal current `tPar.u16MinCur`.
///
///\htmlonly <div class=divMaxWidth style="max-width: 750px;">          \endhtmlonly
///\htmlonly   <img class="imgInCenter" width="100%" align="center"     \endhtmlonly
///\htmlonly   src="BloPro_EngineIsOn.png" alt="BloPro_EngineIsOn.png"> \endhtmlonly
///\htmlonly </div>                                                     \endhtmlonly
///\htmlonly <table width="100%"></table>                               \endhtmlonly
///
///|Case   |State (<span style="color:#9C27B0;">tInp.eSta</span>)  |Command current (<span style="color:#3f51b5;">tInp.Ic</span>)                  |State (<span style="color:#03a9f4;">tOut.eValSta</span>)   |Command current (<span style="color:#00b050;">tOut.Ic</span>)  |Valve  |Note|
///|:-:|:-:|:-:|:-:|:-:|:-:|:-:|
///|1       |PROSTA_ON          |0                                          |PROSTA_ERR |tPar.EngineOffCur  |OFF    |A|
///|2       |PROSTA_ON          |0 < tInp.Ic < tPar.MinCur                  |PROSTA_ON  |tPar.MinCur        |OFF    |A|
///|3       |PROSTA_ON          |tInp.Ic >= tPar.MinCur                     |PROSTA_ON  |tInp.Ic            |ON     |A|
///|4       |PROSTA_OFF         |tInp.Ic >= tPar.MinCur                     |PROSTA_OFF |tPar.MinCur        |OFF    |A|
///|5.1     |PROSTA_OFF         |tPar.EngineOffCur < tInp.Ic < tPar.MinCur  |PROSTA_OFF |tInp.Ic            |OFF    |A|
///|5.2     |PROSTA_OFF         |0 < tInp.Ic <= tPar.EngineOffCur           |PROSTA_OFF |tPar.EngineOffCur  |OFF    |A|
///|6       |PROSTA_OFF         |0                                          |PROSTA_OFF |tPar.MinCur        |OFF    |A|
///
///@note
///A. The actual output current (<span style="color:rgb(234, 112, 13);">tOut.Ia</span>)
///   always follows the output command current (<span style="color:#00b050;">tOut.Ic</span>).
///
///#### Option # 2. Engine is Inactive
///@pre
///The flag "Engine is on" `ptCoreInp->boEngineOn` should be set to `FALSE`.
///
///@note
///When an engine is inactive the block provides a possibility to save the energy. \n
///The stop current `tPar.u16StopCur` and the minimal current `tPar.u16MinCur` are replaced
///by "engine off" current `tPar.u16EngineOffCur` in all possible control cases.
///
///The diagram and table below show block behavior in different control cases. \n
///Also each case represents one of the following features of the block:
///-# If the input state `tInp.eSta` is "ON", but the input command current `tInp.u16Ic` is zero,
///   then the block state is inconsistent, so it sets an error to output state `tOut.eValSta`.
///-# If the input state `tInp.eSta` is "ON" and the input command current `tInp.u16Ic` is not
///   zero then the output command current `tOut.u16Ic` can not be less than "engine off"
///   current `tPar.u16EngineOffCur`.
///-# The output command current `tOut.u16Ic` is controlled only if the input command current
///   `tInp.u16Ic` is higher than the minimal current `tPar.u16MinCur` and the input state
///   `tInp.eSta` is "ON".
///-# When the block is deactivated a valve can be completely closed with the "engine off"
///   current `tPar.u16EngineOffCur`.
///-# If an output state is inactive then a current at a valve cannot be controlled. It remains
///   at "engine off" current `tPar.u16EngineOffCur`.
///-# Same as case 5.
///
///\htmlonly <div class=divMaxWidth style="max-width: 750px;">              \endhtmlonly
///\htmlonly   <img class="imgInCenter" width="100%" align="center"         \endhtmlonly
///\htmlonly   src="BloPro_EngineIsOff.png" alt="BloPro_EngineIsOff.png">   \endhtmlonly
///\htmlonly </div>                                                         \endhtmlonly
///\htmlonly <table width="100%"></table>                                   \endhtmlonly
///
///|Case   |State (<span style="color:#9C27B0;">tInp.eSta</span>)  |Command current (<span style="color:#3f51b5;">tInp.Ic</span>)                  |State (<span style="color:#03a9f4;">tOut.eValSta</span>)   |Command current (<span style="color:#00b050;">tOut.Ic</span>)  |Valve  |Note|
///|:-:|:-:|:-:|:-:|:-:|:-:|:-:|
///|1       |PROSTA_ON          |0                                  |PROSTA_ERR |tPar.EngineOffCur  |OFF    |A|
///|2.1     |PROSTA_ON          |0 < tInp.Ic < tPar.EngineOffCur    |PROSTA_ON  |tPar.MinCur        |OFF    |A|
///|2.2     |PROSTA_ON          |tPar.EngineOffCur <= tInp.Ic       |PROSTA_ON  |tInp.Ic            |ON     |A|
///|3       |PROSTA_ON          |tInp.Ic >= tPar.MinCur             |PROSTA_OFF |tPar.MinCur        |OFF    |A|
///|4       |PROSTA_OFF         |tInp.Ic >= tPar.MinCur             |PROSTA_OFF |tInp.Ic            |OFF    |A|
///|5       |PROSTA_OFF         |0 < tInp.Ic <= tPar.MinCur         |PROSTA_OFF |tPar.EngineOffCur  |OFF    |A|
///|6       |PROSTA_OFF         |0                                  |PROSTA_OFF |tPar.MinCur        |OFF    |A|
///
///@note
///A. The actual output current (<span style="color:rgb(234, 112, 13);">tOut.Ia</span>)
///   always follows the output command current (<span style="color:#00b050;">tOut.Ic</span>).
///
///### Error Detection
/// This block uses an additional, internal error detection next to the MATCH error element. \n
/// The internal error detection enables advanced feedback control capabilities for valves.
///
/// @sa ItfBasErrEle.h
///
///#### Internal Error Detection
/// The internal error detection is determined to prevent the controller windup during error debouncing
///
///\htmlonly <div class=divMaxWidth style="max-width: 750px;">       \endhtmlonly
///\htmlonly   <img class="imgInCenter" width="100%" align="center"  \endhtmlonly
///\htmlonly   src="BloPro_IntErrDet.png" alt="BloPro_IntErrDet.png">\endhtmlonly
///\htmlonly </div>                                                  \endhtmlonly
///\htmlonly <table width="100%"></table>                            \endhtmlonly
///
///##### 1. Combined Error Detection
///The above diagram shows the interaction between the internal error detection and the
///basic error element.
///
/// When the "Open Load" error occurs at the input the \ref TProOut::boPidFreeze "boPidFreeze" flag
/// will be enabled. \n
/// As a consequence the output \ref TProOut::u16Pwm "u16Pwm" will remain at the previously calculated value.\n
/// The \ref TProOut::boPidFreeze "flag" is reset if the input error disappears during error debouncing.
///
/// When the input error state surpasses the \ref TProCfg::u8DebTime "internal debounce time",
/// an internal error state is raised.\n
/// Once raised, the internal error state will remain active at least as long as
/// the \ref TProCfg::u8DebTime "internal debounce time". \n
///
/// If the \ref TProOut::tBehErrSta "error state of error element" is active, the flag
/// \ref TProOut::boPidStop "PID stop flag" is enabled and deactivates the \ref TProOut::boPidFreeze "PID freeze flag". \n
/// The \ref TProOut::boPidStop "PID stop flag" turns `FALSE` when all other Block errors have been cleared.
///
///##### 2. Reaction of an active output to the "open load" error
///@pre
///Flag "Engine is on" is active
///
/// Depending on a hardware it may take delay 0 - 20 [ms] until the error is recognized in
/// the block and the input error state is set active, during this time period output \n
/// \ref TProOut.u16Ic "command current" goes up to some error current `Ierr` and stays there
/// while the \ref TProOut::boPidFreeze "PID freeze" flag remains active. \n
/// If the flag \ref TProOut::boPidStop "PID stop" is activated then the \ref TProOut.u16Ic "output command current"
/// is set to the \ref TProPar::u16StopCur "stop current". \n
/// If both, the \ref TProOut::boPidStop "PID stop" and \ref TProOut::boPidFreeze "PID freeze" flags, are rejected then the PID-controller
/// is released and \ref TProOut.u16Ic "output command current" follows \ref TProInp.u16Ic "input command current".
///
///##### 3. Reaction of an inactive output to the "open load" error
///@pre
///Flag "Engine is on" is active
///
/// Depending on a hardware it may take delay 0 - 20 [ms] until the error is recognized in
/// the block and the input error state is set active, \n
/// during this time period the \ref TProOut.u16Ic "output command current" increases to
/// some error current `IErr` and stays there while the debouncing of internal error state is performed.
///
/// If the internal error state is raised or if the \ref TProOut::boPidStop "PID stop" flag is raised then the
/// \ref TProOut.u16Ic "output command current" is set to the \ref TProPar::u16StopCur "stop current".
///
/// If both, the \ref TProOut::boPidStop "PID stop" and \ref TProOut::boPidFreeze "PID freeze" flags,
/// are rejected the PID-controller is released and the \ref TProOut.u16Ic "output command current"
/// is set back to the \ref TProPar::u16MinCur "minimal current".
///
///@note
///Combined error detection works nearly the same way, when the flag "Engine is on" is
///inactive, just remember, that the \ref TProPar::u16MinCur "minimal current" and the
/// \ref TProPar::u16StopCur "stop current" are replaced by the
/// \ref TProPar::u16EngineOffCur "engine off current".
///
///
///#### Interaction with "Safe state" and "Shut-off group"
/// - When the "Safe state" is active, the PID controller will be stopped.
/// - When a "Shut-off group" is active, the PID controller stops, if:
///     - a Block error is active
///     - the internal error detection has been triggered and the block is set to \ref EProSta "PROSTA_OFF"
///
/// - When a "Shut-off group" is active, the PID controller freezes, if:
///     - the internal error detection has been triggered and the block is set to \ref EProSta "PROSTA_ON"
///     - the internal error detection is beeing debounced
///
///## PDT block settings
///
///| Name                                                                     | Unit      | Range            | Default value |
///|:-------------------------------------------------------------------------|-----------|------------------|---------------|
///| \b Common                                                                |           |                  |               |
///| Block Name                                                               | char.     | 0 ... 32         | N/A           |
///| <a href="blo.html#eBloSta">eBloProc - Block Initial State (Process)</a>  | enum.     |                  | BLO_RELEASE   |
///| Block Description                                                        | char.     | 0 ... 32         | N/A           |
///| <b>Fixed Settings</b>                                                    |           |                  |               |
///| \ref TProCfg::eTyp "eTyp - Type of Proportional Output"                  | enum.     |                  | PRO_TYPE0_STD |
///| \ref TProCfg::u8DtTask "u8DtTask - Cycle Call Time / Delta T"            | [ms]      | 1 ... 255        | 10            |
///| \ref TProCfg::u8DebTime "u8DebTime - Internal Debounce Time"             | [ms]      | 0 ... 255        | 100           |
///| <b>Hardware I/O Definitions</b>                                          |           |                  |               |
///| \ref TProCfg::boPinConnected "boPinConnected - Pin Permanent Connection" | bool.     | TRUE ... FALSE   | TRUE          |
///| \ref TProCfg::ePinPwm "ePwmPin - PWM Pin (High-Side)"                    | enum.     |                  | PIN_NA        |
///| \ref TProCfg::ePinPwm "ePwmDou - DOU Pin (Low-Side only at TTC-5x)"      | enum.     |                  | PIN_NA        |
///| \b Properties                                                            |           |                  |               |
///| \ref TProPrp::u16Freq "u16Freq - PWM Frequency"                          | [Hz]      | 50 ... 200       | PINPWM_DFLT   |
///| \ref TProPrp::u16CoilRes "u16CoilRes - Load (Valve Coil) Resistance"     | [Ohm/10]  | 1 ... 65529      | 210           |
///| <b>Parameters: PWM output</b>                                            |           |                  |               |
///| \ref TProPar::u16MinCur "u16MinCur - Minimal Current"                    | [mA/10]   | 0 ... 65535      | 3000          |
///| \ref TProPar::u16StopCur "u16StopCur - Stop Current"                     | [mA/10]   | 0 ... u16MinCur  | 1100          |
///| \ref TProPar::u16EngineOffCur "u16EngineOffCur - Engine Off Current"     | [mA/10]   | 0 ... u16StopCur | 1000          |
///| \ref TProPar::u16ICal "u16ICal - Calibration Current"                    | [mA/10]   | 0 ... 65535      | 0             |
///| <b>Parameters: PID current control (closed loop)</b>                     |           |                  |               |
///| \ref TProPar::u16Gp "u16Gp - Proportional Gain Constant"                 | [1/100]   | 1 ... 65535      | 400           |
///| \ref TProPar::u16Ti "u16Ti - Integration Time Period"                    | [ms]      | 0 ... 65535      | 50            |
///| \ref TProPar::u16Td "u16Td - Differentiation Time Period"                | [ms]      | 0 ... 65535      | 0             |
///
/// @created    20.02.2011
//! @changelog
//!-   0.4.6.0  14.03.2017
//!    - The parameter boRslOlSp is added.
//!-   0.5.0.0  13.02.2017
//!    - The MATCH block interface version is updated to 1.4.
//!-   0.5.2.0  14.04.2017
//!    - The Parameter boRslOlSp is moved to the input structure.
//!-   0.5.3.0  15.05.2017
//!    - The state of pin is added in the output structure.
//!-   0.6.0.0  16.05.2017
//!    - MATCH block interface version updated to 1.5.
//!-   0.7.0.0  07.05.2018
//!    - Internal error detection is implemented.
//!    - Interaction with the "Safe state" and the "shut-off" groups is advanced.
//!    - Error detection at TTC-5X is updated for BSP 03.06.02.
//!-   0.7.4.0  06.06.2018
//!    - TTC-5x / A ramp was implemented to provide a smooth feed-forward
//!      control of an output in case when the "Deviation of mini module
//!      responces frequency" is raised at low-side pin.
//!-   0.8.6.1  26.09.2018
//!    - Bug fixed: simulation at TTC-5x was setting feedback current (and pin state)
//!      to HS pin instead of LS feedback pin.
//!-   0.8.6.3  26.09.2018
//!    - If system voltage `ADC_SYS_BAT_CURRENT` or `ADC_SYS_BAT_OPERATE` is zero
//!      then `eBloProInit()` returns an error.
//!-   0.8.6.4  26.09.2018
//!    - Warning are printed to debug application in cases when `Minimal current`
//!      or `Stop current` are forcibly overwritten due to the constraint
//!      `Engine Off current <= Stop current <= Minimal current`.
//!    - If `Proportional gain` is set zero then `eBloProInit()` returns an error.
//!-   0.8.6.5  26.09.2018
//!    - TTC-5x / Simulation / The pin state of LS pin now read using method
//!      `eCoreAdcGetPinFreshFb( ADC_DOU_C, ePinDou, &u16Ia, &boCinFresh );`,
//!      what is equivalent to `eCoreAdcGetPinSta( ADC_DOU_CS, PIN_122 );`.
//!    0.8.7.0  26.09.2018
//!    - When `boCinFresh`- flag determining if current was measured in this
//!      cycle - is `FALSE` then output can be deactivated by setting state
//!      `tInp.eSta != PROSTA_ON` or command current `tInp.u16Ic <= tPar.u16MinCur`.
//!      In previous versions the last calculated duty cycle value was holden
//!      (an output was frozen) independent from the input state `tInp.eSta`
//!      and the input command current `tInp.u16Ic`.
//!-   0.8.8.0  01.10.2018
//!     - Timing in internal debouncing was optimized. Internal error state
//!       was set and release 1 cycle earlier than it was really needed.
//!-   0.8.9.0  04.10.2018
//!    - Bugs are fixed only in the simulation:
//!      - In previous versions actual current `tOut.u16Ia` was set
//!        equal to output command current `tOut.u16Ic` if PID controller
//!        was released.
//!        From this version the actual current `tOut.u16Ia` is not controlled
//!        by the block directly anymore.
//!        Currently block sets value of output command current `tOut.u16Ic`
//!        to ADC_PWM_C (TTC5xx/TTC3x/TTC7x) / ADC_DOU_C (TTC5x) to current
//!        feedback pin.
//!        If in the next cycle the current at feedback pin will not be modified
//!        in simulation before the call of the block `eBloPro()` then the
//!        feedback current will be read back inside of the block and set
//!        to the actual current at output `tOut.u16Ia`.
//!      - "Fresh flag" is not manipulated inside of the block anymore.
//!        Previously it was always set to `TRUE` for TTC5x.
//!-   0.8.10.0  05.10.2018
//!    - Bug is fixed for TTC77:
//!      - Hold time for "Open load" is initialized with 0 ms now.
//!        Previously it was initialized with 100 ms. Thus previous block version
//!        was setting PID controller freeze flag `tOut.boPidFreeze` to `TRUE`and
//!        controller was frozen within first 100 ms.
//!-   0.8.11.0  14.05.2019
//!    - Improved pointer error diagnostics (#26971).
//!-   0.9.0.0  18.06.2019
//!    - The MATCH block interface version updated to 1.7.
//!-   0.9.1.0  22.11.2019
//!     - Doxygen revision (#30733)
//!     - Enhanced configuration checks for PID controller TProCfg.u8DtTask (#19823)
//!-    0.10.0.0    25.02.2020
//!     - The MATCH block interface version is updated to 1.8.
//!-    0.11.0.0    26.06.2020
//!     - The MATCH Block interface version is updated to 1.9.
//!-   0.12.1.0     25.08.2020 
//!    - The MATCH block interface version is updated to 1.10.
//!-   0.13.0.0     04.05.2021
//!    - The MATCH block interface version is updated to 1.11.
//!-   0.13.1.0     26.05.2021
//!     - Doxygen revision
//!-   0.13.2.0     19.04.2022
//!     - Changed: Updated used signal SigPid. Now v1.9.3.0 is used (#56296)
//**************************************************************************************************

#ifndef __ITFBLOPRO__
    #define __ITFBLOPRO__

// INCLUDES ========================================================================================

    #include <ItfBasMath.h>
    #include <ItfBasOut.h>
    #include <ItfBasConv.h>
    #include <ItfBasUtility.h>

    #include <ItfCoreDb.h>
    #include <ItfCoreLib.h>
    
    #include <ItfSigRamp.h>
    #include <ItfSigPid.h>

    // DEFINES =====================================================================================
    
    #define CM_ECU_MAX_CURRENT 23000 //!< [mA/10] Maximum Current
    
    // ENUMERATIONS ================================================================================
    #ifdef COMPILER_SWITCH_FAM_TTC5X

        //! Types of proportional output
        typedef enum
        {
            PRO_HLS_TYPE0_STD,     //!< 0 - Standard (high & low sides) proportional output

            //!< This type of proportional output is used in the case when a valve is connected
            //!< to high-side pin and to low-side pin of a controller.
            //!< This type of proportional output is using 2 pins:
            //!< - PWM high-side pin to control the duty cycle at output. Has to be configured as PINTYP_PWM.
            //!< - DOU low-side pin to measure the current at output. Has to be configured as PINTYP_DOU.

            PRO_HLS_TYPE1_DUAL     //!< 1 - Dual (high & low sides) proportional output

            //!< This type of output is used in the case when 2 proportional valves should work
            //!< mutually exclusive together with the same single low-side channel. \n
            //!< For example: if the 1st valve is active then 2nd have to be inactive and vice versa.

            //!< A pin configuration:

            //!< @code
            //! {  33,  116,  PIN_CHA, PINTYP_PWM_DUAL,      CIO_NA,    PINRES_PULLUP,           CFG_NA,           CFG_NA,  (TUint8)PIN_122,       PINPWM_200 },
            //! {  34,  104,  PIN_CHA, PINTYP_PWM_DUAL,      CIO_NA,    PINRES_PULLUP,           CFG_NA,           CFG_NA,  (TUint8)PIN_122,       PINPWM_200 },
            //! {  45,  120,  PIN_FIX,      PINTYP_DOU,      CIO_NA,    PINRES_CFG_NA,      PINTHR_DFLT,      PINTHR_DFLT,           CFG_NA,           CFG_NA },
            //! @endcode

            //!< The above lines should look the same in file App_Pin.c \n
            //!< In provided example pins 116 and 104 are two high-side pins. \n
            //!< The pin 120 represents a low-side pin for a both high-side pins

            //!< @warning
            //!< Low-side pin should be a controller pin. Mini-module pins do not support this
            //!< type of output.

            //!< @note
            //!< When facing issues setting both blocks states to `BLO_RELEASE`, execute the following steps
            //!< -# Set the low-side pin of the 2nd BloPro to `PIN_NA`.
            //!< -# Set the Block state of the 2nd BloPro `BLO_NA`.
            //!< -# Assign the desired low side pin (e.g. PIN_120) manually to the configurations of
            //!< the of the 2nd BloPro found in `Cfg_ProHls.c` . \n

            //!< @details
            //!< There is one work around - it is possible to have 2 blocks, connected to the same pin,
            //!< with `BLO_RELEASE` states but you have to create them and do not ever touch a parameter
            //!< "Block initial state (process)", just leave it at "BLO_RELEASE" and at "I/O definition"
            //!< page - do not touch any check boxes at the pins of a block.
            //!<
            //!< Required control function for two blocks:

            //! @code
            //! #ifdef COMPILER_SWITCH_FAM_TTC5X
            //!
            //! #include <ItfBloPro.h>
            //! #include <ItfBasConv.h>
            //!
            //! //----------------------------------------------------------------------------------
            //! // brief      Set currents to "Pro" blocks
            //! // created    21.12.2017  HYDAC
            //! //----------------------------------------------------------------------------------
            //! void m_vBloProDualSetCurrent( TInt16   i16Ic,
            //!                               TBloPro* ptProPos,
            //!                               TBloPro* ptProNeg )
            //! {
            //!     // Check direction
            //!     if(0 < i16Ic)
            //!     {
            //!         // Set current for positive direction
            //!         ptProPos->tInp.u16Ic = u16CastI16(i16Ic);
            //!         // Zero current for negative direction
            //!         ptProNeg->tInp.u16Ic = U16_MIN;
            //!     }
            //!     else if(0 > i16Ic)
            //!     {
            //!         // Zero current for positive direction
            //!         ptProPos->tInp.u16Ic = U16_MIN;
            //!         // Set current for negative direction
            //!         ptProNeg->tInp.u16Ic = u16AbsI16(i16Ic);
            //!     }
            //!     else
            //!     {
            //!         // Switch off both direction
            //!         ptProPos->tInp.u16Ic = U16_MIN;
            //!         ptProNeg->tInp.u16Ic = U16_MIN;
            //!     }
            //! }
            //! @endcode
            //! @code
            //! //----------------------------------------------------------------------------------
            //! // brief      Set control states to "Pro" blocks
            //! // created    21.12.2017  HYDAC
            //! //----------------------------------------------------------------------------------
            //! void m_vBloProDualSetState( TInt16   i16Ic,
            //!                             TBloPro* ptProPos,
            //!                             TBloPro* ptProNeg )
            //! {
            //!     // Check direction
            //!     if(0 < i16Ic)
            //!     {
            //!         // Activate a positive valve
            //!         ptProPos->tInp.eSta = PROSTA_ON;
            //!         // Deactivate a negative valve
            //!         ptProNeg->tInp.eSta = PROSTA_NO_DC;
            //!     }
            //!     else if(0 > i16Ic)
            //!     {
            //!         // Deactivate a positive valve
            //!         ptProPos->tInp.eSta = PROSTA_NO_DC;
            //!         // Activate a negative valve
            //!         ptProNeg->tInp.eSta = PROSTA_ON;
            //!     }
            //!     else
            //!     {
            //!         // Deactivate a positive valve
            //!         ptProPos->tInp.eSta = PROSTA_NO_DC;
            //!         // Deactivate a negative valve
            //!         ptProNeg->tInp.eSta = PROSTA_NO_DC;
            //!     }
            //! }
            //! @endcode
            //! @code
            //! ERetVal eBloProDual( TInt16   i16Ic, TBloPro* ptProPos, TBloPro* ptProNeg )
            //! {
            //!     // 1. Set current to blocks
            //!     m_vBloProDualSetCurrent( i16Ic, ptProPos, ptProNeg );
            //!
            //!     // 2. Call both blocks to set the zero current in the block which
            //!     // is going to be deactivated
            //!     ERetVal eRetVal;
            //!     eRetVal = eBloPro( ptProPos );
            //!     if ( R_OKAY != eRetVal ) { eRetVal = eBloPro( ptProNeg ); }
            //!     else                     { eBloPro( ptProNeg ); }
            //!
            //!     // 3. Set the states
            //!     // The block with a state PROSTA_ON provides error detection for both high-side pins
            //!     // and controls the current at output.
            //!     // The opposite block with a state PROSTA_NO_DC have no error detection
            //!     // and does not control the current.
            //!     m_vBloProDualSetState( i16Ic, ptProPos, ptProNeg );
            //!
            //!     return eRetVal;
            //! }
            //!
            //! #endif
            //! @endcode

        }EProTyp;

         //! Detectable block errors
        enum
        {
            DM_PRO_5X_HLS_OL,       //!< 0 - Open load / open circuit

            //!< High-side or low-side pin is not connected to a controller.
            //!< A Wire can be broken or disconnected.

            DM_PRO_5X_HLS_HSP,      //!< 1 - Short circuit to power supply / battery at high-side pin

            //!< High-side pin is connected directly to a power supply or a battery.
            //!< A wire was unintentionally connected to BAT+.
            //!<
            //!< If this error is detected by the error element then a high-low-side chain is
            //!< disconnected, thus an electrical connection (chain) between a high-side pin
            //!< and a low-side of a block is opened. \n
            //!< After successful disconnection the block is trying to connect the chain back with
            //!< delay of 1 second.
            //!<
            //!< @warning
            //!< This error reaction is only valid for `PRO_HLS_TYPE0_STD`.
            //!<
            //!< @attention
            //!< This error is not detected when the \ref TProOut.u16Pwm "duty cycle" is greater
            //!< than 64300 (~98%).
            //!< This is to prevent false-positive errors during control transients.

            DM_PRO_5X_HLS_HSG,      //!< 2 - Short circuit to ground at high-side pin

            //!< High-side pin is connected directly to the ground.
            //!< A wire was unintentionally connected to BAT- or GND.

            DM_PRO_5X_HLS_LSP,      //!< 3 - Short circuit to power supply / battery at low-side pin

            //!< Low-side pin is connected directly to a power supply or a battery.
            //!< A wire was unintentionally connected to BAT+.

            DM_PRO_5X_HLS_LSG,      //!< 4 - Short circuit to ground at low-side pin

            //!< Low-side pin is connected directly to the ground.
            //!< A wire was unintentionally connected to BAT- or GND.

            DM_PRO_5X_HLS_CD,       //!< 5 - Current control deviation

            //!< The error is in development process. It should not be used currently.

            DM_PRO_5X_HLS_FD,       //!< 6 - Deviation of mini-module responses frequency

            //!< The frequency of mini-module responses is insufficient for a feedback control
            //!< of PWM output. Until the block receives a proper value of actual current
            //!< measured at low-side pin at mini-module the PID-controller remains frozen,
            //!< thus flag `tOut.boPidFreeze` remains active also.

            DM_PRO_CNT_MAX          //!< 7 - The quantity of errors
        };

    #endif
    #ifdef COMPILER_SWITCH_FAM_TTC7X

        //! Types of proportional output
        typedef enum
        {
           PRO_TYPE0_STD            //!< 0 - Standard (high-side) proportional output

           //!< The valve is connected to high-side controller pin and to the ground. \n
           //!< PWM high-side pin is used to control the duty cycle at output and
           //!< measure the feedback current. The pin has to be configured as PINTYP_PWM.

        }EProTyp;

        //! Detectable block errors
        enum
        {
            DM_PRO_7X_HS_OL,        //!< 0 - Open load / open circuit

            //!< Pin is not connected to a controller. A Wire can be broken or disconnected.

            DM_PRO_7X_HS_HSP,       //!< 1 - Short circuit to power supply / battery

            //!< Pin is connected directly to a power supply or a battery.
            //!< A wire was unintentionally connected to BAT+.

            DM_PRO_7X_HS_HSG,       //!< 2 - Short circuit to ground

            //!< Pin is connected directly to the ground.
            //!< A wire was unintentionally connected to BAT- or GND.
            //!< @attention Requires either diagnostic margin to be enabled (See `eCoreInstallPwmDiagMarginMode()` ) \n
            //!< @attention or \ref TProPar::u16EngineOffCur to be greater than 0. 

            DM_PRO_7X_HS_CD,        //!< 3 - Deviation of current control

            //!< Detection method is not available at this hardware.

            DM_PRO_7X_HS_INT,       //!< 4 - Internal error ( software or hardware error )

            //!< IO Driver has delivered an unexpected pin state. \n
            //!< It is recommended to check a pin state `tOut.ePinStaHs` to get additional
            //!< information. If `tOut.ePinStaHs` is equal to `PINSTA_OK` then it is a
            //!< software error, otherwise it has to be investigated. If this error occurred
            //!< please contact a support service and describe the situation.

            DM_PRO_CNT_MAX          //!< 5 - The quantity of errors
        };

    #endif
    #ifdef COMPILER_SWITCH_FAM_TTC3X

        //! Types of proportional output
        typedef enum
        {
           PRO_TYPE0_STD            //!< 0 - Standard (high-side) proportional output

           //!< The valve is connected to high-side controller pin and to the ground. \n
           //!< PWM high-side pin is used to control the duty cycle at output and
           //!< measure the feedback current. The pin has to be configured as PINTYP_PWM.

        }EProTyp;

        //! Detectable block errors
        enum
        {
            DM_PRO_3X_HS_OL,        //!< 0 - Open load / open circuit

            //!< Pin is not connected to a controller. A Wire can be broken or disconnected.

            DM_PRO_3X_HS_HSP,       //!< 1 - Short circuit to power

            //!< Pin is connected directly to a power supply or a battery.
            //!< A wire was unintentionally connected to BAT+.

            DM_PRO_3X_HS_HSG,       //!< 2 - Short circuit to ground

            //!< Pin is connected directly to the ground.
            //!< A wire was unintentionally connected to BAT- or GND.
            //!< @attention Requires either diagnostic margin to be enabled (See `eCoreInstallPwmDiagMarginMode()` ) \n
            //!< @attention or \ref TProPar::u16EngineOffCur to be greater than 0. 

            DM_PRO_3X_HS_CD,        //!< 3 - Deviation of current control

            //!< Detection method is not available at this hardware.

            DM_PRO_3X_HS_INT,       //!< 4 - Internal error ( software or hardware error )

            //!< Detection method is not available at this hardware.

            DM_PRO_CNT_MAX          //!< 5 - The quantity of errors
        };

    #endif
    #ifdef COMPILER_SWITCH_FAM_TTC5XX

        //! Types of proportional output
        typedef enum
        {
           PRO_TYPE0_STD            //!< 0 - Standard (high-side) proportional output

           //!< The valve is connected to high-side controller pin and to the ground. \n
           //!< PWM high-side pin is used to control the duty cycle at output and
           //!< measure the feedback current. The pin has to be configured as PINTYP_PWM.

        }EProTyp;

        //! Detectable block errors
        enum
        {
            DM_PRO_5XX_HS_OL,       //!< 0 - Open load / open circuit

            //!< Pin is not connected to a controller. A Wire can be broken or disconnected.
            //!<
            //!< @warning
            //!< If the resolution between a "short to power(SP)" and an "open load(OL)"
            //!< `tInp.boRslOlSp` is inactive then a pin cannot distinguish between SP & OL. \n
            //!< Check `tInp.boRslOlSp` description for more information on this topic. \n
            //!< Check "TTC-5xx Error Detection" section for more information on this topic.

            DM_PRO_5XX_HS_HSP,      //!< 1 - Short circuit to power supply / battery

            //!< Pin is connected directly to a power supply or a battery.
            //!< A wire was unintentionally connected to BAT+.
            //!<
            //!< @warning
            //!< If the resolution between a "short to power(SP)" and an "open load(OL)"
            //!< `tInp.boRslOlSp` is inactive then a pin cannot distinguish between SP & OL. \n
            //!< Check `tInp.boRslOlSp` description for more information on this topic. \n
            //!< Check "TTC-5xx Error Detection" section for more information on this topic.

            DM_PRO_5XX_HS_HSG,      //!< 2 - Short circuit to ground

            //!< Pin is connected directly to the ground.
            //!< A wire was unintentionally connected to BAT- or GND.
            //!< @attention Requires either diagnostic margin to be enabled (See `eCoreInstallPwmDiagMarginMode()` ) \n
            //!< @attention or \ref TProPar::u16EngineOffCur to be greater than 0. 

            DM_PRO_5XX_HS_CD,       //!< 3 - Deviation of current control

            //!< The error is in development process. It should not be used currently.

            DM_PRO_5XX_HS_INT,      //!< 4 - Internal error ( software or hardware error )

            //!< Output driver has delivered an unexpected pin state or "Safe state" of core
            //!< does not match to pin state of output driver. \n
            //!< It is recommended to check a pin state `tOut.ePinStaHs` to get additional
            //!< information. If `tOut.ePinStaHs` is equal to `PINSTA_OK` then it is a
            //!< software error, otherwise it has to be investigated. If this error occurred
            //!< please contact a support service and describe the situation.

            DM_PRO_CNT_MAX          //!< 5 - The quantity of errors
        };

    #endif


    //! State of proportional PWM output
    typedef enum
    {
        PROSTA_OFF,             //!< 0 - Output is deactivated
        PROSTA_ON,              //!< 1 - Output is activated
        PROSTA_ERR,             //!< 2 - Error case / deactivated

        //!< An error was detected by the block, an output is deactivated.

        PROSTA_NOT,             //!< 3 - Block is not initialized / deactivated

        //!< Initial state of the block before the initialization.

        PROSTA_NO_DC,           //!< 4 - Duty cycle is not available (no loop control) / deactivated

        //!< Deactivates a block and the valve completely. The error detection in the block is inactive.

        PROSTA_MIN_DC,          //!< 5 - Minimal duty cycle (5%) (no loop control) / activated

        //!< Sets the minimal 5% duty cycle at output. The error detection in the block is inactive.

        PROSTA_SAFESTATE,       //!< 6 - ECU is in "Safe state" / deactivated

        //!< Reported as output state when an ECU detects some safety critical issue.

        PROSTA_SHUTOFF          //!< 7 - Pin group is off / deactivated

        //!< Reported as output state if an ECU detects some safety critical issue and a safety reaction
        //!< is set up as deactivation of a "Shut-off" group, to which the pin of the block belongs.

    }EProSta;

    // STRUCTURES ==================================================================================

    // Properties with database links
    typedef struct
    {
        TUint16     u16Freq;            //!< [Hz] PWM Frequency
        TDbLink     tDbFreq;            //!< [stu] DB-link
        TUint16     u16CoilRes;         //!< [Ohm/10] Valve Coil Resistance
        TDbLink     tDbCoilRes;         //!< [stu] DB-link
    }TProPrpCfg;

    // Parameters with database links
    typedef struct
    {
        // PWM output
        TUint16     u16EngineOffCur;    //!< [mA/10] "Engine off" Current
        TDbLink     tDbEngineOffCur;    //!< [STU]   DB-link
        TUint16     u16MinCur;          //!< [mA/10] Minimal Current
        TDbLink     tDbMinCur;          //!< [STU]   DB-link
        TUint16     u16StopCur;         //!< [mA/10] Stop Current
        TDbLink     tDbStopCur;         //!< [STU]   DB-link
        TUint16     u16ICal;            //!< [mA/10] Calibration Current
        TDbLink     tDbICal;            //!< [STU]   DB-link
        // PID current control (closed loop)
        TUint16     u16Gp;              //!< [1/100] Proportional Gain Constant
        TDbLink     tDbGp;              //!< [STU]   DB-link
        TUint16     u16Ti;              //!< [ms]    Integration Time Period
        TDbLink     tDbTi;              //!< [STU]   DB-link
        TUint16     u16Td;              //!< [ms]    Derivation Time Period
        TDbLink     tDbTd;              //!< [STU]   DB-link
    }TProParCfg;

    //! Configuration - <a href="blo.html#BloCfg">Common data</a>.
    typedef struct
    {
        // Common
        TChar       achName[BLO_NAME_STR_LEN];  //!< [str] Block Name
        EBloStatus  eBloProc;                   //!< [enu] <a href="blo.html#eBloSta"> Block Initial State (Process)</a>

        // Fixed Settings
        EProTyp     eTyp;                       //!< [enu] Type of Proportional Output

        //!< The type `PRO_TYPE0_STD` is standard proportional output. It is suitable almost for
        //!< every hardware with PWM outputs. The types `PRO_HLS_TYPE0_STD` and `PRO_HLS_TYPE1_DUAL`
        //!< instead work only with TTC-50 controller's family.

        TUint8      u8DtTask;                   //!< [ms] Cycle Call Time / Delta T

        //!< The cycle call time is a time period between block calculation / execution. Usually it
        //!< should be based on controller cycle time, which can be found in ECU settings in "Project
        //!< Definition Tool"(PDT) or in automatically generated code files Cfg_Ecu.c -->
        //!< `gEcu_tSys.tSil.u16EcuTaskTime`.
        //!< It will be used as a sample time (delta T) for the internal PID-Controller.

        TUint8      u8DebTime;                  //!< [ms] Internal Debounce Time

        //!< Internal debounce time is used to prevent a faulty behavior of an output in case of error.
        //!< If a block detects an error within an time period of internal debounce time then an internal
        //!< error state is set. \n
        //!< From the initial debouncing moment and after an activation of an internal error state an output
        //!< and internal PID-controller remain frozen thus the output holds the last valid value until:
        //!< - the error is eliminated;
        //!< - the error is detected in application ( the error passed its debounce time set in the error
        //!<   properties when a set condition is active and exclude group is inactive );
        //!< - the output is deactivated by application;

        // Hardware I/O Definitions
        TBoolean    boPinConnected;             //!< [boo] Pin Permanent Connection

        //!< Parameter is not used currently. Left as place holder for a feature.

        EPin        ePinPwm;                    //!< [enu] PWM Pin (High-Side)

        //!< The high-side PWM pin is the single pin for output type `PRO_TYPE0_STD` and main pin
        //!< for high-side and low-side (HLS) configuration types `PRO_HLS_TYPE0_STD` and
        //!< `PRO_HLS_TYPE1_DUAL`. \n
        //!< When the pin is chosen at the "input / output (I/O) Definition" list in "Project Definition
        //!< Tool (PDT)" pin type should be set to "PINTYPE_PWM".

        EPin        ePinDou;                    //!< [enu] DOU Pin (Low-Side only at TTC-5x)

        //!< The pin is used as low-side DOU pin only at TTC-5x. At other controllers a value has to be
        //!< set to `PIN_NA`. \n
        //!< When the pin is chosen at the "input / output (I/O) Definition" list in "Project Definition
        //!< Tool (PDT)" pin type should be set to "PINTYPE_DOU".

        // Properties
        TProPrpCfg  tPrpCfg;                    //!< [stu] Properties with DB-links
        // Parameters
        TProParCfg  tParCfg;                    //!< [stu] Parameters with DB-links
        // Errors
        TUint8      u8ErrCnt;                   //!< [num] Quantity of Errors
        TErrCfgFea  atErrFea[DM_PRO_CNT_MAX];   //!< [cla] Error configurations

    } TProCfg;

    //! Properties - <a href="blo.html#BloPrp">Common data</a>.
    typedef struct
    {
        TUint16   u16Freq;           //!< [Hz] PWM frequency

        //!< Only predefined frequencies should be used. Look for PINPWM_NA in core header
        //!< files. \n
        //!< Default values for a hardware:
        //!< <div class="divMono"></div>
        //!< | Default value | Range    | Hardware | Pin Group |
        //!< |---------------|----------|----------|-----------|
        //!< | 200           | 50 - 200 | TTC-5XX  | All       |
        //!< | 200           | 50 - 200 | TTC-77   | All       |
        //!< | 100           | 50 - 200 | TTC-5X   | All       |
        //!< | 200           | 50 - 200 | TTC-3X   | All       |
        //!<
        //!< This PMW frequency value should be equal to the PWM frequency of pin, which
        //!< was chosen in the I/O list in the "Project Definition Tool".
        //!< Otherwise this value is overriding the pin PWM frequency.

        TUint16   u16CoilRes;        //!< [Ohm/10] Load (valve coil + wires) resistance

        //!< In order to set a correct current to the PWM output, it is required to
        //!< know the estimated value of resistance of whole circuit.
        //!< This value could be calculated as a sum of following values:
        //!< - Resistance of a load at PWM output, like a coil resistance if a
        //!<   valve is connected to PWM output (temperature dependent changes
        //!<   of the valve's resistance should be considered, too)
        //!< - Resistance of wires that connect ECU and valve
        //!< - Resistance of supply wires
    }TProPrp;

    //! Parameters - <a href="blo.html#BloPar">Common data</a>.
    typedef struct
    {
        TUint16 u16EngineOffCur;     //!< [mA/10] "Engine off" Current

        //!< A proportional valve is supplied with this current value when engine is turned off
        //!< and output is set to `PROSTA_OFF`. \n
        //!< If an engine is turned off, exactly, if the flag "Engine is on" `ptCoreInp->boEngineOn`
        //!< in `vAppRun` function is set to `FALSE` then this parameter replaces the stop
        //!< current `tPar.u16StopCur` and the minimal current `tPar.u16MinCur`. \n
        //!< This value must be high enough to make an error detection possible and at the
        //!< same time as low as possible to decrease power consumption. \n
        //!< Restrictions: "Engine off" current <= Stop current <= Minimal current

        TUint16 u16MinCur;           //!< [mA/10] Minimal Current

        //!< This value is a minimal current for the valve in an inactive state. Besides it have
        //!< to be calibrated so, that a valve can be easily opened starting from smallest
        //!< adjustments of a current value. \n
        //!< Restrictions: "Engine off" current <= Stop current <= Minimal current \n

        TUint16 u16StopCur;          //!< [mA/10] Stop Current

        //!< In a normal operation conditions this current value is used to close an activated
        //!< proportional valve. \n
        //!< It should be less than a specified minimal current for an inactive valve
        //!< `tPar.u16MinCur`. \n
        //!< If the block detects some error this current value is set to an output immediately.
        //!< For the proper error reaction the stop current has to be higher than 350 [mA/10]
        //!< otherwise a block will be toggling between a stop current and the input command
        //!< current `tInp.u16Ic` \n
        //!< Restrictions: "Engine off" current <= Stop current <= Minimal current

        TUint16 u16ICal;             //!< [mA/10] Offset (Calibration) Current

        //!< This current will be added to input current value `TProInp.u16Ic`.\n
        //!< It is usually required to provide a current offset or to calibrate a valve.
        //!< @note
        //!< Offset is applied when `TProOut.eValSta` is \ref PROSTA_ON .

        TUint16 u16Gp;               //!< [1/100] Proportional Gain Constant

        //!< The proportional term produces an output value that is proportional to a
        //!< current error value. The proportional response can be adjusted by multiplying
        //!< the error by a constant Gp, called the proportional gain constant.
        //!
        //!<  \f{eqnarray*}{ P_{out} &=& G_P \times e(t) \f}
        //!
        //!< A high proportional gain results in a large change of the output signal for a
        //!< given change in the error. If the proportional gain is too high, the system can
        //!< become unstable. In contrast, a small gain results in a small output response
        //!< to a large input error, and a less responsive or less sensitive control.
        //!< If the proportional gain is too low, a control action may be too small to react
        //!< properly to a system disturbances.

        TUint16 u16Ti;               //!< [ms] Integration Time Period

        //!< The contribution from the integral term is proportional to both the magnitude
        //!< of the error and the duration of the error. The integral in a PID controller
        //!< is the sum of the instantaneous error over time and gives the accumulated offset
        //!< that should have been corrected previously.
        //!<
        //!< \f{eqnarray*}{ I_{out} &=& \int\limits_0^t e(T_i)dT_i \f}
        //!<
        //!< The integral term accelerates the movement of the process towards a set point
        //!< (command current) and eliminates the residual steady-state error that occurs
        //!< with a pure proportional controller. However, since the integral term responds
        //!< to accumulated errors from the past, it can cause a present value to overshoot
        //!< the set point value.

         TUint16 u16Td;               //!< [ms] Derivation Time Period

        //!< The derivative of the process error is calculated by determining the slope of
        //!< the error over time. The magnitude of the contribution of the derivative term to
        //!< the overall control action is termed the derivative gain.
        //!<
        //!< \f{eqnarray*}{ D_{out} &=& \frac{de(T_d)}{dT_d} \f}
        //!<
        //!< Derivative action predicts system behavior and thus improves settling time
        //!< and stability of the system.

    }TProPar;

    //! Input - <a href="blo.html#BloInp">Common data</a>.
    typedef struct
    {
        EBloStatus  eBehProc;       //!< [enu]   <a href="blo.html#eBloSta"> Input of Block State (Process)</a>
        TBehErrCntl tBehErrCntl;    //!< [stu]   Control of Error Behavior
        EUpdate     eUpdateCfg;     //!< [enu]   <a href="blo.html#eUpdatePar"> Parameters Update Option</a>
        EProSta     eSta;           //!< [enu]   Input State

        //!< This state has to be set to output.

        TUint16     u16Ic;          //!< [mA/10] Command Current

        //!< This current value has to be set to output.

        TBoolean    boRelay;        //!< [def]   Relay Switch

        //!< Parameter is not used currently. Left as place holder for a feature.

        #ifdef COMPILER_SWITCH_FAM_TTC5X
        TBoolean    boLockErrTest;  //!< [def]   "Lock Hardware Error Release Tests"

        //!< This parameter is applicable only at TTC-5x. \n
        //!< If the block recognizes the "Short Circuit to Power" at high-side pin at TTC-5x then
        //!< it disconnects the high-low-side chain to eliminate the error. \n
        //!< After some time ( roughly every 1000 ms ) the block tries to connect the chain again.
        //!< So if this parameter is set to `TRUE` then chain remains disconnected after the error. \n
        //!< Otherwise if it is set to `FALSE` then the block is allowed to establish the connection
        //!< between high-side and low-side pins. \n
        //!< The parameter is set to `FALSE` by default.\n
        #endif

        #ifdef COMPILER_SWITCH_FAM_TTC5XX
        TBoolean    boRslOlSp;      //!< [boo] Resolve "Open Load or Short to Power"

        //!< - `FALSE` - the main PWM driver (`ADC_PWM_DC`) is used to control an output. \n
        //!<   With this option a controller can not differentiate if a "short circuit to power" or an
        //!<   "open load" is detected so the detection method `DM_PRO_5XX_HS_OL` is actually can be
        //!<   triggered by both errors.
        //!< - `TRUE` - the secondary PWM driver (`DAC_PWM_DC_RESOLVE_OPEN_SCPOW`) is used to control
        //!<   an output. \n With this option a controller can differentiate between a "short circuit
        //!<   to power" and an "open load". But if one of them is once detected on a pin then the pin
        //!<   becomes completely inactive. The pin is available only after the controller restart.
        //!<
        //!< \warning
        //!< If the pin of the block is configured as safety pin then the debounce time of "open load" (OL)
        //!< and "short to power" (SP) should be set to maximum 70 ms. If it will be longer, than the both
        //!< errors (OL and SP) will be detected.
        //!<
        //!< The parameter is set to `FALSE` by default.\n
        #endif

    }TProInp;

    //! Output - <a href="blo.html#BloOut">Common data</a>.
    typedef struct
    {
        EBloStatus eBehProcSta;   //!< [enu] <a href="blo.html#eBloSta"> Actual Block State (Process)</a>
        TBehErrSta tBehErrSta;    //!< [stu] Error Behavior Status
        EPinStatus ePinStaHs;     //!< [enu] Actual Status of PWM Pin (High-Side)
        #ifdef COMPILER_SWITCH_FAM_TTC5X
        EPinStatus ePinStaLs;     //!< [enu] Actual Status of PWM Pin (Low-Side)
        #endif
        EProSta    eValSta;       //!< [enu] State of Valve (Output)

        //!< The parameter represents an actual output (valve) state.

        TUint16    u16Ic;         //!< [mA/10] Command Current

        //!< The parameter represents the current value that was used to calculate the actual
        //!< duty cycle `u16Pwm`, that was set to a driver of a PWM output.

        TUint16    u16Ia;         //!< [mA/10] Actual Current

        //!< This is an actual current measured at output where current feedback is available.

        TUint16    u16Ua;         //!< [mV]    Actual Voltage

        //!< This is an actual voltage measured at output where voltage feedback is available.

        TUint16    u16Pwm;        //!< [u16] Actual Duty Cycle

        //!< The parameter represents the duty cycle value that was set to a driver of a PWM
        //!< output.
        //!<
        //!< The parameter unit is represented in a range [0 ... 65535],
        //!< where 65535 corresponds to 100% duty cycle.

        TUint16    u16CalRegIa;   //!< [mA/10] Approximately Calculated Actual Current

        //!< The block performs an additional calculation of theoretical value of an actual
        //!< current, which is used for additional error detection.

        TBoolean   boPidFreeze;   //!< [boo] Freeze PID-Controller

        //!< This parameter shows if PID-Controller was frozen due to deboncing of faulty error
        //!< state at one of the pins.

        TBoolean   boPidStop;     //!< [boo] Stop PID-Controller

        //!< This parameter shows if PID-Controller was stopped due to detected error state at
        //!< one of the pins.
        //!<
        //!< When this parameter is `TRUE` then PID-controller is also reinitilised,
        //!< so the accumulated I-part of controller is set back to zero.

    }TProOut;

    //! Address - <a href="blo.html#BloAdr">Common data</a>.
    typedef struct
    {
        const TProCfg* cptCfg;      //!< [stu] Configuration structure of the block
              TVoid*   pvObj;       //!< [stu] Pointer to the private object
              TUint16  u16Stamp;    //!< Registration stamp
    }TProAdr;

    //! Block interface structure - <a href="blo.html#Blo">Common data</a>.
    typedef struct
    {
        TProInp tInp;               //!< [stu] Input vector
        TProOut tOut;               //!< [stu] Output vector
        TProPrp tPrp;               //!< [stu] Properties
        TProPar tPar;               //!< [stu] Parameters
        TProAdr tXAdr;              //!< [stu] Address information
    } TBloPro;

    // LIBRARY PROTOTYPES ==============================================================================

    // a) Version information

    //------------------------------------------------------------------------------
    //! @brief      Get the version information of a Block object.
    //! @retval     *cptVer - Pointer to version-date information structure.
    //------------------------------------------------------------------------------
    extern const TVerChapCom *cptBloProVersionsInfo(TVoid);

    //------------------------------------------------------------------------------
    //! @brief      Check a version compatibility of a Block object.
    //! @retval     TRUE  - A version of an object is compatible with a used MATCH version.
    //! @retval     FALSE - A version of an object is incompatible with a used MATCH version.
    //------------------------------------------------------------------------------
    extern TBoolean boBloProVersionCheck(TVoid);

    // b) Constructor

    //------------------------------------------------------------------------------
    //! @brief      Creation.
    //! @details    Object constructor. <a href="blo.html#block_create">Only for manual creation</a>.
    //! @pre
    //!             - Block type should be registered in MATCH environment.
    //!             - Block interface structure \ref TBloPro must be already defined.
    //!             - Configuration structure \ref TProCfg must be already defined
    //!               and initialized.
    //! @note
    //!             - Method must be used in application initialization phase 
    //!               `eAppStartUp()`. 
    //!             - Database links in Block configuration may be 
    //!               resolved and data may be pulled out of database only when \n
    //!               all databases are loaded in application.
    //! @param[in]  ptBlo  - [stu] Pointer to a  Block interface structure.
    //! @param[in]  cptCfg - [stu] Pointer to a Block configuration structure.
    //! @retval     R_OKAY          - Faultless execution
    //! @retval     R_MEMORY        - No more memory is available
    //! @retval     R_NULL_POINTER  - One of arguments is null pointer
    //! @retval     R_NOT_REGISTRY  - Object is not registered
    //--------------------------------------------------------------------------------------------------
    extern ERetVal eBloProCreate( TBloPro* ptBlo, const TProCfg *cptCfg );

    // b) Initialization

    //------------------------------------------------------------------------------
    //! @brief      Initialization.
    //! @details    Object constructor. <a href="blo.html#block_init">Only for manual initialization</a>.
    //! @pre
    //!             - Function `eBloProCreate()` must be already successfully 
    //!               executed.
    //! @note
    //!             - Configuration structure, which was set in \ref eBloProCreate "creation
    //!               function", will be used to initialize the block settings.
    //!             - Method must be used in application initialization phase 
    //!               `eAppInit()`.
    //! @param[in]  ptBlo  - [stu] Pointer to a Block interface structure.
    //! @retval     R_OKAY              - Faultless execution
    //! @retval     R_NULL_POINTER      - One of argument is null pointer
    //! @retval     R_ADDRESS           - Wrong address of object
    //! @retval     R_NOT_REGISTRY      - Object is not registered
    //! @retval     R_CONFIG            - One of configuration parameters is wrong ( more in Debug.exe )
    //! @retval     R_NOT_INITIALIZED   - Block behavior set to BLO_NOT_INIT;
    //  Return values of database linking:
    //! @retval     R_DB_LIST           - Database list index out of valid range
    //! @retval     R_DB_VAR            - Variable index out of valid range
    //! @retval     R_DB_DIM            - Array index out of valid range
    //! @retval     R_SUPPORT           - Variable function is not supported
    //! @retval     R_RANGE             - Variable is out of valid range (one for the write process)
    //!                                   MIN/MAX
    //! @retval     R_INCONSISTENT      - Database list is inconsistent
    //! @retval     R_PARAMETER         - Variable type do not match to the type in the database list \n
    //--------------------------------------------------------------------------------------------------
    extern ERetVal eBloProInit( TBloPro* ptBlo );

    // c) PDT constructor and initializer

    //------------------------------------------------------------------------------
    //! @brief      Create, initialize and register.
    //! @details    Function sequentially calls `eBloProCreate()` and 
    //!             `eBloProInit()` functions.
    //! @pre
    //!             - A Block must be defined in PDT.
    //! @note
    //!             - Function call is performed automatically
    //!               within "auto code" generated by PDT.
    //! @param[in]  pvBlo           - [stu] Pointer to a Block interface structure.
    //! @retval     R_OKAY          - Faultless execution.
    //! @retval     R_NULL_POINTER  - An argument is `NULL` pointer.
    //! @retval     R_NOT_REGISTRY  - Object is not registered.
    //! @retval     R_ADDRESS       - Invalid address of object.
    //--------------------------------------------------------------------------------------------------
    extern ERetVal eBloProCreateInitRegistry( TVoid *pvBlo );

    // d) Calculation / execution / run

    //--------------------------------------------------------------------------------------------------
    //! @brief      Calculation / execution / run (Necessary)
    //! @details    Function runs the object execution, so the objects reads new input data and
    //!             calculate new output data. \n
    //!             Method (function) should be called any way, no matter if block was created by PDT
    //!             or without it.
    //! @pre
    //!             - Function `eBloProInit()` must be already successfully executed.
    //! @note
    //!             - Function call for each certain Block should be made only once 
    //!               during 1 controller cycle. \n
    //!             - Function should be used in application run(-time) phase 
    //!               `vAppRun()`.
    //! @param[in]  ptBlo           - [PNT] Pointer to block main structure
    //! @retval     R_OKAY          - Faultless execution
    //! @retval     R_NULL_POINTER  - One of arguments is null pointer
    //! @retval     R_NOT_REGISTRY  - Object is not registered
    //! @retval     R_ADDRESS       - Wrong address of object
    //! @retval     R_NOACT         - Block process option is BLO_LOCKED
    //! @retval     R_DOUBLE        - Double call of block was performed
    //! @warning    In case of update returns values of initialization function.
    //--------------------------------------------------------------------------------------------------
    extern ERetVal eBloPro( TBloPro* ptBlo );

    // e) Error handling

    //------------------------------------------------------------------------------
    //! @brief      Get error status.
    //! @details    Get the status of a certain detection method (error).
    //!             Specify one of bit positions available in detection method 
    //!             enumeration.\n
    //!             Limit value of this enumeration is \ref DM_PRO_CNT_MAX.
    //! @pre
    //!             - Function `eBloPro()` must be already successfully executed
    //!               at least once.
    //! @warning
    //!             - Specified bit position of detection method should be 
    //!               less than \ref `DM_PRO_CNT_MAX`.
    //! @param[in]  ptBlo    - [stu] Pointer to a Block interface structure.
    //! @param[in]  u8BitPos - [num] Bit position of certain detection method.
    //! @retval     TRUE    - Detection method (error) is active.
    //! @retval     FALSE   - Detection method (error) is inactive
    //! @retval     FALSE   - An argument is `NULL` pointer.
    //! @retval     FALSE   - Object is not registered.
    //! @retval     FALSE   - Invalid address of object.
    //------------------------------------------------------------------------------
    extern TBoolean boBloProGetErrStaBit( TBloPro* ptBlo, TUint8 u8BitPos );

    //------------------------------------------------------------------------------
    //! @brief      Get error event state.
    //! @details    Get the event status of a certain detection method (error).
    //!             Specify one of bit positions available in detection method 
    //!             enumeration. \n
    //!             Limit value of this enumeration is \ref DM_PRO_CNT_MAX.
    //! @pre
    //!             - Function `eBloPro()` must be already successfully executed
    //!               at least once.
    //! @warning
    //!             - Specified bit position of detection method should be 
    //!               less than \ref DM_PRO_CNT_MAX.
    //! @param[in]  ptBlo    - [stu] Pointer to Block object.
    //! @param[in]  boDetect - [boo] varibale defines which type of events to read:
    //!                        - `TRUE` - error presence is at least once detected. \n
    //!                          Bit is read from "Error detection field" 
    //!                          `ptBlo->tOut.tBehErrSta.u16ErrEveDetect`.
    //!                        - `FALSE` - error was deactivated after it has been 
    //!                          set active at least once.
    //!                          (Without state forcing through Service Tool). \n
    //!                          Bit is read from "Error removal (deletion) field".
    //!                          `ptBlo->tOut.tBehErrSta.u16ErrEveDelete`.
    //! @param[in]  u8BitPos - [num] Bit position of certain detection method.
    //! @retval     TRUE    - Event occured. 
    //! @retval     FALSE   - Event never occured.
    //! @retval     FALSE   - An argument is `NULL` pointer.
    //! @retval     FALSE   - Object is not registered.
    //! @retval     FALSE   - Invalid address of object.
    //------------------------------------------------------------------------------
    extern TBoolean boBloProGetErrEveBit( TBloPro* ptBlo, TBoolean boDetect, TUint8 u8BitPos );

    //------------------------------------------------------------------------------
    //! @brief      Get bit field of error states.
    //! @details    Get the states of a all detection methods (errors) defined
    //!             by Block. \n
    //!             State of each detection method (error) is located at some 
    //!             bit position corresponding to enumeration value of certain 
    //!             detection method. \n
    //!             Limit value of mentioned enumeration is \ref DM_PRO_CNT_MAX.
    //! @pre
    //!             - Function `eBloPro()` must be already successfully executed
    //!               at least once.
    //! @param[in]  ptBlo - [stu] Pointer to a Block interface structure.
    //! @retval     [0, U16_MAX] - Bits field of error states.
    //! @retval     0            - An argument is `NULL` pointer.
    //! @retval     0            - Object is not registered.
    //! @retval     0            - Invalid address of object.
    //------------------------------------------------------------------------------
    extern TUint16 u16BloProGetErrStaAll( TBloPro* ptBlo );

    //------------------------------------------------------------------------------
    //! @brief      Get bit field of event states.
    //! @details    Get the event states of a all detection methods (errors) 
    //!             defined by Block. \n
    //!             Event state of a detection method (error) is located at certain 
    //!             bit position corresponding to enumeration value of the 
    //!             detection method. \n
    //!             Limit value of mentioned enumeration is \ref DM_PRO_CNT_MAX.
    //! @pre
    //!             - Function `eBloPro()` must be already successfully executed
    //!               at least once.
    //! @param[in]  ptBlo - [stu] Pointer to a Block interface structure.
    //! @param[in]  boDetect - [boo] varibale defines which type of events to read:
    //!                        - `TRUE` - error presence is at least once detected. \n
    //!                          Bit is read from "Error detection field" 
    //!                          `ptBlo->tOut.tBehErrSta.u16ErrEveDetect`.
    //!                        - `FALSE` - error was deactivated after it has been 
    //!                          set active at least once.
    //!                          (Without state forcing through Service Tool). \n
    //!                          Bit is read from "Error removal (deletion) field".
    //!                          `ptBlo->tOut.tBehErrSta.u16ErrEveDelete`.
    //! @retval     [0, U16_MAX] - Bits field of event states.
    //! @retval     0            - An argument is `NULL` pointer.
    //! @retval     0            - Object is not registered.
    //! @retval     0            - Invalid address of object.
    //------------------------------------------------------------------------------
    extern TUint16 u16BloProGetErrEveAll( TBloPro* ptBlo, TBoolean boDetect );

#endif
