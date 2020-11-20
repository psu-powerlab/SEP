///////////////////////////////////////////////////////////
//  BillingPeriodListLink.h
//  Implementation of the Class BillingPeriodListLink
//  Created on:      13-Apr-2020 2:51:21 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_F05180B8_4B04_44f9_ACCB_162EF85F7715__INCLUDED_)
#define EA_F05180B8_4B04_44f9_ACCB_162EF85F7715__INCLUDED_

#include "ListLink.h"

/**
 * SHALL contain a Link to a List of BillingPeriod instances.
 */
class BillingPeriodListLink : public ListLink
{

public:
	BillingPeriodListLink();
	virtual ~BillingPeriodListLink();

};
#endif // !defined(EA_F05180B8_4B04_44f9_ACCB_162EF85F7715__INCLUDED_)
