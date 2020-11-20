///////////////////////////////////////////////////////////
//  BillingPeriodList.h
//  Implementation of the Class BillingPeriodList
//  Created on:      13-Apr-2020 2:51:21 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_2E760451_DC39_48e9_88DB_B1D520CBAB89__INCLUDED_)
#define EA_2E760451_DC39_48e9_88DB_B1D520CBAB89__INCLUDED_

#include "SubscribableList.h"
#include "BillingPeriod.h"

/**
 * A List element to hold BillingPeriod objects.
 */
class BillingPeriodList : public SubscribableList
{

public:
	BillingPeriodList();
	virtual ~BillingPeriodList();
	BillingPeriod *m_BillingPeriod;

};
#endif // !defined(EA_2E760451_DC39_48e9_88DB_B1D520CBAB89__INCLUDED_)
