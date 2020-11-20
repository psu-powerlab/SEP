///////////////////////////////////////////////////////////
//  Error.h
//  Implementation of the Class Error
//  Created on:      13-Apr-2020 2:51:28 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_3E4CF564_FED7_43a3_B1AC_67767DC04E8E__INCLUDED_)
#define EA_3E4CF564_FED7_43a3_B1AC_67767DC04E8E__INCLUDED_

#include "UInt16.h"

/**
 * Contains information about the nature of an error if a request could not be
 * completed successfully. 
 */
class Error
{

public:
	Error();
	virtual ~Error();
	/**
	 * Contains the number of seconds the client SHOULD wait before retrying the
	 * request. 
	 */
	UInt16 maxRetryDuration;
	/**
	 * Code indicating the reason for failure.
	 * 
	 * 0 - Invalid request format
	 * 1 - Invalid request values (e.g. invalid threshold values)
	 * 2 - Resource limit reached
	 * 3 - Conditional subscription field not supported
	 * 4 - Maximum request frequency exceeded
	 * All other values reserved
	 */
	UInt16 reasonCode;

};
#endif // !defined(EA_3E4CF564_FED7_43a3_B1AC_67767DC04E8E__INCLUDED_)
