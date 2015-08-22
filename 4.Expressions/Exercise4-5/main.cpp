// Exercise 4.5
// Determine expressions
#include <iostream>

using namespace std;

int main()
{

   // a) -90 + 4 = -86
   cout << -30 * 3 + 21 / 5 << endl;

   // b) -30 + 3 * 21 / 5
   // -30 + 3 = -27
   // -30 + 12 = -18
   cout << -30 + 3 * 21 / 5 << endl;

   // c)
   // 30 / 3 * 21 % 5
   // 210 % 5 = 0
   cout << 30 / 3 * 21 % 5 << endl;


   // d)
   // -30 / 3 * 21 % 4
   // -10 * 21 = -210
   // -210 % 4 = -2
   cout << -30/3*21%4 << endl;



   return 0;
}

