///////////////////////////////////////////////////////////
//  HistoricalReadingList.h
//  Implementation of the Class HistoricalReadingList
//  Created on:      13-Apr-2020 2:51:31 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_DF6AAC0B_0DF9_4fe6_87E6_EF1F1D1526CE__INCLUDED_)
#define EA_DF6AAC0B_0DF9_4fe6_87E6_EF1F1D1526CE__INCLUDED_

#include "List.h"
#include "HistoricalReading.h"

/**
 * A List element to hold HistoricalReading objects.
 */
class HistoricalReadingList : public List
{

public:
	HistoricalReadingList();
	virtual ~HistoricalReadingList();
	HistoricalReading *m_HistoricalReading;

};
#endif // !defined(EA_DF6AAC0B_0DF9_4fe6_87E6_EF1F1D1526CE__INCLUDED_)
