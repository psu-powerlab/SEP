///////////////////////////////////////////////////////////
//  UsagePoint.h
//  Implementation of the Class UsagePoint
//  Created on:      13-Apr-2020 2:51:47 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_9219D75C_3B17_4589_8D7C_82C4AE9C7846__INCLUDED_)
#define EA_9219D75C_3B17_4589_8D7C_82C4AE9C7846__INCLUDED_

#include "HexBinary160.h"
#include "MeterReadingListLink.h"
#include "UsagePointBase.h"

/**
 * Logical point on a network at which consumption or production is either
 * physically measured (e.g. metered) or estimated (e.g. unmetered street lights).
 */
class UsagePoint : public UsagePointBase
{

public:
	UsagePoint();
	virtual ~UsagePoint();
	/**
	 * The LFDI of the source device. This attribute SHALL be present when mirroring.
	 */
	HexBinary160 deviceLFDI;
	MeterReadingListLink *m_MeterReadingListLink;

};
#endif // !defined(EA_9219D75C_3B17_4589_8D7C_82C4AE9C7846__INCLUDED_)
