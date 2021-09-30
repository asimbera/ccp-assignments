// 5. Write a program that implements hybrid inheritance. Classes STUDENT and
// FACULTY inherit the class PERSON. FACULTY must be inherited by the
// class PUBLICATIONS

#include <iostream>
using namespace std;

class Person
{
  public:
    Person () {
      cout << "I am Person" << endl;
    }
 };
class Student : public Person
{
  public:
    Student () {
      cout << "I am a Student" << endl;
    }
};
class Faculty : public Person
{
  public:
    Faculty () {
      cout << "I am Faculty Person" << endl;
    }
};

class Publications : public Student, public Faculty
{
  public:
    Publications () {
      cout << "I am from Publications" << endl;
    }
};

int main()
{
  Student s;
  return 0;
}
