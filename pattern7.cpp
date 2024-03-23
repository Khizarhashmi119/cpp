#include <iostream>

using namespace std;

void printPattern(int noOfRows)
{
  for (int i = 1; i <= noOfRows; i++)
  {
    int noOfSpaces = noOfRows - i;
    int count = 1;

    for (int j = 1; j <= noOfSpaces; j++)
    {
      cout << " ";
    }

    // int currentColumn = noOfSpaces + 1;

    // while (currentColumn <= 2 * noOfRows - 1)
    // {
    //   if (count > 0)
    //     cout << count;

    //   if (currentColumn < noOfRows)
    //     count++;
    //   else
    //     count--;

    //   currentColumn++;
    // }

    for (int j = 1; j <= i; j++)
    {
      cout << count;
      count++;
    }

    count -= 2;

    while (count)
    {
      cout << count;
      count--;
    }

    cout << endl;
  }
}

int main()
{
  int noOfRows;
  cout << "Enter the no. of rows:-" << endl;
  cin >> noOfRows;
  printPattern(noOfRows);
  return 0;
}