///////////////////////////////////////////////////////////
//  AccountingUnit.h
//  Implementation of the Class AccountingUnit
//  Created on:      13-Apr-2020 2:51:19 PM
///////////////////////////////////////////////////////////

#if !defined(EA_57D12200_F451_4f04_8B77_D7D3806AD430__INCLUDED_)
#define EA_57D12200_F451_4f04_8B77_D7D3806AD430__INCLUDED_

#include "RealEnergy.h"
#include "CurrencyCode.h"
#include "PowerOfTenMultiplierType.h"
#include "Int32.h"

/**
 * Unit for accounting; use either 'energyUnit' or 'currencyUnit' to specify the
 * unit for 'value'.
 */
class AccountingUnit
{

public:
	AccountingUnit();
	virtual ~AccountingUnit();
	/**
	 * Unit of service.
	 */
	RealEnergy energyUnit;
	/**
	 * Unit of currency.
	 */
	CurrencyCode monetaryUnit;
	/**
	 * Multiplier for the 'energyUnit' or 'monetaryUnit'.
	 */
	PowerOfTenMultiplierType multiplier;
	/**
	 * Value of the monetary aspect
	 */
	Int32 value;

};
#endif // !defined(EA_57D12200_F451_4f04_8B77_D7D3806AD430__INCLUDED_)
