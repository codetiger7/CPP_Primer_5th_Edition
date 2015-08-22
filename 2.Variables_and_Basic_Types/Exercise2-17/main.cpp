// Exercise 2.17
// what does the code print?
#include <iostream>

using namespace std;

int main()
{
    int i;
    int& ri = i;
    i = 5;
    ri = 10;

    cout << i << " " << ri << endl;
    /// 10 10
    ///
    int* rp = &ri;

    cout << "pt " << *rp << endl;

    return 0;
}

