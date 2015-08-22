// Exercise 2.28
// Explain definitions
// Identify illegal definitions

#include <iostream>

using namespace std;

int main()
{
    // a)
    int i; // defining an int default initialized not good
//    int* const cp; // const pointer to int not legal

    // b)
    int* p1;    // pointer to int, default initialized not good
//    int* const p2; // const pointer not legal

    // c)
    // const int ic; // const int not legal\

    const int ic = 3;
    const int& r = ic; // legal, defines a ref to const int

    // d)
//    const int* const p3; // illegal, const pointer to const int


    // e)
    const int* p; // legal, but not nice;







    return 0;
}

