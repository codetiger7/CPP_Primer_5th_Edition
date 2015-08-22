// Exercise 3.14
// read a sequence of ints from cin
// store in vector
#include <iostream>
#include <vector>

using namespace std;

int main()
{
   int value = 0;
   vector<int> ivec;

   while (cin >> value)
      ivec.push_back(value);


   cout << endl << endl;
   for (const auto i : ivec)
      cout << i << " ";

   cout << endl << endl;
   return 0;
}

