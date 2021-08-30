#include <iostream>
using namespace std;

class Person
{
public:
  string name;
  int age;
  Person(string n, int a)
  {
    name = n;
    age = a;
  }
  void display() { cout << "name=" << name << ", age=" << age << endl; }
};

class Employee : public Person
{
public:
  string company;
  Employee(string n, int a, string c) : Person(n, a)
  {
    company = c;
  }
};

class Manager : public Employee
{
};

int main()
{

  return 0;
}
