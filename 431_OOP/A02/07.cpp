// Find the Smallest Marks among 3 classes DCST, DME, DEE.
// (Marks data member in said classes)
#include <iostream>
using namespace std;

class DCST;
class DME;
class DEE;
int smallest(DCST, DME, DEE);

class DCST
{
private:
  int marks;

public:
  void getdata()
  {
    cin >> marks;
  }
  friend int smallest(DCST, DME, DEE);
};

class DME
{
private:
  int marks;

public:
  void getdata()
  {
    cin >> marks;
  }
  friend int smallest(DCST, DME, DEE);
};

class DEE
{
private:
  int marks;

public:
  void getdata()
  {
    cin >> marks;
  }
  friend int smallest(DCST, DME, DEE);
};

int smallest(DCST c, DME m, DEE e)
{
  return c.marks < m.marks ? (c.marks < e.marks ? c.marks : e.marks) : (m.marks < e.marks ? m.marks : e.marks);
}

int main()
{
  DCST c;
  DME m;
  DEE e;
  e.getdata();
  m.getdata();
  e.getdata();

  cout << "Smallest: " << smallest(c, m, e) << endl;
  return 0;
}
