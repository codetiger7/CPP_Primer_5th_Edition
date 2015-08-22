// Exercise 2.24
// why is initialization of p legal, and lp illegal?
#include <iostream>

using namespace std;

int main()
{
    int i = 42;

    // void* can point to an object of any type
    void* p = &i;

    // long* can only point to an object of type long, and i is of type int
//    long* lp = &i;
    return 0;
}

