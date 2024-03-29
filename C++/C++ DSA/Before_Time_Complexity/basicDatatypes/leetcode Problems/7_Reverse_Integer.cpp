#include <iostream>

int reverse(int x)
{
   int reversedNum = 0;
   for(;x != 0;)
   {
      int digit = x % 10;
      if(reversedNum > (2147483647/10) | reversedNum < -(2147483647/10))
      {
         return 0;
      }
      reversedNum = (10 * reversedNum) + digit;
      x /= 10;
   }
   return reversedNum;
}

int main()
{
   int inp;
   std::cin >> inp;
   std::cout << reverse(inp) << std::endl;
   return 0;
}