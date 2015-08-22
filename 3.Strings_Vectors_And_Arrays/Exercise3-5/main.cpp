// Exercise 3.5
// Read strings from input
// concatenate into one large string
// print this


// change program to separate adjacent input strings by space

#include <iostream>
#include <string>
using namespace std;

int main()
{
   string concat;
   string word;

   while ( cin >> word)
   {
      concat += word + " ";
   }

   cout << concat << endl;
   return 0;
}

