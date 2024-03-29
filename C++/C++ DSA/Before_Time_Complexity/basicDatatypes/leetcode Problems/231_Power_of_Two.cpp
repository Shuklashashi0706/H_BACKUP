#include <iostream>

// every power of two only has single bit present in it
// ex:
// 1 = 1
// 2 = 10
// 4 = 100
// 8 = 1000

bool isPowerOfTwo(int n) 
{
   if(n > 0)
   {
      int count = 0;
      while(n!=0)
      {
         if(n&1) count++;
         n = n>>1;
      }
      if(count == 1) return true;
   }
   return 0;
}

int main()
{
   int num;
   std::cin >> num;
   std::cout << std::boolalpha << isPowerOfTwo(num) << std::endl;
}