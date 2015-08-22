// Exercise 2.26
// Explain why for the illeagal statements;

#include <iostream>

using namespace std;

int main()
{
    // a) Illegal because when defining a const you must initialize it
//    const int buf;

    // b) legal
    int cnt = 0;

    // c) legal
    const int sz = cnt;

    // d) cnt legal,
    // sz illegal, because you cannot change the value of a const variable
    ++cnt;
//    ++sz;

    return 0;
}

