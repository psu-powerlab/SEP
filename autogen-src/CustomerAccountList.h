///////////////////////////////////////////////////////////
//  CustomerAccountList.h
//  Implementation of the Class CustomerAccountList
//  Created on:      13-Apr-2020 2:51:23 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_4498EA8E_E605_415b_AE50_A1F19A940038__INCLUDED_)
#define EA_4498EA8E_E605_415b_AE50_A1F19A940038__INCLUDED_

#include "UInt32.h"
#include "SubscribableList.h"
#include "CustomerAccount.h"

/**
 * A List element to hold CustomerAccount objects.
 */
class CustomerAccountList : public SubscribableList
{

public:
	CustomerAccountList();
	virtual ~CustomerAccountList();
	/**
	 * The default polling rate for this function set (this resource and all resources
	 * below), in seconds. If not specified, a default of 900 seconds (15 minutes) is
	 * used. It is RECOMMENDED a client poll the resources of this function set every
	 * pollRate seconds.
	 */
	UInt32 pollRate;
	CustomerAccount *m_CustomerAccount;

};
#endif // !defined(EA_4498EA8E_E605_415b_AE50_A1F19A940038__INCLUDED_)
