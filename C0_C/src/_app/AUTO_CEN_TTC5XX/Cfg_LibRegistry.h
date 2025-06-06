//**************************************************************************************************
//! @crc        1589252731
//! @file       Cfg_LibRegistry.h
//! @brief      Generate by: HYDAC Controller Project - Code Builder Tool Chain
//! @ecu        TTC580
//! @dll        1.2.7 (Build: 080)
//! @dll itf    1.7.0
//! @build      2023-04-03 16:35:10
//! @Match      07-04-01-04
//! @PDT        2.11.72.172
//! @PdtProjVer 0.0.0
//! @created    2025-06-04 11:35:59   HYDAC/HCP-CC
//**************************************************************************************************

#ifndef __CFGLIBREGISTRY__
#define __CFGLIBREGISTRY__

//! Enum type defines for block types
typedef enum
{

    // block's
    BLO_DIG,                                                //!< 00 - Block "Digital Output"
    BLO_PRO,                                                //!< 01 - Proportional PWM output

    // customer block's
    BLO_INCUR,                                              //!< 02 - Current Input
    BLO_INFREQ,                                             //!< 03 - Single InFrequency block
    BLO_OUTVOLTPRO,                                         //!< 04 - OutVoltPro
    BLO_SWINO,                                              //!< 05 - Switch Normally Open
    BLO_SWINC,                                              //!< 06 - Switch Normally Closed
    BLO_SWIDBLNONC,                                         //!< 07 - Double switch normally opened and normally closed
    BLO_SWIDBLNCNO,                                         //!< 08 - Double switch normally closed and normally opened

    BLO_LIB_MAX,
    BLO_LIB_NA=-1

} EBloTyp;

//! Enum type defines for signal types
typedef enum
{
    // customer signal's
    SIG_DBO,                                                //!< 00 - SigDbo
    SIG_LUT,                                                //!< 01 - SigLut
    SIG_LUTD,                                               //!< 02 - SigLutd
    SIG_PID,                                                //!< 03 - SigPid
    SIG_RAMP,                                               //!< 04 - SigRamp
    SIG_SWIDBL,                                             //!< 05 - SigSwiDbl
    SIG_TRIGGER,                                            //!< 06 - SigTrigger

    SIG_LIB_MAX,
    SIG_LIB_NA=-1

} ESigTyp;


#endif // __CFGLIBREGISTRY__

