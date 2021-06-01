// Find if a number is prime or not.
#include <iostream>
using namespace std;

int main()
{
  int a, i;
  bool is_prime = true;
  cout << "Enter a number: ";
  cin >> a;
  for (i = 2; i < a / 2; i++)
  {
    if (a % i == 0)
    {
      is_prime = false;
      break;
    }
  }
  cout << a
       << (is_prime ? " is " : " is not ")
       << "a prime number." << endl;

  return 0;
}
