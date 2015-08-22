#include <iostream>
#include <iterator>
using namespace std;

int main()
{
   int ia[] { 0,1,2,3,4,5,6,7,8,9};

   int* beg = begin(ia);
   int* last = end(ia);


   int arr[] {0, 3, 4, 3, 8, 2, 3, 1, 9};

   int* pbeg = begin(arr);
   int* pend = end(arr);

   while (pbeg != pend && *pbeg >= 0)
      ++pbeg;

   if (pbeg != pend)
      cout << endl << *pbeg << endl;

   cout << begin(arr) - end(arr) << endl;
   cout << end(arr) - begin(arr) << endl;

   int sz = 9;

   int* b = arr;
   int* e = arr + sz;
   while ( b < e)
   {
      cout << *b << " ";
      ++b;
   }
   cout << endl;

   return 0;
}

