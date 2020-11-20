///////////////////////////////////////////////////////////
//  IPInterfaceListLink.h
//  Implementation of the Class IPInterfaceListLink
//  Created on:      13-Apr-2020 2:51:32 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_96D48CC9_60CC_4a85_98BC_6FFA7917D108__INCLUDED_)
#define EA_96D48CC9_60CC_4a85_98BC_6FFA7917D108__INCLUDED_

#include "ListLink.h"

/**
 * SHALL contain a Link to a List of IPInterface instances.
 */
class IPInterfaceListLink : public ListLink
{

public:
	IPInterfaceListLink();
	virtual ~IPInterfaceListLink();

};
#endif // !defined(EA_96D48CC9_60CC_4a85_98BC_6FFA7917D108__INCLUDED_)
