// Given an integer array nums of length n where all the integers of nums are in the range [1, n] and each integer appears once or twice, return an array of all the integers that appears twice.
// You must write an algorithm that runs in O(n) time and uses only constant extra space.

// Example 1:
// Input: nums = [4,3,2,7,8,2,3,1]
// Output: [2,3]

// Example 2:
// Input: nums = [1,1,2]
// Output: [1]

// Example 3:
// Input: nums = [1]
// Output: []

// BETTER WAY:

// #include <vector>
// #include <iostream>
// using namespace std;
// vector<int> findDuplicates(vector<int> &nums)
// {
//    vector<int> ans;
//    for (int i = 0; i < nums.size(); i++)
//    {
//       int x = abs(nums[i]);
//       if (nums[x - 1] < 0)
//       {

//          ans.push_back(x);
//       }
//       nums[x - 1] *= -1;
//    }

//    // Input: nums = [4,3,2,7,8,2,3,1]
//    // x = 4, nums[3] = 7 , nums[3] = -7
//    // x = 3, nums[2] = 2 , nums[2] = -2
//    // x = 2, nums[1] = 3 , nums[1] = -3
//    // x = 7, nums[6] = 3 , nums[6] = -3
//    // x = 8, nums[7] = 1 , nums[7] = -1
//    // x = 2, nums[1] = -3, nums[1] =  3, [3]
//    // x = 3, nums[2] = -2, nums[2] =  2, [3,2]
//    // x = 1, nums[0] =  4, nums[0] = -4

//    return ans;
// }
// int main()
// {
//    vector<int> arr = {4, 3, 2, 7, 8, 2, 3, 1};
//    vector<int> ans = findDuplicates(arr);
//    for (int i : ans)
//       std::cout << i << std::endl;
//    return 0;
// }

// MY WAY:
// #include <vector>
// #include <iostream>
// using namespace std;

// vector<int> findDuplicates(vector<int> &nums)
// {
//    vector<int> returnMe;
//    for (int i = 0; i < nums.size(); i++)
//    {
//       for (size_t j = 0; j < nums.size() && j != i; j++)
//       {
//          if (nums[i] == nums[j])
//          {
//             returnMe.push_back(nums[i]);
//          }
//       }
//    }
//    return returnMe;
// }

// int main()
// {
//    vector<int> arr = {4, 3, 2, 7, 8, 2, 3, 1, 4};
//    vector<int> r = findDuplicates(arr);
//    for (int i : r)
//       std::cout << i << std::endl;
// }