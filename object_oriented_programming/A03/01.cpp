// Create a class Distance with foot and inch. Now add and subtract between
// two objects of Distance type
// i) using objects as function argument,
// ii) returning object from function

#include <iostream>
using namespace std;

class Distance
{
private:
  int foot, inch;

public:
  Distance add(Distance &obj)
  {
    Distance res;
    res.inch = inch + obj.inch;
    res.foot = foot + obj.foot + (res.inch / 12);
    res.inch %= 12;
    return res;
  }
  Distance subtract(Distance &obj)
  {
    Distance res;
    int t = ((foot * 12) + inch) - ((obj.foot * 12) + inch);
    res.foot = t / 12;
    res.inch = t % 12;
    return res;
  }

  void getdata()
  {
    cin >> foot >> inch;
  }
  void display()
  {
    cout << foot << " Foot " << inch << " Inch" << endl;
  }
};

int main()
{
  Distance d1, d2, sum, diff;
  d1.getdata();
  d1.display();
  d2.getdata();
  d2.display();

  cout << "d1 + d2 = ";
  sum = d1.add(d2);
  sum.display();
  cout << "d1 - d2 = ";
  diff = d1.subtract(d2);
  diff.display();

  return 0;
}
