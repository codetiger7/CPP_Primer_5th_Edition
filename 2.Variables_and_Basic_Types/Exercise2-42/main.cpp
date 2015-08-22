// Exercise 2.42
// Write Sales_data.h
#ifndef SALES_DATA
#define SALES_DATA

#include <string>

struct Sales_data
{
    std::string bookNo;
    int numSold = {0};
    double revenue {0.0};
};

#endif



#include <iostream>

using namespace std;

int main()
{
    cout << "Hello World!" << endl;
    return 0;
}

