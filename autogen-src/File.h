///////////////////////////////////////////////////////////
//  File.h
//  Implementation of the Class File
//  Created on:      13-Apr-2020 2:51:28 PM
//  Original author: kholbroo
///////////////////////////////////////////////////////////

#if !defined(EA_67901297_27DF_4c5d_B74A_B77D008D3D62__INCLUDED_)
#define EA_67901297_27DF_4c5d_B74A_B77D008D3D62__INCLUDED_

#include "TimeType.h"
#include "anyURI.h"
#include "HexBinary160.h"
#include "String32.h"
#include "PENType.h"
#include "String16.h"
#include "UInt32.h"
#include "HexBinary16.h"
#include "Resource.h"

/**
 * This resource contains various meta-data describing a file's characteristics.
 * The meta-data provides general file information and also is used to support
 * filtered queries of file lists
 */
class File : public Resource
{

public:
	File();
	virtual ~File();
	/**
	 * This element MUST be set to the date/time at which this file is activated. If
	 * the activation time is less than or equal to current time, the LD MUST
	 * immediately place the file into the activated state (in the case of a firmware
	 * file, the file is now the running image).  If the activation time is greater
	 * than the current time, the LD MUST wait until the specified activation time is
	 * reached, then MUST place the file into the activated state. Omission of this
	 * element means that the LD MUST NOT take any action to activate the file until a
	 * subsequent GET to this File resource provides an activateTime.
	 */
	TimeType activateTime;
	/**
	 * This element MUST be set to the URI location of the file binary artifact.  This
	 * is the BLOB (binary large object) that is actually loaded by the LD
	 */
	anyURI fileURI;
	/**
	 * This element MUST be set to the LFDI of the device for which this file in
	 * targeted.
	 */
	HexBinary160 lFDI;
	/**
	 * This element MUST be set to the hardware version for which this file is
	 * targeted.
	 */
	String32 mfHwVer;
	/**
	 * This element MUST be set to the manufacturer's Private Enterprise Number
	 * (assigned by IANA).
	 */
	PENType mfID;
	/**
	 * This element MUST be set to the manufacturer model number for which this file
	 * is targeted. The syntax and semantics are left to the manufacturer.
	 */
	String32 mfModel;
	/**
	 * This element MUST be set to the manufacturer serial number for which this file
	 * is targeted. The syntax and semantics are left to the manufacturer.
	 */
	String32 mfSerNum;
	/**
	 * This element MUST be set to the software version information for this file. The
	 * syntax and semantics are left to the manufacturer.
	 */
	String16 mfVer;
	/**
	 * This element MUST be set to the total size (in bytes) of the file referenced by
	 * fileURI.
	 */
	UInt32 size;
	/**
	 * A value indicating the type of the file.  MUST be one of the following values:
	 * 00 = Software Image
	 * 01 = Security Credential
	 * 02 = Configuration
	 * 03 = Log
	 * 04–7FFF = reserved
	 * 8000-FFFF = Manufacturer defined
	 */
	HexBinary16 type;

};
#endif // !defined(EA_67901297_27DF_4c5d_B74A_B77D008D3D62__INCLUDED_)
