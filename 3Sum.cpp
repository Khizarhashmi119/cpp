#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void printVectorOfVectorOfInt(vector<vector<int>> v)
{
  for (auto i : v)
  {
    for (auto j : i)
    {
      cout << j << " ";
    }

    cout << endl;
  }
}

void printVectorOfInt(vector<int> v)
{
  for (auto i : v)
  {
    cout << i << " ";
  }

  cout << endl;
}

vector<vector<int>> threeSum(vector<int> &nums)
{
  vector<vector<int>> result;
  // unordered_map<string, vector<int>> resultMap;
  set<vector<int>> resultSet;

  sort(nums.begin(), nums.end());

  for (int i = 0; i < nums.size(); i++)
  {
    int start = i + 1, end = nums.size() - 1;

    while (start < end)
    {
      int target = nums[i] + nums[start] + nums[end];

      if (target == 0)
      {
        // vector<int> temp;
        // string key;
        // key = to_string(nums[i]) + "#" + to_string(nums[start]) + "#" + to_string(nums[end]);
        // temp.push_back(nums[i]);
        // temp.push_back(nums[start]);
        // temp.push_back(nums[end]);
        // resultMap[key] = temp;
        resultSet.insert({nums[i], nums[start], nums[end]});
        start++;
        end--;
      }
      else if (target > 0)
        end--;
      else if (target < 0)
        start++;
    }
  }

  // for (auto item : resultMap)
  //   result.push_back(item.second);

  for (auto item : resultSet)
    result.push_back(item);

  return result;
}

int main()
{
  vector<int> numbers = {-1, 0, 1, 2, -1, -4};
  vector<vector<int>> result = threeSum(numbers);
  printVectorOfVectorOfInt(result);
  return 0;
}