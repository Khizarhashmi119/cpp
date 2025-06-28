#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int binarySearch(vector<int> numbers, int number)
{
  int start = 0, end = numbers.size() - 1;

  while (start <= end)
  {
    int mid = start + (end - start) / 2;

    if (numbers[mid] == number)
      return mid;
    else if (numbers[mid] > number)
      end = mid - 1;
    else if (numbers[mid] < number)
      start = mid + 1;
  }

  return -1;
}

int search(vector<int> numbers, int start, int end, int number)
{
  if (start > end)
    return -1;

  int mid = start + (end - start) / 2;

  if (numbers[mid] == number)
    return mid;
  else if (numbers[mid] > number)
    return search(numbers, start, mid - 1, number);
  else
    return search(numbers, mid + 1, end, number);
}

int binarySearchUsingRecursion(vector<int> numbers, int number)
{
  return search(numbers, 0, numbers.size() - 1, number);
}

int main()
{
  vector<int> numbers = {-1, 0, 3, 5, 9, 12};
  int number = 9;
  int index = binarySearchUsingRecursion(numbers, number);
  cout << "Index = " << index << endl;
  return 0;
}