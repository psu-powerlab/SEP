///////////////////////////////////////////////////////////
//  AccumulationBehaviourType.h
//  Implementation of the Class AccumulationBehaviourType
//  Created on:      13-Apr-2020 2:51:19 PM
//  Original author: Shawn Hu
///////////////////////////////////////////////////////////

#if !defined(EA_324DBF45_BFDA_445d_9BE2_2F88CA08C722__INCLUDED_)
#define EA_324DBF45_BFDA_445d_9BE2_2F88CA08C722__INCLUDED_

#include "UInt8.h"

/**
 * 0 = Not Applicable (default, if not specified)
 * 
 * 3 = Cumulative
 * The sum of the previous billing period values. Note: “Cumulative” is commonly
 * used in conjunction with “demand.” Each demand reset causes the maximum demand
 * value for the present billing period (since the last demand reset) to
 * accumulate as an accumulative total of all maximum demands. So instead of
 * “zeroing” the demand register, a demand reset has the affect of adding the
 * present maximum demand to this accumulating total.
 * 
 * 4 = DeltaData
 * The difference between the value at the end of the prescribed interval and the
 * beginning of the interval. This is used for incremental interval data.
 * Note: One common application would be for load profile data, another use might
 * be to report the number of events within an interval (such as the number of
 * equipment energizations within the specified period of time.)
 * 
 * 6 = Indicating
 * As if a needle is swung out on the meter face to a value to indicate the
 * current value. (Note: An “indicating” value is typically measured over hundreds
 * of milliseconds or greater, or may imply a “pusher” mechanism to capture a
 * value. Compare this to “instantaneous” which is measured over a shorter period
 * of time.)
 * 
 * 9 = Summation
 * A form of accumulation which is selective with respect to time.
 * Note : “Summation” could be considered a specialization of “Bulk Quantity”
 * according to the rules of inheritance where “Summation” selectively accumulates
 * pulses over a timing pattern, and “BulkQuantity” accumulates pulses all of the
 * time.
 * 
 * 12 = Instantaneous
 * Typically measured over the fastest period of time allowed by the definition of
 * the metric (usually milliseconds or tens of milliseconds.) (Note:
 * “Instantaneous” was moved to attribute #3 in 61968-9Ed2 from attribute #1 in
 * 61968-9Ed1.)
 * 
 * All other values reserved.
 */
class AccumulationBehaviourType : public UInt8
{

public:
	AccumulationBehaviourType();
	virtual ~AccumulationBehaviourType();

};
#endif // !defined(EA_324DBF45_BFDA_445d_9BE2_2F88CA08C722__INCLUDED_)
