///////////////////////////////////////////////////////////
//  Prepayment.h
//  Implementation of the Class Prepayment
//  Created on:      13-Apr-2020 2:51:37 PM
///////////////////////////////////////////////////////////

#if !defined(EA_E531C063_6D1B_4921_9582_2F233D24272F__INCLUDED_)
#define EA_E531C063_6D1B_4921_9582_2F233D24272F__INCLUDED_

#include "AccountingUnit.h"
#include "PrepayModeType.h"
#include "ActiveCreditRegisterListLink.h"
#include "ActiveSupplyInterruptionOverrideListLink.h"
#include "CreditRegisterListLink.h"
#include "AccountBalanceLink.h"
#include "UsagePointLink.h"
#include "PrepayOperationStatusLink.h"
#include "SupplyInterruptionOverrideListLink.h"
#include "IdentifiedObject.h"
#include "UsagePoint.h"

/**
 * Prepayment (inherited from CIM SDPAccountingFunction)
 */
class Prepayment : public IdentifiedObject
{

public:
	Prepayment();
	virtual ~Prepayment();
	/**
	 * CreditExpiryLevel is the set point for availableCredit at which the service
	 * level may be changed. The typical value for this attribute is 0, regardless of
	 * whether the account balance is measured in a monetary or commodity basis. The
	 * units for this attribute SHALL match the units used for availableCredit.
	 */
	AccountingUnit creditExpiryLevel;
	/**
	 * LowCreditWarningLevel is the set point for availableCredit at which the
	 * creditStatus attribute in the AccountBalance resource SHALL indicate that
	 * available credit is low. The units for this attribute SHALL match the units
	 * used for availableCredit. Typically, this value is set by the service provider.
	 */
	AccountingUnit lowCreditWarningLevel;
	/**
	 * LowEmergencyCreditWarningLevel is the set point for emergencyCredit at which
	 * the creditStatus attribute in the AccountBalance resource SHALL indicate that
	 * emergencycredit is low. The units for this attribute SHALL match the units used
	 * for availableCredit. Typically, this value is set by the service provider.
	 */
	AccountingUnit lowEmergencyCreditWarningLevel;
	/**
	 * PrepayMode specifies whether the given Prepayment instance is operating in
	 * Credit, Central Wallet, ESI, or Local prepayment mode. The Credit mode
	 * indicates that prepayment is not presently in effect. The other modes are
	 * described in the Overview Section above.
	 */
	PrepayModeType prepayMode;
	ActiveCreditRegisterListLink *m_ActiveCreditRegisterListLink;
	ActiveSupplyInterruptionOverrideListLink *m_ActiveSupplyInterruptionOverrideListLink;
	CreditRegisterListLink *m_CreditRegisterListLink;
	AccountBalanceLink *m_AccountBalanceLink;
	UsagePointLink *m_UsagePointLink;
	PrepayOperationStatusLink *m_PrepayOperationStatusLink;
	SupplyInterruptionOverrideListLink *m_SupplyInterruptionOverrideListLink;
	UsagePoint *m_UsagePoint;

};
#endif // !defined(EA_E531C063_6D1B_4921_9582_2F233D24272F__INCLUDED_)
