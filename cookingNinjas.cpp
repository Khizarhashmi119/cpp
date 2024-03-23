
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool checkIsMidPossibleResult(
    vector<int> &ranks,
    int m,
    int mid)
{
  for (auto rank : ranks)
  {
    int cookTimeOfCurrentCook = rank,
        i = 2;

    while (cookTimeOfCurrentCook <= mid)
    {
      cookTimeOfCurrentCook += rank * i;
      i++;
      m--;

      if (m == 0)
        return true;
    }
  }

  return false;
};

int minCookTime(vector<int> &ranks, int m)
{
  int start = 1,
      end = 0,
      result = -1, maxRank = INT32_MIN;

  for (auto rank : ranks)
    maxRank = max(maxRank, rank);

  for (int i = 1; i <= m; i++)
    end += maxRank * i;

  while (start <= end)
  {
    int mid = start + (end - start) / 2;
    bool isPossibleResult = checkIsMidPossibleResult(ranks, m, mid);

    if (isPossibleResult)
    {
      end = mid - 1;
      result = mid;
    }
    else
    {
      start = mid + 1;
    }
  }

  return result;
};

int main()
{
  vector<int> ranks = {1, 2, 3, 4};
  cout << "Result = " << minCookTime(ranks, 11) << endl;
  return 0;
}