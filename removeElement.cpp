#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int removeElement(vector<int> &nums, int val)
{
  int i = 0, j = nums.size() - 1;

  int count = 0;

  for (auto num : nums)
    if (num != val)
      count++;

  while (i < j)
  {
    if (nums[i] == val && nums[j] != val)
    {
      swap(nums[i], nums[j]);
      i++;
      j--;
    }
    else if (nums[i] != val)
      i++;
    else if (nums[j] == val)
      j--;
  }

  return count;
}

int main()
{
  vector<int> nums = {0, 1, 2, 2, 3, 0, 4, 2};
  int val = 2;
  int result = removeElement(nums, val);
  cout << "Result:- " << result << endl;

  for (auto num : nums)
    cout << num << " ";
  cout << endl;

  return 0;
}