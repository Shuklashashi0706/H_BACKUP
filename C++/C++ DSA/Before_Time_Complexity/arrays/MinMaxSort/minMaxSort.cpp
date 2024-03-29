#include <iostream>
#include <vector>

std::vector<int> sortArray(std::vector<int> arr)
{
   int Csize = arr.size();
   std::vector<int> sortedArr(Csize);
   int size = Csize;
   int Li = 0;
   int Ri = size - 1;
   while (size > 0)
   {
      int min = INT32_MAX;
      int max = INT32_MIN;
      for (int i = 0; i < size; i++)
      {
         if (arr[i] > max)
         {
            max = arr[i];
         }
         if (arr[i] < min)
         {
            min = arr[i];
         }
      }
      sortedArr[Li] = min;
      sortedArr[Ri] = max;
      Li++;
      Ri--;
      size -= 2;
      int x = 0;
      for (int i = 0; i < Csize; i++)
      {
         if (!(arr[i] == min || arr[i] == max))
         {
            arr[x] = arr[i];
            x++;
         }
         if (arr[i] == min)
         {
            min = INT32_MIN;
         }
         if (arr[i] == max)
         {
            max = INT32_MAX;
         }
      }
   }
   return sortedArr;
}

int main()
{
   std::vector<int> arr{1, 4, 2, 8, 2, 2};
   arr = sortArray(arr);

   for (int i : arr)
   {
      std::cout << i << std::endl;
   }
}

// #include <iostream>

// int main()
// {
//    int arr[] = {2, 2, 2, 1, 1};
//    constexpr int Csize = sizeof(arr) / sizeof(int);
//    int sortedArr[Csize] = {};
//    int size = Csize;
//    int Li = 0;
//    int Ri = size - 1;
//    while (size > 0)
//    {
//       int min = INT32_MAX;
//       int max = INT32_MIN;
//       for (int i = 0; i < size; i++)
//       {
//          if (arr[i] > max)
//          {
//             max = arr[i];
//          }
//          if (arr[i] < min)
//          {
//             min = arr[i];
//          }
//       }
//       sortedArr[Li] = min;
//       sortedArr[Ri] = max;
//       Li++;
//       Ri--;
//       size -= 2;
//       int x = 0;
//       for (int i = 0; i < Csize; i++)
//       {
//          if (!(arr[i] == min || arr[i] == max))
//          {
//             arr[x] = arr[i];
//             x++;
//          }
//          if (arr[i] == min)
//          {
//             min = INT32_MIN;
//          }
//          if (arr[i] == max)
//          {
//             max = INT32_MAX;
//          }
//       }
//    }

//    for (int i : sortedArr)
//    {
//       std::cout << i << std::endl;
//    }
//    std::cin.get();
// }
