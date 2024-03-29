#include <iostream>
#include <cstddef>
// #pragma pack(1)

struct A
{
   int x; // 4bytes
   char y; // 1byte
   //pad bye 3 byte
   int z; // 4byte
};
struct B
{
   int x; // 4bytes
   A a;
};
class C
{
   public:
   int x; // 4bytes
   int y;
   A a;
};

int main()
{
   std::cout << offsetof(A, z)    << std::endl;
   std::cout << offsetof(B, a)    << std::endl;
   std::cout << offsetof(B, a.z)  << std::endl;
   std::cout << offsetof(C, y)  << std::endl;
   std::cout << offsetof(C, a.z)  << std::endl;

   // arrow operators overload for offsetof
   std::cout << int(&((A*)nullptr)->z)  << std::endl;
   
   // offsetof(B, a.z)// there is no alt for this
}