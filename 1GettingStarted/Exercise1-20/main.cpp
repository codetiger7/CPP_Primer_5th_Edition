// Exercise 1.20
// Use to wirte a program that reads a set of book sales transactions
// Write each transaction to the standard output

#include <sales_item.h>

#include <iostream>

using namespace std;

int main()
{
    cout << "\nEnter sales items: " << endl;
    Sales_item item1;
    Sales_item item2;
    cin >> item1 >> item2;

    cout << endl;
    cout << item1 << endl;
    cout << item2 << endl;
    return 0;
}

