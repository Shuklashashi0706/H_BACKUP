#include <iostream>
#include <vector>
using namespace std;

// #region ALGO
//  Works on monotoning function
//  elements should be in monotoning order
//  ***************************
//  nums = {1,2,3,4,5,6,7,8,9}
//  ***************************
// #endregion

int BinarySearch(vector<int> nums, int target)
{
   int start = 0;
   int end = nums.size() - 1;
   int mid = start + ((end - start) / 2);
   while (start <= end)
   {
      if (target == nums[mid])
      {
         return mid;
      }
      else if (target > nums[mid])
      {
         start = mid + 1;
      }
      else if (target < nums[mid])
      {
         end = mid - 1;
      }
      mid = start + ((end - start) / 2);
   }
   return -1;
}

int main()
{
   vector<int> nums = {-1, 0, 3, 5, 9, 12};
   std::cout << BinarySearch(nums, 5) << std::endl;
}