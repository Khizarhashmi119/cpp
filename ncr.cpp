#include <iostream>

using namespace std;

int factorial(int number)
{
  int ans = 1;

  for (int i = 1; i <= number; i++)
  {
    ans *= i;
  }

  return ans;
}

int ncr(int n, int r)
{
  return factorial(n) / (factorial(n - r) * factorial(r));
}

int main()
{
  int n, r, result;

  cout << "Enter the value of n: ";
  cin >> n;
  cout << "Enter the value of r: ";
  cin >> r;
  result = ncr(n, r);
  return 0;
}