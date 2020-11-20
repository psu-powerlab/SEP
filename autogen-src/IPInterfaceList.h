///////////////////////////////////////////////////////////
//  IPInterfaceList.h
//  Implementation of the Class IPInterfaceList
//  Created on:      13-Apr-2020 2:51:32 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_398AD3ED_B0A4_4dc9_B2A9_750A7E8D8A28__INCLUDED_)
#define EA_398AD3ED_B0A4_4dc9_B2A9_750A7E8D8A28__INCLUDED_

#include "UInt32.h"
#include "List.h"
#include "IPInterface.h"

/**
 * List of IPInterface instances.
 */
class IPInterfaceList : public List
{

public:
	IPInterfaceList();
	virtual ~IPInterfaceList();
	/**
	 * The default polling rate for this function set (this resource and all resources
	 * below), in seconds. If not specified, a default of 900 seconds (15 minutes) is
	 * used. It is RECOMMENDED a client poll the resources of this function set every
	 * pollRate seconds.
	 */
	UInt32 pollRate;
	IPInterface *m_IPInterface;

};
#endif // !defined(EA_398AD3ED_B0A4_4dc9_B2A9_750A7E8D8A28__INCLUDED_)
