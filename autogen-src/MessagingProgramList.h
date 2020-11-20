///////////////////////////////////////////////////////////
//  MessagingProgramList.h
//  Implementation of the Class MessagingProgramList
//  Created on:      13-Apr-2020 2:51:34 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_C4B973C3_FF0D_487a_9584_13EDE8AD631B__INCLUDED_)
#define EA_C4B973C3_FF0D_487a_9584_13EDE8AD631B__INCLUDED_

#include "UInt32.h"
#include "SubscribableList.h"
#include "MessagingProgram.h"

/**
 * A List element to hold MessagingProgram objects.
 */
class MessagingProgramList : public SubscribableList
{

public:
	MessagingProgramList();
	virtual ~MessagingProgramList();
	/**
	 * The default polling rate for this function set (this resource and all resources
	 * below), in seconds. If not specified, a default of 900 seconds (15 minutes) is
	 * used. It is RECOMMENDED a client poll the resources of this function set every
	 * pollRate seconds.
	 */
	UInt32 pollRate;
	MessagingProgram *m_MessagingProgram;

};
#endif // !defined(EA_C4B973C3_FF0D_487a_9584_13EDE8AD631B__INCLUDED_)
