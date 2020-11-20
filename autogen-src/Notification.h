///////////////////////////////////////////////////////////
//  Notification.h
//  Implementation of the Class Notification
//  Created on:      13-Apr-2020 2:51:36 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_5B3888D1_88D5_43fc_A76C_18277DE872AF__INCLUDED_)
#define EA_5B3888D1_88D5_43fc_A76C_18277DE872AF__INCLUDED_

#include "anyURI.h"
#include "UInt8.h"
#include "SubscriptionBase.h"
#include "Resource.h"

/**
 * Holds the information related to a client subscription to receive updates to a
 * resource automatically. The actual resources may be passed in the Notification
 * by specifying a specific xsi:type for the Resource and passing the full
 * representation. 
 */
class Notification : public SubscriptionBase
{

public:
	Notification();
	virtual ~Notification();
	/**
	 * The new location of the resource, if moved. This attribute SHALL be a fully-
	 * qualified absolute URI, not a relative reference.
	 */
	anyURI newResourceURI;
	/**
	 * 0 = Default Status
	 * 1 = Subscription canceled, no additional information
	 * 2 = Subscription canceled, resource moved
	 * 3 = Subscription canceled, resource definition changed (e.g., a new version of
	 * IEEE 2030.5)
	 * 4 = Subscription canceled, resource deleted
	 * All other values reserved. 
	 */
	UInt8 status;
	/**
	 * The subscription from which this notification was triggered. This attribute
	 * SHALL be a fully-qualified absolute URI, not a relative reference.
	 */
	anyURI subscriptionURI;
	Resource *m_Resource;

};
#endif // !defined(EA_5B3888D1_88D5_43fc_A76C_18277DE872AF__INCLUDED_)
