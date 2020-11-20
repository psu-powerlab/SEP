///////////////////////////////////////////////////////////
//  DERControl.h
//  Implementation of the Class DERControl
//  Created on:      13-Apr-2020 2:51:25 PM
//  Original author: shu
///////////////////////////////////////////////////////////

#if !defined(EA_2A8B475A_302B_4f8d_8C55_AFCE39BCF7E2__INCLUDED_)
#define EA_2A8B475A_302B_4f8d_8C55_AFCE39BCF7E2__INCLUDED_

#include "DeviceCategoryType.h"
#include "RandomizableEvent.h"
#include "DERControlBase.h"

/**
 * Distributed Energy Resource (DER) time/event-based control.
 */
class DERControl : public RandomizableEvent
{

public:
	DERControl();
	virtual ~DERControl();
	/**
	 * Specifies the bitmap indicating  the categories of devices that SHOULD respond.
	 * Devices SHOULD ignore events that do not indicate their device category. If not
	 * present, all devices SHOULD respond.
	 */
	DeviceCategoryType deviceCategory;
	DERControlBase *m_DERControlBase;

};
#endif // !defined(EA_2A8B475A_302B_4f8d_8C55_AFCE39BCF7E2__INCLUDED_)
