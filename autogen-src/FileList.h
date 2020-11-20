///////////////////////////////////////////////////////////
//  FileList.h
//  Implementation of the Class FileList
//  Created on:      13-Apr-2020 2:51:28 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_01ADDFFF_D6F3_42da_99B0_9F022B91AEBF__INCLUDED_)
#define EA_01ADDFFF_D6F3_42da_99B0_9F022B91AEBF__INCLUDED_

#include "UInt32.h"
#include "List.h"
#include "File.h"

/**
 * A List element to hold File objects.
 */
class FileList : public List
{

public:
	FileList();
	virtual ~FileList();
	/**
	 * The default polling rate for this function set (this resource and all resources
	 * below), in seconds. If not specified, a default of 900 seconds (15 minutes) is
	 * used. It is RECOMMENDED a client poll the resources of this function set every
	 * pollRate seconds.
	 */
	UInt32 pollRate;
	File *m_File;

};
#endif // !defined(EA_01ADDFFF_D6F3_42da_99B0_9F022B91AEBF__INCLUDED_)
