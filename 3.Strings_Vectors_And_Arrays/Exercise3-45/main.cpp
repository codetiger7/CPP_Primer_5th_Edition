// Exercise 3.45
// 3 different version of printing elements in ia
//  ranged for,  ordinary for( subscipts, pointers)
// auto
#include <iostream>

using namespace std;

int main()
{
   int ia[3][4] {
                 {0,1,2,3},
                 {4,5,6,7},
                 {8,9,10,11}
                };


   cout << endl << endl;


   cout << "Ranged for" << endl;
   for ( auto& i : ia)
      for ( auto j : i)
         cout << j << " ";
   cout << endl;


   cout << "Ordinary for, subscripts" << endl;
   for ( auto i = 0; i != 3; ++i)
   {
      for (auto j = 0; j != 4; ++j)
         cout << ia[i][j] << " ";
   }
   cout << endl;

   cout << "Ordinary for, pointers:\n" << endl;

\
  // using int_array = int[4];

   for(auto b = ia; b != ia + 3; ++b )
   {
      for (auto q = *b; q != *b + 4; ++q)
         cout << *q << " ";


   }

   cout << endl;



   return 0;
}

