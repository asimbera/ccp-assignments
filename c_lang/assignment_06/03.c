#include <stdio.h>

/// Finds length of a string without null terminator
int lenOfStr(char text[])
{
  int i = 0;
  while (text[i] != '\0')
    i++;
  return i - 1;
}

/// Concat two strings into one.
void concatStr(char a[], char b[], char new_str[])
{
  int len_a = lenOfStr(a), len_b = lenOfStr(b);
  for (int i = 0; i <= len_a + len_b; i++)
  {
    if (i < len_a)
      new_str[i] = a[i];
    else
      new_str[i] = b[i - len_a];
  }
}

int main()
{
  char str_a[100], str_b[100], str_c[200];
  printf("Enter first string: ");
  fgets(str_a, sizeof(str_a), stdin);
  printf("Enter second string: ");
  fgets(str_b, sizeof(str_b), stdin);
  concatStr(str_a, str_b, str_c);
  printf("Contatenated string: ");
  puts(str_c);
  return 0;
}
