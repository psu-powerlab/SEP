///////////////////////////////////////////////////////////
//  AssociatedUsagePointLink.h
//  Implementation of the Class AssociatedUsagePointLink
//  Created on:      13-Apr-2020 2:51:21 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_8AFBF46A_0DE3_4b94_A95B_F66585DA3121__INCLUDED_)
#define EA_8AFBF46A_0DE3_4b94_A95B_F66585DA3121__INCLUDED_

#include "Link.h"

/**
 * SHALL contain a Link to an instance of UsagePoint.  If present, this is the
 * submeter that monitors the DER output.
 */
class AssociatedUsagePointLink : public Link
{

public:
	AssociatedUsagePointLink();
	virtual ~AssociatedUsagePointLink();

};
#endif // !defined(EA_8AFBF46A_0DE3_4b94_A95B_F66585DA3121__INCLUDED_)
