// Exercise 2.30
#include <iostream>

using namespace std;

int main()
{

    // no const
    int i = 0;

    // top level const
    const int v2 = 0;

    // no const
    int v1 = v2;

    // no const
    int* p1 = &v1;

    // no const
    int& r1 = v1;

    // low-level const
    const int* p2 = &v2;

    // top, and low level const
    const int* const p3 = &i;

    // low level const
    const int& r2 = v2;






    return 0;
}

