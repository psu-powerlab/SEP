///////////////////////////////////////////////////////////
//  AbstractDevice.h
//  Implementation of the Class AbstractDevice
//  Created on:      13-Apr-2020 2:51:19 PM
//  Original author: shu
///////////////////////////////////////////////////////////

#if !defined(EA_4FE026BA_5D04_4aee_9CFD_2849E642F684__INCLUDED_)
#define EA_4FE026BA_5D04_4aee_9CFD_2849E642F684__INCLUDED_

#include "DeviceCategoryType.h"
#include "HexBinary160.h"
#include "SFDIType.h"
#include "DeviceStatusLink.h"
#include "DeviceInformationLink.h"
#include "FileStatusLink.h"
#include "PowerStatusLink.h"
#include "LoadShedAvailabilityListLink.h"
#include "IPInterfaceListLink.h"
#include "DERListLink.h"
#include "ConfigurationLink.h"
#include "LogEventListLink.h"
#include "SubscribableResource.h"

/**
 * The EndDevice providing the resources available within the DeviceCapabilities. 
 */
class AbstractDevice : public SubscribableResource
{

public:
	AbstractDevice();
	virtual ~AbstractDevice();
	/**
	 * This field is for use in devices that can adjust energy usage (e.g., demand
	 * response, distributed energy resources).  For devices that do not respond to
	 * EndDeviceControls or DERControls (for instance, an ESI), this field should not
	 * have any bits set.
	 */
	DeviceCategoryType deviceCategory;
	/**
	 * Long form of device identifier. See the Security section for additional details.
	 */
	HexBinary160 lFDI;
	/**
	 * Short form of device identifier, WITH the checksum digit. See the Security
	 * section for additional details. 
	 */
	SFDIType sFDI;
	DeviceStatusLink *m_DeviceStatusLink;
	DeviceInformationLink *m_DeviceInformationLink;
	FileStatusLink *m_FileStatusLink;
	PowerStatusLink *m_PowerStatusLink;
	LoadShedAvailabilityListLink *m_LoadShedAvailabilityListLink;
	IPInterfaceListLink *m_IPInterfaceListLink;
	DERListLink *m_DERListLink;
	ConfigurationLink *m_ConfigurationLink;
	LogEventListLink *m_LogEventListLink;

};

#endif // !defined(EA_4FE026BA_5D04_4aee_9CFD_2849E642F684__INCLUDED_)
