#include <iostream>

using namespace std;

int binarySearch(int numbers[], int size, int number)
{
  int start = 0, end = size - 1;

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

int main()
{
  int numbers[100] = {-1, 0, 3, 5, 9, 12}, number = -2, size = 6;
  int index = binarySearch(numbers, size, number);
  cout << "Index = " << index << endl;
  return 0;
}