#include <iostream>

int pow(int base, int exponent)
{
   int value = 1;
   for(int i = 0; i < exponent; i++)
   {
      value *= base;
   }
   return value;
}

// Decimal to binary
// 1st way
// int main()
// {
//    int decimal;
//    std::cin >> decimal;
//    int binary = 0;
//    int i = 0;
//    for(;decimal != 0;)
//    {
//       int bit = decimal % 2;
//       binary += (pow(10, i++) * bit);
//       decimal /= 2;
//    }
//    std::cout << binary << std::endl;
// }

// 2nd way
// int main()
// {
//    int decimal;
//    std::cin >> decimal;
//    int binary = 0;
//    int i = 0;
//    for(;decimal != 0;)
//    {
//       int bit = decimal & 1;
//       binary += (pow(10, i++) * bit);
//       decimal = decimal >> 1;
//    }
//    std::cout << binary << std::endl;
// }

// Binary to decimal
// int main()
// {
//    int binary;
//    std::cin >> binary;
//    int decimal = 0;
//    int i = 0;
//    for(;binary != 0;)
//    {
//       int bit = binary % 10;
//       decimal += (pow(2, i++) * bit);
//       binary /= 10;
//    }
//    std::cout << decimal << std::endl;
// }