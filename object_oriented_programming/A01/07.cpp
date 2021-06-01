// Find if the number is a armstrong number.
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int a, len, cpy, i, sum = 0;
  cout << "Enter a number: ";
  cin >> a;
  len = floor(log10(a) + 1);
  cpy = a;
  while (cpy != 0)
  {
    sum += pow((cpy % 10), len);
    cpy /= 10;
  }
  cout << a
       << (a == sum ? " is " : " is not ")
       << "an Armstrorng number." << endl;
  return 0;
}
