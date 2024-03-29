#include <iostream>

int main()
{
   int num;
   std::cin >> num;
   if(num == 2)
   {
      std::cout << "Is prime" << std::endl;
   }
   for(int i = 2; i < num; i++)
   {
      if(num % i == 0)
      {
         std::cout << "Not prime" << std::endl;
         break;
      }
      else
      {
         if(i == num - 1)
         {
            std::cout << "Is prime" << std::endl;
            break;
         }
         else continue;
      }
   }
}