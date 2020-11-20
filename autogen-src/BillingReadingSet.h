///////////////////////////////////////////////////////////
//  BillingReadingSet.h
//  Implementation of the Class BillingReadingSet
//  Created on:      13-Apr-2020 2:51:21 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_4B3C2245_D2AF_4c5d_A14B_13BB9F34787E__INCLUDED_)
#define EA_4B3C2245_D2AF_4c5d_A14B_13BB9F34787E__INCLUDED_

#include "BillingReadingListLink.h"
#include "ReadingSetBase.h"

/**
 * Time sequence of readings of the same reading type. 
 */
class BillingReadingSet : public ReadingSetBase
{

public:
	BillingReadingSet();
	virtual ~BillingReadingSet();
	BillingReadingListLink *m_BillingReadingListLink;

};
#endif // !defined(EA_4B3C2245_D2AF_4c5d_A14B_13BB9F34787E__INCLUDED_)
