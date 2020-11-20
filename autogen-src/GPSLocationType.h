///////////////////////////////////////////////////////////
//  GPSLocationType.h
//  Implementation of the Class GPSLocationType
//  Created on:      13-Apr-2020 2:51:30 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_CA222F11_4DE7_4798_B6FE_2DF58528AE22__INCLUDED_)
#define EA_CA222F11_4DE7_4798_B6FE_2DF58528AE22__INCLUDED_

#include "String32.h"

/**
 * Specifies a GPS location, expressed in WGS 84 coordinates.
 */
class GPSLocationType
{

public:
	GPSLocationType();
	virtual ~GPSLocationType();
	/**
	 * Specifies the latitude from equator. -90 (south) to +90 (north) in decimal
	 * degrees.
	 */
	String32 lat;
	/**
	 * Specifies the longitude from Greenwich Meridian. -180 (west) to +180 (east) in
	 * decimal degrees.
	 */
	String32 lon;

};
#endif // !defined(EA_CA222F11_4DE7_4798_B6FE_2DF58528AE22__INCLUDED_)
