// Exercise 4.18
// if the while loop p. 148 used prefix to print the elements
// from the vector

#include <iostream>
#include <vector>
using namespace std;

int main()
{
   vector<int> ivec { 3, 4, 3, 4, 5,5,6,7,3,2,1,43};


   vector<int>::size_type i = 0;

   while (i != ivec.size())
   {
      // skipping the first element 3
      // out of bounds prints the one past last element
      cout << ivec[++i] << endl;

   }

   return 0;
}

