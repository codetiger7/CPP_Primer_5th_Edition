// Exercise 3.19
// List three ways to define a vector
// give it 10 elements each with the value 42
// indicate if there is a preffered way to do so and why
#include <iostream>
#include <vector>

using namespace std;

int main()
{
   // preferred way since the others can be misinterpreted
   // this is fast, clear and simple
   vector<int> a(10, 42);

   vector<int> b {42, 42, 42, 42, 42, 42, 42, 42, 42, 42};

   vector<int> c;
   vector<int>::size_type i = 0;
   while (i != 10)
   {
     c.push_back(42);
     ++i;
   }




   return 0;
}

