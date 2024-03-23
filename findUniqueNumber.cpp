#include <iostream>

using namespace std;

int findUniqueNumber(int numbers[], int size)
{
  int ans = 0;

  for (int i = 0; i < size; i++)
    ans = ans ^ numbers[i];

  return ans;
}

int main()
{
  int numbers[100] = {
      1,
      3,
      4,
      4,
      3,
      7,
      7,
      12,
      1,
      5,
      5};

  cout << "Unique number:- " << findUniqueNumber(numbers, 11) << endl;
  return 0;
}