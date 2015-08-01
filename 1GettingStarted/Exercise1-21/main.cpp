// Exercise 1.21
// Write a program that reads two Sales_items
// Same isbn and produces their sum

#include <../Exercise1-20/sales_item.h>

#include <iostream>

using namespace std;

int main()
{
    cout << "Two sales items: " << endl;
    Sales_item item1;
    Sales_item item2;

    cin >> item1 >> item2;
    cout << endl;
    cout << item1 + item2 << endl;

    return 0;
}

