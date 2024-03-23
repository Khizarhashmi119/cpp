#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void printPair(pair<int, int> pair, string message)
{
  cout << message << pair.first << ", " << pair.second << endl;
}

int findFirstOrLastPosition(int arr[], int size, int number, bool isFirstPosition)
{
  int start = 0, end = size - 1, index = -1;

  while (start <= end)
  {
    int mid = start + (end - start) / 2;

    if (arr[mid] == number)
    {
      if (isFirstPosition)
        end = mid - 1;
      else
        start = mid + 1;

      index = mid;
    }
    else if (arr[mid] > number)
    {
      end = mid - 1;
    }
    else if (arr[mid] < number)
    {
      start = mid + 1;
    }
  }

  return index;
}

pair<int, int> findFirstAndLastPosition(int arr[], int size, int number)
{
  int start = 0, end = size - 1, index = -1;
  pair<int, int> result;

  result.first = findFirstOrLastPosition(arr, size, number, true);
  result.second = findFirstOrLastPosition(arr, size, number, false);
  return result;
}

int main()
{
  int arr[100] = {0, 5, 5, 6, 6, 6};

  pair<int, int> result = findFirstAndLastPosition(arr, 6, 5);
  printPair(result, "Result:- ");
  cout << "Total no. of occurrence:- " << result.second - result.first + 1 << endl;
  return 0;
}