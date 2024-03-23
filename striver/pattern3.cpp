#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
  int noOfRows = 5;

  for (int i = 0; i < noOfRows; i++)
  {
    for (int j = 0; j < i + 1; j++)
      cout << j + 1;

    cout << endl;
  }

  return 0;
}

// 1
// 12
// 123
// 1234
// 12345