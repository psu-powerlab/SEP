///////////////////////////////////////////////////////////
//  FileStatus.h
//  Implementation of the Class FileStatus
//  Created on:      13-Apr-2020 2:51:29 PM
//  Original author: kholbroo
///////////////////////////////////////////////////////////

#if !defined(EA_67CE530B_3E06_49be_9635_B67DB4ED2B24__INCLUDED_)
#define EA_67CE530B_3E06_49be_9635_B67DB4ED2B24__INCLUDED_

#include "TimeType.h"
#include "UInt8.h"
#include "UInt32.h"
#include "UInt16.h"
#include "FileLink.h"
#include "Resource.h"

/**
 * This object provides status of device file load and activation operations.
 */
class FileStatus : public Resource
{

public:
	FileStatus();
	virtual ~FileStatus();
	/**
	 * Date/time at which this File, referred to by FileLink, will be activated.
	 * Omission of or presence and value of this element MUST exactly match omission
	 * or presence and value of the activateTime element from the File resource.
	 */
	TimeType activateTime;
	/**
	 * This element MUST be set to the percentage of the file, indicated by FileLink,
	 * that was loaded during the latest load attempt. This value MUST be reset to 0
	 * each time a load attempt is started for the File indicated by FileLink. This
	 * value MUST be increased when an LD receives HTTP response containing file
	 * content. This value MUST be set to 100 when the full content of the file has
	 * been received by the LD
	 */
	UInt8 loadPercent;
	/**
	 * This element MUST be set to the time at which the LD will issue its next GET
	 * request for file content from the File indicated by FileLink
	 */
	TimeType nextRequestAttempt;
	/**
	 * The default polling rate for this function set (this resource and all resources
	 * below), in seconds. If not specified, a default of 900 seconds (15 minutes) is
	 * used. It is RECOMMENDED a client poll the resources of this function set every
	 * pollRate seconds.
	 */
	UInt32 pollRate;
	/**
	 * This value MUST be reset to 0 when FileLink is first pointed at a new File.
	 * This value MUST be incremented each time an
	 * LD receives a 503 error from the FS.
	 */
	UInt16 request503Count;
	/**
	 * This value MUST be reset to 0 when FileLink is first pointed at a new File.
	 * This value MUST be incremented each time a GET request for file content failed.
	 * 503 errors MUST be excluded from this counter.
	 */
	UInt16 requestFailCount;
	/**
	 * Current loading status of the file indicated by FileLink. This element MUST be
	 * set to one of the following values:
	 * 0 - No load operation in progress
	 * 1 - File load in progress (first request for file content has been issued by
	 * LD)
	 * 2 - File load failed
	 * 3 - File loaded successfully (full content of file has been received by the LD),
	 * signature verification in progress
	 * 4 - File signature verification failed
	 * 5 - File signature verified, waiting to activate file.
	 * 6 - File activation failed
	 * 7 - File activation in progress
	 * 8 - File activated successfully (this state may not be reached/persisted
	 * through an image activation)
	 * 9-255 - Reserved for future use.
	 */
	UInt8 status;
	/**
	 * This element MUST be set to the time at which file status transitioned to the
	 * value indicated in the status element.
	 */
	TimeType statusTime;
	FileLink *m_FileLink;

};
#endif // !defined(EA_67CE530B_3E06_49be_9635_B67DB4ED2B24__INCLUDED_)
