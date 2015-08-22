// Exercise 2.19
// Explain key differences between pointers and references
\

// 1. Reference
// Is not an object, and need to be initialized to an object straight away
// cannot be changed, is permanent once set.
// is just an alias for the actual object, and always returns that object

// 2. Pointer
// Is an object, holds the address of another object
// can be dereferenced to give the value of the object
// can be used to change the object value
// can change the address it has many times during its life


#include <iostream>

using namespace std;

int main()
{
    cout << "Hello World!" << endl;
    return 0;
}

