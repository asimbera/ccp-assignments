#include <stdio.h>

/// Finds length of a string without null terminator
int lenOfStr(char text[])
{
  int i = 0;
  while (text[i] != '\0')
    i++;
  return i - 1;
}

/// Finds first occur position of a character
int findChar(char text[], char q)
{
  int len = lenOfStr(text), pos = -1;
  for (int i = 0; i < len; i++)
  {
    if (text[i] == q)
    {
      pos = i;
      break;
    }
  }
  return pos;
}

int main()
{
  char str[100], query;
  int pos;
  printf("Enter a string: ");
  fgets(str, sizeof(str), stdin);
  printf("Enter char to query: ");
  scanf(" %c", &query);
  pos = findChar(str, query);
  if (pos < 0)
    printf("Character not found.\n");
  else
    printf("Character found as position (Starting at 0): %d.\n", pos);
  return 0;
}
