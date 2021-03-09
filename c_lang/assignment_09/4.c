#include <stdio.h>

int main()
{
  int last = 1;
  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j <= i; j++)
    {
      printf("%d ", last ? 1 : 0);
      if (last)
        last = 0;
      else
        last = 1;
    }
    printf("\n");
  }

  return 0;
}
