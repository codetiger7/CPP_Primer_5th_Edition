// Exercise 3.16
//

#include <iostream>
#include <string>
#include <vector>
using namespace std;

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



   cout << endl << "v1: ";
   for (auto& c : vi)
      cout << c << " ";

   cout << endl;

   cout << "v2: ";
   for (auto& c: v2)
      cout << c << " ";
   cout << endl;


   cout << "v3: ";
   for (auto& c : v3 )
      cout << c << " ";
   cout << endl;

   cout << "v4: ";
   for (auto& c : v4 )
      cout << c << " ";
   cout << endl;

   cout << "v5: ";
   for (auto& c : v5)
      cout << c << " ";
   cout << endl;

   cout << "v6: ";
   for (auto& c : v6)
      cout << c << " ";
   cout << endl;


   cout << "v7: ";
   for (auto& c : v7)
      cout << c << " ";

   cout << endl;

   return 0;
}

