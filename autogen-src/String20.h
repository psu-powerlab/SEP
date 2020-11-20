///////////////////////////////////////////////////////////
//  String20.h
//  Implementation of the Class String20
//  Created on:      13-Apr-2020 2:51:42 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_C0778FEE_0EB6_4143_B4D3_7A7614D51EAF__INCLUDED_)
#define EA_C0778FEE_0EB6_4143_B4D3_7A7614D51EAF__INCLUDED_

/**
 * Character string of max length 20. In order to limit internal storage,
 * implementations SHALL reduce the length of strings using multi-byte characters
 * so that the string may be stored using "maxLength" octets in the given encoding.
 * 
 */
class String20 : public string
{

public:
	String20();
	virtual ~String20();

};
#endif // !defined(EA_C0778FEE_0EB6_4143_B4D3_7A7614D51EAF__INCLUDED_)
