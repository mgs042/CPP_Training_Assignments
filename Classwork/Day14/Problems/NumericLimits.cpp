/*
		        Char Data Type

Char Max: 127
Char Min: -128

Signed Char Max: 127
Signed Char Min: -128

Unsigned Char Max: 255

Wide Char Max: 65535
Wide Char Min: 0

---------------------------------------------------
        Int Data Type

Int Max: 2147483647
Int Min: -2147483648

Unsigned Int Max: 4294967295

---------------------------------------------------
        Short Type

Short Max: 32767
Short Min: -32768

Unsigned Short Max: 65535

---------------------------------------------------
        Long Type

Long Max: 2147483647
Long Min: -2147483648

Unsigned Long Max: 4294967295

---------------------------------------------------
        Long Long Type

Long Long Max: 9223372036854775807
Long Long Min: -9223372036854775808

Unsigned Long Long Max: 18446744073709551615

---------------------------------------------------
        Float Data Type

Float Max: 3.40282e+38
Float Min: 1.17549e-38

---------------------------------------------------
        Double Data Type

Double Max: 1.79769e+308
Double Min: 2.22507e-308

---------------------------------------------------
        Long Double Type

Long Double Max: 1.79769e+308
Long Double Min: 2.22507e-308                                                                                                                                                                                                                          Char Max: 127                                                                                                           Char Min: -128                                                                                                                                                                                                                                  Signed Char Max: 127                                                                                                    Signed Char Min: -128                                                                                                                                                                                                                           Unsigned Char Max: 255                                                                                                                                                                                                                          Wide Char Max: 65535                                                                                                    Wide Char Min: 0                                                                                                                                                                                                                                ---------------------------------------------------                                                                             Int Data Type                                                                                                                                                                                                                           Int Max: 2147483647                                                                                                     Int Min: -2147483648                                                                                                                                                                                                                            Unsigned Int Max: 4294967295                                                                                                                                                                                                                    ---------------------------------------------------                                                                             Short Type                                                                                                                                                                                                                              Short Max: 32767                                                                                                        Short Min: -32768                                                                                                                                                                                                                               Unsigned Short Max: 65535                                                                                                                                                                                                                       ---------------------------------------------------                                                                             Long Type                                                                                                                                                                                                                               Long Max: 2147483647                                                                                                    Long Min: -2147483648                                                                                                                                                                                                                           Unsigned Long Max: 4294967295                                                                                                                                                                                                                   ---------------------------------------------------                                                                             Long Long Type                                                                                                                                                                                                                          Long Long Max: 9223372036854775807                                                                                      Long Long Min: -9223372036854775808                                                                                                                                                                                                             Unsigned Long Long Max: 18446744073709551615                                                                                                                                                                                                    ---------------------------------------------------                                                                             Float Data Type                                                                                                                                                                                                                         Float Max: 3.40282e+38                                                                                                  Float Min: 1.17549e-38                                                                                                                                                                                                                          ---------------------------------------------------                                                                             Double Data Type                                                                                                                                                                                                                        Double Max: 1.79769e+308                                                                                                Double Min: 2.22507e-308                                                                                                                                                                                                                        ---------------------------------------------------                                                                             Long Double Type                                                                                                                                                                                                                        Long Double Max: 1.79769e+308                                                                                           Long Double Min: 2.22507e-308
*/
#include<iostream>
using namespace std;

int main()
{
	cout << "\tChar Data Type" << endl << endl;
	cout << "Char Max: " << CHAR_MAX << endl;
	cout << "Char Min: " << CHAR_MIN << endl << endl;
	cout << "Signed Char Max: " << SCHAR_MAX << endl;
	cout << "Signed Char Min: " << SCHAR_MIN << endl << endl;
	cout << "Unsigned Char Max: " << UCHAR_MAX << endl << endl;
	cout << "Wide Char Max: " << WCHAR_MAX << endl;
	cout << "Wide Char Min: " << WCHAR_MIN << endl << endl;
	cout << "---------------------------------------------------" << endl;
	cout << "\tInt Data Type" << endl << endl;
	cout << "Int Max: " << INT_MAX << endl;
	cout << "Int Min: " << INT_MIN << endl << endl;
	cout << "Unsigned Int Max: " << UINT_MAX << endl << endl;
	cout << "---------------------------------------------------" << endl;
	cout << "\tShort Type" << endl << endl;
	cout << "Short Max: " << SHRT_MAX << endl;
	cout << "Short Min: " << SHRT_MIN << endl << endl;
	cout << "Unsigned Short Max: " << USHRT_MAX << endl << endl;
	cout << "---------------------------------------------------" << endl;
	cout << "\tLong Type" << endl << endl;
	cout << "Long Max: " << LONG_MAX << endl;
	cout << "Long Min: " << LONG_MIN << endl << endl;
	cout << "Unsigned Long Max: " << ULONG_MAX << endl << endl;
	cout << "---------------------------------------------------" << endl;
	cout << "\tLong Long Type" << endl << endl;
	cout << "Long Long Max: " << LLONG_MAX << endl;
	cout << "Long Long Min: " << LLONG_MIN << endl << endl;
	cout << "Unsigned Long Long Max: " << ULLONG_MAX << endl << endl;
	cout << "---------------------------------------------------" << endl;
	cout << "\tFloat Data Type" << endl << endl;
	cout << "Float Max: " << FLT_MAX << endl;
	cout << "Float Min: " << FLT_MIN << endl << endl;
	cout << "---------------------------------------------------" << endl;
	cout << "\tDouble Data Type" << endl << endl;
	cout << "Double Max: " << DBL_MAX << endl;
	cout << "Double Min: " << DBL_MIN << endl << endl;
	cout << "---------------------------------------------------" << endl;
	cout << "\tLong Double Type" << endl << endl;
	cout << "Long Double Max: " << LDBL_MAX << endl;
	cout << "Long Double Min: " << LDBL_MIN << endl << endl;

	return 0;
}