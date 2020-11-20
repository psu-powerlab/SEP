///////////////////////////////////////////////////////////
//  ConsumptionTariffIntervalList.h
//  Implementation of the Class ConsumptionTariffIntervalList
//  Created on:      13-Apr-2020 2:51:22 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_3FB93A37_3A29_4552_8F2D_E9FB50E991EA__INCLUDED_)
#define EA_3FB93A37_3A29_4552_8F2D_E9FB50E991EA__INCLUDED_

#include "List.h"
#include "ConsumptionTariffInterval.h"

/**
 * A List element to hold ConsumptionTariffInterval objects.
 */
class ConsumptionTariffIntervalList : public List
{

public:
	ConsumptionTariffIntervalList();
	virtual ~ConsumptionTariffIntervalList();
	ConsumptionTariffInterval *m_ConsumptionTariffInterval;

};
#endif // !defined(EA_3FB93A37_3A29_4552_8F2D_E9FB50E991EA__INCLUDED_)
