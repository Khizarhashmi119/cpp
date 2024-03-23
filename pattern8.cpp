#include <iostream>

using namespace std;

void printPattern(int noOfRows)
{
  for (int i = 1; i <= noOfRows; i++)
  {
    // int count = 1;

    // for (int j = 1; j <= noOfRows - i + 1; j++)
    // {
    //   cout << count;
    //   count++;
    // }

    // for (int j = 1; j <= 2 * (i - 1); j++)
    // {
    //   cout << "*";
    // }

    // count--;

    // while (count)
    // {
    //   cout << count;

    //   count--;
    // }

    for (int j = 1; j <= noOfRows - i + 1; j++)
    {
      cout << j;
    }

    for (int j = 1; j <= 2 * (i - 1); j++)
    {
      cout << "*";
    }

    int count = noOfRows - i + 1;

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
  cout << "Enter no of rows:-" << endl;
  cin >> noOfRows;
  printPattern(noOfRows);
  return 0;
}
