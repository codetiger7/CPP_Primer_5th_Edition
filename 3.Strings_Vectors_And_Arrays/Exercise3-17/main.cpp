// Exercise 3.17
// read a sequence of words, from cin
// store values in vector
// process the  vector words to uppercase
// print elements, 8 words to a line

#include <cctype>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
   vector<string> svec;
   string word;

   while (cin >> word)
   {
      svec.push_back(word);
   }

   for ( auto& w : svec)
   {
      for( auto& c : w )
         c = toupper(c);
   }


   int cnt = 0;
   for (auto& w : svec )
   {
      cout << w << " ";
      ++cnt;

      if( cnt % 8 == 0)
         cout << endl;
   }


   return 0;
}

