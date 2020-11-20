///////////////////////////////////////////////////////////
//  RoleFlagsType.h
//  Implementation of the Class RoleFlagsType
//  Created on:      13-Apr-2020 2:51:41 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_3604BA01_EBA9_4034_911C_528DE23CB942__INCLUDED_)
#define EA_3604BA01_EBA9_4034_911C_528DE23CB942__INCLUDED_

#include "HexBinary16.h"

/**
 * Specifies the roles that apply to a usage point.
 * Bit 0 - isMirror - SHALL be set if the server is not the measurement device
 * Bit 1 - isPremisesAggregationPoint - SHALL be set if the UsagePoint is the
 * point of delivery for a premises
 * Bit 2 - isPEV - SHALL be set if the usage applies to an electric vehicle
 * Bit 3 - isDER - SHALL be set if the usage applies to a distributed energy
 * resource, capable of delivering power to the grid.
 * Bit 4 - isRevenueQuality - SHALL be set if usage was measured by a device
 * certified as revenue quality
 * Bit 5 - isDC - SHALL be set if the usage point measures direct current
 * Bit 6 - isSubmeter - SHALL be set if the usage point is not a premises
 * aggregation point
 * Bit 7-15 - Reserved
 */
class RoleFlagsType : public HexBinary16
{

public:
	RoleFlagsType();
	virtual ~RoleFlagsType();

};
#endif // !defined(EA_3604BA01_EBA9_4034_911C_528DE23CB942__INCLUDED_)
