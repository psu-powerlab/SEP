///////////////////////////////////////////////////////////
//  SubscribableType.h
//  Implementation of the Class SubscribableType
//  Created on:      13-Apr-2020 2:51:43 PM
///////////////////////////////////////////////////////////

#if !defined(EA_78DCF288_219A_45b7_9B65_F0BB4C4FBA8B__INCLUDED_)
#define EA_78DCF288_219A_45b7_9B65_F0BB4C4FBA8B__INCLUDED_

#include "UInt8.h"

/**
 * The subscribable values.
 * 0 - Resource does not support subscriptions
 * 1 - Resource supports non-conditional subscriptions
 * 2 - Resource supports conditional subscriptions
 * 3 - Resource supports both conditional and non-conditional subscriptions
 * All other values reserved.
 */
class SubscribableType : public UInt8
{

public:
	SubscribableType();
	virtual ~SubscribableType();

};
#endif // !defined(EA_78DCF288_219A_45b7_9B65_F0BB4C4FBA8B__INCLUDED_)
