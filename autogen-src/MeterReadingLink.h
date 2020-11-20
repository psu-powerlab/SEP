///////////////////////////////////////////////////////////
//  MeterReadingLink.h
//  Implementation of the Class MeterReadingLink
//  Created on:      13-Apr-2020 2:51:34 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_4BDAD6FF_A491_4c4c_BA63_99758D143B3E__INCLUDED_)
#define EA_4BDAD6FF_A491_4c4c_BA63_99758D143B3E__INCLUDED_

#include "Link.h"

/**
 * SHALL contain a Link to an instance of MeterReading.
 */
class MeterReadingLink : public Link
{

public:
	MeterReadingLink();
	virtual ~MeterReadingLink();

};
#endif // !defined(EA_4BDAD6FF_A491_4c4c_BA63_99758D143B3E__INCLUDED_)
