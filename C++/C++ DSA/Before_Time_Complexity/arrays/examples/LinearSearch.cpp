#include <iostream>

void setArray(int *arr, int size)
{
   std::cout << "Enter diff integeral values for the array: " << std::endl;
   for (size_t i = 0; i < size; i++)
   {
      std::cin >> arr[i];
   }
}

bool isXpresent(int x, int *arr, int size)
{
   for(int i = 0; i < size; i++)
   {
      if(x == arr[i]) return 1;
   }
   return 0;
}

int main()
{
   // arr = {1, 4, 9, 2, 10}
   // size(arr) = 5
   // is 2 present inside the loop ?
   // is 20 present inside the loop ?

   int arr[100] {0};
   int size;
   std::cout << "Enter the size of array: ";
   std::cin >> size;
   setArray(arr, size);

   std::cout << std::boolalpha << isXpresent(2, arr, size) << std::endl;
   std::cout << std::boolalpha << isXpresent(20, arr, size) << std::endl;
}