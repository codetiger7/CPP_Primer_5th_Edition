// Exercise 3.4
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

    if ( s1.size() ==  s2.size() )
        cout << "\n\nStrings have the same length!!!" << endl;
    else
    {
        if (s1.size() > s2.size())
            cout << "\n\nThe longest string is:\n" << s1 << endl;
        else
        {
            cout << "\n\nThe longest string is:\n" << s2 << endl;
        }
    }






    return 0;
}

