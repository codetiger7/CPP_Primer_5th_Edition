// Exercise 2.33
// Determine what happens in each of these assignments
#include <iostream>

using namespace std;

int main()
{

    // a = 42
    // ok 42 stored in a

    // b = 42
    // ok 42 stored in b

    // c = 42
    // int stored in c

    // error d is int pointer

    // e
    // error is pointer to constint
    // correct: e = &ci

    // g
    // error g is reference to const int
    // correct

    return 0;
}

