// QUESTION:
// You are given an array ‘ARR’ of size ‘N’ containing each number between 1 and ‘N’ - 1 at least once. There is a single integer value that is present in the array twice. Your task is to find the duplicate integer value present in the array.
// For example:
// Consider ARR = [1, 2, 3, 4, 4], the duplicate integer value present in the array is 4. Hence, the answer is 4 in this case.
// Note : A duplicate number is always present in the given array.

// Babbar bhaiya ki ninja technique:
// xor ki property
// a ^ a = 0
// a ^ 0 = a
// GIVEN:
// ‘ARR’ of size ‘N’ containing each number between [1 and (N - 1)] at least once. There is a single integer value that is present in the array twice.
// say x is present twice
// then => 1,2,3,....x...,N-1,x => N terms
// so, 1^2^3^....^x^...^N-1^x = 1^2^3^......^N-1
// and, (1^2^3^......^N-1)^(1^2^3^...^x^...^N-1) = x
#include <iostream>
#include <vector>
using namespace std;

int findDuplicate(vector<int> &arr)
{
    // n = 5
    // input arr = {1,2,3,1,4}
    int ans = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        ans = ans ^ arr[i];
    }
    // ans = 1^2^3^1^4 = 2^3^4
    for (int i = 1; i < arr.size(); i++)
    {
        ans = ans ^ i;
    }
    // ans ^ 1^2^3^4 = 2^3^4^1^2^3^4 = 1
    return ans;
}

int main()
{
    vector<int> arr = {4, 2, 1, 3, 1};
    cout << findDuplicate(arr) << endl;
    return 0;
}

// My way:
// #include <iostream>
// #include <vector>
// using namespace std;

// class Solution
// {
// public:
//    static bool isXpresent(vector<int> &arr, int num)
//    {
//       for (int i : arr)
//       {
//          if (i == num)
//             return 1;
//       }
//       return 0;
//    }

//    static vector<int> removeDuplicates(vector<int> &arr)
//    {
//       vector<int> vec;
//       for (int i : arr)
//       {
//          if (Solution::isXpresent(vec, i))
//             continue;
//          else
//             vec.push_back(i);
//       }
//       return vec;
//    }

//    static int findDuplicate(vector<int> &arr)
//    {
//       vector<int> unique = Solution::removeDuplicates(arr);
//       vector<int> num;
//       for (int i : unique)
//       {
//          int n = 0;
//          for (int j : arr)
//          {
//             if (i == j)
//                n++;
//          }
//          num.push_back(n);
//       }
//       for(int i = 0; i < num.size(); i++)
//       {
//          if(num[i] > 1)
//             return unique[i];
//       }
//       return 0;
//    }
// };

// int main()
// {
//    vector<int> arr = {4, 2, 1, 3, 1};
//    std::cout << Solution::findDuplicate(arr) << std::endl;;
//    return 0;
// }