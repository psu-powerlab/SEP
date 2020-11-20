///////////////////////////////////////////////////////////
//  BillingReadingList.h
//  Implementation of the Class BillingReadingList
//  Created on:      13-Apr-2020 2:51:21 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_FE177FA4_F40D_48ee_9C93_4736DB47A0DF__INCLUDED_)
#define EA_FE177FA4_F40D_48ee_9C93_4736DB47A0DF__INCLUDED_

#include "List.h"
#include "BillingReading.h"

/**
 * A List element to hold BillingReading objects.
 */
class BillingReadingList : public List
{

public:
	BillingReadingList();
	virtual ~BillingReadingList();
	BillingReading *m_BillingReading;

};
#endif // !defined(EA_FE177FA4_F40D_48ee_9C93_4736DB47A0DF__INCLUDED_)
