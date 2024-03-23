#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void printVectorOfVectorOfString(vector<vector<string>> v)
{
  cout << "[";

  for (vector<string> i : v)
  {
    cout << "[";

    for (string j : i)
    {
      cout << j << (j == i[i.size() - 1] ? "" : ", ");
    }

    cout << "]" << (i == v[v.size() - 1] ? "" : ", ");
  }

  cout << "]" << endl;
}

vector<vector<string>> groupAnagrams(vector<string> &strs)
{
  vector<vector<string>> results;
  unordered_map<string, vector<string>> map;

  for (string str : strs)
  {
    int countArray[26] = {0};

    for (auto character : str)
      countArray[int(character) - 97] += 1;

    string key = "";

    for (int i = 0; i < 26; i++)
      key.append(to_string(countArray[i]).append("#"));

    map[key].push_back(str);
  }

  for (auto val : map)
    results.push_back(val.second);

  return results;
}

int main()
{
  vector<string> inputs =
      // {"eat", "tea", "tan", "ate", "nat", "bat"}
      {"bdddddddddd", "bbbbbbbbbbc"};
  vector<vector<string>> results = groupAnagrams(inputs);
  printVectorOfVectorOfString(results);
  return 0;
}