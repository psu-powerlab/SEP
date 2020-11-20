///////////////////////////////////////////////////////////
//  BillingReadingListLink.h
//  Implementation of the Class BillingReadingListLink
//  Created on:      13-Apr-2020 2:51:21 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_FFC66584_F07C_40d4_BFA9_AF958DF25FB2__INCLUDED_)
#define EA_FFC66584_F07C_40d4_BFA9_AF958DF25FB2__INCLUDED_

#include "ListLink.h"

/**
 * SHALL contain a Link to a List of BillingReading instances.
 */
class BillingReadingListLink : public ListLink
{

public:
	BillingReadingListLink();
	virtual ~BillingReadingListLink();

};
#endif // !defined(EA_FFC66584_F07C_40d4_BFA9_AF958DF25FB2__INCLUDED_)
