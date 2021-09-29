// Overload arithmetical binary operators (+, -, *) for complex numbers.

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
  // Addition
  Complex operator+(Complex const &obj)
  {
    Complex res;
    res.real = real + obj.real;
    res.imaginary = imaginary + obj.imaginary;
    return res;
  }
  // Substraction
  Complex operator-(Complex const &obj)
  {
    Complex res;
    res.real = real - obj.real;
    res.imaginary = imaginary - obj.imaginary;
    return res;
  }
  // Multiplication
  Complex operator*(Complex const &obj)
  {
    Complex res;
    res.real = (real * obj.real) - (imaginary * obj.imaginary);
    res.imaginary = (real * obj.imaginary) + (imaginary * obj.real);
    return res;
  }

  void display()
  {
    cout << real << " + " << imaginary << "i" << endl;
  }
};

int main()
{
  Complex a, b, sum, diff, mut;
  a.getdata();
  cout << "a = ";
  a.display();
  b.getdata();
  cout << "b = ";
  b.display();

  sum = a + b;
  cout << "sum = ";
  sum.display();
  diff = a - b;
  cout << "diff = ";
  diff.display();
  mut = a * b;
  cout << "mut = ";
  mut.display();

  return 0;
}
