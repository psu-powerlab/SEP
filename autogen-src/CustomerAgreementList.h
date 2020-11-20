///////////////////////////////////////////////////////////
//  CustomerAgreementList.h
//  Implementation of the Class CustomerAgreementList
//  Created on:      13-Apr-2020 2:51:24 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_1E628B5A_C84D_4cb9_A6CA_24E51B2A181F__INCLUDED_)
#define EA_1E628B5A_C84D_4cb9_A6CA_24E51B2A181F__INCLUDED_

#include "SubscribableList.h"
#include "CustomerAgreement.h"

/**
 * A List element to hold CustomerAgreement objects.
 */
class CustomerAgreementList : public SubscribableList
{

public:
	CustomerAgreementList();
	virtual ~CustomerAgreementList();
	CustomerAgreement *m_CustomerAgreement;

};
#endif // !defined(EA_1E628B5A_C84D_4cb9_A6CA_24E51B2A181F__INCLUDED_)
