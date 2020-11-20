///////////////////////////////////////////////////////////
//  PrepaymentList.h
//  Implementation of the Class PrepaymentList
//  Created on:      13-Apr-2020 2:51:37 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_6F274B3F_37EA_4048_ABEE_EBB66F41415C__INCLUDED_)
#define EA_6F274B3F_37EA_4048_ABEE_EBB66F41415C__INCLUDED_

#include "UInt32.h"
#include "SubscribableList.h"
#include "Prepayment.h"

/**
 * A List element to hold Prepayment objects. 
 */
class PrepaymentList : public SubscribableList
{

public:
	PrepaymentList();
	virtual ~PrepaymentList();
	/**
	 * The default polling rate for this function set (this resource and all resources
	 * below), in seconds. If not specified, a default of 900 seconds (15 minutes) is
	 * used. It is RECOMMENDED a client poll the resources of this function set every
	 * pollRate seconds.
	 */
	UInt32 pollRate;
	Prepayment *m_Prepayment;

};
#endif // !defined(EA_6F274B3F_37EA_4048_ABEE_EBB66F41415C__INCLUDED_)
