#include <stdio.h>

/// Finds length of a string without null terminator
int lenOfStr(char text[])
{
  int i = 0;
  while (text[i] != '\0')
    i++;
  return i - 1;
}

int main()
{
  char str[100];
  printf("Enter a string: ");
  fgets(str, sizeof(str), stdin);
  printf("Length of the string is: %d\n", lenOfStr(str));
  return 0;
}
