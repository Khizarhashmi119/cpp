#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void printVectorOfInt(vector<int> &nums)
{
  for (auto num : nums)
    cout << num << " ";

  cout << endl;
}

void moveZeroes(vector<int> &nums)
{
  int k;

  for (int i = 0; i < nums.size(); i++)
  {
    if (nums[i] == 0)
    {
      k = i;
      break;
    }
  }

  int i = k, j = k + 1;

  while (i < nums.size() && j < nums.size())
  {
    if (nums[j] != 0)
    {
      nums[i] = nums[j];
      nums[j] = 0;
      i++;
    }

    j++;
  }
}

int main()
{
  vector<int> nums = {4, 2, 4, 0, 0, 3, 0, 5, 1, 0};
  printVectorOfInt(nums);
  moveZeroes(nums);
  printVectorOfInt(nums);
  return 0;
}