///////////////////////////////////////////////////////////
//  String16.h
//  Implementation of the Class String16
//  Created on:      13-Apr-2020 2:51:42 PM
//  Original author: svanausdall
///////////////////////////////////////////////////////////

#if !defined(EA_F9F7C1B0_6332_42bb_AB06_2C58D647AE83__INCLUDED_)
#define EA_F9F7C1B0_6332_42bb_AB06_2C58D647AE83__INCLUDED_

/**
 * Character string of max length 16. In order to limit internal storage,
 * implementations SHALL reduce the length of strings using multi-byte characters
 * so that the string may be stored using "maxLength" octets in the given encoding.
 * 
 */
class String16 : public string
{

public:
	String16();
	virtual ~String16();

};
#endif // !defined(EA_F9F7C1B0_6332_42bb_AB06_2C58D647AE83__INCLUDED_)
