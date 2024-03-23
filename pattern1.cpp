#include <iostream>

using namespace std;

// void printPattern(int noOfRowsAndColumns);
void printPattern(int noOfRowsAndColumns)
{
  for (int i = 1; i <= noOfRowsAndColumns; i++)
  {
    for (int j = 1; j <= noOfRowsAndColumns; j++)
    {
      // cout << "*";
      // cout << i;
      cout << j;
    }

    cout << endl;
  }
}

int main()
{
  int noOfRowsAndColumns;

  cout << "Enter the no. of rows and columns:-" << endl;
  cin >> noOfRowsAndColumns;
  printPattern(noOfRowsAndColumns);

  return 0;
}
