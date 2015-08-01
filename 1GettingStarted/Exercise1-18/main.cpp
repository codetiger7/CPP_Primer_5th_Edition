// Exercise 1.18
// Compile, run  program:
// 1. Giving only equal values
// 2. Giving values with no number repeated
#include <iostream>

using namespace std;

int main()
{
    // currVal
    int currVal = 0;
    int val = 0;


    // read first number and ensure that we have data to process
    if (cin >> currVal)
    {
        int cnt = 1;        // store the count for the current value
        while (cin >> val)  // read remaining numbers
        {
            if (val == currVal)
                ++cnt;
            else
            {
                // otherwise print the count for the prevous value
                cout << currVal << " occurs "
                     << cnt << " times" << endl;

                currVal = val;
                cnt = 1;
            }
        }

        // print the count for the last value in the file
        cout << currVal << " occurs " << cnt  << " times " << endl;
    }
    return 0;
}

