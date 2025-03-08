#include <iostream>

using namespace std;

int main()
{
  int num1 = 0, num2 = 1, n;
  cout << "Enter the value of n: ";
  cin >> n;

  for (int i = 1; i <= n; i++)
  {
    cout << num1 << " ";
    int num3 = num1 + num2;
    num1 = num2;
    num2 = num3;
  }

  cout << endl;
  return 0;
}