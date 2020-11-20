///////////////////////////////////////////////////////////
//  String192.h
//  Implementation of the Class String192
//  Created on:      13-Apr-2020 2:51:42 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_AB7BE5CB_A10E_496b_BD7B_DFC04D4D7B23__INCLUDED_)
#define EA_AB7BE5CB_A10E_496b_BD7B_DFC04D4D7B23__INCLUDED_

/**
 * Character string of max length 192. For all string types, in order to limit
 * internal storage, implementations SHALL reduce the length of strings using
 * multi-byte characters so that the string may be stored using "maxLength" octets
 * in the given encoding. 
 */
class String192 : public string
{

public:
	String192();
	virtual ~String192();

};
#endif // !defined(EA_AB7BE5CB_A10E_496b_BD7B_DFC04D4D7B23__INCLUDED_)
