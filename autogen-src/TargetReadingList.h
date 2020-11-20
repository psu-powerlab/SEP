///////////////////////////////////////////////////////////
//  TargetReadingList.h
//  Implementation of the Class TargetReadingList
//  Created on:      13-Apr-2020 2:51:44 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_C779FF16_2F9F_4830_B01F_14F167BB47B9__INCLUDED_)
#define EA_C779FF16_2F9F_4830_B01F_14F167BB47B9__INCLUDED_

#include "List.h"
#include "TargetReading.h"

/**
 * A List element to hold TargetReading objects.
 */
class TargetReadingList : public List
{

public:
	TargetReadingList();
	virtual ~TargetReadingList();
	TargetReading *m_TargetReading;

};
#endif // !defined(EA_C779FF16_2F9F_4830_B01F_14F167BB47B9__INCLUDED_)
