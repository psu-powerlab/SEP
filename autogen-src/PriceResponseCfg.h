///////////////////////////////////////////////////////////
//  PriceResponseCfg.h
//  Implementation of the Class PriceResponseCfg
//  Created on:      13-Apr-2020 2:51:38 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_1CD0E407_E1F7_45a0_9BBA_8F53716006B3__INCLUDED_)
#define EA_1CD0E407_E1F7_45a0_9BBA_8F53716006B3__INCLUDED_

#include "Int32.h"
#include "RateComponentLink.h"
#include "Resource.h"

/**
 * Configuration data that specifies how price responsive devices SHOULD respond
 * to price changes while acting upon a given RateComponent.
 */
class PriceResponseCfg : public Resource
{

public:
	PriceResponseCfg();
	virtual ~PriceResponseCfg();
	/**
	 * Price responsive clients acting upon the associated RateComponent SHOULD
	 * consume the associated commodity while the price is less than this threshold.
	 */
	Int32 consumeThreshold;
	/**
	 * Price responsive clients acting upon the associated RateComponent SHOULD reduce
	 * consumption to the maximum extent possible while the price is greater than this
	 * threshold.
	 */
	Int32 maxReductionThreshold;
	RateComponentLink *m_RateComponentLink;

};
#endif // !defined(EA_1CD0E407_E1F7_45a0_9BBA_8F53716006B3__INCLUDED_)
