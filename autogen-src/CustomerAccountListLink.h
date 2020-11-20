///////////////////////////////////////////////////////////
//  CustomerAccountListLink.h
//  Implementation of the Class CustomerAccountListLink
//  Created on:      13-Apr-2020 2:51:23 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_3F08F67A_108C_412a_B083_701365DEA8C3__INCLUDED_)
#define EA_3F08F67A_108C_412a_B083_701365DEA8C3__INCLUDED_

#include "ListLink.h"

/**
 * SHALL contain a Link to a List of CustomerAccount instances.
 */
class CustomerAccountListLink : public ListLink
{

public:
	CustomerAccountListLink();
	virtual ~CustomerAccountListLink();

};
#endif // !defined(EA_3F08F67A_108C_412a_B083_701365DEA8C3__INCLUDED_)
