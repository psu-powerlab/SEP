///////////////////////////////////////////////////////////
//  LogEventList.h
//  Implementation of the Class LogEventList
//  Created on:      13-Apr-2020 2:51:33 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_B438A2C1_9953_497a_8BE0_A0860AF7DD25__INCLUDED_)
#define EA_B438A2C1_9953_497a_8BE0_A0860AF7DD25__INCLUDED_

#include "UInt32.h"
#include "SubscribableList.h"
#include "LogEvent.h"

/**
 * A List element to hold LogEvent objects.
 */
class LogEventList : public SubscribableList
{

public:
	LogEventList();
	virtual ~LogEventList();
	/**
	 * The default polling rate for this function set (this resource and all resources
	 * below), in seconds. If not specified, a default of 900 seconds (15 minutes) is
	 * used. It is RECOMMENDED a client poll the resources of this function set every
	 * pollRate seconds.
	 */
	UInt32 pollRate;
	LogEvent *m_LogEvent;

};
#endif // !defined(EA_B438A2C1_9953_497a_8BE0_A0860AF7DD25__INCLUDED_)
