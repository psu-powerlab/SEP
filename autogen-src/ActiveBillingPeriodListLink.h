///////////////////////////////////////////////////////////
//  ActiveBillingPeriodListLink.h
//  Implementation of the Class ActiveBillingPeriodListLink
//  Created on:      13-Apr-2020 2:51:19 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_B133F468_729C_41ec_BE5A_80E16EEB2983__INCLUDED_)
#define EA_B133F468_729C_41ec_BE5A_80E16EEB2983__INCLUDED_

#include "ListLink.h"

/**
 * SHALL contain a Link to a List of active BillingPeriod instances.
 */
class ActiveBillingPeriodListLink : public ListLink
{

public:
	ActiveBillingPeriodListLink();
	virtual ~ActiveBillingPeriodListLink();

};
#endif // !defined(EA_B133F468_729C_41ec_BE5A_80E16EEB2983__INCLUDED_)
