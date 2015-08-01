// Exercise 1.22
// write program that reads several transaction for same isbn
// write the sum of all transaction read

#include <../Exercise1-20/sales_item.h>

#include <iostream>
#include <string>

using namespace std;

int main()
{
//    string isbn;

//    cout << "Enter ISBN number once: " << endl;
//    cin >> isbn;

//    cout << "Now just enter number of books sold,"
//            " and price for all transactions:" << endl;

    Sales_item sum;
    Sales_item item;
    while(cin >> item)
    {
        sum += item;
    }

    cout << "Sum: " << sum << endl << endl;


    return 0;
}

