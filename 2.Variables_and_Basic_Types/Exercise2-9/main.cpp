// Exercise 2.9
// Explain the following definitions
// Explain how to correct the incorrect ones

#include <iostream>

using namespace std;

int main()
{
    // a) you cant define a value as you read into it
    // define it first
//    cin >> int input_value;
    int input_value;
    cin >> input_value;

    // b)
    // int value will truncate away the decimal digit
    // change the int to double
    double i = { 3.14};

    // c)
    // wage needs to be defined
    double wage;
    double salary = wage = 9999.99;

    // d) truncated to 3
    // change to double
    double ii = 3.14;



    return 0;
}

