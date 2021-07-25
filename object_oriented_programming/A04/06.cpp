// Write a program to overload comparison operators (>, <=, ==) for two
// objects of same type.

#include <iostream>
using namespace std;

class Number
{
private:
  int val;

public:
  Number() {}
  Number(int n) { val = n; }

  void getinput()
  {
    cin >> val;
  }
  void display()
  {
    cout << val;
  }

  bool operator<=(Number const &obj)
  {
    return val <= obj.val;
  }
  bool operator>=(Number const &obj)
  {
    return val >= obj.val;
  }
  bool operator!=(Number const &obj)
  {
    return val != obj.val;
  }
  bool operator==(Number const &obj)
  {
    return val == obj.val;
  }
};

int main()
{
  Number m, n;
  m.getinput();
  n.getinput();

  cout << "m <= n = " << (m <= n) << endl;
  cout << "m >= n = " << (m >= n) << endl;
  cout << "m != n = " << (m != n) << endl;
  cout << "m == n = " << (m == n) << endl;

  return 0;
}
