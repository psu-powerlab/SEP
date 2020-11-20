///////////////////////////////////////////////////////////
//  Registration.h
//  Implementation of the Class Registration
//  Created on:      13-Apr-2020 2:51:39 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_5144F149_491F_42ae_8A59_8CBC9AE58D6A__INCLUDED_)
#define EA_5144F149_491F_42ae_8A59_8CBC9AE58D6A__INCLUDED_

#include "TimeType.h"
#include "PINType.h"
#include "UInt32.h"
#include "Resource.h"

/**
 * Registration represents an authorization to access the resources on a host. 
 */
class Registration : public Resource
{

public:
	Registration();
	virtual ~Registration();
	/**
	 * Contains the time at which this registration was created, by which clients MAY
	 * prioritize information providers with the most recent registrations, when no
	 * additional direction from the consumer is available. 
	 */
	TimeType dateTimeRegistered;
	/**
	 * Contains the registration PIN number associated with the device, including the
	 * checksum digit.
	 */
	PINType pIN;
	/**
	 * The default polling rate for this function set (this resource and all resources
	 * below), in seconds. If not specified, a default of 900 seconds (15 minutes) is
	 * used. It is RECOMMENDED a client poll the resources of this function set every
	 * pollRate seconds.
	 */
	UInt32 pollRate;

};
#endif // !defined(EA_5144F149_491F_42ae_8A59_8CBC9AE58D6A__INCLUDED_)
