// Exercise 3.31
// Program defines array of 10 ints
// Give each element the value of its position in the array
#include <iostream>

using namespace std;

int main()
{
   int iv[10];

   int val = 0;
   for( auto& i : iv)
   {
      i = val;
      ++val;
   }

   for( auto i : iv)
   {
      cout << i << " ";
   }
   cout << endl;
   return 0;
}

