// https://www.codingninjas.com/studio/problems/pair-sum_697295?source=youtube&campaign=love_babbar_codestudio1

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> pairSum(vector<int> &arr, int s)
{
   vector<vector<int>> ans;
   for (int i = 0; i < arr.size() - 1; i++)
   {
      vector<int> x{};
      for (int j = i + 1; j < arr.size(); j++)
      {
         if ((arr[i] + arr[j]) == s)
         {
            if (arr[i] > arr[j])
            {
               x.push_back(arr[j]);
               x.push_back(arr[i]);
            }
            else
            {
               x.push_back(arr[i]);
               x.push_back(arr[j]);
            }
            ans.push_back(x);
         }
      }
   }
   sort(ans.begin(), ans.end());
   return ans;
}

int main()
{
   vector<int> arr = {1, 2, 3, 2, 4};
   vector<vector<int>> result = pairSum(arr, 4);
   for(auto i : result)
   {
      for(int j : i)
      {
         std::cout << j << " ";
      }
      std::cout << std::endl;
   }
}