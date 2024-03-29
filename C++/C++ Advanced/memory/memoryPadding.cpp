#include <iostream>
// #pragma pack(1) // align by 1 byte

void printMemory(size_t noOfbytes, void *address)
{
   for (size_t i = 0; i < noOfbytes; i++)
   {
      if (i % 4 == 0 && i != 0)
         std::cout << std::endl;
      std::cout << int(*((char *)address + i)) << " ";
   }
}
struct S
{
   int test;
   char c;
   char str[2];
   int num;
};
int main()
{
   S a;
   a.test = 2;
   a.c = 65;
   a.str[0] = 65;
   a.str[1] = 0;
   a.num = 6;

   std::cout << sizeof(a) << std::endl;
   printMemory(sizeof(a), &a);
}