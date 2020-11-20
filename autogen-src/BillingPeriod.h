///////////////////////////////////////////////////////////
//  BillingPeriod.h
//  Implementation of the Class BillingPeriod
//  Created on:      13-Apr-2020 2:51:21 PM
///////////////////////////////////////////////////////////

#if !defined(EA_F3ABDE16_EDCF_405c_8960_C99B93E50F2E__INCLUDED_)
#define EA_F3ABDE16_EDCF_405c_8960_C99B93E50F2E__INCLUDED_

#include "Int48.h"
#include "DateTimeInterval.h"
#include "TimeType.h"
#include "Resource.h"

/**
 * A Billing Period relates to the period of time on which a customer is billed.
 * As an example the billing period interval for a particular customer might be 31
 * days starting on July 1, 2011. The start date and interval can change on each
 * billing period. There may also be multiple billing periods related to a
 * customer agreement to support different tariff structures.
 */
class BillingPeriod : public Resource
{

public:
	BillingPeriod();
	virtual ~BillingPeriod();
	/**
	 * The amount of the bill for the previous billing period.
	 */
	Int48 billLastPeriod;
	/**
	 * The bill amount related to the billing period as of the statusTimeStamp.
	 */
	Int48 billToDate;
	/**
	 * The time interval for this billing period. 
	 */
	DateTimeInterval interval;
	/**
	 * The date / time of the last update of this resource.
	 */
	TimeType statusTimeStamp;

};
#endif // !defined(EA_F3ABDE16_EDCF_405c_8960_C99B93E50F2E__INCLUDED_)
