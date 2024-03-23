#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool isPossibleResult(vector<int> &boards, int painters, int mid)
{
  int totalBoardsToCurrentPainter = 0;
  int i = 0, j = painters;
  bool isPossibleResult = true;

  while (i < boards.size())
  {
    if (j)
    {
      totalBoardsToCurrentPainter += boards[i];

      if (totalBoardsToCurrentPainter < mid)
      {
        i++;
      }
      else if (totalBoardsToCurrentPainter == mid)
      {
        j--;
        totalBoardsToCurrentPainter = 0;
        i++;
      }
      else
      {
        j--;
        totalBoardsToCurrentPainter = 0;
      }
    }
    else
    {
      if (boards[i] != 0)
      {
        isPossibleResult = false;
        break;
      }
      else
        i++;
    }
  }

  return isPossibleResult;
}

int findLargestMinDistance(vector<int> &boards, int painters)
{
  int start = 0, end = 0, result = 0;

  for (auto board : boards)
    end += board;

  while (start <= end)
  {
    int mid = start + (end - start) / 2;

    if (isPossibleResult(boards, painters, mid))
    {
      result = mid;
      end = mid - 1;
    }
    else
    {
      start = mid + 1;
    }
  }

  return result;
}

int main()
{
  vector<int> boards = {20, 17, 10, 5, 12, 4, 14, 5, 5, 5, 14, 17, 14, 12, 11, 1, 15, 5, 9, 0, 0};
  int painters = 4, result;
  result = findLargestMinDistance(boards, painters);
  cout << "Result = " << result << endl;
  return 0;
}