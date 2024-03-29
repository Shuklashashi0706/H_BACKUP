// https://www.codingninjas.com/studio/problems/pair-sum_697295?source=youtube&campaign=love_babbar_codestudio1

// 1,2,3,4,5
// i = n-2
// j = n-1
// k = n

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> sum3(vector<int> &arr, int n, int K)
{
   vector<vector<int>> ans;
   for (int i = 0; i < n - 2; i++)
   {
      for (int j = i + 1; j < n - 1; j++)
      {
         for (int k = j + 1; k < n; k++)
         {
            vector<int> x;
            if ((arr[i] + arr[j] + arr[k]) == K)
            {
               x.push_back(arr[k]);
               x.push_back(arr[j]);
               x.push_back(arr[i]);
               sort(x.begin(), x.end());
               ans.push_back(x);
            }
         }
      }
   }
   sort(ans.begin(), ans.end());
   ans.erase(unique(ans.begin(), ans.end()), ans.end());
   return ans;
}

int main()
{
   vector<int> arr = {10, 5, 5, 5, 2};
   vector<vector<int>> result = sum3(arr, arr.size(), 12);
   for (auto y : result)
   {
      for (auto x : y)
      {
         std::cout << x << " ";
      }
      std::cout << std::endl;
   }
}
