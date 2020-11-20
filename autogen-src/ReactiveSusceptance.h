///////////////////////////////////////////////////////////
//  ReactiveSusceptance.h
//  Implementation of the Class ReactiveSusceptance
//  Created on:      13-Apr-2020 2:51:39 PM
//  Original author: shu
///////////////////////////////////////////////////////////

#if !defined(EA_6DC7A099_73AF_49e2_943E_8A61D4871AC5__INCLUDED_)
#define EA_6DC7A099_73AF_49e2_943E_8A61D4871AC5__INCLUDED_

#include "PowerOfTenMultiplierType.h"
#include "UInt16.h"

/**
 * Reactive susceptance
 */
class ReactiveSusceptance
{

public:
	ReactiveSusceptance();
	virtual ~ReactiveSusceptance();
	/**
	 * Specifies exponent of uom.
	 */
	PowerOfTenMultiplierType multiplier;
	/**
	 * Value in siemens (uom 53)
	 */
	UInt16 value;

};
#endif // !defined(EA_6DC7A099_73AF_49e2_943E_8A61D4871AC5__INCLUDED_)
