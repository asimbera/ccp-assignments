#include <stdio.h>

int main()
{
  for (int i = 1; i <= 5; i++)
  {
    int n = i % 2 == 0 ? 0 : 1;
    for (int j = 0; j < i; j++)
    {
      printf("%d ", n);
      n = n == 0 ? 1 : 0;
    }
    printf("\n");
  }

  return 0;
}
