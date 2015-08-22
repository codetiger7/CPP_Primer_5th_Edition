// Exercise 3.4
// Read two strings and report if equals
// if not report the larger one

// change program to
// report if the strings have the same length
// if not report the longest one

#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1;
    string s2;

    cin >> s1 >> s2;

    if ( s1 == s2 )
        cout << "\n\nStrings are Equal!" << endl;
    else
    {
        string larger = max(s1, s2);
        cout << "\n\nThe largest string is:\n" << larger << endl;
    }






    return 0;
}

