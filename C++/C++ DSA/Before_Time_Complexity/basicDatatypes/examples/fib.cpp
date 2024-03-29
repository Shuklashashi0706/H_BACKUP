#include <iostream>

int fib(int inp)
{
   int a1 = 0;
   int a2 = 1;
   for (size_t i = 0; i < inp; i++)
   {
      int a1_ = a1;
      if(i == inp - 1) 
         return a1;
      a1 += a2;
      a2 = a1_;
   }
   return 0;
}

int main()
{
   int inp;
   std::cin >> inp;   

   std::cout << fib(inp) << std::endl;
   // fib(4), fib(6)
   // 0 1 1 2 3 5
}