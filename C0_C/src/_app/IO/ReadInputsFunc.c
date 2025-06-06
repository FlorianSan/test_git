//==================================================================================================
//! @file ReadInputsFunc.c
//! @brief Read analog and digital inputs and convert values
//! @see Target for ...
//! @section app
//! @subsection IO
//! @author Christian Klein (CK)
//! @created 23.07.2018 HYDAC/CK
//! @history: #- CK 23.07.2018 HYDAC/MS interface created
//! copyrights (c) all rights reserved by HYDAC International
//=================================================================================================

#include <ReadInputsFunc.h>

//-----------------------------------------------------------------------------------------------------
//! @brief read all physical inputs
//!
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 23.07.2018 HYDAC/CK
//!
//! @change  05.04.2019 HYDAC/CK  	- change config PDT of input eCenteredTurretState
//			 18.12.2020 HYDAC/CK	- Add AutorisationHighSpeedKey switch no input
//!
//! @care
//! @todo*
//
//10.05.2021 NEOTEC/IG 			Nettoyage du code, suppression des lignes en commentaire
//
//-----------------------------------------------------------------------------------------------------
TVoid vReadInputs(TVoid)
{
	/* run block inputs current*/
	eBloInCur(&gInCur_tPressureBlockOscillationSensor);
	eBloInCur(&gInCur_tPressureBrakeSensor);
	eBloInCur(&gInCur_tTemperatureTransmissionSensor);
	eBloInCur(&gInCur_tElectricPumpPressure);

	/* run block inputs frequency*/
	eBloInFreq(&gInFreq_tOscillantAxleSpeedSensor);
	eBloInFreq(&gInFreq_tFixeAxleSpeedSensor);

	/* run block inputs digital*/
		/* NoNc*/
		eBloSwiDblNoNc(&gSwiDblNoNc_tFrameRotationSensor1);
		eBloSwiDblNoNc(&gSwiDblNoNc_tFrameRotationSensor2);
		// NcNo
		eBloSwiDblNcNo(&gSwiDblNcNo_tDownOscillantAxle);
		eBloSwiDblNcNo(&gSwiDblNcNo_tDownFixeAxle);
		/* No*/
		eBloSwiNo(&gSwiNo_tRailHookSensor);
		eBloSwiNo(&gSwiNo_tInductiveRailSensor);
		eBloSwiNo(&gSwiNo_tCenteredTurret);
		eBloSwiNo(&gSwiNo_tWorkKeyTrackSide);
		eBloSwiNo(&gSwiNo_tWorkKeyBilateral);
		eBloSwiNo(&gSwiNo_tWorkKeyCentred);
		eBloSwiNo(&gSwiNo_tAbutmentTurretTrackSide);
		eBloSwiNo(&gSwiNo_tAbutmentTurretCentredSide);
		eBloSwiNo(&gSwiNo_tOscillantAxleSpeedSensorDir);
		eBloSwiNo(&gSwiNo_tFixeAxleSpeedSensorDir);
		eBloSwiNo(&gSwiNo_tTrailerGache);
		eBloSwiNo(&gSwiNo_tMeasuringMastSensorFolded);
		eBloSwiNo(&gSwiNo_tAru1Contact);
		eBloSwiNo(&gSwiNo_tAru2Contact);
		eBloSwiNo(&gSwiNo_tAruRadio1Contact);
		eBloSwiNo(&gSwiNo_tAruRadio2Contact);
		eBloSwiNo(&gSwiNo_tStarterMotorState);
		/*Clé sélection vitesse*/
		eBloSwiNo(&gSwiNo_tAutorisationHighSpeedKey);
		eBloSwiNo(&gSwiNo_tValveInDownPositionSensor);//SNCF
		/* Nc*/
		eBloSwiNc(&gSwiNc_tUpOscillantAxle);
		eBloSwiNc(&gSwiNc_tUpFixeAxle);
		eBloSwiNc(&gSwiNc_tUpMastSensorNC);//SNCF
		
#ifdef COMPILER_SWITCH_TAR_HW //C14 //SIMULATION POUR COMPILLER EN MODE PC
	/******************			assign inputs to RAM values			******************/

	/* Inputs current*/
		/* PressureBlockOscillationSensor*/
		gDb_tRamEcuInputsC0.bi3PressureBlockOscillationState = gInCur_tPressureBlockOscillationSensor.tOut.tOutVal.bi3Dir;
		gDb_tRamEcuInputsC0.i16PressureBlockOscillationValue = gInCur_tPressureBlockOscillationSensor.tOut.tOutVal.i16Sig;
		gDb_tRamEcuInputsC0.u16PressureBlockOscillationRawValue = gInCur_tPressureBlockOscillationSensor.tOut.u16RawVal;
		/* PressureBrakeSensor*/
		gDb_tRamEcuInputsC0.bi3PressureBrakeSensorState = gInCur_tPressureBrakeSensor.tOut.tOutVal.bi3Dir;
		gDb_tRamEcuInputsC0.i16PressureBrakeSensorValue = gInCur_tPressureBrakeSensor.tOut.tOutVal.i16Sig;
		gDb_tRamEcuInputsC0.u16PressureBrakeSensorRawValue = gInCur_tPressureBrakeSensor.tOut.u16RawVal;
		/* TemperatureTransmissionSensor*/
		gDb_tRamEcuInputsC0.bi3TemperatureTransmissionState = gInCur_tTemperatureTransmissionSensor.tOut.tOutVal.bi3Dir;
		gDb_tRamEcuInputsC0.i16TemperatureTransmissionValue = gInCur_tTemperatureTransmissionSensor.tOut.tOutVal.i16Sig;
		gDb_tRamEcuInputsC0.u16TemperatureTransmissionRawValue = gInCur_tTemperatureTransmissionSensor.tOut.u16RawVal;
		/* ElectricPumpPressure*/
		gDb_tRamEcuInputsC0.bi3ElectricPumpPressureState = gInCur_tElectricPumpPressure.tOut.tOutVal.bi3Dir;
		gDb_tRamEcuInputsC0.i16ElectricPumpPressureValue = gInCur_tElectricPumpPressure.tOut.tOutVal.i16Sig;
		gDb_tRamEcuInputsC0.u16ElectricPumpPressureRawValue = gInCur_tElectricPumpPressure.tOut.u16RawVal;

	/* Inputs Frequency*/
		/* OscillantAxleSpeedSensor*/
		gDb_tRamEcuInputsC0.i32OscillantAxleFrequency = gInFreq_tOscillantAxleSpeedSensor.tOut.i32Frequency;
		/* FixeAxleSpeedSensor*/
		gDb_tRamEcuInputsC0.i32FixeAxleFrequency = gInFreq_tFixeAxleSpeedSensor.tOut.i32Frequency;

	/* Inputs digital*/
		/* NoNc*/
		gDb_tRamEcuInputsC0.eFrameRotationSensor1State = (EDiState) gSwiDblNoNc_tFrameRotationSensor1.tOut.bi2SwiDblNoNcState;
		gDb_tRamEcuInputsC0.u16FrameRotationSensor1RawValuePin0 = gSwiDblNoNc_tFrameRotationSensor1.tOut.u16Pin0;
		gDb_tRamEcuInputsC0.u16FrameRotationSensor1RawValuePin1 = gSwiDblNoNc_tFrameRotationSensor1.tOut.u16Pin1;
		gDb_tRamEcuInputsC0.eFrameRotationSensor2State = (EDiState) gSwiDblNoNc_tFrameRotationSensor2.tOut.bi2SwiDblNoNcState;
		gDb_tRamEcuInputsC0.u16FrameRotationSensor2RawValuePin0 = gSwiDblNoNc_tFrameRotationSensor2.tOut.u16Pin0;
		gDb_tRamEcuInputsC0.u16FrameRotationSensor2RawValuePin1 = gSwiDblNoNc_tFrameRotationSensor2.tOut.u16Pin1;

		/* NcNo*/
		/* DownOscillantAxle*/
		gDb_tRamEcuInputsC0.eDownAxleOscillantState = (EDiState) gSwiDblNcNo_tDownOscillantAxle.tOut.bi2SwiDblNcNoState;
		gDb_tRamEcuInputsC0.u16DownAxleOscillantRawValuePin0 = gSwiDblNcNo_tDownOscillantAxle.tOut.u16Pin0;
		gDb_tRamEcuInputsC0.u16DownAxleOscillantRawValuePin1 = gSwiDblNcNo_tDownOscillantAxle.tOut.u16Pin1;

		/* DownFixeAxle*/
		gDb_tRamEcuInputsC0.eDownAxleFixeState = (EDiState) gSwiDblNcNo_tDownFixeAxle.tOut.bi2SwiDblNcNoState;
		gDb_tRamEcuInputsC0.u16DownAxleFixeRawValuePin0 = gSwiDblNcNo_tDownFixeAxle.tOut.u16Pin0;
		gDb_tRamEcuInputsC0.u16DownAxleFixeRawValuePin1 = gSwiDblNcNo_tDownFixeAxle.tOut.u16Pin1;
		/* UpOscillantAxle.*/
		gDb_tRamEcuInputsC0.eUpAxleOscillantState = (EDiState) gSwiNc_tUpOscillantAxle.tOut.bi2SwiNcState;
		gDb_tRamEcuInputsC0.u16UpAxleOscillantRawValue = gSwiNc_tUpOscillantAxle.tOut.u16RawVal;

		/* UpFixeAxle*/
		gDb_tRamEcuInputsC0.eUpAxleFixeState = (EDiState) gSwiNc_tUpFixeAxle.tOut.bi2SwiNcState;
		gDb_tRamEcuInputsC0.u16UpAxleFixeRawValue = gSwiNc_tUpFixeAxle.tOut.u16RawVal;

		/* UpMastSensorNC*/
		gDb_tRamEcuInputsC0.eUpMastSensorNCState = (EDiState) gSwiNc_tUpMastSensorNC.tOut.bi2SwiNcState;//SNCF
		gDb_tRamEcuInputsC0.u16UpMastSensorNCRawValue = gSwiNc_tUpMastSensorNC.tOut.u16RawVal;//SNCF

		/* No*/
		/* RailHookSensor*/
		gDb_tRamEcuInputsC0.eRailHookSensorState = (EDiState) gSwiNo_tRailHookSensor.tOut.bi2SwiNoState;

		if (gDb_tRamEcuInputsC0.eRailHookSensorState == GE_DI_ON )
			gDb_tRamEcuInputsC0.eRailHookSensorState = GE_DI_OFF;
		else if (gDb_tRamEcuInputsC0.eRailHookSensorState == GE_DI_OFF )
			gDb_tRamEcuInputsC0.eRailHookSensorState = GE_DI_ON;

		gDb_tRamEcuInputsC0.u16RailHookSensorRawValue = gSwiNo_tRailHookSensor.tOut.u16RawVal;

		/* InductiveRailSensor*/
		gDb_tRamEcuInputsC0.eInductiveRailSensorState = (EDiState) gSwiNo_tInductiveRailSensor.tOut.bi2SwiNoState;
		gDb_tRamEcuInputsC0.u16RailHookSensorRawValue = gSwiNo_tInductiveRailSensor.tOut.u16RawVal;

		/* CenteredTurret*/
		gDb_tRamEcuInputsC0.eCenteredTurretState = (EDiState) gSwiNo_tCenteredTurret.tOut.bi2SwiNoState;
		gDb_tRamEcuInputsC0.u16CenteredTurretRawValue = gSwiNo_tCenteredTurret.tOut.u16RawVal;

		/* WorkKeyTrackSide*/
		gDb_tRamEcuInputsC0.eWorkKeyTrackSideState = (EDiState) gSwiNo_tWorkKeyTrackSide.tOut.bi2SwiNoState;
		gDb_tRamEcuInputsC0.u16WorkKeyTrackSideRawValue = gSwiNo_tWorkKeyTrackSide.tOut.u16RawVal;

		/* WorkKeyBilateral*/
		gDb_tRamEcuInputsC0.eWorkKeyBilateralState = (EDiState) gSwiNo_tWorkKeyBilateral.tOut.bi2SwiNoState;
		gDb_tRamEcuInputsC0.u16WorkKeyBilateralRawValue = gSwiNo_tWorkKeyBilateral.tOut.u16RawVal;

		/* WorkKeyCentred*/
		gDb_tRamEcuInputsC0.eWorkKeyCentredState = (EDiState) gSwiNo_tWorkKeyCentred.tOut.bi2SwiNoState;
		gDb_tRamEcuInputsC0.u16WorkKeyCentredRawValue = gSwiNo_tWorkKeyCentred.tOut.u16RawVal;

		/* AbutmentTurretTrackSide*/
		gDb_tRamEcuInputsC0.eAbutmentTurretTrackSideState = (EDiState) gSwiNo_tAbutmentTurretTrackSide.tOut.bi2SwiNoState;
		gDb_tRamEcuInputsC0.u16AbutmentTurretTrackSideRaw = gSwiNo_tWorkKeyTrackSide.tOut.u16RawVal;

		/* AbutmentTurretCentredSide*/
		gDb_tRamEcuInputsC0.eAbutmentTurretCentredSideState = (EDiState) gSwiNo_tAbutmentTurretCentredSide.tOut.bi2SwiNoState;
		gDb_tRamEcuInputsC0.u16AbutmentTurretCentredSideRaw = gSwiNo_tAbutmentTurretCentredSide.tOut.u16RawVal;

		/* OscillantAxleSpeedSensorDir*/
		gDb_tRamEcuInputsC0.eOscillantAxleSpeedSensorDirState = (EDiState) gSwiNo_tOscillantAxleSpeedSensorDir.tOut.bi2SwiNoState;
		gDb_tRamEcuInputsC0.u16OscillantAxleSpeedSensorDirRaw = gSwiNo_tOscillantAxleSpeedSensorDir.tOut.u16RawVal;

		/* FixeAxleSpeedSensorDir*/
		gDb_tRamEcuInputsC0.eFixeAxleSpeedSensorDirState = (EDiState) gSwiNo_tFixeAxleSpeedSensorDir.tOut.bi2SwiNoState;
		gDb_tRamEcuInputsC0.u16FixeAxleSpeedSensorDirRaw = gSwiNo_tFixeAxleSpeedSensorDir.tOut.u16RawVal;

		/* TrailerGache*/
		gDb_tRamEcuInputsC0.eTrailerGacheState = (EDiState) gSwiNo_tTrailerGache.tOut.bi2SwiNoState;
		gDb_tRamEcuInputsC0.u16TrailerGacheRawValue = gSwiNo_tTrailerGache.tOut.u16RawVal;

		/* MeasuringMastSensorFolded*/
		gDb_tRamEcuInputsC0.eMeasuringMastSensorFoldedState = (EDiState) gSwiNo_tMeasuringMastSensorFolded.tOut.bi2SwiNoState;
		gDb_tRamEcuInputsC0.u16MeasuringMastSensorFoldedRaw = gSwiNo_tMeasuringMastSensorFolded.tOut.u16RawVal;

		/* aru1*/
		gDb_tRamEcuInputsC0.eAru1ContactState = (EDiState) gSwiNo_tAru1Contact.tOut.bi2SwiNoState;
		gDb_tRamEcuInputsC0.u16Aru1ContactRawValue = gSwiNo_tAru1Contact.tOut.u16RawVal;

		/* aru2*/
		gDb_tRamEcuInputsC0.eAru2ContactState = (EDiState) gSwiNo_tAru2Contact.tOut.bi2SwiNoState;
		gDb_tRamEcuInputsC0.u16Aru2ContactRawValue = gSwiNo_tAru2Contact.tOut.u16RawVal;

		/* aru1 radio*/
		gDb_tRamEcuInputsC0.eAruRadio1ContactState = (EDiState) gSwiNo_tAruRadio1Contact.tOut.bi2SwiNoState;
		gDb_tRamEcuInputsC0.u16AruRadio1ContactRawValue = gSwiNo_tAruRadio1Contact.tOut.u16RawVal;

		/* aru2 radio*/
		gDb_tRamEcuInputsC0.eAruRadio2ContactState = (EDiState) gSwiNo_tAruRadio2Contact.tOut.bi2SwiNoState;
		gDb_tRamEcuInputsC0.u16AruRadio2ContactRawValue = gSwiNo_tAruRadio2Contact.tOut.u16RawVal;

		/* Starter Motor state*/
		gDb_tRamEcuInputsC0.eStarterMotorState = (EDiState) gSwiNo_tStarterMotorState.tOut.bi2SwiNoState;
		gDb_tRamEcuInputsC0.u16StarterMotorRawValue = gSwiNo_tStarterMotorState.tOut.u16RawVal;

		/* AutorisationHighSpeedKey*/
		gDb_tRamEcuInputsC0.eAutorisationHighSpeedKeyState = (EDiState) gSwiNo_tAutorisationHighSpeedKey.tOut.bi2SwiNoState;
		gDb_tRamEcuInputsC0.u16AutorisationHighSpeedKeyRawValue = gSwiNo_tAutorisationHighSpeedKey.tOut.u16RawVal;

		/* ValveInDownPositionSensor*/
		gDb_tRamEcuInputsC0.eValveInDownPositionSensorState = (EDiState) gSwiNo_tValveInDownPositionSensor.tOut.bi2SwiNoState;//SNCF
		gDb_tRamEcuInputsC0.u16ValveInDownPositionSensorValue = gSwiNo_tValveInDownPositionSensor.tOut.u16RawVal;//SNCF
#endif
}




