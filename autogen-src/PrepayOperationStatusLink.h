///////////////////////////////////////////////////////////
//  PrepayOperationStatusLink.h
//  Implementation of the Class PrepayOperationStatusLink
//  Created on:      13-Apr-2020 2:51:37 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_A6F91FC0_BE36_45aa_B15C_2CFF48EA3A9B__INCLUDED_)
#define EA_A6F91FC0_BE36_45aa_B15C_2CFF48EA3A9B__INCLUDED_

#include "Link.h"

/**
 * SHALL contain a Link to an instance of PrepayOperationStatus.
 */
class PrepayOperationStatusLink : public Link
{

public:
	PrepayOperationStatusLink();
	virtual ~PrepayOperationStatusLink();

};
#endif // !defined(EA_A6F91FC0_BE36_45aa_B15C_2CFF48EA3A9B__INCLUDED_)
