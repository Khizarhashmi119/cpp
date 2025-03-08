#include <iostream>
#include <math.h>

using namespace std;

int main()
{
  int number = 0, result = 0;
  cout << "Enter a number: ";
  cin >> number;

  // for (int i = number, j = 0; i != 0; i = i / 2, j++)
  // {
  //   int remainder = i % 2;
  //   result += remainder * pow(10, j);
  // }

  for (int i = number, j = 0; i != 0; i = i >> 1, j++)
  {
    int bit = i & 1;
    result += bit * pow(10, j);
  }

  cout << "Result: " << result << endl;
  return 0;
}

// 1011

// n = 0, i = 0
// n = n + bit * 10 ^ i
// n = 0 + 1 * 10 ^ 0 -> n = 0 + 1 * 1 -> n  = 1
// n = 1 + 1 * 10 ^ 1 -> n = 1 + 1 * 10 -> n = 1 + 10 -> n = 11
// n = 11 + 0 * 10 ^ 2 -> n = 11 + 0 -> n = 11
// n = 11 + 1 * 10 ^ 3 -> n = 11 + 1000 -> n = 1011

// For reverse
// n = n * 10 + bit