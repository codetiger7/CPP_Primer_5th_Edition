// Exercise 3.18
// Is the program legal?
// If not, how is it fixed?


#include <iostream>
#include <vector>
using namespace std;

int main()
{

   // not legal
//   vector<int> ivec;
//   ivec[0] = 42;
//   return 0;


   // fix it like this
   vector<int> ivec(1);

   ivec[0] = 42;

   cout << ivec[0] << endl;

   return 0;

}

