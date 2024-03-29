// You have been given an integer array/list(ARR) of size N. Where N is equal to [2M + 1].
// Now, in the given array/list, 'M' numbers are present twice and one number is present only once.
// You need to find and return that number which is unique in the array/list.
//  Note: Unique element is always present in the array/list according to the given condition.
// Constraints :
// 1 <= t <= 10^2
// 0 <= N <= 10^3
// Time Limit: 1 sec

#include <iostream>

// xor's property
// a ^ a = 0
// a ^ 0 = a
// arr = {1,2,1,2,3};
// 1 ^ 2 ^ 1 ^ 2 ^ 3 = 3

int findUnique(int *arr, int size)
{
   int sol = 0;
   for (size_t i = 0; i < size; i++)
   {
      sol = sol ^ arr[i];
   }
   return sol;
}

int main()
{
   int arr[] {1,2,1,2,8};
   int size = 5;

   std::cout << findUnique(arr, size) << std::endl;
}