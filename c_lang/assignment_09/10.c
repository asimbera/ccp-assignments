#include <stdio.h>

int main()
{
  for (int i = 0; i < 7; i++)
  {
    for (int j = 0; j < 7; j++)
      printf("%s", (i == j || i == 7 - j - 1) ? "*" : " ");
    printf("\n");
  }

  return 0;
}
