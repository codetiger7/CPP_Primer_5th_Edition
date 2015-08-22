// Exercise 3.36
// using pointers
// compare two arrays for equality
#include <iostream>

using namespace std;


int main()
{
   int arr1[] { 3,4,5,6,9,5,4,5, 4};
   int arr2[] { 3,4,5,6,6,5,4,5,4};

   bool eq = true;
   int* b1 = begin(arr1);
   int* b2 = begin(arr2);
   int* e1 = end(arr1);
   int* e2 = end(arr2);

   ptrdiff_t sz1 = e1 - b1;
   ptrdiff_t sz2 = e2 - b2;

   if (sz1 != sz2)
   {
      eq = false;
   }
   else
   {
      while ( b1 != e1)
      {
         if ( *b1 != *b2)
         {
            eq = false;
            break;
         }
         ++b1;
         ++b2;
      }
   }

   if (eq)
      cout << "arrays are Equal!" << endl;
   else
      cout << "arrays are NOT equal" << endl;


}

