///////////////////////////////////////////////////////////
//  IPAddrList.h
//  Implementation of the Class IPAddrList
//  Created on:      13-Apr-2020 2:51:32 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_9ECFE3E9_64BD_46bb_921C_D5DF267BD16C__INCLUDED_)
#define EA_9ECFE3E9_64BD_46bb_921C_D5DF267BD16C__INCLUDED_

#include "List.h"
#include "IPAddr.h"

/**
 * List of IPAddr instances.
 */
class IPAddrList : public List
{

public:
	IPAddrList();
	virtual ~IPAddrList();
	IPAddr *m_IPAddr;

};
#endif // !defined(EA_9ECFE3E9_64BD_46bb_921C_D5DF267BD16C__INCLUDED_)
