///////////////////////////////////////////////////////////
//  UnitType.h
//  Implementation of the Class UnitType
//  Created on:      13-Apr-2020 2:51:46 PM
///////////////////////////////////////////////////////////

#if !defined(EA_52A40064_29E5_45b9_886B_64711AF38FD3__INCLUDED_)
#define EA_52A40064_29E5_45b9_886B_64711AF38FD3__INCLUDED_

#include "UInt8.h"

/**
 * The unit types defined for end device control target reductions.
 * 0 - kWh
 * 1 - kW
 * 2 - Watts
 * 3 - Cubic Meters
 * 4 - Cubic Feet
 * 5 - US Gallons
 * 6 - Imperial Gallons
 * 7 - BTUs
 * 8 - Liters
 * 9 - kPA (gauge)
 * 10 - kPA (absolute)
 * 11 - Mega Joule
 * 12 - Unitless
 * All other values reserved.
 */
class UnitType : public UInt8
{

public:
	UnitType();
	virtual ~UnitType();

};
#endif // !defined(EA_52A40064_29E5_45b9_886B_64711AF38FD3__INCLUDED_)
