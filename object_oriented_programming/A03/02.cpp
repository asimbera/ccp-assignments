// Create a class complex as above. Now add, subtract and multiply on two
// objects of complex type
// i) using objects as function argument,
// ii) returning object from function.

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
  // Substraction
  Complex subtract(Complex const &obj)
  {
    Complex res;
    res.real = real - obj.real;
    res.imaginary = imaginary - obj.imaginary;
    return res;
  }
  // Multiplication
  Complex multiply(Complex const &obj)
  {
    Complex res;
    res.real = (real * obj.real) - (imaginary * obj.imaginary);
    res.imaginary = (real * obj.imaginary) + (imaginary * obj.real);
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
  Complex c1, c2, sum, diff, product;

  c1.getdata();
  cout << "c1 = ";
  c1.display();
  c2.getdata();
  cout << "c2 = ";
  c2.display();

  cout << "sum = ";
  sum = c1.add(c2);
  sum.display();
  cout << "diff = ";
  diff = c1.subtract(c2);
  diff.display();
  cout << "product = ";
  product = c1.multiply(c2);
  product.display();

  return 0;
}
