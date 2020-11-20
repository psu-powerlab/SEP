///////////////////////////////////////////////////////////
//  DstRuleType.h
//  Implementation of the Class DstRuleType
//  Created on:      13-Apr-2020 2:51:27 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_FE595CB1_765C_42e7_B962_BB4D6438C7E1__INCLUDED_)
#define EA_FE595CB1_765C_42e7_B962_BB4D6438C7E1__INCLUDED_

#include "HexBinary32.h"

/**
 * Bit map encoded rule from which is calculated the start or end time, within the
 * current year, to which daylight savings time offset must be applied.
 * 
 * The rule encoding:
 * Bits  0 - 11: seconds 0 - 3599
 * Bits 12 - 16: hours 0 - 23
 * Bits 17 - 19: day of the week 0 = not applicable, 1 - 7 (Monday = 1)
 * Bits 20 - 24: day of the month 0 = not applicable, 1 - 31
 * Bits 25 - 27: operator  (detailed below)
 * Bits 28 - 31: month 1 - 12
 * 
 * Rule value of 0xFFFFFFFF means rule processing/DST correction is disabled.
 * 
 * The operators:
 * 
 * 0: DST starts/ends on the Day of the Month
 * 1: DST starts/ends on the Day of the Week that is on or after the Day of the
 * Month
 * 2: DST starts/ends on the first occurrence of the Day of the Week in a month
 * 3: DST starts/ends on the second occurrence of the Day of the Week in a month
 * 4: DST starts/ends on the third occurrence of the Day of the Week in a month
 * 5: DST starts/ends on the forth occurrence of the Day of the Week in a month
 * 6: DST starts/ends on the fifth occurrence of the Day of the Week in a month
 * 7: DST starts/ends on the last occurrence of the Day of the Week in a month
 * 
 * An example: DST starts on third Friday in March at 1:45 AM.  The rule...
 * Seconds: 2700
 * Hours: 1
 * Day of Week: 5
 * Day of Month: 0
 * Operator: 4
 * Month: 3
 */
class DstRuleType : public HexBinary32
{

public:
	DstRuleType();
	virtual ~DstRuleType();

};
#endif // !defined(EA_FE595CB1_765C_42e7_B962_BB4D6438C7E1__INCLUDED_)
