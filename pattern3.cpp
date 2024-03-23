#include <iostream>

using namespace std;

void printPattern(int noOfRows)
{
  // int count = 1;

  for (int i = 1; i <= noOfRows; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      // cout << "*";
      // cout << i;
      // cout << count++;
      // cout << j + i - 1;
      cout << i - j + 1;
    }

    cout << endl;
  }
}

int main()
{
  int noOfRows;
  cout << "Enter the no of rows:-" << endl;
  cin >> noOfRows;
  printPattern(noOfRows);
  return 0;
}