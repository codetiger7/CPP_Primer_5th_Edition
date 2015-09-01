// Exercise 4.36

#include <iostream>

using namespace std;

int main()
{
   int i = 0;
   double d = 0;

   // static casting to make d and i be calculated with integral multiplciation
   i *= static_cast<int>(d);

   return 0;
}

