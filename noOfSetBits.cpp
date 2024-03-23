#include <iostream>

using namespace std;

int main()
{
  uint32_t number;

  cout << "Enter a number having only (0 or 1):-" << endl;
  cin >> number;

  int count = 0;

  cout << "number => " << number << endl;

  while (number)
  {

    if (number & 1)
      count++;

    number = number >> 1;
  }

  cout << "Answer:- " << count << endl;

  return 0;
}