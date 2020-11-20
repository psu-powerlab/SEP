///////////////////////////////////////////////////////////
//  ReactivePower.h
//  Implementation of the Class ReactivePower
//  Created on:      13-Apr-2020 2:51:38 PM
//  Original author: shu
///////////////////////////////////////////////////////////

#if !defined(EA_1EC969BB_A61B_4cc1_A7D6_090A5A736569__INCLUDED_)
#define EA_1EC969BB_A61B_4cc1_A7D6_090A5A736569__INCLUDED_

#include "PowerOfTenMultiplierType.h"
#include "Int16.h"

/**
 * The reactive power Q (in var) is the product of root mean square (RMS) voltage,
 * RMS current, and sin(theta) where theta is the phase angle of current relative
 * to voltage.
 */
class ReactivePower
{

public:
	ReactivePower();
	virtual ~ReactivePower();
	/**
	 * Specifies exponent of uom.
	 */
	PowerOfTenMultiplierType multiplier;
	/**
	 * Value in volt-amperes reactive (var) (uom 63)
	 */
	Int16 value;

};
#endif // !defined(EA_1EC969BB_A61B_4cc1_A7D6_090A5A736569__INCLUDED_)
