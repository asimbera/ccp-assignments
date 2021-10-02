// Create a class Distance with foot and inch.
// Getinput from keyboard and Display the data.
#include <iostream>
using namespace std;

class Distance
{
public:
  int foot, inch;

  void getinput()
  {
    cout << "Enter distance: ";
    cin >> foot >> inch;
  }

  void display()
  {
    cout << foot << " foot " << inch << " inch" << endl;
  }
};

int main()
{
  Distance d;

  d.getinput();
  d.display();

  return 0;
}
