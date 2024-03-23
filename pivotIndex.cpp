#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int pivotIndex(vector<int> &nums)
{
  int totalSum = 0;
  int leftSum = 0;

  for (int i = 0; i < nums.size(); i++)
    totalSum += nums[i];

  for (int i = 0; i < nums.size(); i++)
  {
    int rightSum = totalSum - nums[i] - leftSum;

    if (leftSum == rightSum)
    {
      return i;
    }

    leftSum += nums[i];
  }

  return -1;
}

int main()
{
  vector<int> nums =
      // {1, 7, 3, 6, 5, 6}
      // {1, 2, 3}
      // {2,1,-1}
      // {-1, -1, -1, -1, 0, 1}
      {-1, -1, 0, -1, -1, -1};
  int result = pivotIndex(nums);
  cout << "Result:- " << result << endl;
  return 0;
}