//**************************************************************************************************
//! @crc        979173170
//! @file       Cfg_LibCustomer.h
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

#ifndef __CFGLIBCUSTOMER__
#define __CFGLIBCUSTOMER__

//Customer Blocks
#include <ItfBloInCur.h> //Current Input
#include <ItfBloInFreq.h> //Single InFrequency block
#include <ItfBloDig.h> //Block "Digital Output"
#include <ItfBloOutVoltPro.h> //OutVoltPro
#include <ItfBloSwiNo.h> //Switch Normally Open
#include <ItfBloPro.h> //Proportional PWM output
#include <ItfBloSwiNc.h> //Switch Normally Closed
#include <ItfBloSwiDblNoNc.h> //Double switch normally opened and normally closed
#include <ItfBloSwiDblNcNo.h> //Double switch normally closed and normally opened


//Customer Signal
#include <ItfSigDbo.h> //SigDbo
#include <ItfSigLut.h> //SigLut
#include <ItfSigLutd.h> //SigLutd
#include <ItfSigPid.h> //SigPid
#include <ItfSigRamp.h> //SigRamp
#include <ItfSigSwiDbl.h> //SigSwiDbl
#include <ItfSigTrigger.h> //SigTrigger


//Customer Protocol
#include <ItfPtcDmx.h> // Dmx Protocol
#include <ItfPtcMst.h> // MST Protocol (Machine Service Tool)


#endif // __CFGLIBCUSTOMER__

