// Exercise 2.4
// Program to check if predictions are correct
#include <iostream>

using namespace std;

int main()
{
    unsigned u = 10;
    unsigned u2 = 42;

    cout << endl;
    if (u2-u != 32)
        cout << "Error !!!" << endl;

    if (u - u2 != 4294967264)
        cout << "Error !!!" << endl;

    int i = 10;
    int i2 = 42;

    if (i2-i != 32)
        cout << "Error !!!" << endl;

    if (i - i2 != -32)
        cout << "Error !!!" << endl;


    if ( i - u != 0)
        cout << "Error !!!" << endl;

    if (u-i != 0)
        cout << "Error !!!" << endl;


    cout << 1.24E3F << endl;


    return 0;
}

