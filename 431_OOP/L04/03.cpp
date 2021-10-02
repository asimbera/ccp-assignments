#include <iostream>
using namespace std;

class Complex
{
private:
  int real, imaginary;

public:
  void getdata()
  {
    cin >> real >> imaginary;
  }
  void display()
  {
    cout << real << " + " << imaginary << "i" << endl;
  }
  void operator--(int)
  {
    real--;
    imaginary--;
  }
};

int main()
{
  Complex c;
  c.getdata();
  cout << "c = ";
  c.display();
  c--;
  cout << "after decrement\nc = ";
  c.display();
}
