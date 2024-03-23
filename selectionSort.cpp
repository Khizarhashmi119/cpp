#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void selectionSort(vector<int> &numbers)
{
  for (int i = 0; i < numbers.size() - 1; i++)
  {
    int minIndex = i;

    for (int j = i; j < numbers.size(); j++)
      if (numbers[minIndex] > numbers[j])
        minIndex = j;

    swap(numbers[i], numbers[minIndex]);
  }
}

void printVectorOfInt(vector<int> &numbers)
{
  for (auto number : numbers)
  {
    cout << number << " ";
  }

  cout << endl;
}

int main()
{
  vector<int> numbers = {12, 20, 78, 2, 5, 0};
  printVectorOfInt(numbers);
  selectionSort(numbers);
  printVectorOfInt(numbers);
  return 0;
}