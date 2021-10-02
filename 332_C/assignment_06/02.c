#include <stdio.h>

/// Finds length of a string without null terminator
int lenOfStr(char text[])
{
  int i = 0;
  while (text[i] != '\0')
    i++;
  return i - 1;
}

/**
 * Copy one string to another.
 * @param a new string to assign value to
 * @param b old string to assign value from
*/
void copyStr(char a[], char b[])
{
  int len = lenOfStr(b);
  for (int i = 0; i <= len; i++)
    a[i] = b[i];
}

int main()
{
  char str[100], new_str[100];
  printf("Enter a string: ");
  fgets(str, sizeof(str), stdin);
  copyStr(new_str, str);
  printf("The copied string is: %s\n", new_str);
  return 0;
}
