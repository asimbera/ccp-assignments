// Create Complex Class with Real and Imaginary Data member.
// Display sum of 2 complex numbers.

#include <iostream>
using namespace std;

class Complex
{
private:
  int real, imaginary;

public:
  // Addition
  Complex add(Complex const &obj)
  {
    Complex res;
    res.real = real + obj.real;
    res.imaginary = imaginary + obj.imaginary;
    return res;
  }

  void getdata()
  {
    cin >> real >> imaginary;
  }

  void display()
  {
    cout << real << " + " << imaginary << "i" << endl;
  }
};

int main()
{
  Complex c1, c2, sum;

  c1.getdata();
  cout << "c1 = ";
  c1.display();
  c2.getdata();
  cout << "c2 = ";
  c2.display();

  sum = c1.add(c2);
  cout << "sum = ";
  sum.display();

  return 0;
}
