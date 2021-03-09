#include <stdio.h>

int main()
{
  int limit = 5;
  int offset = limit - 1;
  for (int i = 0; i < limit; i++)
  {
    for (int j = 0; j < offset; j++)
      printf(" ");
    for (int j = 0; j < (i * 2) + 1; j++)
      printf("*");

    printf("\n");
    offset--;
  }

  return 0;
}
