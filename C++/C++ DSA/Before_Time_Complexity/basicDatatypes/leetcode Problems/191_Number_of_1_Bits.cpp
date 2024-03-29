#include <iostream>

int main()
{
   // Input: n = 11111111111111111111111111111101
   // Output: 3
   // Explanation: The input binary string 00000000000000000000000000001011 has a total of three '1' bits.

   // Solution 1:
   // uint32_t n = 0b11111111111111111111111111111111;
   // int count = 0;
   // while(n != 0)
   // {
   //    int bin = n % 2;
   //    n /= 2;
   //    if(bin) count++;
   // }
   // std::cout << count << std::endl;

   // Solution 2:
   // uint32_t n = 0b11111111111111111111111111111111;
   int n;
   std::cin >> n;
   int count = 0;
   while(n!=0)
   {
      if(n&1)
         count++;
      n = n>>1;
   }
   std::cout << count << std::endl;
}