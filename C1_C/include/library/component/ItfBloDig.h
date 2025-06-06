//**************************************************************************************************
/*!
@file    ItfBloDig.h
@version 0.14.0.0
@brief   \htmlonly
<span><img class="imgBriefImage" src="BloDig32x32.png" alt="BloDig32x32.png"></span>
<span class="spanBriefText">Block "Digital Output" (<b>BloDig</b>)</span>
\endhtmlonly

\n
\htmlonly
<img src="BloDigSchematic.png" width="500"  alt="into", align="left" >
\endhtmlonly

<table  width=40% align="right">
<tr><td>
\htmlonly
<img src="BloDigDC1.png"   alt="into", align="left" >
\endhtmlonly
</td></tr>
<tr><td>
\htmlonly
<img src="BloDigDC2.png"   alt="into", align="left" >
\endhtmlonly
</td></tr>
<tr><td>
\htmlonly
<img src="BloDigDC3.png"   alt="into", align="left" >
\endhtmlonly
</td></tr>
</table>
\n\n\n\n\n\n\n\n\n\n
<blockquote style="width:40%;">
This block is designed to connect a digital valve. The output delivers a digital signal on/off. It has to be used as digital or PWM output.
"Digital valve" is appropriable to control the state of a hydraulic switch valve (black/whith valve) and to re-read the state signals of the
controller digital output. Depending on the hardware it's possible to regulate the current and/or configure a second pin to double the maximal
output current. The Block has the following options depending on the hardware:\n
</blockquote>
<table>
<tr><th></th><th>TTC3X</th><th>TTC5X</th><th>TTC7X</th><th>TTC2XX</th><th>TTC5XX</th></tr>
<tr><th>Pin groups</th><td>\ref EDigTyp "DIG_TYPE0_DOU"\n
                            \ref EDigTyp "DIG_TYPE1_PWM"\n
                            \ref EDigTyp "DIG_TYPE2_PWM_CF" </td><td>\ref EDigTyp "DIG_TYPE0_DOU"\n
                                                                     \ref EDigTyp "DIG_TYPE1_PWM"\n
                                                                     \ref EDigTyp "DIG_TYPE2_DOU_FOL"\n
                                                                     \ref EDigTyp "DIG_TYPE3_DOU_PS"\n
                                                                     \ref EDigTyp "DIG_TYPE4_DOU_FOL_PS"\n
                                                                     \n
                                                                     \ref EDigTyp "DIG_HLS_TYPE0_STD"\n
                                                                     \ref EDigTyp "DIG_HSFB_TYPE1_STD" </td><td>\ref EDigTyp "DIG_TYPE0_DOU2"\n
                                                                                                                \ref EDigTyp "DIG_TYPE1_PWM_CF2"\n
                                                                                                                \ref EDigTyp "DIG_TYPE2_PWM_DF2"\n
                                                                                                                \ref EDigTyp "DIG_TYPE3_PWM_VF2"\n
                                                                                                                \ref EDigTyp "DIG_TYPE4_PWM_DF_VF2"</td><td>\ref EDigTyp "DIG_TYPE0_DOU"\n
                                                                                                                                                              \ref EDigTyp "DIG_TYPE1_PWM"\n
                                                                                                                                                              \ref EDigTyp "DIG_TYPE2_PWM_CF" </td><td> \ref EDigTyp "DIG_TYPE0_DOU" \n
                                                                                                                                                                                                   \ref EDigTyp "DIG_TYPE1_PWM" \n
                                                                                                                                                                                                   \ref EDigTyp "DIG_TYPE2_PWM_CF" </td></tr>
<tr><th>Detection methods</th><td>\ref DM_DIG_3X_OL\n
                                  \ref DM_DIG_3X_OL "DM_DIG_3X_SP"\n
                                  \ref DM_DIG_3X_OL "DM_DIG_3X_SG"\n
                                  \ref DM_DIG_3X_OL "DM_DIG_3X_INT"</td><td>\ref DM_DIG_5X_OL_SP\n
                                                                               \ref DM_DIG_5X_OL_SP "DM_DIG_5X_SG"\n
                                                                               \ref DM_DIG_5X_OL_SP "DM_DIG_5X_FD"\n
                                                                               (with MASTERTYPE_DIG_A_HLS_LFB &\n DIG_HLS_TYPE0_STD option)\n
                                                                               \ref DM_DIG_5X_OL_SP "DM_DIG_5X_HLS_OL"\n
                                                                               \ref DM_DIG_5X_OL_SP "DM_DIG_5X_HLS_HSP"\n
                                                                               \ref DM_DIG_5X_OL_SP "DM_DIG_5X_HLS_HSG"\n
                                                                               \ref DM_DIG_5X_OL_SP "DM_DIG_5X_HLS_LSP"\n
                                                                               \ref DM_DIG_5X_OL_SP "DM_DIG_5X_HLS_LSG"\n
                                                                               \ref DM_DIG_5X_OL_SP "DM_DIG_5X_HLS_MM"  </td><td>\ref DM_DIG_7X_OL\n
                                                                                                                                  \ref DM_DIG_7X_OL "DM_DIG_7X_SP"\n
                                                                                                                                  \ref DM_DIG_7X_OL "DM_DIG_7X_SG"\n
                                                                                                                                  \ref DM_DIG_7X_OL "DM_DIG_7X_INT" </td><td>\ref DM_DIG_2XX_OL\n
                                                                                                                                                                             \ref DM_DIG_2XX_OL "DM_DIG_2XX_SP"\n
                                                                                                                                                                             \ref DM_DIG_2XX_OL "DM_DIG_2XX_SG"\n
                                                                                                                                                                             \ref DM_DIG_2XX_OL "DM_DIG_2XX_INT"</td><td>\ref DM_DIG_5XX_OL\n
                                                                                                                                                                                                    \ref DM_DIG_5XX_OL "DM_DIG_5XX_SP"\n
                                                                                                                                                                                                    \ref DM_DIG_5XX_OL "DM_DIG_5XX_SG"\n
                                                                                                                                                                                                    \ref DM_DIG_5XX_OL "DM_DIG_5XX_INT" </td></tr>
</table>

<table>
<tr><th>Abbreviation      </th><th>Description</th></tr>
<tr><td>DOU               </td><td>Digital output                               </td></tr>
<tr><td>PWM               </td><td>Pulse width modulation (output               </td></tr>
<tr><td>PWM_CF            </td><td>Pulse width modulation with current feed back</td></tr>
<tr><td>FOL               </td><td>ignore First open load                       </td></tr>
<tr><td>FD                </td><td>Feedback digital                             </td></tr>
<tr><td>PS                </td><td>Pressure switch                              </td></tr>
<tr><td>CF                </td><td>Current feedback                             </td></tr>
<tr><td>DF                </td><td>Digital feedback                             </td></tr>
<tr><td>VF                </td><td>Voltage feedback                             </td></tr>
<tr><td>OL                </td><td>Open load                                    </td></tr>
<tr><td>SP                </td><td>Short to power/battery                       </td></tr>
<tr><td>SG                </td><td>Short to ground                              </td></tr>
<tr><td>INT               </td><td>internal                                     </td></tr>
<tr><td>H                 </td><td>High side                                    </td></tr>
<tr><td>L                 </td><td>Low side                                     </td></tr>
<tr><td>HLS               </td><td>High side and low side                       </td></tr>
<tr><td>MM                </td><td>Mini modul                                    </td></tr>
<tr><td>STD               </td><td>Standard                                            </td></tr>


</table>
<blockquote style="width:40%;">
For DOU and PWM the output is generated with a frequency and a ON/OFF duty cycle in percent. With the PWM_CF the output can be set with ON/OFFCurrent parameter (cause of the current control).
</blockquote>

@created    01.07.2008
@changelog
-   0.5.4.0     06.03.2017
    - Values of "Output state" are corrected.
-   0.5.5.0     06.03.2017
    - The error detection in "Safe state" is extended.
      After "short to ground" pin will be automatically reinitialised.
-   0.6.0.0     14.03.2017
    - The MATCH block interface version is updated to 1.4
-   0.6.2.0     15.05.2017
    - The state of high-side pin is added in the output structure
-   0.7.0.0     16.05.2017
    - The MATCH block interface version is updated to 1.5
-   0.8.0.0     13.12.2017
    - New input `tInp.boRslOlSp` activates the resolution between an "open load"(OL) and a "short to power"(SP)
    - Interaction with the "Safe State" and "Shut-off group" is advanced;
    Error detection is updated for BSP 3.6.2.
-   0.9.0.0     02.07.2018
    - EBoardOptions was renamed to TBoardOptions in match 
    - u16ErrBypassForce was renamed to u16ErrBypassChange.
    - u16ErrBypassUpdate was renamed to u16ErrBypassRestore.
    - eCoreClosePwmHsDouLsChain has one new argument.
    - The MATCH block interface version is updated to 1.6.
-   0.9.1.0     14.05.2019
    - Improved pointer error diagnostics (#26971)
-   0.10.0.0    19.08.2019
    - The MATCH block interface version is updated to 1.7.
-   0.10.1.0    06.12.2019
    - `eBloDigDcPerRamp()` now returns R_NULL_POINTER when Block address is NULL
-   0.11.0.0    25.02.2020 
    - The MATCH block interface version is updated to 1.8.
-   0.12.0.0    26.06.2020
    - The MATCH block interface version is updated to 1.9.
-   1.13.1.0    25.08.2020  
   - The MATCH block interface version is updated to 1.10.
-   0.14.0.0  23.04.2021  
    - The MATCH block interface version is updated to 1.11
*/
//**************************************************************************************************
#ifdef COMPILER_SWITCH_FAM_TTC5X
/*! @htmlonly</div></div>@endhtmlonly

## Error Detection TTC-5X

@pre Board Support Package (BSP) 3.6.2

### Type `DIG_TYPE0_DOU`

### HS :: Power High-Side 2A Outputs with PWM Control [118-103]
       or Power High-Side 4A Outputs [144-129]

<div class="divMono"></div>
| High-side Output State | Forced Error               | Resulted Pin State ( PINSTA_...) : BSP Code | Detection Method |
|------------------------|----------------------------|---------------------------------------------|------------------|
| OFF                    | HS Wire :: Open load       | OPEN_SCPOW : 102                            | DM_DIG_5X_OL_SP  |
| OFF                    | HS Wire :: Short to ground | OK                                          |                  |
| OFF                    | HS Wire :: Short to power  | OPEN_SCPOW : 102                            | DM_DIG_5X_OL_SP  |
| ON                     | HS Wire :: Open load       | OK                                          |                  |
| ON                     | HS Wire :: Short to ground | PINSTA_SCGND : 111                          | DM_DIG_5X_SG     |
| ON                     | HS Wire :: Short to power  | OK                                          |                  |

@note
A. Test envinronment:
   - Reference voltage is 14 V
   - Resistance of a valve is 21.2 Ohm
   - Maximal current of a valve is 0,75 A

### Type `DIG_TYPE1_PWM`

#### HS :: Power High-Side 2A Outputs with PWM Control [118-103]

<div class="divMono"></div>
| High-side Output State | Forced Error               | Resulted Pin State ( PINSTA_...) : BSP Code | Detection Method                     |
|------------------------|----------------------------|---------------------------------------------|--------------------------------------|
| ON / OFF (B)           | HS Wire :: Open load       | OPEN_SCPOW : 102                            | DM_DIG_5X_OL_SP                      |
| ON / OFF (B)           | HS Wire :: Short to ground | SCGND : 103 --> (C) OPEN_SCPOW : 102        | DM_DIG_5X_SG --> (C) DM_DIG_5X_OL_SP |
| ON / OFF (B)           | HS Wire :: Short to power  | OPEN_SCPOW : 102                            | DM_DIG_5X_OL_SP                      |

@note
A. Test envinronment:
   - Reference voltage is 14 V
   - Resistance of a valve is 21.2 Ohm
   - Maximal current of a valve is 0,75 A

B. Valid duty cycle (DC) range [1 - 90]% ;
  - If DC is set to [99 - 100%] - OPEN_SCPOW is always active ;
  - If DC is set to 0% then SCGND is always active.

C. If DC is set to more than [90 - 98%] and a short to ground is forced, then a pin state at
   first shows SCGND and later, when the error is eliminated, OPEN_SCPOW is active
   within 300 - 500 ms.



### Type `DIG_HLS_TYPE0_STD`

#### HS :: Power High-Side 2A Outputs with PWM Control [118-103]
#### LS :: Low-Side Digital Outputs with Current Feedback [120-107]
        or Mini-Module Low-Side Digital Outputs with Current Feedback [122-109]

<div class="divMono"></div>
| Output State (tOut.eSta) | Forced Error               | Resulted Pin State (PINSTA_...) at HS Pin | Resulted Pin State (PINSTA_...) at LS Pin | LS Feedback current (A) | Detection Method      |
|--------------------------|----------------------------|-------------------------------------------|-------------------------------------------|-------------------------|-----------------------|
| OFF                      |                            | OK                                        | OK                                        | 340                     |                       |
| OFF                      | HS Wire :: Open load       | OPEN_SCPOW / BSP:102                      | OK                                        | 0                       | DM_DIG_5X_HLS_OL      |
| OFF                      | HS Wire :: Short to power  | OPEN_SCPOW / BSP:102                      | OK                                        | 6000                    | DM_DIG_5X_HLS_HSP     |
| OFF                      | HS Wire :: Short to ground | SCGND / BSP:103                           | OK                                        | 0                       | DM_DIG_5X_HLS_HSG     |
| OFF                      | LS Wire :: Open load       | OPEN_SCPOW / BSP:102                      | OK                                        | 0                       | DM_DIG_5X_HLS_OL      |
| OFF                      | LS Wire :: Short to power  | OPEN_SCPOW / BSP:102 (B)                  | PROTECTION_FIX / BSP:35                   | 23000                   | DM_DIG_5X_HLS_LSP     |
| OFF                      | LS Wire :: Short to ground | OK                                        | OK                                        | 0-20                    | DM_DIG_5X_HLS_LSG     |
| ON                       |                            | OK                                        | OK                                        | 5000                    |                       |
| ON                       | HS Wire :: Open load       | OPEN_SCPOW / BSP:102                      | OK                                        | 0                       | DM_DIG_5X_HLS_OL      |
| ON                       | HS Wire :: Short to power  | OPEN_SCPOW / BSP:102                      | OK                                        | 6000                    | DM_DIG_5X_HLS_HSP     |
| ON                       | HS Wire :: Short to ground | SCGND / BSP:103                           | OK                                        | 0                       | DM_DIG_5X_HLS_HSG     |
| ON                       | LS Wire :: Open load       | OPEN_SCPOW / BSP:102                      | OK                                        | 0                       | DM_DIG_5X_HLS_OL      |
| ON                       | LS Wire :: Short to power  | OPEN_SCPOW / BSP:102 (B)                  | PROTECTION_FIX / BSP:35                   | 23000                   | DM_DIG_5X_HLS_LSP     |
| ON                       | LS Wire :: Short to ground | OPEN_SCPOW / BSP:102                      | OK                                        | 260 - 300 (c)           | -                     |

@note
A. Test environment:
   - Reference voltage is 14 V
   - Resistance of a valve is 21.2 Ohm
   - Maximal current of a valve is 0,75 A

@note
B. At first only the PROTECTION_FIX at LS pin is detected and after 30-90 ms OPEN_SCPOW will be detected a HS pin.

C. If a diagnostic current is too low and the "ON" current is too high then the "short to ground at LS pin" can't be detected.
   So it is recommended to calibrate a "diagnostic current in 'OFF' state" in way that this error will be detected.

\n
@htmlonly<div><div>@endhtmlonly*/
#endif
#ifdef COMPILER_SWITCH_FAM_TTC5XX
/*! @htmlonly</div></div>@endhtmlonly

## Error Detection TTC-5XX

@pre Board Support Package (BSP) 02.10.01

### Option 1. No differentiation between an "open load" and a "short to power" - `tInp.boRslOlSp = FALSE`

#### High-Side PWM Outputs [PIN_153 - PIN_172]
<div class="divMono"></div>
| Output State (tOut.eValSta) | Forced Error               | Resulted Pin State (PINSTA_...) : BSP Code                      | Detection Method |
|-----------------------------|----------------------------|-----------------------------------------------------------------|------------------|
| ON / OFF (A)                | HS wire :: Open load       | OPEN_SCPOW : 13                                                 | DM_DIG_5XX_OL    |
| ON / OFF (A)                | HS wire :: Short to ground | OPEN_SCPOW : 13 --> PROTECTION : 20 --> PROTECTION_REE : BSP:22 | DM_DIG_5XX_SG    |
| ON / OFF (A)                | HS wire :: Short to power  | OPEN_SCPOW : 13                                                 | DM_DIG_5XX_OL    |

\note
A. Even if output is at 0 % of duty cycle some small detection current 50-70 [mA/10] is provided

#### High-Side PWM Outputs [PIN_101 - PIN_175]
@pre
This pin group cannot be used as PWM Output at TTC-540.

<div class="divMono"></div>
| Output State (tOut.eValSta) | Forced Error               | Resulted Pin State (PINSTA_...) : BSP Code                  | Detection Method |
|-----------------------------|----------------------------|-------------------------------------------------------------|------------------|
| ON / OFF (A)                | HS wire :: Open load       | OPEN_SCPOW : 13                                             | DM_DIG_5XX_OL    |
| ON / OFF (A)                | HS wire :: Short to ground | OPEN_SCPOW : 13 --> PROTECTION : 20 --> PROTECTION_REE : 22 | DM_DIG_5XX_SG    |
| ON / OFF (A)                | HS wire :: Short to power  | OPEN_SCPOW : 13                                             | DM_DIG_5XX_OL    |

\note
A. Even if output is at 0 % of duty cycle some small detection current 50-70 [mA/10] is provided

### Option 2. Resolving between an "open load" and a "short to power" - `tInp.boRslOlSp = TRUE`

#### High-Side PWM Outputs [PIN_153 - PIN_186] and [PIN_154 - 187]

@warning
This option is available only for certain PWM pin. \n
A proper error detection is not guaranteed if any pin from outside of ranges
( PIN_153 - PIN_186 and PIN_154 - 187 ) is used.

<div class="divMono"></div>
| Output State (tOut.eValSta) | Forced Error               | Resulted Pin State (PINSTA_...) : BSP Code                  | Detection Method |
|-----------------------------|----------------------------|-------------------------------------------------------------|------------------|
| ON / OFF (A)                | HS wire :: Open load       | OPEN_SCPOW : 13 -->(B) OPEN : 10                            | DM_DIG_5XX_OL    |
| ON / OFF (A)                | HS wire :: Short to ground | OPEN_SCPOW : 13 --> PROTECTION : 20 --> PROTECTION_REE : 22 | DM_DIG_5XX_SG    |
| ON / OFF (A)                | HS wire :: Short to power  | OPEN_SCPOW : 13 -->(B) SCPOW : 12                           | DM_DIG_5XX_SP    |

\note
A. Even if output is at 0 % of duty cycle some small detection current 50-70 [mA/10] is provided

\warning
B. If an error is resolved a pin is inactive until the restart of controller. \n
   A further usage of the pin without a controller reset can lead to unknown behavior.

\n
@htmlonly<div><div>@endhtmlonly*/
#endif
//**************************************************************************************************

