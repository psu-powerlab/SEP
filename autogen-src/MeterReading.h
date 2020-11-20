///////////////////////////////////////////////////////////
//  MeterReading.h
//  Implementation of the Class MeterReading
//  Created on:      13-Apr-2020 2:51:34 PM
//  Original author: SEP
///////////////////////////////////////////////////////////

#if !defined(EA_D9D03C08_0E98_4bc9_85C6_1CB781743B0C__INCLUDED_)
#define EA_D9D03C08_0E98_4bc9_85C6_1CB781743B0C__INCLUDED_

#include "ReadingSetListLink.h"
#include "ReadingTypeLink.h"
#include "RateComponentListLink.h"
#include "ReadingLink.h"
#include "MeterReadingBase.h"

/**
 * Set of values obtained from the meter. 
 */
class MeterReading : public MeterReadingBase
{

public:
	MeterReading();
	virtual ~MeterReading();
	ReadingSetListLink *m_ReadingSetListLink;
	ReadingTypeLink *m_ReadingTypeLink;
	RateComponentListLink *m_RateComponentListLink;
	ReadingLink m_ReadingLink;

};
#endif // !defined(EA_D9D03C08_0E98_4bc9_85C6_1CB781743B0C__INCLUDED_)
