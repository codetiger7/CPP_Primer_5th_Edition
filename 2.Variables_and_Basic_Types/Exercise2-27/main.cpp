// Exercise 2.27
// Which are legal, explain why.
#include <iostream>

using namespace std;

int main()
{
    // a)
    int i = -1;
//    int& r = 0; // Illegal because a reference to a literal must be a const reference

    // b)
    int i2 = 3;
    int* const p2 = &i2; // legal because pointer says that it will never store
    // another int objects address

    // c) legal int definition, and constant reference to literal
    const int a = -1;
    const int& b = 0;

    // d) legal because a const pointer only says something about what can
    // be done with the pointer object's address
    // also legal because a pointer to const, only says something about what
    // the object thinks it is pointing too, not what is
    const int* const p3 = &i2;

    // e) legal because p1 is a normal pointer to a const object
    const int* p1 = &i2;

    // f) illegal because, a reference is not an object so can itself not be const
    // only a reference to a const object.
//    const int& const r2;


    // g) i4 legal copies i into a const variable
    // legal because it only says what you can do through the reference
    const int i4 = i;
    const int& r = i;







    return 0;
}

