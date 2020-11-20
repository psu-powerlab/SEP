///////////////////////////////////////////////////////////
//  MeterReadingList.h
//  Implementation of the Class MeterReadingList
//  Created on:      13-Apr-2020 2:51:34 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_487131BC_802A_4ccd_A1AF_C0D97EF0114F__INCLUDED_)
#define EA_487131BC_802A_4ccd_A1AF_C0D97EF0114F__INCLUDED_

#include "SubscribableList.h"
#include "MeterReading.h"

/**
 * A List element to hold MeterReading objects.
 */
class MeterReadingList : public SubscribableList
{

public:
	MeterReadingList();
	virtual ~MeterReadingList();
	MeterReading *m_MeterReading;

};
#endif // !defined(EA_487131BC_802A_4ccd_A1AF_C0D97EF0114F__INCLUDED_)
