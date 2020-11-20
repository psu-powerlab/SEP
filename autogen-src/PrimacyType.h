///////////////////////////////////////////////////////////
//  PrimacyType.h
//  Implementation of the Class PrimacyType
//  Created on:      13-Apr-2020 2:51:38 PM
//  Original author: shu
///////////////////////////////////////////////////////////

#if !defined(EA_F9DABFE5_A2AE_4df0_8C7A_AAA8660C7338__INCLUDED_)
#define EA_F9DABFE5_A2AE_4df0_8C7A_AAA8660C7338__INCLUDED_

#include "UInt8.h"

/**
 * Values possible for indication of "Primary" provider:
 * 0: In home energy management system
 * 1: Contracted premises service provider
 * 2: Non-contractual service provider
 * 3 - 64: Reserved
 * 65 - 191: User-defined
 * 192 - 255: Reserved
 * 
 * Lower numbers indicate higher priority.
 */
class PrimacyType : public UInt8
{

public:
	PrimacyType();
	virtual ~PrimacyType();

};
#endif // !defined(EA_F9DABFE5_A2AE_4df0_8C7A_AAA8660C7338__INCLUDED_)
