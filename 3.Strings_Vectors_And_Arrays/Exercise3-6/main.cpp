// Exercise 3.6
// Use range for to change all the characters in a string to X

#include <iostream>
#include <string>
using namespace std;

int main()
{
   string sentence("Hi there, Brian time to get awesome!");

   for ( auto& w : sentence )
      if (!isspace(w))
      w = 'X';

   cout << endl << sentence << endl << endl;
   return 0;
}

