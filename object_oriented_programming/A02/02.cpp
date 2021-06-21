// Write inline function for cube of a number.
#include <iostream>
using namespace std;

inline int cube(int s)
{
  return s * s * s;
}

int main()
{
  int n;
  cout << "Enter a number: ";
  cin >> n;
  cout << "The cube of " << n << " is: " << cube(n) << "\n";
  return 0;
}
