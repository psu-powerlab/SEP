///////////////////////////////////////////////////////////
//  SubscriptionBase.h
//  Implementation of the Class SubscriptionBase
//  Created on:      13-Apr-2020 2:51:43 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_F4B9389E_0B04_496a_9EDE_DC4FF53D148B__INCLUDED_)
#define EA_F4B9389E_0B04_496a_9EDE_DC4FF53D148B__INCLUDED_

#include "anyURI.h"
#include "Resource.h"

/**
 * Holds the information related to a client subscription to receive updates to a
 * resource automatically. The actual resources may be passed in the Notification
 * by specifying a specific xsi:type for the Resource and passing the full
 * representation. 
 */
class SubscriptionBase : public Resource
{

public:
	SubscriptionBase();
	virtual ~SubscriptionBase();
	/**
	 * The resource for which the subscription applies. Query string parameters SHALL
	 * NOT be specified when subscribing to list resources.  Should a query string
	 * parameter be specified, servers SHALL ignore them.
	 */
	anyURI subscribedResource;

};
#endif // !defined(EA_F4B9389E_0B04_496a_9EDE_DC4FF53D148B__INCLUDED_)
