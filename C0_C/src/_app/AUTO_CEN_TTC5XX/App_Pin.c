//**************************************************************************************************
//! @crc        1100546338
//! @file       App_Pin.c
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

#include <ItfCoreBoard.h>

const TAppPin gPin_catApp[PIN_MAX] = 
{
    // Idx  Pin    Map-Opt       Pin Type        Safety        Res Pos          Pin-Thr Low       Pin-Thr Hig       Pin-PWM FB-Idx     Pin-Pwm Freq
    {   0,    0,  PIN_FIX,      PINTYP_NA,      CIO_NA,    PINRES_CFG_NA,                0,                0,                0,                0 },
    {   1,  103,  PIN_FIX,     PINTYP_CIN,      CIO_NA,    PINRES_PULLDO,             5000,            15000,     PINSUPPLY_NA,           CFG_NA },
    {   2,  104,  PIN_FIX,     PINTYP_CIN,      CIO_NA,    PINRES_PULLDO,             5000,            15000,     PINSUPPLY_NA,           CFG_NA },
    {   3,  105,  PIN_FIX,     PINTYP_VIN,      CIO_NA,    PINRES_PULLDO,             2000,             3500,     PINSUPPLY_NA,           CFG_NA },
    {   4,  106,  PIN_FIX,     PINTYP_VIN,      CIO_NA,    PINRES_PULLDO,             2000,             3500,     PINSUPPLY_NA,           CFG_NA },
    {   5,  127,  PIN_FIX,     PINTYP_CIN,      CIO_NA,    PINRES_PULLDO,             5000,            15000,     PINSUPPLY_NA,           CFG_NA },
    {   6,  128,  PIN_FIX,     PINTYP_VIN,      CIO_NA,    PINRES_PULLDO,             2000,             3500,     PINSUPPLY_NA,           CFG_NA },
    {   7,  129,  PIN_FIX,     PINTYP_CIN,      CIO_NA,    PINRES_PULLDO,             5000,            15000,     PINSUPPLY_S0,           CFG_NA },
    {   8,  130,  PIN_FIX,     PINTYP_VIN,      CIO_NA,    PINRES_PULLDO,             2000,             3500,     PINSUPPLY_NA,           CFG_NA },
    {   9,  107,  PIN_FIX,     PINTYP_VIN,      CIO_NA,    PINRES_PULLDO,             2000,             3500,     PINSUPPLY_NA,        PINRSL_5V },
    {  10,  131,  PIN_FIX,     PINTYP_VIN,      CIO_NA,    PINRES_PULLDO,             2000,             3500,     PINSUPPLY_NA,        PINRSL_5V },
    {  11,  108,  PIN_FIX,     PINTYP_VIN,      CIO_NA,    PINRES_PULLDO,             2000,             3500,     PINSUPPLY_NA,        PINRSL_5V },
    {  12,  132,  PIN_FIX,     PINTYP_VIN,      CIO_NA,    PINRES_PULLDO,             2000,             3500,     PINSUPPLY_NA,        PINRSL_5V },
    {  13,  109,  PIN_FIX,     PINTYP_VIN,      CIO_NA,    PINRES_PULLDO,             2000,             3500,     PINSUPPLY_NA,        PINRSL_5V },
    {  14,  133,  PIN_FIX,     PINTYP_VIN,      CIO_NA,    PINRES_PULLDO,             2000,             3500,     PINSUPPLY_NA,        PINRSL_5V },
    {  15,  110,  PIN_FIX,     PINTYP_VIN,      CIO_NA,    PINRES_PULLDO,             2000,             3500,     PINSUPPLY_NA,        PINRSL_5V },
    {  16,  134,  PIN_FIX,     PINTYP_VIN,      CIO_NA,    PINRES_PULLDO,             2000,             3500,     PINSUPPLY_NA,        PINRSL_5V },
    {  17,  111,  PIN_FIX,     PINTYP_VIN,      CIO_NA,    PINRES_PULLDO,             2000,             3500,     PINSUPPLY_NA,        PINRSL_5V },
    {  18,  135,  PIN_FIX,     PINTYP_VIN,      CIO_NA,    PINRES_PULLDO,             2000,             3500,     PINSUPPLY_NA,        PINRSL_5V },
    {  19,  112,  PIN_FIX,     PINTYP_VIN,      CIO_NA,    PINRES_PULLDO,             2000,             3500,     PINSUPPLY_NA,        PINRSL_5V },
    {  20,  136,  PIN_FIX,     PINTYP_VIN,      CIO_NA,    PINRES_PULLDO,             2000,             3500,     PINSUPPLY_NA,        PINRSL_5V },
    {  21,  113,  PIN_FIX,     PINTYP_VIN,      CIO_NA,    PINRES_PULLDO,             2000,             3500,     PINSUPPLY_NA,        PINRSL_5V },
    {  22,  137,  PIN_FIX,     PINTYP_VIN,      CIO_NA,    PINRES_PULLDO,             2000,             3500,     PINSUPPLY_NA,        PINRSL_5V },
    {  23,  114,  PIN_FIX,     PINTYP_VIN,      CIO_NA,    PINRES_PULLDO,             2000,             3500,     PINSUPPLY_NA,        PINRSL_5V },
    {  24,  138,  PIN_FIX,     PINTYP_VIN,      CIO_NA,    PINRES_PULLDO,             2000,             3500,     PINSUPPLY_NA,        PINRSL_5V },
    {  25,  115,  PIN_BLO,     PINTYP_CPX,      CIO_NA,        PINRES_NA,      PINTHR_DFLT,      PINTHR_DFLT,     PINSUPPLY_NA,           CFG_NA },
    {  26,  139,  PIN_FIX,     PINTYP_VIN,      CIO_NA,    PINRES_PULLDO,             2000,             3500,     PINSUPPLY_NA,           CFG_NA },
    {  27,  116,  PIN_BLO,     PINTYP_CPX,      CIO_NA,        PINRES_NA,      PINTHR_DFLT,      PINTHR_DFLT,     PINSUPPLY_NA,           CFG_NA },
    {  28,  140,  PIN_FIX,     PINTYP_VIN,      CIO_NA,    PINRES_PULLDO,             2000,             3500,     PINSUPPLY_NA,           CFG_NA },
    {  29,  117,  PIN_FIX,     PINTYP_VIN,      CIO_NA,        PINRES_NA,             2000,             3500,     PINSUPPLY_NA,           CFG_NA },
    {  30,  141,  PIN_FIX,     PINTYP_VIN,      CIO_NA,    PINRES_PULLDO,             2000,             3500,     PINSUPPLY_NA,           CFG_NA },
    {  31,  122,  PIN_FIX,     PINTYP_VIN,      CIO_NA,        PINRES_NA,             2000,             3500,     PINSUPPLY_NA,           CFG_NA },
    {  32,  146,  PIN_FIX,     PINTYP_VIN,      CIO_NA,        PINRES_NA,             2000,             3500,     PINSUPPLY_NA,           CFG_NA },
    {  33,  123,  PIN_FIX,     PINTYP_VIN,      CIO_NA,    PINRES_PULLDO,             2000,             3500,     PINSUPPLY_NA,           CFG_NA },
    {  34,  147,  PIN_FIX,     PINTYP_VIN,      CIO_NA,        PINRES_NA,             2000,             3500,     PINSUPPLY_NA,           CFG_NA },
    {  35,  124,  PIN_FIX,     PINTYP_VIN,      CIO_NA,        PINRES_NA,             2000,             3500,     PINSUPPLY_NA,           CFG_NA },
    {  36,  148,  PIN_FIX,     PINTYP_VIN,      CIO_NA,        PINRES_NA,             2000,             3500,     PINSUPPLY_NA,           CFG_NA },
    {  37,  153,  PIN_FIX,     PINTYP_DOU,      CIO_NA,    PINRES_PULLUP,           CFG_NA,           CFG_NA,           CFG_NA,      PINPWM_DFLT },
    {  38,  177,  PIN_FIX,     PINTYP_DOU,      CIO_NA,    PINRES_PULLUP,           CFG_NA,           CFG_NA,           CFG_NA,      PINPWM_DFLT },
    {  39,  156,  PIN_FIX,     PINTYP_DOU,      CIO_NA,    PINRES_PULLUP,           CFG_NA,           CFG_NA,           CFG_NA,      PINPWM_DFLT },
    {  40,  180,  PIN_CHA,      PINTYP_NA,      CIO_NA,    PINRES_PULLUP,           CFG_NA,           CFG_NA,           CFG_NA,      PINPWM_DFLT },
    {  41,  159,  PIN_FIX,     PINTYP_DOU,      CIO_NA,    PINRES_PULLUP,           CFG_NA,           CFG_NA,           CFG_NA,      PINPWM_DFLT },
    {  42,  183,  PIN_CHA,      PINTYP_NA,      CIO_NA,    PINRES_PULLUP,           CFG_NA,           CFG_NA,           CFG_NA,      PINPWM_DFLT },
    {  43,  186,  PIN_FIX,     PINTYP_DOU,      CIO_NA,    PINRES_PULLUP,           CFG_NA,           CFG_NA,           CFG_NA,      PINPWM_DFLT },
    {  44,  162,  PIN_FIX,     PINTYP_DOU,      CIO_NA,    PINRES_PULLUP,           CFG_NA,           CFG_NA,           CFG_NA,      PINPWM_DFLT },
    {  45,  189,  PIN_FIX,     PINTYP_DOU,      CIO_NA,    PINRES_PULLUP,           CFG_NA,           CFG_NA,           CFG_NA,      PINPWM_DFLT },
    {  46,  165,  PIN_FIX,     PINTYP_DOU,      CIO_NA,    PINRES_PULLUP,           CFG_NA,           CFG_NA,           CFG_NA,      PINPWM_DFLT },
    {  47,  192,  PIN_FIX,     PINTYP_DOU,      CIO_NA,    PINRES_PULLUP,           CFG_NA,           CFG_NA,           CFG_NA,      PINPWM_DFLT },
    {  48,  168,  PIN_FIX,     PINTYP_DOU,      CIO_NA,    PINRES_PULLUP,           CFG_NA,           CFG_NA,           CFG_NA,      PINPWM_DFLT },
    {  49,  195,  PIN_FIX,     PINTYP_DOU,      CIO_NA,    PINRES_PULLUP,           CFG_NA,           CFG_NA,           CFG_NA,      PINPWM_DFLT },
    {  50,  171,  PIN_FIX,     PINTYP_DOU,      CIO_NA,    PINRES_PULLUP,           CFG_NA,           CFG_NA,           CFG_NA,      PINPWM_DFLT },
    {  51,  154,  PIN_FIX,     PINTYP_DOU,      CIO_NA,    PINRES_PULLUP,           CFG_NA,           CFG_NA,           CFG_NA,      PINPWM_DFLT },
    {  52,  178,  PIN_CHA,      PINTYP_NA,      CIO_NA,    PINRES_PULLUP,           CFG_NA,           CFG_NA,           CFG_NA,      PINPWM_DFLT },
    {  53,  157,  PIN_CHA,      PINTYP_NA,      CIO_NA,    PINRES_PULLUP,           CFG_NA,           CFG_NA,           CFG_NA,      PINPWM_DFLT },
    {  54,  181,  PIN_CHA,      PINTYP_NA,      CIO_NA,    PINRES_PULLUP,           CFG_NA,           CFG_NA,           CFG_NA,      PINPWM_DFLT },
    {  55,  160,  PIN_FIX,     PINTYP_DOU,      CIO_NA,    PINRES_PULLUP,           CFG_NA,           CFG_NA,           CFG_NA,      PINPWM_DFLT },
    {  56,  184,  PIN_FIX,     PINTYP_DOU,      CIO_NA,    PINRES_PULLUP,           CFG_NA,           CFG_NA,           CFG_NA,      PINPWM_DFLT },
    {  57,  187,  PIN_FIX,     PINTYP_DOU,      CIO_NA,    PINRES_PULLUP,           CFG_NA,           CFG_NA,           CFG_NA,      PINPWM_DFLT },
    {  58,  163,  PIN_FIX,     PINTYP_DOU,      CIO_NA,    PINRES_PULLUP,           CFG_NA,           CFG_NA,           CFG_NA,      PINPWM_DFLT },
    {  59,  190,  PIN_FIX,     PINTYP_DOU,      CIO_NA,    PINRES_PULLUP,           CFG_NA,           CFG_NA,           CFG_NA,      PINPWM_DFLT },
    {  60,  166,  PIN_FIX,     PINTYP_DOU,      CIO_NA,    PINRES_PULLUP,           CFG_NA,           CFG_NA,           CFG_NA,      PINPWM_DFLT },
    {  61,  193,  PIN_FIX,     PINTYP_DOU,      CIO_NA,    PINRES_PULLUP,           CFG_NA,           CFG_NA,           CFG_NA,      PINPWM_DFLT },
    {  62,  169,  PIN_FIX,     PINTYP_DOU,      CIO_NA,    PINRES_PULLUP,           CFG_NA,           CFG_NA,           CFG_NA,      PINPWM_DFLT },
    {  63,  196,  PIN_FIX,     PINTYP_DOU,      CIO_NA,    PINRES_PULLUP,           CFG_NA,           CFG_NA,           CFG_NA,      PINPWM_DFLT },
    {  64,  172,  PIN_FIX,     PINTYP_DOU,      CIO_NA,    PINRES_PULLUP,           CFG_NA,           CFG_NA,           CFG_NA,      PINPWM_DFLT },
    {  65,  101,  PIN_FIX,     PINTYP_PWM,      CIO_NA,    PINRES_PULLUP,           CFG_NA,           CFG_NA,           CFG_NA,      PINPWM_DFLT },
    {  66,  125,  PIN_FIX,     PINTYP_PWM,      CIO_NA,    PINRES_PULLUP,           CFG_NA,           CFG_NA,           CFG_NA,      PINPWM_DFLT },
    {  67,  150,  PIN_FIX,     PINTYP_DOU,      CIO_NA,    PINRES_PULLUP,           CFG_NA,           CFG_NA,           CFG_NA,      PINPWM_DFLT },
    {  68,  174,  PIN_CHA,      PINTYP_NA,      CIO_NA,    PINRES_PULLUP,           CFG_NA,           CFG_NA,           CFG_NA,      PINPWM_DFLT },
    {  69,  102,  PIN_CHA,      PINTYP_NA,      CIO_NA,    PINRES_PULLUP,           CFG_NA,           CFG_NA,           CFG_NA,      PINPWM_DFLT },
    {  70,  126,  PIN_FIX,     PINTYP_DOU,      CIO_NA,    PINRES_PULLUP,           CFG_NA,           CFG_NA,           CFG_NA,      PINPWM_DFLT },
    {  71,  151,  PIN_CHA,      PINTYP_NA,      CIO_NA,    PINRES_PULLUP,           CFG_NA,           CFG_NA,           CFG_NA,      PINPWM_DFLT },
    {  72,  175,  PIN_FIX,     PINTYP_DOU,      CIO_NA,    PINRES_PULLUP,           CFG_NA,           CFG_NA,           CFG_NA,      PINPWM_DFLT },
    {  73,  149,  PIN_FIX,     PINTYP_DOU,      CIO_NA,        PINRES_NA,      PINTHR_DFLT,      PINTHR_DFLT,     PINSUPPLY_NA,           CFG_NA },
    {  74,  173,  PIN_FIX,     PINTYP_DOU,      CIO_NA,        PINRES_NA,      PINTHR_DFLT,      PINTHR_DFLT,     PINSUPPLY_NA,           CFG_NA },
    {  75,  152,  PIN_FIX,     PINTYP_DOU,      CIO_NA,        PINRES_NA,      PINTHR_DFLT,      PINTHR_DFLT,     PINSUPPLY_NA,           CFG_NA },
    {  76,  176,  PIN_FIX,     PINTYP_DOU,      CIO_NA,        PINRES_NA,      PINTHR_DFLT,      PINTHR_DFLT,     PINSUPPLY_NA,           CFG_NA },
    {  77,  155,  PIN_FIX,     PINTYP_DOU,      CIO_NA,        PINRES_NA,      PINTHR_DFLT,      PINTHR_DFLT,     PINSUPPLY_NA,           CFG_NA },
    {  78,  179,  PIN_FIX,     PINTYP_DOU,      CIO_NA,        PINRES_NA,      PINTHR_DFLT,      PINTHR_DFLT,     PINSUPPLY_NA,           CFG_NA },
    {  79,  158,  PIN_FIX,     PINTYP_DOU,      CIO_NA,        PINRES_NA,      PINTHR_DFLT,      PINTHR_DFLT,     PINSUPPLY_NA,           CFG_NA },
    {  80,  182,  PIN_FIX,     PINTYP_DOU,      CIO_NA,        PINRES_NA,      PINTHR_DFLT,      PINTHR_DFLT,     PINSUPPLY_NA,           CFG_NA },
    {  81,  251,  PIN_FIX,     PINTYP_DOU,      CIO_NA,    PINRES_PULLUP,      PINTHR_DFLT,      PINTHR_DFLT,     PINSUPPLY_NA,           CFG_NA },
    {  82,  238,  PIN_FIX,     PINTYP_DOU,      CIO_NA,    PINRES_PULLUP,      PINTHR_DFLT,      PINTHR_DFLT,     PINSUPPLY_NA,           CFG_NA },
    {  83,  252,  PIN_FIX,     PINTYP_DOU,      CIO_NA,    PINRES_PULLUP,      PINTHR_DFLT,      PINTHR_DFLT,     PINSUPPLY_NA,           CFG_NA },
    {  84,  239,  PIN_FIX,     PINTYP_DOU,      CIO_NA,    PINRES_PULLUP,      PINTHR_DFLT,      PINTHR_DFLT,     PINSUPPLY_NA,           CFG_NA },
    {  85,  253,  PIN_CHA,      PINTYP_NA,      CIO_NA,    PINRES_PULLUP,      PINTHR_DFLT,      PINTHR_DFLT,     PINSUPPLY_NA,           CFG_NA },
    {  86,  240,  PIN_CHA,      PINTYP_NA,      CIO_NA,    PINRES_PULLUP,      PINTHR_DFLT,      PINTHR_DFLT,     PINSUPPLY_NA,           CFG_NA },
    {  87,  254,  PIN_CHA,      PINTYP_NA,      CIO_NA,    PINRES_PULLUP,      PINTHR_DFLT,      PINTHR_DFLT,     PINSUPPLY_NA,           CFG_NA },
    {  88,  241,  PIN_CHA,      PINTYP_NA,      CIO_NA,    PINRES_PULLUP,      PINTHR_DFLT,      PINTHR_DFLT,     PINSUPPLY_NA,           CFG_NA },
    {  89,  161,  PIN_FIX,     PINTYP_VOU,      CIO_NA,        PINRES_NA,      PINTHR_DFLT,      PINTHR_DFLT,     PINSUPPLY_NA,             1000 },
    {  90,  185,  PIN_FIX,     PINTYP_VOU,      CIO_NA,        PINRES_NA,      PINTHR_DFLT,      PINTHR_DFLT,     PINSUPPLY_NA,             1000 },
    {  91,  188,  PIN_FIX,     PINTYP_DOU,      CIO_NA,        PINRES_NA,      PINTHR_DFLT,      PINTHR_DFLT,     PINSUPPLY_NA,             1000 },
    {  92,  164,  PIN_FIX,     PINTYP_DOU,      CIO_NA,        PINRES_NA,      PINTHR_DFLT,      PINTHR_DFLT,     PINSUPPLY_NA,             1000 },
    {  93,  191,  PIN_FIX,     PINTYP_VOU,      CIO_NA,        PINRES_NA,      PINTHR_DFLT,      PINTHR_DFLT,     PINSUPPLY_NA,             1000 },
    {  94,  167,  PIN_FIX,     PINTYP_DOU,      CIO_NA,        PINRES_NA,      PINTHR_DFLT,      PINTHR_DFLT,     PINSUPPLY_NA,             1000 },
    {  95,  194,  PIN_FIX,     PINTYP_DOU,      CIO_NA,        PINRES_NA,      PINTHR_DFLT,      PINTHR_DFLT,     PINSUPPLY_NA,             1000 },
    {  96,  170,  PIN_FIX,     PINTYP_DOU,      CIO_NA,        PINRES_NA,      PINTHR_DFLT,      PINTHR_DFLT,     PINSUPPLY_NA,             1000 }
};

