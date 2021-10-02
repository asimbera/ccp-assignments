#include <stdio.h>

/// Finds length of a string without null terminator
int lenOfStr(char text[])
{
  int i = 0;
  while (text[i] != '\0')
    i++;
  return i - 1;
}

/// Convert lowercase characters to uppercase
void upperCaseStr(char lower[], char upper[])
{
  int len_l = lenOfStr(lower);
  for (int i = 0; i <= len_l; i++)
    upper[i] = lower[i] >= 97 && lower[i] <= 122 ? lower[i] - 32 : lower[i];
}

int main()
{
  char str[100], str_u[100];
  printf("Enter a lowercase string: ");
  fgets(str, sizeof(str), stdin);
  upperCaseStr(str, str_u);
  printf("Uppercase: %s\n", str_u);
  return 0;
}
