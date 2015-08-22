// Exercise 3.11
// Is the following ranged for legal?
// If so what is the type of c



#include <iostream>

using namespace std;

int main()
{
   const string s = "Keep out!";

   for (auto& c : s)
   {
      /**
        yes it is legal
        the type of c is a const ref, const char&
        **/
   }
   return 0;
}

