#include <iostream>

void sort012(int *arr, int n)
{
   int zeros = 0;
   int ones = 0;
   int twos = 0;
   for (int i = 0; i < n; i++)
   {
      if (arr[i] == 0)
         zeros++;
      else if (arr[i] == 1)
         ones++;
      else if (arr[i] == 2)
         twos++;
   }
   int x = 0;
   for (int i = 0; i < zeros; i++)
   {
      arr[x++] = 0;
   }
   for (int i = 0; i < ones; i++)
   {
      arr[x++] = 1;
   }
   for (int i = 0; i < twos; i++)
   {
      arr[x++] = 2;
   }
}

int main()
{
   int arr[] = {0, 1, 2, 1, 2, 1, 2};
   sort012(arr, sizeof(arr) / 4);
   for(int i : arr)  std::cout << i << " ";
}