#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int findPivotPosition(vector<int> &arr)
{
  int start = 0, end = arr.size() - 1;

  while (start <= end)
  {
    int mid = start + (end - start) / 2;

    if (arr[mid] >= arr[0] && arr[mid] > arr[arr.size() - 1])
      start = mid + 1;
    else if (mid - 1 != -1 && arr[mid - 1] > arr[mid])
      return mid;
    else if (arr[mid] < arr[0] && arr[mid] <= arr[arr.size() - 1])
      end = mid - 1;
    else
      return 0;
  }

  return -1;
}

int binarySearch(vector<int> arr, int start, int end, int k)
{
  while (start <= end)
  {
    int mid = start + (end - start) / 2;

    if (arr[mid] == k)
    {
      return mid;
    }
    else if (arr[mid] > k)
    {
      end = mid - 1;
    }
    else if (arr[mid] < k)
    {
      start = mid + 1;
    }
  }

  return -1;
}

int findPosition(vector<int> &arr, int n, int k)
{
  int pivotPosition = findPivotPosition(arr);
  cout << "pivotPosition = " << pivotPosition << endl;

  int start, end;

  if (k >= arr[0] && k > arr[n - 1])
  {
    start = 0;
    end = pivotPosition - 1;
  }
  else if (k < arr[0] && k <= arr[n - 1])
  {
    start = pivotPosition;
    end = n - 1;
  }
  else
  {
    start = pivotPosition;
    end = n - 1;
  }

  return binarySearch(arr, start, end, k);
}

int main()
{
  vector<int> arr = {2, 4, 8, 1};
  int result = findPosition(arr, arr.size(), 1);
  cout << "Result = " << result << endl;
  return 0;
}