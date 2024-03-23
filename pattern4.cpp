#include <iostream>

using namespace std;

void printPattern(int noOfRowsAndColumns)
{
  // int count = 0;

  for (int i = 1; i <= noOfRowsAndColumns; i++)
  {
    for (int j = 1; j <= noOfRowsAndColumns; j++)
    {
      // cout << char(i + 'A' - 1);
      // cout << char(j + 'A' - 1);
      // cout << char(count + 'A');
      // count++;
      cout << char(i + j + 'A' - 2);
    }

    cout << endl;
  }
}

int main()
{
  int noOfRowsAndColumns;
  cout << "Enter no. of rows and columns:-" << endl;
  cin >> noOfRowsAndColumns;
  printPattern(noOfRowsAndColumns);
  return 0;
}