// Exercise 2.20
// What does the program do?

#include <iostream>

using namespace std;

int main()
{
    int i = 42; // defines and initializes i to 42
    int* p1 = &i; // creates and initializes int* to address of i variable

    *p1 = *p1 * *p1; // multiplies 42 * 42 and stores result in i


    cout << *p1 << endl;
    return 0;
}

