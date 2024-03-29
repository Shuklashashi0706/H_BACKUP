#include <iostream>

int factorial(int num)
{
   if (num == 0)
      return 1;
   int factorial = 1;
   for (int i = num; i > 0; i--)
   {
      factorial *= i;
   }
   return factorial;
}

int nCr(int n, int r)
{
   return (factorial(n) / (factorial(n - r) * factorial(r)));
}

int main()
{
   std::cout << nCr(4, 2);
}