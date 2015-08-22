// Exercise 3.27
// txt_size function takes no args, returns int value
// which definitions are illegal?

#include <iostream>
using namespace std;


int txt_size()
{
   int a = 11;
   return a;
}

unsigned buf_size = 1024;

// a) illegal, not a constant expression
//int ia[buf_size];

// b) legal, size 14, value initialized
//int ia[4 * 7 - 14];

// c) not legal, not const
int ia[txt_size()];

// d) illegal, forgot room for the '\0' char
char st[11] = "fundamental";

int main()
{
   return 0;
}

