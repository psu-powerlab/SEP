///////////////////////////////////////////////////////////
//  ApparentPower.h
//  Implementation of the Class ApparentPower
//  Created on:      13-Apr-2020 2:51:20 PM
//  Original author: shu
///////////////////////////////////////////////////////////

#if !defined(EA_F514CCDA_5B27_4389_8F3E_F76FB129F6AA__INCLUDED_)
#define EA_F514CCDA_5B27_4389_8F3E_F76FB129F6AA__INCLUDED_

#include "PowerOfTenMultiplierType.h"
#include "UInt16.h"

/**
 * The apparent power S (in VA) is the product of root mean square (RMS) voltage
 * and RMS current.
 */
class ApparentPower
{

public:
	ApparentPower();
	virtual ~ApparentPower();
	/**
	 * Specifies exponent of uom.
	 */
	PowerOfTenMultiplierType multiplier;
	/**
	 * Value in volt-amperes (uom 61)
	 */
	UInt16 value;

};
#endif // !defined(EA_F514CCDA_5B27_4389_8F3E_F76FB129F6AA__INCLUDED_)
