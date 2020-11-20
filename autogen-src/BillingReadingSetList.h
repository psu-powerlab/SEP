///////////////////////////////////////////////////////////
//  BillingReadingSetList.h
//  Implementation of the Class BillingReadingSetList
//  Created on:      13-Apr-2020 2:51:21 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_5523DE16_6A76_4753_9F6C_37C5BF957BF7__INCLUDED_)
#define EA_5523DE16_6A76_4753_9F6C_37C5BF957BF7__INCLUDED_

#include "SubscribableList.h"
#include "BillingReadingSet.h"

/**
 * A List element to hold BillingReadingSet objects.
 */
class BillingReadingSetList : public SubscribableList
{

public:
	BillingReadingSetList();
	virtual ~BillingReadingSetList();
	BillingReadingSet *m_BillingReadingSet;

};
#endif // !defined(EA_5523DE16_6A76_4753_9F6C_37C5BF957BF7__INCLUDED_)
