///////////////////////////////////////////////////////////
//  CustomerAgreement.h
//  Implementation of the Class CustomerAgreement
//  Created on:      13-Apr-2020 2:51:23 PM
///////////////////////////////////////////////////////////

#if !defined(EA_F0DEF12F_B98E_4f05_8C5C_28F4039ED510__INCLUDED_)
#define EA_F0DEF12F_B98E_4f05_8C5C_28F4039ED510__INCLUDED_

#include "String42.h"
#include "HistoricalReadingListLink.h"
#include "UsagePointLink.h"
#include "BillingPeriodListLink.h"
#include "PrepaymentLink.h"
#include "ProjectionReadingListLink.h"
#include "TargetReadingListLink.h"
#include "ActiveProjectionReadingListLink.h"
#include "ActiveBillingPeriodListLink.h"
#include "TariffProfileLink.h"
#include "ActiveTargetReadingListLink.h"
#include "IdentifiedObject.h"

/**
 * Agreement between the customer and the service supplier to pay for service at a
 * specific service location. It records certain billing information about the
 * type of service provided at the service location and is used during charge
 * creation to determine the type of service.
 */
class CustomerAgreement : public IdentifiedObject
{

public:
	CustomerAgreement();
	virtual ~CustomerAgreement();
	/**
	 * The account number of the service account (if applicable).
	 */
	String42 serviceAccount;
	/**
	 * The address or textual description of the service location.
	 */
	String42 serviceLocation;
	HistoricalReadingListLink *m_HistoricalReadingListLink;
	UsagePointLink *m_UsagePointLink;
	BillingPeriodListLink *m_BillingPeriodListLink;
	PrepaymentLink *m_PrepaymentLink;
	ProjectionReadingListLink *m_ProjectionReadingListLink;
	TargetReadingListLink *m_TargetReadingListLink;
	ActiveProjectionReadingListLink *m_ActiveProjectionReadingListLink;
	ActiveBillingPeriodListLink *m_ActiveBillingPeriodListLink;
	TariffProfileLink *m_TariffProfileLink;
	ActiveTargetReadingListLink *m_ActiveTargetReadingListLink;

};
#endif // !defined(EA_F0DEF12F_B98E_4f05_8C5C_28F4039ED510__INCLUDED_)