#ifndef __ITFBLODIG__
    #define __ITFBLODIG__

// INCLUDES ========================================================================================
    #include <autoconfig.h>
    #include <ItfTypes.h>
    #include <ItfBasEleErr.h>
    #include <ItfCore.h>
    #include <ItfCoreEcu.h>
    #include <ItfCoreDb.h>

// DEFINES & ENUMS  ================================================================================

    #ifdef COMPILER_SWITCH_FAM_TTC3X

        //! DIG -> TYPE
        typedef enum
        {
           DIG_TYPE0_DOU,                       //!< 0 - Digital Output
           DIG_TYPE1_PWM,                       //!< 1 - PWM Output
           DIG_TYPE2_PWM_CF                     //!< 2 - PWM with Current Feedback
        }EDigTyp;

        //! DIG -> MASTER_TYPE2_DIG_VER_B option <b>TTC3X
        enum
        {
            DM_DIG_3X_OL,                       //!< [0] 1 - Open circuit <b>TTC3X
            DM_DIG_3X_SP,                       //!< [1] 2 - Short circuit to power <b>TTC3X
            DM_DIG_3X_SG,                       //!< [1] 4 - Short circuit to ground <b>TTC3X

            //!< @attention TYPEx_PWM \n
            //!< @attention Requires either diagnostic margin to be enabled (See `eCoreInstallPwmDiagMarginMode()` ) \n
            //!< or \ref TDigPrp::u8DcPerOff and \ref TDigPrp::u16OffCurrent to be greater than 0. 

            DM_DIG_3X_INT,                      //!< [2] 8 - Intern
            DM_DIG_CNT_MAX                      //!< [3] Max
        };

    #endif
    #ifdef COMPILER_SWITCH_FAM_TTC5X

        //! DIG -> TYPE
        typedef enum
        {
            DIG_TYPE0_DOU,                      //!< 0 - Digital Output
            DIG_TYPE1_PWM,                      //!< 1 - PWM Output
            DIG_TYPE2_DOU_FOL,                  //!< 2 - Digital Output with pressure switch <b>TTC5X
            DIG_TYPE3_DOU_PS,                   //!< 3 - Digital Output with pressure switch <b>TTC5X
            DIG_TYPE4_DOU_FOL_PS,               //!< 4 - Digital Output with pressure switch <b>TTC5X
            // DIG Valve High Low Side
            DIG_HLS_TYPE0_STD,                  //!< 5 - High-Side(PWM) - Low-Side (Feedback measurement)
            DIG_HSFB_TYPE1_STD                  //!< 6   High-Side(PWM) - with FB <b>TTC5X
        }EDigTyp;

        //! DIG -> MASTERTYPE_DIG_A_HS option <b>TTC5X
        enum
        {
            DM_DIG_5X_OL_SP,                    //!< [0] 1 - Open circuit <b>TTC5X
            DM_DIG_5X_SG,                       //!< [1] 2 - Short circuit to ground <b>TTC5X

            //!< @attention TYPEx_PWM \n
            //!< @attention Requires either diagnostic margin to be enabled (See `eCoreInstallPwmDiagMarginMode()` ) \n
            //!< or \ref TDigPrp::u8DcPerOff and \ref TDigPrp::u16OffCurrent to be greater than 0. 

            DM_DIG_5X_FD                        //!< [2] 4 - Deviation of pwm frequenz <b>TTC5X
        };
        #define DM_DIG_A_FOP DM_DIG_5X_FD       //!< [2] 4 - Redefine
        //! DIG_HLS -> MASTERTYPE_DIG_A_HLS_LFB & DIG_HLS_TYPE0_STD option <b>TTC5X
        enum
        {
            DM_DIG_5X_HLS_OL,                   //!< [0]  1 - Open circuit <b>TTC5X
            DM_DIG_5X_HLS_HSP,                  //!< [1]  2 - High side short circuit to power <b>TTC5X
            DM_DIG_5X_HLS_HSG,                  //!< [2]  4 - High side short circuit to ground <b>TTC5X
            DM_DIG_5X_HLS_LSP,                  //!< [3]  8 - Low side short circuit to power <b>TTC5X
            DM_DIG_5X_HLS_LSG,                  //!< [4] 16 - Low side short circuit to ground <b>TTC5X
            DM_DIG_5X_HLS_MM,                   //!< [5] 32 - Mini-Modul error <b>TTC5X
            DM_DIG_CNT_MAX                      //!< [6] Max
        };
    #endif

    #ifdef COMPILER_SWITCH_FAM_TTC7X

        //! DIG -> TYPE
        typedef enum
        {
           DIG_TYPE0_DOU,                       //!< 0 - Digital Output
           DIG_TYPE1_PWM_CF,                    //!< 1 - PWM with Current Feedback
           DIG_TYPE2_PWM_DF,                    //!< 2 - PWM with Digital Feedback
           DIG_TYPE3_PWM_VF,                    //!< 3 - PWM with Voltage Feedback
           DIG_TYPE4_PWM_DF_VF                  //!< 4 - Dual PWM Pin1=Digital Feedback, Pin2=Voltage Feedback
        }EDigTyp;

        //! DIG -> MASTER_TYPE2_DIG_VER_B option <b>TTC7X
        enum
        {
            DM_DIG_7X_OL,                       //!< [0] 1 - Open circuit <b>TTC7X
            DM_DIG_7X_SP,                       //!< [1] 2 - Short circuit to power <b>TTC7X
            DM_DIG_7X_SG,                       //!< [2] 4 - Short circuit to ground <b>TTC7X

            //!< @attention TYPEx_PWM \n
            //!< @attention Requires either diagnostic margin to be enabled (See `eCoreInstallPwmDiagMarginMode()` ) \n
            //!< or \ref TDigPrp::u8DcPerOff and \ref TDigPrp::u16OffCurrent to be greater than 0. 

            DM_DIG_7X_INT,                      //!< [3] 8 - Intern <b>TTC7X
            DM_DIG_CNT_MAX                      //!< [4] Max
        };
    #endif

    #ifdef COMPILER_SWITCH_FAM_TTC5XX

        //! DIG -> TYPE
        typedef enum
        {
           DIG_TYPE0_DOU,                       //!< 0 - Digital Output
           DIG_TYPE1_PWM,                       //!< 1 - PWM Output
           DIG_TYPE2_PWM_CF                     //!< 2 - PWM with Current Feedback
        }EDigTyp;

        //! DIG -> MASTER_TYPE2_DIG_VER_B option <b>TTC5XX
        enum
        {
            DM_DIG_5XX_OL,                      //!< [0] 1 - Open circuit <b>TTC5XX
            DM_DIG_5XX_SP,                      //!< [1] 2 - Short circuit to power <b>TTC5XX
            DM_DIG_5XX_SG,                      //!< [2] 4 - Short circuit to ground <b>TTC5XX

            //!< @attention TYPEx_PWM \n
            //!< @attention Requires either diagnostic margin to be enabled (See `eCoreInstallPwmDiagMarginMode()` ) \n
            //!< or \ref TDigPrp::u8DcPerOff and \ref TDigPrp::u16OffCurrent to be greater than 0. 

            DM_DIG_5XX_INT,                     //!< [3] 8 - Intern / Pin Protection <b>TTC5XX
            DM_DIG_CNT_MAX                      //!< [4] Max
        };
    #endif

    //--------------------------------------------------------------------------------------------------
    //! @brief      Digital status
    //! @enum       EDigSta
    //--------------------------------------------------------------------------------------------------
    typedef enum
    {
        DIG_STA_OFF,                          //!< 0 - OFF
        DIG_STA_ON,                           //!< 1 - ON
        DIG_STA_ERR,                          //!< 2 - ERROR
        DIG_STA_UNDEF,                        //!< 3 - UNDEF
        DIG_STA_SAFESTATE,                    //!< 4 - Ecu is in 'safe state' (Dig-Pin is off)
        DIG_STA_SHUTOFF                       //!< 5 - Pin group is off       (Dig-Pin is off - only the diagnose peak is aktiv)

    }EDigSta;

