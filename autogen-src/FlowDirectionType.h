///////////////////////////////////////////////////////////
//  FlowDirectionType.h
//  Implementation of the Class FlowDirectionType
//  Created on:      13-Apr-2020 2:51:29 PM
//  Original author: Shawn Hu
///////////////////////////////////////////////////////////

#if !defined(EA_BCBCE834_A39B_4ef8_99D9_7AE2BC232B05__INCLUDED_)
#define EA_BCBCE834_A39B_4ef8_99D9_7AE2BC232B05__INCLUDED_

#include "UInt8.h"

/**
 * 0 = Not Applicable (default, if not specified)
 * 1 = Forward (delivered to customer)
 * 19 = Reverse (received from customer)
 * All other values reserved.
 */
class FlowDirectionType : public UInt8
{

public:
	FlowDirectionType();
	virtual ~FlowDirectionType();

};
#endif // !defined(EA_BCBCE834_A39B_4ef8_99D9_7AE2BC232B05__INCLUDED_)
