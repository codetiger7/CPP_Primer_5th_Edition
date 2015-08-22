// Exercise 3.12
// Which definitions are in error?
// what does the definition do, or why is it not legal

#include <iostream>
#include <vector>
using namespace std;

int main()
{
   // a) defines an empty vector, of vecotors of ints
   vector<vector<int>> ivec;

   // b) Definition is in error
   // it tries to copy initialize, a vector that does not contain the same type as
   // svec
//   vector<string> svec = ivec;

   // c) it defines a vector of 10 string elements with the value "null"
   vector<string> svec(10, "null");




   return 0;
}

