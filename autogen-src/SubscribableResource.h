///////////////////////////////////////////////////////////
//  SubscribableResource.h
//  Implementation of the Class SubscribableResource
//  Created on:      13-Apr-2020 2:51:43 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_40F8B3F4_40FC_4b5d_A944_1208AE6CC7FE__INCLUDED_)
#define EA_40F8B3F4_40FC_4b5d_A944_1208AE6CC7FE__INCLUDED_

#include "SubscribableType.h"
#include "Resource.h"

/**
 * A Resource to which a Subscription can be requested. 
 */
class SubscribableResource : public Resource
{

public:
	SubscribableResource();
	virtual ~SubscribableResource();
	/**
	 * Indicates whether or not subscriptions are supported for this resource, and
	 * whether or not conditional (thresholds) are supported. If not specified, is
	 * "not subscribable" (0).
	 */
	SubscribableType subscribable;

};
#endif // !defined(EA_40F8B3F4_40FC_4b5d_A944_1208AE6CC7FE__INCLUDED_)
