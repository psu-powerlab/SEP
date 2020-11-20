///////////////////////////////////////////////////////////
//  String6.h
//  Implementation of the Class String6
//  Created on:      13-Apr-2020 2:51:42 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_EA044628_5392_45a5_A96D_75BE2769991F__INCLUDED_)
#define EA_EA044628_5392_45a5_A96D_75BE2769991F__INCLUDED_

/**
 * Character string of max length 6. In order to limit internal storage,
 * implementations SHALL reduce the length of strings using multi-byte characters
 * so that the string may be stored using "maxLength" octets in the given encoding.
 * 
 */
class String6 : public string
{

public:
	String6();
	virtual ~String6();

};
#endif // !defined(EA_EA044628_5392_45a5_A96D_75BE2769991F__INCLUDED_)
