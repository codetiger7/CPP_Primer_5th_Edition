// Exercise 2.16
// Which of the following assignments are invalid?
// Explain what the valid ones do
#include <iostream>

using namespace std;

int main()
{
    int i = 0;
    int& r1 = i;
    double d = 0;
    double& r2 = d;


    // a) valid, assigns new number to object d
    r2 = 3.14159;

    // b) assigns 0 to d, implicit conversion
    r2 = r1;


    // c) assigns 0 to i implicit trunc
    i = r2;

    // d) assigns a double value to an int object
    r1 = d;




    return 0;
}

