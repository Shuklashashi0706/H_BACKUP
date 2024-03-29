
// Given an array of integers arr, return true if the number of occurrences of each value in the array is unique or false otherwise.

// Example 1:
// Input: arr = [1,2,2,1,1,3]
// 1: 3, 2: 2, 3: 1
// 1 ^ 2 ^ 3 != 0
// Output: true
// Explanation: The value 1 has 3 occurrences, 2 has 2 and 3 has 1. No two values have the same number of occurrences.

// if arr = [1,1,2,2,3]
// 1: 2, 2: 2, 3: 1
// 2 ^ 2 ^ 1 != 0
// Output: false
// 2 ^ 2 ^ 1 = 1
// 2 ^ 1 = 3
// 3 > 1

// if arr = [1,1,2,2,3,3,3,3,3,3,3,3]
// 1: 2, 2: 2, 3: 8
// 2 ^ 2 ^ 8 != 0
// Output: false
// 2 ^ 2 ^ 8 = 8
// 2 ^ 8 = 1000 ^ 10 = 1010 = 10
// 10 > 8

// Constraints:
// 1 <= arr.length <= 1000
// -1000 <= arr[i] <= 1000

// ************ALGO************************

// if arr = [1,1,2,2,3,3,3,3,3,3,3,3]
// unique(arr) = [1,2,3]

// timesElPres = [6,6,2]
// unique(timesElPres) = [6,2]
// if, xor(timesElPres) < xor(unique(timesElPres))
// then, false

#include <vector>
#include <iostream>
using namespace std;

vector<int> unique(vector<int> &arr)
{
   vector<int> returnMe;
   for (int i = 0; i < arr.size(); i++)
   {
      bool isXpresent = false;
      for (int j = 0; j < returnMe.size(); j++)
      {
         if (arr[i] == returnMe[j])
         {
            isXpresent = true;
            break;
         }
         else
            isXpresent = false;
      }
      if (!isXpresent)
      {
         returnMe.push_back(arr[i]);
      }
   }
   return returnMe;
}

int xOr(vector<int> &arr)
{
   int result = 0;
   for(int i = 0; i < arr.size(); i++)
   {
      result = result^arr[i];
   }
   return result;
}

vector<int> timesElPres(vector<int> &arr)
{
   vector<int> returnMe;
   vector<int> uniqueOfArr = unique(arr);
   for(int i = 0; i < uniqueOfArr.size(); i++)
   {
      int n = 0;
      for(int j = 0; j < arr.size(); j++)
      {
         if (uniqueOfArr[i] == arr[j]) 
         {
            n++;
         }
      }
      returnMe.push_back(n);
   }
   return returnMe;
}

bool uniqueOccurrences(vector<int> &arr)
{
   vector<int> a = timesElPres(arr);
   vector<int> b = unique(a);
   int x = xOr(a);
   int y = xOr(b);
   if(y > x) return false;
   if(a == b) return true;
   else return false;
}

int main()
{
   vector<int> arr1 = {1,2};
   vector<int> arr2 = {1,2,2,1,1,3};
   std::cout << std::boolalpha <<uniqueOccurrences(arr1) << std::endl;
   std::cout << uniqueOccurrences(arr2) << std::endl;
   std::cout << std::noboolalpha;
   return 0;
}