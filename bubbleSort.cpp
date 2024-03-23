#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void bubbleSort(vector<int> &numbers)
{
  for (int i = 0; i < numbers.size() - 1; i++)
  {
    bool isSwappingDoneAtLeastOneTime = false;

    for (int j = 0; j < numbers.size() - i - 1; j++)
    {
      if (numbers[j] > numbers[j + 1])
      {
        isSwappingDoneAtLeastOneTime = true;
        swap(numbers[j], numbers[j + 1]);
      }
    }

    if (!isSwappingDoneAtLeastOneTime)
      break;
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
  vector<int> numbers = {2, 0, 4, 6, 8};
  printVectorOfInt(numbers);
  bubbleSort(numbers);
  printVectorOfInt(numbers);
  return 0;
}