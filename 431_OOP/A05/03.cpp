#include <iostream>
using namespace std;

class Employee
{
private:
  string name;
  string company;
};

class Contract : public Employee
{
};
class Permanent : public Employee
{
};
int main()
{

  return 0;
}
