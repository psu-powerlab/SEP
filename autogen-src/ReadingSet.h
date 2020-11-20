///////////////////////////////////////////////////////////
//  ReadingSet.h
//  Implementation of the Class ReadingSet
//  Created on:      13-Apr-2020 2:51:39 PM
///////////////////////////////////////////////////////////

#if !defined(EA_569BD591_295E_4791_A857_5C851B0B17AE__INCLUDED_)
#define EA_569BD591_295E_4791_A857_5C851B0B17AE__INCLUDED_

#include "ReadingListLink.h"
#include "ReadingSetBase.h"

/**
 * A set of Readings of the ReadingType indicated by the parent MeterReading.
 */
class ReadingSet : public ReadingSetBase
{

public:
	ReadingSet();
	virtual ~ReadingSet();
	ReadingListLink *m_ReadingListLink;

};
#endif // !defined(EA_569BD591_295E_4791_A857_5C851B0B17AE__INCLUDED_)
