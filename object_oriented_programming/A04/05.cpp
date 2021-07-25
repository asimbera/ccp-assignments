// 5. Write a program to overload binary + , - , != operators for binary
// numbers

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Binary
{
private:
  string data;

public:
  void read()
  {
    cin >> data;
  }
  void display()
  {
    cout << data << endl;
  }
  Binary operator+(Binary const &obj)
  {
    Binary res;
    res.data = bitset<8>(stoi(data, nullptr, 2) + stoi(obj.data, nullptr, 2)).to_string();
    return res;
  }
  Binary operator-(Binary const &obj)
  {
    Binary res;
    res.data = bitset<8>(stoi(data, nullptr, 2) - stoi(obj.data, nullptr, 2)).to_string();
    return res;
  }
  bool operator!=(Binary const &obj)
  {
    return strcmp(data.c_str(), obj.data.c_str()) == 0 ? false : true;
  }
};

int main()
{
  Binary a, b;
  a.read();
  b.read();
  cout << "a + b = ";
  (a + b).display();
  cout << "a - b = ";
  (a - b).display();
  cout << "a == b = " << (a != b);
  return 0;
}
