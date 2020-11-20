///////////////////////////////////////////////////////////
//  ActiveTargetReadingListLink.h
//  Implementation of the Class ActiveTargetReadingListLink
//  Created on:      13-Apr-2020 2:51:20 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_5340E7FE_5EBE_48db_B7E6_9A57B5AE38E3__INCLUDED_)
#define EA_5340E7FE_5EBE_48db_B7E6_9A57B5AE38E3__INCLUDED_

#include "ListLink.h"

/**
 * SHALL contain a Link to a List of active TargetReading instances.
 */
class ActiveTargetReadingListLink : public ListLink
{

public:
	ActiveTargetReadingListLink();
	virtual ~ActiveTargetReadingListLink();

};
#endif // !defined(EA_5340E7FE_5EBE_48db_B7E6_9A57B5AE38E3__INCLUDED_)
