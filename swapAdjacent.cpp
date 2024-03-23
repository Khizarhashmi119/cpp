#include <iostream>

using namespace std;

void printArray(int numbers[], int size)
{
  for (int i = 0; i < size; i++)
    cout << numbers[i] << " ";
  cout << endl;
}

int main()
{
  int numbers[] = {10, 34, 54, 1, 8, 45, 89}, i = 0, j = 1;

  cout << "Original:- ";
  printArray(numbers, 7);

  while (i < 7 && j < 7)
  {
    swap(numbers[i], numbers[j]);
    i += 2;
    j += 2;
  }

  cout << "Result:-   ";
  printArray(numbers, 7);

  return 0;
}