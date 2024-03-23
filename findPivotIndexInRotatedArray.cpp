#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int findPivotIndexInRotatedArray(vector<int> &nums)
{
  int start = 0, end = nums.size() - 1;

  if (nums[0] < nums[nums.size() - 1])
    return nums[0];

  while (start < end)
  {
    int mid = start + (end - start) / 2;

    if (nums[mid] >= nums[0])
      start = mid + 1;
    else if (nums[mid] < nums[0])
      end = mid;
  }

  return nums[end];
}

int main()
{
  vector<int> nums = {1};
  int result = findPivotIndexInRotatedArray(nums);
  cout << "Result:- " << result << endl;
  return 0;
}