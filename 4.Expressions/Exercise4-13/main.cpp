// Exercise 4.13
// what are values of i and d after each assignment?
#include <iostream>

using namespace std;

int main()
{
   int i    = 0;
   double d = 0;


   // a)
   d = i = 3.5;

   cout << "3 == " << i << endl;
   cout << "3 == " << d << endl;

   // b)
   i = d = 3.5;
   cout << "3.5 == " << d << endl;
   cout << "3 == " << i << endl;


   return 0;
}

