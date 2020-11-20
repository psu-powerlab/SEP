///////////////////////////////////////////////////////////
//  IdentifiedObject.h
//  Implementation of the Class IdentifiedObject
//  Created on:      13-Apr-2020 2:51:31 PM
///////////////////////////////////////////////////////////

#if !defined(EA_7179500E_EE59_4d90_8856_AF9538DEC400__INCLUDED_)
#define EA_7179500E_EE59_4d90_8856_AF9538DEC400__INCLUDED_

#include "String32.h"
#include "mRIDType.h"
#include "VersionType.h"
#include "Resource.h"

/**
 * This is a root class to provide common naming attributes for all classes
 * needing naming attributes
 */
class IdentifiedObject : public Resource
{

public:
	IdentifiedObject();
	virtual ~IdentifiedObject();
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
#endif // !defined(EA_7179500E_EE59_4d90_8856_AF9538DEC400__INCLUDED_)
