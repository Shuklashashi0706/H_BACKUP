#include <iostream>
#include <iomanip>
#include <string.h>
#include <string>

void printMemory(void* address, int no_bytes)
{
   std::cout << "**********MEMORY**********" << std::endl;
   for(int i = 0; i < no_bytes; i++)
   {
      std::cout << std::setw(8) << std::left;
      std::cout << (int)*((char*)address + i);
   }
   std::cout << std::endl;
}

int main()
{
   // int a = 10;
   // std::cout << "value of a is " << a << std::endl;
   // std::cout << "size of int in bytes: " << sizeof(a) << std::endl;
   // printMemory(&a, sizeof(int));

   // char c = 'A';
   // std::cout << "type casting char 'A' to int 65" << std::endl << "char A's ascii code is " << int(c) << std::endl;
   // std::cout << "size of char in bytes: " << sizeof(c) << std::endl;

   // implicit conversion only happens once
   // c = 66; // implicitly converts to B
   // // c = char(66); // what actually happens
   // std::cout << c << std::endl;
   // printMemory(&c, sizeof(char));

   // bool b = true;
   // std::cout << std::boolalpha << b << " : bool value [boolalpha]" << std::endl;
   // std::cout << std::noboolalpha << b << " : bool value [noboolalpha]" << std::endl;
   // std::cout << "size of  bool in bytes: " << sizeof(bool) << std::endl;
   // printMemory(&b, sizeof(bool));

   // char negativeNum = -5;
   // // 5 = 00000101
   // // 1's complent 11111010
   // // add 1 11111011
   // printMemory(&negativeNum, sizeof(char));

   // std::cout << sizeof(short) << std::endl;
   // std::cout << int(char(-1)) << std::endl;
   // std::cout << int((unsigned char)(-1)) << std::endl;

   // float f = 2.2f;
   // printMemory(&f, sizeof(float));

   // double d = 2.2;
   // printMemory(&d, sizeof(double));
}