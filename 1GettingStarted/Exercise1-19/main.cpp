// Exercise 1.19
// Revise program for exercises in § 1.4.1 (p.13)
// Make it handle input where the first number is smaller than
// second number

// Exercise 1.11 Modifies


#include <algorithm> // std::max
#include <iostream>

using namespace std;

int main()
{
    cout << "\nEnter two integers: " << endl;
    int i1 = 0;
    int i2 = 0;
    cin >> i1 >> i2;


    int large = std::max(i1, i2);
    int small = std::min(i1, i2);

    cout << "\n\nRange: " << endl;

    for(int beg = small; beg != large+1; ++beg)
        cout << beg << endl;

    cout << endl;
    return 0;
}

