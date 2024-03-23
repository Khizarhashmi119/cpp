#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
  int noOfRows = 5;

  for (int i = 0; i < noOfRows; i++)
  {
    for (int j = 0; j < noOfRows - i; j++)
      cout << j + 1;

    cout << endl;
  }

  return 0;
}

// 12345
// 1234
// 123
// 12
// 1