#include <iostream>

using namespace std;

void printPattern(int noOfRows)
{
  // int count = 0;

  for (int i = 1; i <= noOfRows; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      // cout << char(count + 'A');
      // count++;
      // cout << char(i + j + 'A' - 2);
      cout << char((noOfRows - i + 1) + j + 'A' - 2);
      // cout << char((noOfRows - i + 1) + (noOfRows - j + 1) + 'A' - 2);
    }

    cout << endl;
  }
}

int main()
{
  int noOfRows;
  cout << "Enter no. of rows:-" << endl;
  cin >> noOfRows;
  printPattern(noOfRows);
  return 0;
}