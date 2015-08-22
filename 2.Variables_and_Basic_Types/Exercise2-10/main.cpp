// Exercise 2.10
// Initial values of each variable

#include <iostream>
#include <string>
using namespace std;

string global_str; // empty string
int global_int;  // 0

int main()
{

    int local_int;  // undefined
    string local_str; // empty string

    cout << "int" << endl;
    cout << endl << global_int << endl;
    cout << local_int << endl;

    cout << "strings" << endl;
    cout << global_str << endl;
    cout << local_str << endl;


    return 0;
}

