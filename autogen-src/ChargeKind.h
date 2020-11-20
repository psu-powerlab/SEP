///////////////////////////////////////////////////////////
//  ChargeKind.h
//  Implementation of the Class ChargeKind
//  Created on:      13-Apr-2020 2:51:22 PM
///////////////////////////////////////////////////////////

#if !defined(EA_85B2A09E_A572_43bf_A496_99AE6EB012CE__INCLUDED_)
#define EA_85B2A09E_A572_43bf_A496_99AE6EB012CE__INCLUDED_

#include "UInt8.h"

/**
 * Kind of charge.
 * 0 - Consumption Charge
 * 1 - Rebate
 * 2 - Auxiliary Charge
 * 3 - Demand Charge
 * 4 - Tax Charge 
 */
class ChargeKind : public UInt8
{

public:
	ChargeKind();
	virtual ~ChargeKind();

};
#endif // !defined(EA_85B2A09E_A572_43bf_A496_99AE6EB012CE__INCLUDED_)
