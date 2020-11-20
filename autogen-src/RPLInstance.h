///////////////////////////////////////////////////////////
//  RPLInstance.h
//  Implementation of the Class RPLInstance
//  Created on:      13-Apr-2020 2:51:41 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_4BA0F3B4_6455_484d_97B7_197EE811A7D0__INCLUDED_)
#define EA_4BA0F3B4_6455_484d_97B7_197EE811A7D0__INCLUDED_

#include "UInt8.h"
#include "boolean.h"
#include "UInt16.h"
#include "RPLSourceRoutesListLink.h"
#include "Resource.h"

/**
 * Specific RPLInstance resource.  This resource may be thought of as network
 * status information for a specific RPL instance associated with IPInterface.
 */
class RPLInstance : public Resource
{

public:
	RPLInstance();
	virtual ~RPLInstance();
	/**
	 * See [RFC 6550].
	 */
	UInt8 DODAGid;
	/**
	 * See [RFC 6550].
	 */
	boolean DODAGroot;
	/**
	 * See [RFC 6550].
	 */
	UInt8 flags;
	/**
	 * See [RFC 6550].
	 */
	boolean groundedFlag;
	/**
	 * See [RFC 6550].
	 */
	UInt8 MOP;
	/**
	 * See [RFC 6550].
	 */
	UInt8 PRF;
	/**
	 * See [RFC 6550].
	 */
	UInt16 rank;
	/**
	 * See [RFC 6550].
	 */
	UInt8 RPLInstanceID;
	/**
	 * See [RFC 6550].
	 */
	UInt8 versionNumber;
	RPLSourceRoutesListLink *m_RPLSourceRoutesListLink;

};
#endif // !defined(EA_4BA0F3B4_6455_484d_97B7_197EE811A7D0__INCLUDED_)
