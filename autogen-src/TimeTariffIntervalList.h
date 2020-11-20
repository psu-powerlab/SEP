///////////////////////////////////////////////////////////
//  TimeTariffIntervalList.h
//  Implementation of the Class TimeTariffIntervalList
//  Created on:      13-Apr-2020 2:51:45 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_9A9373E5_4B1B_4770_A21E_97A1C3A4E08E__INCLUDED_)
#define EA_9A9373E5_4B1B_4770_A21E_97A1C3A4E08E__INCLUDED_

#include "SubscribableList.h"
#include "TimeTariffInterval.h"

/**
 * A List element to hold TimeTariffInterval objects.
 */
class TimeTariffIntervalList : public SubscribableList
{

public:
	TimeTariffIntervalList();
	virtual ~TimeTariffIntervalList();
	TimeTariffInterval *m_TimeTariffInterval;

};
#endif // !defined(EA_9A9373E5_4B1B_4770_A21E_97A1C3A4E08E__INCLUDED_)
