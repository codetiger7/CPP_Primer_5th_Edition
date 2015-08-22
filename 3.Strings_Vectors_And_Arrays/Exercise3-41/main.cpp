// Exercise 3.41
// initialize a vector from and array of ints
#include <iostream>
#include <vector>

using namespace std;

int main()
{
   int a[] { 3,4,2,3,56,23};

   vector<int> ivec(begin(a), end(a));

   for (auto& i : ivec)
      cout << i << endl;


   return 0;
}

