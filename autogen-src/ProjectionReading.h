///////////////////////////////////////////////////////////
//  ProjectionReading.h
//  Implementation of the Class ProjectionReading
//  Created on:      13-Apr-2020 2:51:38 PM
//  Original author: tmauro
///////////////////////////////////////////////////////////

#if !defined(EA_4E685D0D_45C8_4f84_9DD8_6CA50586F63F__INCLUDED_)
#define EA_4E685D0D_45C8_4f84_9DD8_6CA50586F63F__INCLUDED_

#include "BillingMeterReadingBase.h"

/**
 * Contains values that forecast a future reading for the time or interval
 * specified. 
 */
class ProjectionReading : public BillingMeterReadingBase
{

public:
	ProjectionReading();
	virtual ~ProjectionReading();

};
#endif // !defined(EA_4E685D0D_45C8_4f84_9DD8_6CA50586F63F__INCLUDED_)
