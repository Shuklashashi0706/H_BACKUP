#include <iostream>

void setArray(int *arr, int size)
{
   std::cout << "Enter diff integeral values for the array: " << std::endl;
   for(size_t i = 0; i < size; i++)
   {
      std::cin >> arr[i];
   }
}

int sum(int *arr, int size)
{
   int sum = 0;
   for (size_t i = 0; i < size; i++)
   {
      sum += arr[i];
   }
   return sum;
}

int product(int *arr, int size)
{
   int product = 1;
   for (size_t i = 0; i < size; i++)
   {
      product *= arr[i];
   }
   return product;
}

int main()
{
   int arr[100] {0};
   int size;
   std::cout << "Enter size of array: ";
   std::cin >> size;
   setArray(arr, size);

   std::cout << "Sum: " << sum(arr, size) << std::endl;
   std::cout << "Product: " <<  product(arr, size) << std::endl;
}