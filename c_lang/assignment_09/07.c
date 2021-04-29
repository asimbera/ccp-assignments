#include <stdio.h>

int main()
{
  for (int i = 1; i <= 5; i++)
  {
    for (int j = 0; j < 5; j++)
      printf("%d ", i % 2 == 0 ? 0 : 1);
    printf("\n");
  }

  return 0;
}
