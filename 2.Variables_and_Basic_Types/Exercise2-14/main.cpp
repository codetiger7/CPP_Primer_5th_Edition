// Exercise 2.14
// is legal?
// which values are printed?
#include <iostream>

using namespace std;

int main()
{
    int i = 100;
    int sum = 0;

    for (int i = 0; i != 10; ++i)
        sum += i;

    cout << i << " " << sum << endl;
    // 100 and 45
    return 0;
}

