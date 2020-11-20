///////////////////////////////////////////////////////////
//  BillingReading.h
//  Implementation of the Class BillingReading
//  Created on:      13-Apr-2020 2:51:21 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_AB7FBBB9_794F_495f_8CEF_B2E150A8E68F__INCLUDED_)
#define EA_AB7FBBB9_794F_495f_8CEF_B2E150A8E68F__INCLUDED_

#include "ReadingBase.h"
#include "Charge.h"

/**
 * Data captured at regular intervals of time. Interval data could be captured as
 * incremental data, absolute data, or relative data. The source for the data is
 * usually a tariff quantity or an engineering quantity. Data is typically
 * captured in time-tagged, uniform, fixed-length intervals of 5 min, 10 min, 15
 * min, 30 min, or 60 min. However, consumption aggregations can also be
 * represented with this class. 
 */
class BillingReading : public ReadingBase
{

public:
	BillingReading();
	virtual ~BillingReading();
	Charge *m_Charge;

};
#endif // !defined(EA_AB7FBBB9_794F_495f_8CEF_B2E150A8E68F__INCLUDED_)
