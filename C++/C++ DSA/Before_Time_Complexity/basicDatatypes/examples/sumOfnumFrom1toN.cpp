#include <iostream>

int main()
{
   int n;
   std::cin >> n;
   std::cout << std::endl;

   int sum = 0;
   for(int i = 1; i < n+1; i++)
   {
      sum += i;
   }
   std::cout << sum << std::endl;
   std::cout << (n/2)*(1 + n) << std::endl;
}