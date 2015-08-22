// Exercise 3.24
// Rewrite exercise 3.20 using iterators
#include <iostream>
#include <vector>
using namespace std;

int main()
{
   vector<int> ivec;
   int val = 0;

   while( cin >> val)
   {
      ivec.push_back(val);
   }

   typedef vector<int>::const_iterator it;

   for (it b = ivec.begin();
        !ivec.empty() && b != ivec.end() && b + 1 != ivec.end(); b+=2)
   {
      cout << *b + *(b+1) << " ";
   }

   cout << endl;
   return 0;
}