//-----------------------------------------------------------------------------------------------------
//! @brief read input can message
//!
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 07.08.2018 HYDAC/CK
//!
//! @change  27.05.2019 HYDAC/CK add read 2e channels of slope
//!
//! @care
//! @todo
//-----------------------------------------------------------------------------------------------------
TVoid vReadInputsCAN(TVoid)
{
#ifdef COMPILER_SWITCH_TAR_HW //C14 //SIMULATION POUR COMPILLER EN MODE PC

	/* local variable*/
	static TFloat64	f64SlopeAngleLongSum = 0;
	static TFloat64	f64SlopeAngleTransSum = 0;
	static TFloat64	f64SlopeAngleLongSum2 = 0;
	static TFloat64	f64SlopeAngleTransSum2 = 0;
	const TUint32 u32U30MAX = 1073741823;

	/* ============================================================================================= */
	/* 										Radio Command											 */
	/* ============================================================================================= */
	/* heartbeat value*/
	gDb_tRamEcuInputRadioControl.eStateRadioControl = (EStateHeartBeat)gCsr_tHeartBeat.u8State;
	/* Manipulator value*/
	gDb_tRamEcuInputRadioControl.u8LeftManipulator = gCsr_tReadAnalogInput.u8LeftManipulator;
	gDb_tRamEcuInputRadioControl.u8RightManipulator = gCsr_tReadAnalogInput.u8RightManipulator;
	/* On/Off input*/
	gDb_tRamEcuInputRadioControl.eLeftManipulatorPosition = (EManipulatorPosition)gCsr_tReadOnOfffInput.bi2LeftManipulatorPosition;
	gDb_tRamEcuInputRadioControl.eRightManipulatorPosition = (EManipulatorPosition)gCsr_tReadOnOfffInput.bi2RightManipulatorPosition;
	gDb_tRamEcuInputRadioControl.boRotationFrameCtClkwise = gCsr_tReadOnOfffInput.boRotFrameCtClockwise;
	gDb_tRamEcuInputRadioControl.boRotationFrameClkwise = gCsr_tReadOnOfffInput.boRotFrameClockwise;
	gDb_tRamEcuInputRadioControl.boUpAxleArFixe = gCsr_tReadOnOfffInput.boUpAxleArFixe;
	gDb_tRamEcuInputRadioControl.boDownAxleArFixe = gCsr_tReadOnOfffInput.boDownAxleArFixe;
	gDb_tRamEcuInputRadioControl.boUpAxleAvOscillant = gCsr_tReadOnOfffInput.boUpAxleAvOscillant;
	gDb_tRamEcuInputRadioControl.boDownAxleAvOscillant = gCsr_tReadOnOfffInput.boDownAxleAvOscillant;
	gDb_tRamEcuInputRadioControl.boSelectorPendular = gCsr_tReadOnOfffInput.boSelectorPendular;
	gDb_tRamEcuInputRadioControl.boSelectorRotTurret = gCsr_tReadOnOfffInput.boSelectorRotTurret;
	gDb_tRamEcuInputRadioControl.boStopRadioCommand = gCsr_tReadOnOfffInput.boStopRadioCommand;
	gDb_tRamEcuInputRadioControl.boStartRadioCommand = gCsr_tReadOnOfffInput.boStartRadioCommand;
	gDb_tRamEcuInputRadioControl.boUpPendularOrRotCtClkTurret = gCsr_tReadOnOfffInput.boUpPendularOrRotClockTurret;
	gDb_tRamEcuInputRadioControl.boDownPendularOrRotClkTurret = gCsr_tReadOnOfffInput.boDownPendularOrRotCtClockTurret;
	gDb_tRamEcuInputRadioControl.boForcingAdvanceTrack = gCsr_tReadOnOfffInput.boForcingAdvanceTrack;
	gDb_tRamEcuInputRadioControl.boKlaxonCommand = gCsr_tReadOnOfffInput.boKlaxonCommand;

	/* ============================================================================================= */
	/* 										Dever Frame Sensor										 */
	/* ============================================================================================= */
	gDb_tRamCanSensorC0.u8StateHeartBeatDeversSensor = gCsr_tHeartBeatDeversFrame.u8State;

	f64SlopeAngleLongSum = f64MovAverage(gCsr_tDeversFrame1.i16X_Axis_Angle, f64SlopeAngleLongSum, gDb_tNvParametersC0.u8NbElementAverageSlopeLongAngle);

	gDb_tRamCanSensorC0.i16SlopeLongAngleSensor1 = (TInt16)f64SlopeAngleLongSum;
	f64SlopeAngleTransSum = f64MovAverage(gCsr_tDeversFrame1.i16Y_Axis_Angle, f64SlopeAngleTransSum, gDb_tNvParametersC0.u8NbElementAverageSlopeTransAngle);
	gDb_tRamCanSensorC0.i16SlopeTransAngleSensor1 = (TInt16)f64SlopeAngleTransSum;

	gDb_tRamCanSensorC0.i16SlopeLongAngleValue = gDb_tRamCanSensorC0.i16SlopeLongAngleSensor1 - gDb_tNvCalibrationC0.i16SlopeLongOffset;
	gDb_tRamCanSensorC0.i16SlopeTransAngleValue = gDb_tRamCanSensorC0.i16SlopeTransAngleSensor1 - gDb_tNvCalibrationC0.i16SlopeTransOffset;

	f64SlopeAngleLongSum2 = f64MovAverage(gCsr_tDeversFrame2.i16X_Axis_Angle, f64SlopeAngleLongSum2, gDb_tNvParametersC0.u8NbElementAverageSlopeLongAngle2);
	f64SlopeAngleTransSum2 = f64MovAverage(gCsr_tDeversFrame2.i16Y_Axis_Angle, f64SlopeAngleTransSum2, gDb_tNvParametersC0.u8NbElementAverageSlopeTransAngle2);
	gDb_tRamCanSensorC0.i16SlopeLongAngleSensor2 = (TInt16)f64SlopeAngleLongSum2;
	gDb_tRamCanSensorC0.i16SlopeTransAngleSensor2= (TInt16)f64SlopeAngleTransSum2;
	gDb_tRamCanSensorC0.i16SlopeLongAngleValue2 = gDb_tRamCanSensorC0.i16SlopeLongAngleSensor2 - gDb_tNvCalibrationC0.i16SlopeLongOffset2;
	gDb_tRamCanSensorC0.i16SlopeTransAngleValue2 = gDb_tRamCanSensorC0.i16SlopeTransAngleSensor2 - gDb_tNvCalibrationC0.i16SlopeTransOffset2;

	gDb_tRamCanSensorC0.u8SlopeAlarm1 = gCsr_tDeversFrame1.u8Alarm;
	gDb_tRamCanSensorC0.u8SlopeAlarm2 = gCsr_tDeversFrame2.u8Alarm;

	/*-----------------------------------------------------------------------------------------------------*/
	/* Determine the vehicle slope value to use															   */
	/*-----------------------------------------------------------------------------------------------------*/
			/* If rail mode the use the absolute value of the transversal slope angle*/
	if (gDb_tRamEcuInputsC0.eDownAxleFixeState == GE_DI_ON && gDb_tRamEcuInputsC0.eDownAxleOscillantState == GE_DI_ON)
		gDb_tRamCanSensorC0.u16SelectedSlopeAngle = abs(gDb_tRamCanSensorC0.i16SlopeTransAngleValue);
	else	/* else calculate the combined value for the off rail mode (Pythagora)*/
		gDb_tRamCanSensorC0.u16SelectedSlopeAngle = (TUint16)sqrtf(powf((TFloat32)gDb_tRamCanSensorC0.i16SlopeLongAngleValue,2.0f)
		+ powf((TFloat32)gDb_tRamCanSensorC0.i16SlopeTransAngleValue,2.0f));


	/* ============================================================================================= */
	/* 										Encodeur turret											 */
	/* ============================================================================================= */
	gDb_tRamCanSensorC0.u8StateHeartBeatEncodeurTurret1 = gCsr_tHeartBeatEncodeurTurret1.u8State;

	gDb_tRamCanSensorC0.u32EncodeurTurret1AngleRaw = gCsr_tEncodeurTurret1.u32EncodeurTurret1;

	gDb_tRamCanSensorC0.u32EncodeurTurret2AngleRaw = gCsr_tEncodeurTurret2.u32EncodeurTurret2;
	gDb_tRamCanSensorC0.i16EncodeurTurret1Angle = i16GetTurretAngle(gDb_tRamCanSensorC0.u32EncodeurTurret1AngleRaw, gDb_tRamCanSensorC0.u32EncodeurTurretOffset,16384);
	gDb_tRamCanSensorC0.i16EncodeurTurret2Angle = i16GetTurretAngle(gDb_tRamCanSensorC0.u32EncodeurTurret2AngleRaw, gDb_tRamCanSensorC0.u32EncodeurTurretOffset2,16384);

	gDb_tRamCanSensorC0.u16ErrorCodeEncodeurTurret1 = gCsr_tEmergencyEncodeurTurret1.u16ErrorCode;
	gDb_tRamCanSensorC0.u16ErrorRegisterEncodeurTurret1 = gCsr_tEmergencyEncodeurTurret1.u16ErrorRegister;

	gDb_tRamCanSensorC0.u16ErrorCodeEncodeurTurret2 = gCsr_tEmergencyEncodeurTurret2.u16ErrorCode;
	gDb_tRamCanSensorC0.u16ErrorRegisterEncodeurTurret2 = gCsr_tEmergencyEncodeurTurret2.u16ErrorRegister;
	/* ============================================================================================= */
	/* 										Encodeur Mast											 */
	/* ============================================================================================= */
	gDb_tRamCanSensorC0.u32EncodeurMastMeasureRaw = u32RangeMinMax(gCsr_tMastMeasure.u32EncodeurMastMeasure,0,u32U30MAX);
	gDb_tRamCanSensorC0.u16ErrorCodeMastMeasure = gCsr_tEmergencyMastMeasure.u16ErrorCode;
	gDb_tRamCanSensorC0.u16ErrorRegisterMastMeasure = gCsr_tEmergencyMastMeasure.u16ErrorRegister;

	/* ============================================================================================= */
	/* 										eVision 7												 */
	/* ============================================================================================= */
	// receive
	if (gCsr_tMsg1C0SendToEvision7.bogUserCodeOption == FALSE)
		gDb_tRamEvision7C0.boLoginStatus = TRUE;
	else
		gDb_tRamEvision7C0.boLoginStatus = gCsr_tMsg1RcvFromEvision7.bogLoginStatus;

	gDb_tRamEvision7C0.bogButtonCalibTurretEncoder = gCsr_tMsg1RcvFromEvision7.bogButtonCalibTurretEncoder;
	gDb_tRamEvision7C0.bogOffTrackTestBrakeActivated = gCsr_tMsg1RcvFromEvision7.bogOffTrackTestBrakeActivated;
	gDb_tRamEvision7C0.bogOffTrackRunInBrakeActivated = gCsr_tMsg1RcvFromEvision7.bogOffTrackRunInBrakeActivated;
	gDb_tRamEvision7C0.bogOsciServiceBrakeSelect = boSigDbo(&tDboOsciServiceBrakeSelectButton,gCsr_tMsg1RcvFromEvision7.bogOsciServiceBrakeSelect);
	gDb_tRamEvision7C0.bogFixedServiceBrakeSelect = boSigDbo(&tDboFixeServiceBrakeSelectButton,gCsr_tMsg1RcvFromEvision7.bogFixedServiceBrakeSelect);
	gDb_tRamEvision7C0.bogBothServiceBrakeSelect = gCsr_tMsg1RcvFromEvision7.bogBothServiceBrakeSelect;
	gDb_tRamEvision7C0.bogOsciParkBrakeSelect = boSigDbo(&tDboOsciParkingBrakeSelectButton,gCsr_tMsg1RcvFromEvision7.bogOsciParkBrakeSelect);
	gDb_tRamEvision7C0.bogFixedParkBrakeSelect = boSigDbo(&tDboFixeParkingBrakeSelectButton,gCsr_tMsg1RcvFromEvision7.bogFixedParkBrakeSelect);
	/*Double freins*/
	gDb_tRamEvision7C0.bogOsci2ndParkBrakeSelect = boSigDbo(&tDboOsci2ndParkingBrakeSelectButton,gCsr_tMsg1RcvFromEvision7.bogOsci2ndParkBrakeSelect);
	gDb_tRamEvision7C0.bogFixe2ndParkBrakeSelect = boSigDbo(&tDboFixe2ndParkingBrakeSelectButton,gCsr_tMsg1RcvFromEvision7.bogFixe2ndParkBrakeSelect);
	gDb_tRamEvision7C0.bogBothParkBrakeSelect = gCsr_tMsg1RcvFromEvision7.bogBothParkBrakeSelect;
	gDb_tRamEvision7C0.bogOsciServiceRunInBrakeSelect = gCsr_tMsg1RcvFromEvision7.bogOsciServiceRunInBrakeSelect;
	gDb_tRamEvision7C0.bogFixedServiceRunInBrakeSelect = gCsr_tMsg1RcvFromEvision7.bogFixedServiceRunInBrakeSelect;
	gDb_tRamEvision7C0.bogBothServiceRunInBrakeSelect = gCsr_tMsg1RcvFromEvision7.bogBothServiceRunInBrakeSelect;
	gDb_tRamEvision7C0.bogTestBrakePageActive = gCsr_tMsg1RcvFromEvision7.bogTestBrakePageActive;
	gDb_tRamEvision7C0.bogBreakInBrakePageActive = gCsr_tMsg1RcvFromEvision7.bogBreakInBrakePageActive;
	gDb_tRamEvision7C0.bogSerialNumber = gCsr_tMsg1RcvFromEvision7.bogSerialNumber;
	gDb_tRamEvision7C0.bogBPBasketValidate = gCsr_tMsg1RcvFromEvision7.bogBPBasketValidate;
	gDb_tRamEvision7C0.bogKeyFilterOverload = gCsr_tMsg1RcvFromEvision7.bogKeyFilterOverload;
	gDb_tRamEvision7C0.bogKeyNextMode = gCsr_tMsg1RcvFromEvision7.bogKeyNextMode;
	gDb_tRamEvision7C0.bogKeyPrevMode = gCsr_tMsg1RcvFromEvision7.bogKeyPrevMode;
	gDb_tRamEvision7C0.bogKeySignalDanger = gCsr_tMsg1RcvFromEvision7.bogKeySignalDanger;
	gDb_tRamEvision7C0.bogKeyFlashLightON = gCsr_tMsg1RcvFromEvision7.bogKeyFlashLightON;
	gDb_tRamEvision7C0.bogKeyCalibMastMin = gCsr_tMsg1RcvFromEvision7.bogKeyCalibMastMin;
	gDb_tRamEvision7C0.bogKeyCalibMastMax = gCsr_tMsg1RcvFromEvision7.bogKeyCalibMastMax;
	gDb_tRamEvision7C0.bogKeyCalibMastValid = gCsr_tMsg1RcvFromEvision7.bogKeyCalibMastValid;
	gDb_tRamEvision7C0.bogKeyGeneratorActivate = gCsr_tMsg1RcvFromEvision7.bogKeyGeneratorActivate;
	gDb_tRamEvision7C0.bogRazDistanceTraveledMastMeasure = gCsr_tMsg1RcvFromEvision7.boRazDistanceTraveledMastMeasure;
	gDb_tRamEvision7C0.bogKeyWhiteLights15746 = gCsr_tMsg1RcvFromEvision7.bogKeyWhiteLights15746;
	gDb_tRamEvision7C0.bogKeyRazController = gCsr_tMsg1RcvFromEvision7.bogKeyRazController;

	/* ============================================================================================= */
	/* 										Data rcv from C1										 */
	/* ============================================================================================= */
	gDb_tRamEcuC0RcvFromC1.eC1TurretPostSelector = (EDiState)gCsr_tDataRcvFromC1.bi2C1TurretPostSelector;
	gDb_tRamEcuC0RcvFromC1.eC1RadioPostSelector = (EDiState)gCsr_tDataRcvFromC1.bi2C1RadioPostSelector;
	gDb_tRamEcuC0RcvFromC1.eC1NacellePostSelector = (EDiState)gCsr_tDataRcvFromC1.bi2C1NacellePostSelector;
	gDb_tRamEcuC0RcvFromC1.boUpAxleOscillantCommand = gCsr_tDataRcvFromC1.boUpAxleOscillantCommand;
	gDb_tRamEcuC0RcvFromC1.boDownAxleOscillantCommand = gCsr_tDataRcvFromC1.boDownAxleOscillantCommand;
	gDb_tRamEcuC0RcvFromC1.boUpAxleFixeCommand = gCsr_tDataRcvFromC1.boUpAxleFixeCommand;
	gDb_tRamEcuC0RcvFromC1.boDownAxleFixeCommand = gCsr_tDataRcvFromC1.boDownAxleFixeCommand;
	gDb_tRamEcuC0RcvFromC1.i32RegimeMotorAlternatorRpm = gCsr_tDataRcvFromC1.i32RegimeMotorAlternatorRpm;
	gDb_tRamEcuC0RcvFromC1.boEntryTelescopeFdcSensor = gCsr_tDataRcvFromC1.boEntryTelescopeFdcSensor;
	gDb_tRamEcuC0RcvFromC1.boDeltaArmFoldedSensor = gCsr_tDataRcvFromC1.boDeltaArmFoldedSensor;
	gDb_tRamEcuC0RcvFromC1.boBoomArmFoldedSensor = gCsr_tDataRcvFromC1.boBoomArmFoldedSensor;
	gDb_tRamEcuC0RcvFromC1.boDeltaArmInLowerZone = gCsr_tDataRcvFromC1.boDeltaArmInLowerZone;
	gDb_tRamEcuC0RcvFromC1.i16ArrowArmAngularSensor = gCsr_tDataRcvFromC1.i16ArrowArmAngularSensor;
	gDb_tRamEcuC0RcvFromC1.boTurretInRearCenterPos = gCsr_tDataRcvFromC1.boTurretInRearCenterPos;
	gDb_tRamEcuC0RcvFromC1.boTurretInFrontCenterPos = gCsr_tDataRcvFromC1.boTurretInFrontCenterPos;
	gDb_tRamEcuOutputsC0.boEvUpMeasuringMastCommand = gCsr_tData2RdvFromC1.boEvUpMeasuringMastCmd;
	gDb_tRamEcuOutputsC0.boEvDownMeasuringMastCommand = gCsr_tData2RdvFromC1.boEvDownMeasuringMastCmd;
	gDb_tRamEcuC0RcvFromC1.boFoldedDeltaArmZone = gCsr_tData2RdvFromC1.boFoldedDeltaArmZone;
	gDb_tRamEcuC0RcvFromC1.boFoldedArrowArmZone = gCsr_tData2RdvFromC1.boFoldedArrowArmZone;
	gDb_tRamEcuC0RcvFromC1.i16DeltaArmAngularSensor = gCsr_tData2RdvFromC1.i16DeltaArmAngularSensorValue;
	gDb_tRamEcuC0RcvFromC1.boFoldedMastMeasure = gCsr_tData2RdvFromC1.boFoldedMastMeasure;
	gDb_tRamEcuC0RcvFromC1.i16Transmission1Pressure = gCsr_tData2RdvFromC1.i16Transmission1Pressure;
	gDb_tRamEcuC0RcvFromC1.i16Transmission2Pressure = gCsr_tData2RdvFromC1.i16Transmission2Pressure;
	gDb_tRamEcuC0RcvFromC1.eActiveHelpState = (EDiState)gCsr_tData2RdvFromC1.bi2ActiveHelpState;
	gDb_tRamEcuC0RcvFromC1.boBasketInCentrerPos = gCsr_tData2RdvFromC1.boBasketInCentrerPos;
	gDb_tRamEcuC0RcvFromC1.boStopAllMovementsNacellePost = gCsr_tData2RdvFromC1.boStopAllMovementsNacellePost;
	gDb_tRamEcuC0RcvFromC1.u16EncodeurMastMeasureCentimeter = gCsr_tData3RcvFromC1.u16EncodeurMastMeasureCentimeter;
	gDb_tRamEcuC0RcvFromC1.boMastMeasureFonctionActive = gCsr_tData3RcvFromC1.boMastMeasureFonctionActive;

	/* HYDAC CK 20.03.13*/
	gDb_tRamEcuC0RcvFromC1.boOptionWhiteLight15746 = gCsr_tData3RcvFromC1.boOptionWhiteLight15746;
	gDb_tRamEcuC0RcvFromC1.boSafeManSystem = gCsr_tData3RcvFromC1.bogSafeManSystem;
	gDb_tRamEcuC0RcvFailluresFromC1.boDm_Inc_Pos_Folded_Delta_Arrow = gCsr_tFailuresC1SendToC0.boDm_Inc_Pos_Folded_Delta_Arrow;
	gDb_tRamEcuC0RcvFailluresFromC1.boDm_Active_Help = gCsr_tFailuresC1SendToC0.boDm_Active_Help;
	gDb_tRamEcuC0RcvFailluresFromC1.boDm_Ev_Bypass_Fault = gCsr_tFailuresC1SendToC0.boDm_Ev_Bypass_Fault;
	gDb_tRamEcuC0RcvFailluresFromC1.boOutOfRangeTransmissionPressure = gCsr_tFailuresC1SendToC0.boOutOfRangeTransmissionPressure;
	gDb_tRamEcuC0RcvFailluresFromC1.boDm_Overload_Detected_By_C1 = gCsr_tFailuresC1SendToC0.boDm_Overload_Detected_By_C1;

	gDb_tRamData4C0RcvFromC1.boNoMovementRunning = gCsr_tData4C1SendToC0.boNoMovementRunning;
	gDb_tRamData4C0RcvFromC1.boStopMoveLimitEnvelop = gCsr_tData4C1SendToC0.boStopMoveLimitEnvelop;// DM_STOP_MOVE_LIMIT_ENVLP_FROM C1
	gDb_tRamData4C0RcvFromC1.boTransmissionPressureFault = gCsr_tData4C1SendToC0.boTransmissionPressureFault;//DM_TRANSMISSION_PRESSURE_FAULT
	gDb_tRamData4C0RcvFromC1.boLynxOnAllMvts = gCsr_tData4C1SendToC0.boLynxOnAllMvts;

	/*Multi Gage*/
	gDb_tRamGeneralC0.boSlopeModeFromC1 = gCsr_tData2RdvFromC1.boSlopeModeFromC1;//Activation mode MG

//NEOTEC IG STRUKTON DEBUT
	gDb_tRamData4C0RcvFromC1.boPerformAutoriseTransArrow = gCsr_tData5C1SendToC0.boPerformAutoriseTransArrow;//Position de la flèche OK
	gDb_tRamData4C0RcvFromC1.boValidTelescopeSectorSlope = gCsr_tData5C1SendToC0.boValidTelescopeSector;//Position du telescope OK
	gDb_tRamData4C0RcvFromC1.boValidTelescopeFirstSectorSlope = gCsr_tData5C1SendToC0.boValidFirstSectorTelescope;//Position du telescope comprise entre 0 et 600
	gDb_tRamData4C0RcvFromC1.boInterdictOfNacelTurretPost = gCsr_tData5C1SendToC0.boInterdictOfNacelTurretPost;
	gDb_tRamData4C0RcvFromC1.boPostInterdictionMastSNCF = gCsr_tData5C1SendToC0.boPostInterdictionMastSNCF;
//NEOTEC IG STRUKTON FIN
	/* ============================================================================================= */
	/* 										GREEN E													 */
	/* ============================================================================================= */
	gDb_tRamEcuC0RcvFromC1.boColdOilTankTemperature  = gCsr_tData5C1SendToC0.boColdOilTankTemperature;
	gDb_tRamEcuC0RcvFromC1.boElectricMotorForbidden  = gCsr_tData5C1SendToC0.boElectricMotorForbidden;
	gDb_tRamEcuC0RcvFromC1.boSocStopRegen  = gCsr_tData5C1SendToC0.boSocStopRegen;
	gDb_tRamEcuC0RcvFromC1.boGeneratorOn = gCsr_tData5C1SendToC0.boGeneratorOn;
	gDb_tRamEcuC0RcvFromC1.boEvDevMvtsCmd = gCsr_tData5C1SendToC0.boEvDevMvtsCmd;
	gDb_tRamEcuC0RcvFromC1.i16RpmMotorElectric  = gCsr_tData5C1SendToC0.i16RpmMotorElectric;
	gDb_tRamEcuC0RcvFromC1.i16OilTankTemperatureValue  = gCsr_tData5C1SendToC0.i16OilTankTemperatureValue;

	gDb_tRamEcuC0RcvFromC1.boAutoModeActivate  = gCsr_tData5C1SendToC0.boAutoModeActivate;
	gDb_tRamEcuC0RcvFromC1.boSilenceModeActivate  = gCsr_tData5C1SendToC0.boSilenceModeActivate;
	gDb_tRamEcuC0RcvFromC1.boForcingRegenlow  = gCsr_tData5C1SendToC0.boForcingRegenlow;
	gDb_tRamEcuC0RcvFromC1.boForcingRegenHigh  = gCsr_tData5C1SendToC0.boForcingRegenHigh;

	gDb_tRamEcuC0RcvFromC1.boEvBypassCommand   = gCsr_tData5C1SendToC0.boEvBypassCommand;
	gDb_tRamData4C0RcvFromC1.boMastPanthoFoldedSNCF = gCsr_tData5C1SendToC0.boMastPanthoFoldedSNCF;
	gDb_tRamEcuC0RcvFromC1.i16MotorspeedCmdJ1939   = gCsr_tData5C1SendToC0.i16MotorspeedCmdJ1939;

	/*i16Ibatt_ist*/
	static TInt32 i32Ibatt_ist_microA = 0;
	i32Ibatt_ist_microA = (TInt32)gCsr_tFlashBatteryRpdo1_0.u8Byte0*16777216 + (TInt32)gCsr_tFlashBatteryRpdo1_0.u8Byte1*65536 + (TInt32)gCsr_tFlashBatteryRpdo1_0.u8Byte2*256 + (TInt32)gCsr_tFlashBatteryRpdo1_0.u8Byte3;
	gDb_tRamFlashBatteryC0.i16Ibatt_ist = i16CastI32(i32Ibatt_ist_microA/1000);
	/*u16Vbatt_ist*/
	gDb_tRamFlashBatteryC0.u16Vbatt_ist = ((TUint16)gCsr_tFlashBatteryRpdo1_0.u8Byte4*256 + (TUint16)gCsr_tFlashBatteryRpdo1_0.u8Byte5)/10;
	/*u8Batt_Soc*/
	gDb_tRamFlashBatteryC0.u8Batt_Soc = gCsr_tFlashBatteryRpdo2_0.u8Byte1;
	/*u8Batt_PowerReductionRatio*/
	gDb_tRamFlashBatteryC0.u8Batt_PowerReductionRatio = gCsr_tFlashBatteryRpdo2_0.u8Byte2;
	/*u8Batt_RecoveryReductionRatio*/
	gDb_tRamFlashBatteryC0.u8Batt_RecoveryReductionRatio = gCsr_tFlashBatteryRpdo2_0.u8Byte3;
	/*u8Batt_ErrorCode1*/
	gDb_tRamFlashBatteryC0.u8Batt_ErrorCode1 = gCsr_tFlashBatteryRpdo3_0.u8Byte0;
	/*u8Batt_ErrorValue1*/
	gDb_tRamFlashBatteryC0.u8Batt_ErrorValue1 = gCsr_tFlashBatteryRpdo3_0.u8Byte1;
	/*boBatt_RegenAuthorized*/
	gDb_tRamFlashBatteryC0.boBatt_RegenAuthorized = boGet1BitU8( 2, gCsr_tFlashBatteryRpdo1_2.u8Byte2);


	/* ============================================================================================= */
	/* 										Portilon & ladder										 */
	/* ============================================================================================= */

	gDb_tRamGeneralC0.boPortillonLadderClose = ((gDb_tNvOptionsC0.boPortillon == TRUE && gDb_tRam48XsInputsC0.boClosePortillonSensor == TRUE) || gDb_tNvOptionsC0.boPortillon == FALSE)
											&& ((gDb_tNvOptionsC0.boLadder == TRUE && gDb_tRam48XsInputsC0.boFoldedLadderSensor == TRUE) || gDb_tNvOptionsC0.boLadder == FALSE);

	/* ============================================================================================= */
	/* 										48XS													 */
	/* ============================================================================================= */

	/* *******************************     Hearbeat		******************************************** */
	gDb_tRam48XsInputsC0.u8Hearbeat48Xs = gCsr_tHearbeat_48XS.u8State;

	/* *******************************     PDO1		******************************************** */
	gDb_tRam48XsInputsC0.u16UpInclinaisonBasketButtonValue = gCsr_tPDO1_48XS.u16UpInclinaisonBasket;
	gDb_tRam48XsInputsC0.u16DownInclinaisonBasketButtonValue= gCsr_tPDO1_48XS.u16DownInclinaisonBasket;
	gDb_tRam48XsInputsC0.u16UpPendularButtonValue = gCsr_tPDO1_48XS.u16UpPendular;
	gDb_tRam48XsInputsC0.u16DownPendularButtonValue = gCsr_tPDO1_48XS.u16DownPendular;

	gDb_tRam48XsInputsC0.boUpInclinaisonBasketButton = boSigDbo(&tDboUpInclinaisonBasketButton,(TBoolean)(gDb_tRam48XsInputsC0.u16UpInclinaisonBasketButtonValue < gDb_tNvParametersC0.u16TresholdAnaToBoForInputs48Xs));
	gDb_tRam48XsInputsC0.boDownInclinaisonBasketButton = boSigDbo(&tDboDownInclinaisonBasketButton,(TBoolean)(gDb_tRam48XsInputsC0.u16DownInclinaisonBasketButtonValue < gDb_tNvParametersC0.u16TresholdAnaToBoForInputs48Xs));
	gDb_tRam48XsInputsC0.boUpPendularButton = boSigDbo(&tDboUpPendularButton,(TBoolean)(gDb_tRam48XsInputsC0.u16UpPendularButtonValue < gDb_tNvParametersC0.u16TresholdAnaToBoForInputs48Xs));
	gDb_tRam48XsInputsC0.boDownPendularButton = boSigDbo(&tDboDownPendularButton,(TBoolean)(gDb_tRam48XsInputsC0.u16DownPendularButtonValue < gDb_tNvParametersC0.u16TresholdAnaToBoForInputs48Xs));

	/* ******************************     PDO2		******************************************** */
	gDb_tRam48XsInputsC0.u16RotationClockwiseBasketButtonVal = gCsr_tPDO2_48XS.u16RotationClockwiseBasket;
	gDb_tRam48XsInputsC0.u16RotCtClockwiseBasketButtonVal = gCsr_tPDO2_48XS.u16RotationCtClockwiseBasket;
	gDb_tRam48XsInputsC0.u16HighSectorPlateSensorVal = gCsr_tPDO2_48XS.u16HighSectorPlateSensor;
	gDb_tRam48XsInputsC0.u16FoldedLadderSensorVal = gCsr_tPDO2_48XS.u16FoldedLadderSensor;

	gDb_tRam48XsInputsC0.boRotationCtClockwiseBasketButton = boSigDbo(&tDboRotationCtClockwiseBasketButton,(TBoolean)(gDb_tRam48XsInputsC0.u16RotCtClockwiseBasketButtonVal < gDb_tNvParametersC0.u16TresholdAnaToBoForInputs48Xs));
	gDb_tRam48XsInputsC0.boRotationClockwiseBasketButton = boSigDbo(&tDboRotationClockwiseBasketButton,(TBoolean)(gDb_tRam48XsInputsC0.u16RotationClockwiseBasketButtonVal < gDb_tNvParametersC0.u16TresholdAnaToBoForInputs48Xs));
	gDb_tRam48XsInputsC0.boHighSectorPlateSensor = boSigDbo(&tDboHighSectorPlateSensor,(TBoolean)(gDb_tRam48XsInputsC0.u16HighSectorPlateSensorVal > gDb_tNvParametersC0.u16TresholdAnaToBoForInputs48Xs));
	gDb_tRam48XsInputsC0.boFoldedLadderSensor = boSigDbo(&tDboFoldedLadderSensor,(TBoolean)(gDb_tRam48XsInputsC0.u16FoldedLadderSensorVal < gDb_tNvParametersC0.u16TresholdAnaToBoForInputs48Xs));

	/* ******************************     PDO3		******************************************** */
	gDb_tRam48XsInputsC0.u16SafetyManSystem = gCsr_tPDO3_48XS.u16SafetyManSystem;
	gDb_tRam48XsInputsC0.u16DeltaArmAxisJoystick = gCsr_tPDO3_48XS.u16DeltaArmAxisJoystick;
	gDb_tRam48XsInputsC0.u16ArrowArmAxisJoystick = gCsr_tPDO3_48XS.u16ArrowArmAxisJoystick;
	gDb_tRam48XsInputsC0.u16TelescopeArmAxisJoysitck = gCsr_tPDO3_48XS.u16TelescopeArmAxisJoysitck;

	/* ******************************     PDO4		******************************************** */
	gDb_tRam48XsInputsC0.u16RotationTurretAxisJoystick = gCsr_tPDO4_48XS.u16RotationTurretAxisJoystick;
	gDb_tRam48XsInputsC0.u16RearmementSafetyManSystemVal = gCsr_tPDO4_48XS.u16RearmementSafetyManSystem;
	gDb_tRam48XsInputsC0.u16AbutementNacelleTrackSideVal = gCsr_tPDO4_48XS.u16AbutementNacelleTrackSide;
	gDb_tRam48XsInputsC0.u16AbutementNacelleCenteredSideVal = gCsr_tPDO4_48XS.u16AbutementNacelleCenteredSide;

	gDb_tRam48XsInputsC0.boRearmementSafetyManSystem = boSigDbo(&tDboRearmementSafetyManSystem,(TBoolean)(gDb_tRam48XsInputsC0.u16RearmementSafetyManSystemVal > gDb_tNvParametersC0.u16TresholdAnaToBoForInputs48Xs));
	gDb_tRam48XsInputsC0.boAbutementNacelleTrackSide = boSigDbo(&tDboAbutementNacelleTrackSide,(TBoolean)(gDb_tRam48XsInputsC0.u16AbutementNacelleTrackSideVal < gDb_tNvParametersC0.u16TresholdAnaToBoForInputs48Xs));
	gDb_tRam48XsInputsC0.boAbutementNacelleCenteredSide = boSigDbo(&tDboAbutementNacelleCenteredSide,(TBoolean)(gDb_tRam48XsInputsC0.u16AbutementNacelleCenteredSideVal < gDb_tNvParametersC0.u16TresholdAnaToBoForInputs48Xs));

	/* ******************************     PDO5		******************************************** */
	gDb_tRam48XsOutputsC0.eMotorDefaultLightErrSta = gCsr_tPDO5_48XS.eMotorDefaultLightErrSta;
	gDb_tRam48XsOutputsC0.eOverloadLightErrSta = gCsr_tPDO5_48XS.eOverloadLightErrSta;
	gDb_tRam48XsOutputsC0.eBuzzerErrSta = gCsr_tPDO5_48XS.eBuzzerErrSta;
	gDb_tRam48XsOutputsC0.eWarmingLightErrSta = gCsr_tPDO5_48XS.eWarmingLightErrSta;
	gDb_tRam48XsOutputsC0.eDeversDefaultLightErrSta  = gCsr_tPDO5_48XS.eDeversDefaultLightErrSta;
	gDb_tRam48XsOutputsC0.eGasOilLightErrSta = gCsr_tPDO5_48XS.eGasOilLightErrSta;
	gDb_tRam48XsOutputsC0.eWhiteLightARGErrSta = gCsr_tPDO5_48XS.eWhiteLightARGErrSta;
	gDb_tRam48XsOutputsC0.eRedLightARGErrSta = gCsr_tPDO5_48XS.eRedLightARGErrSta;

	/* ******************************     PDO6		******************************************** */
	gDb_tRam48XsOutputsC0.eWhiteLightARDErrSta = gCsr_tPDO6_48XS.eWhiteLightARDErrSta;
	gDb_tRam48XsOutputsC0.eRedLightARDErrSta = gCsr_tPDO6_48XS.eRedLightARDErrSta;

	/* *******************************     SRDO1		******************************************** */
	gDb_tRam48XsInputsC0.u16Overload1Value = gCsr_tSRDO1_48XS.u16Overload1;
	gDb_tRam48XsInputsC0.u16Overload2Value = gCsr_tSRDO1_48XS.u16Overload2;
	gDb_tRam48XsInputsC0.u16NacelleBasketRightSideSensor1Val = gCsr_tSRDO1_48XS.u16NacelleBasketRightSideSensor1;
	gDb_tRam48XsInputsC0.u16NacelleBasketRightSideSensor2Val = gCsr_tSRDO1_48XS.u16NacelleBasketRightSideSensor2;

	gDb_tRam48XsInputsC0.boOverload1 = boSigDbo(&tDboOverload1,(TBoolean)(gDb_tRam48XsInputsC0.u16Overload1Value < gDb_tNvParametersC0.u16TresholdAnaToBoForInputs48Xs));
	gDb_tRam48XsInputsC0.boOverload2 = boSigDbo(&tDboOverload2,(TBoolean)(gDb_tRam48XsInputsC0.u16Overload2Value < gDb_tNvParametersC0.u16TresholdAnaToBoForInputs48Xs));
	gDb_tRam48XsInputsC0.boNacelleBasketRightSideSensor1 = boSigDbo(&tDboNacelleBasketRightSideSensor1,(TBoolean)(gDb_tRam48XsInputsC0.u16NacelleBasketRightSideSensor1Val > gDb_tNvParametersC0.u16TresholdAnaToBoForInputs48Xs));
	gDb_tRam48XsInputsC0.boNacelleBasketRightSideSensor2 = boSigDbo(&tDboNacelleBasketRightSideSensor2,(TBoolean)(gDb_tRam48XsInputsC0.u16NacelleBasketRightSideSensor2Val > gDb_tNvParametersC0.u16TresholdAnaToBoForInputs48Xs));

	/* *******************************     SRDO2		******************************************** */
	gDb_tRam48XsInputsC0.u16NacelleBasketLeftSideSensor1Val = gCsr_tSRDO2_48XS.u16NacelleBasketLeftSideSensor1;
	gDb_tRam48XsInputsC0.u16NacelleBasketLeftSideSensor2Val = gCsr_tSRDO2_48XS.u16NacelleBasketLeftSideSensor2;
	gDb_tRam48XsInputsC0.u16LowSectorPendularSensorVal = gCsr_tSRDO2_48XS.u16LowSectorPendularSensor;
	gDb_tRam48XsInputsC0.u16AdvanceAxisJoystick = gCsr_tSRDO2_48XS.u16AdvanceAxisJoystick;

	gDb_tRam48XsInputsC0.boNacelleBasketLeftSideSensor1 = boSigDbo(&tDboNacelleBasketLeftSideSensor1,(TBoolean)(gDb_tRam48XsInputsC0.u16NacelleBasketLeftSideSensor1Val > gDb_tNvParametersC0.u16TresholdAnaToBoForInputs48Xs));
	gDb_tRam48XsInputsC0.boNacelleBasketLeftSideSensor2 = boSigDbo(&tDboNacelleBasketLeftSideSensor2,(TBoolean)(gDb_tRam48XsInputsC0.u16NacelleBasketLeftSideSensor2Val > gDb_tNvParametersC0.u16TresholdAnaToBoForInputs48Xs));
	gDb_tRam48XsInputsC0.boLowSectorPendularSensor = boSigDbo(&tDboLowSectorPendularSensor,(TBoolean)(gDb_tRam48XsInputsC0.u16LowSectorPendularSensorVal > gDb_tNvParametersC0.u16TresholdAnaToBoForInputs48Xs));

	/* *******************************     SRDO3		******************************************** */
	gDb_tRam48XsInputsC0.boDeltaArmJystckCenteredTelescope = boSigDbo(&tDboDeltaArmJystckCenteredTelescope,!gCsr_tSRDO3_48XS.boDeltaArmJystckCenteredTelesc);
	gDb_tRam48XsInputsC0.boArrowJoystickCenteredTurret = boSigDbo(&tDboArrowJoystickCenteredTurret,!gCsr_tSRDO3_48XS.boArrowJoystickCenteredTurret);
	gDb_tRam48XsInputsC0.boCenteredAdvanceJoystick = boSigDbo(&tDboCenteredAdvanceJoystick,!gCsr_tSRDO3_48XS.boCenteredAdvanceJoystick);
	gDb_tRam48XsInputsC0.boDeadManPedal = boSigDbo(&tDboDeadManPedal,gCsr_tSRDO3_48XS.boDeadManPedal);
	gDb_tRam48XsInputsC0.boPressenceInNacelleSensor1 = boSigDbo(&tDboPressenceInNacelleSensor1,gCsr_tSRDO3_48XS.boPressenceInNacelleSensor1);
	gDb_tRam48XsInputsC0.boPressenceInNacelleSensor2 = boSigDbo(&tDboPressenceInNacelleSensor2,gCsr_tSRDO3_48XS.boPressenceInNacelleSensor2);
	gDb_tRam48XsInputsC0.boGachette = boSigDbo(&tDboGachette,gCsr_tSRDO3_48XS.boGachette);
	gDb_tRam48XsInputsC0.boKlaxon = boSigDbo(&tDboKlaxon,gCsr_tSRDO3_48XS.boKlaxon);
	gDb_tRam48XsInputsC0.boStopMotorButton = boSigDbo(&tDboStopMotorButton,gCsr_tSRDO3_48XS.boStopMotorButton);
	gDb_tRam48XsInputsC0.boAuthorizationWorkKey = boSigDbo(&tDboAuthorizationWorkKey,gCsr_tSRDO3_48XS.boAuthorizationWorkKey);
	gDb_tRam48XsInputsC0.boEtallonnageJoystickButton = boSigDbo(&tDboEtallonnageJoystickButton,gCsr_tSRDO3_48XS.boEtallonnageJoystickButton);
	gDb_tRam48XsInputsC0.boClosePortillonSensor = boSigDbo(&tDboClosePortillonSensor,gCsr_tSRDO3_48XS.boClosePortillon);
	gDb_tRam48XsInputsC0.u16BatterieVoltage48Xs = gCsr_tSRDO3_48XS.u16BatterieVoltage48Xs;

	/* ============================================================================================= */
	/* 										eVision 4	Opus										 */
	/* ============================================================================================= */
	gDb_tRamEvision4C0.u8LifeByte = gCsr_tMsg1RcvFromOpus.u8gLifeByte;
	gDb_tRamEvision4C0.bogDelta_Arm_Move_Up = gCsr_tMsg1RcvFromOpus.bogDelta_Arm_Move_Up;
	gDb_tRamEvision4C0.bogDelta_Arm_Move_Down = gCsr_tMsg1RcvFromOpus.bogDelta_Arm_Move_Down;
	gDb_tRamEvision4C0.bogArrow_Move_Up = gCsr_tMsg1RcvFromOpus.bogArrow_Arm_Move_Up;
	gDb_tRamEvision4C0.bogArrow_Move_Down = gCsr_tMsg1RcvFromOpus.bogArrow_Arm_Move_Down;
	gDb_tRamEvision4C0.bogPendular_Move_Up = gCsr_tMsg1RcvFromOpus.bogPendular_Arm_Move_Up;
	gDb_tRamEvision4C0.bogPendular_Move_Down = gCsr_tMsg1RcvFromOpus.bogPendular_Arm_Move_Down;
	gDb_tRamEvision4C0.bogTelescope_Move_Out = gCsr_tMsg1RcvFromOpus.bogTelescope_Move_Out;
	gDb_tRamEvision4C0.bogTelescope_Move_In = gCsr_tMsg1RcvFromOpus.bogTelescope_Move_In;
	gDb_tRamEvision4C0.bogBasket_Inclinaison_Move_Up = gCsr_tMsg1RcvFromOpus.bogBasket_Inclinaison_Move_Up;
	gDb_tRamEvision4C0.bogBasket_Inclinaison_Move_Down = gCsr_tMsg1RcvFromOpus.bogBasket_Inclinaison_Move_Down;
	gDb_tRamEvision4C0.bogTurret_Rotate_ClockWise = gCsr_tMsg1RcvFromOpus.bogTurret_Rotate_ClockWise;
	gDb_tRamEvision4C0.bogTurret_Rotate_Counter_ClockWise= gCsr_tMsg1RcvFromOpus.bogTurret_Rotate_Cntr_ClockWise;
	gDb_tRamEvision4C0.bogBasket_Rotate_ClockWise = gCsr_tMsg1RcvFromOpus.bogBasket_Rotation_Move_Up;
	gDb_tRamEvision4C0.bogBasket_Rotate_Counter_ClockWise = gCsr_tMsg1RcvFromOpus.bogBasket_Rotation_Move_Down;
	gDb_tRamEvision4C0.bogKeyRpmSelect = gCsr_tMsg1RcvFromOpus.bogKeyRpmSelect;
	gDb_tRamEvision4C0.bogKeyRpmOff = gCsr_tMsg1RcvFromOpus.bogKeyRpmOff;
	gDb_tRamEvision4C0.bogForcingWhiteRaillight = gCsr_tMsg1RcvFromOpus.bogForcingWhiteRaillight ;
	gDb_tRamEvision4C0.bogForcingNeons = gCsr_tMsg1RcvFromOpus.bogForcingNeons ;
	gDb_tRamEvision4C0.bogKeyCalibMin = gCsr_tMsg1RcvFromOpus.bogKeyCalibMin ;
	gDb_tRamEvision4C0.bogKeyCalibMax = gCsr_tMsg1RcvFromOpus.bogKeyCalibMax ;
	gDb_tRamEvision4C0.bogKeyCalibValid = gCsr_tMsg1RcvFromOpus.bogKeyCalibValid ;
	gDb_tRamEvision4C0.u8gElementChoice = gCsr_tMsg1RcvFromOpus.u8gElementChoice;
	gDb_tRamEvision4C0.bogKeyCalibMax2 = gCsr_tMsg1RcvFromOpus.bogKeyCalibMax2;
	gDb_tRamEvision4C0.bogKeySlopeLgReset = gCsr_tMsg1RcvFromOpus.bogKeySlopeLgReset;
	gDb_tRamEvision4C0.bogKeySlopeTrReset = gCsr_tMsg1RcvFromOpus.bogKeySlopeTrReset;

#endif
}


//-----------------------------------------------------------------------------------------------------
//! @brief Encodeur position with calibration value
//!
//!
//! @globvar
//!
//! @staticvar
//!
//! @created 24.01.2019 HYDAC/CK
//!
//! @change
//!
//! @care
//! @todo
//-----------------------------------------------------------------------------------------------------
TInt16 vCorrectEncodeurAngle(TInt16 i16AngleRaw,TInt16 i16Offset,TInt16 i16RefAngle)
{
	TInt16 i16CorrectEncodeurAngle = (i16AngleRaw - i16Offset) + i16RefAngle;

	/* If angle value is out of range*/
	if (i16CorrectEncodeurAngle > 3599)
		i16CorrectEncodeurAngle = i16CorrectEncodeurAngle - 3600;
	else if (i16CorrectEncodeurAngle < 0)
		i16CorrectEncodeurAngle = i16CorrectEncodeurAngle + 3600;

	/* return angle*/
	return i16CorrectEncodeurAngle;
}
