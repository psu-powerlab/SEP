///////////////////////////////////////////////////////////
//  DERControlBase.h
//  Implementation of the Class DERControlBase
//  Created on:      13-Apr-2020 2:51:25 PM
//  Original author: shu
///////////////////////////////////////////////////////////

#if !defined(EA_75481841_6488_46c9_87CC_17B7F88AED7B__INCLUDED_)
#define EA_75481841_6488_46c9_87CC_17B7F88AED7B__INCLUDED_

#include "PowerFactorWithExcitation.h"
#include "FixedVar.h"
#include "SignedPerCent.h"
#include "FreqDroopType.h"
#include "DERCurveLink.h"
#include "PerCent.h"
#include "ReactivePower.h"
#include "ActivePower.h"
#include "UInt16.h"

/**
 * Distributed Energy Resource (DER) control values.
 */
class DERControlBase
{

public:
	DERControlBase();
	virtual ~DERControlBase();
	/**
	 * Set DER as connected (true) or disconnected (false). Used in conjunction with
	 * ramp rate when re-connecting. Implies galvanic isolation.
	 */
	boolean opModConnect;
	/**
	 * Set DER as energized (true) or de-energized (false). Used in conjunction with
	 * ramp rate when re-energizing.
	 */
	boolean opModEnergize;
	/**
	 * The opModFixedPFAbsorbW function specifies a requested fixed Power Factor (PF)
	 * setting for when active power is being absorbed. The actual displacement SHALL
	 * be within the limits established by setMinPFOverExcited and
	 * setMinPFUnderExcited. If issued simultaneously with other reactive power
	 * controls (e.g. opModFixedVar) the control resulting in least var magnitude
	 * SHOULD take precedence.
	 */
	PowerFactorWithExcitation opModFixedPFAbsorbW;
	/**
	 * The opModFixedPFInjectW function specifies a requested fixed Power Factor (PF)
	 * setting for when active power is being injected. The actual displacement SHALL
	 * be within the limits established by setMinPFOverExcited and
	 * setMinPFUnderExcited. If issued simultaneously with other reactive power
	 * controls (e.g. opModFixedVar) the control resulting in least var magnitude
	 * SHOULD take precedence.
	 */
	PowerFactorWithExcitation opModFixedPFInjectW;
	/**
	 * The opModFixedVar function specifies the delivered or received reactive power
	 * setpoint.  The context for the setpoint value is determined by refType and
	 * SHALL be one of %setMaxW, %setMaxVar, or %statVarAvail.  If issued
	 * simultaneously with other reactive power controls (e.g. opModFixedPFInjectW)
	 * the control resulting in least var magnitude SHOULD take precedence.
	 */
	FixedVar opModFixedVar;
	/**
	 * The opModFixedW function specifies a requested charge or discharge mode
	 * setpoint, in %setMaxChargeRateW if negative value or %setMaxW or
	 * %setMaxDischargeRateW if positive value (in hundredths).
	 */
	SignedPerCent opModFixedW;
	/**
	 * Specifies a frequency-watt operation. This operation limits active power
	 * generation or consumption when the line frequency deviates from nominal by a
	 * specified amount.
	 */
	FreqDroopType opModFreqDroop;
	/**
	 * Specify DERCurveLink for curveType == 0.  The Frequency-Watt function limits
	 * active power generation or consumption when the line frequency deviates from
	 * nominal by a specified amount. The Frequency-Watt curve is specified as an
	 * array of Frequency-Watt pairs that are interpolated into a piecewise linear
	 * function with hysteresis.  The x value of each pair specifies a frequency in Hz.
	 * The y value specifies a corresponding active power output in %setMaxW.
	 */
	DERCurveLink opModFreqWatt;
	/**
	 * Specify DERCurveLink for curveType == 1. The High Frequency Ride-Through (HFRT)
	 * function is specified by one or two duration-frequency curves that define the
	 * operating region under high frequency conditions. Each HFRT curve is specified
	 * by an array of duration-frequency pairs that will be interpolated into a
	 * piecewise linear function that defines an operating region. The x value of each
	 * pair specifies a duration (time at a given frequency in seconds). The y value
	 * of each pair specifies a frequency, in Hz. This control specifies the "may
	 * trip" region.
	 */
	DERCurveLink opModHFRTMayTrip;
	/**
	 * Specify DERCurveLink for curveType == 2.  The High Frequency Ride-Through
	 * (HFRT) function is specified by a duration-frequency curve that defines the
	 * operating region under high frequency conditions.  Each HFRT curve is specified
	 * by an array of duration-frequency pairs that will be interpolated into a
	 * piecewise linear function that defines an operating region.  The x value of
	 * each pair specifies a duration (time at a given frequency in seconds). The y
	 * value of each pair specifies a frequency, in Hz. This control specifies the
	 * "must trip" region.
	 */
	DERCurveLink opModHFRTMustTrip;
	/**
	 * Specify DERCurveLink for curveType == 3. The High Voltage Ride-Through (HVRT)
	 * function is specified by one, two, or three duration-volt curves that define
	 * the operating region under high voltage conditions. Each HVRT curve is
	 * specified by an array of duration-volt pairs that will be interpolated into a
	 * piecewise linear function that defines an operating region. The x value of each
	 * pair specifies a duration (time at a given voltage in seconds). The y value of
	 * each pair specifies an effective percentage voltage, defined as ((locally
	 * measured voltage - setVRefOfs / setVRef). This control specifies the "may trip"
	 * region.
	 */
	DERCurveLink opModHVRTMayTrip;
	/**
	 * Specify DERCurveLink for curveType == 4.  The High Voltage Ride-Through (HVRT)
	 * function is specified by duration-volt curves that define the operating region
	 * under high voltage conditions.  Each HVRT curve is specified by an array of
	 * duration-volt pairs that will be interpolated into a piecewise linear function
	 * that defines an operating region.  The x value of each pair specifies a
	 * duration (time at a given voltage in seconds). The y value of each pair
	 * specifies an effective percent voltage, defined as ((locally measured voltage -
	 * setVRefOfs) / setVRef). This control specifies the "momentary cessation" region.
	 */
	DERCurveLink opModHVRTMomentaryCessation;
	/**
	 * Specify DERCurveLink for curveType == 5.  The High Voltage Ride-Through (HVRT)
	 * function is specified by duration-volt curves that define the operating region
	 * under high voltage conditions.  Each HVRT curve is specified by an array of
	 * duration-volt pairs that will be interpolated into a piecewise linear function
	 * that defines an operating region.  The x value of each pair specifies a
	 * duration (time at a given voltage in seconds). The y value of each pair
	 * specifies an effective percent voltage, defined as ((locally measured voltage -
	 * setVRefOfs) / setVRef). This control specifies the "must trip" region.
	 */
	DERCurveLink opModHVRTMustTrip;
	/**
	 * Specify DERCurveLink for curveType == 6. The Low Frequency Ride-Through (LFRT)
	 * function is specified by one or two duration-frequency curves that define the
	 * operating region under low frequency conditions. Each LFRT curve is specified
	 * by an array of duration-frequency pairs that will be interpolated into a
	 * piecewise linear function that defines an operating region. The x value of each
	 * pair specifies a duration (time at a given frequency in seconds). The y value
	 * of each pair specifies a frequency, in Hz. This control specifies the "may
	 * trip" region.
	 */
	DERCurveLink opModLFRTMayTrip;
	/**
	 * Specify DERCurveLink for curveType == 7.  The Low Frequency Ride-Through (LFRT)
	 * function is specified by a duration-frequency curve that defines the operating
	 * region under low frequency conditions.  Each LFRT curve is specified by an
	 * array of duration-frequency pairs that will be interpolated into a piecewise
	 * linear function that defines an operating region.  The x value of each pair
	 * specifies a duration (time at a given frequency in seconds). The y value of
	 * each pair specifies a frequency, in Hz. This control specifies the "must trip"
	 * region.
	 */
	DERCurveLink opModLFRTMustTrip;
	/**
	 * Specify DERCurveLink for curveType == 8. The Low Voltage Ride-Through (LVRT)
	 * function is specified by one, two, or three duration-volt curves that define
	 * the operating region under low voltage conditions. Each LVRT curve is specified
	 * by an array of duration-volt pairs that will be interpolated into a piecewise
	 * linear function that defines an operating region. The x value of each pair
	 * specifies a duration (time at a given voltage in seconds). The y value of each
	 * pair specifies an effective percent voltage, defined as ((locally measured
	 * voltage - setVRefOfs) / setVRef). This control specifies the "may trip" region.
	 */
	DERCurveLink opModLVRTMayTrip;
	/**
	 * Specify DERCurveLink for curveType == 9.  The Low Voltage Ride-Through (LVRT)
	 * function is specified by duration-volt curves that define the operating region
	 * under low voltage conditions.  Each LVRT curve is specified by an array of
	 * duration-volt pairs that will be interpolated into a piecewise linear function
	 * that defines an operating region.  The x value of each pair specifies a
	 * duration (time at a given voltage in seconds). The y value of each pair
	 * specifies an effective percent voltage, defined as ((locally measured voltage -
	 * setVRefOfs) / setVRef). This control specifies the "momentary cessation" region.
	 */
	DERCurveLink opModLVRTMomentaryCessation;
	/**
	 * Specify DERCurveLink for curveType == 10.  The Low Voltage Ride-Through (LVRT)
	 * function is specified by duration-volt curves that define the operating region
	 * under low voltage conditions.  Each LVRT curve is specified by an array of
	 * duration-volt pairs that will be interpolated into a piecewise linear function
	 * that defines an operating region.  The x value of each pair specifies a
	 * duration (time at a given voltage in seconds). The y value of each pair
	 * specifies an effective percent voltage, defined as ((locally measured voltage -
	 * setVRefOfs) / setVRef). This control specifies the "must trip" region.
	 */
	DERCurveLink opModLVRTMustTrip;
	/**
	 * The opModMaxLimW function sets the maximum active power generation level at the
	 * electrical coupling point as a percentage of set capacity (%setMaxW, in
	 * hundredths). This limitation may be met e.g. by reducing PV output or by using
	 * excess PV output to charge associated storage.
	 */
	PerCent opModMaxLimW;
	/**
	 * Target reactive power, in var. This control is likely to be more useful for
	 * aggregators, as individual DERs may not be able to maintain a target setting.
	 */
	ReactivePower opModTargetVar;
	/**
	 * Target output power, in Watts. This control is likely to be more useful for
	 * aggregators, as individual DERs may not be able to maintain a target setting.
	 */
	ActivePower opModTargetW;
	/**
	 * Specify DERCurveLink for curveType == 11.  The static volt-var function
	 * provides over- or under-excited var compensation as a function of measured
	 * voltage. The volt-var curve is specified as an array of volt-var pairs that are
	 * interpolated into a piecewise linear function with hysteresis. The x value of
	 * each pair specifies an effective percent voltage, defined as ((locally measured
	 * voltage - setVRefOfs) / setVRef) and SHOULD support a domain of at least 0 -
	 * 135. If VRef is present in DERCurve, then the x value of each pair is
	 * additionally multiplied by (VRef / 10000). The y value specifies a target var
	 * output interpreted as a signed percentage (-100 to 100). The meaning of the y
	 * value is determined by yRefType and must be one of %setMaxW, %setMaxVar, or
	 * %statVarAvail.
	 */
	DERCurveLink opModVoltVar;
	/**
	 * Specify DERCurveLink for curveType == 12.  The Volt-Watt reduces active power
	 * output as a function of measured voltage. The Volt-Watt curve is specified as
	 * an array of Volt-Watt pairs that are interpolated into a piecewise linear
	 * function with hysteresis. The x value of each pair specifies an effective
	 * percent voltage, defined as ((locally measured voltage - setVRefOfs) / setVRef)
	 * and SHOULD support a domain of at least 0 - 135. The y value specifies an
	 * active power output interpreted as a percentage (0 - 100). The meaning of the y
	 * value is determined by yRefType and must be one of %setMaxW or %statWAvail.
	 */
	DERCurveLink opModVoltWatt;
	/**
	 * Specify DERCurveLink for curveType == 13.  The Watt-PF function varies Power
	 * Factor (PF) as a function of delivered active power. The Watt-PF curve is
	 * specified as an array of Watt-PF coordinates that are interpolated into a
	 * piecewise linear function with hysteresis.  The x value of each pair specifies
	 * a watt setting in %setMaxW, (0 - 100). The PF output setting is a signed
	 * displacement in y value (PF sign SHALL be interpreted according to the EEI
	 * convention, where unity PF is considered unsigned). These settings are not
	 * expected to be updated very often during the life of the installation,
	 * therefore only a single curve is required.  If issued simultaneously with other
	 * reactive power controls (e.g. opModFixedPFInjectW) the control resulting in
	 * least var magnitude SHOULD take precedence.
	 */
	DERCurveLink opModWattPF;
	/**
	 * Specify DERCurveLink for curveType == 14. The Watt-Var function varies vars as
	 * a function of delivered active power. The Watt-Var curve is specified as an
	 * array of Watt-Var pairs that are interpolated into a piecewise linear function
	 * with hysteresis. The x value of each pair specifies a watt setting in %setMaxW,
	 * (0-100). The y value specifies a target var output interpreted as a signed
	 * percentage (-100 to 100). The meaning of the y value is determined by yRefType
	 * and must be one of %setMaxW, %setMaxVar, or %statVarAvail.
	 */
	DERCurveLink opModWattVar;
	/**
	 * Requested ramp time, in hundredths of a second, for the device to transition
	 * from the current DERControl  mode setting(s) to the new mode setting(s). If
	 * absent, use default ramp rate (setGradW).  Resolution is 1/100 sec.
	 */
	UInt16 rampTms;

};
#endif // !defined(EA_75481841_6488_46c9_87CC_17B7F88AED7B__INCLUDED_)
