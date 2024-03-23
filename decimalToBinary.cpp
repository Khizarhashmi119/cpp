#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int decimalToBinary(int number)
{
  int ans = 0, i = 0;

  // while (number)
  // {
  //   int bit = number % 2;
  //   ans = bit * pow(10, i) + ans;
  //   number /= 2;
  //   i++;
  // }

  while (number)
  {
    int bit = number & 1;
    ans = bit * pow(10, i) + ans;
    number = number >> 1;
    i++;
  }

  return ans;
}

int main()
{
  int number;
  cout << "Enter a number:-" << endl;
  cin >> number;

  cout << "Binary representation:-" << endl;
  cout << decimalToBinary(number) << endl;
  return 0;
}