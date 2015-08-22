// Exercise 3.24b
// Rewrite exercise 3.20 using iterators
// second version of 3.20 (b)
#include <iostream>
#include <vector>
using namespace std;



int main()
{

   // Store input
   vector<int> ivec;
   int val;

   while( cin >> val )
   {
      ivec.push_back(val);
   }




   // print sum of first and last element
//   int cnt = 0;
//   int sum = 0;


   cout << endl << endl;

   typedef vector<int>::iterator it;
   typedef vector<int>::reverse_iterator rit;

   if (ivec.empty())
      return -1;

   it b = ivec.begin();
   it e = ivec.end()-1;

   while (b != ivec.end() &&  b < e )
   {
      cout << *b + *e << " ";
      ++b;
      --e;
   }

   cout << endl << endl;

//   for( auto i : ivec)
//   {
//      sum += i;
//      ++cnt;

//      if (cnt == 2)
//      {
//         cout << sum << endl;
//         cnt = 0;
//         sum = 0;
//      }
//   }

//   if (cnt == 1)
//      cout << sum << " single value" << endl;


   cout << endl;

   return 0;
}

