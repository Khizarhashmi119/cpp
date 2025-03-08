#include <iostream>
#include <climits>

using namespace std;

void printArray(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }

  cout << endl;
}

void reverseArray(int arr[], int size)
{
  for (int i = 0, j = size - 1; i < j; i++, j--)
  {
    // int temp = arr[i];
    // arr[i] = arr[j];
    // arr[j] = temp;
    swap(arr[i], arr[j]);
  }
}

int main()
{
  int numbers[10] = {1, 2, 3, 4, 39, 30, -1, 67, 1002, -23};

  for (int i = 0; i < 10; i++)
  {
    cout << numbers[i] << " ";
  }

  cout << endl;
  cout << numbers << endl;
  printArray(numbers, 10);

  int max_number = INT_MIN, min_number = INT_MAX;

  for (int i = 0; i < 10; i++)
  {
    // if (numbers[i] > max_number)
    // {
    //   max_number = numbers[i];
    // }

    // if (numbers[i] < min_number)
    // {
    //   min_number = numbers[i];
    // }

    max_number = max(numbers[i], max_number);
    min_number = min(numbers[i], min_number);
  }

  cout << "max_number: " << max_number << endl;
  cout << "min_number: " << min_number << endl;

  reverseArray(numbers, 10);
  printArray(numbers, 10);

  char characters[10] = {'a', 'b', 'c'};

  for (int i = 0; i < 10; i++)
  {
    cout << characters[i] << " ";
  }

  cout << endl;
  cout << characters << endl;

  char myName[] = "Khizar";

  for (int i = 0; myName[i] != '\0'; i++)
  {
    cout << myName[i];
  }

  cout << endl;
  cout << myName << endl;

  int size;
  cin >> size;
  // int ages[size];  BAD PRACTICE
  int ages[100];

  for (int i = 0; i < size; i++)
  {
    cin >> ages[i];
  }

  printArray(ages, size);
  cout << endl;
  return 0;
}