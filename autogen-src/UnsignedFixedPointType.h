///////////////////////////////////////////////////////////
//  UnsignedFixedPointType.h
//  Implementation of the Class UnsignedFixedPointType
//  Created on:      13-Apr-2020 2:51:46 PM
//  Original author: shu
///////////////////////////////////////////////////////////

#if !defined(EA_5126900A_FDA0_4352_8C19_CF86B619D265__INCLUDED_)
#define EA_5126900A_FDA0_4352_8C19_CF86B619D265__INCLUDED_

#include "PowerOfTenMultiplierType.h"
#include "UInt16.h"

/**
 * Abstract type for specifying an unsigned fixed-point value without a given unit
 * of measure.
 */
class UnsignedFixedPointType
{

public:
	UnsignedFixedPointType();
	virtual ~UnsignedFixedPointType();
	/**
	 * Specifies exponent of uom.
	 */
	PowerOfTenMultiplierType multiplier;
	/**
	 * Dimensionless value
	 */
	UInt16 value;

};
#endif // !defined(EA_5126900A_FDA0_4352_8C19_CF86B619D265__INCLUDED_)
