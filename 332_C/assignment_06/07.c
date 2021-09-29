#include <stdio.h>

/// Finds length of a string without null terminator
int lenOfStr(char text[])
{
  int i = 0;
  while (text[i] != '\0')
    i++;
  return i - 1;
}

/// Prints total number of words
void printTotalWords(char val[])
{
  int words = 0, len = lenOfStr(val);
  int cur = 0, next = 0;
  for (int i = 0; i < len; i++)
  {
    cur = (val[i] >= 97 && val[i] <= 122) || (val[i] >= 65 && val[i] <= 90);
    next = (val[i + 1] >= 97 && val[i + 1] <= 122) || (val[i + 1] >= 65 && val[i + 1] <= 90);
    if (i == 0 && cur)
      words++;
    if (val[i] == 32 && next)
      words++;
  }
  printf("Number of words: %d.\n", words);
}

int main()
{
  char str[100];
  printf("Enter a string: ");
  fgets(str, sizeof(str), stdin);
  printTotalWords(str);
  return 0;
}
