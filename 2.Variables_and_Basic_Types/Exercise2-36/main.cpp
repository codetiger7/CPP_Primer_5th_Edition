// Exercise 2.36
// Type of each variable
// Value of each variable at program end
#include <iostream>

using namespace std;

int main()
{
    int a = 3;
    int b = 4;

    decltype(a)  c = a;     // int
    decltype((b)) d = a;    // ref to int
    ++c;
    ++d;

    cout << typeid(c).name() << endl;
    cout << typeid(d).name() << endl;


    cout << "4 == " << c << endl;
    cout << "d: 4 == " << d << endl;
    cout << "a: 4 == " << a << endl;
    cout << "b: 4 == " << b << endl;
    return 0;
}

