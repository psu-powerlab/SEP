///////////////////////////////////////////////////////////
//  DeviceStatusLink.h
//  Implementation of the Class DeviceStatusLink
//  Created on:      13-Apr-2020 2:51:27 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_D0AF4EFA_843D_4589_94C5_56372B19973E__INCLUDED_)
#define EA_D0AF4EFA_843D_4589_94C5_56372B19973E__INCLUDED_

#include "Link.h"

/**
 * SHALL contain a Link to an instance of DeviceStatus.
 */
class DeviceStatusLink : public Link
{

public:
	DeviceStatusLink();
	virtual ~DeviceStatusLink();

};
#endif // !defined(EA_D0AF4EFA_843D_4589_94C5_56372B19973E__INCLUDED_)
