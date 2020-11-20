///////////////////////////////////////////////////////////
//  SupplyInterruptionOverrideList.h
//  Implementation of the Class SupplyInterruptionOverrideList
//  Created on:      13-Apr-2020 2:51:43 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_58E3B05B_DEBD_479b_B3E5_43F9D5A11BCE__INCLUDED_)
#define EA_58E3B05B_DEBD_479b_B3E5_43F9D5A11BCE__INCLUDED_

#include "List.h"
#include "SupplyInterruptionOverride.h"

/**
 * A List element to hold SupplyInterruptionOverride objects.
 */
class SupplyInterruptionOverrideList : public List
{

public:
	SupplyInterruptionOverrideList();
	virtual ~SupplyInterruptionOverrideList();
	SupplyInterruptionOverride *m_SupplyInterruptionOverride;

};
#endif // !defined(EA_58E3B05B_DEBD_479b_B3E5_43F9D5A11BCE__INCLUDED_)
