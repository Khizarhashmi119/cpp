#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool isPossibleResult(vector<int> &stalls, int cows, int mid)
{
  int i = 0, j = 1;

  cows--;

  while (j < stalls.size())
  {
    if (cows)
    {
      if (stalls[j] - stalls[i] >= mid)
      {
        cows--;
        i = j;
      }

      j++;
    }
    else
    {
      break;
    }
  }

  return cows == 0;
}

int maxHeight(vector<int> &stalls, int cows)
{
  int start = 1, maxi = INT32_MIN, mini = INT32_MAX, result = -1;

  sort(stalls.begin(), stalls.end());

  for (auto stall : stalls)
  {
    maxi = max(maxi, stall);
    mini = min(mini, stall);
  }

  int end = maxi - mini;

  while (start <= end)
  {
    int mid = start + (end - start) / 2;

    if (isPossibleResult(stalls, cows, mid))
    {
      result = mid;
      start = mid + 1;
    }
    else
    {
      end = mid - 1;
    }
  }

  return result;
}

int main()
{
  vector<int> stalls = {1, 2, 3};
  int cows = 2;
  int result = maxHeight(stalls, cows);
  cout << "Result = " << result << endl;
  return 0;
}

// {1, 2, 3, 4, 6}