///////////////////////////////////////////////////////////
//  DERCapability.h
//  Implementation of the Class DERCapability
//  Created on:      13-Apr-2020 2:51:25 PM
//  Original author: kelynn
///////////////////////////////////////////////////////////

#if !defined(EA_8F42AB67_E422_4156_A62C_54A9849BCB0F__INCLUDED_)
#define EA_8F42AB67_E422_4156_A62C_54A9849BCB0F__INCLUDED_

#include "DERControlType.h"
#include "UInt8.h"
#include "CurrentRMS.h"
#include "AmpereHour.h"
#include "ApparentPower.h"
#include "ActivePower.h"
#include "VoltageRMS.h"
#include "WattHour.h"
#include "PowerFactor.h"
#include "ReactiveSusceptance.h"
#include "DERType.h"
#include "Resource.h"

/**
 * Distributed energy resource type and nameplate ratings.
 */
class DERCapability : public Resource
{

public:
	DERCapability();
	virtual ~DERCapability();
	/**
	 * Bitmap indicating the DER Controls implemented by the device. See
	 * DERControlType for values.
	 */
	DERControlType modesSupported;
	/**
	 * Abnormal operating performance category as defined by IEEE 1547-2018. One of:
	 * 0 - not specified
	 * 1 - Category I
	 * 2 - Category II
	 * 3 - Category III
	 * All other values reserved.
	 */
	UInt8 rtgAbnormalCategory;
	/**
	 * Maximum continuous AC current capability of the DER, in Amperes (RMS).
	 */
	CurrentRMS rtgMaxA;
	/**
	 * Usable energy storage capacity of the DER, in AmpHours.
	 */
	AmpereHour rtgMaxAh;
	/**
	 * Maximum apparent power charge rating in Volt-Amperes. May differ from the
	 * maximum apparent power rating.
	 */
	ApparentPower rtgMaxChargeRateVA;
	/**
	 * Maximum rate of energy transfer received by the storage DER, in Watts.
	 */
	ActivePower rtgMaxChargeRateW;
	/**
	 * Maximum apparent power discharge rating in Volt-Amperes. May differ from the
	 * maximum apparent power rating.
	 */
	ApparentPower rtgMaxDischargeRateVA;
	/**
	 * Maximum rate of energy transfer delivered by the storage DER, in Watts.
	 * Required for combined generation/storage DERs (e.g. DERType == 83).
	 */
	ActivePower rtgMaxDischargeRateW;
	/**
	 * AC voltage maximum rating.
	 */
	VoltageRMS rtgMaxV;
	/**
	 * Maximum continuous apparent power output capability of the DER, in VA.
	 */
	ApparentPower rtgMaxVA;
	/**
	 * Maximum continuous reactive power delivered by the DER, in var.
	 */
	ReactivePower rtgMaxVar;
	/**
	 * Maximum continuous reactive power received by the DER, in var.  If absent,
	 * defaults to negative rtgMaxVar.
	 */
	ReactivePower rtgMaxVarNeg;
	/**
	 * Maximum continuous active power output capability of the DER, in watts.
	 * Represents combined generation plus storage output if DERType == 83.
	 */
	ActivePower rtgMaxW;
	/**
	 * Maximum energy storage capacity of the DER, in WattHours.
	 */
	WattHour rtgMaxWh;
	/**
	 * Minimum Power Factor displacement capability of the DER when injecting reactive
	 * power (over-excited); SHALL be a positive value between 0.0 (typically > 0.7)
	 * and 1.0. If absent, defaults to unity.
	 */
	PowerFactor rtgMinPFOverExcited;
	/**
	 * Minimum Power Factor displacement capability of the DER when absorbing reactive
	 * power (under-excited); SHALL be a positive value between 0.0 (typically > 0.7)
	 * and 0.9999.  If absent, defaults to rtgMinPFOverExcited.
	 */
	PowerFactor rtgMinPFUnderExcited;
	/**
	 * AC voltage minimum rating.
	 */
	VoltageRMS rtgMinV;
	/**
	 * Normal operating performance category as defined by IEEE 1547-2018. One of:
	 * 0 - not specified
	 * 1 - Category A
	 * 2 - Category B
	 * All other values reserved.
	 */
	UInt8 rtgNormalCategory;
	/**
	 * Specified over-excited power factor.
	 */
	PowerFactor rtgOverExcitedPF;
	/**
	 * Active power rating in Watts at specified over-excited power factor
	 * (rtgOverExcitedPF). If present, rtgOverExcitedPF SHALL be present.
	 */
	ActivePower rtgOverExcitedW;
	/**
	 * Reactive susceptance that remains connected to the Area EPS in the cease to
	 * energize and trip state.
	 */
	ReactiveSusceptance rtgReactiveSusceptance;
	/**
	 * Specified under-excited power factor.
	 */
	PowerFactor rtgUnderExcitedPF;
	/**
	 * Active power rating in Watts at specified under-excited power factor
	 * (rtgUnderExcitedPF). If present, rtgUnderExcitedPF SHALL be present.
	 */
	ActivePower rtgUnderExcitedW;
	/**
	 * AC voltage nominal rating.
	 */
	VoltageRMS rtgVNom;
	/**
	 * Type of DER; see DERType object
	 */
	DERType type;

};
#endif // !defined(EA_8F42AB67_E422_4156_A62C_54A9849BCB0F__INCLUDED_)
