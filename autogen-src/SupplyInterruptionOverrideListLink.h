///////////////////////////////////////////////////////////
//  SupplyInterruptionOverrideListLink.h
//  Implementation of the Class SupplyInterruptionOverrideListLink
//  Created on:      13-Apr-2020 2:51:43 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_AD9D4329_B660_4af0_A512_0F4DD58454CC__INCLUDED_)
#define EA_AD9D4329_B660_4af0_A512_0F4DD58454CC__INCLUDED_

#include "ListLink.h"

/**
 * SHALL contain a Link to a List of SupplyInterruptionOverride instances.
 */
class SupplyInterruptionOverrideListLink : public ListLink
{

public:
	SupplyInterruptionOverrideListLink();
	virtual ~SupplyInterruptionOverrideListLink();

};
#endif // !defined(EA_AD9D4329_B660_4af0_A512_0F4DD58454CC__INCLUDED_)
