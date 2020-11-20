///////////////////////////////////////////////////////////
//  MirrorUsagePoint.h
//  Implementation of the Class MirrorUsagePoint
//  Created on:      13-Apr-2020 2:51:35 PM
//  Original author: gfalendy
///////////////////////////////////////////////////////////

#if !defined(EA_DA60FB9A_1BA8_450f_89B7_D6BF8C36BCE7__INCLUDED_)
#define EA_DA60FB9A_1BA8_450f_89B7_D6BF8C36BCE7__INCLUDED_

#include "HexBinary160.h"
#include "UInt32.h"
#include "UsagePointBase.h"
#include "MirrorMeterReading.h"

/**
 * A parallel to UsagePoint to support mirroring
 */
class MirrorUsagePoint : public UsagePointBase
{

public:
	MirrorUsagePoint();
	virtual ~MirrorUsagePoint();
	/**
	 * The LFDI of the device being mirrored. 
	 */
	HexBinary160 deviceLFDI;
	/**
	 * POST rate, or how often mirrored data should be POSTed, in seconds. A client
	 * MAY indicate a preferred postRate when POSTing MirrorUsagePoint. A server MAY
	 * add or modify postRate to indicate its preferred posting rate.
	 */
	UInt32 postRate;
	MirrorMeterReading *m_MirrorMeterReading;

};
#endif // !defined(EA_DA60FB9A_1BA8_450f_89B7_D6BF8C36BCE7__INCLUDED_)
