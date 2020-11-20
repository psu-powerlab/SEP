///////////////////////////////////////////////////////////
//  FileLink.h
//  Implementation of the Class FileLink
//  Created on:      13-Apr-2020 2:51:28 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_28F81149_3D99_4ec4_AEC1_51FFFF046ABD__INCLUDED_)
#define EA_28F81149_3D99_4ec4_AEC1_51FFFF046ABD__INCLUDED_

#include "Link.h"

/**
 * This element MUST be set to the URI of the most recent File being
 * loaded/activated by the LD. In the case of file status 0, this element MUST be
 * omitted.
 */
class FileLink : public Link
{

public:
	FileLink();
	virtual ~FileLink();

};
#endif // !defined(EA_28F81149_3D99_4ec4_AEC1_51FFFF046ABD__INCLUDED_)
