#include <iostream>

using namespace std;

void pattern1(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cout << "*";
    }

    cout << endl;
  }
}

void pattern2(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < i + 1; j++)
    {
      cout << "*";
    }

    cout << endl;
  }
}

void pattern3(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < i + 1; j++)
    {
      cout << j + 1;
    }

    cout << endl;
  }
}

void pattern4(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < i + 1; j++)
    {
      cout << i + 1;
    }

    cout << endl;
  }
}

void pattern5(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n - i; j++)
    {
      cout << "*";
    }

    cout << endl;
  }
}

void pattern6(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n - i; j++)
    {
      cout << j + 1;
    }

    cout << endl;
  }
}

void pattern7(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n - i - 1; j++)
    {
      cout << " ";
    }

    for (int k = 0; k < 2 * i + 1; k++)
    {
      cout << "*";
    }

    cout << endl;
  }
}

void pattern8(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < i; j++)
    {
      cout << " ";
    }

    for (int k = 0; k < 2 * (n - i - 1) + 1; k++)
    {
      cout << "*";
    }

    cout << endl;
  }
}

void pattern9(int n)
{
  pattern7(n);
  pattern8(n);
}

void pattern10(int n)
{
  pattern2(n);
  pattern5(n - 1);
}

void pattern11(int n)
{
  bool bit1 = true;

  for (int i = 0; i < n; i++)
  {
    bool bit2 = bit1;

    for (int j = 0; j < i + 1; j++)
    {
      cout << bit2;
      bit2 = !bit2;
    }

    cout << endl;
    bit1 = !bit1;
  }
}

void pattern12(int n)
{
  for (int i = 0; i < n; i++)
  {

    for (int j = 0; j < i + 1; j++)
    {
      cout << j + 1;
    }

    for (int k = 0; k < 2 * n - (2 * (i + 1)); k++)
    {
      cout << " ";
    }

    for (int l = i; l >= 0; l--)
    {
      cout << l + 1;
    }

    cout << endl;
  }
}

void pattern13(int n)
{
  int count = 1;

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < i + 1; j++)
    {
      cout << count << " ";
      count++;
    }

    cout << endl;
  }
}

void pattern14(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < i + 1; j++)
    {
      cout << char(j + 'A');
      // cout << char(j + 'a');
    }

    cout << endl;
  }
}

void pattern15(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n - i; j++)
    {
      cout << char(j + 'A');
    }

    cout << endl;
  }
}

void pattern16(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < i + 1; j++)
    {
      cout << char(i + 'A');
    }

    cout << endl;
  }
}

void pattern17(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n - i - 1; j++)
    {
      cout << " ";
    }

    for (int k = 0; k < i + 1; k++)
    {
      cout << char(k + 'A');
    }

    for (int l = i; l > 0; l--)
    {
      cout << char(l + 'A' - 1);
    }

    cout << endl;
  }
}

void pattern18(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < i + 1; j++)
    {
      cout << char(n - i + j + 'A' - 1);
    }

    cout << endl;
  }
}

void pattern19(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n - i; j++)
    {
      cout << "*";
    }

    for (int j = 0; j < 2 * i; j++)
    {
      cout << " ";
    }

    for (int j = 0; j < n - i; j++)
    {
      cout << "*";
    }

    cout << endl;
  }

  n--;

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < i + 2; j++)
    {
      cout << "*";
    }

    for (int j = 0; j < 2 * (n - i - 1); j++)
    {
      cout << " ";
    }

    for (int j = 0; j < i + 2; j++)
    {
      cout << "*";
    }

    cout << endl;
  }
}

void pattern20(int n)
{

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < i + 1; j++)
    {
      cout << "*";
    }

    for (int j = 0; j < 2 * (n - i - 1); j++)
    {
      cout << " ";
    }

    for (int j = 0; j < i + 1; j++)
    {
      cout << "*";
    }

    cout << endl;
  }

  for (int i = 0; i < n - 1; i++)
  {
    for (int j = 0; j < n - i - 1; j++)
    {
      cout << "*";
    }

    for (int j = 0; j < 2 * (i + 1); j++)
    {
      cout << " ";
    }

    for (int j = 0; j < n - i - 1; j++)
    {
      cout << "*";
    }

    cout << endl;
  }
}

void pattern21(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (i == 0 or j == n - 1 or i == n - 1 or j == 0)
      {
        cout << "*";
      }
      else
      {
        cout << " ";
      }
    }

    cout << endl;
  }
}

void pattern22(int n)
{
  for (int i = 0; i < 2 * n - 1; i++)
  {
    for (int j = 0; j < 2 * n - 1; j++)
    {
      int top = i, left = j, bottom = 2 * n - 2 - i, right = 2 * n - 2 - j;
      cout << n - min(min(top, bottom), min(left, right));
    }

    cout << endl;
  }
}

// **************
// Extra patterns
// **************

void pattern23(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < i + 1; j++)
    {
      cout << i + j + 1;
    }

    cout << endl;
  }
}

void pattern24(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < i + 1; j++)
    {
      cout << i - j + 1;
    }

    cout << endl;
  }
}

void pattern25(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < i + 1; j++)
    {
      // cout << char('A' + n - i + j - 1);
      char ch = 'A' + n - i + j - 1;
      cout << ch;
    }

    cout << endl;
  }
}

void pattern26(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n - i - 1; j++)
    {
      cout << " ";
    }

    for (int j = 0; j < i + 1; j++)
    {
      cout << j + 1;
    }

    for (int j = 0; j < i; j++)
    {
      cout << i - j;
    }

    cout << endl;
  }
}

void pattern27(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n - i; j++)
    {
      cout << j + 1;
    }

    for (int j = 0; j < 2 * i; j++)
    {
      cout << "*";
    }

    for (int j = 0; j < n - i; j++)
    {
      cout << n - i - j;
    }

    cout << endl;
  }
}

int main()
{
  int n = 0;
  cout << "Enter the number of rows: ";
  cin >> n;
  pattern27(n);
  return 0;
}