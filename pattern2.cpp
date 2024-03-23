#include <iostream>

using namespace std;

// void printPattern(int noOfRowsAndColumns);
void printPattern(int noOfRowsAndColumns)
{
  int count = 1;

  for (int i = 1; i <= noOfRowsAndColumns; i++)
  {

    for (int j = 1; j <= noOfRowsAndColumns; j++)
    {
      cout << count;
      count++;
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
