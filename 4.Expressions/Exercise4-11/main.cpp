// Exercise 4.11
// expression must test for  4 values a,b,c,d
// must be rising in value, in order
#include <iostream>

using namespace std;

int main()
{

   int a = 5;
   int b = 4;
   int c = 2;
   int d = 2;

   if ( a > b && b > c && c > d )
      cout << "Awesome!" << endl;

   return 0;
}

