// Exercise 3.43
// 3 different version of printing elements in ia
//  ranged for,  ordinary for( subscipts, pointers)
// no type alias, no auto, no decltype
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
   for ( int (&i)[4] : ia)
      for ( int j : i)
         cout << j << " ";
   cout << endl;


   cout << "Ordinary for, subscripts" << endl;
   for ( size_t i = 0; i != 3; ++i)
   {
      for (size_t j = 0; j != 4; ++j)
         cout << ia[i][j] << " ";
   }
   cout << endl;

   cout << "Ordinary for, pointers:\n" << endl;

\
   using int_array = int[4];

   for(int_array* b = ia; b != ia + 3; ++b )
   {
      for (int* q = *b; q != *b + 4; ++q)
         cout << *q << " ";


   }

   cout << endl;



   return 0;
}

