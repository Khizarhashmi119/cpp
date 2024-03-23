#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void insertionSort(vector<int> &numbers)
{
  for (int i = 1; i < numbers.size(); i++)
  {
    int number = numbers[i];

    for (int j = i - 1; j >= -1; j--)
    {
      if (j != -1 && number < numbers[j])
      {
        numbers[j + 1] = numbers[j];
      }
      else
      {
        numbers[j + 1] = number;
        break;
      }
    }
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
  insertionSort(numbers);
  printVectorOfInt(numbers);
  return 0;
}