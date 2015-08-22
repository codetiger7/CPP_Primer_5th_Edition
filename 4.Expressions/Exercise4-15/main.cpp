// Exercise 4.15
// illegal?
// wny?
// how to fix?
#include <iostream>

using namespace std;

int main()
{
   double dval;
   int ival;
   int *pi = &ival;

   //dval = ival = pi = 0;
   // yes, because you cant store a pointer value to an int or a double lv

   // fix by assigning pointer to a variable
   // and then dereferencing the pointer to get to that variable
   dval = ival = *pi = 0;


   return 0;
}

