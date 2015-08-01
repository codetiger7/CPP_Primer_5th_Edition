// Exercise 1.16
// Write your own version of a program that prints the sum of
// a set of integers read from cin

#include <iostream>

using namespace std;

int main()
{
    int sum = 0;
    int value = 0;

    cout << "Enter integers you want to sum: " << endl;
    cout << "End input by return, ctrl-d" << endl;
    while (cin >> value)
        sum += value;

    cout << "\n\nThe sum of all the values entered are: " << endl;
    cout << sum << endl << endl;
    return 0;
}

