///////////////////////////////////////////////////////////
//  IPInterface.h
//  Implementation of the Class IPInterface
//  Created on:      13-Apr-2020 2:51:32 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_8CD31D0B_D7BD_4b9d_9676_6A67C473036B__INCLUDED_)
#define EA_8CD31D0B_D7BD_4b9d_9676_6A67C473036B__INCLUDED_

#include "String192.h"
#include "UInt32.h"
#include "String16.h"
#include "UInt8.h"
#include "boolean.h"
#include "UInt16.h"
#include "Int64.h"
#include "IPAddrListLink.h"
#include "LLInterfaceListLink.h"
#include "Resource.h"

/**
 * Specific IPInterface resource.  This resource may be thought of as network
 * status information for a specific network (IP) layer interface.
 */
class IPInterface : public Resource
{

public:
	IPInterface();
	virtual ~IPInterface();
	/**
	 * Use rules from [RFC 2863].
	 */
	String192 ifDescr;
	/**
	 * Use rules from [RFC 2863]. 
	 */
	UInt32 ifHighSpeed;
	/**
	 * Use rules from [RFC 2863].
	 */
	UInt32 ifInBroadcastPkts;
	/**
	 * Use rules from [RFC 2863].
	 */
	UInt32 ifIndex;
	/**
	 * Use rules from [RFC 2863]. Can be thought of as Input Datagrams Discarded.
	 */
	UInt32 ifInDiscards;
	/**
	 * Use rules from [RFC 2863].
	 */
	UInt32 ifInErrors;
	/**
	 * Use rules from [RFC 2863]. Can be thought of as Multicast Datagrams Received.
	 */
	UInt32 ifInMulticastPkts;
	/**
	 * Use rules from [RFC 2863]. Can be thought of as Bytes Received.
	 */
	UInt32 ifInOctets;
	/**
	 * Use rules from [RFC 2863]. Can be thought of as Datagrams Received.
	 */
	UInt32 ifInUcastPkts;
	/**
	 * Use rules from [RFC 2863]. Can be thought of as Datagrams with Unknown Protocol
	 * Received.
	 */
	UInt32 ifInUnknownProtos;
	/**
	 * Use rules from [RFC 2863].
	 */
	UInt32 ifMtu;
	/**
	 * Use rules from [RFC 2863].
	 */
	String16 ifName;
	/**
	 * Use rules and assignments from [RFC 2863].
	 */
	UInt8 ifOperStatus;
	/**
	 * Use rules from [RFC 2863]. Can be thought of as Broadcast Datagrams Sent.
	 */
	UInt32 ifOutBroadcastPkts;
	/**
	 * Use rules from [RFC 2863]. Can be thought of as Output Datagrams Discarded.
	 */
	UInt32 ifOutDiscards;
	/**
	 * Use rules from [RFC 2863].
	 */
	UInt32 ifOutErrors;
	/**
	 * Use rules from [RFC 2863]. Can be thought of as Multicast Datagrams Sent.
	 */
	UInt32 ifOutMulticastPkts;
	/**
	 * Use rules from [RFC 2863]. Can be thought of as Bytes Sent.
	 */
	UInt32 ifOutOctets;
	/**
	 * Use rules from [RFC 2863]. Can be thought of as Datagrams Sent.
	 */
	UInt32 ifOutUcastPkts;
	/**
	 * Use rules from [RFC 2863].
	 */
	boolean ifPromiscuousMode;
	/**
	 * Use rules from [RFC 2863].
	 */
	UInt32 ifSpeed;
	/**
	 * Use rules and assignments from [RFC 2863].
	 */
	UInt16 ifType;
	/**
	 * Similar to ifLastChange in [RFC 2863].
	 */
	Int64 lastResetTime;
	/**
	 * The date/time of the reported status.
	 */
	Int64 lastUpdatedTime;
	IPAddrListLink *m_IPAddrListLink;
	LLInterfaceListLink *m_LLInterfaceListLink;

};
#endif // !defined(EA_8CD31D0B_D7BD_4b9d_9676_6A67C473036B__INCLUDED_)
