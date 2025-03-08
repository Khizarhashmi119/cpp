#include <iostream>

using namespace std;

int main()
{
  // cout << (5 & 3) << endl; // AND
  // cout << (5 | 3) << endl; // OR
  // cout << ~5 << endl;      // NOT
  // cout << ~3 << endl;      // NOT
  // cout << (5 ^ 6) << endl; // XOR
  // // In case of +ve nos. padding will be added by 0
  // // and in case of -ve nos. padding will depend on compiler, it can be 0 or 1.
  // cout << (3 << 2) << endl;   // Left shift (Equivalent to multiplication by 2). Result will be -ve in case of large nos.
  // cout << (100 >> 3) << endl; // Right shift (Equivalent to division by 2).

  int i = 0, n;

  cout << "Enter the value of n: ";
  cin >> n;

  for (;;)
  {
    if (i < n)
    {
      cout << i + 1 << " ";
    }
    else
    {
      break;
    }

    i++;
  }

  cout << endl;
  return 0;
}