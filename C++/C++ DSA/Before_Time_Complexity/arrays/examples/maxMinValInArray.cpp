#include <iostream>

void fillArray(int arr[], int size)
{
   std::cout << "fill the array:" << std::endl;
   for (int i = 0; i < size; i++)
   {
      std::cin >> arr[i];
   }
}

int max(int arr[], int size)
{
   int max = INT_MIN;
   for (size_t i = 0; i < size; i++)
   {
      if (arr[i] > max)
      {
         max = arr[i];
      }
   }
   return max;
}

int min(int arr[], int size)
{
   int min = INT_MAX;
   for (size_t i = 0; i < size; i++)
   {
      if (arr[i] < min)
      {
         min = arr[i];
      }
   }
   return min;
}

int main()
{
   int arr[100] {0};
   int size;
   std::cout << "Enter the size of array: ";
   std::cin >> size;
   fillArray(arr, size);
   std::cout << "max: " << max(arr, size) << std::endl;
   std::cout << "min: " << min(arr, size) << std::endl;
}