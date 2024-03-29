#include <iostream>

void Hii()
{
   std::cout << "Hii" << std::endl;
}

int main()
{
   int a = 5;
   char b = 'b';
   void* p = &a;
   *(static_cast<int*>(p)) = 2; 
   std::cout << a << std::endl;
   p = &b;
   *(static_cast<char*>(p)) = 'C';
   std::cout << b << std::endl;

   Hii();
}