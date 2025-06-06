//==================================================================================================
//! @file MotorElectricRpm.c
//! @brief RPM affectation
//! @see Target for ...
//! @section app
//! @subsection IO
//! @author NEOTEC/FV
//! @created 18.10.2022 NEOTEC/FV
//! copyrights (c) all rights reserved by NEOTEC
//=================================================================================================

#include "MotorElectricRpm.h"

// GLOBAL VARIABLES DECLARATIONS ==================================================================

//-----------------------------------------------------------------------------------------------------
//! @brief MotorElectricRPM
//!
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 18.10.2022 NEOTEC/FV
//!
//! @change
//!
//! @care
//! @todo
//
//
//-----------------------------------------------------------------------------------------------------
TVoid vMotorElectricRpm(TVoid)
{
//--------------------------------------------------------------------
//Calcul du rpm en fonction des mouvements pour le mode electrique
	static TUint16 u16PvgCommand = 0;
	static TInt16 i16RpmPvgDelta = 0;
	static TInt16 i16RpmPvgArrow = 0;
	static TInt16 i16RpmPvgTelescop = 0;
	static TInt16 i16RpmPvgTORs = 0;

	static TUint16 MAX_PVG_THEO_HIGH_50;
	static TUint16 MIN_PVG_THEO_HIGH_50;
	static TUint16 MIN_PVG_THEO_LOW_50;
	static TUint16 MAX_PVG_THEO_LOW_50;

	MAX_PVG_THEO_HIGH_50 = gDb_tRamGeneralC1.u16EcuVoltage * 0.75;
	MIN_PVG_THEO_HIGH_50 = gDb_tRamGeneralC1.u16EcuVoltage * 0.51;//0.55
	MIN_PVG_THEO_LOW_50 = gDb_tRamGeneralC1.u16EcuVoltage * 0.49;//0.45
	MAX_PVG_THEO_LOW_50 = gDb_tRamGeneralC1.u16EcuVoltage * 0.25;

/*i16RpmPvgDelta*/
	u16PvgCommand = gDb_tRamEcuOutputsC1.u16PvgDeltaArmCommand;
	if( u16PvgCommand >= MIN_PVG_THEO_HIGH_50 )
		i16RpmPvgDelta =i16CalcLinear2Dots(u16PvgCommand, MIN_PVG_THEO_HIGH_50, 0,MAX_PVG_THEO_HIGH_50, gDb_tNvParamGreenEffC1.u16ELECTRIC_MOTOR_RPM_PVG);
	else if (u16PvgCommand <= MIN_PVG_THEO_LOW_50 )
		i16RpmPvgDelta =i16CalcLinear2Dots(u16PvgCommand, MIN_PVG_THEO_LOW_50, 0,MAX_PVG_THEO_LOW_50, gDb_tNvParamGreenEffC1.u16ELECTRIC_MOTOR_RPM_PVG);
	else
		i16RpmPvgDelta = 0;

/*i16RpmPvgArrow*/
	u16PvgCommand = gDb_tRamEcuOutputsC1.u16PvgArrowArmCommand;
	if( u16PvgCommand >= MIN_PVG_THEO_HIGH_50 )
		i16RpmPvgArrow =i16CalcLinear2Dots(u16PvgCommand, MIN_PVG_THEO_HIGH_50, 0,MAX_PVG_THEO_HIGH_50, gDb_tNvParamGreenEffC1.u16ELECTRIC_MOTOR_RPM_PVG);
	else if (u16PvgCommand <= MIN_PVG_THEO_LOW_50 )
		i16RpmPvgArrow =i16CalcLinear2Dots(u16PvgCommand, MIN_PVG_THEO_LOW_50, 0,MAX_PVG_THEO_LOW_50, gDb_tNvParamGreenEffC1.u16ELECTRIC_MOTOR_RPM_PVG);
	else
		i16RpmPvgArrow = 0;

/*i16RpmPvgTelescop*/
	u16PvgCommand = gDb_tRamEcuOutputsC1.u16PvgTelescopeArmCommand;
	if( u16PvgCommand >= MIN_PVG_THEO_HIGH_50 )
		i16RpmPvgTelescop =i16CalcLinear2Dots(u16PvgCommand, MIN_PVG_THEO_HIGH_50, 0,MAX_PVG_THEO_HIGH_50, gDb_tNvParamGreenEffC1.u16ELECTRIC_MOTOR_RPM_PVG);
	else if (u16PvgCommand <= MIN_PVG_THEO_LOW_50 )
		i16RpmPvgTelescop =i16CalcLinear2Dots(u16PvgCommand, MIN_PVG_THEO_LOW_50, 0,MAX_PVG_THEO_LOW_50, gDb_tNvParamGreenEffC1.u16ELECTRIC_MOTOR_RPM_PVG);
	else
		i16RpmPvgTelescop = 0;

/*i16RpmPvgTORs*/
	if (gDb_tRamEcuOutputsC1.boSupplyPvgPropEvTorCommand == TRUE)
		i16RpmPvgTORs = gDb_tNvParamGreenEffC1.u16ELECTRIC_MOTOR_RPM_TOR;
	else
		i16RpmPvgTORs = 0;


/*i16RpmMvtsElectricMode*/
	gDb_tRamGreenEffC1.i16RpmMvtsElectricMode = i16RpmPvgDelta + i16RpmPvgArrow + i16RpmPvgTelescop + i16RpmPvgTORs;

	if (gDb_tRamGreenEffC1.i16RpmMvtsElectricMode <=  0) //Aucun mouvements en cours
		gDb_tRamGreenEffC1.i16RpmMvtsElectricMode = 0;
	else if (gDb_tRamGreenEffC1.i16RpmMvtsElectricMode <= gDb_tNvParamGreenEffC1.u16ELECTRIC_MOTOR_RPM_MIN)
		gDb_tRamGreenEffC1.i16RpmMvtsElectricMode = gDb_tNvParamGreenEffC1.u16ELECTRIC_MOTOR_RPM_MIN;
	else if (gDb_tRamGreenEffC1.i16RpmMvtsElectricMode >= gDb_tNvParamGreenEffC1.u16ELECTRIC_MOTOR_RPM_MAX)
		gDb_tRamGreenEffC1.i16RpmMvtsElectricMode = gDb_tNvParamGreenEffC1.u16ELECTRIC_MOTOR_RPM_MAX;


//--------------------------------------------------------------------
//Calcul du rpm en fonction de la temperature du réservoir pour le mode electrique
	if (gDb_tRamEcuInputsC1.i16OilTankTemperatureValue<=gDb_tNvParamGreenEffC1.i16ELECTRIC_MOTOR_COLD_OIL_TEMP)
		gDb_tRamGreenEffC1.boColdOilTankTemperature = TRUE;
	else
		gDb_tRamGreenEffC1.boColdOilTankTemperature = FALSE;

/*boPictoColdOilTankTemperature*/
	if (gDb_tRamGreenEffC1.boColdOilTankTemperature == TRUE && gDb_tRamGeneralC1.boBlinkLow == TRUE)
		gDb_tRamGreenEffC1.boPictoColdOilTankTemperature = TRUE;
	else
		gDb_tRamGreenEffC1.boPictoColdOilTankTemperature = FALSE;

/*i16RpmOilTankTemp*/
	gDb_tRamGreenEffC1.i16RpmOilTankTemp = (TInt16)i32CalcLinear2Dots(gDb_tRamEcuInputsC1.i16OilTankTemperatureValue,
											gDb_tNvParametersC1.i16OutCharNegOilTankTemp , 0,
											gDb_tNvParamGreenEffC1.i16ELECTRIC_MOTOR_COLD_OIL_TEMP, gDb_tNvParamGreenEffC1.u16ELECTRIC_MOTOR_RPM_MAX);
	if (gDb_tRamGreenEffC1.boColdOilTankTemperature == FALSE)
		gDb_tRamGreenEffC1.i16RpmOilTankTemp = 0;
	else if (gDb_tRamGreenEffC1.i16RpmOilTankTemp <= gDb_tNvParamGreenEffC1.u16ELECTRIC_MOTOR_RPM_MIN)
		gDb_tRamGreenEffC1.i16RpmOilTankTemp = gDb_tNvParamGreenEffC1.u16ELECTRIC_MOTOR_RPM_MIN;
	else if (gDb_tRamGreenEffC1.i16RpmOilTankTemp >= gDb_tNvParamGreenEffC1.u16ELECTRIC_MOTOR_RPM_MAX)
		gDb_tRamGreenEffC1.i16RpmOilTankTemp = gDb_tNvParamGreenEffC1.u16ELECTRIC_MOTOR_RPM_MAX;


//------------------------------------------------------------------------------------------
//Calcul du rpm en fonction du PVG de la transmission pour le mode electrique fait dans le C1
	gDb_tRamGreenEffC1.i16RpmTransRailElectricMode = gDb_tRamEcuC1RcvFromC0.i16RpmPvgTransRail;

//--------------------------------------------------------------------
/*i16RpmMotorElectric*/
	//Cas Moteur thermique demarré
	if (gDb_tRamGeneralNeotecC1.u16MotorSpeedJ1939 >=500 //detection moteur thermique on
	|| (gDb_tRamGreenEffC1.boElectricMotorForbidden == TRUE && gDb_tRamGreenEffC1.boReloadWithGeneratorOn == FALSE))
		gDb_tRamGreenEffC1.i16RpmMotorElectric = 0;
	//Cas déplacement en cours
	else if (gDb_tRamEcuC1RcvFromC0.boTranslationMovementIsSolicited == TRUE)
		gDb_tRamGreenEffC1.i16RpmMotorElectric = gDb_tRamGreenEffC1.i16RpmTransRailElectricMode;
	//Cas pas de déplacement en cours huile froide
	else if (gDb_tRamEcuC1RcvFromC0.boTranslationMovementIsSolicited == FALSE
	&& gDb_tRamGreenEffC1.boColdOilTankTemperature == TRUE //Huile froide
	&& gDb_tRamGreenEffC1.i16RpmMvtsElectricMode >0 //Mvts en cours
	&& gDb_tRamGreenEffC1.i16RpmMvtsElectricMode >= gDb_tRamGreenEffC1.i16RpmOilTankTemp)
		gDb_tRamGreenEffC1.i16RpmMotorElectric = gDb_tRamGreenEffC1.i16RpmOilTankTemp;
	//Cas mvts en cours
	else if (gDb_tRamGreenEffC1.i16RpmMvtsElectricMode >0)
		gDb_tRamGreenEffC1.i16RpmMotorElectric = gDb_tRamGreenEffC1.i16RpmMvtsElectricMode;
	//Cas pedale et gachette en poste nacelle //NEW GREEN
	else if (gDb_tRam48XsInputsC1.boDeadManPedal == TRUE
	&& gDb_tRam48XsInputsC1.boGachette == TRUE
	&& gDb_tRamEcuC1RcvFromC0.eSelectedControlPost == GE_POST_NACELLE
	&& bo_ARU_C1_Actived == FALSE)
		gDb_tRamGreenEffC1.i16RpmMotorElectric = gDb_tNvParamGreenEffC1.u16ELECTRIC_MOTOR_RPM_MIN;
	else
		gDb_tRamGreenEffC1.i16RpmMotorElectric = 0;


	 /* ========================================================= */
	 /* 					TOTAL ELECTRIC TIME					  */
	 /* ========================================================= */
	/*u32TotalElecticMinutes*/
	static TUint32 u32TotalElectricCpuCycle = 0;
	if(gDb_tRamGreenEffC1.i16RpmMotorElectric>0)
		u32TotalElectricCpuCycle = u32TotalElectricCpuCycle + 1;
	if(u32TotalElectricCpuCycle >= 3000) //1min =60sx1000ms= 60000ms/20ms = 3000 CpuCycle
	{
		gDb_tNvMemoryC1.u32TotalElecticMinutes = gDb_tNvMemoryC1.u32TotalElecticMinutes+1;
		u32TotalElectricCpuCycle = 0;
	}

	/*u16TotalElectricHours*/
	gDb_tRamGreenEffC1.u16TotalElectricHours = u16CastU32(gDb_tNvMemoryC1.u32TotalElecticMinutes/60);


}
