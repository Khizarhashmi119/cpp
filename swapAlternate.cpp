#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
  vector<int> numbers = {10, 34, 56, 124, 46, 56, 67};

  for (int i = 0; i < numbers.size(); i++)
  {
    cout << numbers[i] << " ";
  }

  cout << endl;

  for (int i = 0, j = 1; i < numbers.size() && j < numbers.size(); i += 2, j += 2)
  {
    swap(numbers[i], numbers[j]);
  }

  for (int i = 0; i < numbers.size(); i++)
  {
    cout << numbers[i] << " ";
  }

  cout << endl;
  return 0;
}