///////////////////////////////////////////////////////////
//  PowerOfTenMultiplierType.h
//  Implementation of the Class PowerOfTenMultiplierType
//  Created on:      13-Apr-2020 2:51:37 PM
//  Original author: Shawn Hu
///////////////////////////////////////////////////////////

#if !defined(EA_43EDB563_3A0B_47f4_8C87_088E24E45AE9__INCLUDED_)
#define EA_43EDB563_3A0B_47f4_8C87_088E24E45AE9__INCLUDED_

#include "Int8.h"

/**
 * -9 = nano=x10^-9
 * -6 = micro=x10^-6
 * -3 = milli=x10^-3
 * 0 = none=x1 (default, if not specified)
 * 1 = deca=x10
 * 2 = hecto=x100
 * 3 = kilo=x1000
 * 6 = Mega=x10^6
 * 9 = Giga=x10^9
 * This is not a complete list. Any integer between -9 and 9 SHALL be supported,
 * indicating the power of ten multiplier for the units. 
 */
class PowerOfTenMultiplierType : public Int8
{

public:
	PowerOfTenMultiplierType();
	virtual ~PowerOfTenMultiplierType();

};
#endif // !defined(EA_43EDB563_3A0B_47f4_8C87_088E24E45AE9__INCLUDED_)
