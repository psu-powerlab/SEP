///////////////////////////////////////////////////////////
//  AccountBalance.h
//  Implementation of the Class AccountBalance
//  Created on:      13-Apr-2020 2:51:19 PM
///////////////////////////////////////////////////////////

#if !defined(EA_001DE0D2_A5C0_4ab0_8431_035FA9B545ED__INCLUDED_)
#define EA_001DE0D2_A5C0_4ab0_8431_035FA9B545ED__INCLUDED_

#include "AccountingUnit.h"
#include "CreditStatusType.h"
#include "Resource.h"

/**
 * AccountBalance contains the regular credit and emergency credit balance for
 * this given service or commodity prepay instance. It may also contain status
 * information concerning the balance data.
 */
class AccountBalance : public Resource
{

public:
	AccountBalance();
	virtual ~AccountBalance();
	/**
	 * AvailableCredit shows the balance of the sum of credits minus the sum of
	 * charges. In a Central Wallet mode this value may be passed down to the
	 * Prepayment server via an out-of-band mechanism. In Local or ESI modes, this
	 * value may be calculated based upon summation of CreditRegister transactions
	 * minus consumption charges calculated using Metering (and possibly Pricing)
	 * function set data. This value may be negative; for instance, if disconnection
	 * is prevented due to a Supply Interruption Override.
	 */
	AccountingUnit availableCredit;
	/**
	 * CreditStatus identifies whether the present value of availableCredit is
	 * considered OK, low, exhausted, or negative.
	 */
	CreditStatusType creditStatus;
	/**
	 * EmergencyCredit is the amount of credit still available for the given service
	 * or commodity prepayment instance. If both availableCredit and emergyCredit are
	 * exhausted, then service will typically be disconnected. 
	 */
	AccountingUnit emergencyCredit;
	/**
	 * EmergencyCreditStatus identifies whether the present value of emergencyCredit
	 * is considered OK, low, exhausted, or negative.
	 */
	CreditStatusType emergencyCreditStatus;

};
#endif // !defined(EA_001DE0D2_A5C0_4ab0_8431_035FA9B545ED__INCLUDED_)
