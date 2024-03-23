#include <iostream>
#include <bits/stdc++.h>

using namespace std;

long long threeWaySplit(int n, vector<int> arr)
{
  int l = 0;
  int h = n - 1;
  long long ans = 0;
  int lSum = arr[0];
  int rSum = arr[n - 1];

  while (l < h)
  {
    if (lSum == rSum)
    {
      ans = lSum;
      lSum += arr[l + 1];
      l++;
    }
    else if (lSum < rSum)
    {
      lSum += arr[l + 1];
      l++;
    }
    else if (lSum > rSum)
    {
      rSum += arr[h - 1];
      h--;
    }
  }

  return ans;
}

int main()
{
  return 0;
}