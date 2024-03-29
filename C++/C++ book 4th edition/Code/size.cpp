#include <iostream>
#include <limits>
#include <cstdint>
#include <cstddef>

int main()
{
   std::cout << sizeof 1 << std::endl;
   std::cout << sizeof 1ll << std::endl;
   std::cout << sizeof 'A' << std::endl;
   std::cout << sizeof u'A' << std::endl;
   std::cout << sizeof 2.0 << std::endl;
   std::cout << sizeof 2.0f << std::endl;
   std::cout << (sizeof(void*)) << std::endl;
}