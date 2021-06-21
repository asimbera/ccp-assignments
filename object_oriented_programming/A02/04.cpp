// Create Employee(Emp_Name, Id) class, create Manager Object 2(two), Scientist Object 1(one) and Labour Object 15(Fifteen).
// Write Member function Getdata and PrintData.
#include <iostream>
using namespace std;

class Employee
{
private:
  string emp_name;
  int id;

public:
  void getdata()
  {
    cin >> id >> emp_name;
  }
  void printdata()
  {
    cout << id << "\t\t" << emp_name << endl;
  }
};

int main()
{
  Employee manager[2], scientist, labour[15];
  for (int i = 0; i < 2; i++)
    manager[i].getdata();
  scientist.getdata();
  for (int i = 0; i < 15; i++)
    labour[i].getdata();

  cout << "ID\t\tName" << endl;
  cout << "----- Managers -----" << endl;
  for (int i = 0; i < 2; i++)
    manager[i].printdata();
  cout << "----- Scientist -----" << endl;
  scientist.printdata();
  cout << "------ Labours -----" << endl;
  for (int i = 0; i < 15; i++)
    labour[i].printdata();

  return 0;
}
