#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int complementOfNumber(int number)
{
  // int ans = 0, i = 0;

  // while (number)
  // {
  //   int bit = 1;

  //   if (number % 2)
  //     bit = 0;

  //   ans = bit * pow(2, i) + ans;
  //   number /= 2;
  //   i++;
  // }

  // while (number)
  // {
  //   int bit = 1;

  //   if (number & 1)
  //     bit = 0;

  //   ans = bit * pow(2, i) + ans;
  //   number = number >> 1;
  //   i++;
  // }

  // return ans;

  if (number == 0)
    return 1;

  int mask = 0, temp = number;

  while (temp)
  {
    mask = (mask << 1) | 1;
    temp = temp >> 1;
  }

  return (~number) & mask;
}

int main()
{
  int number;
  cout << "Enter a number:-" << endl;
  cin >> number;
  cout << complementOfNumber(number) << endl;
  return 0;
}