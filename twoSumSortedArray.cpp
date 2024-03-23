#include <iostream>
#include <bits/stdc++.h>

using namespace std;

vector<int> twoSum(vector<int> &numbers, int target)
{
  int start = 0, end = numbers.size() - 1;
  vector<int> result;

  while (start < end)
  {
    if (numbers[start] + numbers[end] == target)
    { // return vector<int>{start + 1, end + 1};
      result.push_back(start + 1);
      result.push_back(end + 1);
      break;
    }
    else if (numbers[start] + numbers[end] > target)
      end -= 1;
    else if (numbers[start] + numbers[end] < target)
      start += 1;
  }

  // return vector<int>{-1, -1};
  return result;
}

int main()
{
  vector<int> numbers = {2, 7, 11, 15};
  vector<int> result = twoSum(numbers, 9);
  cout << "Index1 = " << result[0] << ", Index2 = " << result[1] << endl;
  return 0;
}