///////////////////////////////////////////////////////////
//  CurveData.h
//  Implementation of the Class CurveData
//  Created on:      13-Apr-2020 2:51:23 PM
///////////////////////////////////////////////////////////

#if !defined(EA_D46E89F8_4F97_4322_9229_52C9927B415A__INCLUDED_)
#define EA_D46E89F8_4F97_4322_9229_52C9927B415A__INCLUDED_

#include "boolean.h"
#include "Int32.h"

/**
 * Data point values for defining a curve or schedule
 */
class CurveData
{

public:
	CurveData();
	virtual ~CurveData();
	/**
	 * If yvalue is Power Factor, then this field SHALL be present. If yvalue is not
	 * Power Factor, then this field SHALL NOT be present.
	 * True when DER is absorbing reactive power (under-excited), false
	 * when DER is injecting reactive power (over-excited).
	 */
	boolean excitation;
	/**
	 * The data value of the X-axis (independent) variable, depending on the curve
	 * type. See definitions in DERControlBase for further information.
	 */
	Int32 xvalue;
	/**
	 * The data value of the Y-axis (dependent) variable, depending on the curve type.
	 * See definitions in DERControlBase for further information. If yvalue is Power
	 * Factor, the excitation field SHALL be present and yvalue SHALL be a positive
	 * value. If yvalue is not Power Factor, the excitation field SHALL NOT be present.
	 */
	Int32 yvalue;

};
#endif // !defined(EA_D46E89F8_4F97_4322_9229_52C9927B415A__INCLUDED_)
