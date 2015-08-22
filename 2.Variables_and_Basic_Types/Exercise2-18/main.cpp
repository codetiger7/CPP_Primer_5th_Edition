// Exercise 2.18
// Change the value of a pointer
// Change the value of the variable to which the pointer points

#include <iostream>

using namespace std;

int main()
{
    int i = 6;
    int i2 = 70;

    int* iptr = &i;

    cout << "Changed the object to which the pointer pointed:" << endl;
    cout << "p1 " << *iptr << endl;
    iptr = &i2;
    cout << "p2 " << *iptr << endl;


    cout << "Change the value in variable via pointer: " << endl;
    *iptr = 991;
    cout << i2 << " " << *iptr << endl;

    return 0;
}

