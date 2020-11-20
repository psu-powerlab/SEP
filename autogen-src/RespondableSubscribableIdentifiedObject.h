///////////////////////////////////////////////////////////
//  RespondableSubscribableIdentifiedObject.h
//  Implementation of the Class RespondableSubscribableIdentifiedObject
//  Created on:      13-Apr-2020 2:51:40 PM
///////////////////////////////////////////////////////////

#if !defined(EA_0B4012E1_9942_466e_8136_C61D1A81CAC2__INCLUDED_)
#define EA_0B4012E1_9942_466e_8136_C61D1A81CAC2__INCLUDED_

#include "String32.h"
#include "mRIDType.h"
#include "SubscribableType.h"
#include "VersionType.h"
#include "RespondableResource.h"

/**
 * An IdentifiedObject to which a Response can be requested.
 */
class RespondableSubscribableIdentifiedObject : public RespondableResource
{

public:
	RespondableSubscribableIdentifiedObject();
	virtual ~RespondableSubscribableIdentifiedObject();
	/**
	 * The description is a human readable text describing or naming the object. 
	 */
	String32 description;
	/**
	 * The global identifier of the object. 
	 */
	mRIDType mRID;
	/**
	 * Indicates whether or not subscriptions are supported for this resource, and
	 * whether or not conditional (thresholds) are supported. If not specified, is
	 * "not subscribable" (0).
	 */
	SubscribableType subscribable;
	/**
	 * Contains the version number of the object. See the type definition for details. 
	 */
	VersionType version;

};
#endif // !defined(EA_0B4012E1_9942_466e_8136_C61D1A81CAC2__INCLUDED_)
