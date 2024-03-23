#include <iostream>

using namespace std;

int main()
{
  int number;
  cout << "Enter a number:-" << endl;
  cin >> number;

  int sum = 0, product = 1;

  while (number)
  {
    sum += number % 10;
    product *= number % 10;
    number /= 10;
  }

  cout << "Answer:- " << product - sum << endl;

  return 0;
}