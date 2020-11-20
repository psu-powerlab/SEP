///////////////////////////////////////////////////////////
//  ActiveSupplyInterruptionOverrideListLink.h
//  Implementation of the Class ActiveSupplyInterruptionOverrideListLink
//  Created on:      13-Apr-2020 2:51:20 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_33831381_92BA_40b3_A704_B714B5DB3767__INCLUDED_)
#define EA_33831381_92BA_40b3_A704_B714B5DB3767__INCLUDED_

#include "ListLink.h"

/**
 * SHALL contain a Link to a List of active SupplyInterruptionOverride instances.
 */
class ActiveSupplyInterruptionOverrideListLink : public ListLink
{

public:
	ActiveSupplyInterruptionOverrideListLink();
	virtual ~ActiveSupplyInterruptionOverrideListLink();

};
#endif // !defined(EA_33831381_92BA_40b3_A704_B714B5DB3767__INCLUDED_)
