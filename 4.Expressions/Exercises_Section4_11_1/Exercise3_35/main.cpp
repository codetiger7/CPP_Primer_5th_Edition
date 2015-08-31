// Exercise 3.35
// Given these definitions,
// identify the implicit type conversions, if any, taking place
#include <iostream>

using namespace std;

int main()
{
   char cval = 0;
   float fval = 0;
   int ival = 0;
   double dval = 0.0;
   unsigned int ui = 0;

   // a)
   cval = 'a' + 3; // a converted to int, added to int, truncated to char
   fval = ui - ival * 1.0;  // unsigned int converted to double
                            // int converted to double
                            // truncated to float

   dval = ui * fval;        // unigned int and fval converted to double
                            // stored as double

   cval = ival + fval + dval; // int converted to double, float to double
                              // stored as character



   return 0;
}

