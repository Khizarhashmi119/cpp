#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void printVectorOfInt(vector<int> nums)
{
  for (auto num : nums)
  {
    cout << num << " ";
  }

  cout << endl;
}

vector<int> sortedSquares(vector<int> &nums)
{
  int i, negativeNumberCount = 0, j;
  vector<int> result;

  for (int i = 0; i < nums.size(); i++)
  {
    if (nums[i] < 0)
      negativeNumberCount++;

    nums[i] = nums[i] * nums[i];
  }

  i = negativeNumberCount - 1;
  j = negativeNumberCount;

  while (i >= 0 && j < nums.size())
  {
    if (nums[i] < nums[j])
    {
      result.push_back(nums[i]);
      i--;
    }
    else if (nums[i] > nums[j])
    {
      result.push_back(nums[j]);
      j++;
    }
    else
    {
      result.push_back(nums[i]);
      result.push_back(nums[j]);
      i--;
      j++;
    }
  }

  if (i == -1)
  {
    while (j < nums.size())
    {
      result.push_back(nums[j]);
      j++;
    }
  }
  else if (j == nums.size())
  {
    while (i >= 0)
    {
      result.push_back(nums[i]);
      i--;
    }
  }

  return result;
}

int main()
{
  vector<int> nums = {-4, -1, 0, 3, 10}, result;
  result = sortedSquares(nums);
  cout << "Result = " << endl;
  printVectorOfInt(result);
  return 0;
}