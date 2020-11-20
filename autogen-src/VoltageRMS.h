///////////////////////////////////////////////////////////
//  VoltageRMS.h
//  Implementation of the Class VoltageRMS
//  Created on:      13-Apr-2020 2:51:47 PM
//  Original author: shu
///////////////////////////////////////////////////////////

#if !defined(EA_FCE35435_AD85_4240_B83E_5A9C5C878679__INCLUDED_)
#define EA_FCE35435_AD85_4240_B83E_5A9C5C878679__INCLUDED_

#include "PowerOfTenMultiplierType.h"
#include "UInt16.h"

/**
 * Average electric potential difference between two points.
 */
class VoltageRMS
{

public:
	VoltageRMS();
	virtual ~VoltageRMS();
	/**
	 * Specifies exponent of uom.
	 */
	PowerOfTenMultiplierType multiplier;
	/**
	 * Value in volts RMS (uom 29)
	 */
	UInt16 value;

};
#endif // !defined(EA_FCE35435_AD85_4240_B83E_5A9C5C878679__INCLUDED_)
