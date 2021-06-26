// Create a class complex with real and imaginary part (integer). Implement
// default, parameterized and copy constructor to initialize the objects of
// complex class and display them.

#include <iostream>
using namespace std;

class Complex
{
private:
  int real, imaginary;

public:
  Complex()
  {
    real = 5;
    imaginary = 10;
  }
  // Parmetarized
  Complex(int r, int i)
  {
    real = r;
    imaginary = i;
  }
  // Copy
  Complex(Complex const &obj)
  {
    real = obj.real;
    imaginary = obj.imaginary;
  }

  void display()
  {
    cout << real << " + " << imaginary << "i" << endl;
  }
};

int main()
{
  Complex c1, c2(1, 3);
  Complex copy = Complex(5, 8);

  cout << "c1 = ";
  c1.display();
  cout << "c2 = ";
  c2.display();
  cout << "c1 + c2 = ";
  copy.display();

  return 0;
}
