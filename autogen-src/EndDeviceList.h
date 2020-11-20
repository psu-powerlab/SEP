///////////////////////////////////////////////////////////
//  EndDeviceList.h
//  Implementation of the Class EndDeviceList
//  Created on:      13-Apr-2020 2:51:28 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_85CCC6DF_A2D5_451f_8EE3_3B513451CD5D__INCLUDED_)
#define EA_85CCC6DF_A2D5_451f_8EE3_3B513451CD5D__INCLUDED_

#include "UInt32.h"
#include "SubscribableList.h"
#include "EndDevice.h"

/**
 * A List element to hold EndDevice objects.
 */
class EndDeviceList : public SubscribableList
{

public:
	EndDeviceList();
	virtual ~EndDeviceList();
	/**
	 * The default polling rate for this function set (this resource and all resources
	 * below), in seconds. If not specified, a default of 900 seconds (15 minutes) is
	 * used. It is RECOMMENDED a client poll the resources of this function set every
	 * pollRate seconds.
	 */
	UInt32 pollRate;
	EndDevice *m_EndDevice;

};
#endif // !defined(EA_85CCC6DF_A2D5_451f_8EE3_3B513451CD5D__INCLUDED_)
