///////////////////////////////////////////////////////////
//  List.h
//  Implementation of the Class List
//  Created on:      13-Apr-2020 2:51:33 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_46662E8D_6E6C_46ac_A948_A76166DFE0FB__INCLUDED_)
#define EA_46662E8D_6E6C_46ac_A948_A76166DFE0FB__INCLUDED_

#include "UInt32.h"
#include "Resource.h"

/**
 * Container to hold a collection of object instances or references. See Design
 * Pattern section for additional details.
 */
class List : public Resource
{

public:
	List();
	virtual ~List();
	/**
	 * The number specifying "all" of the items in the list. Required on a response to
	 * a GET, ignored otherwise.
	 */
	UInt32 all;
	/**
	 * Indicates the number of items in this page of results.
	 */
	UInt32 results;

};
#endif // !defined(EA_46662E8D_6E6C_46ac_A948_A76166DFE0FB__INCLUDED_)
