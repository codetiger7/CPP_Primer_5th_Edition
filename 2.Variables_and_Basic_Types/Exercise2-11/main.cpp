// Exercise 2.11
// Declaration or Definition?

#include <iostream>

using namespace std;

int main()
{

    // a) definition, initializing the variable overrides the extern keyword
    extern int ix = 1024;

    // b) definition
    int iy;

    // c) declaration
    extern int iz;


    return 0;
}

