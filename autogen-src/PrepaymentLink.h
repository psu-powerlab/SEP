///////////////////////////////////////////////////////////
//  PrepaymentLink.h
//  Implementation of the Class PrepaymentLink
//  Created on:      13-Apr-2020 2:51:37 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_9A0011D9_DCCC_4bcb_B4A0_4EB382C2EECC__INCLUDED_)
#define EA_9A0011D9_DCCC_4bcb_B4A0_4EB382C2EECC__INCLUDED_

#include "Link.h"

/**
 * SHALL contain a Link to an instance of Prepayment.
 */
class PrepaymentLink : public Link
{

public:
	PrepaymentLink();
	virtual ~PrepaymentLink();

};
#endif // !defined(EA_9A0011D9_DCCC_4bcb_B4A0_4EB382C2EECC__INCLUDED_)
