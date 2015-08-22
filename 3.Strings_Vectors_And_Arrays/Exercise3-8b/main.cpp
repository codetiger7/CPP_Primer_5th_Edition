// Exercise 3.8 b
// Rewrite  Exercise 3.6 using a trad for
// which approach do you prefer?
// why ?

// prefer range for
// it seems easier less to think about and shorter.≈

#include <cctype>
#include <iostream>
#include <string>
using namespace std;

int main()
{
   string sentence("Hi there, do you want to dance?");

   typedef string::size_type str_sz;

   for ( str_sz count = 0; count != sentence.size(); ++count )
   {
      if (!isspace(sentence[count]))
         sentence[count] = 'X';
   }

   cout << endl << sentence << endl;

   return 0;
}


