//**************************************************************************************************
//! @crc        3955316417
//! @file       Cfg_LibCustomer.h
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

#ifndef __CFGLIBCUSTOMER__
#define __CFGLIBCUSTOMER__

//Customer Blocks
#include <ItfBloInResist.h> //Single Resistive Input
#include <ItfBloSwiNo.h> //Switch Normally Open
#include <ItfBloPro.h> //Proportional PWM output
#include <ItfBloDig.h> //Block "Digital Output"
#include <ItfBloInCurDbl.h> //Double Current Input
#include <ItfBloInCur.h> //Current Input
#include <ItfBloOutVoltPro.h> //OutVoltPro


//Customer Signal
#include <ItfSigDbo.h> //SigDbo
#include <ItfSigInAnaDbl.h> //SigInAnaDbl
#include <ItfSigLut.h> //SigLut
#include <ItfSigPid.h> //SigPid
#include <ItfSigRamp.h> //SigRamp
#include <ItfSigSwiDbl.h> //SigSwiDbl
#include <ItfSigTrigger.h> //SigTrigger


//Customer Protocol
#include <ItfPtcDmx.h> // Dmx Protocol
#include <ItfPtcMst.h> // MST Protocol (Machine Service Tool)


#endif // __CFGLIBCUSTOMER__

