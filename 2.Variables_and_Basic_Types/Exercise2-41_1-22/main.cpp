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
    Sales_data a;
    Sales_data sum;

    cin >> sum.bookNo >> sum.booksSold >> sum.revenue;

   while (cin >> a.bookNo >> a.booksSold >> a.revenue)
   {

       if ( a.bookNo == sum.bookNo)
       {
           sum.booksSold += a.booksSold;
           sum.revenue += a.revenue;
       }
       else
       {
           cout << "Error: ISBN not equal" << endl;
       }
   }

   if (a.bookNo == sum.bookNo)
   {
       cout << "\nIsbn: " << sum.bookNo
            << "\nBooks sold: " << sum.booksSold
            << "\nRevenue: " << sum.revenue << " $" << endl;
   }



    return 0;
}

