///////////////////////////////////////////////////////////
//  DrResponse.h
//  Implementation of the Class DrResponse
//  Created on:      13-Apr-2020 2:51:27 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_66779585_8A24_483b_A718_9829656EEA90__INCLUDED_)
#define EA_66779585_8A24_483b_A718_9829656EEA90__INCLUDED_

#include "UInt16.h"
#include "SetPoint.h"
#include "DutyCycle.h"
#include "Offset.h"
#include "ApplianceLoadReduction.h"
#include "Response.h"
#include "AppliedTargetReduction.h"

/**
 * A response to a Demand Response Load Control (EndDeviceControl) message.
 */
class DrResponse : public Response
{

public:
	DrResponse();
	virtual ~DrResponse();
	/**
	 * Indicates the amount of time, in seconds, that the client partially opts-out
	 * during the demand response event. When overriding within the allowed override
	 * duration, the client SHALL send a partial opt-out (Response status code 8) for
	 * partial opt-out upon completion, with the total time the event was overridden
	 * (this attribute) populated. The client SHALL send a no participation status
	 * response (status type 10) if the user partially opts-out for longer than
	 * EndDeviceControl.overrideDuration. 
	 */
	UInt16 overrideDuration;
	SetPoint *m_SetPoint;
	DutyCycle *m_DutyCycle;
	Offset *m_Offset;
	ApplianceLoadReduction *m_ApplianceLoadReduction;
	AppliedTargetReduction *m_AppliedTargetReduction;

};
#endif // !defined(EA_66779585_8A24_483b_A718_9829656EEA90__INCLUDED_)
