
#include <iostream>
#include <vector>
using namespace std;
int main(void)
{
   int arr[10][20][30];

   int ia[3][4] = {
      {0,1,2,3},
      {4,5,6,7},
      {8,9,10,11} };


   ia[2][3] = arr[0][0][0];
   int (&row)[4] = ia[1];

   for ( auto i : row)
      cout << i << " ";
   cout << endl;

   cout << ia[2][3] << endl;



   return 0;
}

