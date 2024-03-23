#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void printVectorOfInt(int numbers[], int length)
{
  for (int i = 0; i < length; i++)
    cout << numbers[i] << " ";

  cout << endl;
}

void merge(int numbers[], int startOfFirstArray, int endOfFirstArray, int startOfSecondArray, int endOfSecondArray, int n)
{
  int i = startOfFirstArray, j = startOfSecondArray, results[100] = {0}, k = -1;

  while (i <= endOfFirstArray && j <= endOfSecondArray)
  {
    if (numbers[i] < numbers[j])
    {
      k++;
      results[k] = numbers[i];
      i++;
    }
    else if (numbers[i] > numbers[j])
    {
      k++;
      results[k] = numbers[j];
      j++;
    }
    else if (numbers[i] == numbers[j])
    {
      k++;
      results[k] = numbers[i];
      i++;
      k++;
      results[k] = numbers[j];
      j++;
    }
  }

  while (startOfFirstArray <= endOfFirstArray)
  {
    k++;
    results[k] = numbers[i];
    i++;
  }

  while (startOfSecondArray <= endOfSecondArray)
  {
    k++;
    results[k] = numbers[j];
    j++;
  }

  for (int i = 0; i < n; i++)
    numbers[i] = results[i];
}

void mergeSort(int numbers[], int start, int end, int n)
{
  int mid = start + (end - start) / 2;
  mergeSort(numbers, start, mid, n);
  mergeSort(numbers, mid + 1, end, n);
  merge(numbers, start, mid, mid + 1, end, n);
}

int main()
{
  int numbers[100] = {5, 2, 3, 1};
  int length = 4;
  printVectorOfInt(numbers, length);
  mergeSort(numbers, 0, length - 1, length);
  printVectorOfInt(numbers, length);
  return 0;
}