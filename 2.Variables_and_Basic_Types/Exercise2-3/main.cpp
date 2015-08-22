// Exercise 2.3
// Determine code output


#include <iostream>

using namespace std;

int main()
{
    // 1.what output?
    unsigned u = 10;
    unsigned u2 = 42;

    cout << u2 - u << endl; // 32
//    cout << sizeof(unsigned) << endl; // 4 bytes
    cout << u - u2 << endl; // -32 + 1 + unsigned int maxsize
    // 4294967264

    // 2. what is the output?
    int i = 10;
    int i2 = 42;
    cout << i2 - i << endl;
    // 32
    cout << i - i2 << endl;
    // -32


    cout << endl;
    cout << i - u << endl;
    // 0
    cout << u - i << endl;
    // 10-10= 0




    return 0;
}

