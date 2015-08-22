// Exercise 3.32b
// rewrite program to use vectors
#include <iostream>
#include <vector>
using namespace std;

int main()
{
   vector<int> iv(10);

   int val = 0;
   for( auto& i : iv)
   {
      i = val;
      ++val;
   }

   vector<int> iv2(iv);



   for( auto i : iv2)
   {
      cout << i << " ";
   }
   cout << endl;
   return 0;
}

