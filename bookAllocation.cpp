#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool isPossibleResult(vector<int> &pages, int students, int mid)
{
  int totalPagesAllocateToCurrentStudent = 0;
  int i = 0, j = students;
  bool isPossibleResult = true;

  while (i < pages.size())
  {
    if (j)
    {
      totalPagesAllocateToCurrentStudent += pages[i];

      if (totalPagesAllocateToCurrentStudent < mid)
        i++;
      else if (totalPagesAllocateToCurrentStudent == mid)
      {
        j--;
        totalPagesAllocateToCurrentStudent = 0;
        i++;
      }
      else
      {
        j--;
        totalPagesAllocateToCurrentStudent = 0;
      }
    }
    else
    {
      isPossibleResult = false;
      break;
    }
  }

  return isPossibleResult;
}

int bookAllocate(vector<int> &pages, int students)
{
  int start = 0, end = 0, result;

  for (auto page : pages)
    end += page;

  while (start < end)
  {
    int mid = start + (end - start) / 2;

    if (isPossibleResult(pages, students, mid))
    {
      result = mid;
      end = mid - 1;
    }
    else
      start = mid + 1;
  }

  return result;
}

int main()
{
  vector<int> pages = {5, 5, 4, 1, 3, 1, 6, 5, 10, 2, 2};
  int students = 6, result;
  result = bookAllocate(pages, students);
  cout << "Result = " << result << endl;
  return 0;
}