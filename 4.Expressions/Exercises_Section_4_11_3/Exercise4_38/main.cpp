// Exercise 4.38
// Explain the following expressions:

#include <iostream>
using namespace std;

int main()
{

   // double slope = static_cast<double>(j/i);

   // casting the result of a division to a double
   // storing this result in a double variable

   // if i and j are integral values
   // the result is still integral, but then it is cast to double
   // and this double is stored in a double variable


   // example
   int j = 7;
   int i = 2;
   double slope = static_cast<double>(j/i);
   cout << endl << slope << endl;

   return 0;
}

