///////////////////////////////////////////////////////////
//  SetPoint.h
//  Implementation of the Class SetPoint
//  Created on:      13-Apr-2020 2:51:42 PM
///////////////////////////////////////////////////////////

#if !defined(EA_0A0F1F8A_FF71_40bf_9319_B17DD2CC4DFC__INCLUDED_)
#define EA_0A0F1F8A_FF71_40bf_9319_B17DD2CC4DFC__INCLUDED_

#include "Int16.h"

/**
 * The SetPoint object is used to apply specific temperature set points to a
 * temperature control device. The values of the heatingSetpoint and
 * coolingSetpoint attributes SHALL be calculated as follows:
 * Cooling/Heating Temperature Set Point / 100 = temperature in degrees Celsius
 * where -273.15°C <= temperature <= 327.67°C, corresponding to a Cooling and/or
 * Heating Temperature Set Point. The maximum resolution this format allows is 0.
 * 01°C.
 * The field not present in a Response indicates that this field has not been used
 * by the end device.
 * If a temperature is sent that exceeds the temperature limit boundaries that are
 * programmed into the device, the device SHALL respond by setting the temperature
 * at the limit.
 */
class SetPoint
{

public:
	SetPoint();
	virtual ~SetPoint();
	/**
	 * This attribute represents the cooling temperature set point in degrees Celsius
	 * / 100. (Hundredths of a degree C)
	 */
	Int16 coolingSetpoint;
	/**
	 * This attribute represents the heating temperature set point in degrees Celsius
	 * / 100. (Hundredths of a degree C)
	 */
	Int16 heatingSetpoint;

};
#endif // !defined(EA_0A0F1F8A_FF71_40bf_9319_B17DD2CC4DFC__INCLUDED_)
