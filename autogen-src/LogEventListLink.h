///////////////////////////////////////////////////////////
//  LogEventListLink.h
//  Implementation of the Class LogEventListLink
//  Created on:      13-Apr-2020 2:51:33 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_EC20E0D8_9377_4e0e_9986_8C278A1679EB__INCLUDED_)
#define EA_EC20E0D8_9377_4e0e_9986_8C278A1679EB__INCLUDED_

#include "ListLink.h"

/**
 * SHALL contain a Link to a List of LogEvent instances.
 */
class LogEventListLink : public ListLink
{

public:
	LogEventListLink();
	virtual ~LogEventListLink();

};
#endif // !defined(EA_EC20E0D8_9377_4e0e_9986_8C278A1679EB__INCLUDED_)
