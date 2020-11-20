///////////////////////////////////////////////////////////
//  ActiveTimeTariffIntervalListLink.h
//  Implementation of the Class ActiveTimeTariffIntervalListLink
//  Created on:      13-Apr-2020 2:51:20 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_CC79DD35_1D85_4c36_9773_4B67CF22D3FE__INCLUDED_)
#define EA_CC79DD35_1D85_4c36_9773_4B67CF22D3FE__INCLUDED_

#include "ListLink.h"

/**
 * SHALL contain a Link to a List of active TimeTariffInterval instances.
 */
class ActiveTimeTariffIntervalListLink : public ListLink
{

public:
	ActiveTimeTariffIntervalListLink();
	virtual ~ActiveTimeTariffIntervalListLink();

};
#endif // !defined(EA_CC79DD35_1D85_4c36_9773_4B67CF22D3FE__INCLUDED_)
