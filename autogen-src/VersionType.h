///////////////////////////////////////////////////////////
//  VersionType.h
//  Implementation of the Class VersionType
//  Created on:      13-Apr-2020 2:51:47 PM
//  Original author: vanausse
///////////////////////////////////////////////////////////

#if !defined(EA_3F8A3099_0465_4ae9_9CE0_EB9F324BB267__INCLUDED_)
#define EA_3F8A3099_0465_4ae9_9CE0_EB9F324BB267__INCLUDED_

#include "UInt16.h"

/**
 * Version SHALL indicate a distinct identifier for each revision of an
 * IdentifiedObject. If not specified, a default version of "0" (initial version)
 * SHALL be assumed. Upon modification of any IdentifiedObject, the mRID SHALL
 * remain the same, but the version SHALL be incremented. Servers MAY NOT modify
 * objects that they did not create, unless they were notified of the change from
 * the entity controlling the object's PEN. 
 */
class VersionType : public UInt16
{

public:
	VersionType();
	virtual ~VersionType();

};
#endif // !defined(EA_3F8A3099_0465_4ae9_9CE0_EB9F324BB267__INCLUDED_)
