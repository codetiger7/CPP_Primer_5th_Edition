// Exercise 3-38
// Program compare two strings
// compare two c-style char strings

#include <iostream>

using namespace std;

int main()
{
   char a[] = "Testing";
   const char b[] = "funny this";

   size_t lenA = strlen(a);
   size_t lenB = strlen(b);

   const int* itb = &a[0];



   int* b2 = begin(b);
   int* end = end(a);
   int* end2 = end(b);

   if (lenA != lenB)
      cout << "not equal" << endl;
   else
   {
      while ( beg != end )
      {
         if (*beg != *beg2)
            cout << "not equal" << endl;

         ++beg;
         ++beg2
      }
   }


   return 0;
}

