///////////////////////////////////////////////////////////
//  DeviceCategoryType.h
//  Implementation of the Class DeviceCategoryType
//  Created on:      13-Apr-2020 2:51:27 PM
///////////////////////////////////////////////////////////

#if !defined(EA_51A68B03_7276_4161_BA9A_FB26FA81BCBC__INCLUDED_)
#define EA_51A68B03_7276_4161_BA9A_FB26FA81BCBC__INCLUDED_

#include "HexBinary32.h"

/**
 * The Device category types defined.
 * Bit positions SHALL be defined as follows:
 * 0 - Programmable Communicating Thermostat
 * 1 - Strip Heaters
 * 2 - Baseboard Heaters
 * 3 - Water Heater
 * 4 - Pool Pump
 * 5 - Sauna
 * 6 - Hot Tub
 * 7 - Smart Appliance
 * 8 - Irrigation Pump
 * 9 - Managed Commercial and Industrial (C&I) Loads
 * 10 - Simple Misc. (Residential On/Off) Loads
 * 11 - Exterior Lighting
 * 12 - Interior Lighting
 * 13 - Load Control Switch
 * 14 - Energy Management System
 * 15 - Smart Energy Module
 * 16 - Electric Vehicle
 * 17 - EVSE
 * 18 - Virtual or Mixed DER
 * 19 - Reciprocating Engine
 * 20 - Fuel Cell
 * 21 - Photovoltaic System
 * 22 - Combined Heat and Power
 * 23 - Combined PV and Storage
 * 24 - Other Generation System
 * 25 - Other Storage System
 * All other values reserved.
 */
class DeviceCategoryType : public HexBinary32
{

public:
	DeviceCategoryType();
	virtual ~DeviceCategoryType();

};
#endif // !defined(EA_51A68B03_7276_4161_BA9A_FB26FA81BCBC__INCLUDED_)
