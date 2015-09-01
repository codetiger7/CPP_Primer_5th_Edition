// Exercise 4.38
// Rewrite each of the following old-style casts to use a named cast:

// named cast form: cast-name<type>(expression);
// type is the target type of conversion
// expression is the value to be cast
// if type is a reference the result is an lvalue
// cast-name says what kind of conversion is done

// static_cast  (type conversion any kind except low level const)
// example: can force an expression to use floating point division by casting to double
// double = slope = static_cast<double>(j) / i;
// can cast a larger type to smaller, on purpose loosing precision
// can do a conversion that compiler will not do
// example: get a pointer value that was stored in void* pointer
// void* p = &d;  // pointer to double
// double* dp = static_cast<double*>(p); // get pointer to the double

// dynamic_cast (run-time type identification)

// const_cast
// const_cast changes only low_level const
// example:
// const char* pc;
// char* p = const_cast<char*>(pc); // using p to write to char value is undefined

// reinterpret_cast

#include <iostream>

using namespace std;

int main()
{
   int            i  = 0;
   double         d  = 0;
   const string*  ps = nullptr;
   char*          pc = 0;
   void*          pv = nullptr;

   // a) pv = (void*) ps;
   pv = const_cast<string*>(ps);
   // casting the ptr to const string into a ptr to string
   // storing the ptr to string in a ptr to void

   // b) i = int(*pc);
   i = static_cast<int>(*pc);
   // dereferencing the ptr to char and casting the char to int
   // storing the int in i

   // c) pv = &d;
   pv = static_cast<void*>(&d); // storing the address of double in pointer to void


   // d) pc = (char*) pv;
   pc = static_cast<char*>(pv);
   // converts ptr to void to ptr to char.
   // Stores ptr to char in pc which is a ptr to char.




   return 0;
}

