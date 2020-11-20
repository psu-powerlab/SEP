///////////////////////////////////////////////////////////
//  LoadShedAvailabilityList.h
//  Implementation of the Class LoadShedAvailabilityList
//  Created on:      13-Apr-2020 2:51:33 PM
//  Original author: 204053373
///////////////////////////////////////////////////////////

#if !defined(EA_7CA6E369_5977_472e_B764_81701C02FD38__INCLUDED_)
#define EA_7CA6E369_5977_472e_B764_81701C02FD38__INCLUDED_

#include "UInt32.h"
#include "List.h"
#include "LoadShedAvailability.h"

/**
 * A List element to hold LoadShedAvailability objects.
 */
class LoadShedAvailabilityList : public List
{

public:
	LoadShedAvailabilityList();
	virtual ~LoadShedAvailabilityList();
	/**
	 * The default polling rate for this function set (this resource and all resources
	 * below), in seconds. If not specified, a default of 900 seconds (15 minutes) is
	 * used. It is RECOMMENDED a client poll the resources of this function set every
	 * pollRate seconds.
	 */
	UInt32 pollRate;
	LoadShedAvailability *m_LoadShedAvailability;

};
#endif // !defined(EA_7CA6E369_5977_472e_B764_81701C02FD38__INCLUDED_)
