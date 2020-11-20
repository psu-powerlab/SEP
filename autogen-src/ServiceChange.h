///////////////////////////////////////////////////////////
//  ServiceChange.h
//  Implementation of the Class ServiceChange
//  Created on:      13-Apr-2020 2:51:41 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_1E838269_5573_4ca9_BBC5_4A4CC92ADF17__INCLUDED_)
#define EA_1E838269_5573_4ca9_BBC5_4A4CC92ADF17__INCLUDED_

#include "ServiceStatusType.h"
#include "TimeType.h"

/**
 * Specifies a change to the service status. 
 */
class ServiceChange
{

public:
	ServiceChange();
	virtual ~ServiceChange();
	/**
	 * The new service status, to take effect at the time specified by startTime
	 */
	ServiceStatusType newStatus;
	/**
	 * The date/time when the change is to take effect.
	 */
	TimeType startTime;

};
#endif // !defined(EA_1E838269_5573_4ca9_BBC5_4A4CC92ADF17__INCLUDED_)
