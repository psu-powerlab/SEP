///////////////////////////////////////////////////////////
//  IPAddrListLink.h
//  Implementation of the Class IPAddrListLink
//  Created on:      13-Apr-2020 2:51:32 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_1FB3D0B5_CE04_47f9_8815_C933D643047F__INCLUDED_)
#define EA_1FB3D0B5_CE04_47f9_8815_C933D643047F__INCLUDED_

#include "ListLink.h"

/**
 * SHALL contain a Link to a List of IPAddr instances.
 */
class IPAddrListLink : public ListLink
{

public:
	IPAddrListLink();
	virtual ~IPAddrListLink();

};
#endif // !defined(EA_1FB3D0B5_CE04_47f9_8815_C933D643047F__INCLUDED_)
