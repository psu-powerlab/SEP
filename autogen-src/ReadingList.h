///////////////////////////////////////////////////////////
//  ReadingList.h
//  Implementation of the Class ReadingList
//  Created on:      13-Apr-2020 2:51:39 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_5692F182_1675_43a9_87DC_60BD90FB903C__INCLUDED_)
#define EA_5692F182_1675_43a9_87DC_60BD90FB903C__INCLUDED_

#include "SubscribableList.h"
#include "Reading.h"

/**
 * A List element to hold Reading objects.
 */
class ReadingList : public SubscribableList
{

public:
	ReadingList();
	virtual ~ReadingList();
	Reading *m_Reading;

};
#endif // !defined(EA_5692F182_1675_43a9_87DC_60BD90FB903C__INCLUDED_)
