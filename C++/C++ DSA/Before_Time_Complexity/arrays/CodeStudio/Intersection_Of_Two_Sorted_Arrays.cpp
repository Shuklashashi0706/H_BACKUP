// https://www.codingninjas.com/studio/problems/intersection-of-2-arrays_1082149?source=youtube&campaign=love_babbar_codestudio1&leftPanelTabValue=PROBLEM
#include <vector>
#include <iostream>
using namespace std;

vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2,
                                  int m)
{
   int i = 0, j = 0;
   vector<int> ans;
   while (!(i == n || j == m))
   {
      if (arr1[i] == arr2[j])
      {
         ans.push_back(arr1[i]);
         i++;
         j++;
      }
      else if (arr1[i] < arr2[j])
         i++;
      else
         j++;
   }
   return ans;
}

int main()
{
   vector<int> arr1 = {1, 2, 2, 2, 3, 4};
   vector<int> arr2 = {5};
   vector<int> result = findArrayIntersection(arr1, arr1.size(), arr2, arr2.size());
   std::cout << result.size() << std::endl;
}