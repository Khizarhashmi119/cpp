#include <iostream>

using namespace std;

bool linearSearch(int numbers[], int size, int number)
{
  for (int i = 0; i < size; i++)
  {
    if (numbers[i] == number)
      return true;
  }

  return false;
}

int main()
{
  int size, numbers[100], number;

  cout << "Enter the no of elements:" << endl;
  cin >> size;

  cout << "Enter " << size << " elements:-" << endl;
  for (int i = 0; i < size; i++)
    cin >> numbers[i];

  cout << "Enter a number:-" << endl;
  cin >> number;

  if (linearSearch(numbers, size, number))
    cout << "Number is present" << endl;
  else
    cout << "Number is not present" << endl;

  return 0;
}