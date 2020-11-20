///////////////////////////////////////////////////////////
//  DERProgramList.h
//  Implementation of the Class DERProgramList
//  Created on:      13-Apr-2020 2:51:26 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_9966504E_7DAE_4f83_A107_884488D0926D__INCLUDED_)
#define EA_9966504E_7DAE_4f83_A107_884488D0926D__INCLUDED_

#include "UInt32.h"
#include "DERProgram.h"
#include "SubscribableList.h"

/**
 * A List element to hold DERProgram objects.
 */
class DERProgramList : public SubscribableList
{

public:
	DERProgramList();
	virtual ~DERProgramList();
	/**
	 * The default polling rate for this function set (this resource and all resources
	 * below), in seconds. If not specified, a default of 900 seconds (15 minutes) is
	 * used. It is RECOMMENDED a client poll the resources of this function set every
	 * pollRate seconds.
	 */
	UInt32 pollRate;
	DERProgram *m_DERProgram;

};
#endif // !defined(EA_9966504E_7DAE_4f83_A107_884488D0926D__INCLUDED_)
