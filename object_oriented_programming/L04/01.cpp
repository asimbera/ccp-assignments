#include <iostream>
using namespace std;

class Program
{
public:
  Program()
  {
    cout << "Constructor Invoked" << endl;
  }
  ~Program()
  {
    cout << "Destructor Invoked" << endl;
  }
};

int main()
{
  Program p;
  return 0;
}
