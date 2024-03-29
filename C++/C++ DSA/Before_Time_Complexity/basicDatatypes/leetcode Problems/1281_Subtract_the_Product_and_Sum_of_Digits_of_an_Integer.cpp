#include <iostream>
#include <cmath>

int main()
{
   // constraint: 1 - 100,000
   // 4421 = p(4421) - s(4421)
   // 4421 = 32 - 11 = 21

   int n;
   std::cin >> n;

   int digit = 0;
   int sum = 0;
   int product = 1;

   if((int)(n / 10) == 0)
   {
      digit = n % 10;
      sum += digit;
      product *= digit;
   }

   while((int)(n / 10))
   {
      digit = n % 10;
      n = (n - digit) / 10;
      sum += digit;
      product *= digit;  
      if((int)(n / 10) == 0)
      {
         digit = n % 10;
         sum += digit;
         product *= digit;  
      }
   }

   std::cout << product - sum;
}