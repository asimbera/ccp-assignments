#include <stdio.h>

int main()
{
  char str[100];
  int length = 0, i;
  printf("Enter a string: ");
  fgets(str, sizeof(str), stdin);

  for (i = 0; i < sizeof(str); i++)
  {
    if (*(str + i) == '\0' || *(str + i) == '\n')
      break;
    else
      length++;
  }

  printf("Length of the string: %d\n", length);

  return 0;
}
