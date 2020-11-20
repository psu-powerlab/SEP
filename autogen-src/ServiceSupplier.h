///////////////////////////////////////////////////////////
//  ServiceSupplier.h
//  Implementation of the Class ServiceSupplier
//  Created on:      13-Apr-2020 2:51:41 PM
///////////////////////////////////////////////////////////

#if !defined(EA_1FA69EB3_16F4_4ae5_9088_5E68F83348EC__INCLUDED_)
#define EA_1FA69EB3_16F4_4ae5_9088_5E68F83348EC__INCLUDED_

#include "String32.h"
#include "String20.h"
#include "UInt32.h"
#include "String42.h"
#include "IdentifiedObject.h"

/**
 * Organisation that provides services to Customers.
 */
class ServiceSupplier : public IdentifiedObject
{

public:
	ServiceSupplier();
	virtual ~ServiceSupplier();
	/**
	 * E-mail address for this service supplier. 
	 */
	String32 email;
	/**
	 * Human-readable phone number for this service supplier. 
	 */
	String20 phone;
	/**
	 * Contains the IANA PEN for the commodity provider. 
	 */
	UInt32 providerID;
	/**
	 * Website URI address for this service supplier. 
	 */
	String42 web;

};
#endif // !defined(EA_1FA69EB3_16F4_4ae5_9088_5E68F83348EC__INCLUDED_)
