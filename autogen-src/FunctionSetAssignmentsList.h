///////////////////////////////////////////////////////////
//  FunctionSetAssignmentsList.h
//  Implementation of the Class FunctionSetAssignmentsList
//  Created on:      13-Apr-2020 2:51:30 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_7DE3416C_EA66_4ce3_95CD_6C57BDDCFE34__INCLUDED_)
#define EA_7DE3416C_EA66_4ce3_95CD_6C57BDDCFE34__INCLUDED_

#include "UInt32.h"
#include "SubscribableList.h"
#include "FunctionSetAssignments.h"

/**
 * A List element to hold FunctionSetAssignments objects.
 */
class FunctionSetAssignmentsList : public SubscribableList
{

public:
	FunctionSetAssignmentsList();
	virtual ~FunctionSetAssignmentsList();
	/**
	 * The default polling rate for this function set (this resource and all resources
	 * below), in seconds. If not specified, a default of 900 seconds (15 minutes) is
	 * used. It is RECOMMENDED a client poll the resources of this function set every
	 * pollRate seconds.
	 */
	UInt32 pollRate;
	FunctionSetAssignments *m_FunctionSetAssignments;

};
#endif // !defined(EA_7DE3416C_EA66_4ce3_95CD_6C57BDDCFE34__INCLUDED_)
