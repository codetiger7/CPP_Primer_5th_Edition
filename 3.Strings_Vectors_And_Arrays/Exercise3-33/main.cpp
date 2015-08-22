// Exercise 3.33
// What would happen if we did not initialize the scores p. 116
//

// the behaviour owuld be undefined
// buffer overflow
#include <iostream>

using namespace std;

int main()
{
   unsigned scores[11];
   unsigned grade;
   while(cin >> grade)
   {
      if (grade <= 100)
         ++scores[grade/10];
   }

   return 0;
}

