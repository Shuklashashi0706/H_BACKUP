#include <iostream>

// bool isEven(int num)
// {
//    return (num & 1)?false:true;
// }

bool isEven(int num)
{
   if (num % 2 != 0)
      return false;
   else return true;
}

int main()
{
   int num;
   std::cin >> num;
   std::cout << std::boolalpha << isEven(num) << std::endl;  
}