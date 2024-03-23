// Lumberjack Mirko needs to chop down M metres of wood. It is an easy job for him since he has a nifty new woodcutting machine that can take down forests like wildfire. However, Mirko is only allowed to cut a single row of trees. Mirko‟s machine works as follows: Mirko sets a height parameter H (in metres), and the machine raises a giant sawblade to that height and cuts off all tree parts higher than H (of course, trees not higher than H meters remain intact). Mirko then takes the parts that were cut off. For example, if the tree row contains trees with heights of 20, 15, 10, and 17 metres, and Mirko raises his sawblade to 15 metres, the remaining tree heights after cutting will be 15, 15, 10, and 15 metres, respectively, while Mirko will take 5 metres off the first tree and 2 metres off the fourth tree (7 metres of wood in total). Mirko is ecologically minded, so he doesn‟t want to cut off more wood than necessary. That‟s why he wants to set his sawblade as high as possible. Help Mirko find the maximum integer height of the sawblade that still allows him to cut off at least M metres of wood.

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool isPossibleResult(vector<int> &trees, int m, int mid)
{
  int totalWoodCutOff = 0;

  for (auto tree : trees)
  {
    int woodCutOff = tree - mid;

    if (woodCutOff > 0)
      totalWoodCutOff += woodCutOff;
  }

  return totalWoodCutOff >= m;
}

int maxHeight(vector<int> &trees, int m)
{
  int start = 0, maxi = INT32_MIN, result = -1;

  for (auto stall : trees)
    maxi = max(maxi, stall);

  int end = maxi;

  while (start <= end)
  {
    int mid = start + (end - start) / 2;

    if (isPossibleResult(trees, m, mid))
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
  vector<int> trees = {4, 42, 40, 26, 46};
  int m = 20;
  int result = maxHeight(trees, m);
  cout << "Result = " << result << endl;
  return 0;
}

// {1, 2, 3, 4, 6}