///////////////////////////////////////////////////////////
//  WattHour.h
//  Implementation of the Class WattHour
//  Created on:      13-Apr-2020 2:51:47 PM
//  Original author: shu
///////////////////////////////////////////////////////////

#if !defined(EA_F16B46CB_99CF_4789_8521_01E3AE9486D7__INCLUDED_)
#define EA_F16B46CB_99CF_4789_8521_01E3AE9486D7__INCLUDED_

#include "PowerOfTenMultiplierType.h"
#include "UInt16.h"

/**
 * Active (real) energy
 */
class WattHour
{

public:
	WattHour();
	virtual ~WattHour();
	/**
	 * Specifies exponent of uom.
	 */
	PowerOfTenMultiplierType multiplier;
	/**
	 * Value in watt-hours (uom 72)
	 */
	UInt16 value;

};
#endif // !defined(EA_F16B46CB_99CF_4789_8521_01E3AE9486D7__INCLUDED_)
