// Exercise 1.25
// Compile and execute the bookstore program represented in this section
// 1.6 The Bookstore Program

#include <sales_item.h>

#include <iostream>

using namespace std;

int main()
{
    Sales_item total; // variable to hold the running sum
    // read the first transaction to ensure that there are data to process
    if (cin >> total)
    {
        Sales_item trans;  // variable to hold data for the next transaction
        // read and process the remaining transactions
        while (cin >> trans)
        {
            // if we're still processing the same book
            if (total.isbn() == trans.isbn())
                total += trans;
            else
            {
                // print results for the previous book
                cout << total << endl;
                total = trans;  // total now refers to the next book
            }
        }

        cout << total << endl;
    }
    else
    {
        // no input! warn the user
        std::cerr << "No data?!" << endl;
        return -1;
    }
    return 0;
}

