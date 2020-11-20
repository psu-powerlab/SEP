///////////////////////////////////////////////////////////
//  TextResponse.h
//  Implementation of the Class TextResponse
//  Created on:      13-Apr-2020 2:51:45 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_93F42EB0_D391_4746_B418_6B162EA668D4__INCLUDED_)
#define EA_93F42EB0_D391_4746_B418_6B162EA668D4__INCLUDED_

#include "Response.h"

/**
 * A response to a text message
 */
class TextResponse : public Response
{

public:
	TextResponse();
	virtual ~TextResponse();

};
#endif // !defined(EA_93F42EB0_D391_4746_B418_6B162EA668D4__INCLUDED_)
