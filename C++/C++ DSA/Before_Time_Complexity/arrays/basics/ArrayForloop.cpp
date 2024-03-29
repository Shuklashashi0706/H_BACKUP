#include <iostream>

int main()
{
   int arr[4] {1,2,3,4};
   for(int i : arr)
   {
      std::cout << i << std::endl;
   }   
}