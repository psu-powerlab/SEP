///////////////////////////////////////////////////////////
//  String42.h
//  Implementation of the Class String42
//  Created on:      13-Apr-2020 2:51:42 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_79E03096_5031_4b14_B586_C3C746F7CE4E__INCLUDED_)
#define EA_79E03096_5031_4b14_B586_C3C746F7CE4E__INCLUDED_

/**
 * Character string of max length 42. In order to limit internal storage,
 * implementations SHALL reduce the length of strings using multi-byte characters
 * so that the string may be stored using "maxLength" octets in the given encoding.
 * 
 */
class String42 : public string
{

public:
	String42();
	virtual ~String42();

};
#endif // !defined(EA_79E03096_5031_4b14_B586_C3C746F7CE4E__INCLUDED_)
