// Exercise4-25
// what is the value of ~'q' << 6

// 32 bit ints
// 8 bit chars
// q has value 01110001 ie 113

#include <bitset>
#include <iostream>

using namespace std;

int main()
{

   // 10001110
   // 0001110001000000
   // value should be 7232

   // 142: 10001110
   unsigned char q = 0161;
   cout << bitset<8>(q) << endl;

   int sval =  ~'q' << 6;

   cout << bitset<32>(sval) << endl;

   cout << sval << endl;




   return 0;
}

