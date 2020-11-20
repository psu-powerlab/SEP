///////////////////////////////////////////////////////////
//  String32.h
//  Implementation of the Class String32
//  Created on:      13-Apr-2020 2:51:42 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_443A99D8_905A_43c9_BE2E_7B3A2B6D74C5__INCLUDED_)
#define EA_443A99D8_905A_43c9_BE2E_7B3A2B6D74C5__INCLUDED_

/**
 * Character string of max length 32. In order to limit internal storage,
 * implementations SHALL reduce the length of strings using multi-byte characters
 * so that the string may be stored using "maxLength" octets in the given encoding.
 * 
 */
class String32 : public string
{

public:
	String32();
	virtual ~String32();

};
#endif // !defined(EA_443A99D8_905A_43c9_BE2E_7B3A2B6D74C5__INCLUDED_)
