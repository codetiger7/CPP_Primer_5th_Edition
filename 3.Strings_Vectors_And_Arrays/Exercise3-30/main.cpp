// Exercise 3.30
// Identify indexing errors

// should start at index 0
// check should be for less than or unequal


#include <iostream>

using namespace std;

int main()
{
   constexpr size_t array_size = 10;
   int ia[array_size];

   for (size_t ix = 0; ix != array_size; ++ix)
      ia[ix] = ix;

   return 0;
}

