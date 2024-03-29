#include <iostream>

int main()
{
   // char a = 158;
   // int i = a;
   // std::cout << i << std::endl;
   // What does it print ?
   // a => 10011110 in memory
   // if a is signed
   // reverse of 2's complement(10011110) =
   // ~(10011110 - 1) =
   // ~(10011101) =
   // 01100010 = 98
   // therefore -98 is printed
   // if a is unsigned
   // 158 is printed

   // std::cout << static_cast<int>('A') << std::endl;
   // std::cout << static_cast<char>(65) << std::endl;

   // for (int i = 0; i != 10; ++i)
   //    std::cout << static_cast<char>('0' + i);

   // unsigned char uc= 255;
   // char* pc = &uc; //error: invalid conversion from 'unsigned char*' to 'char*'

   // unsigned char uc = 25;
   // char c = uc;

   // int a = '\123'; // decimal(ocatal 123) = 64 + 16 + 3 = 83
   // std::cout << a << std::endl;
   // a = '\x1f'; // decimal(hexadecimal 1f) = 16 + 15 = 31
   // std::cout << a << std::endl;
}