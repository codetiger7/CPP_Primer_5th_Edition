// Exercise 4.31
// we used the prefix because it is more direct and clear
// It also avoids us cost with first storing a temp variable then storing the real one

#include <iostream>
#include <vector>

using namespace std;

int main()
{
   vector<int> ivec(20);

   vector<int>::size_type cnt = ivec.size();

   // assing values from size... 1 to the elements in  ivec
   for (vector<int>::size_type ix = 0; ix != ivec.size(); ix++, cnt--)
   {
      ivec[ix] = cnt;
   }


   // no change

   for (size_t c = 0; c != ivec.size(); ++c)
      cout << ivec[c] << endl;


   return 0;
}

