///////////////////////////////////////////////////////////
//  MirrorReadingSet.h
//  Implementation of the Class MirrorReadingSet
//  Created on:      13-Apr-2020 2:51:34 PM
///////////////////////////////////////////////////////////

#if !defined(EA_10AED4A2_CD98_4764_838A_7B256846E51B__INCLUDED_)
#define EA_10AED4A2_CD98_4764_838A_7B256846E51B__INCLUDED_

#include "ReadingSetBase.h"
#include "Reading.h"

/**
 * A set of Readings of the ReadingType indicated by the parent MeterReading.
 */
class MirrorReadingSet : public ReadingSetBase
{

public:
	MirrorReadingSet();
	virtual ~MirrorReadingSet();
	Reading *m_Reading;

};
#endif // !defined(EA_10AED4A2_CD98_4764_838A_7B256846E51B__INCLUDED_)
