///////////////////////////////////////////////////////////
//  ListLink.h
//  Implementation of the Class ListLink
//  Created on:      13-Apr-2020 2:51:33 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_826A3FBF_5E3A_4d1e_A784_6B0EC302DC77__INCLUDED_)
#define EA_826A3FBF_5E3A_4d1e_A784_6B0EC302DC77__INCLUDED_

#include "UInt32.h"
#include "Link.h"

/**
 * ListLinks provide a reference, via URI, to a List.
 */
class ListLink : public Link
{

public:
	ListLink();
	virtual ~ListLink();
	/**
	 * Indicates the total number of items in the referenced list. This attribute
	 * SHALL be present if the href is a local or relative URI. This attribute SHOULD
	 * NOT be present if the href is a remote or absolute URI, as the server may be
	 * unaware of changes to the value.
	 */
	sep::UInt32 all;

};
#endif // !defined(EA_826A3FBF_5E3A_4d1e_A784_6B0EC302DC77__INCLUDED_)
