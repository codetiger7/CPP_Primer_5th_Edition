// Exercise 2-21
// Explain the definitions
// and why if any are illegal

#include <iostream>

using namespace std;

int main()
{

    int i = 0;

    // a) Illegal because double* not to int
//    double* dp = &i;

    // b) Illegal because int* stores addresses to int not int values
//    int* ip = i;

    // c) pointer to int, stores the address of i;
    int* p = &i;
    return 0;
}

