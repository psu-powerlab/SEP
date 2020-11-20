///////////////////////////////////////////////////////////
//  SubscriptionList.h
//  Implementation of the Class SubscriptionList
//  Created on:      13-Apr-2020 2:51:43 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_1BE44C3F_BA36_4772_A01E_8A7FED715873__INCLUDED_)
#define EA_1BE44C3F_BA36_4772_A01E_8A7FED715873__INCLUDED_

#include "UInt32.h"
#include "List.h"
#include "Subscription.h"

/**
 * A List element to hold Subscription objects.
 */
class SubscriptionList : public List
{

public:
	SubscriptionList();
	virtual ~SubscriptionList();
	/**
	 * The default polling rate for this function set (this resource and all resources
	 * below), in seconds. If not specified, a default of 900 seconds (15 minutes) is
	 * used. It is RECOMMENDED a client poll the resources of this function set every
	 * pollRate seconds.
	 */
	UInt32 pollRate;
	Subscription *m_Subscription;

};
#endif // !defined(EA_1BE44C3F_BA36_4772_A01E_8A7FED715873__INCLUDED_)
