///////////////////////////////////////////////////////////
//  VersionedIdentifiedObject.h
//  Implementation of the Class VersionedIdentifiedObject
//  Created on:      13-Apr-2020 2:51:47 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_4A9B2537_5246_45e1_B121_5FDA5EB6736C__INCLUDED_)
#define EA_4A9B2537_5246_45e1_B121_5FDA5EB6736C__INCLUDED_

#include "UInt8.h"
#include "IdentifiedObject.h"

/**
 * Superclass for objects that may be updated. If a representation of an object
 * (identified by mRID) is found with a larger version than previous
 * representations, hosts SHOULD replace their stored copy with the newer version. 
 */
class VersionedIdentifiedObject : public IdentifiedObject
{

public:
	VersionedIdentifiedObject();
	virtual ~VersionedIdentifiedObject();
	/**
	 * Upon initial creation of an object, version SHALL be set to "0". Upon each
	 * update, version SHALL be updated to the next number. 
	 */
	UInt8 version;

};
#endif // !defined(EA_4A9B2537_5246_45e1_B121_5FDA5EB6736C__INCLUDED_)
