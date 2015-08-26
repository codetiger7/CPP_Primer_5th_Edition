// Exercise 4.23
// why does it fail
// how would you fix it
#include <iostream>
#include <string>
using namespace std;

int main()
{
   // it failed because the computer was trying to
   // add string word to a 0 or 1 the result of comparing.
   // low precedence was the issue
   // fixed with parentheses
   string s = "word";
   string pl = s + (s[s.size() - 1] == 's' ? "" : "s");

   cout << pl << endl;

   return 0;
}

