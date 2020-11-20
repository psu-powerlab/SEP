///////////////////////////////////////////////////////////
//  ProjectionReadingList.h
//  Implementation of the Class ProjectionReadingList
//  Created on:      13-Apr-2020 2:51:38 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_ACFA9089_6391_4295_8577_5B3E2C6FBA86__INCLUDED_)
#define EA_ACFA9089_6391_4295_8577_5B3E2C6FBA86__INCLUDED_

#include "List.h"
#include "ProjectionReading.h"

/**
 * A List element to hold ProjectionReading objects.
 */
class ProjectionReadingList : public List
{

public:
	ProjectionReadingList();
	virtual ~ProjectionReadingList();
	ProjectionReading *m_ProjectionReading;

};
#endif // !defined(EA_ACFA9089_6391_4295_8577_5B3E2C6FBA86__INCLUDED_)
