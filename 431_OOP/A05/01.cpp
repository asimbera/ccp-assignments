//1. Write a program in which class BATSMAN inheritance class PERSON. Using Single Inheritance

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

class Batsman : public Person
{
public:
  int runs;
  Batsman(string n, int a, int r) : Person(n, a)
  {
    runs = r;
  }
};

int main()
{
  Person p("Asim", 20);
  Batsman b("Sachin", 60, 1110);

  p.display();
  b.display();

  return 0;
}
