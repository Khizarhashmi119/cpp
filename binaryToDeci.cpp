#include <iostream>
#include <math.h>

using namespace std;

int main()
{
  string binaryString;
  int number = 0;
  cout << "Enter binary string (0 or 1): ";
  cin >> binaryString;

  cout << "Entered binary string: " << binaryString << endl;

  // for (int i = binaryString.length() - 1, j = 0; i >= 0; i--, j++)
  // {
  //   int bit = binaryString[i] - '0';
  //   number += bit * pow(2, j);
  // }

  for (int i = 0; i < binaryString.length(); i++)
  {
    int bit = binaryString[i] - '0';
    number += bit * pow(2, binaryString.length() - i - 1);
  }

  cout << "Number: " << number << endl;
  return 0;
}