// Print Fibonacci series.
#include <iostream>
using namespace std;

int main()
{
  int prev = 1, next = 1, lim;
  cout << "Upper limit: ";
  cin >> lim;
  while (next < lim)
  {
    cout << next << " ";
    next = prev + next;
    prev = next - prev;
  }
  cout << endl;

  return 0;
}
