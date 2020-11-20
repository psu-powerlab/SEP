///////////////////////////////////////////////////////////
//  MirrorMeterReading.h
//  Implementation of the Class MirrorMeterReading
//  Created on:      13-Apr-2020 2:51:34 PM
//  Original author: gfalendy
///////////////////////////////////////////////////////////

#if !defined(EA_36C08821_CE85_4d27_A65D_49AF8F26789E__INCLUDED_)
#define EA_36C08821_CE85_4d27_A65D_49AF8F26789E__INCLUDED_

#include "TimeType.h"
#include "MirrorReadingSet.h"
#include "MeterReadingBase.h"
#include "Reading.h"
#include "ReadingType.h"

/**
 * Mimic of MeterReading used for managing mirrors.
 */
class MirrorMeterReading : public MeterReadingBase
{

public:
	MirrorMeterReading();
	virtual ~MirrorMeterReading();
	/**
	 * The date and time of the last update. 
	 */
	TimeType lastUpdateTime;
	/**
	 * The date and time of the next planned update. 
	 */
	TimeType nextUpdateTime;
	MirrorReadingSet *m_MirrorReadingSet;
	Reading *m_Reading;
	ReadingType *m_ReadingType;

};
#endif // !defined(EA_36C08821_CE85_4d27_A65D_49AF8F26789E__INCLUDED_)
