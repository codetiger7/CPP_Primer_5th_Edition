#include <iostream>
#include <cstring>
using namespace std;

int main()
{

   const char ca1[] {"Aaa"};
   const char ca2[] {"A dtring example"};
   if (strcmp(ca1, ca2) == 0)
   {
      cout << "equal" << endl;

   }

   string s1 = "hi";
   string s2 = "meow";

   string largeStr(3);

   strcpy(largeStr, ca1);


   cout << largeStr << endl;
   return 0;
}

