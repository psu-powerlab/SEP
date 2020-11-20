///////////////////////////////////////////////////////////
//  PrepayResponse.h
//  Implementation of the Class PrepayResponse
//  Created on:      13-Apr-2020 2:51:37 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_854CAC72_0E1A_459d_9D17_9DD04FCD419A__INCLUDED_)
#define EA_854CAC72_0E1A_459d_9D17_9DD04FCD419A__INCLUDED_

#include "CreditTypeType.h"
#include "ServiceStatusType.h"

/**
 * A response related to prepayment
 */
class PrepayResponse
{

public:
	PrepayResponse();
	virtual ~PrepayResponse();
	/**
	 * The credit type that is now in use
	 */
	CreditTypeType creditTypeApplied;
	/**
	 * The service status that is now in use
	 */
	ServiceStatusType serviceStatusApplied;

};
#endif // !defined(EA_854CAC72_0E1A_459d_9D17_9DD04FCD419A__INCLUDED_)
