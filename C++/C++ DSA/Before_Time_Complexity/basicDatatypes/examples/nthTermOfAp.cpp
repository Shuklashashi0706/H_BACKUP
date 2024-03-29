#include <iostream>

int nthOfAp(int n, int a, int d)
{
   return (a + ((n - 1) * d));
}

int main()
{
   // 2, 4, 6, 8
   std::cout << nthOfAp(4,2,2) << std::endl;
}