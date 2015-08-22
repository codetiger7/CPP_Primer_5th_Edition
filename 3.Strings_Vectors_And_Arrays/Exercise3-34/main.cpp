// Exercise 3.34
// p1 and p2 points to elements in the same array
// What does the code do?
// any values of p1, p2 that make the code illegal?
#include <iostream>

using namespace std;

int main()
{
   // p1 += p2 - p1;
   // makes p2 point to p2
   // any value larger than the array size

   int a[10];

   int* b = &a[2];
   int* e = &a[8];
   a[8] = 7;


   cout << a[8] << endl;

   b += e - b;


   cout << *b << endl;

   return 0;
}

