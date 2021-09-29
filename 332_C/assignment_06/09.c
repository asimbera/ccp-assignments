#include <stdio.h>

/// Finds length of a string without null terminator
int lenOfStr(char text[])
{
  int i = 0;
  while (text[i] != '\0')
    i++;
  return i - 1;
}

/// Checks wheather the string is palindrome or not
int reverseStr(char val[])
{
  int len_l = lenOfStr(val);
  for (int i = 0; i < len_l; i++)
  {
    if (val[i] != val[len_l - i - 1])
      return 0;
  }
  return 1;
}

int main()
{
  char str[100];
  printf("Enter a string: ");
  fgets(str, sizeof(str), stdin);
  printf("The string %s a palindrome.\n", reverseStr(str) ? "is" : "is not");
  return 0;
}
