///////////////////////////////////////////////////////////
//  DERStatusLink.h
//  Implementation of the Class DERStatusLink
//  Created on:      13-Apr-2020 2:51:26 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_9FC785A9_B881_4adc_9B87_DF5B869EA091__INCLUDED_)
#define EA_9FC785A9_B881_4adc_9B87_DF5B869EA091__INCLUDED_

#include "Link.h"

/**
 * SHALL contain a Link to an instance of DERStatus.
 */
class DERStatusLink : public Link
{

public:
	DERStatusLink();
	virtual ~DERStatusLink();

};
#endif // !defined(EA_9FC785A9_B881_4adc_9B87_DF5B869EA091__INCLUDED_)
