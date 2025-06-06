//**************************************************************************************************
/*!
@file       ItfCoreBoardBasic.h
@brief	    Basic types needed for Board Interface
@date       17.01.2020
@author     HYDAC/THU
*/
//**************************************************************************************************

#ifndef __ITFCOREBOARDBASIC__
   #define __ITFCOREBOARDBASIC__

    #include <autoconfig.h>
    #include <ItfTypes.h>

    //! PIN possibles configuration types from PDT
    enum
    {
        _PINTYP_NA        =  0,    //!< Type: [-]      Not available
        _PINTYP_DIN       =  1,    //!< Type: [0/1]    Digital input
        _PINTYP_VIN       =  2,    //!< Type: [mV]     Voltage input
        _PINTYP_RES       =  3,    //!< Type: [Ohm]    Resistive configuration
        _PINTYP_CIN       =  4,    //!< Type: [µA]     Current input
        _PINTYP_FIN       =  5,    //!< Type: [Hz]     Frequency input
        _PINTYP_PUL       =  6,    //!< Type: [µs]     Read pulse value input
        _PINTYP_CNT       =  7,    //!< Type: [cnt]    Counter input
        _PINTYP_CPX       =  8,    //!< Type: [STU]    Complex input
        _PINTYP_INC       =  9,    //!< Type: [cnt]    Incremental input with 2 pins
        _PINTYP_DOU       = 10,    //!< Type: [0/1]    Digital output
        _PINTYP_PWM       = 11,    //!< Type: [duty]   PWM output
        _PINTYP_LED       = 12,    //!< Type: [0/1]    LED output
        _PINTYP_PVG       = 13,    //!< Type: [%/100]  Percent of Ubat [1500..8500]
        _PINTYP_VOU       = 14,    //!< Type: [mV]     Voltage output
        _PINTYP_PWM_DUAL  = 15,    //!< Type: [duty]   PWM output dual pins with one low side switch
        _PINTYP_RAW       = 16,    //!< Type: [raw]    Value input
        _PINTYP_PER       = 17,    //!< Type: [%/100]  Value input
        _PINTYP_COU       = 18,    //!< Type: [mA]     Current output
        _PINTYP_RAT       = 19,    //!< Type: [mA]     Ratiometric input Vin/Vcc
        _PINTYP_SIN       = 20,    //!< Type: [1/min]  Motor Speed input
        _PINTYP_PIN       = 21,    //!< Type: [µm]     Valve position input
        _PINTYP_POU       = 22     //!< Type: [µm]     Valve position output
    };

    //! Pin configuration
    typedef enum
    {
        PIN_FIX,                   //!< 0 - FIX PIN (Pin will be installed by Match - pin is only changeable)
        PIN_CHA,                   //!< 1 - Change Pin (Pin can be reinstalled and installed)
        PIN_OPT,                   //!< 2 - Pin can init. by the application - in the APP-INIT-phase
        PIN_BLO                    //!< 3 - Pin setting is inherited from the block
    }EAppPinCfg;

    //! Input/output types
    typedef enum
    {
        ECUTYP_ADC_NA,             //!< 0 Physic Input: Not available
        ECUTYP_ADC_D,              //!< 1 Physic Input: Digital
        ECUTYP_ADC_V,              //!< 2 Physic Input: Voltage
        ECUTYP_ADC_C,              //!< 3 Physic Input: Current
        ECUTYP_ADC_DV,             //!< 4 Physic Input: Digital/Voltage
        ECUTYP_ADC_DVC,            //!< 5 Physic Input: Digital/Voltage
        ECUTYP_ADC_VC,             //!< 6 Physic Input: Voltage/Current
        ECUTYP_ADC_VCR             //!< 7 Physic Input: Voltage/Current/Resistor input
    }EBoardIn;

    //! Pin Options
    typedef enum
    {
        ECUTYP_OUT_NA,             //!<  0 Physic Output: Not available
        ECUTYP_DOU,                //!<  1 Physic Output: Digital (pure output)
        ECUTYP_DOU_FV,             //!<  2 Physic Output: Digital with voltage feedback
        ECUTYP_DOU_FC,             //!<  3 Physic Output: Digital with current feedback
        ECUTYP_DOU_FCV,            //!<  4 Physic Output: Digital with voltage and current feedback
        ECUTYP_PWM,                //!<  5 Physic Output: PWM (pure output)
        ECUTYP_PWM_FV,             //!<  6 Physic Output: PWM with voltage feedback
        ECUTYP_PWM_FC,             //!<  7 Physic Output: PWM with current feedback
        ECUTYP_PVG_VOU,            //!<  8 Physic Output: PVG, VOU,
        ECUTYP_PVG_VOU_DOU_FCV     //!<  9 Physic Output: PVG, VOU, DOU with VIN & CIN Feedback
    }EBoardOut;

    //! Frequency possibility
    typedef enum
    {
        ECUFRQ_NA,                 //!< Frequency: Not available  (FIN,PUL,INC)
        ECUFRQ_PR,                 //!< Frequency: Primitive - simple
        ECUFRQ_CX                  //!< Frequency: Complex
    }EBoardFrq;

    //! Output side possibility
    typedef enum
    {
        ECUHLS_NA,                 //!< Side: not available - is a INPUT-PIN - no driver type
        ECUHLS_HIG,                //!< Side: ONLY high
        ECUHLS_LOW                 //!< Side: ONLY low
    }EBoardHls;

    //! Counter  Mode
    typedef enum
    {
        PINCNT_RISING,             //!< 0 - count on a rising edge
        PINCNT_FALLING,            //!< 1 - count on a falling edge
        PINCNT_BOTH                //!< 2 - count on a both edges
    }EAppPinCnt;

    //! Resistor possibility
    typedef enum
    {
        ECURES_NA,                 //!< Resistor: Not available
        ECURES_FIXUP,              //!< Resistor: Fix "Pull Up"
        ECURES_FIXDO,              //!< Resistor: Fix "Pull Down"
        ECURES_CHAUD               //!< Resistor: Changeable "Pull Down" or "Pull Up"
    }EBoardRes;

    // COMMON
    #define PIN_CFG 0xFFFF               	//!< Pin not configuration

    // for the Pining page
    #define CFG_NA			0xFF      		//!< Configuration is not possible

    #define PINTHR_NA      	(U16_MAX)     	//!< Threshold is not possible

    #define PINFB_NA       	(U8_MAX)      	//!< No feedback PIN

    #define PINPWM_NA      	(U16_MAX)    	//!< PWM is not possible
    #define PINPWM_DFLT  	(U16_MAX-1)     //!< PWM frequency have the default value

#endif // __ITFCOREBOARDBASIC__
