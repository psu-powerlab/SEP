///////////////////////////////////////////////////////////
//  HistoricalReading.h
//  Implementation of the Class HistoricalReading
//  Created on:      13-Apr-2020 2:51:31 PM
//  Original author: SEP
///////////////////////////////////////////////////////////

#if !defined(EA_C0FB27BB_E49C_410d_8E99_4214DECE88C1__INCLUDED_)
#define EA_C0FB27BB_E49C_410d_8E99_4214DECE88C1__INCLUDED_

#include "BillingMeterReadingBase.h"

/**
 * To be used to present readings that have been processed and possibly corrected
 * (as allowed, due to missing or incorrect data) by backend systems. This
 * includes quality codes valid, verified, estimated, and derived / corrected.
 */
class HistoricalReading : public BillingMeterReadingBase
{

public:
	HistoricalReading();
	virtual ~HistoricalReading();

};
#endif // !defined(EA_C0FB27BB_E49C_410d_8E99_4214DECE88C1__INCLUDED_)
