//**************************************************************************************************
//! @crc        4281392112
//! @file       Cfg_LibRegistry.h
//! @brief      Generate by: HYDAC Controller Project - Code Builder Tool Chain
//! @ecu        TTC580
//! @dll        1.2.7 (Build: 080)
//! @dll itf    1.7.0
//! @build      2023-04-03 16:35:10
//! @Match      07-04-01-04
//! @PDT        2.11.72.172
//! @PdtProjVer 0.0.0
//! @created    2025-04-18 16:40:50   HYDAC/HCP-CC
//**************************************************************************************************

#ifndef __CFGLIBREGISTRY__
#define __CFGLIBREGISTRY__

//! Enum type defines for block types
typedef enum
{

    // block's
    BLO_PRO,                                                //!< 00 - Proportional PWM output
    BLO_DIG,                                                //!< 01 - Block "Digital Output"

    // customer block's
    BLO_INRESIST,                                           //!< 02 - Single Resistive Input
    BLO_SWINO,                                              //!< 03 - Switch Normally Open
    BLO_INCURDBL,                                           //!< 04 - Double Current Input
    BLO_INCUR,                                              //!< 05 - Current Input
    BLO_OUTVOLTPRO,                                         //!< 06 - OutVoltPro

    BLO_LIB_MAX,
    BLO_LIB_NA=-1

} EBloTyp;

//! Enum type defines for signal types
typedef enum
{
    // customer signal's
    SIG_DBO,                                                //!< 00 - SigDbo
    SIG_INANADBL,                                           //!< 01 - SigInAnaDbl
    SIG_LUT,                                                //!< 02 - SigLut
    SIG_PID,                                                //!< 03 - SigPid
    SIG_RAMP,                                               //!< 04 - SigRamp
    SIG_SWIDBL,                                             //!< 05 - SigSwiDbl
    SIG_TRIGGER,                                            //!< 06 - SigTrigger

    SIG_LIB_MAX,
    SIG_LIB_NA=-1

} ESigTyp;


#endif // __CFGLIBREGISTRY__

