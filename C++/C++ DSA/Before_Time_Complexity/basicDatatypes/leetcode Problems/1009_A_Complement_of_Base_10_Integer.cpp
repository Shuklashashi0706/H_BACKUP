#include <iostream>

// ex: input = 10
// 10 = 1010
// complement = 0101 = 5

int pow(int base, int exponent)
{
   int value = 1;
   for(int i = 0; i < exponent; i++)
   {
      value *= base;
   }
   return value;
}

int bitwiseComplement(int n) 
{
   int binary = 0;
   int i = 0;
   if(n == 0) return 1;
   for(;n != 0;)
   {
      int bit = !(n % 2);
      binary += (pow(2, i++) * bit);
      n /= 2;
   }
   return binary;
}

int main()
{
   int n;
   std::cin >> n;
   std::cout << bitwiseComplement(n) << std::endl;
}