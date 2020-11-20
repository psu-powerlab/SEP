///////////////////////////////////////////////////////////
//  NotificationList.h
//  Implementation of the Class NotificationList
//  Created on:      13-Apr-2020 2:51:36 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_0D84DFBC_147F_4fcd_AD3F_F5E4ED8551D6__INCLUDED_)
#define EA_0D84DFBC_147F_4fcd_AD3F_F5E4ED8551D6__INCLUDED_

#include "List.h"
#include "Notification.h"

/**
 * A List element to hold Notification objects.
 */
class NotificationList : public List
{

public:
	NotificationList();
	virtual ~NotificationList();
	Notification *m_Notification;

};
#endif // !defined(EA_0D84DFBC_147F_4fcd_AD3F_F5E4ED8551D6__INCLUDED_)
