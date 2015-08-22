// Exercise 3.20
// read integer set into a vector
// print the sum of each pair of adjacent elements

#include <iostream>
#include <vector>

using namespace std;

int main()
{
   vector<int> ivec;
   int val;

   while( cin >> val )
   {
      ivec.push_back(val);
   }

   int cnt = 0;
   int sum = 0;


   cout << endl << endl;

   for( auto i : ivec)
   {
      sum += i;
      ++cnt;

      if (cnt == 2)
      {
         cout << sum << endl;
         cnt = 0;
         sum = 0;
      }
   }

   if (cnt == 1)
      cout << sum << " single value" << endl;


   cout << endl;

   return 0;
}

