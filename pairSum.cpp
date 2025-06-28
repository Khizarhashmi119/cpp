#include <iostream>
#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> pairSum(vector<int> &numbers, int target)
{
  vector<vector<int>> results = {};
  sort(numbers.begin(), numbers.end());

  for (int i = 0; i < numbers.size(); i++)
  {
    for (int j = i + 1; j < numbers.size(); j++)
    {
      int firstNumber = numbers[i], secondNumber = numbers[j], sum = firstNumber + secondNumber;

      if (sum == target)
      {
        results.push_back(vector<int>{firstNumber, secondNumber});
      }
    }
  }

  return results;
}

int main()
{
  vector<int> numbers = {2, -3, 3, 3, -2};
  int target = 0;

  for (auto number : numbers)
  {
    cout << number << " ";
  }

  cout << endl;
  vector<vector<int>> results = pairSum(numbers, target);

  for (auto numbers : results)
  {
    for (auto number : numbers)
    {
      cout << number << " ";
    }

    cout << endl;
  }
}