// CONFIGURATION STRUCTURE =========================================================================

    //! Digital valve Propetie
    typedef struct
    {
        // Properties for pin type: PWM (DIG_TYPE1_PWM & DIG_TYPE2_PWM_CF)
        TUint16    u16Freq;                    //!< [Hz]       - PWM frequency
        TDbLink    tDbFreq;                    //!< [Hz]       - PWM frequency
        TUint16    u16CoilRes;                 //!< [1/10 Ohm] - (Type: DIG_HLS Coil Resistance
        TDbLink    tDbCoilRes;                 //!< [1/10 Ohm] - (Type: DIG_HLS Coil Resistance
        // Properties DIG_TYPE1_PWM
        TUint8     u8DcPerOff;                 //!< [%]        - (Type: DIG-PWM) OFF Duty Cycle
        TDbLink    tDbDcPerOff;                //!< [%]        - (Type: DIG-PWM) OFF Duty Cycle
        TUint8     u8DcPerOn;                  //!< [%]        - (Type: DIG-PWM) ON  Duty Cycle
        TDbLink    tDbDcPerOn;                 //!< [%]        - (Type: DIG-PWM) ON  Duty Cycle
        // Properties DIG_TYPE2_PWM_CF
        TUint16    u16OffCurrent;              //!< [1/10 mA]  - (Type: DIG_HLS) OFF Maximum Current
        TDbLink    tDbOffCurrent;              //!< [1/10 mA]  - (Type: DIG_HLS) OFF Maximum Current
        TUint16    u16OnCurrent;               //!< [1/10 mA]  - (Type: DIG_HLS) ON Diagnose Current
        TDbLink    tDbOnCurrent;               //!< [1/10 mA]  - (Type: DIG_HLS) ON Diagnose Current
    }TDigPrpCfg;

    //! Configuration of digital vale objects
    typedef struct
    {
        // Common
        TChar      achName[BLO_NAME_STR_LEN];  //!< [STR] - Block Name
        /*!
        \htmlonly
        <img src="BloDigEBloProcTable.png" width="700" alt="into", align="right">
        \endhtmlonly
        <blockquote style="width:40%;">
        <table> <tr><th>eBloProc        </th><th>Description</th></tr>
                <tr><td>\b BLO_RELEASE      </td><td>library block is working (standard functionality)</td></tr>
                <tr><td>\b BLO_LOCKED       </td><td>library block is locked  (not functioning - no error detection, but in RAM available, in+outs frozen)</td></tr>
                <tr><td>\b BLO_FREEZE_INP   </td><td>library block inputs  are frozen \n -> errors are inactive\n -> input value stays constant and produces the output with the block routine</td></tr>
                <tr><td>\b BLO_FREEZE_OUT   </td><td>library block outputs are frozen \n -> errors are active\n -> the output is constant no matter of the input</td></tr>
                <tr><td>\b BLO_NOT_INIT </td><td>library block not initialized</td></tr>
                <tr><td>\b BLO_NA           </td><td>library block is not applicable (no RAM for state variables allocated)</td></tr>
        </table>
        <table> <tr><td>                    </td><td align="center"><b>Input Block</b>                                      </td><td align="center"><b>Output Block</b></td></tr>
                <tr><td>\b BLO_FREEZE_INP   </td><td>
                                                    - the block calculation is turned off\n
                                                    - the output remains constant\n
                                                    - error detection according to the HW pin is still functional</td><td>
                                                                                                                            - input signal is hold constant\n
                                                                                                                            - output is calculated with block routine\n
                                                                                                                            - error detection according to the HW pin is active </td></tr>
                <tr><td>\b BLO_FREEZE_OUT   </td><td>
                                                        - the input value measured by the HW pin is now a constant\n
                                                        - the output gets calculated with the usual block routine\n
                                                        - error detection according to the HW pin is not functional</td><td>
                                                                                                                            - the output at the HW pin is put to a constant value\n
                                                                                                                            - error detection according to the HW pin is deactivated\n\n\n</td></tr>
        </table>
        </blockquote>
        */
        EBloStatus eBloProc;                   //!< [ENU] - Block Process
        // Fixed settings
        EDigTyp    eTyp;                       //!< [DEF] - Specific Valve Type
        #ifdef COMPILER_SWITCH_FAM_TTC5XX
        TUint16    u16Dt;                      //!< [ms] Cycle call time / delta T
        /*!<
        The cycle call time is a time period between block calculation / execution. Usually it
        should be based on controller cycle time, which can be found in ECU settings in "Project
        Definition Tool"(PDT) or in automatically generated code files Cfg_Ecu.c -->
        `gEcu_tSys.tSil.u16EcuTaskTime`.
        It will be used as a sample time (delta T) for the internal PID-Controller.
         */
        #endif
        // Hardware I/O definitions
        TBoolean   boPinConnected;             //!< [DEF] - Pin Permanent Connected
        EPin       aePin[2];                   //!< [ENU] - Pin (Cfg-Idx)
        // Properties
        TDigPrpCfg  tPrpCfg;                   //!< [STU] - Properties
        // All Errors
        TUint8     u8ErrCnt;                   //!< [DEF] - Actual error count
        TErrCfgFea atErrFea[DM_DIG_CNT_MAX];   //!< [STU] - Error Number Configurations
    } TDigCfg;

