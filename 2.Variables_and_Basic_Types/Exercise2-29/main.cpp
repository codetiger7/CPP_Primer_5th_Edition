// Exercise 2.29

#include <iostream>

using namespace std;

int main()
{
    int i;
    int* const cp = &i;\
    int *p1;
    int* const p2 = &i;
    const int ic = 3;
    const int& r = ic;
    const int* p3 = &i;
    const int* p = &i;


    // a)
    i = ic; // top level consts is not copied

    // b)
    //p1 = p3; because p3 ptr is const int and cannot be copied by a mere int

    // c)
//    p1 = &ic;

    // d)
    p3 = &ic; // pointer to const int, points to const int

    // e)
//    p2 = p1; // illegal, p2 is a const pointer

    // f)
//    ic = *p3;






    return 0;
}

