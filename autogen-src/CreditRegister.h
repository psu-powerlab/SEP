///////////////////////////////////////////////////////////
//  CreditRegister.h
//  Implementation of the Class CreditRegister
//  Created on:      13-Apr-2020 2:51:22 PM
///////////////////////////////////////////////////////////

#if !defined(EA_C9C5075A_A7F6_4702_9EE2_49D8A6A0D74E__INCLUDED_)
#define EA_C9C5075A_A7F6_4702_9EE2_49D8A6A0D74E__INCLUDED_

#include "AccountingUnit.h"
#include "CreditTypeType.h"
#include "TimeType.h"
#include "String32.h"
#include "IdentifiedObject.h"

/**
 * CreditRegister instances define a credit-modifying transaction. Typically this
 * would be a credit-adding transaction, but may be a subtracting transaction
 * (perhaps in response to an out-of-band debt signal).
 */
class CreditRegister : public IdentifiedObject
{

public:
	CreditRegister();
	virtual ~CreditRegister();
	/**
	 * CreditAmount is the amount of credit being added by a particular CreditRegister
	 * transaction. Negative values indicate that credit is being subtracted.
	 */
	AccountingUnit creditAmount;
	/**
	 * CreditType indicates whether the credit transaction applies to regular or
	 * emergency credit.
	 */
	CreditTypeType creditType;
	/**
	 * EffectiveTime identifies the time at which the credit transaction goes into
	 * effect. For credit addition transactions, this is typically the moment at which
	 * the transaction takes place. For credit subtraction transactions, (e.g., non-
	 * fuel debt recovery transactions initiated from a back-haul or ESI) this may be
	 * a future time at which credit is deducted.
	 */
	TimeType effectiveTime;
	/**
	 * Token is security data that authenticates the legitimacy of the transaction.
	 * The details of this token are not defined by IEEE 2030.5. How a Prepayment
	 * server handles this field is left as vendor specific implementation or will be
	 * defined by one or more other standards.
	 */
	String32 token;

};
#endif // !defined(EA_C9C5075A_A7F6_4702_9EE2_49D8A6A0D74E__INCLUDED_)
