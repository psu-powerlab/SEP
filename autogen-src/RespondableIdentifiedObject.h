///////////////////////////////////////////////////////////
//  RespondableIdentifiedObject.h
//  Implementation of the Class RespondableIdentifiedObject
//  Created on:      13-Apr-2020 2:51:40 PM
///////////////////////////////////////////////////////////

#if !defined(EA_5ECBB2A1_18BA_4859_AA98_432310B337CF__INCLUDED_)
#define EA_5ECBB2A1_18BA_4859_AA98_432310B337CF__INCLUDED_

#include "String32.h"
#include "mRIDType.h"
#include "VersionType.h"
#include "RespondableResource.h"

/**
 * An IdentifiedObject to which a Response can be requested.
 */
class RespondableIdentifiedObject : public RespondableResource
{

public:
	RespondableIdentifiedObject();
	virtual ~RespondableIdentifiedObject();
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
#endif // !defined(EA_5ECBB2A1_18BA_4859_AA98_432310B337CF__INCLUDED_)
