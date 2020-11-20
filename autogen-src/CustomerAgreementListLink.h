///////////////////////////////////////////////////////////
//  CustomerAgreementListLink.h
//  Implementation of the Class CustomerAgreementListLink
//  Created on:      13-Apr-2020 2:51:24 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_1F9E1CAA_8518_45a5_91DC_8184FD9C51C6__INCLUDED_)
#define EA_1F9E1CAA_8518_45a5_91DC_8184FD9C51C6__INCLUDED_

#include "ListLink.h"

/**
 * SHALL contain a Link to a List of CustomerAgreement instances.
 */
class CustomerAgreementListLink : public ListLink
{

public:
	CustomerAgreementListLink();
	virtual ~CustomerAgreementListLink();

};
#endif // !defined(EA_1F9E1CAA_8518_45a5_91DC_8184FD9C51C6__INCLUDED_)
