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
    Sales_data b;
    cin >> a.bookNo >> a.booksSold >> a.revenue;

    cin >> b.bookNo >> b.booksSold >> b.revenue;

    if ( a.bookNo == b.bookNo)
    {
        cout << "ISBN: " << a.bookNo << " Books Sold: "
             << a.booksSold + b.booksSold
             << " Revenue: " << b.revenue + a.revenue << endl;
    }
    else
    {
        cout << "Sales_data have different ISBN's" << endl;
    }


    return 0;
}

