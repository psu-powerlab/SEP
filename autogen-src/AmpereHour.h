///////////////////////////////////////////////////////////
//  AmpereHour.h
//  Implementation of the Class AmpereHour
//  Created on:      13-Apr-2020 2:51:20 PM
//  Original author: shu
///////////////////////////////////////////////////////////

#if !defined(EA_07E5CEB9_036C_41b2_B19A_FC02D9557CB9__INCLUDED_)
#define EA_07E5CEB9_036C_41b2_B19A_FC02D9557CB9__INCLUDED_

#include "PowerOfTenMultiplierType.h"
#include "UInt16.h"

/**
 * Available electric charge
 */
class AmpereHour
{

public:
	AmpereHour();
	virtual ~AmpereHour();
	/**
	 * Specifies exponent of uom.
	 */
	PowerOfTenMultiplierType multiplier;
	/**
	 * Value in ampere-hours (uom 106)
	 */
	UInt16 value;

};
#endif // !defined(EA_07E5CEB9_036C_41b2_B19A_FC02D9557CB9__INCLUDED_)
