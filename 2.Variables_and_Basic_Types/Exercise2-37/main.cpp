// Exercise 2.37
// Determine type and value
#include <iostream>

using namespace std;

int main()
{
    int a = 3; // int
    int b = 4; // int

    decltype(a) c = a; // int
    decltype(a = b) d = a; // ref to int

    // a 3, b 4, c 3, d = 3







    cout << c << endl;
    cout << a << b << d << endl;



    return 0;
}

