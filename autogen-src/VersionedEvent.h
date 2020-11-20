///////////////////////////////////////////////////////////
//  VersionedEvent.h
//  Implementation of the Class VersionedEvent
//  Created on:      13-Apr-2020 2:51:47 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_088CDEED_956D_494e_A1CF_2FFFF7BEEF42__INCLUDED_)
#define EA_088CDEED_956D_494e_A1CF_2FFFF7BEEF42__INCLUDED_

#include "UInt8.h"
#include "Event.h"

/**
 * Superclass for events that may be updated. If a representation of an object
 * (identified by mRID) is found with a larger version than previous
 * representations, hosts SHOULD replace their stored copy with the newer version. 
 */
class VersionedEvent : public Event
{

public:
	VersionedEvent();
	virtual ~VersionedEvent();
	/**
	 * Upon initial creation of an object, version SHALL be set to "0". Upon each
	 * update, version SHALL be updated to the next number. 
	 */
	UInt8 version;

};
#endif // !defined(EA_088CDEED_956D_494e_A1CF_2FFFF7BEEF42__INCLUDED_)
