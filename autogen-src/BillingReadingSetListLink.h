///////////////////////////////////////////////////////////
//  BillingReadingSetListLink.h
//  Implementation of the Class BillingReadingSetListLink
//  Created on:      13-Apr-2020 2:51:21 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_46C459E1_F908_40b4_94D5_A944C02ED725__INCLUDED_)
#define EA_46C459E1_F908_40b4_94D5_A944C02ED725__INCLUDED_

#include "ListLink.h"

/**
 * SHALL contain a Link to a List of BillingReadingSet instances.
 */
class BillingReadingSetListLink : public ListLink
{

public:
	BillingReadingSetListLink();
	virtual ~BillingReadingSetListLink();

};
#endif // !defined(EA_46C459E1_F908_40b4_94D5_A944C02ED725__INCLUDED_)
