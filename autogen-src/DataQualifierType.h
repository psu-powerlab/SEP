///////////////////////////////////////////////////////////
//  DataQualifierType.h
//  Implementation of the Class DataQualifierType
//  Created on:      13-Apr-2020 2:51:24 PM
//  Original author: Shawn Hu
///////////////////////////////////////////////////////////

#if !defined(EA_14D13425_8570_4a4d_9E14_6858C243B976__INCLUDED_)
#define EA_14D13425_8570_4a4d_9E14_6858C243B976__INCLUDED_

#include "UInt8.h"

/**
 * 0 = Not Applicable (default, if not specified)
 * 2 = Average
 * 8 = Maximum
 * 9 = Minimum
 * 12 = Normal
 * 29 = Standard Deviation of a Population (typically indicated by a lower case
 * sigma)
 * 30 = Standard Deviation of a Sample Drawn from a Population (typically
 * indicated by a lower case 's')
 * All other values reserved.
 */
class DataQualifierType : public UInt8
{

public:
	DataQualifierType();
	virtual ~DataQualifierType();

};
#endif // !defined(EA_14D13425_8570_4a4d_9E14_6858C243B976__INCLUDED_)
