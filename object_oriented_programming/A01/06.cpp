// Read a value and print to decimal, octal and hexadecimal
#include <iostream>
using namespace std;

int main()
{
  int decimal, i;

  int octal[50], o_len = 0;
  char hexadecimal[50], temp[10];
  int h_len = 0, rem;
  cout << "Input a decimal number: ";
  cin >> decimal;
  i = decimal; //
  while (i != 0)
  {
    octal[o_len++] = i % 8;
    i /= 8;
  }

  i = decimal;
  while (i != 0)
  {
    rem = i % 16;
    switch (rem)
    {
    case 15:
      hexadecimal[h_len++] = 'F';
      break;
    case 14:
      hexadecimal[h_len++] = 'E';
      break;
    case 13:
      hexadecimal[h_len++] = 'D';
      break;
    case 12:
      hexadecimal[h_len++] = 'C';
      break;
    case 11:
      hexadecimal[h_len++] = 'B';
      break;
    case 10:
      hexadecimal[h_len++] = 'A';
      break;
    default:
      sprintf(temp, "%d", rem);
      hexadecimal[h_len++] = temp[0];
      break;
    }
    i /= 16;
  }
  cout << "\nDecimal: " << decimal;
  cout << "\nOctal: ";
  while (o_len != 0)
    cout << octal[--o_len];
  cout << "\nHexadecimal: ";
  while (h_len != 0)
    cout << hexadecimal[--h_len];

  cout << endl;
  return 0;
}
