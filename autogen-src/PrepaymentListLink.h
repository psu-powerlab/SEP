///////////////////////////////////////////////////////////
//  PrepaymentListLink.h
//  Implementation of the Class PrepaymentListLink
//  Created on:      13-Apr-2020 2:51:37 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_3ACDA911_160F_456a_BE81_471055640EDA__INCLUDED_)
#define EA_3ACDA911_160F_456a_BE81_471055640EDA__INCLUDED_

#include "ListLink.h"

/**
 * SHALL contain a Link to a List of Prepayment instances.
 */
class PrepaymentListLink : public ListLink
{

public:
	PrepaymentListLink();
	virtual ~PrepaymentListLink();

};
#endif // !defined(EA_3ACDA911_160F_456a_BE81_471055640EDA__INCLUDED_)
