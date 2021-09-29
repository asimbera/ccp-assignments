#include <stdio.h>

/// Finds length of a string without null terminator
int lenOfStr(char text[])
{
  int i = 0;
  while (text[i] != '\0')
    i++;
  return i - 1;
}

/// Prints total number of alphabets, digits and spcial characters
void printCount(char val[])
{
  int alpha = 0, digits = 0, spc = 0, len = lenOfStr(val);
  for (int i = 0; i < len; i++)
  {
    if ((val[i] >= 97 && val[i] <= 122) || (val[i] >= 65 && val[i] <= 90))
      alpha++;
    else if (val[i] >= 48 && val[i] <= 57)
      digits++;
    else
      spc++;
  }
  printf("Result:\nAlphabets: %d, Digits: %d, Special: %d\n", alpha, digits, spc);
}

int main()
{
  char str[100];
  printf("Enter a string: ");
  fgets(str, sizeof(str), stdin);
  printCount(str);
  return 0;
}
