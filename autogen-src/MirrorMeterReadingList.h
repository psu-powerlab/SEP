///////////////////////////////////////////////////////////
//  MirrorMeterReadingList.h
//  Implementation of the Class MirrorMeterReadingList
//  Created on:      13-Apr-2020 2:51:34 PM
//  Original author: gfalendy
///////////////////////////////////////////////////////////

#if !defined(EA_CC1373C2_B0D8_48b0_960A_D763B0630C68__INCLUDED_)
#define EA_CC1373C2_B0D8_48b0_960A_D763B0630C68__INCLUDED_

#include "List.h"
#include "MirrorMeterReading.h"

/**
 * A List of MirrorMeterReading instances.
 */
class MirrorMeterReadingList : public List
{

public:
	MirrorMeterReadingList();
	virtual ~MirrorMeterReadingList();
	MirrorMeterReading *m_MirrorMeterReading;

};
#endif // !defined(EA_CC1373C2_B0D8_48b0_960A_D763B0630C68__INCLUDED_)
