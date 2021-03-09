#include <stdio.h>

int main()
{
  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < 5; j++)
      printf("%d ", (i == j || i == 5 - j - 1) ? 1 : 0);
    printf("\n");
  }

  return 0;
}
