///////////////////////////////////////////////////////////
//  SubscribableIdentifiedObject.h
//  Implementation of the Class SubscribableIdentifiedObject
//  Created on:      13-Apr-2020 2:51:43 PM
///////////////////////////////////////////////////////////

#if !defined(EA_848B14C0_47C8_4929_B962_569CE61F7347__INCLUDED_)
#define EA_848B14C0_47C8_4929_B962_569CE61F7347__INCLUDED_

#include "String32.h"
#include "mRIDType.h"
#include "VersionType.h"
#include "SubscribableResource.h"

/**
 * An IdentifiedObject to which a Subscription can be requested. 
 */
class SubscribableIdentifiedObject : public SubscribableResource
{

public:
	SubscribableIdentifiedObject();
	virtual ~SubscribableIdentifiedObject();
	/**
	 * The description is a human readable text describing or naming the object. 
	 */
	String32 description;
	/**
	 * The global identifier of the object. 
	 */
	mRIDType mRID;
	/**
	 * Contains the version number of the object. See the type definition for details. 
	 */
	VersionType version;

};
#endif // !defined(EA_848B14C0_47C8_4929_B962_569CE61F7347__INCLUDED_)
