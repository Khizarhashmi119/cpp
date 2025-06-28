#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int peakIndexInMountainArray(vector<int> numbers)
{
  // int i = 0, j = 1;

  // while (j < size)
  // {
  //   if (numbers[i] > numbers[j])
  //     return i;
  //   i++;
  //   j++;
  // }

  // int start = 0, end = numbers.size() - 1;
  int start = 1, end = numbers.size() - 2;

  while (start <= end)
  {
    int mid = start + (end - start) / 2;

    if (numbers[mid] > numbers[mid - 1] and numbers[mid] > numbers[mid + 1])
    {
      return mid;
    }
    else if (numbers[mid] < numbers[mid + 1])
    {
      start = mid + 1;
    }
    else if (numbers[mid - 1] > numbers[mid])
    {
      // end = mid;
      end = mid - 1;
    }
  }

  while (start <= end)
  {
    int mid = start + (end - start) / 2;

    if (numbers[mid] > numbers[mid + 1])
    {
      if (numbers[mid - 1] < numbers[mid])
      {
        return mid;
      }
      else
      {
        end = mid - 1;
      }
    }
    else
    {
      start = mid + 1;
    }
  }

  return -1;
}

int main()
{
  vector<int> numbers = {3, 5, 3, 2, 0};
  int result = peakIndexInMountainArray(numbers);
  cout << "Result:- " << result << endl;
  return 0;
}