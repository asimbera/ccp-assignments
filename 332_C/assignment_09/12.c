#include <stdio.h>

int main()
{
  int rows = 9;
  for (int i = 0; i < rows; i++)
  {
    int limit = i > (rows / 2) ? rows - i - 1 : i;
    for (int j = 0; j <= limit; j++)
      printf("*");
    printf("\n");
  }

  return 0;
}
