// Exercise 1.23 and 1.24
// Program reaads several transactions
// and counts how many transactions occur for each isbn

#include <../Exercise1-20/sales_item.h>

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream in {"mix.txt"};

    Sales_item total;

    if (in >> total)
    {
        int cnt = 1;
        Sales_item item;
        while (in >> item)
        {
            if (total.isbn() == item.isbn())
            {
                total += item;
                ++cnt;
            }
            else
            {
                cout << total << " Transactions: " << cnt << endl;
                total = item;
                cnt = 1;
            }
        }

        cout << total << " Transactions: " << cnt << endl;
    }
    else
    {
        // no input! warn the user
        cerr << "No data?!" << endl;
        return -1;
    }

    return 0;
}

