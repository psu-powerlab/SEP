///////////////////////////////////////////////////////////
//  BillingMeterReadingBase.h
//  Implementation of the Class BillingMeterReadingBase
//  Created on:      13-Apr-2020 2:51:21 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_E3C4B872_07FA_47f8_8139_F457FDA2B795__INCLUDED_)
#define EA_E3C4B872_07FA_47f8_8139_F457FDA2B795__INCLUDED_

#include "ReadingTypeLink.h"
#include "BillingReadingSetListLink.h"
#include "MeterReadingBase.h"

/**
 * Contains historical, target, and projection readings of various types, possibly
 * associated with charges. 
 */
class BillingMeterReadingBase : public MeterReadingBase
{

public:
	BillingMeterReadingBase();
	virtual ~BillingMeterReadingBase();
	ReadingTypeLink *m_ReadingTypeLink;
	BillingReadingSetListLink *m_BillingReadingSetListLink;

};
#endif // !defined(EA_E3C4B872_07FA_47f8_8139_F457FDA2B795__INCLUDED_)
