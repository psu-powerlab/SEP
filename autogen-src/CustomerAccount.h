///////////////////////////////////////////////////////////
//  CustomerAccount.h
//  Implementation of the Class CustomerAccount
//  Created on:      13-Apr-2020 2:51:23 PM
///////////////////////////////////////////////////////////

#if !defined(EA_DB11FFE9_C4AA_4284_B930_3FCF02102886__INCLUDED_)
#define EA_DB11FFE9_C4AA_4284_B930_3FCF02102886__INCLUDED_

#include "UInt16.h"
#include "String42.h"
#include "PowerOfTenMultiplierType.h"
#include "CustomerAgreementListLink.h"
#include "ServiceSupplierLink.h"
#include "IdentifiedObject.h"

/**
 * Assignment of a group of products and services purchased by the Customer
 * through a CustomerAgreement, used as a mechanism for customer billing and
 * payment. It contains common information from the various types of
 * CustomerAgreements to create billings (invoices) for a Customer and receive
 * payment.
 */
class CustomerAccount : public IdentifiedObject
{

public:
	CustomerAccount();
	virtual ~CustomerAccount();
	/**
	 * The ISO 4217 code indicating the currency applicable to the bill amounts in the
	 * summary. See list at http://www.unece.
	 * org/cefact/recommendations/rec09/rec09_ecetrd203.pdf
	 */
	UInt16 currency;
	/**
	 * The account number for the customer (if applicable).
	 */
	String42 customerAccount;
	/**
	 * The name of the customer.
	 */
	String42 customerName;
	/**
	 * Indicates the power of ten multiplier for the prices in this function set.
	 */
	PowerOfTenMultiplierType pricePowerOfTenMultiplier;
	CustomerAgreementListLink *m_CustomerAgreementListLink;
	ServiceSupplierLink *m_ServiceSupplierLink;

};
#endif // !defined(EA_DB11FFE9_C4AA_4284_B930_3FCF02102886__INCLUDED_)
