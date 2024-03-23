#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int maxArea(vector<int> &height)
{
  int start = 0, end = height.size() - 1, areaMax = (end - start) * min(height[start], height[end]);

  while (start < end)
  {
    if (height[start] < height[end])
    {
      start++;
    }
    else if (height[start] > height[end])
    {
      end--;
    }
    else
    {
      if (height[start + 1] > height[end - 1])
      {
        start++;
      }
      else
      {
        end--;
      }
    }

    areaMax = max(areaMax, (end - start) * min(height[start], height[end]));
  }

  return areaMax;
}

int main()
{
  vector<int> height = {1, 1};
  int result = maxArea(height);
  cout << "Max area = " << result << endl;
  return 0;
}