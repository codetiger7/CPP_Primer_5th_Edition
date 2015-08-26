// Exercise 4.20
// iter is a vector<string>::iterator

// are any of the expressions legal
// explain these are
// and why the others are not
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
   vector<string> sv;
   sv.push_back("hi");
   sv.push_back("cool");
   sv.push_back("meow");
   sv.push_back("time");


   vector<string>::iterator iter = sv.begin();

   // a) legal, iter is postincremented, so its dereferenced to its original value
   // and increased to the next
   cout << *iter++ << endl;

   // b) not legal, the iteraotr is dereferenced to get at the string value
   // but then the string value is post incremented , cant increment a string
//   (*iter)++;



   // c) not legal, trying to get the empty function of the iterator
   // which does not have and empty function
   // then trying to dereference the result of that empty function
//   *iter.empty();

   // d) legal dereferencing the pointer to get at the string object and calling
   // the empty funciton on the string object
   cout << iter->empty() << endl;

   // e) illegal, not familiar with that use of combining operators
   // dereferensing iterator to get string and trying to preincrement the string

//   ++*iter;

   // f)  legal, post incrementing the iterator
   // calling the objects empty function.
   cout << *iter << endl;
   cout << iter++->empty() << endl;

   cout << *iter << endl;



   return 0;
}

