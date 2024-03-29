#include <iostream>

int findUnique(int *arr, int size)
{
   for(int i = 0; i < size; i++)
   {
      int noOfiTh = 0;
      for(int j = 0; j < size; j++)
      {
         if(arr[i] == arr[j]) noOfiTh++;
      }
      if(noOfiTh < 2) return arr[i];
   }
   return -1;
}

int main()
{
   // arr = {1,1,2,3,3,2,5}
   // only one element is present once
   // other elements are present more than once
   
   int arr[] {1,1,2,2,3,3,3,5};
   int size = 8;

   std::cout << findUnique(arr, size) << std::endl;
}