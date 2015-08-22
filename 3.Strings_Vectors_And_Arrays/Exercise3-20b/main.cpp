// Exercise 3.20b
// read integer set into a vector
// change program to print sum of first and last element
// then second and second to last etc

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

   typedef vector<int>::size_type sz_v;

   sz_v b = 0;
   sz_v e = ivec.size()-1;

   while (b != ivec.size() && b < e )
   {
      cout << ivec[b] + ivec[e] << " ";
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

