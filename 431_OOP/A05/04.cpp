//4. Write a program that uses Multiple inheritance to implement class SCIENTIST
// from two base class STUDENT and EMPLOYEE

#include<iostream>
using namespace std;

class Student
{
  public:
    Student () {
      cout << "A student can be a scientist" << endl;
    }
};
class Employee
{
  public:
    Employee () {
      cout << "A employee can be a scientist" << endl;
    }
};

class Scientist : public Student, public Employee
{
  public: 
    Scientist () {
      cout << "I am a Scientist" << endl;
    }
};

int main()
{
  Scientist sci; 
  return 0;
}
