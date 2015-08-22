// Exercise 4.16
// why dont these behave as one normally would expect?
// rewrite as they were intended to be
#include <iostream>

using namespace std;

int getPtr()
{
   return 0;
}

int main()
{
   int p = 3;

   // because this compares inquality between getPtr and 0
   // and store true or false into a pointer addresss
   if ( (p = getPtr()) != 0 )
      ;

   int i = 0;
   // assigns 1024 to int, this is not zero so if executes
   // was meant to check if i is 1024
   if ( i == 1024)

   return 0;
}

