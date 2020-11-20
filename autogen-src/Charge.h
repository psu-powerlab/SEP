///////////////////////////////////////////////////////////
//  Charge.h
//  Implementation of the Class Charge
//  Created on:      13-Apr-2020 2:51:22 PM
///////////////////////////////////////////////////////////

#if !defined(EA_115DC6BF_D1D8_4341_9C60_D48B384B691A__INCLUDED_)
#define EA_115DC6BF_D1D8_4341_9C60_D48B384B691A__INCLUDED_

#include "String20.h"
#include "ChargeKind.h"
#include "Int32.h"

/**
 * Charges contain charges on a customer bill.  These could be items like taxes,
 * levies, surcharges, rebates, or others.  This is meant to allow the HAN device
 * to retrieve enough information to be able to reconstruct an estimate of what
 * the total bill would look like.
 * 
 * Providers can provide line item billing, including multiple charge kinds (e.g.
 * taxes, surcharges) at whatever granularity desired, using as many Charges as
 * desired during a billing period. There can also be any number of Charges
 * associated with different ReadingTypes to distinguish between TOU tiers,
 * consumption blocks, or demand charges.
 */
class Charge
{

public:
	Charge();
	virtual ~Charge();
	/**
	 * A description of the charge.
	 */
	String20 description;
	/**
	 * The type (kind) of charge.
	 */
	ChargeKind kind;
	/**
	 * A monetary charge.
	 */
	Int32 value;

};
#endif // !defined(EA_115DC6BF_D1D8_4341_9C60_D48B384B691A__INCLUDED_)
