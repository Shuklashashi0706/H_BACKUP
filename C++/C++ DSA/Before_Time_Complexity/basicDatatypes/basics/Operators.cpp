#include <iostream>

void doOp(char operation)
{
   int res = 0;
   switch (operation)
   {
   case '^':
      std::cout << "*******XOR*******" << std::endl;
      std::cout << "0 ^ 0 = " << (0 ^ 0) << std::endl;
      std::cout << "0 ^ 1 = " << (0 ^ 1) << std::endl;
      std::cout << "1 ^ 1 = " << (1 ^ 1) << std::endl;
      break;
   case '|':
      std::cout << "*******OR*******" << std::endl;
      std::cout << "0 | 0 = " << (0 ^ 0) << std::endl;
      std::cout << "0 | 1 = " << (0 ^ 1) << std::endl;
      std::cout << "1 | 1 = " << (1 ^ 1) << std::endl;
      break;
   case '&':
      std::cout << "*******AND*******" << std::endl;
      std::cout << "0 & 0 = " << (0 ^ 0) << std::endl;
      std::cout << "0 & 1 = " << (0 ^ 1) << std::endl;
      std::cout << "1 & 1 = " << (1 ^ 1) << std::endl;
      break;
   }
}

int main()
{
   // arithmetic operators
   // std::cout << 5 % 2 << std::endl; // 5 % 2 = 2 * 2 + 1 = 1
   // std::cout << 2 % 5 << std::endl; // 2 % 5 = 5 * 0 + 2

   // logical operators
   // std::cout << (false && true) << std::endl; // AND
   // std::cout << (true || false) << std::endl; // OR
   // std::cout << !true << std::endl; // NOT

   // bitwise operators
   // doOp('^'); // xor
   // std::cout << "Special property of xor:" << std::endl;
   // std::cout << "4 ^ 0 = " << (4 ^ 0) << std::endl;
   // std::cout << "4 ^ 4 = " << (4 ^ 4) << std::endl;
   // std::cout << (4 ^ 4 ^ 3 ^ 7) << " = " << (3 ^ 7) << std::endl;
   // doOp('|');                      // or
   // doOp('&');                      // and
   // std::cout << (~1) << std::endl; // not

   // for big numbers not just single bits

   // shift operators
   // left shift or right shift on +ve no.,
   // padding is done with 0
   // for -ve no,
   // its compiler deppendent
   // std::cout << (int)(char)(0b10000000 << 1) << std::endl;
   // std::cout << (int)(char)(0b00000001 >> 1) << std::endl;
   // x >> n = x / (n * 2)
   // x << 1 = x * (n * 2)
   // std::cout << (4 >> 2) << " = " << 1 << std::endl;
   // std::cout << (4 << 2) << " = " << 16 << std::endl;

   // increment decrement
   // int a = 5;
   // std::cout << a++ << std::endl;
   // a = 5;
   // std::cout << ++a << std::endl;
   // a = 5;
   // std::cout << a-- << std::endl;
   // a = 5;
   // std::cout << --a << std::endl;

   // compound assignment
   // a = 5;
   // a += 2;
   // std::cout << a << std::endl;
   // a = 5;
   // a -= 2;
   // std::cout << a << std::endl;
   // a = 5;
   // a *= 2;
   // std::cout << a << std::endl;
   // a = 5;
   // a /= 2; // 5/2 = int(2.5) = 2
   // std::cout << a << std::endl;
   // a = 5;
   // a %= 2; // 5 % 2 = 2 * 2 + 1 = 1
   // std::cout << a << std::endl;
}