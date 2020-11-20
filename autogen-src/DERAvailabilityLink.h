///////////////////////////////////////////////////////////
//  DERAvailabilityLink.h
//  Implementation of the Class DERAvailabilityLink
//  Created on:      13-Apr-2020 2:51:25 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_A8D7A405_A929_4c51_A2DD_726F1AE86D6B__INCLUDED_)
#define EA_A8D7A405_A929_4c51_A2DD_726F1AE86D6B__INCLUDED_

#include "Link.h"

/**
 * SHALL contain a Link to an instance of DERAvailability.
 */
class DERAvailabilityLink : public Link
{

public:
	DERAvailabilityLink();
	virtual ~DERAvailabilityLink();

};
#endif // !defined(EA_A8D7A405_A929_4c51_A2DD_726F1AE86D6B__INCLUDED_)
