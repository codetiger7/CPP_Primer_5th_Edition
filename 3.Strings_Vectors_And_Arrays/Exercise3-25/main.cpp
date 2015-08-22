// Exercise 3.25
// Rewrite the grade clustering program §3.3.3
// Use iterators instead of subscript
#include <iostream>
#include <vector>
using namespace std;

int main()
{
   // count the number of grades by clusters of 0-9, 10-19, 20-29, 90-99, 100
   vector<unsigned> scores(11, 0);
   unsigned grade = 0;

   // read grades
   typedef vector<unsigned>::iterator it;
   it b = scores.begin();

   while(cin >> grade)
   {
      if (grade <= 100) // handle only valid grades
      {
           ++*(b + (grade/10));
//         ++scores[grade/10]; // increment the counter for current cluster
      }
   }


   for ( const auto& i : scores)
      cout << i << " ";
   cout << endl;

   return 0;
}

