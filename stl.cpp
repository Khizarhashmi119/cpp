#include <iostream>
#include <array>
#include <vector>
#include <deque>
#include <list>
#include <stack>
#include <queue>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>

using namespace std;

int main()
{
  //* Array
  array<int, 4> arrOfInt = {1, 2, 3};

  // cout << arrOfInt.size() << endl;
  // cout << arrOfInt.at(0) << endl;
  // cout << arrOfInt.begin() << endl;
  // cout << arrOfInt.end() << endl;

  // for (int i = 0; i < arrOfInt.size(); i++)
  //   cout << arrOfInt[i] << " ";
  // cout << endl;

  // auto itr = arrOfInt.begin();
  // while (itr != arrOfInt.end())
  // {
  //   cout << *itr << " ";
  //   itr++;
  // }
  // cout << endl;

  // array<char, 4> arrOfChar = {'1', 'a', 'A', '2'};
  // array<char, 4> arrOfChar = "1aA2"; //!  Error

  // cout << arrOfChar.size() << endl;
  // cout << arrOfChar.at(1) << endl;
  // cout << arrOfChar.empty() << endl;
  // cout << arrOfChar.front() << endl;
  // cout << arrOfChar.back() << endl;
  // cout << arrOfChar.begin() << endl;
  // cout << arrOfChar.end() << endl;

  // for (int i = 0; i < arrOfChar.size(); i++)
  //   cout << arrOfChar[i] << " ";
  // cout << endl;

  // char greeting[] = "Hello";
  // cout << greeting << endl;

  //* Vector
  vector<int> vectorOfInt = {12, 34};

  // cout << vectorOfInt.at(0) << endl;
  // cout << vectorOfInt[0] << endl;
  // cout << "Capacity = " << vectorOfInt.capacity() << endl;
  // cout << "Size = " << vectorOfInt.size() << endl;
  // vectorOfInt.push_back(10);
  // cout << "Capacity = " << vectorOfInt.capacity() << endl;
  // cout << "Size = " << vectorOfInt.size() << endl;
  // vectorOfInt.push_back(20);
  // cout << "Capacity = " << vectorOfInt.capacity() << endl;
  // cout << "Size = " << vectorOfInt.size() << endl;
  // vectorOfInt.push_back(30);
  // cout << "Capacity = " << vectorOfInt.capacity() << endl;
  // cout << "Size = " << vectorOfInt.size() << endl;
  // for (auto item : vectorOfInt)
  //   cout << item << " ";
  // cout << endl;
  // cout << vectorOfInt.empty() << endl;
  // vectorOfInt.erase(vectorOfInt.begin() + 1);
  // for (auto item : vectorOfInt)
  //   cout << item << " ";
  // cout << endl;
  // vectorOfInt.clear();
  // cout << "Capacity = " << vectorOfInt.capacity() << endl;
  // cout << "Size = " << vectorOfInt.size() << endl;
  // cout << vectorOfInt.empty() << endl;

  vector<int> arrOfNegative1(5, -1);

  // cout << "arrOfNegative1" << endl;
  // for (auto item : arrOfNegative1)
  //   cout << item << " ";
  // cout << endl;

  vector<int> anotherArrOfNegative1(arrOfNegative1);

  // cout << "anotherArrOfNegative1" << endl;
  // for (auto item : anotherArrOfNegative1)
  //   cout << item << " ";
  // cout << endl;
  // cout << arrOfNegative1.max_size() << endl;

  //* Dequeue
  deque<int> dqOfInt = {12, 34};

  // dqOfInt.push_back(1);
  // dqOfInt.push_front(2);
  // cout << dqOfInt.at(0) << endl;
  // cout << dqOfInt[0] << endl;
  // cout << dqOfInt.front() << endl;
  // cout << dqOfInt.back() << endl;
  // for (auto item : dqOfInt)
  //   cout << item << " ";
  // cout << endl;
  // dqOfInt.erase(dqOfInt.begin(), dqOfInt.begin() + 2);
  // for (auto item : dqOfInt)
  //   cout << item << " ";
  // cout << endl;

  deque<int> dqOfNegative2(10, -2);

  // for (auto item : dqOfNegative2)
  //   cout << item << " ";
  // cout << endl;

  deque<int> anotherDqOfNegative2(dqOfNegative2);

  // for (auto item : anotherDqOfNegative2)
  //   cout << item << " ";
  // cout << endl;

  //* Linked List
  list<int> listOfInt = {12, 34, 23};
  // list<int> listOfInt{12, 34, 23};

  // listOfInt.push_back(10);
  // listOfInt.push_back(20);
  // listOfInt.push_back(30);
  // cout << listOfInt.front() << endl;
  // cout << listOfInt.back() << endl;
  // auto itr = listOfInt.begin();
  // while (itr != listOfInt.end())
  // {
  //   cout << *itr << " ";
  //   itr++;
  // }
  // cout << endl;

  list<int> listOfNegative1(3, -1);

  // for (auto item : listOfNegative1)
  //   cout << item << " ";
  // cout << endl;

  list<int> anotherListOfNegative1(listOfNegative1);

  // for (auto item : listOfNegative1)
  //   cout << item << " ";
  // cout << endl;

  //* Stack
  stack<int> stackOfInt;

  // stackOfInt.push(20);
  // stackOfInt.push(30);
  // stackOfInt.push(40);
  // cout << stackOfInt.size() << endl;
  // stackOfInt.pop();
  // cout << stackOfInt.size() << endl;
  // cout << stackOfInt.top() << endl;
  // cout << stackOfInt.empty() << endl;

  stack<int> anotherStackOfInt(stackOfInt);

  // cout << "Size = " << anotherStackOfInt.size() << endl;

  queue<string> queueOfString;

  // queueOfString.push("Mohammad");
  // queueOfString.push("Isa");
  // queueOfString.push("Ismael");
  // cout << queueOfString.front() << endl;
  // queueOfString.pop();
  // cout << queueOfString.front() << endl;

  queue<string> anotherQueueOfString(queueOfString);

  // cout << anotherQueueOfString.size() << endl;

  priority_queue<int> maxPqOfInt;

  // maxPqOfInt.push(30);
  // maxPqOfInt.push(10);
  // maxPqOfInt.push(20);
  // cout << maxPqOfInt.top() << endl;
  // maxPqOfInt.pop();
  // cout << maxPqOfInt.top() << endl;
  // int sizeOfMaxPqOfInt = maxPqOfInt.size();
  // for (int i = 0; i < sizeOfMaxPqOfInt; i++)
  // {
  //   cout << maxPqOfInt.top() << " ";
  //   maxPqOfInt.pop();
  // }
  // cout << endl;

  priority_queue<int, vector<int>, greater<int>> minPqOfInt;

  // minPqOfInt.push(30);
  // minPqOfInt.push(40);
  // minPqOfInt.push(2),
  // minPqOfInt.push(-9);
  // int sizeOfMinPqOfInt = minPqOfInt.size();
  // for (int i = 0; i < sizeOfMinPqOfInt; i++)
  // {
  //   cout << minPqOfInt.top() << " ";
  //   minPqOfInt.pop();
  // }
  // cout << endl;

  set<int> setOfInt;

  // setOfInt.insert(40);
  // setOfInt.insert(30);
  // setOfInt.insert(30);
  // setOfInt.insert(20);
  // setOfInt.insert(20);
  // setOfInt.insert(20);
  // for (auto item : setOfInt)
  //   cout << item << " ";
  // cout << endl;

  // cout << (setOfInt.find(10) != setOfInt.end()) << endl;

  // auto itr = setOfInt.begin();
  // while (itr != setOfInt.end())
  // {
  //   cout << *itr << " ";
  //   itr++;
  // }
  // cout << endl;

  // auto itr = setOfInt.rbegin();
  // while (itr != setOfInt.rend())
  // {
  //   cout << *itr << " ";
  //   itr++;
  // }
  // cout << endl;

  // cout << setOfInt.count(10) << endl;

  unordered_set<int> uSetOfInt = {12, 34, 45, 12};

  // cout << uSetOfInt.size() << endl;
  // cout << uSetOfInt.count(12) << endl;

  // for (auto item : uSetOfInt)
  //   cout << item << " ";
  // cout << endl;

  map<string, int> peopleAge;

  // peopleAge.insert(make_pair("Muhammad", 25));
  // peopleAge.insert(make_pair("Isa", 23));
  // peopleAge.insert(make_pair("Ismael", 22));

  // cout << peopleAge.at("Isa") << endl;
  // cout << peopleAge["Isa"] << endl;
  // cout << peopleAge.at("Ahmed") << endl; //! Throw error
  // cout << peopleAge["Ahmed"] << endl;  //! Will not error
  // cout << peopleAge.count("Isa") << endl;

  // for (auto item : peopleAge)
  //   cout << item.first << " => " << item.second << " ";
  // cout << endl;

  unordered_map<string, int> anotherPeopleAge;

  anotherPeopleAge.insert(make_pair("Muhammad", 25));
  anotherPeopleAge.insert(make_pair("Isa", 23));
  anotherPeopleAge.insert(make_pair("Ismael", 22));

  cout << anotherPeopleAge.at("Isa") << endl;
  cout << anotherPeopleAge["Isa"] << endl;
  cout << anotherPeopleAge.count("Isa") << endl;

  for (auto item : anotherPeopleAge)
    cout << item.first << " => " << item.second << " ";
  cout << endl;

  unordered_map<string, int> studentSMarks(anotherPeopleAge);

  studentSMarks["Hamza"] = 26;
  studentSMarks.insert({"Ali", 123});

  for (auto item : studentSMarks)
    cout << item.first << " => " << item.second << " ";
  cout << endl;

  pair<string, int> student1 = {"Omar", 127};
  pair<string, int> student2("Osman", 123);

  cout << student1.first << " => " << student1.second << endl;

  return 0;
}