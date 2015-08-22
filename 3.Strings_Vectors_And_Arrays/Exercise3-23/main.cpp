// Exercise 3.23
// create vector with 10 int elements
// use iterator, assign elements a value twice its current value
// test by printing

#include <iostream>
#include <vector>
using namespace std;

int main()
{
   vector<int> ivec(10);

   vector<int>::size_type i = 0;
   while( i != ivec.size())
   {
      cin >> ivec[i];
      ++i;
   }

   cout << endl << endl;
   for (const auto& val : ivec)
      cout << val << " ";
   cout << endl << endl;



   typedef vector<int>::iterator it;
   for (it b = ivec.begin(); b != ivec.end(); ++b)
   {
      *b *= 2;
   }

   for (const auto& val : ivec)
      cout << val << " ";
   cout << endl << endl;

   return 0;
}