#ifdef COMPILER_SWITCH_TAR_PC

    TAppPinDftVal gPin_tSim =
    {
        {
                  0,                                        //!< Idx: 0
                  0,                                        //!< Idx: 1
                  0,                                        //!< Idx: 2
                  0,                                        //!< Idx: 3
                  0,                                        //!< Idx: 4
                  0,                                        //!< Idx: 5
                  0,                                        //!< Idx: 6
                  0,                                        //!< Idx: 7
                  0,                                        //!< Idx: 8
                  0,                                        //!< Idx: 9
                  0,                                        //!< Idx: 10
                  0,                                        //!< Idx: 11
                  0,                                        //!< Idx: 12
                  0,                                        //!< Idx: 13
                  0,                                        //!< Idx: 14
                  0,                                        //!< Idx: 15
                  0,                                        //!< Idx: 16
                  0,                                        //!< Idx: 17
                  0,                                        //!< Idx: 18
                  0,                                        //!< Idx: 19
                  0,                                        //!< Idx: 20
                  0,                                        //!< Idx: 21
                  0,                                        //!< Idx: 22
                  0,                                        //!< Idx: 23
                  0,                                        //!< Idx: 24
                  0,                                        //!< Idx: 25
                  0,                                        //!< Idx: 26
                  0,                                        //!< Idx: 27
                  0,                                        //!< Idx: 28
                  0,                                        //!< Idx: 29
                  0,                                        //!< Idx: 30
                  0,                                        //!< Idx: 31
                  0,                                        //!< Idx: 32
                  0,                                        //!< Idx: 33
                  0,                                        //!< Idx: 34
                  0,                                        //!< Idx: 35
                  0,                                        //!< Idx: 36
                  0,                                        //!< Idx: 37
                  0,                                        //!< Idx: 38
                  0,                                        //!< Idx: 39
                  0,                                        //!< Idx: 40
                  0,                                        //!< Idx: 41
                  0,                                        //!< Idx: 42
                  0,                                        //!< Idx: 43
                  0,                                        //!< Idx: 44
                  0,                                        //!< Idx: 45
                  0,                                        //!< Idx: 46
                  0,                                        //!< Idx: 47
                  0,                                        //!< Idx: 48
                  0,                                        //!< Idx: 49
                  0,                                        //!< Idx: 50
                  0,                                        //!< Idx: 51
                  0,                                        //!< Idx: 52
                  0,                                        //!< Idx: 53
                  0,                                        //!< Idx: 54
                  0,                                        //!< Idx: 55
                  0,                                        //!< Idx: 56
                  0,                                        //!< Idx: 57
                  0,                                        //!< Idx: 58
                  0,                                        //!< Idx: 59
                  0,                                        //!< Idx: 60
                  0,                                        //!< Idx: 61
                  0,                                        //!< Idx: 62
                  0,                                        //!< Idx: 63
                  0,                                        //!< Idx: 64
                  0,                                        //!< Idx: 65
                  0,                                        //!< Idx: 66
                  0,                                        //!< Idx: 67
                  0,                                        //!< Idx: 68
                  0,                                        //!< Idx: 69
                  0,                                        //!< Idx: 70
                  0,                                        //!< Idx: 71
                  0,                                        //!< Idx: 72
                  0,                                        //!< Idx: 73
                  0,                                        //!< Idx: 74
                  0,                                        //!< Idx: 75
                  0,                                        //!< Idx: 76
                  0,                                        //!< Idx: 77
                  0,                                        //!< Idx: 78
                  0,                                        //!< Idx: 79
                  0,                                        //!< Idx: 80
                  0,                                        //!< Idx: 81
                  0,                                        //!< Idx: 82
                  0,                                        //!< Idx: 83
                  0,                                        //!< Idx: 84
                  0,                                        //!< Idx: 85
                  0,                                        //!< Idx: 86
                  0,                                        //!< Idx: 87
                  0,                                        //!< Idx: 88
                  0,                                        //!< Idx: 89
                  0,                                        //!< Idx: 90
                  0,                                        //!< Idx: 91
                  0,                                        //!< Idx: 92
                  0,                                        //!< Idx: 93
                  0,                                        //!< Idx: 94
                  0,                                        //!< Idx: 95
                  0,                                        //!< Idx: 96
              12000,                                        //!< Idx: 97
                  1,                                        //!< Idx: 98
                300,                                        //!< Idx: 99
               5000,                                        //!< Idx: 100
               5000,                                        //!< Idx: 101
               5000,                                        //!< Idx: 102
               5000                                         //!< Idx: 103
        }
    };

    const TPinInfo gPinInfo_ctAppPin =
    {
        gPin_catApp,
        NULL,
        &gPin_tSim
    };

#else

    const TPinInfo gPinInfo_ctAppPin =
    {
        gPin_catApp,
        NULL,
        NULL
    };

#endif // COMPILER_SWITCH_TAR_PC

