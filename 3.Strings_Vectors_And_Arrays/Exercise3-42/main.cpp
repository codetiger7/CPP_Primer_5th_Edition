// Exercise 3.42
// Copy a vector of ints into an array of ints

#include <iostream>
#include <vector>
using namespace std;

int main()
{
   vector<int> ivec { 7, 5, 3, 1};
   int arr[4];

   int cnt = 0;

   for ( auto i : ivec)
   {
      arr[cnt] = i;
      ++cnt;
   }

   int* b = begin(arr);
   int* e = end(arr);

   while (b != e)
   {
      cout<< *b << " ";
      ++b;
   }
   cout << endl;


   return 0;
}

