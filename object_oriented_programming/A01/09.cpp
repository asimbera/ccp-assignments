// Swap 2 number without using a 3rd variable.
#include <iostream>
using namespace std;

int main()
{
  int a, b;
  cout << "Enter 2 numbers: ";
  cin >> a >> b;
  cout << "a = " << a << ", b = " << b << endl;
  a += b;
  b = a - b;
  a -= b;
  cout << "After swaping:\n"
       << "a = " << a << ", b = " << b << endl;

  return 0;
}
