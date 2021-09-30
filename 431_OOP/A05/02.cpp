// 2. Write a program that uses Multilevel Inheritance to implement class PERSONS, EMPLOYEE, MANAGER

#include <iostream>
using namespace std;

class person {
  public:
    person () {
      cout << "I am a Person" << endl;
    }
};

class employee : public person {
  public:
    employee () {
      cout << "I am an Employee" << endl;
    }
};

class manager : public employee {
  public:
    manager () {
      cout << "I am a Manager" << endl;
    }
};

int main () {
  employee emp;
  return 0;
}