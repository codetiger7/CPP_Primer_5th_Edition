#include <iostream>

using namespace std;

int main()
{
   int grade = 0;
   cin >> grade;

   string finalGrade;

   finalGrade = (grade > 90) ? "high pass"
                             :(grade < 60) ? "fail"
                                           : (grade < 75) ? "low pass" : "pass";

   cout << endl;
   cout << finalGrade << endl;

   return 0;
}

