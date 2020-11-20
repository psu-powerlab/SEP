///////////////////////////////////////////////////////////
//  Offset.h
//  Implementation of the Class Offset
//  Created on:      13-Apr-2020 2:51:36 PM
//  Original author: shu
///////////////////////////////////////////////////////////

#if !defined(EA_C88016E3_B60E_4ad0_9AC4_07F35FFA394D__INCLUDED_)
#define EA_C88016E3_B60E_4ad0_9AC4_07F35FFA394D__INCLUDED_

#include "UInt8.h"
#include "PerCent.h"

/**
 * If a temperature offset is sent that causes the heating or cooling temperature
 * set point to exceed the limit boundaries that are programmed into the device,
 * the device SHALL respond by setting the temperature at the limit.
 * If an EDC is being targeted at multiple devices or to a device that controls
 * multiple devices (e.g., EMS), it can provide multiple Offset types within one
 * EDC. For events with multiple Offset types, a client SHALL select the Offset
 * that best fits their operating function.
 * Alternatively, an event with a single Offset type can be targeted at an EMS in
 * order to request a percentage load reduction on the average energy usage of the
 * entire premise. An EMS SHOULD use the Metering function set to determine the
 * initial load in the premise, reduce energy consumption by controlling devices
 * at its disposal, and at the conclusion of the event, once again use the
 * Metering function set to determine if the desired load reduction was achieved. 
 */
class Offset
{

public:
	Offset();
	virtual ~Offset();
	/**
	 * The value change requested for the cooling offset, in degree C / 10. The value
	 * should be added to the normal set point for cooling, or if loadShiftForward is
	 * true, then the value should be subtracted from the normal set point. 
	 */
	UInt8 coolingOffset;
	/**
	 * The value change requested for the heating offset, in degree C / 10. The value
	 * should be subtracted for heating, or if loadShiftForward is true, then the
	 * value should be added to the normal set point. 
	 */
	UInt8 heatingOffset;
	/**
	 * The value change requested for the load adjustment percentage. The value should
	 * be subtracted from the normal setting, or if loadShiftForward is true, then the
	 * value should be added to the normal setting. 
	 */
	PerCent loadAdjustmentPercentageOffset;

};
#endif // !defined(EA_C88016E3_B60E_4ad0_9AC4_07F35FFA394D__INCLUDED_)
