#include <iostream>

int main()
{
   bool b;
   b = true;
   std::cout << std::boolalpha << b << std::endl;
   b = false;
   std::cout << std::boolalpha << b << std::endl;

   b = 0 || 1; // 0 || 1 = 1 = true
   std::cout << std::boolalpha << b << std::endl;

   b = true + true; // 1 + 1 = 2 = true
   std::cout << std::boolalpha << b << std::endl;
   b = true - true; // 1 - 1 = 0 = false
   std::cout << std::boolalpha << b << std::endl;

   std::cout << "************************************" << std::endl;

   int i = 4;
   // b = {i}; // error : narrowing
   b = {i != 0};
   std::cout << std::boolalpha << b << std::endl;
   i = 0;
   b = {i != 0};
   std::cout << std::boolalpha << b << std::endl;

   std::cout << "************************************" << std::endl;

   void* p = nullptr;
   // b = {p}; // error : narrowing
   b = {p != 0};
   std::cout << std::boolalpha << b << std::endl;
   int temp = 4;
   p = &temp;
   b = {p != 0};
   std::cout << std::boolalpha << b << std::endl;
}