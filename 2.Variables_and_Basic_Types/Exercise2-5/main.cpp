// Exercise 2.5
// Determine literal types
// Explain differences amongs the literals in each category

/*
 *  a)
 * 'a' char literal 8 bits minimum
 * L'a' wchar_t wide character literal, minimum 16 bits
 * "a" character string literal, so an array of const char's
 * L"a" wchar_t wide character string literal, so an array of wchar_t's
 *
 *
 * b)
 * 10 integer, minimum 16 bits
 * 10u integer unsigned, 16bits no negative numbers
 * 10L , long integer, min 32bits
 * 10uL, long unsigned integer, min 32 bits
 * 012 , octal integer, first 3 after 0, 8 + 2 = 10
 * 0xC  , hexadecimal, no limit after x, C = 12
 *
 *
 * c)
 * 3.14 double, minimum 10 significant digits
 * 3.14f, float, minimum 6 significant digits
 * 3.14L, long double, minimum 10 significant digits
 *
 *
 * d)
 * 10 integer
 * 10u, unsigned integer
 * 10., double -precision floating point literal
 *
 * 10e-2, double floating point
#include <iostream>

using namespace std;

int main()
{
    cout << "Hello World!" << endl;
    return 0;
}

