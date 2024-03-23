#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
  int noOfRows = 6;

  for (int i = 0; i < noOfRows; i++)
  {
    for (int j = 0; j < i + 1; j++)
      cout << i + 1;

    cout << endl;
  }

  return 0;
}

// 1
// 22
// 333
// 4444
// 55555