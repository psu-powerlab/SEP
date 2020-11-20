///////////////////////////////////////////////////////////
//  DRLCCapabilities.h
//  Implementation of the Class DRLCCapabilities
//  Created on:      13-Apr-2020 2:51:27 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_20073ED0_2DC3_4969_9854_9AC280F0BCAD__INCLUDED_)
#define EA_20073ED0_2DC3_4969_9854_9AC280F0BCAD__INCLUDED_

#include "RealEnergy.h"
#include "HexBinary32.h"

/**
 * Contains information about the static capabilities of the device, to allow
 * service providers to know what types of functions are supported, what the
 * normal operating ranges and limits are, and other similar information, in order
 * to provide better suggestions of applicable programs to receive the maximum
 * benefit. 
 */
class DRLCCapabilities
{

public:
	DRLCCapabilities();
	virtual ~DRLCCapabilities();
	/**
	 * The average hourly energy usage when in normal operating mode. 
	 */
	RealEnergy averageEnergy;
	/**
	 * The maximum demand rating of this end device.
	 */
	ActivePower maxDemand;
	/**
	 * Bitmap indicating the DRLC options implemented by the device.
	 * 0 - Target reduction (kWh)
	 * 1 - Target reduction (kW)
	 * 2 - Target reduction (Watts)
	 * 3 - Target reduction (Cubic Meters)
	 * 4 - Target reduction (Cubic Feet)
	 * 5 - Target reduction (US Gallons)
	 * 6 - Target reduction (Imperial Gallons)
	 * 7 - Target reduction (BTUs)
	 * 8 - Target reduction (Liters)
	 * 9 - Target reduction (kPA (gauge))
	 * 10 - Target reduction (kPA (absolute))
	 * 11 - Target reduction (Mega Joule)
	 * 12 - Target reduction (Unitless)
	 * 13-15 - Reserved
	 * 16 - Temperature set point
	 * 17 - Temperature offset
	 * 18 - Duty cycle
	 * 19 - Load adjustment percentage
	 * 20 - Appliance load reduction
	 * 21-31 - Reserved
	 */
	HexBinary32 optionsImplemented;

};
#endif // !defined(EA_20073ED0_2DC3_4969_9854_9AC280F0BCAD__INCLUDED_)
