///////////////////////////////////////////////////////////
//  PrepayOperationStatus.h
//  Implementation of the Class PrepayOperationStatus
//  Created on:      13-Apr-2020 2:51:37 PM
///////////////////////////////////////////////////////////

#if !defined(EA_232ED1E6_8AA7_4212_8FEC_323AC1D827FB__INCLUDED_)
#define EA_232ED1E6_8AA7_4212_8FEC_323AC1D827FB__INCLUDED_

#include "CreditTypeChange.h"
#include "CreditTypeType.h"
#include "ServiceChange.h"
#include "ServiceStatusType.h"
#include "Resource.h"

/**
 * PrepayOperationStatus describes the status of the service or commodity being
 * conditionally controlled by the Prepayment function set.
 */
class PrepayOperationStatus : public Resource
{

public:
	PrepayOperationStatus();
	virtual ~PrepayOperationStatus();
	/**
	 * CreditTypeChange is used to define a pending change of creditTypeInUse, which
	 * will activate at a specified time.
	 */
	CreditTypeChange creditTypeChange;
	/**
	 * CreditTypeInUse identifies whether the present mode of operation is consuming
	 * regular credit or emergency credit.
	 */
	CreditTypeType creditTypeInUse;
	/**
	 * ServiceChange is used to define a pending change of serviceStatus, which will
	 * activate at a specified time.
	 */
	ServiceChange serviceChange;
	/**
	 * ServiceStatus identifies whether the service is connected or disconnected, or
	 * armed for connection or disconnection.
	 */
	ServiceStatusType serviceStatus;

};
#endif // !defined(EA_232ED1E6_8AA7_4212_8FEC_323AC1D827FB__INCLUDED_)
