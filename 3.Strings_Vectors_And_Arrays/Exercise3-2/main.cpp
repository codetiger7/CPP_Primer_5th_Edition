// Exercise 3.2
// Read standard input a line at the time
// Modify to read a word at a time
#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << endl;

    // line at a time
//    string line;
//    while(getline(cin, line))
//        cout << line << endl << endl;


    // word at a time
    string word;
    while(cin >> word)
        cout << word << endl << endl;
    return 0;
}

