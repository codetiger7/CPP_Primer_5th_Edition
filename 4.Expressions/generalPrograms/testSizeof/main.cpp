#include <iostream>

using namespace std;

int main()
{

   string a = "meow";

   cout << sizeof(a) << endl;

   for( long long b = 0; b != 10000000; ++b)
      a += "fjowjfowejfpowjopfjeopjfpiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiwsla"
            "jfsdddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddddd"
            "jdfslkdfjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjj";
   cout << sizeof(a) << endl;

   return 0;
}

