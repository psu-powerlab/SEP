///////////////////////////////////////////////////////////
//  Response.h
//  Implementation of the Class Response
//  Created on:      13-Apr-2020 2:51:40 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_CB95665F_9D5C_488a_9DC3_1DD3B9FBA573__INCLUDED_)
#define EA_CB95665F_9D5C_488a_9DC3_1DD3B9FBA573__INCLUDED_

#include "TimeType.h"
#include "HexBinary160.h"
#include "UInt8.h"
#include "mRIDType.h"
#include "Resource.h"

/**
 * The Response object is the generic response data repository which is extended
 * for specific function sets.
 */
class Response : public Resource
{

public:
	Response();
	virtual ~Response();
	/**
	 * The createdDateTime field contains the date and time when the
	 * acknowledgement/status occurred in the client. The client will provide the
	 * timestamp to ensure the proper time is captured in case the response is delayed
	 * in reaching the server (server receipt time would not be the same as the actual
	 * confirmation time). The time reported from the client should be relative to the
	 * time server indicated by the FunctionSetAssignment that also indicated the
	 * event resource; if no FunctionSetAssignment exists, the time of the server
	 * where the event resource was hosted.
	 */
	TimeType createdDateTime;
	/**
	 * Contains the LFDI of the device providing the response. 
	 */
	HexBinary160 endDeviceLFDI;
	/**
	 * The status field contains the acknowledgement or status. Each event type (DRLC,
	 * DER, Price, or Text) can return different status information (e.g. an
	 * Acknowledge will be returned for a Price event where a DRLC event can return
	 * Event Received, Event Started, and Event Completed). The Status field value
	 * definitions are defined in Table 27: Response Types by Function Set.
	 */
	UInt8 status;
	/**
	 * The subject field provides a method to match the response with the originating
	 * event. It is populated with the mRID of the original object.
	 */
	mRIDType subject;

};
#endif // !defined(EA_CB95665F_9D5C_488a_9DC3_1DD3B9FBA573__INCLUDED_)
