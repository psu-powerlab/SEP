///////////////////////////////////////////////////////////
//  CurrentDERProgramLink.h
//  Implementation of the Class CurrentDERProgramLink
//  Created on:      13-Apr-2020 2:51:23 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_E52D211A_7A4E_42d1_82FB_D8B942528CD5__INCLUDED_)
#define EA_E52D211A_7A4E_42d1_82FB_D8B942528CD5__INCLUDED_

#include "Link.h"

/**
 * SHALL contain a Link to an instance of DERProgram.  If present, this is the
 * DERProgram containing the currently active DERControl. 
 */
class CurrentDERProgramLink : public Link
{

public:
	CurrentDERProgramLink();
	virtual ~CurrentDERProgramLink();

};
#endif // !defined(EA_E52D211A_7A4E_42d1_82FB_D8B942528CD5__INCLUDED_)
