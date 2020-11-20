///////////////////////////////////////////////////////////
//  ActiveFlowReservationListLink.h
//  Implementation of the Class ActiveFlowReservationListLink
//  Created on:      13-Apr-2020 2:51:20 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_A715FF3E_AB9C_412b_82B9_891E0E0C29A5__INCLUDED_)
#define EA_A715FF3E_AB9C_412b_82B9_891E0E0C29A5__INCLUDED_

#include "ListLink.h"

/**
 * SHALL contain a Link to a List of active FlowReservation instances.
 */
class ActiveFlowReservationListLink : public ListLink
{

public:
	ActiveFlowReservationListLink();
	virtual ~ActiveFlowReservationListLink();

};
#endif // !defined(EA_A715FF3E_AB9C_412b_82B9_891E0E0C29A5__INCLUDED_)
