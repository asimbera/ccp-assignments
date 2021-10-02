#include <stdio.h>

/// Finds length of a string without null terminator
int lenOfStr(char text[])
{
  int i = 0;
  while (text[i] != '\0')
    i++;
  return i - 1;
}

/// Reverse a string
void reverseStr(char val[], char rev[])
{
  int len_l = lenOfStr(val);
  for (int i = 0; i < len_l; i++)
    rev[len_l - i - 1] = val[i];
  // add null terminator at the end
  rev[len_l] = '\0';
}

int main()
{
  char str[100], str_r[100];
  printf("Enter a string: ");
  fgets(str, sizeof(str), stdin);
  reverseStr(str, str_r);
  printf("Reversed: %s\n", str_r);
  return 0;
}
