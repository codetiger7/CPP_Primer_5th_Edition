// Exercise 3.8 a
// Rewrite  Exercise 3.6 using a while

#include <cctype>
#include <iostream>
#include <string>
using namespace std;

int main()
{
   string sentence("Hi there, do you want to dance?");

   string::size_type count = 0;

   while ( count != sentence.size() )
   {
      if (!isspace(sentence[count]))
         sentence[count] = 'X';
      ++count;
   }

   cout << endl << sentence << endl;

   return 0;
}


