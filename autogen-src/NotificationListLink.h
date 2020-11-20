///////////////////////////////////////////////////////////
//  NotificationListLink.h
//  Implementation of the Class NotificationListLink
//  Created on:      13-Apr-2020 2:51:36 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_B52483CF_D756_4d84_A40C_633FF02866CE__INCLUDED_)
#define EA_B52483CF_D756_4d84_A40C_633FF02866CE__INCLUDED_

#include "ListLink.h"

/**
 * SHALL contain a Link to a List of Notification instances.
 */
class NotificationListLink : public ListLink
{

public:
	NotificationListLink();
	virtual ~NotificationListLink();

};
#endif // !defined(EA_B52483CF_D756_4d84_A40C_633FF02866CE__INCLUDED_)
