#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int findUniqueNumber(vector<int> numbers)
{
  int ans = 0;

  for (int i = 0; i < numbers.size(); i++)
    ans = ans ^ numbers[i];

  return ans;
}

int main()
{
  vector<int> numbers = {
      1,
      3,
      4,
      4,
      3,
      7,
      7,
      12,
      1,
      5,
      5};

  cout << "Unique number:- " << findUniqueNumber(numbers) << endl;
  return 0;
}