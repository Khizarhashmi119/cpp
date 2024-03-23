#include <iostream>

using namespace std;

int main()
{
  int n = 10;

  int a1 = 0;
  int a2 = 1;

  for (int i = 1; i <= n; i++)
  {
    cout << "a" << i << " -> " << a1 << endl;
    int temp = a2;
    a2 = a1 + a2;
    a1 = temp;
  }
}