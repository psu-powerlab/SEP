///////////////////////////////////////////////////////////
//  DeviceInformation.h
//  Implementation of the Class DeviceInformation
//  Created on:      13-Apr-2020 2:51:27 PM
//  Original author: kholbroo
///////////////////////////////////////////////////////////

#if !defined(EA_ADEBC75A_90D5_4c3a_95AF_45F40A95DC54__INCLUDED_)
#define EA_ADEBC75A_90D5_4c3a_95AF_45F40A95DC54__INCLUDED_

#include "HexBinary64.h"
#include "GPSLocationType.h"
#include "HexBinary160.h"
#include "TimeType.h"
#include "String32.h"
#include "PENType.h"
#include "UInt32.h"
#include "PowerSourceType.h"
#include "DRLCCapabilities.h"
#include "SupportedLocaleListLink.h"
#include "Resource.h"

/**
 * Contains identification and other information about the device that changes
 * very infrequently, typically only when updates are applied, if ever. 
 */
class DeviceInformation : public Resource
{

public:
	DeviceInformation();
	virtual ~DeviceInformation();
	/**
	 * Bitmap indicating the function sets used by the device as a client.
	 * 0 - Device Capability
	 * 1 - Self Device Resource
	 * 2 - End Device Resource
	 * 3 - Function Set Assignments
	 * 4 - Subscription/Notification Mechanism
	 * 5 - Response
	 * 6 - Time
	 * 7 - Device Information
	 * 8 - Power Status
	 * 9 - Network Status
	 * 10 - Log Event
	 * 11 - Configuration Resource
	 * 12 - Software Download
	 * 13 - DRLC
	 * 14 - Metering
	 * 15 - Pricing
	 * 16 - Messaging
	 * 17 - Billing
	 * 18 - Prepayment
	 * 19 - Flow Reservation
	 * 20 - DER Control
	 */
	HexBinary64 functionsImplemented;
	/**
	 * GPS location of this device.
	 */
	GPSLocationType gpsLocation;
	/**
	 * Long form device identifier. See the Security section for full details. 
	 */
	HexBinary160 lFDI;
	/**
	 * Date/time of manufacture
	 */
	TimeType mfDate;
	/**
	 * Manufacturer hardware version
	 */
	String32 mfHwVer;
	/**
	 * The manufacturer's IANA Enterprise Number.
	 */
	PENType mfID;
	/**
	 * Manufacturer dependent information related to the manufacture of this device
	 */
	String32 mfInfo;
	/**
	 * Manufacturer's model number
	 */
	String32 mfModel;
	/**
	 * Manufacturer assigned serial number
	 */
	String32 mfSerNum;
	/**
	 * The default polling rate for this function set (this resource and all resources
	 * below), in seconds. If not specified, a default of 900 seconds (15 minutes) is
	 * used. It is RECOMMENDED a client poll the resources of this function set every
	 * pollRate seconds.
	 */
	UInt32 pollRate;
	/**
	 * Primary source of power.
	 */
	PowerSourceType primaryPower;
	/**
	 * Secondary source of power
	 */
	PowerSourceType secondaryPower;
	/**
	 * Activation date/time of currently running software
	 */
	TimeType swActTime;
	/**
	 * Currently running software version
	 */
	String32 swVer;
	DRLCCapabilities *m_DRLCCapabilities;
	SupportedLocaleListLink *m_SupportedLocaleListLink;

};
#endif // !defined(EA_ADEBC75A_90D5_4c3a_95AF_45F40A95DC54__INCLUDED_)
