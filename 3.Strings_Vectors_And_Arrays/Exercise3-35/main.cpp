// Exercise 3.35
// using pointers
// set all elements in an array to zero
#include <iostream>

using namespace std;

int main()
{
   int a[] { 3,4,5,6,6,5,4,5,4};

   int* b = begin(a);
   int* e = end(a);

   while(b != e)
   {
      cout << *b << " ";
      ++b;
   }

   cout << endl;
   b = a;

   while (b != e)
   {
      *b = 0;
      ++b;
   }

   b = a;
   while(b != e)
   {
      cout << *b << " ";
      ++b;
   }

   cout << endl << endl;
   return 0;
}

