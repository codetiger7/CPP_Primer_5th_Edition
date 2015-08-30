// Exercise 4.29
// Predict output
// If wrong figure out why
#include <iostream>

using namespace std;

int main()
{
   int x[10];     // make in array size 10
   int* p = x;    // make pointer to int array of size 10

   cout << sizeof(x) / sizeof(*x) << endl;
   // should divide 10*4 / 4 and give 10


//   cout << sizeof(int) << endl;
   cout << sizeof(p) / sizeof(*p) << endl;
   // divideds   8/4 = 2


   return 0;
}

