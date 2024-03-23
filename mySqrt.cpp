#include <iostream>

using namespace std;

// int mySqrt(int number)
// {
//   for (int i = 2; i <= number; i++)
//   {
//     if (i == number / i)
//     {
//       return i;
//     }
//     else if (i > number / i)
//     {
//       return i - 1;
//     }
//   }

//   return number;
// }

int mySqrt(int number)
{
  int start = 1, end = number, ans;

  while (start <= end)
  {
    int mid = start + (end - start) / 2;

    if (mid == number / mid)
      return mid;
    else if (mid > number / mid)
      end = mid - 1;
    else if (mid < number / mid)
    {
      ans = mid;
      start = mid + 1;
    }
  }

  return ans;
}

int main()
{
  int number = 5;
  cout << mySqrt(number) << endl;
  return 0;
}