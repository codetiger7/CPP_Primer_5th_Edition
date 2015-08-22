// Exercise 2.41_1.23
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
    int count = 0;
    bool printed = false;

    cin >> sum.bookNo >> sum.booksSold >> sum.revenue;
    ++count;


   while (cin >> a.bookNo >> a.booksSold >> a.revenue)
   {

       if ( a.bookNo == sum.bookNo)
       {
           sum.booksSold += a.booksSold;
           sum.revenue += a.revenue;
           ++count;
           printed = false;
       }
       else
       {
           cout << "Transactions: " << count << endl;
           cout << "For Isbn: " << sum.bookNo << endl;
           printed = true;
       }

   }


   if (!printed)
   {
       cout << "Transactions: " << count << endl;
       cout << "For Isbn: " << sum.bookNo << endl;

   }

   if(!a.bookNo.empty())
   {
       cout << "Transactions: " << count << endl;
       cout << a.bookNo << endl;
   }



    return 0;
}

