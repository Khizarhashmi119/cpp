#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
  // int nums[] = {4, 3, 2, 7, 8, 2, 3, 1};
  // int nums[] = {1, 1, 2};
  // int results[10] = {0}, j = 0, size = 3;

  vector<int> nums = {4, 3, 2, 7, 8, 2, 3, 1};
  vector<int> results;

  for (int i = 0; i < nums.size(); i++)
  {
    int index = abs(nums[i]) - 1;

    if (nums[index] < 0)
    {
      // results[j] = abs(nums[i]);
      // j++;
      results.push_back(abs(nums[i]));
    }
    else
    {
      nums[index] = -nums[index];
    }
  }

  for (int i = 0; i < results.size(); i++)
  {
    cout << results[i] << " ";
  }

  cout << endl;
  return 0;
}