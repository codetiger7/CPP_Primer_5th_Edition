// Exercise 3.13
// How many elements?
// Values of elements?

#include <iostream>
#include <string>
#include <vector>

using std::iostream;
using std::string;
using std::vector;


int main()
{
   // a) zero elements, NA
   vector<int> vi;

   // b) 10 elements, value 0
   vector<int> v2(10);

   // c) 10 elements, value 42
   vector<int> v3(10, 42);

   // d) 1 element, value 10
   vector<int> v4{10};

   // e) 2 elements, value 10, and 42
   vector<int> v5{10, 42};

   // f) 10 elements, empty
   vector<string> v6{10};

   // g) 10 elements, hi
   vector<string> v7{10, "hi"};

   return 0;
}

