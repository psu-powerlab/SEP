///////////////////////////////////////////////////////////
//  DERProgram.h
//  Implementation of the Class DERProgram
//  Created on:      13-Apr-2020 2:51:26 PM
///////////////////////////////////////////////////////////

#if !defined(EA_9A3D048A_1FEE_4d46_A2FF_C8EB5986B3AA__INCLUDED_)
#define EA_9A3D048A_1FEE_4d46_A2FF_C8EB5986B3AA__INCLUDED_

#include "PrimacyType.h"
#include "DefaultDERControlLink.h"
#include "ActiveDERControlListLink.h"
#include "DERControlListLink.h"
#include "DERCurveListLink.h"
#include "SubscribableIdentifiedObject.h"

/**
 * Distributed Energy Resource program.
 */
class DERProgram : public SubscribableIdentifiedObject
{

public:
	DERProgram();
	virtual ~DERProgram();
	/**
	 * Indicates the relative primacy of the provider of this Program. 
	 */
	PrimacyType primacy;
	DefaultDERControlLink *m_DefaultDERControlLink;
	ActiveDERControlListLink *m_ActiveDERControlListLink;
	DERControlListLink *m_DERControlListLink;
	DERCurveListLink m_DERCurveListLink;

};
#endif // !defined(EA_9A3D048A_1FEE_4d46_A2FF_C8EB5986B3AA__INCLUDED_)
