#include <stdio.h>

int main()
{
  int limit = 9; // odd number
  for (int i = 0; i < limit; i++)
  {
    for (int j = 0; j < limit; j++)
      printf("%s", (i == limit / 2) || (j == limit / 2) ? "+" : " ");
    printf("\n");
  }

  return 0;
}
