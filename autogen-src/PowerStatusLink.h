///////////////////////////////////////////////////////////
//  PowerStatusLink.h
//  Implementation of the Class PowerStatusLink
//  Created on:      13-Apr-2020 2:51:37 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_7F636FDB_0F54_4bf3_BFB5_7B46F0D98CBC__INCLUDED_)
#define EA_7F636FDB_0F54_4bf3_BFB5_7B46F0D98CBC__INCLUDED_

#include "Link.h"

/**
 * SHALL contain a Link to an instance of PowerStatus.
 */
class PowerStatusLink : public Link
{

public:
	PowerStatusLink();
	virtual ~PowerStatusLink();

};
#endif // !defined(EA_7F636FDB_0F54_4bf3_BFB5_7B46F0D98CBC__INCLUDED_)
