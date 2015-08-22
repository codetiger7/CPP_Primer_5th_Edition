// Exercise 3.10
// Write a program that reads a string of characters including punctuation
// and writes that was read but with punctuation removed

#include <cctype>
#include <iostream>
#include <string>
using namespace std;

int main()
{
   string sen;

   while (getline(cin, sen))
   {
      for (auto& c : sen)
      {
         if (!ispunct(c))
            cout << c;
      }

      cout << endl << endl;
   }
   return 0;
}

