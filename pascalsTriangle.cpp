#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void printVectorOfVectorOdInt(vector<vector<int>> v)
{
  for (auto i : v)
  {
    for (auto j : i)
    {
      cout << j << " ";
    }

    cout << endl;
  }
}

vector<vector<int>> generate(int numRows)
{
  vector<vector<int>> result;

  for (int i = 1; i <= numRows; i++)
  {
    vector<int> row;

    for (int j = 1; j <= i; j++)
    {
      if (j == 1 || j == i)
        row.push_back(1);
      else
        row.push_back(result[i - 2][j - 1] + result[i - 2][j - 2]);
    }

    result.push_back(row);
  }

  return result;
}

int main()
{
  vector<vector<int>> result = generate(5);
  printVectorOfVectorOdInt(result);
  return 0;
}