// INPUT/OUTPUT STRUCTURE ==========================================================================

    //! Properties of digital valve
    typedef struct
    {
        // Properties for pin type: PWM
        TUint16    u16Freq;                   //!< [Hz]       - PWM frequency
        TUint16    u16CoilRes;                //!< [1/10 Ohm] - (Type: DIG_HLS Coil Resistance
        // Properties DIG_PWM
        TUint8     u8DcPerOff;                //!< [%]        - (Type: DIG-PWM) OFF Duty Cycle
        TUint8     u8DcPerOn;                 //!< [%]        - (Type: DIG-PWM) ON  Duty Cycle
        // Properties DIG_PWM_HLS
        TUint16    u16OffCurrent;             //!< [1/10 mA]  - (Type: DIG_HLS) OFF Maximum Current
        TUint16    u16OnCurrent;              //!< [1/10 mA]  - (Type: DIG_HLS) ON Diagnose Current
    }TDigPrp;

   //! INPUT SUB-BLOCK
    typedef struct
    {
        EBloStatus  eBehProc;       //!< [ENU] - Block Process Status Options
        TBehErrCntl tBehErrCntl;    //!< [STU] - Error control behavior
        TBoolean    boCom;          //!< [DEF] - Command signal
        TBoolean    boPresSwt;      //!< [DEF] - Pressure Switch
        TBoolean    boRelay;        //!< [DEF] - Relay Switch
        TBoolean    boLockErrTest;  //!< [DEF] - Lock Hardware Error Release Tests
        #ifdef COMPILER_SWITCH_FAM_TTC5XX
        TBoolean    boRslOlSp;      //!< [boo] "Resolve open load / short to power"
        /*!<
        - `FALSE` - the main PWM driver (`ADC_PWM_DC`) is used to control an output. \n
          With this option a controller can not differentiate if a "short circuit to power" or an
          "open load" is detected so the detection method of double error `DM_OUTPRO_OL_SP` is
          activated.
        - `TRUE` - the secondary PWM driver (`DAC_PWM_DC_RESOLVE_OPEN_SCPOW`) is used to control
          an output. \n With this option a controller can differentiate between a "short circuit
          to power" and an "open load". But if one of them is once detected on a pin then the pin
          becomes completely inactive. The pin is available only after the controller restart.

        \warning
        If the pin of the block is configured as safety pin then the debounce time of "open load" (OL)
        and "short to power" (SP) should be set to maximum 80 ms. If it will be longer, than the both
        errors (OL and SP) will be detected.

        The parameter is set to `FALSE` by default.\n
         */
        #endif
    } TDigInp;

    //! OUTPUT SUB-BLOCK
    typedef struct
    {
        EBloStatus  eBehProcSta;    //!< [ENU]   - Block process status options
        EPinStatus  ePinSta;        //!< [ENU]   - Actual status of high-side pin
        TBehErrSta  tBehErrSta;     //!< [STU]   - Error status behavior
        EDigSta     eValSta;        //!< [ENU]   - State of valve
        TUint16     u16PwmDc;       //!< [num]   - Actual duty cycle
        TUint16     u16Ia;          //!< [mA/10] - Actual current
        TUint16     u16Ua;          //!< [mV]    - Actual voltage
    } TDigOut;

    //! ADRESS SUB-BLOCK
    typedef struct
    {
        const TDigCfg* cptCfg;       //!< [STU] - Configuration structure
        TVoid*         pvObj;        //!< [STU] - Pointer to the private object
        TUint16        u16Stamp;     //!< Registration stamp
    }TDigAdr;

    //! BLOCK
    typedef struct
    {
        TDigInp   tInp;             //!< [STU] - Input vector
        TDigOut   tOut;             //!< [STU] - Output vector
        TDigPrp   tPrp;             //!< [STU] - Properties vector
        TDigAdr   tXAdr;            //!< [STU] - Private Address Information
    } TBloDig;


    // LIBRARY PROTOTYPES ==============================================================================

    //--------------------------------------------------------------------------------------------------
    //! @brief      Create the Dig-Block  (*** need if the block don't create with the PDT ***)
    //! @param[in]  ptBlo          - Pointer block
    //! @param[in]  cptCfg         - Pointer to the config struct
    //! @retval     R_OKAY         - Functions execute without error
    //! @retval     R_NULL_POINTER - Null Pointer
    //! @retval     R_MEMORY       - Out of memory
    //! @retval     R_NOT_REGISTRY - Block not registered
    //--------------------------------------------------------------------------------------------------
     extern ERetVal eBloDigCreate( TBloDig* ptBlo, const TDigCfg* cptCfg );

     //--------------------------------------------------------------------------------------------------
    //! @brief      Initialization function for ERR-Block Interface (*** need if the block don't create with the PDT ***)
    //! @param[in]  ptBlo          - Pointer to Block
    //! @retval     R_OKAY         - Functions execute without error
    //! @retval     R_NULL_POINTER - Null Pointer
    //! @retval     R_ADDRESS      - Wrong block adresse
    //! @retval     R_NOT_REGISTRY - Block not registered
    //! @retval     R_DB_LIST      - List-Index out of range
    //! @retval     R_DB_VAR       - Variable-Index out of range
    //! @retval     R_DB_DIM       - Array-Index out of range
    //! @retval     R_SUPPORT      - no Variablen-Funktion supported
    //! @retval     R_INCONSISTENT - DB-List is inconsistent
    //! @retval     R_PARAMETER    - eVarTyp don't match with the type in the db-list
    //! @retval     R_SUPPORT      - Don't support an PIN-BLO Pin
   //--------------------------------------------------------------------------------------------------
    extern ERetVal eBloDigInit( TBloDig* ptBlo );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Create and Initialization function for VVI-Block Interface (*** need if the block create with the PDT ***)
    //! @param[in]  pvBlo          - Pointer to output block sturcture
    //! @retval     R_OKAY         - Functions execute without error
    //! @retval     R_NULL_POINTER - Null Pointer
    //! @retval     R_ADDRESS      - Wrong block adresse
    //! @retval     R_NOT_REGISTRY - Block not registered
    //--------------------------------------------------------------------------------------------------
    extern ERetVal eBloDigCreateInitRegistry( TVoid *pvBlo );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Block Dig Version information
    //! @retval     *cptVer - Pointer of Versions informatio
    //--------------------------------------------------------------------------------------------------
    const TVerChapCom *cptBloDigVersionsInfo( TVoid );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Block Dig Version check
    //! @retval     TRUE   - is correct
    //! @retval     FALSE  - is incorrect
    //--------------------------------------------------------------------------------------------------
    extern TBoolean boBloDigVersionCheck( TVoid );

    //--------------------------------------------------------------------------------------------------
    //! @brief          Digital value Block Function
    //! @param[in,out]  ptBlo - pointer to output block sturcture
    //! @retval         R_OKAY         - Functions execute without error
    //! @retval         R_NULL_POINTER - Null Pointer
    //! @retval         R_ADDRESS      - Wrong block adresse
    //! @retval         R_NOT_REGISTRY - Block not registered
    //! @retval         R_DB_LIST      - List-Index out of range
    //! @retval         R_DB_VAR       - Variable-Index out of range
    //! @retval         R_DB_DIM       - Array-Index out of range
    //! @retval         R_SUPPORT      - no Variablen-Funktion supported
    //! @retval         R_INCONSISTENT - DB-List is inconsistent
    //! @retval         R_PARAMETER    - eVarTyp don't match with the type in the db-list
    //--------------------------------------------------------------------------------------------------
    extern ERetVal eBloDig( TBloDig* ptBlo );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Get the Error Status on a specified Bit-Position
    //! @param[in]  ptBlo     - [PNT]   Pointer to Block
    //! @param[in]  u8BitPos  - [Index] Bitnumber 0-7
    //! @retval     OKAY      - [BO]    Error State of the specific Bit-Position
    //! @retval     ERROR     - [BIT]   If wrong ptBlo-Addr, return value is '0'
    //--------------------------------------------------------------------------------------------------
    extern TBoolean boBloDigGetErrStaBit( TBloDig* ptBlo, TUint8 u8BitPos );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Get the sum Error Status Information
    //! @param[in]  ptBlo   - [PNT] Pointer to Block
    //! @retval     OKAY    - [BIT] Error State Bit Coded
    //! @retval     ERROR   - [BIT] If wrong ptBlo-Addr, return value is '0'
    //--------------------------------------------------------------------------------------------------
    extern TUint16 u16BloDigGetErrStaAll( TBloDig* ptBlo );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Get the Error Event on a specified Bit-Position
    //! @param[in]  ptBlo     - [PNT]   Pointer to Block
    //! @param[in]  u8BitPos  - [Index] Bitnumber 0-7
    //! @param[in]  boDetect  - [DEF]   TRUE = the Detect-Bit-Event, FALSE = the Delete-Bit-Event
    //! @retval     OKAY      - [BO]    Error State of the specific Bit-Position
    //! @retval     ERROR     - [BO]    If wrong ptBlo-Addr, return value is '0'
    //--------------------------------------------------------------------------------------------------
    extern TBoolean boBloDigGetErrEveBit( TBloDig* ptBlo, TBoolean boDetect, TUint8 u8BitPos );

    //--------------------------------------------------------------------------------------------------
    //! @brief      Get the Error Event on a specified Bit-Position
    //! @param[in]  ptBlo     - [PNT] Pointer to Block
    //! @param[in]  boDetect  - [DEF] TRUE = the Detect-Bit-Event, FALSE = the Delete-Bit-Event
    //! @retval     OKAY      - [BIT] Error State Bit Coded
    //! @retval     ERROR     - [BIT] If wrong ptBlo-Addr, return value is '0'
    //--------------------------------------------------------------------------------------------------
    extern TUint16 u16BloDigGetErrEveAll( TBloDig* ptBlo, TBoolean boDetect );

    //--------------------------------------------------------------------------------------------------
    //! @brief      For the pure 'PWM'-Mode it is possible to set a Off-Ramp and a ON-Ramp
    //!
    //! @note       The u8DcPerOff-Point will be hit after the time u8DcPerOffDt*5 has passed.
    //! @note       The u8DcPerOn-Point will be hit after the time u8DcPerOnDt*5 has passed.
    //! @note       Method must be used before run phase (`vAppRun()`).
    //!
    //!
    //! @param[in]  ptBlo          - [PNT] Pointer to Block
    //! @param[in]  u8Dt           - [ms] Time between two calls of `eBloDig()`
    //! @param[in]  u16DcPerOffDt  - [ms] Off-Time-Ramp \n
    //!                                   Valid value range: [u8Dt,1000] \n
    //!                                   Must be multiple of u8Dt \n
    //!
    //! @param[in]  u16DcPerOnDt   - [ms] On-Time-Ramp \n
    //!                                   Valid value range: [u8Dt,1000] \n
    //!                                   Must be multiple of u8Dt \n
    //! @retval     R_OKAY         - Is fine
    //! @retval     R_NULL_POINTER - Null Pointer
    //! @retval     R_ADDRESS      - Wrong Block address
    //! @retval     R_MEMORY       - No more memory is available
    //! @retval     R_NOT_REGISTRY - Block not registered
    //! @retval     R_RANGE
    //!     - u16DcPerOffDt / u16DcPerOnDt not in range [u8Dt,1000]
    //!     - u16DcPerOffDt / u16DcPerOnDt not a multiple of u8Dt
    //--------------------------------------------------------------------------------------------------
    extern ERetVal eBloDigDcPerRamp( TBloDig* ptBlo, TUint8 u8Dt,  TUint16 u16DcPerOffDt, TUint16 u16DcPerOnDt );

#endif
