// Create a student class with data members as roll, name and marks with
// respective data types as int, chars and float. Now create n objects of
// student type and insert data into those objects. Display the student
// information who got the highest mark.

#include <iostream>
using namespace std;

class student
{
private:
  int roll;
  char name[25];

public:
  float marks;
  void getdata()
  {
    cin >> roll >> name >> marks;
  }
  void display()
  {
    cout << "Roll: " << roll << "\t\tName: " << name << "\t\tMarks: " << marks << endl;
  }
};

int main()
{
  int n, i, m = INT8_MIN, idx;
  student s[100];
  cout << "Number of students: ";
  cin >> n;

  for (i = 0; i < n; i++)
  {
    s[i].getdata();
    if (s[i].marks > m)
    {
      m = s[i].marks;
      idx = i;
    }
  }

  cout << "Student got the highest mark: " << endl;
  s[idx].display();

  return 0;
}
