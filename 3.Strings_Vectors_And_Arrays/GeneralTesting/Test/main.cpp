
#include <cctype>
#include <iostream>
#include <string>
using namespace std;

int main()
{
   string str("some string");

   for ( auto c : str )
   {
      cout << c << endl;
   }

   string s("Hello World!!!");
   // punct_cnt has the same type that s.size returns
   decltype(s.size()) punct_cnt = 0;

   for ( auto c : s)
   {
      if ( ispunct(c))
         ++punct_cnt;
   }

   cout << endl << punct_cnt << " punctuation characters in " << s  << endl << endl;

   cout << endl << endl;


   for (auto& c : s )
      c = toupper(c);

   cout << endl << s << endl;


   for (decltype(str.size()) index = 0;
        index != str.size() && !isspace(str[index]); ++index )
   {
      str[index] = toupper(str[index]);
   }

   cout << str << endl;


   cout << endl;
   return 0;
}

