///////////////////////////////////////////////////////////
//  Configuration.h
//  Implementation of the Class Configuration
//  Created on:      13-Apr-2020 2:51:22 PM
//  Original author: kholbroo
///////////////////////////////////////////////////////////

#if !defined(EA_2615940D_F5D8_429b_86EF_1CB38DD36B3B__INCLUDED_)
#define EA_2615940D_F5D8_429b_86EF_1CB38DD36B3B__INCLUDED_

#include "LocaleType.h"
#include "UInt32.h"
#include "String32.h"
#include "PriceResponseCfgListLink.h"
#include "TimeConfiguration.h"
#include "PowerConfiguration.h"
#include "SubscribableResource.h"

/**
 * This resource contains various settings to control the operation of the device
 */
class Configuration : public SubscribableResource
{

public:
	Configuration();
	virtual ~Configuration();
	/**
	 * [RFC 4646] identifier of the language-region currently in use.
	 */
	LocaleType currentLocale;
	/**
	 * The default polling rate for this function set (this resource and all resources
	 * below), in seconds. If not specified, a default of 900 seconds (15 minutes) is
	 * used. It is RECOMMENDED a client poll the resources of this function set every
	 * pollRate seconds.
	 */
	UInt32 pollRate;
	/**
	 * User assigned, convenience name used for network browsing displays, etc.
	 * Example "My Thermostat"
	 */
	String32 userDeviceName;
	PriceResponseCfgListLink *m_PriceResponseCfgListLink;
	TimeConfiguration *m_TimeConfiguration;
	PowerConfiguration *m_PowerConfiguration;

};
#endif // !defined(EA_2615940D_F5D8_429b_86EF_1CB38DD36B3B__INCLUDED_)
