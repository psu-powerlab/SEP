///////////////////////////////////////////////////////////
//  CurrentRMS.h
//  Implementation of the Class CurrentRMS
//  Created on:      13-Apr-2020 2:51:23 PM
//  Original author: shu
///////////////////////////////////////////////////////////

#if !defined(EA_A43B337D_2C4D_41eb_8C83_D15751932CE5__INCLUDED_)
#define EA_A43B337D_2C4D_41eb_8C83_D15751932CE5__INCLUDED_

#include "PowerOfTenMultiplierType.h"
#include "UInt16.h"

/**
 * Average flow of charge through a conductor.
 */
class CurrentRMS
{

public:
	CurrentRMS();
	virtual ~CurrentRMS();
	/**
	 * Specifies exponent of value.
	 */
	PowerOfTenMultiplierType multiplier;
	/**
	 * Value in amperes RMS (uom 5)
	 */
	UInt16 value;

};
#endif // !defined(EA_A43B337D_2C4D_41eb_8C83_D15751932CE5__INCLUDED_)
