// Exercise 3.21
// Redo the first exercise using iterators
// Exercise 3.16


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


   typedef vector<int>::const_iterator v_sz;


   cout << endl << "v1: ";
   v_sz b = vi.cbegin();
   v_sz e = vi.cend();

   while ( b != e)
   {
      cout << *b << " ";
      ++b;
   }
   cout << endl;

   cout << "v2: ";
   b = v2.begin();
   e = v2.end();
   while (b != e)
   {
      cout << *b << " ";
      ++b;
   }
   cout << endl;


   cout << "v3: ";
   b = v3.cbegin();
   e = v3.cend();

   while (b != e)
   {
      cout << *b << " ";
      ++b;
   }
   cout << endl;


   cout << "v4: ";
   b = v4.cbegin();
   e = v4.cend();
   while ( b != e)
   {
      cout << *b << " ";
      ++b;
   }
   cout << endl;


   cout << "v5: ";
   b = v5.begin();
   e = v5.end();
   while (b != e)
   {
      cout << *b << " ";
      ++b;
   }
   cout << endl;


   typedef vector<string>::const_iterator v_s;
   v_s be = v6.cbegin();
   v_s en = v6.cend();

   cout << "v6: ";
   while(be != en)
   {
      cout << *be << " ";
      ++be;
   }
   cout << endl;


   cout << "v7: ";
   be = v7.begin();
   en = v7.end();
   while( be != en)
   {
      cout << *be << " ";
      ++be;
   }
   cout << endl;

   return 0;
}

