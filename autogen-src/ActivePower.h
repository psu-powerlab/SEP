///////////////////////////////////////////////////////////
//  ActivePower.h
//  Implementation of the Class ActivePower
//  Created on:      13-Apr-2020 2:51:20 PM
//  Original author: shu
///////////////////////////////////////////////////////////

#if !defined(EA_06C3C79D_7FFE_4cdf_B482_C7027093C61E__INCLUDED_)
#define EA_06C3C79D_7FFE_4cdf_B482_C7027093C61E__INCLUDED_

#include "PowerOfTenMultiplierType.h"
#include "Int16.h"

/**
 * The active (real) power P (in W) is the product of root-mean-square (RMS)
 * voltage, RMS current, and cos(theta) where theta is the phase angle of current
 * relative to voltage.  It is the primary measure of the rate of flow of energy.
 */
class ActivePower
{

public:
	ActivePower();
	virtual ~ActivePower();
	/**
	 * Specifies exponent for uom.
	 */
	PowerOfTenMultiplierType multiplier;
	/**
	 * Value in watts (uom 38)
	 */
	Int16 value;

};
#endif // !defined(EA_06C3C79D_7FFE_4cdf_B482_C7027093C61E__INCLUDED_)
