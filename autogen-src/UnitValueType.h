///////////////////////////////////////////////////////////
//  UnitValueType.h
//  Implementation of the Class UnitValueType
//  Created on:      13-Apr-2020 2:51:46 PM
//  Original author: shu
///////////////////////////////////////////////////////////

#if !defined(EA_5FE04EF8_766E_48c2_ACBC_D13B09A59545__INCLUDED_)
#define EA_5FE04EF8_766E_48c2_ACBC_D13B09A59545__INCLUDED_

#include "PowerOfTenMultiplierType.h"
#include "UomType.h"
#include "Int32.h"

/**
 * Type for specification of a specific value, with units and power of ten
 * multiplier.
 */
class UnitValueType
{

public:
	UnitValueType();
	virtual ~UnitValueType();
	/**
	 * Multiplier for 'unit'.
	 */
	PowerOfTenMultiplierType multiplier;
	/**
	 * Unit in symbol
	 */
	UomType unit;
	/**
	 * Value in units specified
	 */
	Int32 value;

};
#endif // !defined(EA_5FE04EF8_766E_48c2_ACBC_D13B09A59545__INCLUDED_)
