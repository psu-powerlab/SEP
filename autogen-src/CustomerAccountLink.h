///////////////////////////////////////////////////////////
//  CustomerAccountLink.h
//  Implementation of the Class CustomerAccountLink
//  Created on:      13-Apr-2020 2:51:23 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_51840C50_D1DC_4d3c_95B3_59CDCD66A9A4__INCLUDED_)
#define EA_51840C50_D1DC_4d3c_95B3_59CDCD66A9A4__INCLUDED_

#include "Link.h"

/**
 * SHALL contain a Link to an instance of CustomerAccount.
 */
class CustomerAccountLink : public Link
{

public:
	CustomerAccountLink();
	virtual ~CustomerAccountLink();

};
#endif // !defined(EA_51840C50_D1DC_4d3c_95B3_59CDCD66A9A4__INCLUDED_)
