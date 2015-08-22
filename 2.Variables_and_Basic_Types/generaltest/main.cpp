// Testing
#include <iostream>

using namespace std;

int j = 0;
constexpr int i = 42; // type of i is const int
// i and j must be defined outside any function

int main()
{
    constexpr int* np = nullptr; // np is a constant pointer to int that is null


    constexpr const int* p = &i; // p is a constant pointer to the const int i
    constexpr int* p1 = &j; // p1 is a constant pointer to the int j






    return 0;
}

