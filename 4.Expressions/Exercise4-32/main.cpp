// Exercise 4.32
// Explain the following loop
#include <iostream>

using namespace std;

int main()
{
   constexpr int size = 5;

   int ia[size] = { 1, 2, 3, 4, 5};

   for (int *ptr = ia, ix = 0;
        ix != size && ptr != ia + size;
        ++ix, ++ptr)
   {
      /* ... */
   }

   // line 13
   // creating initializing an int ptr to point at the first element in the ai array
   // initializing an int ix to 0

   // line 14
   // short-circuit and check:
   // first to check if we have reached one past the end of the array ia
   // if not then the second check is run
   // second check: sees if the address that ptr stores has reached one past the end of
   // the array.

   // line 15
   // increase the int and increase the address that ptr holds by one

   // the for loop is dual running through the size of the array
   // both by using a pointer running through the array element addresses
   // and using and int that could be used for indexing arrray elements



   return 0;
}

