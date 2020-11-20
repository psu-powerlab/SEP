///////////////////////////////////////////////////////////
//  FlowReservationRequestListLink.h
//  Implementation of the Class FlowReservationRequestListLink
//  Created on:      13-Apr-2020 2:51:29 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_B1D598C1_C222_4367_8E37_9067449124B1__INCLUDED_)
#define EA_B1D598C1_C222_4367_8E37_9067449124B1__INCLUDED_

#include "ListLink.h"

/**
 * SHALL contain a Link to a List of FlowReservationRequest instances.
 */
class FlowReservationRequestListLink : public ListLink
{

public:
	FlowReservationRequestListLink();
	virtual ~FlowReservationRequestListLink();

};
#endif // !defined(EA_B1D598C1_C222_4367_8E37_9067449124B1__INCLUDED_)
