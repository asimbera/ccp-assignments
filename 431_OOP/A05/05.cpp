class Person
{
};
class Student : public Person
{
};
class Faculty : public Person
{
};

class Publications : public Student, public Faculty
{
};

int main()
{
  /* code */
  return 0;
}
