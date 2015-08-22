// Exercise 3.15
// read a sequence of strings from cin
// store in vector
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
   string value;
   vector<string> svec;

   while (cin >> value)
      svec.push_back(value);


   cout << endl << endl;
   for (const auto i : svec)
      cout << i << " ";

   cout << endl << endl;
   return 0;
}

