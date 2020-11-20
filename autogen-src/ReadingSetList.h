///////////////////////////////////////////////////////////
//  ReadingSetList.h
//  Implementation of the Class ReadingSetList
//  Created on:      13-Apr-2020 2:51:39 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_F1456639_25C3_4e4c_AE07_12E38DD69BA6__INCLUDED_)
#define EA_F1456639_25C3_4e4c_AE07_12E38DD69BA6__INCLUDED_

#include "SubscribableList.h"
#include "ReadingSet.h"

/**
 * A List element to hold ReadingSet objects.
 */
class ReadingSetList : public SubscribableList
{

public:
	ReadingSetList();
	virtual ~ReadingSetList();
	ReadingSet *m_ReadingSet;

};
#endif // !defined(EA_F1456639_25C3_4e4c_AE07_12E38DD69BA6__INCLUDED_)
