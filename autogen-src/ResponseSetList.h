///////////////////////////////////////////////////////////
//  ResponseSetList.h
//  Implementation of the Class ResponseSetList
//  Created on:      13-Apr-2020 2:51:40 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_C3E10CD0_F2A9_451b_A3EF_53044AE492FF__INCLUDED_)
#define EA_C3E10CD0_F2A9_451b_A3EF_53044AE492FF__INCLUDED_

#include "UInt32.h"
#include "List.h"
#include "ResponseSet.h"

/**
 * A List element to hold ResponseSet objects.
 */
class ResponseSetList : public List
{

public:
	ResponseSetList();
	virtual ~ResponseSetList();
	/**
	 * The default polling rate for this function set (this resource and all resources
	 * below), in seconds. If not specified, a default of 900 seconds (15 minutes) is
	 * used. It is RECOMMENDED a client poll the resources of this function set every
	 * pollRate seconds.
	 */
	UInt32 pollRate;
	ResponseSet *m_ResponseSet;

};
#endif // !defined(EA_C3E10CD0_F2A9_451b_A3EF_53044AE492FF__INCLUDED_)
