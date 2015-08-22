// Exercise 2.31
// Are the assignments legal?
// Expalin top/low-level application in each case
#include <iostream>

using namespace std;

int main()
{

    int i = 0;
    const int v2 = 0;
    int v1 = v2;
    int* p1 = &v1;
    int& r1 = v1;
    const int* p2 = &v2;
    const int* const p3 = &i;
    const int& r2 = v2;


    // exercise begins
    r1 = v2; // the content of v1 is set to v2 which it already was;
    // the const is top level so does not transfer

//    p1 = p2; // illegal, storing object itself in pointer vs address


    p2 = p1; // legal storing new address in p2, p2 believes it points to a const object
    // which it does not;

//    p1 = p3 // illegal p1 cannot point to a const object.

    p2 = p3; // good p2 can point to a const object being a ptr to const int
    //







    return 0;
}

