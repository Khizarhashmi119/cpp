#include <iostream>

using namespace std;

void printPattern(int noOfRowsAndColumns)
{
  int count = 1;

  for (int i = 1; i <= noOfRowsAndColumns; i++)
  {
    for (int j = 1; j <= noOfRowsAndColumns - i; j++)
    {
      cout << " ";
    }

    for (int j = 1; j <= i; j++)
    {
      // cout << "*";
      // cout << i;
      // cout << j;
      cout << count++;
    }

    // for (int j = 1; j <= i - 1; j++)
    // {
    //   cout << " ";
    // }

    // for (int j = 1; j <= noOfRowsAndColumns - i + 1; j++)
    // {
    //   // cout << "*";
    //   // cout << i;
    //   cout << j;
    // }

    cout << endl;
  }
}

int main()
{
  int noOfRowsAndColumns;
  cout << "Enter no. of rows:-" << endl;
  cin >> noOfRowsAndColumns;
  printPattern(noOfRowsAndColumns);
  return 0;
}