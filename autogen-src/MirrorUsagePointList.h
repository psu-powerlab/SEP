///////////////////////////////////////////////////////////
//  MirrorUsagePointList.h
//  Implementation of the Class MirrorUsagePointList
//  Created on:      13-Apr-2020 2:51:35 PM
//  Original author: gfalendy
///////////////////////////////////////////////////////////

#if !defined(EA_84673FAE_73A7_4d2a_A860_AE827C551222__INCLUDED_)
#define EA_84673FAE_73A7_4d2a_A860_AE827C551222__INCLUDED_

#include "UInt32.h"
#include "List.h"
#include "MirrorUsagePoint.h"

/**
 * A List of MirrorUsagePoint instances.
 */
class MirrorUsagePointList : public List
{

public:
	MirrorUsagePointList();
	virtual ~MirrorUsagePointList();
	/**
	 * The default polling rate for this function set (this resource and all resources
	 * below), in seconds. If not specified, a default of 900 seconds (15 minutes) is
	 * used. It is RECOMMENDED a client poll the resources of this function set every
	 * pollRate seconds.
	 */
	UInt32 pollRate;
	MirrorUsagePoint *m_MirrorUsagePoint;

};
#endif // !defined(EA_84673FAE_73A7_4d2a_A860_AE827C551222__INCLUDED_)
