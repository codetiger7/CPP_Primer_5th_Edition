// Exercise 3.22
// Revise the loop that printed first paragraph in text
// change the elements to all uppercase
// then print it

#include <cctype>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
   vector<string> text { "It's red and cold here.",
                       "The winds are obviously harsh and very dangerous.",
                       "The trip here took many many days.",
                       "Now that I'am here it seems kind of, pointless.",
                       "The red planet is not a homely place to live.",
                       "",
                       "Colors are fun.", "I like blue, some like yellow too",
                       "I love green in nature.", "What colors do you love?",
                       "Colors makes the world more nuanced.", "A richer experience." };

   for (auto it = text.cbegin();
        it != text.cend() && !it->empty(); ++it)
   {
      cout << *it << endl;
   }


   cout << endl << endl;


   for (auto it = text.begin();
        it != text.end() && !it->empty(); ++it)
   {
      for(auto& c : *it)
         c = toupper(c);
   }


   for (auto it = text.begin();
        it != text.end() && !it->empty(); ++it)
      cout << *it  << " ";
   cout << endl;





   return 0;
}

