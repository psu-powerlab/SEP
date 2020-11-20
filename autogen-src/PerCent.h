///////////////////////////////////////////////////////////
//  PerCent.h
//  Implementation of the Class PerCent
//  Created on:      13-Apr-2020 2:51:36 PM
//  Original author: shu
///////////////////////////////////////////////////////////

#if !defined(EA_5959E7BA_7167_4405_93DF_D593E58A0C7C__INCLUDED_)
#define EA_5959E7BA_7167_4405_93DF_D593E58A0C7C__INCLUDED_

#include "UInt16.h"

/**
 * Used for percentages, specified in hundredths of a percent, 0 - 10000. (10000 =
 * 100%)
 */
class PerCent : public UInt16
{

public:
	PerCent();
	virtual ~PerCent();

};
#endif // !defined(EA_5959E7BA_7167_4405_93DF_D593E58A0C7C__INCLUDED_)
