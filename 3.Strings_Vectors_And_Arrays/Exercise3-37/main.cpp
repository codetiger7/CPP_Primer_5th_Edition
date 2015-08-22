// Exercise 3.37
// stores hellow in character array
// points first element
// prints all valid letters
#include <iostream>

using namespace std;

int main()
{
   const char ca[] {'h', 'e', 'l', 'l', 'o', '\0'};
   const char* cp = ca;
   while (*cp)
   {
      cout << *cp << endl;
      ++cp;

   }
   return 0;
}

