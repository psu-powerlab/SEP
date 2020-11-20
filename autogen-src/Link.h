///////////////////////////////////////////////////////////
//  Link.h
//  Implementation of the Class Link
//  Created on:      13-Apr-2020 2:51:32 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_9EA24441_4B32_49fd_8D6B_6C0089316DE8__INCLUDED_)
#define EA_9EA24441_4B32_49fd_8D6B_6C0089316DE8__INCLUDED_

#include "anyURI.h"

/**
 * Links provide a reference, via URI, to another resource.
 */
class Link
{

public:
	Link();
	virtual ~Link();
	/**
	 * A URI reference.
	 */
	sep::anyURI href;

};
#endif // !defined(EA_9EA24441_4B32_49fd_8D6B_6C0089316DE8__INCLUDED_)
