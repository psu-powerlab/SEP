///////////////////////////////////////////////////////////
//  RealEnergy.h
//  Implementation of the Class RealEnergy
//  Created on:      13-Apr-2020 2:51:39 PM
//  Original author: shu
///////////////////////////////////////////////////////////

#if !defined(EA_17E5344B_59F7_44ea_9441_CB4975CF2BF6__INCLUDED_)
#define EA_17E5344B_59F7_44ea_9441_CB4975CF2BF6__INCLUDED_

#include "PowerOfTenMultiplierType.h"
#include "UInt48.h"

/**
 * Real electrical energy
 */
class RealEnergy
{

public:
	RealEnergy();
	virtual ~RealEnergy();
	/**
	 * Multiplier for 'unit'.
	 */
	PowerOfTenMultiplierType multiplier;
	/**
	 * Value of the energy in Watt-hours. (uom 72)
	 */
	UInt48 value;

};
#endif // !defined(EA_17E5344B_59F7_44ea_9441_CB4975CF2BF6__INCLUDED_)
