///////////////////////////////////////////////////////////
//  LLInterface.h
//  Implementation of the Class LLInterface
//  Created on:      13-Apr-2020 2:51:33 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_2311EF1F_2AFA_4280_8C7A_3F494EAD19FC__INCLUDED_)
#define EA_2311EF1F_2AFA_4280_8C7A_3F494EAD19FC__INCLUDED_

#include "UInt32.h"
#include "HexBinary64.h"
#include "UInt8.h"
#include "Resource.h"
#include "loWPAN.h"
#include "IEEE_802_15_4.h"

/**
 * A link-layer interface object.
 */
class LLInterface : public Resource
{

public:
	LLInterface();
	virtual ~LLInterface();
	/**
	 * Contains the number of CRC errors since reset. 
	 */
	UInt32 CRCerrors;
	/**
	 * Contains the EUI-64 of the link layer interface. 48 bit MAC addresses SHALL be
	 * changed into an EUI-64 using the method defined in [RFC 4291], Appendix A. (The
	 * method is to insert "0xFFFE" as described in the reference.)
	 */
	HexBinary64 EUI64;
	/**
	 * Specifies the type of link layer interface associated with the IPInterface.
	 * Values are below.
	 * 0 = Unspecified
	 * 1 = IEEE 802.3 (Ethernet)
	 * 2 = IEEE 802.11 (WLAN)
	 * 3 = IEEE 802.15 (PAN)
	 * 4 = IEEE 1901 (PLC)
	 * All other values reserved.
	 */
	UInt8 linkLayerType;
	/**
	 * Number of times an ACK was not received for a frame transmitted (when ACK was
	 * requested).
	 */
	UInt32 LLAckNotRx;
	/**
	 * Number of times CSMA failed.
	 */
	UInt32 LLCSMAFail;
	/**
	 * Number of dropped receive frames.
	 */
	UInt32 LLFramesDropRx;
	/**
	 * Number of dropped transmit frames.
	 */
	UInt32 LLFramesDropTx;
	/**
	 * Number of link layer frames received.
	 */
	UInt32 LLFramesRx;
	/**
	 * Number of link layer frames transmitted.
	 */
	UInt32 LLFramesTx;
	/**
	 * Number of times access to media failed.
	 */
	UInt32 LLMediaAccessFail;
	/**
	 * Number of Bytes received.
	 */
	UInt32 LLOctetsRx;
	/**
	 * Number of Bytes transmitted.
	 */
	UInt32 LLOctetsTx;
	/**
	 * Number of MAC transmit retries.
	 */
	UInt32 LLRetryCount;
	/**
	 * Number of receive security errors.
	 */
	UInt32 LLSecurityErrorRx;
	loWPAN *m_loWPAN;
	IEEE_802_15_4 *m_IEEE_802_15_4;

};
#endif // !defined(EA_2311EF1F_2AFA_4280_8C7A_3F494EAD19FC__INCLUDED_)
