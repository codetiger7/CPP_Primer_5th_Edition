// Exercise 5.3
// Use the comma operator (§4.10)
// To rewrite the while loop from (§1.4.1) so that it no longer requires a block.

// Explain whether this rewrite improves or diminishes the readabillity of this code.
// My opinion is that it diminishes readability of this code
// This becomes clearer the more expressions we add to the statement.


#include <iostream>

int main()
{
   int sum = 0;S
   int val = 1;

   // keep executing the while as long as val is less than or equal to 10
   while (val <= 10)
      sum += val, ++val;

   std::cout << "Sum of 1 to 10 inclusive is "
             << sum << std::endl;


   return 0;
}

