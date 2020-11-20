///////////////////////////////////////////////////////////
//  SubscribableList.h
//  Implementation of the Class SubscribableList
//  Created on:      13-Apr-2020 2:51:43 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_36BED47B_D0C6_44db_BF02_9FA0A0597F36__INCLUDED_)
#define EA_36BED47B_D0C6_44db_BF02_9FA0A0597F36__INCLUDED_

#include "UInt32.h"
#include "SubscribableResource.h"

/**
 * A List to which a Subscription can be requested. 
 */
class SubscribableList : public SubscribableResource
{

public:
	SubscribableList();
	virtual ~SubscribableList();
	/**
	 * The number specifying "all" of the items in the list. Required on GET, ignored
	 * otherwise.
	 */
	UInt32 all;
	/**
	 * Indicates the number of items in this page of results.
	 */
	UInt32 results;

};
#endif // !defined(EA_36BED47B_D0C6_44db_BF02_9FA0A0597F36__INCLUDED_)
