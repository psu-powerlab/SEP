///////////////////////////////////////////////////////////
//  DemandResponseProgramList.h
//  Implementation of the Class DemandResponseProgramList
//  Created on:      13-Apr-2020 2:51:24 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_A68D1739_2FFC_401a_A3ED_69CFE956741E__INCLUDED_)
#define EA_A68D1739_2FFC_401a_A3ED_69CFE956741E__INCLUDED_

#include "UInt32.h"
#include "SubscribableList.h"
#include "DemandResponseProgram.h"

/**
 * A List element to hold DemandResponseProgram objects.
 */
class DemandResponseProgramList : public SubscribableList
{

public:
	DemandResponseProgramList();
	virtual ~DemandResponseProgramList();
	/**
	 * The default polling rate for this function set (this resource and all resources
	 * below), in seconds. If not specified, a default of 900 seconds (15 minutes) is
	 * used. It is RECOMMENDED a client poll the resources of this function set every
	 * pollRate seconds.
	 */
	UInt32 pollRate;
	DemandResponseProgram *m_DemandResponseProgram;

};
#endif // !defined(EA_A68D1739_2FFC_401a_A3ED_69CFE956741E__INCLUDED_)
