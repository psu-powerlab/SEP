///////////////////////////////////////////////////////////
//  SelfDeviceLink.h
//  Implementation of the Class SelfDeviceLink
//  Created on:      13-Apr-2020 2:51:41 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_8040E480_BE13_4de1_AABC_82F44B7ADDA6__INCLUDED_)
#define EA_8040E480_BE13_4de1_AABC_82F44B7ADDA6__INCLUDED_

#include "Link.h"

/**
 * SHALL contain a Link to an instance of SelfDevice.
 */
class SelfDeviceLink : public Link
{

public:
	SelfDeviceLink();
	virtual ~SelfDeviceLink();

};
#endif // !defined(EA_8040E480_BE13_4de1_AABC_82F44B7ADDA6__INCLUDED_)
