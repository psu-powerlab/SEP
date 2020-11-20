///////////////////////////////////////////////////////////
//  EndDeviceControl.h
//  Implementation of the Class EndDeviceControl
//  Created on:      13-Apr-2020 2:51:27 PM
///////////////////////////////////////////////////////////

#if !defined(EA_BD6C0E77_0358_4099_A8ED_F16A19ED1DFF__INCLUDED_)
#define EA_BD6C0E77_0358_4099_A8ED_F16A19ED1DFF__INCLUDED_

#include "DeviceCategoryType.h"
#include "boolean.h"
#include "UInt16.h"
#include "TargetReduction.h"
#include "SetPoint.h"
#include "Offset.h"
#include "RandomizableEvent.h"
#include "DutyCycle.h"
#include "ApplianceLoadReduction.h"

/**
 * Instructs an EndDevice to perform a specified action.
 */
class EndDeviceControl : public RandomizableEvent
{

public:
	EndDeviceControl();
	virtual ~EndDeviceControl();
	/**
	 * Specifies the bitmap indicating  the categories of devices that SHOULD respond.
	 * Devices SHOULD ignore events that do not indicate their device category.
	 */
	DeviceCategoryType deviceCategory;
	/**
	 * A flag to indicate if the EndDeviceControl is considered a mandatory event as
	 * defined by the service provider issuing the EndDeviceControl. The
	 * drProgramMandatory flag alerts the client/user that they will be subject to
	 * penalty or ineligibility based on the service provider’s program rules for that
	 * deviceCategory.
	 */
	boolean drProgramMandatory;
	/**
	 * Indicates that the event intends to increase consumption. A value of true
	 * indicates the intention to increase usage value, and a value of false indicates
	 * the intention to decrease usage. 
	 */
	boolean loadShiftForward;
	/**
	 * The overrideDuration attribute provides a duration, in seconds, for which a
	 * client device is allowed to override this EndDeviceControl and still meet the
	 * contractual agreement with a service provider without opting out. If
	 * overrideDuration is not specified, then it SHALL default to 0.
	 */
	UInt16 overrideDuration;
	TargetReduction *m_TargetReduction;
	SetPoint m_SetPoint;
	Offset m_Offset;
	DutyCycle m_DutyCycle;
	ApplianceLoadReduction *m_ApplianceLoadReduction;

};
#endif // !defined(EA_BD6C0E77_0358_4099_A8ED_F16A19ED1DFF__INCLUDED_)
