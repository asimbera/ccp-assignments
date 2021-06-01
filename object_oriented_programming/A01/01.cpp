// Find the greatest and smallest of 3 numbers.
#include <iostream>
using namespace std;

int main()
{
  int a, b, c, gt, st;
  cout << "Enter 3 numbers: ";
  cin >> a >> b >> c;
  gt = a > b ? (a > c ? a : c) : (b > c ? b : c);
  st = a < b ? (a < c ? a : c) : (b < c ? b : c);
  cout << "Greatest: " << gt << ", Smallest: " << st << endl;
  return 0;
}
