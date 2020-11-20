///////////////////////////////////////////////////////////
//  UsagePointList.h
//  Implementation of the Class UsagePointList
//  Created on:      13-Apr-2020 2:51:47 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_2C60F494_1337_4afc_B0F9_91B623FF6D96__INCLUDED_)
#define EA_2C60F494_1337_4afc_B0F9_91B623FF6D96__INCLUDED_

#include "UInt32.h"
#include "SubscribableList.h"
#include "UsagePoint.h"

/**
 * A List element to hold UsagePoint objects.
 */
class UsagePointList : public SubscribableList
{

public:
	UsagePointList();
	virtual ~UsagePointList();
	/**
	 * The default polling rate for this function set (this resource and all resources
	 * below), in seconds. If not specified, a default of 900 seconds (15 minutes) is
	 * used. It is RECOMMENDED a client poll the resources of this function set every
	 * pollRate seconds.
	 */
	UInt32 pollRate;
	UsagePoint *m_UsagePoint;

};
#endif // !defined(EA_2C60F494_1337_4afc_B0F9_91B623FF6D96__INCLUDED_)
