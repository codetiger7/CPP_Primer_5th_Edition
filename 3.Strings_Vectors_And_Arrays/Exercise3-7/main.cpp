// Exercise 3.7
// What would happen if you define the loop ctrl variable as char?


// you will set the char to X between each sentenc char assignment
// nothing will change in the sentence

#include <iostream>
#include <string>
using namespace std;

int main()
{
   string sentence("Hi there, Brian time to get awesome!");

   for ( char w : sentence )
      if (!isspace(w))
      w = 'X';

   cout << endl << sentence << endl << endl;
   return 0;
}
