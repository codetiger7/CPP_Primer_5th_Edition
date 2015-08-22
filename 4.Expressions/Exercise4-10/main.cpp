// Exercise 4.10
// Write cond for while loop running until 42 is input
#include <iostream>

using namespace std;

int main()
{

   {
      int val = 0;
      while (cin >> val && val != 42)
         cout << "cool number" << endl;

   }
   return 0;
}

