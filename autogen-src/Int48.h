///////////////////////////////////////////////////////////
//  Int48.h
//  Implementation of the Class Int48
//  Created on:      13-Apr-2020 2:51:31 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_AF59AD86_CA27_4133_AAC8_955275A92C05__INCLUDED_)
#define EA_AF59AD86_CA27_4133_AAC8_955275A92C05__INCLUDED_

/**
 * Signed integer, max inclusive 140737488355328 (2^47), min inclusive -
 * 140737488355328 
 */
class Int48 : public long
{

public:
	Int48();
	virtual ~Int48();

};
#endif // !defined(EA_AF59AD86_CA27_4133_AAC8_955275A92C05__INCLUDED_)
