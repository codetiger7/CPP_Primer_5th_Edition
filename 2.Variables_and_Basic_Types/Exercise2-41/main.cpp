// Exercise 2.41
// Rewrite exercises in §1.51, 1.5.2, 1.6
// With Sales_data class
#include <iostream>
#include <string>
using namespace std;


struct Sales_data
{
    string bookNo;
    unsigned booksSold {};
    double revenue {};
};

int main()
{
    cout << endl;
    Sales_data a;
    cin >> a.bookNo >> a.booksSold >> a.revenue;

    cout << "ISBN: " << a.bookNo << " Books Sold: " << a.booksSold
         << " Revenue: " << a.revenue << endl;



    return 0;
}

