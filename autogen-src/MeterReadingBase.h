///////////////////////////////////////////////////////////
//  MeterReadingBase.h
//  Implementation of the Class MeterReadingBase
//  Created on:      13-Apr-2020 2:51:34 PM
//  Original author: SEP
///////////////////////////////////////////////////////////

#if !defined(EA_210EBD8F_51BC_46e4_9623_50F7BED50B46__INCLUDED_)
#define EA_210EBD8F_51BC_46e4_9623_50F7BED50B46__INCLUDED_

#include "IdentifiedObject.h"

/**
 * A container for associating ReadingType, Readings and ReadingSets.
 */
class MeterReadingBase : public IdentifiedObject
{

public:
	MeterReadingBase();
	virtual ~MeterReadingBase();

};
#endif // !defined(EA_210EBD8F_51BC_46e4_9623_50F7BED50B46__INCLUDED_)
