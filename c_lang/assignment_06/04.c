#include <stdio.h>

/// Finds length of a string without null terminator
int lenOfStr(char text[])
{
  int i = 0;
  while (text[i] != '\0')
    i++;
  return i - 1;
}

/// Compare two strings.
/// Clones behavior of strcmp
int compStr(char a[], char b[])
{
  int len_a = lenOfStr(a), len_b = lenOfStr(b);
  if (len_a != len_b)
    return len_a > len_b ? 1 : -1;
  int i = 0;
  while (i <= len_a)
  {
    if (a[i] != b[i])
      return a[i] - b[i];
    i++;
  }
  return 0;
}

int main()
{
  char str_a[100], str_b[100];
  int r;
  printf("Enter first string: ");
  fgets(str_a, sizeof(str_a), stdin);
  printf("Enter second string: ");
  fgets(str_b, sizeof(str_b), stdin);
  r = compStr(str_a, str_b);
  printf("Both strings are %s. Output: %d\n", !r ? "Same" : "Different", r);
  return 0;
}
