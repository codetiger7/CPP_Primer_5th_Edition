// Exercise 2.30
// For each of the following declarations
// inidace whther the object being declared has top-level const
#include <iostream>

using namespace std;

int main()
{
    // a) top-level
    const int v2 = 0;

    // b) none
    int v1 = v2;

    // c) illegal shoulb be pointer to const
    //int* p1 = &v2;
    const int* p1 = &v2;

    // d)
    int& r1 = v1;

    // e) low level const,
    const int* p2 = &v2;


    // top level
//    int* const p3 = &i;

    // none
    //int& r2 = v2;




    return 0;
}

