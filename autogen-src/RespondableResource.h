///////////////////////////////////////////////////////////
//  RespondableResource.h
//  Implementation of the Class RespondableResource
//  Created on:      13-Apr-2020 2:51:40 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_8928E03B_144B_49e7_84D4_07346F4D5EE1__INCLUDED_)
#define EA_8928E03B_144B_49e7_84D4_07346F4D5EE1__INCLUDED_

#include "anyURI.h"
#include "HexBinary8.h"
#include "Resource.h"

/**
 * A Resource to which a Response can be requested.
 */
class RespondableResource : public Resource
{

public:
	RespondableResource();
	virtual ~RespondableResource();
	/**
	 * A reference to the response resource address (URI). Required on a response to a
	 * GET if responseRequired is "true". 
	 */
	anyURI replyTo;
	/**
	 * Indicates whether or not a response is required upon receipt, creation or
	 * update of this resource. Responses shall be posted to the collection specified
	 * in "replyTo".
	 * 
	 * If the resource has a deviceCategory field, devices that match one or more of
	 * the device types indicated in deviceCategory SHALL respond according to the
	 * rules listed below.  If the category does not match, the device SHALL NOT
	 * respond. If the resource does not have a deviceCategory field, a device
	 * receiving the resource SHALL respond according to the rules listed below.
	 * 
	 * Value encoded as hex according to the following bit assignments, any
	 * combination is possible.
	 * See Table 27 for the list of appropriate Response status codes to be sent for
	 * these purposes.
	 * 0 - End device shall indicate that message was received
	 * 1 - End device shall indicate specific response.
	 * 2 - End user / customer response is required.
	 * All other values reserved. 
	 */
	HexBinary8 responseRequired;

};
#endif // !defined(EA_8928E03B_144B_49e7_84D4_07346F4D5EE1__INCLUDED_)
