#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int peakIndexInMountainArray(int arr[], int size)
{
  // int i = 0, j = 1;
  int start = 0, end = size - 1;

  // while (j < size)
  // {
  //   if (arr[i] > arr[j])
  //     return i;
  //   i++;
  //   j++;
  // }

  while (start <= end)
  {
    int mid = start + (end - start) / 2;

    if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1])
      return mid;
    else if (arr[mid] > arr[mid + 1])
      end = mid;
    else if (arr[mid] < arr[mid + 1])
      start = mid + 1;
  }

  return -1;
}

int main()
{
  // vector<int> arr = {3, 5, 3, 2, 0};
  int arr[100] = {3, 5, 3, 2, 0};
  int result = peakIndexInMountainArray(arr, 5);
  cout << "Result:- " << result << endl;
  return 0;
}