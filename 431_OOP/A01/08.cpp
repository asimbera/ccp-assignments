// Check a number Armstrong number or not.
#include <iostream>
using namespace std;

int main()
{
  int num, rev = 0, it;
  cout << "Enter a number: ";
  cin >> num;
  it = num;
  while (it != 0)
  {
    rev = (rev * 10) + (it % 10);
    it /= 10;
  }
  cout << num << " is " << (num, num == rev ? "a palindrome" : "not a palindrome") << endl;
  return 0;
}
