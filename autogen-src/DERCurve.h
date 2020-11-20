///////////////////////////////////////////////////////////
//  DERCurve.h
//  Implementation of the Class DERCurve
//  Created on:      13-Apr-2020 2:51:25 PM
///////////////////////////////////////////////////////////

#if !defined(EA_F9C04809_468F_4b31_B2E3_EFE6E02DFCDD__INCLUDED_)
#define EA_F9C04809_468F_4b31_B2E3_EFE6E02DFCDD__INCLUDED_

#include "boolean.h"
#include "UInt32.h"
#include "TimeType.h"
#include "DERCurveType.h"
#include "UInt16.h"
#include "PerCent.h"
#include "PowerOfTenMultiplierType.h"
#include "DERUnitRefType.h"
#include "IdentifiedObject.h"
#include "CurveData.h"

/**
 * DER related curves such as Volt-Var mode curves. Relationship between an
 * independent variable (X-axis) and a dependent variable (Y-axis).
 */
class DERCurve : public IdentifiedObject
{

public:
	DERCurve();
	virtual ~DERCurve();
	/**
	 * If the curveType is opModVoltVar, then this field MAY be present. If the
	 * curveType is not opModVoltVar, then this field SHALL NOT be present.
	 * Enable/disable autonomous vRef adjustment. When enabled, the Volt-Var curve
	 * characteristic SHALL be adjusted autonomously as vRef changes and
	 * autonomousVRefTimeConstant SHALL be present. If a DER is able to support Volt-
	 * Var mode but is unable to support autonomous vRef adjustment, then the DER
	 * SHALL execute the curve without autonomous vRef adjustment. If not specified,
	 * then the value is false.
	 */
	boolean autonomousVRefEnable;
	/**
	 * If the curveType is opModVoltVar, then this field MAY be present. If the
	 * curveType is not opModVoltVar, then this field SHALL NOT be present. Adjustment
	 * range for vRef time constant, in hundredths of a second.
	 */
	UInt32 autonomousVRefTimeConstant;
	/**
	 * The time at which the object was created.
	 */
	TimeType creationTime;
	/**
	 * Specifies the associated curve-based control mode.
	 */
	DERCurveType curveType;
	/**
	 * Open loop response time, the time to ramp up to 90% of the new target in
	 * response to the change in voltage, in hundredths of a second. Resolution is
	 * 1/100 sec. A value of 0 is used to mean no limit. When not present, the device
	 * SHOULD follow its default behavior.
	 */
	UInt16 openLoopTms;
	/**
	 * Decreasing ramp rate, interpreted as a percentage change in output capability
	 * limit per second (e.g. %setMaxW / sec).  Resolution is in hundredths of a
	 * percent/second. A value of 0 means there is no limit. If absent, ramp rate
	 * defaults to setGradW.
	 */
	UInt16 rampDecTms;
	/**
	 * Increasing ramp rate, interpreted as a percentage change in output capability
	 * limit per second (e.g. %setMaxW / sec).  Resolution is in hundredths of a
	 * percent/second. A value of 0 means there is no limit. If absent, ramp rate
	 * defaults to rampDecTms.
	 */
	UInt16 rampIncTms;
	/**
	 * The configuration parameter for a low-pass filter, PT1 is a time, in hundredths
	 * of a second, in which the filter will settle to 95% of a step change in the
	 * input value. Resolution is 1/100 sec.
	 */
	UInt16 rampPT1Tms;
	/**
	 * If the curveType is opModVoltVar, then this field MAY be present. If the
	 * curveType is not opModVoltVar, then this field SHALL NOT be present. The
	 * nominal AC voltage (RMS) adjustment to the voltage curve points for Volt-Var
	 * curves.
	 */
	PerCent vRef;
	/**
	 * Exponent for X-axis value.
	 */
	PowerOfTenMultiplierType xMultiplier;
	/**
	 * Exponent for Y-axis value.
	 */
	PowerOfTenMultiplierType yMultiplier;
	/**
	 * The Y-axis units context.
	 */
	DERUnitRefType yRefType;
	CurveData *m_CurveData;

};
#endif // !defined(EA_F9C04809_468F_4b31_B2E3_EFE6E02DFCDD__INCLUDED_)
