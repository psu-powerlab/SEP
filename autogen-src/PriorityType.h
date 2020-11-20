///////////////////////////////////////////////////////////
//  PriorityType.h
//  Implementation of the Class PriorityType
//  Created on:      13-Apr-2020 2:51:38 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_F0923920_41E0_4239_8672_051C258EAEA6__INCLUDED_)
#define EA_F0923920_41E0_4239_8672_051C258EAEA6__INCLUDED_

#include "UInt8.h"

/**
 * Indicates the priority of a message:
 * 0 - Low
 * 1 - Normal
 * 2 - High
 * 3 - Critical
 * All other values reserved.
 */
class PriorityType : public UInt8
{

public:
	PriorityType();
	virtual ~PriorityType();

};
#endif // !defined(EA_F0923920_41E0_4239_8672_051C258EAEA6__INCLUDED_)
