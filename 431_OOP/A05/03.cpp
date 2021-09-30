//03. Write a program that uses Hierarchical Inheritance to implement class
// EMPLOYEE inherited by two classes CONTRACT and PERMANENT

#include <iostream>
using namespace std;

class Employee
{
  public:
    Employee () {
      cout << "I am an Employee" << endl;
    }
};

class Contract : public Employee
{
  public:
    Contract () {
      cout << "I can be a contract-employee" << endl;
    }
};
class Permanent : public Employee
{
  public:
    Permanent () {
      cout << "I can be a permanent-employee" << endl;
    }
};
int main()
{
  Permanent pr;
  return 0;
}
