// Convert number in characters (167 - One Six Seven ).
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
  int a, len, i;
  char cpy[10];
  cout << "Enter a number: ";
  cin >> a;
  sprintf(cpy, "%d", a);
  len = strlen(cpy);
  cout << "In characters: ";
  for (i = 0; i < len; i++)
  {
    switch (cpy[i])
    {
    case '1':
      cout << "One ";
      break;
    case '2':
      cout << "Two ";
      break;
    case '3':
      cout << "Three ";
      break;
    case '4':
      cout << "Four ";
      break;
    case '5':
      cout << "Five ";
      break;
    case '6':
      cout << "Six ";
      break;
    case '7':
      cout << "Seven ";
      break;
    case '8':
      cout << "Eight ";
      break;
    case '9':
      cout << "Nine ";
      break;
    case '0':
      cout << "Zero ";
      break;
    }
  }
  cout << endl;

  return 0;
}
