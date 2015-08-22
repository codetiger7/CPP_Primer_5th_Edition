// Exercise2.35
// Determine the types deducded
// Check
#include <iostream>

using namespace std;

int main()
{

    cout << endl;
    const int i = 42;
    auto j = i; // int

    cout <<  "j = " << typeid(j).name() << endl;

    const auto &k = i; // kis const
    auto &kk = i;
    // unsure



    auto* p = &i;
    // pointer to const
    p = &j;


    const auto j2 = i;
    // const int

    const auto &k2 = i;
    // ref to const
    auto &d = i;


    return 0;
}

