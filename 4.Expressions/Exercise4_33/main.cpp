// Exercise 4.33
// Using Table 4.12 (p.166) explain what the following expression does



// someValue ? ++x, ++y : --x, --y;

// someValue is evaluated as a bool expression, if it is zero (i.e. false)

// then x is decremented by one unit

// if someValue is any value other than zero (i.e. true), then x and y is incremented

// No matter what someValue is, y is always decremented by one this because
// the comma operator left to right is weaker than the conditional operator Right to left
// so expression is evaluated as: (somevalue ? ++x, ++y : --x), --y;

// this means that when someValue is true first increases by one, then decreases by one
// effectively standing still



// demo
#include <iostream>
using namespace std;

int main()
{

   int someValue = 0;
   int x = 0;
   int y = 0;

   someValue ? ++x, ++y : --x, --y;

   cout << "someValue: " << someValue << endl;
   cout << "x: " << x << endl;
   cout << "y: " << y << endl;


   someValue = 1;

   someValue ? ++x, ++y : --x, --y;


   cout << "someValue: " << someValue << endl;
   cout << "x: " << x << endl;
   cout << "y: " << y << endl;




   return 0;
}
