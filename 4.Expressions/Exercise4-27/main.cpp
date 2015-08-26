// Exercise 4.27
// what is the results
#include <iostream>

using namespace std;

int main()
{
   unsigned long ul1 = 3;
   unsigned long ul2 = 7;

   // a)
   // 00000000000000000000000000000011
   // 00000000000000000000000000000111
   // 00000000000000000000000000000011
   // result 3 in decimal
   cout << (ul1 & ul2) << endl;

   // b)
   // 011
   // 111
   // 111
   // expecting 7
   cout << (ul1 | ul2) << endl;

   // c)
   // expecting one
   cout << (ul1 && ul2) << endl;


   // d) expecting 1
   cout << (ul1 || ul2) << endl;

   return 0;
}

