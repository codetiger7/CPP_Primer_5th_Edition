// Exercise 2.34
//Print variables before and after assignments
#include <iostream>

using namespace std;

int main()
{
    int i = 0;
    int& r = i;
    const int ci = i;
    const int& cr = ci;

    auto a = r;
    auto b = ci;
    auto c = cr;
    auto d = &i;
    auto e = &ci;
    auto &g = ci;




    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
    cout << "d = " << *d << endl;
    cout << "e = " << *e << endl;
    cout << "g = " << g << endl;

    a = 42;
    b = 42;
    c = 42;
    *d = 42;
    e = &i;
//    g = 42;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
    cout << "d = " << *d << endl;
    cout << "e = " << *e << endl;
    cout << "g = ";
    return 0;
}

