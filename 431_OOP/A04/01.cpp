// Write a program to keep track of number of objects created, number of objects destroyed.

#include <iostream>
using namespace std;

static int created = 0;
static int destroyed = 0;

class Program
{
public:
  Program()
  {
    cout << "Object created: " << (++created) << endl;
  }
  ~Program()
  {
    cout << "Object destroyed: " << (++destroyed) << endl;
  }
};

int main()
{
  Program p, q, r, s;
  return 0;
}
