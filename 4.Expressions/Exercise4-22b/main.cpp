// Exercise 4.22 b
// the if else is easier to understand
// because the values are continuosly decreasing in order
// and you can read them sequentially
#include <iostream>
#include <string>
using namespace std;

int main()
{

   int grade = 0;
   cin >> grade;

   string finalGrade;

   if (grade > 90)
   {
      finalGrade = "high pass";
   }
   else if (grade > 75)
   {
      finalGrade = "pass";
   }
   else if (grade > 60)
   {
      finalGrade = "low pass";
   }
   else
   {
      finalGrade = "fail";
   }

   cout << endl;
   cout << finalGrade << endl;
}

