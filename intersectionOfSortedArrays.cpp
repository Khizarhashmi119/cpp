#include <iostream>

using namespace std;

void intersectionOfArrays(int arr1[], int m, int arr2[], int n)
{
  int i = 0, j = 0, result[100], k = 0;

  while (i < m && j < n)
  {
    if (arr1[i] < arr2[j])
    {
      i++;
    }
    else if (arr1[i] > arr2[j])
    {
      j++;
    }
    else if (arr1[i] == arr2[j])
    {
      result[k] = arr1[i];
      k++;
      i++;
      j++;
    }
  }

  for (int i = 0; i < k; i++)
    cout << result[i] << " ";
  cout << endl;

  if (k == 0)
    cout << -1 << endl;
}

int main()
{
  int arr1[100] = {1, 2, 2, 2, 3, 4}, arr2[100] = {2, 2, 3, 3};

  intersectionOfArrays(arr1, 6, arr2, 4);
  return 0;
}