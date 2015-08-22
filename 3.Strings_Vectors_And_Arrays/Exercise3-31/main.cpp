// Exercise 3.32
// Copy array defined into another array
// rewrite program to use vectors
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

   int iv2[10];

   for( size_t i = 0; i != iv.size(); ++i)
   {
      iv2[i] = iv[i];
   }



   for( auto i : iv2)
   {
      cout << i << " ";
   }
   cout << endl;
   return 0;
}

