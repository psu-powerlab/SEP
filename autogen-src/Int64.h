///////////////////////////////////////////////////////////
//  Int64.h
//  Implementation of the Class Int64
//  Created on:      13-Apr-2020 2:51:32 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_DFE3F776_CB54_483e_ADDD_9A25920FD581__INCLUDED_)
#define EA_DFE3F776_CB54_483e_ADDD_9A25920FD581__INCLUDED_

/**
 * Signed integer, max inclusive 9223372036854775807 (2^63), min inclusive -
 * 9223372036854775808 (same as xs:long)
 */

namespace sep {
    typedef long long int Int64;
};

// NOT IMPLEMENTED
//class Int64 : public long
//{
//
//public:
//	Int64();
//	virtual ~Int64();
//
//};
#endif // !defined(EA_DFE3F776_CB54_483e_ADDD_9A25920FD581__INCLUDED_)
