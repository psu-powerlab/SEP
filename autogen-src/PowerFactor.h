///////////////////////////////////////////////////////////
//  PowerFactor.h
//  Implementation of the Class PowerFactor
//  Created on:      13-Apr-2020 2:51:36 PM
//  Original author: kelynn
///////////////////////////////////////////////////////////

#if !defined(EA_C96B0521_6AD0_4249_BF55_24508B026C19__INCLUDED_)
#define EA_C96B0521_6AD0_4249_BF55_24508B026C19__INCLUDED_

#include "UInt16.h"
#include "PowerOfTenMultiplierType.h"

/**
 * Specifies a setpoint for Displacement Power Factor, the ratio between apparent
 * and active powers at the fundamental frequency (e.g. 60 Hz).
 */
class PowerFactor
{

public:
	PowerFactor();
	virtual ~PowerFactor();
	/**
	 * Significand of an unsigned value of cos(theta) between 0 and 1.0. E.g. a value
	 * of 0.95 may be specified as a displacement of 950 and a multiplier of -3.
	 */
	UInt16 displacement;
	/**
	 * Specifies exponent of 'displacement'.
	 */
	PowerOfTenMultiplierType multiplier;

};
#endif // !defined(EA_C96B0521_6AD0_4249_BF55_24508B026C19__INCLUDED_)
