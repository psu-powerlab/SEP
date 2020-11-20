///////////////////////////////////////////////////////////
//  SignedRealEnergy.h
//  Implementation of the Class SignedRealEnergy
//  Created on:      13-Apr-2020 2:51:42 PM
//  Original author: shu
///////////////////////////////////////////////////////////

#if !defined(EA_D58C5784_78D1_4838_A6B2_1F6513479B6C__INCLUDED_)
#define EA_D58C5784_78D1_4838_A6B2_1F6513479B6C__INCLUDED_

#include "PowerOfTenMultiplierType.h"
#include "Int48.h"

/**
 * Real electrical energy, signed.
 */
class SignedRealEnergy
{

public:
	SignedRealEnergy();
	virtual ~SignedRealEnergy();
	/**
	 * Multiplier for 'unit'.
	 */
	PowerOfTenMultiplierType multiplier;
	/**
	 * Value of the energy in Watt-hours. (uom 72)
	 */
	Int48 value;

};
#endif // !defined(EA_D58C5784_78D1_4838_A6B2_1F6513479B6C__INCLUDED_)
