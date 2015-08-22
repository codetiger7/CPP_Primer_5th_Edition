// Exercise 3.3
// Explain how whitespace characters are handled in
// 1.the string input operator
// 2.and in the getline function
#include <iostream>
#include <string>

using namespace std;

int main()
{
    // 1. The string input operator
    // whitespace characters are discarded when encountered by the string operator
    // leading whitespace, newline, tabs are discarded then it reads characters
    // until the next whitespace is encountered
//    string str;
//    cin >> str;
//    cout << "\n\n" << str << endl;

    // 2. How does the getline function handle whitespace characters
    // reads the given stream including whitespaces until it encounters the first newline
    // then stops reading and returns,
    string gets;
    getline(cin, gets);
    cout << "\n\n" << gets << endl;





    return 0;
}

