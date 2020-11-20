///////////////////////////////////////////////////////////
//  FileStatusLink.h
//  Implementation of the Class FileStatusLink
//  Created on:      13-Apr-2020 2:51:29 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_BA5468C3_07A4_43c5_9527_2BCE41611672__INCLUDED_)
#define EA_BA5468C3_07A4_43c5_9527_2BCE41611672__INCLUDED_

#include "Link.h"

/**
 * SHALL contain a Link to an instance of FileStatus. 
 */
class FileStatusLink : public Link
{

public:
	FileStatusLink();
	virtual ~FileStatusLink();

};
#endif // !defined(EA_BA5468C3_07A4_43c5_9527_2BCE41611672__INCLUDED_)
