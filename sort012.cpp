#include <iostream>

using namespace std;

void printArray(int *arr, int n)
{
  for (int i = 0; i < n; i++)
    cout << *(arr + i) << " ";
  cout << endl;
}

void sort012(int *arr, int n)
{
  int zeroes = 0,
      ones = 0,
      twos = 0;

  for (int i = 0; i < n; i++)
  {
    if (*(arr + i) == 0)
      zeroes++;
    else if (*(arr + i) == 1)
      ones++;
    else if (*(arr + i) == 2)
      twos++;
  }

  for (int i = 0; i < zeroes; i++)
  {
    *(arr + i) = 0;
  }

  for (int i = zeroes, j = ones; j; j--, i++)
  {
    *(arr + i) = 1;
  }

  for (int i = zeroes + ones, j = twos; j; j--, i++)
  {
    *(arr + i) = 2;
  }
}

// void sort012(int arr[], int n)
// {
//   int zeroes = 0, ones = 0, twos = 0;

//   for (int i = 0; i < n; i++)
//   {
//     if (arr[i] == 0)
//       zeroes++;
//     else if (arr[i] == 1)
//       ones++;
//     else if (arr[i] == 2)
//       twos++;
//   }

//   for (int i = zeroes, j = 0; i > 0; i--, j++)
//     arr[j] = 0;

//   for (int i = ones, j = zeroes; i > 0; i--, j++)
//     arr[j] = 1;

//   for (int i = twos, j = zeroes + ones; i > 0; i--, j++)
//     arr[j] = 2;
// }

int main()
{
  int arr[100] = {0, 1, 2, 1, 2, 1, 2, 0};
  sort012(arr, 8);
  printArray(arr, 8);
  return 0;
}