#include <iostream>

void setArray(int *arr, int size)
{
   std::cout << "Enter diff integeral values for the array: " << std::endl;
   for(size_t i = 0; i < size; i++)
   {
      std::cin >> arr[i];
   }
}

void printArray(int *arr, int size)
{
   std::cout << "Entered array: " << std::endl;
   for(size_t i = 0; i < size; i++)
   {
      std::cout << arr[i] << std::endl;
   }
}

void reverse(int *arr, int size)
{
   for (size_t i = 0; i < size/2 ; i++)
   {
      int temp = arr[i];
      arr[i] = arr[size - (i + 1)];
      arr[size - (i + 1)] = temp;
   }
}

int main()
{
   int arr[100] {0};
   int size;
   std::cout << "Enter size of array: ";
   std::cin >> size;
   setArray(arr, size);
   reverse(arr, size);
   printArray(arr, size);
}