// Create Time Class with Hour Minute and Second Data Member .
// Perform addition of 2 Times and store in another Class.
#include <iostream>
using namespace std;

class Time
{
private:
  int hours, minutes, seconds;

public:
  void getdata()
  {
    cin >> hours >> minutes >> seconds;
  }
  void display()
  {
    cout << hours << " Hours " << minutes << " Minutues and " << seconds << " Seconds" << endl;
  }

  Time add(Time const &t)
  {
    Time res;
    res.seconds = (seconds + t.seconds);
    res.minutes = minutes + t.minutes + (res.seconds / 60);
    res.seconds %= 60;
    res.hours = hours + t.hours + (res.minutes / 60);
    res.minutes %= 60;
    return res;
  }
};

int main()
{
  Time t1, t2, sum;
  t1.getdata();
  t1.display();

  t2.getdata();
  t2.display();

  sum = t1.add(t2);
  cout << "Sum: ";
  sum.display();

  return 0;
}
