///////////////////////////////////////////////////////////
//  ActiveDERControlListLink.h
//  Implementation of the Class ActiveDERControlListLink
//  Created on:      13-Apr-2020 2:51:19 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_8DB52273_248E_46f1_98C7_1A2151F7FD16__INCLUDED_)
#define EA_8DB52273_248E_46f1_98C7_1A2151F7FD16__INCLUDED_

#include "ListLink.h"

/**
 * SHALL contain a Link to a List of active DERControl instances.
 */
class ActiveDERControlListLink : public ListLink
{

public:
	ActiveDERControlListLink();
	virtual ~ActiveDERControlListLink();

};
#endif // !defined(EA_8DB52273_248E_46f1_98C7_1A2151F7FD16__INCLUDED_)
