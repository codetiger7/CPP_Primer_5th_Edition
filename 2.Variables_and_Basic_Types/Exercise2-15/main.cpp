// Exercise 2.15
// Which of the definitions are invalid?

#include <iostream>

using namespace std;

int main()
{
    // a) valid, but truncates
    int ival = 1.01;

    // b) invalid
//    int& rval1 = 1.01;

    // c) valid
    int& rval2 = ival;

    // d) invalid
//    int& rval3;

    //const int& a = 3;



    return 0;
}

