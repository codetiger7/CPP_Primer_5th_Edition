// Exercise 4.7
// what does overflow mean
#include <iostream>
using namespace std;

int main()
{
   // overflow means when you try to make a variable hold a higher or lower value than it can hold
   // a value outside the valid range
   // when the calculation you want to store is outside of the range of the variable type

   cout << sizeof(short) << endl;
   float var1 = -32767;

   cout << var1 << endl;
   unsigned var2 = -234;
   cout << var2 << endl;



   return 0;
}

